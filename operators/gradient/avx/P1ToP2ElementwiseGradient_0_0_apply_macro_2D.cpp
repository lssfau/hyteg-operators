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

























#include "../P1ToP2ElementwiseGradient_0_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ToP2ElementwiseGradient_0_0::apply_macro_2D( walberla::float64 * RESTRICT  _data_dstEdge, walberla::float64 * RESTRICT  _data_dstVertex, walberla::float64 * RESTRICT  _data_src, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
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
       const walberla::float64 jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
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
       const walberla::float64 jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const walberla::float64 tmp_kernel_op_0 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_1 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_2 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const walberla::float64 tmp_kernel_op_3 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_4 = tmp_kernel_op_3*(-jac_affine_inv_0_0_GRAY*tmp_kernel_op_2 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_2);
       const walberla::float64 tmp_kernel_op_5 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_6 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_7 = tmp_kernel_op_5 + tmp_kernel_op_6 - 3.0;
       const walberla::float64 tmp_kernel_op_8 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_9 = tmp_kernel_op_8*(-jac_affine_inv_0_0_GRAY*tmp_kernel_op_7 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_7);
       const walberla::float64 tmp_kernel_op_10 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_11 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_12 = tmp_kernel_op_10 + tmp_kernel_op_11 - 3.0;
       const walberla::float64 tmp_kernel_op_13 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_14 = tmp_kernel_op_13*(-jac_affine_inv_0_0_GRAY*tmp_kernel_op_12 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_12);
       const walberla::float64 tmp_kernel_op_15 = 0.16666666666666674;
       const walberla::float64 tmp_kernel_op_16 = 0.16666666666666671;
       const walberla::float64 tmp_kernel_op_17 = 0.66666666666666674;
       const walberla::float64 tmp_kernel_op_18 = jac_affine_inv_0_0_GRAY*(tmp_kernel_op_0 - 1.0);
       const walberla::float64 tmp_kernel_op_19 = tmp_kernel_op_18*tmp_kernel_op_3;
       const walberla::float64 tmp_kernel_op_20 = jac_affine_inv_0_0_GRAY*(tmp_kernel_op_5 - 1.0);
       const walberla::float64 tmp_kernel_op_21 = tmp_kernel_op_20*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_22 = jac_affine_inv_0_0_GRAY*(tmp_kernel_op_10 - 1.0);
       const walberla::float64 tmp_kernel_op_23 = tmp_kernel_op_13*tmp_kernel_op_22;
       const walberla::float64 tmp_kernel_op_24 = tmp_kernel_op_15*tmp_kernel_op_3;
       const walberla::float64 tmp_kernel_op_25 = tmp_kernel_op_16*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_26 = tmp_kernel_op_13*tmp_kernel_op_17;
       const walberla::float64 tmp_kernel_op_27 = jac_affine_inv_1_0_GRAY*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 tmp_kernel_op_28 = tmp_kernel_op_27*tmp_kernel_op_3;
       const walberla::float64 tmp_kernel_op_29 = jac_affine_inv_1_0_GRAY*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 tmp_kernel_op_30 = tmp_kernel_op_29*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_31 = jac_affine_inv_1_0_GRAY*(tmp_kernel_op_11 - 1.0);
       const walberla::float64 tmp_kernel_op_32 = tmp_kernel_op_13*tmp_kernel_op_31;
       const walberla::float64 tmp_kernel_op_33 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_1;
       const walberla::float64 tmp_kernel_op_34 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_0;
       const walberla::float64 tmp_kernel_op_35 = tmp_kernel_op_3*(-tmp_kernel_op_33 - tmp_kernel_op_34);
       const walberla::float64 tmp_kernel_op_36 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_6;
       const walberla::float64 tmp_kernel_op_37 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_5;
       const walberla::float64 tmp_kernel_op_38 = tmp_kernel_op_8*(-tmp_kernel_op_36 - tmp_kernel_op_37);
       const walberla::float64 tmp_kernel_op_39 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_11;
       const walberla::float64 tmp_kernel_op_40 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_10;
       const walberla::float64 tmp_kernel_op_41 = tmp_kernel_op_13*(-tmp_kernel_op_39 - tmp_kernel_op_40);
       const walberla::float64 tmp_kernel_op_42 = tmp_kernel_op_3*(-jac_affine_inv_1_0_GRAY*(-tmp_kernel_op_0 - 1.333333333333333) + tmp_kernel_op_33);
       const walberla::float64 tmp_kernel_op_43 = tmp_kernel_op_8*(-jac_affine_inv_1_0_GRAY*(-tmp_kernel_op_5 + 2.666666666666667) + tmp_kernel_op_36);
       const walberla::float64 tmp_kernel_op_44 = tmp_kernel_op_13*(-jac_affine_inv_1_0_GRAY*(-tmp_kernel_op_10 + 2.666666666666667) + tmp_kernel_op_39);
       const walberla::float64 tmp_kernel_op_45 = tmp_kernel_op_3*(-jac_affine_inv_0_0_GRAY*(-tmp_kernel_op_1 + 2.666666666666667) + tmp_kernel_op_34);
       const walberla::float64 tmp_kernel_op_46 = tmp_kernel_op_8*(-jac_affine_inv_0_0_GRAY*(-tmp_kernel_op_6 - 1.333333333333333) + tmp_kernel_op_37);
       const walberla::float64 tmp_kernel_op_47 = tmp_kernel_op_13*(-jac_affine_inv_0_0_GRAY*(-tmp_kernel_op_11 + 2.666666666666667) + tmp_kernel_op_40);
       const walberla::float64 Dummy_7431 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_7432 = Dummy_7431*(-jac_affine_inv_0_0_BLUE*tmp_kernel_op_2 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_2);
       const walberla::float64 Dummy_7433 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_7434 = Dummy_7433*(-jac_affine_inv_0_0_BLUE*tmp_kernel_op_7 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_7);
       const walberla::float64 Dummy_7435 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_7436 = Dummy_7435*(-jac_affine_inv_0_0_BLUE*tmp_kernel_op_12 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_12);
       const walberla::float64 Dummy_7437 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_0 - 1.0);
       const walberla::float64 Dummy_7438 = Dummy_7431*Dummy_7437;
       const walberla::float64 Dummy_7439 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_5 - 1.0);
       const walberla::float64 Dummy_7440 = Dummy_7433*Dummy_7439;
       const walberla::float64 Dummy_7441 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_10 - 1.0);
       const walberla::float64 Dummy_7442 = Dummy_7435*Dummy_7441;
       const walberla::float64 Dummy_7443 = Dummy_7431*tmp_kernel_op_15;
       const walberla::float64 Dummy_7444 = Dummy_7433*tmp_kernel_op_16;
       const walberla::float64 Dummy_7445 = Dummy_7435*tmp_kernel_op_17;
       const walberla::float64 Dummy_7446 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 Dummy_7447 = Dummy_7431*Dummy_7446;
       const walberla::float64 Dummy_7448 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 Dummy_7449 = Dummy_7433*Dummy_7448;
       const walberla::float64 Dummy_7450 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_11 - 1.0);
       const walberla::float64 Dummy_7451 = Dummy_7435*Dummy_7450;
       const walberla::float64 Dummy_7452 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_7453 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_7454 = Dummy_7431*(-Dummy_7452 - Dummy_7453);
       const walberla::float64 Dummy_7455 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_6;
       const walberla::float64 Dummy_7456 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_5;
       const walberla::float64 Dummy_7457 = Dummy_7433*(-Dummy_7455 - Dummy_7456);
       const walberla::float64 Dummy_7458 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_11;
       const walberla::float64 Dummy_7459 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_10;
       const walberla::float64 Dummy_7460 = Dummy_7435*(-Dummy_7458 - Dummy_7459);
       const walberla::float64 Dummy_7461 = Dummy_7431*(Dummy_7452 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_0 - 1.333333333333333));
       const walberla::float64 Dummy_7462 = Dummy_7433*(Dummy_7455 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_5 + 2.666666666666667));
       const walberla::float64 Dummy_7463 = Dummy_7435*(Dummy_7458 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_10 + 2.666666666666667));
       const walberla::float64 Dummy_7464 = Dummy_7431*(Dummy_7453 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_1 + 2.666666666666667));
       const walberla::float64 Dummy_7465 = Dummy_7433*(Dummy_7456 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_6 - 1.333333333333333));
       const walberla::float64 Dummy_7466 = Dummy_7435*(Dummy_7459 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_11 + 2.666666666666667));
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_14,tmp_kernel_op_14,tmp_kernel_op_14,tmp_kernel_op_14)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9)))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_14,tmp_kernel_op_14,tmp_kernel_op_14,tmp_kernel_op_14)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4))))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_14,tmp_kernel_op_14,tmp_kernel_op_14,tmp_kernel_op_14),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15),_mm256_set_pd(tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9)))));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(tmp_kernel_op_19,tmp_kernel_op_19,tmp_kernel_op_19,tmp_kernel_op_19)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(tmp_kernel_op_21,tmp_kernel_op_21,tmp_kernel_op_21,tmp_kernel_op_21)))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(tmp_kernel_op_21,tmp_kernel_op_21,tmp_kernel_op_21,tmp_kernel_op_21)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23,tmp_kernel_op_23))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(tmp_kernel_op_19,tmp_kernel_op_19,tmp_kernel_op_19,tmp_kernel_op_19))))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_18,tmp_kernel_op_18,tmp_kernel_op_18,tmp_kernel_op_18)),_mm256_set_pd(tmp_kernel_op_24,tmp_kernel_op_24,tmp_kernel_op_24,tmp_kernel_op_24)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_20,tmp_kernel_op_20,tmp_kernel_op_20,tmp_kernel_op_20)),_mm256_set_pd(tmp_kernel_op_25,tmp_kernel_op_25,tmp_kernel_op_25,tmp_kernel_op_25))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_22,tmp_kernel_op_22,tmp_kernel_op_22,tmp_kernel_op_22)),_mm256_set_pd(tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26)))));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30)))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30,tmp_kernel_op_30)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32,tmp_kernel_op_32))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28))))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_24,tmp_kernel_op_24,tmp_kernel_op_24,tmp_kernel_op_24)),_mm256_set_pd(tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_25,tmp_kernel_op_25,tmp_kernel_op_25,tmp_kernel_op_25)),_mm256_set_pd(tmp_kernel_op_29,tmp_kernel_op_29,tmp_kernel_op_29,tmp_kernel_op_29))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26,tmp_kernel_op_26)),_mm256_set_pd(tmp_kernel_op_31,tmp_kernel_op_31,tmp_kernel_op_31,tmp_kernel_op_31)))));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_35,tmp_kernel_op_35,tmp_kernel_op_35,tmp_kernel_op_35)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(tmp_kernel_op_35,tmp_kernel_op_35,tmp_kernel_op_35,tmp_kernel_op_35))))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15),_mm256_set_pd(tmp_kernel_op_35,tmp_kernel_op_35,tmp_kernel_op_35,tmp_kernel_op_35)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16),_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17),_mm256_set_pd(tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41,tmp_kernel_op_41)))));
                const __m256d elMatVec_4 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43)))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42))))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15),_mm256_set_pd(tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42,tmp_kernel_op_42)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17),_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44)))));
                const __m256d elMatVec_5 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_47,tmp_kernel_op_47,tmp_kernel_op_47,tmp_kernel_op_47))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46)))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(tmp_kernel_op_47,tmp_kernel_op_47,tmp_kernel_op_47,tmp_kernel_op_47))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45))))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15),_mm256_set_pd(tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16),_mm256_set_pd(tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46))),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17),_mm256_set_pd(tmp_kernel_op_47,tmp_kernel_op_47,tmp_kernel_op_47,tmp_kernel_op_47)))));
                {
                   {
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatVec_4,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_5,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                   }
                }
                const __m256d Dummy_7428 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d Dummy_7429 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_7430 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d Dummy_7467 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_7429,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7432,Dummy_7432,Dummy_7432,Dummy_7432)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7436,Dummy_7436,Dummy_7436,Dummy_7436))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_7434,Dummy_7434,Dummy_7434,Dummy_7434)))),_mm256_mul_pd(Dummy_7430,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7434,Dummy_7434,Dummy_7434,Dummy_7434)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7436,Dummy_7436,Dummy_7436,Dummy_7436))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_7432,Dummy_7432,Dummy_7432,Dummy_7432))))),_mm256_mul_pd(Dummy_7428,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_7432,Dummy_7432,Dummy_7432,Dummy_7432),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_7434,Dummy_7434,Dummy_7434,Dummy_7434),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_7436,Dummy_7436,Dummy_7436,Dummy_7436),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                const __m256d Dummy_7468 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_7429,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_7438,Dummy_7438,Dummy_7438,Dummy_7438)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_7442,Dummy_7442,Dummy_7442,Dummy_7442))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_7440,Dummy_7440,Dummy_7440,Dummy_7440)))),_mm256_mul_pd(Dummy_7430,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_7440,Dummy_7440,Dummy_7440,Dummy_7440)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_7442,Dummy_7442,Dummy_7442,Dummy_7442))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_7438,Dummy_7438,Dummy_7438,Dummy_7438))))),_mm256_mul_pd(Dummy_7428,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_7437,Dummy_7437,Dummy_7437,Dummy_7437)),_mm256_set_pd(Dummy_7443,Dummy_7443,Dummy_7443,Dummy_7443)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_7439,Dummy_7439,Dummy_7439,Dummy_7439)),_mm256_set_pd(Dummy_7444,Dummy_7444,Dummy_7444,Dummy_7444))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_7441,Dummy_7441,Dummy_7441,Dummy_7441)),_mm256_set_pd(Dummy_7445,Dummy_7445,Dummy_7445,Dummy_7445)))));
                const __m256d Dummy_7469 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_7429,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_7447,Dummy_7447,Dummy_7447,Dummy_7447)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_7451,Dummy_7451,Dummy_7451,Dummy_7451))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_7449,Dummy_7449,Dummy_7449,Dummy_7449)))),_mm256_mul_pd(Dummy_7430,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_7449,Dummy_7449,Dummy_7449,Dummy_7449)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_7451,Dummy_7451,Dummy_7451,Dummy_7451))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_7447,Dummy_7447,Dummy_7447,Dummy_7447))))),_mm256_mul_pd(Dummy_7428,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_7443,Dummy_7443,Dummy_7443,Dummy_7443)),_mm256_set_pd(Dummy_7446,Dummy_7446,Dummy_7446,Dummy_7446)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_7444,Dummy_7444,Dummy_7444,Dummy_7444)),_mm256_set_pd(Dummy_7448,Dummy_7448,Dummy_7448,Dummy_7448))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_7445,Dummy_7445,Dummy_7445,Dummy_7445)),_mm256_set_pd(Dummy_7450,Dummy_7450,Dummy_7450,Dummy_7450)))));
                const __m256d Dummy_7470 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_7429,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7454,Dummy_7454,Dummy_7454,Dummy_7454)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7460,Dummy_7460,Dummy_7460,Dummy_7460))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_7457,Dummy_7457,Dummy_7457,Dummy_7457)))),_mm256_mul_pd(Dummy_7430,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7457,Dummy_7457,Dummy_7457,Dummy_7457)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7460,Dummy_7460,Dummy_7460,Dummy_7460))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_7454,Dummy_7454,Dummy_7454,Dummy_7454))))),_mm256_mul_pd(Dummy_7428,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_7454,Dummy_7454,Dummy_7454,Dummy_7454),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_7457,Dummy_7457,Dummy_7457,Dummy_7457),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_7460,Dummy_7460,Dummy_7460,Dummy_7460),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                const __m256d Dummy_7471 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_7429,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7461,Dummy_7461,Dummy_7461,Dummy_7461)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7463,Dummy_7463,Dummy_7463,Dummy_7463))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_7462,Dummy_7462,Dummy_7462,Dummy_7462)))),_mm256_mul_pd(Dummy_7430,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7462,Dummy_7462,Dummy_7462,Dummy_7462)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7463,Dummy_7463,Dummy_7463,Dummy_7463))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_7461,Dummy_7461,Dummy_7461,Dummy_7461))))),_mm256_mul_pd(Dummy_7428,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_7461,Dummy_7461,Dummy_7461,Dummy_7461),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_7462,Dummy_7462,Dummy_7462,Dummy_7462),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_7463,Dummy_7463,Dummy_7463,Dummy_7463),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                const __m256d Dummy_7472 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_7429,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7464,Dummy_7464,Dummy_7464,Dummy_7464)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7466,Dummy_7466,Dummy_7466,Dummy_7466))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_7465,Dummy_7465,Dummy_7465,Dummy_7465)))),_mm256_mul_pd(Dummy_7430,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7465,Dummy_7465,Dummy_7465,Dummy_7465)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_7466,Dummy_7466,Dummy_7466,Dummy_7466))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_7464,Dummy_7464,Dummy_7464,Dummy_7464))))),_mm256_mul_pd(Dummy_7428,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_7464,Dummy_7464,Dummy_7464,Dummy_7464),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_7465,Dummy_7465,Dummy_7465,Dummy_7465),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_7466,Dummy_7466,Dummy_7466,Dummy_7466),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                {
                   {
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(Dummy_7467,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_7468,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(Dummy_7469,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_7470,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(Dummy_7471,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(Dummy_7472,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const walberla::float64 src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const walberla::float64 src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const walberla::float64 src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const walberla::float64 elMatVec_0 = src_dof_0*(tmp_kernel_op_14*tmp_kernel_op_17 + tmp_kernel_op_15*tmp_kernel_op_4 + tmp_kernel_op_16*tmp_kernel_op_9) + src_dof_1*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.16666666666666666 + tmp_kernel_op_9*0.66666666666666663) + src_dof_2*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.66666666666666663 + tmp_kernel_op_9*0.16666666666666666);
                const walberla::float64 elMatVec_1 = src_dof_0*(-tmp_kernel_op_18*tmp_kernel_op_24 - tmp_kernel_op_20*tmp_kernel_op_25 - tmp_kernel_op_22*tmp_kernel_op_26) + src_dof_1*(tmp_kernel_op_19*-0.16666666666666666 + tmp_kernel_op_21*-0.66666666666666663 + tmp_kernel_op_23*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_19*-0.66666666666666663 + tmp_kernel_op_21*-0.16666666666666666 + tmp_kernel_op_23*-0.16666666666666666);
                const walberla::float64 elMatVec_2 = src_dof_0*(-tmp_kernel_op_24*tmp_kernel_op_27 - tmp_kernel_op_25*tmp_kernel_op_29 - tmp_kernel_op_26*tmp_kernel_op_31) + src_dof_1*(tmp_kernel_op_28*-0.16666666666666666 + tmp_kernel_op_30*-0.66666666666666663 + tmp_kernel_op_32*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_28*-0.66666666666666663 + tmp_kernel_op_30*-0.16666666666666666 + tmp_kernel_op_32*-0.16666666666666666);
                const walberla::float64 elMatVec_3 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_35 + tmp_kernel_op_16*tmp_kernel_op_38 + tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_1*(tmp_kernel_op_35*0.16666666666666666 + tmp_kernel_op_38*0.66666666666666663 + tmp_kernel_op_41*0.16666666666666666) + src_dof_2*(tmp_kernel_op_35*0.66666666666666663 + tmp_kernel_op_38*0.16666666666666666 + tmp_kernel_op_41*0.16666666666666666);
                const walberla::float64 elMatVec_4 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_42 + tmp_kernel_op_16*tmp_kernel_op_43 + tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_1*(tmp_kernel_op_42*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666) + src_dof_2*(tmp_kernel_op_42*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666);
                const walberla::float64 elMatVec_5 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_45 + tmp_kernel_op_16*tmp_kernel_op_46 + tmp_kernel_op_17*tmp_kernel_op_47) + src_dof_1*(tmp_kernel_op_45*0.16666666666666666 + tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666) + src_dof_2*(tmp_kernel_op_45*0.66666666666666663 + tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666);
                {
                   {
                      _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                      _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                      _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                      _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   }
                }
                const walberla::float64 Dummy_7428 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const walberla::float64 Dummy_7429 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const walberla::float64 Dummy_7430 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const walberla::float64 Dummy_7467 = Dummy_7428*(Dummy_7432*tmp_kernel_op_15 + Dummy_7434*tmp_kernel_op_16 + Dummy_7436*tmp_kernel_op_17) + Dummy_7429*(Dummy_7432*0.16666666666666666 + Dummy_7434*0.66666666666666663 + Dummy_7436*0.16666666666666666) + Dummy_7430*(Dummy_7432*0.66666666666666663 + Dummy_7434*0.16666666666666666 + Dummy_7436*0.16666666666666666);
                const walberla::float64 Dummy_7468 = Dummy_7428*(-Dummy_7437*Dummy_7443 - Dummy_7439*Dummy_7444 - Dummy_7441*Dummy_7445) + Dummy_7429*(Dummy_7438*-0.16666666666666666 + Dummy_7440*-0.66666666666666663 + Dummy_7442*-0.16666666666666666) + Dummy_7430*(Dummy_7438*-0.66666666666666663 + Dummy_7440*-0.16666666666666666 + Dummy_7442*-0.16666666666666666);
                const walberla::float64 Dummy_7469 = Dummy_7428*(-Dummy_7443*Dummy_7446 - Dummy_7444*Dummy_7448 - Dummy_7445*Dummy_7450) + Dummy_7429*(Dummy_7447*-0.16666666666666666 + Dummy_7449*-0.66666666666666663 + Dummy_7451*-0.16666666666666666) + Dummy_7430*(Dummy_7447*-0.66666666666666663 + Dummy_7449*-0.16666666666666666 + Dummy_7451*-0.16666666666666666);
                const walberla::float64 Dummy_7470 = Dummy_7428*(Dummy_7454*tmp_kernel_op_15 + Dummy_7457*tmp_kernel_op_16 + Dummy_7460*tmp_kernel_op_17) + Dummy_7429*(Dummy_7454*0.16666666666666666 + Dummy_7457*0.66666666666666663 + Dummy_7460*0.16666666666666666) + Dummy_7430*(Dummy_7454*0.66666666666666663 + Dummy_7457*0.16666666666666666 + Dummy_7460*0.16666666666666666);
                const walberla::float64 Dummy_7471 = Dummy_7428*(Dummy_7461*tmp_kernel_op_15 + Dummy_7462*tmp_kernel_op_16 + Dummy_7463*tmp_kernel_op_17) + Dummy_7429*(Dummy_7461*0.16666666666666666 + Dummy_7462*0.66666666666666663 + Dummy_7463*0.16666666666666666) + Dummy_7430*(Dummy_7461*0.66666666666666663 + Dummy_7462*0.16666666666666666 + Dummy_7463*0.16666666666666666);
                const walberla::float64 Dummy_7472 = Dummy_7428*(Dummy_7464*tmp_kernel_op_15 + Dummy_7465*tmp_kernel_op_16 + Dummy_7466*tmp_kernel_op_17) + Dummy_7429*(Dummy_7464*0.16666666666666666 + Dummy_7465*0.66666666666666663 + Dummy_7466*0.16666666666666666) + Dummy_7430*(Dummy_7464*0.66666666666666663 + Dummy_7465*0.16666666666666666 + Dummy_7466*0.16666666666666666);
                {
                   {
                      _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_7467 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_7468 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_7469 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                      _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_7470 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = Dummy_7471 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                      _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = Dummy_7472 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   }
                }
             }
          }
          const walberla::float64 src_dof_0 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const walberla::float64 src_dof_1 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
          const walberla::float64 src_dof_2 = _data_src[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
          const walberla::float64 elMatVec_0 = src_dof_0*(tmp_kernel_op_14*tmp_kernel_op_17 + tmp_kernel_op_15*tmp_kernel_op_4 + tmp_kernel_op_16*tmp_kernel_op_9) + src_dof_1*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.16666666666666666 + tmp_kernel_op_9*0.66666666666666663) + src_dof_2*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.66666666666666663 + tmp_kernel_op_9*0.16666666666666666);
          const walberla::float64 elMatVec_1 = src_dof_0*(-tmp_kernel_op_18*tmp_kernel_op_24 - tmp_kernel_op_20*tmp_kernel_op_25 - tmp_kernel_op_22*tmp_kernel_op_26) + src_dof_1*(tmp_kernel_op_19*-0.16666666666666666 + tmp_kernel_op_21*-0.66666666666666663 + tmp_kernel_op_23*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_19*-0.66666666666666663 + tmp_kernel_op_21*-0.16666666666666666 + tmp_kernel_op_23*-0.16666666666666666);
          const walberla::float64 elMatVec_2 = src_dof_0*(-tmp_kernel_op_24*tmp_kernel_op_27 - tmp_kernel_op_25*tmp_kernel_op_29 - tmp_kernel_op_26*tmp_kernel_op_31) + src_dof_1*(tmp_kernel_op_28*-0.16666666666666666 + tmp_kernel_op_30*-0.66666666666666663 + tmp_kernel_op_32*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_28*-0.66666666666666663 + tmp_kernel_op_30*-0.16666666666666666 + tmp_kernel_op_32*-0.16666666666666666);
          const walberla::float64 elMatVec_3 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_35 + tmp_kernel_op_16*tmp_kernel_op_38 + tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_1*(tmp_kernel_op_35*0.16666666666666666 + tmp_kernel_op_38*0.66666666666666663 + tmp_kernel_op_41*0.16666666666666666) + src_dof_2*(tmp_kernel_op_35*0.66666666666666663 + tmp_kernel_op_38*0.16666666666666666 + tmp_kernel_op_41*0.16666666666666666);
          const walberla::float64 elMatVec_4 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_42 + tmp_kernel_op_16*tmp_kernel_op_43 + tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_1*(tmp_kernel_op_42*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666) + src_dof_2*(tmp_kernel_op_42*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666);
          const walberla::float64 elMatVec_5 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_45 + tmp_kernel_op_16*tmp_kernel_op_46 + tmp_kernel_op_17*tmp_kernel_op_47) + src_dof_1*(tmp_kernel_op_45*0.16666666666666666 + tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666) + src_dof_2*(tmp_kernel_op_45*0.66666666666666663 + tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666);
          {
             {
                {
                   _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatVec_0 + _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                   _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_1 + _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dstVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1] = elMatVec_2 + _data_dstVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
                   _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1] = elMatVec_3 + _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
                   _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1] = elMatVec_4 + _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
                   _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatVec_5 + _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
