/*
* Copyright (c) 2017-2023 Nils Kohl, Daniel Bauer, Fabian Böhm.
*
* This file is part of HyTeG
* (see https://i10git.cs.fau.de/hyteg/hyteg).
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

/*
* The entire file was generated with the HyTeG form generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/























#include "../P2ElementwiseDivKGrad.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDivKGrad::apply_macro_2D( double * RESTRICT  _data_dstEdge, double * RESTRICT  _data_dstVertex, double * RESTRICT  _data_kEdge, double * RESTRICT  _data_kVertex, double * RESTRICT  _data_srcEdge, double * RESTRICT  _data_srcVertex, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float, int64_t micro_edges_per_macro_face ) const
{
    {
       const double _data_q_w [] = {0.16666666666666674, 0.16666666666666674, 0.16666666666666674};
   
       const double _data_q_p_0 [] = {0.16666666666666674, 0.66666666666666674, 0.16666666666666663};
   
       const double _data_q_p_1 [] = {0.16666666666666663, 0.16666666666666663, 0.66666666666666685};
   
       const double p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const double p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const double p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const double p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const double p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const double jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const double jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const double jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const double jac_affine_inv_0_0 = jac_affine_1_1*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double jac_affine_inv_0_1 = -jac_affine_0_1*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double jac_affine_inv_1_0 = -jac_affine_1_0*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double jac_affine_inv_1_1 = jac_affine_0_0*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double abs_det_jac_affine = fabs(jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double Dummy_4018 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const double Dummy_4019 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const double Dummy_4020 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_4021 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_4022 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_4023 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_4024 = -Dummy_4018 + Dummy_4020;
       const double Dummy_4025 = -Dummy_4018 + Dummy_4022;
       const double Dummy_4026 = -Dummy_4019 + Dummy_4021;
       const double Dummy_4027 = -Dummy_4019 + Dummy_4023;
       const double Dummy_4028 = Dummy_4027*1.0 / (Dummy_4024*Dummy_4027 - Dummy_4025*Dummy_4026);
       const double Dummy_4029 = -Dummy_4025*1.0 / (Dummy_4024*Dummy_4027 - Dummy_4025*Dummy_4026);
       const double Dummy_4030 = -Dummy_4026*1.0 / (Dummy_4024*Dummy_4027 - Dummy_4025*Dummy_4026);
       const double Dummy_4031 = Dummy_4024*1.0 / (Dummy_4024*Dummy_4027 - Dummy_4025*Dummy_4026);
       const double Dummy_4032 = fabs(Dummy_4024*Dummy_4027 - Dummy_4025*Dummy_4026);
       {
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const double src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const double src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const double src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const double src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const double src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const double src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const double k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const double k_dof_3 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const double k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const double k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const double k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const double k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             double q_acc_0_0 = 0.0;
             double q_acc_0_1 = 0.0;
             double q_acc_0_2 = 0.0;
             double q_acc_0_3 = 0.0;
             double q_acc_0_4 = 0.0;
             double q_acc_0_5 = 0.0;
             double q_acc_1_1 = 0.0;
             double q_acc_1_2 = 0.0;
             double q_acc_1_3 = 0.0;
             double q_acc_1_4 = 0.0;
             double q_acc_1_5 = 0.0;
             double q_acc_2_2 = 0.0;
             double q_acc_2_3 = 0.0;
             double q_acc_2_4 = 0.0;
             double q_acc_2_5 = 0.0;
             double q_acc_3_3 = 0.0;
             double q_acc_3_4 = 0.0;
             double q_acc_3_5 = 0.0;
             double q_acc_4_4 = 0.0;
             double q_acc_4_5 = 0.0;
             double q_acc_5_5 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const double tmp_q_0 = 4.0*_data_q_p_0[q];
                const double tmp_q_1 = 4.0*_data_q_p_1[q];
                const double tmp_q_2 = tmp_q_0 + tmp_q_1 - 3.0;
                const double tmp_q_3 = jac_affine_inv_0_0*tmp_q_2;
                const double tmp_q_4 = jac_affine_inv_1_0*tmp_q_2;
                const double tmp_q_5 = tmp_q_3 + tmp_q_4;
                const double tmp_q_6 = tmp_q_0*_data_q_p_1[q];
                const double tmp_q_7 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const double tmp_q_8 = tmp_q_7*2.0;
                const double tmp_q_9 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const double tmp_q_10 = tmp_q_9*2.0;
                const double tmp_q_11 = k_dof_0*(tmp_q_10 + tmp_q_6 + tmp_q_8 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_q_8 - _data_q_p_0[q]) + k_dof_2*(tmp_q_10 - _data_q_p_1[q]) + k_dof_3*tmp_q_6 + k_dof_4*(tmp_q_1 - tmp_q_6 + tmp_q_9*-4.0) + k_dof_5*(tmp_q_0 - tmp_q_6 + tmp_q_7*-4.0);
                const double tmp_q_12 = jac_affine_inv_0_1*tmp_q_2;
                const double tmp_q_13 = jac_affine_inv_1_1*tmp_q_2;
                const double tmp_q_14 = tmp_q_12 + tmp_q_13;
                const double tmp_q_15 = abs_det_jac_affine*_data_q_w[q];
                const double tmp_q_16 = tmp_q_0 - 1.0;
                const double tmp_q_17 = jac_affine_inv_0_0*tmp_q_16;
                const double tmp_q_18 = tmp_q_11*tmp_q_5;
                const double tmp_q_19 = jac_affine_inv_0_1*tmp_q_16;
                const double tmp_q_20 = tmp_q_11*tmp_q_14;
                const double tmp_q_21 = tmp_q_1 - 1.0;
                const double tmp_q_22 = jac_affine_inv_1_0*tmp_q_21;
                const double tmp_q_23 = jac_affine_inv_1_1*tmp_q_21;
                const double tmp_q_24 = jac_affine_inv_0_0*tmp_q_1;
                const double tmp_q_25 = tmp_q_11*tmp_q_24;
                const double tmp_q_26 = jac_affine_inv_1_0*tmp_q_0;
                const double tmp_q_27 = tmp_q_11*tmp_q_26;
                const double tmp_q_28 = tmp_q_25 + tmp_q_27;
                const double tmp_q_29 = jac_affine_inv_0_1*tmp_q_1;
                const double tmp_q_30 = tmp_q_11*tmp_q_29;
                const double tmp_q_31 = jac_affine_inv_1_1*tmp_q_0;
                const double tmp_q_32 = tmp_q_11*tmp_q_31;
                const double tmp_q_33 = tmp_q_30 + tmp_q_32;
                const double tmp_q_34 = -tmp_q_0 - 8.0*_data_q_p_1[q] + 4.0;
                const double tmp_q_35 = jac_affine_inv_1_0*tmp_q_11*tmp_q_34 - tmp_q_25;
                const double tmp_q_36 = jac_affine_inv_1_1*tmp_q_11*tmp_q_34 - tmp_q_30;
                const double tmp_q_37 = -tmp_q_1 - 8.0*_data_q_p_0[q] + 4.0;
                const double tmp_q_38 = jac_affine_inv_0_0*tmp_q_37;
                const double tmp_q_39 = tmp_q_11*tmp_q_38 - tmp_q_27;
                const double tmp_q_40 = jac_affine_inv_0_1*tmp_q_37;
                const double tmp_q_41 = tmp_q_11*tmp_q_40 - tmp_q_32;
                const double tmp_q_42 = tmp_q_11*(tmp_q_16*tmp_q_16);
                const double tmp_q_43 = tmp_q_11*(tmp_q_21*tmp_q_21);
                const double tmp_q_44 = tmp_q_24 + tmp_q_26;
                const double tmp_q_45 = tmp_q_29 + tmp_q_31;
                const double tmp_q_46 = jac_affine_inv_1_0*tmp_q_34 - tmp_q_24;
                const double tmp_q_47 = jac_affine_inv_1_1*tmp_q_34 - tmp_q_29;
                const double res_tmp_0_0 = tmp_q_15*(tmp_q_14*(tmp_q_11*tmp_q_12 + tmp_q_11*tmp_q_13) + tmp_q_5*(tmp_q_11*tmp_q_3 + tmp_q_11*tmp_q_4));
                const double res_tmp_0_1 = tmp_q_15*(tmp_q_17*tmp_q_18 + tmp_q_19*tmp_q_20);
                const double res_tmp_0_2 = tmp_q_15*(tmp_q_18*tmp_q_22 + tmp_q_20*tmp_q_23);
                const double res_tmp_0_3 = tmp_q_15*(tmp_q_14*tmp_q_33 + tmp_q_28*tmp_q_5);
                const double res_tmp_0_4 = tmp_q_15*(tmp_q_14*tmp_q_36 + tmp_q_35*tmp_q_5);
                const double res_tmp_0_5 = tmp_q_15*(tmp_q_14*tmp_q_41 + tmp_q_39*tmp_q_5);
                const double res_tmp_1_1 = tmp_q_15*((jac_affine_inv_0_0*jac_affine_inv_0_0)*tmp_q_42 + (jac_affine_inv_0_1*jac_affine_inv_0_1)*tmp_q_42);
                const double res_tmp_1_2 = tmp_q_15*(tmp_q_11*tmp_q_17*tmp_q_22 + tmp_q_11*tmp_q_19*tmp_q_23);
                const double res_tmp_1_3 = tmp_q_15*(tmp_q_17*tmp_q_28 + tmp_q_19*tmp_q_33);
                const double res_tmp_1_4 = tmp_q_15*(tmp_q_17*tmp_q_35 + tmp_q_19*tmp_q_36);
                const double res_tmp_1_5 = tmp_q_15*(tmp_q_17*tmp_q_39 + tmp_q_19*tmp_q_41);
                const double res_tmp_2_2 = tmp_q_15*((jac_affine_inv_1_0*jac_affine_inv_1_0)*tmp_q_43 + (jac_affine_inv_1_1*jac_affine_inv_1_1)*tmp_q_43);
                const double res_tmp_2_3 = tmp_q_15*(tmp_q_22*tmp_q_28 + tmp_q_23*tmp_q_33);
                const double res_tmp_2_4 = tmp_q_15*(tmp_q_22*tmp_q_35 + tmp_q_23*tmp_q_36);
                const double res_tmp_2_5 = tmp_q_15*(tmp_q_22*tmp_q_39 + tmp_q_23*tmp_q_41);
                const double res_tmp_3_3 = tmp_q_15*(tmp_q_28*tmp_q_44 + tmp_q_33*tmp_q_45);
                const double res_tmp_3_4 = tmp_q_15*(tmp_q_35*tmp_q_44 + tmp_q_36*tmp_q_45);
                const double res_tmp_3_5 = tmp_q_15*(tmp_q_39*tmp_q_44 + tmp_q_41*tmp_q_45);
                const double res_tmp_4_4 = tmp_q_15*(tmp_q_35*tmp_q_46 + tmp_q_36*tmp_q_47);
                const double res_tmp_4_5 = tmp_q_15*(tmp_q_39*tmp_q_46 + tmp_q_41*tmp_q_47);
                const double res_tmp_5_5 = tmp_q_15*(tmp_q_39*(-tmp_q_26 + tmp_q_38) + tmp_q_41*(-tmp_q_31 + tmp_q_40));
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + res_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + res_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + res_tmp_0_5;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + res_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + res_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + res_tmp_1_5;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + res_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + res_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + res_tmp_2_5;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + res_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + res_tmp_3_5;
                q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + res_tmp_4_5;
                q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
             }
             double q_acc_1_0 = q_acc_0_1;
             double q_acc_2_0 = q_acc_0_2;
             double q_acc_2_1 = q_acc_1_2;
             double q_acc_3_0 = q_acc_0_3;
             double q_acc_3_1 = q_acc_1_3;
             double q_acc_3_2 = q_acc_2_3;
             double q_acc_4_0 = q_acc_0_4;
             double q_acc_4_1 = q_acc_1_4;
             double q_acc_4_2 = q_acc_2_4;
             double q_acc_4_3 = q_acc_3_4;
             double q_acc_5_0 = q_acc_0_5;
             double q_acc_5_1 = q_acc_1_5;
             double q_acc_5_2 = q_acc_2_5;
             double q_acc_5_3 = q_acc_3_5;
             double q_acc_5_4 = q_acc_4_5;
             const double elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
             const double elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
             const double elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
             const double elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
             const double elMatVec_4 = q_acc_4_0*src_dof_0 + q_acc_4_1*src_dof_1 + q_acc_4_2*src_dof_2 + q_acc_4_3*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
             const double elMatVec_5 = q_acc_5_0*src_dof_0 + q_acc_5_1*src_dof_1 + q_acc_5_2*src_dof_2 + q_acc_5_3*src_dof_3 + q_acc_5_4*src_dof_4 + q_acc_5_5*src_dof_5;
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
          }
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const double src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const double src_dof_1 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const double src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const double src_dof_3 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const double src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const double src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const double k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const double k_dof_3 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const double k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const double k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const double k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const double k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))];
             double q_acc_0_0 = 0.0;
             double q_acc_0_1 = 0.0;
             double q_acc_0_2 = 0.0;
             double q_acc_0_3 = 0.0;
             double q_acc_0_4 = 0.0;
             double q_acc_0_5 = 0.0;
             double q_acc_1_1 = 0.0;
             double q_acc_1_2 = 0.0;
             double q_acc_1_3 = 0.0;
             double q_acc_1_4 = 0.0;
             double q_acc_1_5 = 0.0;
             double q_acc_2_2 = 0.0;
             double q_acc_2_3 = 0.0;
             double q_acc_2_4 = 0.0;
             double q_acc_2_5 = 0.0;
             double q_acc_3_3 = 0.0;
             double q_acc_3_4 = 0.0;
             double q_acc_3_5 = 0.0;
             double q_acc_4_4 = 0.0;
             double q_acc_4_5 = 0.0;
             double q_acc_5_5 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const double tmp_q_0 = 4.0*_data_q_p_0[q];
                const double tmp_q_1 = 4.0*_data_q_p_1[q];
                const double tmp_q_2 = tmp_q_0 + tmp_q_1 - 3.0;
                const double tmp_q_3 = Dummy_4028*tmp_q_2;
                const double tmp_q_4 = Dummy_4030*tmp_q_2;
                const double tmp_q_5 = tmp_q_3 + tmp_q_4;
                const double tmp_q_6 = tmp_q_0*_data_q_p_1[q];
                const double tmp_q_7 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const double tmp_q_8 = tmp_q_7*2.0;
                const double tmp_q_9 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const double tmp_q_10 = tmp_q_9*2.0;
                const double tmp_q_11 = k_dof_0*(tmp_q_10 + tmp_q_6 + tmp_q_8 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_q_8 - _data_q_p_0[q]) + k_dof_2*(tmp_q_10 - _data_q_p_1[q]) + k_dof_3*tmp_q_6 + k_dof_4*(tmp_q_1 - tmp_q_6 + tmp_q_9*-4.0) + k_dof_5*(tmp_q_0 - tmp_q_6 + tmp_q_7*-4.0);
                const double tmp_q_12 = Dummy_4029*tmp_q_2;
                const double tmp_q_13 = Dummy_4031*tmp_q_2;
                const double tmp_q_14 = tmp_q_12 + tmp_q_13;
                const double tmp_q_15 = Dummy_4032*_data_q_w[q];
                const double tmp_q_16 = tmp_q_0 - 1.0;
                const double tmp_q_17 = Dummy_4028*tmp_q_16;
                const double tmp_q_18 = tmp_q_11*tmp_q_5;
                const double tmp_q_19 = Dummy_4029*tmp_q_16;
                const double tmp_q_20 = tmp_q_11*tmp_q_14;
                const double tmp_q_21 = tmp_q_1 - 1.0;
                const double tmp_q_22 = Dummy_4030*tmp_q_21;
                const double tmp_q_23 = Dummy_4031*tmp_q_21;
                const double tmp_q_24 = Dummy_4028*tmp_q_1;
                const double tmp_q_25 = tmp_q_11*tmp_q_24;
                const double tmp_q_26 = Dummy_4030*tmp_q_0;
                const double tmp_q_27 = tmp_q_11*tmp_q_26;
                const double tmp_q_28 = tmp_q_25 + tmp_q_27;
                const double tmp_q_29 = Dummy_4029*tmp_q_1;
                const double tmp_q_30 = tmp_q_11*tmp_q_29;
                const double tmp_q_31 = Dummy_4031*tmp_q_0;
                const double tmp_q_32 = tmp_q_11*tmp_q_31;
                const double tmp_q_33 = tmp_q_30 + tmp_q_32;
                const double tmp_q_34 = -tmp_q_0 - 8.0*_data_q_p_1[q] + 4.0;
                const double tmp_q_35 = Dummy_4030*tmp_q_11*tmp_q_34 - tmp_q_25;
                const double tmp_q_36 = Dummy_4031*tmp_q_11*tmp_q_34 - tmp_q_30;
                const double tmp_q_37 = -tmp_q_1 - 8.0*_data_q_p_0[q] + 4.0;
                const double tmp_q_38 = Dummy_4028*tmp_q_37;
                const double tmp_q_39 = tmp_q_11*tmp_q_38 - tmp_q_27;
                const double tmp_q_40 = Dummy_4029*tmp_q_37;
                const double tmp_q_41 = tmp_q_11*tmp_q_40 - tmp_q_32;
                const double tmp_q_42 = tmp_q_11*(tmp_q_16*tmp_q_16);
                const double tmp_q_43 = tmp_q_11*(tmp_q_21*tmp_q_21);
                const double tmp_q_44 = tmp_q_24 + tmp_q_26;
                const double tmp_q_45 = tmp_q_29 + tmp_q_31;
                const double tmp_q_46 = Dummy_4030*tmp_q_34 - tmp_q_24;
                const double tmp_q_47 = Dummy_4031*tmp_q_34 - tmp_q_29;
                const double res_tmp_0_0 = tmp_q_15*(tmp_q_14*(tmp_q_11*tmp_q_12 + tmp_q_11*tmp_q_13) + tmp_q_5*(tmp_q_11*tmp_q_3 + tmp_q_11*tmp_q_4));
                const double res_tmp_0_1 = tmp_q_15*(tmp_q_17*tmp_q_18 + tmp_q_19*tmp_q_20);
                const double res_tmp_0_2 = tmp_q_15*(tmp_q_18*tmp_q_22 + tmp_q_20*tmp_q_23);
                const double res_tmp_0_3 = tmp_q_15*(tmp_q_14*tmp_q_33 + tmp_q_28*tmp_q_5);
                const double res_tmp_0_4 = tmp_q_15*(tmp_q_14*tmp_q_36 + tmp_q_35*tmp_q_5);
                const double res_tmp_0_5 = tmp_q_15*(tmp_q_14*tmp_q_41 + tmp_q_39*tmp_q_5);
                const double res_tmp_1_1 = tmp_q_15*((Dummy_4028*Dummy_4028)*tmp_q_42 + (Dummy_4029*Dummy_4029)*tmp_q_42);
                const double res_tmp_1_2 = tmp_q_15*(tmp_q_11*tmp_q_17*tmp_q_22 + tmp_q_11*tmp_q_19*tmp_q_23);
                const double res_tmp_1_3 = tmp_q_15*(tmp_q_17*tmp_q_28 + tmp_q_19*tmp_q_33);
                const double res_tmp_1_4 = tmp_q_15*(tmp_q_17*tmp_q_35 + tmp_q_19*tmp_q_36);
                const double res_tmp_1_5 = tmp_q_15*(tmp_q_17*tmp_q_39 + tmp_q_19*tmp_q_41);
                const double res_tmp_2_2 = tmp_q_15*((Dummy_4030*Dummy_4030)*tmp_q_43 + (Dummy_4031*Dummy_4031)*tmp_q_43);
                const double res_tmp_2_3 = tmp_q_15*(tmp_q_22*tmp_q_28 + tmp_q_23*tmp_q_33);
                const double res_tmp_2_4 = tmp_q_15*(tmp_q_22*tmp_q_35 + tmp_q_23*tmp_q_36);
                const double res_tmp_2_5 = tmp_q_15*(tmp_q_22*tmp_q_39 + tmp_q_23*tmp_q_41);
                const double res_tmp_3_3 = tmp_q_15*(tmp_q_28*tmp_q_44 + tmp_q_33*tmp_q_45);
                const double res_tmp_3_4 = tmp_q_15*(tmp_q_35*tmp_q_44 + tmp_q_36*tmp_q_45);
                const double res_tmp_3_5 = tmp_q_15*(tmp_q_39*tmp_q_44 + tmp_q_41*tmp_q_45);
                const double res_tmp_4_4 = tmp_q_15*(tmp_q_35*tmp_q_46 + tmp_q_36*tmp_q_47);
                const double res_tmp_4_5 = tmp_q_15*(tmp_q_39*tmp_q_46 + tmp_q_41*tmp_q_47);
                const double res_tmp_5_5 = tmp_q_15*(tmp_q_39*(-tmp_q_26 + tmp_q_38) + tmp_q_41*(-tmp_q_31 + tmp_q_40));
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + res_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + res_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + res_tmp_0_5;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + res_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + res_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + res_tmp_1_5;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + res_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + res_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + res_tmp_2_5;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + res_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + res_tmp_3_5;
                q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + res_tmp_4_5;
                q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
             }
             double q_acc_1_0 = q_acc_0_1;
             double q_acc_2_0 = q_acc_0_2;
             double q_acc_2_1 = q_acc_1_2;
             double q_acc_3_0 = q_acc_0_3;
             double q_acc_3_1 = q_acc_1_3;
             double q_acc_3_2 = q_acc_2_3;
             double q_acc_4_0 = q_acc_0_4;
             double q_acc_4_1 = q_acc_1_4;
             double q_acc_4_2 = q_acc_2_4;
             double q_acc_4_3 = q_acc_3_4;
             double q_acc_5_0 = q_acc_0_5;
             double q_acc_5_1 = q_acc_1_5;
             double q_acc_5_2 = q_acc_2_5;
             double q_acc_5_3 = q_acc_3_5;
             double q_acc_5_4 = q_acc_4_5;
             const double elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
             const double elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
             const double elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
             const double elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
             const double elMatVec_4 = q_acc_4_0*src_dof_0 + q_acc_4_1*src_dof_1 + q_acc_4_2*src_dof_2 + q_acc_4_3*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
             const double elMatVec_5 = q_acc_5_0*src_dof_0 + q_acc_5_1*src_dof_1 + q_acc_5_2*src_dof_2 + q_acc_5_3*src_dof_3 + q_acc_5_4*src_dof_4 + q_acc_5_5*src_dof_5;
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
