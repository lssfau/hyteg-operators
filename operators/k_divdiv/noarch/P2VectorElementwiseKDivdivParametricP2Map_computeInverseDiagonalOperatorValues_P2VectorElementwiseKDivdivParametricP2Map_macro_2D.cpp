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



































#include "../P2VectorElementwiseKDivdivParametricP2Map.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorElementwiseKDivdivParametricP2Map::computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdivParametricP2Map_macro_2D( real_t * RESTRICT  _data_invDiag__edge_0, real_t * RESTRICT  _data_invDiag__edge_1, real_t * RESTRICT  _data_invDiag__vertex_0, real_t * RESTRICT  _data_invDiag__vertex_1, real_t * RESTRICT  _data_k, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {-0.28125, 0.26041666666666669, 0.26041666666666669, 0.26041666666666669};
   
       const real_t _data_q_p_0 [] = {0.33333333333333331, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001};
   
       const real_t _data_q_p_1 [] = {0.33333333333333331, 0.59999999999999998, 0.20000000000000001, 0.20000000000000001};
   
       const real_t tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_0_0_GRAY [] = {0.33333333333333343, 0.33333333333333331, 0.33333333333333331, -0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, 0.0, 0.20000000000000007, 0.20000000000000001, 0.59999999999999998, -0.11999999999999988, -0.12, 0.12, 0.47999999999999998, 0.47999999999999998, 0.16000000000000003, 0.0, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, -0.11999999999999988, 0.12, -0.12, 0.47999999999999998, 0.16000000000000003, 0.47999999999999998, 0.0, 0.60000000000000009, 0.20000000000000001, 0.20000000000000001, 0.11999999999999988, -0.12, -0.12, 0.16000000000000003, 0.47999999999999998, 0.47999999999999998, 0.0};
      
          const real_t _data_phi_1_0_GRAY [] = {0.0, -0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, 0.0, -0.11999999999999988, -0.12, 0.12, 0.47999999999999998, 0.47999999999999998, 0.16000000000000003, 0.0, -0.11999999999999988, 0.12, -0.12, 0.47999999999999998, 0.16000000000000003, 0.47999999999999998, 0.0, 0.11999999999999988, -0.12, -0.12, 0.16000000000000003, 0.47999999999999998, 0.47999999999999998};
      
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {-0.33333333333333348, 1.0, 0.33333333333333326, 0.0, 1.3333333333333333, -1.3333333333333333, 2.2204460492503131e-16, 0.19999999999999973, 1.0, -0.19999999999999996, 0.0, 2.3999999999999999, -2.3999999999999999, 0.0, 0.19999999999999996, 1.0, 1.3999999999999999, 0.0, 0.80000000000000004, -0.80000000000000004, -1.5999999999999999, -1.4000000000000001, 1.0, -0.19999999999999996, 0.0, 0.80000000000000004, -0.80000000000000004, 1.5999999999999999};
      
          const real_t _data_tabulated_and_untitled_0_1_GRAY [] = {0.0, -0.33333333333333348, 0.33333333333333326, 1.3333333333333333, -1.3333333333333333, 2.2204460492503131e-16, 0.0, 0.19999999999999973, -0.19999999999999996, 2.3999999999999999, -2.3999999999999999, 0.0, 0.0, 0.19999999999999996, 1.3999999999999999, 0.80000000000000004, -0.80000000000000004, -1.5999999999999999, 0.0, -1.4000000000000001, -0.19999999999999996, 0.80000000000000004, -0.80000000000000004, 1.5999999999999999};
      
          const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {-0.33333333333333348, 0.0, 0.33333333333333326, 1.3333333333333333, 2.2204460492503131e-16, -1.3333333333333333, 0.19999999999999973, 0.0, 1.3999999999999999, 0.80000000000000004, -1.5999999999999999, -0.80000000000000004, 0.19999999999999996, 0.0, -0.19999999999999996, 2.3999999999999999, 0.0, -2.3999999999999999, -1.4000000000000001, 0.0, -0.19999999999999996, 0.80000000000000004, 1.5999999999999999, -0.80000000000000004};
      
          const real_t _data_tabulated_and_untitled_1_1_GRAY [] = {0.0, -0.33333333333333348, 0.33333333333333326, 1.3333333333333333, 2.2204460492503131e-16, -1.3333333333333333, 0.0, 0.19999999999999973, 1.3999999999999999, 0.80000000000000004, -1.5999999999999999, -0.80000000000000004, 0.0, 0.19999999999999996, -0.19999999999999996, 2.3999999999999999, 0.0, -2.3999999999999999, 0.0, -1.4000000000000001, -0.19999999999999996, 0.80000000000000004, 1.5999999999999999, -0.80000000000000004};
      
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
             const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_11_11 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
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
                const real_t tmp_qloop_22 = (k_dof_0*_data_phi_0_0_GRAY[10*q] + k_dof_1*_data_phi_0_0_GRAY[10*q + 1] + k_dof_2*_data_phi_0_0_GRAY[10*q + 2])*abs(tmp_qloop_13)*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                const real_t tmp_qloop_23 = tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                const real_t tmp_qloop_24 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3];
                const real_t tmp_qloop_25 = tmp_qloop_23 + tmp_qloop_24;
                const real_t q_tmp_0_0 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q] + tmp_qloop_21)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q] + tmp_qloop_21));
                const real_t q_tmp_1_1 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + tmp_qloop_21 + tmp_qloop_23)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + tmp_qloop_21 + tmp_qloop_23));
                const real_t q_tmp_2_2 = tmp_qloop_22*((tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2] + tmp_qloop_21 + tmp_qloop_24)*(tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2] + tmp_qloop_21 + tmp_qloop_24));
                const real_t q_tmp_3_3 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3] + tmp_qloop_21)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3] + tmp_qloop_21));
                const real_t q_tmp_4_4 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4] + tmp_qloop_21)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4] + tmp_qloop_21));
                const real_t q_tmp_5_5 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5] + tmp_qloop_21)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5] + tmp_qloop_21));
                const real_t q_tmp_6_6 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 1] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 1] + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 1] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 1] + tmp_qloop_25));
                const real_t q_tmp_7_7 = tmp_qloop_22*((tmp_qloop_18 + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 2] + tmp_qloop_25)*(tmp_qloop_18 + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 2] + tmp_qloop_25));
                const real_t q_tmp_8_8 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 2] + tmp_qloop_20 + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 2] + tmp_qloop_20 + tmp_qloop_25));
                const real_t q_tmp_9_9 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 3] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 3] + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 3] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 3] + tmp_qloop_25));
                const real_t q_tmp_10_10 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 4] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 4] + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 4] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 4] + tmp_qloop_25));
                const real_t q_tmp_11_11 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 5] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 5] + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 5] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_GRAY[6*q + 5] + tmp_qloop_25));
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             const real_t elMatDiag_10 = q_acc_10_10;
             const real_t elMatDiag_11 = q_acc_11_11;
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
          const real_t _data_phi_0_0_BLUE [] = {0.33333333333333343, 0.33333333333333331, 0.33333333333333331, -0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, 0.0, 0.20000000000000007, 0.20000000000000001, 0.59999999999999998, -0.11999999999999988, -0.12, 0.12, 0.47999999999999998, 0.47999999999999998, 0.16000000000000003, 0.0, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, -0.11999999999999988, 0.12, -0.12, 0.47999999999999998, 0.16000000000000003, 0.47999999999999998, 0.0, 0.60000000000000009, 0.20000000000000001, 0.20000000000000001, 0.11999999999999988, -0.12, -0.12, 0.16000000000000003, 0.47999999999999998, 0.47999999999999998, 0.0};
      
          const real_t _data_phi_1_0_BLUE [] = {0.0, -0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, 0.0, -0.11999999999999988, -0.12, 0.12, 0.47999999999999998, 0.47999999999999998, 0.16000000000000003, 0.0, -0.11999999999999988, 0.12, -0.12, 0.47999999999999998, 0.16000000000000003, 0.47999999999999998, 0.0, 0.11999999999999988, -0.12, -0.12, 0.16000000000000003, 0.47999999999999998, 0.47999999999999998};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {-0.33333333333333348, 1.0, 0.33333333333333326, 0.0, 1.3333333333333333, -1.3333333333333333, 2.2204460492503131e-16, 0.19999999999999973, 1.0, -0.19999999999999996, 0.0, 2.3999999999999999, -2.3999999999999999, 0.0, 0.19999999999999996, 1.0, 1.3999999999999999, 0.0, 0.80000000000000004, -0.80000000000000004, -1.5999999999999999, -1.4000000000000001, 1.0, -0.19999999999999996, 0.0, 0.80000000000000004, -0.80000000000000004, 1.5999999999999999};
      
          const real_t _data_tabulated_and_untitled_0_1_BLUE [] = {0.0, -0.33333333333333348, 0.33333333333333326, 1.3333333333333333, -1.3333333333333333, 2.2204460492503131e-16, 0.0, 0.19999999999999973, -0.19999999999999996, 2.3999999999999999, -2.3999999999999999, 0.0, 0.0, 0.19999999999999996, 1.3999999999999999, 0.80000000000000004, -0.80000000000000004, -1.5999999999999999, 0.0, -1.4000000000000001, -0.19999999999999996, 0.80000000000000004, -0.80000000000000004, 1.5999999999999999};
      
          const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {-0.33333333333333348, 0.0, 0.33333333333333326, 1.3333333333333333, 2.2204460492503131e-16, -1.3333333333333333, 0.19999999999999973, 0.0, 1.3999999999999999, 0.80000000000000004, -1.5999999999999999, -0.80000000000000004, 0.19999999999999996, 0.0, -0.19999999999999996, 2.3999999999999999, 0.0, -2.3999999999999999, -1.4000000000000001, 0.0, -0.19999999999999996, 0.80000000000000004, 1.5999999999999999, -0.80000000000000004};
      
          const real_t _data_tabulated_and_untitled_1_1_BLUE [] = {0.0, -0.33333333333333348, 0.33333333333333326, 1.3333333333333333, 2.2204460492503131e-16, -1.3333333333333333, 0.0, 0.19999999999999973, 1.3999999999999999, 0.80000000000000004, -1.5999999999999999, -0.80000000000000004, 0.0, 0.19999999999999996, -0.19999999999999996, 2.3999999999999999, 0.0, -2.3999999999999999, 0.0, -1.4000000000000001, -0.19999999999999996, 0.80000000000000004, 1.5999999999999999, -0.80000000000000004};
      
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
             const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
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
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_11_11 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
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
                const real_t tmp_qloop_22 = (k_dof_0*_data_phi_0_0_BLUE[10*q] + k_dof_1*_data_phi_0_0_BLUE[10*q + 1] + k_dof_2*_data_phi_0_0_BLUE[10*q + 2])*abs(tmp_qloop_13)*_data_q_w[q]*_data_tabulated_and_untitled_0_0_BLUE[7*q + 1];
                const real_t tmp_qloop_23 = tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1];
                const real_t tmp_qloop_24 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3];
                const real_t tmp_qloop_25 = tmp_qloop_23 + tmp_qloop_24;
                const real_t q_tmp_0_0 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q] + tmp_qloop_21)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q] + tmp_qloop_21));
                const real_t q_tmp_1_1 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2] + tmp_qloop_21 + tmp_qloop_23)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2] + tmp_qloop_21 + tmp_qloop_23));
                const real_t q_tmp_2_2 = tmp_qloop_22*((tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2] + tmp_qloop_21 + tmp_qloop_24)*(tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2] + tmp_qloop_21 + tmp_qloop_24));
                const real_t q_tmp_3_3 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3] + tmp_qloop_21)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3] + tmp_qloop_21));
                const real_t q_tmp_4_4 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4] + tmp_qloop_21)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4] + tmp_qloop_21));
                const real_t q_tmp_5_5 = tmp_qloop_22*((tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5] + tmp_qloop_21)*(tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6] + tmp_qloop_16*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5] + tmp_qloop_21));
                const real_t q_tmp_6_6 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 1] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 1] + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 1] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 1] + tmp_qloop_25));
                const real_t q_tmp_7_7 = tmp_qloop_22*((tmp_qloop_18 + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 2] + tmp_qloop_25)*(tmp_qloop_18 + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 2] + tmp_qloop_25));
                const real_t q_tmp_8_8 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 2] + tmp_qloop_20 + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 2] + tmp_qloop_20 + tmp_qloop_25));
                const real_t q_tmp_9_9 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 3] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 3] + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 3] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 3] + tmp_qloop_25));
                const real_t q_tmp_10_10 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 4] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 4] + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 4] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 4] + tmp_qloop_25));
                const real_t q_tmp_11_11 = tmp_qloop_22*((tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 5] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 5] + tmp_qloop_25)*(tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 5] + tmp_qloop_19*_data_tabulated_and_untitled_0_1_BLUE[6*q + 5] + tmp_qloop_25));
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             const real_t elMatDiag_10 = q_acc_10_10;
             const real_t elMatDiag_11 = q_acc_11_11;
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
