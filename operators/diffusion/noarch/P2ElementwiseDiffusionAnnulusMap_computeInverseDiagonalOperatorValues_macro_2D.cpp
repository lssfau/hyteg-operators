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
* The entire file was generated with the HyTeG form generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/



























#include "../P2ElementwiseDiffusionAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDiffusionAnnulusMap::computeInverseDiagonalOperatorValues_macro_2D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t tmp_kernel_op_0 = rayVertex_1 - thrVertex_1;
       const real_t tmp_kernel_op_1 = -tmp_kernel_op_0;
       const real_t tmp_kernel_op_15 = rayVertex_0 - refVertex_0;
       const real_t tmp_kernel_op_16 = rayVertex_0 - thrVertex_0;
       const real_t tmp_kernel_op_17 = -tmp_kernel_op_16;
       const real_t tmp_kernel_op_18 = rayVertex_1 - refVertex_1;
       const real_t tmp_kernel_op_19 = radRayVertex - radRefVertex;
       const real_t tmp_kernel_op_20 = -tmp_kernel_op_19*1.0 / (-tmp_kernel_op_1*tmp_kernel_op_15 + tmp_kernel_op_17*tmp_kernel_op_18);
       const real_t tmp_kernel_op_21 = tmp_kernel_op_20*1.0;
       const real_t tmp_kernel_op_25 = -rayVertex_1;
       const real_t tmp_kernel_op_26 = -rayVertex_0;
       const real_t tmp_kernel_op_35 = 1.3333333333333333;
       const real_t tmp_kernel_op_36 = 1.3333333333333333;
       const real_t tmp_kernel_op_37 = tmp_kernel_op_35 + tmp_kernel_op_36 - 3.0;
       const real_t tmp_kernel_op_48 = tmp_kernel_op_19*1.0 / (tmp_kernel_op_0*tmp_kernel_op_15 - tmp_kernel_op_16*tmp_kernel_op_18);
       const real_t tmp_kernel_op_49 = tmp_kernel_op_48*1.0;
       const real_t tmp_kernel_op_75 = 0.80000000000000004;
       const real_t tmp_kernel_op_76 = 2.3999999999999999;
       const real_t tmp_kernel_op_77 = tmp_kernel_op_75 + tmp_kernel_op_76 - 3.0;
       const real_t tmp_kernel_op_111 = 2.3999999999999999;
       const real_t tmp_kernel_op_112 = 0.80000000000000004;
       const real_t tmp_kernel_op_113 = tmp_kernel_op_111 + tmp_kernel_op_112 - 3.0;
       const real_t tmp_kernel_op_147 = 0.80000000000000004;
       const real_t tmp_kernel_op_148 = 0.80000000000000004;
       const real_t tmp_kernel_op_149 = tmp_kernel_op_147 + tmp_kernel_op_148 - 3.0;
       const real_t tmp_kernel_op_191 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_36;
       const real_t tmp_kernel_op_192 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_35;
       const real_t tmp_kernel_op_194 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_36;
       const real_t tmp_kernel_op_195 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_35;
       const real_t tmp_kernel_op_197 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_76;
       const real_t tmp_kernel_op_198 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_75;
       const real_t tmp_kernel_op_200 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_76;
       const real_t tmp_kernel_op_201 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_75;
       const real_t tmp_kernel_op_203 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_112;
       const real_t tmp_kernel_op_204 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_111;
       const real_t tmp_kernel_op_206 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_112;
       const real_t tmp_kernel_op_207 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_111;
       const real_t tmp_kernel_op_209 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_148;
       const real_t tmp_kernel_op_210 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_147;
       const real_t tmp_kernel_op_212 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_148;
       const real_t tmp_kernel_op_213 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_147;
       const real_t tmp_kernel_op_215 = -tmp_kernel_op_35 + 1.3333333333333335;
       const real_t tmp_kernel_op_218 = -tmp_kernel_op_75 - 0.79999999999999982;
       const real_t tmp_kernel_op_221 = -tmp_kernel_op_111 + 2.3999999999999999;
       const real_t tmp_kernel_op_224 = -tmp_kernel_op_147 + 2.3999999999999999;
       const real_t tmp_kernel_op_227 = -tmp_kernel_op_36 + 1.3333333333333335;
       const real_t tmp_kernel_op_230 = -tmp_kernel_op_76 + 2.3999999999999999;
       const real_t tmp_kernel_op_233 = -tmp_kernel_op_112 - 0.79999999999999982;
       const real_t tmp_kernel_op_236 = -tmp_kernel_op_148 + 2.3999999999999999;
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
             const real_t tmp_kernel_op_2 = p_affine_0_0 - p_affine_1_0;
             const real_t tmp_kernel_op_3 = -tmp_kernel_op_2;
             const real_t tmp_kernel_op_4 = p_affine_0_0 - p_affine_2_0;
             const real_t tmp_kernel_op_5 = -tmp_kernel_op_4;
             const real_t tmp_kernel_op_6 = p_affine_0_0 + tmp_kernel_op_3*0.33333333333333331 + tmp_kernel_op_5*0.33333333333333331;
             const real_t tmp_kernel_op_7 = (tmp_kernel_op_6*tmp_kernel_op_6);
             const real_t tmp_kernel_op_8 = p_affine_0_1 - p_affine_1_1;
             const real_t tmp_kernel_op_9 = -tmp_kernel_op_8;
             const real_t tmp_kernel_op_10 = p_affine_0_1 - p_affine_2_1;
             const real_t tmp_kernel_op_11 = -tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = p_affine_0_1 + tmp_kernel_op_11*0.33333333333333331 + tmp_kernel_op_9*0.33333333333333331;
             const real_t tmp_kernel_op_13 = (tmp_kernel_op_12*tmp_kernel_op_12);
             const real_t tmp_kernel_op_14 = tmp_kernel_op_13 + tmp_kernel_op_7;
             const real_t tmp_kernel_op_22 = pow(tmp_kernel_op_14, -0.50000000000000000)*tmp_kernel_op_21;
             const real_t tmp_kernel_op_23 = tmp_kernel_op_22*tmp_kernel_op_6;
             const real_t tmp_kernel_op_24 = pow(tmp_kernel_op_14, -1.5000000000000000);
             const real_t tmp_kernel_op_27 = radRayVertex + tmp_kernel_op_20*(tmp_kernel_op_1*(tmp_kernel_op_26 + tmp_kernel_op_6) - tmp_kernel_op_17*(tmp_kernel_op_12 + tmp_kernel_op_25));
             const real_t tmp_kernel_op_28 = tmp_kernel_op_24*tmp_kernel_op_27*1.0;
             const real_t tmp_kernel_op_29 = tmp_kernel_op_1*tmp_kernel_op_23 + tmp_kernel_op_13*tmp_kernel_op_28;
             const real_t tmp_kernel_op_30 = tmp_kernel_op_12*tmp_kernel_op_22;
             const real_t tmp_kernel_op_31 = -tmp_kernel_op_17*tmp_kernel_op_30 + tmp_kernel_op_24*tmp_kernel_op_27*tmp_kernel_op_7*1.0;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_12*tmp_kernel_op_24*tmp_kernel_op_27*tmp_kernel_op_6*1.0 + tmp_kernel_op_17*tmp_kernel_op_23;
             const real_t tmp_kernel_op_33 = tmp_kernel_op_1*tmp_kernel_op_30 - tmp_kernel_op_12*tmp_kernel_op_28*tmp_kernel_op_6;
             const real_t tmp_kernel_op_34 = 1.0 / (tmp_kernel_op_29*tmp_kernel_op_31 + tmp_kernel_op_32*tmp_kernel_op_33);
             const real_t tmp_kernel_op_38 = tmp_kernel_op_34*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_37 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_37);
             const real_t tmp_kernel_op_39 = tmp_kernel_op_34*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_37 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_37);
             const real_t tmp_kernel_op_40 = -tmp_kernel_op_33;
             const real_t tmp_kernel_op_41 = -p_affine_0_0;
             const real_t tmp_kernel_op_42 = tmp_kernel_op_2*0.33333333333333331 + tmp_kernel_op_4*0.33333333333333331 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_43 = (tmp_kernel_op_42*tmp_kernel_op_42);
             const real_t tmp_kernel_op_44 = -p_affine_0_1;
             const real_t tmp_kernel_op_45 = tmp_kernel_op_10*0.33333333333333331 + tmp_kernel_op_44 + tmp_kernel_op_8*0.33333333333333331;
             const real_t tmp_kernel_op_46 = (tmp_kernel_op_45*tmp_kernel_op_45);
             const real_t tmp_kernel_op_47 = tmp_kernel_op_43 + tmp_kernel_op_46;
             const real_t tmp_kernel_op_50 = pow(tmp_kernel_op_47, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_42*tmp_kernel_op_50;
             const real_t tmp_kernel_op_52 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_42) + tmp_kernel_op_16*(rayVertex_1 + tmp_kernel_op_45);
             const real_t tmp_kernel_op_53 = pow(tmp_kernel_op_47, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_54 = tmp_kernel_op_53*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_52);
             const real_t tmp_kernel_op_55 = tmp_kernel_op_45*tmp_kernel_op_50;
             const real_t tmp_kernel_op_56 = tmp_kernel_op_53*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_52);
             const real_t tmp_kernel_op_57 = tmp_kernel_op_42*tmp_kernel_op_45;
             const real_t tmp_kernel_op_58 = abs_det_jac_affine_GRAY*-0.28125*abs((tmp_kernel_op_0*tmp_kernel_op_51 - tmp_kernel_op_46*tmp_kernel_op_54)*(tmp_kernel_op_16*tmp_kernel_op_55 + tmp_kernel_op_43*tmp_kernel_op_56) - (tmp_kernel_op_0*tmp_kernel_op_55 + tmp_kernel_op_54*tmp_kernel_op_57)*(tmp_kernel_op_16*tmp_kernel_op_51 - tmp_kernel_op_56*tmp_kernel_op_57));
             const real_t tmp_kernel_op_59 = p_affine_0_0 + tmp_kernel_op_3*0.20000000000000001 + tmp_kernel_op_5*0.59999999999999998;
             const real_t tmp_kernel_op_60 = (tmp_kernel_op_59*tmp_kernel_op_59);
             const real_t tmp_kernel_op_61 = p_affine_0_1 + tmp_kernel_op_11*0.59999999999999998 + tmp_kernel_op_9*0.20000000000000001;
             const real_t tmp_kernel_op_62 = (tmp_kernel_op_61*tmp_kernel_op_61);
             const real_t tmp_kernel_op_63 = tmp_kernel_op_60 + tmp_kernel_op_62;
             const real_t tmp_kernel_op_64 = tmp_kernel_op_21*pow(tmp_kernel_op_63, -0.50000000000000000);
             const real_t tmp_kernel_op_65 = tmp_kernel_op_59*tmp_kernel_op_64;
             const real_t tmp_kernel_op_66 = pow(tmp_kernel_op_63, -1.5000000000000000);
             const real_t tmp_kernel_op_67 = radRayVertex + tmp_kernel_op_20*(tmp_kernel_op_1*(tmp_kernel_op_26 + tmp_kernel_op_59) - tmp_kernel_op_17*(tmp_kernel_op_25 + tmp_kernel_op_61));
             const real_t tmp_kernel_op_68 = tmp_kernel_op_66*tmp_kernel_op_67*1.0;
             const real_t tmp_kernel_op_69 = tmp_kernel_op_1*tmp_kernel_op_65 + tmp_kernel_op_62*tmp_kernel_op_68;
             const real_t tmp_kernel_op_70 = tmp_kernel_op_61*tmp_kernel_op_64;
             const real_t tmp_kernel_op_71 = -tmp_kernel_op_17*tmp_kernel_op_70 + tmp_kernel_op_60*tmp_kernel_op_66*tmp_kernel_op_67*1.0;
             const real_t tmp_kernel_op_72 = tmp_kernel_op_17*tmp_kernel_op_65 + tmp_kernel_op_59*tmp_kernel_op_61*tmp_kernel_op_66*tmp_kernel_op_67*1.0;
             const real_t tmp_kernel_op_73 = tmp_kernel_op_1*tmp_kernel_op_70 - tmp_kernel_op_59*tmp_kernel_op_61*tmp_kernel_op_68;
             const real_t tmp_kernel_op_74 = 1.0 / (tmp_kernel_op_69*tmp_kernel_op_71 + tmp_kernel_op_72*tmp_kernel_op_73);
             const real_t tmp_kernel_op_78 = tmp_kernel_op_74*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_77 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_77);
             const real_t tmp_kernel_op_79 = tmp_kernel_op_74*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_77 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_77);
             const real_t tmp_kernel_op_80 = -tmp_kernel_op_73;
             const real_t tmp_kernel_op_81 = tmp_kernel_op_2*0.20000000000000001 + tmp_kernel_op_4*0.59999999999999998 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_82 = (tmp_kernel_op_81*tmp_kernel_op_81);
             const real_t tmp_kernel_op_83 = tmp_kernel_op_10*0.59999999999999998 + tmp_kernel_op_44 + tmp_kernel_op_8*0.20000000000000001;
             const real_t tmp_kernel_op_84 = (tmp_kernel_op_83*tmp_kernel_op_83);
             const real_t tmp_kernel_op_85 = tmp_kernel_op_82 + tmp_kernel_op_84;
             const real_t tmp_kernel_op_86 = tmp_kernel_op_49*pow(tmp_kernel_op_85, -0.50000000000000000);
             const real_t tmp_kernel_op_87 = tmp_kernel_op_81*tmp_kernel_op_86;
             const real_t tmp_kernel_op_88 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_81) + tmp_kernel_op_16*(rayVertex_1 + tmp_kernel_op_83);
             const real_t tmp_kernel_op_89 = pow(tmp_kernel_op_85, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_90 = tmp_kernel_op_89*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_88);
             const real_t tmp_kernel_op_91 = tmp_kernel_op_83*tmp_kernel_op_86;
             const real_t tmp_kernel_op_92 = tmp_kernel_op_89*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_88);
             const real_t tmp_kernel_op_93 = tmp_kernel_op_81*tmp_kernel_op_83;
             const real_t tmp_kernel_op_94 = abs_det_jac_affine_GRAY*0.26041666666666669*abs((tmp_kernel_op_0*tmp_kernel_op_87 - tmp_kernel_op_84*tmp_kernel_op_90)*(tmp_kernel_op_16*tmp_kernel_op_91 + tmp_kernel_op_82*tmp_kernel_op_92) - (tmp_kernel_op_0*tmp_kernel_op_91 + tmp_kernel_op_90*tmp_kernel_op_93)*(tmp_kernel_op_16*tmp_kernel_op_87 - tmp_kernel_op_92*tmp_kernel_op_93));
             const real_t tmp_kernel_op_95 = p_affine_0_0 + tmp_kernel_op_3*0.59999999999999998 + tmp_kernel_op_5*0.20000000000000001;
             const real_t tmp_kernel_op_96 = (tmp_kernel_op_95*tmp_kernel_op_95);
             const real_t tmp_kernel_op_97 = p_affine_0_1 + tmp_kernel_op_11*0.20000000000000001 + tmp_kernel_op_9*0.59999999999999998;
             const real_t tmp_kernel_op_98 = (tmp_kernel_op_97*tmp_kernel_op_97);
             const real_t tmp_kernel_op_99 = tmp_kernel_op_96 + tmp_kernel_op_98;
             const real_t tmp_kernel_op_100 = tmp_kernel_op_21*pow(tmp_kernel_op_99, -0.50000000000000000);
             const real_t tmp_kernel_op_101 = tmp_kernel_op_100*tmp_kernel_op_95;
             const real_t tmp_kernel_op_102 = pow(tmp_kernel_op_99, -1.5000000000000000);
             const real_t tmp_kernel_op_103 = radRayVertex + tmp_kernel_op_20*(tmp_kernel_op_1*(tmp_kernel_op_26 + tmp_kernel_op_95) - tmp_kernel_op_17*(tmp_kernel_op_25 + tmp_kernel_op_97));
             const real_t tmp_kernel_op_104 = tmp_kernel_op_102*tmp_kernel_op_103*1.0;
             const real_t tmp_kernel_op_105 = tmp_kernel_op_1*tmp_kernel_op_101 + tmp_kernel_op_104*tmp_kernel_op_98;
             const real_t tmp_kernel_op_106 = tmp_kernel_op_100*tmp_kernel_op_97;
             const real_t tmp_kernel_op_107 = tmp_kernel_op_102*tmp_kernel_op_103*tmp_kernel_op_96*1.0 - tmp_kernel_op_106*tmp_kernel_op_17;
             const real_t tmp_kernel_op_108 = tmp_kernel_op_101*tmp_kernel_op_17 + tmp_kernel_op_102*tmp_kernel_op_103*tmp_kernel_op_95*tmp_kernel_op_97*1.0;
             const real_t tmp_kernel_op_109 = tmp_kernel_op_1*tmp_kernel_op_106 - tmp_kernel_op_104*tmp_kernel_op_95*tmp_kernel_op_97;
             const real_t tmp_kernel_op_110 = 1.0 / (tmp_kernel_op_105*tmp_kernel_op_107 + tmp_kernel_op_108*tmp_kernel_op_109);
             const real_t tmp_kernel_op_114 = tmp_kernel_op_110*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_113 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_113);
             const real_t tmp_kernel_op_115 = tmp_kernel_op_110*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_113 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_113);
             const real_t tmp_kernel_op_116 = -tmp_kernel_op_109;
             const real_t tmp_kernel_op_117 = tmp_kernel_op_2*0.59999999999999998 + tmp_kernel_op_4*0.20000000000000001 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_118 = (tmp_kernel_op_117*tmp_kernel_op_117);
             const real_t tmp_kernel_op_119 = tmp_kernel_op_10*0.20000000000000001 + tmp_kernel_op_44 + tmp_kernel_op_8*0.59999999999999998;
             const real_t tmp_kernel_op_120 = (tmp_kernel_op_119*tmp_kernel_op_119);
             const real_t tmp_kernel_op_121 = tmp_kernel_op_118 + tmp_kernel_op_120;
             const real_t tmp_kernel_op_122 = pow(tmp_kernel_op_121, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_123 = tmp_kernel_op_117*tmp_kernel_op_122;
             const real_t tmp_kernel_op_124 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_117) + tmp_kernel_op_16*(rayVertex_1 + tmp_kernel_op_119);
             const real_t tmp_kernel_op_125 = pow(tmp_kernel_op_121, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_126 = tmp_kernel_op_125*(radRayVertex + tmp_kernel_op_124*tmp_kernel_op_48);
             const real_t tmp_kernel_op_127 = tmp_kernel_op_119*tmp_kernel_op_122;
             const real_t tmp_kernel_op_128 = tmp_kernel_op_125*(radRayVertex + tmp_kernel_op_124*tmp_kernel_op_48);
             const real_t tmp_kernel_op_129 = tmp_kernel_op_117*tmp_kernel_op_119;
             const real_t tmp_kernel_op_130 = abs_det_jac_affine_GRAY*0.26041666666666669*abs((tmp_kernel_op_0*tmp_kernel_op_123 - tmp_kernel_op_120*tmp_kernel_op_126)*(tmp_kernel_op_118*tmp_kernel_op_128 + tmp_kernel_op_127*tmp_kernel_op_16) - (tmp_kernel_op_0*tmp_kernel_op_127 + tmp_kernel_op_126*tmp_kernel_op_129)*(tmp_kernel_op_123*tmp_kernel_op_16 - tmp_kernel_op_128*tmp_kernel_op_129));
             const real_t tmp_kernel_op_131 = p_affine_0_0 + tmp_kernel_op_3*0.20000000000000001 + tmp_kernel_op_5*0.20000000000000001;
             const real_t tmp_kernel_op_132 = (tmp_kernel_op_131*tmp_kernel_op_131);
             const real_t tmp_kernel_op_133 = p_affine_0_1 + tmp_kernel_op_11*0.20000000000000001 + tmp_kernel_op_9*0.20000000000000001;
             const real_t tmp_kernel_op_134 = (tmp_kernel_op_133*tmp_kernel_op_133);
             const real_t tmp_kernel_op_135 = tmp_kernel_op_132 + tmp_kernel_op_134;
             const real_t tmp_kernel_op_136 = pow(tmp_kernel_op_135, -0.50000000000000000)*tmp_kernel_op_21;
             const real_t tmp_kernel_op_137 = tmp_kernel_op_131*tmp_kernel_op_136;
             const real_t tmp_kernel_op_138 = pow(tmp_kernel_op_135, -1.5000000000000000);
             const real_t tmp_kernel_op_139 = radRayVertex + tmp_kernel_op_20*(tmp_kernel_op_1*(tmp_kernel_op_131 + tmp_kernel_op_26) - tmp_kernel_op_17*(tmp_kernel_op_133 + tmp_kernel_op_25));
             const real_t tmp_kernel_op_140 = tmp_kernel_op_138*tmp_kernel_op_139*1.0;
             const real_t tmp_kernel_op_141 = tmp_kernel_op_1*tmp_kernel_op_137 + tmp_kernel_op_134*tmp_kernel_op_140;
             const real_t tmp_kernel_op_142 = tmp_kernel_op_133*tmp_kernel_op_136;
             const real_t tmp_kernel_op_143 = tmp_kernel_op_132*tmp_kernel_op_138*tmp_kernel_op_139*1.0 - tmp_kernel_op_142*tmp_kernel_op_17;
             const real_t tmp_kernel_op_144 = tmp_kernel_op_131*tmp_kernel_op_133*tmp_kernel_op_138*tmp_kernel_op_139*1.0 + tmp_kernel_op_137*tmp_kernel_op_17;
             const real_t tmp_kernel_op_145 = tmp_kernel_op_1*tmp_kernel_op_142 - tmp_kernel_op_131*tmp_kernel_op_133*tmp_kernel_op_140;
             const real_t tmp_kernel_op_146 = 1.0 / (tmp_kernel_op_141*tmp_kernel_op_143 + tmp_kernel_op_144*tmp_kernel_op_145);
             const real_t tmp_kernel_op_150 = tmp_kernel_op_146*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_149 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_149);
             const real_t tmp_kernel_op_151 = tmp_kernel_op_146*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_149 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_149);
             const real_t tmp_kernel_op_152 = -tmp_kernel_op_145;
             const real_t tmp_kernel_op_153 = tmp_kernel_op_2*0.20000000000000001 + tmp_kernel_op_4*0.20000000000000001 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_154 = (tmp_kernel_op_153*tmp_kernel_op_153);
             const real_t tmp_kernel_op_155 = tmp_kernel_op_10*0.20000000000000001 + tmp_kernel_op_44 + tmp_kernel_op_8*0.20000000000000001;
             const real_t tmp_kernel_op_156 = (tmp_kernel_op_155*tmp_kernel_op_155);
             const real_t tmp_kernel_op_157 = tmp_kernel_op_154 + tmp_kernel_op_156;
             const real_t tmp_kernel_op_158 = pow(tmp_kernel_op_157, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_159 = tmp_kernel_op_153*tmp_kernel_op_158;
             const real_t tmp_kernel_op_160 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_153) + tmp_kernel_op_16*(rayVertex_1 + tmp_kernel_op_155);
             const real_t tmp_kernel_op_161 = pow(tmp_kernel_op_157, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_162 = tmp_kernel_op_161*(radRayVertex + tmp_kernel_op_160*tmp_kernel_op_48);
             const real_t tmp_kernel_op_163 = tmp_kernel_op_155*tmp_kernel_op_158;
             const real_t tmp_kernel_op_164 = tmp_kernel_op_161*(radRayVertex + tmp_kernel_op_160*tmp_kernel_op_48);
             const real_t tmp_kernel_op_165 = tmp_kernel_op_153*tmp_kernel_op_155;
             const real_t tmp_kernel_op_166 = abs_det_jac_affine_GRAY*0.26041666666666669*abs((tmp_kernel_op_0*tmp_kernel_op_159 - tmp_kernel_op_156*tmp_kernel_op_162)*(tmp_kernel_op_154*tmp_kernel_op_164 + tmp_kernel_op_16*tmp_kernel_op_163) - (tmp_kernel_op_0*tmp_kernel_op_163 + tmp_kernel_op_162*tmp_kernel_op_165)*(tmp_kernel_op_159*tmp_kernel_op_16 - tmp_kernel_op_164*tmp_kernel_op_165));
             const real_t tmp_kernel_op_167 = tmp_kernel_op_34*(tmp_kernel_op_35 - 1.0);
             const real_t tmp_kernel_op_168 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_167;
             const real_t tmp_kernel_op_169 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_167;
             const real_t tmp_kernel_op_170 = tmp_kernel_op_74*(tmp_kernel_op_75 - 1.0);
             const real_t tmp_kernel_op_171 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_170;
             const real_t tmp_kernel_op_172 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_170;
             const real_t tmp_kernel_op_173 = tmp_kernel_op_110*(tmp_kernel_op_111 - 1.0);
             const real_t tmp_kernel_op_174 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_173;
             const real_t tmp_kernel_op_175 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_173;
             const real_t tmp_kernel_op_176 = tmp_kernel_op_146*(tmp_kernel_op_147 - 1.0);
             const real_t tmp_kernel_op_177 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_176;
             const real_t tmp_kernel_op_178 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_176;
             const real_t tmp_kernel_op_179 = tmp_kernel_op_34*(tmp_kernel_op_36 - 1.0);
             const real_t tmp_kernel_op_180 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_179;
             const real_t tmp_kernel_op_181 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_179;
             const real_t tmp_kernel_op_182 = tmp_kernel_op_74*(tmp_kernel_op_76 - 1.0);
             const real_t tmp_kernel_op_183 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_182;
             const real_t tmp_kernel_op_184 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_182;
             const real_t tmp_kernel_op_185 = tmp_kernel_op_110*(tmp_kernel_op_112 - 1.0);
             const real_t tmp_kernel_op_186 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_185;
             const real_t tmp_kernel_op_187 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_185;
             const real_t tmp_kernel_op_188 = tmp_kernel_op_146*(tmp_kernel_op_148 - 1.0);
             const real_t tmp_kernel_op_189 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_188;
             const real_t tmp_kernel_op_190 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_188;
             const real_t tmp_kernel_op_193 = tmp_kernel_op_34*(tmp_kernel_op_191 + tmp_kernel_op_192);
             const real_t tmp_kernel_op_196 = tmp_kernel_op_34*(tmp_kernel_op_194 + tmp_kernel_op_195);
             const real_t tmp_kernel_op_199 = tmp_kernel_op_74*(tmp_kernel_op_197 + tmp_kernel_op_198);
             const real_t tmp_kernel_op_202 = tmp_kernel_op_74*(tmp_kernel_op_200 + tmp_kernel_op_201);
             const real_t tmp_kernel_op_205 = tmp_kernel_op_110*(tmp_kernel_op_203 + tmp_kernel_op_204);
             const real_t tmp_kernel_op_208 = tmp_kernel_op_110*(tmp_kernel_op_206 + tmp_kernel_op_207);
             const real_t tmp_kernel_op_211 = tmp_kernel_op_146*(tmp_kernel_op_209 + tmp_kernel_op_210);
             const real_t tmp_kernel_op_214 = tmp_kernel_op_146*(tmp_kernel_op_212 + tmp_kernel_op_213);
             const real_t tmp_kernel_op_216 = tmp_kernel_op_34*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_215 - tmp_kernel_op_191);
             const real_t tmp_kernel_op_217 = tmp_kernel_op_34*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_215 - tmp_kernel_op_194);
             const real_t tmp_kernel_op_219 = tmp_kernel_op_74*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_218 - tmp_kernel_op_197);
             const real_t tmp_kernel_op_220 = tmp_kernel_op_74*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_218 - tmp_kernel_op_200);
             const real_t tmp_kernel_op_222 = tmp_kernel_op_110*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_221 - tmp_kernel_op_203);
             const real_t tmp_kernel_op_223 = tmp_kernel_op_110*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_221 - tmp_kernel_op_206);
             const real_t tmp_kernel_op_225 = tmp_kernel_op_146*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_224 - tmp_kernel_op_209);
             const real_t tmp_kernel_op_226 = tmp_kernel_op_146*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_224 - tmp_kernel_op_212);
             const real_t tmp_kernel_op_228 = tmp_kernel_op_34*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_227 - tmp_kernel_op_192);
             const real_t tmp_kernel_op_229 = tmp_kernel_op_34*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_227 - tmp_kernel_op_195);
             const real_t tmp_kernel_op_231 = tmp_kernel_op_74*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_230 - tmp_kernel_op_198);
             const real_t tmp_kernel_op_232 = tmp_kernel_op_74*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_230 - tmp_kernel_op_201);
             const real_t tmp_kernel_op_234 = tmp_kernel_op_110*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_233 - tmp_kernel_op_204);
             const real_t tmp_kernel_op_235 = tmp_kernel_op_110*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_233 - tmp_kernel_op_207);
             const real_t tmp_kernel_op_237 = tmp_kernel_op_146*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_236 - tmp_kernel_op_210);
             const real_t tmp_kernel_op_238 = tmp_kernel_op_146*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_236 - tmp_kernel_op_213);
             const real_t elMatDiag_0 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_114 + tmp_kernel_op_108*tmp_kernel_op_115)*(tmp_kernel_op_105*tmp_kernel_op_114 + tmp_kernel_op_108*tmp_kernel_op_115)) + ((tmp_kernel_op_107*tmp_kernel_op_115 + tmp_kernel_op_114*tmp_kernel_op_116)*(tmp_kernel_op_107*tmp_kernel_op_115 + tmp_kernel_op_114*tmp_kernel_op_116))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_150 + tmp_kernel_op_144*tmp_kernel_op_151)*(tmp_kernel_op_141*tmp_kernel_op_150 + tmp_kernel_op_144*tmp_kernel_op_151)) + ((tmp_kernel_op_143*tmp_kernel_op_151 + tmp_kernel_op_150*tmp_kernel_op_152)*(tmp_kernel_op_143*tmp_kernel_op_151 + tmp_kernel_op_150*tmp_kernel_op_152))) + tmp_kernel_op_58*(((tmp_kernel_op_29*tmp_kernel_op_38 + tmp_kernel_op_32*tmp_kernel_op_39)*(tmp_kernel_op_29*tmp_kernel_op_38 + tmp_kernel_op_32*tmp_kernel_op_39)) + ((tmp_kernel_op_31*tmp_kernel_op_39 + tmp_kernel_op_38*tmp_kernel_op_40)*(tmp_kernel_op_31*tmp_kernel_op_39 + tmp_kernel_op_38*tmp_kernel_op_40))) + tmp_kernel_op_94*(((tmp_kernel_op_69*tmp_kernel_op_78 + tmp_kernel_op_72*tmp_kernel_op_79)*(tmp_kernel_op_69*tmp_kernel_op_78 + tmp_kernel_op_72*tmp_kernel_op_79)) + ((tmp_kernel_op_71*tmp_kernel_op_79 + tmp_kernel_op_78*tmp_kernel_op_80)*(tmp_kernel_op_71*tmp_kernel_op_79 + tmp_kernel_op_78*tmp_kernel_op_80)));
             const real_t elMatDiag_1 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_174 + tmp_kernel_op_108*tmp_kernel_op_175)*(tmp_kernel_op_105*tmp_kernel_op_174 + tmp_kernel_op_108*tmp_kernel_op_175)) + ((tmp_kernel_op_107*tmp_kernel_op_175 + tmp_kernel_op_116*tmp_kernel_op_174)*(tmp_kernel_op_107*tmp_kernel_op_175 + tmp_kernel_op_116*tmp_kernel_op_174))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_177 + tmp_kernel_op_144*tmp_kernel_op_178)*(tmp_kernel_op_141*tmp_kernel_op_177 + tmp_kernel_op_144*tmp_kernel_op_178)) + ((tmp_kernel_op_143*tmp_kernel_op_178 + tmp_kernel_op_152*tmp_kernel_op_177)*(tmp_kernel_op_143*tmp_kernel_op_178 + tmp_kernel_op_152*tmp_kernel_op_177))) + tmp_kernel_op_58*(((tmp_kernel_op_168*tmp_kernel_op_29 + tmp_kernel_op_169*tmp_kernel_op_32)*(tmp_kernel_op_168*tmp_kernel_op_29 + tmp_kernel_op_169*tmp_kernel_op_32)) + ((tmp_kernel_op_168*tmp_kernel_op_40 + tmp_kernel_op_169*tmp_kernel_op_31)*(tmp_kernel_op_168*tmp_kernel_op_40 + tmp_kernel_op_169*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_171*tmp_kernel_op_69 + tmp_kernel_op_172*tmp_kernel_op_72)*(tmp_kernel_op_171*tmp_kernel_op_69 + tmp_kernel_op_172*tmp_kernel_op_72)) + ((tmp_kernel_op_171*tmp_kernel_op_80 + tmp_kernel_op_172*tmp_kernel_op_71)*(tmp_kernel_op_171*tmp_kernel_op_80 + tmp_kernel_op_172*tmp_kernel_op_71)));
             const real_t elMatDiag_2 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_186 + tmp_kernel_op_108*tmp_kernel_op_187)*(tmp_kernel_op_105*tmp_kernel_op_186 + tmp_kernel_op_108*tmp_kernel_op_187)) + ((tmp_kernel_op_107*tmp_kernel_op_187 + tmp_kernel_op_116*tmp_kernel_op_186)*(tmp_kernel_op_107*tmp_kernel_op_187 + tmp_kernel_op_116*tmp_kernel_op_186))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_189 + tmp_kernel_op_144*tmp_kernel_op_190)*(tmp_kernel_op_141*tmp_kernel_op_189 + tmp_kernel_op_144*tmp_kernel_op_190)) + ((tmp_kernel_op_143*tmp_kernel_op_190 + tmp_kernel_op_152*tmp_kernel_op_189)*(tmp_kernel_op_143*tmp_kernel_op_190 + tmp_kernel_op_152*tmp_kernel_op_189))) + tmp_kernel_op_58*(((tmp_kernel_op_180*tmp_kernel_op_29 + tmp_kernel_op_181*tmp_kernel_op_32)*(tmp_kernel_op_180*tmp_kernel_op_29 + tmp_kernel_op_181*tmp_kernel_op_32)) + ((tmp_kernel_op_180*tmp_kernel_op_40 + tmp_kernel_op_181*tmp_kernel_op_31)*(tmp_kernel_op_180*tmp_kernel_op_40 + tmp_kernel_op_181*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_183*tmp_kernel_op_69 + tmp_kernel_op_184*tmp_kernel_op_72)*(tmp_kernel_op_183*tmp_kernel_op_69 + tmp_kernel_op_184*tmp_kernel_op_72)) + ((tmp_kernel_op_183*tmp_kernel_op_80 + tmp_kernel_op_184*tmp_kernel_op_71)*(tmp_kernel_op_183*tmp_kernel_op_80 + tmp_kernel_op_184*tmp_kernel_op_71)));
             const real_t elMatDiag_3 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_205 + tmp_kernel_op_108*tmp_kernel_op_208)*(tmp_kernel_op_105*tmp_kernel_op_205 + tmp_kernel_op_108*tmp_kernel_op_208)) + ((tmp_kernel_op_107*tmp_kernel_op_208 + tmp_kernel_op_116*tmp_kernel_op_205)*(tmp_kernel_op_107*tmp_kernel_op_208 + tmp_kernel_op_116*tmp_kernel_op_205))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_211 + tmp_kernel_op_144*tmp_kernel_op_214)*(tmp_kernel_op_141*tmp_kernel_op_211 + tmp_kernel_op_144*tmp_kernel_op_214)) + ((tmp_kernel_op_143*tmp_kernel_op_214 + tmp_kernel_op_152*tmp_kernel_op_211)*(tmp_kernel_op_143*tmp_kernel_op_214 + tmp_kernel_op_152*tmp_kernel_op_211))) + tmp_kernel_op_58*(((tmp_kernel_op_193*tmp_kernel_op_29 + tmp_kernel_op_196*tmp_kernel_op_32)*(tmp_kernel_op_193*tmp_kernel_op_29 + tmp_kernel_op_196*tmp_kernel_op_32)) + ((tmp_kernel_op_193*tmp_kernel_op_40 + tmp_kernel_op_196*tmp_kernel_op_31)*(tmp_kernel_op_193*tmp_kernel_op_40 + tmp_kernel_op_196*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_199*tmp_kernel_op_69 + tmp_kernel_op_202*tmp_kernel_op_72)*(tmp_kernel_op_199*tmp_kernel_op_69 + tmp_kernel_op_202*tmp_kernel_op_72)) + ((tmp_kernel_op_199*tmp_kernel_op_80 + tmp_kernel_op_202*tmp_kernel_op_71)*(tmp_kernel_op_199*tmp_kernel_op_80 + tmp_kernel_op_202*tmp_kernel_op_71)));
             const real_t elMatDiag_4 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_222 + tmp_kernel_op_108*tmp_kernel_op_223)*(tmp_kernel_op_105*tmp_kernel_op_222 + tmp_kernel_op_108*tmp_kernel_op_223)) + ((tmp_kernel_op_107*tmp_kernel_op_223 + tmp_kernel_op_116*tmp_kernel_op_222)*(tmp_kernel_op_107*tmp_kernel_op_223 + tmp_kernel_op_116*tmp_kernel_op_222))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_225 + tmp_kernel_op_144*tmp_kernel_op_226)*(tmp_kernel_op_141*tmp_kernel_op_225 + tmp_kernel_op_144*tmp_kernel_op_226)) + ((tmp_kernel_op_143*tmp_kernel_op_226 + tmp_kernel_op_152*tmp_kernel_op_225)*(tmp_kernel_op_143*tmp_kernel_op_226 + tmp_kernel_op_152*tmp_kernel_op_225))) + tmp_kernel_op_58*(((tmp_kernel_op_216*tmp_kernel_op_29 + tmp_kernel_op_217*tmp_kernel_op_32)*(tmp_kernel_op_216*tmp_kernel_op_29 + tmp_kernel_op_217*tmp_kernel_op_32)) + ((tmp_kernel_op_216*tmp_kernel_op_40 + tmp_kernel_op_217*tmp_kernel_op_31)*(tmp_kernel_op_216*tmp_kernel_op_40 + tmp_kernel_op_217*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_219*tmp_kernel_op_69 + tmp_kernel_op_220*tmp_kernel_op_72)*(tmp_kernel_op_219*tmp_kernel_op_69 + tmp_kernel_op_220*tmp_kernel_op_72)) + ((tmp_kernel_op_219*tmp_kernel_op_80 + tmp_kernel_op_220*tmp_kernel_op_71)*(tmp_kernel_op_219*tmp_kernel_op_80 + tmp_kernel_op_220*tmp_kernel_op_71)));
             const real_t elMatDiag_5 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_234 + tmp_kernel_op_108*tmp_kernel_op_235)*(tmp_kernel_op_105*tmp_kernel_op_234 + tmp_kernel_op_108*tmp_kernel_op_235)) + ((tmp_kernel_op_107*tmp_kernel_op_235 + tmp_kernel_op_116*tmp_kernel_op_234)*(tmp_kernel_op_107*tmp_kernel_op_235 + tmp_kernel_op_116*tmp_kernel_op_234))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_237 + tmp_kernel_op_144*tmp_kernel_op_238)*(tmp_kernel_op_141*tmp_kernel_op_237 + tmp_kernel_op_144*tmp_kernel_op_238)) + ((tmp_kernel_op_143*tmp_kernel_op_238 + tmp_kernel_op_152*tmp_kernel_op_237)*(tmp_kernel_op_143*tmp_kernel_op_238 + tmp_kernel_op_152*tmp_kernel_op_237))) + tmp_kernel_op_58*(((tmp_kernel_op_228*tmp_kernel_op_29 + tmp_kernel_op_229*tmp_kernel_op_32)*(tmp_kernel_op_228*tmp_kernel_op_29 + tmp_kernel_op_229*tmp_kernel_op_32)) + ((tmp_kernel_op_228*tmp_kernel_op_40 + tmp_kernel_op_229*tmp_kernel_op_31)*(tmp_kernel_op_228*tmp_kernel_op_40 + tmp_kernel_op_229*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_231*tmp_kernel_op_69 + tmp_kernel_op_232*tmp_kernel_op_72)*(tmp_kernel_op_231*tmp_kernel_op_69 + tmp_kernel_op_232*tmp_kernel_op_72)) + ((tmp_kernel_op_231*tmp_kernel_op_80 + tmp_kernel_op_232*tmp_kernel_op_71)*(tmp_kernel_op_231*tmp_kernel_op_80 + tmp_kernel_op_232*tmp_kernel_op_71)));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
       const real_t tmp_moved_constant_0 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_36;
       const real_t tmp_moved_constant_1 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_35;
       const real_t tmp_moved_constant_2 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_36;
       const real_t tmp_moved_constant_3 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_35;
       const real_t tmp_moved_constant_4 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_76;
       const real_t tmp_moved_constant_5 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_75;
       const real_t tmp_moved_constant_6 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_76;
       const real_t tmp_moved_constant_7 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_75;
       const real_t tmp_moved_constant_8 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_112;
       const real_t tmp_moved_constant_9 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_111;
       const real_t tmp_moved_constant_10 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_112;
       const real_t tmp_moved_constant_11 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_111;
       const real_t tmp_moved_constant_12 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_148;
       const real_t tmp_moved_constant_13 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_147;
       const real_t tmp_moved_constant_14 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_148;
       const real_t tmp_moved_constant_15 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_147;
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
             const real_t tmp_kernel_op_2 = p_affine_0_0 - p_affine_1_0;
             const real_t tmp_kernel_op_3 = -tmp_kernel_op_2;
             const real_t tmp_kernel_op_4 = p_affine_0_0 - p_affine_2_0;
             const real_t tmp_kernel_op_5 = -tmp_kernel_op_4;
             const real_t tmp_kernel_op_6 = p_affine_0_0 + tmp_kernel_op_3*0.33333333333333331 + tmp_kernel_op_5*0.33333333333333331;
             const real_t tmp_kernel_op_7 = (tmp_kernel_op_6*tmp_kernel_op_6);
             const real_t tmp_kernel_op_8 = p_affine_0_1 - p_affine_1_1;
             const real_t tmp_kernel_op_9 = -tmp_kernel_op_8;
             const real_t tmp_kernel_op_10 = p_affine_0_1 - p_affine_2_1;
             const real_t tmp_kernel_op_11 = -tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = p_affine_0_1 + tmp_kernel_op_11*0.33333333333333331 + tmp_kernel_op_9*0.33333333333333331;
             const real_t tmp_kernel_op_13 = (tmp_kernel_op_12*tmp_kernel_op_12);
             const real_t tmp_kernel_op_14 = tmp_kernel_op_13 + tmp_kernel_op_7;
             const real_t tmp_kernel_op_22 = pow(tmp_kernel_op_14, -0.50000000000000000)*tmp_kernel_op_21;
             const real_t tmp_kernel_op_23 = tmp_kernel_op_22*tmp_kernel_op_6;
             const real_t tmp_kernel_op_24 = pow(tmp_kernel_op_14, -1.5000000000000000);
             const real_t tmp_kernel_op_27 = radRayVertex + tmp_kernel_op_20*(tmp_kernel_op_1*(tmp_kernel_op_26 + tmp_kernel_op_6) - tmp_kernel_op_17*(tmp_kernel_op_12 + tmp_kernel_op_25));
             const real_t tmp_kernel_op_28 = tmp_kernel_op_24*tmp_kernel_op_27*1.0;
             const real_t tmp_kernel_op_29 = tmp_kernel_op_1*tmp_kernel_op_23 + tmp_kernel_op_13*tmp_kernel_op_28;
             const real_t tmp_kernel_op_30 = tmp_kernel_op_12*tmp_kernel_op_22;
             const real_t tmp_kernel_op_31 = -tmp_kernel_op_17*tmp_kernel_op_30 + tmp_kernel_op_24*tmp_kernel_op_27*tmp_kernel_op_7*1.0;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_12*tmp_kernel_op_24*tmp_kernel_op_27*tmp_kernel_op_6*1.0 + tmp_kernel_op_17*tmp_kernel_op_23;
             const real_t tmp_kernel_op_33 = tmp_kernel_op_1*tmp_kernel_op_30 - tmp_kernel_op_12*tmp_kernel_op_28*tmp_kernel_op_6;
             const real_t tmp_kernel_op_34 = 1.0 / (tmp_kernel_op_29*tmp_kernel_op_31 + tmp_kernel_op_32*tmp_kernel_op_33);
             const real_t tmp_kernel_op_38 = tmp_kernel_op_34*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_37 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_37);
             const real_t tmp_kernel_op_39 = tmp_kernel_op_34*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_37 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_37);
             const real_t tmp_kernel_op_40 = -tmp_kernel_op_33;
             const real_t tmp_kernel_op_41 = -p_affine_0_0;
             const real_t tmp_kernel_op_42 = tmp_kernel_op_2*0.33333333333333331 + tmp_kernel_op_4*0.33333333333333331 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_43 = (tmp_kernel_op_42*tmp_kernel_op_42);
             const real_t tmp_kernel_op_44 = -p_affine_0_1;
             const real_t tmp_kernel_op_45 = tmp_kernel_op_10*0.33333333333333331 + tmp_kernel_op_44 + tmp_kernel_op_8*0.33333333333333331;
             const real_t tmp_kernel_op_46 = (tmp_kernel_op_45*tmp_kernel_op_45);
             const real_t tmp_kernel_op_47 = tmp_kernel_op_43 + tmp_kernel_op_46;
             const real_t tmp_kernel_op_50 = pow(tmp_kernel_op_47, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_42*tmp_kernel_op_50;
             const real_t tmp_kernel_op_52 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_42) + tmp_kernel_op_16*(rayVertex_1 + tmp_kernel_op_45);
             const real_t tmp_kernel_op_53 = pow(tmp_kernel_op_47, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_54 = tmp_kernel_op_53*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_52);
             const real_t tmp_kernel_op_55 = tmp_kernel_op_45*tmp_kernel_op_50;
             const real_t tmp_kernel_op_56 = tmp_kernel_op_53*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_52);
             const real_t tmp_kernel_op_57 = tmp_kernel_op_42*tmp_kernel_op_45;
             const real_t tmp_kernel_op_58 = abs_det_jac_affine_BLUE*-0.28125*abs((tmp_kernel_op_0*tmp_kernel_op_51 - tmp_kernel_op_46*tmp_kernel_op_54)*(tmp_kernel_op_16*tmp_kernel_op_55 + tmp_kernel_op_43*tmp_kernel_op_56) - (tmp_kernel_op_0*tmp_kernel_op_55 + tmp_kernel_op_54*tmp_kernel_op_57)*(tmp_kernel_op_16*tmp_kernel_op_51 - tmp_kernel_op_56*tmp_kernel_op_57));
             const real_t tmp_kernel_op_59 = p_affine_0_0 + tmp_kernel_op_3*0.20000000000000001 + tmp_kernel_op_5*0.59999999999999998;
             const real_t tmp_kernel_op_60 = (tmp_kernel_op_59*tmp_kernel_op_59);
             const real_t tmp_kernel_op_61 = p_affine_0_1 + tmp_kernel_op_11*0.59999999999999998 + tmp_kernel_op_9*0.20000000000000001;
             const real_t tmp_kernel_op_62 = (tmp_kernel_op_61*tmp_kernel_op_61);
             const real_t tmp_kernel_op_63 = tmp_kernel_op_60 + tmp_kernel_op_62;
             const real_t tmp_kernel_op_64 = tmp_kernel_op_21*pow(tmp_kernel_op_63, -0.50000000000000000);
             const real_t tmp_kernel_op_65 = tmp_kernel_op_59*tmp_kernel_op_64;
             const real_t tmp_kernel_op_66 = pow(tmp_kernel_op_63, -1.5000000000000000);
             const real_t tmp_kernel_op_67 = radRayVertex + tmp_kernel_op_20*(tmp_kernel_op_1*(tmp_kernel_op_26 + tmp_kernel_op_59) - tmp_kernel_op_17*(tmp_kernel_op_25 + tmp_kernel_op_61));
             const real_t tmp_kernel_op_68 = tmp_kernel_op_66*tmp_kernel_op_67*1.0;
             const real_t tmp_kernel_op_69 = tmp_kernel_op_1*tmp_kernel_op_65 + tmp_kernel_op_62*tmp_kernel_op_68;
             const real_t tmp_kernel_op_70 = tmp_kernel_op_61*tmp_kernel_op_64;
             const real_t tmp_kernel_op_71 = -tmp_kernel_op_17*tmp_kernel_op_70 + tmp_kernel_op_60*tmp_kernel_op_66*tmp_kernel_op_67*1.0;
             const real_t tmp_kernel_op_72 = tmp_kernel_op_17*tmp_kernel_op_65 + tmp_kernel_op_59*tmp_kernel_op_61*tmp_kernel_op_66*tmp_kernel_op_67*1.0;
             const real_t tmp_kernel_op_73 = tmp_kernel_op_1*tmp_kernel_op_70 - tmp_kernel_op_59*tmp_kernel_op_61*tmp_kernel_op_68;
             const real_t tmp_kernel_op_74 = 1.0 / (tmp_kernel_op_69*tmp_kernel_op_71 + tmp_kernel_op_72*tmp_kernel_op_73);
             const real_t tmp_kernel_op_78 = tmp_kernel_op_74*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_77 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_77);
             const real_t tmp_kernel_op_79 = tmp_kernel_op_74*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_77 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_77);
             const real_t tmp_kernel_op_80 = -tmp_kernel_op_73;
             const real_t tmp_kernel_op_81 = tmp_kernel_op_2*0.20000000000000001 + tmp_kernel_op_4*0.59999999999999998 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_82 = (tmp_kernel_op_81*tmp_kernel_op_81);
             const real_t tmp_kernel_op_83 = tmp_kernel_op_10*0.59999999999999998 + tmp_kernel_op_44 + tmp_kernel_op_8*0.20000000000000001;
             const real_t tmp_kernel_op_84 = (tmp_kernel_op_83*tmp_kernel_op_83);
             const real_t tmp_kernel_op_85 = tmp_kernel_op_82 + tmp_kernel_op_84;
             const real_t tmp_kernel_op_86 = tmp_kernel_op_49*pow(tmp_kernel_op_85, -0.50000000000000000);
             const real_t tmp_kernel_op_87 = tmp_kernel_op_81*tmp_kernel_op_86;
             const real_t tmp_kernel_op_88 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_81) + tmp_kernel_op_16*(rayVertex_1 + tmp_kernel_op_83);
             const real_t tmp_kernel_op_89 = pow(tmp_kernel_op_85, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_90 = tmp_kernel_op_89*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_88);
             const real_t tmp_kernel_op_91 = tmp_kernel_op_83*tmp_kernel_op_86;
             const real_t tmp_kernel_op_92 = tmp_kernel_op_89*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_88);
             const real_t tmp_kernel_op_93 = tmp_kernel_op_81*tmp_kernel_op_83;
             const real_t tmp_kernel_op_94 = abs_det_jac_affine_BLUE*0.26041666666666669*abs((tmp_kernel_op_0*tmp_kernel_op_87 - tmp_kernel_op_84*tmp_kernel_op_90)*(tmp_kernel_op_16*tmp_kernel_op_91 + tmp_kernel_op_82*tmp_kernel_op_92) - (tmp_kernel_op_0*tmp_kernel_op_91 + tmp_kernel_op_90*tmp_kernel_op_93)*(tmp_kernel_op_16*tmp_kernel_op_87 - tmp_kernel_op_92*tmp_kernel_op_93));
             const real_t tmp_kernel_op_95 = p_affine_0_0 + tmp_kernel_op_3*0.59999999999999998 + tmp_kernel_op_5*0.20000000000000001;
             const real_t tmp_kernel_op_96 = (tmp_kernel_op_95*tmp_kernel_op_95);
             const real_t tmp_kernel_op_97 = p_affine_0_1 + tmp_kernel_op_11*0.20000000000000001 + tmp_kernel_op_9*0.59999999999999998;
             const real_t tmp_kernel_op_98 = (tmp_kernel_op_97*tmp_kernel_op_97);
             const real_t tmp_kernel_op_99 = tmp_kernel_op_96 + tmp_kernel_op_98;
             const real_t tmp_kernel_op_100 = tmp_kernel_op_21*pow(tmp_kernel_op_99, -0.50000000000000000);
             const real_t tmp_kernel_op_101 = tmp_kernel_op_100*tmp_kernel_op_95;
             const real_t tmp_kernel_op_102 = pow(tmp_kernel_op_99, -1.5000000000000000);
             const real_t tmp_kernel_op_103 = radRayVertex + tmp_kernel_op_20*(tmp_kernel_op_1*(tmp_kernel_op_26 + tmp_kernel_op_95) - tmp_kernel_op_17*(tmp_kernel_op_25 + tmp_kernel_op_97));
             const real_t tmp_kernel_op_104 = tmp_kernel_op_102*tmp_kernel_op_103*1.0;
             const real_t tmp_kernel_op_105 = tmp_kernel_op_1*tmp_kernel_op_101 + tmp_kernel_op_104*tmp_kernel_op_98;
             const real_t tmp_kernel_op_106 = tmp_kernel_op_100*tmp_kernel_op_97;
             const real_t tmp_kernel_op_107 = tmp_kernel_op_102*tmp_kernel_op_103*tmp_kernel_op_96*1.0 - tmp_kernel_op_106*tmp_kernel_op_17;
             const real_t tmp_kernel_op_108 = tmp_kernel_op_101*tmp_kernel_op_17 + tmp_kernel_op_102*tmp_kernel_op_103*tmp_kernel_op_95*tmp_kernel_op_97*1.0;
             const real_t tmp_kernel_op_109 = tmp_kernel_op_1*tmp_kernel_op_106 - tmp_kernel_op_104*tmp_kernel_op_95*tmp_kernel_op_97;
             const real_t tmp_kernel_op_110 = 1.0 / (tmp_kernel_op_105*tmp_kernel_op_107 + tmp_kernel_op_108*tmp_kernel_op_109);
             const real_t tmp_kernel_op_114 = tmp_kernel_op_110*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_113 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_113);
             const real_t tmp_kernel_op_115 = tmp_kernel_op_110*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_113 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_113);
             const real_t tmp_kernel_op_116 = -tmp_kernel_op_109;
             const real_t tmp_kernel_op_117 = tmp_kernel_op_2*0.59999999999999998 + tmp_kernel_op_4*0.20000000000000001 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_118 = (tmp_kernel_op_117*tmp_kernel_op_117);
             const real_t tmp_kernel_op_119 = tmp_kernel_op_10*0.20000000000000001 + tmp_kernel_op_44 + tmp_kernel_op_8*0.59999999999999998;
             const real_t tmp_kernel_op_120 = (tmp_kernel_op_119*tmp_kernel_op_119);
             const real_t tmp_kernel_op_121 = tmp_kernel_op_118 + tmp_kernel_op_120;
             const real_t tmp_kernel_op_122 = pow(tmp_kernel_op_121, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_123 = tmp_kernel_op_117*tmp_kernel_op_122;
             const real_t tmp_kernel_op_124 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_117) + tmp_kernel_op_16*(rayVertex_1 + tmp_kernel_op_119);
             const real_t tmp_kernel_op_125 = pow(tmp_kernel_op_121, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_126 = tmp_kernel_op_125*(radRayVertex + tmp_kernel_op_124*tmp_kernel_op_48);
             const real_t tmp_kernel_op_127 = tmp_kernel_op_119*tmp_kernel_op_122;
             const real_t tmp_kernel_op_128 = tmp_kernel_op_125*(radRayVertex + tmp_kernel_op_124*tmp_kernel_op_48);
             const real_t tmp_kernel_op_129 = tmp_kernel_op_117*tmp_kernel_op_119;
             const real_t tmp_kernel_op_130 = abs_det_jac_affine_BLUE*0.26041666666666669*abs((tmp_kernel_op_0*tmp_kernel_op_123 - tmp_kernel_op_120*tmp_kernel_op_126)*(tmp_kernel_op_118*tmp_kernel_op_128 + tmp_kernel_op_127*tmp_kernel_op_16) - (tmp_kernel_op_0*tmp_kernel_op_127 + tmp_kernel_op_126*tmp_kernel_op_129)*(tmp_kernel_op_123*tmp_kernel_op_16 - tmp_kernel_op_128*tmp_kernel_op_129));
             const real_t tmp_kernel_op_131 = p_affine_0_0 + tmp_kernel_op_3*0.20000000000000001 + tmp_kernel_op_5*0.20000000000000001;
             const real_t tmp_kernel_op_132 = (tmp_kernel_op_131*tmp_kernel_op_131);
             const real_t tmp_kernel_op_133 = p_affine_0_1 + tmp_kernel_op_11*0.20000000000000001 + tmp_kernel_op_9*0.20000000000000001;
             const real_t tmp_kernel_op_134 = (tmp_kernel_op_133*tmp_kernel_op_133);
             const real_t tmp_kernel_op_135 = tmp_kernel_op_132 + tmp_kernel_op_134;
             const real_t tmp_kernel_op_136 = pow(tmp_kernel_op_135, -0.50000000000000000)*tmp_kernel_op_21;
             const real_t tmp_kernel_op_137 = tmp_kernel_op_131*tmp_kernel_op_136;
             const real_t tmp_kernel_op_138 = pow(tmp_kernel_op_135, -1.5000000000000000);
             const real_t tmp_kernel_op_139 = radRayVertex + tmp_kernel_op_20*(tmp_kernel_op_1*(tmp_kernel_op_131 + tmp_kernel_op_26) - tmp_kernel_op_17*(tmp_kernel_op_133 + tmp_kernel_op_25));
             const real_t tmp_kernel_op_140 = tmp_kernel_op_138*tmp_kernel_op_139*1.0;
             const real_t tmp_kernel_op_141 = tmp_kernel_op_1*tmp_kernel_op_137 + tmp_kernel_op_134*tmp_kernel_op_140;
             const real_t tmp_kernel_op_142 = tmp_kernel_op_133*tmp_kernel_op_136;
             const real_t tmp_kernel_op_143 = tmp_kernel_op_132*tmp_kernel_op_138*tmp_kernel_op_139*1.0 - tmp_kernel_op_142*tmp_kernel_op_17;
             const real_t tmp_kernel_op_144 = tmp_kernel_op_131*tmp_kernel_op_133*tmp_kernel_op_138*tmp_kernel_op_139*1.0 + tmp_kernel_op_137*tmp_kernel_op_17;
             const real_t tmp_kernel_op_145 = tmp_kernel_op_1*tmp_kernel_op_142 - tmp_kernel_op_131*tmp_kernel_op_133*tmp_kernel_op_140;
             const real_t tmp_kernel_op_146 = 1.0 / (tmp_kernel_op_141*tmp_kernel_op_143 + tmp_kernel_op_144*tmp_kernel_op_145);
             const real_t tmp_kernel_op_150 = tmp_kernel_op_146*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_149 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_149);
             const real_t tmp_kernel_op_151 = tmp_kernel_op_146*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_149 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_149);
             const real_t tmp_kernel_op_152 = -tmp_kernel_op_145;
             const real_t tmp_kernel_op_153 = tmp_kernel_op_2*0.20000000000000001 + tmp_kernel_op_4*0.20000000000000001 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_154 = (tmp_kernel_op_153*tmp_kernel_op_153);
             const real_t tmp_kernel_op_155 = tmp_kernel_op_10*0.20000000000000001 + tmp_kernel_op_44 + tmp_kernel_op_8*0.20000000000000001;
             const real_t tmp_kernel_op_156 = (tmp_kernel_op_155*tmp_kernel_op_155);
             const real_t tmp_kernel_op_157 = tmp_kernel_op_154 + tmp_kernel_op_156;
             const real_t tmp_kernel_op_158 = pow(tmp_kernel_op_157, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_159 = tmp_kernel_op_153*tmp_kernel_op_158;
             const real_t tmp_kernel_op_160 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_153) + tmp_kernel_op_16*(rayVertex_1 + tmp_kernel_op_155);
             const real_t tmp_kernel_op_161 = pow(tmp_kernel_op_157, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_162 = tmp_kernel_op_161*(radRayVertex + tmp_kernel_op_160*tmp_kernel_op_48);
             const real_t tmp_kernel_op_163 = tmp_kernel_op_155*tmp_kernel_op_158;
             const real_t tmp_kernel_op_164 = tmp_kernel_op_161*(radRayVertex + tmp_kernel_op_160*tmp_kernel_op_48);
             const real_t tmp_kernel_op_165 = tmp_kernel_op_153*tmp_kernel_op_155;
             const real_t tmp_kernel_op_166 = abs_det_jac_affine_BLUE*0.26041666666666669*abs((tmp_kernel_op_0*tmp_kernel_op_159 - tmp_kernel_op_156*tmp_kernel_op_162)*(tmp_kernel_op_154*tmp_kernel_op_164 + tmp_kernel_op_16*tmp_kernel_op_163) - (tmp_kernel_op_0*tmp_kernel_op_163 + tmp_kernel_op_162*tmp_kernel_op_165)*(tmp_kernel_op_159*tmp_kernel_op_16 - tmp_kernel_op_164*tmp_kernel_op_165));
             const real_t tmp_kernel_op_167 = tmp_kernel_op_34*(tmp_kernel_op_35 - 1.0);
             const real_t tmp_kernel_op_168 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_167;
             const real_t tmp_kernel_op_169 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_167;
             const real_t tmp_kernel_op_170 = tmp_kernel_op_74*(tmp_kernel_op_75 - 1.0);
             const real_t tmp_kernel_op_171 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_170;
             const real_t tmp_kernel_op_172 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_170;
             const real_t tmp_kernel_op_173 = tmp_kernel_op_110*(tmp_kernel_op_111 - 1.0);
             const real_t tmp_kernel_op_174 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_173;
             const real_t tmp_kernel_op_175 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_173;
             const real_t tmp_kernel_op_176 = tmp_kernel_op_146*(tmp_kernel_op_147 - 1.0);
             const real_t tmp_kernel_op_177 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_176;
             const real_t tmp_kernel_op_178 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_176;
             const real_t tmp_kernel_op_179 = tmp_kernel_op_34*(tmp_kernel_op_36 - 1.0);
             const real_t tmp_kernel_op_180 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_179;
             const real_t tmp_kernel_op_181 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_179;
             const real_t tmp_kernel_op_182 = tmp_kernel_op_74*(tmp_kernel_op_76 - 1.0);
             const real_t tmp_kernel_op_183 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_182;
             const real_t tmp_kernel_op_184 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_182;
             const real_t tmp_kernel_op_185 = tmp_kernel_op_110*(tmp_kernel_op_112 - 1.0);
             const real_t tmp_kernel_op_186 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_185;
             const real_t tmp_kernel_op_187 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_185;
             const real_t tmp_kernel_op_188 = tmp_kernel_op_146*(tmp_kernel_op_148 - 1.0);
             const real_t tmp_kernel_op_189 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_188;
             const real_t tmp_kernel_op_190 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_188;
             const real_t tmp_kernel_op_193 = tmp_kernel_op_34*(tmp_moved_constant_0 + tmp_moved_constant_1);
             const real_t tmp_kernel_op_196 = tmp_kernel_op_34*(tmp_moved_constant_2 + tmp_moved_constant_3);
             const real_t tmp_kernel_op_199 = tmp_kernel_op_74*(tmp_moved_constant_4 + tmp_moved_constant_5);
             const real_t tmp_kernel_op_202 = tmp_kernel_op_74*(tmp_moved_constant_6 + tmp_moved_constant_7);
             const real_t tmp_kernel_op_205 = tmp_kernel_op_110*(tmp_moved_constant_8 + tmp_moved_constant_9);
             const real_t tmp_kernel_op_208 = tmp_kernel_op_110*(tmp_moved_constant_10 + tmp_moved_constant_11);
             const real_t tmp_kernel_op_211 = tmp_kernel_op_146*(tmp_moved_constant_12 + tmp_moved_constant_13);
             const real_t tmp_kernel_op_214 = tmp_kernel_op_146*(tmp_moved_constant_14 + tmp_moved_constant_15);
             const real_t tmp_kernel_op_216 = tmp_kernel_op_34*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_215 - tmp_moved_constant_0);
             const real_t tmp_kernel_op_217 = tmp_kernel_op_34*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_215 - tmp_moved_constant_2);
             const real_t tmp_kernel_op_219 = tmp_kernel_op_74*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_218 - tmp_moved_constant_4);
             const real_t tmp_kernel_op_220 = tmp_kernel_op_74*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_218 - tmp_moved_constant_6);
             const real_t tmp_kernel_op_222 = tmp_kernel_op_110*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_221 - tmp_moved_constant_8);
             const real_t tmp_kernel_op_223 = tmp_kernel_op_110*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_221 - tmp_moved_constant_10);
             const real_t tmp_kernel_op_225 = tmp_kernel_op_146*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_224 - tmp_moved_constant_12);
             const real_t tmp_kernel_op_226 = tmp_kernel_op_146*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_224 - tmp_moved_constant_14);
             const real_t tmp_kernel_op_228 = tmp_kernel_op_34*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_227 - tmp_moved_constant_1);
             const real_t tmp_kernel_op_229 = tmp_kernel_op_34*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_227 - tmp_moved_constant_3);
             const real_t tmp_kernel_op_231 = tmp_kernel_op_74*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_230 - tmp_moved_constant_5);
             const real_t tmp_kernel_op_232 = tmp_kernel_op_74*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_230 - tmp_moved_constant_7);
             const real_t tmp_kernel_op_234 = tmp_kernel_op_110*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_233 - tmp_moved_constant_9);
             const real_t tmp_kernel_op_235 = tmp_kernel_op_110*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_233 - tmp_moved_constant_11);
             const real_t tmp_kernel_op_237 = tmp_kernel_op_146*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_236 - tmp_moved_constant_13);
             const real_t tmp_kernel_op_238 = tmp_kernel_op_146*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_236 - tmp_moved_constant_15);
             const real_t elMatDiag_0 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_114 + tmp_kernel_op_108*tmp_kernel_op_115)*(tmp_kernel_op_105*tmp_kernel_op_114 + tmp_kernel_op_108*tmp_kernel_op_115)) + ((tmp_kernel_op_107*tmp_kernel_op_115 + tmp_kernel_op_114*tmp_kernel_op_116)*(tmp_kernel_op_107*tmp_kernel_op_115 + tmp_kernel_op_114*tmp_kernel_op_116))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_150 + tmp_kernel_op_144*tmp_kernel_op_151)*(tmp_kernel_op_141*tmp_kernel_op_150 + tmp_kernel_op_144*tmp_kernel_op_151)) + ((tmp_kernel_op_143*tmp_kernel_op_151 + tmp_kernel_op_150*tmp_kernel_op_152)*(tmp_kernel_op_143*tmp_kernel_op_151 + tmp_kernel_op_150*tmp_kernel_op_152))) + tmp_kernel_op_58*(((tmp_kernel_op_29*tmp_kernel_op_38 + tmp_kernel_op_32*tmp_kernel_op_39)*(tmp_kernel_op_29*tmp_kernel_op_38 + tmp_kernel_op_32*tmp_kernel_op_39)) + ((tmp_kernel_op_31*tmp_kernel_op_39 + tmp_kernel_op_38*tmp_kernel_op_40)*(tmp_kernel_op_31*tmp_kernel_op_39 + tmp_kernel_op_38*tmp_kernel_op_40))) + tmp_kernel_op_94*(((tmp_kernel_op_69*tmp_kernel_op_78 + tmp_kernel_op_72*tmp_kernel_op_79)*(tmp_kernel_op_69*tmp_kernel_op_78 + tmp_kernel_op_72*tmp_kernel_op_79)) + ((tmp_kernel_op_71*tmp_kernel_op_79 + tmp_kernel_op_78*tmp_kernel_op_80)*(tmp_kernel_op_71*tmp_kernel_op_79 + tmp_kernel_op_78*tmp_kernel_op_80)));
             const real_t elMatDiag_1 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_174 + tmp_kernel_op_108*tmp_kernel_op_175)*(tmp_kernel_op_105*tmp_kernel_op_174 + tmp_kernel_op_108*tmp_kernel_op_175)) + ((tmp_kernel_op_107*tmp_kernel_op_175 + tmp_kernel_op_116*tmp_kernel_op_174)*(tmp_kernel_op_107*tmp_kernel_op_175 + tmp_kernel_op_116*tmp_kernel_op_174))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_177 + tmp_kernel_op_144*tmp_kernel_op_178)*(tmp_kernel_op_141*tmp_kernel_op_177 + tmp_kernel_op_144*tmp_kernel_op_178)) + ((tmp_kernel_op_143*tmp_kernel_op_178 + tmp_kernel_op_152*tmp_kernel_op_177)*(tmp_kernel_op_143*tmp_kernel_op_178 + tmp_kernel_op_152*tmp_kernel_op_177))) + tmp_kernel_op_58*(((tmp_kernel_op_168*tmp_kernel_op_29 + tmp_kernel_op_169*tmp_kernel_op_32)*(tmp_kernel_op_168*tmp_kernel_op_29 + tmp_kernel_op_169*tmp_kernel_op_32)) + ((tmp_kernel_op_168*tmp_kernel_op_40 + tmp_kernel_op_169*tmp_kernel_op_31)*(tmp_kernel_op_168*tmp_kernel_op_40 + tmp_kernel_op_169*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_171*tmp_kernel_op_69 + tmp_kernel_op_172*tmp_kernel_op_72)*(tmp_kernel_op_171*tmp_kernel_op_69 + tmp_kernel_op_172*tmp_kernel_op_72)) + ((tmp_kernel_op_171*tmp_kernel_op_80 + tmp_kernel_op_172*tmp_kernel_op_71)*(tmp_kernel_op_171*tmp_kernel_op_80 + tmp_kernel_op_172*tmp_kernel_op_71)));
             const real_t elMatDiag_2 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_186 + tmp_kernel_op_108*tmp_kernel_op_187)*(tmp_kernel_op_105*tmp_kernel_op_186 + tmp_kernel_op_108*tmp_kernel_op_187)) + ((tmp_kernel_op_107*tmp_kernel_op_187 + tmp_kernel_op_116*tmp_kernel_op_186)*(tmp_kernel_op_107*tmp_kernel_op_187 + tmp_kernel_op_116*tmp_kernel_op_186))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_189 + tmp_kernel_op_144*tmp_kernel_op_190)*(tmp_kernel_op_141*tmp_kernel_op_189 + tmp_kernel_op_144*tmp_kernel_op_190)) + ((tmp_kernel_op_143*tmp_kernel_op_190 + tmp_kernel_op_152*tmp_kernel_op_189)*(tmp_kernel_op_143*tmp_kernel_op_190 + tmp_kernel_op_152*tmp_kernel_op_189))) + tmp_kernel_op_58*(((tmp_kernel_op_180*tmp_kernel_op_29 + tmp_kernel_op_181*tmp_kernel_op_32)*(tmp_kernel_op_180*tmp_kernel_op_29 + tmp_kernel_op_181*tmp_kernel_op_32)) + ((tmp_kernel_op_180*tmp_kernel_op_40 + tmp_kernel_op_181*tmp_kernel_op_31)*(tmp_kernel_op_180*tmp_kernel_op_40 + tmp_kernel_op_181*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_183*tmp_kernel_op_69 + tmp_kernel_op_184*tmp_kernel_op_72)*(tmp_kernel_op_183*tmp_kernel_op_69 + tmp_kernel_op_184*tmp_kernel_op_72)) + ((tmp_kernel_op_183*tmp_kernel_op_80 + tmp_kernel_op_184*tmp_kernel_op_71)*(tmp_kernel_op_183*tmp_kernel_op_80 + tmp_kernel_op_184*tmp_kernel_op_71)));
             const real_t elMatDiag_3 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_205 + tmp_kernel_op_108*tmp_kernel_op_208)*(tmp_kernel_op_105*tmp_kernel_op_205 + tmp_kernel_op_108*tmp_kernel_op_208)) + ((tmp_kernel_op_107*tmp_kernel_op_208 + tmp_kernel_op_116*tmp_kernel_op_205)*(tmp_kernel_op_107*tmp_kernel_op_208 + tmp_kernel_op_116*tmp_kernel_op_205))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_211 + tmp_kernel_op_144*tmp_kernel_op_214)*(tmp_kernel_op_141*tmp_kernel_op_211 + tmp_kernel_op_144*tmp_kernel_op_214)) + ((tmp_kernel_op_143*tmp_kernel_op_214 + tmp_kernel_op_152*tmp_kernel_op_211)*(tmp_kernel_op_143*tmp_kernel_op_214 + tmp_kernel_op_152*tmp_kernel_op_211))) + tmp_kernel_op_58*(((tmp_kernel_op_193*tmp_kernel_op_29 + tmp_kernel_op_196*tmp_kernel_op_32)*(tmp_kernel_op_193*tmp_kernel_op_29 + tmp_kernel_op_196*tmp_kernel_op_32)) + ((tmp_kernel_op_193*tmp_kernel_op_40 + tmp_kernel_op_196*tmp_kernel_op_31)*(tmp_kernel_op_193*tmp_kernel_op_40 + tmp_kernel_op_196*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_199*tmp_kernel_op_69 + tmp_kernel_op_202*tmp_kernel_op_72)*(tmp_kernel_op_199*tmp_kernel_op_69 + tmp_kernel_op_202*tmp_kernel_op_72)) + ((tmp_kernel_op_199*tmp_kernel_op_80 + tmp_kernel_op_202*tmp_kernel_op_71)*(tmp_kernel_op_199*tmp_kernel_op_80 + tmp_kernel_op_202*tmp_kernel_op_71)));
             const real_t elMatDiag_4 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_222 + tmp_kernel_op_108*tmp_kernel_op_223)*(tmp_kernel_op_105*tmp_kernel_op_222 + tmp_kernel_op_108*tmp_kernel_op_223)) + ((tmp_kernel_op_107*tmp_kernel_op_223 + tmp_kernel_op_116*tmp_kernel_op_222)*(tmp_kernel_op_107*tmp_kernel_op_223 + tmp_kernel_op_116*tmp_kernel_op_222))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_225 + tmp_kernel_op_144*tmp_kernel_op_226)*(tmp_kernel_op_141*tmp_kernel_op_225 + tmp_kernel_op_144*tmp_kernel_op_226)) + ((tmp_kernel_op_143*tmp_kernel_op_226 + tmp_kernel_op_152*tmp_kernel_op_225)*(tmp_kernel_op_143*tmp_kernel_op_226 + tmp_kernel_op_152*tmp_kernel_op_225))) + tmp_kernel_op_58*(((tmp_kernel_op_216*tmp_kernel_op_29 + tmp_kernel_op_217*tmp_kernel_op_32)*(tmp_kernel_op_216*tmp_kernel_op_29 + tmp_kernel_op_217*tmp_kernel_op_32)) + ((tmp_kernel_op_216*tmp_kernel_op_40 + tmp_kernel_op_217*tmp_kernel_op_31)*(tmp_kernel_op_216*tmp_kernel_op_40 + tmp_kernel_op_217*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_219*tmp_kernel_op_69 + tmp_kernel_op_220*tmp_kernel_op_72)*(tmp_kernel_op_219*tmp_kernel_op_69 + tmp_kernel_op_220*tmp_kernel_op_72)) + ((tmp_kernel_op_219*tmp_kernel_op_80 + tmp_kernel_op_220*tmp_kernel_op_71)*(tmp_kernel_op_219*tmp_kernel_op_80 + tmp_kernel_op_220*tmp_kernel_op_71)));
             const real_t elMatDiag_5 = tmp_kernel_op_130*(((tmp_kernel_op_105*tmp_kernel_op_234 + tmp_kernel_op_108*tmp_kernel_op_235)*(tmp_kernel_op_105*tmp_kernel_op_234 + tmp_kernel_op_108*tmp_kernel_op_235)) + ((tmp_kernel_op_107*tmp_kernel_op_235 + tmp_kernel_op_116*tmp_kernel_op_234)*(tmp_kernel_op_107*tmp_kernel_op_235 + tmp_kernel_op_116*tmp_kernel_op_234))) + tmp_kernel_op_166*(((tmp_kernel_op_141*tmp_kernel_op_237 + tmp_kernel_op_144*tmp_kernel_op_238)*(tmp_kernel_op_141*tmp_kernel_op_237 + tmp_kernel_op_144*tmp_kernel_op_238)) + ((tmp_kernel_op_143*tmp_kernel_op_238 + tmp_kernel_op_152*tmp_kernel_op_237)*(tmp_kernel_op_143*tmp_kernel_op_238 + tmp_kernel_op_152*tmp_kernel_op_237))) + tmp_kernel_op_58*(((tmp_kernel_op_228*tmp_kernel_op_29 + tmp_kernel_op_229*tmp_kernel_op_32)*(tmp_kernel_op_228*tmp_kernel_op_29 + tmp_kernel_op_229*tmp_kernel_op_32)) + ((tmp_kernel_op_228*tmp_kernel_op_40 + tmp_kernel_op_229*tmp_kernel_op_31)*(tmp_kernel_op_228*tmp_kernel_op_40 + tmp_kernel_op_229*tmp_kernel_op_31))) + tmp_kernel_op_94*(((tmp_kernel_op_231*tmp_kernel_op_69 + tmp_kernel_op_232*tmp_kernel_op_72)*(tmp_kernel_op_231*tmp_kernel_op_69 + tmp_kernel_op_232*tmp_kernel_op_72)) + ((tmp_kernel_op_231*tmp_kernel_op_80 + tmp_kernel_op_232*tmp_kernel_op_71)*(tmp_kernel_op_231*tmp_kernel_op_80 + tmp_kernel_op_232*tmp_kernel_op_71)));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_3 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg