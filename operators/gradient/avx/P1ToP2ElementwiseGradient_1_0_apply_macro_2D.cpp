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

void P1ToP2ElementwiseGradient_1_0::apply_macro_2D( walberla::float64 * RESTRICT  _data_dstEdge, walberla::float64 * RESTRICT  _data_dstVertex, walberla::float64 * RESTRICT  _data_src, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
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
       const walberla::float64 jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
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
       const walberla::float64 jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const walberla::float64 tmp_kernel_op_0 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_1 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_2 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const walberla::float64 tmp_kernel_op_3 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_4 = tmp_kernel_op_3*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_2);
       const walberla::float64 tmp_kernel_op_5 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_6 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_7 = tmp_kernel_op_5 + tmp_kernel_op_6 - 3.0;
       const walberla::float64 tmp_kernel_op_8 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_9 = tmp_kernel_op_8*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_7 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_7);
       const walberla::float64 tmp_kernel_op_10 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_11 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_12 = tmp_kernel_op_10 + tmp_kernel_op_11 - 3.0;
       const walberla::float64 tmp_kernel_op_13 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_14 = tmp_kernel_op_13*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_12 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_12);
       const walberla::float64 tmp_kernel_op_15 = 0.16666666666666674;
       const walberla::float64 tmp_kernel_op_16 = 0.16666666666666671;
       const walberla::float64 tmp_kernel_op_17 = 0.66666666666666674;
       const walberla::float64 tmp_kernel_op_18 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_0 - 1.0);
       const walberla::float64 tmp_kernel_op_19 = tmp_kernel_op_18*tmp_kernel_op_3;
       const walberla::float64 tmp_kernel_op_20 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_5 - 1.0);
       const walberla::float64 tmp_kernel_op_21 = tmp_kernel_op_20*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_22 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_10 - 1.0);
       const walberla::float64 tmp_kernel_op_23 = tmp_kernel_op_13*tmp_kernel_op_22;
       const walberla::float64 tmp_kernel_op_24 = tmp_kernel_op_15*tmp_kernel_op_3;
       const walberla::float64 tmp_kernel_op_25 = tmp_kernel_op_16*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_26 = tmp_kernel_op_13*tmp_kernel_op_17;
       const walberla::float64 tmp_kernel_op_27 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 tmp_kernel_op_28 = tmp_kernel_op_27*tmp_kernel_op_3;
       const walberla::float64 tmp_kernel_op_29 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 tmp_kernel_op_30 = tmp_kernel_op_29*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_31 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_11 - 1.0);
       const walberla::float64 tmp_kernel_op_32 = tmp_kernel_op_13*tmp_kernel_op_31;
       const walberla::float64 tmp_kernel_op_33 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const walberla::float64 tmp_kernel_op_34 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const walberla::float64 tmp_kernel_op_35 = tmp_kernel_op_3*(-tmp_kernel_op_33 - tmp_kernel_op_34);
       const walberla::float64 tmp_kernel_op_36 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_6;
       const walberla::float64 tmp_kernel_op_37 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_5;
       const walberla::float64 tmp_kernel_op_38 = tmp_kernel_op_8*(-tmp_kernel_op_36 - tmp_kernel_op_37);
       const walberla::float64 tmp_kernel_op_39 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_11;
       const walberla::float64 tmp_kernel_op_40 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_10;
       const walberla::float64 tmp_kernel_op_41 = tmp_kernel_op_13*(-tmp_kernel_op_39 - tmp_kernel_op_40);
       const walberla::float64 tmp_kernel_op_42 = tmp_kernel_op_3*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_0 - 1.333333333333333) + tmp_kernel_op_33);
       const walberla::float64 tmp_kernel_op_43 = tmp_kernel_op_8*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_5 + 2.666666666666667) + tmp_kernel_op_36);
       const walberla::float64 tmp_kernel_op_44 = tmp_kernel_op_13*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_10 + 2.666666666666667) + tmp_kernel_op_39);
       const walberla::float64 tmp_kernel_op_45 = tmp_kernel_op_3*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_1 + 2.666666666666667) + tmp_kernel_op_34);
       const walberla::float64 tmp_kernel_op_46 = tmp_kernel_op_8*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_6 - 1.333333333333333) + tmp_kernel_op_37);
       const walberla::float64 tmp_kernel_op_47 = tmp_kernel_op_13*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_11 + 2.666666666666667) + tmp_kernel_op_40);
       const walberla::float64 Dummy_9944 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_9945 = Dummy_9944*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_2);
       const walberla::float64 Dummy_9946 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_9947 = Dummy_9946*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_7 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_7);
       const walberla::float64 Dummy_9948 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_9949 = Dummy_9948*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_12 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_12);
       const walberla::float64 Dummy_9950 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_0 - 1.0);
       const walberla::float64 Dummy_9951 = Dummy_9944*Dummy_9950;
       const walberla::float64 Dummy_9952 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_5 - 1.0);
       const walberla::float64 Dummy_9953 = Dummy_9946*Dummy_9952;
       const walberla::float64 Dummy_9954 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_10 - 1.0);
       const walberla::float64 Dummy_9955 = Dummy_9948*Dummy_9954;
       const walberla::float64 Dummy_9956 = Dummy_9944*tmp_kernel_op_15;
       const walberla::float64 Dummy_9957 = Dummy_9946*tmp_kernel_op_16;
       const walberla::float64 Dummy_9958 = Dummy_9948*tmp_kernel_op_17;
       const walberla::float64 Dummy_9959 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 Dummy_9960 = Dummy_9944*Dummy_9959;
       const walberla::float64 Dummy_9961 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 Dummy_9962 = Dummy_9946*Dummy_9961;
       const walberla::float64 Dummy_9963 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_11 - 1.0);
       const walberla::float64 Dummy_9964 = Dummy_9948*Dummy_9963;
       const walberla::float64 Dummy_9965 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_9966 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_9967 = Dummy_9944*(-Dummy_9965 - Dummy_9966);
       const walberla::float64 Dummy_9968 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_6;
       const walberla::float64 Dummy_9969 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_5;
       const walberla::float64 Dummy_9970 = Dummy_9946*(-Dummy_9968 - Dummy_9969);
       const walberla::float64 Dummy_9971 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_11;
       const walberla::float64 Dummy_9972 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_10;
       const walberla::float64 Dummy_9973 = Dummy_9948*(-Dummy_9971 - Dummy_9972);
       const walberla::float64 Dummy_9974 = Dummy_9944*(Dummy_9965 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_0 - 1.333333333333333));
       const walberla::float64 Dummy_9975 = Dummy_9946*(Dummy_9968 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_5 + 2.666666666666667));
       const walberla::float64 Dummy_9976 = Dummy_9948*(Dummy_9971 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_10 + 2.666666666666667));
       const walberla::float64 Dummy_9977 = Dummy_9944*(Dummy_9966 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_1 + 2.666666666666667));
       const walberla::float64 Dummy_9978 = Dummy_9946*(Dummy_9969 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_6 - 1.333333333333333));
       const walberla::float64 Dummy_9979 = Dummy_9948*(Dummy_9972 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_11 + 2.666666666666667));
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
                const __m256d Dummy_9941 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d Dummy_9942 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_9943 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d Dummy_9980 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_9942,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9945,Dummy_9945,Dummy_9945,Dummy_9945)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9949,Dummy_9949,Dummy_9949,Dummy_9949))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_9947,Dummy_9947,Dummy_9947,Dummy_9947)))),_mm256_mul_pd(Dummy_9943,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9947,Dummy_9947,Dummy_9947,Dummy_9947)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9949,Dummy_9949,Dummy_9949,Dummy_9949))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_9945,Dummy_9945,Dummy_9945,Dummy_9945))))),_mm256_mul_pd(Dummy_9941,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_9945,Dummy_9945,Dummy_9945,Dummy_9945),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_9947,Dummy_9947,Dummy_9947,Dummy_9947),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_9949,Dummy_9949,Dummy_9949,Dummy_9949),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                const __m256d Dummy_9981 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_9942,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_9951,Dummy_9951,Dummy_9951,Dummy_9951)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_9955,Dummy_9955,Dummy_9955,Dummy_9955))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_9953,Dummy_9953,Dummy_9953,Dummy_9953)))),_mm256_mul_pd(Dummy_9943,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_9953,Dummy_9953,Dummy_9953,Dummy_9953)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_9955,Dummy_9955,Dummy_9955,Dummy_9955))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_9951,Dummy_9951,Dummy_9951,Dummy_9951))))),_mm256_mul_pd(Dummy_9941,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_9950,Dummy_9950,Dummy_9950,Dummy_9950)),_mm256_set_pd(Dummy_9956,Dummy_9956,Dummy_9956,Dummy_9956)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_9952,Dummy_9952,Dummy_9952,Dummy_9952)),_mm256_set_pd(Dummy_9957,Dummy_9957,Dummy_9957,Dummy_9957))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_9954,Dummy_9954,Dummy_9954,Dummy_9954)),_mm256_set_pd(Dummy_9958,Dummy_9958,Dummy_9958,Dummy_9958)))));
                const __m256d Dummy_9982 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_9942,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_9960,Dummy_9960,Dummy_9960,Dummy_9960)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_9964,Dummy_9964,Dummy_9964,Dummy_9964))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_9962,Dummy_9962,Dummy_9962,Dummy_9962)))),_mm256_mul_pd(Dummy_9943,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_9962,Dummy_9962,Dummy_9962,Dummy_9962)),_mm256_mul_pd(_mm256_set_pd(-0.16666666666666666,-0.16666666666666666,-0.16666666666666666,-0.16666666666666666),_mm256_set_pd(Dummy_9964,Dummy_9964,Dummy_9964,Dummy_9964))),_mm256_mul_pd(_mm256_set_pd(-0.66666666666666663,-0.66666666666666663,-0.66666666666666663,-0.66666666666666663),_mm256_set_pd(Dummy_9960,Dummy_9960,Dummy_9960,Dummy_9960))))),_mm256_mul_pd(Dummy_9941,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_9956,Dummy_9956,Dummy_9956,Dummy_9956)),_mm256_set_pd(Dummy_9959,Dummy_9959,Dummy_9959,Dummy_9959)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_9957,Dummy_9957,Dummy_9957,Dummy_9957)),_mm256_set_pd(Dummy_9961,Dummy_9961,Dummy_9961,Dummy_9961))),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_9958,Dummy_9958,Dummy_9958,Dummy_9958)),_mm256_set_pd(Dummy_9963,Dummy_9963,Dummy_9963,Dummy_9963)))));
                const __m256d Dummy_9983 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_9942,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9967,Dummy_9967,Dummy_9967,Dummy_9967)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9973,Dummy_9973,Dummy_9973,Dummy_9973))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_9970,Dummy_9970,Dummy_9970,Dummy_9970)))),_mm256_mul_pd(Dummy_9943,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9970,Dummy_9970,Dummy_9970,Dummy_9970)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9973,Dummy_9973,Dummy_9973,Dummy_9973))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_9967,Dummy_9967,Dummy_9967,Dummy_9967))))),_mm256_mul_pd(Dummy_9941,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_9967,Dummy_9967,Dummy_9967,Dummy_9967),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_9970,Dummy_9970,Dummy_9970,Dummy_9970),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_9973,Dummy_9973,Dummy_9973,Dummy_9973),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                const __m256d Dummy_9984 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_9942,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9974,Dummy_9974,Dummy_9974,Dummy_9974)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9976,Dummy_9976,Dummy_9976,Dummy_9976))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_9975,Dummy_9975,Dummy_9975,Dummy_9975)))),_mm256_mul_pd(Dummy_9943,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9975,Dummy_9975,Dummy_9975,Dummy_9975)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9976,Dummy_9976,Dummy_9976,Dummy_9976))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_9974,Dummy_9974,Dummy_9974,Dummy_9974))))),_mm256_mul_pd(Dummy_9941,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_9974,Dummy_9974,Dummy_9974,Dummy_9974),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_9975,Dummy_9975,Dummy_9975,Dummy_9975),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_9976,Dummy_9976,Dummy_9976,Dummy_9976),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                const __m256d Dummy_9985 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_9942,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9977,Dummy_9977,Dummy_9977,Dummy_9977)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9979,Dummy_9979,Dummy_9979,Dummy_9979))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_9978,Dummy_9978,Dummy_9978,Dummy_9978)))),_mm256_mul_pd(Dummy_9943,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9978,Dummy_9978,Dummy_9978,Dummy_9978)),_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(Dummy_9979,Dummy_9979,Dummy_9979,Dummy_9979))),_mm256_mul_pd(_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663),_mm256_set_pd(Dummy_9977,Dummy_9977,Dummy_9977,Dummy_9977))))),_mm256_mul_pd(Dummy_9941,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_9977,Dummy_9977,Dummy_9977,Dummy_9977),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(Dummy_9978,Dummy_9978,Dummy_9978,Dummy_9978),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_mul_pd(_mm256_set_pd(Dummy_9979,Dummy_9979,Dummy_9979,Dummy_9979),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))));
                {
                   {
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(Dummy_9980,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_9981,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(Dummy_9982,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_9983,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(Dummy_9984,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(Dummy_9985,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
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
                const walberla::float64 Dummy_9941 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const walberla::float64 Dummy_9942 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const walberla::float64 Dummy_9943 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const walberla::float64 Dummy_9980 = Dummy_9941*(Dummy_9945*tmp_kernel_op_15 + Dummy_9947*tmp_kernel_op_16 + Dummy_9949*tmp_kernel_op_17) + Dummy_9942*(Dummy_9945*0.16666666666666666 + Dummy_9947*0.66666666666666663 + Dummy_9949*0.16666666666666666) + Dummy_9943*(Dummy_9945*0.66666666666666663 + Dummy_9947*0.16666666666666666 + Dummy_9949*0.16666666666666666);
                const walberla::float64 Dummy_9981 = Dummy_9941*(-Dummy_9950*Dummy_9956 - Dummy_9952*Dummy_9957 - Dummy_9954*Dummy_9958) + Dummy_9942*(Dummy_9951*-0.16666666666666666 + Dummy_9953*-0.66666666666666663 + Dummy_9955*-0.16666666666666666) + Dummy_9943*(Dummy_9951*-0.66666666666666663 + Dummy_9953*-0.16666666666666666 + Dummy_9955*-0.16666666666666666);
                const walberla::float64 Dummy_9982 = Dummy_9941*(-Dummy_9956*Dummy_9959 - Dummy_9957*Dummy_9961 - Dummy_9958*Dummy_9963) + Dummy_9942*(Dummy_9960*-0.16666666666666666 + Dummy_9962*-0.66666666666666663 + Dummy_9964*-0.16666666666666666) + Dummy_9943*(Dummy_9960*-0.66666666666666663 + Dummy_9962*-0.16666666666666666 + Dummy_9964*-0.16666666666666666);
                const walberla::float64 Dummy_9983 = Dummy_9941*(Dummy_9967*tmp_kernel_op_15 + Dummy_9970*tmp_kernel_op_16 + Dummy_9973*tmp_kernel_op_17) + Dummy_9942*(Dummy_9967*0.16666666666666666 + Dummy_9970*0.66666666666666663 + Dummy_9973*0.16666666666666666) + Dummy_9943*(Dummy_9967*0.66666666666666663 + Dummy_9970*0.16666666666666666 + Dummy_9973*0.16666666666666666);
                const walberla::float64 Dummy_9984 = Dummy_9941*(Dummy_9974*tmp_kernel_op_15 + Dummy_9975*tmp_kernel_op_16 + Dummy_9976*tmp_kernel_op_17) + Dummy_9942*(Dummy_9974*0.16666666666666666 + Dummy_9975*0.66666666666666663 + Dummy_9976*0.16666666666666666) + Dummy_9943*(Dummy_9974*0.66666666666666663 + Dummy_9975*0.16666666666666666 + Dummy_9976*0.16666666666666666);
                const walberla::float64 Dummy_9985 = Dummy_9941*(Dummy_9977*tmp_kernel_op_15 + Dummy_9978*tmp_kernel_op_16 + Dummy_9979*tmp_kernel_op_17) + Dummy_9942*(Dummy_9977*0.16666666666666666 + Dummy_9978*0.66666666666666663 + Dummy_9979*0.16666666666666666) + Dummy_9943*(Dummy_9977*0.66666666666666663 + Dummy_9978*0.16666666666666666 + Dummy_9979*0.16666666666666666);
                {
                   {
                      _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_9980 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_9981 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_9982 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                      _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_9983 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = Dummy_9984 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                      _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = Dummy_9985 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
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
