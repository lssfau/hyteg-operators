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

































#include "../P2VectorToP1ElementwiseFrozenVelocityP1DensityParametricP2Map.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorToP1ElementwiseFrozenVelocityP1DensityParametricP2Map::applyScaled_P2VectorToP1ElementwiseFrozenVelocityP1DensityParametricP2Map_macro_2D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, real_t * RESTRICT  _data_rho, real_t * RESTRICT  _data_src_edge_0, real_t * RESTRICT  _data_src_edge_1, real_t * RESTRICT  _data_src_vertex_0, real_t * RESTRICT  _data_src_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling ) const
{
    {
       const real_t _data_q_w [] = {-0.28125, 0.26041666666666669, 0.26041666666666669, 0.26041666666666669};
   
       const real_t _data_q_p_0 [] = {0.33333333333333331, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001};
   
       const real_t _data_q_p_1 [] = {0.33333333333333331, 0.59999999999999998, 0.20000000000000001, 0.20000000000000001};
   
       const real_t tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
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
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_4 = _mm256_loadu_pd(& _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_5 = _mm256_loadu_pd(& _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_6 = _mm256_loadu_pd(& _data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_7 = _mm256_loadu_pd(& _data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_8 = _mm256_loadu_pd(& _data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_9 = _mm256_loadu_pd(& _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_10 = _mm256_loadu_pd(& _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_11 = _mm256_loadu_pd(& _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d micromesh_dof_0 = _mm256_loadu_pd(& _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d micromesh_dof_1 = _mm256_loadu_pd(& _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d micromesh_dof_10 = _mm256_loadu_pd(& _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d micromesh_dof_11 = _mm256_loadu_pd(& _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d micromesh_dof_2 = _mm256_loadu_pd(& _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d micromesh_dof_3 = _mm256_loadu_pd(& _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d micromesh_dof_4 = _mm256_loadu_pd(& _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d micromesh_dof_5 = _mm256_loadu_pd(& _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d micromesh_dof_6 = _mm256_loadu_pd(& _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d micromesh_dof_7 = _mm256_loadu_pd(& _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d micromesh_dof_8 = _mm256_loadu_pd(& _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d micromesh_dof_9 = _mm256_loadu_pd(& _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d rho_dof_0 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d rho_dof_1 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d rho_dof_2 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_6 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_7 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_8 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_9 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_10 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_11 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_6 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_7 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_8 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_9 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_10 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_11 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_6 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_7 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_8 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_9 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_10 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_11 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_qloop_0 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_1 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_2 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_3 = _mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_4 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_4,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_1),tmp_qloop_3),tmp_qloop_5);
                   const __m256d tmp_qloop_7 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_7);
                   const __m256d tmp_qloop_9 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_10 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_qloop_0),tmp_qloop_7);
                   const __m256d tmp_qloop_11 = _mm256_mul_pd(micromesh_dof_6,tmp_qloop_10);
                   const __m256d tmp_qloop_12 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_10,tmp_qloop_9),_mm256_mul_pd(micromesh_dof_8,tmp_qloop_8)),_mm256_mul_pd(micromesh_dof_9,tmp_qloop_0)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_11,tmp_qloop_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_11);
                   const __m256d tmp_qloop_13 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_0);
                   const __m256d tmp_qloop_14 = _mm256_mul_pd(micromesh_dof_0,tmp_qloop_10);
                   const __m256d tmp_qloop_15 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_16 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_1,tmp_qloop_13),_mm256_mul_pd(micromesh_dof_3,tmp_qloop_7)),_mm256_mul_pd(micromesh_dof_5,tmp_qloop_15)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_4,tmp_qloop_7),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_14);
                   const __m256d tmp_qloop_17 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_2,tmp_qloop_8),_mm256_mul_pd(micromesh_dof_3,tmp_qloop_0)),_mm256_mul_pd(micromesh_dof_4,tmp_qloop_9)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_5,tmp_qloop_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_14);
                   const __m256d tmp_qloop_18 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_11,tmp_qloop_15),_mm256_mul_pd(micromesh_dof_7,tmp_qloop_13)),_mm256_mul_pd(micromesh_dof_9,tmp_qloop_7)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_10,tmp_qloop_7),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_11);
                   const __m256d tmp_qloop_19 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_12,tmp_qloop_16),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_17,tmp_qloop_18),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_20 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_19);
                   const __m256d tmp_qloop_21 = _mm256_mul_pd(tmp_qloop_20,_mm256_add_pd(_mm256_mul_pd(rho_dof_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),rho_dof_1));
                   const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_20,_mm256_add_pd(_mm256_mul_pd(rho_dof_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),rho_dof_2));
                   const __m256d tmp_qloop_23 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_12,tmp_qloop_21),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_25 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(rho_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(rho_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(rho_dof_0,tmp_qloop_24))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_19))));
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_24,tmp_qloop_25);
                   const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_26);
                   const __m256d tmp_qloop_28 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_3);
                   const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_5);
                   const __m256d tmp_qloop_30 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_4,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_7);
                   const __m256d tmp_qloop_31 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_0);
                   const __m256d tmp_qloop_32 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_22),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_17,tmp_qloop_21),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_26,tmp_qloop_32);
                   const __m256d tmp_qloop_34 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_34);
                   const __m256d tmp_qloop_36 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_25);
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_7);
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_34);
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_25,tmp_qloop_32);
                   const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_41 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_40);
                   const __m256d tmp_qloop_42 = _mm256_mul_pd(tmp_qloop_0,tmp_qloop_4);
                   const __m256d tmp_qloop_43 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_40);
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_6);
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_28);
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_29);
                   const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_1,tmp_qloop_27);
                   const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_30);
                   const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_31);
                   const __m256d q_tmp_0_6 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_6);
                   const __m256d q_tmp_0_7 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_33);
                   const __m256d q_tmp_0_8 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_33);
                   const __m256d q_tmp_0_9 = _mm256_mul_pd(tmp_qloop_1,tmp_qloop_33);
                   const __m256d q_tmp_0_10 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_33);
                   const __m256d q_tmp_0_11 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_33);
                   const __m256d q_tmp_1_0 = _mm256_mul_pd(tmp_qloop_35,tmp_qloop_6);
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_35);
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_35);
                   const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_37);
                   const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_35);
                   const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_35);
                   const __m256d q_tmp_1_6 = _mm256_mul_pd(tmp_qloop_38,tmp_qloop_6);
                   const __m256d q_tmp_1_7 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_38);
                   const __m256d q_tmp_1_8 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_38);
                   const __m256d q_tmp_1_9 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_39);
                   const __m256d q_tmp_1_10 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_38);
                   const __m256d q_tmp_1_11 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_38);
                   const __m256d q_tmp_2_0 = _mm256_mul_pd(tmp_qloop_41,tmp_qloop_6);
                   const __m256d q_tmp_2_1 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_41);
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_41);
                   const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_42);
                   const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_41);
                   const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_41);
                   const __m256d q_tmp_2_6 = _mm256_mul_pd(tmp_qloop_43,tmp_qloop_6);
                   const __m256d q_tmp_2_7 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_43);
                   const __m256d q_tmp_2_8 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_43);
                   const __m256d q_tmp_2_9 = _mm256_mul_pd(tmp_qloop_39,tmp_qloop_42);
                   const __m256d q_tmp_2_10 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_43);
                   const __m256d q_tmp_2_11 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_43);
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,q_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,q_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,q_tmp_0_3);
                   q_acc_0_4 = _mm256_add_pd(q_acc_0_4,q_tmp_0_4);
                   q_acc_0_5 = _mm256_add_pd(q_acc_0_5,q_tmp_0_5);
                   q_acc_0_6 = _mm256_add_pd(q_acc_0_6,q_tmp_0_6);
                   q_acc_0_7 = _mm256_add_pd(q_acc_0_7,q_tmp_0_7);
                   q_acc_0_8 = _mm256_add_pd(q_acc_0_8,q_tmp_0_8);
                   q_acc_0_9 = _mm256_add_pd(q_acc_0_9,q_tmp_0_9);
                   q_acc_0_10 = _mm256_add_pd(q_acc_0_10,q_tmp_0_10);
                   q_acc_0_11 = _mm256_add_pd(q_acc_0_11,q_tmp_0_11);
                   q_acc_1_0 = _mm256_add_pd(q_acc_1_0,q_tmp_1_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,q_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,q_tmp_1_3);
                   q_acc_1_4 = _mm256_add_pd(q_acc_1_4,q_tmp_1_4);
                   q_acc_1_5 = _mm256_add_pd(q_acc_1_5,q_tmp_1_5);
                   q_acc_1_6 = _mm256_add_pd(q_acc_1_6,q_tmp_1_6);
                   q_acc_1_7 = _mm256_add_pd(q_acc_1_7,q_tmp_1_7);
                   q_acc_1_8 = _mm256_add_pd(q_acc_1_8,q_tmp_1_8);
                   q_acc_1_9 = _mm256_add_pd(q_acc_1_9,q_tmp_1_9);
                   q_acc_1_10 = _mm256_add_pd(q_acc_1_10,q_tmp_1_10);
                   q_acc_1_11 = _mm256_add_pd(q_acc_1_11,q_tmp_1_11);
                   q_acc_2_0 = _mm256_add_pd(q_acc_2_0,q_tmp_2_0);
                   q_acc_2_1 = _mm256_add_pd(q_acc_2_1,q_tmp_2_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,q_tmp_2_3);
                   q_acc_2_4 = _mm256_add_pd(q_acc_2_4,q_tmp_2_4);
                   q_acc_2_5 = _mm256_add_pd(q_acc_2_5,q_tmp_2_5);
                   q_acc_2_6 = _mm256_add_pd(q_acc_2_6,q_tmp_2_6);
                   q_acc_2_7 = _mm256_add_pd(q_acc_2_7,q_tmp_2_7);
                   q_acc_2_8 = _mm256_add_pd(q_acc_2_8,q_tmp_2_8);
                   q_acc_2_9 = _mm256_add_pd(q_acc_2_9,q_tmp_2_9);
                   q_acc_2_10 = _mm256_add_pd(q_acc_2_10,q_tmp_2_10);
                   q_acc_2_11 = _mm256_add_pd(q_acc_2_11,q_tmp_2_11);
                }
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_10,src_dof_10)),_mm256_mul_pd(q_acc_0_11,src_dof_11)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3)),_mm256_mul_pd(q_acc_0_4,src_dof_4)),_mm256_mul_pd(q_acc_0_5,src_dof_5)),_mm256_mul_pd(q_acc_0_6,src_dof_6)),_mm256_mul_pd(q_acc_0_7,src_dof_7)),_mm256_mul_pd(q_acc_0_8,src_dof_8)),_mm256_mul_pd(q_acc_0_9,src_dof_9));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_10,src_dof_10)),_mm256_mul_pd(q_acc_1_11,src_dof_11)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3)),_mm256_mul_pd(q_acc_1_4,src_dof_4)),_mm256_mul_pd(q_acc_1_5,src_dof_5)),_mm256_mul_pd(q_acc_1_6,src_dof_6)),_mm256_mul_pd(q_acc_1_7,src_dof_7)),_mm256_mul_pd(q_acc_1_8,src_dof_8)),_mm256_mul_pd(q_acc_1_9,src_dof_9));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_10,src_dof_10)),_mm256_mul_pd(q_acc_2_11,src_dof_11)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3)),_mm256_mul_pd(q_acc_2_4,src_dof_4)),_mm256_mul_pd(q_acc_2_5,src_dof_5)),_mm256_mul_pd(q_acc_2_6,src_dof_6)),_mm256_mul_pd(q_acc_2_7,src_dof_7)),_mm256_mul_pd(q_acc_2_8,src_dof_8)),_mm256_mul_pd(q_acc_2_9,src_dof_9));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_0,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_1,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_2,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
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
                const real_t micromesh_dof_0 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t micromesh_dof_1 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t micromesh_dof_10 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t micromesh_dof_11 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t micromesh_dof_2 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t micromesh_dof_3 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t micromesh_dof_4 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t micromesh_dof_5 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t micromesh_dof_6 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t micromesh_dof_7 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t micromesh_dof_8 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t micromesh_dof_9 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_0_4 = 0.0;
                real_t q_acc_0_5 = 0.0;
                real_t q_acc_0_6 = 0.0;
                real_t q_acc_0_7 = 0.0;
                real_t q_acc_0_8 = 0.0;
                real_t q_acc_0_9 = 0.0;
                real_t q_acc_0_10 = 0.0;
                real_t q_acc_0_11 = 0.0;
                real_t q_acc_1_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_1_4 = 0.0;
                real_t q_acc_1_5 = 0.0;
                real_t q_acc_1_6 = 0.0;
                real_t q_acc_1_7 = 0.0;
                real_t q_acc_1_8 = 0.0;
                real_t q_acc_1_9 = 0.0;
                real_t q_acc_1_10 = 0.0;
                real_t q_acc_1_11 = 0.0;
                real_t q_acc_2_0 = 0.0;
                real_t q_acc_2_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_2_4 = 0.0;
                real_t q_acc_2_5 = 0.0;
                real_t q_acc_2_6 = 0.0;
                real_t q_acc_2_7 = 0.0;
                real_t q_acc_2_8 = 0.0;
                real_t q_acc_2_9 = 0.0;
                real_t q_acc_2_10 = 0.0;
                real_t q_acc_2_11 = 0.0;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                   const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                   const real_t tmp_qloop_2 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_qloop_3 = tmp_qloop_2*2.0;
                   const real_t tmp_qloop_4 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                   const real_t tmp_qloop_6 = tmp_qloop_1 + tmp_qloop_3 + tmp_qloop_5 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                   const real_t tmp_qloop_7 = 4.0*_data_q_p_1[q];
                   const real_t tmp_qloop_8 = tmp_qloop_7 - 1.0;
                   const real_t tmp_qloop_9 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                   const real_t tmp_qloop_10 = tmp_qloop_0 + tmp_qloop_7 - 3.0;
                   const real_t tmp_qloop_11 = micromesh_dof_6*tmp_qloop_10;
                   const real_t tmp_qloop_12 = micromesh_dof_10*tmp_qloop_9 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_8 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_11;
                   const real_t tmp_qloop_13 = tmp_qloop_0 - 1.0;
                   const real_t tmp_qloop_14 = micromesh_dof_0*tmp_qloop_10;
                   const real_t tmp_qloop_15 = -tmp_qloop_7 - 8.0*_data_q_p_0[q] + 4.0;
                   const real_t tmp_qloop_16 = micromesh_dof_1*tmp_qloop_13 + micromesh_dof_3*tmp_qloop_7 - micromesh_dof_4*tmp_qloop_7 + micromesh_dof_5*tmp_qloop_15 + tmp_qloop_14;
                   const real_t tmp_qloop_17 = micromesh_dof_2*tmp_qloop_8 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_9 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_14;
                   const real_t tmp_qloop_18 = -micromesh_dof_10*tmp_qloop_7 + micromesh_dof_11*tmp_qloop_15 + micromesh_dof_7*tmp_qloop_13 + micromesh_dof_9*tmp_qloop_7 + tmp_qloop_11;
                   const real_t tmp_qloop_19 = tmp_qloop_12*tmp_qloop_16 - tmp_qloop_17*tmp_qloop_18;
                   const real_t tmp_qloop_20 = 1.0 / (tmp_qloop_19);
                   const real_t tmp_qloop_21 = tmp_qloop_20*(-rho_dof_0 + rho_dof_1);
                   const real_t tmp_qloop_22 = tmp_qloop_20*(-rho_dof_0 + rho_dof_2);
                   const real_t tmp_qloop_23 = tmp_qloop_12*tmp_qloop_21 - tmp_qloop_18*tmp_qloop_22;
                   const real_t tmp_qloop_24 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                   const real_t tmp_qloop_25 = 1.0 / (rho_dof_0*tmp_qloop_24 + rho_dof_1*_data_q_p_0[q] + rho_dof_2*_data_q_p_1[q])*abs(tmp_qloop_19)*_data_q_w[q];
                   const real_t tmp_qloop_26 = tmp_qloop_24*tmp_qloop_25;
                   const real_t tmp_qloop_27 = tmp_qloop_23*tmp_qloop_26;
                   const real_t tmp_qloop_28 = tmp_qloop_3 - _data_q_p_0[q];
                   const real_t tmp_qloop_29 = tmp_qloop_5 - _data_q_p_1[q];
                   const real_t tmp_qloop_30 = -tmp_qloop_1 + tmp_qloop_4*-4.0 + tmp_qloop_7;
                   const real_t tmp_qloop_31 = tmp_qloop_0 - tmp_qloop_1 + tmp_qloop_2*-4.0;
                   const real_t tmp_qloop_32 = tmp_qloop_16*tmp_qloop_22 - tmp_qloop_17*tmp_qloop_21;
                   const real_t tmp_qloop_33 = tmp_qloop_26*tmp_qloop_32;
                   const real_t tmp_qloop_34 = tmp_qloop_25*_data_q_p_0[q];
                   const real_t tmp_qloop_35 = tmp_qloop_23*tmp_qloop_34;
                   const real_t tmp_qloop_36 = tmp_qloop_23*tmp_qloop_25;
                   const real_t tmp_qloop_37 = tmp_qloop_2*tmp_qloop_7;
                   const real_t tmp_qloop_38 = tmp_qloop_32*tmp_qloop_34;
                   const real_t tmp_qloop_39 = tmp_qloop_25*tmp_qloop_32;
                   const real_t tmp_qloop_40 = tmp_qloop_25*_data_q_p_1[q];
                   const real_t tmp_qloop_41 = tmp_qloop_23*tmp_qloop_40;
                   const real_t tmp_qloop_42 = tmp_qloop_0*tmp_qloop_4;
                   const real_t tmp_qloop_43 = tmp_qloop_32*tmp_qloop_40;
                   const real_t q_tmp_0_0 = tmp_qloop_27*tmp_qloop_6;
                   const real_t q_tmp_0_1 = tmp_qloop_27*tmp_qloop_28;
                   const real_t q_tmp_0_2 = tmp_qloop_27*tmp_qloop_29;
                   const real_t q_tmp_0_3 = tmp_qloop_1*tmp_qloop_27;
                   const real_t q_tmp_0_4 = tmp_qloop_27*tmp_qloop_30;
                   const real_t q_tmp_0_5 = tmp_qloop_27*tmp_qloop_31;
                   const real_t q_tmp_0_6 = tmp_qloop_33*tmp_qloop_6;
                   const real_t q_tmp_0_7 = tmp_qloop_28*tmp_qloop_33;
                   const real_t q_tmp_0_8 = tmp_qloop_29*tmp_qloop_33;
                   const real_t q_tmp_0_9 = tmp_qloop_1*tmp_qloop_33;
                   const real_t q_tmp_0_10 = tmp_qloop_30*tmp_qloop_33;
                   const real_t q_tmp_0_11 = tmp_qloop_31*tmp_qloop_33;
                   const real_t q_tmp_1_0 = tmp_qloop_35*tmp_qloop_6;
                   const real_t q_tmp_1_1 = tmp_qloop_28*tmp_qloop_35;
                   const real_t q_tmp_1_2 = tmp_qloop_29*tmp_qloop_35;
                   const real_t q_tmp_1_3 = tmp_qloop_36*tmp_qloop_37;
                   const real_t q_tmp_1_4 = tmp_qloop_30*tmp_qloop_35;
                   const real_t q_tmp_1_5 = tmp_qloop_31*tmp_qloop_35;
                   const real_t q_tmp_1_6 = tmp_qloop_38*tmp_qloop_6;
                   const real_t q_tmp_1_7 = tmp_qloop_28*tmp_qloop_38;
                   const real_t q_tmp_1_8 = tmp_qloop_29*tmp_qloop_38;
                   const real_t q_tmp_1_9 = tmp_qloop_37*tmp_qloop_39;
                   const real_t q_tmp_1_10 = tmp_qloop_30*tmp_qloop_38;
                   const real_t q_tmp_1_11 = tmp_qloop_31*tmp_qloop_38;
                   const real_t q_tmp_2_0 = tmp_qloop_41*tmp_qloop_6;
                   const real_t q_tmp_2_1 = tmp_qloop_28*tmp_qloop_41;
                   const real_t q_tmp_2_2 = tmp_qloop_29*tmp_qloop_41;
                   const real_t q_tmp_2_3 = tmp_qloop_36*tmp_qloop_42;
                   const real_t q_tmp_2_4 = tmp_qloop_30*tmp_qloop_41;
                   const real_t q_tmp_2_5 = tmp_qloop_31*tmp_qloop_41;
                   const real_t q_tmp_2_6 = tmp_qloop_43*tmp_qloop_6;
                   const real_t q_tmp_2_7 = tmp_qloop_28*tmp_qloop_43;
                   const real_t q_tmp_2_8 = tmp_qloop_29*tmp_qloop_43;
                   const real_t q_tmp_2_9 = tmp_qloop_39*tmp_qloop_42;
                   const real_t q_tmp_2_10 = tmp_qloop_30*tmp_qloop_43;
                   const real_t q_tmp_2_11 = tmp_qloop_31*tmp_qloop_43;
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                   q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                   q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                   q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                   q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                   q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                   q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                   q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                   q_acc_0_10 = q_acc_0_10 + q_tmp_0_10;
                   q_acc_0_11 = q_acc_0_11 + q_tmp_0_11;
                   q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                   q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                   q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                   q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                   q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                   q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                   q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                   q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                   q_acc_1_10 = q_acc_1_10 + q_tmp_1_10;
                   q_acc_1_11 = q_acc_1_11 + q_tmp_1_11;
                   q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                   q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                   q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                   q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                   q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                   q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                   q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                   q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                   q_acc_2_10 = q_acc_2_10 + q_tmp_2_10;
                   q_acc_2_11 = q_acc_2_11 + q_tmp_2_11;
                }
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_10*src_dof_10 + q_acc_0_11*src_dof_11 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5 + q_acc_0_6*src_dof_6 + q_acc_0_7*src_dof_7 + q_acc_0_8*src_dof_8 + q_acc_0_9*src_dof_9;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_10*src_dof_10 + q_acc_1_11*src_dof_11 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5 + q_acc_1_6*src_dof_6 + q_acc_1_7*src_dof_7 + q_acc_1_8*src_dof_8 + q_acc_1_9*src_dof_9;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_10*src_dof_10 + q_acc_2_11*src_dof_11 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5 + q_acc_2_6*src_dof_6 + q_acc_2_7*src_dof_7 + q_acc_2_8*src_dof_8 + q_acc_2_9*src_dof_9;
                _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0*operatorScaling + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1*operatorScaling + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2*operatorScaling + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_src_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_4 = _mm256_loadu_pd(& _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d src_dof_5 = _mm256_loadu_pd(& _data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_6 = _mm256_loadu_pd(& _data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_7 = _mm256_loadu_pd(& _data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_8 = _mm256_loadu_pd(& _data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d src_dof_9 = _mm256_loadu_pd(& _data_src_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_10 = _mm256_loadu_pd(& _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d src_dof_11 = _mm256_loadu_pd(& _data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d micromesh_dof_0 = _mm256_loadu_pd(& _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d micromesh_dof_1 = _mm256_loadu_pd(& _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d micromesh_dof_10 = _mm256_loadu_pd(& _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d micromesh_dof_11 = _mm256_loadu_pd(& _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d micromesh_dof_2 = _mm256_loadu_pd(& _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d micromesh_dof_3 = _mm256_loadu_pd(& _data_micromesh_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d micromesh_dof_4 = _mm256_loadu_pd(& _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d micromesh_dof_5 = _mm256_loadu_pd(& _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d micromesh_dof_6 = _mm256_loadu_pd(& _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d micromesh_dof_7 = _mm256_loadu_pd(& _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d micromesh_dof_8 = _mm256_loadu_pd(& _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d micromesh_dof_9 = _mm256_loadu_pd(& _data_micromesh_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d rho_dof_0 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d rho_dof_1 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d rho_dof_2 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_6 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_7 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_8 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_9 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_10 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_11 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_6 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_7 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_8 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_9 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_10 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_11 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_6 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_7 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_8 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_9 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_10 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_11 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_qloop_0 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_1 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_2 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_3 = _mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_4 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_4,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_1),tmp_qloop_3),tmp_qloop_5);
                   const __m256d tmp_qloop_7 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_7);
                   const __m256d tmp_qloop_9 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_10 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_qloop_0),tmp_qloop_7);
                   const __m256d tmp_qloop_11 = _mm256_mul_pd(micromesh_dof_6,tmp_qloop_10);
                   const __m256d tmp_qloop_12 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_10,tmp_qloop_9),_mm256_mul_pd(micromesh_dof_8,tmp_qloop_8)),_mm256_mul_pd(micromesh_dof_9,tmp_qloop_0)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_11,tmp_qloop_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_11);
                   const __m256d tmp_qloop_13 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_0);
                   const __m256d tmp_qloop_14 = _mm256_mul_pd(micromesh_dof_0,tmp_qloop_10);
                   const __m256d tmp_qloop_15 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_16 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_1,tmp_qloop_13),_mm256_mul_pd(micromesh_dof_3,tmp_qloop_7)),_mm256_mul_pd(micromesh_dof_5,tmp_qloop_15)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_4,tmp_qloop_7),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_14);
                   const __m256d tmp_qloop_17 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_2,tmp_qloop_8),_mm256_mul_pd(micromesh_dof_3,tmp_qloop_0)),_mm256_mul_pd(micromesh_dof_4,tmp_qloop_9)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_5,tmp_qloop_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_14);
                   const __m256d tmp_qloop_18 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_11,tmp_qloop_15),_mm256_mul_pd(micromesh_dof_7,tmp_qloop_13)),_mm256_mul_pd(micromesh_dof_9,tmp_qloop_7)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_10,tmp_qloop_7),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_11);
                   const __m256d tmp_qloop_19 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_12,tmp_qloop_16),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_17,tmp_qloop_18),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_20 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_19);
                   const __m256d tmp_qloop_21 = _mm256_mul_pd(tmp_qloop_20,_mm256_add_pd(_mm256_mul_pd(rho_dof_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),rho_dof_1));
                   const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_20,_mm256_add_pd(_mm256_mul_pd(rho_dof_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),rho_dof_2));
                   const __m256d tmp_qloop_23 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_12,tmp_qloop_21),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_25 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(rho_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(rho_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(rho_dof_0,tmp_qloop_24))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_19))));
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_24,tmp_qloop_25);
                   const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_26);
                   const __m256d tmp_qloop_28 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_3);
                   const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_5);
                   const __m256d tmp_qloop_30 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_4,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_7);
                   const __m256d tmp_qloop_31 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_0);
                   const __m256d tmp_qloop_32 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_22),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_17,tmp_qloop_21),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_26,tmp_qloop_32);
                   const __m256d tmp_qloop_34 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_34);
                   const __m256d tmp_qloop_36 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_25);
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_7);
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_34);
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_25,tmp_qloop_32);
                   const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_41 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_40);
                   const __m256d tmp_qloop_42 = _mm256_mul_pd(tmp_qloop_0,tmp_qloop_4);
                   const __m256d tmp_qloop_43 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_40);
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_6);
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_28);
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_29);
                   const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_1,tmp_qloop_27);
                   const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_30);
                   const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_31);
                   const __m256d q_tmp_0_6 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_6);
                   const __m256d q_tmp_0_7 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_33);
                   const __m256d q_tmp_0_8 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_33);
                   const __m256d q_tmp_0_9 = _mm256_mul_pd(tmp_qloop_1,tmp_qloop_33);
                   const __m256d q_tmp_0_10 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_33);
                   const __m256d q_tmp_0_11 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_33);
                   const __m256d q_tmp_1_0 = _mm256_mul_pd(tmp_qloop_35,tmp_qloop_6);
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_35);
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_35);
                   const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_37);
                   const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_35);
                   const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_35);
                   const __m256d q_tmp_1_6 = _mm256_mul_pd(tmp_qloop_38,tmp_qloop_6);
                   const __m256d q_tmp_1_7 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_38);
                   const __m256d q_tmp_1_8 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_38);
                   const __m256d q_tmp_1_9 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_39);
                   const __m256d q_tmp_1_10 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_38);
                   const __m256d q_tmp_1_11 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_38);
                   const __m256d q_tmp_2_0 = _mm256_mul_pd(tmp_qloop_41,tmp_qloop_6);
                   const __m256d q_tmp_2_1 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_41);
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_41);
                   const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_42);
                   const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_41);
                   const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_41);
                   const __m256d q_tmp_2_6 = _mm256_mul_pd(tmp_qloop_43,tmp_qloop_6);
                   const __m256d q_tmp_2_7 = _mm256_mul_pd(tmp_qloop_28,tmp_qloop_43);
                   const __m256d q_tmp_2_8 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_43);
                   const __m256d q_tmp_2_9 = _mm256_mul_pd(tmp_qloop_39,tmp_qloop_42);
                   const __m256d q_tmp_2_10 = _mm256_mul_pd(tmp_qloop_30,tmp_qloop_43);
                   const __m256d q_tmp_2_11 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_43);
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,q_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,q_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,q_tmp_0_3);
                   q_acc_0_4 = _mm256_add_pd(q_acc_0_4,q_tmp_0_4);
                   q_acc_0_5 = _mm256_add_pd(q_acc_0_5,q_tmp_0_5);
                   q_acc_0_6 = _mm256_add_pd(q_acc_0_6,q_tmp_0_6);
                   q_acc_0_7 = _mm256_add_pd(q_acc_0_7,q_tmp_0_7);
                   q_acc_0_8 = _mm256_add_pd(q_acc_0_8,q_tmp_0_8);
                   q_acc_0_9 = _mm256_add_pd(q_acc_0_9,q_tmp_0_9);
                   q_acc_0_10 = _mm256_add_pd(q_acc_0_10,q_tmp_0_10);
                   q_acc_0_11 = _mm256_add_pd(q_acc_0_11,q_tmp_0_11);
                   q_acc_1_0 = _mm256_add_pd(q_acc_1_0,q_tmp_1_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,q_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,q_tmp_1_3);
                   q_acc_1_4 = _mm256_add_pd(q_acc_1_4,q_tmp_1_4);
                   q_acc_1_5 = _mm256_add_pd(q_acc_1_5,q_tmp_1_5);
                   q_acc_1_6 = _mm256_add_pd(q_acc_1_6,q_tmp_1_6);
                   q_acc_1_7 = _mm256_add_pd(q_acc_1_7,q_tmp_1_7);
                   q_acc_1_8 = _mm256_add_pd(q_acc_1_8,q_tmp_1_8);
                   q_acc_1_9 = _mm256_add_pd(q_acc_1_9,q_tmp_1_9);
                   q_acc_1_10 = _mm256_add_pd(q_acc_1_10,q_tmp_1_10);
                   q_acc_1_11 = _mm256_add_pd(q_acc_1_11,q_tmp_1_11);
                   q_acc_2_0 = _mm256_add_pd(q_acc_2_0,q_tmp_2_0);
                   q_acc_2_1 = _mm256_add_pd(q_acc_2_1,q_tmp_2_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,q_tmp_2_3);
                   q_acc_2_4 = _mm256_add_pd(q_acc_2_4,q_tmp_2_4);
                   q_acc_2_5 = _mm256_add_pd(q_acc_2_5,q_tmp_2_5);
                   q_acc_2_6 = _mm256_add_pd(q_acc_2_6,q_tmp_2_6);
                   q_acc_2_7 = _mm256_add_pd(q_acc_2_7,q_tmp_2_7);
                   q_acc_2_8 = _mm256_add_pd(q_acc_2_8,q_tmp_2_8);
                   q_acc_2_9 = _mm256_add_pd(q_acc_2_9,q_tmp_2_9);
                   q_acc_2_10 = _mm256_add_pd(q_acc_2_10,q_tmp_2_10);
                   q_acc_2_11 = _mm256_add_pd(q_acc_2_11,q_tmp_2_11);
                }
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_10,src_dof_10)),_mm256_mul_pd(q_acc_0_11,src_dof_11)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3)),_mm256_mul_pd(q_acc_0_4,src_dof_4)),_mm256_mul_pd(q_acc_0_5,src_dof_5)),_mm256_mul_pd(q_acc_0_6,src_dof_6)),_mm256_mul_pd(q_acc_0_7,src_dof_7)),_mm256_mul_pd(q_acc_0_8,src_dof_8)),_mm256_mul_pd(q_acc_0_9,src_dof_9));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_10,src_dof_10)),_mm256_mul_pd(q_acc_1_11,src_dof_11)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3)),_mm256_mul_pd(q_acc_1_4,src_dof_4)),_mm256_mul_pd(q_acc_1_5,src_dof_5)),_mm256_mul_pd(q_acc_1_6,src_dof_6)),_mm256_mul_pd(q_acc_1_7,src_dof_7)),_mm256_mul_pd(q_acc_1_8,src_dof_8)),_mm256_mul_pd(q_acc_1_9,src_dof_9));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_10,src_dof_10)),_mm256_mul_pd(q_acc_2_11,src_dof_11)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3)),_mm256_mul_pd(q_acc_2_4,src_dof_4)),_mm256_mul_pd(q_acc_2_5,src_dof_5)),_mm256_mul_pd(q_acc_2_6,src_dof_6)),_mm256_mul_pd(q_acc_2_7,src_dof_7)),_mm256_mul_pd(q_acc_2_8,src_dof_8)),_mm256_mul_pd(q_acc_2_9,src_dof_9));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_0,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_1,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_2,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
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
                const real_t micromesh_dof_0 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t micromesh_dof_1 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t micromesh_dof_10 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t micromesh_dof_11 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t micromesh_dof_2 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t micromesh_dof_3 = _data_micromesh_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t micromesh_dof_4 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t micromesh_dof_5 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t micromesh_dof_6 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t micromesh_dof_7 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t micromesh_dof_8 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t micromesh_dof_9 = _data_micromesh_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t rho_dof_1 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_0_4 = 0.0;
                real_t q_acc_0_5 = 0.0;
                real_t q_acc_0_6 = 0.0;
                real_t q_acc_0_7 = 0.0;
                real_t q_acc_0_8 = 0.0;
                real_t q_acc_0_9 = 0.0;
                real_t q_acc_0_10 = 0.0;
                real_t q_acc_0_11 = 0.0;
                real_t q_acc_1_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_1_4 = 0.0;
                real_t q_acc_1_5 = 0.0;
                real_t q_acc_1_6 = 0.0;
                real_t q_acc_1_7 = 0.0;
                real_t q_acc_1_8 = 0.0;
                real_t q_acc_1_9 = 0.0;
                real_t q_acc_1_10 = 0.0;
                real_t q_acc_1_11 = 0.0;
                real_t q_acc_2_0 = 0.0;
                real_t q_acc_2_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_2_4 = 0.0;
                real_t q_acc_2_5 = 0.0;
                real_t q_acc_2_6 = 0.0;
                real_t q_acc_2_7 = 0.0;
                real_t q_acc_2_8 = 0.0;
                real_t q_acc_2_9 = 0.0;
                real_t q_acc_2_10 = 0.0;
                real_t q_acc_2_11 = 0.0;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                   const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                   const real_t tmp_qloop_2 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_qloop_3 = tmp_qloop_2*2.0;
                   const real_t tmp_qloop_4 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                   const real_t tmp_qloop_6 = tmp_qloop_1 + tmp_qloop_3 + tmp_qloop_5 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                   const real_t tmp_qloop_7 = 4.0*_data_q_p_1[q];
                   const real_t tmp_qloop_8 = tmp_qloop_7 - 1.0;
                   const real_t tmp_qloop_9 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                   const real_t tmp_qloop_10 = tmp_qloop_0 + tmp_qloop_7 - 3.0;
                   const real_t tmp_qloop_11 = micromesh_dof_6*tmp_qloop_10;
                   const real_t tmp_qloop_12 = micromesh_dof_10*tmp_qloop_9 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_8 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_11;
                   const real_t tmp_qloop_13 = tmp_qloop_0 - 1.0;
                   const real_t tmp_qloop_14 = micromesh_dof_0*tmp_qloop_10;
                   const real_t tmp_qloop_15 = -tmp_qloop_7 - 8.0*_data_q_p_0[q] + 4.0;
                   const real_t tmp_qloop_16 = micromesh_dof_1*tmp_qloop_13 + micromesh_dof_3*tmp_qloop_7 - micromesh_dof_4*tmp_qloop_7 + micromesh_dof_5*tmp_qloop_15 + tmp_qloop_14;
                   const real_t tmp_qloop_17 = micromesh_dof_2*tmp_qloop_8 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_9 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_14;
                   const real_t tmp_qloop_18 = -micromesh_dof_10*tmp_qloop_7 + micromesh_dof_11*tmp_qloop_15 + micromesh_dof_7*tmp_qloop_13 + micromesh_dof_9*tmp_qloop_7 + tmp_qloop_11;
                   const real_t tmp_qloop_19 = tmp_qloop_12*tmp_qloop_16 - tmp_qloop_17*tmp_qloop_18;
                   const real_t tmp_qloop_20 = 1.0 / (tmp_qloop_19);
                   const real_t tmp_qloop_21 = tmp_qloop_20*(-rho_dof_0 + rho_dof_1);
                   const real_t tmp_qloop_22 = tmp_qloop_20*(-rho_dof_0 + rho_dof_2);
                   const real_t tmp_qloop_23 = tmp_qloop_12*tmp_qloop_21 - tmp_qloop_18*tmp_qloop_22;
                   const real_t tmp_qloop_24 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                   const real_t tmp_qloop_25 = 1.0 / (rho_dof_0*tmp_qloop_24 + rho_dof_1*_data_q_p_0[q] + rho_dof_2*_data_q_p_1[q])*abs(tmp_qloop_19)*_data_q_w[q];
                   const real_t tmp_qloop_26 = tmp_qloop_24*tmp_qloop_25;
                   const real_t tmp_qloop_27 = tmp_qloop_23*tmp_qloop_26;
                   const real_t tmp_qloop_28 = tmp_qloop_3 - _data_q_p_0[q];
                   const real_t tmp_qloop_29 = tmp_qloop_5 - _data_q_p_1[q];
                   const real_t tmp_qloop_30 = -tmp_qloop_1 + tmp_qloop_4*-4.0 + tmp_qloop_7;
                   const real_t tmp_qloop_31 = tmp_qloop_0 - tmp_qloop_1 + tmp_qloop_2*-4.0;
                   const real_t tmp_qloop_32 = tmp_qloop_16*tmp_qloop_22 - tmp_qloop_17*tmp_qloop_21;
                   const real_t tmp_qloop_33 = tmp_qloop_26*tmp_qloop_32;
                   const real_t tmp_qloop_34 = tmp_qloop_25*_data_q_p_0[q];
                   const real_t tmp_qloop_35 = tmp_qloop_23*tmp_qloop_34;
                   const real_t tmp_qloop_36 = tmp_qloop_23*tmp_qloop_25;
                   const real_t tmp_qloop_37 = tmp_qloop_2*tmp_qloop_7;
                   const real_t tmp_qloop_38 = tmp_qloop_32*tmp_qloop_34;
                   const real_t tmp_qloop_39 = tmp_qloop_25*tmp_qloop_32;
                   const real_t tmp_qloop_40 = tmp_qloop_25*_data_q_p_1[q];
                   const real_t tmp_qloop_41 = tmp_qloop_23*tmp_qloop_40;
                   const real_t tmp_qloop_42 = tmp_qloop_0*tmp_qloop_4;
                   const real_t tmp_qloop_43 = tmp_qloop_32*tmp_qloop_40;
                   const real_t q_tmp_0_0 = tmp_qloop_27*tmp_qloop_6;
                   const real_t q_tmp_0_1 = tmp_qloop_27*tmp_qloop_28;
                   const real_t q_tmp_0_2 = tmp_qloop_27*tmp_qloop_29;
                   const real_t q_tmp_0_3 = tmp_qloop_1*tmp_qloop_27;
                   const real_t q_tmp_0_4 = tmp_qloop_27*tmp_qloop_30;
                   const real_t q_tmp_0_5 = tmp_qloop_27*tmp_qloop_31;
                   const real_t q_tmp_0_6 = tmp_qloop_33*tmp_qloop_6;
                   const real_t q_tmp_0_7 = tmp_qloop_28*tmp_qloop_33;
                   const real_t q_tmp_0_8 = tmp_qloop_29*tmp_qloop_33;
                   const real_t q_tmp_0_9 = tmp_qloop_1*tmp_qloop_33;
                   const real_t q_tmp_0_10 = tmp_qloop_30*tmp_qloop_33;
                   const real_t q_tmp_0_11 = tmp_qloop_31*tmp_qloop_33;
                   const real_t q_tmp_1_0 = tmp_qloop_35*tmp_qloop_6;
                   const real_t q_tmp_1_1 = tmp_qloop_28*tmp_qloop_35;
                   const real_t q_tmp_1_2 = tmp_qloop_29*tmp_qloop_35;
                   const real_t q_tmp_1_3 = tmp_qloop_36*tmp_qloop_37;
                   const real_t q_tmp_1_4 = tmp_qloop_30*tmp_qloop_35;
                   const real_t q_tmp_1_5 = tmp_qloop_31*tmp_qloop_35;
                   const real_t q_tmp_1_6 = tmp_qloop_38*tmp_qloop_6;
                   const real_t q_tmp_1_7 = tmp_qloop_28*tmp_qloop_38;
                   const real_t q_tmp_1_8 = tmp_qloop_29*tmp_qloop_38;
                   const real_t q_tmp_1_9 = tmp_qloop_37*tmp_qloop_39;
                   const real_t q_tmp_1_10 = tmp_qloop_30*tmp_qloop_38;
                   const real_t q_tmp_1_11 = tmp_qloop_31*tmp_qloop_38;
                   const real_t q_tmp_2_0 = tmp_qloop_41*tmp_qloop_6;
                   const real_t q_tmp_2_1 = tmp_qloop_28*tmp_qloop_41;
                   const real_t q_tmp_2_2 = tmp_qloop_29*tmp_qloop_41;
                   const real_t q_tmp_2_3 = tmp_qloop_36*tmp_qloop_42;
                   const real_t q_tmp_2_4 = tmp_qloop_30*tmp_qloop_41;
                   const real_t q_tmp_2_5 = tmp_qloop_31*tmp_qloop_41;
                   const real_t q_tmp_2_6 = tmp_qloop_43*tmp_qloop_6;
                   const real_t q_tmp_2_7 = tmp_qloop_28*tmp_qloop_43;
                   const real_t q_tmp_2_8 = tmp_qloop_29*tmp_qloop_43;
                   const real_t q_tmp_2_9 = tmp_qloop_39*tmp_qloop_42;
                   const real_t q_tmp_2_10 = tmp_qloop_30*tmp_qloop_43;
                   const real_t q_tmp_2_11 = tmp_qloop_31*tmp_qloop_43;
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                   q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                   q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                   q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                   q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                   q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                   q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                   q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                   q_acc_0_10 = q_acc_0_10 + q_tmp_0_10;
                   q_acc_0_11 = q_acc_0_11 + q_tmp_0_11;
                   q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                   q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                   q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                   q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                   q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                   q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                   q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                   q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                   q_acc_1_10 = q_acc_1_10 + q_tmp_1_10;
                   q_acc_1_11 = q_acc_1_11 + q_tmp_1_11;
                   q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                   q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                   q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                   q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                   q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                   q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                   q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                   q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                   q_acc_2_10 = q_acc_2_10 + q_tmp_2_10;
                   q_acc_2_11 = q_acc_2_11 + q_tmp_2_11;
                }
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_10*src_dof_10 + q_acc_0_11*src_dof_11 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5 + q_acc_0_6*src_dof_6 + q_acc_0_7*src_dof_7 + q_acc_0_8*src_dof_8 + q_acc_0_9*src_dof_9;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_10*src_dof_10 + q_acc_1_11*src_dof_11 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5 + q_acc_1_6*src_dof_6 + q_acc_1_7*src_dof_7 + q_acc_1_8*src_dof_8 + q_acc_1_9*src_dof_9;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_10*src_dof_10 + q_acc_2_11*src_dof_11 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5 + q_acc_2_6*src_dof_6 + q_acc_2_7*src_dof_7 + q_acc_2_8*src_dof_8 + q_acc_2_9*src_dof_9;
                _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0*operatorScaling + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1*operatorScaling + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2*operatorScaling + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
