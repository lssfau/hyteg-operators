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

































#include "../P2VectorToP1ElementwiseDivergenceRotationAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorToP1ElementwiseDivergenceRotationAnnulusMap::applyScaled_P2VectorToP1ElementwiseDivergenceRotationAnnulusMap_macro_2D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_nx_rotationEdge, real_t * RESTRICT  _data_nx_rotationVertex, real_t * RESTRICT  _data_ny_rotationEdge, real_t * RESTRICT  _data_ny_rotationVertex, real_t * RESTRICT  _data_src_edge_0, real_t * RESTRICT  _data_src_edge_1, real_t * RESTRICT  _data_src_vertex_0, real_t * RESTRICT  _data_src_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
{
    {
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
       const real_t tmp_blending_op_0 = -rayVertex_0 + thrVertex_0;
       const real_t tmp_blending_op_10 = -rayVertex_1 + thrVertex_1;
       const real_t tmp_blending_op_11 = (-radRayVertex + radRefVertex)*1.0 / (-tmp_blending_op_0*(-rayVertex_1 + refVertex_1) + tmp_blending_op_10*(-rayVertex_0 + refVertex_0));
       const real_t tmp_blending_op_12 = tmp_blending_op_11*1.0;
       const real_t tmp_blending_op_16 = -rayVertex_1;
       const real_t tmp_blending_op_17 = -rayVertex_0;
       const real_t tmp_kernel_op_2 = 0.66666666666666663;
       const real_t tmp_kernel_op_3 = tmp_kernel_op_2 - 1.0;
       const real_t tmp_kernel_op_4 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_3;
       const real_t tmp_kernel_op_5 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_3;
       const real_t tmp_kernel_op_13 = 2.6666666666666665;
       const real_t tmp_kernel_op_14 = tmp_kernel_op_13 - 1.0;
       const real_t tmp_kernel_op_15 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_16 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_23 = 0.66666666666666663;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_23 - 1.0;
       const real_t tmp_kernel_op_25 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_26 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_35 = 2.6666666666666665;
       const real_t tmp_kernel_op_36 = tmp_kernel_op_35 - 1.0;
       const real_t tmp_kernel_op_37 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_36;
       const real_t tmp_kernel_op_38 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_36;
       const real_t tmp_kernel_op_44 = 0.66666666666666663;
       const real_t tmp_kernel_op_45 = tmp_kernel_op_44 - 1.0;
       const real_t tmp_kernel_op_46 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_45;
       const real_t tmp_kernel_op_47 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_45;
       const real_t tmp_kernel_op_52 = 0.66666666666666663;
       const real_t tmp_kernel_op_53 = tmp_kernel_op_52 - 1.0;
       const real_t tmp_kernel_op_54 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_53;
       const real_t tmp_kernel_op_55 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_53;
       const real_t tmp_kernel_op_64 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_35;
       const real_t tmp_kernel_op_65 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_66 = tmp_kernel_op_64 + tmp_kernel_op_65;
       const real_t tmp_kernel_op_67 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_35;
       const real_t tmp_kernel_op_68 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_69 = tmp_kernel_op_67 + tmp_kernel_op_68;
       const real_t tmp_kernel_op_75 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_44;
       const real_t tmp_kernel_op_76 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_77 = tmp_kernel_op_75 + tmp_kernel_op_76;
       const real_t tmp_kernel_op_78 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_44;
       const real_t tmp_kernel_op_79 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_80 = tmp_kernel_op_78 + tmp_kernel_op_79;
       const real_t tmp_kernel_op_85 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_52;
       const real_t tmp_kernel_op_86 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_23;
       const real_t tmp_kernel_op_87 = tmp_kernel_op_85 + tmp_kernel_op_86;
       const real_t tmp_kernel_op_88 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_52;
       const real_t tmp_kernel_op_89 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_23;
       const real_t tmp_kernel_op_90 = tmp_kernel_op_88 + tmp_kernel_op_89;
       const real_t tmp_kernel_op_98 = -tmp_kernel_op_2 - 1.333333333333333;
       const real_t tmp_kernel_op_99 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_98 - tmp_kernel_op_64;
       const real_t tmp_kernel_op_100 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_98 - tmp_kernel_op_67;
       const real_t tmp_kernel_op_106 = -tmp_kernel_op_13 + 2.666666666666667;
       const real_t tmp_kernel_op_107 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_106 - tmp_kernel_op_75;
       const real_t tmp_kernel_op_108 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_106 - tmp_kernel_op_78;
       const real_t tmp_kernel_op_113 = -tmp_kernel_op_23 + 2.666666666666667;
       const real_t tmp_kernel_op_114 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_113 - tmp_kernel_op_85;
       const real_t tmp_kernel_op_115 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_113 - tmp_kernel_op_88;
       const real_t tmp_kernel_op_122 = -tmp_kernel_op_35 + 2.666666666666667;
       const real_t tmp_kernel_op_123 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_122 - tmp_kernel_op_65;
       const real_t tmp_kernel_op_124 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_122 - tmp_kernel_op_68;
       const real_t tmp_kernel_op_130 = -tmp_kernel_op_44 - 1.333333333333333;
       const real_t tmp_kernel_op_131 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_130 - tmp_kernel_op_76;
       const real_t tmp_kernel_op_132 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_130 - tmp_kernel_op_79;
       const real_t tmp_kernel_op_137 = -tmp_kernel_op_52 + 2.666666666666667;
       const real_t tmp_kernel_op_138 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_137 - tmp_kernel_op_86;
       const real_t tmp_kernel_op_139 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_137 - tmp_kernel_op_89;
       const real_t tmp_kernel_op_146 = tmp_kernel_op_2 + tmp_kernel_op_35 - 3.0;
       const real_t tmp_kernel_op_147 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_146 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_146;
       const real_t tmp_kernel_op_148 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_146 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_146;
       const real_t tmp_kernel_op_156 = tmp_kernel_op_13 + tmp_kernel_op_44 - 3.0;
       const real_t tmp_kernel_op_157 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_156 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_156;
       const real_t tmp_kernel_op_158 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_156 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_156;
       const real_t tmp_kernel_op_163 = tmp_kernel_op_23 + tmp_kernel_op_52 - 3.0;
       const real_t tmp_kernel_op_164 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_163 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_163;
       const real_t tmp_kernel_op_165 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_163 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_163;
       {
          /* FaceType.GRAY */
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
             const real_t tmp_blending_op_1 = -p_affine_0_1 + p_affine_1_1;
             const real_t tmp_blending_op_2 = -p_affine_0_1 + p_affine_2_1;
             const real_t tmp_blending_op_3 = p_affine_0_1 + tmp_blending_op_1*0.16666666666666666 + tmp_blending_op_2*0.16666666666666666;
             const real_t tmp_blending_op_4 = -p_affine_0_0 + p_affine_1_0;
             const real_t tmp_blending_op_5 = -p_affine_0_0 + p_affine_2_0;
             const real_t tmp_blending_op_6 = p_affine_0_0 + tmp_blending_op_4*0.16666666666666666 + tmp_blending_op_5*0.16666666666666666;
             const real_t tmp_blending_op_7 = (tmp_blending_op_6*tmp_blending_op_6);
             const real_t tmp_blending_op_8 = (tmp_blending_op_3*tmp_blending_op_3);
             const real_t tmp_blending_op_9 = tmp_blending_op_7 + tmp_blending_op_8;
             const real_t tmp_blending_op_13 = tmp_blending_op_12*pow(tmp_blending_op_9, -0.50000000000000000);
             const real_t tmp_blending_op_14 = tmp_blending_op_13*tmp_blending_op_3;
             const real_t tmp_blending_op_15 = pow(tmp_blending_op_9, -1.5000000000000000);
             const real_t tmp_blending_op_18 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_3) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_6));
             const real_t tmp_blending_op_19 = tmp_blending_op_15*tmp_blending_op_18*1.0;
             const real_t tmp_blending_op_20 = tmp_blending_op_13*tmp_blending_op_6;
             const real_t tmp_blending_op_23 = p_affine_0_1 + tmp_blending_op_1*0.66666666666666663 + tmp_blending_op_2*0.16666666666666666;
             const real_t tmp_blending_op_24 = p_affine_0_0 + tmp_blending_op_4*0.66666666666666663 + tmp_blending_op_5*0.16666666666666666;
             const real_t tmp_blending_op_25 = (tmp_blending_op_24*tmp_blending_op_24);
             const real_t tmp_blending_op_26 = (tmp_blending_op_23*tmp_blending_op_23);
             const real_t tmp_blending_op_27 = tmp_blending_op_25 + tmp_blending_op_26;
             const real_t tmp_blending_op_28 = tmp_blending_op_12*pow(tmp_blending_op_27, -0.50000000000000000);
             const real_t tmp_blending_op_29 = tmp_blending_op_23*tmp_blending_op_28;
             const real_t tmp_blending_op_30 = pow(tmp_blending_op_27, -1.5000000000000000);
             const real_t tmp_blending_op_31 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_23) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_24));
             const real_t tmp_blending_op_32 = tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t tmp_blending_op_33 = tmp_blending_op_24*tmp_blending_op_28;
             const real_t tmp_blending_op_36 = p_affine_0_1 + tmp_blending_op_1*0.16666666666666666 + tmp_blending_op_2*0.66666666666666663;
             const real_t tmp_blending_op_37 = p_affine_0_0 + tmp_blending_op_4*0.16666666666666666 + tmp_blending_op_5*0.66666666666666663;
             const real_t tmp_blending_op_38 = (tmp_blending_op_37*tmp_blending_op_37);
             const real_t tmp_blending_op_39 = (tmp_blending_op_36*tmp_blending_op_36);
             const real_t tmp_blending_op_40 = tmp_blending_op_38 + tmp_blending_op_39;
             const real_t tmp_blending_op_41 = tmp_blending_op_12*pow(tmp_blending_op_40, -0.50000000000000000);
             const real_t tmp_blending_op_42 = tmp_blending_op_36*tmp_blending_op_41;
             const real_t tmp_blending_op_43 = pow(tmp_blending_op_40, -1.5000000000000000);
             const real_t tmp_blending_op_44 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_36) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_37));
             const real_t tmp_blending_op_45 = tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t tmp_blending_op_46 = tmp_blending_op_37*tmp_blending_op_41;
             const real_t jac_blending_1_1_q_2 = -tmp_blending_op_0*tmp_blending_op_14 + tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_7*1.0;
             const real_t jac_blending_1_0_q_2 = tmp_blending_op_10*tmp_blending_op_14 - tmp_blending_op_19*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_1_q_2 = -tmp_blending_op_0*tmp_blending_op_20 - tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_0_q_2 = tmp_blending_op_10*tmp_blending_op_20 + tmp_blending_op_19*tmp_blending_op_8;
             const real_t tmp_blending_op_21 = jac_blending_0_0_q_2*jac_blending_1_1_q_2 - jac_blending_0_1_q_2*jac_blending_1_0_q_2;
             const real_t tmp_blending_op_22 = 1.0 / (tmp_blending_op_21);
             const real_t abs_det_jac_blending_q_2 = tmp_blending_op_21;
             const real_t jac_blending_inv_1_1_q_2 = jac_blending_0_0_q_2*tmp_blending_op_22;
             const real_t jac_blending_inv_1_0_q_2 = -jac_blending_1_0_q_2*tmp_blending_op_22;
             const real_t jac_blending_inv_0_1_q_2 = -jac_blending_0_1_q_2*tmp_blending_op_22;
             const real_t jac_blending_inv_0_0_q_2 = jac_blending_1_1_q_2*tmp_blending_op_22;
             const real_t jac_blending_1_1_q_1 = -tmp_blending_op_0*tmp_blending_op_29 + tmp_blending_op_25*tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t jac_blending_1_0_q_1 = tmp_blending_op_10*tmp_blending_op_29 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_32;
             const real_t jac_blending_0_1_q_1 = -tmp_blending_op_0*tmp_blending_op_33 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_30*tmp_blending_op_31;
             const real_t jac_blending_0_0_q_1 = tmp_blending_op_10*tmp_blending_op_33 + tmp_blending_op_26*tmp_blending_op_32;
             const real_t tmp_blending_op_34 = jac_blending_0_0_q_1*jac_blending_1_1_q_1 - jac_blending_0_1_q_1*jac_blending_1_0_q_1;
             const real_t tmp_blending_op_35 = 1.0 / (tmp_blending_op_34);
             const real_t abs_det_jac_blending_q_1 = tmp_blending_op_34;
             const real_t jac_blending_inv_1_1_q_1 = jac_blending_0_0_q_1*tmp_blending_op_35;
             const real_t jac_blending_inv_1_0_q_1 = -jac_blending_1_0_q_1*tmp_blending_op_35;
             const real_t jac_blending_inv_0_1_q_1 = -jac_blending_0_1_q_1*tmp_blending_op_35;
             const real_t jac_blending_inv_0_0_q_1 = jac_blending_1_1_q_1*tmp_blending_op_35;
             const real_t jac_blending_1_1_q_0 = -tmp_blending_op_0*tmp_blending_op_42 + tmp_blending_op_38*tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t jac_blending_1_0_q_0 = tmp_blending_op_10*tmp_blending_op_42 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_45;
             const real_t jac_blending_0_1_q_0 = -tmp_blending_op_0*tmp_blending_op_46 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_43*tmp_blending_op_44;
             const real_t jac_blending_0_0_q_0 = tmp_blending_op_10*tmp_blending_op_46 + tmp_blending_op_39*tmp_blending_op_45;
             const real_t tmp_blending_op_47 = jac_blending_0_0_q_0*jac_blending_1_1_q_0 - jac_blending_0_1_q_0*jac_blending_1_0_q_0;
             const real_t tmp_blending_op_48 = 1.0 / (tmp_blending_op_47);
             const real_t abs_det_jac_blending_q_0 = tmp_blending_op_47;
             const real_t jac_blending_inv_1_1_q_0 = jac_blending_0_0_q_0*tmp_blending_op_48;
             const real_t jac_blending_inv_1_0_q_0 = -jac_blending_1_0_q_0*tmp_blending_op_48;
             const real_t jac_blending_inv_0_1_q_0 = -jac_blending_0_1_q_0*tmp_blending_op_48;
             const real_t jac_blending_inv_0_0_q_0 = jac_blending_1_1_q_0*tmp_blending_op_48;
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
             const real_t nx_rotation_dof_0 = _data_nx_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t nx_rotation_dof_1 = _data_nx_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t nx_rotation_dof_2 = _data_nx_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t nx_rotation_dof_3 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t nx_rotation_dof_4 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t nx_rotation_dof_5 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ny_rotation_dof_0 = _data_ny_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ny_rotation_dof_1 = _data_ny_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ny_rotation_dof_2 = _data_ny_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ny_rotation_dof_3 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ny_rotation_dof_4 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ny_rotation_dof_5 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const bool tmp_kernel_op_0 = pow((nx_rotation_dof_1*nx_rotation_dof_1) + (ny_rotation_dof_1*ny_rotation_dof_1), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_1 = ((tmp_kernel_op_0) ? (nx_rotation_dof_1): (0.0));
             const real_t tmp_kernel_op_6 = -jac_blending_inv_0_0_q_0*tmp_kernel_op_4 - jac_blending_inv_1_0_q_0*tmp_kernel_op_5;
             const real_t tmp_kernel_op_7 = abs_det_jac_blending_q_0*0.16666666666666674;
             const real_t tmp_kernel_op_8 = abs_det_jac_affine_GRAY*tmp_kernel_op_7;
             const real_t tmp_kernel_op_9 = tmp_kernel_op_6*tmp_kernel_op_8;
             const real_t tmp_kernel_op_10 = ((tmp_kernel_op_0) ? (ny_rotation_dof_1): (1.0));
             const real_t tmp_kernel_op_11 = -jac_blending_inv_0_1_q_0*tmp_kernel_op_4 - jac_blending_inv_1_1_q_0*tmp_kernel_op_5;
             const real_t tmp_kernel_op_12 = tmp_kernel_op_11*tmp_kernel_op_8;
             const real_t tmp_kernel_op_17 = -jac_blending_inv_0_0_q_1*tmp_kernel_op_15 - jac_blending_inv_1_0_q_1*tmp_kernel_op_16;
             const real_t tmp_kernel_op_18 = abs_det_jac_blending_q_1*0.16666666666666671;
             const real_t tmp_kernel_op_19 = abs_det_jac_affine_GRAY*tmp_kernel_op_18;
             const real_t tmp_kernel_op_20 = tmp_kernel_op_17*tmp_kernel_op_19;
             const real_t tmp_kernel_op_21 = -jac_blending_inv_0_1_q_1*tmp_kernel_op_15 - jac_blending_inv_1_1_q_1*tmp_kernel_op_16;
             const real_t tmp_kernel_op_22 = tmp_kernel_op_19*tmp_kernel_op_21;
             const real_t tmp_kernel_op_27 = -jac_blending_inv_0_0_q_2*tmp_kernel_op_25 - jac_blending_inv_1_0_q_2*tmp_kernel_op_26;
             const real_t tmp_kernel_op_28 = abs_det_jac_blending_q_2*0.66666666666666674;
             const real_t tmp_kernel_op_29 = abs_det_jac_affine_GRAY*tmp_kernel_op_28;
             const real_t tmp_kernel_op_30 = tmp_kernel_op_27*tmp_kernel_op_29;
             const real_t tmp_kernel_op_31 = -jac_blending_inv_0_1_q_2*tmp_kernel_op_25 - jac_blending_inv_1_1_q_2*tmp_kernel_op_26;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_29*tmp_kernel_op_31;
             const bool tmp_kernel_op_33 = pow((nx_rotation_dof_2*nx_rotation_dof_2) + (ny_rotation_dof_2*ny_rotation_dof_2), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_34 = ((tmp_kernel_op_33) ? (nx_rotation_dof_2): (0.0));
             const real_t tmp_kernel_op_39 = -jac_blending_inv_0_0_q_0*tmp_kernel_op_37 - jac_blending_inv_1_0_q_0*tmp_kernel_op_38;
             const real_t tmp_kernel_op_40 = tmp_kernel_op_39*tmp_kernel_op_8;
             const real_t tmp_kernel_op_41 = ((tmp_kernel_op_33) ? (ny_rotation_dof_2): (1.0));
             const real_t tmp_kernel_op_42 = -jac_blending_inv_0_1_q_0*tmp_kernel_op_37 - jac_blending_inv_1_1_q_0*tmp_kernel_op_38;
             const real_t tmp_kernel_op_43 = tmp_kernel_op_42*tmp_kernel_op_8;
             const real_t tmp_kernel_op_48 = -jac_blending_inv_0_0_q_1*tmp_kernel_op_46 - jac_blending_inv_1_0_q_1*tmp_kernel_op_47;
             const real_t tmp_kernel_op_49 = tmp_kernel_op_19*tmp_kernel_op_48;
             const real_t tmp_kernel_op_50 = -jac_blending_inv_0_1_q_1*tmp_kernel_op_46 - jac_blending_inv_1_1_q_1*tmp_kernel_op_47;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_19*tmp_kernel_op_50;
             const real_t tmp_kernel_op_56 = -jac_blending_inv_0_0_q_2*tmp_kernel_op_54 - jac_blending_inv_1_0_q_2*tmp_kernel_op_55;
             const real_t tmp_kernel_op_57 = tmp_kernel_op_29*tmp_kernel_op_56;
             const real_t tmp_kernel_op_58 = -jac_blending_inv_0_1_q_2*tmp_kernel_op_54 - jac_blending_inv_1_1_q_2*tmp_kernel_op_55;
             const real_t tmp_kernel_op_59 = tmp_kernel_op_29*tmp_kernel_op_58;
             const real_t tmp_kernel_op_60 = ((tmp_kernel_op_0) ? (-ny_rotation_dof_1): (1.0));
             const real_t tmp_kernel_op_61 = ((tmp_kernel_op_33) ? (-ny_rotation_dof_2): (1.0));
             const bool tmp_kernel_op_62 = pow((nx_rotation_dof_3*nx_rotation_dof_3) + (ny_rotation_dof_3*ny_rotation_dof_3), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_63 = ((tmp_kernel_op_62) ? (nx_rotation_dof_3): (0.0));
             const real_t tmp_kernel_op_70 = -jac_blending_inv_0_0_q_0*tmp_kernel_op_66 - jac_blending_inv_1_0_q_0*tmp_kernel_op_69;
             const real_t tmp_kernel_op_71 = tmp_kernel_op_70*tmp_kernel_op_8;
             const real_t tmp_kernel_op_72 = ((tmp_kernel_op_62) ? (ny_rotation_dof_3): (1.0));
             const real_t tmp_kernel_op_73 = -jac_blending_inv_0_1_q_0*tmp_kernel_op_66 - jac_blending_inv_1_1_q_0*tmp_kernel_op_69;
             const real_t tmp_kernel_op_74 = tmp_kernel_op_73*tmp_kernel_op_8;
             const real_t tmp_kernel_op_81 = -jac_blending_inv_0_0_q_1*tmp_kernel_op_77 - jac_blending_inv_1_0_q_1*tmp_kernel_op_80;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_19*tmp_kernel_op_81;
             const real_t tmp_kernel_op_83 = -jac_blending_inv_0_1_q_1*tmp_kernel_op_77 - jac_blending_inv_1_1_q_1*tmp_kernel_op_80;
             const real_t tmp_kernel_op_84 = tmp_kernel_op_19*tmp_kernel_op_83;
             const real_t tmp_kernel_op_91 = -jac_blending_inv_0_0_q_2*tmp_kernel_op_87 - jac_blending_inv_1_0_q_2*tmp_kernel_op_90;
             const real_t tmp_kernel_op_92 = tmp_kernel_op_29*tmp_kernel_op_91;
             const real_t tmp_kernel_op_93 = -jac_blending_inv_0_1_q_2*tmp_kernel_op_87 - jac_blending_inv_1_1_q_2*tmp_kernel_op_90;
             const real_t tmp_kernel_op_94 = tmp_kernel_op_29*tmp_kernel_op_93;
             const real_t tmp_kernel_op_95 = ((tmp_kernel_op_62) ? (-ny_rotation_dof_3): (1.0));
             const bool tmp_kernel_op_96 = pow((nx_rotation_dof_4*nx_rotation_dof_4) + (ny_rotation_dof_4*ny_rotation_dof_4), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_97 = ((tmp_kernel_op_96) ? (nx_rotation_dof_4): (0.0));
             const real_t tmp_kernel_op_101 = -jac_blending_inv_0_0_q_0*tmp_kernel_op_99 - jac_blending_inv_1_0_q_0*tmp_kernel_op_100;
             const real_t tmp_kernel_op_102 = tmp_kernel_op_101*tmp_kernel_op_8;
             const real_t tmp_kernel_op_103 = ((tmp_kernel_op_96) ? (ny_rotation_dof_4): (1.0));
             const real_t tmp_kernel_op_104 = -jac_blending_inv_0_1_q_0*tmp_kernel_op_99 - jac_blending_inv_1_1_q_0*tmp_kernel_op_100;
             const real_t tmp_kernel_op_105 = tmp_kernel_op_104*tmp_kernel_op_8;
             const real_t tmp_kernel_op_109 = -jac_blending_inv_0_0_q_1*tmp_kernel_op_107 - jac_blending_inv_1_0_q_1*tmp_kernel_op_108;
             const real_t tmp_kernel_op_110 = tmp_kernel_op_109*tmp_kernel_op_19;
             const real_t tmp_kernel_op_111 = -jac_blending_inv_0_1_q_1*tmp_kernel_op_107 - jac_blending_inv_1_1_q_1*tmp_kernel_op_108;
             const real_t tmp_kernel_op_112 = tmp_kernel_op_111*tmp_kernel_op_19;
             const real_t tmp_kernel_op_116 = -jac_blending_inv_0_0_q_2*tmp_kernel_op_114 - jac_blending_inv_1_0_q_2*tmp_kernel_op_115;
             const real_t tmp_kernel_op_117 = tmp_kernel_op_116*tmp_kernel_op_29;
             const real_t tmp_kernel_op_118 = -jac_blending_inv_0_1_q_2*tmp_kernel_op_114 - jac_blending_inv_1_1_q_2*tmp_kernel_op_115;
             const real_t tmp_kernel_op_119 = tmp_kernel_op_118*tmp_kernel_op_29;
             const bool tmp_kernel_op_120 = pow((nx_rotation_dof_5*nx_rotation_dof_5) + (ny_rotation_dof_5*ny_rotation_dof_5), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_121 = ((tmp_kernel_op_120) ? (nx_rotation_dof_5): (0.0));
             const real_t tmp_kernel_op_125 = -jac_blending_inv_0_0_q_0*tmp_kernel_op_123 - jac_blending_inv_1_0_q_0*tmp_kernel_op_124;
             const real_t tmp_kernel_op_126 = tmp_kernel_op_125*tmp_kernel_op_8;
             const real_t tmp_kernel_op_127 = ((tmp_kernel_op_120) ? (ny_rotation_dof_5): (1.0));
             const real_t tmp_kernel_op_128 = -jac_blending_inv_0_1_q_0*tmp_kernel_op_123 - jac_blending_inv_1_1_q_0*tmp_kernel_op_124;
             const real_t tmp_kernel_op_129 = tmp_kernel_op_128*tmp_kernel_op_8;
             const real_t tmp_kernel_op_133 = -jac_blending_inv_0_0_q_1*tmp_kernel_op_131 - jac_blending_inv_1_0_q_1*tmp_kernel_op_132;
             const real_t tmp_kernel_op_134 = tmp_kernel_op_133*tmp_kernel_op_19;
             const real_t tmp_kernel_op_135 = -jac_blending_inv_0_1_q_1*tmp_kernel_op_131 - jac_blending_inv_1_1_q_1*tmp_kernel_op_132;
             const real_t tmp_kernel_op_136 = tmp_kernel_op_135*tmp_kernel_op_19;
             const real_t tmp_kernel_op_140 = -jac_blending_inv_0_0_q_2*tmp_kernel_op_138 - jac_blending_inv_1_0_q_2*tmp_kernel_op_139;
             const real_t tmp_kernel_op_141 = tmp_kernel_op_140*tmp_kernel_op_29;
             const real_t tmp_kernel_op_142 = -jac_blending_inv_0_1_q_2*tmp_kernel_op_138 - jac_blending_inv_1_1_q_2*tmp_kernel_op_139;
             const real_t tmp_kernel_op_143 = tmp_kernel_op_142*tmp_kernel_op_29;
             const real_t tmp_kernel_op_144 = ((tmp_kernel_op_96) ? (-ny_rotation_dof_4): (1.0));
             const real_t tmp_kernel_op_145 = ((tmp_kernel_op_120) ? (-ny_rotation_dof_5): (1.0));
             const real_t tmp_kernel_op_149 = -jac_blending_inv_0_0_q_0*tmp_kernel_op_147 - jac_blending_inv_1_0_q_0*tmp_kernel_op_148;
             const real_t tmp_kernel_op_150 = tmp_kernel_op_149*tmp_kernel_op_7;
             const bool tmp_kernel_op_151 = pow((nx_rotation_dof_0*nx_rotation_dof_0) + (ny_rotation_dof_0*ny_rotation_dof_0), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_152 = abs_det_jac_affine_GRAY*((tmp_kernel_op_151) ? (nx_rotation_dof_0): (0.0));
             const real_t tmp_kernel_op_153 = -jac_blending_inv_0_1_q_0*tmp_kernel_op_147 - jac_blending_inv_1_1_q_0*tmp_kernel_op_148;
             const real_t tmp_kernel_op_154 = tmp_kernel_op_153*tmp_kernel_op_7;
             const real_t tmp_kernel_op_155 = abs_det_jac_affine_GRAY*((tmp_kernel_op_151) ? (ny_rotation_dof_0): (1.0));
             const real_t tmp_kernel_op_159 = -jac_blending_inv_0_0_q_1*tmp_kernel_op_157 - jac_blending_inv_1_0_q_1*tmp_kernel_op_158;
             const real_t tmp_kernel_op_160 = tmp_kernel_op_159*tmp_kernel_op_18;
             const real_t tmp_kernel_op_161 = -jac_blending_inv_0_1_q_1*tmp_kernel_op_157 - jac_blending_inv_1_1_q_1*tmp_kernel_op_158;
             const real_t tmp_kernel_op_162 = tmp_kernel_op_161*tmp_kernel_op_18;
             const real_t tmp_kernel_op_166 = -jac_blending_inv_0_0_q_2*tmp_kernel_op_164 - jac_blending_inv_1_0_q_2*tmp_kernel_op_165;
             const real_t tmp_kernel_op_167 = tmp_kernel_op_166*tmp_kernel_op_28;
             const real_t tmp_kernel_op_168 = -jac_blending_inv_0_1_q_2*tmp_kernel_op_164 - jac_blending_inv_1_1_q_2*tmp_kernel_op_165;
             const real_t tmp_kernel_op_169 = tmp_kernel_op_168*tmp_kernel_op_28;
             const real_t tmp_kernel_op_170 = abs_det_jac_affine_GRAY*((tmp_kernel_op_151) ? (-ny_rotation_dof_0): (1.0));
             const real_t tmp_kernel_op_171 = abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_172 = abs_det_jac_affine_GRAY*tmp_kernel_op_171;
             const real_t tmp_kernel_op_173 = tmp_kernel_op_172*tmp_kernel_op_6;
             const real_t tmp_kernel_op_174 = tmp_kernel_op_11*tmp_kernel_op_172;
             const real_t tmp_kernel_op_175 = abs_det_jac_blending_q_1*0.66666666666666663;
             const real_t tmp_kernel_op_176 = abs_det_jac_affine_GRAY*tmp_kernel_op_175;
             const real_t tmp_kernel_op_177 = tmp_kernel_op_17*tmp_kernel_op_176;
             const real_t tmp_kernel_op_178 = tmp_kernel_op_176*tmp_kernel_op_21;
             const real_t tmp_kernel_op_179 = abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_180 = abs_det_jac_affine_GRAY*tmp_kernel_op_179;
             const real_t tmp_kernel_op_181 = tmp_kernel_op_180*tmp_kernel_op_27;
             const real_t tmp_kernel_op_182 = tmp_kernel_op_180*tmp_kernel_op_31;
             const real_t tmp_kernel_op_183 = tmp_kernel_op_172*tmp_kernel_op_39;
             const real_t tmp_kernel_op_184 = tmp_kernel_op_172*tmp_kernel_op_42;
             const real_t tmp_kernel_op_185 = tmp_kernel_op_176*tmp_kernel_op_48;
             const real_t tmp_kernel_op_186 = tmp_kernel_op_176*tmp_kernel_op_50;
             const real_t tmp_kernel_op_187 = tmp_kernel_op_180*tmp_kernel_op_56;
             const real_t tmp_kernel_op_188 = tmp_kernel_op_180*tmp_kernel_op_58;
             const real_t tmp_kernel_op_189 = tmp_kernel_op_172*tmp_kernel_op_70;
             const real_t tmp_kernel_op_190 = tmp_kernel_op_172*tmp_kernel_op_73;
             const real_t tmp_kernel_op_191 = tmp_kernel_op_176*tmp_kernel_op_81;
             const real_t tmp_kernel_op_192 = tmp_kernel_op_176*tmp_kernel_op_83;
             const real_t tmp_kernel_op_193 = tmp_kernel_op_180*tmp_kernel_op_91;
             const real_t tmp_kernel_op_194 = tmp_kernel_op_180*tmp_kernel_op_93;
             const real_t tmp_kernel_op_195 = tmp_kernel_op_101*tmp_kernel_op_172;
             const real_t tmp_kernel_op_196 = tmp_kernel_op_104*tmp_kernel_op_172;
             const real_t tmp_kernel_op_197 = tmp_kernel_op_109*tmp_kernel_op_176;
             const real_t tmp_kernel_op_198 = tmp_kernel_op_111*tmp_kernel_op_176;
             const real_t tmp_kernel_op_199 = tmp_kernel_op_116*tmp_kernel_op_180;
             const real_t tmp_kernel_op_200 = tmp_kernel_op_118*tmp_kernel_op_180;
             const real_t tmp_kernel_op_201 = tmp_kernel_op_125*tmp_kernel_op_172;
             const real_t tmp_kernel_op_202 = tmp_kernel_op_128*tmp_kernel_op_172;
             const real_t tmp_kernel_op_203 = tmp_kernel_op_133*tmp_kernel_op_176;
             const real_t tmp_kernel_op_204 = tmp_kernel_op_135*tmp_kernel_op_176;
             const real_t tmp_kernel_op_205 = tmp_kernel_op_140*tmp_kernel_op_180;
             const real_t tmp_kernel_op_206 = tmp_kernel_op_142*tmp_kernel_op_180;
             const real_t tmp_kernel_op_207 = tmp_kernel_op_149*tmp_kernel_op_171;
             const real_t tmp_kernel_op_208 = tmp_kernel_op_153*tmp_kernel_op_171;
             const real_t tmp_kernel_op_209 = tmp_kernel_op_159*tmp_kernel_op_175;
             const real_t tmp_kernel_op_210 = tmp_kernel_op_161*tmp_kernel_op_175;
             const real_t tmp_kernel_op_211 = tmp_kernel_op_166*tmp_kernel_op_179;
             const real_t tmp_kernel_op_212 = tmp_kernel_op_168*tmp_kernel_op_179;
             const real_t tmp_kernel_op_213 = abs_det_jac_blending_q_0*0.66666666666666663;
             const real_t tmp_kernel_op_214 = abs_det_jac_affine_GRAY*tmp_kernel_op_213;
             const real_t tmp_kernel_op_215 = tmp_kernel_op_214*tmp_kernel_op_6;
             const real_t tmp_kernel_op_216 = tmp_kernel_op_11*tmp_kernel_op_214;
             const real_t tmp_kernel_op_217 = abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_218 = abs_det_jac_affine_GRAY*tmp_kernel_op_217;
             const real_t tmp_kernel_op_219 = tmp_kernel_op_17*tmp_kernel_op_218;
             const real_t tmp_kernel_op_220 = tmp_kernel_op_21*tmp_kernel_op_218;
             const real_t tmp_kernel_op_221 = abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_222 = abs_det_jac_affine_GRAY*tmp_kernel_op_221;
             const real_t tmp_kernel_op_223 = tmp_kernel_op_222*tmp_kernel_op_27;
             const real_t tmp_kernel_op_224 = tmp_kernel_op_222*tmp_kernel_op_31;
             const real_t tmp_kernel_op_225 = tmp_kernel_op_214*tmp_kernel_op_39;
             const real_t tmp_kernel_op_226 = tmp_kernel_op_214*tmp_kernel_op_42;
             const real_t tmp_kernel_op_227 = tmp_kernel_op_218*tmp_kernel_op_48;
             const real_t tmp_kernel_op_228 = tmp_kernel_op_218*tmp_kernel_op_50;
             const real_t tmp_kernel_op_229 = tmp_kernel_op_222*tmp_kernel_op_56;
             const real_t tmp_kernel_op_230 = tmp_kernel_op_222*tmp_kernel_op_58;
             const real_t tmp_kernel_op_231 = tmp_kernel_op_214*tmp_kernel_op_70;
             const real_t tmp_kernel_op_232 = tmp_kernel_op_214*tmp_kernel_op_73;
             const real_t tmp_kernel_op_233 = tmp_kernel_op_218*tmp_kernel_op_81;
             const real_t tmp_kernel_op_234 = tmp_kernel_op_218*tmp_kernel_op_83;
             const real_t tmp_kernel_op_235 = tmp_kernel_op_222*tmp_kernel_op_91;
             const real_t tmp_kernel_op_236 = tmp_kernel_op_222*tmp_kernel_op_93;
             const real_t tmp_kernel_op_237 = tmp_kernel_op_101*tmp_kernel_op_214;
             const real_t tmp_kernel_op_238 = tmp_kernel_op_104*tmp_kernel_op_214;
             const real_t tmp_kernel_op_239 = tmp_kernel_op_109*tmp_kernel_op_218;
             const real_t tmp_kernel_op_240 = tmp_kernel_op_111*tmp_kernel_op_218;
             const real_t tmp_kernel_op_241 = tmp_kernel_op_116*tmp_kernel_op_222;
             const real_t tmp_kernel_op_242 = tmp_kernel_op_118*tmp_kernel_op_222;
             const real_t tmp_kernel_op_243 = tmp_kernel_op_125*tmp_kernel_op_214;
             const real_t tmp_kernel_op_244 = tmp_kernel_op_128*tmp_kernel_op_214;
             const real_t tmp_kernel_op_245 = tmp_kernel_op_133*tmp_kernel_op_218;
             const real_t tmp_kernel_op_246 = tmp_kernel_op_135*tmp_kernel_op_218;
             const real_t tmp_kernel_op_247 = tmp_kernel_op_140*tmp_kernel_op_222;
             const real_t tmp_kernel_op_248 = tmp_kernel_op_142*tmp_kernel_op_222;
             const real_t tmp_kernel_op_249 = tmp_kernel_op_149*tmp_kernel_op_213;
             const real_t tmp_kernel_op_250 = tmp_kernel_op_153*tmp_kernel_op_213;
             const real_t tmp_kernel_op_251 = tmp_kernel_op_159*tmp_kernel_op_217;
             const real_t tmp_kernel_op_252 = tmp_kernel_op_161*tmp_kernel_op_217;
             const real_t tmp_kernel_op_253 = tmp_kernel_op_166*tmp_kernel_op_221;
             const real_t tmp_kernel_op_254 = tmp_kernel_op_168*tmp_kernel_op_221;
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_150*tmp_kernel_op_170*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_154*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_162*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_169*0.16666666666666666 + tmp_kernel_op_160*tmp_kernel_op_170*0.16666666666666666 + tmp_kernel_op_167*tmp_kernel_op_170*0.16666666666666666) + src_dof_1*(tmp_kernel_op_1*tmp_kernel_op_12*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_22*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_32*0.16666666666666666 + tmp_kernel_op_20*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_30*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_60*tmp_kernel_op_9*0.16666666666666666) + src_dof_10*(tmp_kernel_op_102*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_105*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_112*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_119*0.16666666666666666 + tmp_kernel_op_110*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_117*tmp_kernel_op_97*0.16666666666666666) + src_dof_11*(tmp_kernel_op_121*tmp_kernel_op_126*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_134*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_141*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_129*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_136*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_143*0.16666666666666666) + src_dof_2*(tmp_kernel_op_34*tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_34*tmp_kernel_op_51*0.16666666666666666 + tmp_kernel_op_34*tmp_kernel_op_59*0.16666666666666666 + tmp_kernel_op_40*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_49*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_57*tmp_kernel_op_61*0.16666666666666666) + src_dof_3*(tmp_kernel_op_63*tmp_kernel_op_74*0.16666666666666666 + tmp_kernel_op_63*tmp_kernel_op_84*0.16666666666666666 + tmp_kernel_op_63*tmp_kernel_op_94*0.16666666666666666 + tmp_kernel_op_71*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_82*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_92*tmp_kernel_op_95*0.16666666666666666) + src_dof_4*(tmp_kernel_op_102*tmp_kernel_op_144*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_110*tmp_kernel_op_144*0.16666666666666666 + tmp_kernel_op_112*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_117*tmp_kernel_op_144*0.16666666666666666 + tmp_kernel_op_119*tmp_kernel_op_97*0.16666666666666666) + src_dof_5*(tmp_kernel_op_121*tmp_kernel_op_129*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_136*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_143*0.16666666666666666 + tmp_kernel_op_126*tmp_kernel_op_145*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_145*0.16666666666666666 + tmp_kernel_op_141*tmp_kernel_op_145*0.16666666666666666) + src_dof_6*(tmp_kernel_op_150*tmp_kernel_op_152*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_160*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_167*0.16666666666666666 + tmp_kernel_op_154*tmp_kernel_op_155*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_162*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_169*0.16666666666666666) + src_dof_7*(tmp_kernel_op_1*tmp_kernel_op_20*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_30*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_9*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_12*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_22*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_32*0.16666666666666666) + src_dof_8*(tmp_kernel_op_34*tmp_kernel_op_40*0.16666666666666666 + tmp_kernel_op_34*tmp_kernel_op_49*0.16666666666666666 + tmp_kernel_op_34*tmp_kernel_op_57*0.16666666666666666 + tmp_kernel_op_41*tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_41*tmp_kernel_op_51*0.16666666666666666 + tmp_kernel_op_41*tmp_kernel_op_59*0.16666666666666666) + src_dof_9*(tmp_kernel_op_63*tmp_kernel_op_71*0.16666666666666666 + tmp_kernel_op_63*tmp_kernel_op_82*0.16666666666666666 + tmp_kernel_op_63*tmp_kernel_op_92*0.16666666666666666 + tmp_kernel_op_72*tmp_kernel_op_74*0.16666666666666666 + tmp_kernel_op_72*tmp_kernel_op_84*0.16666666666666666 + tmp_kernel_op_72*tmp_kernel_op_94*0.16666666666666666);
             const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_152*tmp_kernel_op_208*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_210*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_212*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_207*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_209*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_211*0.16666666666666666) + src_dof_1*(tmp_kernel_op_1*tmp_kernel_op_174*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_178*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_182*0.16666666666666666 + tmp_kernel_op_173*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_177*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_181*tmp_kernel_op_60*0.16666666666666666) + src_dof_10*(tmp_kernel_op_103*tmp_kernel_op_196*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_198*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_200*0.16666666666666666 + tmp_kernel_op_195*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_197*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_199*tmp_kernel_op_97*0.16666666666666666) + src_dof_11*(tmp_kernel_op_121*tmp_kernel_op_201*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_203*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_205*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_202*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_204*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_206*0.16666666666666666) + src_dof_2*(tmp_kernel_op_183*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_184*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_186*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_187*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_188*tmp_kernel_op_34*0.16666666666666666) + src_dof_3*(tmp_kernel_op_189*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_190*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_191*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_193*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_194*tmp_kernel_op_63*0.16666666666666666) + src_dof_4*(tmp_kernel_op_144*tmp_kernel_op_195*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_197*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_199*0.16666666666666666 + tmp_kernel_op_196*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_198*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_200*tmp_kernel_op_97*0.16666666666666666) + src_dof_5*(tmp_kernel_op_121*tmp_kernel_op_202*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_204*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_206*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_201*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_203*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_205*0.16666666666666666) + src_dof_6*(tmp_kernel_op_152*tmp_kernel_op_207*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_209*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_211*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_208*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_210*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_212*0.16666666666666666) + src_dof_7*(tmp_kernel_op_1*tmp_kernel_op_173*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_177*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_181*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_174*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_178*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_182*0.16666666666666666) + src_dof_8*(tmp_kernel_op_183*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_184*tmp_kernel_op_41*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_186*tmp_kernel_op_41*0.16666666666666666 + tmp_kernel_op_187*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_188*tmp_kernel_op_41*0.16666666666666666) + src_dof_9*(tmp_kernel_op_189*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_190*tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_191*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_193*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_194*tmp_kernel_op_72*0.16666666666666666);
             const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_152*tmp_kernel_op_250*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_252*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_254*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_249*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_251*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_253*0.16666666666666666) + src_dof_1*(tmp_kernel_op_1*tmp_kernel_op_216*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_220*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_224*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_219*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_223*tmp_kernel_op_60*0.16666666666666666) + src_dof_10*(tmp_kernel_op_103*tmp_kernel_op_238*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_240*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_242*0.16666666666666666 + tmp_kernel_op_237*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_239*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_241*tmp_kernel_op_97*0.16666666666666666) + src_dof_11*(tmp_kernel_op_121*tmp_kernel_op_243*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_245*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_247*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_244*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_246*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_248*0.16666666666666666) + src_dof_2*(tmp_kernel_op_225*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_226*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_227*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_228*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_229*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_230*tmp_kernel_op_34*0.16666666666666666) + src_dof_3*(tmp_kernel_op_231*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_232*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_233*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_234*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_235*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_236*tmp_kernel_op_63*0.16666666666666666) + src_dof_4*(tmp_kernel_op_144*tmp_kernel_op_237*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_239*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_241*0.16666666666666666 + tmp_kernel_op_238*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_240*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_242*tmp_kernel_op_97*0.16666666666666666) + src_dof_5*(tmp_kernel_op_121*tmp_kernel_op_244*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_246*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_248*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_243*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_245*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_247*0.16666666666666666) + src_dof_6*(tmp_kernel_op_152*tmp_kernel_op_249*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_251*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_253*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_250*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_252*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_254*0.16666666666666666) + src_dof_7*(tmp_kernel_op_1*tmp_kernel_op_215*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_219*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_223*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_216*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_220*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_224*0.16666666666666666) + src_dof_8*(tmp_kernel_op_225*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_226*tmp_kernel_op_41*0.16666666666666666 + tmp_kernel_op_227*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_228*tmp_kernel_op_41*0.16666666666666666 + tmp_kernel_op_229*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_230*tmp_kernel_op_41*0.16666666666666666) + src_dof_9*(tmp_kernel_op_231*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_232*tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_233*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_234*tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_235*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_236*tmp_kernel_op_72*0.16666666666666666);
             _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0*operatorScaling + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1*operatorScaling + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2*operatorScaling + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
       const real_t tmp_moved_constant_0 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_3;
       const real_t tmp_moved_constant_1 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_3;
       const real_t tmp_moved_constant_2 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_3 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_4 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_24;
       const real_t tmp_moved_constant_5 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_24;
       const real_t tmp_moved_constant_6 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_36;
       const real_t tmp_moved_constant_7 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_36;
       const real_t tmp_moved_constant_8 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_45;
       const real_t tmp_moved_constant_9 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_45;
       const real_t tmp_moved_constant_10 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_53;
       const real_t tmp_moved_constant_11 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_53;
       const real_t tmp_moved_constant_12 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_35;
       const real_t tmp_moved_constant_13 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_14 = tmp_moved_constant_12 + tmp_moved_constant_13;
       const real_t tmp_moved_constant_15 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_35;
       const real_t tmp_moved_constant_16 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_17 = tmp_moved_constant_15 + tmp_moved_constant_16;
       const real_t tmp_moved_constant_18 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_44;
       const real_t tmp_moved_constant_19 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_13;
       const real_t tmp_moved_constant_20 = tmp_moved_constant_18 + tmp_moved_constant_19;
       const real_t tmp_moved_constant_21 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_44;
       const real_t tmp_moved_constant_22 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_13;
       const real_t tmp_moved_constant_23 = tmp_moved_constant_21 + tmp_moved_constant_22;
       const real_t tmp_moved_constant_24 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_52;
       const real_t tmp_moved_constant_25 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_23;
       const real_t tmp_moved_constant_26 = tmp_moved_constant_24 + tmp_moved_constant_25;
       const real_t tmp_moved_constant_27 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_52;
       const real_t tmp_moved_constant_28 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_23;
       const real_t tmp_moved_constant_29 = tmp_moved_constant_27 + tmp_moved_constant_28;
       const real_t tmp_moved_constant_30 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_98 - tmp_moved_constant_12;
       const real_t tmp_moved_constant_31 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_98 - tmp_moved_constant_15;
       const real_t tmp_moved_constant_32 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_106 - tmp_moved_constant_18;
       const real_t tmp_moved_constant_33 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_106 - tmp_moved_constant_21;
       const real_t tmp_moved_constant_34 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_113 - tmp_moved_constant_24;
       const real_t tmp_moved_constant_35 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_113 - tmp_moved_constant_27;
       const real_t tmp_moved_constant_36 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_122 - tmp_moved_constant_13;
       const real_t tmp_moved_constant_37 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_122 - tmp_moved_constant_16;
       const real_t tmp_moved_constant_38 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_130 - tmp_moved_constant_19;
       const real_t tmp_moved_constant_39 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_130 - tmp_moved_constant_22;
       const real_t tmp_moved_constant_40 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_137 - tmp_moved_constant_25;
       const real_t tmp_moved_constant_41 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_137 - tmp_moved_constant_28;
       const real_t tmp_moved_constant_42 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_146 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_146;
       const real_t tmp_moved_constant_43 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_146 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_146;
       const real_t tmp_moved_constant_44 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_156 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_156;
       const real_t tmp_moved_constant_45 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_156 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_156;
       const real_t tmp_moved_constant_46 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_163 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_163;
       const real_t tmp_moved_constant_47 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_163 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_163;
       {
          /* FaceType.BLUE */
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
             const real_t tmp_blending_op_1 = -p_affine_0_1 + p_affine_1_1;
             const real_t tmp_blending_op_2 = -p_affine_0_1 + p_affine_2_1;
             const real_t tmp_blending_op_3 = p_affine_0_1 + tmp_blending_op_1*0.16666666666666666 + tmp_blending_op_2*0.16666666666666666;
             const real_t tmp_blending_op_4 = -p_affine_0_0 + p_affine_1_0;
             const real_t tmp_blending_op_5 = -p_affine_0_0 + p_affine_2_0;
             const real_t tmp_blending_op_6 = p_affine_0_0 + tmp_blending_op_4*0.16666666666666666 + tmp_blending_op_5*0.16666666666666666;
             const real_t tmp_blending_op_7 = (tmp_blending_op_6*tmp_blending_op_6);
             const real_t tmp_blending_op_8 = (tmp_blending_op_3*tmp_blending_op_3);
             const real_t tmp_blending_op_9 = tmp_blending_op_7 + tmp_blending_op_8;
             const real_t tmp_blending_op_13 = tmp_blending_op_12*pow(tmp_blending_op_9, -0.50000000000000000);
             const real_t tmp_blending_op_14 = tmp_blending_op_13*tmp_blending_op_3;
             const real_t tmp_blending_op_15 = pow(tmp_blending_op_9, -1.5000000000000000);
             const real_t tmp_blending_op_18 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_3) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_6));
             const real_t tmp_blending_op_19 = tmp_blending_op_15*tmp_blending_op_18*1.0;
             const real_t tmp_blending_op_20 = tmp_blending_op_13*tmp_blending_op_6;
             const real_t tmp_blending_op_23 = p_affine_0_1 + tmp_blending_op_1*0.66666666666666663 + tmp_blending_op_2*0.16666666666666666;
             const real_t tmp_blending_op_24 = p_affine_0_0 + tmp_blending_op_4*0.66666666666666663 + tmp_blending_op_5*0.16666666666666666;
             const real_t tmp_blending_op_25 = (tmp_blending_op_24*tmp_blending_op_24);
             const real_t tmp_blending_op_26 = (tmp_blending_op_23*tmp_blending_op_23);
             const real_t tmp_blending_op_27 = tmp_blending_op_25 + tmp_blending_op_26;
             const real_t tmp_blending_op_28 = tmp_blending_op_12*pow(tmp_blending_op_27, -0.50000000000000000);
             const real_t tmp_blending_op_29 = tmp_blending_op_23*tmp_blending_op_28;
             const real_t tmp_blending_op_30 = pow(tmp_blending_op_27, -1.5000000000000000);
             const real_t tmp_blending_op_31 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_23) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_24));
             const real_t tmp_blending_op_32 = tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t tmp_blending_op_33 = tmp_blending_op_24*tmp_blending_op_28;
             const real_t tmp_blending_op_36 = p_affine_0_1 + tmp_blending_op_1*0.16666666666666666 + tmp_blending_op_2*0.66666666666666663;
             const real_t tmp_blending_op_37 = p_affine_0_0 + tmp_blending_op_4*0.16666666666666666 + tmp_blending_op_5*0.66666666666666663;
             const real_t tmp_blending_op_38 = (tmp_blending_op_37*tmp_blending_op_37);
             const real_t tmp_blending_op_39 = (tmp_blending_op_36*tmp_blending_op_36);
             const real_t tmp_blending_op_40 = tmp_blending_op_38 + tmp_blending_op_39;
             const real_t tmp_blending_op_41 = tmp_blending_op_12*pow(tmp_blending_op_40, -0.50000000000000000);
             const real_t tmp_blending_op_42 = tmp_blending_op_36*tmp_blending_op_41;
             const real_t tmp_blending_op_43 = pow(tmp_blending_op_40, -1.5000000000000000);
             const real_t tmp_blending_op_44 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_36) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_37));
             const real_t tmp_blending_op_45 = tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t tmp_blending_op_46 = tmp_blending_op_37*tmp_blending_op_41;
             const real_t jac_blending_1_1_q_2 = -tmp_blending_op_0*tmp_blending_op_14 + tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_7*1.0;
             const real_t jac_blending_1_0_q_2 = tmp_blending_op_10*tmp_blending_op_14 - tmp_blending_op_19*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_1_q_2 = -tmp_blending_op_0*tmp_blending_op_20 - tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_0_q_2 = tmp_blending_op_10*tmp_blending_op_20 + tmp_blending_op_19*tmp_blending_op_8;
             const real_t tmp_blending_op_21 = jac_blending_0_0_q_2*jac_blending_1_1_q_2 - jac_blending_0_1_q_2*jac_blending_1_0_q_2;
             const real_t tmp_blending_op_22 = 1.0 / (tmp_blending_op_21);
             const real_t abs_det_jac_blending_q_2 = tmp_blending_op_21;
             const real_t jac_blending_inv_1_1_q_2 = jac_blending_0_0_q_2*tmp_blending_op_22;
             const real_t jac_blending_inv_1_0_q_2 = -jac_blending_1_0_q_2*tmp_blending_op_22;
             const real_t jac_blending_inv_0_1_q_2 = -jac_blending_0_1_q_2*tmp_blending_op_22;
             const real_t jac_blending_inv_0_0_q_2 = jac_blending_1_1_q_2*tmp_blending_op_22;
             const real_t jac_blending_1_1_q_1 = -tmp_blending_op_0*tmp_blending_op_29 + tmp_blending_op_25*tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t jac_blending_1_0_q_1 = tmp_blending_op_10*tmp_blending_op_29 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_32;
             const real_t jac_blending_0_1_q_1 = -tmp_blending_op_0*tmp_blending_op_33 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_30*tmp_blending_op_31;
             const real_t jac_blending_0_0_q_1 = tmp_blending_op_10*tmp_blending_op_33 + tmp_blending_op_26*tmp_blending_op_32;
             const real_t tmp_blending_op_34 = jac_blending_0_0_q_1*jac_blending_1_1_q_1 - jac_blending_0_1_q_1*jac_blending_1_0_q_1;
             const real_t tmp_blending_op_35 = 1.0 / (tmp_blending_op_34);
             const real_t abs_det_jac_blending_q_1 = tmp_blending_op_34;
             const real_t jac_blending_inv_1_1_q_1 = jac_blending_0_0_q_1*tmp_blending_op_35;
             const real_t jac_blending_inv_1_0_q_1 = -jac_blending_1_0_q_1*tmp_blending_op_35;
             const real_t jac_blending_inv_0_1_q_1 = -jac_blending_0_1_q_1*tmp_blending_op_35;
             const real_t jac_blending_inv_0_0_q_1 = jac_blending_1_1_q_1*tmp_blending_op_35;
             const real_t jac_blending_1_1_q_0 = -tmp_blending_op_0*tmp_blending_op_42 + tmp_blending_op_38*tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t jac_blending_1_0_q_0 = tmp_blending_op_10*tmp_blending_op_42 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_45;
             const real_t jac_blending_0_1_q_0 = -tmp_blending_op_0*tmp_blending_op_46 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_43*tmp_blending_op_44;
             const real_t jac_blending_0_0_q_0 = tmp_blending_op_10*tmp_blending_op_46 + tmp_blending_op_39*tmp_blending_op_45;
             const real_t tmp_blending_op_47 = jac_blending_0_0_q_0*jac_blending_1_1_q_0 - jac_blending_0_1_q_0*jac_blending_1_0_q_0;
             const real_t tmp_blending_op_48 = 1.0 / (tmp_blending_op_47);
             const real_t abs_det_jac_blending_q_0 = tmp_blending_op_47;
             const real_t jac_blending_inv_1_1_q_0 = jac_blending_0_0_q_0*tmp_blending_op_48;
             const real_t jac_blending_inv_1_0_q_0 = -jac_blending_1_0_q_0*tmp_blending_op_48;
             const real_t jac_blending_inv_0_1_q_0 = -jac_blending_0_1_q_0*tmp_blending_op_48;
             const real_t jac_blending_inv_0_0_q_0 = jac_blending_1_1_q_0*tmp_blending_op_48;
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
             const real_t nx_rotation_dof_0 = _data_nx_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t nx_rotation_dof_1 = _data_nx_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t nx_rotation_dof_2 = _data_nx_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t nx_rotation_dof_3 = _data_nx_rotationEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t nx_rotation_dof_4 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t nx_rotation_dof_5 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ny_rotation_dof_0 = _data_ny_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ny_rotation_dof_1 = _data_ny_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ny_rotation_dof_2 = _data_ny_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t ny_rotation_dof_3 = _data_ny_rotationEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ny_rotation_dof_4 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t ny_rotation_dof_5 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const bool tmp_kernel_op_0 = pow((nx_rotation_dof_1*nx_rotation_dof_1) + (ny_rotation_dof_1*ny_rotation_dof_1), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_1 = ((tmp_kernel_op_0) ? (nx_rotation_dof_1): (0.0));
             const real_t tmp_kernel_op_6 = -jac_blending_inv_0_0_q_0*tmp_moved_constant_0 - jac_blending_inv_1_0_q_0*tmp_moved_constant_1;
             const real_t tmp_kernel_op_7 = abs_det_jac_blending_q_0*0.16666666666666674;
             const real_t tmp_kernel_op_8 = abs_det_jac_affine_BLUE*tmp_kernel_op_7;
             const real_t tmp_kernel_op_9 = tmp_kernel_op_6*tmp_kernel_op_8;
             const real_t tmp_kernel_op_10 = ((tmp_kernel_op_0) ? (ny_rotation_dof_1): (1.0));
             const real_t tmp_kernel_op_11 = -jac_blending_inv_0_1_q_0*tmp_moved_constant_0 - jac_blending_inv_1_1_q_0*tmp_moved_constant_1;
             const real_t tmp_kernel_op_12 = tmp_kernel_op_11*tmp_kernel_op_8;
             const real_t tmp_kernel_op_17 = -jac_blending_inv_0_0_q_1*tmp_moved_constant_2 - jac_blending_inv_1_0_q_1*tmp_moved_constant_3;
             const real_t tmp_kernel_op_18 = abs_det_jac_blending_q_1*0.16666666666666671;
             const real_t tmp_kernel_op_19 = abs_det_jac_affine_BLUE*tmp_kernel_op_18;
             const real_t tmp_kernel_op_20 = tmp_kernel_op_17*tmp_kernel_op_19;
             const real_t tmp_kernel_op_21 = -jac_blending_inv_0_1_q_1*tmp_moved_constant_2 - jac_blending_inv_1_1_q_1*tmp_moved_constant_3;
             const real_t tmp_kernel_op_22 = tmp_kernel_op_19*tmp_kernel_op_21;
             const real_t tmp_kernel_op_27 = -jac_blending_inv_0_0_q_2*tmp_moved_constant_4 - jac_blending_inv_1_0_q_2*tmp_moved_constant_5;
             const real_t tmp_kernel_op_28 = abs_det_jac_blending_q_2*0.66666666666666674;
             const real_t tmp_kernel_op_29 = abs_det_jac_affine_BLUE*tmp_kernel_op_28;
             const real_t tmp_kernel_op_30 = tmp_kernel_op_27*tmp_kernel_op_29;
             const real_t tmp_kernel_op_31 = -jac_blending_inv_0_1_q_2*tmp_moved_constant_4 - jac_blending_inv_1_1_q_2*tmp_moved_constant_5;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_29*tmp_kernel_op_31;
             const bool tmp_kernel_op_33 = pow((nx_rotation_dof_2*nx_rotation_dof_2) + (ny_rotation_dof_2*ny_rotation_dof_2), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_34 = ((tmp_kernel_op_33) ? (nx_rotation_dof_2): (0.0));
             const real_t tmp_kernel_op_39 = -jac_blending_inv_0_0_q_0*tmp_moved_constant_6 - jac_blending_inv_1_0_q_0*tmp_moved_constant_7;
             const real_t tmp_kernel_op_40 = tmp_kernel_op_39*tmp_kernel_op_8;
             const real_t tmp_kernel_op_41 = ((tmp_kernel_op_33) ? (ny_rotation_dof_2): (1.0));
             const real_t tmp_kernel_op_42 = -jac_blending_inv_0_1_q_0*tmp_moved_constant_6 - jac_blending_inv_1_1_q_0*tmp_moved_constant_7;
             const real_t tmp_kernel_op_43 = tmp_kernel_op_42*tmp_kernel_op_8;
             const real_t tmp_kernel_op_48 = -jac_blending_inv_0_0_q_1*tmp_moved_constant_8 - jac_blending_inv_1_0_q_1*tmp_moved_constant_9;
             const real_t tmp_kernel_op_49 = tmp_kernel_op_19*tmp_kernel_op_48;
             const real_t tmp_kernel_op_50 = -jac_blending_inv_0_1_q_1*tmp_moved_constant_8 - jac_blending_inv_1_1_q_1*tmp_moved_constant_9;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_19*tmp_kernel_op_50;
             const real_t tmp_kernel_op_56 = -jac_blending_inv_0_0_q_2*tmp_moved_constant_10 - jac_blending_inv_1_0_q_2*tmp_moved_constant_11;
             const real_t tmp_kernel_op_57 = tmp_kernel_op_29*tmp_kernel_op_56;
             const real_t tmp_kernel_op_58 = -jac_blending_inv_0_1_q_2*tmp_moved_constant_10 - jac_blending_inv_1_1_q_2*tmp_moved_constant_11;
             const real_t tmp_kernel_op_59 = tmp_kernel_op_29*tmp_kernel_op_58;
             const real_t tmp_kernel_op_60 = ((tmp_kernel_op_0) ? (-ny_rotation_dof_1): (1.0));
             const real_t tmp_kernel_op_61 = ((tmp_kernel_op_33) ? (-ny_rotation_dof_2): (1.0));
             const bool tmp_kernel_op_62 = pow((nx_rotation_dof_3*nx_rotation_dof_3) + (ny_rotation_dof_3*ny_rotation_dof_3), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_63 = ((tmp_kernel_op_62) ? (nx_rotation_dof_3): (0.0));
             const real_t tmp_kernel_op_70 = -jac_blending_inv_0_0_q_0*tmp_moved_constant_14 - jac_blending_inv_1_0_q_0*tmp_moved_constant_17;
             const real_t tmp_kernel_op_71 = tmp_kernel_op_70*tmp_kernel_op_8;
             const real_t tmp_kernel_op_72 = ((tmp_kernel_op_62) ? (ny_rotation_dof_3): (1.0));
             const real_t tmp_kernel_op_73 = -jac_blending_inv_0_1_q_0*tmp_moved_constant_14 - jac_blending_inv_1_1_q_0*tmp_moved_constant_17;
             const real_t tmp_kernel_op_74 = tmp_kernel_op_73*tmp_kernel_op_8;
             const real_t tmp_kernel_op_81 = -jac_blending_inv_0_0_q_1*tmp_moved_constant_20 - jac_blending_inv_1_0_q_1*tmp_moved_constant_23;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_19*tmp_kernel_op_81;
             const real_t tmp_kernel_op_83 = -jac_blending_inv_0_1_q_1*tmp_moved_constant_20 - jac_blending_inv_1_1_q_1*tmp_moved_constant_23;
             const real_t tmp_kernel_op_84 = tmp_kernel_op_19*tmp_kernel_op_83;
             const real_t tmp_kernel_op_91 = -jac_blending_inv_0_0_q_2*tmp_moved_constant_26 - jac_blending_inv_1_0_q_2*tmp_moved_constant_29;
             const real_t tmp_kernel_op_92 = tmp_kernel_op_29*tmp_kernel_op_91;
             const real_t tmp_kernel_op_93 = -jac_blending_inv_0_1_q_2*tmp_moved_constant_26 - jac_blending_inv_1_1_q_2*tmp_moved_constant_29;
             const real_t tmp_kernel_op_94 = tmp_kernel_op_29*tmp_kernel_op_93;
             const real_t tmp_kernel_op_95 = ((tmp_kernel_op_62) ? (-ny_rotation_dof_3): (1.0));
             const bool tmp_kernel_op_96 = pow((nx_rotation_dof_4*nx_rotation_dof_4) + (ny_rotation_dof_4*ny_rotation_dof_4), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_97 = ((tmp_kernel_op_96) ? (nx_rotation_dof_4): (0.0));
             const real_t tmp_kernel_op_101 = -jac_blending_inv_0_0_q_0*tmp_moved_constant_30 - jac_blending_inv_1_0_q_0*tmp_moved_constant_31;
             const real_t tmp_kernel_op_102 = tmp_kernel_op_101*tmp_kernel_op_8;
             const real_t tmp_kernel_op_103 = ((tmp_kernel_op_96) ? (ny_rotation_dof_4): (1.0));
             const real_t tmp_kernel_op_104 = -jac_blending_inv_0_1_q_0*tmp_moved_constant_30 - jac_blending_inv_1_1_q_0*tmp_moved_constant_31;
             const real_t tmp_kernel_op_105 = tmp_kernel_op_104*tmp_kernel_op_8;
             const real_t tmp_kernel_op_109 = -jac_blending_inv_0_0_q_1*tmp_moved_constant_32 - jac_blending_inv_1_0_q_1*tmp_moved_constant_33;
             const real_t tmp_kernel_op_110 = tmp_kernel_op_109*tmp_kernel_op_19;
             const real_t tmp_kernel_op_111 = -jac_blending_inv_0_1_q_1*tmp_moved_constant_32 - jac_blending_inv_1_1_q_1*tmp_moved_constant_33;
             const real_t tmp_kernel_op_112 = tmp_kernel_op_111*tmp_kernel_op_19;
             const real_t tmp_kernel_op_116 = -jac_blending_inv_0_0_q_2*tmp_moved_constant_34 - jac_blending_inv_1_0_q_2*tmp_moved_constant_35;
             const real_t tmp_kernel_op_117 = tmp_kernel_op_116*tmp_kernel_op_29;
             const real_t tmp_kernel_op_118 = -jac_blending_inv_0_1_q_2*tmp_moved_constant_34 - jac_blending_inv_1_1_q_2*tmp_moved_constant_35;
             const real_t tmp_kernel_op_119 = tmp_kernel_op_118*tmp_kernel_op_29;
             const bool tmp_kernel_op_120 = pow((nx_rotation_dof_5*nx_rotation_dof_5) + (ny_rotation_dof_5*ny_rotation_dof_5), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_121 = ((tmp_kernel_op_120) ? (nx_rotation_dof_5): (0.0));
             const real_t tmp_kernel_op_125 = -jac_blending_inv_0_0_q_0*tmp_moved_constant_36 - jac_blending_inv_1_0_q_0*tmp_moved_constant_37;
             const real_t tmp_kernel_op_126 = tmp_kernel_op_125*tmp_kernel_op_8;
             const real_t tmp_kernel_op_127 = ((tmp_kernel_op_120) ? (ny_rotation_dof_5): (1.0));
             const real_t tmp_kernel_op_128 = -jac_blending_inv_0_1_q_0*tmp_moved_constant_36 - jac_blending_inv_1_1_q_0*tmp_moved_constant_37;
             const real_t tmp_kernel_op_129 = tmp_kernel_op_128*tmp_kernel_op_8;
             const real_t tmp_kernel_op_133 = -jac_blending_inv_0_0_q_1*tmp_moved_constant_38 - jac_blending_inv_1_0_q_1*tmp_moved_constant_39;
             const real_t tmp_kernel_op_134 = tmp_kernel_op_133*tmp_kernel_op_19;
             const real_t tmp_kernel_op_135 = -jac_blending_inv_0_1_q_1*tmp_moved_constant_38 - jac_blending_inv_1_1_q_1*tmp_moved_constant_39;
             const real_t tmp_kernel_op_136 = tmp_kernel_op_135*tmp_kernel_op_19;
             const real_t tmp_kernel_op_140 = -jac_blending_inv_0_0_q_2*tmp_moved_constant_40 - jac_blending_inv_1_0_q_2*tmp_moved_constant_41;
             const real_t tmp_kernel_op_141 = tmp_kernel_op_140*tmp_kernel_op_29;
             const real_t tmp_kernel_op_142 = -jac_blending_inv_0_1_q_2*tmp_moved_constant_40 - jac_blending_inv_1_1_q_2*tmp_moved_constant_41;
             const real_t tmp_kernel_op_143 = tmp_kernel_op_142*tmp_kernel_op_29;
             const real_t tmp_kernel_op_144 = ((tmp_kernel_op_96) ? (-ny_rotation_dof_4): (1.0));
             const real_t tmp_kernel_op_145 = ((tmp_kernel_op_120) ? (-ny_rotation_dof_5): (1.0));
             const real_t tmp_kernel_op_149 = -jac_blending_inv_0_0_q_0*tmp_moved_constant_42 - jac_blending_inv_1_0_q_0*tmp_moved_constant_43;
             const real_t tmp_kernel_op_150 = tmp_kernel_op_149*tmp_kernel_op_7;
             const bool tmp_kernel_op_151 = pow((nx_rotation_dof_0*nx_rotation_dof_0) + (ny_rotation_dof_0*ny_rotation_dof_0), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_152 = abs_det_jac_affine_BLUE*((tmp_kernel_op_151) ? (nx_rotation_dof_0): (0.0));
             const real_t tmp_kernel_op_153 = -jac_blending_inv_0_1_q_0*tmp_moved_constant_42 - jac_blending_inv_1_1_q_0*tmp_moved_constant_43;
             const real_t tmp_kernel_op_154 = tmp_kernel_op_153*tmp_kernel_op_7;
             const real_t tmp_kernel_op_155 = abs_det_jac_affine_BLUE*((tmp_kernel_op_151) ? (ny_rotation_dof_0): (1.0));
             const real_t tmp_kernel_op_159 = -jac_blending_inv_0_0_q_1*tmp_moved_constant_44 - jac_blending_inv_1_0_q_1*tmp_moved_constant_45;
             const real_t tmp_kernel_op_160 = tmp_kernel_op_159*tmp_kernel_op_18;
             const real_t tmp_kernel_op_161 = -jac_blending_inv_0_1_q_1*tmp_moved_constant_44 - jac_blending_inv_1_1_q_1*tmp_moved_constant_45;
             const real_t tmp_kernel_op_162 = tmp_kernel_op_161*tmp_kernel_op_18;
             const real_t tmp_kernel_op_166 = -jac_blending_inv_0_0_q_2*tmp_moved_constant_46 - jac_blending_inv_1_0_q_2*tmp_moved_constant_47;
             const real_t tmp_kernel_op_167 = tmp_kernel_op_166*tmp_kernel_op_28;
             const real_t tmp_kernel_op_168 = -jac_blending_inv_0_1_q_2*tmp_moved_constant_46 - jac_blending_inv_1_1_q_2*tmp_moved_constant_47;
             const real_t tmp_kernel_op_169 = tmp_kernel_op_168*tmp_kernel_op_28;
             const real_t tmp_kernel_op_170 = abs_det_jac_affine_BLUE*((tmp_kernel_op_151) ? (-ny_rotation_dof_0): (1.0));
             const real_t tmp_kernel_op_171 = abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_172 = abs_det_jac_affine_BLUE*tmp_kernel_op_171;
             const real_t tmp_kernel_op_173 = tmp_kernel_op_172*tmp_kernel_op_6;
             const real_t tmp_kernel_op_174 = tmp_kernel_op_11*tmp_kernel_op_172;
             const real_t tmp_kernel_op_175 = abs_det_jac_blending_q_1*0.66666666666666663;
             const real_t tmp_kernel_op_176 = abs_det_jac_affine_BLUE*tmp_kernel_op_175;
             const real_t tmp_kernel_op_177 = tmp_kernel_op_17*tmp_kernel_op_176;
             const real_t tmp_kernel_op_178 = tmp_kernel_op_176*tmp_kernel_op_21;
             const real_t tmp_kernel_op_179 = abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_180 = abs_det_jac_affine_BLUE*tmp_kernel_op_179;
             const real_t tmp_kernel_op_181 = tmp_kernel_op_180*tmp_kernel_op_27;
             const real_t tmp_kernel_op_182 = tmp_kernel_op_180*tmp_kernel_op_31;
             const real_t tmp_kernel_op_183 = tmp_kernel_op_172*tmp_kernel_op_39;
             const real_t tmp_kernel_op_184 = tmp_kernel_op_172*tmp_kernel_op_42;
             const real_t tmp_kernel_op_185 = tmp_kernel_op_176*tmp_kernel_op_48;
             const real_t tmp_kernel_op_186 = tmp_kernel_op_176*tmp_kernel_op_50;
             const real_t tmp_kernel_op_187 = tmp_kernel_op_180*tmp_kernel_op_56;
             const real_t tmp_kernel_op_188 = tmp_kernel_op_180*tmp_kernel_op_58;
             const real_t tmp_kernel_op_189 = tmp_kernel_op_172*tmp_kernel_op_70;
             const real_t tmp_kernel_op_190 = tmp_kernel_op_172*tmp_kernel_op_73;
             const real_t tmp_kernel_op_191 = tmp_kernel_op_176*tmp_kernel_op_81;
             const real_t tmp_kernel_op_192 = tmp_kernel_op_176*tmp_kernel_op_83;
             const real_t tmp_kernel_op_193 = tmp_kernel_op_180*tmp_kernel_op_91;
             const real_t tmp_kernel_op_194 = tmp_kernel_op_180*tmp_kernel_op_93;
             const real_t tmp_kernel_op_195 = tmp_kernel_op_101*tmp_kernel_op_172;
             const real_t tmp_kernel_op_196 = tmp_kernel_op_104*tmp_kernel_op_172;
             const real_t tmp_kernel_op_197 = tmp_kernel_op_109*tmp_kernel_op_176;
             const real_t tmp_kernel_op_198 = tmp_kernel_op_111*tmp_kernel_op_176;
             const real_t tmp_kernel_op_199 = tmp_kernel_op_116*tmp_kernel_op_180;
             const real_t tmp_kernel_op_200 = tmp_kernel_op_118*tmp_kernel_op_180;
             const real_t tmp_kernel_op_201 = tmp_kernel_op_125*tmp_kernel_op_172;
             const real_t tmp_kernel_op_202 = tmp_kernel_op_128*tmp_kernel_op_172;
             const real_t tmp_kernel_op_203 = tmp_kernel_op_133*tmp_kernel_op_176;
             const real_t tmp_kernel_op_204 = tmp_kernel_op_135*tmp_kernel_op_176;
             const real_t tmp_kernel_op_205 = tmp_kernel_op_140*tmp_kernel_op_180;
             const real_t tmp_kernel_op_206 = tmp_kernel_op_142*tmp_kernel_op_180;
             const real_t tmp_kernel_op_207 = tmp_kernel_op_149*tmp_kernel_op_171;
             const real_t tmp_kernel_op_208 = tmp_kernel_op_153*tmp_kernel_op_171;
             const real_t tmp_kernel_op_209 = tmp_kernel_op_159*tmp_kernel_op_175;
             const real_t tmp_kernel_op_210 = tmp_kernel_op_161*tmp_kernel_op_175;
             const real_t tmp_kernel_op_211 = tmp_kernel_op_166*tmp_kernel_op_179;
             const real_t tmp_kernel_op_212 = tmp_kernel_op_168*tmp_kernel_op_179;
             const real_t tmp_kernel_op_213 = abs_det_jac_blending_q_0*0.66666666666666663;
             const real_t tmp_kernel_op_214 = abs_det_jac_affine_BLUE*tmp_kernel_op_213;
             const real_t tmp_kernel_op_215 = tmp_kernel_op_214*tmp_kernel_op_6;
             const real_t tmp_kernel_op_216 = tmp_kernel_op_11*tmp_kernel_op_214;
             const real_t tmp_kernel_op_217 = abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_218 = abs_det_jac_affine_BLUE*tmp_kernel_op_217;
             const real_t tmp_kernel_op_219 = tmp_kernel_op_17*tmp_kernel_op_218;
             const real_t tmp_kernel_op_220 = tmp_kernel_op_21*tmp_kernel_op_218;
             const real_t tmp_kernel_op_221 = abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_222 = abs_det_jac_affine_BLUE*tmp_kernel_op_221;
             const real_t tmp_kernel_op_223 = tmp_kernel_op_222*tmp_kernel_op_27;
             const real_t tmp_kernel_op_224 = tmp_kernel_op_222*tmp_kernel_op_31;
             const real_t tmp_kernel_op_225 = tmp_kernel_op_214*tmp_kernel_op_39;
             const real_t tmp_kernel_op_226 = tmp_kernel_op_214*tmp_kernel_op_42;
             const real_t tmp_kernel_op_227 = tmp_kernel_op_218*tmp_kernel_op_48;
             const real_t tmp_kernel_op_228 = tmp_kernel_op_218*tmp_kernel_op_50;
             const real_t tmp_kernel_op_229 = tmp_kernel_op_222*tmp_kernel_op_56;
             const real_t tmp_kernel_op_230 = tmp_kernel_op_222*tmp_kernel_op_58;
             const real_t tmp_kernel_op_231 = tmp_kernel_op_214*tmp_kernel_op_70;
             const real_t tmp_kernel_op_232 = tmp_kernel_op_214*tmp_kernel_op_73;
             const real_t tmp_kernel_op_233 = tmp_kernel_op_218*tmp_kernel_op_81;
             const real_t tmp_kernel_op_234 = tmp_kernel_op_218*tmp_kernel_op_83;
             const real_t tmp_kernel_op_235 = tmp_kernel_op_222*tmp_kernel_op_91;
             const real_t tmp_kernel_op_236 = tmp_kernel_op_222*tmp_kernel_op_93;
             const real_t tmp_kernel_op_237 = tmp_kernel_op_101*tmp_kernel_op_214;
             const real_t tmp_kernel_op_238 = tmp_kernel_op_104*tmp_kernel_op_214;
             const real_t tmp_kernel_op_239 = tmp_kernel_op_109*tmp_kernel_op_218;
             const real_t tmp_kernel_op_240 = tmp_kernel_op_111*tmp_kernel_op_218;
             const real_t tmp_kernel_op_241 = tmp_kernel_op_116*tmp_kernel_op_222;
             const real_t tmp_kernel_op_242 = tmp_kernel_op_118*tmp_kernel_op_222;
             const real_t tmp_kernel_op_243 = tmp_kernel_op_125*tmp_kernel_op_214;
             const real_t tmp_kernel_op_244 = tmp_kernel_op_128*tmp_kernel_op_214;
             const real_t tmp_kernel_op_245 = tmp_kernel_op_133*tmp_kernel_op_218;
             const real_t tmp_kernel_op_246 = tmp_kernel_op_135*tmp_kernel_op_218;
             const real_t tmp_kernel_op_247 = tmp_kernel_op_140*tmp_kernel_op_222;
             const real_t tmp_kernel_op_248 = tmp_kernel_op_142*tmp_kernel_op_222;
             const real_t tmp_kernel_op_249 = tmp_kernel_op_149*tmp_kernel_op_213;
             const real_t tmp_kernel_op_250 = tmp_kernel_op_153*tmp_kernel_op_213;
             const real_t tmp_kernel_op_251 = tmp_kernel_op_159*tmp_kernel_op_217;
             const real_t tmp_kernel_op_252 = tmp_kernel_op_161*tmp_kernel_op_217;
             const real_t tmp_kernel_op_253 = tmp_kernel_op_166*tmp_kernel_op_221;
             const real_t tmp_kernel_op_254 = tmp_kernel_op_168*tmp_kernel_op_221;
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_150*tmp_kernel_op_170*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_154*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_162*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_169*0.16666666666666666 + tmp_kernel_op_160*tmp_kernel_op_170*0.16666666666666666 + tmp_kernel_op_167*tmp_kernel_op_170*0.16666666666666666) + src_dof_1*(tmp_kernel_op_1*tmp_kernel_op_12*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_22*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_32*0.16666666666666666 + tmp_kernel_op_20*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_30*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_60*tmp_kernel_op_9*0.16666666666666666) + src_dof_10*(tmp_kernel_op_102*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_105*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_112*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_119*0.16666666666666666 + tmp_kernel_op_110*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_117*tmp_kernel_op_97*0.16666666666666666) + src_dof_11*(tmp_kernel_op_121*tmp_kernel_op_126*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_134*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_141*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_129*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_136*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_143*0.16666666666666666) + src_dof_2*(tmp_kernel_op_34*tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_34*tmp_kernel_op_51*0.16666666666666666 + tmp_kernel_op_34*tmp_kernel_op_59*0.16666666666666666 + tmp_kernel_op_40*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_49*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_57*tmp_kernel_op_61*0.16666666666666666) + src_dof_3*(tmp_kernel_op_63*tmp_kernel_op_74*0.16666666666666666 + tmp_kernel_op_63*tmp_kernel_op_84*0.16666666666666666 + tmp_kernel_op_63*tmp_kernel_op_94*0.16666666666666666 + tmp_kernel_op_71*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_82*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_92*tmp_kernel_op_95*0.16666666666666666) + src_dof_4*(tmp_kernel_op_102*tmp_kernel_op_144*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_110*tmp_kernel_op_144*0.16666666666666666 + tmp_kernel_op_112*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_117*tmp_kernel_op_144*0.16666666666666666 + tmp_kernel_op_119*tmp_kernel_op_97*0.16666666666666666) + src_dof_5*(tmp_kernel_op_121*tmp_kernel_op_129*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_136*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_143*0.16666666666666666 + tmp_kernel_op_126*tmp_kernel_op_145*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_145*0.16666666666666666 + tmp_kernel_op_141*tmp_kernel_op_145*0.16666666666666666) + src_dof_6*(tmp_kernel_op_150*tmp_kernel_op_152*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_160*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_167*0.16666666666666666 + tmp_kernel_op_154*tmp_kernel_op_155*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_162*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_169*0.16666666666666666) + src_dof_7*(tmp_kernel_op_1*tmp_kernel_op_20*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_30*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_9*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_12*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_22*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_32*0.16666666666666666) + src_dof_8*(tmp_kernel_op_34*tmp_kernel_op_40*0.16666666666666666 + tmp_kernel_op_34*tmp_kernel_op_49*0.16666666666666666 + tmp_kernel_op_34*tmp_kernel_op_57*0.16666666666666666 + tmp_kernel_op_41*tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_41*tmp_kernel_op_51*0.16666666666666666 + tmp_kernel_op_41*tmp_kernel_op_59*0.16666666666666666) + src_dof_9*(tmp_kernel_op_63*tmp_kernel_op_71*0.16666666666666666 + tmp_kernel_op_63*tmp_kernel_op_82*0.16666666666666666 + tmp_kernel_op_63*tmp_kernel_op_92*0.16666666666666666 + tmp_kernel_op_72*tmp_kernel_op_74*0.16666666666666666 + tmp_kernel_op_72*tmp_kernel_op_84*0.16666666666666666 + tmp_kernel_op_72*tmp_kernel_op_94*0.16666666666666666);
             const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_152*tmp_kernel_op_208*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_210*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_212*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_207*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_209*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_211*0.16666666666666666) + src_dof_1*(tmp_kernel_op_1*tmp_kernel_op_174*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_178*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_182*0.16666666666666666 + tmp_kernel_op_173*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_177*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_181*tmp_kernel_op_60*0.16666666666666666) + src_dof_10*(tmp_kernel_op_103*tmp_kernel_op_196*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_198*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_200*0.16666666666666666 + tmp_kernel_op_195*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_197*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_199*tmp_kernel_op_97*0.16666666666666666) + src_dof_11*(tmp_kernel_op_121*tmp_kernel_op_201*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_203*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_205*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_202*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_204*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_206*0.16666666666666666) + src_dof_2*(tmp_kernel_op_183*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_184*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_186*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_187*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_188*tmp_kernel_op_34*0.16666666666666666) + src_dof_3*(tmp_kernel_op_189*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_190*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_191*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_193*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_194*tmp_kernel_op_63*0.16666666666666666) + src_dof_4*(tmp_kernel_op_144*tmp_kernel_op_195*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_197*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_199*0.16666666666666666 + tmp_kernel_op_196*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_198*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_200*tmp_kernel_op_97*0.16666666666666666) + src_dof_5*(tmp_kernel_op_121*tmp_kernel_op_202*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_204*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_206*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_201*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_203*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_205*0.16666666666666666) + src_dof_6*(tmp_kernel_op_152*tmp_kernel_op_207*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_209*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_211*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_208*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_210*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_212*0.16666666666666666) + src_dof_7*(tmp_kernel_op_1*tmp_kernel_op_173*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_177*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_181*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_174*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_178*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_182*0.16666666666666666) + src_dof_8*(tmp_kernel_op_183*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_184*tmp_kernel_op_41*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_186*tmp_kernel_op_41*0.16666666666666666 + tmp_kernel_op_187*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_188*tmp_kernel_op_41*0.16666666666666666) + src_dof_9*(tmp_kernel_op_189*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_190*tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_191*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_193*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_194*tmp_kernel_op_72*0.16666666666666666);
             const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_152*tmp_kernel_op_250*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_252*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_254*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_249*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_251*0.16666666666666666 + tmp_kernel_op_170*tmp_kernel_op_253*0.16666666666666666) + src_dof_1*(tmp_kernel_op_1*tmp_kernel_op_216*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_220*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_224*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_219*tmp_kernel_op_60*0.16666666666666666 + tmp_kernel_op_223*tmp_kernel_op_60*0.16666666666666666) + src_dof_10*(tmp_kernel_op_103*tmp_kernel_op_238*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_240*0.16666666666666666 + tmp_kernel_op_103*tmp_kernel_op_242*0.16666666666666666 + tmp_kernel_op_237*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_239*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_241*tmp_kernel_op_97*0.16666666666666666) + src_dof_11*(tmp_kernel_op_121*tmp_kernel_op_243*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_245*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_247*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_244*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_246*0.16666666666666666 + tmp_kernel_op_127*tmp_kernel_op_248*0.16666666666666666) + src_dof_2*(tmp_kernel_op_225*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_226*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_227*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_228*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_229*tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_230*tmp_kernel_op_34*0.16666666666666666) + src_dof_3*(tmp_kernel_op_231*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_232*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_233*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_234*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_235*tmp_kernel_op_95*0.16666666666666666 + tmp_kernel_op_236*tmp_kernel_op_63*0.16666666666666666) + src_dof_4*(tmp_kernel_op_144*tmp_kernel_op_237*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_239*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_241*0.16666666666666666 + tmp_kernel_op_238*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_240*tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_242*tmp_kernel_op_97*0.16666666666666666) + src_dof_5*(tmp_kernel_op_121*tmp_kernel_op_244*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_246*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_248*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_243*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_245*0.16666666666666666 + tmp_kernel_op_145*tmp_kernel_op_247*0.16666666666666666) + src_dof_6*(tmp_kernel_op_152*tmp_kernel_op_249*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_251*0.16666666666666666 + tmp_kernel_op_152*tmp_kernel_op_253*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_250*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_252*0.16666666666666666 + tmp_kernel_op_155*tmp_kernel_op_254*0.16666666666666666) + src_dof_7*(tmp_kernel_op_1*tmp_kernel_op_215*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_219*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_223*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_216*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_220*0.16666666666666666 + tmp_kernel_op_10*tmp_kernel_op_224*0.16666666666666666) + src_dof_8*(tmp_kernel_op_225*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_226*tmp_kernel_op_41*0.16666666666666666 + tmp_kernel_op_227*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_228*tmp_kernel_op_41*0.16666666666666666 + tmp_kernel_op_229*tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_230*tmp_kernel_op_41*0.16666666666666666) + src_dof_9*(tmp_kernel_op_231*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_232*tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_233*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_234*tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_235*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_236*tmp_kernel_op_72*0.16666666666666666);
             _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0*operatorScaling + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1*operatorScaling + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2*operatorScaling + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
