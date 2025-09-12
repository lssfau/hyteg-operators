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

































#include "../P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap::applyScaled_P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_macro_2D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_rhoEdge, real_t * RESTRICT  _data_rhoVertex, real_t * RESTRICT  _data_src_edge_0, real_t * RESTRICT  _data_src_edge_1, real_t * RESTRICT  _data_src_vertex_0, real_t * RESTRICT  _data_src_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t tmp_kernel_op_0 = 2.6666666666666665;
       const real_t tmp_kernel_op_1 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_2 = 0.66666666666666663;
       const real_t tmp_kernel_op_3 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_4 = tmp_kernel_op_1 + tmp_kernel_op_3;
       const real_t tmp_kernel_op_5 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_6 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_7 = tmp_kernel_op_5 + tmp_kernel_op_6;
       const real_t tmp_kernel_op_8 = tmp_kernel_op_2*0.66666666666666663;
       const real_t tmp_kernel_op_9 = 0.027777777777777776;
       const real_t tmp_kernel_op_10 = tmp_kernel_op_9*2.0;
       const real_t tmp_kernel_op_11 = tmp_kernel_op_10 - 0.16666666666666666;
       const real_t tmp_kernel_op_12 = 0.44444444444444442;
       const real_t tmp_kernel_op_13 = tmp_kernel_op_12*2.0;
       const real_t tmp_kernel_op_14 = tmp_kernel_op_13 - 0.66666666666666663;
       const real_t tmp_kernel_op_15 = tmp_kernel_op_0 + tmp_kernel_op_12*-4.0 - tmp_kernel_op_8;
       const real_t tmp_kernel_op_16 = tmp_kernel_op_2 - tmp_kernel_op_8 + tmp_kernel_op_9*-4.0;
       const real_t tmp_kernel_op_17 = tmp_kernel_op_10 + tmp_kernel_op_13 + tmp_kernel_op_8 - 1.5;
       const real_t tmp_kernel_op_19 = tmp_kernel_op_2 - 1.0;
       const real_t tmp_kernel_op_20 = tmp_kernel_op_0 + tmp_kernel_op_2 - 3.0;
       const real_t tmp_kernel_op_22 = -tmp_kernel_op_0 + 2.666666666666667;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_0 - 1.0;
       const real_t tmp_kernel_op_25 = -tmp_kernel_op_2 - 1.333333333333333;
       const real_t tmp_kernel_op_33 = 0.66666666666666663;
       const real_t tmp_kernel_op_34 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_33;
       const real_t tmp_kernel_op_35 = 2.6666666666666665;
       const real_t tmp_kernel_op_36 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_35;
       const real_t tmp_kernel_op_37 = tmp_kernel_op_34 + tmp_kernel_op_36;
       const real_t tmp_kernel_op_38 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_33;
       const real_t tmp_kernel_op_39 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_35;
       const real_t tmp_kernel_op_40 = tmp_kernel_op_38 + tmp_kernel_op_39;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_35*0.16666666666666666;
       const real_t tmp_kernel_op_42 = 0.44444444444444442;
       const real_t tmp_kernel_op_43 = tmp_kernel_op_42*2.0;
       const real_t tmp_kernel_op_44 = tmp_kernel_op_43 - 0.66666666666666663;
       const real_t tmp_kernel_op_45 = 0.027777777777777776;
       const real_t tmp_kernel_op_46 = tmp_kernel_op_45*2.0;
       const real_t tmp_kernel_op_47 = tmp_kernel_op_46 - 0.16666666666666666;
       const real_t tmp_kernel_op_48 = tmp_kernel_op_33 - tmp_kernel_op_41 + tmp_kernel_op_45*-4.0;
       const real_t tmp_kernel_op_49 = tmp_kernel_op_35 - tmp_kernel_op_41 + tmp_kernel_op_42*-4.0;
       const real_t tmp_kernel_op_50 = tmp_kernel_op_41 + tmp_kernel_op_43 + tmp_kernel_op_46 - 1.5;
       const real_t tmp_kernel_op_52 = tmp_kernel_op_35 - 1.0;
       const real_t tmp_kernel_op_53 = tmp_kernel_op_33 + tmp_kernel_op_35 - 3.0;
       const real_t tmp_kernel_op_55 = -tmp_kernel_op_33 - 1.333333333333333;
       const real_t tmp_kernel_op_57 = tmp_kernel_op_33 - 1.0;
       const real_t tmp_kernel_op_58 = -tmp_kernel_op_35 + 2.666666666666667;
       const real_t tmp_kernel_op_66 = 0.66666666666666663;
       const real_t tmp_kernel_op_67 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_66;
       const real_t tmp_kernel_op_68 = 0.66666666666666663;
       const real_t tmp_kernel_op_69 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_68;
       const real_t tmp_kernel_op_70 = tmp_kernel_op_67 + tmp_kernel_op_69;
       const real_t tmp_kernel_op_71 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_66;
       const real_t tmp_kernel_op_72 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_68;
       const real_t tmp_kernel_op_73 = tmp_kernel_op_71 + tmp_kernel_op_72;
       const real_t tmp_kernel_op_74 = tmp_kernel_op_68*0.16666666666666666;
       const real_t tmp_kernel_op_75 = 0.027777777777777776;
       const real_t tmp_kernel_op_76 = tmp_kernel_op_75*2.0;
       const real_t tmp_kernel_op_77 = tmp_kernel_op_76 - 0.16666666666666666;
       const real_t tmp_kernel_op_78 = 0.027777777777777776;
       const real_t tmp_kernel_op_79 = tmp_kernel_op_78*2.0;
       const real_t tmp_kernel_op_80 = tmp_kernel_op_79 - 0.16666666666666666;
       const real_t tmp_kernel_op_81 = tmp_kernel_op_66 - tmp_kernel_op_74 + tmp_kernel_op_78*-4.0;
       const real_t tmp_kernel_op_82 = tmp_kernel_op_68 - tmp_kernel_op_74 + tmp_kernel_op_75*-4.0;
       const real_t tmp_kernel_op_83 = tmp_kernel_op_74 + tmp_kernel_op_76 + tmp_kernel_op_79;
       const real_t tmp_kernel_op_85 = tmp_kernel_op_68 - 1.0;
       const real_t tmp_kernel_op_86 = tmp_kernel_op_66 + tmp_kernel_op_68 - 3.0;
       const real_t tmp_kernel_op_88 = -tmp_kernel_op_66 + 2.666666666666667;
       const real_t tmp_kernel_op_90 = tmp_kernel_op_66 - 1.0;
       const real_t tmp_kernel_op_91 = -tmp_kernel_op_68 + 2.666666666666667;
       const real_t tmp_kernel_op_105 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_19;
       const real_t tmp_kernel_op_106 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_19;
       const real_t tmp_kernel_op_108 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_52;
       const real_t tmp_kernel_op_109 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_52;
       const real_t tmp_kernel_op_111 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_85;
       const real_t tmp_kernel_op_112 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_85;
       const real_t tmp_kernel_op_114 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_115 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_117 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_57;
       const real_t tmp_kernel_op_118 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_57;
       const real_t tmp_kernel_op_120 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_90;
       const real_t tmp_kernel_op_121 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_90;
       const real_t tmp_kernel_op_129 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_25 - tmp_kernel_op_1;
       const real_t tmp_kernel_op_130 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_25 - tmp_kernel_op_5;
       const real_t tmp_kernel_op_132 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_58 - tmp_kernel_op_34;
       const real_t tmp_kernel_op_133 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_58 - tmp_kernel_op_38;
       const real_t tmp_kernel_op_135 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_91 - tmp_kernel_op_67;
       const real_t tmp_kernel_op_136 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_91 - tmp_kernel_op_71;
       const real_t tmp_kernel_op_138 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_22 - tmp_kernel_op_3;
       const real_t tmp_kernel_op_139 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_22 - tmp_kernel_op_6;
       const real_t tmp_kernel_op_141 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_55 - tmp_kernel_op_36;
       const real_t tmp_kernel_op_142 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_55 - tmp_kernel_op_39;
       const real_t tmp_kernel_op_144 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_88 - tmp_kernel_op_69;
       const real_t tmp_kernel_op_145 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_88 - tmp_kernel_op_72;
       const real_t tmp_kernel_op_153 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_20 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_20;
       const real_t tmp_kernel_op_154 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_20 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_20;
       const real_t tmp_kernel_op_156 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_53 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_53;
       const real_t tmp_kernel_op_157 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_53 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_53;
       const real_t tmp_kernel_op_159 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_86 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_86;
       const real_t tmp_kernel_op_160 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_86 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_86;
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
             const real_t rho_dof_0 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_3 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t rho_dof_4 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t rho_dof_5 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t tmp_kernel_op_18 = rho_dof_0*tmp_kernel_op_17 + rho_dof_1*tmp_kernel_op_11 + rho_dof_2*tmp_kernel_op_14 + rho_dof_3*tmp_kernel_op_8 + rho_dof_4*tmp_kernel_op_15 + rho_dof_5*tmp_kernel_op_16;
             const real_t tmp_kernel_op_21 = rho_dof_0*tmp_kernel_op_20;
             const real_t tmp_kernel_op_23 = rho_dof_1*tmp_kernel_op_19 + rho_dof_3*tmp_kernel_op_0 - rho_dof_4*tmp_kernel_op_0 + rho_dof_5*tmp_kernel_op_22 + tmp_kernel_op_21;
             const real_t tmp_kernel_op_26 = rho_dof_2*tmp_kernel_op_24 + rho_dof_3*tmp_kernel_op_2 + rho_dof_4*tmp_kernel_op_25 - rho_dof_5*tmp_kernel_op_2 + tmp_kernel_op_21;
             const real_t tmp_kernel_op_27 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_23 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_26;
             const real_t tmp_kernel_op_28 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_23 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_26;
             const real_t tmp_kernel_op_29 = jac_blending_inv_0_0_q_0*tmp_kernel_op_27 + jac_blending_inv_1_0_q_0*tmp_kernel_op_28;
             const real_t tmp_kernel_op_30 = -tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_kernel_op_4 + jac_blending_inv_1_0_q_0*tmp_kernel_op_7) - tmp_kernel_op_29*tmp_kernel_op_8;
             const real_t tmp_kernel_op_31 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_31*0.16666666666666674;
             const real_t tmp_kernel_op_51 = rho_dof_0*tmp_kernel_op_50 + rho_dof_1*tmp_kernel_op_44 + rho_dof_2*tmp_kernel_op_47 + rho_dof_3*tmp_kernel_op_41 + rho_dof_4*tmp_kernel_op_48 + rho_dof_5*tmp_kernel_op_49;
             const real_t tmp_kernel_op_54 = rho_dof_0*tmp_kernel_op_53;
             const real_t tmp_kernel_op_56 = rho_dof_1*tmp_kernel_op_52 + rho_dof_3*tmp_kernel_op_33 - rho_dof_4*tmp_kernel_op_33 + rho_dof_5*tmp_kernel_op_55 + tmp_kernel_op_54;
             const real_t tmp_kernel_op_59 = rho_dof_2*tmp_kernel_op_57 + rho_dof_3*tmp_kernel_op_35 + rho_dof_4*tmp_kernel_op_58 - rho_dof_5*tmp_kernel_op_35 + tmp_kernel_op_54;
             const real_t tmp_kernel_op_60 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_56 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_59;
             const real_t tmp_kernel_op_61 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_56 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_59;
             const real_t tmp_kernel_op_62 = jac_blending_inv_0_0_q_1*tmp_kernel_op_60 + jac_blending_inv_1_0_q_1*tmp_kernel_op_61;
             const real_t tmp_kernel_op_63 = -tmp_kernel_op_41*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_kernel_op_37 + jac_blending_inv_1_0_q_1*tmp_kernel_op_40);
             const real_t tmp_kernel_op_64 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_65 = tmp_kernel_op_64*0.16666666666666671;
             const real_t tmp_kernel_op_84 = rho_dof_0*tmp_kernel_op_83 + rho_dof_1*tmp_kernel_op_77 + rho_dof_2*tmp_kernel_op_80 + rho_dof_3*tmp_kernel_op_74 + rho_dof_4*tmp_kernel_op_81 + rho_dof_5*tmp_kernel_op_82;
             const real_t tmp_kernel_op_87 = rho_dof_0*tmp_kernel_op_86;
             const real_t tmp_kernel_op_89 = rho_dof_1*tmp_kernel_op_85 + rho_dof_3*tmp_kernel_op_66 - rho_dof_4*tmp_kernel_op_66 + rho_dof_5*tmp_kernel_op_88 + tmp_kernel_op_87;
             const real_t tmp_kernel_op_92 = rho_dof_2*tmp_kernel_op_90 + rho_dof_3*tmp_kernel_op_68 + rho_dof_4*tmp_kernel_op_91 - rho_dof_5*tmp_kernel_op_68 + tmp_kernel_op_87;
             const real_t tmp_kernel_op_93 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_89 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_92;
             const real_t tmp_kernel_op_94 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_89 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_92;
             const real_t tmp_kernel_op_95 = jac_blending_inv_0_0_q_2*tmp_kernel_op_93 + jac_blending_inv_1_0_q_2*tmp_kernel_op_94;
             const real_t tmp_kernel_op_96 = -tmp_kernel_op_74*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_kernel_op_70 + jac_blending_inv_1_0_q_2*tmp_kernel_op_73);
             const real_t tmp_kernel_op_97 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_98 = tmp_kernel_op_97*0.66666666666666674;
             const real_t tmp_kernel_op_99 = jac_blending_inv_0_1_q_0*tmp_kernel_op_27 + jac_blending_inv_1_1_q_0*tmp_kernel_op_28;
             const real_t tmp_kernel_op_100 = -tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_kernel_op_4 + jac_blending_inv_1_1_q_0*tmp_kernel_op_7) - tmp_kernel_op_8*tmp_kernel_op_99;
             const real_t tmp_kernel_op_101 = jac_blending_inv_0_1_q_1*tmp_kernel_op_60 + jac_blending_inv_1_1_q_1*tmp_kernel_op_61;
             const real_t tmp_kernel_op_102 = -tmp_kernel_op_101*tmp_kernel_op_41 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_kernel_op_37 + jac_blending_inv_1_1_q_1*tmp_kernel_op_40);
             const real_t tmp_kernel_op_103 = jac_blending_inv_0_1_q_2*tmp_kernel_op_93 + jac_blending_inv_1_1_q_2*tmp_kernel_op_94;
             const real_t tmp_kernel_op_104 = -tmp_kernel_op_103*tmp_kernel_op_74 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_kernel_op_70 + jac_blending_inv_1_1_q_2*tmp_kernel_op_73);
             const real_t tmp_kernel_op_107 = -tmp_kernel_op_11*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_kernel_op_105 + jac_blending_inv_1_0_q_0*tmp_kernel_op_106);
             const real_t tmp_kernel_op_110 = -tmp_kernel_op_44*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_kernel_op_108 + jac_blending_inv_1_0_q_1*tmp_kernel_op_109);
             const real_t tmp_kernel_op_113 = -tmp_kernel_op_77*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_kernel_op_111 + jac_blending_inv_1_0_q_2*tmp_kernel_op_112);
             const real_t tmp_kernel_op_116 = -tmp_kernel_op_14*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_kernel_op_114 + jac_blending_inv_1_0_q_0*tmp_kernel_op_115);
             const real_t tmp_kernel_op_119 = -tmp_kernel_op_47*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_kernel_op_117 + jac_blending_inv_1_0_q_1*tmp_kernel_op_118);
             const real_t tmp_kernel_op_122 = -tmp_kernel_op_80*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_kernel_op_120 + jac_blending_inv_1_0_q_2*tmp_kernel_op_121);
             const real_t tmp_kernel_op_123 = -tmp_kernel_op_11*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_kernel_op_105 + jac_blending_inv_1_1_q_0*tmp_kernel_op_106);
             const real_t tmp_kernel_op_124 = -tmp_kernel_op_101*tmp_kernel_op_44 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_kernel_op_108 + jac_blending_inv_1_1_q_1*tmp_kernel_op_109);
             const real_t tmp_kernel_op_125 = -tmp_kernel_op_103*tmp_kernel_op_77 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_kernel_op_111 + jac_blending_inv_1_1_q_2*tmp_kernel_op_112);
             const real_t tmp_kernel_op_126 = -tmp_kernel_op_14*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_kernel_op_114 + jac_blending_inv_1_1_q_0*tmp_kernel_op_115);
             const real_t tmp_kernel_op_127 = -tmp_kernel_op_101*tmp_kernel_op_47 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_kernel_op_117 + jac_blending_inv_1_1_q_1*tmp_kernel_op_118);
             const real_t tmp_kernel_op_128 = -tmp_kernel_op_103*tmp_kernel_op_80 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_kernel_op_120 + jac_blending_inv_1_1_q_2*tmp_kernel_op_121);
             const real_t tmp_kernel_op_131 = -tmp_kernel_op_15*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_kernel_op_129 + jac_blending_inv_1_1_q_0*tmp_kernel_op_130);
             const real_t tmp_kernel_op_134 = -tmp_kernel_op_101*tmp_kernel_op_48 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_kernel_op_132 + jac_blending_inv_1_1_q_1*tmp_kernel_op_133);
             const real_t tmp_kernel_op_137 = -tmp_kernel_op_103*tmp_kernel_op_81 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_kernel_op_135 + jac_blending_inv_1_1_q_2*tmp_kernel_op_136);
             const real_t tmp_kernel_op_140 = -tmp_kernel_op_16*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_kernel_op_138 + jac_blending_inv_1_1_q_0*tmp_kernel_op_139);
             const real_t tmp_kernel_op_143 = -tmp_kernel_op_101*tmp_kernel_op_49 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_kernel_op_141 + jac_blending_inv_1_1_q_1*tmp_kernel_op_142);
             const real_t tmp_kernel_op_146 = -tmp_kernel_op_103*tmp_kernel_op_82 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_kernel_op_144 + jac_blending_inv_1_1_q_2*tmp_kernel_op_145);
             const real_t tmp_kernel_op_147 = -tmp_kernel_op_15*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_kernel_op_129 + jac_blending_inv_1_0_q_0*tmp_kernel_op_130);
             const real_t tmp_kernel_op_148 = -tmp_kernel_op_48*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_kernel_op_132 + jac_blending_inv_1_0_q_1*tmp_kernel_op_133);
             const real_t tmp_kernel_op_149 = -tmp_kernel_op_81*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_kernel_op_135 + jac_blending_inv_1_0_q_2*tmp_kernel_op_136);
             const real_t tmp_kernel_op_150 = -tmp_kernel_op_16*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_kernel_op_138 + jac_blending_inv_1_0_q_0*tmp_kernel_op_139);
             const real_t tmp_kernel_op_151 = -tmp_kernel_op_49*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_kernel_op_141 + jac_blending_inv_1_0_q_1*tmp_kernel_op_142);
             const real_t tmp_kernel_op_152 = -tmp_kernel_op_82*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_kernel_op_144 + jac_blending_inv_1_0_q_2*tmp_kernel_op_145);
             const real_t tmp_kernel_op_155 = -tmp_kernel_op_17*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_kernel_op_153 + jac_blending_inv_1_0_q_0*tmp_kernel_op_154);
             const real_t tmp_kernel_op_158 = -tmp_kernel_op_50*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_kernel_op_156 + jac_blending_inv_1_0_q_1*tmp_kernel_op_157);
             const real_t tmp_kernel_op_161 = -tmp_kernel_op_83*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_kernel_op_159 + jac_blending_inv_1_0_q_2*tmp_kernel_op_160);
             const real_t tmp_kernel_op_162 = -tmp_kernel_op_17*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_kernel_op_153 + jac_blending_inv_1_1_q_0*tmp_kernel_op_154);
             const real_t tmp_kernel_op_163 = -tmp_kernel_op_101*tmp_kernel_op_50 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_kernel_op_156 + jac_blending_inv_1_1_q_1*tmp_kernel_op_157);
             const real_t tmp_kernel_op_164 = -tmp_kernel_op_103*tmp_kernel_op_83 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_kernel_op_159 + jac_blending_inv_1_1_q_2*tmp_kernel_op_160);
             const real_t tmp_kernel_op_165 = tmp_kernel_op_31*0.16666666666666666;
             const real_t tmp_kernel_op_166 = tmp_kernel_op_64*0.66666666666666663;
             const real_t tmp_kernel_op_167 = tmp_kernel_op_97*0.16666666666666666;
             const real_t tmp_kernel_op_168 = tmp_kernel_op_31*0.66666666666666663;
             const real_t tmp_kernel_op_169 = tmp_kernel_op_64*0.16666666666666666;
             const real_t tmp_kernel_op_170 = tmp_kernel_op_97*0.16666666666666666;
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_155*tmp_kernel_op_32 + tmp_kernel_op_158*tmp_kernel_op_65 + tmp_kernel_op_161*tmp_kernel_op_98) + src_dof_1*(tmp_kernel_op_107*tmp_kernel_op_32 + tmp_kernel_op_110*tmp_kernel_op_65 + tmp_kernel_op_113*tmp_kernel_op_98) + src_dof_10*(tmp_kernel_op_131*tmp_kernel_op_32 + tmp_kernel_op_134*tmp_kernel_op_65 + tmp_kernel_op_137*tmp_kernel_op_98) + src_dof_11*(tmp_kernel_op_140*tmp_kernel_op_32 + tmp_kernel_op_143*tmp_kernel_op_65 + tmp_kernel_op_146*tmp_kernel_op_98) + src_dof_2*(tmp_kernel_op_116*tmp_kernel_op_32 + tmp_kernel_op_119*tmp_kernel_op_65 + tmp_kernel_op_122*tmp_kernel_op_98) + src_dof_3*(tmp_kernel_op_30*tmp_kernel_op_32 + tmp_kernel_op_63*tmp_kernel_op_65 + tmp_kernel_op_96*tmp_kernel_op_98) + src_dof_4*(tmp_kernel_op_147*tmp_kernel_op_32 + tmp_kernel_op_148*tmp_kernel_op_65 + tmp_kernel_op_149*tmp_kernel_op_98) + src_dof_5*(tmp_kernel_op_150*tmp_kernel_op_32 + tmp_kernel_op_151*tmp_kernel_op_65 + tmp_kernel_op_152*tmp_kernel_op_98) + src_dof_6*(tmp_kernel_op_162*tmp_kernel_op_32 + tmp_kernel_op_163*tmp_kernel_op_65 + tmp_kernel_op_164*tmp_kernel_op_98) + src_dof_7*(tmp_kernel_op_123*tmp_kernel_op_32 + tmp_kernel_op_124*tmp_kernel_op_65 + tmp_kernel_op_125*tmp_kernel_op_98) + src_dof_8*(tmp_kernel_op_126*tmp_kernel_op_32 + tmp_kernel_op_127*tmp_kernel_op_65 + tmp_kernel_op_128*tmp_kernel_op_98) + src_dof_9*(tmp_kernel_op_100*tmp_kernel_op_32 + tmp_kernel_op_102*tmp_kernel_op_65 + tmp_kernel_op_104*tmp_kernel_op_98);
             const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_155*tmp_kernel_op_165 + tmp_kernel_op_158*tmp_kernel_op_166 + tmp_kernel_op_161*tmp_kernel_op_167) + src_dof_1*(tmp_kernel_op_107*tmp_kernel_op_165 + tmp_kernel_op_110*tmp_kernel_op_166 + tmp_kernel_op_113*tmp_kernel_op_167) + src_dof_10*(tmp_kernel_op_131*tmp_kernel_op_165 + tmp_kernel_op_134*tmp_kernel_op_166 + tmp_kernel_op_137*tmp_kernel_op_167) + src_dof_11*(tmp_kernel_op_140*tmp_kernel_op_165 + tmp_kernel_op_143*tmp_kernel_op_166 + tmp_kernel_op_146*tmp_kernel_op_167) + src_dof_2*(tmp_kernel_op_116*tmp_kernel_op_165 + tmp_kernel_op_119*tmp_kernel_op_166 + tmp_kernel_op_122*tmp_kernel_op_167) + src_dof_3*(tmp_kernel_op_165*tmp_kernel_op_30 + tmp_kernel_op_166*tmp_kernel_op_63 + tmp_kernel_op_167*tmp_kernel_op_96) + src_dof_4*(tmp_kernel_op_147*tmp_kernel_op_165 + tmp_kernel_op_148*tmp_kernel_op_166 + tmp_kernel_op_149*tmp_kernel_op_167) + src_dof_5*(tmp_kernel_op_150*tmp_kernel_op_165 + tmp_kernel_op_151*tmp_kernel_op_166 + tmp_kernel_op_152*tmp_kernel_op_167) + src_dof_6*(tmp_kernel_op_162*tmp_kernel_op_165 + tmp_kernel_op_163*tmp_kernel_op_166 + tmp_kernel_op_164*tmp_kernel_op_167) + src_dof_7*(tmp_kernel_op_123*tmp_kernel_op_165 + tmp_kernel_op_124*tmp_kernel_op_166 + tmp_kernel_op_125*tmp_kernel_op_167) + src_dof_8*(tmp_kernel_op_126*tmp_kernel_op_165 + tmp_kernel_op_127*tmp_kernel_op_166 + tmp_kernel_op_128*tmp_kernel_op_167) + src_dof_9*(tmp_kernel_op_100*tmp_kernel_op_165 + tmp_kernel_op_102*tmp_kernel_op_166 + tmp_kernel_op_104*tmp_kernel_op_167);
             const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_155*tmp_kernel_op_168 + tmp_kernel_op_158*tmp_kernel_op_169 + tmp_kernel_op_161*tmp_kernel_op_170) + src_dof_1*(tmp_kernel_op_107*tmp_kernel_op_168 + tmp_kernel_op_110*tmp_kernel_op_169 + tmp_kernel_op_113*tmp_kernel_op_170) + src_dof_10*(tmp_kernel_op_131*tmp_kernel_op_168 + tmp_kernel_op_134*tmp_kernel_op_169 + tmp_kernel_op_137*tmp_kernel_op_170) + src_dof_11*(tmp_kernel_op_140*tmp_kernel_op_168 + tmp_kernel_op_143*tmp_kernel_op_169 + tmp_kernel_op_146*tmp_kernel_op_170) + src_dof_2*(tmp_kernel_op_116*tmp_kernel_op_168 + tmp_kernel_op_119*tmp_kernel_op_169 + tmp_kernel_op_122*tmp_kernel_op_170) + src_dof_3*(tmp_kernel_op_168*tmp_kernel_op_30 + tmp_kernel_op_169*tmp_kernel_op_63 + tmp_kernel_op_170*tmp_kernel_op_96) + src_dof_4*(tmp_kernel_op_147*tmp_kernel_op_168 + tmp_kernel_op_148*tmp_kernel_op_169 + tmp_kernel_op_149*tmp_kernel_op_170) + src_dof_5*(tmp_kernel_op_150*tmp_kernel_op_168 + tmp_kernel_op_151*tmp_kernel_op_169 + tmp_kernel_op_152*tmp_kernel_op_170) + src_dof_6*(tmp_kernel_op_162*tmp_kernel_op_168 + tmp_kernel_op_163*tmp_kernel_op_169 + tmp_kernel_op_164*tmp_kernel_op_170) + src_dof_7*(tmp_kernel_op_123*tmp_kernel_op_168 + tmp_kernel_op_124*tmp_kernel_op_169 + tmp_kernel_op_125*tmp_kernel_op_170) + src_dof_8*(tmp_kernel_op_126*tmp_kernel_op_168 + tmp_kernel_op_127*tmp_kernel_op_169 + tmp_kernel_op_128*tmp_kernel_op_170) + src_dof_9*(tmp_kernel_op_100*tmp_kernel_op_168 + tmp_kernel_op_102*tmp_kernel_op_169 + tmp_kernel_op_104*tmp_kernel_op_170);
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
       const real_t tmp_moved_constant_0 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_1 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_2 = tmp_moved_constant_0 + tmp_moved_constant_1;
       const real_t tmp_moved_constant_3 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_4 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_5 = tmp_moved_constant_3 + tmp_moved_constant_4;
       const real_t tmp_moved_constant_6 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_33;
       const real_t tmp_moved_constant_7 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_35;
       const real_t tmp_moved_constant_8 = tmp_moved_constant_6 + tmp_moved_constant_7;
       const real_t tmp_moved_constant_9 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_33;
       const real_t tmp_moved_constant_10 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_35;
       const real_t tmp_moved_constant_11 = tmp_moved_constant_10 + tmp_moved_constant_9;
       const real_t tmp_moved_constant_12 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_66;
       const real_t tmp_moved_constant_13 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_68;
       const real_t tmp_moved_constant_14 = tmp_moved_constant_12 + tmp_moved_constant_13;
       const real_t tmp_moved_constant_15 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_66;
       const real_t tmp_moved_constant_16 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_68;
       const real_t tmp_moved_constant_17 = tmp_moved_constant_15 + tmp_moved_constant_16;
       const real_t tmp_moved_constant_18 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_19;
       const real_t tmp_moved_constant_19 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_19;
       const real_t tmp_moved_constant_20 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_52;
       const real_t tmp_moved_constant_21 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_52;
       const real_t tmp_moved_constant_22 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_85;
       const real_t tmp_moved_constant_23 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_85;
       const real_t tmp_moved_constant_24 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_24;
       const real_t tmp_moved_constant_25 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_24;
       const real_t tmp_moved_constant_26 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_57;
       const real_t tmp_moved_constant_27 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_57;
       const real_t tmp_moved_constant_28 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_90;
       const real_t tmp_moved_constant_29 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_90;
       const real_t tmp_moved_constant_30 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_25 - tmp_moved_constant_0;
       const real_t tmp_moved_constant_31 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_25 - tmp_moved_constant_3;
       const real_t tmp_moved_constant_32 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_58 - tmp_moved_constant_6;
       const real_t tmp_moved_constant_33 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_58 - tmp_moved_constant_9;
       const real_t tmp_moved_constant_34 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_91 - tmp_moved_constant_12;
       const real_t tmp_moved_constant_35 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_91 - tmp_moved_constant_15;
       const real_t tmp_moved_constant_36 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_22 - tmp_moved_constant_1;
       const real_t tmp_moved_constant_37 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_22 - tmp_moved_constant_4;
       const real_t tmp_moved_constant_38 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_55 - tmp_moved_constant_7;
       const real_t tmp_moved_constant_39 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_55 - tmp_moved_constant_10;
       const real_t tmp_moved_constant_40 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_88 - tmp_moved_constant_13;
       const real_t tmp_moved_constant_41 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_88 - tmp_moved_constant_16;
       const real_t tmp_moved_constant_42 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_20 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_20;
       const real_t tmp_moved_constant_43 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_20 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_20;
       const real_t tmp_moved_constant_44 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_53 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_53;
       const real_t tmp_moved_constant_45 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_53 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_53;
       const real_t tmp_moved_constant_46 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_86 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_86;
       const real_t tmp_moved_constant_47 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_86 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_86;
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
             const real_t rho_dof_0 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_1 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_2 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t rho_dof_3 = _data_rhoEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_4 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t rho_dof_5 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_kernel_op_18 = rho_dof_0*tmp_kernel_op_17 + rho_dof_1*tmp_kernel_op_11 + rho_dof_2*tmp_kernel_op_14 + rho_dof_3*tmp_kernel_op_8 + rho_dof_4*tmp_kernel_op_15 + rho_dof_5*tmp_kernel_op_16;
             const real_t tmp_kernel_op_21 = rho_dof_0*tmp_kernel_op_20;
             const real_t tmp_kernel_op_23 = rho_dof_1*tmp_kernel_op_19 + rho_dof_3*tmp_kernel_op_0 - rho_dof_4*tmp_kernel_op_0 + rho_dof_5*tmp_kernel_op_22 + tmp_kernel_op_21;
             const real_t tmp_kernel_op_26 = rho_dof_2*tmp_kernel_op_24 + rho_dof_3*tmp_kernel_op_2 + rho_dof_4*tmp_kernel_op_25 - rho_dof_5*tmp_kernel_op_2 + tmp_kernel_op_21;
             const real_t tmp_kernel_op_27 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_23 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_26;
             const real_t tmp_kernel_op_28 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_23 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_26;
             const real_t tmp_kernel_op_29 = jac_blending_inv_0_0_q_0*tmp_kernel_op_27 + jac_blending_inv_1_0_q_0*tmp_kernel_op_28;
             const real_t tmp_kernel_op_30 = -tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_moved_constant_2 + jac_blending_inv_1_0_q_0*tmp_moved_constant_5) - tmp_kernel_op_29*tmp_kernel_op_8;
             const real_t tmp_kernel_op_31 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_31*0.16666666666666674;
             const real_t tmp_kernel_op_51 = rho_dof_0*tmp_kernel_op_50 + rho_dof_1*tmp_kernel_op_44 + rho_dof_2*tmp_kernel_op_47 + rho_dof_3*tmp_kernel_op_41 + rho_dof_4*tmp_kernel_op_48 + rho_dof_5*tmp_kernel_op_49;
             const real_t tmp_kernel_op_54 = rho_dof_0*tmp_kernel_op_53;
             const real_t tmp_kernel_op_56 = rho_dof_1*tmp_kernel_op_52 + rho_dof_3*tmp_kernel_op_33 - rho_dof_4*tmp_kernel_op_33 + rho_dof_5*tmp_kernel_op_55 + tmp_kernel_op_54;
             const real_t tmp_kernel_op_59 = rho_dof_2*tmp_kernel_op_57 + rho_dof_3*tmp_kernel_op_35 + rho_dof_4*tmp_kernel_op_58 - rho_dof_5*tmp_kernel_op_35 + tmp_kernel_op_54;
             const real_t tmp_kernel_op_60 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_56 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_59;
             const real_t tmp_kernel_op_61 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_56 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_59;
             const real_t tmp_kernel_op_62 = jac_blending_inv_0_0_q_1*tmp_kernel_op_60 + jac_blending_inv_1_0_q_1*tmp_kernel_op_61;
             const real_t tmp_kernel_op_63 = -tmp_kernel_op_41*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_moved_constant_8 + jac_blending_inv_1_0_q_1*tmp_moved_constant_11);
             const real_t tmp_kernel_op_64 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_65 = tmp_kernel_op_64*0.16666666666666671;
             const real_t tmp_kernel_op_84 = rho_dof_0*tmp_kernel_op_83 + rho_dof_1*tmp_kernel_op_77 + rho_dof_2*tmp_kernel_op_80 + rho_dof_3*tmp_kernel_op_74 + rho_dof_4*tmp_kernel_op_81 + rho_dof_5*tmp_kernel_op_82;
             const real_t tmp_kernel_op_87 = rho_dof_0*tmp_kernel_op_86;
             const real_t tmp_kernel_op_89 = rho_dof_1*tmp_kernel_op_85 + rho_dof_3*tmp_kernel_op_66 - rho_dof_4*tmp_kernel_op_66 + rho_dof_5*tmp_kernel_op_88 + tmp_kernel_op_87;
             const real_t tmp_kernel_op_92 = rho_dof_2*tmp_kernel_op_90 + rho_dof_3*tmp_kernel_op_68 + rho_dof_4*tmp_kernel_op_91 - rho_dof_5*tmp_kernel_op_68 + tmp_kernel_op_87;
             const real_t tmp_kernel_op_93 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_89 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_92;
             const real_t tmp_kernel_op_94 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_89 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_92;
             const real_t tmp_kernel_op_95 = jac_blending_inv_0_0_q_2*tmp_kernel_op_93 + jac_blending_inv_1_0_q_2*tmp_kernel_op_94;
             const real_t tmp_kernel_op_96 = -tmp_kernel_op_74*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_moved_constant_14 + jac_blending_inv_1_0_q_2*tmp_moved_constant_17);
             const real_t tmp_kernel_op_97 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_98 = tmp_kernel_op_97*0.66666666666666674;
             const real_t tmp_kernel_op_99 = jac_blending_inv_0_1_q_0*tmp_kernel_op_27 + jac_blending_inv_1_1_q_0*tmp_kernel_op_28;
             const real_t tmp_kernel_op_100 = -tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_moved_constant_2 + jac_blending_inv_1_1_q_0*tmp_moved_constant_5) - tmp_kernel_op_8*tmp_kernel_op_99;
             const real_t tmp_kernel_op_101 = jac_blending_inv_0_1_q_1*tmp_kernel_op_60 + jac_blending_inv_1_1_q_1*tmp_kernel_op_61;
             const real_t tmp_kernel_op_102 = -tmp_kernel_op_101*tmp_kernel_op_41 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_moved_constant_8 + jac_blending_inv_1_1_q_1*tmp_moved_constant_11);
             const real_t tmp_kernel_op_103 = jac_blending_inv_0_1_q_2*tmp_kernel_op_93 + jac_blending_inv_1_1_q_2*tmp_kernel_op_94;
             const real_t tmp_kernel_op_104 = -tmp_kernel_op_103*tmp_kernel_op_74 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_moved_constant_14 + jac_blending_inv_1_1_q_2*tmp_moved_constant_17);
             const real_t tmp_kernel_op_107 = -tmp_kernel_op_11*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_moved_constant_18 + jac_blending_inv_1_0_q_0*tmp_moved_constant_19);
             const real_t tmp_kernel_op_110 = -tmp_kernel_op_44*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_moved_constant_20 + jac_blending_inv_1_0_q_1*tmp_moved_constant_21);
             const real_t tmp_kernel_op_113 = -tmp_kernel_op_77*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_moved_constant_22 + jac_blending_inv_1_0_q_2*tmp_moved_constant_23);
             const real_t tmp_kernel_op_116 = -tmp_kernel_op_14*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_moved_constant_24 + jac_blending_inv_1_0_q_0*tmp_moved_constant_25);
             const real_t tmp_kernel_op_119 = -tmp_kernel_op_47*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_moved_constant_26 + jac_blending_inv_1_0_q_1*tmp_moved_constant_27);
             const real_t tmp_kernel_op_122 = -tmp_kernel_op_80*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_moved_constant_28 + jac_blending_inv_1_0_q_2*tmp_moved_constant_29);
             const real_t tmp_kernel_op_123 = -tmp_kernel_op_11*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_moved_constant_18 + jac_blending_inv_1_1_q_0*tmp_moved_constant_19);
             const real_t tmp_kernel_op_124 = -tmp_kernel_op_101*tmp_kernel_op_44 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_moved_constant_20 + jac_blending_inv_1_1_q_1*tmp_moved_constant_21);
             const real_t tmp_kernel_op_125 = -tmp_kernel_op_103*tmp_kernel_op_77 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_moved_constant_22 + jac_blending_inv_1_1_q_2*tmp_moved_constant_23);
             const real_t tmp_kernel_op_126 = -tmp_kernel_op_14*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_moved_constant_24 + jac_blending_inv_1_1_q_0*tmp_moved_constant_25);
             const real_t tmp_kernel_op_127 = -tmp_kernel_op_101*tmp_kernel_op_47 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_moved_constant_26 + jac_blending_inv_1_1_q_1*tmp_moved_constant_27);
             const real_t tmp_kernel_op_128 = -tmp_kernel_op_103*tmp_kernel_op_80 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_moved_constant_28 + jac_blending_inv_1_1_q_2*tmp_moved_constant_29);
             const real_t tmp_kernel_op_131 = -tmp_kernel_op_15*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_moved_constant_30 + jac_blending_inv_1_1_q_0*tmp_moved_constant_31);
             const real_t tmp_kernel_op_134 = -tmp_kernel_op_101*tmp_kernel_op_48 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_moved_constant_32 + jac_blending_inv_1_1_q_1*tmp_moved_constant_33);
             const real_t tmp_kernel_op_137 = -tmp_kernel_op_103*tmp_kernel_op_81 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_moved_constant_34 + jac_blending_inv_1_1_q_2*tmp_moved_constant_35);
             const real_t tmp_kernel_op_140 = -tmp_kernel_op_16*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_moved_constant_36 + jac_blending_inv_1_1_q_0*tmp_moved_constant_37);
             const real_t tmp_kernel_op_143 = -tmp_kernel_op_101*tmp_kernel_op_49 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_moved_constant_38 + jac_blending_inv_1_1_q_1*tmp_moved_constant_39);
             const real_t tmp_kernel_op_146 = -tmp_kernel_op_103*tmp_kernel_op_82 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_moved_constant_40 + jac_blending_inv_1_1_q_2*tmp_moved_constant_41);
             const real_t tmp_kernel_op_147 = -tmp_kernel_op_15*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_moved_constant_30 + jac_blending_inv_1_0_q_0*tmp_moved_constant_31);
             const real_t tmp_kernel_op_148 = -tmp_kernel_op_48*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_moved_constant_32 + jac_blending_inv_1_0_q_1*tmp_moved_constant_33);
             const real_t tmp_kernel_op_149 = -tmp_kernel_op_81*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_moved_constant_34 + jac_blending_inv_1_0_q_2*tmp_moved_constant_35);
             const real_t tmp_kernel_op_150 = -tmp_kernel_op_16*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_moved_constant_36 + jac_blending_inv_1_0_q_0*tmp_moved_constant_37);
             const real_t tmp_kernel_op_151 = -tmp_kernel_op_49*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_moved_constant_38 + jac_blending_inv_1_0_q_1*tmp_moved_constant_39);
             const real_t tmp_kernel_op_152 = -tmp_kernel_op_82*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_moved_constant_40 + jac_blending_inv_1_0_q_2*tmp_moved_constant_41);
             const real_t tmp_kernel_op_155 = -tmp_kernel_op_17*tmp_kernel_op_29 - tmp_kernel_op_18*(jac_blending_inv_0_0_q_0*tmp_moved_constant_42 + jac_blending_inv_1_0_q_0*tmp_moved_constant_43);
             const real_t tmp_kernel_op_158 = -tmp_kernel_op_50*tmp_kernel_op_62 - tmp_kernel_op_51*(jac_blending_inv_0_0_q_1*tmp_moved_constant_44 + jac_blending_inv_1_0_q_1*tmp_moved_constant_45);
             const real_t tmp_kernel_op_161 = -tmp_kernel_op_83*tmp_kernel_op_95 - tmp_kernel_op_84*(jac_blending_inv_0_0_q_2*tmp_moved_constant_46 + jac_blending_inv_1_0_q_2*tmp_moved_constant_47);
             const real_t tmp_kernel_op_162 = -tmp_kernel_op_17*tmp_kernel_op_99 - tmp_kernel_op_18*(jac_blending_inv_0_1_q_0*tmp_moved_constant_42 + jac_blending_inv_1_1_q_0*tmp_moved_constant_43);
             const real_t tmp_kernel_op_163 = -tmp_kernel_op_101*tmp_kernel_op_50 - tmp_kernel_op_51*(jac_blending_inv_0_1_q_1*tmp_moved_constant_44 + jac_blending_inv_1_1_q_1*tmp_moved_constant_45);
             const real_t tmp_kernel_op_164 = -tmp_kernel_op_103*tmp_kernel_op_83 - tmp_kernel_op_84*(jac_blending_inv_0_1_q_2*tmp_moved_constant_46 + jac_blending_inv_1_1_q_2*tmp_moved_constant_47);
             const real_t tmp_kernel_op_165 = tmp_kernel_op_31*0.16666666666666666;
             const real_t tmp_kernel_op_166 = tmp_kernel_op_64*0.66666666666666663;
             const real_t tmp_kernel_op_167 = tmp_kernel_op_97*0.16666666666666666;
             const real_t tmp_kernel_op_168 = tmp_kernel_op_31*0.66666666666666663;
             const real_t tmp_kernel_op_169 = tmp_kernel_op_64*0.16666666666666666;
             const real_t tmp_kernel_op_170 = tmp_kernel_op_97*0.16666666666666666;
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_155*tmp_kernel_op_32 + tmp_kernel_op_158*tmp_kernel_op_65 + tmp_kernel_op_161*tmp_kernel_op_98) + src_dof_1*(tmp_kernel_op_107*tmp_kernel_op_32 + tmp_kernel_op_110*tmp_kernel_op_65 + tmp_kernel_op_113*tmp_kernel_op_98) + src_dof_10*(tmp_kernel_op_131*tmp_kernel_op_32 + tmp_kernel_op_134*tmp_kernel_op_65 + tmp_kernel_op_137*tmp_kernel_op_98) + src_dof_11*(tmp_kernel_op_140*tmp_kernel_op_32 + tmp_kernel_op_143*tmp_kernel_op_65 + tmp_kernel_op_146*tmp_kernel_op_98) + src_dof_2*(tmp_kernel_op_116*tmp_kernel_op_32 + tmp_kernel_op_119*tmp_kernel_op_65 + tmp_kernel_op_122*tmp_kernel_op_98) + src_dof_3*(tmp_kernel_op_30*tmp_kernel_op_32 + tmp_kernel_op_63*tmp_kernel_op_65 + tmp_kernel_op_96*tmp_kernel_op_98) + src_dof_4*(tmp_kernel_op_147*tmp_kernel_op_32 + tmp_kernel_op_148*tmp_kernel_op_65 + tmp_kernel_op_149*tmp_kernel_op_98) + src_dof_5*(tmp_kernel_op_150*tmp_kernel_op_32 + tmp_kernel_op_151*tmp_kernel_op_65 + tmp_kernel_op_152*tmp_kernel_op_98) + src_dof_6*(tmp_kernel_op_162*tmp_kernel_op_32 + tmp_kernel_op_163*tmp_kernel_op_65 + tmp_kernel_op_164*tmp_kernel_op_98) + src_dof_7*(tmp_kernel_op_123*tmp_kernel_op_32 + tmp_kernel_op_124*tmp_kernel_op_65 + tmp_kernel_op_125*tmp_kernel_op_98) + src_dof_8*(tmp_kernel_op_126*tmp_kernel_op_32 + tmp_kernel_op_127*tmp_kernel_op_65 + tmp_kernel_op_128*tmp_kernel_op_98) + src_dof_9*(tmp_kernel_op_100*tmp_kernel_op_32 + tmp_kernel_op_102*tmp_kernel_op_65 + tmp_kernel_op_104*tmp_kernel_op_98);
             const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_155*tmp_kernel_op_165 + tmp_kernel_op_158*tmp_kernel_op_166 + tmp_kernel_op_161*tmp_kernel_op_167) + src_dof_1*(tmp_kernel_op_107*tmp_kernel_op_165 + tmp_kernel_op_110*tmp_kernel_op_166 + tmp_kernel_op_113*tmp_kernel_op_167) + src_dof_10*(tmp_kernel_op_131*tmp_kernel_op_165 + tmp_kernel_op_134*tmp_kernel_op_166 + tmp_kernel_op_137*tmp_kernel_op_167) + src_dof_11*(tmp_kernel_op_140*tmp_kernel_op_165 + tmp_kernel_op_143*tmp_kernel_op_166 + tmp_kernel_op_146*tmp_kernel_op_167) + src_dof_2*(tmp_kernel_op_116*tmp_kernel_op_165 + tmp_kernel_op_119*tmp_kernel_op_166 + tmp_kernel_op_122*tmp_kernel_op_167) + src_dof_3*(tmp_kernel_op_165*tmp_kernel_op_30 + tmp_kernel_op_166*tmp_kernel_op_63 + tmp_kernel_op_167*tmp_kernel_op_96) + src_dof_4*(tmp_kernel_op_147*tmp_kernel_op_165 + tmp_kernel_op_148*tmp_kernel_op_166 + tmp_kernel_op_149*tmp_kernel_op_167) + src_dof_5*(tmp_kernel_op_150*tmp_kernel_op_165 + tmp_kernel_op_151*tmp_kernel_op_166 + tmp_kernel_op_152*tmp_kernel_op_167) + src_dof_6*(tmp_kernel_op_162*tmp_kernel_op_165 + tmp_kernel_op_163*tmp_kernel_op_166 + tmp_kernel_op_164*tmp_kernel_op_167) + src_dof_7*(tmp_kernel_op_123*tmp_kernel_op_165 + tmp_kernel_op_124*tmp_kernel_op_166 + tmp_kernel_op_125*tmp_kernel_op_167) + src_dof_8*(tmp_kernel_op_126*tmp_kernel_op_165 + tmp_kernel_op_127*tmp_kernel_op_166 + tmp_kernel_op_128*tmp_kernel_op_167) + src_dof_9*(tmp_kernel_op_100*tmp_kernel_op_165 + tmp_kernel_op_102*tmp_kernel_op_166 + tmp_kernel_op_104*tmp_kernel_op_167);
             const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_155*tmp_kernel_op_168 + tmp_kernel_op_158*tmp_kernel_op_169 + tmp_kernel_op_161*tmp_kernel_op_170) + src_dof_1*(tmp_kernel_op_107*tmp_kernel_op_168 + tmp_kernel_op_110*tmp_kernel_op_169 + tmp_kernel_op_113*tmp_kernel_op_170) + src_dof_10*(tmp_kernel_op_131*tmp_kernel_op_168 + tmp_kernel_op_134*tmp_kernel_op_169 + tmp_kernel_op_137*tmp_kernel_op_170) + src_dof_11*(tmp_kernel_op_140*tmp_kernel_op_168 + tmp_kernel_op_143*tmp_kernel_op_169 + tmp_kernel_op_146*tmp_kernel_op_170) + src_dof_2*(tmp_kernel_op_116*tmp_kernel_op_168 + tmp_kernel_op_119*tmp_kernel_op_169 + tmp_kernel_op_122*tmp_kernel_op_170) + src_dof_3*(tmp_kernel_op_168*tmp_kernel_op_30 + tmp_kernel_op_169*tmp_kernel_op_63 + tmp_kernel_op_170*tmp_kernel_op_96) + src_dof_4*(tmp_kernel_op_147*tmp_kernel_op_168 + tmp_kernel_op_148*tmp_kernel_op_169 + tmp_kernel_op_149*tmp_kernel_op_170) + src_dof_5*(tmp_kernel_op_150*tmp_kernel_op_168 + tmp_kernel_op_151*tmp_kernel_op_169 + tmp_kernel_op_152*tmp_kernel_op_170) + src_dof_6*(tmp_kernel_op_162*tmp_kernel_op_168 + tmp_kernel_op_163*tmp_kernel_op_169 + tmp_kernel_op_164*tmp_kernel_op_170) + src_dof_7*(tmp_kernel_op_123*tmp_kernel_op_168 + tmp_kernel_op_124*tmp_kernel_op_169 + tmp_kernel_op_125*tmp_kernel_op_170) + src_dof_8*(tmp_kernel_op_126*tmp_kernel_op_168 + tmp_kernel_op_127*tmp_kernel_op_169 + tmp_kernel_op_128*tmp_kernel_op_170) + src_dof_9*(tmp_kernel_op_100*tmp_kernel_op_168 + tmp_kernel_op_102*tmp_kernel_op_169 + tmp_kernel_op_104*tmp_kernel_op_170);
             _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0*operatorScaling + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1*operatorScaling + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2*operatorScaling + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
