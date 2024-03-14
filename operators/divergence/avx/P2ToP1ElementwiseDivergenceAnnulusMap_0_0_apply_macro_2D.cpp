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



























#include "../P2ToP1ElementwiseDivergenceAnnulusMap_0_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ToP1ElementwiseDivergenceAnnulusMap_0_0::apply_macro_2D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t tmp_kernel_op_12 = rayVertex_0 - refVertex_0;
       const real_t tmp_kernel_op_13 = rayVertex_0 - thrVertex_0;
       const real_t tmp_kernel_op_14 = rayVertex_1 - refVertex_1;
       const real_t tmp_kernel_op_15 = radRayVertex - radRefVertex;
       const real_t tmp_kernel_op_16 = tmp_kernel_op_15*1.0 / (tmp_kernel_op_0*tmp_kernel_op_12 - tmp_kernel_op_13*tmp_kernel_op_14);
       const real_t tmp_kernel_op_17 = tmp_kernel_op_16*1.0;
       const real_t tmp_kernel_op_28 = -tmp_kernel_op_13;
       const real_t tmp_kernel_op_38 = -tmp_kernel_op_0;
       const real_t tmp_kernel_op_39 = -tmp_kernel_op_15*1.0 / (-tmp_kernel_op_12*tmp_kernel_op_38 + tmp_kernel_op_14*tmp_kernel_op_28);
       const real_t tmp_kernel_op_40 = tmp_kernel_op_39*1.0;
       const real_t tmp_kernel_op_44 = -rayVertex_1;
       const real_t tmp_kernel_op_45 = -rayVertex_0;
       const real_t tmp_kernel_op_55 = 0.66666666666666663;
       const real_t tmp_kernel_op_89 = 2.6666666666666665;
       const real_t tmp_kernel_op_123 = 0.66666666666666663;
       const real_t tmp_kernel_op_126 = 2.6666666666666665;
       const real_t tmp_kernel_op_129 = 0.66666666666666663;
       const real_t tmp_kernel_op_132 = 0.66666666666666663;
       const real_t tmp_kernel_op_149 = tmp_kernel_op_126 + tmp_kernel_op_55 - 3.0;
       const real_t tmp_kernel_op_151 = tmp_kernel_op_129 + tmp_kernel_op_89 - 3.0;
       const real_t tmp_kernel_op_153 = tmp_kernel_op_123 + tmp_kernel_op_132 - 3.0;
       {
          /* FaceType.GRAY */
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 += 4)
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
            
                const __m256d p_affine_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                const __m256d p_affine_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                const __m256d p_affine_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                const __m256d p_affine_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                const __m256d p_affine_2_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                const __m256d p_affine_2_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_4 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_5 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d tmp_kernel_op_1 = _mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_2 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_kernel_op_3 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_kernel_op_4 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_2,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_3,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),tmp_kernel_op_1);
                const __m256d tmp_kernel_op_5 = _mm256_mul_pd(tmp_kernel_op_4,tmp_kernel_op_4);
                const __m256d tmp_kernel_op_6 = _mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                const __m256d tmp_kernel_op_8 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                const __m256d tmp_kernel_op_9 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_7,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_8,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),tmp_kernel_op_6);
                const __m256d tmp_kernel_op_10 = _mm256_mul_pd(tmp_kernel_op_9,tmp_kernel_op_9);
                const __m256d tmp_kernel_op_11 = _mm256_add_pd(tmp_kernel_op_10,tmp_kernel_op_5);
                const __m256d tmp_kernel_op_18 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_11)),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17));
                const __m256d tmp_kernel_op_19 = _mm256_mul_pd(tmp_kernel_op_18,tmp_kernel_op_4);
                const __m256d tmp_kernel_op_20 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_kernel_op_9),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_kernel_op_4),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)));
                const __m256d tmp_kernel_op_21 = _mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_11),_mm256_mul_pd(tmp_kernel_op_11,tmp_kernel_op_11)),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_22 = _mm256_mul_pd(tmp_kernel_op_21,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_20,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_23 = _mm256_mul_pd(tmp_kernel_op_18,tmp_kernel_op_9);
                const __m256d tmp_kernel_op_24 = _mm256_mul_pd(tmp_kernel_op_21,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_20,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_25 = _mm256_mul_pd(tmp_kernel_op_4,tmp_kernel_op_9);
                const __m256d tmp_kernel_op_26 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY)),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_23,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(tmp_kernel_op_24,tmp_kernel_op_5)),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_19,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_10,tmp_kernel_op_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_19,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_24,tmp_kernel_op_25),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_23,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(tmp_kernel_op_22,tmp_kernel_op_25))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))))));
                const __m256d tmp_kernel_op_27 = _mm256_mul_pd(tmp_kernel_op_26,_mm256_set_pd(0.16666666666666674,0.16666666666666674,0.16666666666666674,0.16666666666666674));
                const __m256d tmp_kernel_op_29 = _mm256_mul_pd(tmp_kernel_op_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_30 = _mm256_mul_pd(tmp_kernel_op_8,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_31 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_29,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_30,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),p_affine_0_1);
                const __m256d tmp_kernel_op_32 = _mm256_mul_pd(tmp_kernel_op_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_33 = _mm256_mul_pd(tmp_kernel_op_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_34 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_32,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_33,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),p_affine_0_0);
                const __m256d tmp_kernel_op_35 = _mm256_mul_pd(tmp_kernel_op_34,tmp_kernel_op_34);
                const __m256d tmp_kernel_op_36 = _mm256_mul_pd(tmp_kernel_op_31,tmp_kernel_op_31);
                const __m256d tmp_kernel_op_37 = _mm256_add_pd(tmp_kernel_op_35,tmp_kernel_op_36);
                const __m256d tmp_kernel_op_41 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_37)),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40));
                const __m256d tmp_kernel_op_42 = _mm256_mul_pd(tmp_kernel_op_31,tmp_kernel_op_41);
                const __m256d tmp_kernel_op_43 = _mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_37),_mm256_mul_pd(tmp_kernel_op_37,tmp_kernel_op_37));
                const __m256d tmp_kernel_op_46 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45),tmp_kernel_op_34),_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44),tmp_kernel_op_31),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28))),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                const __m256d tmp_kernel_op_47 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_35,tmp_kernel_op_43),tmp_kernel_op_46),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                const __m256d tmp_kernel_op_48 = _mm256_mul_pd(tmp_kernel_op_34,tmp_kernel_op_41);
                const __m256d tmp_kernel_op_49 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_43,tmp_kernel_op_46),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_50 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_42,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_31,tmp_kernel_op_34),tmp_kernel_op_49),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_51 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_47,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_48,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(tmp_kernel_op_36,tmp_kernel_op_49))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_50,_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_48,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_31,tmp_kernel_op_34),tmp_kernel_op_43),tmp_kernel_op_46),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                const __m256d tmp_kernel_op_52 = _mm256_mul_pd(tmp_kernel_op_47,tmp_kernel_op_51);
                const __m256d tmp_kernel_op_53 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_50,tmp_kernel_op_51),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_54 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_52,_mm256_set_pd(jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY)),_mm256_mul_pd(tmp_kernel_op_53,_mm256_set_pd(jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY)));
                const __m256d tmp_kernel_op_56 = _mm256_mul_pd(tmp_kernel_op_54,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55)));
                const __m256d tmp_kernel_op_57 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_3,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_2,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),tmp_kernel_op_1);
                const __m256d tmp_kernel_op_58 = _mm256_mul_pd(tmp_kernel_op_57,tmp_kernel_op_57);
                const __m256d tmp_kernel_op_59 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_8,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_7,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),tmp_kernel_op_6);
                const __m256d tmp_kernel_op_60 = _mm256_mul_pd(tmp_kernel_op_59,tmp_kernel_op_59);
                const __m256d tmp_kernel_op_61 = _mm256_add_pd(tmp_kernel_op_58,tmp_kernel_op_60);
                const __m256d tmp_kernel_op_62 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_61)),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17));
                const __m256d tmp_kernel_op_63 = _mm256_mul_pd(tmp_kernel_op_57,tmp_kernel_op_62);
                const __m256d tmp_kernel_op_64 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_kernel_op_59),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_kernel_op_57),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)));
                const __m256d tmp_kernel_op_65 = _mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_61),_mm256_mul_pd(tmp_kernel_op_61,tmp_kernel_op_61)),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_66 = _mm256_mul_pd(tmp_kernel_op_65,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_64,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_67 = _mm256_mul_pd(tmp_kernel_op_59,tmp_kernel_op_62);
                const __m256d tmp_kernel_op_68 = _mm256_mul_pd(tmp_kernel_op_65,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_64,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_69 = _mm256_mul_pd(tmp_kernel_op_57,tmp_kernel_op_59);
                const __m256d tmp_kernel_op_70 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY)),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_67,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(tmp_kernel_op_58,tmp_kernel_op_68)),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_63,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_60,tmp_kernel_op_66),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_63,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_68,tmp_kernel_op_69),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_67,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(tmp_kernel_op_66,tmp_kernel_op_69))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))))));
                const __m256d tmp_kernel_op_71 = _mm256_mul_pd(tmp_kernel_op_70,_mm256_set_pd(0.16666666666666671,0.16666666666666671,0.16666666666666671,0.16666666666666671));
                const __m256d tmp_kernel_op_72 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_30,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_29,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),p_affine_0_1);
                const __m256d tmp_kernel_op_73 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_33,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_32,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),p_affine_0_0);
                const __m256d tmp_kernel_op_74 = _mm256_mul_pd(tmp_kernel_op_73,tmp_kernel_op_73);
                const __m256d tmp_kernel_op_75 = _mm256_mul_pd(tmp_kernel_op_72,tmp_kernel_op_72);
                const __m256d tmp_kernel_op_76 = _mm256_add_pd(tmp_kernel_op_74,tmp_kernel_op_75);
                const __m256d tmp_kernel_op_77 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_76)),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40));
                const __m256d tmp_kernel_op_78 = _mm256_mul_pd(tmp_kernel_op_72,tmp_kernel_op_77);
                const __m256d tmp_kernel_op_79 = _mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_76),_mm256_mul_pd(tmp_kernel_op_76,tmp_kernel_op_76));
                const __m256d tmp_kernel_op_80 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45),tmp_kernel_op_73),_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44),tmp_kernel_op_72),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28))),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                const __m256d tmp_kernel_op_81 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_78,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_74,tmp_kernel_op_79),tmp_kernel_op_80),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                const __m256d tmp_kernel_op_82 = _mm256_mul_pd(tmp_kernel_op_73,tmp_kernel_op_77);
                const __m256d tmp_kernel_op_83 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_79,tmp_kernel_op_80),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_84 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_78,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_72,tmp_kernel_op_73),tmp_kernel_op_83),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_85 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_81,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_82,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(tmp_kernel_op_75,tmp_kernel_op_83))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_84,_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_82,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_72,tmp_kernel_op_73),tmp_kernel_op_79),tmp_kernel_op_80),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                const __m256d tmp_kernel_op_86 = _mm256_mul_pd(tmp_kernel_op_81,tmp_kernel_op_85);
                const __m256d tmp_kernel_op_87 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_84,tmp_kernel_op_85),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_88 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_86,_mm256_set_pd(jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY)),_mm256_mul_pd(tmp_kernel_op_87,_mm256_set_pd(jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY)));
                const __m256d tmp_kernel_op_90 = _mm256_mul_pd(tmp_kernel_op_88,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89)));
                const __m256d tmp_kernel_op_91 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_2,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_3,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666))),tmp_kernel_op_1);
                const __m256d tmp_kernel_op_92 = _mm256_mul_pd(tmp_kernel_op_91,tmp_kernel_op_91);
                const __m256d tmp_kernel_op_93 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_7,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_8,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666))),tmp_kernel_op_6);
                const __m256d tmp_kernel_op_94 = _mm256_mul_pd(tmp_kernel_op_93,tmp_kernel_op_93);
                const __m256d tmp_kernel_op_95 = _mm256_add_pd(tmp_kernel_op_92,tmp_kernel_op_94);
                const __m256d tmp_kernel_op_96 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_95)),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17));
                const __m256d tmp_kernel_op_97 = _mm256_mul_pd(tmp_kernel_op_91,tmp_kernel_op_96);
                const __m256d tmp_kernel_op_98 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_kernel_op_93),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_kernel_op_91),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)));
                const __m256d tmp_kernel_op_99 = _mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_95),_mm256_mul_pd(tmp_kernel_op_95,tmp_kernel_op_95)),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_100 = _mm256_mul_pd(tmp_kernel_op_99,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_98,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_101 = _mm256_mul_pd(tmp_kernel_op_93,tmp_kernel_op_96);
                const __m256d tmp_kernel_op_102 = _mm256_mul_pd(tmp_kernel_op_99,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_98,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_103 = _mm256_mul_pd(tmp_kernel_op_91,tmp_kernel_op_93);
                const __m256d tmp_kernel_op_104 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY)),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_101,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(tmp_kernel_op_100,tmp_kernel_op_103)),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_102,tmp_kernel_op_103),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_97,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_101,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(tmp_kernel_op_102,tmp_kernel_op_92)),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_97,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_100,tmp_kernel_op_94),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))))))));
                const __m256d tmp_kernel_op_105 = _mm256_mul_pd(tmp_kernel_op_104,_mm256_set_pd(0.66666666666666674,0.66666666666666674,0.66666666666666674,0.66666666666666674));
                const __m256d tmp_kernel_op_106 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_29,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_30,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666))),p_affine_0_1);
                const __m256d tmp_kernel_op_107 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_32,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_33,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666))),p_affine_0_0);
                const __m256d tmp_kernel_op_108 = _mm256_mul_pd(tmp_kernel_op_107,tmp_kernel_op_107);
                const __m256d tmp_kernel_op_109 = _mm256_mul_pd(tmp_kernel_op_106,tmp_kernel_op_106);
                const __m256d tmp_kernel_op_110 = _mm256_add_pd(tmp_kernel_op_108,tmp_kernel_op_109);
                const __m256d tmp_kernel_op_111 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_110)),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40));
                const __m256d tmp_kernel_op_112 = _mm256_mul_pd(tmp_kernel_op_106,tmp_kernel_op_111);
                const __m256d tmp_kernel_op_113 = _mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_110),_mm256_mul_pd(tmp_kernel_op_110,tmp_kernel_op_110));
                const __m256d tmp_kernel_op_114 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45),tmp_kernel_op_107),_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44),tmp_kernel_op_106),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28))),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                const __m256d tmp_kernel_op_115 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_112,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_108,tmp_kernel_op_113),tmp_kernel_op_114),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                const __m256d tmp_kernel_op_116 = _mm256_mul_pd(tmp_kernel_op_107,tmp_kernel_op_111);
                const __m256d tmp_kernel_op_117 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_113,tmp_kernel_op_114),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_118 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_112,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_106,tmp_kernel_op_107),tmp_kernel_op_117),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_119 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_115,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_116,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(tmp_kernel_op_109,tmp_kernel_op_117))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_118,_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_116,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_106,tmp_kernel_op_107),tmp_kernel_op_113),tmp_kernel_op_114),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                const __m256d tmp_kernel_op_120 = _mm256_mul_pd(tmp_kernel_op_115,tmp_kernel_op_119);
                const __m256d tmp_kernel_op_121 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_118,tmp_kernel_op_119),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_122 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_120,_mm256_set_pd(jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY)),_mm256_mul_pd(tmp_kernel_op_121,_mm256_set_pd(jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY)));
                const __m256d tmp_kernel_op_124 = _mm256_mul_pd(tmp_kernel_op_122,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123)));
                const __m256d tmp_kernel_op_125 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_52,_mm256_set_pd(jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY)),_mm256_mul_pd(tmp_kernel_op_53,_mm256_set_pd(jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY)));
                const __m256d tmp_kernel_op_127 = _mm256_mul_pd(tmp_kernel_op_125,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126)));
                const __m256d tmp_kernel_op_128 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_86,_mm256_set_pd(jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY)),_mm256_mul_pd(tmp_kernel_op_87,_mm256_set_pd(jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY)));
                const __m256d tmp_kernel_op_130 = _mm256_mul_pd(tmp_kernel_op_128,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129)));
                const __m256d tmp_kernel_op_131 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_120,_mm256_set_pd(jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY)),_mm256_mul_pd(tmp_kernel_op_121,_mm256_set_pd(jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY)));
                const __m256d tmp_kernel_op_133 = _mm256_mul_pd(tmp_kernel_op_131,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132)));
                const __m256d tmp_kernel_op_134 = _mm256_mul_pd(tmp_kernel_op_125,_mm256_set_pd(tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55));
                const __m256d tmp_kernel_op_135 = _mm256_mul_pd(tmp_kernel_op_54,_mm256_set_pd(tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126));
                const __m256d tmp_kernel_op_136 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_134,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_kernel_op_135,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_137 = _mm256_mul_pd(tmp_kernel_op_128,_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89));
                const __m256d tmp_kernel_op_138 = _mm256_mul_pd(tmp_kernel_op_88,_mm256_set_pd(tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129));
                const __m256d tmp_kernel_op_139 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_137,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_kernel_op_138,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_140 = _mm256_mul_pd(tmp_kernel_op_131,_mm256_set_pd(tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123));
                const __m256d tmp_kernel_op_141 = _mm256_mul_pd(tmp_kernel_op_122,_mm256_set_pd(tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132));
                const __m256d tmp_kernel_op_142 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_140,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_kernel_op_141,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_143 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_125,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55)),_mm256_set_pd(-1.333333333333333,-1.333333333333333,-1.333333333333333,-1.333333333333333))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_135);
                const __m256d tmp_kernel_op_144 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_128,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89)),_mm256_set_pd(2.666666666666667,2.666666666666667,2.666666666666667,2.666666666666667))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_138);
                const __m256d tmp_kernel_op_145 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_131,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123)),_mm256_set_pd(2.666666666666667,2.666666666666667,2.666666666666667,2.666666666666667))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_141);
                const __m256d tmp_kernel_op_146 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_54,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126)),_mm256_set_pd(2.666666666666667,2.666666666666667,2.666666666666667,2.666666666666667))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_134);
                const __m256d tmp_kernel_op_147 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_88,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129)),_mm256_set_pd(-1.333333333333333,-1.333333333333333,-1.333333333333333,-1.333333333333333))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_137);
                const __m256d tmp_kernel_op_148 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_122,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132)),_mm256_set_pd(2.666666666666667,2.666666666666667,2.666666666666667,2.666666666666667))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_140);
                const __m256d tmp_kernel_op_150 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_125,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_149,tmp_kernel_op_149,tmp_kernel_op_149,tmp_kernel_op_149)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_54,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_149,tmp_kernel_op_149,tmp_kernel_op_149,tmp_kernel_op_149)));
                const __m256d tmp_kernel_op_152 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_128,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_151,tmp_kernel_op_151,tmp_kernel_op_151,tmp_kernel_op_151)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_88,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_151,tmp_kernel_op_151,tmp_kernel_op_151,tmp_kernel_op_151)));
                const __m256d tmp_kernel_op_154 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_122,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_153,tmp_kernel_op_153,tmp_kernel_op_153,tmp_kernel_op_153)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_131,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_153,tmp_kernel_op_153,tmp_kernel_op_153,tmp_kernel_op_153)));
                const __m256d tmp_kernel_op_155 = _mm256_mul_pd(tmp_kernel_op_26,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666));
                const __m256d tmp_kernel_op_156 = _mm256_mul_pd(tmp_kernel_op_70,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663));
                const __m256d tmp_kernel_op_157 = _mm256_mul_pd(tmp_kernel_op_104,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666));
                const __m256d tmp_kernel_op_158 = _mm256_mul_pd(tmp_kernel_op_26,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663));
                const __m256d tmp_kernel_op_159 = _mm256_mul_pd(tmp_kernel_op_70,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666));
                const __m256d tmp_kernel_op_160 = _mm256_mul_pd(tmp_kernel_op_104,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666));
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_142),_mm256_mul_pd(tmp_kernel_op_136,tmp_kernel_op_27)),_mm256_mul_pd(tmp_kernel_op_139,tmp_kernel_op_71))),_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_145),_mm256_mul_pd(tmp_kernel_op_143,tmp_kernel_op_27)),_mm256_mul_pd(tmp_kernel_op_144,tmp_kernel_op_71)))),_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_148),_mm256_mul_pd(tmp_kernel_op_146,tmp_kernel_op_27)),_mm256_mul_pd(tmp_kernel_op_147,tmp_kernel_op_71)))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_154),_mm256_mul_pd(tmp_kernel_op_150,tmp_kernel_op_27)),_mm256_mul_pd(tmp_kernel_op_152,tmp_kernel_op_71)))),_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_124),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_27,tmp_kernel_op_56),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_71,tmp_kernel_op_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_133),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_127,tmp_kernel_op_27),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_130,tmp_kernel_op_71),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_136,tmp_kernel_op_155),_mm256_mul_pd(tmp_kernel_op_139,tmp_kernel_op_156)),_mm256_mul_pd(tmp_kernel_op_142,tmp_kernel_op_157))),_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_143,tmp_kernel_op_155),_mm256_mul_pd(tmp_kernel_op_144,tmp_kernel_op_156)),_mm256_mul_pd(tmp_kernel_op_145,tmp_kernel_op_157)))),_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_146,tmp_kernel_op_155),_mm256_mul_pd(tmp_kernel_op_147,tmp_kernel_op_156)),_mm256_mul_pd(tmp_kernel_op_148,tmp_kernel_op_157)))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_150,tmp_kernel_op_155),_mm256_mul_pd(tmp_kernel_op_152,tmp_kernel_op_156)),_mm256_mul_pd(tmp_kernel_op_154,tmp_kernel_op_157)))),_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_124,tmp_kernel_op_157),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_155,tmp_kernel_op_56),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_156,tmp_kernel_op_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_127,tmp_kernel_op_155),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_130,tmp_kernel_op_156),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_133,tmp_kernel_op_157),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_136,tmp_kernel_op_158),_mm256_mul_pd(tmp_kernel_op_139,tmp_kernel_op_159)),_mm256_mul_pd(tmp_kernel_op_142,tmp_kernel_op_160))),_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_143,tmp_kernel_op_158),_mm256_mul_pd(tmp_kernel_op_144,tmp_kernel_op_159)),_mm256_mul_pd(tmp_kernel_op_145,tmp_kernel_op_160)))),_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_146,tmp_kernel_op_158),_mm256_mul_pd(tmp_kernel_op_147,tmp_kernel_op_159)),_mm256_mul_pd(tmp_kernel_op_148,tmp_kernel_op_160)))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_150,tmp_kernel_op_158),_mm256_mul_pd(tmp_kernel_op_152,tmp_kernel_op_159)),_mm256_mul_pd(tmp_kernel_op_154,tmp_kernel_op_160)))),_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_124,tmp_kernel_op_160),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_158,tmp_kernel_op_56),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_159,tmp_kernel_op_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_127,tmp_kernel_op_158),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_130,tmp_kernel_op_159),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_133,tmp_kernel_op_160),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
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
                const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t tmp_kernel_op_1 = -p_affine_0_0;
                const real_t tmp_kernel_op_2 = p_affine_0_0 - p_affine_1_0;
                const real_t tmp_kernel_op_3 = p_affine_0_0 - p_affine_2_0;
                const real_t tmp_kernel_op_4 = tmp_kernel_op_1 + tmp_kernel_op_2*0.16666666666666666 + tmp_kernel_op_3*0.66666666666666663;
                const real_t tmp_kernel_op_5 = (tmp_kernel_op_4*tmp_kernel_op_4);
                const real_t tmp_kernel_op_6 = -p_affine_0_1;
                const real_t tmp_kernel_op_7 = p_affine_0_1 - p_affine_1_1;
                const real_t tmp_kernel_op_8 = p_affine_0_1 - p_affine_2_1;
                const real_t tmp_kernel_op_9 = tmp_kernel_op_6 + tmp_kernel_op_7*0.16666666666666666 + tmp_kernel_op_8*0.66666666666666663;
                const real_t tmp_kernel_op_10 = (tmp_kernel_op_9*tmp_kernel_op_9);
                const real_t tmp_kernel_op_11 = tmp_kernel_op_10 + tmp_kernel_op_5;
                const real_t tmp_kernel_op_18 = pow(tmp_kernel_op_11, -0.50000000000000000)*tmp_kernel_op_17;
                const real_t tmp_kernel_op_19 = tmp_kernel_op_18*tmp_kernel_op_4;
                const real_t tmp_kernel_op_20 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_4) + tmp_kernel_op_13*(rayVertex_1 + tmp_kernel_op_9);
                const real_t tmp_kernel_op_21 = pow(tmp_kernel_op_11, -1.5000000000000000)*1.0;
                const real_t tmp_kernel_op_22 = tmp_kernel_op_21*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_20);
                const real_t tmp_kernel_op_23 = tmp_kernel_op_18*tmp_kernel_op_9;
                const real_t tmp_kernel_op_24 = tmp_kernel_op_21*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_20);
                const real_t tmp_kernel_op_25 = tmp_kernel_op_4*tmp_kernel_op_9;
                const real_t tmp_kernel_op_26 = abs_det_jac_affine_GRAY*0.16666666666666666*abs((tmp_kernel_op_0*tmp_kernel_op_19 - tmp_kernel_op_10*tmp_kernel_op_22)*(tmp_kernel_op_13*tmp_kernel_op_23 + tmp_kernel_op_24*tmp_kernel_op_5) - (tmp_kernel_op_0*tmp_kernel_op_23 + tmp_kernel_op_22*tmp_kernel_op_25)*(tmp_kernel_op_13*tmp_kernel_op_19 - tmp_kernel_op_24*tmp_kernel_op_25));
                const real_t tmp_kernel_op_27 = tmp_kernel_op_26*0.16666666666666674;
                const real_t tmp_kernel_op_29 = -tmp_kernel_op_7;
                const real_t tmp_kernel_op_30 = -tmp_kernel_op_8;
                const real_t tmp_kernel_op_31 = p_affine_0_1 + tmp_kernel_op_29*0.16666666666666666 + tmp_kernel_op_30*0.66666666666666663;
                const real_t tmp_kernel_op_32 = -tmp_kernel_op_2;
                const real_t tmp_kernel_op_33 = -tmp_kernel_op_3;
                const real_t tmp_kernel_op_34 = p_affine_0_0 + tmp_kernel_op_32*0.16666666666666666 + tmp_kernel_op_33*0.66666666666666663;
                const real_t tmp_kernel_op_35 = (tmp_kernel_op_34*tmp_kernel_op_34);
                const real_t tmp_kernel_op_36 = (tmp_kernel_op_31*tmp_kernel_op_31);
                const real_t tmp_kernel_op_37 = tmp_kernel_op_35 + tmp_kernel_op_36;
                const real_t tmp_kernel_op_41 = pow(tmp_kernel_op_37, -0.50000000000000000)*tmp_kernel_op_40;
                const real_t tmp_kernel_op_42 = tmp_kernel_op_31*tmp_kernel_op_41;
                const real_t tmp_kernel_op_43 = pow(tmp_kernel_op_37, -1.5000000000000000);
                const real_t tmp_kernel_op_46 = radRayVertex + tmp_kernel_op_39*(-tmp_kernel_op_28*(tmp_kernel_op_31 + tmp_kernel_op_44) + tmp_kernel_op_38*(tmp_kernel_op_34 + tmp_kernel_op_45));
                const real_t tmp_kernel_op_47 = -tmp_kernel_op_28*tmp_kernel_op_42 + tmp_kernel_op_35*tmp_kernel_op_43*tmp_kernel_op_46*1.0;
                const real_t tmp_kernel_op_48 = tmp_kernel_op_34*tmp_kernel_op_41;
                const real_t tmp_kernel_op_49 = tmp_kernel_op_43*tmp_kernel_op_46*1.0;
                const real_t tmp_kernel_op_50 = -tmp_kernel_op_31*tmp_kernel_op_34*tmp_kernel_op_49 + tmp_kernel_op_38*tmp_kernel_op_42;
                const real_t tmp_kernel_op_51 = 1.0 / (tmp_kernel_op_47*(tmp_kernel_op_36*tmp_kernel_op_49 + tmp_kernel_op_38*tmp_kernel_op_48) - tmp_kernel_op_50*(-tmp_kernel_op_28*tmp_kernel_op_48 - tmp_kernel_op_31*tmp_kernel_op_34*tmp_kernel_op_43*tmp_kernel_op_46));
                const real_t tmp_kernel_op_52 = tmp_kernel_op_47*tmp_kernel_op_51;
                const real_t tmp_kernel_op_53 = -tmp_kernel_op_50*tmp_kernel_op_51;
                const real_t tmp_kernel_op_54 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_52 + jac_affine_inv_0_1_GRAY*tmp_kernel_op_53;
                const real_t tmp_kernel_op_56 = tmp_kernel_op_54*(tmp_kernel_op_55 - 1.0);
                const real_t tmp_kernel_op_57 = tmp_kernel_op_1 + tmp_kernel_op_2*0.66666666666666663 + tmp_kernel_op_3*0.16666666666666666;
                const real_t tmp_kernel_op_58 = (tmp_kernel_op_57*tmp_kernel_op_57);
                const real_t tmp_kernel_op_59 = tmp_kernel_op_6 + tmp_kernel_op_7*0.66666666666666663 + tmp_kernel_op_8*0.16666666666666666;
                const real_t tmp_kernel_op_60 = (tmp_kernel_op_59*tmp_kernel_op_59);
                const real_t tmp_kernel_op_61 = tmp_kernel_op_58 + tmp_kernel_op_60;
                const real_t tmp_kernel_op_62 = tmp_kernel_op_17*pow(tmp_kernel_op_61, -0.50000000000000000);
                const real_t tmp_kernel_op_63 = tmp_kernel_op_57*tmp_kernel_op_62;
                const real_t tmp_kernel_op_64 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_57) + tmp_kernel_op_13*(rayVertex_1 + tmp_kernel_op_59);
                const real_t tmp_kernel_op_65 = pow(tmp_kernel_op_61, -1.5000000000000000)*1.0;
                const real_t tmp_kernel_op_66 = tmp_kernel_op_65*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_64);
                const real_t tmp_kernel_op_67 = tmp_kernel_op_59*tmp_kernel_op_62;
                const real_t tmp_kernel_op_68 = tmp_kernel_op_65*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_64);
                const real_t tmp_kernel_op_69 = tmp_kernel_op_57*tmp_kernel_op_59;
                const real_t tmp_kernel_op_70 = abs_det_jac_affine_GRAY*0.16666666666666666*abs((tmp_kernel_op_0*tmp_kernel_op_63 - tmp_kernel_op_60*tmp_kernel_op_66)*(tmp_kernel_op_13*tmp_kernel_op_67 + tmp_kernel_op_58*tmp_kernel_op_68) - (tmp_kernel_op_0*tmp_kernel_op_67 + tmp_kernel_op_66*tmp_kernel_op_69)*(tmp_kernel_op_13*tmp_kernel_op_63 - tmp_kernel_op_68*tmp_kernel_op_69));
                const real_t tmp_kernel_op_71 = tmp_kernel_op_70*0.16666666666666671;
                const real_t tmp_kernel_op_72 = p_affine_0_1 + tmp_kernel_op_29*0.66666666666666663 + tmp_kernel_op_30*0.16666666666666666;
                const real_t tmp_kernel_op_73 = p_affine_0_0 + tmp_kernel_op_32*0.66666666666666663 + tmp_kernel_op_33*0.16666666666666666;
                const real_t tmp_kernel_op_74 = (tmp_kernel_op_73*tmp_kernel_op_73);
                const real_t tmp_kernel_op_75 = (tmp_kernel_op_72*tmp_kernel_op_72);
                const real_t tmp_kernel_op_76 = tmp_kernel_op_74 + tmp_kernel_op_75;
                const real_t tmp_kernel_op_77 = tmp_kernel_op_40*pow(tmp_kernel_op_76, -0.50000000000000000);
                const real_t tmp_kernel_op_78 = tmp_kernel_op_72*tmp_kernel_op_77;
                const real_t tmp_kernel_op_79 = pow(tmp_kernel_op_76, -1.5000000000000000);
                const real_t tmp_kernel_op_80 = radRayVertex + tmp_kernel_op_39*(-tmp_kernel_op_28*(tmp_kernel_op_44 + tmp_kernel_op_72) + tmp_kernel_op_38*(tmp_kernel_op_45 + tmp_kernel_op_73));
                const real_t tmp_kernel_op_81 = -tmp_kernel_op_28*tmp_kernel_op_78 + tmp_kernel_op_74*tmp_kernel_op_79*tmp_kernel_op_80*1.0;
                const real_t tmp_kernel_op_82 = tmp_kernel_op_73*tmp_kernel_op_77;
                const real_t tmp_kernel_op_83 = tmp_kernel_op_79*tmp_kernel_op_80*1.0;
                const real_t tmp_kernel_op_84 = tmp_kernel_op_38*tmp_kernel_op_78 - tmp_kernel_op_72*tmp_kernel_op_73*tmp_kernel_op_83;
                const real_t tmp_kernel_op_85 = 1.0 / (tmp_kernel_op_81*(tmp_kernel_op_38*tmp_kernel_op_82 + tmp_kernel_op_75*tmp_kernel_op_83) - tmp_kernel_op_84*(-tmp_kernel_op_28*tmp_kernel_op_82 - tmp_kernel_op_72*tmp_kernel_op_73*tmp_kernel_op_79*tmp_kernel_op_80));
                const real_t tmp_kernel_op_86 = tmp_kernel_op_81*tmp_kernel_op_85;
                const real_t tmp_kernel_op_87 = -tmp_kernel_op_84*tmp_kernel_op_85;
                const real_t tmp_kernel_op_88 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_86 + jac_affine_inv_0_1_GRAY*tmp_kernel_op_87;
                const real_t tmp_kernel_op_90 = tmp_kernel_op_88*(tmp_kernel_op_89 - 1.0);
                const real_t tmp_kernel_op_91 = tmp_kernel_op_1 + tmp_kernel_op_2*0.16666666666666666 + tmp_kernel_op_3*0.16666666666666666;
                const real_t tmp_kernel_op_92 = (tmp_kernel_op_91*tmp_kernel_op_91);
                const real_t tmp_kernel_op_93 = tmp_kernel_op_6 + tmp_kernel_op_7*0.16666666666666666 + tmp_kernel_op_8*0.16666666666666666;
                const real_t tmp_kernel_op_94 = (tmp_kernel_op_93*tmp_kernel_op_93);
                const real_t tmp_kernel_op_95 = tmp_kernel_op_92 + tmp_kernel_op_94;
                const real_t tmp_kernel_op_96 = tmp_kernel_op_17*pow(tmp_kernel_op_95, -0.50000000000000000);
                const real_t tmp_kernel_op_97 = tmp_kernel_op_91*tmp_kernel_op_96;
                const real_t tmp_kernel_op_98 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_91) + tmp_kernel_op_13*(rayVertex_1 + tmp_kernel_op_93);
                const real_t tmp_kernel_op_99 = pow(tmp_kernel_op_95, -1.5000000000000000)*1.0;
                const real_t tmp_kernel_op_100 = tmp_kernel_op_99*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_98);
                const real_t tmp_kernel_op_101 = tmp_kernel_op_93*tmp_kernel_op_96;
                const real_t tmp_kernel_op_102 = tmp_kernel_op_99*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_98);
                const real_t tmp_kernel_op_103 = tmp_kernel_op_91*tmp_kernel_op_93;
                const real_t tmp_kernel_op_104 = abs_det_jac_affine_GRAY*0.16666666666666666*abs((tmp_kernel_op_0*tmp_kernel_op_101 + tmp_kernel_op_100*tmp_kernel_op_103)*(tmp_kernel_op_102*tmp_kernel_op_103 - tmp_kernel_op_13*tmp_kernel_op_97) + (tmp_kernel_op_0*tmp_kernel_op_97 - tmp_kernel_op_100*tmp_kernel_op_94)*(tmp_kernel_op_101*tmp_kernel_op_13 + tmp_kernel_op_102*tmp_kernel_op_92));
                const real_t tmp_kernel_op_105 = tmp_kernel_op_104*0.66666666666666674;
                const real_t tmp_kernel_op_106 = p_affine_0_1 + tmp_kernel_op_29*0.16666666666666666 + tmp_kernel_op_30*0.16666666666666666;
                const real_t tmp_kernel_op_107 = p_affine_0_0 + tmp_kernel_op_32*0.16666666666666666 + tmp_kernel_op_33*0.16666666666666666;
                const real_t tmp_kernel_op_108 = (tmp_kernel_op_107*tmp_kernel_op_107);
                const real_t tmp_kernel_op_109 = (tmp_kernel_op_106*tmp_kernel_op_106);
                const real_t tmp_kernel_op_110 = tmp_kernel_op_108 + tmp_kernel_op_109;
                const real_t tmp_kernel_op_111 = pow(tmp_kernel_op_110, -0.50000000000000000)*tmp_kernel_op_40;
                const real_t tmp_kernel_op_112 = tmp_kernel_op_106*tmp_kernel_op_111;
                const real_t tmp_kernel_op_113 = pow(tmp_kernel_op_110, -1.5000000000000000);
                const real_t tmp_kernel_op_114 = radRayVertex + tmp_kernel_op_39*(-tmp_kernel_op_28*(tmp_kernel_op_106 + tmp_kernel_op_44) + tmp_kernel_op_38*(tmp_kernel_op_107 + tmp_kernel_op_45));
                const real_t tmp_kernel_op_115 = tmp_kernel_op_108*tmp_kernel_op_113*tmp_kernel_op_114*1.0 - tmp_kernel_op_112*tmp_kernel_op_28;
                const real_t tmp_kernel_op_116 = tmp_kernel_op_107*tmp_kernel_op_111;
                const real_t tmp_kernel_op_117 = tmp_kernel_op_113*tmp_kernel_op_114*1.0;
                const real_t tmp_kernel_op_118 = -tmp_kernel_op_106*tmp_kernel_op_107*tmp_kernel_op_117 + tmp_kernel_op_112*tmp_kernel_op_38;
                const real_t tmp_kernel_op_119 = 1.0 / (tmp_kernel_op_115*(tmp_kernel_op_109*tmp_kernel_op_117 + tmp_kernel_op_116*tmp_kernel_op_38) - tmp_kernel_op_118*(-tmp_kernel_op_106*tmp_kernel_op_107*tmp_kernel_op_113*tmp_kernel_op_114 - tmp_kernel_op_116*tmp_kernel_op_28));
                const real_t tmp_kernel_op_120 = tmp_kernel_op_115*tmp_kernel_op_119;
                const real_t tmp_kernel_op_121 = -tmp_kernel_op_118*tmp_kernel_op_119;
                const real_t tmp_kernel_op_122 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_120 + jac_affine_inv_0_1_GRAY*tmp_kernel_op_121;
                const real_t tmp_kernel_op_124 = tmp_kernel_op_122*(tmp_kernel_op_123 - 1.0);
                const real_t tmp_kernel_op_125 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_52 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_53;
                const real_t tmp_kernel_op_127 = tmp_kernel_op_125*(tmp_kernel_op_126 - 1.0);
                const real_t tmp_kernel_op_128 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_86 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_87;
                const real_t tmp_kernel_op_130 = tmp_kernel_op_128*(tmp_kernel_op_129 - 1.0);
                const real_t tmp_kernel_op_131 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_120 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_121;
                const real_t tmp_kernel_op_133 = tmp_kernel_op_131*(tmp_kernel_op_132 - 1.0);
                const real_t tmp_kernel_op_134 = tmp_kernel_op_125*tmp_kernel_op_55;
                const real_t tmp_kernel_op_135 = tmp_kernel_op_126*tmp_kernel_op_54;
                const real_t tmp_kernel_op_136 = -tmp_kernel_op_134 - tmp_kernel_op_135;
                const real_t tmp_kernel_op_137 = tmp_kernel_op_128*tmp_kernel_op_89;
                const real_t tmp_kernel_op_138 = tmp_kernel_op_129*tmp_kernel_op_88;
                const real_t tmp_kernel_op_139 = -tmp_kernel_op_137 - tmp_kernel_op_138;
                const real_t tmp_kernel_op_140 = tmp_kernel_op_123*tmp_kernel_op_131;
                const real_t tmp_kernel_op_141 = tmp_kernel_op_122*tmp_kernel_op_132;
                const real_t tmp_kernel_op_142 = -tmp_kernel_op_140 - tmp_kernel_op_141;
                const real_t tmp_kernel_op_143 = -tmp_kernel_op_125*(-tmp_kernel_op_55 - 1.333333333333333) + tmp_kernel_op_135;
                const real_t tmp_kernel_op_144 = -tmp_kernel_op_128*(-tmp_kernel_op_89 + 2.666666666666667) + tmp_kernel_op_138;
                const real_t tmp_kernel_op_145 = -tmp_kernel_op_131*(-tmp_kernel_op_123 + 2.666666666666667) + tmp_kernel_op_141;
                const real_t tmp_kernel_op_146 = tmp_kernel_op_134 - tmp_kernel_op_54*(-tmp_kernel_op_126 + 2.666666666666667);
                const real_t tmp_kernel_op_147 = tmp_kernel_op_137 - tmp_kernel_op_88*(-tmp_kernel_op_129 - 1.333333333333333);
                const real_t tmp_kernel_op_148 = -tmp_kernel_op_122*(-tmp_kernel_op_132 + 2.666666666666667) + tmp_kernel_op_140;
                const real_t tmp_kernel_op_150 = -tmp_kernel_op_125*tmp_kernel_op_149 - tmp_kernel_op_149*tmp_kernel_op_54;
                const real_t tmp_kernel_op_152 = -tmp_kernel_op_128*tmp_kernel_op_151 - tmp_kernel_op_151*tmp_kernel_op_88;
                const real_t tmp_kernel_op_154 = -tmp_kernel_op_122*tmp_kernel_op_153 - tmp_kernel_op_131*tmp_kernel_op_153;
                const real_t tmp_kernel_op_155 = tmp_kernel_op_26*0.16666666666666666;
                const real_t tmp_kernel_op_156 = tmp_kernel_op_70*0.66666666666666663;
                const real_t tmp_kernel_op_157 = tmp_kernel_op_104*0.16666666666666666;
                const real_t tmp_kernel_op_158 = tmp_kernel_op_26*0.66666666666666663;
                const real_t tmp_kernel_op_159 = tmp_kernel_op_70*0.16666666666666666;
                const real_t tmp_kernel_op_160 = tmp_kernel_op_104*0.16666666666666666;
                const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_105*tmp_kernel_op_154 + tmp_kernel_op_150*tmp_kernel_op_27 + tmp_kernel_op_152*tmp_kernel_op_71) + src_dof_1*(-tmp_kernel_op_105*tmp_kernel_op_124 - tmp_kernel_op_27*tmp_kernel_op_56 - tmp_kernel_op_71*tmp_kernel_op_90) + src_dof_2*(-tmp_kernel_op_105*tmp_kernel_op_133 - tmp_kernel_op_127*tmp_kernel_op_27 - tmp_kernel_op_130*tmp_kernel_op_71) + src_dof_3*(tmp_kernel_op_105*tmp_kernel_op_142 + tmp_kernel_op_136*tmp_kernel_op_27 + tmp_kernel_op_139*tmp_kernel_op_71) + src_dof_4*(tmp_kernel_op_105*tmp_kernel_op_145 + tmp_kernel_op_143*tmp_kernel_op_27 + tmp_kernel_op_144*tmp_kernel_op_71) + src_dof_5*(tmp_kernel_op_105*tmp_kernel_op_148 + tmp_kernel_op_146*tmp_kernel_op_27 + tmp_kernel_op_147*tmp_kernel_op_71);
                const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_150*tmp_kernel_op_155 + tmp_kernel_op_152*tmp_kernel_op_156 + tmp_kernel_op_154*tmp_kernel_op_157) + src_dof_1*(-tmp_kernel_op_124*tmp_kernel_op_157 - tmp_kernel_op_155*tmp_kernel_op_56 - tmp_kernel_op_156*tmp_kernel_op_90) + src_dof_2*(-tmp_kernel_op_127*tmp_kernel_op_155 - tmp_kernel_op_130*tmp_kernel_op_156 - tmp_kernel_op_133*tmp_kernel_op_157) + src_dof_3*(tmp_kernel_op_136*tmp_kernel_op_155 + tmp_kernel_op_139*tmp_kernel_op_156 + tmp_kernel_op_142*tmp_kernel_op_157) + src_dof_4*(tmp_kernel_op_143*tmp_kernel_op_155 + tmp_kernel_op_144*tmp_kernel_op_156 + tmp_kernel_op_145*tmp_kernel_op_157) + src_dof_5*(tmp_kernel_op_146*tmp_kernel_op_155 + tmp_kernel_op_147*tmp_kernel_op_156 + tmp_kernel_op_148*tmp_kernel_op_157);
                const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_150*tmp_kernel_op_158 + tmp_kernel_op_152*tmp_kernel_op_159 + tmp_kernel_op_154*tmp_kernel_op_160) + src_dof_1*(-tmp_kernel_op_124*tmp_kernel_op_160 - tmp_kernel_op_158*tmp_kernel_op_56 - tmp_kernel_op_159*tmp_kernel_op_90) + src_dof_2*(-tmp_kernel_op_127*tmp_kernel_op_158 - tmp_kernel_op_130*tmp_kernel_op_159 - tmp_kernel_op_133*tmp_kernel_op_160) + src_dof_3*(tmp_kernel_op_136*tmp_kernel_op_158 + tmp_kernel_op_139*tmp_kernel_op_159 + tmp_kernel_op_142*tmp_kernel_op_160) + src_dof_4*(tmp_kernel_op_143*tmp_kernel_op_158 + tmp_kernel_op_144*tmp_kernel_op_159 + tmp_kernel_op_145*tmp_kernel_op_160) + src_dof_5*(tmp_kernel_op_146*tmp_kernel_op_158 + tmp_kernel_op_147*tmp_kernel_op_159 + tmp_kernel_op_148*tmp_kernel_op_160);
                _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             }
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
       {
          /* FaceType.BLUE */
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
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
            
                const __m256d p_affine_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                const __m256d p_affine_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                const __m256d p_affine_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                const __m256d p_affine_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                const __m256d p_affine_2_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                const __m256d p_affine_2_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_4 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d src_dof_5 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d tmp_kernel_op_1 = _mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_2 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_kernel_op_3 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_kernel_op_4 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_2,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_3,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),tmp_kernel_op_1);
                const __m256d tmp_kernel_op_5 = _mm256_mul_pd(tmp_kernel_op_4,tmp_kernel_op_4);
                const __m256d tmp_kernel_op_6 = _mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                const __m256d tmp_kernel_op_8 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                const __m256d tmp_kernel_op_9 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_7,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_8,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),tmp_kernel_op_6);
                const __m256d tmp_kernel_op_10 = _mm256_mul_pd(tmp_kernel_op_9,tmp_kernel_op_9);
                const __m256d tmp_kernel_op_11 = _mm256_add_pd(tmp_kernel_op_10,tmp_kernel_op_5);
                const __m256d tmp_kernel_op_18 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_11)),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17));
                const __m256d tmp_kernel_op_19 = _mm256_mul_pd(tmp_kernel_op_18,tmp_kernel_op_4);
                const __m256d tmp_kernel_op_20 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_kernel_op_9),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_kernel_op_4),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)));
                const __m256d tmp_kernel_op_21 = _mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_11),_mm256_mul_pd(tmp_kernel_op_11,tmp_kernel_op_11)),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_22 = _mm256_mul_pd(tmp_kernel_op_21,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_20,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_23 = _mm256_mul_pd(tmp_kernel_op_18,tmp_kernel_op_9);
                const __m256d tmp_kernel_op_24 = _mm256_mul_pd(tmp_kernel_op_21,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_20,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_25 = _mm256_mul_pd(tmp_kernel_op_4,tmp_kernel_op_9);
                const __m256d tmp_kernel_op_26 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE)),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_23,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(tmp_kernel_op_24,tmp_kernel_op_5)),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_19,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_10,tmp_kernel_op_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_19,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_24,tmp_kernel_op_25),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_23,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(tmp_kernel_op_22,tmp_kernel_op_25))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))))));
                const __m256d tmp_kernel_op_27 = _mm256_mul_pd(tmp_kernel_op_26,_mm256_set_pd(0.16666666666666674,0.16666666666666674,0.16666666666666674,0.16666666666666674));
                const __m256d tmp_kernel_op_29 = _mm256_mul_pd(tmp_kernel_op_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_30 = _mm256_mul_pd(tmp_kernel_op_8,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_31 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_29,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_30,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),p_affine_0_1);
                const __m256d tmp_kernel_op_32 = _mm256_mul_pd(tmp_kernel_op_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_33 = _mm256_mul_pd(tmp_kernel_op_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_34 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_32,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_33,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),p_affine_0_0);
                const __m256d tmp_kernel_op_35 = _mm256_mul_pd(tmp_kernel_op_34,tmp_kernel_op_34);
                const __m256d tmp_kernel_op_36 = _mm256_mul_pd(tmp_kernel_op_31,tmp_kernel_op_31);
                const __m256d tmp_kernel_op_37 = _mm256_add_pd(tmp_kernel_op_35,tmp_kernel_op_36);
                const __m256d tmp_kernel_op_41 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_37)),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40));
                const __m256d tmp_kernel_op_42 = _mm256_mul_pd(tmp_kernel_op_31,tmp_kernel_op_41);
                const __m256d tmp_kernel_op_43 = _mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_37),_mm256_mul_pd(tmp_kernel_op_37,tmp_kernel_op_37));
                const __m256d tmp_kernel_op_46 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45),tmp_kernel_op_34),_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44),tmp_kernel_op_31),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28))),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                const __m256d tmp_kernel_op_47 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_35,tmp_kernel_op_43),tmp_kernel_op_46),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                const __m256d tmp_kernel_op_48 = _mm256_mul_pd(tmp_kernel_op_34,tmp_kernel_op_41);
                const __m256d tmp_kernel_op_49 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_43,tmp_kernel_op_46),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_50 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_42,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_31,tmp_kernel_op_34),tmp_kernel_op_49),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_51 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_47,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_48,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(tmp_kernel_op_36,tmp_kernel_op_49))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_50,_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_48,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_31,tmp_kernel_op_34),tmp_kernel_op_43),tmp_kernel_op_46),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                const __m256d tmp_kernel_op_52 = _mm256_mul_pd(tmp_kernel_op_47,tmp_kernel_op_51);
                const __m256d tmp_kernel_op_53 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_50,tmp_kernel_op_51),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_54 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_52,_mm256_set_pd(jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE)),_mm256_mul_pd(tmp_kernel_op_53,_mm256_set_pd(jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE)));
                const __m256d tmp_kernel_op_56 = _mm256_mul_pd(tmp_kernel_op_54,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55)));
                const __m256d tmp_kernel_op_57 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_3,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_2,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),tmp_kernel_op_1);
                const __m256d tmp_kernel_op_58 = _mm256_mul_pd(tmp_kernel_op_57,tmp_kernel_op_57);
                const __m256d tmp_kernel_op_59 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_8,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_7,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),tmp_kernel_op_6);
                const __m256d tmp_kernel_op_60 = _mm256_mul_pd(tmp_kernel_op_59,tmp_kernel_op_59);
                const __m256d tmp_kernel_op_61 = _mm256_add_pd(tmp_kernel_op_58,tmp_kernel_op_60);
                const __m256d tmp_kernel_op_62 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_61)),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17));
                const __m256d tmp_kernel_op_63 = _mm256_mul_pd(tmp_kernel_op_57,tmp_kernel_op_62);
                const __m256d tmp_kernel_op_64 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_kernel_op_59),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_kernel_op_57),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)));
                const __m256d tmp_kernel_op_65 = _mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_61),_mm256_mul_pd(tmp_kernel_op_61,tmp_kernel_op_61)),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_66 = _mm256_mul_pd(tmp_kernel_op_65,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_64,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_67 = _mm256_mul_pd(tmp_kernel_op_59,tmp_kernel_op_62);
                const __m256d tmp_kernel_op_68 = _mm256_mul_pd(tmp_kernel_op_65,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_64,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_69 = _mm256_mul_pd(tmp_kernel_op_57,tmp_kernel_op_59);
                const __m256d tmp_kernel_op_70 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE)),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_67,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(tmp_kernel_op_58,tmp_kernel_op_68)),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_63,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_60,tmp_kernel_op_66),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_63,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_68,tmp_kernel_op_69),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_67,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(tmp_kernel_op_66,tmp_kernel_op_69))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))))));
                const __m256d tmp_kernel_op_71 = _mm256_mul_pd(tmp_kernel_op_70,_mm256_set_pd(0.16666666666666671,0.16666666666666671,0.16666666666666671,0.16666666666666671));
                const __m256d tmp_kernel_op_72 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_30,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_29,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),p_affine_0_1);
                const __m256d tmp_kernel_op_73 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_33,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_32,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663))),p_affine_0_0);
                const __m256d tmp_kernel_op_74 = _mm256_mul_pd(tmp_kernel_op_73,tmp_kernel_op_73);
                const __m256d tmp_kernel_op_75 = _mm256_mul_pd(tmp_kernel_op_72,tmp_kernel_op_72);
                const __m256d tmp_kernel_op_76 = _mm256_add_pd(tmp_kernel_op_74,tmp_kernel_op_75);
                const __m256d tmp_kernel_op_77 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_76)),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40));
                const __m256d tmp_kernel_op_78 = _mm256_mul_pd(tmp_kernel_op_72,tmp_kernel_op_77);
                const __m256d tmp_kernel_op_79 = _mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_76),_mm256_mul_pd(tmp_kernel_op_76,tmp_kernel_op_76));
                const __m256d tmp_kernel_op_80 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45),tmp_kernel_op_73),_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44),tmp_kernel_op_72),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28))),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                const __m256d tmp_kernel_op_81 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_78,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_74,tmp_kernel_op_79),tmp_kernel_op_80),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                const __m256d tmp_kernel_op_82 = _mm256_mul_pd(tmp_kernel_op_73,tmp_kernel_op_77);
                const __m256d tmp_kernel_op_83 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_79,tmp_kernel_op_80),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_84 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_78,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_72,tmp_kernel_op_73),tmp_kernel_op_83),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_85 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_81,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_82,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(tmp_kernel_op_75,tmp_kernel_op_83))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_84,_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_82,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_72,tmp_kernel_op_73),tmp_kernel_op_79),tmp_kernel_op_80),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                const __m256d tmp_kernel_op_86 = _mm256_mul_pd(tmp_kernel_op_81,tmp_kernel_op_85);
                const __m256d tmp_kernel_op_87 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_84,tmp_kernel_op_85),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_88 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_86,_mm256_set_pd(jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE)),_mm256_mul_pd(tmp_kernel_op_87,_mm256_set_pd(jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE)));
                const __m256d tmp_kernel_op_90 = _mm256_mul_pd(tmp_kernel_op_88,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89)));
                const __m256d tmp_kernel_op_91 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_2,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_3,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666))),tmp_kernel_op_1);
                const __m256d tmp_kernel_op_92 = _mm256_mul_pd(tmp_kernel_op_91,tmp_kernel_op_91);
                const __m256d tmp_kernel_op_93 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_7,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_8,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666))),tmp_kernel_op_6);
                const __m256d tmp_kernel_op_94 = _mm256_mul_pd(tmp_kernel_op_93,tmp_kernel_op_93);
                const __m256d tmp_kernel_op_95 = _mm256_add_pd(tmp_kernel_op_92,tmp_kernel_op_94);
                const __m256d tmp_kernel_op_96 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_95)),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17));
                const __m256d tmp_kernel_op_97 = _mm256_mul_pd(tmp_kernel_op_91,tmp_kernel_op_96);
                const __m256d tmp_kernel_op_98 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_kernel_op_93),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_kernel_op_91),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)));
                const __m256d tmp_kernel_op_99 = _mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_95),_mm256_mul_pd(tmp_kernel_op_95,tmp_kernel_op_95)),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_100 = _mm256_mul_pd(tmp_kernel_op_99,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_98,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_101 = _mm256_mul_pd(tmp_kernel_op_93,tmp_kernel_op_96);
                const __m256d tmp_kernel_op_102 = _mm256_mul_pd(tmp_kernel_op_99,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_98,_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                const __m256d tmp_kernel_op_103 = _mm256_mul_pd(tmp_kernel_op_91,tmp_kernel_op_93);
                const __m256d tmp_kernel_op_104 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666),_mm256_set_pd(abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE)),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_101,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(tmp_kernel_op_100,tmp_kernel_op_103)),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_102,tmp_kernel_op_103),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_97,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_101,_mm256_set_pd(tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13,tmp_kernel_op_13)),_mm256_mul_pd(tmp_kernel_op_102,tmp_kernel_op_92)),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_97,_mm256_set_pd(tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0,tmp_kernel_op_0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_100,tmp_kernel_op_94),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))))))));
                const __m256d tmp_kernel_op_105 = _mm256_mul_pd(tmp_kernel_op_104,_mm256_set_pd(0.66666666666666674,0.66666666666666674,0.66666666666666674,0.66666666666666674));
                const __m256d tmp_kernel_op_106 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_29,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_30,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666))),p_affine_0_1);
                const __m256d tmp_kernel_op_107 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_32,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666)),_mm256_mul_pd(tmp_kernel_op_33,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666))),p_affine_0_0);
                const __m256d tmp_kernel_op_108 = _mm256_mul_pd(tmp_kernel_op_107,tmp_kernel_op_107);
                const __m256d tmp_kernel_op_109 = _mm256_mul_pd(tmp_kernel_op_106,tmp_kernel_op_106);
                const __m256d tmp_kernel_op_110 = _mm256_add_pd(tmp_kernel_op_108,tmp_kernel_op_109);
                const __m256d tmp_kernel_op_111 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_kernel_op_110)),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40));
                const __m256d tmp_kernel_op_112 = _mm256_mul_pd(tmp_kernel_op_106,tmp_kernel_op_111);
                const __m256d tmp_kernel_op_113 = _mm256_div_pd(_mm256_sqrt_pd(tmp_kernel_op_110),_mm256_mul_pd(tmp_kernel_op_110,tmp_kernel_op_110));
                const __m256d tmp_kernel_op_114 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45,tmp_kernel_op_45),tmp_kernel_op_107),_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44,tmp_kernel_op_44),tmp_kernel_op_106),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28))),_mm256_set_pd(tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39,tmp_kernel_op_39)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                const __m256d tmp_kernel_op_115 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_112,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_108,tmp_kernel_op_113),tmp_kernel_op_114),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                const __m256d tmp_kernel_op_116 = _mm256_mul_pd(tmp_kernel_op_107,tmp_kernel_op_111);
                const __m256d tmp_kernel_op_117 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_113,tmp_kernel_op_114),_mm256_set_pd(1.0,1.0,1.0,1.0));
                const __m256d tmp_kernel_op_118 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_112,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_106,tmp_kernel_op_107),tmp_kernel_op_117),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_119 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_115,_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_116,_mm256_set_pd(tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38,tmp_kernel_op_38)),_mm256_mul_pd(tmp_kernel_op_109,tmp_kernel_op_117))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_118,_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_116,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28,tmp_kernel_op_28)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_106,tmp_kernel_op_107),tmp_kernel_op_113),tmp_kernel_op_114),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                const __m256d tmp_kernel_op_120 = _mm256_mul_pd(tmp_kernel_op_115,tmp_kernel_op_119);
                const __m256d tmp_kernel_op_121 = _mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_118,tmp_kernel_op_119),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                const __m256d tmp_kernel_op_122 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_120,_mm256_set_pd(jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE)),_mm256_mul_pd(tmp_kernel_op_121,_mm256_set_pd(jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE)));
                const __m256d tmp_kernel_op_124 = _mm256_mul_pd(tmp_kernel_op_122,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123)));
                const __m256d tmp_kernel_op_125 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_52,_mm256_set_pd(jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE)),_mm256_mul_pd(tmp_kernel_op_53,_mm256_set_pd(jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE)));
                const __m256d tmp_kernel_op_127 = _mm256_mul_pd(tmp_kernel_op_125,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126)));
                const __m256d tmp_kernel_op_128 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_86,_mm256_set_pd(jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE)),_mm256_mul_pd(tmp_kernel_op_87,_mm256_set_pd(jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE)));
                const __m256d tmp_kernel_op_130 = _mm256_mul_pd(tmp_kernel_op_128,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129)));
                const __m256d tmp_kernel_op_131 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_120,_mm256_set_pd(jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE)),_mm256_mul_pd(tmp_kernel_op_121,_mm256_set_pd(jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE)));
                const __m256d tmp_kernel_op_133 = _mm256_mul_pd(tmp_kernel_op_131,_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132)));
                const __m256d tmp_kernel_op_134 = _mm256_mul_pd(tmp_kernel_op_125,_mm256_set_pd(tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55));
                const __m256d tmp_kernel_op_135 = _mm256_mul_pd(tmp_kernel_op_54,_mm256_set_pd(tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126));
                const __m256d tmp_kernel_op_136 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_134,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_kernel_op_135,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_137 = _mm256_mul_pd(tmp_kernel_op_128,_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89));
                const __m256d tmp_kernel_op_138 = _mm256_mul_pd(tmp_kernel_op_88,_mm256_set_pd(tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129));
                const __m256d tmp_kernel_op_139 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_137,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_kernel_op_138,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_140 = _mm256_mul_pd(tmp_kernel_op_131,_mm256_set_pd(tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123));
                const __m256d tmp_kernel_op_141 = _mm256_mul_pd(tmp_kernel_op_122,_mm256_set_pd(tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132));
                const __m256d tmp_kernel_op_142 = _mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_140,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_kernel_op_141,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                const __m256d tmp_kernel_op_143 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_125,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55)),_mm256_set_pd(-1.333333333333333,-1.333333333333333,-1.333333333333333,-1.333333333333333))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_135);
                const __m256d tmp_kernel_op_144 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_128,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89)),_mm256_set_pd(2.666666666666667,2.666666666666667,2.666666666666667,2.666666666666667))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_138);
                const __m256d tmp_kernel_op_145 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_131,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123,tmp_kernel_op_123)),_mm256_set_pd(2.666666666666667,2.666666666666667,2.666666666666667,2.666666666666667))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_141);
                const __m256d tmp_kernel_op_146 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_54,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126,tmp_kernel_op_126)),_mm256_set_pd(2.666666666666667,2.666666666666667,2.666666666666667,2.666666666666667))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_134);
                const __m256d tmp_kernel_op_147 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_88,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129,tmp_kernel_op_129)),_mm256_set_pd(-1.333333333333333,-1.333333333333333,-1.333333333333333,-1.333333333333333))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_137);
                const __m256d tmp_kernel_op_148 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_122,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132,tmp_kernel_op_132)),_mm256_set_pd(2.666666666666667,2.666666666666667,2.666666666666667,2.666666666666667))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_kernel_op_140);
                const __m256d tmp_kernel_op_150 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_125,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_149,tmp_kernel_op_149,tmp_kernel_op_149,tmp_kernel_op_149)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_54,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_149,tmp_kernel_op_149,tmp_kernel_op_149,tmp_kernel_op_149)));
                const __m256d tmp_kernel_op_152 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_128,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_151,tmp_kernel_op_151,tmp_kernel_op_151,tmp_kernel_op_151)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_88,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_151,tmp_kernel_op_151,tmp_kernel_op_151,tmp_kernel_op_151)));
                const __m256d tmp_kernel_op_154 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_122,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_153,tmp_kernel_op_153,tmp_kernel_op_153,tmp_kernel_op_153)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_131,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_kernel_op_153,tmp_kernel_op_153,tmp_kernel_op_153,tmp_kernel_op_153)));
                const __m256d tmp_kernel_op_155 = _mm256_mul_pd(tmp_kernel_op_26,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666));
                const __m256d tmp_kernel_op_156 = _mm256_mul_pd(tmp_kernel_op_70,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663));
                const __m256d tmp_kernel_op_157 = _mm256_mul_pd(tmp_kernel_op_104,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666));
                const __m256d tmp_kernel_op_158 = _mm256_mul_pd(tmp_kernel_op_26,_mm256_set_pd(0.66666666666666663,0.66666666666666663,0.66666666666666663,0.66666666666666663));
                const __m256d tmp_kernel_op_159 = _mm256_mul_pd(tmp_kernel_op_70,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666));
                const __m256d tmp_kernel_op_160 = _mm256_mul_pd(tmp_kernel_op_104,_mm256_set_pd(0.16666666666666666,0.16666666666666666,0.16666666666666666,0.16666666666666666));
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_142),_mm256_mul_pd(tmp_kernel_op_136,tmp_kernel_op_27)),_mm256_mul_pd(tmp_kernel_op_139,tmp_kernel_op_71))),_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_145),_mm256_mul_pd(tmp_kernel_op_143,tmp_kernel_op_27)),_mm256_mul_pd(tmp_kernel_op_144,tmp_kernel_op_71)))),_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_148),_mm256_mul_pd(tmp_kernel_op_146,tmp_kernel_op_27)),_mm256_mul_pd(tmp_kernel_op_147,tmp_kernel_op_71)))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_154),_mm256_mul_pd(tmp_kernel_op_150,tmp_kernel_op_27)),_mm256_mul_pd(tmp_kernel_op_152,tmp_kernel_op_71)))),_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_124),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_27,tmp_kernel_op_56),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_71,tmp_kernel_op_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_105,tmp_kernel_op_133),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_127,tmp_kernel_op_27),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_130,tmp_kernel_op_71),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_136,tmp_kernel_op_155),_mm256_mul_pd(tmp_kernel_op_139,tmp_kernel_op_156)),_mm256_mul_pd(tmp_kernel_op_142,tmp_kernel_op_157))),_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_143,tmp_kernel_op_155),_mm256_mul_pd(tmp_kernel_op_144,tmp_kernel_op_156)),_mm256_mul_pd(tmp_kernel_op_145,tmp_kernel_op_157)))),_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_146,tmp_kernel_op_155),_mm256_mul_pd(tmp_kernel_op_147,tmp_kernel_op_156)),_mm256_mul_pd(tmp_kernel_op_148,tmp_kernel_op_157)))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_150,tmp_kernel_op_155),_mm256_mul_pd(tmp_kernel_op_152,tmp_kernel_op_156)),_mm256_mul_pd(tmp_kernel_op_154,tmp_kernel_op_157)))),_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_124,tmp_kernel_op_157),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_155,tmp_kernel_op_56),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_156,tmp_kernel_op_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_127,tmp_kernel_op_155),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_130,tmp_kernel_op_156),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_133,tmp_kernel_op_157),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_136,tmp_kernel_op_158),_mm256_mul_pd(tmp_kernel_op_139,tmp_kernel_op_159)),_mm256_mul_pd(tmp_kernel_op_142,tmp_kernel_op_160))),_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_143,tmp_kernel_op_158),_mm256_mul_pd(tmp_kernel_op_144,tmp_kernel_op_159)),_mm256_mul_pd(tmp_kernel_op_145,tmp_kernel_op_160)))),_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_146,tmp_kernel_op_158),_mm256_mul_pd(tmp_kernel_op_147,tmp_kernel_op_159)),_mm256_mul_pd(tmp_kernel_op_148,tmp_kernel_op_160)))),_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_kernel_op_150,tmp_kernel_op_158),_mm256_mul_pd(tmp_kernel_op_152,tmp_kernel_op_159)),_mm256_mul_pd(tmp_kernel_op_154,tmp_kernel_op_160)))),_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_124,tmp_kernel_op_160),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_158,tmp_kernel_op_56),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_159,tmp_kernel_op_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_127,tmp_kernel_op_158),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_130,tmp_kernel_op_159),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(tmp_kernel_op_133,tmp_kernel_op_160),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
                const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_1 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t src_dof_3 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t tmp_kernel_op_1 = -p_affine_0_0;
                const real_t tmp_kernel_op_2 = p_affine_0_0 - p_affine_1_0;
                const real_t tmp_kernel_op_3 = p_affine_0_0 - p_affine_2_0;
                const real_t tmp_kernel_op_4 = tmp_kernel_op_1 + tmp_kernel_op_2*0.16666666666666666 + tmp_kernel_op_3*0.66666666666666663;
                const real_t tmp_kernel_op_5 = (tmp_kernel_op_4*tmp_kernel_op_4);
                const real_t tmp_kernel_op_6 = -p_affine_0_1;
                const real_t tmp_kernel_op_7 = p_affine_0_1 - p_affine_1_1;
                const real_t tmp_kernel_op_8 = p_affine_0_1 - p_affine_2_1;
                const real_t tmp_kernel_op_9 = tmp_kernel_op_6 + tmp_kernel_op_7*0.16666666666666666 + tmp_kernel_op_8*0.66666666666666663;
                const real_t tmp_kernel_op_10 = (tmp_kernel_op_9*tmp_kernel_op_9);
                const real_t tmp_kernel_op_11 = tmp_kernel_op_10 + tmp_kernel_op_5;
                const real_t tmp_kernel_op_18 = pow(tmp_kernel_op_11, -0.50000000000000000)*tmp_kernel_op_17;
                const real_t tmp_kernel_op_19 = tmp_kernel_op_18*tmp_kernel_op_4;
                const real_t tmp_kernel_op_20 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_4) + tmp_kernel_op_13*(rayVertex_1 + tmp_kernel_op_9);
                const real_t tmp_kernel_op_21 = pow(tmp_kernel_op_11, -1.5000000000000000)*1.0;
                const real_t tmp_kernel_op_22 = tmp_kernel_op_21*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_20);
                const real_t tmp_kernel_op_23 = tmp_kernel_op_18*tmp_kernel_op_9;
                const real_t tmp_kernel_op_24 = tmp_kernel_op_21*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_20);
                const real_t tmp_kernel_op_25 = tmp_kernel_op_4*tmp_kernel_op_9;
                const real_t tmp_kernel_op_26 = abs_det_jac_affine_BLUE*0.16666666666666666*abs((tmp_kernel_op_0*tmp_kernel_op_19 - tmp_kernel_op_10*tmp_kernel_op_22)*(tmp_kernel_op_13*tmp_kernel_op_23 + tmp_kernel_op_24*tmp_kernel_op_5) - (tmp_kernel_op_0*tmp_kernel_op_23 + tmp_kernel_op_22*tmp_kernel_op_25)*(tmp_kernel_op_13*tmp_kernel_op_19 - tmp_kernel_op_24*tmp_kernel_op_25));
                const real_t tmp_kernel_op_27 = tmp_kernel_op_26*0.16666666666666674;
                const real_t tmp_kernel_op_29 = -tmp_kernel_op_7;
                const real_t tmp_kernel_op_30 = -tmp_kernel_op_8;
                const real_t tmp_kernel_op_31 = p_affine_0_1 + tmp_kernel_op_29*0.16666666666666666 + tmp_kernel_op_30*0.66666666666666663;
                const real_t tmp_kernel_op_32 = -tmp_kernel_op_2;
                const real_t tmp_kernel_op_33 = -tmp_kernel_op_3;
                const real_t tmp_kernel_op_34 = p_affine_0_0 + tmp_kernel_op_32*0.16666666666666666 + tmp_kernel_op_33*0.66666666666666663;
                const real_t tmp_kernel_op_35 = (tmp_kernel_op_34*tmp_kernel_op_34);
                const real_t tmp_kernel_op_36 = (tmp_kernel_op_31*tmp_kernel_op_31);
                const real_t tmp_kernel_op_37 = tmp_kernel_op_35 + tmp_kernel_op_36;
                const real_t tmp_kernel_op_41 = pow(tmp_kernel_op_37, -0.50000000000000000)*tmp_kernel_op_40;
                const real_t tmp_kernel_op_42 = tmp_kernel_op_31*tmp_kernel_op_41;
                const real_t tmp_kernel_op_43 = pow(tmp_kernel_op_37, -1.5000000000000000);
                const real_t tmp_kernel_op_46 = radRayVertex + tmp_kernel_op_39*(-tmp_kernel_op_28*(tmp_kernel_op_31 + tmp_kernel_op_44) + tmp_kernel_op_38*(tmp_kernel_op_34 + tmp_kernel_op_45));
                const real_t tmp_kernel_op_47 = -tmp_kernel_op_28*tmp_kernel_op_42 + tmp_kernel_op_35*tmp_kernel_op_43*tmp_kernel_op_46*1.0;
                const real_t tmp_kernel_op_48 = tmp_kernel_op_34*tmp_kernel_op_41;
                const real_t tmp_kernel_op_49 = tmp_kernel_op_43*tmp_kernel_op_46*1.0;
                const real_t tmp_kernel_op_50 = -tmp_kernel_op_31*tmp_kernel_op_34*tmp_kernel_op_49 + tmp_kernel_op_38*tmp_kernel_op_42;
                const real_t tmp_kernel_op_51 = 1.0 / (tmp_kernel_op_47*(tmp_kernel_op_36*tmp_kernel_op_49 + tmp_kernel_op_38*tmp_kernel_op_48) - tmp_kernel_op_50*(-tmp_kernel_op_28*tmp_kernel_op_48 - tmp_kernel_op_31*tmp_kernel_op_34*tmp_kernel_op_43*tmp_kernel_op_46));
                const real_t tmp_kernel_op_52 = tmp_kernel_op_47*tmp_kernel_op_51;
                const real_t tmp_kernel_op_53 = -tmp_kernel_op_50*tmp_kernel_op_51;
                const real_t tmp_kernel_op_54 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_52 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_53;
                const real_t tmp_kernel_op_56 = tmp_kernel_op_54*(tmp_kernel_op_55 - 1.0);
                const real_t tmp_kernel_op_57 = tmp_kernel_op_1 + tmp_kernel_op_2*0.66666666666666663 + tmp_kernel_op_3*0.16666666666666666;
                const real_t tmp_kernel_op_58 = (tmp_kernel_op_57*tmp_kernel_op_57);
                const real_t tmp_kernel_op_59 = tmp_kernel_op_6 + tmp_kernel_op_7*0.66666666666666663 + tmp_kernel_op_8*0.16666666666666666;
                const real_t tmp_kernel_op_60 = (tmp_kernel_op_59*tmp_kernel_op_59);
                const real_t tmp_kernel_op_61 = tmp_kernel_op_58 + tmp_kernel_op_60;
                const real_t tmp_kernel_op_62 = tmp_kernel_op_17*pow(tmp_kernel_op_61, -0.50000000000000000);
                const real_t tmp_kernel_op_63 = tmp_kernel_op_57*tmp_kernel_op_62;
                const real_t tmp_kernel_op_64 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_57) + tmp_kernel_op_13*(rayVertex_1 + tmp_kernel_op_59);
                const real_t tmp_kernel_op_65 = pow(tmp_kernel_op_61, -1.5000000000000000)*1.0;
                const real_t tmp_kernel_op_66 = tmp_kernel_op_65*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_64);
                const real_t tmp_kernel_op_67 = tmp_kernel_op_59*tmp_kernel_op_62;
                const real_t tmp_kernel_op_68 = tmp_kernel_op_65*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_64);
                const real_t tmp_kernel_op_69 = tmp_kernel_op_57*tmp_kernel_op_59;
                const real_t tmp_kernel_op_70 = abs_det_jac_affine_BLUE*0.16666666666666666*abs((tmp_kernel_op_0*tmp_kernel_op_63 - tmp_kernel_op_60*tmp_kernel_op_66)*(tmp_kernel_op_13*tmp_kernel_op_67 + tmp_kernel_op_58*tmp_kernel_op_68) - (tmp_kernel_op_0*tmp_kernel_op_67 + tmp_kernel_op_66*tmp_kernel_op_69)*(tmp_kernel_op_13*tmp_kernel_op_63 - tmp_kernel_op_68*tmp_kernel_op_69));
                const real_t tmp_kernel_op_71 = tmp_kernel_op_70*0.16666666666666671;
                const real_t tmp_kernel_op_72 = p_affine_0_1 + tmp_kernel_op_29*0.66666666666666663 + tmp_kernel_op_30*0.16666666666666666;
                const real_t tmp_kernel_op_73 = p_affine_0_0 + tmp_kernel_op_32*0.66666666666666663 + tmp_kernel_op_33*0.16666666666666666;
                const real_t tmp_kernel_op_74 = (tmp_kernel_op_73*tmp_kernel_op_73);
                const real_t tmp_kernel_op_75 = (tmp_kernel_op_72*tmp_kernel_op_72);
                const real_t tmp_kernel_op_76 = tmp_kernel_op_74 + tmp_kernel_op_75;
                const real_t tmp_kernel_op_77 = tmp_kernel_op_40*pow(tmp_kernel_op_76, -0.50000000000000000);
                const real_t tmp_kernel_op_78 = tmp_kernel_op_72*tmp_kernel_op_77;
                const real_t tmp_kernel_op_79 = pow(tmp_kernel_op_76, -1.5000000000000000);
                const real_t tmp_kernel_op_80 = radRayVertex + tmp_kernel_op_39*(-tmp_kernel_op_28*(tmp_kernel_op_44 + tmp_kernel_op_72) + tmp_kernel_op_38*(tmp_kernel_op_45 + tmp_kernel_op_73));
                const real_t tmp_kernel_op_81 = -tmp_kernel_op_28*tmp_kernel_op_78 + tmp_kernel_op_74*tmp_kernel_op_79*tmp_kernel_op_80*1.0;
                const real_t tmp_kernel_op_82 = tmp_kernel_op_73*tmp_kernel_op_77;
                const real_t tmp_kernel_op_83 = tmp_kernel_op_79*tmp_kernel_op_80*1.0;
                const real_t tmp_kernel_op_84 = tmp_kernel_op_38*tmp_kernel_op_78 - tmp_kernel_op_72*tmp_kernel_op_73*tmp_kernel_op_83;
                const real_t tmp_kernel_op_85 = 1.0 / (tmp_kernel_op_81*(tmp_kernel_op_38*tmp_kernel_op_82 + tmp_kernel_op_75*tmp_kernel_op_83) - tmp_kernel_op_84*(-tmp_kernel_op_28*tmp_kernel_op_82 - tmp_kernel_op_72*tmp_kernel_op_73*tmp_kernel_op_79*tmp_kernel_op_80));
                const real_t tmp_kernel_op_86 = tmp_kernel_op_81*tmp_kernel_op_85;
                const real_t tmp_kernel_op_87 = -tmp_kernel_op_84*tmp_kernel_op_85;
                const real_t tmp_kernel_op_88 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_86 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_87;
                const real_t tmp_kernel_op_90 = tmp_kernel_op_88*(tmp_kernel_op_89 - 1.0);
                const real_t tmp_kernel_op_91 = tmp_kernel_op_1 + tmp_kernel_op_2*0.16666666666666666 + tmp_kernel_op_3*0.16666666666666666;
                const real_t tmp_kernel_op_92 = (tmp_kernel_op_91*tmp_kernel_op_91);
                const real_t tmp_kernel_op_93 = tmp_kernel_op_6 + tmp_kernel_op_7*0.16666666666666666 + tmp_kernel_op_8*0.16666666666666666;
                const real_t tmp_kernel_op_94 = (tmp_kernel_op_93*tmp_kernel_op_93);
                const real_t tmp_kernel_op_95 = tmp_kernel_op_92 + tmp_kernel_op_94;
                const real_t tmp_kernel_op_96 = tmp_kernel_op_17*pow(tmp_kernel_op_95, -0.50000000000000000);
                const real_t tmp_kernel_op_97 = tmp_kernel_op_91*tmp_kernel_op_96;
                const real_t tmp_kernel_op_98 = -tmp_kernel_op_0*(rayVertex_0 + tmp_kernel_op_91) + tmp_kernel_op_13*(rayVertex_1 + tmp_kernel_op_93);
                const real_t tmp_kernel_op_99 = pow(tmp_kernel_op_95, -1.5000000000000000)*1.0;
                const real_t tmp_kernel_op_100 = tmp_kernel_op_99*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_98);
                const real_t tmp_kernel_op_101 = tmp_kernel_op_93*tmp_kernel_op_96;
                const real_t tmp_kernel_op_102 = tmp_kernel_op_99*(radRayVertex + tmp_kernel_op_16*tmp_kernel_op_98);
                const real_t tmp_kernel_op_103 = tmp_kernel_op_91*tmp_kernel_op_93;
                const real_t tmp_kernel_op_104 = abs_det_jac_affine_BLUE*0.16666666666666666*abs((tmp_kernel_op_0*tmp_kernel_op_101 + tmp_kernel_op_100*tmp_kernel_op_103)*(tmp_kernel_op_102*tmp_kernel_op_103 - tmp_kernel_op_13*tmp_kernel_op_97) + (tmp_kernel_op_0*tmp_kernel_op_97 - tmp_kernel_op_100*tmp_kernel_op_94)*(tmp_kernel_op_101*tmp_kernel_op_13 + tmp_kernel_op_102*tmp_kernel_op_92));
                const real_t tmp_kernel_op_105 = tmp_kernel_op_104*0.66666666666666674;
                const real_t tmp_kernel_op_106 = p_affine_0_1 + tmp_kernel_op_29*0.16666666666666666 + tmp_kernel_op_30*0.16666666666666666;
                const real_t tmp_kernel_op_107 = p_affine_0_0 + tmp_kernel_op_32*0.16666666666666666 + tmp_kernel_op_33*0.16666666666666666;
                const real_t tmp_kernel_op_108 = (tmp_kernel_op_107*tmp_kernel_op_107);
                const real_t tmp_kernel_op_109 = (tmp_kernel_op_106*tmp_kernel_op_106);
                const real_t tmp_kernel_op_110 = tmp_kernel_op_108 + tmp_kernel_op_109;
                const real_t tmp_kernel_op_111 = pow(tmp_kernel_op_110, -0.50000000000000000)*tmp_kernel_op_40;
                const real_t tmp_kernel_op_112 = tmp_kernel_op_106*tmp_kernel_op_111;
                const real_t tmp_kernel_op_113 = pow(tmp_kernel_op_110, -1.5000000000000000);
                const real_t tmp_kernel_op_114 = radRayVertex + tmp_kernel_op_39*(-tmp_kernel_op_28*(tmp_kernel_op_106 + tmp_kernel_op_44) + tmp_kernel_op_38*(tmp_kernel_op_107 + tmp_kernel_op_45));
                const real_t tmp_kernel_op_115 = tmp_kernel_op_108*tmp_kernel_op_113*tmp_kernel_op_114*1.0 - tmp_kernel_op_112*tmp_kernel_op_28;
                const real_t tmp_kernel_op_116 = tmp_kernel_op_107*tmp_kernel_op_111;
                const real_t tmp_kernel_op_117 = tmp_kernel_op_113*tmp_kernel_op_114*1.0;
                const real_t tmp_kernel_op_118 = -tmp_kernel_op_106*tmp_kernel_op_107*tmp_kernel_op_117 + tmp_kernel_op_112*tmp_kernel_op_38;
                const real_t tmp_kernel_op_119 = 1.0 / (tmp_kernel_op_115*(tmp_kernel_op_109*tmp_kernel_op_117 + tmp_kernel_op_116*tmp_kernel_op_38) - tmp_kernel_op_118*(-tmp_kernel_op_106*tmp_kernel_op_107*tmp_kernel_op_113*tmp_kernel_op_114 - tmp_kernel_op_116*tmp_kernel_op_28));
                const real_t tmp_kernel_op_120 = tmp_kernel_op_115*tmp_kernel_op_119;
                const real_t tmp_kernel_op_121 = -tmp_kernel_op_118*tmp_kernel_op_119;
                const real_t tmp_kernel_op_122 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_120 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_121;
                const real_t tmp_kernel_op_124 = tmp_kernel_op_122*(tmp_kernel_op_123 - 1.0);
                const real_t tmp_kernel_op_125 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_52 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_53;
                const real_t tmp_kernel_op_127 = tmp_kernel_op_125*(tmp_kernel_op_126 - 1.0);
                const real_t tmp_kernel_op_128 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_86 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_87;
                const real_t tmp_kernel_op_130 = tmp_kernel_op_128*(tmp_kernel_op_129 - 1.0);
                const real_t tmp_kernel_op_131 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_120 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_121;
                const real_t tmp_kernel_op_133 = tmp_kernel_op_131*(tmp_kernel_op_132 - 1.0);
                const real_t tmp_kernel_op_134 = tmp_kernel_op_125*tmp_kernel_op_55;
                const real_t tmp_kernel_op_135 = tmp_kernel_op_126*tmp_kernel_op_54;
                const real_t tmp_kernel_op_136 = -tmp_kernel_op_134 - tmp_kernel_op_135;
                const real_t tmp_kernel_op_137 = tmp_kernel_op_128*tmp_kernel_op_89;
                const real_t tmp_kernel_op_138 = tmp_kernel_op_129*tmp_kernel_op_88;
                const real_t tmp_kernel_op_139 = -tmp_kernel_op_137 - tmp_kernel_op_138;
                const real_t tmp_kernel_op_140 = tmp_kernel_op_123*tmp_kernel_op_131;
                const real_t tmp_kernel_op_141 = tmp_kernel_op_122*tmp_kernel_op_132;
                const real_t tmp_kernel_op_142 = -tmp_kernel_op_140 - tmp_kernel_op_141;
                const real_t tmp_kernel_op_143 = -tmp_kernel_op_125*(-tmp_kernel_op_55 - 1.333333333333333) + tmp_kernel_op_135;
                const real_t tmp_kernel_op_144 = -tmp_kernel_op_128*(-tmp_kernel_op_89 + 2.666666666666667) + tmp_kernel_op_138;
                const real_t tmp_kernel_op_145 = -tmp_kernel_op_131*(-tmp_kernel_op_123 + 2.666666666666667) + tmp_kernel_op_141;
                const real_t tmp_kernel_op_146 = tmp_kernel_op_134 - tmp_kernel_op_54*(-tmp_kernel_op_126 + 2.666666666666667);
                const real_t tmp_kernel_op_147 = tmp_kernel_op_137 - tmp_kernel_op_88*(-tmp_kernel_op_129 - 1.333333333333333);
                const real_t tmp_kernel_op_148 = -tmp_kernel_op_122*(-tmp_kernel_op_132 + 2.666666666666667) + tmp_kernel_op_140;
                const real_t tmp_kernel_op_150 = -tmp_kernel_op_125*tmp_kernel_op_149 - tmp_kernel_op_149*tmp_kernel_op_54;
                const real_t tmp_kernel_op_152 = -tmp_kernel_op_128*tmp_kernel_op_151 - tmp_kernel_op_151*tmp_kernel_op_88;
                const real_t tmp_kernel_op_154 = -tmp_kernel_op_122*tmp_kernel_op_153 - tmp_kernel_op_131*tmp_kernel_op_153;
                const real_t tmp_kernel_op_155 = tmp_kernel_op_26*0.16666666666666666;
                const real_t tmp_kernel_op_156 = tmp_kernel_op_70*0.66666666666666663;
                const real_t tmp_kernel_op_157 = tmp_kernel_op_104*0.16666666666666666;
                const real_t tmp_kernel_op_158 = tmp_kernel_op_26*0.66666666666666663;
                const real_t tmp_kernel_op_159 = tmp_kernel_op_70*0.16666666666666666;
                const real_t tmp_kernel_op_160 = tmp_kernel_op_104*0.16666666666666666;
                const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_105*tmp_kernel_op_154 + tmp_kernel_op_150*tmp_kernel_op_27 + tmp_kernel_op_152*tmp_kernel_op_71) + src_dof_1*(-tmp_kernel_op_105*tmp_kernel_op_124 - tmp_kernel_op_27*tmp_kernel_op_56 - tmp_kernel_op_71*tmp_kernel_op_90) + src_dof_2*(-tmp_kernel_op_105*tmp_kernel_op_133 - tmp_kernel_op_127*tmp_kernel_op_27 - tmp_kernel_op_130*tmp_kernel_op_71) + src_dof_3*(tmp_kernel_op_105*tmp_kernel_op_142 + tmp_kernel_op_136*tmp_kernel_op_27 + tmp_kernel_op_139*tmp_kernel_op_71) + src_dof_4*(tmp_kernel_op_105*tmp_kernel_op_145 + tmp_kernel_op_143*tmp_kernel_op_27 + tmp_kernel_op_144*tmp_kernel_op_71) + src_dof_5*(tmp_kernel_op_105*tmp_kernel_op_148 + tmp_kernel_op_146*tmp_kernel_op_27 + tmp_kernel_op_147*tmp_kernel_op_71);
                const real_t elMatVec_1 = src_dof_0*(tmp_kernel_op_150*tmp_kernel_op_155 + tmp_kernel_op_152*tmp_kernel_op_156 + tmp_kernel_op_154*tmp_kernel_op_157) + src_dof_1*(-tmp_kernel_op_124*tmp_kernel_op_157 - tmp_kernel_op_155*tmp_kernel_op_56 - tmp_kernel_op_156*tmp_kernel_op_90) + src_dof_2*(-tmp_kernel_op_127*tmp_kernel_op_155 - tmp_kernel_op_130*tmp_kernel_op_156 - tmp_kernel_op_133*tmp_kernel_op_157) + src_dof_3*(tmp_kernel_op_136*tmp_kernel_op_155 + tmp_kernel_op_139*tmp_kernel_op_156 + tmp_kernel_op_142*tmp_kernel_op_157) + src_dof_4*(tmp_kernel_op_143*tmp_kernel_op_155 + tmp_kernel_op_144*tmp_kernel_op_156 + tmp_kernel_op_145*tmp_kernel_op_157) + src_dof_5*(tmp_kernel_op_146*tmp_kernel_op_155 + tmp_kernel_op_147*tmp_kernel_op_156 + tmp_kernel_op_148*tmp_kernel_op_157);
                const real_t elMatVec_2 = src_dof_0*(tmp_kernel_op_150*tmp_kernel_op_158 + tmp_kernel_op_152*tmp_kernel_op_159 + tmp_kernel_op_154*tmp_kernel_op_160) + src_dof_1*(-tmp_kernel_op_124*tmp_kernel_op_160 - tmp_kernel_op_158*tmp_kernel_op_56 - tmp_kernel_op_159*tmp_kernel_op_90) + src_dof_2*(-tmp_kernel_op_127*tmp_kernel_op_158 - tmp_kernel_op_130*tmp_kernel_op_159 - tmp_kernel_op_133*tmp_kernel_op_160) + src_dof_3*(tmp_kernel_op_136*tmp_kernel_op_158 + tmp_kernel_op_139*tmp_kernel_op_159 + tmp_kernel_op_142*tmp_kernel_op_160) + src_dof_4*(tmp_kernel_op_143*tmp_kernel_op_158 + tmp_kernel_op_144*tmp_kernel_op_159 + tmp_kernel_op_145*tmp_kernel_op_160) + src_dof_5*(tmp_kernel_op_146*tmp_kernel_op_158 + tmp_kernel_op_147*tmp_kernel_op_159 + tmp_kernel_op_148*tmp_kernel_op_160);
                _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
