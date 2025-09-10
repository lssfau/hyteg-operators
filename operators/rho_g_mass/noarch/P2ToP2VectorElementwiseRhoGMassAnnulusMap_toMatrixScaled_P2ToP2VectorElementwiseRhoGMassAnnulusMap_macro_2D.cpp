/*
* Copyright (c) 2017-2024 Nils Kohl, Daniel Bauer, Fabian Böhm.
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
* The entire file was generated with the HyTeG Operator Generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/

































#include "../P2ToP2VectorElementwiseRhoGMassAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ToP2VectorElementwiseRhoGMassAnnulusMap::toMatrixScaled_P2ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D( idx_t * RESTRICT  _data_dst_edge_0, idx_t * RESTRICT  _data_dst_edge_1, idx_t * RESTRICT  _data_dst_vertex_0, idx_t * RESTRICT  _data_dst_vertex_1, real_t * RESTRICT  _data_rho, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1, real_t toMatrixScaling ) const
{
    {
       const real_t _data_q_w [] = {0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949};
   
       const real_t _data_q_p_0 [] = {0.44594849091596489, 0.091576213509770715, 0.10810301816807022, 0.81684757298045851, 0.44594849091596489, 0.091576213509770715};
   
       const real_t _data_q_p_1 [] = {0.10810301816807022, 0.81684757298045851, 0.44594849091596489, 0.091576213509770715, 0.44594849091596489, 0.091576213509770715};
   
       const real_t tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const real_t jac_affine_0_1_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_2_0_GRAY;
       const real_t jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const real_t jac_affine_1_1_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_2_1_GRAY;
       const real_t abs_det_jac_affine_GRAY = abs(jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY);
       const real_t tmp_qloop_3 = rayVertex_1 - thrVertex_1;
       const real_t tmp_qloop_4 = -tmp_qloop_3;
       const real_t tmp_qloop_12 = rayVertex_0 - refVertex_0;
       const real_t tmp_qloop_13 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_14 = -tmp_qloop_13;
       const real_t tmp_qloop_15 = rayVertex_1 - refVertex_1;
       const real_t tmp_qloop_16 = 1.0 / (-tmp_qloop_12*tmp_qloop_4 + tmp_qloop_14*tmp_qloop_15);
       const real_t tmp_qloop_17 = radRayVertex - radRefVertex;
       const real_t tmp_qloop_18 = -tmp_qloop_17;
       const real_t tmp_qloop_19 = tmp_qloop_16*tmp_qloop_18;
       const real_t tmp_qloop_20 = tmp_qloop_19*1.0;
       {
          /* FaceType.GRAY */
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512182)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*0.79548022620090575)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196338)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.5176323419876725)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278596)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278607)), ((real_t)(abs_det_jac_affine_GRAY*0.033544811523148421)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512155)), ((real_t)(abs_det_jac_affine_GRAY*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*0.79548022620090575)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196227)), ((real_t)(abs_det_jac_affine_GRAY*0.5176323419876725)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278596)), ((real_t)(abs_det_jac_affine_GRAY*0.033544811523148421)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278607)), ((real_t)(abs_det_jac_affine_GRAY*-0.084730493093978398)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*0.79548022620090564)), ((real_t)(abs_det_jac_affine_GRAY*0.19283351126204828)), ((real_t)(abs_det_jac_affine_GRAY*0.19283351126204828)), ((real_t)(abs_det_jac_affine_GRAY*0.51763234198767272)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.033544811523148449)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278591)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278591))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
         
             const int64_t phantom_ctr_0 = ctr_0;
             real_t _data_float_loop_ctr_array_dim_0[4];
             _data_float_loop_ctr_array_dim_0[0] = (real_t) ctr_0+ 0;
             _data_float_loop_ctr_array_dim_0[1] = (real_t) ctr_0+ 1;
             _data_float_loop_ctr_array_dim_0[2] = (real_t) ctr_0+ 2;
             _data_float_loop_ctr_array_dim_0[3] = (real_t) ctr_0+ 3;
             real_t _data_float_loop_ctr_array_dim_1[4];
             _data_float_loop_ctr_array_dim_1[0] = (real_t) ctr_1;
             _data_float_loop_ctr_array_dim_1[1] = (real_t) ctr_1;
             _data_float_loop_ctr_array_dim_1[2] = (real_t) ctr_1;
             _data_float_loop_ctr_array_dim_1[3] = (real_t) ctr_1;
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_4_0 = 0.0;
             real_t q_acc_4_1 = 0.0;
             real_t q_acc_4_2 = 0.0;
             real_t q_acc_4_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_5_0 = 0.0;
             real_t q_acc_5_1 = 0.0;
             real_t q_acc_5_2 = 0.0;
             real_t q_acc_5_3 = 0.0;
             real_t q_acc_5_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_0 = 0.0;
             real_t q_acc_6_1 = 0.0;
             real_t q_acc_6_2 = 0.0;
             real_t q_acc_6_3 = 0.0;
             real_t q_acc_6_4 = 0.0;
             real_t q_acc_6_5 = 0.0;
             real_t q_acc_7_0 = 0.0;
             real_t q_acc_7_1 = 0.0;
             real_t q_acc_7_2 = 0.0;
             real_t q_acc_7_3 = 0.0;
             real_t q_acc_7_4 = 0.0;
             real_t q_acc_7_5 = 0.0;
             real_t q_acc_8_0 = 0.0;
             real_t q_acc_8_1 = 0.0;
             real_t q_acc_8_2 = 0.0;
             real_t q_acc_8_3 = 0.0;
             real_t q_acc_8_4 = 0.0;
             real_t q_acc_8_5 = 0.0;
             real_t q_acc_9_0 = 0.0;
             real_t q_acc_9_1 = 0.0;
             real_t q_acc_9_2 = 0.0;
             real_t q_acc_9_3 = 0.0;
             real_t q_acc_9_4 = 0.0;
             real_t q_acc_9_5 = 0.0;
             real_t q_acc_10_0 = 0.0;
             real_t q_acc_10_1 = 0.0;
             real_t q_acc_10_2 = 0.0;
             real_t q_acc_10_3 = 0.0;
             real_t q_acc_10_4 = 0.0;
             real_t q_acc_10_5 = 0.0;
             real_t q_acc_11_0 = 0.0;
             real_t q_acc_11_1 = 0.0;
             real_t q_acc_11_2 = 0.0;
             real_t q_acc_11_3 = 0.0;
             real_t q_acc_11_4 = 0.0;
             real_t q_acc_11_5 = 0.0;
             const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
             const real_t tmp_qloop_1 = p_affine_0_0 - p_affine_2_0;
             const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
             const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_2 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_5 = (tmp_qloop_2*tmp_qloop_2);
                const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                const real_t tmp_qloop_11 = pow(tmp_qloop_10, -0.50000000000000000);
                const real_t tmp_qloop_21 = tmp_qloop_11*tmp_qloop_20;
                const real_t tmp_qloop_22 = tmp_qloop_21*tmp_qloop_4;
                const real_t tmp_qloop_23 = pow(tmp_qloop_10, -1.5000000000000000);
                const real_t tmp_qloop_24 = radRayVertex + tmp_qloop_19*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_8) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_2));
                const real_t tmp_qloop_25 = tmp_qloop_23*tmp_qloop_24;
                const real_t tmp_qloop_26 = tmp_qloop_25*1.0;
                const real_t tmp_qloop_27 = tmp_qloop_14*tmp_qloop_21;
                const real_t tmp_qloop_28 = tmp_qloop_2*tmp_qloop_26;
                const real_t tmp_qloop_31 = tmp_qloop_20*tmp_qloop_23;
                const real_t tmp_qloop_32 = tmp_qloop_31*tmp_qloop_4;
                const real_t tmp_qloop_33 = tmp_qloop_32*tmp_qloop_5;
                const real_t tmp_qloop_34 = pow(tmp_qloop_10, -2.5000000000000000)*tmp_qloop_24*3.0;
                const real_t tmp_qloop_35 = tmp_qloop_2*tmp_qloop_34*tmp_qloop_9;
                const real_t tmp_qloop_36 = tmp_qloop_32*tmp_qloop_9 - tmp_qloop_35;
                const real_t tmp_qloop_37 = tmp_qloop_13*tmp_qloop_31;
                const real_t tmp_qloop_38 = tmp_qloop_2*tmp_qloop_8;
                const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_38;
                const real_t tmp_qloop_40 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_5*tmp_qloop_8;
                const real_t tmp_qloop_42 = tmp_qloop_26*tmp_qloop_8 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_37*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_14*tmp_qloop_31*tmp_qloop_38;
                const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_46 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_47 = tmp_qloop_46*2.0;
                const real_t tmp_qloop_48 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_49 = tmp_qloop_48*2.0;
                const real_t tmp_qloop_50 = tmp_qloop_45 + tmp_qloop_47 + tmp_qloop_49 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                const real_t tmp_qloop_51 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_52 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_53 = 1.0 / (abs(pow((tmp_qloop_51*tmp_qloop_51) + (tmp_qloop_52*tmp_qloop_52), 0.50000000000000000))*abs(pow((tmp_qloop_51*tmp_qloop_51) + (tmp_qloop_52*tmp_qloop_52), 0.50000000000000000)));
                const real_t tmp_qloop_54 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_52) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_51));
                const real_t tmp_qloop_58 = tmp_qloop_47 - _data_q_p_0[q];
                const real_t tmp_qloop_60 = tmp_qloop_49 - _data_q_p_1[q];
                const real_t tmp_qloop_63 = -tmp_qloop_45 + tmp_qloop_48*-4.0 + 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_65 = -tmp_qloop_45 + tmp_qloop_46*-4.0 + 4.0*_data_q_p_0[q];
                const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                const real_t abs_det_jac_blending = tmp_qloop_29;
                const real_t tmp_qloop_55 = abs_det_jac_blending*tmp_qloop_11*tmp_qloop_24*pow(tmp_qloop_53*(abs(tmp_qloop_51*tmp_qloop_54)*abs(tmp_qloop_51*tmp_qloop_54)) + tmp_qloop_53*(abs(tmp_qloop_52*tmp_qloop_54)*abs(tmp_qloop_52*tmp_qloop_54)), -0.50000000000000000)*(-rho_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) - rho_dof_1*_data_q_p_0[q] - rho_dof_2*_data_q_p_1[q])*_data_q_w[q];
                const real_t tmp_qloop_56 = tmp_qloop_2*tmp_qloop_55;
                const real_t tmp_qloop_57 = tmp_qloop_50*tmp_qloop_56;
                const real_t tmp_qloop_59 = tmp_qloop_56*tmp_qloop_58;
                const real_t tmp_qloop_61 = tmp_qloop_56*tmp_qloop_60;
                const real_t tmp_qloop_62 = tmp_qloop_45*tmp_qloop_56;
                const real_t tmp_qloop_64 = tmp_qloop_56*tmp_qloop_63;
                const real_t tmp_qloop_66 = tmp_qloop_56*tmp_qloop_65;
                const real_t tmp_qloop_67 = tmp_qloop_55*tmp_qloop_8;
                const real_t tmp_qloop_68 = tmp_qloop_50*tmp_qloop_67;
                const real_t tmp_qloop_69 = tmp_qloop_58*tmp_qloop_67;
                const real_t tmp_qloop_70 = tmp_qloop_60*tmp_qloop_67;
                const real_t tmp_qloop_71 = tmp_qloop_45*tmp_qloop_67;
                const real_t tmp_qloop_72 = tmp_qloop_63*tmp_qloop_67;
                const real_t tmp_qloop_73 = tmp_qloop_65*tmp_qloop_67;
                const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                const real_t q_tmp_0_0 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_0_1 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_0_2 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_0_3 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_0_4 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_0_5 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_1_0 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_1_1 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_1_2 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_1_3 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_1_4 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_1_5 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_2_0 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_2_1 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_2_2 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_2_3 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_2_4 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_2_5 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_3_0 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_3_1 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_3_2 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_3_3 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_3_4 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_3_5 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_4_0 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_4_1 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_4_2 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_4_3 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_4_4 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_4_5 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_5_0 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_5_1 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_5_2 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_5_3 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_5_4 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_5_5 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_6_0 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_6_1 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_6_2 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_6_3 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_6_4 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_6_5 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_7_0 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_7_1 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_7_2 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_7_3 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_7_4 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_7_5 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_8_0 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_8_1 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_8_2 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_8_3 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_8_4 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_8_5 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_9_0 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_9_1 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_9_2 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_9_3 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_9_4 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_9_5 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_10_0 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_10_1 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_10_2 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_10_3 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_10_4 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_10_5 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                const real_t q_tmp_11_0 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_GRAY[6*q];
                const real_t q_tmp_11_1 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_GRAY[6*q + 1];
                const real_t q_tmp_11_2 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_GRAY[6*q + 2];
                const real_t q_tmp_11_3 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_GRAY[6*q + 3];
                const real_t q_tmp_11_4 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_GRAY[6*q + 4];
                const real_t q_tmp_11_5 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_GRAY[6*q + 5];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                q_acc_4_3 = q_acc_4_3 + q_tmp_4_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                q_acc_5_3 = q_acc_5_3 + q_tmp_5_3;
                q_acc_5_4 = q_acc_5_4 + q_tmp_5_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_0 = q_acc_6_0 + q_tmp_6_0;
                q_acc_6_1 = q_acc_6_1 + q_tmp_6_1;
                q_acc_6_2 = q_acc_6_2 + q_tmp_6_2;
                q_acc_6_3 = q_acc_6_3 + q_tmp_6_3;
                q_acc_6_4 = q_acc_6_4 + q_tmp_6_4;
                q_acc_6_5 = q_acc_6_5 + q_tmp_6_5;
                q_acc_7_0 = q_acc_7_0 + q_tmp_7_0;
                q_acc_7_1 = q_acc_7_1 + q_tmp_7_1;
                q_acc_7_2 = q_acc_7_2 + q_tmp_7_2;
                q_acc_7_3 = q_acc_7_3 + q_tmp_7_3;
                q_acc_7_4 = q_acc_7_4 + q_tmp_7_4;
                q_acc_7_5 = q_acc_7_5 + q_tmp_7_5;
                q_acc_8_0 = q_acc_8_0 + q_tmp_8_0;
                q_acc_8_1 = q_acc_8_1 + q_tmp_8_1;
                q_acc_8_2 = q_acc_8_2 + q_tmp_8_2;
                q_acc_8_3 = q_acc_8_3 + q_tmp_8_3;
                q_acc_8_4 = q_acc_8_4 + q_tmp_8_4;
                q_acc_8_5 = q_acc_8_5 + q_tmp_8_5;
                q_acc_9_0 = q_acc_9_0 + q_tmp_9_0;
                q_acc_9_1 = q_acc_9_1 + q_tmp_9_1;
                q_acc_9_2 = q_acc_9_2 + q_tmp_9_2;
                q_acc_9_3 = q_acc_9_3 + q_tmp_9_3;
                q_acc_9_4 = q_acc_9_4 + q_tmp_9_4;
                q_acc_9_5 = q_acc_9_5 + q_tmp_9_5;
                q_acc_10_0 = q_acc_10_0 + q_tmp_10_0;
                q_acc_10_1 = q_acc_10_1 + q_tmp_10_1;
                q_acc_10_2 = q_acc_10_2 + q_tmp_10_2;
                q_acc_10_3 = q_acc_10_3 + q_tmp_10_3;
                q_acc_10_4 = q_acc_10_4 + q_tmp_10_4;
                q_acc_10_5 = q_acc_10_5 + q_tmp_10_5;
                q_acc_11_0 = q_acc_11_0 + q_tmp_11_0;
                q_acc_11_1 = q_acc_11_1 + q_tmp_11_1;
                q_acc_11_2 = q_acc_11_2 + q_tmp_11_2;
                q_acc_11_3 = q_acc_11_3 + q_tmp_11_3;
                q_acc_11_4 = q_acc_11_4 + q_tmp_11_4;
                q_acc_11_5 = q_acc_11_5 + q_tmp_11_5;
             }
             const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
             const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
             const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
             const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
             const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
             const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
             const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
             const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
             const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
             const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
             const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
             const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
             const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
             const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
             const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
             const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
             const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
             const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
             const real_t elMat_3_0 = q_acc_3_0*toMatrixScaling;
             const real_t elMat_3_1 = q_acc_3_1*toMatrixScaling;
             const real_t elMat_3_2 = q_acc_3_2*toMatrixScaling;
             const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
             const real_t elMat_3_4 = q_acc_3_4*toMatrixScaling;
             const real_t elMat_3_5 = q_acc_3_5*toMatrixScaling;
             const real_t elMat_4_0 = q_acc_4_0*toMatrixScaling;
             const real_t elMat_4_1 = q_acc_4_1*toMatrixScaling;
             const real_t elMat_4_2 = q_acc_4_2*toMatrixScaling;
             const real_t elMat_4_3 = q_acc_4_3*toMatrixScaling;
             const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
             const real_t elMat_4_5 = q_acc_4_5*toMatrixScaling;
             const real_t elMat_5_0 = q_acc_5_0*toMatrixScaling;
             const real_t elMat_5_1 = q_acc_5_1*toMatrixScaling;
             const real_t elMat_5_2 = q_acc_5_2*toMatrixScaling;
             const real_t elMat_5_3 = q_acc_5_3*toMatrixScaling;
             const real_t elMat_5_4 = q_acc_5_4*toMatrixScaling;
             const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
             const real_t elMat_6_0 = q_acc_6_0*toMatrixScaling;
             const real_t elMat_6_1 = q_acc_6_1*toMatrixScaling;
             const real_t elMat_6_2 = q_acc_6_2*toMatrixScaling;
             const real_t elMat_6_3 = q_acc_6_3*toMatrixScaling;
             const real_t elMat_6_4 = q_acc_6_4*toMatrixScaling;
             const real_t elMat_6_5 = q_acc_6_5*toMatrixScaling;
             const real_t elMat_7_0 = q_acc_7_0*toMatrixScaling;
             const real_t elMat_7_1 = q_acc_7_1*toMatrixScaling;
             const real_t elMat_7_2 = q_acc_7_2*toMatrixScaling;
             const real_t elMat_7_3 = q_acc_7_3*toMatrixScaling;
             const real_t elMat_7_4 = q_acc_7_4*toMatrixScaling;
             const real_t elMat_7_5 = q_acc_7_5*toMatrixScaling;
             const real_t elMat_8_0 = q_acc_8_0*toMatrixScaling;
             const real_t elMat_8_1 = q_acc_8_1*toMatrixScaling;
             const real_t elMat_8_2 = q_acc_8_2*toMatrixScaling;
             const real_t elMat_8_3 = q_acc_8_3*toMatrixScaling;
             const real_t elMat_8_4 = q_acc_8_4*toMatrixScaling;
             const real_t elMat_8_5 = q_acc_8_5*toMatrixScaling;
             const real_t elMat_9_0 = q_acc_9_0*toMatrixScaling;
             const real_t elMat_9_1 = q_acc_9_1*toMatrixScaling;
             const real_t elMat_9_2 = q_acc_9_2*toMatrixScaling;
             const real_t elMat_9_3 = q_acc_9_3*toMatrixScaling;
             const real_t elMat_9_4 = q_acc_9_4*toMatrixScaling;
             const real_t elMat_9_5 = q_acc_9_5*toMatrixScaling;
             const real_t elMat_10_0 = q_acc_10_0*toMatrixScaling;
             const real_t elMat_10_1 = q_acc_10_1*toMatrixScaling;
             const real_t elMat_10_2 = q_acc_10_2*toMatrixScaling;
             const real_t elMat_10_3 = q_acc_10_3*toMatrixScaling;
             const real_t elMat_10_4 = q_acc_10_4*toMatrixScaling;
             const real_t elMat_10_5 = q_acc_10_5*toMatrixScaling;
             const real_t elMat_11_0 = q_acc_11_0*toMatrixScaling;
             const real_t elMat_11_1 = q_acc_11_1*toMatrixScaling;
             const real_t elMat_11_2 = q_acc_11_2*toMatrixScaling;
             const real_t elMat_11_3 = q_acc_11_3*toMatrixScaling;
             const real_t elMat_11_4 = q_acc_11_4*toMatrixScaling;
             const real_t elMat_11_5 = q_acc_11_5*toMatrixScaling;
         
             std::vector< uint_t > _data_rowIdx( 12 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 72 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[6] = ((uint64_t)(_data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[7] = ((uint64_t)(_data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[8] = ((uint64_t)(_data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[9] = ((uint64_t)(_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[10] = ((uint64_t)(_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[11] = ((uint64_t)(_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_1_0));
             _data_mat[7] = ((real_t)(elMat_1_1));
             _data_mat[8] = ((real_t)(elMat_1_2));
             _data_mat[9] = ((real_t)(elMat_1_3));
             _data_mat[10] = ((real_t)(elMat_1_4));
             _data_mat[11] = ((real_t)(elMat_1_5));
             _data_mat[12] = ((real_t)(elMat_2_0));
             _data_mat[13] = ((real_t)(elMat_2_1));
             _data_mat[14] = ((real_t)(elMat_2_2));
             _data_mat[15] = ((real_t)(elMat_2_3));
             _data_mat[16] = ((real_t)(elMat_2_4));
             _data_mat[17] = ((real_t)(elMat_2_5));
             _data_mat[18] = ((real_t)(elMat_3_0));
             _data_mat[19] = ((real_t)(elMat_3_1));
             _data_mat[20] = ((real_t)(elMat_3_2));
             _data_mat[21] = ((real_t)(elMat_3_3));
             _data_mat[22] = ((real_t)(elMat_3_4));
             _data_mat[23] = ((real_t)(elMat_3_5));
             _data_mat[24] = ((real_t)(elMat_4_0));
             _data_mat[25] = ((real_t)(elMat_4_1));
             _data_mat[26] = ((real_t)(elMat_4_2));
             _data_mat[27] = ((real_t)(elMat_4_3));
             _data_mat[28] = ((real_t)(elMat_4_4));
             _data_mat[29] = ((real_t)(elMat_4_5));
             _data_mat[30] = ((real_t)(elMat_5_0));
             _data_mat[31] = ((real_t)(elMat_5_1));
             _data_mat[32] = ((real_t)(elMat_5_2));
             _data_mat[33] = ((real_t)(elMat_5_3));
             _data_mat[34] = ((real_t)(elMat_5_4));
             _data_mat[35] = ((real_t)(elMat_5_5));
             _data_mat[36] = ((real_t)(elMat_6_0));
             _data_mat[37] = ((real_t)(elMat_6_1));
             _data_mat[38] = ((real_t)(elMat_6_2));
             _data_mat[39] = ((real_t)(elMat_6_3));
             _data_mat[40] = ((real_t)(elMat_6_4));
             _data_mat[41] = ((real_t)(elMat_6_5));
             _data_mat[42] = ((real_t)(elMat_7_0));
             _data_mat[43] = ((real_t)(elMat_7_1));
             _data_mat[44] = ((real_t)(elMat_7_2));
             _data_mat[45] = ((real_t)(elMat_7_3));
             _data_mat[46] = ((real_t)(elMat_7_4));
             _data_mat[47] = ((real_t)(elMat_7_5));
             _data_mat[48] = ((real_t)(elMat_8_0));
             _data_mat[49] = ((real_t)(elMat_8_1));
             _data_mat[50] = ((real_t)(elMat_8_2));
             _data_mat[51] = ((real_t)(elMat_8_3));
             _data_mat[52] = ((real_t)(elMat_8_4));
             _data_mat[53] = ((real_t)(elMat_8_5));
             _data_mat[54] = ((real_t)(elMat_9_0));
             _data_mat[55] = ((real_t)(elMat_9_1));
             _data_mat[56] = ((real_t)(elMat_9_2));
             _data_mat[57] = ((real_t)(elMat_9_3));
             _data_mat[58] = ((real_t)(elMat_9_4));
             _data_mat[59] = ((real_t)(elMat_9_5));
             _data_mat[60] = ((real_t)(elMat_10_0));
             _data_mat[61] = ((real_t)(elMat_10_1));
             _data_mat[62] = ((real_t)(elMat_10_2));
             _data_mat[63] = ((real_t)(elMat_10_3));
             _data_mat[64] = ((real_t)(elMat_10_4));
             _data_mat[65] = ((real_t)(elMat_10_5));
             _data_mat[66] = ((real_t)(elMat_11_0));
             _data_mat[67] = ((real_t)(elMat_11_1));
             _data_mat[68] = ((real_t)(elMat_11_2));
             _data_mat[69] = ((real_t)(elMat_11_3));
             _data_mat[70] = ((real_t)(elMat_11_4));
             _data_mat[71] = ((real_t)(elMat_11_5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const real_t tmp_coords_jac_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_3_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_4_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_0_0_BLUE = tmp_coords_jac_1_BLUE;
       const real_t p_affine_const_0_1_BLUE = tmp_coords_jac_2_BLUE;
       const real_t p_affine_const_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_3_BLUE;
       const real_t p_affine_const_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_4_BLUE;
       const real_t p_affine_const_2_0_BLUE = tmp_coords_jac_1_BLUE + tmp_coords_jac_3_BLUE;
       const real_t p_affine_const_2_1_BLUE = tmp_coords_jac_2_BLUE + tmp_coords_jac_4_BLUE;
       const real_t jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const real_t jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const real_t jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const real_t jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const real_t abs_det_jac_affine_BLUE = abs(jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE);
       {
          /* FaceType.BLUE */
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512182)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_BLUE*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_BLUE*0.1928335112620482)), ((real_t)(abs_det_jac_affine_BLUE*0.1928335112620482)), ((real_t)(abs_det_jac_affine_BLUE*0.79548022620090575)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196338)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.5176323419876725)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278596)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278607)), ((real_t)(abs_det_jac_affine_BLUE*0.033544811523148421)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512155)), ((real_t)(abs_det_jac_affine_BLUE*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_BLUE*0.1928335112620482)), ((real_t)(abs_det_jac_affine_BLUE*0.79548022620090575)), ((real_t)(abs_det_jac_affine_BLUE*0.1928335112620482)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196227)), ((real_t)(abs_det_jac_affine_BLUE*0.5176323419876725)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278596)), ((real_t)(abs_det_jac_affine_BLUE*0.033544811523148421)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278607)), ((real_t)(abs_det_jac_affine_BLUE*-0.084730493093978398)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_BLUE*0.79548022620090564)), ((real_t)(abs_det_jac_affine_BLUE*0.19283351126204828)), ((real_t)(abs_det_jac_affine_BLUE*0.19283351126204828)), ((real_t)(abs_det_jac_affine_BLUE*0.51763234198767272)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.033544811523148449)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278591)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278591))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             const int64_t phantom_ctr_0 = ctr_0;
             real_t _data_float_loop_ctr_array_dim_0[4];
             _data_float_loop_ctr_array_dim_0[0] = (real_t) ctr_0+ 0;
             _data_float_loop_ctr_array_dim_0[1] = (real_t) ctr_0+ 1;
             _data_float_loop_ctr_array_dim_0[2] = (real_t) ctr_0+ 2;
             _data_float_loop_ctr_array_dim_0[3] = (real_t) ctr_0+ 3;
             real_t _data_float_loop_ctr_array_dim_1[4];
             _data_float_loop_ctr_array_dim_1[0] = (real_t) ctr_1;
             _data_float_loop_ctr_array_dim_1[1] = (real_t) ctr_1;
             _data_float_loop_ctr_array_dim_1[2] = (real_t) ctr_1;
             _data_float_loop_ctr_array_dim_1[3] = (real_t) ctr_1;
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_1 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_4_0 = 0.0;
             real_t q_acc_4_1 = 0.0;
             real_t q_acc_4_2 = 0.0;
             real_t q_acc_4_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_5_0 = 0.0;
             real_t q_acc_5_1 = 0.0;
             real_t q_acc_5_2 = 0.0;
             real_t q_acc_5_3 = 0.0;
             real_t q_acc_5_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_0 = 0.0;
             real_t q_acc_6_1 = 0.0;
             real_t q_acc_6_2 = 0.0;
             real_t q_acc_6_3 = 0.0;
             real_t q_acc_6_4 = 0.0;
             real_t q_acc_6_5 = 0.0;
             real_t q_acc_7_0 = 0.0;
             real_t q_acc_7_1 = 0.0;
             real_t q_acc_7_2 = 0.0;
             real_t q_acc_7_3 = 0.0;
             real_t q_acc_7_4 = 0.0;
             real_t q_acc_7_5 = 0.0;
             real_t q_acc_8_0 = 0.0;
             real_t q_acc_8_1 = 0.0;
             real_t q_acc_8_2 = 0.0;
             real_t q_acc_8_3 = 0.0;
             real_t q_acc_8_4 = 0.0;
             real_t q_acc_8_5 = 0.0;
             real_t q_acc_9_0 = 0.0;
             real_t q_acc_9_1 = 0.0;
             real_t q_acc_9_2 = 0.0;
             real_t q_acc_9_3 = 0.0;
             real_t q_acc_9_4 = 0.0;
             real_t q_acc_9_5 = 0.0;
             real_t q_acc_10_0 = 0.0;
             real_t q_acc_10_1 = 0.0;
             real_t q_acc_10_2 = 0.0;
             real_t q_acc_10_3 = 0.0;
             real_t q_acc_10_4 = 0.0;
             real_t q_acc_10_5 = 0.0;
             real_t q_acc_11_0 = 0.0;
             real_t q_acc_11_1 = 0.0;
             real_t q_acc_11_2 = 0.0;
             real_t q_acc_11_3 = 0.0;
             real_t q_acc_11_4 = 0.0;
             real_t q_acc_11_5 = 0.0;
             const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
             const real_t tmp_qloop_1 = p_affine_0_0 - p_affine_2_0;
             const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
             const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_2 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_5 = (tmp_qloop_2*tmp_qloop_2);
                const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                const real_t tmp_qloop_11 = pow(tmp_qloop_10, -0.50000000000000000);
                const real_t tmp_qloop_21 = tmp_qloop_11*tmp_qloop_20;
                const real_t tmp_qloop_22 = tmp_qloop_21*tmp_qloop_4;
                const real_t tmp_qloop_23 = pow(tmp_qloop_10, -1.5000000000000000);
                const real_t tmp_qloop_24 = radRayVertex + tmp_qloop_19*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_8) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_2));
                const real_t tmp_qloop_25 = tmp_qloop_23*tmp_qloop_24;
                const real_t tmp_qloop_26 = tmp_qloop_25*1.0;
                const real_t tmp_qloop_27 = tmp_qloop_14*tmp_qloop_21;
                const real_t tmp_qloop_28 = tmp_qloop_2*tmp_qloop_26;
                const real_t tmp_qloop_31 = tmp_qloop_20*tmp_qloop_23;
                const real_t tmp_qloop_32 = tmp_qloop_31*tmp_qloop_4;
                const real_t tmp_qloop_33 = tmp_qloop_32*tmp_qloop_5;
                const real_t tmp_qloop_34 = pow(tmp_qloop_10, -2.5000000000000000)*tmp_qloop_24*3.0;
                const real_t tmp_qloop_35 = tmp_qloop_2*tmp_qloop_34*tmp_qloop_9;
                const real_t tmp_qloop_36 = tmp_qloop_32*tmp_qloop_9 - tmp_qloop_35;
                const real_t tmp_qloop_37 = tmp_qloop_13*tmp_qloop_31;
                const real_t tmp_qloop_38 = tmp_qloop_2*tmp_qloop_8;
                const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_38;
                const real_t tmp_qloop_40 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_5*tmp_qloop_8;
                const real_t tmp_qloop_42 = tmp_qloop_26*tmp_qloop_8 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_37*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_14*tmp_qloop_31*tmp_qloop_38;
                const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_46 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_47 = tmp_qloop_46*2.0;
                const real_t tmp_qloop_48 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_49 = tmp_qloop_48*2.0;
                const real_t tmp_qloop_50 = tmp_qloop_45 + tmp_qloop_47 + tmp_qloop_49 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                const real_t tmp_qloop_51 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_52 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_53 = 1.0 / (abs(pow((tmp_qloop_51*tmp_qloop_51) + (tmp_qloop_52*tmp_qloop_52), 0.50000000000000000))*abs(pow((tmp_qloop_51*tmp_qloop_51) + (tmp_qloop_52*tmp_qloop_52), 0.50000000000000000)));
                const real_t tmp_qloop_54 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_52) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_51));
                const real_t tmp_qloop_58 = tmp_qloop_47 - _data_q_p_0[q];
                const real_t tmp_qloop_60 = tmp_qloop_49 - _data_q_p_1[q];
                const real_t tmp_qloop_63 = -tmp_qloop_45 + tmp_qloop_48*-4.0 + 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_65 = -tmp_qloop_45 + tmp_qloop_46*-4.0 + 4.0*_data_q_p_0[q];
                const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                const real_t abs_det_jac_blending = tmp_qloop_29;
                const real_t tmp_qloop_55 = abs_det_jac_blending*tmp_qloop_11*tmp_qloop_24*pow(tmp_qloop_53*(abs(tmp_qloop_51*tmp_qloop_54)*abs(tmp_qloop_51*tmp_qloop_54)) + tmp_qloop_53*(abs(tmp_qloop_52*tmp_qloop_54)*abs(tmp_qloop_52*tmp_qloop_54)), -0.50000000000000000)*(-rho_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) - rho_dof_1*_data_q_p_0[q] - rho_dof_2*_data_q_p_1[q])*_data_q_w[q];
                const real_t tmp_qloop_56 = tmp_qloop_2*tmp_qloop_55;
                const real_t tmp_qloop_57 = tmp_qloop_50*tmp_qloop_56;
                const real_t tmp_qloop_59 = tmp_qloop_56*tmp_qloop_58;
                const real_t tmp_qloop_61 = tmp_qloop_56*tmp_qloop_60;
                const real_t tmp_qloop_62 = tmp_qloop_45*tmp_qloop_56;
                const real_t tmp_qloop_64 = tmp_qloop_56*tmp_qloop_63;
                const real_t tmp_qloop_66 = tmp_qloop_56*tmp_qloop_65;
                const real_t tmp_qloop_67 = tmp_qloop_55*tmp_qloop_8;
                const real_t tmp_qloop_68 = tmp_qloop_50*tmp_qloop_67;
                const real_t tmp_qloop_69 = tmp_qloop_58*tmp_qloop_67;
                const real_t tmp_qloop_70 = tmp_qloop_60*tmp_qloop_67;
                const real_t tmp_qloop_71 = tmp_qloop_45*tmp_qloop_67;
                const real_t tmp_qloop_72 = tmp_qloop_63*tmp_qloop_67;
                const real_t tmp_qloop_73 = tmp_qloop_65*tmp_qloop_67;
                const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                const real_t q_tmp_0_0 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_0_1 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_0_2 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_0_3 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_0_4 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_0_5 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_1_0 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_1_1 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_1_2 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_1_3 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_1_4 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_1_5 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_2_0 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_2_1 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_2_2 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_2_3 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_2_4 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_2_5 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_3_0 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_3_1 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_3_2 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_3_3 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_3_4 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_3_5 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_4_0 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_4_1 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_4_2 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_4_3 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_4_4 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_4_5 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_5_0 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_5_1 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_5_2 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_5_3 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_5_4 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_5_5 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_6_0 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_6_1 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_6_2 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_6_3 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_6_4 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_6_5 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_7_0 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_7_1 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_7_2 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_7_3 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_7_4 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_7_5 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_8_0 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_8_1 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_8_2 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_8_3 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_8_4 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_8_5 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_9_0 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_9_1 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_9_2 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_9_3 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_9_4 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_9_5 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_10_0 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_10_1 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_10_2 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_10_3 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_10_4 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_10_5 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                const real_t q_tmp_11_0 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_BLUE[6*q];
                const real_t q_tmp_11_1 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_BLUE[6*q + 1];
                const real_t q_tmp_11_2 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_BLUE[6*q + 2];
                const real_t q_tmp_11_3 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_BLUE[6*q + 3];
                const real_t q_tmp_11_4 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_BLUE[6*q + 4];
                const real_t q_tmp_11_5 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_BLUE[6*q + 5];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                q_acc_4_3 = q_acc_4_3 + q_tmp_4_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                q_acc_5_3 = q_acc_5_3 + q_tmp_5_3;
                q_acc_5_4 = q_acc_5_4 + q_tmp_5_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_0 = q_acc_6_0 + q_tmp_6_0;
                q_acc_6_1 = q_acc_6_1 + q_tmp_6_1;
                q_acc_6_2 = q_acc_6_2 + q_tmp_6_2;
                q_acc_6_3 = q_acc_6_3 + q_tmp_6_3;
                q_acc_6_4 = q_acc_6_4 + q_tmp_6_4;
                q_acc_6_5 = q_acc_6_5 + q_tmp_6_5;
                q_acc_7_0 = q_acc_7_0 + q_tmp_7_0;
                q_acc_7_1 = q_acc_7_1 + q_tmp_7_1;
                q_acc_7_2 = q_acc_7_2 + q_tmp_7_2;
                q_acc_7_3 = q_acc_7_3 + q_tmp_7_3;
                q_acc_7_4 = q_acc_7_4 + q_tmp_7_4;
                q_acc_7_5 = q_acc_7_5 + q_tmp_7_5;
                q_acc_8_0 = q_acc_8_0 + q_tmp_8_0;
                q_acc_8_1 = q_acc_8_1 + q_tmp_8_1;
                q_acc_8_2 = q_acc_8_2 + q_tmp_8_2;
                q_acc_8_3 = q_acc_8_3 + q_tmp_8_3;
                q_acc_8_4 = q_acc_8_4 + q_tmp_8_4;
                q_acc_8_5 = q_acc_8_5 + q_tmp_8_5;
                q_acc_9_0 = q_acc_9_0 + q_tmp_9_0;
                q_acc_9_1 = q_acc_9_1 + q_tmp_9_1;
                q_acc_9_2 = q_acc_9_2 + q_tmp_9_2;
                q_acc_9_3 = q_acc_9_3 + q_tmp_9_3;
                q_acc_9_4 = q_acc_9_4 + q_tmp_9_4;
                q_acc_9_5 = q_acc_9_5 + q_tmp_9_5;
                q_acc_10_0 = q_acc_10_0 + q_tmp_10_0;
                q_acc_10_1 = q_acc_10_1 + q_tmp_10_1;
                q_acc_10_2 = q_acc_10_2 + q_tmp_10_2;
                q_acc_10_3 = q_acc_10_3 + q_tmp_10_3;
                q_acc_10_4 = q_acc_10_4 + q_tmp_10_4;
                q_acc_10_5 = q_acc_10_5 + q_tmp_10_5;
                q_acc_11_0 = q_acc_11_0 + q_tmp_11_0;
                q_acc_11_1 = q_acc_11_1 + q_tmp_11_1;
                q_acc_11_2 = q_acc_11_2 + q_tmp_11_2;
                q_acc_11_3 = q_acc_11_3 + q_tmp_11_3;
                q_acc_11_4 = q_acc_11_4 + q_tmp_11_4;
                q_acc_11_5 = q_acc_11_5 + q_tmp_11_5;
             }
             const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
             const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
             const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
             const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
             const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
             const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
             const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
             const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
             const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
             const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
             const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
             const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
             const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
             const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
             const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
             const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
             const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
             const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
             const real_t elMat_3_0 = q_acc_3_0*toMatrixScaling;
             const real_t elMat_3_1 = q_acc_3_1*toMatrixScaling;
             const real_t elMat_3_2 = q_acc_3_2*toMatrixScaling;
             const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
             const real_t elMat_3_4 = q_acc_3_4*toMatrixScaling;
             const real_t elMat_3_5 = q_acc_3_5*toMatrixScaling;
             const real_t elMat_4_0 = q_acc_4_0*toMatrixScaling;
             const real_t elMat_4_1 = q_acc_4_1*toMatrixScaling;
             const real_t elMat_4_2 = q_acc_4_2*toMatrixScaling;
             const real_t elMat_4_3 = q_acc_4_3*toMatrixScaling;
             const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
             const real_t elMat_4_5 = q_acc_4_5*toMatrixScaling;
             const real_t elMat_5_0 = q_acc_5_0*toMatrixScaling;
             const real_t elMat_5_1 = q_acc_5_1*toMatrixScaling;
             const real_t elMat_5_2 = q_acc_5_2*toMatrixScaling;
             const real_t elMat_5_3 = q_acc_5_3*toMatrixScaling;
             const real_t elMat_5_4 = q_acc_5_4*toMatrixScaling;
             const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
             const real_t elMat_6_0 = q_acc_6_0*toMatrixScaling;
             const real_t elMat_6_1 = q_acc_6_1*toMatrixScaling;
             const real_t elMat_6_2 = q_acc_6_2*toMatrixScaling;
             const real_t elMat_6_3 = q_acc_6_3*toMatrixScaling;
             const real_t elMat_6_4 = q_acc_6_4*toMatrixScaling;
             const real_t elMat_6_5 = q_acc_6_5*toMatrixScaling;
             const real_t elMat_7_0 = q_acc_7_0*toMatrixScaling;
             const real_t elMat_7_1 = q_acc_7_1*toMatrixScaling;
             const real_t elMat_7_2 = q_acc_7_2*toMatrixScaling;
             const real_t elMat_7_3 = q_acc_7_3*toMatrixScaling;
             const real_t elMat_7_4 = q_acc_7_4*toMatrixScaling;
             const real_t elMat_7_5 = q_acc_7_5*toMatrixScaling;
             const real_t elMat_8_0 = q_acc_8_0*toMatrixScaling;
             const real_t elMat_8_1 = q_acc_8_1*toMatrixScaling;
             const real_t elMat_8_2 = q_acc_8_2*toMatrixScaling;
             const real_t elMat_8_3 = q_acc_8_3*toMatrixScaling;
             const real_t elMat_8_4 = q_acc_8_4*toMatrixScaling;
             const real_t elMat_8_5 = q_acc_8_5*toMatrixScaling;
             const real_t elMat_9_0 = q_acc_9_0*toMatrixScaling;
             const real_t elMat_9_1 = q_acc_9_1*toMatrixScaling;
             const real_t elMat_9_2 = q_acc_9_2*toMatrixScaling;
             const real_t elMat_9_3 = q_acc_9_3*toMatrixScaling;
             const real_t elMat_9_4 = q_acc_9_4*toMatrixScaling;
             const real_t elMat_9_5 = q_acc_9_5*toMatrixScaling;
             const real_t elMat_10_0 = q_acc_10_0*toMatrixScaling;
             const real_t elMat_10_1 = q_acc_10_1*toMatrixScaling;
             const real_t elMat_10_2 = q_acc_10_2*toMatrixScaling;
             const real_t elMat_10_3 = q_acc_10_3*toMatrixScaling;
             const real_t elMat_10_4 = q_acc_10_4*toMatrixScaling;
             const real_t elMat_10_5 = q_acc_10_5*toMatrixScaling;
             const real_t elMat_11_0 = q_acc_11_0*toMatrixScaling;
             const real_t elMat_11_1 = q_acc_11_1*toMatrixScaling;
             const real_t elMat_11_2 = q_acc_11_2*toMatrixScaling;
             const real_t elMat_11_3 = q_acc_11_3*toMatrixScaling;
             const real_t elMat_11_4 = q_acc_11_4*toMatrixScaling;
             const real_t elMat_11_5 = q_acc_11_5*toMatrixScaling;
         
             std::vector< uint_t > _data_rowIdx( 12 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 72 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[6] = ((uint64_t)(_data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[7] = ((uint64_t)(_data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[8] = ((uint64_t)(_data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_rowIdx[9] = ((uint64_t)(_data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[10] = ((uint64_t)(_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_rowIdx[11] = ((uint64_t)(_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_1_0));
             _data_mat[7] = ((real_t)(elMat_1_1));
             _data_mat[8] = ((real_t)(elMat_1_2));
             _data_mat[9] = ((real_t)(elMat_1_3));
             _data_mat[10] = ((real_t)(elMat_1_4));
             _data_mat[11] = ((real_t)(elMat_1_5));
             _data_mat[12] = ((real_t)(elMat_2_0));
             _data_mat[13] = ((real_t)(elMat_2_1));
             _data_mat[14] = ((real_t)(elMat_2_2));
             _data_mat[15] = ((real_t)(elMat_2_3));
             _data_mat[16] = ((real_t)(elMat_2_4));
             _data_mat[17] = ((real_t)(elMat_2_5));
             _data_mat[18] = ((real_t)(elMat_3_0));
             _data_mat[19] = ((real_t)(elMat_3_1));
             _data_mat[20] = ((real_t)(elMat_3_2));
             _data_mat[21] = ((real_t)(elMat_3_3));
             _data_mat[22] = ((real_t)(elMat_3_4));
             _data_mat[23] = ((real_t)(elMat_3_5));
             _data_mat[24] = ((real_t)(elMat_4_0));
             _data_mat[25] = ((real_t)(elMat_4_1));
             _data_mat[26] = ((real_t)(elMat_4_2));
             _data_mat[27] = ((real_t)(elMat_4_3));
             _data_mat[28] = ((real_t)(elMat_4_4));
             _data_mat[29] = ((real_t)(elMat_4_5));
             _data_mat[30] = ((real_t)(elMat_5_0));
             _data_mat[31] = ((real_t)(elMat_5_1));
             _data_mat[32] = ((real_t)(elMat_5_2));
             _data_mat[33] = ((real_t)(elMat_5_3));
             _data_mat[34] = ((real_t)(elMat_5_4));
             _data_mat[35] = ((real_t)(elMat_5_5));
             _data_mat[36] = ((real_t)(elMat_6_0));
             _data_mat[37] = ((real_t)(elMat_6_1));
             _data_mat[38] = ((real_t)(elMat_6_2));
             _data_mat[39] = ((real_t)(elMat_6_3));
             _data_mat[40] = ((real_t)(elMat_6_4));
             _data_mat[41] = ((real_t)(elMat_6_5));
             _data_mat[42] = ((real_t)(elMat_7_0));
             _data_mat[43] = ((real_t)(elMat_7_1));
             _data_mat[44] = ((real_t)(elMat_7_2));
             _data_mat[45] = ((real_t)(elMat_7_3));
             _data_mat[46] = ((real_t)(elMat_7_4));
             _data_mat[47] = ((real_t)(elMat_7_5));
             _data_mat[48] = ((real_t)(elMat_8_0));
             _data_mat[49] = ((real_t)(elMat_8_1));
             _data_mat[50] = ((real_t)(elMat_8_2));
             _data_mat[51] = ((real_t)(elMat_8_3));
             _data_mat[52] = ((real_t)(elMat_8_4));
             _data_mat[53] = ((real_t)(elMat_8_5));
             _data_mat[54] = ((real_t)(elMat_9_0));
             _data_mat[55] = ((real_t)(elMat_9_1));
             _data_mat[56] = ((real_t)(elMat_9_2));
             _data_mat[57] = ((real_t)(elMat_9_3));
             _data_mat[58] = ((real_t)(elMat_9_4));
             _data_mat[59] = ((real_t)(elMat_9_5));
             _data_mat[60] = ((real_t)(elMat_10_0));
             _data_mat[61] = ((real_t)(elMat_10_1));
             _data_mat[62] = ((real_t)(elMat_10_2));
             _data_mat[63] = ((real_t)(elMat_10_3));
             _data_mat[64] = ((real_t)(elMat_10_4));
             _data_mat[65] = ((real_t)(elMat_10_5));
             _data_mat[66] = ((real_t)(elMat_11_0));
             _data_mat[67] = ((real_t)(elMat_11_1));
             _data_mat[68] = ((real_t)(elMat_11_2));
             _data_mat[69] = ((real_t)(elMat_11_3));
             _data_mat[70] = ((real_t)(elMat_11_4));
             _data_mat[71] = ((real_t)(elMat_11_5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
