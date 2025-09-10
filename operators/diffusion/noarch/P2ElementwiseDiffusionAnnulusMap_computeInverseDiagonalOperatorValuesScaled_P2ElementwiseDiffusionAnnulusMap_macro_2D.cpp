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































#include "../P2ElementwiseDiffusionAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDiffusionAnnulusMap::computeInverseDiagonalOperatorValuesScaled_P2ElementwiseDiffusionAnnulusMap_macro_2D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t tmp_kernel_op_0 = 1.3333333333333333;
       const real_t tmp_kernel_op_1 = 1.3333333333333333;
       const real_t tmp_kernel_op_2 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const real_t tmp_kernel_op_3 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_4 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_6 = 0.80000000000000004;
       const real_t tmp_kernel_op_7 = 2.3999999999999999;
       const real_t tmp_kernel_op_8 = tmp_kernel_op_6 + tmp_kernel_op_7 - 3.0;
       const real_t tmp_kernel_op_9 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_8 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_10 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_8 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_12 = 2.3999999999999999;
       const real_t tmp_kernel_op_13 = 0.80000000000000004;
       const real_t tmp_kernel_op_14 = tmp_kernel_op_12 + tmp_kernel_op_13 - 3.0;
       const real_t tmp_kernel_op_15 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_14 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_16 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_14 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_18 = 0.80000000000000004;
       const real_t tmp_kernel_op_19 = 0.80000000000000004;
       const real_t tmp_kernel_op_20 = tmp_kernel_op_18 + tmp_kernel_op_19 - 3.0;
       const real_t tmp_kernel_op_21 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_20 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_20;
       const real_t tmp_kernel_op_22 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_20 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_20;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_0 - 1.0;
       const real_t tmp_kernel_op_25 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_26 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_27 = tmp_kernel_op_6 - 1.0;
       const real_t tmp_kernel_op_28 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_27;
       const real_t tmp_kernel_op_29 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_27;
       const real_t tmp_kernel_op_30 = tmp_kernel_op_12 - 1.0;
       const real_t tmp_kernel_op_31 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_30;
       const real_t tmp_kernel_op_32 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_30;
       const real_t tmp_kernel_op_33 = tmp_kernel_op_18 - 1.0;
       const real_t tmp_kernel_op_34 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_33;
       const real_t tmp_kernel_op_35 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_33;
       const real_t tmp_kernel_op_36 = tmp_kernel_op_1 - 1.0;
       const real_t tmp_kernel_op_37 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_36;
       const real_t tmp_kernel_op_38 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_36;
       const real_t tmp_kernel_op_39 = tmp_kernel_op_7 - 1.0;
       const real_t tmp_kernel_op_40 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_39;
       const real_t tmp_kernel_op_41 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_39;
       const real_t tmp_kernel_op_42 = tmp_kernel_op_13 - 1.0;
       const real_t tmp_kernel_op_43 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_42;
       const real_t tmp_kernel_op_44 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_42;
       const real_t tmp_kernel_op_45 = tmp_kernel_op_19 - 1.0;
       const real_t tmp_kernel_op_46 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_45;
       const real_t tmp_kernel_op_47 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_45;
       const real_t tmp_kernel_op_48 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_49 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_50 = tmp_kernel_op_48 + tmp_kernel_op_49;
       const real_t tmp_kernel_op_51 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_52 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_53 = tmp_kernel_op_51 + tmp_kernel_op_52;
       const real_t tmp_kernel_op_54 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_55 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_6;
       const real_t tmp_kernel_op_56 = tmp_kernel_op_54 + tmp_kernel_op_55;
       const real_t tmp_kernel_op_57 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_58 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_6;
       const real_t tmp_kernel_op_59 = tmp_kernel_op_57 + tmp_kernel_op_58;
       const real_t tmp_kernel_op_60 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_61 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_12;
       const real_t tmp_kernel_op_62 = tmp_kernel_op_60 + tmp_kernel_op_61;
       const real_t tmp_kernel_op_63 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_64 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_12;
       const real_t tmp_kernel_op_65 = tmp_kernel_op_63 + tmp_kernel_op_64;
       const real_t tmp_kernel_op_66 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_19;
       const real_t tmp_kernel_op_67 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_18;
       const real_t tmp_kernel_op_68 = tmp_kernel_op_66 + tmp_kernel_op_67;
       const real_t tmp_kernel_op_69 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_19;
       const real_t tmp_kernel_op_70 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_18;
       const real_t tmp_kernel_op_71 = tmp_kernel_op_69 + tmp_kernel_op_70;
       const real_t tmp_kernel_op_72 = -tmp_kernel_op_0 + 1.3333333333333335;
       const real_t tmp_kernel_op_73 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_72 - tmp_kernel_op_48;
       const real_t tmp_kernel_op_74 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_72 - tmp_kernel_op_51;
       const real_t tmp_kernel_op_75 = -tmp_kernel_op_6 - 0.79999999999999982;
       const real_t tmp_kernel_op_76 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_75 - tmp_kernel_op_54;
       const real_t tmp_kernel_op_77 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_75 - tmp_kernel_op_57;
       const real_t tmp_kernel_op_78 = -tmp_kernel_op_12 + 2.3999999999999999;
       const real_t tmp_kernel_op_79 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_78 - tmp_kernel_op_60;
       const real_t tmp_kernel_op_80 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_78 - tmp_kernel_op_63;
       const real_t tmp_kernel_op_81 = -tmp_kernel_op_18 + 2.3999999999999999;
       const real_t tmp_kernel_op_82 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_81 - tmp_kernel_op_66;
       const real_t tmp_kernel_op_83 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_81 - tmp_kernel_op_69;
       const real_t tmp_kernel_op_84 = -tmp_kernel_op_1 + 1.3333333333333335;
       const real_t tmp_kernel_op_85 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_84 - tmp_kernel_op_49;
       const real_t tmp_kernel_op_86 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_84 - tmp_kernel_op_52;
       const real_t tmp_kernel_op_87 = -tmp_kernel_op_7 + 2.3999999999999999;
       const real_t tmp_kernel_op_88 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_87 - tmp_kernel_op_55;
       const real_t tmp_kernel_op_89 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_87 - tmp_kernel_op_58;
       const real_t tmp_kernel_op_90 = -tmp_kernel_op_13 - 0.79999999999999982;
       const real_t tmp_kernel_op_91 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_90 - tmp_kernel_op_61;
       const real_t tmp_kernel_op_92 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_90 - tmp_kernel_op_64;
       const real_t tmp_kernel_op_93 = -tmp_kernel_op_19 + 2.3999999999999999;
       const real_t tmp_kernel_op_94 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_93 - tmp_kernel_op_67;
       const real_t tmp_kernel_op_95 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_93 - tmp_kernel_op_70;
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
             const real_t tmp_blending_op_3 = p_affine_0_1 + tmp_blending_op_1*0.20000000000000001 + tmp_blending_op_2*0.20000000000000001;
             const real_t tmp_blending_op_4 = -p_affine_0_0 + p_affine_1_0;
             const real_t tmp_blending_op_5 = -p_affine_0_0 + p_affine_2_0;
             const real_t tmp_blending_op_6 = p_affine_0_0 + tmp_blending_op_4*0.20000000000000001 + tmp_blending_op_5*0.20000000000000001;
             const real_t tmp_blending_op_7 = (tmp_blending_op_6*tmp_blending_op_6);
             const real_t tmp_blending_op_8 = (tmp_blending_op_3*tmp_blending_op_3);
             const real_t tmp_blending_op_9 = tmp_blending_op_7 + tmp_blending_op_8;
             const real_t tmp_blending_op_13 = tmp_blending_op_12*pow(tmp_blending_op_9, -0.50000000000000000);
             const real_t tmp_blending_op_14 = tmp_blending_op_13*tmp_blending_op_3;
             const real_t tmp_blending_op_15 = pow(tmp_blending_op_9, -1.5000000000000000);
             const real_t tmp_blending_op_18 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_3) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_6));
             const real_t tmp_blending_op_19 = tmp_blending_op_15*tmp_blending_op_18*1.0;
             const real_t tmp_blending_op_20 = tmp_blending_op_13*tmp_blending_op_6;
             const real_t tmp_blending_op_23 = p_affine_0_1 + tmp_blending_op_1*0.59999999999999998 + tmp_blending_op_2*0.20000000000000001;
             const real_t tmp_blending_op_24 = p_affine_0_0 + tmp_blending_op_4*0.59999999999999998 + tmp_blending_op_5*0.20000000000000001;
             const real_t tmp_blending_op_25 = (tmp_blending_op_24*tmp_blending_op_24);
             const real_t tmp_blending_op_26 = (tmp_blending_op_23*tmp_blending_op_23);
             const real_t tmp_blending_op_27 = tmp_blending_op_25 + tmp_blending_op_26;
             const real_t tmp_blending_op_28 = tmp_blending_op_12*pow(tmp_blending_op_27, -0.50000000000000000);
             const real_t tmp_blending_op_29 = tmp_blending_op_23*tmp_blending_op_28;
             const real_t tmp_blending_op_30 = pow(tmp_blending_op_27, -1.5000000000000000);
             const real_t tmp_blending_op_31 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_23) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_24));
             const real_t tmp_blending_op_32 = tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t tmp_blending_op_33 = tmp_blending_op_24*tmp_blending_op_28;
             const real_t tmp_blending_op_36 = p_affine_0_1 + tmp_blending_op_1*0.20000000000000001 + tmp_blending_op_2*0.59999999999999998;
             const real_t tmp_blending_op_37 = p_affine_0_0 + tmp_blending_op_4*0.20000000000000001 + tmp_blending_op_5*0.59999999999999998;
             const real_t tmp_blending_op_38 = (tmp_blending_op_37*tmp_blending_op_37);
             const real_t tmp_blending_op_39 = (tmp_blending_op_36*tmp_blending_op_36);
             const real_t tmp_blending_op_40 = tmp_blending_op_38 + tmp_blending_op_39;
             const real_t tmp_blending_op_41 = tmp_blending_op_12*pow(tmp_blending_op_40, -0.50000000000000000);
             const real_t tmp_blending_op_42 = tmp_blending_op_36*tmp_blending_op_41;
             const real_t tmp_blending_op_43 = pow(tmp_blending_op_40, -1.5000000000000000);
             const real_t tmp_blending_op_44 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_36) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_37));
             const real_t tmp_blending_op_45 = tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t tmp_blending_op_46 = tmp_blending_op_37*tmp_blending_op_41;
             const real_t tmp_blending_op_49 = p_affine_0_1 + tmp_blending_op_1*0.33333333333333331 + tmp_blending_op_2*0.33333333333333331;
             const real_t tmp_blending_op_50 = p_affine_0_0 + tmp_blending_op_4*0.33333333333333331 + tmp_blending_op_5*0.33333333333333331;
             const real_t tmp_blending_op_51 = (tmp_blending_op_50*tmp_blending_op_50);
             const real_t tmp_blending_op_52 = (tmp_blending_op_49*tmp_blending_op_49);
             const real_t tmp_blending_op_53 = tmp_blending_op_51 + tmp_blending_op_52;
             const real_t tmp_blending_op_54 = tmp_blending_op_12*pow(tmp_blending_op_53, -0.50000000000000000);
             const real_t tmp_blending_op_55 = tmp_blending_op_49*tmp_blending_op_54;
             const real_t tmp_blending_op_56 = pow(tmp_blending_op_53, -1.5000000000000000);
             const real_t tmp_blending_op_57 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_49) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_50));
             const real_t tmp_blending_op_58 = tmp_blending_op_56*tmp_blending_op_57*1.0;
             const real_t tmp_blending_op_59 = tmp_blending_op_50*tmp_blending_op_54;
             const real_t jac_blending_1_1_q_3 = -tmp_blending_op_0*tmp_blending_op_14 + tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_7*1.0;
             const real_t jac_blending_1_0_q_3 = tmp_blending_op_10*tmp_blending_op_14 - tmp_blending_op_19*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_1_q_3 = -tmp_blending_op_0*tmp_blending_op_20 - tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_0_q_3 = tmp_blending_op_10*tmp_blending_op_20 + tmp_blending_op_19*tmp_blending_op_8;
             const real_t tmp_blending_op_21 = jac_blending_0_0_q_3*jac_blending_1_1_q_3 - jac_blending_0_1_q_3*jac_blending_1_0_q_3;
             const real_t tmp_blending_op_22 = 1.0 / (tmp_blending_op_21);
             const real_t abs_det_jac_blending_q_3 = tmp_blending_op_21;
             const real_t jac_blending_inv_1_1_q_3 = jac_blending_0_0_q_3*tmp_blending_op_22;
             const real_t jac_blending_inv_1_0_q_3 = -jac_blending_1_0_q_3*tmp_blending_op_22;
             const real_t jac_blending_inv_0_1_q_3 = -jac_blending_0_1_q_3*tmp_blending_op_22;
             const real_t jac_blending_inv_0_0_q_3 = jac_blending_1_1_q_3*tmp_blending_op_22;
             const real_t jac_blending_1_1_q_2 = -tmp_blending_op_0*tmp_blending_op_29 + tmp_blending_op_25*tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t jac_blending_1_0_q_2 = tmp_blending_op_10*tmp_blending_op_29 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_32;
             const real_t jac_blending_0_1_q_2 = -tmp_blending_op_0*tmp_blending_op_33 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_30*tmp_blending_op_31;
             const real_t jac_blending_0_0_q_2 = tmp_blending_op_10*tmp_blending_op_33 + tmp_blending_op_26*tmp_blending_op_32;
             const real_t tmp_blending_op_34 = jac_blending_0_0_q_2*jac_blending_1_1_q_2 - jac_blending_0_1_q_2*jac_blending_1_0_q_2;
             const real_t tmp_blending_op_35 = 1.0 / (tmp_blending_op_34);
             const real_t abs_det_jac_blending_q_2 = tmp_blending_op_34;
             const real_t jac_blending_inv_1_1_q_2 = jac_blending_0_0_q_2*tmp_blending_op_35;
             const real_t jac_blending_inv_1_0_q_2 = -jac_blending_1_0_q_2*tmp_blending_op_35;
             const real_t jac_blending_inv_0_1_q_2 = -jac_blending_0_1_q_2*tmp_blending_op_35;
             const real_t jac_blending_inv_0_0_q_2 = jac_blending_1_1_q_2*tmp_blending_op_35;
             const real_t jac_blending_1_1_q_1 = -tmp_blending_op_0*tmp_blending_op_42 + tmp_blending_op_38*tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t jac_blending_1_0_q_1 = tmp_blending_op_10*tmp_blending_op_42 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_45;
             const real_t jac_blending_0_1_q_1 = -tmp_blending_op_0*tmp_blending_op_46 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_43*tmp_blending_op_44;
             const real_t jac_blending_0_0_q_1 = tmp_blending_op_10*tmp_blending_op_46 + tmp_blending_op_39*tmp_blending_op_45;
             const real_t tmp_blending_op_47 = jac_blending_0_0_q_1*jac_blending_1_1_q_1 - jac_blending_0_1_q_1*jac_blending_1_0_q_1;
             const real_t tmp_blending_op_48 = 1.0 / (tmp_blending_op_47);
             const real_t abs_det_jac_blending_q_1 = tmp_blending_op_47;
             const real_t jac_blending_inv_1_1_q_1 = jac_blending_0_0_q_1*tmp_blending_op_48;
             const real_t jac_blending_inv_1_0_q_1 = -jac_blending_1_0_q_1*tmp_blending_op_48;
             const real_t jac_blending_inv_0_1_q_1 = -jac_blending_0_1_q_1*tmp_blending_op_48;
             const real_t jac_blending_inv_0_0_q_1 = jac_blending_1_1_q_1*tmp_blending_op_48;
             const real_t jac_blending_1_1_q_0 = -tmp_blending_op_0*tmp_blending_op_55 + tmp_blending_op_51*tmp_blending_op_56*tmp_blending_op_57*1.0;
             const real_t jac_blending_1_0_q_0 = tmp_blending_op_10*tmp_blending_op_55 - tmp_blending_op_49*tmp_blending_op_50*tmp_blending_op_58;
             const real_t jac_blending_0_1_q_0 = -tmp_blending_op_0*tmp_blending_op_59 - tmp_blending_op_49*tmp_blending_op_50*tmp_blending_op_56*tmp_blending_op_57;
             const real_t jac_blending_0_0_q_0 = tmp_blending_op_10*tmp_blending_op_59 + tmp_blending_op_52*tmp_blending_op_58;
             const real_t tmp_blending_op_60 = jac_blending_0_0_q_0*jac_blending_1_1_q_0 - jac_blending_0_1_q_0*jac_blending_1_0_q_0;
             const real_t tmp_blending_op_61 = 1.0 / (tmp_blending_op_60);
             const real_t abs_det_jac_blending_q_0 = tmp_blending_op_60;
             const real_t jac_blending_inv_1_1_q_0 = jac_blending_0_0_q_0*tmp_blending_op_61;
             const real_t jac_blending_inv_1_0_q_0 = -jac_blending_1_0_q_0*tmp_blending_op_61;
             const real_t jac_blending_inv_0_1_q_0 = -jac_blending_0_1_q_0*tmp_blending_op_61;
             const real_t jac_blending_inv_0_0_q_0 = jac_blending_1_1_q_0*tmp_blending_op_61;
             const real_t tmp_kernel_op_5 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_0*-0.28125;
             const real_t tmp_kernel_op_11 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_1*0.26041666666666669;
             const real_t tmp_kernel_op_17 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_2*0.26041666666666669;
             const real_t tmp_kernel_op_23 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_3*0.26041666666666669;
             const real_t elMatDiag_0 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_kernel_op_9 + jac_blending_inv_1_0_q_1*tmp_kernel_op_10)*(jac_blending_inv_0_0_q_1*tmp_kernel_op_9 + jac_blending_inv_1_0_q_1*tmp_kernel_op_10)) + ((jac_blending_inv_0_1_q_1*tmp_kernel_op_9 + jac_blending_inv_1_1_q_1*tmp_kernel_op_10)*(jac_blending_inv_0_1_q_1*tmp_kernel_op_9 + jac_blending_inv_1_1_q_1*tmp_kernel_op_10))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_kernel_op_15 + jac_blending_inv_1_0_q_2*tmp_kernel_op_16)*(jac_blending_inv_0_0_q_2*tmp_kernel_op_15 + jac_blending_inv_1_0_q_2*tmp_kernel_op_16)) + ((jac_blending_inv_0_1_q_2*tmp_kernel_op_15 + jac_blending_inv_1_1_q_2*tmp_kernel_op_16)*(jac_blending_inv_0_1_q_2*tmp_kernel_op_15 + jac_blending_inv_1_1_q_2*tmp_kernel_op_16))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_kernel_op_21 + jac_blending_inv_1_0_q_3*tmp_kernel_op_22)*(jac_blending_inv_0_0_q_3*tmp_kernel_op_21 + jac_blending_inv_1_0_q_3*tmp_kernel_op_22)) + ((jac_blending_inv_0_1_q_3*tmp_kernel_op_21 + jac_blending_inv_1_1_q_3*tmp_kernel_op_22)*(jac_blending_inv_0_1_q_3*tmp_kernel_op_21 + jac_blending_inv_1_1_q_3*tmp_kernel_op_22))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_kernel_op_3 + jac_blending_inv_1_0_q_0*tmp_kernel_op_4)*(jac_blending_inv_0_0_q_0*tmp_kernel_op_3 + jac_blending_inv_1_0_q_0*tmp_kernel_op_4)) + ((jac_blending_inv_0_1_q_0*tmp_kernel_op_3 + jac_blending_inv_1_1_q_0*tmp_kernel_op_4)*(jac_blending_inv_0_1_q_0*tmp_kernel_op_3 + jac_blending_inv_1_1_q_0*tmp_kernel_op_4)));
             const real_t elMatDiag_1 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_kernel_op_28 + jac_blending_inv_1_0_q_1*tmp_kernel_op_29)*(jac_blending_inv_0_0_q_1*tmp_kernel_op_28 + jac_blending_inv_1_0_q_1*tmp_kernel_op_29)) + ((jac_blending_inv_0_1_q_1*tmp_kernel_op_28 + jac_blending_inv_1_1_q_1*tmp_kernel_op_29)*(jac_blending_inv_0_1_q_1*tmp_kernel_op_28 + jac_blending_inv_1_1_q_1*tmp_kernel_op_29))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_kernel_op_31 + jac_blending_inv_1_0_q_2*tmp_kernel_op_32)*(jac_blending_inv_0_0_q_2*tmp_kernel_op_31 + jac_blending_inv_1_0_q_2*tmp_kernel_op_32)) + ((jac_blending_inv_0_1_q_2*tmp_kernel_op_31 + jac_blending_inv_1_1_q_2*tmp_kernel_op_32)*(jac_blending_inv_0_1_q_2*tmp_kernel_op_31 + jac_blending_inv_1_1_q_2*tmp_kernel_op_32))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_kernel_op_34 + jac_blending_inv_1_0_q_3*tmp_kernel_op_35)*(jac_blending_inv_0_0_q_3*tmp_kernel_op_34 + jac_blending_inv_1_0_q_3*tmp_kernel_op_35)) + ((jac_blending_inv_0_1_q_3*tmp_kernel_op_34 + jac_blending_inv_1_1_q_3*tmp_kernel_op_35)*(jac_blending_inv_0_1_q_3*tmp_kernel_op_34 + jac_blending_inv_1_1_q_3*tmp_kernel_op_35))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_kernel_op_25 + jac_blending_inv_1_0_q_0*tmp_kernel_op_26)*(jac_blending_inv_0_0_q_0*tmp_kernel_op_25 + jac_blending_inv_1_0_q_0*tmp_kernel_op_26)) + ((jac_blending_inv_0_1_q_0*tmp_kernel_op_25 + jac_blending_inv_1_1_q_0*tmp_kernel_op_26)*(jac_blending_inv_0_1_q_0*tmp_kernel_op_25 + jac_blending_inv_1_1_q_0*tmp_kernel_op_26)));
             const real_t elMatDiag_2 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_kernel_op_40 + jac_blending_inv_1_0_q_1*tmp_kernel_op_41)*(jac_blending_inv_0_0_q_1*tmp_kernel_op_40 + jac_blending_inv_1_0_q_1*tmp_kernel_op_41)) + ((jac_blending_inv_0_1_q_1*tmp_kernel_op_40 + jac_blending_inv_1_1_q_1*tmp_kernel_op_41)*(jac_blending_inv_0_1_q_1*tmp_kernel_op_40 + jac_blending_inv_1_1_q_1*tmp_kernel_op_41))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_kernel_op_43 + jac_blending_inv_1_0_q_2*tmp_kernel_op_44)*(jac_blending_inv_0_0_q_2*tmp_kernel_op_43 + jac_blending_inv_1_0_q_2*tmp_kernel_op_44)) + ((jac_blending_inv_0_1_q_2*tmp_kernel_op_43 + jac_blending_inv_1_1_q_2*tmp_kernel_op_44)*(jac_blending_inv_0_1_q_2*tmp_kernel_op_43 + jac_blending_inv_1_1_q_2*tmp_kernel_op_44))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_kernel_op_46 + jac_blending_inv_1_0_q_3*tmp_kernel_op_47)*(jac_blending_inv_0_0_q_3*tmp_kernel_op_46 + jac_blending_inv_1_0_q_3*tmp_kernel_op_47)) + ((jac_blending_inv_0_1_q_3*tmp_kernel_op_46 + jac_blending_inv_1_1_q_3*tmp_kernel_op_47)*(jac_blending_inv_0_1_q_3*tmp_kernel_op_46 + jac_blending_inv_1_1_q_3*tmp_kernel_op_47))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_kernel_op_37 + jac_blending_inv_1_0_q_0*tmp_kernel_op_38)*(jac_blending_inv_0_0_q_0*tmp_kernel_op_37 + jac_blending_inv_1_0_q_0*tmp_kernel_op_38)) + ((jac_blending_inv_0_1_q_0*tmp_kernel_op_37 + jac_blending_inv_1_1_q_0*tmp_kernel_op_38)*(jac_blending_inv_0_1_q_0*tmp_kernel_op_37 + jac_blending_inv_1_1_q_0*tmp_kernel_op_38)));
             const real_t elMatDiag_3 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_kernel_op_56 + jac_blending_inv_1_0_q_1*tmp_kernel_op_59)*(jac_blending_inv_0_0_q_1*tmp_kernel_op_56 + jac_blending_inv_1_0_q_1*tmp_kernel_op_59)) + ((jac_blending_inv_0_1_q_1*tmp_kernel_op_56 + jac_blending_inv_1_1_q_1*tmp_kernel_op_59)*(jac_blending_inv_0_1_q_1*tmp_kernel_op_56 + jac_blending_inv_1_1_q_1*tmp_kernel_op_59))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_kernel_op_62 + jac_blending_inv_1_0_q_2*tmp_kernel_op_65)*(jac_blending_inv_0_0_q_2*tmp_kernel_op_62 + jac_blending_inv_1_0_q_2*tmp_kernel_op_65)) + ((jac_blending_inv_0_1_q_2*tmp_kernel_op_62 + jac_blending_inv_1_1_q_2*tmp_kernel_op_65)*(jac_blending_inv_0_1_q_2*tmp_kernel_op_62 + jac_blending_inv_1_1_q_2*tmp_kernel_op_65))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_kernel_op_68 + jac_blending_inv_1_0_q_3*tmp_kernel_op_71)*(jac_blending_inv_0_0_q_3*tmp_kernel_op_68 + jac_blending_inv_1_0_q_3*tmp_kernel_op_71)) + ((jac_blending_inv_0_1_q_3*tmp_kernel_op_68 + jac_blending_inv_1_1_q_3*tmp_kernel_op_71)*(jac_blending_inv_0_1_q_3*tmp_kernel_op_68 + jac_blending_inv_1_1_q_3*tmp_kernel_op_71))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_kernel_op_50 + jac_blending_inv_1_0_q_0*tmp_kernel_op_53)*(jac_blending_inv_0_0_q_0*tmp_kernel_op_50 + jac_blending_inv_1_0_q_0*tmp_kernel_op_53)) + ((jac_blending_inv_0_1_q_0*tmp_kernel_op_50 + jac_blending_inv_1_1_q_0*tmp_kernel_op_53)*(jac_blending_inv_0_1_q_0*tmp_kernel_op_50 + jac_blending_inv_1_1_q_0*tmp_kernel_op_53)));
             const real_t elMatDiag_4 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_kernel_op_76 + jac_blending_inv_1_0_q_1*tmp_kernel_op_77)*(jac_blending_inv_0_0_q_1*tmp_kernel_op_76 + jac_blending_inv_1_0_q_1*tmp_kernel_op_77)) + ((jac_blending_inv_0_1_q_1*tmp_kernel_op_76 + jac_blending_inv_1_1_q_1*tmp_kernel_op_77)*(jac_blending_inv_0_1_q_1*tmp_kernel_op_76 + jac_blending_inv_1_1_q_1*tmp_kernel_op_77))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_kernel_op_79 + jac_blending_inv_1_0_q_2*tmp_kernel_op_80)*(jac_blending_inv_0_0_q_2*tmp_kernel_op_79 + jac_blending_inv_1_0_q_2*tmp_kernel_op_80)) + ((jac_blending_inv_0_1_q_2*tmp_kernel_op_79 + jac_blending_inv_1_1_q_2*tmp_kernel_op_80)*(jac_blending_inv_0_1_q_2*tmp_kernel_op_79 + jac_blending_inv_1_1_q_2*tmp_kernel_op_80))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_kernel_op_82 + jac_blending_inv_1_0_q_3*tmp_kernel_op_83)*(jac_blending_inv_0_0_q_3*tmp_kernel_op_82 + jac_blending_inv_1_0_q_3*tmp_kernel_op_83)) + ((jac_blending_inv_0_1_q_3*tmp_kernel_op_82 + jac_blending_inv_1_1_q_3*tmp_kernel_op_83)*(jac_blending_inv_0_1_q_3*tmp_kernel_op_82 + jac_blending_inv_1_1_q_3*tmp_kernel_op_83))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_kernel_op_73 + jac_blending_inv_1_0_q_0*tmp_kernel_op_74)*(jac_blending_inv_0_0_q_0*tmp_kernel_op_73 + jac_blending_inv_1_0_q_0*tmp_kernel_op_74)) + ((jac_blending_inv_0_1_q_0*tmp_kernel_op_73 + jac_blending_inv_1_1_q_0*tmp_kernel_op_74)*(jac_blending_inv_0_1_q_0*tmp_kernel_op_73 + jac_blending_inv_1_1_q_0*tmp_kernel_op_74)));
             const real_t elMatDiag_5 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_kernel_op_88 + jac_blending_inv_1_0_q_1*tmp_kernel_op_89)*(jac_blending_inv_0_0_q_1*tmp_kernel_op_88 + jac_blending_inv_1_0_q_1*tmp_kernel_op_89)) + ((jac_blending_inv_0_1_q_1*tmp_kernel_op_88 + jac_blending_inv_1_1_q_1*tmp_kernel_op_89)*(jac_blending_inv_0_1_q_1*tmp_kernel_op_88 + jac_blending_inv_1_1_q_1*tmp_kernel_op_89))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_kernel_op_91 + jac_blending_inv_1_0_q_2*tmp_kernel_op_92)*(jac_blending_inv_0_0_q_2*tmp_kernel_op_91 + jac_blending_inv_1_0_q_2*tmp_kernel_op_92)) + ((jac_blending_inv_0_1_q_2*tmp_kernel_op_91 + jac_blending_inv_1_1_q_2*tmp_kernel_op_92)*(jac_blending_inv_0_1_q_2*tmp_kernel_op_91 + jac_blending_inv_1_1_q_2*tmp_kernel_op_92))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_kernel_op_94 + jac_blending_inv_1_0_q_3*tmp_kernel_op_95)*(jac_blending_inv_0_0_q_3*tmp_kernel_op_94 + jac_blending_inv_1_0_q_3*tmp_kernel_op_95)) + ((jac_blending_inv_0_1_q_3*tmp_kernel_op_94 + jac_blending_inv_1_1_q_3*tmp_kernel_op_95)*(jac_blending_inv_0_1_q_3*tmp_kernel_op_94 + jac_blending_inv_1_1_q_3*tmp_kernel_op_95))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_kernel_op_85 + jac_blending_inv_1_0_q_0*tmp_kernel_op_86)*(jac_blending_inv_0_0_q_0*tmp_kernel_op_85 + jac_blending_inv_1_0_q_0*tmp_kernel_op_86)) + ((jac_blending_inv_0_1_q_0*tmp_kernel_op_85 + jac_blending_inv_1_1_q_0*tmp_kernel_op_86)*(jac_blending_inv_0_1_q_0*tmp_kernel_op_85 + jac_blending_inv_1_1_q_0*tmp_kernel_op_86)));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
       const real_t tmp_moved_constant_0 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_1 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_2 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_8 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_8;
       const real_t tmp_moved_constant_3 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_8 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_8;
       const real_t tmp_moved_constant_4 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_14 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_5 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_14 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_6 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_20 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_20;
       const real_t tmp_moved_constant_7 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_20 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_20;
       const real_t tmp_moved_constant_8 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_24;
       const real_t tmp_moved_constant_9 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_24;
       const real_t tmp_moved_constant_10 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_27;
       const real_t tmp_moved_constant_11 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_27;
       const real_t tmp_moved_constant_12 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_30;
       const real_t tmp_moved_constant_13 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_30;
       const real_t tmp_moved_constant_14 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_33;
       const real_t tmp_moved_constant_15 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_33;
       const real_t tmp_moved_constant_16 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_36;
       const real_t tmp_moved_constant_17 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_36;
       const real_t tmp_moved_constant_18 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_39;
       const real_t tmp_moved_constant_19 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_39;
       const real_t tmp_moved_constant_20 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_42;
       const real_t tmp_moved_constant_21 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_42;
       const real_t tmp_moved_constant_22 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_45;
       const real_t tmp_moved_constant_23 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_45;
       const real_t tmp_moved_constant_24 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_1;
       const real_t tmp_moved_constant_25 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_26 = tmp_moved_constant_24 + tmp_moved_constant_25;
       const real_t tmp_moved_constant_27 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const real_t tmp_moved_constant_28 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_29 = tmp_moved_constant_27 + tmp_moved_constant_28;
       const real_t tmp_moved_constant_30 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_31 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_6;
       const real_t tmp_moved_constant_32 = tmp_moved_constant_30 + tmp_moved_constant_31;
       const real_t tmp_moved_constant_33 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_34 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_6;
       const real_t tmp_moved_constant_35 = tmp_moved_constant_33 + tmp_moved_constant_34;
       const real_t tmp_moved_constant_36 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_13;
       const real_t tmp_moved_constant_37 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_12;
       const real_t tmp_moved_constant_38 = tmp_moved_constant_36 + tmp_moved_constant_37;
       const real_t tmp_moved_constant_39 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_13;
       const real_t tmp_moved_constant_40 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_12;
       const real_t tmp_moved_constant_41 = tmp_moved_constant_39 + tmp_moved_constant_40;
       const real_t tmp_moved_constant_42 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_19;
       const real_t tmp_moved_constant_43 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_18;
       const real_t tmp_moved_constant_44 = tmp_moved_constant_42 + tmp_moved_constant_43;
       const real_t tmp_moved_constant_45 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_19;
       const real_t tmp_moved_constant_46 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_18;
       const real_t tmp_moved_constant_47 = tmp_moved_constant_45 + tmp_moved_constant_46;
       const real_t tmp_moved_constant_48 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_72 - tmp_moved_constant_24;
       const real_t tmp_moved_constant_49 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_72 - tmp_moved_constant_27;
       const real_t tmp_moved_constant_50 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_75 - tmp_moved_constant_30;
       const real_t tmp_moved_constant_51 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_75 - tmp_moved_constant_33;
       const real_t tmp_moved_constant_52 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_78 - tmp_moved_constant_36;
       const real_t tmp_moved_constant_53 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_78 - tmp_moved_constant_39;
       const real_t tmp_moved_constant_54 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_81 - tmp_moved_constant_42;
       const real_t tmp_moved_constant_55 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_81 - tmp_moved_constant_45;
       const real_t tmp_moved_constant_56 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_84 - tmp_moved_constant_25;
       const real_t tmp_moved_constant_57 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_84 - tmp_moved_constant_28;
       const real_t tmp_moved_constant_58 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_87 - tmp_moved_constant_31;
       const real_t tmp_moved_constant_59 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_87 - tmp_moved_constant_34;
       const real_t tmp_moved_constant_60 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_90 - tmp_moved_constant_37;
       const real_t tmp_moved_constant_61 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_90 - tmp_moved_constant_40;
       const real_t tmp_moved_constant_62 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_93 - tmp_moved_constant_43;
       const real_t tmp_moved_constant_63 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_93 - tmp_moved_constant_46;
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
             const real_t tmp_blending_op_3 = p_affine_0_1 + tmp_blending_op_1*0.20000000000000001 + tmp_blending_op_2*0.20000000000000001;
             const real_t tmp_blending_op_4 = -p_affine_0_0 + p_affine_1_0;
             const real_t tmp_blending_op_5 = -p_affine_0_0 + p_affine_2_0;
             const real_t tmp_blending_op_6 = p_affine_0_0 + tmp_blending_op_4*0.20000000000000001 + tmp_blending_op_5*0.20000000000000001;
             const real_t tmp_blending_op_7 = (tmp_blending_op_6*tmp_blending_op_6);
             const real_t tmp_blending_op_8 = (tmp_blending_op_3*tmp_blending_op_3);
             const real_t tmp_blending_op_9 = tmp_blending_op_7 + tmp_blending_op_8;
             const real_t tmp_blending_op_13 = tmp_blending_op_12*pow(tmp_blending_op_9, -0.50000000000000000);
             const real_t tmp_blending_op_14 = tmp_blending_op_13*tmp_blending_op_3;
             const real_t tmp_blending_op_15 = pow(tmp_blending_op_9, -1.5000000000000000);
             const real_t tmp_blending_op_18 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_3) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_6));
             const real_t tmp_blending_op_19 = tmp_blending_op_15*tmp_blending_op_18*1.0;
             const real_t tmp_blending_op_20 = tmp_blending_op_13*tmp_blending_op_6;
             const real_t tmp_blending_op_23 = p_affine_0_1 + tmp_blending_op_1*0.59999999999999998 + tmp_blending_op_2*0.20000000000000001;
             const real_t tmp_blending_op_24 = p_affine_0_0 + tmp_blending_op_4*0.59999999999999998 + tmp_blending_op_5*0.20000000000000001;
             const real_t tmp_blending_op_25 = (tmp_blending_op_24*tmp_blending_op_24);
             const real_t tmp_blending_op_26 = (tmp_blending_op_23*tmp_blending_op_23);
             const real_t tmp_blending_op_27 = tmp_blending_op_25 + tmp_blending_op_26;
             const real_t tmp_blending_op_28 = tmp_blending_op_12*pow(tmp_blending_op_27, -0.50000000000000000);
             const real_t tmp_blending_op_29 = tmp_blending_op_23*tmp_blending_op_28;
             const real_t tmp_blending_op_30 = pow(tmp_blending_op_27, -1.5000000000000000);
             const real_t tmp_blending_op_31 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_23) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_24));
             const real_t tmp_blending_op_32 = tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t tmp_blending_op_33 = tmp_blending_op_24*tmp_blending_op_28;
             const real_t tmp_blending_op_36 = p_affine_0_1 + tmp_blending_op_1*0.20000000000000001 + tmp_blending_op_2*0.59999999999999998;
             const real_t tmp_blending_op_37 = p_affine_0_0 + tmp_blending_op_4*0.20000000000000001 + tmp_blending_op_5*0.59999999999999998;
             const real_t tmp_blending_op_38 = (tmp_blending_op_37*tmp_blending_op_37);
             const real_t tmp_blending_op_39 = (tmp_blending_op_36*tmp_blending_op_36);
             const real_t tmp_blending_op_40 = tmp_blending_op_38 + tmp_blending_op_39;
             const real_t tmp_blending_op_41 = tmp_blending_op_12*pow(tmp_blending_op_40, -0.50000000000000000);
             const real_t tmp_blending_op_42 = tmp_blending_op_36*tmp_blending_op_41;
             const real_t tmp_blending_op_43 = pow(tmp_blending_op_40, -1.5000000000000000);
             const real_t tmp_blending_op_44 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_36) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_37));
             const real_t tmp_blending_op_45 = tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t tmp_blending_op_46 = tmp_blending_op_37*tmp_blending_op_41;
             const real_t tmp_blending_op_49 = p_affine_0_1 + tmp_blending_op_1*0.33333333333333331 + tmp_blending_op_2*0.33333333333333331;
             const real_t tmp_blending_op_50 = p_affine_0_0 + tmp_blending_op_4*0.33333333333333331 + tmp_blending_op_5*0.33333333333333331;
             const real_t tmp_blending_op_51 = (tmp_blending_op_50*tmp_blending_op_50);
             const real_t tmp_blending_op_52 = (tmp_blending_op_49*tmp_blending_op_49);
             const real_t tmp_blending_op_53 = tmp_blending_op_51 + tmp_blending_op_52;
             const real_t tmp_blending_op_54 = tmp_blending_op_12*pow(tmp_blending_op_53, -0.50000000000000000);
             const real_t tmp_blending_op_55 = tmp_blending_op_49*tmp_blending_op_54;
             const real_t tmp_blending_op_56 = pow(tmp_blending_op_53, -1.5000000000000000);
             const real_t tmp_blending_op_57 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_49) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_50));
             const real_t tmp_blending_op_58 = tmp_blending_op_56*tmp_blending_op_57*1.0;
             const real_t tmp_blending_op_59 = tmp_blending_op_50*tmp_blending_op_54;
             const real_t jac_blending_1_1_q_3 = -tmp_blending_op_0*tmp_blending_op_14 + tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_7*1.0;
             const real_t jac_blending_1_0_q_3 = tmp_blending_op_10*tmp_blending_op_14 - tmp_blending_op_19*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_1_q_3 = -tmp_blending_op_0*tmp_blending_op_20 - tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_0_q_3 = tmp_blending_op_10*tmp_blending_op_20 + tmp_blending_op_19*tmp_blending_op_8;
             const real_t tmp_blending_op_21 = jac_blending_0_0_q_3*jac_blending_1_1_q_3 - jac_blending_0_1_q_3*jac_blending_1_0_q_3;
             const real_t tmp_blending_op_22 = 1.0 / (tmp_blending_op_21);
             const real_t abs_det_jac_blending_q_3 = tmp_blending_op_21;
             const real_t jac_blending_inv_1_1_q_3 = jac_blending_0_0_q_3*tmp_blending_op_22;
             const real_t jac_blending_inv_1_0_q_3 = -jac_blending_1_0_q_3*tmp_blending_op_22;
             const real_t jac_blending_inv_0_1_q_3 = -jac_blending_0_1_q_3*tmp_blending_op_22;
             const real_t jac_blending_inv_0_0_q_3 = jac_blending_1_1_q_3*tmp_blending_op_22;
             const real_t jac_blending_1_1_q_2 = -tmp_blending_op_0*tmp_blending_op_29 + tmp_blending_op_25*tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t jac_blending_1_0_q_2 = tmp_blending_op_10*tmp_blending_op_29 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_32;
             const real_t jac_blending_0_1_q_2 = -tmp_blending_op_0*tmp_blending_op_33 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_30*tmp_blending_op_31;
             const real_t jac_blending_0_0_q_2 = tmp_blending_op_10*tmp_blending_op_33 + tmp_blending_op_26*tmp_blending_op_32;
             const real_t tmp_blending_op_34 = jac_blending_0_0_q_2*jac_blending_1_1_q_2 - jac_blending_0_1_q_2*jac_blending_1_0_q_2;
             const real_t tmp_blending_op_35 = 1.0 / (tmp_blending_op_34);
             const real_t abs_det_jac_blending_q_2 = tmp_blending_op_34;
             const real_t jac_blending_inv_1_1_q_2 = jac_blending_0_0_q_2*tmp_blending_op_35;
             const real_t jac_blending_inv_1_0_q_2 = -jac_blending_1_0_q_2*tmp_blending_op_35;
             const real_t jac_blending_inv_0_1_q_2 = -jac_blending_0_1_q_2*tmp_blending_op_35;
             const real_t jac_blending_inv_0_0_q_2 = jac_blending_1_1_q_2*tmp_blending_op_35;
             const real_t jac_blending_1_1_q_1 = -tmp_blending_op_0*tmp_blending_op_42 + tmp_blending_op_38*tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t jac_blending_1_0_q_1 = tmp_blending_op_10*tmp_blending_op_42 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_45;
             const real_t jac_blending_0_1_q_1 = -tmp_blending_op_0*tmp_blending_op_46 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_43*tmp_blending_op_44;
             const real_t jac_blending_0_0_q_1 = tmp_blending_op_10*tmp_blending_op_46 + tmp_blending_op_39*tmp_blending_op_45;
             const real_t tmp_blending_op_47 = jac_blending_0_0_q_1*jac_blending_1_1_q_1 - jac_blending_0_1_q_1*jac_blending_1_0_q_1;
             const real_t tmp_blending_op_48 = 1.0 / (tmp_blending_op_47);
             const real_t abs_det_jac_blending_q_1 = tmp_blending_op_47;
             const real_t jac_blending_inv_1_1_q_1 = jac_blending_0_0_q_1*tmp_blending_op_48;
             const real_t jac_blending_inv_1_0_q_1 = -jac_blending_1_0_q_1*tmp_blending_op_48;
             const real_t jac_blending_inv_0_1_q_1 = -jac_blending_0_1_q_1*tmp_blending_op_48;
             const real_t jac_blending_inv_0_0_q_1 = jac_blending_1_1_q_1*tmp_blending_op_48;
             const real_t jac_blending_1_1_q_0 = -tmp_blending_op_0*tmp_blending_op_55 + tmp_blending_op_51*tmp_blending_op_56*tmp_blending_op_57*1.0;
             const real_t jac_blending_1_0_q_0 = tmp_blending_op_10*tmp_blending_op_55 - tmp_blending_op_49*tmp_blending_op_50*tmp_blending_op_58;
             const real_t jac_blending_0_1_q_0 = -tmp_blending_op_0*tmp_blending_op_59 - tmp_blending_op_49*tmp_blending_op_50*tmp_blending_op_56*tmp_blending_op_57;
             const real_t jac_blending_0_0_q_0 = tmp_blending_op_10*tmp_blending_op_59 + tmp_blending_op_52*tmp_blending_op_58;
             const real_t tmp_blending_op_60 = jac_blending_0_0_q_0*jac_blending_1_1_q_0 - jac_blending_0_1_q_0*jac_blending_1_0_q_0;
             const real_t tmp_blending_op_61 = 1.0 / (tmp_blending_op_60);
             const real_t abs_det_jac_blending_q_0 = tmp_blending_op_60;
             const real_t jac_blending_inv_1_1_q_0 = jac_blending_0_0_q_0*tmp_blending_op_61;
             const real_t jac_blending_inv_1_0_q_0 = -jac_blending_1_0_q_0*tmp_blending_op_61;
             const real_t jac_blending_inv_0_1_q_0 = -jac_blending_0_1_q_0*tmp_blending_op_61;
             const real_t jac_blending_inv_0_0_q_0 = jac_blending_1_1_q_0*tmp_blending_op_61;
             const real_t tmp_kernel_op_5 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_0*-0.28125;
             const real_t tmp_kernel_op_11 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_1*0.26041666666666669;
             const real_t tmp_kernel_op_17 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_2*0.26041666666666669;
             const real_t tmp_kernel_op_23 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_3*0.26041666666666669;
             const real_t elMatDiag_0 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_moved_constant_2 + jac_blending_inv_1_0_q_1*tmp_moved_constant_3)*(jac_blending_inv_0_0_q_1*tmp_moved_constant_2 + jac_blending_inv_1_0_q_1*tmp_moved_constant_3)) + ((jac_blending_inv_0_1_q_1*tmp_moved_constant_2 + jac_blending_inv_1_1_q_1*tmp_moved_constant_3)*(jac_blending_inv_0_1_q_1*tmp_moved_constant_2 + jac_blending_inv_1_1_q_1*tmp_moved_constant_3))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_moved_constant_4 + jac_blending_inv_1_0_q_2*tmp_moved_constant_5)*(jac_blending_inv_0_0_q_2*tmp_moved_constant_4 + jac_blending_inv_1_0_q_2*tmp_moved_constant_5)) + ((jac_blending_inv_0_1_q_2*tmp_moved_constant_4 + jac_blending_inv_1_1_q_2*tmp_moved_constant_5)*(jac_blending_inv_0_1_q_2*tmp_moved_constant_4 + jac_blending_inv_1_1_q_2*tmp_moved_constant_5))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_moved_constant_6 + jac_blending_inv_1_0_q_3*tmp_moved_constant_7)*(jac_blending_inv_0_0_q_3*tmp_moved_constant_6 + jac_blending_inv_1_0_q_3*tmp_moved_constant_7)) + ((jac_blending_inv_0_1_q_3*tmp_moved_constant_6 + jac_blending_inv_1_1_q_3*tmp_moved_constant_7)*(jac_blending_inv_0_1_q_3*tmp_moved_constant_6 + jac_blending_inv_1_1_q_3*tmp_moved_constant_7))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_moved_constant_0 + jac_blending_inv_1_0_q_0*tmp_moved_constant_1)*(jac_blending_inv_0_0_q_0*tmp_moved_constant_0 + jac_blending_inv_1_0_q_0*tmp_moved_constant_1)) + ((jac_blending_inv_0_1_q_0*tmp_moved_constant_0 + jac_blending_inv_1_1_q_0*tmp_moved_constant_1)*(jac_blending_inv_0_1_q_0*tmp_moved_constant_0 + jac_blending_inv_1_1_q_0*tmp_moved_constant_1)));
             const real_t elMatDiag_1 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_moved_constant_10 + jac_blending_inv_1_0_q_1*tmp_moved_constant_11)*(jac_blending_inv_0_0_q_1*tmp_moved_constant_10 + jac_blending_inv_1_0_q_1*tmp_moved_constant_11)) + ((jac_blending_inv_0_1_q_1*tmp_moved_constant_10 + jac_blending_inv_1_1_q_1*tmp_moved_constant_11)*(jac_blending_inv_0_1_q_1*tmp_moved_constant_10 + jac_blending_inv_1_1_q_1*tmp_moved_constant_11))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_moved_constant_12 + jac_blending_inv_1_0_q_2*tmp_moved_constant_13)*(jac_blending_inv_0_0_q_2*tmp_moved_constant_12 + jac_blending_inv_1_0_q_2*tmp_moved_constant_13)) + ((jac_blending_inv_0_1_q_2*tmp_moved_constant_12 + jac_blending_inv_1_1_q_2*tmp_moved_constant_13)*(jac_blending_inv_0_1_q_2*tmp_moved_constant_12 + jac_blending_inv_1_1_q_2*tmp_moved_constant_13))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_moved_constant_14 + jac_blending_inv_1_0_q_3*tmp_moved_constant_15)*(jac_blending_inv_0_0_q_3*tmp_moved_constant_14 + jac_blending_inv_1_0_q_3*tmp_moved_constant_15)) + ((jac_blending_inv_0_1_q_3*tmp_moved_constant_14 + jac_blending_inv_1_1_q_3*tmp_moved_constant_15)*(jac_blending_inv_0_1_q_3*tmp_moved_constant_14 + jac_blending_inv_1_1_q_3*tmp_moved_constant_15))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_moved_constant_8 + jac_blending_inv_1_0_q_0*tmp_moved_constant_9)*(jac_blending_inv_0_0_q_0*tmp_moved_constant_8 + jac_blending_inv_1_0_q_0*tmp_moved_constant_9)) + ((jac_blending_inv_0_1_q_0*tmp_moved_constant_8 + jac_blending_inv_1_1_q_0*tmp_moved_constant_9)*(jac_blending_inv_0_1_q_0*tmp_moved_constant_8 + jac_blending_inv_1_1_q_0*tmp_moved_constant_9)));
             const real_t elMatDiag_2 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_moved_constant_18 + jac_blending_inv_1_0_q_1*tmp_moved_constant_19)*(jac_blending_inv_0_0_q_1*tmp_moved_constant_18 + jac_blending_inv_1_0_q_1*tmp_moved_constant_19)) + ((jac_blending_inv_0_1_q_1*tmp_moved_constant_18 + jac_blending_inv_1_1_q_1*tmp_moved_constant_19)*(jac_blending_inv_0_1_q_1*tmp_moved_constant_18 + jac_blending_inv_1_1_q_1*tmp_moved_constant_19))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_moved_constant_20 + jac_blending_inv_1_0_q_2*tmp_moved_constant_21)*(jac_blending_inv_0_0_q_2*tmp_moved_constant_20 + jac_blending_inv_1_0_q_2*tmp_moved_constant_21)) + ((jac_blending_inv_0_1_q_2*tmp_moved_constant_20 + jac_blending_inv_1_1_q_2*tmp_moved_constant_21)*(jac_blending_inv_0_1_q_2*tmp_moved_constant_20 + jac_blending_inv_1_1_q_2*tmp_moved_constant_21))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_moved_constant_22 + jac_blending_inv_1_0_q_3*tmp_moved_constant_23)*(jac_blending_inv_0_0_q_3*tmp_moved_constant_22 + jac_blending_inv_1_0_q_3*tmp_moved_constant_23)) + ((jac_blending_inv_0_1_q_3*tmp_moved_constant_22 + jac_blending_inv_1_1_q_3*tmp_moved_constant_23)*(jac_blending_inv_0_1_q_3*tmp_moved_constant_22 + jac_blending_inv_1_1_q_3*tmp_moved_constant_23))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_moved_constant_16 + jac_blending_inv_1_0_q_0*tmp_moved_constant_17)*(jac_blending_inv_0_0_q_0*tmp_moved_constant_16 + jac_blending_inv_1_0_q_0*tmp_moved_constant_17)) + ((jac_blending_inv_0_1_q_0*tmp_moved_constant_16 + jac_blending_inv_1_1_q_0*tmp_moved_constant_17)*(jac_blending_inv_0_1_q_0*tmp_moved_constant_16 + jac_blending_inv_1_1_q_0*tmp_moved_constant_17)));
             const real_t elMatDiag_3 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_moved_constant_32 + jac_blending_inv_1_0_q_1*tmp_moved_constant_35)*(jac_blending_inv_0_0_q_1*tmp_moved_constant_32 + jac_blending_inv_1_0_q_1*tmp_moved_constant_35)) + ((jac_blending_inv_0_1_q_1*tmp_moved_constant_32 + jac_blending_inv_1_1_q_1*tmp_moved_constant_35)*(jac_blending_inv_0_1_q_1*tmp_moved_constant_32 + jac_blending_inv_1_1_q_1*tmp_moved_constant_35))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_moved_constant_38 + jac_blending_inv_1_0_q_2*tmp_moved_constant_41)*(jac_blending_inv_0_0_q_2*tmp_moved_constant_38 + jac_blending_inv_1_0_q_2*tmp_moved_constant_41)) + ((jac_blending_inv_0_1_q_2*tmp_moved_constant_38 + jac_blending_inv_1_1_q_2*tmp_moved_constant_41)*(jac_blending_inv_0_1_q_2*tmp_moved_constant_38 + jac_blending_inv_1_1_q_2*tmp_moved_constant_41))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_moved_constant_44 + jac_blending_inv_1_0_q_3*tmp_moved_constant_47)*(jac_blending_inv_0_0_q_3*tmp_moved_constant_44 + jac_blending_inv_1_0_q_3*tmp_moved_constant_47)) + ((jac_blending_inv_0_1_q_3*tmp_moved_constant_44 + jac_blending_inv_1_1_q_3*tmp_moved_constant_47)*(jac_blending_inv_0_1_q_3*tmp_moved_constant_44 + jac_blending_inv_1_1_q_3*tmp_moved_constant_47))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_moved_constant_26 + jac_blending_inv_1_0_q_0*tmp_moved_constant_29)*(jac_blending_inv_0_0_q_0*tmp_moved_constant_26 + jac_blending_inv_1_0_q_0*tmp_moved_constant_29)) + ((jac_blending_inv_0_1_q_0*tmp_moved_constant_26 + jac_blending_inv_1_1_q_0*tmp_moved_constant_29)*(jac_blending_inv_0_1_q_0*tmp_moved_constant_26 + jac_blending_inv_1_1_q_0*tmp_moved_constant_29)));
             const real_t elMatDiag_4 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_moved_constant_50 + jac_blending_inv_1_0_q_1*tmp_moved_constant_51)*(jac_blending_inv_0_0_q_1*tmp_moved_constant_50 + jac_blending_inv_1_0_q_1*tmp_moved_constant_51)) + ((jac_blending_inv_0_1_q_1*tmp_moved_constant_50 + jac_blending_inv_1_1_q_1*tmp_moved_constant_51)*(jac_blending_inv_0_1_q_1*tmp_moved_constant_50 + jac_blending_inv_1_1_q_1*tmp_moved_constant_51))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_moved_constant_52 + jac_blending_inv_1_0_q_2*tmp_moved_constant_53)*(jac_blending_inv_0_0_q_2*tmp_moved_constant_52 + jac_blending_inv_1_0_q_2*tmp_moved_constant_53)) + ((jac_blending_inv_0_1_q_2*tmp_moved_constant_52 + jac_blending_inv_1_1_q_2*tmp_moved_constant_53)*(jac_blending_inv_0_1_q_2*tmp_moved_constant_52 + jac_blending_inv_1_1_q_2*tmp_moved_constant_53))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_moved_constant_54 + jac_blending_inv_1_0_q_3*tmp_moved_constant_55)*(jac_blending_inv_0_0_q_3*tmp_moved_constant_54 + jac_blending_inv_1_0_q_3*tmp_moved_constant_55)) + ((jac_blending_inv_0_1_q_3*tmp_moved_constant_54 + jac_blending_inv_1_1_q_3*tmp_moved_constant_55)*(jac_blending_inv_0_1_q_3*tmp_moved_constant_54 + jac_blending_inv_1_1_q_3*tmp_moved_constant_55))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_moved_constant_48 + jac_blending_inv_1_0_q_0*tmp_moved_constant_49)*(jac_blending_inv_0_0_q_0*tmp_moved_constant_48 + jac_blending_inv_1_0_q_0*tmp_moved_constant_49)) + ((jac_blending_inv_0_1_q_0*tmp_moved_constant_48 + jac_blending_inv_1_1_q_0*tmp_moved_constant_49)*(jac_blending_inv_0_1_q_0*tmp_moved_constant_48 + jac_blending_inv_1_1_q_0*tmp_moved_constant_49)));
             const real_t elMatDiag_5 = tmp_kernel_op_11*(((jac_blending_inv_0_0_q_1*tmp_moved_constant_58 + jac_blending_inv_1_0_q_1*tmp_moved_constant_59)*(jac_blending_inv_0_0_q_1*tmp_moved_constant_58 + jac_blending_inv_1_0_q_1*tmp_moved_constant_59)) + ((jac_blending_inv_0_1_q_1*tmp_moved_constant_58 + jac_blending_inv_1_1_q_1*tmp_moved_constant_59)*(jac_blending_inv_0_1_q_1*tmp_moved_constant_58 + jac_blending_inv_1_1_q_1*tmp_moved_constant_59))) + tmp_kernel_op_17*(((jac_blending_inv_0_0_q_2*tmp_moved_constant_60 + jac_blending_inv_1_0_q_2*tmp_moved_constant_61)*(jac_blending_inv_0_0_q_2*tmp_moved_constant_60 + jac_blending_inv_1_0_q_2*tmp_moved_constant_61)) + ((jac_blending_inv_0_1_q_2*tmp_moved_constant_60 + jac_blending_inv_1_1_q_2*tmp_moved_constant_61)*(jac_blending_inv_0_1_q_2*tmp_moved_constant_60 + jac_blending_inv_1_1_q_2*tmp_moved_constant_61))) + tmp_kernel_op_23*(((jac_blending_inv_0_0_q_3*tmp_moved_constant_62 + jac_blending_inv_1_0_q_3*tmp_moved_constant_63)*(jac_blending_inv_0_0_q_3*tmp_moved_constant_62 + jac_blending_inv_1_0_q_3*tmp_moved_constant_63)) + ((jac_blending_inv_0_1_q_3*tmp_moved_constant_62 + jac_blending_inv_1_1_q_3*tmp_moved_constant_63)*(jac_blending_inv_0_1_q_3*tmp_moved_constant_62 + jac_blending_inv_1_1_q_3*tmp_moved_constant_63))) + tmp_kernel_op_5*(((jac_blending_inv_0_0_q_0*tmp_moved_constant_56 + jac_blending_inv_1_0_q_0*tmp_moved_constant_57)*(jac_blending_inv_0_0_q_0*tmp_moved_constant_56 + jac_blending_inv_1_0_q_0*tmp_moved_constant_57)) + ((jac_blending_inv_0_1_q_0*tmp_moved_constant_56 + jac_blending_inv_1_1_q_0*tmp_moved_constant_57)*(jac_blending_inv_0_1_q_0*tmp_moved_constant_56 + jac_blending_inv_1_1_q_0*tmp_moved_constant_57)));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
