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



























#include "../P2ElementwiseFullStokes_0_1.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseFullStokes_0_1::toMatrix_P2ElementwiseFullStokes_0_1_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_muEdge, real_t * RESTRICT  _data_muVertex, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
   
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
       const real_t tmp_coords_jac_1_GRAY = jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY;
       const real_t tmp_coords_jac_2_GRAY = 1.0 / (tmp_coords_jac_1_GRAY);
       const real_t jac_affine_inv_0_0_GRAY = jac_affine_1_1_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_0_0_GRAY [] = {-0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448};
      
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333304 + jac_affine_inv_1_0_GRAY*0.33333333333333304)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_0_GRAY*1.6666666666666665)), ((real_t)(jac_affine_inv_0_0_GRAY*2.6666666666666665 + jac_affine_inv_1_0_GRAY*0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.6666666666666665 + jac_affine_inv_1_0_GRAY*-1.9999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_0_GRAY*-0.66666666666666663)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333315 + jac_affine_inv_1_0_GRAY*0.33333333333333315)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*1.6666666666666665)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_0_GRAY*0.66666666666666663 + jac_affine_inv_1_0_GRAY*2.6666666666666665)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.66666666666666663 + jac_affine_inv_1_0_GRAY*4.4408920985006262e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.9999999999999996 + jac_affine_inv_1_0_GRAY*-2.6666666666666665)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-1.666666666666667 + jac_affine_inv_1_0_GRAY*-1.666666666666667)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_0_GRAY*0.66666666666666663 + jac_affine_inv_1_0_GRAY*0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.66666666666666663 + jac_affine_inv_1_0_GRAY*2.0000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*2.0000000000000004 + jac_affine_inv_1_0_GRAY*-0.66666666666666663))};
      
          const real_t _data_tabulated_and_untitled_0_1_GRAY [] = {((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333304 + jac_affine_inv_1_0_GRAY*0.33333333333333304)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_0_GRAY*1.6666666666666665)), ((real_t)(jac_affine_inv_0_0_GRAY*2.6666666666666665 + jac_affine_inv_1_0_GRAY*0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.6666666666666665 + jac_affine_inv_1_0_GRAY*-1.9999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_0_GRAY*-0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333315 + jac_affine_inv_1_0_GRAY*0.33333333333333315)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*1.6666666666666665)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_0_GRAY*0.66666666666666663 + jac_affine_inv_1_0_GRAY*2.6666666666666665)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.66666666666666663 + jac_affine_inv_1_0_GRAY*4.4408920985006262e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.9999999999999996 + jac_affine_inv_1_0_GRAY*-2.6666666666666665)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.666666666666667 + jac_affine_inv_1_0_GRAY*-1.666666666666667)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_0_GRAY*0.66666666666666663 + jac_affine_inv_1_0_GRAY*0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.66666666666666663 + jac_affine_inv_1_0_GRAY*2.0000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*2.0000000000000004 + jac_affine_inv_1_0_GRAY*-0.66666666666666663))};
      
          const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333304 + jac_affine_inv_1_1_GRAY*0.33333333333333304)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_1_GRAY*1.6666666666666665)), ((real_t)(jac_affine_inv_0_1_GRAY*2.6666666666666665 + jac_affine_inv_1_1_GRAY*0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.6666666666666665 + jac_affine_inv_1_1_GRAY*-1.9999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333315 + jac_affine_inv_1_1_GRAY*0.33333333333333315)), ((real_t)(jac_affine_inv_0_1_GRAY*1.6666666666666665)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.6666666666666665)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*4.4408920985006262e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.9999999999999996 + jac_affine_inv_1_1_GRAY*-2.6666666666666665)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-1.666666666666667 + jac_affine_inv_1_1_GRAY*-1.666666666666667)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.0000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*2.0000000000000004 + jac_affine_inv_1_1_GRAY*-0.66666666666666663))};
      
          const real_t _data_tabulated_and_untitled_1_1_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333304 + jac_affine_inv_1_1_GRAY*0.33333333333333304)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_1_GRAY*1.6666666666666665)), ((real_t)(jac_affine_inv_0_1_GRAY*2.6666666666666665 + jac_affine_inv_1_1_GRAY*0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.6666666666666665 + jac_affine_inv_1_1_GRAY*-1.9999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333315 + jac_affine_inv_1_1_GRAY*0.33333333333333315)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*1.6666666666666665)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.6666666666666665)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*4.4408920985006262e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.9999999999999996 + jac_affine_inv_1_1_GRAY*-2.6666666666666665)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.666666666666667 + jac_affine_inv_1_1_GRAY*-1.666666666666667)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.0000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*2.0000000000000004 + jac_affine_inv_1_1_GRAY*-0.66666666666666663))};
      
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
             const real_t mu_dof_0 = _data_muVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t mu_dof_1 = _data_muVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t mu_dof_2 = _data_muVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t mu_dof_3 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t mu_dof_4 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t mu_dof_5 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_qloop_0 = 0.66666666666666663*_data_tabulated_and_untitled_0_0_GRAY[8*q];
                const real_t tmp_qloop_1 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_GRAY[7*q];
                const real_t tmp_qloop_2 = (_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 1])*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_3 = 2.0*_data_tabulated_and_untitled_0_0_GRAY[8*q];
                const real_t tmp_qloop_4 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1];
                const real_t tmp_qloop_5 = 2.0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 1];
                const real_t tmp_qloop_6 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_GRAY[7*q];
                const real_t tmp_qloop_7 = _data_tabulated_and_untitled_0_1_GRAY[7*q] + _data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_8 = 0.5*_data_tabulated_and_untitled_0_1_GRAY[7*q + 1];
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_GRAY[7*q + 1];
                const real_t tmp_qloop_10 = (mu_dof_0*_data_phi_0_0_GRAY[6*q] + mu_dof_1*_data_phi_0_0_GRAY[6*q + 1] + mu_dof_2*_data_phi_0_0_GRAY[6*q + 2] + mu_dof_3*_data_phi_0_0_GRAY[6*q + 3] + mu_dof_4*_data_phi_0_0_GRAY[6*q + 4] + mu_dof_5*_data_phi_0_0_GRAY[6*q + 5])*_data_q_w[q];
                const real_t tmp_qloop_11 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_GRAY[7*q + 2];
                const real_t tmp_qloop_12 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_GRAY[7*q + 2];
                const real_t tmp_qloop_13 = _data_tabulated_and_untitled_0_1_GRAY[7*q + 2] + _data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_14 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_GRAY[7*q + 3];
                const real_t tmp_qloop_15 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_GRAY[7*q + 3];
                const real_t tmp_qloop_16 = _data_tabulated_and_untitled_0_1_GRAY[7*q + 3] + _data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_17 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_GRAY[7*q + 4];
                const real_t tmp_qloop_18 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_GRAY[7*q + 4];
                const real_t tmp_qloop_19 = _data_tabulated_and_untitled_0_1_GRAY[7*q + 4] + _data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_20 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_GRAY[7*q + 5];
                const real_t tmp_qloop_21 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_GRAY[7*q + 5];
                const real_t tmp_qloop_22 = _data_tabulated_and_untitled_0_1_GRAY[7*q + 5] + _data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_23 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_GRAY[7*q + 6];
                const real_t tmp_qloop_24 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_GRAY[7*q + 6];
                const real_t tmp_qloop_25 = _data_tabulated_and_untitled_0_1_GRAY[7*q + 6] + _data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_26 = (_data_tabulated_and_untitled_0_0_GRAY[8*q + 3] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 1])*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_27 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3];
                const real_t tmp_qloop_28 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_GRAY[7*q + 2];
                const real_t tmp_qloop_29 = (_data_tabulated_and_untitled_0_0_GRAY[8*q + 4] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 1])*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_30 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4];
                const real_t tmp_qloop_31 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_GRAY[7*q + 3];
                const real_t tmp_qloop_32 = (_data_tabulated_and_untitled_0_0_GRAY[8*q + 5] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 1])*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_33 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5];
                const real_t tmp_qloop_34 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_GRAY[7*q + 4];
                const real_t tmp_qloop_35 = (_data_tabulated_and_untitled_0_0_GRAY[8*q + 6] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 1])*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_36 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6];
                const real_t tmp_qloop_37 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_GRAY[7*q + 5];
                const real_t tmp_qloop_38 = (_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 1])*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_39 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7];
                const real_t tmp_qloop_40 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_GRAY[7*q + 6];
                const real_t q_tmp_0_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_2 + (tmp_qloop_4 + tmp_qloop_6 + tmp_qloop_7*tmp_qloop_9)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_0_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_2 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_0_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_2 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_0_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_2 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_0_4 = tmp_qloop_10*(-tmp_qloop_2*tmp_qloop_20 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_0_5 = tmp_qloop_10*(-tmp_qloop_2*tmp_qloop_23 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_1_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_26 + (tmp_qloop_27 + tmp_qloop_28*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_1_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_26 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_1_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_26 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_1_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_26 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_1_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_26 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_1_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_26 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_2_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_29 + (tmp_qloop_30 + tmp_qloop_31*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_2_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_29 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_2_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_29 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_2_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_29 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_2_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_29 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_2_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_29 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_3_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_32 + (tmp_qloop_33 + tmp_qloop_34*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_3_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_32 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_3_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_32 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_3_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_32 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_3_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_32 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_3_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_32 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_4_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_35 + (tmp_qloop_36 + tmp_qloop_37*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_4_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_35 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_4_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_35 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_4_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_35 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_4_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_35 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_4_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_35 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_5_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_38 + (tmp_qloop_39 + tmp_qloop_40*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_5_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_38 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_5_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_38 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_5_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_38 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_5_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_38 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
                const real_t q_tmp_5_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_38 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]);
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
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_4_0 = q_acc_4_0;
             const real_t elMat_4_1 = q_acc_4_1;
             const real_t elMat_4_2 = q_acc_4_2;
             const real_t elMat_4_3 = q_acc_4_3;
             const real_t elMat_4_4 = q_acc_4_4;
             const real_t elMat_4_5 = q_acc_4_5;
             const real_t elMat_5_0 = q_acc_5_0;
             const real_t elMat_5_1 = q_acc_5_1;
             const real_t elMat_5_2 = q_acc_5_2;
             const real_t elMat_5_3 = q_acc_5_3;
             const real_t elMat_5_4 = q_acc_5_4;
             const real_t elMat_5_5 = q_acc_5_5;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
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
       const real_t tmp_coords_jac_5_BLUE = jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE;
       const real_t tmp_coords_jac_6_BLUE = 1.0 / (tmp_coords_jac_5_BLUE);
       const real_t jac_affine_inv_0_0_BLUE = jac_affine_1_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t abs_det_jac_affine_BLUE = abs(tmp_coords_jac_5_BLUE);
       {
          /* FaceType.BLUE */
          const real_t _data_phi_0_0_BLUE [] = {-0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333304 + jac_affine_inv_1_0_BLUE*0.33333333333333304)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_0_BLUE*1.6666666666666665)), ((real_t)(jac_affine_inv_0_0_BLUE*2.6666666666666665 + jac_affine_inv_1_0_BLUE*0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.6666666666666665 + jac_affine_inv_1_0_BLUE*-1.9999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_0_BLUE*-0.66666666666666663)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333315 + jac_affine_inv_1_0_BLUE*0.33333333333333315)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*1.6666666666666665)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_0_BLUE*0.66666666666666663 + jac_affine_inv_1_0_BLUE*2.6666666666666665)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.66666666666666663 + jac_affine_inv_1_0_BLUE*4.4408920985006262e-16)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.9999999999999996 + jac_affine_inv_1_0_BLUE*-2.6666666666666665)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-1.666666666666667 + jac_affine_inv_1_0_BLUE*-1.666666666666667)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_0_BLUE*0.66666666666666663 + jac_affine_inv_1_0_BLUE*0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.66666666666666663 + jac_affine_inv_1_0_BLUE*2.0000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*2.0000000000000004 + jac_affine_inv_1_0_BLUE*-0.66666666666666663))};
      
          const real_t _data_tabulated_and_untitled_0_1_BLUE [] = {((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333304 + jac_affine_inv_1_0_BLUE*0.33333333333333304)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_0_BLUE*1.6666666666666665)), ((real_t)(jac_affine_inv_0_0_BLUE*2.6666666666666665 + jac_affine_inv_1_0_BLUE*0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.6666666666666665 + jac_affine_inv_1_0_BLUE*-1.9999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_0_BLUE*-0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333315 + jac_affine_inv_1_0_BLUE*0.33333333333333315)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*1.6666666666666665)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_0_BLUE*0.66666666666666663 + jac_affine_inv_1_0_BLUE*2.6666666666666665)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.66666666666666663 + jac_affine_inv_1_0_BLUE*4.4408920985006262e-16)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.9999999999999996 + jac_affine_inv_1_0_BLUE*-2.6666666666666665)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.666666666666667 + jac_affine_inv_1_0_BLUE*-1.666666666666667)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_0_BLUE*0.66666666666666663 + jac_affine_inv_1_0_BLUE*0.66666666666666663)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.66666666666666663 + jac_affine_inv_1_0_BLUE*2.0000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*2.0000000000000004 + jac_affine_inv_1_0_BLUE*-0.66666666666666663))};
      
          const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333304 + jac_affine_inv_1_1_BLUE*0.33333333333333304)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_1_BLUE*1.6666666666666665)), ((real_t)(jac_affine_inv_0_1_BLUE*2.6666666666666665 + jac_affine_inv_1_1_BLUE*0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.6666666666666665 + jac_affine_inv_1_1_BLUE*-1.9999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333315 + jac_affine_inv_1_1_BLUE*0.33333333333333315)), ((real_t)(jac_affine_inv_0_1_BLUE*1.6666666666666665)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.6666666666666665)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*4.4408920985006262e-16)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.9999999999999996 + jac_affine_inv_1_1_BLUE*-2.6666666666666665)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-1.666666666666667 + jac_affine_inv_1_1_BLUE*-1.666666666666667)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.0000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*2.0000000000000004 + jac_affine_inv_1_1_BLUE*-0.66666666666666663))};
      
          const real_t _data_tabulated_and_untitled_1_1_BLUE [] = {((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333304 + jac_affine_inv_1_1_BLUE*0.33333333333333304)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_1_BLUE*1.6666666666666665)), ((real_t)(jac_affine_inv_0_1_BLUE*2.6666666666666665 + jac_affine_inv_1_1_BLUE*0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.6666666666666665 + jac_affine_inv_1_1_BLUE*-1.9999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333315 + jac_affine_inv_1_1_BLUE*0.33333333333333315)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*1.6666666666666665)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.6666666666666665)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*4.4408920985006262e-16)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.9999999999999996 + jac_affine_inv_1_1_BLUE*-2.6666666666666665)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.666666666666667 + jac_affine_inv_1_1_BLUE*-1.666666666666667)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.33333333333333337)), ((real_t)(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*0.66666666666666663)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.0000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*2.0000000000000004 + jac_affine_inv_1_1_BLUE*-0.66666666666666663))};
      
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
             const real_t mu_dof_0 = _data_muVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t mu_dof_1 = _data_muVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t mu_dof_2 = _data_muVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t mu_dof_3 = _data_muEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t mu_dof_4 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t mu_dof_5 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
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
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_qloop_0 = 0.66666666666666663*_data_tabulated_and_untitled_0_0_BLUE[8*q];
                const real_t tmp_qloop_1 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_BLUE[7*q];
                const real_t tmp_qloop_2 = (_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 1])*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_3 = 2.0*_data_tabulated_and_untitled_0_0_BLUE[8*q];
                const real_t tmp_qloop_4 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1];
                const real_t tmp_qloop_5 = 2.0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 1];
                const real_t tmp_qloop_6 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_BLUE[7*q];
                const real_t tmp_qloop_7 = _data_tabulated_and_untitled_0_1_BLUE[7*q] + _data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_8 = 0.5*_data_tabulated_and_untitled_0_1_BLUE[7*q + 1];
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_BLUE[7*q + 1];
                const real_t tmp_qloop_10 = (mu_dof_0*_data_phi_0_0_BLUE[6*q] + mu_dof_1*_data_phi_0_0_BLUE[6*q + 1] + mu_dof_2*_data_phi_0_0_BLUE[6*q + 2] + mu_dof_3*_data_phi_0_0_BLUE[6*q + 3] + mu_dof_4*_data_phi_0_0_BLUE[6*q + 4] + mu_dof_5*_data_phi_0_0_BLUE[6*q + 5])*_data_q_w[q];
                const real_t tmp_qloop_11 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_BLUE[7*q + 2];
                const real_t tmp_qloop_12 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_BLUE[7*q + 2];
                const real_t tmp_qloop_13 = _data_tabulated_and_untitled_0_1_BLUE[7*q + 2] + _data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_14 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_BLUE[7*q + 3];
                const real_t tmp_qloop_15 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_BLUE[7*q + 3];
                const real_t tmp_qloop_16 = _data_tabulated_and_untitled_0_1_BLUE[7*q + 3] + _data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_17 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_BLUE[7*q + 4];
                const real_t tmp_qloop_18 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_BLUE[7*q + 4];
                const real_t tmp_qloop_19 = _data_tabulated_and_untitled_0_1_BLUE[7*q + 4] + _data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_20 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_BLUE[7*q + 5];
                const real_t tmp_qloop_21 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_BLUE[7*q + 5];
                const real_t tmp_qloop_22 = _data_tabulated_and_untitled_0_1_BLUE[7*q + 5] + _data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_23 = tmp_qloop_0 + 0.66666666666666663*_data_tabulated_and_untitled_1_1_BLUE[7*q + 6];
                const real_t tmp_qloop_24 = tmp_qloop_5*_data_tabulated_and_untitled_1_1_BLUE[7*q + 6];
                const real_t tmp_qloop_25 = _data_tabulated_and_untitled_0_1_BLUE[7*q + 6] + _data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_26 = (_data_tabulated_and_untitled_0_0_BLUE[8*q + 3] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 1])*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_27 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_BLUE[8*q + 3];
                const real_t tmp_qloop_28 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_BLUE[7*q + 2];
                const real_t tmp_qloop_29 = (_data_tabulated_and_untitled_0_0_BLUE[8*q + 4] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 1])*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_30 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_BLUE[8*q + 4];
                const real_t tmp_qloop_31 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_BLUE[7*q + 3];
                const real_t tmp_qloop_32 = (_data_tabulated_and_untitled_0_0_BLUE[8*q + 5] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 1])*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_33 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_BLUE[8*q + 5];
                const real_t tmp_qloop_34 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_BLUE[7*q + 4];
                const real_t tmp_qloop_35 = (_data_tabulated_and_untitled_0_0_BLUE[8*q + 6] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 1])*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_36 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_BLUE[8*q + 6];
                const real_t tmp_qloop_37 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_BLUE[7*q + 5];
                const real_t tmp_qloop_38 = (_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 1])*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_39 = tmp_qloop_3*_data_tabulated_and_untitled_0_0_BLUE[8*q + 7];
                const real_t tmp_qloop_40 = tmp_qloop_8*2.0 + _data_tabulated_and_untitled_1_0_BLUE[7*q + 6];
                const real_t q_tmp_0_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_2 + (tmp_qloop_4 + tmp_qloop_6 + tmp_qloop_7*tmp_qloop_9)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_0_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_2 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_0_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_2 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_0_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_2 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_0_4 = tmp_qloop_10*(-tmp_qloop_2*tmp_qloop_20 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_0_5 = tmp_qloop_10*(-tmp_qloop_2*tmp_qloop_23 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_9 + tmp_qloop_4)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_1_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_26 + (tmp_qloop_27 + tmp_qloop_28*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_1_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_26 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_1_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_26 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_1_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_26 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_1_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_26 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_1_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_26 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_28 + tmp_qloop_27)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_2_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_29 + (tmp_qloop_30 + tmp_qloop_31*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_2_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_29 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_2_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_29 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_2_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_29 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_2_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_29 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_2_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_29 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_31 + tmp_qloop_30)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_3_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_32 + (tmp_qloop_33 + tmp_qloop_34*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_3_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_32 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_3_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_32 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_3_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_32 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_3_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_32 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_3_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_32 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_34 + tmp_qloop_33)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_4_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_35 + (tmp_qloop_36 + tmp_qloop_37*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_4_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_35 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_4_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_35 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_4_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_35 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_4_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_35 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_4_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_35 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_37 + tmp_qloop_36)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_5_0 = tmp_qloop_10*(-tmp_qloop_1*tmp_qloop_38 + (tmp_qloop_39 + tmp_qloop_40*tmp_qloop_7 + tmp_qloop_6)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_5_1 = tmp_qloop_10*(-tmp_qloop_11*tmp_qloop_38 + (tmp_qloop_12 + tmp_qloop_13*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_5_2 = tmp_qloop_10*(-tmp_qloop_14*tmp_qloop_38 + (tmp_qloop_15 + tmp_qloop_16*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_5_3 = tmp_qloop_10*(-tmp_qloop_17*tmp_qloop_38 + (tmp_qloop_18 + tmp_qloop_19*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_5_4 = tmp_qloop_10*(-tmp_qloop_20*tmp_qloop_38 + (tmp_qloop_21 + tmp_qloop_22*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
                const real_t q_tmp_5_5 = tmp_qloop_10*(-tmp_qloop_23*tmp_qloop_38 + (tmp_qloop_24 + tmp_qloop_25*tmp_qloop_40 + tmp_qloop_39)*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]);
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
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_4_0 = q_acc_4_0;
             const real_t elMat_4_1 = q_acc_4_1;
             const real_t elMat_4_2 = q_acc_4_2;
             const real_t elMat_4_3 = q_acc_4_3;
             const real_t elMat_4_4 = q_acc_4_4;
             const real_t elMat_4_5 = q_acc_4_5;
             const real_t elMat_5_0 = q_acc_5_0;
             const real_t elMat_5_1 = q_acc_5_1;
             const real_t elMat_5_2 = q_acc_5_2;
             const real_t elMat_5_3 = q_acc_5_3;
             const real_t elMat_5_4 = q_acc_5_4;
             const real_t elMat_5_5 = q_acc_5_5;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
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
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
