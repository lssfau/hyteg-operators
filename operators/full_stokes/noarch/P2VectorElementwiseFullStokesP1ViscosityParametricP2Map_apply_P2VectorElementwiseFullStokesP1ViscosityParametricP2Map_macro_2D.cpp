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



































#include "../P2VectorElementwiseFullStokesP1ViscosityParametricP2Map.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorElementwiseFullStokesP1ViscosityParametricP2Map::apply_P2VectorElementwiseFullStokesP1ViscosityParametricP2Map_macro_2D( real_t * RESTRICT  _data_dst_edge_0, real_t * RESTRICT  _data_dst_edge_1, real_t * RESTRICT  _data_dst_vertex_0, real_t * RESTRICT  _data_dst_vertex_1, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, real_t * RESTRICT  _data_mu, real_t * RESTRICT  _data_src_edge_0, real_t * RESTRICT  _data_src_edge_1, real_t * RESTRICT  _data_src_vertex_0, real_t * RESTRICT  _data_src_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
   
       const real_t _data_q_p_0 [] = {0.16666666666666666, 0.66666666666666663, 0.16666666666666666};
   
       const real_t _data_q_p_1 [] = {0.66666666666666663, 0.16666666666666666, 0.16666666666666666};
   
       const real_t tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_0_0_GRAY [] = {0.16666666666666674, 0.16666666666666666, 0.66666666666666663, -0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, 0.0, 0.16666666666666671, 0.66666666666666663, 0.16666666666666666, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.0, 0.66666666666666674, 0.16666666666666666, 0.16666666666666666, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448, 0.0};
      
          const real_t _data_phi_1_0_GRAY [] = {0.0, -0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, 0.0, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.0, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448};
      
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {0.33333333333333304, 1.0, -0.33333333333333337, 0.0, 2.6666666666666665, -2.6666666666666665, 4.4408920985006262e-16, 0.33333333333333315, 1.0, 1.6666666666666665, 0.0, 0.66666666666666663, -0.66666666666666663, -1.9999999999999996, -1.666666666666667, 1.0, -0.33333333333333337, 0.0, 0.66666666666666663, -0.66666666666666663, 2.0000000000000004};
      
          const real_t _data_tabulated_and_untitled_0_1_GRAY [] = {0.0, 0.33333333333333304, -0.33333333333333337, 2.6666666666666665, -2.6666666666666665, 4.4408920985006262e-16, 0.0, 0.33333333333333315, 1.6666666666666665, 0.66666666666666663, -0.66666666666666663, -1.9999999999999996, 0.0, -1.666666666666667, -0.33333333333333337, 0.66666666666666663, -0.66666666666666663, 2.0000000000000004};
      
          const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {0.33333333333333304, 0.0, 1.6666666666666665, 0.66666666666666663, -1.9999999999999996, -0.66666666666666663, 0.33333333333333315, 0.0, -0.33333333333333337, 2.6666666666666665, 4.4408920985006262e-16, -2.6666666666666665, -1.666666666666667, 0.0, -0.33333333333333337, 0.66666666666666663, 2.0000000000000004, -0.66666666666666663};
      
          const real_t _data_tabulated_and_untitled_1_1_GRAY [] = {0.0, 0.33333333333333304, 1.6666666666666665, 0.66666666666666663, -1.9999999999999996, -0.66666666666666663, 0.0, 0.33333333333333315, -0.33333333333333337, 2.6666666666666665, 4.4408920985006262e-16, -2.6666666666666665, 0.0, -1.666666666666667, -0.33333333333333337, 0.66666666666666663, 2.0000000000000004, -0.66666666666666663};
      
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
             const real_t src_dof_0 = _data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_3 = _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_4 = _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_5 = _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_6 = _data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_7 = _data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_8 = _data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_9 = _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_10 = _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_11 = _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_0 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_1 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_10 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_11 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_2 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_3 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_4 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_5 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_6 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_7 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_8 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_9 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t mu_dof_0 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t mu_dof_1 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t mu_dof_2 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_0_10 = 0.0;
             real_t q_acc_0_11 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_1_10 = 0.0;
             real_t q_acc_1_11 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_2_10 = 0.0;
             real_t q_acc_2_11 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             real_t q_acc_3_10 = 0.0;
             real_t q_acc_3_11 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_4_6 = 0.0;
             real_t q_acc_4_7 = 0.0;
             real_t q_acc_4_8 = 0.0;
             real_t q_acc_4_9 = 0.0;
             real_t q_acc_4_10 = 0.0;
             real_t q_acc_4_11 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_5_6 = 0.0;
             real_t q_acc_5_7 = 0.0;
             real_t q_acc_5_8 = 0.0;
             real_t q_acc_5_9 = 0.0;
             real_t q_acc_5_10 = 0.0;
             real_t q_acc_5_11 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_6_7 = 0.0;
             real_t q_acc_6_8 = 0.0;
             real_t q_acc_6_9 = 0.0;
             real_t q_acc_6_10 = 0.0;
             real_t q_acc_6_11 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_7_8 = 0.0;
             real_t q_acc_7_9 = 0.0;
             real_t q_acc_7_10 = 0.0;
             real_t q_acc_7_11 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_8_9 = 0.0;
             real_t q_acc_8_10 = 0.0;
             real_t q_acc_8_11 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_9_10 = 0.0;
             real_t q_acc_9_11 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_10_11 = 0.0;
             real_t q_acc_11_11 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_1 - 1.0;
                const real_t tmp_qloop_3 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                const real_t tmp_qloop_4 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                const real_t tmp_qloop_5 = micromesh_dof_6*tmp_qloop_4;
                const real_t tmp_qloop_6 = micromesh_dof_10*tmp_qloop_3 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_2 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_5;
                const real_t tmp_qloop_7 = tmp_qloop_0 - 1.0;
                const real_t tmp_qloop_8 = micromesh_dof_0*tmp_qloop_4;
                const real_t tmp_qloop_9 = -tmp_qloop_1 - 8.0*_data_q_p_0[q] + 4.0;
                const real_t tmp_qloop_10 = micromesh_dof_1*tmp_qloop_7 + micromesh_dof_3*tmp_qloop_1 - micromesh_dof_4*tmp_qloop_1 + micromesh_dof_5*tmp_qloop_9 + tmp_qloop_8;
                const real_t tmp_qloop_11 = micromesh_dof_2*tmp_qloop_2 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_3 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_8;
                const real_t tmp_qloop_12 = -micromesh_dof_10*tmp_qloop_1 + micromesh_dof_11*tmp_qloop_9 + micromesh_dof_7*tmp_qloop_7 + micromesh_dof_9*tmp_qloop_1 + tmp_qloop_5;
                const real_t tmp_qloop_13 = tmp_qloop_10*tmp_qloop_6 - tmp_qloop_11*tmp_qloop_12;
                const real_t tmp_qloop_14 = 1.0 / (tmp_qloop_13);
                const real_t tmp_qloop_15 = tmp_qloop_14*tmp_qloop_6;
                const real_t tmp_qloop_16 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q];
                const real_t tmp_qloop_17 = -tmp_qloop_12*tmp_qloop_14;
                const real_t tmp_qloop_18 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q];
                const real_t tmp_qloop_19 = tmp_qloop_10*tmp_qloop_14;
                const real_t tmp_qloop_20 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q];
                const real_t tmp_qloop_21 = tmp_qloop_20*0.66666666666666663;
                const real_t tmp_qloop_22 = -tmp_qloop_11*tmp_qloop_14;
                const real_t tmp_qloop_23 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_GRAY[6*q];
                const real_t tmp_qloop_24 = tmp_qloop_23*0.66666666666666663;
                const real_t tmp_qloop_25 = tmp_qloop_21 + tmp_qloop_24;
                const real_t tmp_qloop_26 = tmp_qloop_20 + tmp_qloop_23;
                const real_t tmp_qloop_27 = abs(tmp_qloop_13)*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                const real_t tmp_qloop_28 = tmp_qloop_27*(tmp_qloop_16 + tmp_qloop_18 + tmp_qloop_26);
                const real_t tmp_qloop_29 = tmp_qloop_16*1.0 + tmp_qloop_18*1.0;
                const real_t tmp_qloop_30 = tmp_qloop_20*1.0;
                const real_t tmp_qloop_31 = tmp_qloop_23*1.0;
                const real_t tmp_qloop_32 = tmp_qloop_30 + tmp_qloop_31;
                const real_t tmp_qloop_33 = tmp_qloop_20*2.0;
                const real_t tmp_qloop_34 = tmp_qloop_23*2.0;
                const real_t tmp_qloop_35 = tmp_qloop_32*(tmp_qloop_33 + tmp_qloop_34);
                const real_t tmp_qloop_36 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q];
                const real_t tmp_qloop_37 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_GRAY[7*q];
                const real_t tmp_qloop_38 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q];
                const real_t tmp_qloop_39 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q];
                const real_t tmp_qloop_40 = tmp_qloop_38 + tmp_qloop_39;
                const real_t tmp_qloop_41 = tmp_qloop_38*0.5;
                const real_t tmp_qloop_42 = tmp_qloop_39*0.5;
                const real_t tmp_qloop_43 = tmp_qloop_41 + tmp_qloop_42;
                const real_t tmp_qloop_44 = tmp_qloop_36 + tmp_qloop_37 + tmp_qloop_43*2.0;
                const real_t tmp_qloop_45 = (mu_dof_0*_data_phi_0_0_GRAY[10*q] + mu_dof_1*_data_phi_0_0_GRAY[10*q + 1] + mu_dof_2*_data_phi_0_0_GRAY[10*q + 2])*_data_q_w[q];
                const real_t tmp_qloop_46 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2];
                const real_t tmp_qloop_47 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                const real_t tmp_qloop_48 = tmp_qloop_47*0.66666666666666663;
                const real_t tmp_qloop_49 = tmp_qloop_25 + tmp_qloop_46*0.66666666666666663 + tmp_qloop_48;
                const real_t tmp_qloop_50 = tmp_qloop_47*2.0;
                const real_t tmp_qloop_51 = tmp_qloop_46*2.0 + tmp_qloop_50;
                const real_t tmp_qloop_52 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                const real_t tmp_qloop_53 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2];
                const real_t tmp_qloop_54 = tmp_qloop_40 + tmp_qloop_52 + tmp_qloop_53;
                const real_t tmp_qloop_55 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3];
                const real_t tmp_qloop_56 = tmp_qloop_55*0.66666666666666663;
                const real_t tmp_qloop_57 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2];
                const real_t tmp_qloop_58 = tmp_qloop_25 + tmp_qloop_56 + tmp_qloop_57*0.66666666666666663;
                const real_t tmp_qloop_59 = tmp_qloop_55*2.0;
                const real_t tmp_qloop_60 = tmp_qloop_57*2.0 + tmp_qloop_59;
                const real_t tmp_qloop_61 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2];
                const real_t tmp_qloop_62 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3];
                const real_t tmp_qloop_63 = tmp_qloop_40 + tmp_qloop_61 + tmp_qloop_62;
                const real_t tmp_qloop_64 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4];
                const real_t tmp_qloop_65 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3];
                const real_t tmp_qloop_66 = tmp_qloop_25 + tmp_qloop_64*0.66666666666666663 + tmp_qloop_65*0.66666666666666663;
                const real_t tmp_qloop_67 = tmp_qloop_64*2.0 + tmp_qloop_65*2.0;
                const real_t tmp_qloop_68 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3];
                const real_t tmp_qloop_69 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4];
                const real_t tmp_qloop_70 = tmp_qloop_40 + tmp_qloop_68 + tmp_qloop_69;
                const real_t tmp_qloop_71 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5];
                const real_t tmp_qloop_72 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4];
                const real_t tmp_qloop_73 = tmp_qloop_25 + tmp_qloop_71*0.66666666666666663 + tmp_qloop_72*0.66666666666666663;
                const real_t tmp_qloop_74 = tmp_qloop_71*2.0 + tmp_qloop_72*2.0;
                const real_t tmp_qloop_75 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4];
                const real_t tmp_qloop_76 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5];
                const real_t tmp_qloop_77 = tmp_qloop_40 + tmp_qloop_75 + tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6];
                const real_t tmp_qloop_79 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5];
                const real_t tmp_qloop_80 = tmp_qloop_25 + tmp_qloop_78*0.66666666666666663 + tmp_qloop_79*0.66666666666666663;
                const real_t tmp_qloop_81 = tmp_qloop_78*2.0 + tmp_qloop_79*2.0;
                const real_t tmp_qloop_82 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5];
                const real_t tmp_qloop_83 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6];
                const real_t tmp_qloop_84 = tmp_qloop_40 + tmp_qloop_82 + tmp_qloop_83;
                const real_t tmp_qloop_85 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 1];
                const real_t tmp_qloop_86 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_GRAY[6*q + 1];
                const real_t tmp_qloop_87 = tmp_qloop_48 + tmp_qloop_56;
                const real_t tmp_qloop_88 = tmp_qloop_85*0.66666666666666663 + tmp_qloop_86*0.66666666666666663 + tmp_qloop_87;
                const real_t tmp_qloop_89 = tmp_qloop_50 + tmp_qloop_59;
                const real_t tmp_qloop_90 = tmp_qloop_29*tmp_qloop_89;
                const real_t tmp_qloop_91 = tmp_qloop_85*2.0 + tmp_qloop_86*2.0;
                const real_t tmp_qloop_92 = tmp_qloop_32*tmp_qloop_91;
                const real_t tmp_qloop_93 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 1];
                const real_t tmp_qloop_94 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 1];
                const real_t tmp_qloop_95 = tmp_qloop_52 + tmp_qloop_62;
                const real_t tmp_qloop_96 = tmp_qloop_93 + tmp_qloop_94 + tmp_qloop_95;
                const real_t tmp_qloop_97 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_GRAY[6*q + 2];
                const real_t tmp_qloop_98 = tmp_qloop_21 + tmp_qloop_87 + tmp_qloop_97*0.66666666666666663;
                const real_t tmp_qloop_99 = tmp_qloop_33 + tmp_qloop_97*2.0;
                const real_t tmp_qloop_100 = tmp_qloop_32*tmp_qloop_99;
                const real_t tmp_qloop_101 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 2];
                const real_t tmp_qloop_102 = tmp_qloop_101 + tmp_qloop_39 + tmp_qloop_95;
                const real_t tmp_qloop_103 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 2];
                const real_t tmp_qloop_104 = tmp_qloop_103*0.66666666666666663 + tmp_qloop_24 + tmp_qloop_87;
                const real_t tmp_qloop_105 = tmp_qloop_103*2.0 + tmp_qloop_34;
                const real_t tmp_qloop_106 = tmp_qloop_105*tmp_qloop_32;
                const real_t tmp_qloop_107 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 2];
                const real_t tmp_qloop_108 = tmp_qloop_107 + tmp_qloop_38 + tmp_qloop_95;
                const real_t tmp_qloop_109 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 3];
                const real_t tmp_qloop_110 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_GRAY[6*q + 3];
                const real_t tmp_qloop_111 = tmp_qloop_109*0.66666666666666663 + tmp_qloop_110*0.66666666666666663 + tmp_qloop_87;
                const real_t tmp_qloop_112 = tmp_qloop_109*2.0 + tmp_qloop_110*2.0;
                const real_t tmp_qloop_113 = tmp_qloop_112*tmp_qloop_32;
                const real_t tmp_qloop_114 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 3];
                const real_t tmp_qloop_115 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 3];
                const real_t tmp_qloop_116 = tmp_qloop_114 + tmp_qloop_115 + tmp_qloop_95;
                const real_t tmp_qloop_117 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 4];
                const real_t tmp_qloop_118 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_GRAY[6*q + 4];
                const real_t tmp_qloop_119 = tmp_qloop_117*0.66666666666666663 + tmp_qloop_118*0.66666666666666663 + tmp_qloop_87;
                const real_t tmp_qloop_120 = tmp_qloop_117*2.0 + tmp_qloop_118*2.0;
                const real_t tmp_qloop_121 = tmp_qloop_120*tmp_qloop_32;
                const real_t tmp_qloop_122 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 4];
                const real_t tmp_qloop_123 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 4];
                const real_t tmp_qloop_124 = tmp_qloop_122 + tmp_qloop_123 + tmp_qloop_95;
                const real_t tmp_qloop_125 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 5];
                const real_t tmp_qloop_126 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_GRAY[6*q + 5];
                const real_t tmp_qloop_127 = tmp_qloop_125*0.66666666666666663 + tmp_qloop_126*0.66666666666666663 + tmp_qloop_87;
                const real_t tmp_qloop_128 = tmp_qloop_125*2.0 + tmp_qloop_126*2.0;
                const real_t tmp_qloop_129 = tmp_qloop_128*tmp_qloop_32;
                const real_t tmp_qloop_130 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 5];
                const real_t tmp_qloop_131 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 5];
                const real_t tmp_qloop_132 = tmp_qloop_130 + tmp_qloop_131 + tmp_qloop_95;
                const real_t tmp_qloop_133 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_46 + tmp_qloop_47);
                const real_t tmp_qloop_134 = tmp_qloop_47*1.0;
                const real_t tmp_qloop_135 = tmp_qloop_134 + tmp_qloop_46*1.0;
                const real_t tmp_qloop_136 = tmp_qloop_52*0.5;
                const real_t tmp_qloop_137 = tmp_qloop_136*2.0 + tmp_qloop_43*2.0 + tmp_qloop_53;
                const real_t tmp_qloop_138 = tmp_qloop_135*tmp_qloop_89;
                const real_t tmp_qloop_139 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_55 + tmp_qloop_57);
                const real_t tmp_qloop_140 = tmp_qloop_55*1.0;
                const real_t tmp_qloop_141 = tmp_qloop_140 + tmp_qloop_57*1.0;
                const real_t tmp_qloop_142 = tmp_qloop_62*0.5;
                const real_t tmp_qloop_143 = tmp_qloop_142*2.0 + tmp_qloop_43*2.0 + tmp_qloop_61;
                const real_t tmp_qloop_144 = tmp_qloop_141*tmp_qloop_89;
                const real_t tmp_qloop_145 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_64 + tmp_qloop_65);
                const real_t tmp_qloop_146 = tmp_qloop_64*1.0 + tmp_qloop_65*1.0;
                const real_t tmp_qloop_147 = tmp_qloop_43*2.0 + tmp_qloop_68 + tmp_qloop_69;
                const real_t tmp_qloop_148 = tmp_qloop_146*tmp_qloop_89;
                const real_t tmp_qloop_149 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_71 + tmp_qloop_72);
                const real_t tmp_qloop_150 = tmp_qloop_71*1.0 + tmp_qloop_72*1.0;
                const real_t tmp_qloop_151 = tmp_qloop_43*2.0 + tmp_qloop_75 + tmp_qloop_76;
                const real_t tmp_qloop_152 = tmp_qloop_150*tmp_qloop_89;
                const real_t tmp_qloop_153 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_78 + tmp_qloop_79);
                const real_t tmp_qloop_154 = tmp_qloop_78*1.0 + tmp_qloop_79*1.0;
                const real_t tmp_qloop_155 = tmp_qloop_43*2.0 + tmp_qloop_82 + tmp_qloop_83;
                const real_t tmp_qloop_156 = tmp_qloop_154*tmp_qloop_89;
                const real_t tmp_qloop_157 = tmp_qloop_47 + tmp_qloop_55;
                const real_t tmp_qloop_158 = tmp_qloop_27*(tmp_qloop_157 + tmp_qloop_85 + tmp_qloop_86);
                const real_t tmp_qloop_159 = tmp_qloop_89*(tmp_qloop_134 + tmp_qloop_140);
                const real_t tmp_qloop_160 = tmp_qloop_85*1.0 + tmp_qloop_86*1.0;
                const real_t tmp_qloop_161 = tmp_qloop_136 + tmp_qloop_142;
                const real_t tmp_qloop_162 = tmp_qloop_161*2.0 + tmp_qloop_93 + tmp_qloop_94;
                const real_t tmp_qloop_163 = tmp_qloop_27*(tmp_qloop_157 + tmp_qloop_20 + tmp_qloop_97);
                const real_t tmp_qloop_164 = tmp_qloop_30 + tmp_qloop_97*1.0;
                const real_t tmp_qloop_165 = tmp_qloop_101 + tmp_qloop_161*2.0 + tmp_qloop_42*2.0;
                const real_t tmp_qloop_166 = tmp_qloop_27*(tmp_qloop_103 + tmp_qloop_157 + tmp_qloop_23);
                const real_t tmp_qloop_167 = tmp_qloop_103*1.0 + tmp_qloop_31;
                const real_t tmp_qloop_168 = tmp_qloop_107 + tmp_qloop_161*2.0 + tmp_qloop_41*2.0;
                const real_t tmp_qloop_169 = tmp_qloop_27*(tmp_qloop_109 + tmp_qloop_110 + tmp_qloop_157);
                const real_t tmp_qloop_170 = tmp_qloop_109*1.0 + tmp_qloop_110*1.0;
                const real_t tmp_qloop_171 = tmp_qloop_114 + tmp_qloop_115 + tmp_qloop_161*2.0;
                const real_t tmp_qloop_172 = tmp_qloop_27*(tmp_qloop_117 + tmp_qloop_118 + tmp_qloop_157);
                const real_t tmp_qloop_173 = tmp_qloop_117*1.0 + tmp_qloop_118*1.0;
                const real_t tmp_qloop_174 = tmp_qloop_122 + tmp_qloop_123 + tmp_qloop_161*2.0;
                const real_t q_tmp_0_0 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*(tmp_qloop_16*2.0 + tmp_qloop_18*2.0) + tmp_qloop_35 + tmp_qloop_44*(tmp_qloop_36 + tmp_qloop_37 + tmp_qloop_40)) - tmp_qloop_28*(tmp_qloop_16*0.66666666666666663 + tmp_qloop_18*0.66666666666666663 + tmp_qloop_25));
                const real_t q_tmp_0_1 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_51 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_54) - tmp_qloop_28*tmp_qloop_49);
                const real_t q_tmp_0_2 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_60 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_63) - tmp_qloop_28*tmp_qloop_58);
                const real_t q_tmp_0_3 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_67 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_70) - tmp_qloop_28*tmp_qloop_66);
                const real_t q_tmp_0_4 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_74 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_77) - tmp_qloop_28*tmp_qloop_73);
                const real_t q_tmp_0_5 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_81 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_84) - tmp_qloop_28*tmp_qloop_80);
                const real_t q_tmp_0_6 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_44*tmp_qloop_96 + tmp_qloop_90 + tmp_qloop_92) - tmp_qloop_28*tmp_qloop_88);
                const real_t q_tmp_0_7 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_44 + tmp_qloop_90) - tmp_qloop_28*tmp_qloop_98);
                const real_t q_tmp_0_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_28 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_44 + tmp_qloop_90));
                const real_t q_tmp_0_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_28 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_44 + tmp_qloop_90));
                const real_t q_tmp_0_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_28 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_44 + tmp_qloop_90));
                const real_t q_tmp_0_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_28 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_44 + tmp_qloop_90));
                const real_t q_tmp_1_1 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_49 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_51 + tmp_qloop_137*tmp_qloop_54 + tmp_qloop_35));
                const real_t q_tmp_1_2 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_58 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_60 + tmp_qloop_137*tmp_qloop_63 + tmp_qloop_35));
                const real_t q_tmp_1_3 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_66 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_67 + tmp_qloop_137*tmp_qloop_70 + tmp_qloop_35));
                const real_t q_tmp_1_4 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_73 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_74 + tmp_qloop_137*tmp_qloop_77 + tmp_qloop_35));
                const real_t q_tmp_1_5 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_81 + tmp_qloop_137*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_1_6 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_137*tmp_qloop_96 + tmp_qloop_138 + tmp_qloop_92));
                const real_t q_tmp_1_7 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_1_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_133 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_1_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_133 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_1_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_133 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_1_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_133 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_2_2 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_58 + tmp_qloop_27*(tmp_qloop_141*tmp_qloop_60 + tmp_qloop_143*tmp_qloop_63 + tmp_qloop_35));
                const real_t q_tmp_2_3 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_66 + tmp_qloop_27*(tmp_qloop_141*tmp_qloop_67 + tmp_qloop_143*tmp_qloop_70 + tmp_qloop_35));
                const real_t q_tmp_2_4 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_73 + tmp_qloop_27*(tmp_qloop_141*tmp_qloop_74 + tmp_qloop_143*tmp_qloop_77 + tmp_qloop_35));
                const real_t q_tmp_2_5 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_141*tmp_qloop_81 + tmp_qloop_143*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_2_6 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_143*tmp_qloop_96 + tmp_qloop_144 + tmp_qloop_92));
                const real_t q_tmp_2_7 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_2_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_139 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_2_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_139 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_2_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_139 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_2_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_139 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_3_3 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_66 + tmp_qloop_27*(tmp_qloop_146*tmp_qloop_67 + tmp_qloop_147*tmp_qloop_70 + tmp_qloop_35));
                const real_t q_tmp_3_4 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_73 + tmp_qloop_27*(tmp_qloop_146*tmp_qloop_74 + tmp_qloop_147*tmp_qloop_77 + tmp_qloop_35));
                const real_t q_tmp_3_5 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_146*tmp_qloop_81 + tmp_qloop_147*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_3_6 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_147*tmp_qloop_96 + tmp_qloop_148 + tmp_qloop_92));
                const real_t q_tmp_3_7 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_3_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_145 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_3_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_145 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_3_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_145 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_3_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_145 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_4_4 = tmp_qloop_45*(-tmp_qloop_149*tmp_qloop_73 + tmp_qloop_27*(tmp_qloop_150*tmp_qloop_74 + tmp_qloop_151*tmp_qloop_77 + tmp_qloop_35));
                const real_t q_tmp_4_5 = tmp_qloop_45*(-tmp_qloop_149*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_150*tmp_qloop_81 + tmp_qloop_151*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_4_6 = tmp_qloop_45*(-tmp_qloop_149*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_151*tmp_qloop_96 + tmp_qloop_152 + tmp_qloop_92));
                const real_t q_tmp_4_7 = tmp_qloop_45*(-tmp_qloop_149*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_4_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_149 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_4_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_149 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_4_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_149 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_4_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_149 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_5_5 = tmp_qloop_45*(-tmp_qloop_153*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_154*tmp_qloop_81 + tmp_qloop_155*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_5_6 = tmp_qloop_45*(-tmp_qloop_153*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_155*tmp_qloop_96 + tmp_qloop_156 + tmp_qloop_92));
                const real_t q_tmp_5_7 = tmp_qloop_45*(-tmp_qloop_153*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_5_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_153 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_5_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_153 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_5_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_153 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_5_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_153 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_6_6 = tmp_qloop_45*(-tmp_qloop_158*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_159 + tmp_qloop_160*tmp_qloop_91 + tmp_qloop_162*tmp_qloop_96));
                const real_t q_tmp_6_7 = tmp_qloop_45*(-tmp_qloop_158*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_102*tmp_qloop_162 + tmp_qloop_159 + tmp_qloop_160*tmp_qloop_99));
                const real_t q_tmp_6_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_158 + tmp_qloop_27*(tmp_qloop_105*tmp_qloop_160 + tmp_qloop_108*tmp_qloop_162 + tmp_qloop_159));
                const real_t q_tmp_6_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_158 + tmp_qloop_27*(tmp_qloop_112*tmp_qloop_160 + tmp_qloop_116*tmp_qloop_162 + tmp_qloop_159));
                const real_t q_tmp_6_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_158 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_160 + tmp_qloop_124*tmp_qloop_162 + tmp_qloop_159));
                const real_t q_tmp_6_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_158 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_160 + tmp_qloop_132*tmp_qloop_162 + tmp_qloop_159));
                const real_t q_tmp_7_7 = tmp_qloop_45*(-tmp_qloop_163*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_102*tmp_qloop_165 + tmp_qloop_159 + tmp_qloop_164*tmp_qloop_99));
                const real_t q_tmp_7_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_163 + tmp_qloop_27*(tmp_qloop_105*tmp_qloop_164 + tmp_qloop_108*tmp_qloop_165 + tmp_qloop_159));
                const real_t q_tmp_7_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_163 + tmp_qloop_27*(tmp_qloop_112*tmp_qloop_164 + tmp_qloop_116*tmp_qloop_165 + tmp_qloop_159));
                const real_t q_tmp_7_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_163 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_164 + tmp_qloop_124*tmp_qloop_165 + tmp_qloop_159));
                const real_t q_tmp_7_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_163 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_164 + tmp_qloop_132*tmp_qloop_165 + tmp_qloop_159));
                const real_t q_tmp_8_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_166 + tmp_qloop_27*(tmp_qloop_105*tmp_qloop_167 + tmp_qloop_108*tmp_qloop_168 + tmp_qloop_159));
                const real_t q_tmp_8_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_166 + tmp_qloop_27*(tmp_qloop_112*tmp_qloop_167 + tmp_qloop_116*tmp_qloop_168 + tmp_qloop_159));
                const real_t q_tmp_8_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_166 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_167 + tmp_qloop_124*tmp_qloop_168 + tmp_qloop_159));
                const real_t q_tmp_8_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_166 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_167 + tmp_qloop_132*tmp_qloop_168 + tmp_qloop_159));
                const real_t q_tmp_9_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_169 + tmp_qloop_27*(tmp_qloop_112*tmp_qloop_170 + tmp_qloop_116*tmp_qloop_171 + tmp_qloop_159));
                const real_t q_tmp_9_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_169 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_170 + tmp_qloop_124*tmp_qloop_171 + tmp_qloop_159));
                const real_t q_tmp_9_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_169 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_170 + tmp_qloop_132*tmp_qloop_171 + tmp_qloop_159));
                const real_t q_tmp_10_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_172 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_173 + tmp_qloop_124*tmp_qloop_174 + tmp_qloop_159));
                const real_t q_tmp_10_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_172 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_173 + tmp_qloop_132*tmp_qloop_174 + tmp_qloop_159));
                const real_t q_tmp_11_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_27*(tmp_qloop_125 + tmp_qloop_126 + tmp_qloop_157) + tmp_qloop_27*(tmp_qloop_128*(tmp_qloop_125*1.0 + tmp_qloop_126*1.0) + tmp_qloop_132*(tmp_qloop_130*0.5 + tmp_qloop_131*0.5 + tmp_qloop_161)*2.0 + tmp_qloop_159));
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_0_10 = q_acc_0_10 + q_tmp_0_10;
                q_acc_0_11 = q_acc_0_11 + q_tmp_0_11;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_1_10 = q_acc_1_10 + q_tmp_1_10;
                q_acc_1_11 = q_acc_1_11 + q_tmp_1_11;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_2_10 = q_acc_2_10 + q_tmp_2_10;
                q_acc_2_11 = q_acc_2_11 + q_tmp_2_11;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
                q_acc_3_10 = q_acc_3_10 + q_tmp_3_10;
                q_acc_3_11 = q_acc_3_11 + q_tmp_3_11;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_4_6 = q_acc_4_6 + q_tmp_4_6;
                q_acc_4_7 = q_acc_4_7 + q_tmp_4_7;
                q_acc_4_8 = q_acc_4_8 + q_tmp_4_8;
                q_acc_4_9 = q_acc_4_9 + q_tmp_4_9;
                q_acc_4_10 = q_acc_4_10 + q_tmp_4_10;
                q_acc_4_11 = q_acc_4_11 + q_tmp_4_11;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_5_6 = q_acc_5_6 + q_tmp_5_6;
                q_acc_5_7 = q_acc_5_7 + q_tmp_5_7;
                q_acc_5_8 = q_acc_5_8 + q_tmp_5_8;
                q_acc_5_9 = q_acc_5_9 + q_tmp_5_9;
                q_acc_5_10 = q_acc_5_10 + q_tmp_5_10;
                q_acc_5_11 = q_acc_5_11 + q_tmp_5_11;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_6_7 = q_acc_6_7 + q_tmp_6_7;
                q_acc_6_8 = q_acc_6_8 + q_tmp_6_8;
                q_acc_6_9 = q_acc_6_9 + q_tmp_6_9;
                q_acc_6_10 = q_acc_6_10 + q_tmp_6_10;
                q_acc_6_11 = q_acc_6_11 + q_tmp_6_11;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_7_8 = q_acc_7_8 + q_tmp_7_8;
                q_acc_7_9 = q_acc_7_9 + q_tmp_7_9;
                q_acc_7_10 = q_acc_7_10 + q_tmp_7_10;
                q_acc_7_11 = q_acc_7_11 + q_tmp_7_11;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_8_9 = q_acc_8_9 + q_tmp_8_9;
                q_acc_8_10 = q_acc_8_10 + q_tmp_8_10;
                q_acc_8_11 = q_acc_8_11 + q_tmp_8_11;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_9_10 = q_acc_9_10 + q_tmp_9_10;
                q_acc_9_11 = q_acc_9_11 + q_tmp_9_11;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_10_11 = q_acc_10_11 + q_tmp_10_11;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_10*src_dof_10 + q_acc_0_11*src_dof_11 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5 + q_acc_0_6*src_dof_6 + q_acc_0_7*src_dof_7 + q_acc_0_8*src_dof_8 + q_acc_0_9*src_dof_9;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_10*src_dof_10 + q_acc_1_11*src_dof_11 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5 + q_acc_1_6*src_dof_6 + q_acc_1_7*src_dof_7 + q_acc_1_8*src_dof_8 + q_acc_1_9*src_dof_9;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_10*src_dof_10 + q_acc_2_11*src_dof_11 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5 + q_acc_2_6*src_dof_6 + q_acc_2_7*src_dof_7 + q_acc_2_8*src_dof_8 + q_acc_2_9*src_dof_9;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_10*src_dof_10 + q_acc_3_11*src_dof_11 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5 + q_acc_3_6*src_dof_6 + q_acc_3_7*src_dof_7 + q_acc_3_8*src_dof_8 + q_acc_3_9*src_dof_9;
             const real_t elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_10*src_dof_10 + q_acc_4_11*src_dof_11 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5 + q_acc_4_6*src_dof_6 + q_acc_4_7*src_dof_7 + q_acc_4_8*src_dof_8 + q_acc_4_9*src_dof_9;
             const real_t elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_10*src_dof_10 + q_acc_5_11*src_dof_11 + q_acc_5_5*src_dof_5 + q_acc_5_6*src_dof_6 + q_acc_5_7*src_dof_7 + q_acc_5_8*src_dof_8 + q_acc_5_9*src_dof_9;
             const real_t elMatVec_6 = q_acc_0_6*src_dof_0 + q_acc_1_6*src_dof_1 + q_acc_2_6*src_dof_2 + q_acc_3_6*src_dof_3 + q_acc_4_6*src_dof_4 + q_acc_5_6*src_dof_5 + q_acc_6_10*src_dof_10 + q_acc_6_11*src_dof_11 + q_acc_6_6*src_dof_6 + q_acc_6_7*src_dof_7 + q_acc_6_8*src_dof_8 + q_acc_6_9*src_dof_9;
             const real_t elMatVec_7 = q_acc_0_7*src_dof_0 + q_acc_1_7*src_dof_1 + q_acc_2_7*src_dof_2 + q_acc_3_7*src_dof_3 + q_acc_4_7*src_dof_4 + q_acc_5_7*src_dof_5 + q_acc_6_7*src_dof_6 + q_acc_7_10*src_dof_10 + q_acc_7_11*src_dof_11 + q_acc_7_7*src_dof_7 + q_acc_7_8*src_dof_8 + q_acc_7_9*src_dof_9;
             const real_t elMatVec_8 = q_acc_0_8*src_dof_0 + q_acc_1_8*src_dof_1 + q_acc_2_8*src_dof_2 + q_acc_3_8*src_dof_3 + q_acc_4_8*src_dof_4 + q_acc_5_8*src_dof_5 + q_acc_6_8*src_dof_6 + q_acc_7_8*src_dof_7 + q_acc_8_10*src_dof_10 + q_acc_8_11*src_dof_11 + q_acc_8_8*src_dof_8 + q_acc_8_9*src_dof_9;
             const real_t elMatVec_9 = q_acc_0_9*src_dof_0 + q_acc_1_9*src_dof_1 + q_acc_2_9*src_dof_2 + q_acc_3_9*src_dof_3 + q_acc_4_9*src_dof_4 + q_acc_5_9*src_dof_5 + q_acc_6_9*src_dof_6 + q_acc_7_9*src_dof_7 + q_acc_8_9*src_dof_8 + q_acc_9_10*src_dof_10 + q_acc_9_11*src_dof_11 + q_acc_9_9*src_dof_9;
             const real_t elMatVec_10 = q_acc_0_10*src_dof_0 + q_acc_10_10*src_dof_10 + q_acc_10_11*src_dof_11 + q_acc_1_10*src_dof_1 + q_acc_2_10*src_dof_2 + q_acc_3_10*src_dof_3 + q_acc_4_10*src_dof_4 + q_acc_5_10*src_dof_5 + q_acc_6_10*src_dof_6 + q_acc_7_10*src_dof_7 + q_acc_8_10*src_dof_8 + q_acc_9_10*src_dof_9;
             const real_t elMatVec_11 = q_acc_0_11*src_dof_0 + q_acc_10_11*src_dof_10 + q_acc_11_11*src_dof_11 + q_acc_1_11*src_dof_1 + q_acc_2_11*src_dof_2 + q_acc_3_11*src_dof_3 + q_acc_4_11*src_dof_4 + q_acc_5_11*src_dof_5 + q_acc_6_11*src_dof_6 + q_acc_7_11*src_dof_7 + q_acc_8_11*src_dof_8 + q_acc_9_11*src_dof_9;
             _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_6 + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_7 + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_8 + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_9 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_10 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_11 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
       {
          /* FaceType.BLUE */
          const real_t _data_phi_0_0_BLUE [] = {0.16666666666666674, 0.16666666666666666, 0.66666666666666663, -0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, 0.0, 0.16666666666666671, 0.66666666666666663, 0.16666666666666666, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.0, 0.66666666666666674, 0.16666666666666666, 0.16666666666666666, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448, 0.0};
      
          const real_t _data_phi_1_0_BLUE [] = {0.0, -0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, 0.0, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.0, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {0.33333333333333304, 1.0, -0.33333333333333337, 0.0, 2.6666666666666665, -2.6666666666666665, 4.4408920985006262e-16, 0.33333333333333315, 1.0, 1.6666666666666665, 0.0, 0.66666666666666663, -0.66666666666666663, -1.9999999999999996, -1.666666666666667, 1.0, -0.33333333333333337, 0.0, 0.66666666666666663, -0.66666666666666663, 2.0000000000000004};
      
          const real_t _data_tabulated_and_untitled_0_1_BLUE [] = {0.0, 0.33333333333333304, -0.33333333333333337, 2.6666666666666665, -2.6666666666666665, 4.4408920985006262e-16, 0.0, 0.33333333333333315, 1.6666666666666665, 0.66666666666666663, -0.66666666666666663, -1.9999999999999996, 0.0, -1.666666666666667, -0.33333333333333337, 0.66666666666666663, -0.66666666666666663, 2.0000000000000004};
      
          const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {0.33333333333333304, 0.0, 1.6666666666666665, 0.66666666666666663, -1.9999999999999996, -0.66666666666666663, 0.33333333333333315, 0.0, -0.33333333333333337, 2.6666666666666665, 4.4408920985006262e-16, -2.6666666666666665, -1.666666666666667, 0.0, -0.33333333333333337, 0.66666666666666663, 2.0000000000000004, -0.66666666666666663};
      
          const real_t _data_tabulated_and_untitled_1_1_BLUE [] = {0.0, 0.33333333333333304, 1.6666666666666665, 0.66666666666666663, -1.9999999999999996, -0.66666666666666663, 0.0, 0.33333333333333315, -0.33333333333333337, 2.6666666666666665, 4.4408920985006262e-16, -2.6666666666666665, 0.0, -1.666666666666667, -0.33333333333333337, 0.66666666666666663, 2.0000000000000004, -0.66666666666666663};
      
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
             const real_t src_dof_0 = _data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_1 = _data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_2 = _data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t src_dof_3 = _data_src_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_4 = _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t src_dof_5 = _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_6 = _data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_7 = _data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_8 = _data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t src_dof_9 = _data_src_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_10 = _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t src_dof_11 = _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_0 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_1 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_10 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t micromesh_dof_11 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_2 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t micromesh_dof_3 = _data_micromesh_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_4 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t micromesh_dof_5 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_6 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_7 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_8 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t micromesh_dof_9 = _data_micromesh_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t mu_dof_0 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t mu_dof_1 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t mu_dof_2 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_0_10 = 0.0;
             real_t q_acc_0_11 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_1_10 = 0.0;
             real_t q_acc_1_11 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_2_10 = 0.0;
             real_t q_acc_2_11 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             real_t q_acc_3_10 = 0.0;
             real_t q_acc_3_11 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_4_6 = 0.0;
             real_t q_acc_4_7 = 0.0;
             real_t q_acc_4_8 = 0.0;
             real_t q_acc_4_9 = 0.0;
             real_t q_acc_4_10 = 0.0;
             real_t q_acc_4_11 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_5_6 = 0.0;
             real_t q_acc_5_7 = 0.0;
             real_t q_acc_5_8 = 0.0;
             real_t q_acc_5_9 = 0.0;
             real_t q_acc_5_10 = 0.0;
             real_t q_acc_5_11 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_6_7 = 0.0;
             real_t q_acc_6_8 = 0.0;
             real_t q_acc_6_9 = 0.0;
             real_t q_acc_6_10 = 0.0;
             real_t q_acc_6_11 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_7_8 = 0.0;
             real_t q_acc_7_9 = 0.0;
             real_t q_acc_7_10 = 0.0;
             real_t q_acc_7_11 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_8_9 = 0.0;
             real_t q_acc_8_10 = 0.0;
             real_t q_acc_8_11 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_9_10 = 0.0;
             real_t q_acc_9_11 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_10_11 = 0.0;
             real_t q_acc_11_11 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_1 - 1.0;
                const real_t tmp_qloop_3 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                const real_t tmp_qloop_4 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                const real_t tmp_qloop_5 = micromesh_dof_6*tmp_qloop_4;
                const real_t tmp_qloop_6 = micromesh_dof_10*tmp_qloop_3 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_2 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_5;
                const real_t tmp_qloop_7 = tmp_qloop_0 - 1.0;
                const real_t tmp_qloop_8 = micromesh_dof_0*tmp_qloop_4;
                const real_t tmp_qloop_9 = -tmp_qloop_1 - 8.0*_data_q_p_0[q] + 4.0;
                const real_t tmp_qloop_10 = micromesh_dof_1*tmp_qloop_7 + micromesh_dof_3*tmp_qloop_1 - micromesh_dof_4*tmp_qloop_1 + micromesh_dof_5*tmp_qloop_9 + tmp_qloop_8;
                const real_t tmp_qloop_11 = micromesh_dof_2*tmp_qloop_2 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_3 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_8;
                const real_t tmp_qloop_12 = -micromesh_dof_10*tmp_qloop_1 + micromesh_dof_11*tmp_qloop_9 + micromesh_dof_7*tmp_qloop_7 + micromesh_dof_9*tmp_qloop_1 + tmp_qloop_5;
                const real_t tmp_qloop_13 = tmp_qloop_10*tmp_qloop_6 - tmp_qloop_11*tmp_qloop_12;
                const real_t tmp_qloop_14 = 1.0 / (tmp_qloop_13);
                const real_t tmp_qloop_15 = tmp_qloop_14*tmp_qloop_6;
                const real_t tmp_qloop_16 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q];
                const real_t tmp_qloop_17 = -tmp_qloop_12*tmp_qloop_14;
                const real_t tmp_qloop_18 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q];
                const real_t tmp_qloop_19 = tmp_qloop_10*tmp_qloop_14;
                const real_t tmp_qloop_20 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q];
                const real_t tmp_qloop_21 = tmp_qloop_20*0.66666666666666663;
                const real_t tmp_qloop_22 = -tmp_qloop_11*tmp_qloop_14;
                const real_t tmp_qloop_23 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_BLUE[6*q];
                const real_t tmp_qloop_24 = tmp_qloop_23*0.66666666666666663;
                const real_t tmp_qloop_25 = tmp_qloop_21 + tmp_qloop_24;
                const real_t tmp_qloop_26 = tmp_qloop_20 + tmp_qloop_23;
                const real_t tmp_qloop_27 = abs(tmp_qloop_13)*_data_tabulated_and_untitled_0_0_BLUE[7*q + 1];
                const real_t tmp_qloop_28 = tmp_qloop_27*(tmp_qloop_16 + tmp_qloop_18 + tmp_qloop_26);
                const real_t tmp_qloop_29 = tmp_qloop_16*1.0 + tmp_qloop_18*1.0;
                const real_t tmp_qloop_30 = tmp_qloop_20*1.0;
                const real_t tmp_qloop_31 = tmp_qloop_23*1.0;
                const real_t tmp_qloop_32 = tmp_qloop_30 + tmp_qloop_31;
                const real_t tmp_qloop_33 = tmp_qloop_20*2.0;
                const real_t tmp_qloop_34 = tmp_qloop_23*2.0;
                const real_t tmp_qloop_35 = tmp_qloop_32*(tmp_qloop_33 + tmp_qloop_34);
                const real_t tmp_qloop_36 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q];
                const real_t tmp_qloop_37 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_BLUE[7*q];
                const real_t tmp_qloop_38 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q];
                const real_t tmp_qloop_39 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q];
                const real_t tmp_qloop_40 = tmp_qloop_38 + tmp_qloop_39;
                const real_t tmp_qloop_41 = tmp_qloop_38*0.5;
                const real_t tmp_qloop_42 = tmp_qloop_39*0.5;
                const real_t tmp_qloop_43 = tmp_qloop_41 + tmp_qloop_42;
                const real_t tmp_qloop_44 = tmp_qloop_36 + tmp_qloop_37 + tmp_qloop_43*2.0;
                const real_t tmp_qloop_45 = (mu_dof_0*_data_phi_0_0_BLUE[10*q] + mu_dof_1*_data_phi_0_0_BLUE[10*q + 1] + mu_dof_2*_data_phi_0_0_BLUE[10*q + 2])*_data_q_w[q];
                const real_t tmp_qloop_46 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2];
                const real_t tmp_qloop_47 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1];
                const real_t tmp_qloop_48 = tmp_qloop_47*0.66666666666666663;
                const real_t tmp_qloop_49 = tmp_qloop_25 + tmp_qloop_46*0.66666666666666663 + tmp_qloop_48;
                const real_t tmp_qloop_50 = tmp_qloop_47*2.0;
                const real_t tmp_qloop_51 = tmp_qloop_46*2.0 + tmp_qloop_50;
                const real_t tmp_qloop_52 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1];
                const real_t tmp_qloop_53 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2];
                const real_t tmp_qloop_54 = tmp_qloop_40 + tmp_qloop_52 + tmp_qloop_53;
                const real_t tmp_qloop_55 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3];
                const real_t tmp_qloop_56 = tmp_qloop_55*0.66666666666666663;
                const real_t tmp_qloop_57 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2];
                const real_t tmp_qloop_58 = tmp_qloop_25 + tmp_qloop_56 + tmp_qloop_57*0.66666666666666663;
                const real_t tmp_qloop_59 = tmp_qloop_55*2.0;
                const real_t tmp_qloop_60 = tmp_qloop_57*2.0 + tmp_qloop_59;
                const real_t tmp_qloop_61 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2];
                const real_t tmp_qloop_62 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3];
                const real_t tmp_qloop_63 = tmp_qloop_40 + tmp_qloop_61 + tmp_qloop_62;
                const real_t tmp_qloop_64 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4];
                const real_t tmp_qloop_65 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3];
                const real_t tmp_qloop_66 = tmp_qloop_25 + tmp_qloop_64*0.66666666666666663 + tmp_qloop_65*0.66666666666666663;
                const real_t tmp_qloop_67 = tmp_qloop_64*2.0 + tmp_qloop_65*2.0;
                const real_t tmp_qloop_68 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3];
                const real_t tmp_qloop_69 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4];
                const real_t tmp_qloop_70 = tmp_qloop_40 + tmp_qloop_68 + tmp_qloop_69;
                const real_t tmp_qloop_71 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5];
                const real_t tmp_qloop_72 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4];
                const real_t tmp_qloop_73 = tmp_qloop_25 + tmp_qloop_71*0.66666666666666663 + tmp_qloop_72*0.66666666666666663;
                const real_t tmp_qloop_74 = tmp_qloop_71*2.0 + tmp_qloop_72*2.0;
                const real_t tmp_qloop_75 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4];
                const real_t tmp_qloop_76 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5];
                const real_t tmp_qloop_77 = tmp_qloop_40 + tmp_qloop_75 + tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6];
                const real_t tmp_qloop_79 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5];
                const real_t tmp_qloop_80 = tmp_qloop_25 + tmp_qloop_78*0.66666666666666663 + tmp_qloop_79*0.66666666666666663;
                const real_t tmp_qloop_81 = tmp_qloop_78*2.0 + tmp_qloop_79*2.0;
                const real_t tmp_qloop_82 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5];
                const real_t tmp_qloop_83 = tmp_qloop_22*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6];
                const real_t tmp_qloop_84 = tmp_qloop_40 + tmp_qloop_82 + tmp_qloop_83;
                const real_t tmp_qloop_85 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 1];
                const real_t tmp_qloop_86 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_BLUE[6*q + 1];
                const real_t tmp_qloop_87 = tmp_qloop_48 + tmp_qloop_56;
                const real_t tmp_qloop_88 = tmp_qloop_85*0.66666666666666663 + tmp_qloop_86*0.66666666666666663 + tmp_qloop_87;
                const real_t tmp_qloop_89 = tmp_qloop_50 + tmp_qloop_59;
                const real_t tmp_qloop_90 = tmp_qloop_29*tmp_qloop_89;
                const real_t tmp_qloop_91 = tmp_qloop_85*2.0 + tmp_qloop_86*2.0;
                const real_t tmp_qloop_92 = tmp_qloop_32*tmp_qloop_91;
                const real_t tmp_qloop_93 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 1];
                const real_t tmp_qloop_94 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 1];
                const real_t tmp_qloop_95 = tmp_qloop_52 + tmp_qloop_62;
                const real_t tmp_qloop_96 = tmp_qloop_93 + tmp_qloop_94 + tmp_qloop_95;
                const real_t tmp_qloop_97 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_BLUE[6*q + 2];
                const real_t tmp_qloop_98 = tmp_qloop_21 + tmp_qloop_87 + tmp_qloop_97*0.66666666666666663;
                const real_t tmp_qloop_99 = tmp_qloop_33 + tmp_qloop_97*2.0;
                const real_t tmp_qloop_100 = tmp_qloop_32*tmp_qloop_99;
                const real_t tmp_qloop_101 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 2];
                const real_t tmp_qloop_102 = tmp_qloop_101 + tmp_qloop_39 + tmp_qloop_95;
                const real_t tmp_qloop_103 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 2];
                const real_t tmp_qloop_104 = tmp_qloop_103*0.66666666666666663 + tmp_qloop_24 + tmp_qloop_87;
                const real_t tmp_qloop_105 = tmp_qloop_103*2.0 + tmp_qloop_34;
                const real_t tmp_qloop_106 = tmp_qloop_105*tmp_qloop_32;
                const real_t tmp_qloop_107 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 2];
                const real_t tmp_qloop_108 = tmp_qloop_107 + tmp_qloop_38 + tmp_qloop_95;
                const real_t tmp_qloop_109 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 3];
                const real_t tmp_qloop_110 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_BLUE[6*q + 3];
                const real_t tmp_qloop_111 = tmp_qloop_109*0.66666666666666663 + tmp_qloop_110*0.66666666666666663 + tmp_qloop_87;
                const real_t tmp_qloop_112 = tmp_qloop_109*2.0 + tmp_qloop_110*2.0;
                const real_t tmp_qloop_113 = tmp_qloop_112*tmp_qloop_32;
                const real_t tmp_qloop_114 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 3];
                const real_t tmp_qloop_115 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 3];
                const real_t tmp_qloop_116 = tmp_qloop_114 + tmp_qloop_115 + tmp_qloop_95;
                const real_t tmp_qloop_117 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 4];
                const real_t tmp_qloop_118 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_BLUE[6*q + 4];
                const real_t tmp_qloop_119 = tmp_qloop_117*0.66666666666666663 + tmp_qloop_118*0.66666666666666663 + tmp_qloop_87;
                const real_t tmp_qloop_120 = tmp_qloop_117*2.0 + tmp_qloop_118*2.0;
                const real_t tmp_qloop_121 = tmp_qloop_120*tmp_qloop_32;
                const real_t tmp_qloop_122 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 4];
                const real_t tmp_qloop_123 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 4];
                const real_t tmp_qloop_124 = tmp_qloop_122 + tmp_qloop_123 + tmp_qloop_95;
                const real_t tmp_qloop_125 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 5];
                const real_t tmp_qloop_126 = tmp_qloop_22*_data_tabulated_and_untitled_0_1_BLUE[6*q + 5];
                const real_t tmp_qloop_127 = tmp_qloop_125*0.66666666666666663 + tmp_qloop_126*0.66666666666666663 + tmp_qloop_87;
                const real_t tmp_qloop_128 = tmp_qloop_125*2.0 + tmp_qloop_126*2.0;
                const real_t tmp_qloop_129 = tmp_qloop_128*tmp_qloop_32;
                const real_t tmp_qloop_130 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 5];
                const real_t tmp_qloop_131 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 5];
                const real_t tmp_qloop_132 = tmp_qloop_130 + tmp_qloop_131 + tmp_qloop_95;
                const real_t tmp_qloop_133 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_46 + tmp_qloop_47);
                const real_t tmp_qloop_134 = tmp_qloop_47*1.0;
                const real_t tmp_qloop_135 = tmp_qloop_134 + tmp_qloop_46*1.0;
                const real_t tmp_qloop_136 = tmp_qloop_52*0.5;
                const real_t tmp_qloop_137 = tmp_qloop_136*2.0 + tmp_qloop_43*2.0 + tmp_qloop_53;
                const real_t tmp_qloop_138 = tmp_qloop_135*tmp_qloop_89;
                const real_t tmp_qloop_139 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_55 + tmp_qloop_57);
                const real_t tmp_qloop_140 = tmp_qloop_55*1.0;
                const real_t tmp_qloop_141 = tmp_qloop_140 + tmp_qloop_57*1.0;
                const real_t tmp_qloop_142 = tmp_qloop_62*0.5;
                const real_t tmp_qloop_143 = tmp_qloop_142*2.0 + tmp_qloop_43*2.0 + tmp_qloop_61;
                const real_t tmp_qloop_144 = tmp_qloop_141*tmp_qloop_89;
                const real_t tmp_qloop_145 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_64 + tmp_qloop_65);
                const real_t tmp_qloop_146 = tmp_qloop_64*1.0 + tmp_qloop_65*1.0;
                const real_t tmp_qloop_147 = tmp_qloop_43*2.0 + tmp_qloop_68 + tmp_qloop_69;
                const real_t tmp_qloop_148 = tmp_qloop_146*tmp_qloop_89;
                const real_t tmp_qloop_149 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_71 + tmp_qloop_72);
                const real_t tmp_qloop_150 = tmp_qloop_71*1.0 + tmp_qloop_72*1.0;
                const real_t tmp_qloop_151 = tmp_qloop_43*2.0 + tmp_qloop_75 + tmp_qloop_76;
                const real_t tmp_qloop_152 = tmp_qloop_150*tmp_qloop_89;
                const real_t tmp_qloop_153 = tmp_qloop_27*(tmp_qloop_26 + tmp_qloop_78 + tmp_qloop_79);
                const real_t tmp_qloop_154 = tmp_qloop_78*1.0 + tmp_qloop_79*1.0;
                const real_t tmp_qloop_155 = tmp_qloop_43*2.0 + tmp_qloop_82 + tmp_qloop_83;
                const real_t tmp_qloop_156 = tmp_qloop_154*tmp_qloop_89;
                const real_t tmp_qloop_157 = tmp_qloop_47 + tmp_qloop_55;
                const real_t tmp_qloop_158 = tmp_qloop_27*(tmp_qloop_157 + tmp_qloop_85 + tmp_qloop_86);
                const real_t tmp_qloop_159 = tmp_qloop_89*(tmp_qloop_134 + tmp_qloop_140);
                const real_t tmp_qloop_160 = tmp_qloop_85*1.0 + tmp_qloop_86*1.0;
                const real_t tmp_qloop_161 = tmp_qloop_136 + tmp_qloop_142;
                const real_t tmp_qloop_162 = tmp_qloop_161*2.0 + tmp_qloop_93 + tmp_qloop_94;
                const real_t tmp_qloop_163 = tmp_qloop_27*(tmp_qloop_157 + tmp_qloop_20 + tmp_qloop_97);
                const real_t tmp_qloop_164 = tmp_qloop_30 + tmp_qloop_97*1.0;
                const real_t tmp_qloop_165 = tmp_qloop_101 + tmp_qloop_161*2.0 + tmp_qloop_42*2.0;
                const real_t tmp_qloop_166 = tmp_qloop_27*(tmp_qloop_103 + tmp_qloop_157 + tmp_qloop_23);
                const real_t tmp_qloop_167 = tmp_qloop_103*1.0 + tmp_qloop_31;
                const real_t tmp_qloop_168 = tmp_qloop_107 + tmp_qloop_161*2.0 + tmp_qloop_41*2.0;
                const real_t tmp_qloop_169 = tmp_qloop_27*(tmp_qloop_109 + tmp_qloop_110 + tmp_qloop_157);
                const real_t tmp_qloop_170 = tmp_qloop_109*1.0 + tmp_qloop_110*1.0;
                const real_t tmp_qloop_171 = tmp_qloop_114 + tmp_qloop_115 + tmp_qloop_161*2.0;
                const real_t tmp_qloop_172 = tmp_qloop_27*(tmp_qloop_117 + tmp_qloop_118 + tmp_qloop_157);
                const real_t tmp_qloop_173 = tmp_qloop_117*1.0 + tmp_qloop_118*1.0;
                const real_t tmp_qloop_174 = tmp_qloop_122 + tmp_qloop_123 + tmp_qloop_161*2.0;
                const real_t q_tmp_0_0 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*(tmp_qloop_16*2.0 + tmp_qloop_18*2.0) + tmp_qloop_35 + tmp_qloop_44*(tmp_qloop_36 + tmp_qloop_37 + tmp_qloop_40)) - tmp_qloop_28*(tmp_qloop_16*0.66666666666666663 + tmp_qloop_18*0.66666666666666663 + tmp_qloop_25));
                const real_t q_tmp_0_1 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_51 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_54) - tmp_qloop_28*tmp_qloop_49);
                const real_t q_tmp_0_2 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_60 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_63) - tmp_qloop_28*tmp_qloop_58);
                const real_t q_tmp_0_3 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_67 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_70) - tmp_qloop_28*tmp_qloop_66);
                const real_t q_tmp_0_4 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_74 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_77) - tmp_qloop_28*tmp_qloop_73);
                const real_t q_tmp_0_5 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_29*tmp_qloop_81 + tmp_qloop_35 + tmp_qloop_44*tmp_qloop_84) - tmp_qloop_28*tmp_qloop_80);
                const real_t q_tmp_0_6 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_44*tmp_qloop_96 + tmp_qloop_90 + tmp_qloop_92) - tmp_qloop_28*tmp_qloop_88);
                const real_t q_tmp_0_7 = tmp_qloop_45*(tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_44 + tmp_qloop_90) - tmp_qloop_28*tmp_qloop_98);
                const real_t q_tmp_0_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_28 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_44 + tmp_qloop_90));
                const real_t q_tmp_0_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_28 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_44 + tmp_qloop_90));
                const real_t q_tmp_0_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_28 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_44 + tmp_qloop_90));
                const real_t q_tmp_0_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_28 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_44 + tmp_qloop_90));
                const real_t q_tmp_1_1 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_49 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_51 + tmp_qloop_137*tmp_qloop_54 + tmp_qloop_35));
                const real_t q_tmp_1_2 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_58 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_60 + tmp_qloop_137*tmp_qloop_63 + tmp_qloop_35));
                const real_t q_tmp_1_3 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_66 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_67 + tmp_qloop_137*tmp_qloop_70 + tmp_qloop_35));
                const real_t q_tmp_1_4 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_73 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_74 + tmp_qloop_137*tmp_qloop_77 + tmp_qloop_35));
                const real_t q_tmp_1_5 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_135*tmp_qloop_81 + tmp_qloop_137*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_1_6 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_137*tmp_qloop_96 + tmp_qloop_138 + tmp_qloop_92));
                const real_t q_tmp_1_7 = tmp_qloop_45*(-tmp_qloop_133*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_1_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_133 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_1_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_133 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_1_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_133 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_1_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_133 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_137 + tmp_qloop_138));
                const real_t q_tmp_2_2 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_58 + tmp_qloop_27*(tmp_qloop_141*tmp_qloop_60 + tmp_qloop_143*tmp_qloop_63 + tmp_qloop_35));
                const real_t q_tmp_2_3 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_66 + tmp_qloop_27*(tmp_qloop_141*tmp_qloop_67 + tmp_qloop_143*tmp_qloop_70 + tmp_qloop_35));
                const real_t q_tmp_2_4 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_73 + tmp_qloop_27*(tmp_qloop_141*tmp_qloop_74 + tmp_qloop_143*tmp_qloop_77 + tmp_qloop_35));
                const real_t q_tmp_2_5 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_141*tmp_qloop_81 + tmp_qloop_143*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_2_6 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_143*tmp_qloop_96 + tmp_qloop_144 + tmp_qloop_92));
                const real_t q_tmp_2_7 = tmp_qloop_45*(-tmp_qloop_139*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_2_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_139 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_2_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_139 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_2_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_139 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_2_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_139 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_143 + tmp_qloop_144));
                const real_t q_tmp_3_3 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_66 + tmp_qloop_27*(tmp_qloop_146*tmp_qloop_67 + tmp_qloop_147*tmp_qloop_70 + tmp_qloop_35));
                const real_t q_tmp_3_4 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_73 + tmp_qloop_27*(tmp_qloop_146*tmp_qloop_74 + tmp_qloop_147*tmp_qloop_77 + tmp_qloop_35));
                const real_t q_tmp_3_5 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_146*tmp_qloop_81 + tmp_qloop_147*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_3_6 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_147*tmp_qloop_96 + tmp_qloop_148 + tmp_qloop_92));
                const real_t q_tmp_3_7 = tmp_qloop_45*(-tmp_qloop_145*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_3_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_145 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_3_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_145 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_3_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_145 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_3_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_145 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_147 + tmp_qloop_148));
                const real_t q_tmp_4_4 = tmp_qloop_45*(-tmp_qloop_149*tmp_qloop_73 + tmp_qloop_27*(tmp_qloop_150*tmp_qloop_74 + tmp_qloop_151*tmp_qloop_77 + tmp_qloop_35));
                const real_t q_tmp_4_5 = tmp_qloop_45*(-tmp_qloop_149*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_150*tmp_qloop_81 + tmp_qloop_151*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_4_6 = tmp_qloop_45*(-tmp_qloop_149*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_151*tmp_qloop_96 + tmp_qloop_152 + tmp_qloop_92));
                const real_t q_tmp_4_7 = tmp_qloop_45*(-tmp_qloop_149*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_4_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_149 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_4_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_149 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_4_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_149 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_4_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_149 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_151 + tmp_qloop_152));
                const real_t q_tmp_5_5 = tmp_qloop_45*(-tmp_qloop_153*tmp_qloop_80 + tmp_qloop_27*(tmp_qloop_154*tmp_qloop_81 + tmp_qloop_155*tmp_qloop_84 + tmp_qloop_35));
                const real_t q_tmp_5_6 = tmp_qloop_45*(-tmp_qloop_153*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_155*tmp_qloop_96 + tmp_qloop_156 + tmp_qloop_92));
                const real_t q_tmp_5_7 = tmp_qloop_45*(-tmp_qloop_153*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_100 + tmp_qloop_102*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_5_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_153 + tmp_qloop_27*(tmp_qloop_106 + tmp_qloop_108*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_5_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_153 + tmp_qloop_27*(tmp_qloop_113 + tmp_qloop_116*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_5_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_153 + tmp_qloop_27*(tmp_qloop_121 + tmp_qloop_124*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_5_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_153 + tmp_qloop_27*(tmp_qloop_129 + tmp_qloop_132*tmp_qloop_155 + tmp_qloop_156));
                const real_t q_tmp_6_6 = tmp_qloop_45*(-tmp_qloop_158*tmp_qloop_88 + tmp_qloop_27*(tmp_qloop_159 + tmp_qloop_160*tmp_qloop_91 + tmp_qloop_162*tmp_qloop_96));
                const real_t q_tmp_6_7 = tmp_qloop_45*(-tmp_qloop_158*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_102*tmp_qloop_162 + tmp_qloop_159 + tmp_qloop_160*tmp_qloop_99));
                const real_t q_tmp_6_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_158 + tmp_qloop_27*(tmp_qloop_105*tmp_qloop_160 + tmp_qloop_108*tmp_qloop_162 + tmp_qloop_159));
                const real_t q_tmp_6_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_158 + tmp_qloop_27*(tmp_qloop_112*tmp_qloop_160 + tmp_qloop_116*tmp_qloop_162 + tmp_qloop_159));
                const real_t q_tmp_6_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_158 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_160 + tmp_qloop_124*tmp_qloop_162 + tmp_qloop_159));
                const real_t q_tmp_6_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_158 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_160 + tmp_qloop_132*tmp_qloop_162 + tmp_qloop_159));
                const real_t q_tmp_7_7 = tmp_qloop_45*(-tmp_qloop_163*tmp_qloop_98 + tmp_qloop_27*(tmp_qloop_102*tmp_qloop_165 + tmp_qloop_159 + tmp_qloop_164*tmp_qloop_99));
                const real_t q_tmp_7_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_163 + tmp_qloop_27*(tmp_qloop_105*tmp_qloop_164 + tmp_qloop_108*tmp_qloop_165 + tmp_qloop_159));
                const real_t q_tmp_7_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_163 + tmp_qloop_27*(tmp_qloop_112*tmp_qloop_164 + tmp_qloop_116*tmp_qloop_165 + tmp_qloop_159));
                const real_t q_tmp_7_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_163 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_164 + tmp_qloop_124*tmp_qloop_165 + tmp_qloop_159));
                const real_t q_tmp_7_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_163 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_164 + tmp_qloop_132*tmp_qloop_165 + tmp_qloop_159));
                const real_t q_tmp_8_8 = tmp_qloop_45*(-tmp_qloop_104*tmp_qloop_166 + tmp_qloop_27*(tmp_qloop_105*tmp_qloop_167 + tmp_qloop_108*tmp_qloop_168 + tmp_qloop_159));
                const real_t q_tmp_8_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_166 + tmp_qloop_27*(tmp_qloop_112*tmp_qloop_167 + tmp_qloop_116*tmp_qloop_168 + tmp_qloop_159));
                const real_t q_tmp_8_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_166 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_167 + tmp_qloop_124*tmp_qloop_168 + tmp_qloop_159));
                const real_t q_tmp_8_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_166 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_167 + tmp_qloop_132*tmp_qloop_168 + tmp_qloop_159));
                const real_t q_tmp_9_9 = tmp_qloop_45*(-tmp_qloop_111*tmp_qloop_169 + tmp_qloop_27*(tmp_qloop_112*tmp_qloop_170 + tmp_qloop_116*tmp_qloop_171 + tmp_qloop_159));
                const real_t q_tmp_9_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_169 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_170 + tmp_qloop_124*tmp_qloop_171 + tmp_qloop_159));
                const real_t q_tmp_9_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_169 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_170 + tmp_qloop_132*tmp_qloop_171 + tmp_qloop_159));
                const real_t q_tmp_10_10 = tmp_qloop_45*(-tmp_qloop_119*tmp_qloop_172 + tmp_qloop_27*(tmp_qloop_120*tmp_qloop_173 + tmp_qloop_124*tmp_qloop_174 + tmp_qloop_159));
                const real_t q_tmp_10_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_172 + tmp_qloop_27*(tmp_qloop_128*tmp_qloop_173 + tmp_qloop_132*tmp_qloop_174 + tmp_qloop_159));
                const real_t q_tmp_11_11 = tmp_qloop_45*(-tmp_qloop_127*tmp_qloop_27*(tmp_qloop_125 + tmp_qloop_126 + tmp_qloop_157) + tmp_qloop_27*(tmp_qloop_128*(tmp_qloop_125*1.0 + tmp_qloop_126*1.0) + tmp_qloop_132*(tmp_qloop_130*0.5 + tmp_qloop_131*0.5 + tmp_qloop_161)*2.0 + tmp_qloop_159));
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_0_10 = q_acc_0_10 + q_tmp_0_10;
                q_acc_0_11 = q_acc_0_11 + q_tmp_0_11;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_1_10 = q_acc_1_10 + q_tmp_1_10;
                q_acc_1_11 = q_acc_1_11 + q_tmp_1_11;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_2_10 = q_acc_2_10 + q_tmp_2_10;
                q_acc_2_11 = q_acc_2_11 + q_tmp_2_11;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
                q_acc_3_10 = q_acc_3_10 + q_tmp_3_10;
                q_acc_3_11 = q_acc_3_11 + q_tmp_3_11;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_4_6 = q_acc_4_6 + q_tmp_4_6;
                q_acc_4_7 = q_acc_4_7 + q_tmp_4_7;
                q_acc_4_8 = q_acc_4_8 + q_tmp_4_8;
                q_acc_4_9 = q_acc_4_9 + q_tmp_4_9;
                q_acc_4_10 = q_acc_4_10 + q_tmp_4_10;
                q_acc_4_11 = q_acc_4_11 + q_tmp_4_11;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_5_6 = q_acc_5_6 + q_tmp_5_6;
                q_acc_5_7 = q_acc_5_7 + q_tmp_5_7;
                q_acc_5_8 = q_acc_5_8 + q_tmp_5_8;
                q_acc_5_9 = q_acc_5_9 + q_tmp_5_9;
                q_acc_5_10 = q_acc_5_10 + q_tmp_5_10;
                q_acc_5_11 = q_acc_5_11 + q_tmp_5_11;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_6_7 = q_acc_6_7 + q_tmp_6_7;
                q_acc_6_8 = q_acc_6_8 + q_tmp_6_8;
                q_acc_6_9 = q_acc_6_9 + q_tmp_6_9;
                q_acc_6_10 = q_acc_6_10 + q_tmp_6_10;
                q_acc_6_11 = q_acc_6_11 + q_tmp_6_11;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_7_8 = q_acc_7_8 + q_tmp_7_8;
                q_acc_7_9 = q_acc_7_9 + q_tmp_7_9;
                q_acc_7_10 = q_acc_7_10 + q_tmp_7_10;
                q_acc_7_11 = q_acc_7_11 + q_tmp_7_11;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_8_9 = q_acc_8_9 + q_tmp_8_9;
                q_acc_8_10 = q_acc_8_10 + q_tmp_8_10;
                q_acc_8_11 = q_acc_8_11 + q_tmp_8_11;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_9_10 = q_acc_9_10 + q_tmp_9_10;
                q_acc_9_11 = q_acc_9_11 + q_tmp_9_11;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_10_11 = q_acc_10_11 + q_tmp_10_11;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_10*src_dof_10 + q_acc_0_11*src_dof_11 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5 + q_acc_0_6*src_dof_6 + q_acc_0_7*src_dof_7 + q_acc_0_8*src_dof_8 + q_acc_0_9*src_dof_9;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_10*src_dof_10 + q_acc_1_11*src_dof_11 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5 + q_acc_1_6*src_dof_6 + q_acc_1_7*src_dof_7 + q_acc_1_8*src_dof_8 + q_acc_1_9*src_dof_9;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_10*src_dof_10 + q_acc_2_11*src_dof_11 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5 + q_acc_2_6*src_dof_6 + q_acc_2_7*src_dof_7 + q_acc_2_8*src_dof_8 + q_acc_2_9*src_dof_9;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_10*src_dof_10 + q_acc_3_11*src_dof_11 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5 + q_acc_3_6*src_dof_6 + q_acc_3_7*src_dof_7 + q_acc_3_8*src_dof_8 + q_acc_3_9*src_dof_9;
             const real_t elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_10*src_dof_10 + q_acc_4_11*src_dof_11 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5 + q_acc_4_6*src_dof_6 + q_acc_4_7*src_dof_7 + q_acc_4_8*src_dof_8 + q_acc_4_9*src_dof_9;
             const real_t elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_10*src_dof_10 + q_acc_5_11*src_dof_11 + q_acc_5_5*src_dof_5 + q_acc_5_6*src_dof_6 + q_acc_5_7*src_dof_7 + q_acc_5_8*src_dof_8 + q_acc_5_9*src_dof_9;
             const real_t elMatVec_6 = q_acc_0_6*src_dof_0 + q_acc_1_6*src_dof_1 + q_acc_2_6*src_dof_2 + q_acc_3_6*src_dof_3 + q_acc_4_6*src_dof_4 + q_acc_5_6*src_dof_5 + q_acc_6_10*src_dof_10 + q_acc_6_11*src_dof_11 + q_acc_6_6*src_dof_6 + q_acc_6_7*src_dof_7 + q_acc_6_8*src_dof_8 + q_acc_6_9*src_dof_9;
             const real_t elMatVec_7 = q_acc_0_7*src_dof_0 + q_acc_1_7*src_dof_1 + q_acc_2_7*src_dof_2 + q_acc_3_7*src_dof_3 + q_acc_4_7*src_dof_4 + q_acc_5_7*src_dof_5 + q_acc_6_7*src_dof_6 + q_acc_7_10*src_dof_10 + q_acc_7_11*src_dof_11 + q_acc_7_7*src_dof_7 + q_acc_7_8*src_dof_8 + q_acc_7_9*src_dof_9;
             const real_t elMatVec_8 = q_acc_0_8*src_dof_0 + q_acc_1_8*src_dof_1 + q_acc_2_8*src_dof_2 + q_acc_3_8*src_dof_3 + q_acc_4_8*src_dof_4 + q_acc_5_8*src_dof_5 + q_acc_6_8*src_dof_6 + q_acc_7_8*src_dof_7 + q_acc_8_10*src_dof_10 + q_acc_8_11*src_dof_11 + q_acc_8_8*src_dof_8 + q_acc_8_9*src_dof_9;
             const real_t elMatVec_9 = q_acc_0_9*src_dof_0 + q_acc_1_9*src_dof_1 + q_acc_2_9*src_dof_2 + q_acc_3_9*src_dof_3 + q_acc_4_9*src_dof_4 + q_acc_5_9*src_dof_5 + q_acc_6_9*src_dof_6 + q_acc_7_9*src_dof_7 + q_acc_8_9*src_dof_8 + q_acc_9_10*src_dof_10 + q_acc_9_11*src_dof_11 + q_acc_9_9*src_dof_9;
             const real_t elMatVec_10 = q_acc_0_10*src_dof_0 + q_acc_10_10*src_dof_10 + q_acc_10_11*src_dof_11 + q_acc_1_10*src_dof_1 + q_acc_2_10*src_dof_2 + q_acc_3_10*src_dof_3 + q_acc_4_10*src_dof_4 + q_acc_5_10*src_dof_5 + q_acc_6_10*src_dof_6 + q_acc_7_10*src_dof_7 + q_acc_8_10*src_dof_8 + q_acc_9_10*src_dof_9;
             const real_t elMatVec_11 = q_acc_0_11*src_dof_0 + q_acc_10_11*src_dof_10 + q_acc_11_11*src_dof_11 + q_acc_1_11*src_dof_1 + q_acc_2_11*src_dof_2 + q_acc_3_11*src_dof_3 + q_acc_4_11*src_dof_4 + q_acc_5_11*src_dof_5 + q_acc_6_11*src_dof_6 + q_acc_7_11*src_dof_7 + q_acc_8_11*src_dof_8 + q_acc_9_11*src_dof_9;
             _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3 + _data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_6 + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_7 + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_8 + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_9 + _data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_10 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_11 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
