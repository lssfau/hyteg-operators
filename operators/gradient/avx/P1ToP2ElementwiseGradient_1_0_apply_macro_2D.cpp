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

























#include "../P1ToP2ElementwiseGradient_1_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ToP2ElementwiseGradient_1_0::apply_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_coords_jac_6_BLUE;
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
       const real_t jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const real_t tmp_kernel_op_0 = 0.66666666666666663;
       const real_t tmp_kernel_op_1 = 2.6666666666666665;
       const real_t tmp_kernel_op_2 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const real_t tmp_kernel_op_3 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_4 = tmp_kernel_op_3*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_2);
       const real_t tmp_kernel_op_5 = 2.6666666666666665;
       const real_t tmp_kernel_op_6 = 0.66666666666666663;
       const real_t tmp_kernel_op_7 = tmp_kernel_op_5 + tmp_kernel_op_6 - 3.0;
       const real_t tmp_kernel_op_8 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_9 = tmp_kernel_op_8*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_7 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_7);
       const real_t tmp_kernel_op_10 = 0.66666666666666663;
       const real_t tmp_kernel_op_11 = 0.66666666666666663;
       const real_t tmp_kernel_op_12 = tmp_kernel_op_10 + tmp_kernel_op_11 - 3.0;
       const real_t tmp_kernel_op_13 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_14 = tmp_kernel_op_13*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_12 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_12);
       const real_t tmp_kernel_op_15 = 0.16666666666666674;
       const real_t tmp_kernel_op_16 = 0.16666666666666671;
       const real_t tmp_kernel_op_17 = 0.66666666666666674;
       const real_t tmp_kernel_op_18 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_0 - 1.0);
       const real_t tmp_kernel_op_19 = tmp_kernel_op_18*tmp_kernel_op_3;
       const real_t tmp_kernel_op_20 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_5 - 1.0);
       const real_t tmp_kernel_op_21 = tmp_kernel_op_20*tmp_kernel_op_8;
       const real_t tmp_kernel_op_22 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_10 - 1.0);
       const real_t tmp_kernel_op_23 = tmp_kernel_op_13*tmp_kernel_op_22;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_15*tmp_kernel_op_3;
       const real_t tmp_kernel_op_25 = tmp_kernel_op_16*tmp_kernel_op_8;
       const real_t tmp_kernel_op_26 = tmp_kernel_op_13*tmp_kernel_op_17;
       const real_t tmp_kernel_op_27 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_1 - 1.0);
       const real_t tmp_kernel_op_28 = tmp_kernel_op_27*tmp_kernel_op_3;
       const real_t tmp_kernel_op_29 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_6 - 1.0);
       const real_t tmp_kernel_op_30 = tmp_kernel_op_29*tmp_kernel_op_8;
       const real_t tmp_kernel_op_31 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_11 - 1.0);
       const real_t tmp_kernel_op_32 = tmp_kernel_op_13*tmp_kernel_op_31;
       const real_t tmp_kernel_op_33 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_34 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_35 = tmp_kernel_op_3*(-tmp_kernel_op_33 - tmp_kernel_op_34);
       const real_t tmp_kernel_op_36 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_6;
       const real_t tmp_kernel_op_37 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_5;
       const real_t tmp_kernel_op_38 = tmp_kernel_op_8*(-tmp_kernel_op_36 - tmp_kernel_op_37);
       const real_t tmp_kernel_op_39 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_11;
       const real_t tmp_kernel_op_40 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_10;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_13*(-tmp_kernel_op_39 - tmp_kernel_op_40);
       const real_t tmp_kernel_op_42 = tmp_kernel_op_3*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_0 - 1.333333333333333) + tmp_kernel_op_33);
       const real_t tmp_kernel_op_43 = tmp_kernel_op_8*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_5 + 2.666666666666667) + tmp_kernel_op_36);
       const real_t tmp_kernel_op_44 = tmp_kernel_op_13*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_10 + 2.666666666666667) + tmp_kernel_op_39);
       const real_t tmp_kernel_op_45 = tmp_kernel_op_3*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_1 + 2.666666666666667) + tmp_kernel_op_34);
       const real_t tmp_kernel_op_46 = tmp_kernel_op_8*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_6 - 1.333333333333333) + tmp_kernel_op_37);
       const real_t tmp_kernel_op_47 = tmp_kernel_op_13*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_11 + 2.666666666666667) + tmp_kernel_op_40);
       const real_t Dummy_461 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_462 = Dummy_461*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_2);
       const real_t Dummy_463 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_464 = Dummy_463*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_7 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_7);
       const real_t Dummy_465 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_466 = Dummy_465*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_12 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_12);
       const real_t Dummy_467 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_0 - 1.0);
       const real_t Dummy_468 = Dummy_461*Dummy_467;
       const real_t Dummy_469 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_5 - 1.0);
       const real_t Dummy_470 = Dummy_463*Dummy_469;
       const real_t Dummy_471 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_10 - 1.0);
       const real_t Dummy_472 = Dummy_465*Dummy_471;
       const real_t Dummy_473 = Dummy_461*tmp_kernel_op_15;
       const real_t Dummy_474 = Dummy_463*tmp_kernel_op_16;
       const real_t Dummy_475 = Dummy_465*tmp_kernel_op_17;
       const real_t Dummy_476 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_1 - 1.0);
       const real_t Dummy_477 = Dummy_461*Dummy_476;
       const real_t Dummy_478 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_6 - 1.0);
       const real_t Dummy_479 = Dummy_463*Dummy_478;
       const real_t Dummy_480 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_11 - 1.0);
       const real_t Dummy_481 = Dummy_465*Dummy_480;
       const real_t Dummy_482 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const real_t Dummy_483 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const real_t Dummy_484 = Dummy_461*(-Dummy_482 - Dummy_483);
       const real_t Dummy_485 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_6;
       const real_t Dummy_486 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_5;
       const real_t Dummy_487 = Dummy_463*(-Dummy_485 - Dummy_486);
       const real_t Dummy_488 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_11;
       const real_t Dummy_489 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_10;
       const real_t Dummy_490 = Dummy_465*(-Dummy_488 - Dummy_489);
       const real_t Dummy_491 = Dummy_461*(Dummy_482 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_0 - 1.333333333333333));
       const real_t Dummy_492 = Dummy_463*(Dummy_485 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_5 + 2.666666666666667));
       const real_t Dummy_493 = Dummy_465*(Dummy_488 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_10 + 2.666666666666667));
       const real_t Dummy_494 = Dummy_461*(Dummy_483 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_1 + 2.666666666666667));
       const real_t Dummy_495 = Dummy_463*(Dummy_486 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_6 - 1.333333333333333));
       const real_t Dummy_496 = Dummy_465*(Dummy_489 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_11 + 2.666666666666667));
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
                const __m256d Dummy_458 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d Dummy_459 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_460 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d Dummy_497 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_459,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_462,Dummy_462,Dummy_462,Dummy_462)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_466,Dummy_466,Dummy_466,Dummy_466))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_464,Dummy_464,Dummy_464,Dummy_464)))),_mm256_mul_pd(Dummy_460,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_464,Dummy_464,Dummy_464,Dummy_464)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_466,Dummy_466,Dummy_466,Dummy_466))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_462,Dummy_462,Dummy_462,Dummy_462))))),_mm256_mul_pd(Dummy_458,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_462,Dummy_462,Dummy_462,Dummy_462),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_464,Dummy_464,Dummy_464,Dummy_464),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_466,Dummy_466,Dummy_466,Dummy_466),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                const __m256d Dummy_498 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_459,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_468,Dummy_468,Dummy_468,Dummy_468)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_472,Dummy_472,Dummy_472,Dummy_472))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_470,Dummy_470,Dummy_470,Dummy_470)))),_mm256_mul_pd(Dummy_460,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_470,Dummy_470,Dummy_470,Dummy_470)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_472,Dummy_472,Dummy_472,Dummy_472))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_468,Dummy_468,Dummy_468,Dummy_468))))),_mm256_mul_pd(Dummy_458,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_467,Dummy_467,Dummy_467,Dummy_467)),_mm256_set_pd(Dummy_473,Dummy_473,Dummy_473,Dummy_473)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_469,Dummy_469,Dummy_469,Dummy_469)),_mm256_set_pd(Dummy_474,Dummy_474,Dummy_474,Dummy_474))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_471,Dummy_471,Dummy_471,Dummy_471)),_mm256_set_pd(Dummy_475,Dummy_475,Dummy_475,Dummy_475)))));
                const __m256d Dummy_499 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_459,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_477,Dummy_477,Dummy_477,Dummy_477)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_481,Dummy_481,Dummy_481,Dummy_481))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_479,Dummy_479,Dummy_479,Dummy_479)))),_mm256_mul_pd(Dummy_460,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_479,Dummy_479,Dummy_479,Dummy_479)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_481,Dummy_481,Dummy_481,Dummy_481))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_477,Dummy_477,Dummy_477,Dummy_477))))),_mm256_mul_pd(Dummy_458,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_473,Dummy_473,Dummy_473,Dummy_473)),_mm256_set_pd(Dummy_476,Dummy_476,Dummy_476,Dummy_476)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_474,Dummy_474,Dummy_474,Dummy_474)),_mm256_set_pd(Dummy_478,Dummy_478,Dummy_478,Dummy_478))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_475,Dummy_475,Dummy_475,Dummy_475)),_mm256_set_pd(Dummy_480,Dummy_480,Dummy_480,Dummy_480)))));
                const __m256d Dummy_500 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_459,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_484,Dummy_484,Dummy_484,Dummy_484)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_490,Dummy_490,Dummy_490,Dummy_490))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_487,Dummy_487,Dummy_487,Dummy_487)))),_mm256_mul_pd(Dummy_460,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_487,Dummy_487,Dummy_487,Dummy_487)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_490,Dummy_490,Dummy_490,Dummy_490))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_484,Dummy_484,Dummy_484,Dummy_484))))),_mm256_mul_pd(Dummy_458,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_484,Dummy_484,Dummy_484,Dummy_484),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_487,Dummy_487,Dummy_487,Dummy_487),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_490,Dummy_490,Dummy_490,Dummy_490),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                const __m256d Dummy_501 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_459,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_491,Dummy_491,Dummy_491,Dummy_491)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_493,Dummy_493,Dummy_493,Dummy_493))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_492,Dummy_492,Dummy_492,Dummy_492)))),_mm256_mul_pd(Dummy_460,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_492,Dummy_492,Dummy_492,Dummy_492)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_493,Dummy_493,Dummy_493,Dummy_493))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_491,Dummy_491,Dummy_491,Dummy_491))))),_mm256_mul_pd(Dummy_458,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_491,Dummy_491,Dummy_491,Dummy_491),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_492,Dummy_492,Dummy_492,Dummy_492),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_493,Dummy_493,Dummy_493,Dummy_493),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                const __m256d Dummy_502 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_459,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_494,Dummy_494,Dummy_494,Dummy_494)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_496,Dummy_496,Dummy_496,Dummy_496))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_495,Dummy_495,Dummy_495,Dummy_495)))),_mm256_mul_pd(Dummy_460,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_495,Dummy_495,Dummy_495,Dummy_495)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_496,Dummy_496,Dummy_496,Dummy_496))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_494,Dummy_494,Dummy_494,Dummy_494))))),_mm256_mul_pd(Dummy_458,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_494,Dummy_494,Dummy_494,Dummy_494),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_495,Dummy_495,Dummy_495,Dummy_495),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_496,Dummy_496,Dummy_496,Dummy_496),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                {
                   {
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(Dummy_497,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_498,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(Dummy_499,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_500,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(Dummy_501,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(Dummy_502,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_14*tmp_kernel_op_17 + tmp_kernel_op_15*tmp_kernel_op_4 + tmp_kernel_op_16*tmp_kernel_op_9) + src_dof_1*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.16666666666666666 + tmp_kernel_op_9*0.66666666666666663) + src_dof_2*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.66666666666666663 + tmp_kernel_op_9*0.16666666666666666);
                const real_t elMatVec_1 = src_dof_0*(-tmp_kernel_op_18*tmp_kernel_op_24 - tmp_kernel_op_20*tmp_kernel_op_25 - tmp_kernel_op_22*tmp_kernel_op_26) + src_dof_1*(tmp_kernel_op_19*-0.16666666666666666 + tmp_kernel_op_21*-0.66666666666666663 + tmp_kernel_op_23*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_19*-0.66666666666666663 + tmp_kernel_op_21*-0.16666666666666666 + tmp_kernel_op_23*-0.16666666666666666);
                const real_t elMatVec_2 = src_dof_0*(-tmp_kernel_op_24*tmp_kernel_op_27 - tmp_kernel_op_25*tmp_kernel_op_29 - tmp_kernel_op_26*tmp_kernel_op_31) + src_dof_1*(tmp_kernel_op_28*-0.16666666666666666 + tmp_kernel_op_30*-0.66666666666666663 + tmp_kernel_op_32*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_28*-0.66666666666666663 + tmp_kernel_op_30*-0.16666666666666666 + tmp_kernel_op_32*-0.16666666666666666);
                const real_t elMatVec_3 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_35 + tmp_kernel_op_16*tmp_kernel_op_38 + tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_1*(tmp_kernel_op_35*0.16666666666666666 + tmp_kernel_op_38*0.66666666666666663 + tmp_kernel_op_41*0.16666666666666666) + src_dof_2*(tmp_kernel_op_35*0.66666666666666663 + tmp_kernel_op_38*0.16666666666666666 + tmp_kernel_op_41*0.16666666666666666);
                const real_t elMatVec_4 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_42 + tmp_kernel_op_16*tmp_kernel_op_43 + tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_1*(tmp_kernel_op_42*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666) + src_dof_2*(tmp_kernel_op_42*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666);
                const real_t elMatVec_5 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_45 + tmp_kernel_op_16*tmp_kernel_op_46 + tmp_kernel_op_17*tmp_kernel_op_47) + src_dof_1*(tmp_kernel_op_45*0.16666666666666666 + tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666) + src_dof_2*(tmp_kernel_op_45*0.66666666666666663 + tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666);
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
                const real_t Dummy_458 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t Dummy_459 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t Dummy_460 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t Dummy_497 = Dummy_458*(Dummy_462*tmp_kernel_op_15 + Dummy_464*tmp_kernel_op_16 + Dummy_466*tmp_kernel_op_17) + Dummy_459*(Dummy_462*0.16666666666666666 + Dummy_464*0.66666666666666663 + Dummy_466*0.16666666666666666) + Dummy_460*(Dummy_462*0.66666666666666663 + Dummy_464*0.16666666666666666 + Dummy_466*0.16666666666666666);
                const real_t Dummy_498 = Dummy_458*(-Dummy_467*Dummy_473 - Dummy_469*Dummy_474 - Dummy_471*Dummy_475) + Dummy_459*(Dummy_468*-0.16666666666666666 + Dummy_470*-0.66666666666666663 + Dummy_472*-0.16666666666666666) + Dummy_460*(Dummy_468*-0.66666666666666663 + Dummy_470*-0.16666666666666666 + Dummy_472*-0.16666666666666666);
                const real_t Dummy_499 = Dummy_458*(-Dummy_473*Dummy_476 - Dummy_474*Dummy_478 - Dummy_475*Dummy_480) + Dummy_459*(Dummy_477*-0.16666666666666666 + Dummy_479*-0.66666666666666663 + Dummy_481*-0.16666666666666666) + Dummy_460*(Dummy_477*-0.66666666666666663 + Dummy_479*-0.16666666666666666 + Dummy_481*-0.16666666666666666);
                const real_t Dummy_500 = Dummy_458*(Dummy_484*tmp_kernel_op_15 + Dummy_487*tmp_kernel_op_16 + Dummy_490*tmp_kernel_op_17) + Dummy_459*(Dummy_484*0.16666666666666666 + Dummy_487*0.66666666666666663 + Dummy_490*0.16666666666666666) + Dummy_460*(Dummy_484*0.66666666666666663 + Dummy_487*0.16666666666666666 + Dummy_490*0.16666666666666666);
                const real_t Dummy_501 = Dummy_458*(Dummy_491*tmp_kernel_op_15 + Dummy_492*tmp_kernel_op_16 + Dummy_493*tmp_kernel_op_17) + Dummy_459*(Dummy_491*0.16666666666666666 + Dummy_492*0.66666666666666663 + Dummy_493*0.16666666666666666) + Dummy_460*(Dummy_491*0.66666666666666663 + Dummy_492*0.16666666666666666 + Dummy_493*0.16666666666666666);
                const real_t Dummy_502 = Dummy_458*(Dummy_494*tmp_kernel_op_15 + Dummy_495*tmp_kernel_op_16 + Dummy_496*tmp_kernel_op_17) + Dummy_459*(Dummy_494*0.16666666666666666 + Dummy_495*0.66666666666666663 + Dummy_496*0.16666666666666666) + Dummy_460*(Dummy_494*0.66666666666666663 + Dummy_495*0.16666666666666666 + Dummy_496*0.16666666666666666);
                {
                   {
                      _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_497 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_498 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_499 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                      _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_500 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = Dummy_501 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                      _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = Dummy_502 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   }
                }
             }
          }
          const real_t src_dof_0 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const real_t src_dof_1 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
          const real_t src_dof_2 = _data_src[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
          const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_14*tmp_kernel_op_17 + tmp_kernel_op_15*tmp_kernel_op_4 + tmp_kernel_op_16*tmp_kernel_op_9) + src_dof_1*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.16666666666666666 + tmp_kernel_op_9*0.66666666666666663) + src_dof_2*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.66666666666666663 + tmp_kernel_op_9*0.16666666666666666);
          const real_t elMatVec_1 = src_dof_0*(-tmp_kernel_op_18*tmp_kernel_op_24 - tmp_kernel_op_20*tmp_kernel_op_25 - tmp_kernel_op_22*tmp_kernel_op_26) + src_dof_1*(tmp_kernel_op_19*-0.16666666666666666 + tmp_kernel_op_21*-0.66666666666666663 + tmp_kernel_op_23*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_19*-0.66666666666666663 + tmp_kernel_op_21*-0.16666666666666666 + tmp_kernel_op_23*-0.16666666666666666);
          const real_t elMatVec_2 = src_dof_0*(-tmp_kernel_op_24*tmp_kernel_op_27 - tmp_kernel_op_25*tmp_kernel_op_29 - tmp_kernel_op_26*tmp_kernel_op_31) + src_dof_1*(tmp_kernel_op_28*-0.16666666666666666 + tmp_kernel_op_30*-0.66666666666666663 + tmp_kernel_op_32*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_28*-0.66666666666666663 + tmp_kernel_op_30*-0.16666666666666666 + tmp_kernel_op_32*-0.16666666666666666);
          const real_t elMatVec_3 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_35 + tmp_kernel_op_16*tmp_kernel_op_38 + tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_1*(tmp_kernel_op_35*0.16666666666666666 + tmp_kernel_op_38*0.66666666666666663 + tmp_kernel_op_41*0.16666666666666666) + src_dof_2*(tmp_kernel_op_35*0.66666666666666663 + tmp_kernel_op_38*0.16666666666666666 + tmp_kernel_op_41*0.16666666666666666);
          const real_t elMatVec_4 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_42 + tmp_kernel_op_16*tmp_kernel_op_43 + tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_1*(tmp_kernel_op_42*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666) + src_dof_2*(tmp_kernel_op_42*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666);
          const real_t elMatVec_5 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_45 + tmp_kernel_op_16*tmp_kernel_op_46 + tmp_kernel_op_17*tmp_kernel_op_47) + src_dof_1*(tmp_kernel_op_45*0.16666666666666666 + tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666) + src_dof_2*(tmp_kernel_op_45*0.66666666666666663 + tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666);
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
