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

































#include "../P1ToP2VectorElementwiseGradientAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ToP2VectorElementwiseGradientAnnulusMap::applyScaled_P1ToP2VectorElementwiseGradientAnnulusMap_macro_2D( real_t * RESTRICT  _data_dst_edge_0, real_t * RESTRICT  _data_dst_edge_1, real_t * RESTRICT  _data_dst_vertex_0, real_t * RESTRICT  _data_dst_vertex_1, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t tmp_kernel_op_0 = 0.66666666666666663;
       const real_t tmp_kernel_op_1 = 2.6666666666666665;
       const real_t tmp_kernel_op_2 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const real_t tmp_kernel_op_3 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_4 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_7 = 2.6666666666666665;
       const real_t tmp_kernel_op_8 = 0.66666666666666663;
       const real_t tmp_kernel_op_9 = tmp_kernel_op_7 + tmp_kernel_op_8 - 3.0;
       const real_t tmp_kernel_op_10 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_9;
       const real_t tmp_kernel_op_11 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_9;
       const real_t tmp_kernel_op_14 = 0.66666666666666663;
       const real_t tmp_kernel_op_15 = 0.66666666666666663;
       const real_t tmp_kernel_op_16 = tmp_kernel_op_14 + tmp_kernel_op_15 - 3.0;
       const real_t tmp_kernel_op_17 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_16 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_16;
       const real_t tmp_kernel_op_18 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_16 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_16;
       const real_t tmp_kernel_op_21 = 0.16666666666666674;
       const real_t tmp_kernel_op_22 = 0.16666666666666671;
       const real_t tmp_kernel_op_23 = 0.66666666666666674;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_0 - 1.0;
       const real_t tmp_kernel_op_25 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_26 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_28 = tmp_kernel_op_7 - 1.0;
       const real_t tmp_kernel_op_29 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_28;
       const real_t tmp_kernel_op_30 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_28;
       const real_t tmp_kernel_op_32 = tmp_kernel_op_14 - 1.0;
       const real_t tmp_kernel_op_33 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_32;
       const real_t tmp_kernel_op_34 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_32;
       const real_t tmp_kernel_op_36 = tmp_kernel_op_1 - 1.0;
       const real_t tmp_kernel_op_37 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_36;
       const real_t tmp_kernel_op_38 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_36;
       const real_t tmp_kernel_op_40 = tmp_kernel_op_8 - 1.0;
       const real_t tmp_kernel_op_41 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_40;
       const real_t tmp_kernel_op_42 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_40;
       const real_t tmp_kernel_op_44 = tmp_kernel_op_15 - 1.0;
       const real_t tmp_kernel_op_45 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_44;
       const real_t tmp_kernel_op_46 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_44;
       const real_t tmp_kernel_op_48 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_49 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_50 = tmp_kernel_op_48 + tmp_kernel_op_49;
       const real_t tmp_kernel_op_51 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_52 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_53 = tmp_kernel_op_51 + tmp_kernel_op_52;
       const real_t tmp_kernel_op_55 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_56 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_57 = tmp_kernel_op_55 + tmp_kernel_op_56;
       const real_t tmp_kernel_op_58 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_59 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_60 = tmp_kernel_op_58 + tmp_kernel_op_59;
       const real_t tmp_kernel_op_62 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_15;
       const real_t tmp_kernel_op_63 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_64 = tmp_kernel_op_62 + tmp_kernel_op_63;
       const real_t tmp_kernel_op_65 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_15;
       const real_t tmp_kernel_op_66 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_67 = tmp_kernel_op_65 + tmp_kernel_op_66;
       const real_t tmp_kernel_op_69 = -tmp_kernel_op_0 - 1.333333333333333;
       const real_t tmp_kernel_op_70 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_69 - tmp_kernel_op_48;
       const real_t tmp_kernel_op_71 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_69 - tmp_kernel_op_51;
       const real_t tmp_kernel_op_73 = -tmp_kernel_op_7 + 2.666666666666667;
       const real_t tmp_kernel_op_74 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_73 - tmp_kernel_op_55;
       const real_t tmp_kernel_op_75 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_73 - tmp_kernel_op_58;
       const real_t tmp_kernel_op_77 = -tmp_kernel_op_14 + 2.666666666666667;
       const real_t tmp_kernel_op_78 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_77 - tmp_kernel_op_62;
       const real_t tmp_kernel_op_79 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_77 - tmp_kernel_op_65;
       const real_t tmp_kernel_op_81 = -tmp_kernel_op_1 + 2.666666666666667;
       const real_t tmp_kernel_op_82 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_81 - tmp_kernel_op_49;
       const real_t tmp_kernel_op_83 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_81 - tmp_kernel_op_52;
       const real_t tmp_kernel_op_85 = -tmp_kernel_op_8 - 1.333333333333333;
       const real_t tmp_kernel_op_86 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_85 - tmp_kernel_op_56;
       const real_t tmp_kernel_op_87 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_85 - tmp_kernel_op_59;
       const real_t tmp_kernel_op_89 = -tmp_kernel_op_15 + 2.666666666666667;
       const real_t tmp_kernel_op_90 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_89 - tmp_kernel_op_63;
       const real_t tmp_kernel_op_91 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_89 - tmp_kernel_op_66;
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
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_kernel_op_5 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_6 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_kernel_op_3 - jac_blending_inv_1_0_q_0*tmp_kernel_op_4);
             const real_t tmp_kernel_op_12 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_13 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_kernel_op_10 - jac_blending_inv_1_0_q_1*tmp_kernel_op_11);
             const real_t tmp_kernel_op_19 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_20 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_kernel_op_17 - jac_blending_inv_1_0_q_2*tmp_kernel_op_18);
             const real_t tmp_kernel_op_27 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_kernel_op_25 - jac_blending_inv_1_0_q_0*tmp_kernel_op_26);
             const real_t tmp_kernel_op_31 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_kernel_op_29 - jac_blending_inv_1_0_q_1*tmp_kernel_op_30);
             const real_t tmp_kernel_op_35 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_kernel_op_33 - jac_blending_inv_1_0_q_2*tmp_kernel_op_34);
             const real_t tmp_kernel_op_39 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_kernel_op_37 - jac_blending_inv_1_0_q_0*tmp_kernel_op_38);
             const real_t tmp_kernel_op_43 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_kernel_op_41 - jac_blending_inv_1_0_q_1*tmp_kernel_op_42);
             const real_t tmp_kernel_op_47 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_kernel_op_45 - jac_blending_inv_1_0_q_2*tmp_kernel_op_46);
             const real_t tmp_kernel_op_54 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_kernel_op_50 - jac_blending_inv_1_0_q_0*tmp_kernel_op_53);
             const real_t tmp_kernel_op_61 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_kernel_op_57 - jac_blending_inv_1_0_q_1*tmp_kernel_op_60);
             const real_t tmp_kernel_op_68 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_kernel_op_64 - jac_blending_inv_1_0_q_2*tmp_kernel_op_67);
             const real_t tmp_kernel_op_72 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_kernel_op_70 - jac_blending_inv_1_0_q_0*tmp_kernel_op_71);
             const real_t tmp_kernel_op_76 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_kernel_op_74 - jac_blending_inv_1_0_q_1*tmp_kernel_op_75);
             const real_t tmp_kernel_op_80 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_kernel_op_78 - jac_blending_inv_1_0_q_2*tmp_kernel_op_79);
             const real_t tmp_kernel_op_84 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_kernel_op_82 - jac_blending_inv_1_0_q_0*tmp_kernel_op_83);
             const real_t tmp_kernel_op_88 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_kernel_op_86 - jac_blending_inv_1_0_q_1*tmp_kernel_op_87);
             const real_t tmp_kernel_op_92 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_kernel_op_90 - jac_blending_inv_1_0_q_2*tmp_kernel_op_91);
             const real_t tmp_kernel_op_93 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_kernel_op_3 - jac_blending_inv_1_1_q_0*tmp_kernel_op_4);
             const real_t tmp_kernel_op_94 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_kernel_op_10 - jac_blending_inv_1_1_q_1*tmp_kernel_op_11);
             const real_t tmp_kernel_op_95 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_kernel_op_17 - jac_blending_inv_1_1_q_2*tmp_kernel_op_18);
             const real_t tmp_kernel_op_96 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_kernel_op_25 - jac_blending_inv_1_1_q_0*tmp_kernel_op_26);
             const real_t tmp_kernel_op_97 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_kernel_op_29 - jac_blending_inv_1_1_q_1*tmp_kernel_op_30);
             const real_t tmp_kernel_op_98 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_kernel_op_33 - jac_blending_inv_1_1_q_2*tmp_kernel_op_34);
             const real_t tmp_kernel_op_99 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_kernel_op_37 - jac_blending_inv_1_1_q_0*tmp_kernel_op_38);
             const real_t tmp_kernel_op_100 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_kernel_op_41 - jac_blending_inv_1_1_q_1*tmp_kernel_op_42);
             const real_t tmp_kernel_op_101 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_kernel_op_45 - jac_blending_inv_1_1_q_2*tmp_kernel_op_46);
             const real_t tmp_kernel_op_102 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_kernel_op_50 - jac_blending_inv_1_1_q_0*tmp_kernel_op_53);
             const real_t tmp_kernel_op_103 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_kernel_op_57 - jac_blending_inv_1_1_q_1*tmp_kernel_op_60);
             const real_t tmp_kernel_op_104 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_kernel_op_64 - jac_blending_inv_1_1_q_2*tmp_kernel_op_67);
             const real_t tmp_kernel_op_105 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_kernel_op_70 - jac_blending_inv_1_1_q_0*tmp_kernel_op_71);
             const real_t tmp_kernel_op_106 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_kernel_op_74 - jac_blending_inv_1_1_q_1*tmp_kernel_op_75);
             const real_t tmp_kernel_op_107 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_kernel_op_78 - jac_blending_inv_1_1_q_2*tmp_kernel_op_79);
             const real_t tmp_kernel_op_108 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_kernel_op_82 - jac_blending_inv_1_1_q_0*tmp_kernel_op_83);
             const real_t tmp_kernel_op_109 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_kernel_op_86 - jac_blending_inv_1_1_q_1*tmp_kernel_op_87);
             const real_t tmp_kernel_op_110 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_kernel_op_90 - jac_blending_inv_1_1_q_2*tmp_kernel_op_91);
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_13*tmp_kernel_op_22 + tmp_kernel_op_20*tmp_kernel_op_23 + tmp_kernel_op_21*tmp_kernel_op_6) + src_dof_1*(tmp_kernel_op_13*0.66666666666666663 + tmp_kernel_op_20*0.16666666666666666 + tmp_kernel_op_6*0.16666666666666666) + src_dof_2*(tmp_kernel_op_13*0.16666666666666666 + tmp_kernel_op_20*0.16666666666666666 + tmp_kernel_op_6*0.66666666666666663);
             const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_27 + tmp_kernel_op_22*tmp_kernel_op_31 + tmp_kernel_op_23*tmp_kernel_op_35) + src_dof_1*(tmp_kernel_op_27*0.16666666666666666 + tmp_kernel_op_31*0.66666666666666663 + tmp_kernel_op_35*0.16666666666666666) + src_dof_2*(tmp_kernel_op_27*0.66666666666666663 + tmp_kernel_op_31*0.16666666666666666 + tmp_kernel_op_35*0.16666666666666666);
             const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_39 + tmp_kernel_op_22*tmp_kernel_op_43 + tmp_kernel_op_23*tmp_kernel_op_47) + src_dof_1*(tmp_kernel_op_39*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666) + src_dof_2*(tmp_kernel_op_39*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666);
             const real_t elMatVec_3 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_54 + tmp_kernel_op_22*tmp_kernel_op_61 + tmp_kernel_op_23*tmp_kernel_op_68) + src_dof_1*(tmp_kernel_op_54*0.16666666666666666 + tmp_kernel_op_61*0.66666666666666663 + tmp_kernel_op_68*0.16666666666666666) + src_dof_2*(tmp_kernel_op_54*0.66666666666666663 + tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_68*0.16666666666666666);
             const real_t elMatVec_4 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_72 + tmp_kernel_op_22*tmp_kernel_op_76 + tmp_kernel_op_23*tmp_kernel_op_80) + src_dof_1*(tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_76*0.66666666666666663 + tmp_kernel_op_80*0.16666666666666666) + src_dof_2*(tmp_kernel_op_72*0.66666666666666663 + tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_80*0.16666666666666666);
             const real_t elMatVec_5 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_84 + tmp_kernel_op_22*tmp_kernel_op_88 + tmp_kernel_op_23*tmp_kernel_op_92) + src_dof_1*(tmp_kernel_op_84*0.16666666666666666 + tmp_kernel_op_88*0.66666666666666663 + tmp_kernel_op_92*0.16666666666666666) + src_dof_2*(tmp_kernel_op_84*0.66666666666666663 + tmp_kernel_op_88*0.16666666666666666 + tmp_kernel_op_92*0.16666666666666666);
             const real_t elMatVec_6 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_93 + tmp_kernel_op_22*tmp_kernel_op_94 + tmp_kernel_op_23*tmp_kernel_op_95) + src_dof_1*(tmp_kernel_op_93*0.16666666666666666 + tmp_kernel_op_94*0.66666666666666663 + tmp_kernel_op_95*0.16666666666666666) + src_dof_2*(tmp_kernel_op_93*0.66666666666666663 + tmp_kernel_op_94*0.16666666666666666 + tmp_kernel_op_95*0.16666666666666666);
             const real_t elMatVec_7 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_96 + tmp_kernel_op_22*tmp_kernel_op_97 + tmp_kernel_op_23*tmp_kernel_op_98) + src_dof_1*(tmp_kernel_op_96*0.16666666666666666 + tmp_kernel_op_97*0.66666666666666663 + tmp_kernel_op_98*0.16666666666666666) + src_dof_2*(tmp_kernel_op_96*0.66666666666666663 + tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_98*0.16666666666666666);
             const real_t elMatVec_8 = src_dof_0*(tmp_kernel_op_100*tmp_kernel_op_22 + tmp_kernel_op_101*tmp_kernel_op_23 + tmp_kernel_op_21*tmp_kernel_op_99) + src_dof_1*(tmp_kernel_op_100*0.66666666666666663 + tmp_kernel_op_101*0.16666666666666666 + tmp_kernel_op_99*0.16666666666666666) + src_dof_2*(tmp_kernel_op_100*0.16666666666666666 + tmp_kernel_op_101*0.16666666666666666 + tmp_kernel_op_99*0.66666666666666663);
             const real_t elMatVec_9 = src_dof_0*(tmp_kernel_op_102*tmp_kernel_op_21 + tmp_kernel_op_103*tmp_kernel_op_22 + tmp_kernel_op_104*tmp_kernel_op_23) + src_dof_1*(tmp_kernel_op_102*0.16666666666666666 + tmp_kernel_op_103*0.66666666666666663 + tmp_kernel_op_104*0.16666666666666666) + src_dof_2*(tmp_kernel_op_102*0.66666666666666663 + tmp_kernel_op_103*0.16666666666666666 + tmp_kernel_op_104*0.16666666666666666);
             const real_t elMatVec_10 = src_dof_0*(tmp_kernel_op_105*tmp_kernel_op_21 + tmp_kernel_op_106*tmp_kernel_op_22 + tmp_kernel_op_107*tmp_kernel_op_23) + src_dof_1*(tmp_kernel_op_105*0.16666666666666666 + tmp_kernel_op_106*0.66666666666666663 + tmp_kernel_op_107*0.16666666666666666) + src_dof_2*(tmp_kernel_op_105*0.66666666666666663 + tmp_kernel_op_106*0.16666666666666666 + tmp_kernel_op_107*0.16666666666666666);
             const real_t elMatVec_11 = src_dof_0*(tmp_kernel_op_108*tmp_kernel_op_21 + tmp_kernel_op_109*tmp_kernel_op_22 + tmp_kernel_op_110*tmp_kernel_op_23) + src_dof_1*(tmp_kernel_op_108*0.16666666666666666 + tmp_kernel_op_109*0.66666666666666663 + tmp_kernel_op_110*0.16666666666666666) + src_dof_2*(tmp_kernel_op_108*0.66666666666666663 + tmp_kernel_op_109*0.16666666666666666 + tmp_kernel_op_110*0.16666666666666666);
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
       const real_t tmp_moved_constant_2 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_9 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_9;
       const real_t tmp_moved_constant_3 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_9 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_9;
       const real_t tmp_moved_constant_4 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_16 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_16;
       const real_t tmp_moved_constant_5 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_16 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_16;
       const real_t tmp_moved_constant_6 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_24;
       const real_t tmp_moved_constant_7 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_24;
       const real_t tmp_moved_constant_8 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_28;
       const real_t tmp_moved_constant_9 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_28;
       const real_t tmp_moved_constant_10 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_32;
       const real_t tmp_moved_constant_11 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_32;
       const real_t tmp_moved_constant_12 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_36;
       const real_t tmp_moved_constant_13 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_36;
       const real_t tmp_moved_constant_14 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_40;
       const real_t tmp_moved_constant_15 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_40;
       const real_t tmp_moved_constant_16 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_44;
       const real_t tmp_moved_constant_17 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_44;
       const real_t tmp_moved_constant_18 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_1;
       const real_t tmp_moved_constant_19 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_20 = tmp_moved_constant_18 + tmp_moved_constant_19;
       const real_t tmp_moved_constant_21 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const real_t tmp_moved_constant_22 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_23 = tmp_moved_constant_21 + tmp_moved_constant_22;
       const real_t tmp_moved_constant_24 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_8;
       const real_t tmp_moved_constant_25 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_26 = tmp_moved_constant_24 + tmp_moved_constant_25;
       const real_t tmp_moved_constant_27 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_8;
       const real_t tmp_moved_constant_28 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_29 = tmp_moved_constant_27 + tmp_moved_constant_28;
       const real_t tmp_moved_constant_30 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_15;
       const real_t tmp_moved_constant_31 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_32 = tmp_moved_constant_30 + tmp_moved_constant_31;
       const real_t tmp_moved_constant_33 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_15;
       const real_t tmp_moved_constant_34 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_35 = tmp_moved_constant_33 + tmp_moved_constant_34;
       const real_t tmp_moved_constant_36 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_69 - tmp_moved_constant_18;
       const real_t tmp_moved_constant_37 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_69 - tmp_moved_constant_21;
       const real_t tmp_moved_constant_38 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_73 - tmp_moved_constant_24;
       const real_t tmp_moved_constant_39 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_73 - tmp_moved_constant_27;
       const real_t tmp_moved_constant_40 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_77 - tmp_moved_constant_30;
       const real_t tmp_moved_constant_41 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_77 - tmp_moved_constant_33;
       const real_t tmp_moved_constant_42 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_81 - tmp_moved_constant_19;
       const real_t tmp_moved_constant_43 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_81 - tmp_moved_constant_22;
       const real_t tmp_moved_constant_44 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_85 - tmp_moved_constant_25;
       const real_t tmp_moved_constant_45 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_85 - tmp_moved_constant_28;
       const real_t tmp_moved_constant_46 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_89 - tmp_moved_constant_31;
       const real_t tmp_moved_constant_47 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_89 - tmp_moved_constant_34;
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
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_kernel_op_5 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_6 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_moved_constant_0 - jac_blending_inv_1_0_q_0*tmp_moved_constant_1);
             const real_t tmp_kernel_op_12 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_13 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_moved_constant_2 - jac_blending_inv_1_0_q_1*tmp_moved_constant_3);
             const real_t tmp_kernel_op_19 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_20 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_moved_constant_4 - jac_blending_inv_1_0_q_2*tmp_moved_constant_5);
             const real_t tmp_kernel_op_27 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_moved_constant_6 - jac_blending_inv_1_0_q_0*tmp_moved_constant_7);
             const real_t tmp_kernel_op_31 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_moved_constant_8 - jac_blending_inv_1_0_q_1*tmp_moved_constant_9);
             const real_t tmp_kernel_op_35 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_moved_constant_10 - jac_blending_inv_1_0_q_2*tmp_moved_constant_11);
             const real_t tmp_kernel_op_39 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_moved_constant_12 - jac_blending_inv_1_0_q_0*tmp_moved_constant_13);
             const real_t tmp_kernel_op_43 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_moved_constant_14 - jac_blending_inv_1_0_q_1*tmp_moved_constant_15);
             const real_t tmp_kernel_op_47 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_moved_constant_16 - jac_blending_inv_1_0_q_2*tmp_moved_constant_17);
             const real_t tmp_kernel_op_54 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_moved_constant_20 - jac_blending_inv_1_0_q_0*tmp_moved_constant_23);
             const real_t tmp_kernel_op_61 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_moved_constant_26 - jac_blending_inv_1_0_q_1*tmp_moved_constant_29);
             const real_t tmp_kernel_op_68 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_moved_constant_32 - jac_blending_inv_1_0_q_2*tmp_moved_constant_35);
             const real_t tmp_kernel_op_72 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_moved_constant_36 - jac_blending_inv_1_0_q_0*tmp_moved_constant_37);
             const real_t tmp_kernel_op_76 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_moved_constant_38 - jac_blending_inv_1_0_q_1*tmp_moved_constant_39);
             const real_t tmp_kernel_op_80 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_moved_constant_40 - jac_blending_inv_1_0_q_2*tmp_moved_constant_41);
             const real_t tmp_kernel_op_84 = tmp_kernel_op_5*(-jac_blending_inv_0_0_q_0*tmp_moved_constant_42 - jac_blending_inv_1_0_q_0*tmp_moved_constant_43);
             const real_t tmp_kernel_op_88 = tmp_kernel_op_12*(-jac_blending_inv_0_0_q_1*tmp_moved_constant_44 - jac_blending_inv_1_0_q_1*tmp_moved_constant_45);
             const real_t tmp_kernel_op_92 = tmp_kernel_op_19*(-jac_blending_inv_0_0_q_2*tmp_moved_constant_46 - jac_blending_inv_1_0_q_2*tmp_moved_constant_47);
             const real_t tmp_kernel_op_93 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_moved_constant_0 - jac_blending_inv_1_1_q_0*tmp_moved_constant_1);
             const real_t tmp_kernel_op_94 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_moved_constant_2 - jac_blending_inv_1_1_q_1*tmp_moved_constant_3);
             const real_t tmp_kernel_op_95 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_moved_constant_4 - jac_blending_inv_1_1_q_2*tmp_moved_constant_5);
             const real_t tmp_kernel_op_96 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_moved_constant_6 - jac_blending_inv_1_1_q_0*tmp_moved_constant_7);
             const real_t tmp_kernel_op_97 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_moved_constant_8 - jac_blending_inv_1_1_q_1*tmp_moved_constant_9);
             const real_t tmp_kernel_op_98 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_moved_constant_10 - jac_blending_inv_1_1_q_2*tmp_moved_constant_11);
             const real_t tmp_kernel_op_99 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_moved_constant_12 - jac_blending_inv_1_1_q_0*tmp_moved_constant_13);
             const real_t tmp_kernel_op_100 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_moved_constant_14 - jac_blending_inv_1_1_q_1*tmp_moved_constant_15);
             const real_t tmp_kernel_op_101 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_moved_constant_16 - jac_blending_inv_1_1_q_2*tmp_moved_constant_17);
             const real_t tmp_kernel_op_102 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_moved_constant_20 - jac_blending_inv_1_1_q_0*tmp_moved_constant_23);
             const real_t tmp_kernel_op_103 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_moved_constant_26 - jac_blending_inv_1_1_q_1*tmp_moved_constant_29);
             const real_t tmp_kernel_op_104 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_moved_constant_32 - jac_blending_inv_1_1_q_2*tmp_moved_constant_35);
             const real_t tmp_kernel_op_105 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_moved_constant_36 - jac_blending_inv_1_1_q_0*tmp_moved_constant_37);
             const real_t tmp_kernel_op_106 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_moved_constant_38 - jac_blending_inv_1_1_q_1*tmp_moved_constant_39);
             const real_t tmp_kernel_op_107 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_moved_constant_40 - jac_blending_inv_1_1_q_2*tmp_moved_constant_41);
             const real_t tmp_kernel_op_108 = tmp_kernel_op_5*(-jac_blending_inv_0_1_q_0*tmp_moved_constant_42 - jac_blending_inv_1_1_q_0*tmp_moved_constant_43);
             const real_t tmp_kernel_op_109 = tmp_kernel_op_12*(-jac_blending_inv_0_1_q_1*tmp_moved_constant_44 - jac_blending_inv_1_1_q_1*tmp_moved_constant_45);
             const real_t tmp_kernel_op_110 = tmp_kernel_op_19*(-jac_blending_inv_0_1_q_2*tmp_moved_constant_46 - jac_blending_inv_1_1_q_2*tmp_moved_constant_47);
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_13*tmp_kernel_op_22 + tmp_kernel_op_20*tmp_kernel_op_23 + tmp_kernel_op_21*tmp_kernel_op_6) + src_dof_1*(tmp_kernel_op_13*0.66666666666666663 + tmp_kernel_op_20*0.16666666666666666 + tmp_kernel_op_6*0.16666666666666666) + src_dof_2*(tmp_kernel_op_13*0.16666666666666666 + tmp_kernel_op_20*0.16666666666666666 + tmp_kernel_op_6*0.66666666666666663);
             const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_27 + tmp_kernel_op_22*tmp_kernel_op_31 + tmp_kernel_op_23*tmp_kernel_op_35) + src_dof_1*(tmp_kernel_op_27*0.16666666666666666 + tmp_kernel_op_31*0.66666666666666663 + tmp_kernel_op_35*0.16666666666666666) + src_dof_2*(tmp_kernel_op_27*0.66666666666666663 + tmp_kernel_op_31*0.16666666666666666 + tmp_kernel_op_35*0.16666666666666666);
             const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_39 + tmp_kernel_op_22*tmp_kernel_op_43 + tmp_kernel_op_23*tmp_kernel_op_47) + src_dof_1*(tmp_kernel_op_39*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666) + src_dof_2*(tmp_kernel_op_39*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666);
             const real_t elMatVec_3 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_54 + tmp_kernel_op_22*tmp_kernel_op_61 + tmp_kernel_op_23*tmp_kernel_op_68) + src_dof_1*(tmp_kernel_op_54*0.16666666666666666 + tmp_kernel_op_61*0.66666666666666663 + tmp_kernel_op_68*0.16666666666666666) + src_dof_2*(tmp_kernel_op_54*0.66666666666666663 + tmp_kernel_op_61*0.16666666666666666 + tmp_kernel_op_68*0.16666666666666666);
             const real_t elMatVec_4 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_72 + tmp_kernel_op_22*tmp_kernel_op_76 + tmp_kernel_op_23*tmp_kernel_op_80) + src_dof_1*(tmp_kernel_op_72*0.16666666666666666 + tmp_kernel_op_76*0.66666666666666663 + tmp_kernel_op_80*0.16666666666666666) + src_dof_2*(tmp_kernel_op_72*0.66666666666666663 + tmp_kernel_op_76*0.16666666666666666 + tmp_kernel_op_80*0.16666666666666666);
             const real_t elMatVec_5 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_84 + tmp_kernel_op_22*tmp_kernel_op_88 + tmp_kernel_op_23*tmp_kernel_op_92) + src_dof_1*(tmp_kernel_op_84*0.16666666666666666 + tmp_kernel_op_88*0.66666666666666663 + tmp_kernel_op_92*0.16666666666666666) + src_dof_2*(tmp_kernel_op_84*0.66666666666666663 + tmp_kernel_op_88*0.16666666666666666 + tmp_kernel_op_92*0.16666666666666666);
             const real_t elMatVec_6 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_93 + tmp_kernel_op_22*tmp_kernel_op_94 + tmp_kernel_op_23*tmp_kernel_op_95) + src_dof_1*(tmp_kernel_op_93*0.16666666666666666 + tmp_kernel_op_94*0.66666666666666663 + tmp_kernel_op_95*0.16666666666666666) + src_dof_2*(tmp_kernel_op_93*0.66666666666666663 + tmp_kernel_op_94*0.16666666666666666 + tmp_kernel_op_95*0.16666666666666666);
             const real_t elMatVec_7 = src_dof_0*(tmp_kernel_op_21*tmp_kernel_op_96 + tmp_kernel_op_22*tmp_kernel_op_97 + tmp_kernel_op_23*tmp_kernel_op_98) + src_dof_1*(tmp_kernel_op_96*0.16666666666666666 + tmp_kernel_op_97*0.66666666666666663 + tmp_kernel_op_98*0.16666666666666666) + src_dof_2*(tmp_kernel_op_96*0.66666666666666663 + tmp_kernel_op_97*0.16666666666666666 + tmp_kernel_op_98*0.16666666666666666);
             const real_t elMatVec_8 = src_dof_0*(tmp_kernel_op_100*tmp_kernel_op_22 + tmp_kernel_op_101*tmp_kernel_op_23 + tmp_kernel_op_21*tmp_kernel_op_99) + src_dof_1*(tmp_kernel_op_100*0.66666666666666663 + tmp_kernel_op_101*0.16666666666666666 + tmp_kernel_op_99*0.16666666666666666) + src_dof_2*(tmp_kernel_op_100*0.16666666666666666 + tmp_kernel_op_101*0.16666666666666666 + tmp_kernel_op_99*0.66666666666666663);
             const real_t elMatVec_9 = src_dof_0*(tmp_kernel_op_102*tmp_kernel_op_21 + tmp_kernel_op_103*tmp_kernel_op_22 + tmp_kernel_op_104*tmp_kernel_op_23) + src_dof_1*(tmp_kernel_op_102*0.16666666666666666 + tmp_kernel_op_103*0.66666666666666663 + tmp_kernel_op_104*0.16666666666666666) + src_dof_2*(tmp_kernel_op_102*0.66666666666666663 + tmp_kernel_op_103*0.16666666666666666 + tmp_kernel_op_104*0.16666666666666666);
             const real_t elMatVec_10 = src_dof_0*(tmp_kernel_op_105*tmp_kernel_op_21 + tmp_kernel_op_106*tmp_kernel_op_22 + tmp_kernel_op_107*tmp_kernel_op_23) + src_dof_1*(tmp_kernel_op_105*0.16666666666666666 + tmp_kernel_op_106*0.66666666666666663 + tmp_kernel_op_107*0.16666666666666666) + src_dof_2*(tmp_kernel_op_105*0.66666666666666663 + tmp_kernel_op_106*0.16666666666666666 + tmp_kernel_op_107*0.16666666666666666);
             const real_t elMatVec_11 = src_dof_0*(tmp_kernel_op_108*tmp_kernel_op_21 + tmp_kernel_op_109*tmp_kernel_op_22 + tmp_kernel_op_110*tmp_kernel_op_23) + src_dof_1*(tmp_kernel_op_108*0.16666666666666666 + tmp_kernel_op_109*0.66666666666666663 + tmp_kernel_op_110*0.16666666666666666) + src_dof_2*(tmp_kernel_op_108*0.66666666666666663 + tmp_kernel_op_109*0.16666666666666666 + tmp_kernel_op_110*0.16666666666666666);
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
