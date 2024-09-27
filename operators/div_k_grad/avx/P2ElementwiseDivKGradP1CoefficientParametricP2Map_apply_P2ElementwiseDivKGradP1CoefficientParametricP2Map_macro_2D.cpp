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



































#include "../P2ElementwiseDivKGradP1CoefficientParametricP2Map.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDivKGradP1CoefficientParametricP2Map::apply_P2ElementwiseDivKGradP1CoefficientParametricP2Map_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_k, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
   
       const real_t _data_q_p_0 [] = {0.16666666666666666, 0.66666666666666663, 0.16666666666666666};
   
       const real_t _data_q_p_1 [] = {0.66666666666666663, 0.16666666666666666, 0.16666666666666666};
   
       const real_t tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_0_0_GRAY [] = {0.16666666666666674, 0.16666666666666666, 0.66666666666666663, -0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, 0.0, 0.16666666666666671, 0.66666666666666663, 0.16666666666666666, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.0, 0.66666666666666674, 0.16666666666666666, 0.16666666666666666, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448, 0.0};
      
          const real_t _data_phi_1_0_GRAY [] = {0.0, -0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, 0.0, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.0, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448};
      
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {0.33333333333333304, 1.0, -0.33333333333333337, 0.0, 2.6666666666666665, -2.6666666666666665, 4.4408920985006262e-16, 0.33333333333333315, 1.0, 1.6666666666666665, 0.0, 0.66666666666666663, -0.66666666666666663, -1.9999999999999996, -1.666666666666667, 1.0, -0.33333333333333337, 0.0, 0.66666666666666663, -0.66666666666666663, 2.0000000000000004};
      
          const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {0.33333333333333304, 0.0, 1.6666666666666665, 0.66666666666666663, -1.9999999999999996, -0.66666666666666663, 0.33333333333333315, 0.0, -0.33333333333333337, 2.6666666666666665, 4.4408920985006262e-16, -2.6666666666666665, -1.666666666666667, 0.0, -0.33333333333333337, 0.66666666666666663, 2.0000000000000004, -0.66666666666666663};
      
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
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
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
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const __m256d tmp_qloop_0 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_1 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_1);
                   const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_4 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_qloop_0),tmp_qloop_1);
                   const __m256d tmp_qloop_5 = _mm256_mul_pd(micromesh_dof_6,tmp_qloop_4);
                   const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_10,tmp_qloop_3),_mm256_mul_pd(micromesh_dof_8,tmp_qloop_2)),_mm256_mul_pd(micromesh_dof_9,tmp_qloop_0)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_11,tmp_qloop_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_5);
                   const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_0);
                   const __m256d tmp_qloop_8 = _mm256_mul_pd(micromesh_dof_0,tmp_qloop_4);
                   const __m256d tmp_qloop_9 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_10 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_1,tmp_qloop_7),_mm256_mul_pd(micromesh_dof_3,tmp_qloop_1)),_mm256_mul_pd(micromesh_dof_5,tmp_qloop_9)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_4,tmp_qloop_1),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_8);
                   const __m256d tmp_qloop_11 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_2,tmp_qloop_2),_mm256_mul_pd(micromesh_dof_3,tmp_qloop_0)),_mm256_mul_pd(micromesh_dof_4,tmp_qloop_3)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_5,tmp_qloop_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_8);
                   const __m256d tmp_qloop_12 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_11,tmp_qloop_9),_mm256_mul_pd(micromesh_dof_7,tmp_qloop_7)),_mm256_mul_pd(micromesh_dof_9,tmp_qloop_1)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_10,tmp_qloop_1),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_5);
                   const __m256d tmp_qloop_13 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_6),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,tmp_qloop_12),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_14 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_13);
                   const __m256d tmp_qloop_15 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q],_data_tabulated_and_untitled_0_0_GRAY[7*q],_data_tabulated_and_untitled_0_0_GRAY[7*q],_data_tabulated_and_untitled_0_0_GRAY[7*q]));
                   const __m256d tmp_qloop_16 = _mm256_mul_pd(tmp_qloop_12,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_17 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q]));
                   const __m256d tmp_qloop_18 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_6),_mm256_mul_pd(tmp_qloop_16,tmp_qloop_17));
                   const __m256d tmp_qloop_19 = _mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_20 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_17),_mm256_mul_pd(tmp_qloop_15,tmp_qloop_19));
                   const __m256d tmp_qloop_21 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_set_pd(_data_phi_0_0_GRAY[10*q],_data_phi_0_0_GRAY[10*q],_data_phi_0_0_GRAY[10*q],_data_phi_0_0_GRAY[10*q])),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_phi_0_0_GRAY[10*q + 1],_data_phi_0_0_GRAY[10*q + 1],_data_phi_0_0_GRAY[10*q + 1],_data_phi_0_0_GRAY[10*q + 1]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_phi_0_0_GRAY[10*q + 2],_data_phi_0_0_GRAY[10*q + 2],_data_phi_0_0_GRAY[10*q + 2],_data_phi_0_0_GRAY[10*q + 2]))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 1],_data_tabulated_and_untitled_0_0_GRAY[7*q + 1],_data_tabulated_and_untitled_0_0_GRAY[7*q + 1],_data_tabulated_and_untitled_0_0_GRAY[7*q + 1])),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_13))));
                   const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 2],_data_tabulated_and_untitled_0_0_GRAY[7*q + 2],_data_tabulated_and_untitled_0_0_GRAY[7*q + 2],_data_tabulated_and_untitled_0_0_GRAY[7*q + 2]));
                   const __m256d tmp_qloop_23 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]));
                   const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_23),_mm256_mul_pd(tmp_qloop_22,tmp_qloop_6));
                   const __m256d tmp_qloop_25 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_23),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_22));
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 3],_data_tabulated_and_untitled_0_0_GRAY[7*q + 3],_data_tabulated_and_untitled_0_0_GRAY[7*q + 3],_data_tabulated_and_untitled_0_0_GRAY[7*q + 3]));
                   const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]));
                   const __m256d tmp_qloop_28 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_27),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_6));
                   const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_27),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_26));
                   const __m256d tmp_qloop_30 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 4],_data_tabulated_and_untitled_0_0_GRAY[7*q + 4],_data_tabulated_and_untitled_0_0_GRAY[7*q + 4],_data_tabulated_and_untitled_0_0_GRAY[7*q + 4]));
                   const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]));
                   const __m256d tmp_qloop_32 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_31),_mm256_mul_pd(tmp_qloop_30,tmp_qloop_6));
                   const __m256d tmp_qloop_33 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_31),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_30));
                   const __m256d tmp_qloop_34 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 5],_data_tabulated_and_untitled_0_0_GRAY[7*q + 5],_data_tabulated_and_untitled_0_0_GRAY[7*q + 5],_data_tabulated_and_untitled_0_0_GRAY[7*q + 5]));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]));
                   const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_35),_mm256_mul_pd(tmp_qloop_34,tmp_qloop_6));
                   const __m256d tmp_qloop_37 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_35),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_34));
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 6],_data_tabulated_and_untitled_0_0_GRAY[7*q + 6],_data_tabulated_and_untitled_0_0_GRAY[7*q + 6],_data_tabulated_and_untitled_0_0_GRAY[7*q + 6]));
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]));
                   const __m256d tmp_qloop_40 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_39),_mm256_mul_pd(tmp_qloop_38,tmp_qloop_6));
                   const __m256d tmp_qloop_41 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_39),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_38));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_18),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_20)));
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_24),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_25)));
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_28),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_29)));
                   const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_32),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_33)));
                   const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_37)));
                   const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_41)));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_24),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_25)));
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_28),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_29)));
                   const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_32),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_33)));
                   const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_37)));
                   const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_41)));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_28),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_29)));
                   const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_32),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_33)));
                   const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_37)));
                   const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_41)));
                   const __m256d q_tmp_3_3 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,tmp_qloop_32),_mm256_mul_pd(tmp_qloop_33,tmp_qloop_33)));
                   const __m256d q_tmp_3_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_33,tmp_qloop_37)));
                   const __m256d q_tmp_3_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_33,tmp_qloop_41)));
                   const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_36,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_37)));
                   const __m256d q_tmp_4_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_36,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_41)));
                   const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_40,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_41,tmp_qloop_41)));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,q_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,q_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,q_tmp_0_3);
                   q_acc_0_4 = _mm256_add_pd(q_acc_0_4,q_tmp_0_4);
                   q_acc_0_5 = _mm256_add_pd(q_acc_0_5,q_tmp_0_5);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,q_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,q_tmp_1_3);
                   q_acc_1_4 = _mm256_add_pd(q_acc_1_4,q_tmp_1_4);
                   q_acc_1_5 = _mm256_add_pd(q_acc_1_5,q_tmp_1_5);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,q_tmp_2_3);
                   q_acc_2_4 = _mm256_add_pd(q_acc_2_4,q_tmp_2_4);
                   q_acc_2_5 = _mm256_add_pd(q_acc_2_5,q_tmp_2_5);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,q_tmp_3_3);
                   q_acc_3_4 = _mm256_add_pd(q_acc_3_4,q_tmp_3_4);
                   q_acc_3_5 = _mm256_add_pd(q_acc_3_5,q_tmp_3_5);
                   q_acc_4_4 = _mm256_add_pd(q_acc_4_4,q_tmp_4_4);
                   q_acc_4_5 = _mm256_add_pd(q_acc_4_5,q_tmp_4_5);
                   q_acc_5_5 = _mm256_add_pd(q_acc_5_5,q_tmp_5_5);
                }
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3)),_mm256_mul_pd(q_acc_0_4,src_dof_4)),_mm256_mul_pd(q_acc_0_5,src_dof_5));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_1,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3)),_mm256_mul_pd(q_acc_1_4,src_dof_4)),_mm256_mul_pd(q_acc_1_5,src_dof_5));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_2,src_dof_0),_mm256_mul_pd(q_acc_1_2,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3)),_mm256_mul_pd(q_acc_2_4,src_dof_4)),_mm256_mul_pd(q_acc_2_5,src_dof_5));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_3,src_dof_0),_mm256_mul_pd(q_acc_1_3,src_dof_1)),_mm256_mul_pd(q_acc_2_3,src_dof_2)),_mm256_mul_pd(q_acc_3_3,src_dof_3)),_mm256_mul_pd(q_acc_3_4,src_dof_4)),_mm256_mul_pd(q_acc_3_5,src_dof_5));
                const __m256d elMatVec_4 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_4,src_dof_0),_mm256_mul_pd(q_acc_1_4,src_dof_1)),_mm256_mul_pd(q_acc_2_4,src_dof_2)),_mm256_mul_pd(q_acc_3_4,src_dof_3)),_mm256_mul_pd(q_acc_4_4,src_dof_4)),_mm256_mul_pd(q_acc_4_5,src_dof_5));
                const __m256d elMatVec_5 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_5,src_dof_0),_mm256_mul_pd(q_acc_1_5,src_dof_1)),_mm256_mul_pd(q_acc_2_5,src_dof_2)),_mm256_mul_pd(q_acc_3_5,src_dof_3)),_mm256_mul_pd(q_acc_4_5,src_dof_4)),_mm256_mul_pd(q_acc_5_5,src_dof_5));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatVec_4,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_5,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
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
                const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_0_4 = 0.0;
                real_t q_acc_0_5 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_1_4 = 0.0;
                real_t q_acc_1_5 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_2_4 = 0.0;
                real_t q_acc_2_5 = 0.0;
                real_t q_acc_3_3 = 0.0;
                real_t q_acc_3_4 = 0.0;
                real_t q_acc_3_5 = 0.0;
                real_t q_acc_4_4 = 0.0;
                real_t q_acc_4_5 = 0.0;
                real_t q_acc_5_5 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                   const real_t tmp_qloop_1 = 4.0*_data_q_p_1[q];
                   const real_t tmp_qloop_2 = tmp_qloop_1 - 1.0;
                   const real_t tmp_qloop_3 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                   const real_t tmp_qloop_4 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                   const real_t tmp_qloop_5 = micromesh_dof_6*tmp_qloop_4;
                   const real_t tmp_qloop_6 = micromesh_dof_10*tmp_qloop_3 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_2 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_5;
                   const real_t tmp_qloop_7 = tmp_qloop_0 - 1.0;
                   const real_t tmp_qloop_8 = micromesh_dof_0*tmp_qloop_4;
                   const real_t tmp_qloop_9 = -tmp_qloop_1 - 8.0*_data_q_p_0[q] + 4.0;
                   const real_t tmp_qloop_10 = micromesh_dof_1*tmp_qloop_7 + micromesh_dof_3*tmp_qloop_1 - micromesh_dof_4*tmp_qloop_1 + micromesh_dof_5*tmp_qloop_9 + tmp_qloop_8;
                   const real_t tmp_qloop_11 = micromesh_dof_2*tmp_qloop_2 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_3 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_8;
                   const real_t tmp_qloop_12 = -micromesh_dof_10*tmp_qloop_1 + micromesh_dof_11*tmp_qloop_9 + micromesh_dof_7*tmp_qloop_7 + micromesh_dof_9*tmp_qloop_1 + tmp_qloop_5;
                   const real_t tmp_qloop_13 = tmp_qloop_10*tmp_qloop_6 - tmp_qloop_11*tmp_qloop_12;
                   const real_t tmp_qloop_14 = 1.0 / (tmp_qloop_13);
                   const real_t tmp_qloop_15 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_GRAY[7*q];
                   const real_t tmp_qloop_16 = -tmp_qloop_12;
                   const real_t tmp_qloop_17 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_GRAY[6*q];
                   const real_t tmp_qloop_18 = tmp_qloop_15*tmp_qloop_6 + tmp_qloop_16*tmp_qloop_17;
                   const real_t tmp_qloop_19 = -tmp_qloop_11;
                   const real_t tmp_qloop_20 = tmp_qloop_10*tmp_qloop_17 + tmp_qloop_15*tmp_qloop_19;
                   const real_t tmp_qloop_21 = (k_dof_0*_data_phi_0_0_GRAY[10*q] + k_dof_1*_data_phi_0_0_GRAY[10*q + 1] + k_dof_2*_data_phi_0_0_GRAY[10*q + 2])*abs(tmp_qloop_13)*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                   const real_t tmp_qloop_22 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2];
                   const real_t tmp_qloop_23 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                   const real_t tmp_qloop_24 = tmp_qloop_16*tmp_qloop_23 + tmp_qloop_22*tmp_qloop_6;
                   const real_t tmp_qloop_25 = tmp_qloop_10*tmp_qloop_23 + tmp_qloop_19*tmp_qloop_22;
                   const real_t tmp_qloop_26 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3];
                   const real_t tmp_qloop_27 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2];
                   const real_t tmp_qloop_28 = tmp_qloop_16*tmp_qloop_27 + tmp_qloop_26*tmp_qloop_6;
                   const real_t tmp_qloop_29 = tmp_qloop_10*tmp_qloop_27 + tmp_qloop_19*tmp_qloop_26;
                   const real_t tmp_qloop_30 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4];
                   const real_t tmp_qloop_31 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3];
                   const real_t tmp_qloop_32 = tmp_qloop_16*tmp_qloop_31 + tmp_qloop_30*tmp_qloop_6;
                   const real_t tmp_qloop_33 = tmp_qloop_10*tmp_qloop_31 + tmp_qloop_19*tmp_qloop_30;
                   const real_t tmp_qloop_34 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5];
                   const real_t tmp_qloop_35 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4];
                   const real_t tmp_qloop_36 = tmp_qloop_16*tmp_qloop_35 + tmp_qloop_34*tmp_qloop_6;
                   const real_t tmp_qloop_37 = tmp_qloop_10*tmp_qloop_35 + tmp_qloop_19*tmp_qloop_34;
                   const real_t tmp_qloop_38 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6];
                   const real_t tmp_qloop_39 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5];
                   const real_t tmp_qloop_40 = tmp_qloop_16*tmp_qloop_39 + tmp_qloop_38*tmp_qloop_6;
                   const real_t tmp_qloop_41 = tmp_qloop_10*tmp_qloop_39 + tmp_qloop_19*tmp_qloop_38;
                   const real_t q_tmp_0_0 = tmp_qloop_21*((tmp_qloop_18*tmp_qloop_18) + (tmp_qloop_20*tmp_qloop_20));
                   const real_t q_tmp_0_1 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_24 + tmp_qloop_20*tmp_qloop_25);
                   const real_t q_tmp_0_2 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_28 + tmp_qloop_20*tmp_qloop_29);
                   const real_t q_tmp_0_3 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_32 + tmp_qloop_20*tmp_qloop_33);
                   const real_t q_tmp_0_4 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_36 + tmp_qloop_20*tmp_qloop_37);
                   const real_t q_tmp_0_5 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_40 + tmp_qloop_20*tmp_qloop_41);
                   const real_t q_tmp_1_1 = tmp_qloop_21*((tmp_qloop_24*tmp_qloop_24) + (tmp_qloop_25*tmp_qloop_25));
                   const real_t q_tmp_1_2 = tmp_qloop_21*(tmp_qloop_24*tmp_qloop_28 + tmp_qloop_25*tmp_qloop_29);
                   const real_t q_tmp_1_3 = tmp_qloop_21*(tmp_qloop_24*tmp_qloop_32 + tmp_qloop_25*tmp_qloop_33);
                   const real_t q_tmp_1_4 = tmp_qloop_21*(tmp_qloop_24*tmp_qloop_36 + tmp_qloop_25*tmp_qloop_37);
                   const real_t q_tmp_1_5 = tmp_qloop_21*(tmp_qloop_24*tmp_qloop_40 + tmp_qloop_25*tmp_qloop_41);
                   const real_t q_tmp_2_2 = tmp_qloop_21*((tmp_qloop_28*tmp_qloop_28) + (tmp_qloop_29*tmp_qloop_29));
                   const real_t q_tmp_2_3 = tmp_qloop_21*(tmp_qloop_28*tmp_qloop_32 + tmp_qloop_29*tmp_qloop_33);
                   const real_t q_tmp_2_4 = tmp_qloop_21*(tmp_qloop_28*tmp_qloop_36 + tmp_qloop_29*tmp_qloop_37);
                   const real_t q_tmp_2_5 = tmp_qloop_21*(tmp_qloop_28*tmp_qloop_40 + tmp_qloop_29*tmp_qloop_41);
                   const real_t q_tmp_3_3 = tmp_qloop_21*((tmp_qloop_32*tmp_qloop_32) + (tmp_qloop_33*tmp_qloop_33));
                   const real_t q_tmp_3_4 = tmp_qloop_21*(tmp_qloop_32*tmp_qloop_36 + tmp_qloop_33*tmp_qloop_37);
                   const real_t q_tmp_3_5 = tmp_qloop_21*(tmp_qloop_32*tmp_qloop_40 + tmp_qloop_33*tmp_qloop_41);
                   const real_t q_tmp_4_4 = tmp_qloop_21*((tmp_qloop_36*tmp_qloop_36) + (tmp_qloop_37*tmp_qloop_37));
                   const real_t q_tmp_4_5 = tmp_qloop_21*(tmp_qloop_36*tmp_qloop_40 + tmp_qloop_37*tmp_qloop_41);
                   const real_t q_tmp_5_5 = tmp_qloop_21*((tmp_qloop_40*tmp_qloop_40) + (tmp_qloop_41*tmp_qloop_41));
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                   q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                   q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                   q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                   q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                   q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                   q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                   q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                   q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                   q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                   q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                   q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                   q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                   q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                   q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                }
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
                const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
                const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
                const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
                const real_t elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
                const real_t elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_5*src_dof_5;
                _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
          const real_t _data_phi_0_0_BLUE [] = {0.16666666666666674, 0.16666666666666666, 0.66666666666666663, -0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, 0.0, 0.16666666666666671, 0.66666666666666663, 0.16666666666666666, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.0, 0.66666666666666674, 0.16666666666666666, 0.16666666666666666, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448, 0.0};
      
          const real_t _data_phi_1_0_BLUE [] = {0.0, -0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, 0.0, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.0, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {0.33333333333333304, 1.0, -0.33333333333333337, 0.0, 2.6666666666666665, -2.6666666666666665, 4.4408920985006262e-16, 0.33333333333333315, 1.0, 1.6666666666666665, 0.0, 0.66666666666666663, -0.66666666666666663, -1.9999999999999996, -1.666666666666667, 1.0, -0.33333333333333337, 0.0, 0.66666666666666663, -0.66666666666666663, 2.0000000000000004};
      
          const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {0.33333333333333304, 0.0, 1.6666666666666665, 0.66666666666666663, -1.9999999999999996, -0.66666666666666663, 0.33333333333333315, 0.0, -0.33333333333333337, 2.6666666666666665, 4.4408920985006262e-16, -2.6666666666666665, -1.666666666666667, 0.0, -0.33333333333333337, 0.66666666666666663, 2.0000000000000004, -0.66666666666666663};
      
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
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
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
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const __m256d tmp_qloop_0 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_1 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_1);
                   const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_4 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_qloop_0),tmp_qloop_1);
                   const __m256d tmp_qloop_5 = _mm256_mul_pd(micromesh_dof_6,tmp_qloop_4);
                   const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_10,tmp_qloop_3),_mm256_mul_pd(micromesh_dof_8,tmp_qloop_2)),_mm256_mul_pd(micromesh_dof_9,tmp_qloop_0)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_11,tmp_qloop_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_5);
                   const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_0);
                   const __m256d tmp_qloop_8 = _mm256_mul_pd(micromesh_dof_0,tmp_qloop_4);
                   const __m256d tmp_qloop_9 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_10 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_1,tmp_qloop_7),_mm256_mul_pd(micromesh_dof_3,tmp_qloop_1)),_mm256_mul_pd(micromesh_dof_5,tmp_qloop_9)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_4,tmp_qloop_1),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_8);
                   const __m256d tmp_qloop_11 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_2,tmp_qloop_2),_mm256_mul_pd(micromesh_dof_3,tmp_qloop_0)),_mm256_mul_pd(micromesh_dof_4,tmp_qloop_3)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_5,tmp_qloop_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_8);
                   const __m256d tmp_qloop_12 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(micromesh_dof_11,tmp_qloop_9),_mm256_mul_pd(micromesh_dof_7,tmp_qloop_7)),_mm256_mul_pd(micromesh_dof_9,tmp_qloop_1)),_mm256_mul_pd(_mm256_mul_pd(micromesh_dof_10,tmp_qloop_1),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_5);
                   const __m256d tmp_qloop_13 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_6),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,tmp_qloop_12),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_14 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_13);
                   const __m256d tmp_qloop_15 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q],_data_tabulated_and_untitled_0_0_BLUE[7*q],_data_tabulated_and_untitled_0_0_BLUE[7*q],_data_tabulated_and_untitled_0_0_BLUE[7*q]));
                   const __m256d tmp_qloop_16 = _mm256_mul_pd(tmp_qloop_12,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_17 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q]));
                   const __m256d tmp_qloop_18 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_6),_mm256_mul_pd(tmp_qloop_16,tmp_qloop_17));
                   const __m256d tmp_qloop_19 = _mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_20 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_17),_mm256_mul_pd(tmp_qloop_15,tmp_qloop_19));
                   const __m256d tmp_qloop_21 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_set_pd(_data_phi_0_0_BLUE[10*q],_data_phi_0_0_BLUE[10*q],_data_phi_0_0_BLUE[10*q],_data_phi_0_0_BLUE[10*q])),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_phi_0_0_BLUE[10*q + 1],_data_phi_0_0_BLUE[10*q + 1],_data_phi_0_0_BLUE[10*q + 1],_data_phi_0_0_BLUE[10*q + 1]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_phi_0_0_BLUE[10*q + 2],_data_phi_0_0_BLUE[10*q + 2],_data_phi_0_0_BLUE[10*q + 2],_data_phi_0_0_BLUE[10*q + 2]))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 1],_data_tabulated_and_untitled_0_0_BLUE[7*q + 1],_data_tabulated_and_untitled_0_0_BLUE[7*q + 1],_data_tabulated_and_untitled_0_0_BLUE[7*q + 1])),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_13))));
                   const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 2],_data_tabulated_and_untitled_0_0_BLUE[7*q + 2],_data_tabulated_and_untitled_0_0_BLUE[7*q + 2],_data_tabulated_and_untitled_0_0_BLUE[7*q + 2]));
                   const __m256d tmp_qloop_23 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]));
                   const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_23),_mm256_mul_pd(tmp_qloop_22,tmp_qloop_6));
                   const __m256d tmp_qloop_25 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_23),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_22));
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 3],_data_tabulated_and_untitled_0_0_BLUE[7*q + 3],_data_tabulated_and_untitled_0_0_BLUE[7*q + 3],_data_tabulated_and_untitled_0_0_BLUE[7*q + 3]));
                   const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]));
                   const __m256d tmp_qloop_28 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_27),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_6));
                   const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_27),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_26));
                   const __m256d tmp_qloop_30 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 4],_data_tabulated_and_untitled_0_0_BLUE[7*q + 4],_data_tabulated_and_untitled_0_0_BLUE[7*q + 4],_data_tabulated_and_untitled_0_0_BLUE[7*q + 4]));
                   const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]));
                   const __m256d tmp_qloop_32 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_31),_mm256_mul_pd(tmp_qloop_30,tmp_qloop_6));
                   const __m256d tmp_qloop_33 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_31),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_30));
                   const __m256d tmp_qloop_34 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 5],_data_tabulated_and_untitled_0_0_BLUE[7*q + 5],_data_tabulated_and_untitled_0_0_BLUE[7*q + 5],_data_tabulated_and_untitled_0_0_BLUE[7*q + 5]));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]));
                   const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_35),_mm256_mul_pd(tmp_qloop_34,tmp_qloop_6));
                   const __m256d tmp_qloop_37 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_35),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_34));
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 6],_data_tabulated_and_untitled_0_0_BLUE[7*q + 6],_data_tabulated_and_untitled_0_0_BLUE[7*q + 6],_data_tabulated_and_untitled_0_0_BLUE[7*q + 6]));
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_14,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]));
                   const __m256d tmp_qloop_40 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_16,tmp_qloop_39),_mm256_mul_pd(tmp_qloop_38,tmp_qloop_6));
                   const __m256d tmp_qloop_41 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_39),_mm256_mul_pd(tmp_qloop_19,tmp_qloop_38));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_18),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_20)));
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_24),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_25)));
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_28),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_29)));
                   const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_32),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_33)));
                   const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_37)));
                   const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_20,tmp_qloop_41)));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_24),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_25)));
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_28),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_29)));
                   const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_32),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_33)));
                   const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_37)));
                   const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_25,tmp_qloop_41)));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_28),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_29)));
                   const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_32),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_33)));
                   const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_37)));
                   const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_41)));
                   const __m256d q_tmp_3_3 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,tmp_qloop_32),_mm256_mul_pd(tmp_qloop_33,tmp_qloop_33)));
                   const __m256d q_tmp_3_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_33,tmp_qloop_37)));
                   const __m256d q_tmp_3_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_33,tmp_qloop_41)));
                   const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_36,tmp_qloop_36),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_37)));
                   const __m256d q_tmp_4_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_36,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_41)));
                   const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_21,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_40,tmp_qloop_40),_mm256_mul_pd(tmp_qloop_41,tmp_qloop_41)));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,q_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,q_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,q_tmp_0_3);
                   q_acc_0_4 = _mm256_add_pd(q_acc_0_4,q_tmp_0_4);
                   q_acc_0_5 = _mm256_add_pd(q_acc_0_5,q_tmp_0_5);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,q_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,q_tmp_1_3);
                   q_acc_1_4 = _mm256_add_pd(q_acc_1_4,q_tmp_1_4);
                   q_acc_1_5 = _mm256_add_pd(q_acc_1_5,q_tmp_1_5);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,q_tmp_2_3);
                   q_acc_2_4 = _mm256_add_pd(q_acc_2_4,q_tmp_2_4);
                   q_acc_2_5 = _mm256_add_pd(q_acc_2_5,q_tmp_2_5);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,q_tmp_3_3);
                   q_acc_3_4 = _mm256_add_pd(q_acc_3_4,q_tmp_3_4);
                   q_acc_3_5 = _mm256_add_pd(q_acc_3_5,q_tmp_3_5);
                   q_acc_4_4 = _mm256_add_pd(q_acc_4_4,q_tmp_4_4);
                   q_acc_4_5 = _mm256_add_pd(q_acc_4_5,q_tmp_4_5);
                   q_acc_5_5 = _mm256_add_pd(q_acc_5_5,q_tmp_5_5);
                }
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3)),_mm256_mul_pd(q_acc_0_4,src_dof_4)),_mm256_mul_pd(q_acc_0_5,src_dof_5));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_1,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3)),_mm256_mul_pd(q_acc_1_4,src_dof_4)),_mm256_mul_pd(q_acc_1_5,src_dof_5));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_2,src_dof_0),_mm256_mul_pd(q_acc_1_2,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3)),_mm256_mul_pd(q_acc_2_4,src_dof_4)),_mm256_mul_pd(q_acc_2_5,src_dof_5));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_3,src_dof_0),_mm256_mul_pd(q_acc_1_3,src_dof_1)),_mm256_mul_pd(q_acc_2_3,src_dof_2)),_mm256_mul_pd(q_acc_3_3,src_dof_3)),_mm256_mul_pd(q_acc_3_4,src_dof_4)),_mm256_mul_pd(q_acc_3_5,src_dof_5));
                const __m256d elMatVec_4 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_4,src_dof_0),_mm256_mul_pd(q_acc_1_4,src_dof_1)),_mm256_mul_pd(q_acc_2_4,src_dof_2)),_mm256_mul_pd(q_acc_3_4,src_dof_3)),_mm256_mul_pd(q_acc_4_4,src_dof_4)),_mm256_mul_pd(q_acc_4_5,src_dof_5));
                const __m256d elMatVec_5 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_5,src_dof_0),_mm256_mul_pd(q_acc_1_5,src_dof_1)),_mm256_mul_pd(q_acc_2_5,src_dof_2)),_mm256_mul_pd(q_acc_3_5,src_dof_3)),_mm256_mul_pd(q_acc_4_5,src_dof_4)),_mm256_mul_pd(q_acc_5_5,src_dof_5));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_4,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatVec_5,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
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
                const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
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
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_0_4 = 0.0;
                real_t q_acc_0_5 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_1_4 = 0.0;
                real_t q_acc_1_5 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_2_4 = 0.0;
                real_t q_acc_2_5 = 0.0;
                real_t q_acc_3_3 = 0.0;
                real_t q_acc_3_4 = 0.0;
                real_t q_acc_3_5 = 0.0;
                real_t q_acc_4_4 = 0.0;
                real_t q_acc_4_5 = 0.0;
                real_t q_acc_5_5 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                   const real_t tmp_qloop_1 = 4.0*_data_q_p_1[q];
                   const real_t tmp_qloop_2 = tmp_qloop_1 - 1.0;
                   const real_t tmp_qloop_3 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                   const real_t tmp_qloop_4 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                   const real_t tmp_qloop_5 = micromesh_dof_6*tmp_qloop_4;
                   const real_t tmp_qloop_6 = micromesh_dof_10*tmp_qloop_3 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_2 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_5;
                   const real_t tmp_qloop_7 = tmp_qloop_0 - 1.0;
                   const real_t tmp_qloop_8 = micromesh_dof_0*tmp_qloop_4;
                   const real_t tmp_qloop_9 = -tmp_qloop_1 - 8.0*_data_q_p_0[q] + 4.0;
                   const real_t tmp_qloop_10 = micromesh_dof_1*tmp_qloop_7 + micromesh_dof_3*tmp_qloop_1 - micromesh_dof_4*tmp_qloop_1 + micromesh_dof_5*tmp_qloop_9 + tmp_qloop_8;
                   const real_t tmp_qloop_11 = micromesh_dof_2*tmp_qloop_2 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_3 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_8;
                   const real_t tmp_qloop_12 = -micromesh_dof_10*tmp_qloop_1 + micromesh_dof_11*tmp_qloop_9 + micromesh_dof_7*tmp_qloop_7 + micromesh_dof_9*tmp_qloop_1 + tmp_qloop_5;
                   const real_t tmp_qloop_13 = tmp_qloop_10*tmp_qloop_6 - tmp_qloop_11*tmp_qloop_12;
                   const real_t tmp_qloop_14 = 1.0 / (tmp_qloop_13);
                   const real_t tmp_qloop_15 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_BLUE[7*q];
                   const real_t tmp_qloop_16 = -tmp_qloop_12;
                   const real_t tmp_qloop_17 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_BLUE[6*q];
                   const real_t tmp_qloop_18 = tmp_qloop_15*tmp_qloop_6 + tmp_qloop_16*tmp_qloop_17;
                   const real_t tmp_qloop_19 = -tmp_qloop_11;
                   const real_t tmp_qloop_20 = tmp_qloop_10*tmp_qloop_17 + tmp_qloop_15*tmp_qloop_19;
                   const real_t tmp_qloop_21 = (k_dof_0*_data_phi_0_0_BLUE[10*q] + k_dof_1*_data_phi_0_0_BLUE[10*q + 1] + k_dof_2*_data_phi_0_0_BLUE[10*q + 2])*abs(tmp_qloop_13)*_data_q_w[q]*_data_tabulated_and_untitled_0_0_BLUE[7*q + 1];
                   const real_t tmp_qloop_22 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2];
                   const real_t tmp_qloop_23 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1];
                   const real_t tmp_qloop_24 = tmp_qloop_16*tmp_qloop_23 + tmp_qloop_22*tmp_qloop_6;
                   const real_t tmp_qloop_25 = tmp_qloop_10*tmp_qloop_23 + tmp_qloop_19*tmp_qloop_22;
                   const real_t tmp_qloop_26 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3];
                   const real_t tmp_qloop_27 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2];
                   const real_t tmp_qloop_28 = tmp_qloop_16*tmp_qloop_27 + tmp_qloop_26*tmp_qloop_6;
                   const real_t tmp_qloop_29 = tmp_qloop_10*tmp_qloop_27 + tmp_qloop_19*tmp_qloop_26;
                   const real_t tmp_qloop_30 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4];
                   const real_t tmp_qloop_31 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3];
                   const real_t tmp_qloop_32 = tmp_qloop_16*tmp_qloop_31 + tmp_qloop_30*tmp_qloop_6;
                   const real_t tmp_qloop_33 = tmp_qloop_10*tmp_qloop_31 + tmp_qloop_19*tmp_qloop_30;
                   const real_t tmp_qloop_34 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5];
                   const real_t tmp_qloop_35 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4];
                   const real_t tmp_qloop_36 = tmp_qloop_16*tmp_qloop_35 + tmp_qloop_34*tmp_qloop_6;
                   const real_t tmp_qloop_37 = tmp_qloop_10*tmp_qloop_35 + tmp_qloop_19*tmp_qloop_34;
                   const real_t tmp_qloop_38 = tmp_qloop_14*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6];
                   const real_t tmp_qloop_39 = tmp_qloop_14*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5];
                   const real_t tmp_qloop_40 = tmp_qloop_16*tmp_qloop_39 + tmp_qloop_38*tmp_qloop_6;
                   const real_t tmp_qloop_41 = tmp_qloop_10*tmp_qloop_39 + tmp_qloop_19*tmp_qloop_38;
                   const real_t q_tmp_0_0 = tmp_qloop_21*((tmp_qloop_18*tmp_qloop_18) + (tmp_qloop_20*tmp_qloop_20));
                   const real_t q_tmp_0_1 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_24 + tmp_qloop_20*tmp_qloop_25);
                   const real_t q_tmp_0_2 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_28 + tmp_qloop_20*tmp_qloop_29);
                   const real_t q_tmp_0_3 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_32 + tmp_qloop_20*tmp_qloop_33);
                   const real_t q_tmp_0_4 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_36 + tmp_qloop_20*tmp_qloop_37);
                   const real_t q_tmp_0_5 = tmp_qloop_21*(tmp_qloop_18*tmp_qloop_40 + tmp_qloop_20*tmp_qloop_41);
                   const real_t q_tmp_1_1 = tmp_qloop_21*((tmp_qloop_24*tmp_qloop_24) + (tmp_qloop_25*tmp_qloop_25));
                   const real_t q_tmp_1_2 = tmp_qloop_21*(tmp_qloop_24*tmp_qloop_28 + tmp_qloop_25*tmp_qloop_29);
                   const real_t q_tmp_1_3 = tmp_qloop_21*(tmp_qloop_24*tmp_qloop_32 + tmp_qloop_25*tmp_qloop_33);
                   const real_t q_tmp_1_4 = tmp_qloop_21*(tmp_qloop_24*tmp_qloop_36 + tmp_qloop_25*tmp_qloop_37);
                   const real_t q_tmp_1_5 = tmp_qloop_21*(tmp_qloop_24*tmp_qloop_40 + tmp_qloop_25*tmp_qloop_41);
                   const real_t q_tmp_2_2 = tmp_qloop_21*((tmp_qloop_28*tmp_qloop_28) + (tmp_qloop_29*tmp_qloop_29));
                   const real_t q_tmp_2_3 = tmp_qloop_21*(tmp_qloop_28*tmp_qloop_32 + tmp_qloop_29*tmp_qloop_33);
                   const real_t q_tmp_2_4 = tmp_qloop_21*(tmp_qloop_28*tmp_qloop_36 + tmp_qloop_29*tmp_qloop_37);
                   const real_t q_tmp_2_5 = tmp_qloop_21*(tmp_qloop_28*tmp_qloop_40 + tmp_qloop_29*tmp_qloop_41);
                   const real_t q_tmp_3_3 = tmp_qloop_21*((tmp_qloop_32*tmp_qloop_32) + (tmp_qloop_33*tmp_qloop_33));
                   const real_t q_tmp_3_4 = tmp_qloop_21*(tmp_qloop_32*tmp_qloop_36 + tmp_qloop_33*tmp_qloop_37);
                   const real_t q_tmp_3_5 = tmp_qloop_21*(tmp_qloop_32*tmp_qloop_40 + tmp_qloop_33*tmp_qloop_41);
                   const real_t q_tmp_4_4 = tmp_qloop_21*((tmp_qloop_36*tmp_qloop_36) + (tmp_qloop_37*tmp_qloop_37));
                   const real_t q_tmp_4_5 = tmp_qloop_21*(tmp_qloop_36*tmp_qloop_40 + tmp_qloop_37*tmp_qloop_41);
                   const real_t q_tmp_5_5 = tmp_qloop_21*((tmp_qloop_40*tmp_qloop_40) + (tmp_qloop_41*tmp_qloop_41));
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                   q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                   q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                   q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                   q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                   q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                   q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                   q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                   q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                   q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                   q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                   q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                   q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                   q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                   q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                }
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
                const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
                const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
                const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
                const real_t elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
                const real_t elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_5*src_dof_5;
                _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
