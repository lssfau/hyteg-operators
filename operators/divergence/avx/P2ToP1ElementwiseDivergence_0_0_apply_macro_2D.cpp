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

























#include "../P2ToP1ElementwiseDivergence_0_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ToP1ElementwiseDivergence_0_0::apply_macro_2D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
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
       const real_t jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t abs_det_jac_affine_BLUE = abs(tmp_coords_jac_5_BLUE);
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
       const real_t jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const real_t tmp_kernel_op_0 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_1 = tmp_kernel_op_0*0.16666666666666674;
       const real_t tmp_kernel_op_2 = 0.66666666666666663;
       const real_t tmp_kernel_op_3 = jac_affine_inv_0_0_GRAY*(tmp_kernel_op_2 - 1.0);
       const real_t tmp_kernel_op_4 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_5 = tmp_kernel_op_4*0.16666666666666671;
       const real_t tmp_kernel_op_6 = 2.6666666666666665;
       const real_t tmp_kernel_op_7 = jac_affine_inv_0_0_GRAY*(tmp_kernel_op_6 - 1.0);
       const real_t tmp_kernel_op_8 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_9 = tmp_kernel_op_8*0.66666666666666674;
       const real_t tmp_kernel_op_10 = 0.66666666666666663;
       const real_t tmp_kernel_op_11 = jac_affine_inv_0_0_GRAY*(tmp_kernel_op_10 - 1.0);
       const real_t tmp_kernel_op_12 = 2.6666666666666665;
       const real_t tmp_kernel_op_13 = jac_affine_inv_1_0_GRAY*(tmp_kernel_op_12 - 1.0);
       const real_t tmp_kernel_op_14 = 0.66666666666666663;
       const real_t tmp_kernel_op_15 = jac_affine_inv_1_0_GRAY*(tmp_kernel_op_14 - 1.0);
       const real_t tmp_kernel_op_16 = 0.66666666666666663;
       const real_t tmp_kernel_op_17 = jac_affine_inv_1_0_GRAY*(tmp_kernel_op_16 - 1.0);
       const real_t tmp_kernel_op_18 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_12;
       const real_t tmp_kernel_op_19 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_20 = -tmp_kernel_op_18 - tmp_kernel_op_19;
       const real_t tmp_kernel_op_21 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_22 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_6;
       const real_t tmp_kernel_op_23 = -tmp_kernel_op_21 - tmp_kernel_op_22;
       const real_t tmp_kernel_op_24 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_16;
       const real_t tmp_kernel_op_25 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_10;
       const real_t tmp_kernel_op_26 = -tmp_kernel_op_24 - tmp_kernel_op_25;
       const real_t tmp_kernel_op_27 = -jac_affine_inv_1_0_GRAY*(-tmp_kernel_op_2 - 1.333333333333333) + tmp_kernel_op_18;
       const real_t tmp_kernel_op_28 = -jac_affine_inv_1_0_GRAY*(-tmp_kernel_op_6 + 2.666666666666667) + tmp_kernel_op_21;
       const real_t tmp_kernel_op_29 = -jac_affine_inv_1_0_GRAY*(-tmp_kernel_op_10 + 2.666666666666667) + tmp_kernel_op_24;
       const real_t tmp_kernel_op_30 = -jac_affine_inv_0_0_GRAY*(-tmp_kernel_op_12 + 2.666666666666667) + tmp_kernel_op_19;
       const real_t tmp_kernel_op_31 = -jac_affine_inv_0_0_GRAY*(-tmp_kernel_op_14 - 1.333333333333333) + tmp_kernel_op_22;
       const real_t tmp_kernel_op_32 = -jac_affine_inv_0_0_GRAY*(-tmp_kernel_op_16 + 2.666666666666667) + tmp_kernel_op_25;
       const real_t tmp_kernel_op_33 = tmp_kernel_op_12 + tmp_kernel_op_2 - 3.0;
       const real_t tmp_kernel_op_34 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_33 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_33;
       const real_t tmp_kernel_op_35 = tmp_kernel_op_14 + tmp_kernel_op_6 - 3.0;
       const real_t tmp_kernel_op_36 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_35 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_35;
       const real_t tmp_kernel_op_37 = tmp_kernel_op_10 + tmp_kernel_op_16 - 3.0;
       const real_t tmp_kernel_op_38 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_37 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_37;
       const real_t tmp_kernel_op_39 = tmp_kernel_op_0*0.16666666666666666;
       const real_t tmp_kernel_op_40 = tmp_kernel_op_4*0.66666666666666663;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_8*0.16666666666666666;
       const real_t tmp_kernel_op_42 = tmp_kernel_op_0*0.66666666666666663;
       const real_t tmp_kernel_op_43 = tmp_kernel_op_4*0.16666666666666666;
       const real_t tmp_kernel_op_44 = tmp_kernel_op_8*0.16666666666666666;
       const real_t Dummy_62 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_63 = Dummy_62*0.16666666666666674;
       const real_t Dummy_64 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_2 - 1.0);
       const real_t Dummy_65 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_66 = Dummy_65*0.16666666666666671;
       const real_t Dummy_67 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_6 - 1.0);
       const real_t Dummy_68 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_69 = Dummy_68*0.66666666666666674;
       const real_t Dummy_70 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_10 - 1.0);
       const real_t Dummy_71 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_12 - 1.0);
       const real_t Dummy_72 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_14 - 1.0);
       const real_t Dummy_73 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_16 - 1.0);
       const real_t Dummy_74 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_12;
       const real_t Dummy_75 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_2;
       const real_t Dummy_76 = -Dummy_74 - Dummy_75;
       const real_t Dummy_77 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_14;
       const real_t Dummy_78 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_6;
       const real_t Dummy_79 = -Dummy_77 - Dummy_78;
       const real_t Dummy_80 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_16;
       const real_t Dummy_81 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_10;
       const real_t Dummy_82 = -Dummy_80 - Dummy_81;
       const real_t Dummy_83 = Dummy_74 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_2 - 1.333333333333333);
       const real_t Dummy_84 = Dummy_77 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_6 + 2.666666666666667);
       const real_t Dummy_85 = Dummy_80 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_10 + 2.666666666666667);
       const real_t Dummy_86 = Dummy_75 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_12 + 2.666666666666667);
       const real_t Dummy_87 = Dummy_78 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_14 - 1.333333333333333);
       const real_t Dummy_88 = Dummy_81 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_16 + 2.666666666666667);
       const real_t Dummy_89 = -jac_affine_inv_0_0_BLUE*tmp_kernel_op_33 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_33;
       const real_t Dummy_90 = -jac_affine_inv_0_0_BLUE*tmp_kernel_op_35 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_35;
       const real_t Dummy_91 = -jac_affine_inv_0_0_BLUE*tmp_kernel_op_37 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_37;
       const real_t Dummy_92 = Dummy_62*0.16666666666666666;
       const real_t Dummy_93 = Dummy_65*0.66666666666666663;
       const real_t Dummy_94 = Dummy_68*0.16666666666666666;
       const real_t Dummy_95 = Dummy_62*0.66666666666666663;
       const real_t Dummy_96 = Dummy_65*0.16666666666666666;
       const real_t Dummy_97 = Dummy_68*0.16666666666666666;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_4 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_5 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1),_mm256_set_pd(tmp_kernel_op_20,tmp_kernel_op_20,tmp_kernel_op_20,tmp_kernel_op_20)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9)))),_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1),_mm256_set_pd(tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_29,tmp_kernel_op_29,tmp_kernel_op_29,tmp_kernel_op_29),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9))))),_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1),_mm256_set_pd(tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_31,tmp_kernel_op_31,tmp_kernel_op_31,tmp_kernel_op_31),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9))))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1),_mm256_set_pd(tmp_kernel_op_34,tmp_kernel_op_34,tmp_kernel_op_34,tmp_kernel_op_34)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_36,tmp_kernel_op_36,tmp_kernel_op_36,tmp_kernel_op_36),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9))))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1)),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9))))),_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1,tmp_kernel_op_1)),_mm256_set_pd(tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11)),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5)),_mm256_set_pd(tmp_kernel_op_7,tmp_kernel_op_7,tmp_kernel_op_7,tmp_kernel_op_7)))));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_20,tmp_kernel_op_20,tmp_kernel_op_20,tmp_kernel_op_20),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26),_mm256_set_pd(tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41)))),_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_29,tmp_kernel_op_29,tmp_kernel_op_29,tmp_kernel_op_29),_mm256_set_pd(tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41))))),_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_31,tmp_kernel_op_31,tmp_kernel_op_31,tmp_kernel_op_31),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32),_mm256_set_pd(tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41))))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_34,tmp_kernel_op_34,tmp_kernel_op_34,tmp_kernel_op_34),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_36,tmp_kernel_op_36,tmp_kernel_op_36,tmp_kernel_op_36),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38),_mm256_set_pd(tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41))))),_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11)),_mm256_set_pd(tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3)),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40)),_mm256_set_pd(tmp_kernel_op_7,tmp_kernel_op_7,tmp_kernel_op_7,tmp_kernel_op_7))))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)),_mm256_set_pd(tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41)))));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_20,tmp_kernel_op_20,tmp_kernel_op_20,tmp_kernel_op_20),_mm256_set_pd(tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26),_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44)))),_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27),_mm256_set_pd(tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_29,tmp_kernel_op_29,tmp_kernel_op_29,tmp_kernel_op_29),_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44))))),_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30),_mm256_set_pd(tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_31,tmp_kernel_op_31,tmp_kernel_op_31,tmp_kernel_op_31),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32),_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44))))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_34,tmp_kernel_op_34,tmp_kernel_op_34,tmp_kernel_op_34),_mm256_set_pd(tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_36,tmp_kernel_op_36,tmp_kernel_op_36,tmp_kernel_op_36),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38),_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44))))),_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11)),_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3)),_mm256_set_pd(tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43)),_mm256_set_pd(tmp_kernel_op_7,tmp_kernel_op_7,tmp_kernel_op_7,tmp_kernel_op_7))))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_set_pd(tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)),_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44)))));
                {
                   {
                      _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                   }
                }
                const __m256d Dummy_56 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d Dummy_57 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_58 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d Dummy_59 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_60 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d Dummy_61 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d Dummy_98 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_59,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_63,Dummy_63,Dummy_63,Dummy_63),_mm256_set_pd(Dummy_76,Dummy_76,Dummy_76,Dummy_76)),_mm256_mul_pd(_mm256_set_pd(Dummy_66,Dummy_66,Dummy_66,Dummy_66),_mm256_set_pd(Dummy_79,Dummy_79,Dummy_79,Dummy_79))),_mm256_mul_pd(_mm256_set_pd(Dummy_69,Dummy_69,Dummy_69,Dummy_69),_mm256_set_pd(Dummy_82,Dummy_82,Dummy_82,Dummy_82)))),_mm256_mul_pd(Dummy_60,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_63,Dummy_63,Dummy_63,Dummy_63),_mm256_set_pd(Dummy_83,Dummy_83,Dummy_83,Dummy_83)),_mm256_mul_pd(_mm256_set_pd(Dummy_66,Dummy_66,Dummy_66,Dummy_66),_mm256_set_pd(Dummy_84,Dummy_84,Dummy_84,Dummy_84))),_mm256_mul_pd(_mm256_set_pd(Dummy_69,Dummy_69,Dummy_69,Dummy_69),_mm256_set_pd(Dummy_85,Dummy_85,Dummy_85,Dummy_85))))),_mm256_mul_pd(Dummy_61,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_63,Dummy_63,Dummy_63,Dummy_63),_mm256_set_pd(Dummy_86,Dummy_86,Dummy_86,Dummy_86)),_mm256_mul_pd(_mm256_set_pd(Dummy_66,Dummy_66,Dummy_66,Dummy_66),_mm256_set_pd(Dummy_87,Dummy_87,Dummy_87,Dummy_87))),_mm256_mul_pd(_mm256_set_pd(Dummy_69,Dummy_69,Dummy_69,Dummy_69),_mm256_set_pd(Dummy_88,Dummy_88,Dummy_88,Dummy_88))))),_mm256_mul_pd(Dummy_56,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_63,Dummy_63,Dummy_63,Dummy_63),_mm256_set_pd(Dummy_89,Dummy_89,Dummy_89,Dummy_89)),_mm256_mul_pd(_mm256_set_pd(Dummy_66,Dummy_66,Dummy_66,Dummy_66),_mm256_set_pd(Dummy_90,Dummy_90,Dummy_90,Dummy_90))),_mm256_mul_pd(_mm256_set_pd(Dummy_69,Dummy_69,Dummy_69,Dummy_69),_mm256_set_pd(Dummy_91,Dummy_91,Dummy_91,Dummy_91))))),_mm256_mul_pd(Dummy_57,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_63,Dummy_63,Dummy_63,Dummy_63)),_mm256_set_pd(Dummy_64,Dummy_64,Dummy_64,Dummy_64)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_66,Dummy_66,Dummy_66,Dummy_66)),_mm256_set_pd(Dummy_67,Dummy_67,Dummy_67,Dummy_67))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_69,Dummy_69,Dummy_69,Dummy_69)),_mm256_set_pd(Dummy_70,Dummy_70,Dummy_70,Dummy_70))))),_mm256_mul_pd(Dummy_58,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_63,Dummy_63,Dummy_63,Dummy_63)),_mm256_set_pd(Dummy_71,Dummy_71,Dummy_71,Dummy_71)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_66,Dummy_66,Dummy_66,Dummy_66)),_mm256_set_pd(Dummy_72,Dummy_72,Dummy_72,Dummy_72))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_69,Dummy_69,Dummy_69,Dummy_69)),_mm256_set_pd(Dummy_73,Dummy_73,Dummy_73,Dummy_73)))));
                const __m256d Dummy_99 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_59,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_76,Dummy_76,Dummy_76,Dummy_76),_mm256_set_pd(Dummy_92,Dummy_92,Dummy_92,Dummy_92)),_mm256_mul_pd(_mm256_set_pd(Dummy_79,Dummy_79,Dummy_79,Dummy_79),_mm256_set_pd(Dummy_93,Dummy_93,Dummy_93,Dummy_93))),_mm256_mul_pd(_mm256_set_pd(Dummy_82,Dummy_82,Dummy_82,Dummy_82),_mm256_set_pd(Dummy_94,Dummy_94,Dummy_94,Dummy_94)))),_mm256_mul_pd(Dummy_60,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_83,Dummy_83,Dummy_83,Dummy_83),_mm256_set_pd(Dummy_92,Dummy_92,Dummy_92,Dummy_92)),_mm256_mul_pd(_mm256_set_pd(Dummy_84,Dummy_84,Dummy_84,Dummy_84),_mm256_set_pd(Dummy_93,Dummy_93,Dummy_93,Dummy_93))),_mm256_mul_pd(_mm256_set_pd(Dummy_85,Dummy_85,Dummy_85,Dummy_85),_mm256_set_pd(Dummy_94,Dummy_94,Dummy_94,Dummy_94))))),_mm256_mul_pd(Dummy_61,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_86,Dummy_86,Dummy_86,Dummy_86),_mm256_set_pd(Dummy_92,Dummy_92,Dummy_92,Dummy_92)),_mm256_mul_pd(_mm256_set_pd(Dummy_87,Dummy_87,Dummy_87,Dummy_87),_mm256_set_pd(Dummy_93,Dummy_93,Dummy_93,Dummy_93))),_mm256_mul_pd(_mm256_set_pd(Dummy_88,Dummy_88,Dummy_88,Dummy_88),_mm256_set_pd(Dummy_94,Dummy_94,Dummy_94,Dummy_94))))),_mm256_mul_pd(Dummy_56,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_89,Dummy_89,Dummy_89,Dummy_89),_mm256_set_pd(Dummy_92,Dummy_92,Dummy_92,Dummy_92)),_mm256_mul_pd(_mm256_set_pd(Dummy_90,Dummy_90,Dummy_90,Dummy_90),_mm256_set_pd(Dummy_93,Dummy_93,Dummy_93,Dummy_93))),_mm256_mul_pd(_mm256_set_pd(Dummy_91,Dummy_91,Dummy_91,Dummy_91),_mm256_set_pd(Dummy_94,Dummy_94,Dummy_94,Dummy_94))))),_mm256_mul_pd(Dummy_57,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_64,Dummy_64,Dummy_64,Dummy_64)),_mm256_set_pd(Dummy_92,Dummy_92,Dummy_92,Dummy_92)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_67,Dummy_67,Dummy_67,Dummy_67)),_mm256_set_pd(Dummy_93,Dummy_93,Dummy_93,Dummy_93))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_70,Dummy_70,Dummy_70,Dummy_70)),_mm256_set_pd(Dummy_94,Dummy_94,Dummy_94,Dummy_94))))),_mm256_mul_pd(Dummy_58,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_71,Dummy_71,Dummy_71,Dummy_71)),_mm256_set_pd(Dummy_92,Dummy_92,Dummy_92,Dummy_92)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_72,Dummy_72,Dummy_72,Dummy_72)),_mm256_set_pd(Dummy_93,Dummy_93,Dummy_93,Dummy_93))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_73,Dummy_73,Dummy_73,Dummy_73)),_mm256_set_pd(Dummy_94,Dummy_94,Dummy_94,Dummy_94)))));
                const __m256d Dummy_100 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_59,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_76,Dummy_76,Dummy_76,Dummy_76),_mm256_set_pd(Dummy_95,Dummy_95,Dummy_95,Dummy_95)),_mm256_mul_pd(_mm256_set_pd(Dummy_79,Dummy_79,Dummy_79,Dummy_79),_mm256_set_pd(Dummy_96,Dummy_96,Dummy_96,Dummy_96))),_mm256_mul_pd(_mm256_set_pd(Dummy_82,Dummy_82,Dummy_82,Dummy_82),_mm256_set_pd(Dummy_97,Dummy_97,Dummy_97,Dummy_97)))),_mm256_mul_pd(Dummy_60,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_83,Dummy_83,Dummy_83,Dummy_83),_mm256_set_pd(Dummy_95,Dummy_95,Dummy_95,Dummy_95)),_mm256_mul_pd(_mm256_set_pd(Dummy_84,Dummy_84,Dummy_84,Dummy_84),_mm256_set_pd(Dummy_96,Dummy_96,Dummy_96,Dummy_96))),_mm256_mul_pd(_mm256_set_pd(Dummy_85,Dummy_85,Dummy_85,Dummy_85),_mm256_set_pd(Dummy_97,Dummy_97,Dummy_97,Dummy_97))))),_mm256_mul_pd(Dummy_61,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_86,Dummy_86,Dummy_86,Dummy_86),_mm256_set_pd(Dummy_95,Dummy_95,Dummy_95,Dummy_95)),_mm256_mul_pd(_mm256_set_pd(Dummy_87,Dummy_87,Dummy_87,Dummy_87),_mm256_set_pd(Dummy_96,Dummy_96,Dummy_96,Dummy_96))),_mm256_mul_pd(_mm256_set_pd(Dummy_88,Dummy_88,Dummy_88,Dummy_88),_mm256_set_pd(Dummy_97,Dummy_97,Dummy_97,Dummy_97))))),_mm256_mul_pd(Dummy_56,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_89,Dummy_89,Dummy_89,Dummy_89),_mm256_set_pd(Dummy_95,Dummy_95,Dummy_95,Dummy_95)),_mm256_mul_pd(_mm256_set_pd(Dummy_90,Dummy_90,Dummy_90,Dummy_90),_mm256_set_pd(Dummy_96,Dummy_96,Dummy_96,Dummy_96))),_mm256_mul_pd(_mm256_set_pd(Dummy_91,Dummy_91,Dummy_91,Dummy_91),_mm256_set_pd(Dummy_97,Dummy_97,Dummy_97,Dummy_97))))),_mm256_mul_pd(Dummy_57,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_64,Dummy_64,Dummy_64,Dummy_64)),_mm256_set_pd(Dummy_95,Dummy_95,Dummy_95,Dummy_95)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_67,Dummy_67,Dummy_67,Dummy_67)),_mm256_set_pd(Dummy_96,Dummy_96,Dummy_96,Dummy_96))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_70,Dummy_70,Dummy_70,Dummy_70)),_mm256_set_pd(Dummy_97,Dummy_97,Dummy_97,Dummy_97))))),_mm256_mul_pd(Dummy_58,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_71,Dummy_71,Dummy_71,Dummy_71)),_mm256_set_pd(Dummy_95,Dummy_95,Dummy_95,Dummy_95)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_72,Dummy_72,Dummy_72,Dummy_72)),_mm256_set_pd(Dummy_96,Dummy_96,Dummy_96,Dummy_96))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_73,Dummy_73,Dummy_73,Dummy_73)),_mm256_set_pd(Dummy_97,Dummy_97,Dummy_97,Dummy_97)))));
                {
                   {
                      _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(Dummy_98,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_99,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(Dummy_100,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_1*tmp_kernel_op_34 + tmp_kernel_op_36*tmp_kernel_op_5 + tmp_kernel_op_38*tmp_kernel_op_9) + src_dof_1*(-tmp_kernel_op_1*tmp_kernel_op_3 - tmp_kernel_op_11*tmp_kernel_op_9 - tmp_kernel_op_5*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_1*tmp_kernel_op_13 - tmp_kernel_op_15*tmp_kernel_op_5 - tmp_kernel_op_17*tmp_kernel_op_9) + src_dof_3*(tmp_kernel_op_1*tmp_kernel_op_20 + tmp_kernel_op_23*tmp_kernel_op_5 + tmp_kernel_op_26*tmp_kernel_op_9) + src_dof_4*(tmp_kernel_op_1*tmp_kernel_op_27 + tmp_kernel_op_28*tmp_kernel_op_5 + tmp_kernel_op_29*tmp_kernel_op_9) + src_dof_5*(tmp_kernel_op_1*tmp_kernel_op_30 + tmp_kernel_op_31*tmp_kernel_op_5 + tmp_kernel_op_32*tmp_kernel_op_9);
                const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_34*tmp_kernel_op_39 + tmp_kernel_op_36*tmp_kernel_op_40 + tmp_kernel_op_38*tmp_kernel_op_41) + src_dof_1*(-tmp_kernel_op_11*tmp_kernel_op_41 - tmp_kernel_op_3*tmp_kernel_op_39 - tmp_kernel_op_40*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_13*tmp_kernel_op_39 - tmp_kernel_op_15*tmp_kernel_op_40 - tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_3*(tmp_kernel_op_20*tmp_kernel_op_39 + tmp_kernel_op_23*tmp_kernel_op_40 + tmp_kernel_op_26*tmp_kernel_op_41) + src_dof_4*(tmp_kernel_op_27*tmp_kernel_op_39 + tmp_kernel_op_28*tmp_kernel_op_40 + tmp_kernel_op_29*tmp_kernel_op_41) + src_dof_5*(tmp_kernel_op_30*tmp_kernel_op_39 + tmp_kernel_op_31*tmp_kernel_op_40 + tmp_kernel_op_32*tmp_kernel_op_41);
                const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_34*tmp_kernel_op_42 + tmp_kernel_op_36*tmp_kernel_op_43 + tmp_kernel_op_38*tmp_kernel_op_44) + src_dof_1*(-tmp_kernel_op_11*tmp_kernel_op_44 - tmp_kernel_op_3*tmp_kernel_op_42 - tmp_kernel_op_43*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_13*tmp_kernel_op_42 - tmp_kernel_op_15*tmp_kernel_op_43 - tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_3*(tmp_kernel_op_20*tmp_kernel_op_42 + tmp_kernel_op_23*tmp_kernel_op_43 + tmp_kernel_op_26*tmp_kernel_op_44) + src_dof_4*(tmp_kernel_op_27*tmp_kernel_op_42 + tmp_kernel_op_28*tmp_kernel_op_43 + tmp_kernel_op_29*tmp_kernel_op_44) + src_dof_5*(tmp_kernel_op_30*tmp_kernel_op_42 + tmp_kernel_op_31*tmp_kernel_op_43 + tmp_kernel_op_32*tmp_kernel_op_44);
                {
                   {
                      _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                      _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   }
                }
                const real_t Dummy_56 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t Dummy_57 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t Dummy_58 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t Dummy_59 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t Dummy_60 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t Dummy_61 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t Dummy_98 = Dummy_56*(Dummy_63*Dummy_89 + Dummy_66*Dummy_90 + Dummy_69*Dummy_91) + Dummy_57*(-Dummy_63*Dummy_64 - Dummy_66*Dummy_67 - Dummy_69*Dummy_70) + Dummy_58*(-Dummy_63*Dummy_71 - Dummy_66*Dummy_72 - Dummy_69*Dummy_73) + Dummy_59*(Dummy_63*Dummy_76 + Dummy_66*Dummy_79 + Dummy_69*Dummy_82) + Dummy_60*(Dummy_63*Dummy_83 + Dummy_66*Dummy_84 + Dummy_69*Dummy_85) + Dummy_61*(Dummy_63*Dummy_86 + Dummy_66*Dummy_87 + Dummy_69*Dummy_88);
                const real_t Dummy_99 = Dummy_56*(Dummy_89*Dummy_92 + Dummy_90*Dummy_93 + Dummy_91*Dummy_94) + Dummy_57*(-Dummy_64*Dummy_92 - Dummy_67*Dummy_93 - Dummy_70*Dummy_94) + Dummy_58*(-Dummy_71*Dummy_92 - Dummy_72*Dummy_93 - Dummy_73*Dummy_94) + Dummy_59*(Dummy_76*Dummy_92 + Dummy_79*Dummy_93 + Dummy_82*Dummy_94) + Dummy_60*(Dummy_83*Dummy_92 + Dummy_84*Dummy_93 + Dummy_85*Dummy_94) + Dummy_61*(Dummy_86*Dummy_92 + Dummy_87*Dummy_93 + Dummy_88*Dummy_94);
                const real_t Dummy_100 = Dummy_56*(Dummy_89*Dummy_95 + Dummy_90*Dummy_96 + Dummy_91*Dummy_97) + Dummy_57*(-Dummy_64*Dummy_95 - Dummy_67*Dummy_96 - Dummy_70*Dummy_97) + Dummy_58*(-Dummy_71*Dummy_95 - Dummy_72*Dummy_96 - Dummy_73*Dummy_97) + Dummy_59*(Dummy_76*Dummy_95 + Dummy_79*Dummy_96 + Dummy_82*Dummy_97) + Dummy_60*(Dummy_83*Dummy_95 + Dummy_84*Dummy_96 + Dummy_85*Dummy_97) + Dummy_61*(Dummy_86*Dummy_95 + Dummy_87*Dummy_96 + Dummy_88*Dummy_97);
                {
                   {
                      _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_98 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_99 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_100 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   }
                }
             }
          }
          const real_t src_dof_0 = _data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const real_t src_dof_1 = _data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
          const real_t src_dof_2 = _data_srcVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
          const real_t src_dof_3 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
          const real_t src_dof_4 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
          const real_t src_dof_5 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_1*tmp_kernel_op_34 + tmp_kernel_op_36*tmp_kernel_op_5 + tmp_kernel_op_38*tmp_kernel_op_9) + src_dof_1*(-tmp_kernel_op_1*tmp_kernel_op_3 - tmp_kernel_op_11*tmp_kernel_op_9 - tmp_kernel_op_5*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_1*tmp_kernel_op_13 - tmp_kernel_op_15*tmp_kernel_op_5 - tmp_kernel_op_17*tmp_kernel_op_9) + src_dof_3*(tmp_kernel_op_1*tmp_kernel_op_20 + tmp_kernel_op_23*tmp_kernel_op_5 + tmp_kernel_op_26*tmp_kernel_op_9) + src_dof_4*(tmp_kernel_op_1*tmp_kernel_op_27 + tmp_kernel_op_28*tmp_kernel_op_5 + tmp_kernel_op_29*tmp_kernel_op_9) + src_dof_5*(tmp_kernel_op_1*tmp_kernel_op_30 + tmp_kernel_op_31*tmp_kernel_op_5 + tmp_kernel_op_32*tmp_kernel_op_9);
          const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_34*tmp_kernel_op_39 + tmp_kernel_op_36*tmp_kernel_op_40 + tmp_kernel_op_38*tmp_kernel_op_41) + src_dof_1*(-tmp_kernel_op_11*tmp_kernel_op_41 - tmp_kernel_op_3*tmp_kernel_op_39 - tmp_kernel_op_40*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_13*tmp_kernel_op_39 - tmp_kernel_op_15*tmp_kernel_op_40 - tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_3*(tmp_kernel_op_20*tmp_kernel_op_39 + tmp_kernel_op_23*tmp_kernel_op_40 + tmp_kernel_op_26*tmp_kernel_op_41) + src_dof_4*(tmp_kernel_op_27*tmp_kernel_op_39 + tmp_kernel_op_28*tmp_kernel_op_40 + tmp_kernel_op_29*tmp_kernel_op_41) + src_dof_5*(tmp_kernel_op_30*tmp_kernel_op_39 + tmp_kernel_op_31*tmp_kernel_op_40 + tmp_kernel_op_32*tmp_kernel_op_41);
          const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_34*tmp_kernel_op_42 + tmp_kernel_op_36*tmp_kernel_op_43 + tmp_kernel_op_38*tmp_kernel_op_44) + src_dof_1*(-tmp_kernel_op_11*tmp_kernel_op_44 - tmp_kernel_op_3*tmp_kernel_op_42 - tmp_kernel_op_43*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_13*tmp_kernel_op_42 - tmp_kernel_op_15*tmp_kernel_op_43 - tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_3*(tmp_kernel_op_20*tmp_kernel_op_42 + tmp_kernel_op_23*tmp_kernel_op_43 + tmp_kernel_op_26*tmp_kernel_op_44) + src_dof_4*(tmp_kernel_op_27*tmp_kernel_op_42 + tmp_kernel_op_28*tmp_kernel_op_43 + tmp_kernel_op_29*tmp_kernel_op_44) + src_dof_5*(tmp_kernel_op_30*tmp_kernel_op_42 + tmp_kernel_op_31*tmp_kernel_op_43 + tmp_kernel_op_32*tmp_kernel_op_44);
          {
             {
                {
                   _data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatVec_0 + _data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                   _data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_1 + _data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dst[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1] = elMatVec_2 + _data_dst[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
