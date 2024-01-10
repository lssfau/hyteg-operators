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

void P2ElementwiseDivKGrad::toMatrix_macro_2D( int64_t * RESTRICT  _data_dstEdge, int64_t * RESTRICT  _data_dstVertex, double * RESTRICT  _data_kEdge, double * RESTRICT  _data_kVertex, int64_t * RESTRICT  _data_srcEdge, int64_t * RESTRICT  _data_srcVertex, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float, int64_t micro_edges_per_macro_face ) const
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
       const double Dummy_4322 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const double Dummy_4323 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const double Dummy_4324 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_4325 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_4326 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_4327 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_4328 = -Dummy_4322 + Dummy_4324;
       const double Dummy_4329 = -Dummy_4322 + Dummy_4326;
       const double Dummy_4330 = -Dummy_4323 + Dummy_4325;
       const double Dummy_4331 = -Dummy_4323 + Dummy_4327;
       const double Dummy_4332 = Dummy_4331*1.0 / (Dummy_4328*Dummy_4331 - Dummy_4329*Dummy_4330);
       const double Dummy_4333 = -Dummy_4329*1.0 / (Dummy_4328*Dummy_4331 - Dummy_4329*Dummy_4330);
       const double Dummy_4334 = -Dummy_4330*1.0 / (Dummy_4328*Dummy_4331 - Dummy_4329*Dummy_4330);
       const double Dummy_4335 = Dummy_4328*1.0 / (Dummy_4328*Dummy_4331 - Dummy_4329*Dummy_4330);
       const double Dummy_4336 = fabs(Dummy_4328*Dummy_4331 - Dummy_4329*Dummy_4330);
       {
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
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
             const double elMat_0_0 = q_acc_0_0;
             const double elMat_0_1 = q_acc_0_1;
             const double elMat_0_2 = q_acc_0_2;
             const double elMat_0_3 = q_acc_0_3;
             const double elMat_0_4 = q_acc_0_4;
             const double elMat_0_5 = q_acc_0_5;
             const double elMat_1_0 = q_acc_1_0;
             const double elMat_1_1 = q_acc_1_1;
             const double elMat_1_2 = q_acc_1_2;
             const double elMat_1_3 = q_acc_1_3;
             const double elMat_1_4 = q_acc_1_4;
             const double elMat_1_5 = q_acc_1_5;
             const double elMat_2_0 = q_acc_2_0;
             const double elMat_2_1 = q_acc_2_1;
             const double elMat_2_2 = q_acc_2_2;
             const double elMat_2_3 = q_acc_2_3;
             const double elMat_2_4 = q_acc_2_4;
             const double elMat_2_5 = q_acc_2_5;
             const double elMat_3_0 = q_acc_3_0;
             const double elMat_3_1 = q_acc_3_1;
             const double elMat_3_2 = q_acc_3_2;
             const double elMat_3_3 = q_acc_3_3;
             const double elMat_3_4 = q_acc_3_4;
             const double elMat_3_5 = q_acc_3_5;
             const double elMat_4_0 = q_acc_4_0;
             const double elMat_4_1 = q_acc_4_1;
             const double elMat_4_2 = q_acc_4_2;
             const double elMat_4_3 = q_acc_4_3;
             const double elMat_4_4 = q_acc_4_4;
             const double elMat_4_5 = q_acc_4_5;
             const double elMat_5_0 = q_acc_5_0;
             const double elMat_5_1 = q_acc_5_1;
             const double elMat_5_2 = q_acc_5_2;
             const double elMat_5_3 = q_acc_5_3;
             const double elMat_5_4 = q_acc_5_4;
             const double elMat_5_5 = q_acc_5_5;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< double > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = elMat_0_0;
             _data_mat[1] = elMat_0_1;
             _data_mat[2] = elMat_0_2;
             _data_mat[3] = elMat_0_3;
             _data_mat[4] = elMat_0_4;
             _data_mat[5] = elMat_0_5;
             _data_mat[6] = elMat_1_0;
             _data_mat[7] = elMat_1_1;
             _data_mat[8] = elMat_1_2;
             _data_mat[9] = elMat_1_3;
             _data_mat[10] = elMat_1_4;
             _data_mat[11] = elMat_1_5;
             _data_mat[12] = elMat_2_0;
             _data_mat[13] = elMat_2_1;
             _data_mat[14] = elMat_2_2;
             _data_mat[15] = elMat_2_3;
             _data_mat[16] = elMat_2_4;
             _data_mat[17] = elMat_2_5;
             _data_mat[18] = elMat_3_0;
             _data_mat[19] = elMat_3_1;
             _data_mat[20] = elMat_3_2;
             _data_mat[21] = elMat_3_3;
             _data_mat[22] = elMat_3_4;
             _data_mat[23] = elMat_3_5;
             _data_mat[24] = elMat_4_0;
             _data_mat[25] = elMat_4_1;
             _data_mat[26] = elMat_4_2;
             _data_mat[27] = elMat_4_3;
             _data_mat[28] = elMat_4_4;
             _data_mat[29] = elMat_4_5;
             _data_mat[30] = elMat_5_0;
             _data_mat[31] = elMat_5_1;
             _data_mat[32] = elMat_5_2;
             _data_mat[33] = elMat_5_3;
             _data_mat[34] = elMat_5_4;
             _data_mat[35] = elMat_5_5;
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
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
                const double tmp_q_3 = Dummy_4332*tmp_q_2;
                const double tmp_q_4 = Dummy_4334*tmp_q_2;
                const double tmp_q_5 = tmp_q_3 + tmp_q_4;
                const double tmp_q_6 = tmp_q_0*_data_q_p_1[q];
                const double tmp_q_7 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const double tmp_q_8 = tmp_q_7*2.0;
                const double tmp_q_9 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const double tmp_q_10 = tmp_q_9*2.0;
                const double tmp_q_11 = k_dof_0*(tmp_q_10 + tmp_q_6 + tmp_q_8 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_q_8 - _data_q_p_0[q]) + k_dof_2*(tmp_q_10 - _data_q_p_1[q]) + k_dof_3*tmp_q_6 + k_dof_4*(tmp_q_1 - tmp_q_6 + tmp_q_9*-4.0) + k_dof_5*(tmp_q_0 - tmp_q_6 + tmp_q_7*-4.0);
                const double tmp_q_12 = Dummy_4333*tmp_q_2;
                const double tmp_q_13 = Dummy_4335*tmp_q_2;
                const double tmp_q_14 = tmp_q_12 + tmp_q_13;
                const double tmp_q_15 = Dummy_4336*_data_q_w[q];
                const double tmp_q_16 = tmp_q_0 - 1.0;
                const double tmp_q_17 = Dummy_4332*tmp_q_16;
                const double tmp_q_18 = tmp_q_11*tmp_q_5;
                const double tmp_q_19 = Dummy_4333*tmp_q_16;
                const double tmp_q_20 = tmp_q_11*tmp_q_14;
                const double tmp_q_21 = tmp_q_1 - 1.0;
                const double tmp_q_22 = Dummy_4334*tmp_q_21;
                const double tmp_q_23 = Dummy_4335*tmp_q_21;
                const double tmp_q_24 = Dummy_4332*tmp_q_1;
                const double tmp_q_25 = tmp_q_11*tmp_q_24;
                const double tmp_q_26 = Dummy_4334*tmp_q_0;
                const double tmp_q_27 = tmp_q_11*tmp_q_26;
                const double tmp_q_28 = tmp_q_25 + tmp_q_27;
                const double tmp_q_29 = Dummy_4333*tmp_q_1;
                const double tmp_q_30 = tmp_q_11*tmp_q_29;
                const double tmp_q_31 = Dummy_4335*tmp_q_0;
                const double tmp_q_32 = tmp_q_11*tmp_q_31;
                const double tmp_q_33 = tmp_q_30 + tmp_q_32;
                const double tmp_q_34 = -tmp_q_0 - 8.0*_data_q_p_1[q] + 4.0;
                const double tmp_q_35 = Dummy_4334*tmp_q_11*tmp_q_34 - tmp_q_25;
                const double tmp_q_36 = Dummy_4335*tmp_q_11*tmp_q_34 - tmp_q_30;
                const double tmp_q_37 = -tmp_q_1 - 8.0*_data_q_p_0[q] + 4.0;
                const double tmp_q_38 = Dummy_4332*tmp_q_37;
                const double tmp_q_39 = tmp_q_11*tmp_q_38 - tmp_q_27;
                const double tmp_q_40 = Dummy_4333*tmp_q_37;
                const double tmp_q_41 = tmp_q_11*tmp_q_40 - tmp_q_32;
                const double tmp_q_42 = tmp_q_11*(tmp_q_16*tmp_q_16);
                const double tmp_q_43 = tmp_q_11*(tmp_q_21*tmp_q_21);
                const double tmp_q_44 = tmp_q_24 + tmp_q_26;
                const double tmp_q_45 = tmp_q_29 + tmp_q_31;
                const double tmp_q_46 = Dummy_4334*tmp_q_34 - tmp_q_24;
                const double tmp_q_47 = Dummy_4335*tmp_q_34 - tmp_q_29;
                const double res_tmp_0_0 = tmp_q_15*(tmp_q_14*(tmp_q_11*tmp_q_12 + tmp_q_11*tmp_q_13) + tmp_q_5*(tmp_q_11*tmp_q_3 + tmp_q_11*tmp_q_4));
                const double res_tmp_0_1 = tmp_q_15*(tmp_q_17*tmp_q_18 + tmp_q_19*tmp_q_20);
                const double res_tmp_0_2 = tmp_q_15*(tmp_q_18*tmp_q_22 + tmp_q_20*tmp_q_23);
                const double res_tmp_0_3 = tmp_q_15*(tmp_q_14*tmp_q_33 + tmp_q_28*tmp_q_5);
                const double res_tmp_0_4 = tmp_q_15*(tmp_q_14*tmp_q_36 + tmp_q_35*tmp_q_5);
                const double res_tmp_0_5 = tmp_q_15*(tmp_q_14*tmp_q_41 + tmp_q_39*tmp_q_5);
                const double res_tmp_1_1 = tmp_q_15*((Dummy_4332*Dummy_4332)*tmp_q_42 + (Dummy_4333*Dummy_4333)*tmp_q_42);
                const double res_tmp_1_2 = tmp_q_15*(tmp_q_11*tmp_q_17*tmp_q_22 + tmp_q_11*tmp_q_19*tmp_q_23);
                const double res_tmp_1_3 = tmp_q_15*(tmp_q_17*tmp_q_28 + tmp_q_19*tmp_q_33);
                const double res_tmp_1_4 = tmp_q_15*(tmp_q_17*tmp_q_35 + tmp_q_19*tmp_q_36);
                const double res_tmp_1_5 = tmp_q_15*(tmp_q_17*tmp_q_39 + tmp_q_19*tmp_q_41);
                const double res_tmp_2_2 = tmp_q_15*((Dummy_4334*Dummy_4334)*tmp_q_43 + (Dummy_4335*Dummy_4335)*tmp_q_43);
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
             const double elMat_0_0 = q_acc_0_0;
             const double elMat_0_1 = q_acc_0_1;
             const double elMat_0_2 = q_acc_0_2;
             const double elMat_0_3 = q_acc_0_3;
             const double elMat_0_4 = q_acc_0_4;
             const double elMat_0_5 = q_acc_0_5;
             const double elMat_1_0 = q_acc_1_0;
             const double elMat_1_1 = q_acc_1_1;
             const double elMat_1_2 = q_acc_1_2;
             const double elMat_1_3 = q_acc_1_3;
             const double elMat_1_4 = q_acc_1_4;
             const double elMat_1_5 = q_acc_1_5;
             const double elMat_2_0 = q_acc_2_0;
             const double elMat_2_1 = q_acc_2_1;
             const double elMat_2_2 = q_acc_2_2;
             const double elMat_2_3 = q_acc_2_3;
             const double elMat_2_4 = q_acc_2_4;
             const double elMat_2_5 = q_acc_2_5;
             const double elMat_3_0 = q_acc_3_0;
             const double elMat_3_1 = q_acc_3_1;
             const double elMat_3_2 = q_acc_3_2;
             const double elMat_3_3 = q_acc_3_3;
             const double elMat_3_4 = q_acc_3_4;
             const double elMat_3_5 = q_acc_3_5;
             const double elMat_4_0 = q_acc_4_0;
             const double elMat_4_1 = q_acc_4_1;
             const double elMat_4_2 = q_acc_4_2;
             const double elMat_4_3 = q_acc_4_3;
             const double elMat_4_4 = q_acc_4_4;
             const double elMat_4_5 = q_acc_4_5;
             const double elMat_5_0 = q_acc_5_0;
             const double elMat_5_1 = q_acc_5_1;
             const double elMat_5_2 = q_acc_5_2;
             const double elMat_5_3 = q_acc_5_3;
             const double elMat_5_4 = q_acc_5_4;
             const double elMat_5_5 = q_acc_5_5;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< double > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + 2*((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) + ((micro_edges_per_macro_face) / (3)) - ((ctr_1*(ctr_1 + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = elMat_0_0;
             _data_mat[1] = elMat_0_1;
             _data_mat[2] = elMat_0_2;
             _data_mat[3] = elMat_0_3;
             _data_mat[4] = elMat_0_4;
             _data_mat[5] = elMat_0_5;
             _data_mat[6] = elMat_1_0;
             _data_mat[7] = elMat_1_1;
             _data_mat[8] = elMat_1_2;
             _data_mat[9] = elMat_1_3;
             _data_mat[10] = elMat_1_4;
             _data_mat[11] = elMat_1_5;
             _data_mat[12] = elMat_2_0;
             _data_mat[13] = elMat_2_1;
             _data_mat[14] = elMat_2_2;
             _data_mat[15] = elMat_2_3;
             _data_mat[16] = elMat_2_4;
             _data_mat[17] = elMat_2_5;
             _data_mat[18] = elMat_3_0;
             _data_mat[19] = elMat_3_1;
             _data_mat[20] = elMat_3_2;
             _data_mat[21] = elMat_3_3;
             _data_mat[22] = elMat_3_4;
             _data_mat[23] = elMat_3_5;
             _data_mat[24] = elMat_4_0;
             _data_mat[25] = elMat_4_1;
             _data_mat[26] = elMat_4_2;
             _data_mat[27] = elMat_4_3;
             _data_mat[28] = elMat_4_4;
             _data_mat[29] = elMat_4_5;
             _data_mat[30] = elMat_5_0;
             _data_mat[31] = elMat_5_1;
             _data_mat[32] = elMat_5_2;
             _data_mat[33] = elMat_5_3;
             _data_mat[34] = elMat_5_4;
             _data_mat[35] = elMat_5_5;
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
