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

































#include "../P1ToP2VectorElementwiseGradientParametricP2Map.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ToP2VectorElementwiseGradientParametricP2Map::applyScaled_P1ToP2VectorElementwiseGradientParametricP2Map_macro_2D( real_t * RESTRICT  _data_dst_edge_0, real_t * RESTRICT  _data_dst_edge_1, real_t * RESTRICT  _data_dst_vertex_0, real_t * RESTRICT  _data_dst_vertex_1, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling ) const
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
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {0.33333333333333304, 0.16666666666666674, 0.16666666666666666, 0.66666666666666663, -0.33333333333333337, 0.0, 2.6666666666666665, -2.6666666666666665, 4.4408920985006262e-16, 0.33333333333333315, 0.16666666666666671, 0.66666666666666663, 0.16666666666666666, 1.6666666666666665, 0.0, 0.66666666666666663, -0.66666666666666663, -1.9999999999999996, -1.666666666666667, 0.66666666666666674, 0.16666666666666666, 0.16666666666666666, -0.33333333333333337, 0.0, 0.66666666666666663, -0.66666666666666663, 2.0000000000000004};
      
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
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_4_0 = 0.0;
             real_t q_acc_4_1 = 0.0;
             real_t q_acc_4_2 = 0.0;
             real_t q_acc_5_0 = 0.0;
             real_t q_acc_5_1 = 0.0;
             real_t q_acc_5_2 = 0.0;
             real_t q_acc_6_0 = 0.0;
             real_t q_acc_6_1 = 0.0;
             real_t q_acc_6_2 = 0.0;
             real_t q_acc_7_0 = 0.0;
             real_t q_acc_7_1 = 0.0;
             real_t q_acc_7_2 = 0.0;
             real_t q_acc_8_0 = 0.0;
             real_t q_acc_8_1 = 0.0;
             real_t q_acc_8_2 = 0.0;
             real_t q_acc_9_0 = 0.0;
             real_t q_acc_9_1 = 0.0;
             real_t q_acc_9_2 = 0.0;
             real_t q_acc_10_0 = 0.0;
             real_t q_acc_10_1 = 0.0;
             real_t q_acc_10_2 = 0.0;
             real_t q_acc_11_0 = 0.0;
             real_t q_acc_11_1 = 0.0;
             real_t q_acc_11_2 = 0.0;
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
                const real_t tmp_qloop_16 = -tmp_qloop_12*tmp_qloop_14;
                const real_t tmp_qloop_17 = tmp_qloop_10*tmp_qloop_14;
                const real_t tmp_qloop_18 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q];
                const real_t tmp_qloop_19 = -tmp_qloop_11*tmp_qloop_14;
                const real_t tmp_qloop_20 = tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q];
                const real_t tmp_qloop_21 = tmp_qloop_18 + tmp_qloop_20;
                const real_t tmp_qloop_22 = abs(tmp_qloop_13)*_data_q_w[q];
                const real_t tmp_qloop_23 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[9*q] - tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q] - tmp_qloop_21);
                const real_t tmp_qloop_24 = tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                const real_t tmp_qloop_25 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[9*q + 4] - tmp_qloop_21 - tmp_qloop_24);
                const real_t tmp_qloop_26 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[9*q + 5];
                const real_t tmp_qloop_27 = tmp_qloop_22*(-tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2] - tmp_qloop_21 - tmp_qloop_26);
                const real_t tmp_qloop_28 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[9*q + 6] - tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3] - tmp_qloop_21);
                const real_t tmp_qloop_29 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[9*q + 7] - tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4] - tmp_qloop_21);
                const real_t tmp_qloop_30 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[9*q + 8] - tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5] - tmp_qloop_21);
                const real_t tmp_qloop_31 = tmp_qloop_24 + tmp_qloop_26;
                const real_t tmp_qloop_32 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 1] - tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 1] - tmp_qloop_31);
                const real_t tmp_qloop_33 = tmp_qloop_22*(-tmp_qloop_18 - tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 2] - tmp_qloop_31);
                const real_t tmp_qloop_34 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 2] - tmp_qloop_20 - tmp_qloop_31);
                const real_t tmp_qloop_35 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 3] - tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 3] - tmp_qloop_31);
                const real_t tmp_qloop_36 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 4] - tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 4] - tmp_qloop_31);
                const real_t tmp_qloop_37 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 5] - tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 5] - tmp_qloop_31);
                const real_t q_tmp_0_0 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_0_1 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_0_2 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_1_0 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_1_1 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_1_2 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_2_0 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_2_1 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_2_2 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_3_0 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_3_1 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_3_2 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_4_0 = tmp_qloop_29*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_4_1 = tmp_qloop_29*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_4_2 = tmp_qloop_29*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_5_0 = tmp_qloop_30*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_5_1 = tmp_qloop_30*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_5_2 = tmp_qloop_30*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_6_0 = tmp_qloop_32*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_6_1 = tmp_qloop_32*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_6_2 = tmp_qloop_32*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_7_0 = tmp_qloop_33*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_7_1 = tmp_qloop_33*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_7_2 = tmp_qloop_33*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_8_0 = tmp_qloop_34*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_8_1 = tmp_qloop_34*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_8_2 = tmp_qloop_34*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_9_0 = tmp_qloop_35*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_9_1 = tmp_qloop_35*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_9_2 = tmp_qloop_35*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_10_0 = tmp_qloop_36*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_10_1 = tmp_qloop_36*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_10_2 = tmp_qloop_36*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                const real_t q_tmp_11_0 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[9*q + 1];
                const real_t q_tmp_11_1 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[9*q + 2];
                const real_t q_tmp_11_2 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[9*q + 3];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                q_acc_6_0 = q_acc_6_0 + q_tmp_6_0;
                q_acc_6_1 = q_acc_6_1 + q_tmp_6_1;
                q_acc_6_2 = q_acc_6_2 + q_tmp_6_2;
                q_acc_7_0 = q_acc_7_0 + q_tmp_7_0;
                q_acc_7_1 = q_acc_7_1 + q_tmp_7_1;
                q_acc_7_2 = q_acc_7_2 + q_tmp_7_2;
                q_acc_8_0 = q_acc_8_0 + q_tmp_8_0;
                q_acc_8_1 = q_acc_8_1 + q_tmp_8_1;
                q_acc_8_2 = q_acc_8_2 + q_tmp_8_2;
                q_acc_9_0 = q_acc_9_0 + q_tmp_9_0;
                q_acc_9_1 = q_acc_9_1 + q_tmp_9_1;
                q_acc_9_2 = q_acc_9_2 + q_tmp_9_2;
                q_acc_10_0 = q_acc_10_0 + q_tmp_10_0;
                q_acc_10_1 = q_acc_10_1 + q_tmp_10_1;
                q_acc_10_2 = q_acc_10_2 + q_tmp_10_2;
                q_acc_11_0 = q_acc_11_0 + q_tmp_11_0;
                q_acc_11_1 = q_acc_11_1 + q_tmp_11_1;
                q_acc_11_2 = q_acc_11_2 + q_tmp_11_2;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2;
             const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2;
             const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2;
             const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2;
             const real_t elMatVec_4 = q_acc_4_0*src_dof_0 + q_acc_4_1*src_dof_1 + q_acc_4_2*src_dof_2;
             const real_t elMatVec_5 = q_acc_5_0*src_dof_0 + q_acc_5_1*src_dof_1 + q_acc_5_2*src_dof_2;
             const real_t elMatVec_6 = q_acc_6_0*src_dof_0 + q_acc_6_1*src_dof_1 + q_acc_6_2*src_dof_2;
             const real_t elMatVec_7 = q_acc_7_0*src_dof_0 + q_acc_7_1*src_dof_1 + q_acc_7_2*src_dof_2;
             const real_t elMatVec_8 = q_acc_8_0*src_dof_0 + q_acc_8_1*src_dof_1 + q_acc_8_2*src_dof_2;
             const real_t elMatVec_9 = q_acc_9_0*src_dof_0 + q_acc_9_1*src_dof_1 + q_acc_9_2*src_dof_2;
             const real_t elMatVec_10 = q_acc_10_0*src_dof_0 + q_acc_10_1*src_dof_1 + q_acc_10_2*src_dof_2;
             const real_t elMatVec_11 = q_acc_11_0*src_dof_0 + q_acc_11_1*src_dof_1 + q_acc_11_2*src_dof_2;
             _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0*operatorScaling + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1*operatorScaling + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2*operatorScaling + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_6*operatorScaling + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_7*operatorScaling + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_8*operatorScaling + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_9*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_10*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_11*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {0.33333333333333304, 0.16666666666666674, 0.16666666666666666, 0.66666666666666663, -0.33333333333333337, 0.0, 2.6666666666666665, -2.6666666666666665, 4.4408920985006262e-16, 0.33333333333333315, 0.16666666666666671, 0.66666666666666663, 0.16666666666666666, 1.6666666666666665, 0.0, 0.66666666666666663, -0.66666666666666663, -1.9999999999999996, -1.666666666666667, 0.66666666666666674, 0.16666666666666666, 0.16666666666666666, -0.33333333333333337, 0.0, 0.66666666666666663, -0.66666666666666663, 2.0000000000000004};
      
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
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
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
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_4_0 = 0.0;
             real_t q_acc_4_1 = 0.0;
             real_t q_acc_4_2 = 0.0;
             real_t q_acc_5_0 = 0.0;
             real_t q_acc_5_1 = 0.0;
             real_t q_acc_5_2 = 0.0;
             real_t q_acc_6_0 = 0.0;
             real_t q_acc_6_1 = 0.0;
             real_t q_acc_6_2 = 0.0;
             real_t q_acc_7_0 = 0.0;
             real_t q_acc_7_1 = 0.0;
             real_t q_acc_7_2 = 0.0;
             real_t q_acc_8_0 = 0.0;
             real_t q_acc_8_1 = 0.0;
             real_t q_acc_8_2 = 0.0;
             real_t q_acc_9_0 = 0.0;
             real_t q_acc_9_1 = 0.0;
             real_t q_acc_9_2 = 0.0;
             real_t q_acc_10_0 = 0.0;
             real_t q_acc_10_1 = 0.0;
             real_t q_acc_10_2 = 0.0;
             real_t q_acc_11_0 = 0.0;
             real_t q_acc_11_1 = 0.0;
             real_t q_acc_11_2 = 0.0;
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
                const real_t tmp_qloop_16 = -tmp_qloop_12*tmp_qloop_14;
                const real_t tmp_qloop_17 = tmp_qloop_10*tmp_qloop_14;
                const real_t tmp_qloop_18 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q];
                const real_t tmp_qloop_19 = -tmp_qloop_11*tmp_qloop_14;
                const real_t tmp_qloop_20 = tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q];
                const real_t tmp_qloop_21 = tmp_qloop_18 + tmp_qloop_20;
                const real_t tmp_qloop_22 = abs(tmp_qloop_13)*_data_q_w[q];
                const real_t tmp_qloop_23 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[9*q] - tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q] - tmp_qloop_21);
                const real_t tmp_qloop_24 = tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1];
                const real_t tmp_qloop_25 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[9*q + 4] - tmp_qloop_21 - tmp_qloop_24);
                const real_t tmp_qloop_26 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[9*q + 5];
                const real_t tmp_qloop_27 = tmp_qloop_22*(-tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2] - tmp_qloop_21 - tmp_qloop_26);
                const real_t tmp_qloop_28 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[9*q + 6] - tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3] - tmp_qloop_21);
                const real_t tmp_qloop_29 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[9*q + 7] - tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4] - tmp_qloop_21);
                const real_t tmp_qloop_30 = tmp_qloop_22*(-tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[9*q + 8] - tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5] - tmp_qloop_21);
                const real_t tmp_qloop_31 = tmp_qloop_24 + tmp_qloop_26;
                const real_t tmp_qloop_32 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 1] - tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 1] - tmp_qloop_31);
                const real_t tmp_qloop_33 = tmp_qloop_22*(-tmp_qloop_18 - tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 2] - tmp_qloop_31);
                const real_t tmp_qloop_34 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 2] - tmp_qloop_20 - tmp_qloop_31);
                const real_t tmp_qloop_35 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 3] - tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 3] - tmp_qloop_31);
                const real_t tmp_qloop_36 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 4] - tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 4] - tmp_qloop_31);
                const real_t tmp_qloop_37 = tmp_qloop_22*(-tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 5] - tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 5] - tmp_qloop_31);
                const real_t q_tmp_0_0 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_0_1 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_0_2 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_1_0 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_1_1 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_1_2 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_2_0 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_2_1 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_2_2 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_3_0 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_3_1 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_3_2 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_4_0 = tmp_qloop_29*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_4_1 = tmp_qloop_29*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_4_2 = tmp_qloop_29*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_5_0 = tmp_qloop_30*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_5_1 = tmp_qloop_30*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_5_2 = tmp_qloop_30*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_6_0 = tmp_qloop_32*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_6_1 = tmp_qloop_32*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_6_2 = tmp_qloop_32*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_7_0 = tmp_qloop_33*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_7_1 = tmp_qloop_33*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_7_2 = tmp_qloop_33*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_8_0 = tmp_qloop_34*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_8_1 = tmp_qloop_34*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_8_2 = tmp_qloop_34*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_9_0 = tmp_qloop_35*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_9_1 = tmp_qloop_35*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_9_2 = tmp_qloop_35*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_10_0 = tmp_qloop_36*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_10_1 = tmp_qloop_36*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_10_2 = tmp_qloop_36*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                const real_t q_tmp_11_0 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[9*q + 1];
                const real_t q_tmp_11_1 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[9*q + 2];
                const real_t q_tmp_11_2 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[9*q + 3];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                q_acc_6_0 = q_acc_6_0 + q_tmp_6_0;
                q_acc_6_1 = q_acc_6_1 + q_tmp_6_1;
                q_acc_6_2 = q_acc_6_2 + q_tmp_6_2;
                q_acc_7_0 = q_acc_7_0 + q_tmp_7_0;
                q_acc_7_1 = q_acc_7_1 + q_tmp_7_1;
                q_acc_7_2 = q_acc_7_2 + q_tmp_7_2;
                q_acc_8_0 = q_acc_8_0 + q_tmp_8_0;
                q_acc_8_1 = q_acc_8_1 + q_tmp_8_1;
                q_acc_8_2 = q_acc_8_2 + q_tmp_8_2;
                q_acc_9_0 = q_acc_9_0 + q_tmp_9_0;
                q_acc_9_1 = q_acc_9_1 + q_tmp_9_1;
                q_acc_9_2 = q_acc_9_2 + q_tmp_9_2;
                q_acc_10_0 = q_acc_10_0 + q_tmp_10_0;
                q_acc_10_1 = q_acc_10_1 + q_tmp_10_1;
                q_acc_10_2 = q_acc_10_2 + q_tmp_10_2;
                q_acc_11_0 = q_acc_11_0 + q_tmp_11_0;
                q_acc_11_1 = q_acc_11_1 + q_tmp_11_1;
                q_acc_11_2 = q_acc_11_2 + q_tmp_11_2;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2;
             const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2;
             const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2;
             const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2;
             const real_t elMatVec_4 = q_acc_4_0*src_dof_0 + q_acc_4_1*src_dof_1 + q_acc_4_2*src_dof_2;
             const real_t elMatVec_5 = q_acc_5_0*src_dof_0 + q_acc_5_1*src_dof_1 + q_acc_5_2*src_dof_2;
             const real_t elMatVec_6 = q_acc_6_0*src_dof_0 + q_acc_6_1*src_dof_1 + q_acc_6_2*src_dof_2;
             const real_t elMatVec_7 = q_acc_7_0*src_dof_0 + q_acc_7_1*src_dof_1 + q_acc_7_2*src_dof_2;
             const real_t elMatVec_8 = q_acc_8_0*src_dof_0 + q_acc_8_1*src_dof_1 + q_acc_8_2*src_dof_2;
             const real_t elMatVec_9 = q_acc_9_0*src_dof_0 + q_acc_9_1*src_dof_1 + q_acc_9_2*src_dof_2;
             const real_t elMatVec_10 = q_acc_10_0*src_dof_0 + q_acc_10_1*src_dof_1 + q_acc_10_2*src_dof_2;
             const real_t elMatVec_11 = q_acc_11_0*src_dof_0 + q_acc_11_1*src_dof_1 + q_acc_11_2*src_dof_2;
             _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0*operatorScaling + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1*operatorScaling + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2*operatorScaling + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3*operatorScaling + _data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_6*operatorScaling + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_7*operatorScaling + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_8*operatorScaling + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_9*operatorScaling + _data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_10*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_11*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
