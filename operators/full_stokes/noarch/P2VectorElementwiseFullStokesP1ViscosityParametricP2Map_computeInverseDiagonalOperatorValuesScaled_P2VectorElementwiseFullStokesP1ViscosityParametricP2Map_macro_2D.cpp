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

void P2VectorElementwiseFullStokesP1ViscosityParametricP2Map::computeInverseDiagonalOperatorValuesScaled_P2VectorElementwiseFullStokesP1ViscosityParametricP2Map_macro_2D( real_t * RESTRICT  _data_invDiag__edge_0, real_t * RESTRICT  _data_invDiag__edge_1, real_t * RESTRICT  _data_invDiag__vertex_0, real_t * RESTRICT  _data_invDiag__vertex_1, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, real_t * RESTRICT  _data_mu, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
                const real_t tmp_qloop_21 = -tmp_qloop_11*tmp_qloop_14;
                const real_t tmp_qloop_22 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_GRAY[6*q];
                const real_t tmp_qloop_23 = tmp_qloop_20 + tmp_qloop_22;
                const real_t tmp_qloop_24 = tmp_qloop_20*0.66666666666666667;
                const real_t tmp_qloop_25 = tmp_qloop_22*0.66666666666666667;
                const real_t tmp_qloop_26 = tmp_qloop_24 + tmp_qloop_25;
                const real_t tmp_qloop_27 = abs(tmp_qloop_13)*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                const real_t tmp_qloop_28 = tmp_qloop_20*1.0;
                const real_t tmp_qloop_29 = tmp_qloop_22*1.0;
                const real_t tmp_qloop_30 = tmp_qloop_20*2.0;
                const real_t tmp_qloop_31 = tmp_qloop_22*2.0;
                const real_t tmp_qloop_32 = (tmp_qloop_28 + tmp_qloop_29)*(tmp_qloop_30 + tmp_qloop_31);
                const real_t tmp_qloop_33 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q];
                const real_t tmp_qloop_34 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_GRAY[7*q];
                const real_t tmp_qloop_35 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q];
                const real_t tmp_qloop_36 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q];
                const real_t tmp_qloop_37 = tmp_qloop_35 + tmp_qloop_36;
                const real_t tmp_qloop_38 = tmp_qloop_35*0.5;
                const real_t tmp_qloop_39 = tmp_qloop_36*0.5;
                const real_t tmp_qloop_40 = tmp_qloop_38 + tmp_qloop_39;
                const real_t tmp_qloop_41 = (mu_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + mu_dof_1*_data_q_p_0[q] + mu_dof_2*_data_q_p_1[q])*_data_q_w[q];
                const real_t tmp_qloop_42 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2];
                const real_t tmp_qloop_43 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                const real_t tmp_qloop_44 = tmp_qloop_43*0.66666666666666667;
                const real_t tmp_qloop_45 = tmp_qloop_43*1.0;
                const real_t tmp_qloop_46 = tmp_qloop_43*2.0;
                const real_t tmp_qloop_47 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                const real_t tmp_qloop_48 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2];
                const real_t tmp_qloop_49 = tmp_qloop_47*0.5;
                const real_t tmp_qloop_50 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3];
                const real_t tmp_qloop_51 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2];
                const real_t tmp_qloop_52 = tmp_qloop_50*0.66666666666666667;
                const real_t tmp_qloop_53 = tmp_qloop_50*1.0;
                const real_t tmp_qloop_54 = tmp_qloop_50*2.0;
                const real_t tmp_qloop_55 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2];
                const real_t tmp_qloop_56 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3];
                const real_t tmp_qloop_57 = tmp_qloop_56*0.5;
                const real_t tmp_qloop_58 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4];
                const real_t tmp_qloop_59 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3];
                const real_t tmp_qloop_60 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3];
                const real_t tmp_qloop_61 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4];
                const real_t tmp_qloop_62 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5];
                const real_t tmp_qloop_63 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4];
                const real_t tmp_qloop_64 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4];
                const real_t tmp_qloop_65 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5];
                const real_t tmp_qloop_66 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6];
                const real_t tmp_qloop_67 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5];
                const real_t tmp_qloop_68 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5];
                const real_t tmp_qloop_69 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6];
                const real_t tmp_qloop_70 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 1];
                const real_t tmp_qloop_71 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_GRAY[6*q + 1];
                const real_t tmp_qloop_72 = tmp_qloop_43 + tmp_qloop_50;
                const real_t tmp_qloop_73 = tmp_qloop_44 + tmp_qloop_52;
                const real_t tmp_qloop_74 = (tmp_qloop_45 + tmp_qloop_53)*(tmp_qloop_46 + tmp_qloop_54);
                const real_t tmp_qloop_75 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 1];
                const real_t tmp_qloop_76 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 1];
                const real_t tmp_qloop_77 = tmp_qloop_47 + tmp_qloop_56;
                const real_t tmp_qloop_78 = tmp_qloop_49 + tmp_qloop_57;
                const real_t tmp_qloop_79 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_GRAY[6*q + 2];
                const real_t tmp_qloop_80 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 2];
                const real_t tmp_qloop_81 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 2];
                const real_t tmp_qloop_82 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 2];
                const real_t tmp_qloop_83 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 3];
                const real_t tmp_qloop_84 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_GRAY[6*q + 3];
                const real_t tmp_qloop_85 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 3];
                const real_t tmp_qloop_86 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 3];
                const real_t tmp_qloop_87 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 4];
                const real_t tmp_qloop_88 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_GRAY[6*q + 4];
                const real_t tmp_qloop_89 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 4];
                const real_t tmp_qloop_90 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 4];
                const real_t tmp_qloop_91 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_GRAY[6*q + 5];
                const real_t tmp_qloop_92 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_GRAY[6*q + 5];
                const real_t tmp_qloop_93 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_GRAY[6*q + 5];
                const real_t tmp_qloop_94 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_GRAY[6*q + 5];
                const real_t q_tmp_0_0 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_16 + tmp_qloop_18 + tmp_qloop_23)*(tmp_qloop_16*0.66666666666666667 + tmp_qloop_18*0.66666666666666667 + tmp_qloop_26) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_16*1.0 + tmp_qloop_18*1.0)*(tmp_qloop_16*2.0 + tmp_qloop_18*2.0) + (tmp_qloop_33 + tmp_qloop_34 + tmp_qloop_37)*(tmp_qloop_33*0.5 + tmp_qloop_34*0.5 + tmp_qloop_40)*2.0));
                const real_t q_tmp_1_1 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_42 + tmp_qloop_43)*(tmp_qloop_26 + tmp_qloop_42*0.66666666666666667 + tmp_qloop_44) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_42*1.0 + tmp_qloop_45)*(tmp_qloop_42*2.0 + tmp_qloop_46) + (tmp_qloop_37 + tmp_qloop_47 + tmp_qloop_48)*(tmp_qloop_40 + tmp_qloop_48*0.5 + tmp_qloop_49)*2.0));
                const real_t q_tmp_2_2 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_50 + tmp_qloop_51)*(tmp_qloop_26 + tmp_qloop_51*0.66666666666666667 + tmp_qloop_52) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_51*1.0 + tmp_qloop_53)*(tmp_qloop_51*2.0 + tmp_qloop_54) + (tmp_qloop_37 + tmp_qloop_55 + tmp_qloop_56)*(tmp_qloop_40 + tmp_qloop_55*0.5 + tmp_qloop_57)*2.0));
                const real_t q_tmp_3_3 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_58 + tmp_qloop_59)*(tmp_qloop_26 + tmp_qloop_58*0.66666666666666667 + tmp_qloop_59*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_58*1.0 + tmp_qloop_59*1.0)*(tmp_qloop_58*2.0 + tmp_qloop_59*2.0) + (tmp_qloop_37 + tmp_qloop_60 + tmp_qloop_61)*(tmp_qloop_40 + tmp_qloop_60*0.5 + tmp_qloop_61*0.5)*2.0));
                const real_t q_tmp_4_4 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_62 + tmp_qloop_63)*(tmp_qloop_26 + tmp_qloop_62*0.66666666666666667 + tmp_qloop_63*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_62*1.0 + tmp_qloop_63*1.0)*(tmp_qloop_62*2.0 + tmp_qloop_63*2.0) + (tmp_qloop_37 + tmp_qloop_64 + tmp_qloop_65)*(tmp_qloop_40 + tmp_qloop_64*0.5 + tmp_qloop_65*0.5)*2.0));
                const real_t q_tmp_5_5 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_66 + tmp_qloop_67)*(tmp_qloop_26 + tmp_qloop_66*0.66666666666666667 + tmp_qloop_67*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_66*1.0 + tmp_qloop_67*1.0)*(tmp_qloop_66*2.0 + tmp_qloop_67*2.0) + (tmp_qloop_37 + tmp_qloop_68 + tmp_qloop_69)*(tmp_qloop_40 + tmp_qloop_68*0.5 + tmp_qloop_69*0.5)*2.0));
                const real_t q_tmp_6_6 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_70 + tmp_qloop_71 + tmp_qloop_72)*(tmp_qloop_70*0.66666666666666667 + tmp_qloop_71*0.66666666666666667 + tmp_qloop_73) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_70*1.0 + tmp_qloop_71*1.0)*(tmp_qloop_70*2.0 + tmp_qloop_71*2.0) + (tmp_qloop_75 + tmp_qloop_76 + tmp_qloop_77)*(tmp_qloop_75*0.5 + tmp_qloop_76*0.5 + tmp_qloop_78)*2.0));
                const real_t q_tmp_7_7 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_20 + tmp_qloop_72 + tmp_qloop_79)*(tmp_qloop_24 + tmp_qloop_73 + tmp_qloop_79*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_28 + tmp_qloop_79*1.0)*(tmp_qloop_30 + tmp_qloop_79*2.0) + (tmp_qloop_36 + tmp_qloop_77 + tmp_qloop_80)*(tmp_qloop_39 + tmp_qloop_78 + tmp_qloop_80*0.5)*2.0));
                const real_t q_tmp_8_8 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_22 + tmp_qloop_72 + tmp_qloop_81)*(tmp_qloop_25 + tmp_qloop_73 + tmp_qloop_81*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_29 + tmp_qloop_81*1.0)*(tmp_qloop_31 + tmp_qloop_81*2.0) + (tmp_qloop_35 + tmp_qloop_77 + tmp_qloop_82)*(tmp_qloop_38 + tmp_qloop_78 + tmp_qloop_82*0.5)*2.0));
                const real_t q_tmp_9_9 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_72 + tmp_qloop_83 + tmp_qloop_84)*(tmp_qloop_73 + tmp_qloop_83*0.66666666666666667 + tmp_qloop_84*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_83*1.0 + tmp_qloop_84*1.0)*(tmp_qloop_83*2.0 + tmp_qloop_84*2.0) + (tmp_qloop_77 + tmp_qloop_85 + tmp_qloop_86)*(tmp_qloop_78 + tmp_qloop_85*0.5 + tmp_qloop_86*0.5)*2.0));
                const real_t q_tmp_10_10 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_72 + tmp_qloop_87 + tmp_qloop_88)*(tmp_qloop_73 + tmp_qloop_87*0.66666666666666667 + tmp_qloop_88*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_87*1.0 + tmp_qloop_88*1.0)*(tmp_qloop_87*2.0 + tmp_qloop_88*2.0) + (tmp_qloop_77 + tmp_qloop_89 + tmp_qloop_90)*(tmp_qloop_78 + tmp_qloop_89*0.5 + tmp_qloop_90*0.5)*2.0));
                const real_t q_tmp_11_11 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_72 + tmp_qloop_91 + tmp_qloop_92)*(tmp_qloop_73 + tmp_qloop_91*0.66666666666666667 + tmp_qloop_92*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_91*1.0 + tmp_qloop_92*1.0)*(tmp_qloop_91*2.0 + tmp_qloop_92*2.0) + (tmp_qloop_77 + tmp_qloop_93 + tmp_qloop_94)*(tmp_qloop_78 + tmp_qloop_93*0.5 + tmp_qloop_94*0.5)*2.0));
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
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
                const real_t tmp_qloop_21 = -tmp_qloop_11*tmp_qloop_14;
                const real_t tmp_qloop_22 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_BLUE[6*q];
                const real_t tmp_qloop_23 = tmp_qloop_20 + tmp_qloop_22;
                const real_t tmp_qloop_24 = tmp_qloop_20*0.66666666666666667;
                const real_t tmp_qloop_25 = tmp_qloop_22*0.66666666666666667;
                const real_t tmp_qloop_26 = tmp_qloop_24 + tmp_qloop_25;
                const real_t tmp_qloop_27 = abs(tmp_qloop_13)*_data_tabulated_and_untitled_0_0_BLUE[7*q + 1];
                const real_t tmp_qloop_28 = tmp_qloop_20*1.0;
                const real_t tmp_qloop_29 = tmp_qloop_22*1.0;
                const real_t tmp_qloop_30 = tmp_qloop_20*2.0;
                const real_t tmp_qloop_31 = tmp_qloop_22*2.0;
                const real_t tmp_qloop_32 = (tmp_qloop_28 + tmp_qloop_29)*(tmp_qloop_30 + tmp_qloop_31);
                const real_t tmp_qloop_33 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q];
                const real_t tmp_qloop_34 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_BLUE[7*q];
                const real_t tmp_qloop_35 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q];
                const real_t tmp_qloop_36 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q];
                const real_t tmp_qloop_37 = tmp_qloop_35 + tmp_qloop_36;
                const real_t tmp_qloop_38 = tmp_qloop_35*0.5;
                const real_t tmp_qloop_39 = tmp_qloop_36*0.5;
                const real_t tmp_qloop_40 = tmp_qloop_38 + tmp_qloop_39;
                const real_t tmp_qloop_41 = (mu_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + mu_dof_1*_data_q_p_0[q] + mu_dof_2*_data_q_p_1[q])*_data_q_w[q];
                const real_t tmp_qloop_42 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2];
                const real_t tmp_qloop_43 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1];
                const real_t tmp_qloop_44 = tmp_qloop_43*0.66666666666666667;
                const real_t tmp_qloop_45 = tmp_qloop_43*1.0;
                const real_t tmp_qloop_46 = tmp_qloop_43*2.0;
                const real_t tmp_qloop_47 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1];
                const real_t tmp_qloop_48 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2];
                const real_t tmp_qloop_49 = tmp_qloop_47*0.5;
                const real_t tmp_qloop_50 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3];
                const real_t tmp_qloop_51 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2];
                const real_t tmp_qloop_52 = tmp_qloop_50*0.66666666666666667;
                const real_t tmp_qloop_53 = tmp_qloop_50*1.0;
                const real_t tmp_qloop_54 = tmp_qloop_50*2.0;
                const real_t tmp_qloop_55 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2];
                const real_t tmp_qloop_56 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3];
                const real_t tmp_qloop_57 = tmp_qloop_56*0.5;
                const real_t tmp_qloop_58 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4];
                const real_t tmp_qloop_59 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3];
                const real_t tmp_qloop_60 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3];
                const real_t tmp_qloop_61 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4];
                const real_t tmp_qloop_62 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5];
                const real_t tmp_qloop_63 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4];
                const real_t tmp_qloop_64 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4];
                const real_t tmp_qloop_65 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5];
                const real_t tmp_qloop_66 = tmp_qloop_15*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6];
                const real_t tmp_qloop_67 = tmp_qloop_17*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5];
                const real_t tmp_qloop_68 = tmp_qloop_19*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5];
                const real_t tmp_qloop_69 = tmp_qloop_21*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6];
                const real_t tmp_qloop_70 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 1];
                const real_t tmp_qloop_71 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_BLUE[6*q + 1];
                const real_t tmp_qloop_72 = tmp_qloop_43 + tmp_qloop_50;
                const real_t tmp_qloop_73 = tmp_qloop_44 + tmp_qloop_52;
                const real_t tmp_qloop_74 = (tmp_qloop_45 + tmp_qloop_53)*(tmp_qloop_46 + tmp_qloop_54);
                const real_t tmp_qloop_75 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 1];
                const real_t tmp_qloop_76 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 1];
                const real_t tmp_qloop_77 = tmp_qloop_47 + tmp_qloop_56;
                const real_t tmp_qloop_78 = tmp_qloop_49 + tmp_qloop_57;
                const real_t tmp_qloop_79 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_BLUE[6*q + 2];
                const real_t tmp_qloop_80 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 2];
                const real_t tmp_qloop_81 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 2];
                const real_t tmp_qloop_82 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 2];
                const real_t tmp_qloop_83 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 3];
                const real_t tmp_qloop_84 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_BLUE[6*q + 3];
                const real_t tmp_qloop_85 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 3];
                const real_t tmp_qloop_86 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 3];
                const real_t tmp_qloop_87 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 4];
                const real_t tmp_qloop_88 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_BLUE[6*q + 4];
                const real_t tmp_qloop_89 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 4];
                const real_t tmp_qloop_90 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 4];
                const real_t tmp_qloop_91 = tmp_qloop_19*_data_tabulated_and_untitled_1_1_BLUE[6*q + 5];
                const real_t tmp_qloop_92 = tmp_qloop_21*_data_tabulated_and_untitled_0_1_BLUE[6*q + 5];
                const real_t tmp_qloop_93 = tmp_qloop_15*_data_tabulated_and_untitled_0_1_BLUE[6*q + 5];
                const real_t tmp_qloop_94 = tmp_qloop_17*_data_tabulated_and_untitled_1_1_BLUE[6*q + 5];
                const real_t q_tmp_0_0 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_16 + tmp_qloop_18 + tmp_qloop_23)*(tmp_qloop_16*0.66666666666666667 + tmp_qloop_18*0.66666666666666667 + tmp_qloop_26) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_16*1.0 + tmp_qloop_18*1.0)*(tmp_qloop_16*2.0 + tmp_qloop_18*2.0) + (tmp_qloop_33 + tmp_qloop_34 + tmp_qloop_37)*(tmp_qloop_33*0.5 + tmp_qloop_34*0.5 + tmp_qloop_40)*2.0));
                const real_t q_tmp_1_1 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_42 + tmp_qloop_43)*(tmp_qloop_26 + tmp_qloop_42*0.66666666666666667 + tmp_qloop_44) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_42*1.0 + tmp_qloop_45)*(tmp_qloop_42*2.0 + tmp_qloop_46) + (tmp_qloop_37 + tmp_qloop_47 + tmp_qloop_48)*(tmp_qloop_40 + tmp_qloop_48*0.5 + tmp_qloop_49)*2.0));
                const real_t q_tmp_2_2 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_50 + tmp_qloop_51)*(tmp_qloop_26 + tmp_qloop_51*0.66666666666666667 + tmp_qloop_52) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_51*1.0 + tmp_qloop_53)*(tmp_qloop_51*2.0 + tmp_qloop_54) + (tmp_qloop_37 + tmp_qloop_55 + tmp_qloop_56)*(tmp_qloop_40 + tmp_qloop_55*0.5 + tmp_qloop_57)*2.0));
                const real_t q_tmp_3_3 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_58 + tmp_qloop_59)*(tmp_qloop_26 + tmp_qloop_58*0.66666666666666667 + tmp_qloop_59*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_58*1.0 + tmp_qloop_59*1.0)*(tmp_qloop_58*2.0 + tmp_qloop_59*2.0) + (tmp_qloop_37 + tmp_qloop_60 + tmp_qloop_61)*(tmp_qloop_40 + tmp_qloop_60*0.5 + tmp_qloop_61*0.5)*2.0));
                const real_t q_tmp_4_4 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_62 + tmp_qloop_63)*(tmp_qloop_26 + tmp_qloop_62*0.66666666666666667 + tmp_qloop_63*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_62*1.0 + tmp_qloop_63*1.0)*(tmp_qloop_62*2.0 + tmp_qloop_63*2.0) + (tmp_qloop_37 + tmp_qloop_64 + tmp_qloop_65)*(tmp_qloop_40 + tmp_qloop_64*0.5 + tmp_qloop_65*0.5)*2.0));
                const real_t q_tmp_5_5 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_23 + tmp_qloop_66 + tmp_qloop_67)*(tmp_qloop_26 + tmp_qloop_66*0.66666666666666667 + tmp_qloop_67*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_32 + (tmp_qloop_66*1.0 + tmp_qloop_67*1.0)*(tmp_qloop_66*2.0 + tmp_qloop_67*2.0) + (tmp_qloop_37 + tmp_qloop_68 + tmp_qloop_69)*(tmp_qloop_40 + tmp_qloop_68*0.5 + tmp_qloop_69*0.5)*2.0));
                const real_t q_tmp_6_6 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_70 + tmp_qloop_71 + tmp_qloop_72)*(tmp_qloop_70*0.66666666666666667 + tmp_qloop_71*0.66666666666666667 + tmp_qloop_73) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_70*1.0 + tmp_qloop_71*1.0)*(tmp_qloop_70*2.0 + tmp_qloop_71*2.0) + (tmp_qloop_75 + tmp_qloop_76 + tmp_qloop_77)*(tmp_qloop_75*0.5 + tmp_qloop_76*0.5 + tmp_qloop_78)*2.0));
                const real_t q_tmp_7_7 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_20 + tmp_qloop_72 + tmp_qloop_79)*(tmp_qloop_24 + tmp_qloop_73 + tmp_qloop_79*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_28 + tmp_qloop_79*1.0)*(tmp_qloop_30 + tmp_qloop_79*2.0) + (tmp_qloop_36 + tmp_qloop_77 + tmp_qloop_80)*(tmp_qloop_39 + tmp_qloop_78 + tmp_qloop_80*0.5)*2.0));
                const real_t q_tmp_8_8 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_22 + tmp_qloop_72 + tmp_qloop_81)*(tmp_qloop_25 + tmp_qloop_73 + tmp_qloop_81*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_29 + tmp_qloop_81*1.0)*(tmp_qloop_31 + tmp_qloop_81*2.0) + (tmp_qloop_35 + tmp_qloop_77 + tmp_qloop_82)*(tmp_qloop_38 + tmp_qloop_78 + tmp_qloop_82*0.5)*2.0));
                const real_t q_tmp_9_9 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_72 + tmp_qloop_83 + tmp_qloop_84)*(tmp_qloop_73 + tmp_qloop_83*0.66666666666666667 + tmp_qloop_84*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_83*1.0 + tmp_qloop_84*1.0)*(tmp_qloop_83*2.0 + tmp_qloop_84*2.0) + (tmp_qloop_77 + tmp_qloop_85 + tmp_qloop_86)*(tmp_qloop_78 + tmp_qloop_85*0.5 + tmp_qloop_86*0.5)*2.0));
                const real_t q_tmp_10_10 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_72 + tmp_qloop_87 + tmp_qloop_88)*(tmp_qloop_73 + tmp_qloop_87*0.66666666666666667 + tmp_qloop_88*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_87*1.0 + tmp_qloop_88*1.0)*(tmp_qloop_87*2.0 + tmp_qloop_88*2.0) + (tmp_qloop_77 + tmp_qloop_89 + tmp_qloop_90)*(tmp_qloop_78 + tmp_qloop_89*0.5 + tmp_qloop_90*0.5)*2.0));
                const real_t q_tmp_11_11 = tmp_qloop_41*(-tmp_qloop_27*(tmp_qloop_72 + tmp_qloop_91 + tmp_qloop_92)*(tmp_qloop_73 + tmp_qloop_91*0.66666666666666667 + tmp_qloop_92*0.66666666666666667) + tmp_qloop_27*(tmp_qloop_74 + (tmp_qloop_91*1.0 + tmp_qloop_92*1.0)*(tmp_qloop_91*2.0 + tmp_qloop_92*2.0) + (tmp_qloop_77 + tmp_qloop_93 + tmp_qloop_94)*(tmp_qloop_78 + tmp_qloop_93*0.5 + tmp_qloop_94*0.5)*2.0));
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
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
