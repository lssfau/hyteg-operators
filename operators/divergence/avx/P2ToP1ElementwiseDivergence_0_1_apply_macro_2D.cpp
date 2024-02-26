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

























#include "../P2ToP1ElementwiseDivergence_0_1.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ToP1ElementwiseDivergence_0_1::apply_macro_2D( walberla::float64 * RESTRICT  _data_dst, walberla::float64 * RESTRICT  _data_srcEdge, walberla::float64 * RESTRICT  _data_srcVertex, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 tmp_coords_jac_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_3_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_4_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_0_0_BLUE = tmp_coords_jac_1_BLUE;
       const walberla::float64 p_affine_const_0_1_BLUE = tmp_coords_jac_2_BLUE;
       const walberla::float64 p_affine_const_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_3_BLUE;
       const walberla::float64 p_affine_const_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_4_BLUE;
       const walberla::float64 p_affine_const_2_0_BLUE = tmp_coords_jac_1_BLUE + tmp_coords_jac_3_BLUE;
       const walberla::float64 p_affine_const_2_1_BLUE = tmp_coords_jac_2_BLUE + tmp_coords_jac_4_BLUE;
       const walberla::float64 jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const walberla::float64 jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const walberla::float64 jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const walberla::float64 jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const walberla::float64 tmp_coords_jac_5_BLUE = jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE;
       const walberla::float64 tmp_coords_jac_6_BLUE = 1.0 / (tmp_coords_jac_5_BLUE);
       const walberla::float64 jac_affine_inv_0_0_BLUE = jac_affine_1_1_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 abs_det_jac_affine_BLUE = abs(tmp_coords_jac_5_BLUE);
       const walberla::float64 tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const walberla::float64 jac_affine_0_1_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_2_0_GRAY;
       const walberla::float64 jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const walberla::float64 jac_affine_1_1_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_2_1_GRAY;
       const walberla::float64 tmp_coords_jac_1_GRAY = jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY;
       const walberla::float64 tmp_coords_jac_2_GRAY = 1.0 / (tmp_coords_jac_1_GRAY);
       const walberla::float64 jac_affine_inv_0_0_GRAY = jac_affine_1_1_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const walberla::float64 tmp_kernel_op_0 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_1 = tmp_kernel_op_0*0.16666666666666674;
       const walberla::float64 tmp_kernel_op_2 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_3 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_2 - 1.0);
       const walberla::float64 tmp_kernel_op_4 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_5 = tmp_kernel_op_4*0.16666666666666671;
       const walberla::float64 tmp_kernel_op_6 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_7 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 tmp_kernel_op_8 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_9 = tmp_kernel_op_8*0.66666666666666674;
       const walberla::float64 tmp_kernel_op_10 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_11 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_10 - 1.0);
       const walberla::float64 tmp_kernel_op_12 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_13 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_12 - 1.0);
       const walberla::float64 tmp_kernel_op_14 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_15 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_14 - 1.0);
       const walberla::float64 tmp_kernel_op_16 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_17 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_16 - 1.0);
       const walberla::float64 tmp_kernel_op_18 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_12;
       const walberla::float64 tmp_kernel_op_19 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const walberla::float64 tmp_kernel_op_20 = -tmp_kernel_op_18 - tmp_kernel_op_19;
       const walberla::float64 tmp_kernel_op_21 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_14;
       const walberla::float64 tmp_kernel_op_22 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_6;
       const walberla::float64 tmp_kernel_op_23 = -tmp_kernel_op_21 - tmp_kernel_op_22;
       const walberla::float64 tmp_kernel_op_24 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_16;
       const walberla::float64 tmp_kernel_op_25 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_10;
       const walberla::float64 tmp_kernel_op_26 = -tmp_kernel_op_24 - tmp_kernel_op_25;
       const walberla::float64 tmp_kernel_op_27 = -jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_2 - 1.333333333333333) + tmp_kernel_op_18;
       const walberla::float64 tmp_kernel_op_28 = -jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_6 + 2.666666666666667) + tmp_kernel_op_21;
       const walberla::float64 tmp_kernel_op_29 = -jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_10 + 2.666666666666667) + tmp_kernel_op_24;
       const walberla::float64 tmp_kernel_op_30 = -jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_12 + 2.666666666666667) + tmp_kernel_op_19;
       const walberla::float64 tmp_kernel_op_31 = -jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_14 - 1.333333333333333) + tmp_kernel_op_22;
       const walberla::float64 tmp_kernel_op_32 = -jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_16 + 2.666666666666667) + tmp_kernel_op_25;
       const walberla::float64 tmp_kernel_op_33 = tmp_kernel_op_12 + tmp_kernel_op_2 - 3.0;
       const walberla::float64 tmp_kernel_op_34 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_33 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_33;
       const walberla::float64 tmp_kernel_op_35 = tmp_kernel_op_14 + tmp_kernel_op_6 - 3.0;
       const walberla::float64 tmp_kernel_op_36 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_35 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_35;
       const walberla::float64 tmp_kernel_op_37 = tmp_kernel_op_10 + tmp_kernel_op_16 - 3.0;
       const walberla::float64 tmp_kernel_op_38 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_37 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_37;
       const walberla::float64 tmp_kernel_op_39 = tmp_kernel_op_0*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_40 = tmp_kernel_op_4*0.66666666666666663;
       const walberla::float64 tmp_kernel_op_41 = tmp_kernel_op_8*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_42 = tmp_kernel_op_0*0.66666666666666663;
       const walberla::float64 tmp_kernel_op_43 = tmp_kernel_op_4*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_44 = tmp_kernel_op_8*0.16666666666666666;
       const walberla::float64 Dummy_2575 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_2576 = Dummy_2575*0.16666666666666674;
       const walberla::float64 Dummy_2577 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_2 - 1.0);
       const walberla::float64 Dummy_2578 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_2579 = Dummy_2578*0.16666666666666671;
       const walberla::float64 Dummy_2580 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 Dummy_2581 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_2582 = Dummy_2581*0.66666666666666674;
       const walberla::float64 Dummy_2583 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_10 - 1.0);
       const walberla::float64 Dummy_2584 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_12 - 1.0);
       const walberla::float64 Dummy_2585 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_14 - 1.0);
       const walberla::float64 Dummy_2586 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_16 - 1.0);
       const walberla::float64 Dummy_2587 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_12;
       const walberla::float64 Dummy_2588 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const walberla::float64 Dummy_2589 = -Dummy_2587 - Dummy_2588;
       const walberla::float64 Dummy_2590 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_14;
       const walberla::float64 Dummy_2591 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_6;
       const walberla::float64 Dummy_2592 = -Dummy_2590 - Dummy_2591;
       const walberla::float64 Dummy_2593 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_16;
       const walberla::float64 Dummy_2594 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_10;
       const walberla::float64 Dummy_2595 = -Dummy_2593 - Dummy_2594;
       const walberla::float64 Dummy_2596 = Dummy_2587 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_2 - 1.333333333333333);
       const walberla::float64 Dummy_2597 = Dummy_2590 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_6 + 2.666666666666667);
       const walberla::float64 Dummy_2598 = Dummy_2593 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_10 + 2.666666666666667);
       const walberla::float64 Dummy_2599 = Dummy_2588 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_12 + 2.666666666666667);
       const walberla::float64 Dummy_2600 = Dummy_2591 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_14 - 1.333333333333333);
       const walberla::float64 Dummy_2601 = Dummy_2594 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_16 + 2.666666666666667);
       const walberla::float64 Dummy_2602 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_33 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_33;
       const walberla::float64 Dummy_2603 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_35 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_35;
       const walberla::float64 Dummy_2604 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_37 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_37;
       const walberla::float64 Dummy_2605 = Dummy_2575*0.16666666666666666;
       const walberla::float64 Dummy_2606 = Dummy_2578*0.66666666666666663;
       const walberla::float64 Dummy_2607 = Dummy_2581*0.16666666666666666;
       const walberla::float64 Dummy_2608 = Dummy_2575*0.66666666666666663;
       const walberla::float64 Dummy_2609 = Dummy_2578*0.16666666666666666;
       const walberla::float64 Dummy_2610 = Dummy_2581*0.16666666666666666;
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
                const __m256d Dummy_2569 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d Dummy_2570 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_2571 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d Dummy_2572 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_2573 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d Dummy_2574 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d Dummy_2611 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_2572,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2576,Dummy_2576,Dummy_2576,Dummy_2576),_mm256_set_pd(Dummy_2589,Dummy_2589,Dummy_2589,Dummy_2589)),_mm256_mul_pd(_mm256_set_pd(Dummy_2579,Dummy_2579,Dummy_2579,Dummy_2579),_mm256_set_pd(Dummy_2592,Dummy_2592,Dummy_2592,Dummy_2592))),_mm256_mul_pd(_mm256_set_pd(Dummy_2582,Dummy_2582,Dummy_2582,Dummy_2582),_mm256_set_pd(Dummy_2595,Dummy_2595,Dummy_2595,Dummy_2595)))),_mm256_mul_pd(Dummy_2573,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2576,Dummy_2576,Dummy_2576,Dummy_2576),_mm256_set_pd(Dummy_2596,Dummy_2596,Dummy_2596,Dummy_2596)),_mm256_mul_pd(_mm256_set_pd(Dummy_2579,Dummy_2579,Dummy_2579,Dummy_2579),_mm256_set_pd(Dummy_2597,Dummy_2597,Dummy_2597,Dummy_2597))),_mm256_mul_pd(_mm256_set_pd(Dummy_2582,Dummy_2582,Dummy_2582,Dummy_2582),_mm256_set_pd(Dummy_2598,Dummy_2598,Dummy_2598,Dummy_2598))))),_mm256_mul_pd(Dummy_2574,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2576,Dummy_2576,Dummy_2576,Dummy_2576),_mm256_set_pd(Dummy_2599,Dummy_2599,Dummy_2599,Dummy_2599)),_mm256_mul_pd(_mm256_set_pd(Dummy_2579,Dummy_2579,Dummy_2579,Dummy_2579),_mm256_set_pd(Dummy_2600,Dummy_2600,Dummy_2600,Dummy_2600))),_mm256_mul_pd(_mm256_set_pd(Dummy_2582,Dummy_2582,Dummy_2582,Dummy_2582),_mm256_set_pd(Dummy_2601,Dummy_2601,Dummy_2601,Dummy_2601))))),_mm256_mul_pd(Dummy_2569,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2576,Dummy_2576,Dummy_2576,Dummy_2576),_mm256_set_pd(Dummy_2602,Dummy_2602,Dummy_2602,Dummy_2602)),_mm256_mul_pd(_mm256_set_pd(Dummy_2579,Dummy_2579,Dummy_2579,Dummy_2579),_mm256_set_pd(Dummy_2603,Dummy_2603,Dummy_2603,Dummy_2603))),_mm256_mul_pd(_mm256_set_pd(Dummy_2582,Dummy_2582,Dummy_2582,Dummy_2582),_mm256_set_pd(Dummy_2604,Dummy_2604,Dummy_2604,Dummy_2604))))),_mm256_mul_pd(Dummy_2570,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2576,Dummy_2576,Dummy_2576,Dummy_2576)),_mm256_set_pd(Dummy_2577,Dummy_2577,Dummy_2577,Dummy_2577)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2579,Dummy_2579,Dummy_2579,Dummy_2579)),_mm256_set_pd(Dummy_2580,Dummy_2580,Dummy_2580,Dummy_2580))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2582,Dummy_2582,Dummy_2582,Dummy_2582)),_mm256_set_pd(Dummy_2583,Dummy_2583,Dummy_2583,Dummy_2583))))),_mm256_mul_pd(Dummy_2571,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2576,Dummy_2576,Dummy_2576,Dummy_2576)),_mm256_set_pd(Dummy_2584,Dummy_2584,Dummy_2584,Dummy_2584)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2579,Dummy_2579,Dummy_2579,Dummy_2579)),_mm256_set_pd(Dummy_2585,Dummy_2585,Dummy_2585,Dummy_2585))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2582,Dummy_2582,Dummy_2582,Dummy_2582)),_mm256_set_pd(Dummy_2586,Dummy_2586,Dummy_2586,Dummy_2586)))));
                const __m256d Dummy_2612 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_2572,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2589,Dummy_2589,Dummy_2589,Dummy_2589),_mm256_set_pd(Dummy_2605,Dummy_2605,Dummy_2605,Dummy_2605)),_mm256_mul_pd(_mm256_set_pd(Dummy_2592,Dummy_2592,Dummy_2592,Dummy_2592),_mm256_set_pd(Dummy_2606,Dummy_2606,Dummy_2606,Dummy_2606))),_mm256_mul_pd(_mm256_set_pd(Dummy_2595,Dummy_2595,Dummy_2595,Dummy_2595),_mm256_set_pd(Dummy_2607,Dummy_2607,Dummy_2607,Dummy_2607)))),_mm256_mul_pd(Dummy_2573,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2596,Dummy_2596,Dummy_2596,Dummy_2596),_mm256_set_pd(Dummy_2605,Dummy_2605,Dummy_2605,Dummy_2605)),_mm256_mul_pd(_mm256_set_pd(Dummy_2597,Dummy_2597,Dummy_2597,Dummy_2597),_mm256_set_pd(Dummy_2606,Dummy_2606,Dummy_2606,Dummy_2606))),_mm256_mul_pd(_mm256_set_pd(Dummy_2598,Dummy_2598,Dummy_2598,Dummy_2598),_mm256_set_pd(Dummy_2607,Dummy_2607,Dummy_2607,Dummy_2607))))),_mm256_mul_pd(Dummy_2574,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2599,Dummy_2599,Dummy_2599,Dummy_2599),_mm256_set_pd(Dummy_2605,Dummy_2605,Dummy_2605,Dummy_2605)),_mm256_mul_pd(_mm256_set_pd(Dummy_2600,Dummy_2600,Dummy_2600,Dummy_2600),_mm256_set_pd(Dummy_2606,Dummy_2606,Dummy_2606,Dummy_2606))),_mm256_mul_pd(_mm256_set_pd(Dummy_2601,Dummy_2601,Dummy_2601,Dummy_2601),_mm256_set_pd(Dummy_2607,Dummy_2607,Dummy_2607,Dummy_2607))))),_mm256_mul_pd(Dummy_2569,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2602,Dummy_2602,Dummy_2602,Dummy_2602),_mm256_set_pd(Dummy_2605,Dummy_2605,Dummy_2605,Dummy_2605)),_mm256_mul_pd(_mm256_set_pd(Dummy_2603,Dummy_2603,Dummy_2603,Dummy_2603),_mm256_set_pd(Dummy_2606,Dummy_2606,Dummy_2606,Dummy_2606))),_mm256_mul_pd(_mm256_set_pd(Dummy_2604,Dummy_2604,Dummy_2604,Dummy_2604),_mm256_set_pd(Dummy_2607,Dummy_2607,Dummy_2607,Dummy_2607))))),_mm256_mul_pd(Dummy_2570,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2577,Dummy_2577,Dummy_2577,Dummy_2577)),_mm256_set_pd(Dummy_2605,Dummy_2605,Dummy_2605,Dummy_2605)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2580,Dummy_2580,Dummy_2580,Dummy_2580)),_mm256_set_pd(Dummy_2606,Dummy_2606,Dummy_2606,Dummy_2606))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2583,Dummy_2583,Dummy_2583,Dummy_2583)),_mm256_set_pd(Dummy_2607,Dummy_2607,Dummy_2607,Dummy_2607))))),_mm256_mul_pd(Dummy_2571,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2584,Dummy_2584,Dummy_2584,Dummy_2584)),_mm256_set_pd(Dummy_2605,Dummy_2605,Dummy_2605,Dummy_2605)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2585,Dummy_2585,Dummy_2585,Dummy_2585)),_mm256_set_pd(Dummy_2606,Dummy_2606,Dummy_2606,Dummy_2606))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2586,Dummy_2586,Dummy_2586,Dummy_2586)),_mm256_set_pd(Dummy_2607,Dummy_2607,Dummy_2607,Dummy_2607)))));
                const __m256d Dummy_2613 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_2572,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2589,Dummy_2589,Dummy_2589,Dummy_2589),_mm256_set_pd(Dummy_2608,Dummy_2608,Dummy_2608,Dummy_2608)),_mm256_mul_pd(_mm256_set_pd(Dummy_2592,Dummy_2592,Dummy_2592,Dummy_2592),_mm256_set_pd(Dummy_2609,Dummy_2609,Dummy_2609,Dummy_2609))),_mm256_mul_pd(_mm256_set_pd(Dummy_2595,Dummy_2595,Dummy_2595,Dummy_2595),_mm256_set_pd(Dummy_2610,Dummy_2610,Dummy_2610,Dummy_2610)))),_mm256_mul_pd(Dummy_2573,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2596,Dummy_2596,Dummy_2596,Dummy_2596),_mm256_set_pd(Dummy_2608,Dummy_2608,Dummy_2608,Dummy_2608)),_mm256_mul_pd(_mm256_set_pd(Dummy_2597,Dummy_2597,Dummy_2597,Dummy_2597),_mm256_set_pd(Dummy_2609,Dummy_2609,Dummy_2609,Dummy_2609))),_mm256_mul_pd(_mm256_set_pd(Dummy_2598,Dummy_2598,Dummy_2598,Dummy_2598),_mm256_set_pd(Dummy_2610,Dummy_2610,Dummy_2610,Dummy_2610))))),_mm256_mul_pd(Dummy_2574,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2599,Dummy_2599,Dummy_2599,Dummy_2599),_mm256_set_pd(Dummy_2608,Dummy_2608,Dummy_2608,Dummy_2608)),_mm256_mul_pd(_mm256_set_pd(Dummy_2600,Dummy_2600,Dummy_2600,Dummy_2600),_mm256_set_pd(Dummy_2609,Dummy_2609,Dummy_2609,Dummy_2609))),_mm256_mul_pd(_mm256_set_pd(Dummy_2601,Dummy_2601,Dummy_2601,Dummy_2601),_mm256_set_pd(Dummy_2610,Dummy_2610,Dummy_2610,Dummy_2610))))),_mm256_mul_pd(Dummy_2569,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_2602,Dummy_2602,Dummy_2602,Dummy_2602),_mm256_set_pd(Dummy_2608,Dummy_2608,Dummy_2608,Dummy_2608)),_mm256_mul_pd(_mm256_set_pd(Dummy_2603,Dummy_2603,Dummy_2603,Dummy_2603),_mm256_set_pd(Dummy_2609,Dummy_2609,Dummy_2609,Dummy_2609))),_mm256_mul_pd(_mm256_set_pd(Dummy_2604,Dummy_2604,Dummy_2604,Dummy_2604),_mm256_set_pd(Dummy_2610,Dummy_2610,Dummy_2610,Dummy_2610))))),_mm256_mul_pd(Dummy_2570,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2577,Dummy_2577,Dummy_2577,Dummy_2577)),_mm256_set_pd(Dummy_2608,Dummy_2608,Dummy_2608,Dummy_2608)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2580,Dummy_2580,Dummy_2580,Dummy_2580)),_mm256_set_pd(Dummy_2609,Dummy_2609,Dummy_2609,Dummy_2609))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2583,Dummy_2583,Dummy_2583,Dummy_2583)),_mm256_set_pd(Dummy_2610,Dummy_2610,Dummy_2610,Dummy_2610))))),_mm256_mul_pd(Dummy_2571,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2584,Dummy_2584,Dummy_2584,Dummy_2584)),_mm256_set_pd(Dummy_2608,Dummy_2608,Dummy_2608,Dummy_2608)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2585,Dummy_2585,Dummy_2585,Dummy_2585)),_mm256_set_pd(Dummy_2609,Dummy_2609,Dummy_2609,Dummy_2609))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_2586,Dummy_2586,Dummy_2586,Dummy_2586)),_mm256_set_pd(Dummy_2610,Dummy_2610,Dummy_2610,Dummy_2610)))));
                {
                   {
                      _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(Dummy_2611,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_2612,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(Dummy_2613,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const walberla::float64 src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const walberla::float64 src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const walberla::float64 src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const walberla::float64 src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const walberla::float64 src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const walberla::float64 src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const walberla::float64 elMatVec_0 = src_dof_0*(tmp_kernel_op_1*tmp_kernel_op_34 + tmp_kernel_op_36*tmp_kernel_op_5 + tmp_kernel_op_38*tmp_kernel_op_9) + src_dof_1*(-tmp_kernel_op_1*tmp_kernel_op_3 - tmp_kernel_op_11*tmp_kernel_op_9 - tmp_kernel_op_5*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_1*tmp_kernel_op_13 - tmp_kernel_op_15*tmp_kernel_op_5 - tmp_kernel_op_17*tmp_kernel_op_9) + src_dof_3*(tmp_kernel_op_1*tmp_kernel_op_20 + tmp_kernel_op_23*tmp_kernel_op_5 + tmp_kernel_op_26*tmp_kernel_op_9) + src_dof_4*(tmp_kernel_op_1*tmp_kernel_op_27 + tmp_kernel_op_28*tmp_kernel_op_5 + tmp_kernel_op_29*tmp_kernel_op_9) + src_dof_5*(tmp_kernel_op_1*tmp_kernel_op_30 + tmp_kernel_op_31*tmp_kernel_op_5 + tmp_kernel_op_32*tmp_kernel_op_9);
                const walberla::float64 elMatVec_1 = src_dof_0*(tmp_kernel_op_34*tmp_kernel_op_39 + tmp_kernel_op_36*tmp_kernel_op_40 + tmp_kernel_op_38*tmp_kernel_op_41) + src_dof_1*(-tmp_kernel_op_11*tmp_kernel_op_41 - tmp_kernel_op_3*tmp_kernel_op_39 - tmp_kernel_op_40*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_13*tmp_kernel_op_39 - tmp_kernel_op_15*tmp_kernel_op_40 - tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_3*(tmp_kernel_op_20*tmp_kernel_op_39 + tmp_kernel_op_23*tmp_kernel_op_40 + tmp_kernel_op_26*tmp_kernel_op_41) + src_dof_4*(tmp_kernel_op_27*tmp_kernel_op_39 + tmp_kernel_op_28*tmp_kernel_op_40 + tmp_kernel_op_29*tmp_kernel_op_41) + src_dof_5*(tmp_kernel_op_30*tmp_kernel_op_39 + tmp_kernel_op_31*tmp_kernel_op_40 + tmp_kernel_op_32*tmp_kernel_op_41);
                const walberla::float64 elMatVec_2 = src_dof_0*(tmp_kernel_op_34*tmp_kernel_op_42 + tmp_kernel_op_36*tmp_kernel_op_43 + tmp_kernel_op_38*tmp_kernel_op_44) + src_dof_1*(-tmp_kernel_op_11*tmp_kernel_op_44 - tmp_kernel_op_3*tmp_kernel_op_42 - tmp_kernel_op_43*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_13*tmp_kernel_op_42 - tmp_kernel_op_15*tmp_kernel_op_43 - tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_3*(tmp_kernel_op_20*tmp_kernel_op_42 + tmp_kernel_op_23*tmp_kernel_op_43 + tmp_kernel_op_26*tmp_kernel_op_44) + src_dof_4*(tmp_kernel_op_27*tmp_kernel_op_42 + tmp_kernel_op_28*tmp_kernel_op_43 + tmp_kernel_op_29*tmp_kernel_op_44) + src_dof_5*(tmp_kernel_op_30*tmp_kernel_op_42 + tmp_kernel_op_31*tmp_kernel_op_43 + tmp_kernel_op_32*tmp_kernel_op_44);
                {
                   {
                      _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                      _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   }
                }
                const walberla::float64 Dummy_2569 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const walberla::float64 Dummy_2570 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const walberla::float64 Dummy_2571 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const walberla::float64 Dummy_2572 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const walberla::float64 Dummy_2573 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const walberla::float64 Dummy_2574 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const walberla::float64 Dummy_2611 = Dummy_2569*(Dummy_2576*Dummy_2602 + Dummy_2579*Dummy_2603 + Dummy_2582*Dummy_2604) + Dummy_2570*(-Dummy_2576*Dummy_2577 - Dummy_2579*Dummy_2580 - Dummy_2582*Dummy_2583) + Dummy_2571*(-Dummy_2576*Dummy_2584 - Dummy_2579*Dummy_2585 - Dummy_2582*Dummy_2586) + Dummy_2572*(Dummy_2576*Dummy_2589 + Dummy_2579*Dummy_2592 + Dummy_2582*Dummy_2595) + Dummy_2573*(Dummy_2576*Dummy_2596 + Dummy_2579*Dummy_2597 + Dummy_2582*Dummy_2598) + Dummy_2574*(Dummy_2576*Dummy_2599 + Dummy_2579*Dummy_2600 + Dummy_2582*Dummy_2601);
                const walberla::float64 Dummy_2612 = Dummy_2569*(Dummy_2602*Dummy_2605 + Dummy_2603*Dummy_2606 + Dummy_2604*Dummy_2607) + Dummy_2570*(-Dummy_2577*Dummy_2605 - Dummy_2580*Dummy_2606 - Dummy_2583*Dummy_2607) + Dummy_2571*(-Dummy_2584*Dummy_2605 - Dummy_2585*Dummy_2606 - Dummy_2586*Dummy_2607) + Dummy_2572*(Dummy_2589*Dummy_2605 + Dummy_2592*Dummy_2606 + Dummy_2595*Dummy_2607) + Dummy_2573*(Dummy_2596*Dummy_2605 + Dummy_2597*Dummy_2606 + Dummy_2598*Dummy_2607) + Dummy_2574*(Dummy_2599*Dummy_2605 + Dummy_2600*Dummy_2606 + Dummy_2601*Dummy_2607);
                const walberla::float64 Dummy_2613 = Dummy_2569*(Dummy_2602*Dummy_2608 + Dummy_2603*Dummy_2609 + Dummy_2604*Dummy_2610) + Dummy_2570*(-Dummy_2577*Dummy_2608 - Dummy_2580*Dummy_2609 - Dummy_2583*Dummy_2610) + Dummy_2571*(-Dummy_2584*Dummy_2608 - Dummy_2585*Dummy_2609 - Dummy_2586*Dummy_2610) + Dummy_2572*(Dummy_2589*Dummy_2608 + Dummy_2592*Dummy_2609 + Dummy_2595*Dummy_2610) + Dummy_2573*(Dummy_2596*Dummy_2608 + Dummy_2597*Dummy_2609 + Dummy_2598*Dummy_2610) + Dummy_2574*(Dummy_2599*Dummy_2608 + Dummy_2600*Dummy_2609 + Dummy_2601*Dummy_2610);
                {
                   {
                      _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_2611 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_2612 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_2613 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   }
                }
             }
          }
          const walberla::float64 src_dof_0 = _data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const walberla::float64 src_dof_1 = _data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
          const walberla::float64 src_dof_2 = _data_srcVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
          const walberla::float64 src_dof_3 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
          const walberla::float64 src_dof_4 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
          const walberla::float64 src_dof_5 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const walberla::float64 elMatVec_0 = src_dof_0*(tmp_kernel_op_1*tmp_kernel_op_34 + tmp_kernel_op_36*tmp_kernel_op_5 + tmp_kernel_op_38*tmp_kernel_op_9) + src_dof_1*(-tmp_kernel_op_1*tmp_kernel_op_3 - tmp_kernel_op_11*tmp_kernel_op_9 - tmp_kernel_op_5*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_1*tmp_kernel_op_13 - tmp_kernel_op_15*tmp_kernel_op_5 - tmp_kernel_op_17*tmp_kernel_op_9) + src_dof_3*(tmp_kernel_op_1*tmp_kernel_op_20 + tmp_kernel_op_23*tmp_kernel_op_5 + tmp_kernel_op_26*tmp_kernel_op_9) + src_dof_4*(tmp_kernel_op_1*tmp_kernel_op_27 + tmp_kernel_op_28*tmp_kernel_op_5 + tmp_kernel_op_29*tmp_kernel_op_9) + src_dof_5*(tmp_kernel_op_1*tmp_kernel_op_30 + tmp_kernel_op_31*tmp_kernel_op_5 + tmp_kernel_op_32*tmp_kernel_op_9);
          const walberla::float64 elMatVec_1 = src_dof_0*(tmp_kernel_op_34*tmp_kernel_op_39 + tmp_kernel_op_36*tmp_kernel_op_40 + tmp_kernel_op_38*tmp_kernel_op_41) + src_dof_1*(-tmp_kernel_op_11*tmp_kernel_op_41 - tmp_kernel_op_3*tmp_kernel_op_39 - tmp_kernel_op_40*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_13*tmp_kernel_op_39 - tmp_kernel_op_15*tmp_kernel_op_40 - tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_3*(tmp_kernel_op_20*tmp_kernel_op_39 + tmp_kernel_op_23*tmp_kernel_op_40 + tmp_kernel_op_26*tmp_kernel_op_41) + src_dof_4*(tmp_kernel_op_27*tmp_kernel_op_39 + tmp_kernel_op_28*tmp_kernel_op_40 + tmp_kernel_op_29*tmp_kernel_op_41) + src_dof_5*(tmp_kernel_op_30*tmp_kernel_op_39 + tmp_kernel_op_31*tmp_kernel_op_40 + tmp_kernel_op_32*tmp_kernel_op_41);
          const walberla::float64 elMatVec_2 = src_dof_0*(tmp_kernel_op_34*tmp_kernel_op_42 + tmp_kernel_op_36*tmp_kernel_op_43 + tmp_kernel_op_38*tmp_kernel_op_44) + src_dof_1*(-tmp_kernel_op_11*tmp_kernel_op_44 - tmp_kernel_op_3*tmp_kernel_op_42 - tmp_kernel_op_43*tmp_kernel_op_7) + src_dof_2*(-tmp_kernel_op_13*tmp_kernel_op_42 - tmp_kernel_op_15*tmp_kernel_op_43 - tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_3*(tmp_kernel_op_20*tmp_kernel_op_42 + tmp_kernel_op_23*tmp_kernel_op_43 + tmp_kernel_op_26*tmp_kernel_op_44) + src_dof_4*(tmp_kernel_op_27*tmp_kernel_op_42 + tmp_kernel_op_28*tmp_kernel_op_43 + tmp_kernel_op_29*tmp_kernel_op_44) + src_dof_5*(tmp_kernel_op_30*tmp_kernel_op_42 + tmp_kernel_op_31*tmp_kernel_op_43 + tmp_kernel_op_32*tmp_kernel_op_44);
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
