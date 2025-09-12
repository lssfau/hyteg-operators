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

































#include "../P2VectorToP1ElementwiseDivergenceRotationP1DensityCompressibleAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorToP1ElementwiseDivergenceRotationP1DensityCompressibleAnnulusMap::toMatrixScaled_P2VectorToP1ElementwiseDivergenceRotationP1DensityCompressibleAnnulusMap_macro_2D( idx_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_nx_rotationEdge, real_t * RESTRICT  _data_nx_rotationVertex, real_t * RESTRICT  _data_ny_rotationEdge, real_t * RESTRICT  _data_ny_rotationVertex, real_t * RESTRICT  _data_rho, idx_t * RESTRICT  _data_src_edge_0, idx_t * RESTRICT  _data_src_edge_1, idx_t * RESTRICT  _data_src_vertex_0, idx_t * RESTRICT  _data_src_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1, real_t toMatrixScaling ) const
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
       const real_t tmp_kernel_op_3 = tmp_kernel_op_2*0.66666666666666663;
       const real_t tmp_kernel_op_4 = 0.027777777777777776;
       const real_t tmp_kernel_op_5 = tmp_kernel_op_4*2.0;
       const real_t tmp_kernel_op_6 = 0.44444444444444442;
       const real_t tmp_kernel_op_7 = tmp_kernel_op_6*2.0;
       const real_t tmp_kernel_op_8 = tmp_kernel_op_3 + tmp_kernel_op_5 + tmp_kernel_op_7 - 1.5;
       const real_t tmp_kernel_op_14 = 0.16666666666666674;
       const real_t tmp_kernel_op_16 = 2.6666666666666665;
       const real_t tmp_kernel_op_17 = tmp_kernel_op_16 + tmp_kernel_op_2 - 3.0;
       const real_t tmp_kernel_op_18 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_17 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_17;
       const real_t tmp_kernel_op_19 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_17 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_17;
       const real_t tmp_kernel_op_27 = 2.6666666666666665;
       const real_t tmp_kernel_op_28 = tmp_kernel_op_27*0.16666666666666666;
       const real_t tmp_kernel_op_29 = 0.44444444444444442;
       const real_t tmp_kernel_op_30 = tmp_kernel_op_29*2.0;
       const real_t tmp_kernel_op_31 = 0.027777777777777776;
       const real_t tmp_kernel_op_32 = tmp_kernel_op_31*2.0;
       const real_t tmp_kernel_op_33 = tmp_kernel_op_28 + tmp_kernel_op_30 + tmp_kernel_op_32 - 1.5;
       const real_t tmp_kernel_op_35 = 0.16666666666666671;
       const real_t tmp_kernel_op_37 = 0.66666666666666663;
       const real_t tmp_kernel_op_38 = tmp_kernel_op_27 + tmp_kernel_op_37 - 3.0;
       const real_t tmp_kernel_op_39 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_38 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_38;
       const real_t tmp_kernel_op_40 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_38 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_38;
       const real_t tmp_kernel_op_47 = 0.66666666666666663;
       const real_t tmp_kernel_op_48 = tmp_kernel_op_47*0.16666666666666666;
       const real_t tmp_kernel_op_49 = 0.027777777777777776;
       const real_t tmp_kernel_op_50 = tmp_kernel_op_49*2.0;
       const real_t tmp_kernel_op_51 = 0.027777777777777776;
       const real_t tmp_kernel_op_52 = tmp_kernel_op_51*2.0;
       const real_t tmp_kernel_op_53 = tmp_kernel_op_48 + tmp_kernel_op_50 + tmp_kernel_op_52;
       const real_t tmp_kernel_op_55 = 0.66666666666666674;
       const real_t tmp_kernel_op_57 = 0.66666666666666663;
       const real_t tmp_kernel_op_58 = tmp_kernel_op_47 + tmp_kernel_op_57 - 3.0;
       const real_t tmp_kernel_op_59 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_58 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_58;
       const real_t tmp_kernel_op_60 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_58 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_58;
       const real_t tmp_kernel_op_69 = tmp_kernel_op_2 - 1.0;
       const real_t tmp_kernel_op_70 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_69;
       const real_t tmp_kernel_op_71 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_69;
       const real_t tmp_kernel_op_72 = tmp_kernel_op_5 - 0.16666666666666666;
       const real_t tmp_kernel_op_79 = tmp_kernel_op_27 - 1.0;
       const real_t tmp_kernel_op_80 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_79;
       const real_t tmp_kernel_op_81 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_79;
       const real_t tmp_kernel_op_82 = tmp_kernel_op_30 - 0.66666666666666663;
       const real_t tmp_kernel_op_88 = tmp_kernel_op_47 - 1.0;
       const real_t tmp_kernel_op_89 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_88;
       const real_t tmp_kernel_op_90 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_88;
       const real_t tmp_kernel_op_91 = tmp_kernel_op_50 - 0.16666666666666666;
       const real_t tmp_kernel_op_99 = tmp_kernel_op_16 - 1.0;
       const real_t tmp_kernel_op_100 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_99;
       const real_t tmp_kernel_op_101 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_99;
       const real_t tmp_kernel_op_102 = tmp_kernel_op_7 - 0.66666666666666663;
       const real_t tmp_kernel_op_108 = tmp_kernel_op_37 - 1.0;
       const real_t tmp_kernel_op_109 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_108;
       const real_t tmp_kernel_op_110 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_108;
       const real_t tmp_kernel_op_111 = tmp_kernel_op_32 - 0.16666666666666666;
       const real_t tmp_kernel_op_116 = tmp_kernel_op_57 - 1.0;
       const real_t tmp_kernel_op_117 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_116;
       const real_t tmp_kernel_op_118 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_116;
       const real_t tmp_kernel_op_119 = tmp_kernel_op_52 - 0.16666666666666666;
       const real_t tmp_kernel_op_126 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_16;
       const real_t tmp_kernel_op_127 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_128 = tmp_kernel_op_126 + tmp_kernel_op_127;
       const real_t tmp_kernel_op_129 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_16;
       const real_t tmp_kernel_op_130 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_131 = tmp_kernel_op_129 + tmp_kernel_op_130;
       const real_t tmp_kernel_op_137 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_37;
       const real_t tmp_kernel_op_138 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_27;
       const real_t tmp_kernel_op_139 = tmp_kernel_op_137 + tmp_kernel_op_138;
       const real_t tmp_kernel_op_140 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_37;
       const real_t tmp_kernel_op_141 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_27;
       const real_t tmp_kernel_op_142 = tmp_kernel_op_140 + tmp_kernel_op_141;
       const real_t tmp_kernel_op_147 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_57;
       const real_t tmp_kernel_op_148 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_47;
       const real_t tmp_kernel_op_149 = tmp_kernel_op_147 + tmp_kernel_op_148;
       const real_t tmp_kernel_op_150 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_57;
       const real_t tmp_kernel_op_151 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_47;
       const real_t tmp_kernel_op_152 = tmp_kernel_op_150 + tmp_kernel_op_151;
       const real_t tmp_kernel_op_159 = tmp_kernel_op_16 - tmp_kernel_op_3 + tmp_kernel_op_6*-4.0;
       const real_t tmp_kernel_op_160 = -tmp_kernel_op_2 - 1.333333333333333;
       const real_t tmp_kernel_op_161 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_160 - tmp_kernel_op_126;
       const real_t tmp_kernel_op_162 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_160 - tmp_kernel_op_129;
       const real_t tmp_kernel_op_168 = -tmp_kernel_op_28 + tmp_kernel_op_31*-4.0 + tmp_kernel_op_37;
       const real_t tmp_kernel_op_169 = -tmp_kernel_op_27 + 2.666666666666667;
       const real_t tmp_kernel_op_170 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_169 - tmp_kernel_op_137;
       const real_t tmp_kernel_op_171 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_169 - tmp_kernel_op_140;
       const real_t tmp_kernel_op_176 = -tmp_kernel_op_48 + tmp_kernel_op_51*-4.0 + tmp_kernel_op_57;
       const real_t tmp_kernel_op_177 = -tmp_kernel_op_47 + 2.666666666666667;
       const real_t tmp_kernel_op_178 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_177 - tmp_kernel_op_147;
       const real_t tmp_kernel_op_179 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_177 - tmp_kernel_op_150;
       const real_t tmp_kernel_op_186 = tmp_kernel_op_2 - tmp_kernel_op_3 + tmp_kernel_op_4*-4.0;
       const real_t tmp_kernel_op_187 = -tmp_kernel_op_16 + 2.666666666666667;
       const real_t tmp_kernel_op_188 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_187 - tmp_kernel_op_127;
       const real_t tmp_kernel_op_189 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_187 - tmp_kernel_op_130;
       const real_t tmp_kernel_op_195 = tmp_kernel_op_27 - tmp_kernel_op_28 + tmp_kernel_op_29*-4.0;
       const real_t tmp_kernel_op_196 = -tmp_kernel_op_37 - 1.333333333333333;
       const real_t tmp_kernel_op_197 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_196 - tmp_kernel_op_138;
       const real_t tmp_kernel_op_198 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_196 - tmp_kernel_op_141;
       const real_t tmp_kernel_op_203 = tmp_kernel_op_47 - tmp_kernel_op_48 + tmp_kernel_op_49*-4.0;
       const real_t tmp_kernel_op_204 = -tmp_kernel_op_57 + 2.666666666666667;
       const real_t tmp_kernel_op_205 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_204 - tmp_kernel_op_148;
       const real_t tmp_kernel_op_206 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_204 - tmp_kernel_op_151;
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
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const bool tmp_kernel_op_0 = pow((nx_rotation_dof_0*nx_rotation_dof_0) + (ny_rotation_dof_0*ny_rotation_dof_0), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_1 = abs_det_jac_affine_GRAY*((tmp_kernel_op_0) ? (nx_rotation_dof_0): (0.0));
             const real_t tmp_kernel_op_9 = -rho_dof_0 + rho_dof_1;
             const real_t tmp_kernel_op_10 = -rho_dof_0 + rho_dof_2;
             const real_t tmp_kernel_op_11 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_10;
             const real_t tmp_kernel_op_13 = jac_blending_inv_0_1_q_0*tmp_kernel_op_11 + jac_blending_inv_1_1_q_0*tmp_kernel_op_12;
             const real_t tmp_kernel_op_15 = rho_dof_0*tmp_kernel_op_14 + rho_dof_1*0.16666666666666666 + rho_dof_2*0.66666666666666663;
             const real_t tmp_kernel_op_20 = -tmp_kernel_op_13*tmp_kernel_op_8 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_kernel_op_18 + jac_blending_inv_1_1_q_0*tmp_kernel_op_19);
             const real_t tmp_kernel_op_21 = abs_det_jac_blending_q_0*tmp_kernel_op_14;
             const real_t tmp_kernel_op_22 = tmp_kernel_op_20*tmp_kernel_op_21;
             const real_t tmp_kernel_op_23 = abs_det_jac_affine_GRAY*((tmp_kernel_op_0) ? (-ny_rotation_dof_0): (1.0));
             const real_t tmp_kernel_op_24 = jac_blending_inv_0_0_q_0*tmp_kernel_op_11 + jac_blending_inv_1_0_q_0*tmp_kernel_op_12;
             const real_t tmp_kernel_op_25 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_kernel_op_18 + jac_blending_inv_1_0_q_0*tmp_kernel_op_19) - tmp_kernel_op_24*tmp_kernel_op_8;
             const real_t tmp_kernel_op_26 = tmp_kernel_op_21*tmp_kernel_op_25;
             const real_t tmp_kernel_op_34 = jac_blending_inv_0_1_q_1*tmp_kernel_op_11 + jac_blending_inv_1_1_q_1*tmp_kernel_op_12;
             const real_t tmp_kernel_op_36 = rho_dof_0*tmp_kernel_op_35 + rho_dof_1*0.66666666666666663 + rho_dof_2*0.16666666666666666;
             const real_t tmp_kernel_op_41 = -tmp_kernel_op_33*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_kernel_op_39 + jac_blending_inv_1_1_q_1*tmp_kernel_op_40);
             const real_t tmp_kernel_op_42 = abs_det_jac_blending_q_1*tmp_kernel_op_35;
             const real_t tmp_kernel_op_43 = tmp_kernel_op_41*tmp_kernel_op_42;
             const real_t tmp_kernel_op_44 = jac_blending_inv_0_0_q_1*tmp_kernel_op_11 + jac_blending_inv_1_0_q_1*tmp_kernel_op_12;
             const real_t tmp_kernel_op_45 = -tmp_kernel_op_33*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_kernel_op_39 + jac_blending_inv_1_0_q_1*tmp_kernel_op_40);
             const real_t tmp_kernel_op_46 = tmp_kernel_op_42*tmp_kernel_op_45;
             const real_t tmp_kernel_op_54 = jac_blending_inv_0_1_q_2*tmp_kernel_op_11 + jac_blending_inv_1_1_q_2*tmp_kernel_op_12;
             const real_t tmp_kernel_op_56 = rho_dof_0*tmp_kernel_op_55 + rho_dof_1*0.16666666666666666 + rho_dof_2*0.16666666666666666;
             const real_t tmp_kernel_op_61 = -tmp_kernel_op_53*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_kernel_op_59 + jac_blending_inv_1_1_q_2*tmp_kernel_op_60);
             const real_t tmp_kernel_op_62 = abs_det_jac_blending_q_2*tmp_kernel_op_55;
             const real_t tmp_kernel_op_63 = tmp_kernel_op_61*tmp_kernel_op_62;
             const real_t tmp_kernel_op_64 = jac_blending_inv_0_0_q_2*tmp_kernel_op_11 + jac_blending_inv_1_0_q_2*tmp_kernel_op_12;
             const real_t tmp_kernel_op_65 = -tmp_kernel_op_53*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_kernel_op_59 + jac_blending_inv_1_0_q_2*tmp_kernel_op_60);
             const real_t tmp_kernel_op_66 = tmp_kernel_op_62*tmp_kernel_op_65;
             const bool tmp_kernel_op_67 = pow((nx_rotation_dof_1*nx_rotation_dof_1) + (ny_rotation_dof_1*ny_rotation_dof_1), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_68 = ((tmp_kernel_op_67) ? (nx_rotation_dof_1): (0.0));
             const real_t tmp_kernel_op_73 = -tmp_kernel_op_13*tmp_kernel_op_72 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_kernel_op_70 + jac_blending_inv_1_1_q_0*tmp_kernel_op_71);
             const real_t tmp_kernel_op_74 = abs_det_jac_affine_GRAY*tmp_kernel_op_21;
             const real_t tmp_kernel_op_75 = tmp_kernel_op_73*tmp_kernel_op_74;
             const real_t tmp_kernel_op_76 = ((tmp_kernel_op_67) ? (-ny_rotation_dof_1): (1.0));
             const real_t tmp_kernel_op_77 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_kernel_op_70 + jac_blending_inv_1_0_q_0*tmp_kernel_op_71) - tmp_kernel_op_24*tmp_kernel_op_72;
             const real_t tmp_kernel_op_78 = tmp_kernel_op_74*tmp_kernel_op_77;
             const real_t tmp_kernel_op_83 = -tmp_kernel_op_34*tmp_kernel_op_82 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_kernel_op_80 + jac_blending_inv_1_1_q_1*tmp_kernel_op_81);
             const real_t tmp_kernel_op_84 = abs_det_jac_affine_GRAY*tmp_kernel_op_42;
             const real_t tmp_kernel_op_85 = tmp_kernel_op_83*tmp_kernel_op_84;
             const real_t tmp_kernel_op_86 = -tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_kernel_op_80 + jac_blending_inv_1_0_q_1*tmp_kernel_op_81) - tmp_kernel_op_44*tmp_kernel_op_82;
             const real_t tmp_kernel_op_87 = tmp_kernel_op_84*tmp_kernel_op_86;
             const real_t tmp_kernel_op_92 = -tmp_kernel_op_54*tmp_kernel_op_91 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_kernel_op_89 + jac_blending_inv_1_1_q_2*tmp_kernel_op_90);
             const real_t tmp_kernel_op_93 = abs_det_jac_affine_GRAY*tmp_kernel_op_62;
             const real_t tmp_kernel_op_94 = tmp_kernel_op_92*tmp_kernel_op_93;
             const real_t tmp_kernel_op_95 = -tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_kernel_op_89 + jac_blending_inv_1_0_q_2*tmp_kernel_op_90) - tmp_kernel_op_64*tmp_kernel_op_91;
             const real_t tmp_kernel_op_96 = tmp_kernel_op_93*tmp_kernel_op_95;
             const bool tmp_kernel_op_97 = pow((nx_rotation_dof_2*nx_rotation_dof_2) + (ny_rotation_dof_2*ny_rotation_dof_2), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_98 = ((tmp_kernel_op_97) ? (nx_rotation_dof_2): (0.0));
             const real_t tmp_kernel_op_103 = -tmp_kernel_op_102*tmp_kernel_op_13 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_kernel_op_100 + jac_blending_inv_1_1_q_0*tmp_kernel_op_101);
             const real_t tmp_kernel_op_104 = tmp_kernel_op_103*tmp_kernel_op_74;
             const real_t tmp_kernel_op_105 = ((tmp_kernel_op_97) ? (-ny_rotation_dof_2): (1.0));
             const real_t tmp_kernel_op_106 = -tmp_kernel_op_102*tmp_kernel_op_24 - tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_kernel_op_100 + jac_blending_inv_1_0_q_0*tmp_kernel_op_101);
             const real_t tmp_kernel_op_107 = tmp_kernel_op_106*tmp_kernel_op_74;
             const real_t tmp_kernel_op_112 = -tmp_kernel_op_111*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_kernel_op_109 + jac_blending_inv_1_1_q_1*tmp_kernel_op_110);
             const real_t tmp_kernel_op_113 = tmp_kernel_op_112*tmp_kernel_op_84;
             const real_t tmp_kernel_op_114 = -tmp_kernel_op_111*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_kernel_op_109 + jac_blending_inv_1_0_q_1*tmp_kernel_op_110);
             const real_t tmp_kernel_op_115 = tmp_kernel_op_114*tmp_kernel_op_84;
             const real_t tmp_kernel_op_120 = -tmp_kernel_op_119*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_kernel_op_117 + jac_blending_inv_1_1_q_2*tmp_kernel_op_118);
             const real_t tmp_kernel_op_121 = tmp_kernel_op_120*tmp_kernel_op_93;
             const real_t tmp_kernel_op_122 = -tmp_kernel_op_119*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_kernel_op_117 + jac_blending_inv_1_0_q_2*tmp_kernel_op_118);
             const real_t tmp_kernel_op_123 = tmp_kernel_op_122*tmp_kernel_op_93;
             const bool tmp_kernel_op_124 = pow((nx_rotation_dof_3*nx_rotation_dof_3) + (ny_rotation_dof_3*ny_rotation_dof_3), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_125 = ((tmp_kernel_op_124) ? (nx_rotation_dof_3): (0.0));
             const real_t tmp_kernel_op_132 = -tmp_kernel_op_13*tmp_kernel_op_3 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_kernel_op_128 + jac_blending_inv_1_1_q_0*tmp_kernel_op_131);
             const real_t tmp_kernel_op_133 = tmp_kernel_op_132*tmp_kernel_op_74;
             const real_t tmp_kernel_op_134 = ((tmp_kernel_op_124) ? (-ny_rotation_dof_3): (1.0));
             const real_t tmp_kernel_op_135 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_kernel_op_128 + jac_blending_inv_1_0_q_0*tmp_kernel_op_131) - tmp_kernel_op_24*tmp_kernel_op_3;
             const real_t tmp_kernel_op_136 = tmp_kernel_op_135*tmp_kernel_op_74;
             const real_t tmp_kernel_op_143 = -tmp_kernel_op_28*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_kernel_op_139 + jac_blending_inv_1_1_q_1*tmp_kernel_op_142);
             const real_t tmp_kernel_op_144 = tmp_kernel_op_143*tmp_kernel_op_84;
             const real_t tmp_kernel_op_145 = -tmp_kernel_op_28*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_kernel_op_139 + jac_blending_inv_1_0_q_1*tmp_kernel_op_142);
             const real_t tmp_kernel_op_146 = tmp_kernel_op_145*tmp_kernel_op_84;
             const real_t tmp_kernel_op_153 = -tmp_kernel_op_48*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_kernel_op_149 + jac_blending_inv_1_1_q_2*tmp_kernel_op_152);
             const real_t tmp_kernel_op_154 = tmp_kernel_op_153*tmp_kernel_op_93;
             const real_t tmp_kernel_op_155 = -tmp_kernel_op_48*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_kernel_op_149 + jac_blending_inv_1_0_q_2*tmp_kernel_op_152);
             const real_t tmp_kernel_op_156 = tmp_kernel_op_155*tmp_kernel_op_93;
             const bool tmp_kernel_op_157 = pow((nx_rotation_dof_4*nx_rotation_dof_4) + (ny_rotation_dof_4*ny_rotation_dof_4), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_158 = ((tmp_kernel_op_157) ? (nx_rotation_dof_4): (0.0));
             const real_t tmp_kernel_op_163 = -tmp_kernel_op_13*tmp_kernel_op_159 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_kernel_op_161 + jac_blending_inv_1_1_q_0*tmp_kernel_op_162);
             const real_t tmp_kernel_op_164 = tmp_kernel_op_163*tmp_kernel_op_74;
             const real_t tmp_kernel_op_165 = ((tmp_kernel_op_157) ? (-ny_rotation_dof_4): (1.0));
             const real_t tmp_kernel_op_166 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_kernel_op_161 + jac_blending_inv_1_0_q_0*tmp_kernel_op_162) - tmp_kernel_op_159*tmp_kernel_op_24;
             const real_t tmp_kernel_op_167 = tmp_kernel_op_166*tmp_kernel_op_74;
             const real_t tmp_kernel_op_172 = -tmp_kernel_op_168*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_kernel_op_170 + jac_blending_inv_1_1_q_1*tmp_kernel_op_171);
             const real_t tmp_kernel_op_173 = tmp_kernel_op_172*tmp_kernel_op_84;
             const real_t tmp_kernel_op_174 = -tmp_kernel_op_168*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_kernel_op_170 + jac_blending_inv_1_0_q_1*tmp_kernel_op_171);
             const real_t tmp_kernel_op_175 = tmp_kernel_op_174*tmp_kernel_op_84;
             const real_t tmp_kernel_op_180 = -tmp_kernel_op_176*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_kernel_op_178 + jac_blending_inv_1_1_q_2*tmp_kernel_op_179);
             const real_t tmp_kernel_op_181 = tmp_kernel_op_180*tmp_kernel_op_93;
             const real_t tmp_kernel_op_182 = -tmp_kernel_op_176*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_kernel_op_178 + jac_blending_inv_1_0_q_2*tmp_kernel_op_179);
             const real_t tmp_kernel_op_183 = tmp_kernel_op_182*tmp_kernel_op_93;
             const bool tmp_kernel_op_184 = pow((nx_rotation_dof_5*nx_rotation_dof_5) + (ny_rotation_dof_5*ny_rotation_dof_5), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_185 = ((tmp_kernel_op_184) ? (nx_rotation_dof_5): (0.0));
             const real_t tmp_kernel_op_190 = -tmp_kernel_op_13*tmp_kernel_op_186 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_kernel_op_188 + jac_blending_inv_1_1_q_0*tmp_kernel_op_189);
             const real_t tmp_kernel_op_191 = tmp_kernel_op_190*tmp_kernel_op_74;
             const real_t tmp_kernel_op_192 = ((tmp_kernel_op_184) ? (-ny_rotation_dof_5): (1.0));
             const real_t tmp_kernel_op_193 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_kernel_op_188 + jac_blending_inv_1_0_q_0*tmp_kernel_op_189) - tmp_kernel_op_186*tmp_kernel_op_24;
             const real_t tmp_kernel_op_194 = tmp_kernel_op_193*tmp_kernel_op_74;
             const real_t tmp_kernel_op_199 = -tmp_kernel_op_195*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_kernel_op_197 + jac_blending_inv_1_1_q_1*tmp_kernel_op_198);
             const real_t tmp_kernel_op_200 = tmp_kernel_op_199*tmp_kernel_op_84;
             const real_t tmp_kernel_op_201 = -tmp_kernel_op_195*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_kernel_op_197 + jac_blending_inv_1_0_q_1*tmp_kernel_op_198);
             const real_t tmp_kernel_op_202 = tmp_kernel_op_201*tmp_kernel_op_84;
             const real_t tmp_kernel_op_207 = -tmp_kernel_op_203*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_kernel_op_205 + jac_blending_inv_1_1_q_2*tmp_kernel_op_206);
             const real_t tmp_kernel_op_208 = tmp_kernel_op_207*tmp_kernel_op_93;
             const real_t tmp_kernel_op_209 = -tmp_kernel_op_203*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_kernel_op_205 + jac_blending_inv_1_0_q_2*tmp_kernel_op_206);
             const real_t tmp_kernel_op_210 = tmp_kernel_op_209*tmp_kernel_op_93;
             const real_t tmp_kernel_op_211 = abs_det_jac_affine_GRAY*((tmp_kernel_op_0) ? (ny_rotation_dof_0): (1.0));
             const real_t tmp_kernel_op_212 = ((tmp_kernel_op_67) ? (ny_rotation_dof_1): (1.0));
             const real_t tmp_kernel_op_213 = ((tmp_kernel_op_97) ? (ny_rotation_dof_2): (1.0));
             const real_t tmp_kernel_op_214 = ((tmp_kernel_op_124) ? (ny_rotation_dof_3): (1.0));
             const real_t tmp_kernel_op_215 = ((tmp_kernel_op_157) ? (ny_rotation_dof_4): (1.0));
             const real_t tmp_kernel_op_216 = ((tmp_kernel_op_184) ? (ny_rotation_dof_5): (1.0));
             const real_t tmp_kernel_op_217 = abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_218 = tmp_kernel_op_20*tmp_kernel_op_217;
             const real_t tmp_kernel_op_219 = tmp_kernel_op_217*tmp_kernel_op_25;
             const real_t tmp_kernel_op_220 = abs_det_jac_blending_q_1*0.66666666666666663;
             const real_t tmp_kernel_op_221 = tmp_kernel_op_220*tmp_kernel_op_41;
             const real_t tmp_kernel_op_222 = tmp_kernel_op_220*tmp_kernel_op_45;
             const real_t tmp_kernel_op_223 = abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_224 = tmp_kernel_op_223*tmp_kernel_op_61;
             const real_t tmp_kernel_op_225 = tmp_kernel_op_223*tmp_kernel_op_65;
             const real_t tmp_kernel_op_226 = abs_det_jac_affine_GRAY*tmp_kernel_op_217;
             const real_t tmp_kernel_op_227 = tmp_kernel_op_226*tmp_kernel_op_73;
             const real_t tmp_kernel_op_228 = tmp_kernel_op_226*tmp_kernel_op_77;
             const real_t tmp_kernel_op_229 = abs_det_jac_affine_GRAY*tmp_kernel_op_220;
             const real_t tmp_kernel_op_230 = tmp_kernel_op_229*tmp_kernel_op_83;
             const real_t tmp_kernel_op_231 = tmp_kernel_op_229*tmp_kernel_op_86;
             const real_t tmp_kernel_op_232 = abs_det_jac_affine_GRAY*tmp_kernel_op_223;
             const real_t tmp_kernel_op_233 = tmp_kernel_op_232*tmp_kernel_op_92;
             const real_t tmp_kernel_op_234 = tmp_kernel_op_232*tmp_kernel_op_95;
             const real_t tmp_kernel_op_235 = tmp_kernel_op_103*tmp_kernel_op_226;
             const real_t tmp_kernel_op_236 = tmp_kernel_op_106*tmp_kernel_op_226;
             const real_t tmp_kernel_op_237 = tmp_kernel_op_112*tmp_kernel_op_229;
             const real_t tmp_kernel_op_238 = tmp_kernel_op_114*tmp_kernel_op_229;
             const real_t tmp_kernel_op_239 = tmp_kernel_op_120*tmp_kernel_op_232;
             const real_t tmp_kernel_op_240 = tmp_kernel_op_122*tmp_kernel_op_232;
             const real_t tmp_kernel_op_241 = tmp_kernel_op_132*tmp_kernel_op_226;
             const real_t tmp_kernel_op_242 = tmp_kernel_op_135*tmp_kernel_op_226;
             const real_t tmp_kernel_op_243 = tmp_kernel_op_143*tmp_kernel_op_229;
             const real_t tmp_kernel_op_244 = tmp_kernel_op_145*tmp_kernel_op_229;
             const real_t tmp_kernel_op_245 = tmp_kernel_op_153*tmp_kernel_op_232;
             const real_t tmp_kernel_op_246 = tmp_kernel_op_155*tmp_kernel_op_232;
             const real_t tmp_kernel_op_247 = tmp_kernel_op_163*tmp_kernel_op_226;
             const real_t tmp_kernel_op_248 = tmp_kernel_op_166*tmp_kernel_op_226;
             const real_t tmp_kernel_op_249 = tmp_kernel_op_172*tmp_kernel_op_229;
             const real_t tmp_kernel_op_250 = tmp_kernel_op_174*tmp_kernel_op_229;
             const real_t tmp_kernel_op_251 = tmp_kernel_op_180*tmp_kernel_op_232;
             const real_t tmp_kernel_op_252 = tmp_kernel_op_182*tmp_kernel_op_232;
             const real_t tmp_kernel_op_253 = tmp_kernel_op_190*tmp_kernel_op_226;
             const real_t tmp_kernel_op_254 = tmp_kernel_op_193*tmp_kernel_op_226;
             const real_t tmp_kernel_op_255 = tmp_kernel_op_199*tmp_kernel_op_229;
             const real_t tmp_kernel_op_256 = tmp_kernel_op_201*tmp_kernel_op_229;
             const real_t tmp_kernel_op_257 = tmp_kernel_op_207*tmp_kernel_op_232;
             const real_t tmp_kernel_op_258 = tmp_kernel_op_209*tmp_kernel_op_232;
             const real_t tmp_kernel_op_259 = abs_det_jac_blending_q_0*0.66666666666666663;
             const real_t tmp_kernel_op_260 = tmp_kernel_op_20*tmp_kernel_op_259;
             const real_t tmp_kernel_op_261 = tmp_kernel_op_25*tmp_kernel_op_259;
             const real_t tmp_kernel_op_262 = abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_263 = tmp_kernel_op_262*tmp_kernel_op_41;
             const real_t tmp_kernel_op_264 = tmp_kernel_op_262*tmp_kernel_op_45;
             const real_t tmp_kernel_op_265 = abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_266 = tmp_kernel_op_265*tmp_kernel_op_61;
             const real_t tmp_kernel_op_267 = tmp_kernel_op_265*tmp_kernel_op_65;
             const real_t tmp_kernel_op_268 = abs_det_jac_affine_GRAY*tmp_kernel_op_259;
             const real_t tmp_kernel_op_269 = tmp_kernel_op_268*tmp_kernel_op_73;
             const real_t tmp_kernel_op_270 = tmp_kernel_op_268*tmp_kernel_op_77;
             const real_t tmp_kernel_op_271 = abs_det_jac_affine_GRAY*tmp_kernel_op_262;
             const real_t tmp_kernel_op_272 = tmp_kernel_op_271*tmp_kernel_op_83;
             const real_t tmp_kernel_op_273 = tmp_kernel_op_271*tmp_kernel_op_86;
             const real_t tmp_kernel_op_274 = abs_det_jac_affine_GRAY*tmp_kernel_op_265;
             const real_t tmp_kernel_op_275 = tmp_kernel_op_274*tmp_kernel_op_92;
             const real_t tmp_kernel_op_276 = tmp_kernel_op_274*tmp_kernel_op_95;
             const real_t tmp_kernel_op_277 = tmp_kernel_op_103*tmp_kernel_op_268;
             const real_t tmp_kernel_op_278 = tmp_kernel_op_106*tmp_kernel_op_268;
             const real_t tmp_kernel_op_279 = tmp_kernel_op_112*tmp_kernel_op_271;
             const real_t tmp_kernel_op_280 = tmp_kernel_op_114*tmp_kernel_op_271;
             const real_t tmp_kernel_op_281 = tmp_kernel_op_120*tmp_kernel_op_274;
             const real_t tmp_kernel_op_282 = tmp_kernel_op_122*tmp_kernel_op_274;
             const real_t tmp_kernel_op_283 = tmp_kernel_op_132*tmp_kernel_op_268;
             const real_t tmp_kernel_op_284 = tmp_kernel_op_135*tmp_kernel_op_268;
             const real_t tmp_kernel_op_285 = tmp_kernel_op_143*tmp_kernel_op_271;
             const real_t tmp_kernel_op_286 = tmp_kernel_op_145*tmp_kernel_op_271;
             const real_t tmp_kernel_op_287 = tmp_kernel_op_153*tmp_kernel_op_274;
             const real_t tmp_kernel_op_288 = tmp_kernel_op_155*tmp_kernel_op_274;
             const real_t tmp_kernel_op_289 = tmp_kernel_op_163*tmp_kernel_op_268;
             const real_t tmp_kernel_op_290 = tmp_kernel_op_166*tmp_kernel_op_268;
             const real_t tmp_kernel_op_291 = tmp_kernel_op_172*tmp_kernel_op_271;
             const real_t tmp_kernel_op_292 = tmp_kernel_op_174*tmp_kernel_op_271;
             const real_t tmp_kernel_op_293 = tmp_kernel_op_180*tmp_kernel_op_274;
             const real_t tmp_kernel_op_294 = tmp_kernel_op_182*tmp_kernel_op_274;
             const real_t tmp_kernel_op_295 = tmp_kernel_op_190*tmp_kernel_op_268;
             const real_t tmp_kernel_op_296 = tmp_kernel_op_193*tmp_kernel_op_268;
             const real_t tmp_kernel_op_297 = tmp_kernel_op_199*tmp_kernel_op_271;
             const real_t tmp_kernel_op_298 = tmp_kernel_op_201*tmp_kernel_op_271;
             const real_t tmp_kernel_op_299 = tmp_kernel_op_207*tmp_kernel_op_274;
             const real_t tmp_kernel_op_300 = tmp_kernel_op_209*tmp_kernel_op_274;
             const real_t elMat_0_0 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_22*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_26*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_66*0.16666666666666666);
             const real_t elMat_0_1 = toMatrixScaling*(tmp_kernel_op_68*tmp_kernel_op_75*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_85*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_94*0.16666666666666666 + tmp_kernel_op_76*tmp_kernel_op_78*0.16666666666666666 + tmp_kernel_op_76*tmp_kernel_op_87*0.16666666666666666 + tmp_kernel_op_76*tmp_kernel_op_96*0.16666666666666666);
             const real_t elMat_0_2 = toMatrixScaling*(tmp_kernel_op_104*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_107*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_115*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_123*0.16666666666666666 + tmp_kernel_op_113*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_0_3 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_133*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_144*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_154*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_136*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_146*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_156*0.16666666666666666);
             const real_t elMat_0_4 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_164*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_173*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_181*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_167*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_175*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_183*0.16666666666666666);
             const real_t elMat_0_5 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_191*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_200*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_208*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_194*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_202*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_210*0.16666666666666666);
             const real_t elMat_0_6 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_26*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_66*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_22*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_63*0.16666666666666666);
             const real_t elMat_0_7 = toMatrixScaling*(tmp_kernel_op_212*tmp_kernel_op_75*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_85*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_94*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_78*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_87*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_96*0.16666666666666666);
             const real_t elMat_0_8 = toMatrixScaling*(tmp_kernel_op_104*tmp_kernel_op_213*0.16666666666666666 + tmp_kernel_op_107*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_113*tmp_kernel_op_213*0.16666666666666666 + tmp_kernel_op_115*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_213*0.16666666666666666 + tmp_kernel_op_123*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_0_9 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_136*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_146*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_156*0.16666666666666666 + tmp_kernel_op_133*tmp_kernel_op_214*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_214*0.16666666666666666 + tmp_kernel_op_154*tmp_kernel_op_214*0.16666666666666666);
             const real_t elMat_0_10 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_167*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_175*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_183*0.16666666666666666 + tmp_kernel_op_164*tmp_kernel_op_215*0.16666666666666666 + tmp_kernel_op_173*tmp_kernel_op_215*0.16666666666666666 + tmp_kernel_op_181*tmp_kernel_op_215*0.16666666666666666);
             const real_t elMat_0_11 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_194*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_202*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_210*0.16666666666666666 + tmp_kernel_op_191*tmp_kernel_op_216*0.16666666666666666 + tmp_kernel_op_200*tmp_kernel_op_216*0.16666666666666666 + tmp_kernel_op_208*tmp_kernel_op_216*0.16666666666666666);
             const real_t elMat_1_0 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_218*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_221*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_224*0.16666666666666666 + tmp_kernel_op_219*tmp_kernel_op_23*0.16666666666666666 + tmp_kernel_op_222*tmp_kernel_op_23*0.16666666666666666 + tmp_kernel_op_225*tmp_kernel_op_23*0.16666666666666666);
             const real_t elMat_1_1 = toMatrixScaling*(tmp_kernel_op_227*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_228*tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_230*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_231*tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_233*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_234*tmp_kernel_op_76*0.16666666666666666);
             const real_t elMat_1_2 = toMatrixScaling*(tmp_kernel_op_105*tmp_kernel_op_236*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_238*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_240*0.16666666666666666 + tmp_kernel_op_235*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_237*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_239*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_1_3 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_241*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_243*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_245*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_242*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_244*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_246*0.16666666666666666);
             const real_t elMat_1_4 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_247*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_249*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_251*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_248*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_250*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_252*0.16666666666666666);
             const real_t elMat_1_5 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_253*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_255*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_257*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_254*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_256*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_258*0.16666666666666666);
             const real_t elMat_1_6 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_219*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_222*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_225*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_218*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_221*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_224*0.16666666666666666);
             const real_t elMat_1_7 = toMatrixScaling*(tmp_kernel_op_212*tmp_kernel_op_227*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_230*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_233*0.16666666666666666 + tmp_kernel_op_228*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_231*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_234*tmp_kernel_op_68*0.16666666666666666);
             const real_t elMat_1_8 = toMatrixScaling*(tmp_kernel_op_213*tmp_kernel_op_235*0.16666666666666666 + tmp_kernel_op_213*tmp_kernel_op_237*0.16666666666666666 + tmp_kernel_op_213*tmp_kernel_op_239*0.16666666666666666 + tmp_kernel_op_236*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_238*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_240*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_1_9 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_242*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_244*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_246*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_241*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_243*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_245*0.16666666666666666);
             const real_t elMat_1_10 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_248*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_250*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_252*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_247*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_249*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_251*0.16666666666666666);
             const real_t elMat_1_11 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_254*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_256*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_258*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_253*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_255*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_257*0.16666666666666666);
             const real_t elMat_2_0 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_260*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_263*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_266*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_261*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_264*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_267*0.16666666666666666);
             const real_t elMat_2_1 = toMatrixScaling*(tmp_kernel_op_269*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_270*tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_272*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_273*tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_275*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_276*tmp_kernel_op_76*0.16666666666666666);
             const real_t elMat_2_2 = toMatrixScaling*(tmp_kernel_op_105*tmp_kernel_op_278*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_280*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_282*0.16666666666666666 + tmp_kernel_op_277*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_279*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_281*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_2_3 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_283*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_285*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_287*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_284*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_286*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_288*0.16666666666666666);
             const real_t elMat_2_4 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_289*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_291*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_293*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_290*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_292*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_294*0.16666666666666666);
             const real_t elMat_2_5 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_295*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_297*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_299*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_296*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_298*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_300*0.16666666666666666);
             const real_t elMat_2_6 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_261*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_264*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_267*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_260*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_263*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_266*0.16666666666666666);
             const real_t elMat_2_7 = toMatrixScaling*(tmp_kernel_op_212*tmp_kernel_op_269*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_272*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_275*0.16666666666666666 + tmp_kernel_op_270*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_273*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_276*tmp_kernel_op_68*0.16666666666666666);
             const real_t elMat_2_8 = toMatrixScaling*(tmp_kernel_op_213*tmp_kernel_op_277*0.16666666666666666 + tmp_kernel_op_213*tmp_kernel_op_279*0.16666666666666666 + tmp_kernel_op_213*tmp_kernel_op_281*0.16666666666666666 + tmp_kernel_op_278*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_280*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_282*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_2_9 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_284*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_286*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_288*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_283*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_285*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_287*0.16666666666666666);
             const real_t elMat_2_10 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_290*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_292*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_294*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_289*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_291*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_293*0.16666666666666666);
             const real_t elMat_2_11 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_296*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_298*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_300*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_295*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_297*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_299*0.16666666666666666);
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 12 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[1] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[3] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[5] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[6] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[7] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[8] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[9] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[10] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[11] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_0_10));
             _data_mat[11] = ((real_t)(elMat_0_11));
             _data_mat[12] = ((real_t)(elMat_1_0));
             _data_mat[13] = ((real_t)(elMat_1_1));
             _data_mat[14] = ((real_t)(elMat_1_2));
             _data_mat[15] = ((real_t)(elMat_1_3));
             _data_mat[16] = ((real_t)(elMat_1_4));
             _data_mat[17] = ((real_t)(elMat_1_5));
             _data_mat[18] = ((real_t)(elMat_1_6));
             _data_mat[19] = ((real_t)(elMat_1_7));
             _data_mat[20] = ((real_t)(elMat_1_8));
             _data_mat[21] = ((real_t)(elMat_1_9));
             _data_mat[22] = ((real_t)(elMat_1_10));
             _data_mat[23] = ((real_t)(elMat_1_11));
             _data_mat[24] = ((real_t)(elMat_2_0));
             _data_mat[25] = ((real_t)(elMat_2_1));
             _data_mat[26] = ((real_t)(elMat_2_2));
             _data_mat[27] = ((real_t)(elMat_2_3));
             _data_mat[28] = ((real_t)(elMat_2_4));
             _data_mat[29] = ((real_t)(elMat_2_5));
             _data_mat[30] = ((real_t)(elMat_2_6));
             _data_mat[31] = ((real_t)(elMat_2_7));
             _data_mat[32] = ((real_t)(elMat_2_8));
             _data_mat[33] = ((real_t)(elMat_2_9));
             _data_mat[34] = ((real_t)(elMat_2_10));
             _data_mat[35] = ((real_t)(elMat_2_11));
         
         
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
       const real_t tmp_moved_constant_0 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_17 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_17;
       const real_t tmp_moved_constant_1 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_17 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_17;
       const real_t tmp_moved_constant_2 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_38 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_38;
       const real_t tmp_moved_constant_3 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_38 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_38;
       const real_t tmp_moved_constant_4 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_58 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_58;
       const real_t tmp_moved_constant_5 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_58 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_58;
       const real_t tmp_moved_constant_6 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_69;
       const real_t tmp_moved_constant_7 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_69;
       const real_t tmp_moved_constant_8 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_79;
       const real_t tmp_moved_constant_9 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_79;
       const real_t tmp_moved_constant_10 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_88;
       const real_t tmp_moved_constant_11 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_88;
       const real_t tmp_moved_constant_12 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_99;
       const real_t tmp_moved_constant_13 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_99;
       const real_t tmp_moved_constant_14 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_108;
       const real_t tmp_moved_constant_15 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_108;
       const real_t tmp_moved_constant_16 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_116;
       const real_t tmp_moved_constant_17 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_116;
       const real_t tmp_moved_constant_18 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_16;
       const real_t tmp_moved_constant_19 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_20 = tmp_moved_constant_18 + tmp_moved_constant_19;
       const real_t tmp_moved_constant_21 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_16;
       const real_t tmp_moved_constant_22 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_23 = tmp_moved_constant_21 + tmp_moved_constant_22;
       const real_t tmp_moved_constant_24 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_37;
       const real_t tmp_moved_constant_25 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_27;
       const real_t tmp_moved_constant_26 = tmp_moved_constant_24 + tmp_moved_constant_25;
       const real_t tmp_moved_constant_27 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_37;
       const real_t tmp_moved_constant_28 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_27;
       const real_t tmp_moved_constant_29 = tmp_moved_constant_27 + tmp_moved_constant_28;
       const real_t tmp_moved_constant_30 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_57;
       const real_t tmp_moved_constant_31 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_47;
       const real_t tmp_moved_constant_32 = tmp_moved_constant_30 + tmp_moved_constant_31;
       const real_t tmp_moved_constant_33 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_57;
       const real_t tmp_moved_constant_34 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_47;
       const real_t tmp_moved_constant_35 = tmp_moved_constant_33 + tmp_moved_constant_34;
       const real_t tmp_moved_constant_36 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_160 - tmp_moved_constant_18;
       const real_t tmp_moved_constant_37 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_160 - tmp_moved_constant_21;
       const real_t tmp_moved_constant_38 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_169 - tmp_moved_constant_24;
       const real_t tmp_moved_constant_39 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_169 - tmp_moved_constant_27;
       const real_t tmp_moved_constant_40 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_177 - tmp_moved_constant_30;
       const real_t tmp_moved_constant_41 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_177 - tmp_moved_constant_33;
       const real_t tmp_moved_constant_42 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_187 - tmp_moved_constant_19;
       const real_t tmp_moved_constant_43 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_187 - tmp_moved_constant_22;
       const real_t tmp_moved_constant_44 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_196 - tmp_moved_constant_25;
       const real_t tmp_moved_constant_45 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_196 - tmp_moved_constant_28;
       const real_t tmp_moved_constant_46 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_204 - tmp_moved_constant_31;
       const real_t tmp_moved_constant_47 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_204 - tmp_moved_constant_34;
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
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_1 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const bool tmp_kernel_op_0 = pow((nx_rotation_dof_0*nx_rotation_dof_0) + (ny_rotation_dof_0*ny_rotation_dof_0), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_1 = abs_det_jac_affine_BLUE*((tmp_kernel_op_0) ? (nx_rotation_dof_0): (0.0));
             const real_t tmp_kernel_op_9 = -rho_dof_0 + rho_dof_1;
             const real_t tmp_kernel_op_10 = -rho_dof_0 + rho_dof_2;
             const real_t tmp_kernel_op_11 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_9 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_9 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_10;
             const real_t tmp_kernel_op_13 = jac_blending_inv_0_1_q_0*tmp_kernel_op_11 + jac_blending_inv_1_1_q_0*tmp_kernel_op_12;
             const real_t tmp_kernel_op_15 = rho_dof_0*tmp_kernel_op_14 + rho_dof_1*0.16666666666666666 + rho_dof_2*0.66666666666666663;
             const real_t tmp_kernel_op_20 = -tmp_kernel_op_13*tmp_kernel_op_8 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_moved_constant_0 + jac_blending_inv_1_1_q_0*tmp_moved_constant_1);
             const real_t tmp_kernel_op_21 = abs_det_jac_blending_q_0*tmp_kernel_op_14;
             const real_t tmp_kernel_op_22 = tmp_kernel_op_20*tmp_kernel_op_21;
             const real_t tmp_kernel_op_23 = abs_det_jac_affine_BLUE*((tmp_kernel_op_0) ? (-ny_rotation_dof_0): (1.0));
             const real_t tmp_kernel_op_24 = jac_blending_inv_0_0_q_0*tmp_kernel_op_11 + jac_blending_inv_1_0_q_0*tmp_kernel_op_12;
             const real_t tmp_kernel_op_25 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_moved_constant_0 + jac_blending_inv_1_0_q_0*tmp_moved_constant_1) - tmp_kernel_op_24*tmp_kernel_op_8;
             const real_t tmp_kernel_op_26 = tmp_kernel_op_21*tmp_kernel_op_25;
             const real_t tmp_kernel_op_34 = jac_blending_inv_0_1_q_1*tmp_kernel_op_11 + jac_blending_inv_1_1_q_1*tmp_kernel_op_12;
             const real_t tmp_kernel_op_36 = rho_dof_0*tmp_kernel_op_35 + rho_dof_1*0.66666666666666663 + rho_dof_2*0.16666666666666666;
             const real_t tmp_kernel_op_41 = -tmp_kernel_op_33*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_moved_constant_2 + jac_blending_inv_1_1_q_1*tmp_moved_constant_3);
             const real_t tmp_kernel_op_42 = abs_det_jac_blending_q_1*tmp_kernel_op_35;
             const real_t tmp_kernel_op_43 = tmp_kernel_op_41*tmp_kernel_op_42;
             const real_t tmp_kernel_op_44 = jac_blending_inv_0_0_q_1*tmp_kernel_op_11 + jac_blending_inv_1_0_q_1*tmp_kernel_op_12;
             const real_t tmp_kernel_op_45 = -tmp_kernel_op_33*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_moved_constant_2 + jac_blending_inv_1_0_q_1*tmp_moved_constant_3);
             const real_t tmp_kernel_op_46 = tmp_kernel_op_42*tmp_kernel_op_45;
             const real_t tmp_kernel_op_54 = jac_blending_inv_0_1_q_2*tmp_kernel_op_11 + jac_blending_inv_1_1_q_2*tmp_kernel_op_12;
             const real_t tmp_kernel_op_56 = rho_dof_0*tmp_kernel_op_55 + rho_dof_1*0.16666666666666666 + rho_dof_2*0.16666666666666666;
             const real_t tmp_kernel_op_61 = -tmp_kernel_op_53*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_moved_constant_4 + jac_blending_inv_1_1_q_2*tmp_moved_constant_5);
             const real_t tmp_kernel_op_62 = abs_det_jac_blending_q_2*tmp_kernel_op_55;
             const real_t tmp_kernel_op_63 = tmp_kernel_op_61*tmp_kernel_op_62;
             const real_t tmp_kernel_op_64 = jac_blending_inv_0_0_q_2*tmp_kernel_op_11 + jac_blending_inv_1_0_q_2*tmp_kernel_op_12;
             const real_t tmp_kernel_op_65 = -tmp_kernel_op_53*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_moved_constant_4 + jac_blending_inv_1_0_q_2*tmp_moved_constant_5);
             const real_t tmp_kernel_op_66 = tmp_kernel_op_62*tmp_kernel_op_65;
             const bool tmp_kernel_op_67 = pow((nx_rotation_dof_1*nx_rotation_dof_1) + (ny_rotation_dof_1*ny_rotation_dof_1), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_68 = ((tmp_kernel_op_67) ? (nx_rotation_dof_1): (0.0));
             const real_t tmp_kernel_op_73 = -tmp_kernel_op_13*tmp_kernel_op_72 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_moved_constant_6 + jac_blending_inv_1_1_q_0*tmp_moved_constant_7);
             const real_t tmp_kernel_op_74 = abs_det_jac_affine_BLUE*tmp_kernel_op_21;
             const real_t tmp_kernel_op_75 = tmp_kernel_op_73*tmp_kernel_op_74;
             const real_t tmp_kernel_op_76 = ((tmp_kernel_op_67) ? (-ny_rotation_dof_1): (1.0));
             const real_t tmp_kernel_op_77 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_moved_constant_6 + jac_blending_inv_1_0_q_0*tmp_moved_constant_7) - tmp_kernel_op_24*tmp_kernel_op_72;
             const real_t tmp_kernel_op_78 = tmp_kernel_op_74*tmp_kernel_op_77;
             const real_t tmp_kernel_op_83 = -tmp_kernel_op_34*tmp_kernel_op_82 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_moved_constant_8 + jac_blending_inv_1_1_q_1*tmp_moved_constant_9);
             const real_t tmp_kernel_op_84 = abs_det_jac_affine_BLUE*tmp_kernel_op_42;
             const real_t tmp_kernel_op_85 = tmp_kernel_op_83*tmp_kernel_op_84;
             const real_t tmp_kernel_op_86 = -tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_moved_constant_8 + jac_blending_inv_1_0_q_1*tmp_moved_constant_9) - tmp_kernel_op_44*tmp_kernel_op_82;
             const real_t tmp_kernel_op_87 = tmp_kernel_op_84*tmp_kernel_op_86;
             const real_t tmp_kernel_op_92 = -tmp_kernel_op_54*tmp_kernel_op_91 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_moved_constant_10 + jac_blending_inv_1_1_q_2*tmp_moved_constant_11);
             const real_t tmp_kernel_op_93 = abs_det_jac_affine_BLUE*tmp_kernel_op_62;
             const real_t tmp_kernel_op_94 = tmp_kernel_op_92*tmp_kernel_op_93;
             const real_t tmp_kernel_op_95 = -tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_moved_constant_10 + jac_blending_inv_1_0_q_2*tmp_moved_constant_11) - tmp_kernel_op_64*tmp_kernel_op_91;
             const real_t tmp_kernel_op_96 = tmp_kernel_op_93*tmp_kernel_op_95;
             const bool tmp_kernel_op_97 = pow((nx_rotation_dof_2*nx_rotation_dof_2) + (ny_rotation_dof_2*ny_rotation_dof_2), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_98 = ((tmp_kernel_op_97) ? (nx_rotation_dof_2): (0.0));
             const real_t tmp_kernel_op_103 = -tmp_kernel_op_102*tmp_kernel_op_13 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_moved_constant_12 + jac_blending_inv_1_1_q_0*tmp_moved_constant_13);
             const real_t tmp_kernel_op_104 = tmp_kernel_op_103*tmp_kernel_op_74;
             const real_t tmp_kernel_op_105 = ((tmp_kernel_op_97) ? (-ny_rotation_dof_2): (1.0));
             const real_t tmp_kernel_op_106 = -tmp_kernel_op_102*tmp_kernel_op_24 - tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_moved_constant_12 + jac_blending_inv_1_0_q_0*tmp_moved_constant_13);
             const real_t tmp_kernel_op_107 = tmp_kernel_op_106*tmp_kernel_op_74;
             const real_t tmp_kernel_op_112 = -tmp_kernel_op_111*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_moved_constant_14 + jac_blending_inv_1_1_q_1*tmp_moved_constant_15);
             const real_t tmp_kernel_op_113 = tmp_kernel_op_112*tmp_kernel_op_84;
             const real_t tmp_kernel_op_114 = -tmp_kernel_op_111*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_moved_constant_14 + jac_blending_inv_1_0_q_1*tmp_moved_constant_15);
             const real_t tmp_kernel_op_115 = tmp_kernel_op_114*tmp_kernel_op_84;
             const real_t tmp_kernel_op_120 = -tmp_kernel_op_119*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_moved_constant_16 + jac_blending_inv_1_1_q_2*tmp_moved_constant_17);
             const real_t tmp_kernel_op_121 = tmp_kernel_op_120*tmp_kernel_op_93;
             const real_t tmp_kernel_op_122 = -tmp_kernel_op_119*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_moved_constant_16 + jac_blending_inv_1_0_q_2*tmp_moved_constant_17);
             const real_t tmp_kernel_op_123 = tmp_kernel_op_122*tmp_kernel_op_93;
             const bool tmp_kernel_op_124 = pow((nx_rotation_dof_3*nx_rotation_dof_3) + (ny_rotation_dof_3*ny_rotation_dof_3), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_125 = ((tmp_kernel_op_124) ? (nx_rotation_dof_3): (0.0));
             const real_t tmp_kernel_op_132 = -tmp_kernel_op_13*tmp_kernel_op_3 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_moved_constant_20 + jac_blending_inv_1_1_q_0*tmp_moved_constant_23);
             const real_t tmp_kernel_op_133 = tmp_kernel_op_132*tmp_kernel_op_74;
             const real_t tmp_kernel_op_134 = ((tmp_kernel_op_124) ? (-ny_rotation_dof_3): (1.0));
             const real_t tmp_kernel_op_135 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_moved_constant_20 + jac_blending_inv_1_0_q_0*tmp_moved_constant_23) - tmp_kernel_op_24*tmp_kernel_op_3;
             const real_t tmp_kernel_op_136 = tmp_kernel_op_135*tmp_kernel_op_74;
             const real_t tmp_kernel_op_143 = -tmp_kernel_op_28*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_moved_constant_26 + jac_blending_inv_1_1_q_1*tmp_moved_constant_29);
             const real_t tmp_kernel_op_144 = tmp_kernel_op_143*tmp_kernel_op_84;
             const real_t tmp_kernel_op_145 = -tmp_kernel_op_28*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_moved_constant_26 + jac_blending_inv_1_0_q_1*tmp_moved_constant_29);
             const real_t tmp_kernel_op_146 = tmp_kernel_op_145*tmp_kernel_op_84;
             const real_t tmp_kernel_op_153 = -tmp_kernel_op_48*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_moved_constant_32 + jac_blending_inv_1_1_q_2*tmp_moved_constant_35);
             const real_t tmp_kernel_op_154 = tmp_kernel_op_153*tmp_kernel_op_93;
             const real_t tmp_kernel_op_155 = -tmp_kernel_op_48*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_moved_constant_32 + jac_blending_inv_1_0_q_2*tmp_moved_constant_35);
             const real_t tmp_kernel_op_156 = tmp_kernel_op_155*tmp_kernel_op_93;
             const bool tmp_kernel_op_157 = pow((nx_rotation_dof_4*nx_rotation_dof_4) + (ny_rotation_dof_4*ny_rotation_dof_4), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_158 = ((tmp_kernel_op_157) ? (nx_rotation_dof_4): (0.0));
             const real_t tmp_kernel_op_163 = -tmp_kernel_op_13*tmp_kernel_op_159 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_moved_constant_36 + jac_blending_inv_1_1_q_0*tmp_moved_constant_37);
             const real_t tmp_kernel_op_164 = tmp_kernel_op_163*tmp_kernel_op_74;
             const real_t tmp_kernel_op_165 = ((tmp_kernel_op_157) ? (-ny_rotation_dof_4): (1.0));
             const real_t tmp_kernel_op_166 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_moved_constant_36 + jac_blending_inv_1_0_q_0*tmp_moved_constant_37) - tmp_kernel_op_159*tmp_kernel_op_24;
             const real_t tmp_kernel_op_167 = tmp_kernel_op_166*tmp_kernel_op_74;
             const real_t tmp_kernel_op_172 = -tmp_kernel_op_168*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_moved_constant_38 + jac_blending_inv_1_1_q_1*tmp_moved_constant_39);
             const real_t tmp_kernel_op_173 = tmp_kernel_op_172*tmp_kernel_op_84;
             const real_t tmp_kernel_op_174 = -tmp_kernel_op_168*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_moved_constant_38 + jac_blending_inv_1_0_q_1*tmp_moved_constant_39);
             const real_t tmp_kernel_op_175 = tmp_kernel_op_174*tmp_kernel_op_84;
             const real_t tmp_kernel_op_180 = -tmp_kernel_op_176*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_moved_constant_40 + jac_blending_inv_1_1_q_2*tmp_moved_constant_41);
             const real_t tmp_kernel_op_181 = tmp_kernel_op_180*tmp_kernel_op_93;
             const real_t tmp_kernel_op_182 = -tmp_kernel_op_176*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_moved_constant_40 + jac_blending_inv_1_0_q_2*tmp_moved_constant_41);
             const real_t tmp_kernel_op_183 = tmp_kernel_op_182*tmp_kernel_op_93;
             const bool tmp_kernel_op_184 = pow((nx_rotation_dof_5*nx_rotation_dof_5) + (ny_rotation_dof_5*ny_rotation_dof_5), 0.50000000000000000) > 0.5;
             const real_t tmp_kernel_op_185 = ((tmp_kernel_op_184) ? (nx_rotation_dof_5): (0.0));
             const real_t tmp_kernel_op_190 = -tmp_kernel_op_13*tmp_kernel_op_186 - tmp_kernel_op_15*(jac_blending_inv_0_1_q_0*tmp_moved_constant_42 + jac_blending_inv_1_1_q_0*tmp_moved_constant_43);
             const real_t tmp_kernel_op_191 = tmp_kernel_op_190*tmp_kernel_op_74;
             const real_t tmp_kernel_op_192 = ((tmp_kernel_op_184) ? (-ny_rotation_dof_5): (1.0));
             const real_t tmp_kernel_op_193 = -tmp_kernel_op_15*(jac_blending_inv_0_0_q_0*tmp_moved_constant_42 + jac_blending_inv_1_0_q_0*tmp_moved_constant_43) - tmp_kernel_op_186*tmp_kernel_op_24;
             const real_t tmp_kernel_op_194 = tmp_kernel_op_193*tmp_kernel_op_74;
             const real_t tmp_kernel_op_199 = -tmp_kernel_op_195*tmp_kernel_op_34 - tmp_kernel_op_36*(jac_blending_inv_0_1_q_1*tmp_moved_constant_44 + jac_blending_inv_1_1_q_1*tmp_moved_constant_45);
             const real_t tmp_kernel_op_200 = tmp_kernel_op_199*tmp_kernel_op_84;
             const real_t tmp_kernel_op_201 = -tmp_kernel_op_195*tmp_kernel_op_44 - tmp_kernel_op_36*(jac_blending_inv_0_0_q_1*tmp_moved_constant_44 + jac_blending_inv_1_0_q_1*tmp_moved_constant_45);
             const real_t tmp_kernel_op_202 = tmp_kernel_op_201*tmp_kernel_op_84;
             const real_t tmp_kernel_op_207 = -tmp_kernel_op_203*tmp_kernel_op_54 - tmp_kernel_op_56*(jac_blending_inv_0_1_q_2*tmp_moved_constant_46 + jac_blending_inv_1_1_q_2*tmp_moved_constant_47);
             const real_t tmp_kernel_op_208 = tmp_kernel_op_207*tmp_kernel_op_93;
             const real_t tmp_kernel_op_209 = -tmp_kernel_op_203*tmp_kernel_op_64 - tmp_kernel_op_56*(jac_blending_inv_0_0_q_2*tmp_moved_constant_46 + jac_blending_inv_1_0_q_2*tmp_moved_constant_47);
             const real_t tmp_kernel_op_210 = tmp_kernel_op_209*tmp_kernel_op_93;
             const real_t tmp_kernel_op_211 = abs_det_jac_affine_BLUE*((tmp_kernel_op_0) ? (ny_rotation_dof_0): (1.0));
             const real_t tmp_kernel_op_212 = ((tmp_kernel_op_67) ? (ny_rotation_dof_1): (1.0));
             const real_t tmp_kernel_op_213 = ((tmp_kernel_op_97) ? (ny_rotation_dof_2): (1.0));
             const real_t tmp_kernel_op_214 = ((tmp_kernel_op_124) ? (ny_rotation_dof_3): (1.0));
             const real_t tmp_kernel_op_215 = ((tmp_kernel_op_157) ? (ny_rotation_dof_4): (1.0));
             const real_t tmp_kernel_op_216 = ((tmp_kernel_op_184) ? (ny_rotation_dof_5): (1.0));
             const real_t tmp_kernel_op_217 = abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_218 = tmp_kernel_op_20*tmp_kernel_op_217;
             const real_t tmp_kernel_op_219 = tmp_kernel_op_217*tmp_kernel_op_25;
             const real_t tmp_kernel_op_220 = abs_det_jac_blending_q_1*0.66666666666666663;
             const real_t tmp_kernel_op_221 = tmp_kernel_op_220*tmp_kernel_op_41;
             const real_t tmp_kernel_op_222 = tmp_kernel_op_220*tmp_kernel_op_45;
             const real_t tmp_kernel_op_223 = abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_224 = tmp_kernel_op_223*tmp_kernel_op_61;
             const real_t tmp_kernel_op_225 = tmp_kernel_op_223*tmp_kernel_op_65;
             const real_t tmp_kernel_op_226 = abs_det_jac_affine_BLUE*tmp_kernel_op_217;
             const real_t tmp_kernel_op_227 = tmp_kernel_op_226*tmp_kernel_op_73;
             const real_t tmp_kernel_op_228 = tmp_kernel_op_226*tmp_kernel_op_77;
             const real_t tmp_kernel_op_229 = abs_det_jac_affine_BLUE*tmp_kernel_op_220;
             const real_t tmp_kernel_op_230 = tmp_kernel_op_229*tmp_kernel_op_83;
             const real_t tmp_kernel_op_231 = tmp_kernel_op_229*tmp_kernel_op_86;
             const real_t tmp_kernel_op_232 = abs_det_jac_affine_BLUE*tmp_kernel_op_223;
             const real_t tmp_kernel_op_233 = tmp_kernel_op_232*tmp_kernel_op_92;
             const real_t tmp_kernel_op_234 = tmp_kernel_op_232*tmp_kernel_op_95;
             const real_t tmp_kernel_op_235 = tmp_kernel_op_103*tmp_kernel_op_226;
             const real_t tmp_kernel_op_236 = tmp_kernel_op_106*tmp_kernel_op_226;
             const real_t tmp_kernel_op_237 = tmp_kernel_op_112*tmp_kernel_op_229;
             const real_t tmp_kernel_op_238 = tmp_kernel_op_114*tmp_kernel_op_229;
             const real_t tmp_kernel_op_239 = tmp_kernel_op_120*tmp_kernel_op_232;
             const real_t tmp_kernel_op_240 = tmp_kernel_op_122*tmp_kernel_op_232;
             const real_t tmp_kernel_op_241 = tmp_kernel_op_132*tmp_kernel_op_226;
             const real_t tmp_kernel_op_242 = tmp_kernel_op_135*tmp_kernel_op_226;
             const real_t tmp_kernel_op_243 = tmp_kernel_op_143*tmp_kernel_op_229;
             const real_t tmp_kernel_op_244 = tmp_kernel_op_145*tmp_kernel_op_229;
             const real_t tmp_kernel_op_245 = tmp_kernel_op_153*tmp_kernel_op_232;
             const real_t tmp_kernel_op_246 = tmp_kernel_op_155*tmp_kernel_op_232;
             const real_t tmp_kernel_op_247 = tmp_kernel_op_163*tmp_kernel_op_226;
             const real_t tmp_kernel_op_248 = tmp_kernel_op_166*tmp_kernel_op_226;
             const real_t tmp_kernel_op_249 = tmp_kernel_op_172*tmp_kernel_op_229;
             const real_t tmp_kernel_op_250 = tmp_kernel_op_174*tmp_kernel_op_229;
             const real_t tmp_kernel_op_251 = tmp_kernel_op_180*tmp_kernel_op_232;
             const real_t tmp_kernel_op_252 = tmp_kernel_op_182*tmp_kernel_op_232;
             const real_t tmp_kernel_op_253 = tmp_kernel_op_190*tmp_kernel_op_226;
             const real_t tmp_kernel_op_254 = tmp_kernel_op_193*tmp_kernel_op_226;
             const real_t tmp_kernel_op_255 = tmp_kernel_op_199*tmp_kernel_op_229;
             const real_t tmp_kernel_op_256 = tmp_kernel_op_201*tmp_kernel_op_229;
             const real_t tmp_kernel_op_257 = tmp_kernel_op_207*tmp_kernel_op_232;
             const real_t tmp_kernel_op_258 = tmp_kernel_op_209*tmp_kernel_op_232;
             const real_t tmp_kernel_op_259 = abs_det_jac_blending_q_0*0.66666666666666663;
             const real_t tmp_kernel_op_260 = tmp_kernel_op_20*tmp_kernel_op_259;
             const real_t tmp_kernel_op_261 = tmp_kernel_op_25*tmp_kernel_op_259;
             const real_t tmp_kernel_op_262 = abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_263 = tmp_kernel_op_262*tmp_kernel_op_41;
             const real_t tmp_kernel_op_264 = tmp_kernel_op_262*tmp_kernel_op_45;
             const real_t tmp_kernel_op_265 = abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_266 = tmp_kernel_op_265*tmp_kernel_op_61;
             const real_t tmp_kernel_op_267 = tmp_kernel_op_265*tmp_kernel_op_65;
             const real_t tmp_kernel_op_268 = abs_det_jac_affine_BLUE*tmp_kernel_op_259;
             const real_t tmp_kernel_op_269 = tmp_kernel_op_268*tmp_kernel_op_73;
             const real_t tmp_kernel_op_270 = tmp_kernel_op_268*tmp_kernel_op_77;
             const real_t tmp_kernel_op_271 = abs_det_jac_affine_BLUE*tmp_kernel_op_262;
             const real_t tmp_kernel_op_272 = tmp_kernel_op_271*tmp_kernel_op_83;
             const real_t tmp_kernel_op_273 = tmp_kernel_op_271*tmp_kernel_op_86;
             const real_t tmp_kernel_op_274 = abs_det_jac_affine_BLUE*tmp_kernel_op_265;
             const real_t tmp_kernel_op_275 = tmp_kernel_op_274*tmp_kernel_op_92;
             const real_t tmp_kernel_op_276 = tmp_kernel_op_274*tmp_kernel_op_95;
             const real_t tmp_kernel_op_277 = tmp_kernel_op_103*tmp_kernel_op_268;
             const real_t tmp_kernel_op_278 = tmp_kernel_op_106*tmp_kernel_op_268;
             const real_t tmp_kernel_op_279 = tmp_kernel_op_112*tmp_kernel_op_271;
             const real_t tmp_kernel_op_280 = tmp_kernel_op_114*tmp_kernel_op_271;
             const real_t tmp_kernel_op_281 = tmp_kernel_op_120*tmp_kernel_op_274;
             const real_t tmp_kernel_op_282 = tmp_kernel_op_122*tmp_kernel_op_274;
             const real_t tmp_kernel_op_283 = tmp_kernel_op_132*tmp_kernel_op_268;
             const real_t tmp_kernel_op_284 = tmp_kernel_op_135*tmp_kernel_op_268;
             const real_t tmp_kernel_op_285 = tmp_kernel_op_143*tmp_kernel_op_271;
             const real_t tmp_kernel_op_286 = tmp_kernel_op_145*tmp_kernel_op_271;
             const real_t tmp_kernel_op_287 = tmp_kernel_op_153*tmp_kernel_op_274;
             const real_t tmp_kernel_op_288 = tmp_kernel_op_155*tmp_kernel_op_274;
             const real_t tmp_kernel_op_289 = tmp_kernel_op_163*tmp_kernel_op_268;
             const real_t tmp_kernel_op_290 = tmp_kernel_op_166*tmp_kernel_op_268;
             const real_t tmp_kernel_op_291 = tmp_kernel_op_172*tmp_kernel_op_271;
             const real_t tmp_kernel_op_292 = tmp_kernel_op_174*tmp_kernel_op_271;
             const real_t tmp_kernel_op_293 = tmp_kernel_op_180*tmp_kernel_op_274;
             const real_t tmp_kernel_op_294 = tmp_kernel_op_182*tmp_kernel_op_274;
             const real_t tmp_kernel_op_295 = tmp_kernel_op_190*tmp_kernel_op_268;
             const real_t tmp_kernel_op_296 = tmp_kernel_op_193*tmp_kernel_op_268;
             const real_t tmp_kernel_op_297 = tmp_kernel_op_199*tmp_kernel_op_271;
             const real_t tmp_kernel_op_298 = tmp_kernel_op_201*tmp_kernel_op_271;
             const real_t tmp_kernel_op_299 = tmp_kernel_op_207*tmp_kernel_op_274;
             const real_t tmp_kernel_op_300 = tmp_kernel_op_209*tmp_kernel_op_274;
             const real_t elMat_0_0 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_22*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_63*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_26*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_66*0.16666666666666666);
             const real_t elMat_0_1 = toMatrixScaling*(tmp_kernel_op_68*tmp_kernel_op_75*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_85*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_94*0.16666666666666666 + tmp_kernel_op_76*tmp_kernel_op_78*0.16666666666666666 + tmp_kernel_op_76*tmp_kernel_op_87*0.16666666666666666 + tmp_kernel_op_76*tmp_kernel_op_96*0.16666666666666666);
             const real_t elMat_0_2 = toMatrixScaling*(tmp_kernel_op_104*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_107*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_115*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_123*0.16666666666666666 + tmp_kernel_op_113*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_0_3 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_133*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_144*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_154*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_136*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_146*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_156*0.16666666666666666);
             const real_t elMat_0_4 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_164*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_173*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_181*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_167*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_175*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_183*0.16666666666666666);
             const real_t elMat_0_5 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_191*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_200*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_208*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_194*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_202*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_210*0.16666666666666666);
             const real_t elMat_0_6 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_26*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_66*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_22*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_63*0.16666666666666666);
             const real_t elMat_0_7 = toMatrixScaling*(tmp_kernel_op_212*tmp_kernel_op_75*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_85*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_94*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_78*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_87*0.16666666666666666 + tmp_kernel_op_68*tmp_kernel_op_96*0.16666666666666666);
             const real_t elMat_0_8 = toMatrixScaling*(tmp_kernel_op_104*tmp_kernel_op_213*0.16666666666666666 + tmp_kernel_op_107*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_113*tmp_kernel_op_213*0.16666666666666666 + tmp_kernel_op_115*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_121*tmp_kernel_op_213*0.16666666666666666 + tmp_kernel_op_123*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_0_9 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_136*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_146*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_156*0.16666666666666666 + tmp_kernel_op_133*tmp_kernel_op_214*0.16666666666666666 + tmp_kernel_op_144*tmp_kernel_op_214*0.16666666666666666 + tmp_kernel_op_154*tmp_kernel_op_214*0.16666666666666666);
             const real_t elMat_0_10 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_167*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_175*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_183*0.16666666666666666 + tmp_kernel_op_164*tmp_kernel_op_215*0.16666666666666666 + tmp_kernel_op_173*tmp_kernel_op_215*0.16666666666666666 + tmp_kernel_op_181*tmp_kernel_op_215*0.16666666666666666);
             const real_t elMat_0_11 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_194*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_202*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_210*0.16666666666666666 + tmp_kernel_op_191*tmp_kernel_op_216*0.16666666666666666 + tmp_kernel_op_200*tmp_kernel_op_216*0.16666666666666666 + tmp_kernel_op_208*tmp_kernel_op_216*0.16666666666666666);
             const real_t elMat_1_0 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_218*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_221*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_224*0.16666666666666666 + tmp_kernel_op_219*tmp_kernel_op_23*0.16666666666666666 + tmp_kernel_op_222*tmp_kernel_op_23*0.16666666666666666 + tmp_kernel_op_225*tmp_kernel_op_23*0.16666666666666666);
             const real_t elMat_1_1 = toMatrixScaling*(tmp_kernel_op_227*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_228*tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_230*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_231*tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_233*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_234*tmp_kernel_op_76*0.16666666666666666);
             const real_t elMat_1_2 = toMatrixScaling*(tmp_kernel_op_105*tmp_kernel_op_236*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_238*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_240*0.16666666666666666 + tmp_kernel_op_235*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_237*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_239*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_1_3 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_241*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_243*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_245*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_242*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_244*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_246*0.16666666666666666);
             const real_t elMat_1_4 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_247*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_249*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_251*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_248*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_250*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_252*0.16666666666666666);
             const real_t elMat_1_5 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_253*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_255*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_257*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_254*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_256*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_258*0.16666666666666666);
             const real_t elMat_1_6 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_219*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_222*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_225*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_218*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_221*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_224*0.16666666666666666);
             const real_t elMat_1_7 = toMatrixScaling*(tmp_kernel_op_212*tmp_kernel_op_227*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_230*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_233*0.16666666666666666 + tmp_kernel_op_228*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_231*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_234*tmp_kernel_op_68*0.16666666666666666);
             const real_t elMat_1_8 = toMatrixScaling*(tmp_kernel_op_213*tmp_kernel_op_235*0.16666666666666666 + tmp_kernel_op_213*tmp_kernel_op_237*0.16666666666666666 + tmp_kernel_op_213*tmp_kernel_op_239*0.16666666666666666 + tmp_kernel_op_236*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_238*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_240*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_1_9 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_242*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_244*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_246*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_241*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_243*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_245*0.16666666666666666);
             const real_t elMat_1_10 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_248*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_250*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_252*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_247*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_249*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_251*0.16666666666666666);
             const real_t elMat_1_11 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_254*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_256*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_258*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_253*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_255*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_257*0.16666666666666666);
             const real_t elMat_2_0 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_260*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_263*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_266*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_261*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_264*0.16666666666666666 + tmp_kernel_op_23*tmp_kernel_op_267*0.16666666666666666);
             const real_t elMat_2_1 = toMatrixScaling*(tmp_kernel_op_269*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_270*tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_272*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_273*tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_275*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_276*tmp_kernel_op_76*0.16666666666666666);
             const real_t elMat_2_2 = toMatrixScaling*(tmp_kernel_op_105*tmp_kernel_op_278*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_280*0.16666666666666666 + tmp_kernel_op_105*tmp_kernel_op_282*0.16666666666666666 + tmp_kernel_op_277*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_279*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_281*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_2_3 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_283*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_285*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_287*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_284*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_286*0.16666666666666666 + tmp_kernel_op_134*tmp_kernel_op_288*0.16666666666666666);
             const real_t elMat_2_4 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_289*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_291*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_293*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_290*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_292*0.16666666666666666 + tmp_kernel_op_165*tmp_kernel_op_294*0.16666666666666666);
             const real_t elMat_2_5 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_295*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_297*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_299*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_296*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_298*0.16666666666666666 + tmp_kernel_op_192*tmp_kernel_op_300*0.16666666666666666);
             const real_t elMat_2_6 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_261*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_264*0.16666666666666666 + tmp_kernel_op_1*tmp_kernel_op_267*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_260*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_263*0.16666666666666666 + tmp_kernel_op_211*tmp_kernel_op_266*0.16666666666666666);
             const real_t elMat_2_7 = toMatrixScaling*(tmp_kernel_op_212*tmp_kernel_op_269*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_272*0.16666666666666666 + tmp_kernel_op_212*tmp_kernel_op_275*0.16666666666666666 + tmp_kernel_op_270*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_273*tmp_kernel_op_68*0.16666666666666666 + tmp_kernel_op_276*tmp_kernel_op_68*0.16666666666666666);
             const real_t elMat_2_8 = toMatrixScaling*(tmp_kernel_op_213*tmp_kernel_op_277*0.16666666666666666 + tmp_kernel_op_213*tmp_kernel_op_279*0.16666666666666666 + tmp_kernel_op_213*tmp_kernel_op_281*0.16666666666666666 + tmp_kernel_op_278*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_280*tmp_kernel_op_98*0.16666666666666666 + tmp_kernel_op_282*tmp_kernel_op_98*0.16666666666666666);
             const real_t elMat_2_9 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_284*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_286*0.16666666666666666 + tmp_kernel_op_125*tmp_kernel_op_288*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_283*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_285*0.16666666666666666 + tmp_kernel_op_214*tmp_kernel_op_287*0.16666666666666666);
             const real_t elMat_2_10 = toMatrixScaling*(tmp_kernel_op_158*tmp_kernel_op_290*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_292*0.16666666666666666 + tmp_kernel_op_158*tmp_kernel_op_294*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_289*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_291*0.16666666666666666 + tmp_kernel_op_215*tmp_kernel_op_293*0.16666666666666666);
             const real_t elMat_2_11 = toMatrixScaling*(tmp_kernel_op_185*tmp_kernel_op_296*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_298*0.16666666666666666 + tmp_kernel_op_185*tmp_kernel_op_300*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_295*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_297*0.16666666666666666 + tmp_kernel_op_216*tmp_kernel_op_299*0.16666666666666666);
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 12 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[2] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_src_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[6] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[7] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[8] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[9] = ((uint64_t)(_data_src_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[10] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_colIdx[11] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_0_10));
             _data_mat[11] = ((real_t)(elMat_0_11));
             _data_mat[12] = ((real_t)(elMat_1_0));
             _data_mat[13] = ((real_t)(elMat_1_1));
             _data_mat[14] = ((real_t)(elMat_1_2));
             _data_mat[15] = ((real_t)(elMat_1_3));
             _data_mat[16] = ((real_t)(elMat_1_4));
             _data_mat[17] = ((real_t)(elMat_1_5));
             _data_mat[18] = ((real_t)(elMat_1_6));
             _data_mat[19] = ((real_t)(elMat_1_7));
             _data_mat[20] = ((real_t)(elMat_1_8));
             _data_mat[21] = ((real_t)(elMat_1_9));
             _data_mat[22] = ((real_t)(elMat_1_10));
             _data_mat[23] = ((real_t)(elMat_1_11));
             _data_mat[24] = ((real_t)(elMat_2_0));
             _data_mat[25] = ((real_t)(elMat_2_1));
             _data_mat[26] = ((real_t)(elMat_2_2));
             _data_mat[27] = ((real_t)(elMat_2_3));
             _data_mat[28] = ((real_t)(elMat_2_4));
             _data_mat[29] = ((real_t)(elMat_2_5));
             _data_mat[30] = ((real_t)(elMat_2_6));
             _data_mat[31] = ((real_t)(elMat_2_7));
             _data_mat[32] = ((real_t)(elMat_2_8));
             _data_mat[33] = ((real_t)(elMat_2_9));
             _data_mat[34] = ((real_t)(elMat_2_10));
             _data_mat[35] = ((real_t)(elMat_2_11));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
