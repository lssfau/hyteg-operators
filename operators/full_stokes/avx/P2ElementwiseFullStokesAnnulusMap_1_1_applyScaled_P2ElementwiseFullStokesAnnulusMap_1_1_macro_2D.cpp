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































#include "../P2ElementwiseFullStokesAnnulusMap_1_1.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseFullStokesAnnulusMap_1_1::applyScaled_P2ElementwiseFullStokesAnnulusMap_1_1_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_muEdge, real_t * RESTRICT  _data_muVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t tmp_qloop_1 = -rayVertex_1 + thrVertex_1;
       const real_t tmp_qloop_7 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_8 = -tmp_qloop_7;
       const real_t tmp_qloop_9 = 1.0 / (tmp_qloop_1*(-rayVertex_0 + refVertex_0) - tmp_qloop_8*(-rayVertex_1 + refVertex_1));
       const real_t tmp_qloop_10 = -radRayVertex + radRefVertex;
       const real_t tmp_qloop_11 = tmp_qloop_10*tmp_qloop_9;
       const real_t tmp_qloop_12 = tmp_qloop_11*1.0;
       {
          /* FaceType.GRAY */
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {0.0, ((real_t)(abs_det_jac_affine_GRAY)), 0.0, ((real_t)(abs_det_jac_affine_GRAY)), 0.0, ((real_t)(abs_det_jac_affine_GRAY)), 0.0, ((real_t)(abs_det_jac_affine_GRAY))};
      
          const real_t _data_tabulated_and_untitled_0_1_GRAY [] = {((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333348 + jac_affine_inv_1_0_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999973 + jac_affine_inv_1_0_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*2.3999999999999999 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.3999999999999999 + jac_affine_inv_1_0_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999996 + jac_affine_inv_1_0_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.5999999999999999 + jac_affine_inv_1_0_GRAY*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.4000000000000001 + jac_affine_inv_1_0_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004 + jac_affine_inv_1_0_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*1.5999999999999999 + jac_affine_inv_1_0_GRAY*-0.80000000000000004))};
      
          const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {0.0, 0.0, 0.0, 0.0};
      
          const real_t _data_tabulated_and_untitled_1_1_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333348 + jac_affine_inv_1_1_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3333333333333333 + jac_affine_inv_1_1_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3333333333333333 + jac_affine_inv_1_1_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_1_GRAY*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999973 + jac_affine_inv_1_1_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*2.3999999999999999 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.3999999999999999 + jac_affine_inv_1_1_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999996 + jac_affine_inv_1_1_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.5999999999999999 + jac_affine_inv_1_1_GRAY*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.4000000000000001 + jac_affine_inv_1_1_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004 + jac_affine_inv_1_1_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*1.5999999999999999 + jac_affine_inv_1_1_GRAY*-0.80000000000000004))};
      
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
                const __m256d mu_dof_0 = _mm256_loadu_pd(& _data_muVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d mu_dof_1 = _mm256_loadu_pd(& _data_muVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d mu_dof_2 = _mm256_loadu_pd(& _data_muVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d mu_dof_3 = _mm256_loadu_pd(& _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d mu_dof_4 = _mm256_loadu_pd(& _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d mu_dof_5 = _mm256_loadu_pd(& _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
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
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_1_0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_2_0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                   const __m256d tmp_qloop_2 = _mm256_mul_pd(tmp_qloop_0,tmp_qloop_0);
                   const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_1_1),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_2_1),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                   const __m256d tmp_qloop_4 = _mm256_mul_pd(tmp_qloop_3,tmp_qloop_3);
                   const __m256d tmp_qloop_5 = _mm256_add_pd(tmp_qloop_2,tmp_qloop_4);
                   const __m256d tmp_qloop_6 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_5));
                   const __m256d tmp_qloop_13 = _mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12));
                   const __m256d tmp_qloop_14 = _mm256_mul_pd(tmp_qloop_13,_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1));
                   const __m256d tmp_qloop_15 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_5),_mm256_mul_pd(tmp_qloop_5,tmp_qloop_5));
                   const __m256d tmp_qloop_16 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_0),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8))),_mm256_set_pd(tmp_qloop_11,tmp_qloop_11,tmp_qloop_11,tmp_qloop_11)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                   const __m256d tmp_qloop_17 = _mm256_mul_pd(tmp_qloop_15,tmp_qloop_16);
                   const __m256d tmp_qloop_18 = _mm256_mul_pd(tmp_qloop_17,_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_19 = _mm256_mul_pd(tmp_qloop_13,_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8));
                   const __m256d tmp_qloop_20 = _mm256_mul_pd(tmp_qloop_0,tmp_qloop_18);
                   const __m256d tmp_qloop_23 = _mm256_mul_pd(tmp_qloop_15,_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12));
                   const __m256d tmp_qloop_24 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1));
                   const __m256d tmp_qloop_25 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_24);
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_16,_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_5),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_5,tmp_qloop_5),tmp_qloop_5))),_mm256_set_pd(3.0,3.0,3.0,3.0));
                   const __m256d tmp_qloop_27 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_26),tmp_qloop_4);
                   const __m256d tmp_qloop_28 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_24,tmp_qloop_4));
                   const __m256d tmp_qloop_29 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_7,tmp_qloop_7,tmp_qloop_7,tmp_qloop_7));
                   const __m256d tmp_qloop_30 = _mm256_mul_pd(tmp_qloop_0,tmp_qloop_3);
                   const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_24,tmp_qloop_30);
                   const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_17,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_33 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_26),tmp_qloop_3);
                   const __m256d tmp_qloop_34 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_18,tmp_qloop_3));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_30);
                   const __m256d tmp_qloop_36 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_30),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8));
                   const __m256d tmp_qloop_54 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_55 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_56 = _mm256_mul_pd(tmp_qloop_55,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_57 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_58 = _mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_59 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(mu_dof_1,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_56)),_mm256_mul_pd(mu_dof_2,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_58))),_mm256_mul_pd(mu_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_55,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_54,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(mu_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_qloop_54,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(mu_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_54),tmp_qloop_56),tmp_qloop_58))),_mm256_mul_pd(mu_dof_3,tmp_qloop_54)),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q]));
                   const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_14),_mm256_mul_pd(tmp_qloop_18,tmp_qloop_4));
                   const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_19),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_15),tmp_qloop_16),tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_14,tmp_qloop_3),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_20,tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_16),tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_21 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_22 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_21);
                   const __m256d abs_det_jac_blending = tmp_qloop_21;
                   const __m256d tmp_qloop_43 = _mm256_mul_pd(abs_det_jac_blending,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[2*q + 1],_data_tabulated_and_untitled_0_0_GRAY[2*q + 1],_data_tabulated_and_untitled_0_0_GRAY[2*q + 1],_data_tabulated_and_untitled_0_0_GRAY[2*q + 1]));
                   const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_22);
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[2*q],_data_tabulated_and_untitled_0_0_GRAY[2*q],_data_tabulated_and_untitled_0_0_GRAY[2*q],_data_tabulated_and_untitled_0_0_GRAY[2*q]));
                   const __m256d tmp_qloop_47 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q],_data_tabulated_and_untitled_0_1_GRAY[6*q],_data_tabulated_and_untitled_0_1_GRAY[6*q],_data_tabulated_and_untitled_0_1_GRAY[6*q]));
                   const __m256d tmp_qloop_64 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 1],_data_tabulated_and_untitled_0_1_GRAY[6*q + 1],_data_tabulated_and_untitled_0_1_GRAY[6*q + 1],_data_tabulated_and_untitled_0_1_GRAY[6*q + 1]));
                   const __m256d tmp_qloop_71 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 2],_data_tabulated_and_untitled_0_1_GRAY[6*q + 2],_data_tabulated_and_untitled_0_1_GRAY[6*q + 2],_data_tabulated_and_untitled_0_1_GRAY[6*q + 2]));
                   const __m256d tmp_qloop_78 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 3],_data_tabulated_and_untitled_0_1_GRAY[6*q + 3],_data_tabulated_and_untitled_0_1_GRAY[6*q + 3],_data_tabulated_and_untitled_0_1_GRAY[6*q + 3]));
                   const __m256d tmp_qloop_85 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 4],_data_tabulated_and_untitled_0_1_GRAY[6*q + 4],_data_tabulated_and_untitled_0_1_GRAY[6*q + 4],_data_tabulated_and_untitled_0_1_GRAY[6*q + 4]));
                   const __m256d tmp_qloop_92 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 5],_data_tabulated_and_untitled_0_1_GRAY[6*q + 5],_data_tabulated_and_untitled_0_1_GRAY[6*q + 5],_data_tabulated_and_untitled_0_1_GRAY[6*q + 5]));
                   const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q],_data_tabulated_and_untitled_0_1_GRAY[6*q],_data_tabulated_and_untitled_0_1_GRAY[6*q],_data_tabulated_and_untitled_0_1_GRAY[6*q]));
                   const __m256d tmp_qloop_49 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[2*q],_data_tabulated_and_untitled_0_0_GRAY[2*q],_data_tabulated_and_untitled_0_0_GRAY[2*q],_data_tabulated_and_untitled_0_0_GRAY[2*q]));
                   const __m256d tmp_qloop_60 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 1],_data_tabulated_and_untitled_0_1_GRAY[6*q + 1],_data_tabulated_and_untitled_0_1_GRAY[6*q + 1],_data_tabulated_and_untitled_0_1_GRAY[6*q + 1]));
                   const __m256d tmp_qloop_67 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 2],_data_tabulated_and_untitled_0_1_GRAY[6*q + 2],_data_tabulated_and_untitled_0_1_GRAY[6*q + 2],_data_tabulated_and_untitled_0_1_GRAY[6*q + 2]));
                   const __m256d tmp_qloop_74 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 3],_data_tabulated_and_untitled_0_1_GRAY[6*q + 3],_data_tabulated_and_untitled_0_1_GRAY[6*q + 3],_data_tabulated_and_untitled_0_1_GRAY[6*q + 3]));
                   const __m256d tmp_qloop_81 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 4],_data_tabulated_and_untitled_0_1_GRAY[6*q + 4],_data_tabulated_and_untitled_0_1_GRAY[6*q + 4],_data_tabulated_and_untitled_0_1_GRAY[6*q + 4]));
                   const __m256d tmp_qloop_88 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[6*q + 5],_data_tabulated_and_untitled_0_1_GRAY[6*q + 5],_data_tabulated_and_untitled_0_1_GRAY[6*q + 5],_data_tabulated_and_untitled_0_1_GRAY[6*q + 5]));
                   const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_40 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[q],_data_tabulated_and_untitled_1_0_GRAY[q],_data_tabulated_and_untitled_1_0_GRAY[q],_data_tabulated_and_untitled_1_0_GRAY[q]));
                   const __m256d tmp_qloop_41 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_40,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)));
                   const __m256d tmp_qloop_42 = _mm256_add_pd(tmp_qloop_39,tmp_qloop_40);
                   const __m256d tmp_qloop_45 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_40,_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_40,_mm256_set_pd(2.0,2.0,2.0,2.0))));
                   const __m256d tmp_qloop_48 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q],_data_tabulated_and_untitled_1_1_GRAY[6*q],_data_tabulated_and_untitled_1_1_GRAY[6*q],_data_tabulated_and_untitled_1_1_GRAY[6*q]));
                   const __m256d tmp_qloop_65 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 1],_data_tabulated_and_untitled_1_1_GRAY[6*q + 1],_data_tabulated_and_untitled_1_1_GRAY[6*q + 1],_data_tabulated_and_untitled_1_1_GRAY[6*q + 1]));
                   const __m256d tmp_qloop_72 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 2],_data_tabulated_and_untitled_1_1_GRAY[6*q + 2],_data_tabulated_and_untitled_1_1_GRAY[6*q + 2],_data_tabulated_and_untitled_1_1_GRAY[6*q + 2]));
                   const __m256d tmp_qloop_79 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 3],_data_tabulated_and_untitled_1_1_GRAY[6*q + 3],_data_tabulated_and_untitled_1_1_GRAY[6*q + 3],_data_tabulated_and_untitled_1_1_GRAY[6*q + 3]));
                   const __m256d tmp_qloop_86 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 4],_data_tabulated_and_untitled_1_1_GRAY[6*q + 4],_data_tabulated_and_untitled_1_1_GRAY[6*q + 4],_data_tabulated_and_untitled_1_1_GRAY[6*q + 4]));
                   const __m256d tmp_qloop_93 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 5],_data_tabulated_and_untitled_1_1_GRAY[6*q + 5],_data_tabulated_and_untitled_1_1_GRAY[6*q + 5],_data_tabulated_and_untitled_1_1_GRAY[6*q + 5]));
                   const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_22);
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q],_data_tabulated_and_untitled_1_1_GRAY[6*q],_data_tabulated_and_untitled_1_1_GRAY[6*q],_data_tabulated_and_untitled_1_1_GRAY[6*q]));
                   const __m256d tmp_qloop_44 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_37,tmp_qloop_38),tmp_qloop_42));
                   const __m256d tmp_qloop_46 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_50 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[q],_data_tabulated_and_untitled_1_0_GRAY[q],_data_tabulated_and_untitled_1_0_GRAY[q],_data_tabulated_and_untitled_1_0_GRAY[q]));
                   const __m256d tmp_qloop_51 = _mm256_add_pd(tmp_qloop_49,tmp_qloop_50);
                   const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_49,_mm256_set_pd(0.5,0.5,0.5,0.5)),_mm256_mul_pd(tmp_qloop_50,_mm256_set_pd(0.5,0.5,0.5,0.5)));
                   const __m256d tmp_qloop_53 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_47),tmp_qloop_48);
                   const __m256d tmp_qloop_61 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 1],_data_tabulated_and_untitled_1_1_GRAY[6*q + 1],_data_tabulated_and_untitled_1_1_GRAY[6*q + 1],_data_tabulated_and_untitled_1_1_GRAY[6*q + 1]));
                   const __m256d tmp_qloop_62 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_63 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_66 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_64),tmp_qloop_65);
                   const __m256d tmp_qloop_68 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 2],_data_tabulated_and_untitled_1_1_GRAY[6*q + 2],_data_tabulated_and_untitled_1_1_GRAY[6*q + 2],_data_tabulated_and_untitled_1_1_GRAY[6*q + 2]));
                   const __m256d tmp_qloop_69 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_67,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_70 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_67,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_73 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_71),tmp_qloop_72);
                   const __m256d tmp_qloop_75 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 3],_data_tabulated_and_untitled_1_1_GRAY[6*q + 3],_data_tabulated_and_untitled_1_1_GRAY[6*q + 3],_data_tabulated_and_untitled_1_1_GRAY[6*q + 3]));
                   const __m256d tmp_qloop_76 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_74,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_75,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_77 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_74,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_75,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_80 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_78),tmp_qloop_79);
                   const __m256d tmp_qloop_82 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 4],_data_tabulated_and_untitled_1_1_GRAY[6*q + 4],_data_tabulated_and_untitled_1_1_GRAY[6*q + 4],_data_tabulated_and_untitled_1_1_GRAY[6*q + 4]));
                   const __m256d tmp_qloop_83 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_81,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_82,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_84 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_81,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_82,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_87 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_85),tmp_qloop_86);
                   const __m256d tmp_qloop_89 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[6*q + 5],_data_tabulated_and_untitled_1_1_GRAY[6*q + 5],_data_tabulated_and_untitled_1_1_GRAY[6*q + 5],_data_tabulated_and_untitled_1_1_GRAY[6*q + 5]));
                   const __m256d tmp_qloop_90 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_88,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_89,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_91 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_88,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_89,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_94 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_92),tmp_qloop_93);
                   const __m256d tmp_qloop_95 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_60),tmp_qloop_61));
                   const __m256d tmp_qloop_96 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_97 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_64),tmp_qloop_65);
                   const __m256d tmp_qloop_98 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_67),tmp_qloop_68));
                   const __m256d tmp_qloop_99 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_67,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_100 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_71),tmp_qloop_72);
                   const __m256d tmp_qloop_101 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_74),tmp_qloop_75));
                   const __m256d tmp_qloop_102 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_74,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_75,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_103 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_78),tmp_qloop_79);
                   const __m256d tmp_qloop_104 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_81),tmp_qloop_82));
                   const __m256d tmp_qloop_105 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_81,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_82,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_106 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_85),tmp_qloop_86);
                   const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_14),tmp_qloop_28);
                   const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_4)),_mm256_mul_pd(tmp_qloop_3,tmp_qloop_32)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_26,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_3,tmp_qloop_3),tmp_qloop_3)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_30),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_set_pd(tmp_qloop_11,tmp_qloop_11,tmp_qloop_11,tmp_qloop_11)));
                   const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_34,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_27),tmp_qloop_36);
                   const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_32),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_0),tmp_qloop_0),tmp_qloop_26),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_25),tmp_qloop_36);
                   const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_7,tmp_qloop_7,tmp_qloop_7,tmp_qloop_7)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_4),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(2.0,2.0,2.0,2.0)))),_mm256_mul_pd(tmp_qloop_53,_mm256_add_pd(_mm256_add_pd(tmp_qloop_47,tmp_qloop_48),tmp_qloop_51))),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_63),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_66)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_62),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_70),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_73)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_69),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_77),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_80)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_76),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_84),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_87)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_83),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_91),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_94)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_63,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_66,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_62,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_70,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_73,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_77,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_80,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_76,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_84,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_87,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_83,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_91,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_94,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_90,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_100,tmp_qloop_73),_mm256_mul_pd(tmp_qloop_70,tmp_qloop_99)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,tmp_qloop_98),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_100,tmp_qloop_80),_mm256_mul_pd(tmp_qloop_77,tmp_qloop_99)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_76,tmp_qloop_98),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_100,tmp_qloop_87),_mm256_mul_pd(tmp_qloop_84,tmp_qloop_99)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_83,tmp_qloop_98),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_100,tmp_qloop_94),_mm256_mul_pd(tmp_qloop_91,tmp_qloop_99)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_90,tmp_qloop_98),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_3_3 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_102,tmp_qloop_77),_mm256_mul_pd(tmp_qloop_103,tmp_qloop_80)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_101,tmp_qloop_76),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_3_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_102,tmp_qloop_84),_mm256_mul_pd(tmp_qloop_103,tmp_qloop_87)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_101,tmp_qloop_83),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_3_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_102,tmp_qloop_91),_mm256_mul_pd(tmp_qloop_103,tmp_qloop_94)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_101,tmp_qloop_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_105,tmp_qloop_84),_mm256_mul_pd(tmp_qloop_106,tmp_qloop_87)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_104,tmp_qloop_83),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_4_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_105,tmp_qloop_91),_mm256_mul_pd(tmp_qloop_106,tmp_qloop_94)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_104,tmp_qloop_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_91,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_88,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_89,_mm256_set_pd(1.0,1.0,1.0,1.0)))),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_94,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_92,_mm256_set_pd(0.5,0.5,0.5,0.5)),_mm256_mul_pd(tmp_qloop_93,_mm256_set_pd(0.5,0.5,0.5,0.5))),tmp_qloop_52)),_mm256_set_pd(2.0,2.0,2.0,2.0))),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_43,tmp_qloop_90),_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_88),tmp_qloop_89)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
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
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_0,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_1,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_2,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_3,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_4,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_5,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
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
                const real_t mu_dof_0 = _data_muVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t mu_dof_1 = _data_muVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t mu_dof_2 = _data_muVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t mu_dof_3 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t mu_dof_4 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t mu_dof_5 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_qloop_0 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q];
                   const real_t tmp_qloop_2 = (tmp_qloop_0*tmp_qloop_0);
                   const real_t tmp_qloop_3 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q];
                   const real_t tmp_qloop_4 = (tmp_qloop_3*tmp_qloop_3);
                   const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_4;
                   const real_t tmp_qloop_6 = pow(tmp_qloop_5, -0.50000000000000000);
                   const real_t tmp_qloop_13 = tmp_qloop_12*tmp_qloop_6;
                   const real_t tmp_qloop_14 = tmp_qloop_1*tmp_qloop_13;
                   const real_t tmp_qloop_15 = pow(tmp_qloop_5, -1.5000000000000000);
                   const real_t tmp_qloop_16 = radRayVertex + tmp_qloop_11*(tmp_qloop_1*(-rayVertex_0 + tmp_qloop_0) - tmp_qloop_8*(-rayVertex_1 + tmp_qloop_3));
                   const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_16;
                   const real_t tmp_qloop_18 = tmp_qloop_17*1.0;
                   const real_t tmp_qloop_19 = tmp_qloop_13*tmp_qloop_8;
                   const real_t tmp_qloop_20 = tmp_qloop_0*tmp_qloop_18;
                   const real_t tmp_qloop_23 = tmp_qloop_12*tmp_qloop_15;
                   const real_t tmp_qloop_24 = tmp_qloop_1*tmp_qloop_23;
                   const real_t tmp_qloop_25 = tmp_qloop_2*tmp_qloop_24;
                   const real_t tmp_qloop_26 = tmp_qloop_16*pow(tmp_qloop_5, -2.5000000000000000)*3.0;
                   const real_t tmp_qloop_27 = tmp_qloop_0*tmp_qloop_26*tmp_qloop_4;
                   const real_t tmp_qloop_28 = tmp_qloop_24*tmp_qloop_4 - tmp_qloop_27;
                   const real_t tmp_qloop_29 = tmp_qloop_23*tmp_qloop_7;
                   const real_t tmp_qloop_30 = tmp_qloop_0*tmp_qloop_3;
                   const real_t tmp_qloop_31 = tmp_qloop_24*tmp_qloop_30;
                   const real_t tmp_qloop_32 = tmp_qloop_17*2.0;
                   const real_t tmp_qloop_33 = tmp_qloop_2*tmp_qloop_26*tmp_qloop_3;
                   const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_3 - tmp_qloop_33;
                   const real_t tmp_qloop_35 = tmp_qloop_29*tmp_qloop_30;
                   const real_t tmp_qloop_36 = tmp_qloop_23*tmp_qloop_30*tmp_qloop_8;
                   const real_t tmp_qloop_54 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                   const real_t tmp_qloop_55 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_qloop_56 = tmp_qloop_55*2.0;
                   const real_t tmp_qloop_57 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_qloop_58 = tmp_qloop_57*2.0;
                   const real_t tmp_qloop_59 = (mu_dof_0*(tmp_qloop_54 + tmp_qloop_56 + tmp_qloop_58 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + mu_dof_1*(tmp_qloop_56 - _data_q_p_0[q]) + mu_dof_2*(tmp_qloop_58 - _data_q_p_1[q]) + mu_dof_3*tmp_qloop_54 + mu_dof_4*(-tmp_qloop_54 + tmp_qloop_57*-4.0 + 4.0*_data_q_p_1[q]) + mu_dof_5*(-tmp_qloop_54 + tmp_qloop_55*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                   const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                   const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                   const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                   const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                   const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                   const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                   const real_t abs_det_jac_blending = tmp_qloop_21;
                   const real_t tmp_qloop_43 = abs_det_jac_blending*_data_tabulated_and_untitled_0_0_GRAY[2*q + 1];
                   const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                   const real_t tmp_qloop_39 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[2*q];
                   const real_t tmp_qloop_47 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[6*q];
                   const real_t tmp_qloop_64 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[6*q + 1];
                   const real_t tmp_qloop_71 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[6*q + 2];
                   const real_t tmp_qloop_78 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[6*q + 3];
                   const real_t tmp_qloop_85 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[6*q + 4];
                   const real_t tmp_qloop_92 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[6*q + 5];
                   const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                   const real_t tmp_qloop_37 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[6*q];
                   const real_t tmp_qloop_49 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[2*q];
                   const real_t tmp_qloop_60 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[6*q + 1];
                   const real_t tmp_qloop_67 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[6*q + 2];
                   const real_t tmp_qloop_74 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[6*q + 3];
                   const real_t tmp_qloop_81 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[6*q + 4];
                   const real_t tmp_qloop_88 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[6*q + 5];
                   const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                   const real_t tmp_qloop_40 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[q];
                   const real_t tmp_qloop_41 = tmp_qloop_39*0.66666666666666667 + tmp_qloop_40*0.66666666666666667;
                   const real_t tmp_qloop_42 = tmp_qloop_39 + tmp_qloop_40;
                   const real_t tmp_qloop_45 = (tmp_qloop_39*1.0 + tmp_qloop_40*1.0)*(tmp_qloop_39*2.0 + tmp_qloop_40*2.0);
                   const real_t tmp_qloop_48 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[6*q];
                   const real_t tmp_qloop_65 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[6*q + 1];
                   const real_t tmp_qloop_72 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[6*q + 2];
                   const real_t tmp_qloop_79 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[6*q + 3];
                   const real_t tmp_qloop_86 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[6*q + 4];
                   const real_t tmp_qloop_93 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[6*q + 5];
                   const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                   const real_t tmp_qloop_38 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[6*q];
                   const real_t tmp_qloop_44 = tmp_qloop_43*(tmp_qloop_37 + tmp_qloop_38 + tmp_qloop_42);
                   const real_t tmp_qloop_46 = tmp_qloop_37*1.0 + tmp_qloop_38*1.0;
                   const real_t tmp_qloop_50 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[q];
                   const real_t tmp_qloop_51 = tmp_qloop_49 + tmp_qloop_50;
                   const real_t tmp_qloop_52 = tmp_qloop_49*0.5 + tmp_qloop_50*0.5;
                   const real_t tmp_qloop_53 = tmp_qloop_47 + tmp_qloop_48 + tmp_qloop_52*2.0;
                   const real_t tmp_qloop_61 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[6*q + 1];
                   const real_t tmp_qloop_62 = tmp_qloop_41 + tmp_qloop_60*0.66666666666666667 + tmp_qloop_61*0.66666666666666667;
                   const real_t tmp_qloop_63 = tmp_qloop_60*2.0 + tmp_qloop_61*2.0;
                   const real_t tmp_qloop_66 = tmp_qloop_51 + tmp_qloop_64 + tmp_qloop_65;
                   const real_t tmp_qloop_68 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[6*q + 2];
                   const real_t tmp_qloop_69 = tmp_qloop_41 + tmp_qloop_67*0.66666666666666667 + tmp_qloop_68*0.66666666666666667;
                   const real_t tmp_qloop_70 = tmp_qloop_67*2.0 + tmp_qloop_68*2.0;
                   const real_t tmp_qloop_73 = tmp_qloop_51 + tmp_qloop_71 + tmp_qloop_72;
                   const real_t tmp_qloop_75 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[6*q + 3];
                   const real_t tmp_qloop_76 = tmp_qloop_41 + tmp_qloop_74*0.66666666666666667 + tmp_qloop_75*0.66666666666666667;
                   const real_t tmp_qloop_77 = tmp_qloop_74*2.0 + tmp_qloop_75*2.0;
                   const real_t tmp_qloop_80 = tmp_qloop_51 + tmp_qloop_78 + tmp_qloop_79;
                   const real_t tmp_qloop_82 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[6*q + 4];
                   const real_t tmp_qloop_83 = tmp_qloop_41 + tmp_qloop_81*0.66666666666666667 + tmp_qloop_82*0.66666666666666667;
                   const real_t tmp_qloop_84 = tmp_qloop_81*2.0 + tmp_qloop_82*2.0;
                   const real_t tmp_qloop_87 = tmp_qloop_51 + tmp_qloop_85 + tmp_qloop_86;
                   const real_t tmp_qloop_89 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[6*q + 5];
                   const real_t tmp_qloop_90 = tmp_qloop_41 + tmp_qloop_88*0.66666666666666667 + tmp_qloop_89*0.66666666666666667;
                   const real_t tmp_qloop_91 = tmp_qloop_88*2.0 + tmp_qloop_89*2.0;
                   const real_t tmp_qloop_94 = tmp_qloop_51 + tmp_qloop_92 + tmp_qloop_93;
                   const real_t tmp_qloop_95 = tmp_qloop_43*(tmp_qloop_42 + tmp_qloop_60 + tmp_qloop_61);
                   const real_t tmp_qloop_96 = tmp_qloop_60*1.0 + tmp_qloop_61*1.0;
                   const real_t tmp_qloop_97 = tmp_qloop_52*2.0 + tmp_qloop_64 + tmp_qloop_65;
                   const real_t tmp_qloop_98 = tmp_qloop_43*(tmp_qloop_42 + tmp_qloop_67 + tmp_qloop_68);
                   const real_t tmp_qloop_99 = tmp_qloop_67*1.0 + tmp_qloop_68*1.0;
                   const real_t tmp_qloop_100 = tmp_qloop_52*2.0 + tmp_qloop_71 + tmp_qloop_72;
                   const real_t tmp_qloop_101 = tmp_qloop_43*(tmp_qloop_42 + tmp_qloop_74 + tmp_qloop_75);
                   const real_t tmp_qloop_102 = tmp_qloop_74*1.0 + tmp_qloop_75*1.0;
                   const real_t tmp_qloop_103 = tmp_qloop_52*2.0 + tmp_qloop_78 + tmp_qloop_79;
                   const real_t tmp_qloop_104 = tmp_qloop_43*(tmp_qloop_42 + tmp_qloop_81 + tmp_qloop_82);
                   const real_t tmp_qloop_105 = tmp_qloop_81*1.0 + tmp_qloop_82*1.0;
                   const real_t tmp_qloop_106 = tmp_qloop_52*2.0 + tmp_qloop_85 + tmp_qloop_86;
                   const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                   const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                   const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                   const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                   const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                   const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                   const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                   const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                   const real_t q_tmp_0_0 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*(tmp_qloop_37*2.0 + tmp_qloop_38*2.0) + tmp_qloop_53*(tmp_qloop_47 + tmp_qloop_48 + tmp_qloop_51)) - tmp_qloop_44*(tmp_qloop_37*0.66666666666666667 + tmp_qloop_38*0.66666666666666667 + tmp_qloop_41));
                   const real_t q_tmp_0_1 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_63 + tmp_qloop_53*tmp_qloop_66) - tmp_qloop_44*tmp_qloop_62);
                   const real_t q_tmp_0_2 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_70 + tmp_qloop_53*tmp_qloop_73) - tmp_qloop_44*tmp_qloop_69);
                   const real_t q_tmp_0_3 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_77 + tmp_qloop_53*tmp_qloop_80) - tmp_qloop_44*tmp_qloop_76);
                   const real_t q_tmp_0_4 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_84 + tmp_qloop_53*tmp_qloop_87) - tmp_qloop_44*tmp_qloop_83);
                   const real_t q_tmp_0_5 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_91 + tmp_qloop_53*tmp_qloop_94) - tmp_qloop_44*tmp_qloop_90);
                   const real_t q_tmp_1_1 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_63*tmp_qloop_96 + tmp_qloop_66*tmp_qloop_97) - tmp_qloop_62*tmp_qloop_95);
                   const real_t q_tmp_1_2 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_70*tmp_qloop_96 + tmp_qloop_73*tmp_qloop_97) - tmp_qloop_69*tmp_qloop_95);
                   const real_t q_tmp_1_3 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_77*tmp_qloop_96 + tmp_qloop_80*tmp_qloop_97) - tmp_qloop_76*tmp_qloop_95);
                   const real_t q_tmp_1_4 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_84*tmp_qloop_96 + tmp_qloop_87*tmp_qloop_97) - tmp_qloop_83*tmp_qloop_95);
                   const real_t q_tmp_1_5 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_91*tmp_qloop_96 + tmp_qloop_94*tmp_qloop_97) - tmp_qloop_90*tmp_qloop_95);
                   const real_t q_tmp_2_2 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_100*tmp_qloop_73 + tmp_qloop_45 + tmp_qloop_70*tmp_qloop_99) - tmp_qloop_69*tmp_qloop_98);
                   const real_t q_tmp_2_3 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_100*tmp_qloop_80 + tmp_qloop_45 + tmp_qloop_77*tmp_qloop_99) - tmp_qloop_76*tmp_qloop_98);
                   const real_t q_tmp_2_4 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_100*tmp_qloop_87 + tmp_qloop_45 + tmp_qloop_84*tmp_qloop_99) - tmp_qloop_83*tmp_qloop_98);
                   const real_t q_tmp_2_5 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_100*tmp_qloop_94 + tmp_qloop_45 + tmp_qloop_91*tmp_qloop_99) - tmp_qloop_90*tmp_qloop_98);
                   const real_t q_tmp_3_3 = tmp_qloop_59*(-tmp_qloop_101*tmp_qloop_76 + tmp_qloop_43*(tmp_qloop_102*tmp_qloop_77 + tmp_qloop_103*tmp_qloop_80 + tmp_qloop_45));
                   const real_t q_tmp_3_4 = tmp_qloop_59*(-tmp_qloop_101*tmp_qloop_83 + tmp_qloop_43*(tmp_qloop_102*tmp_qloop_84 + tmp_qloop_103*tmp_qloop_87 + tmp_qloop_45));
                   const real_t q_tmp_3_5 = tmp_qloop_59*(-tmp_qloop_101*tmp_qloop_90 + tmp_qloop_43*(tmp_qloop_102*tmp_qloop_91 + tmp_qloop_103*tmp_qloop_94 + tmp_qloop_45));
                   const real_t q_tmp_4_4 = tmp_qloop_59*(-tmp_qloop_104*tmp_qloop_83 + tmp_qloop_43*(tmp_qloop_105*tmp_qloop_84 + tmp_qloop_106*tmp_qloop_87 + tmp_qloop_45));
                   const real_t q_tmp_4_5 = tmp_qloop_59*(-tmp_qloop_104*tmp_qloop_90 + tmp_qloop_43*(tmp_qloop_105*tmp_qloop_91 + tmp_qloop_106*tmp_qloop_94 + tmp_qloop_45));
                   const real_t q_tmp_5_5 = tmp_qloop_59*(-tmp_qloop_43*tmp_qloop_90*(tmp_qloop_42 + tmp_qloop_88 + tmp_qloop_89) + tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_91*(tmp_qloop_88*1.0 + tmp_qloop_89*1.0) + tmp_qloop_94*(tmp_qloop_52 + tmp_qloop_92*0.5 + tmp_qloop_93*0.5)*2.0));
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
                _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {0.0, ((real_t)(abs_det_jac_affine_BLUE)), 0.0, ((real_t)(abs_det_jac_affine_BLUE)), 0.0, ((real_t)(abs_det_jac_affine_BLUE)), 0.0, ((real_t)(abs_det_jac_affine_BLUE))};
      
          const real_t _data_tabulated_and_untitled_0_1_BLUE [] = {((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333348 + jac_affine_inv_1_0_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999973 + jac_affine_inv_1_0_BLUE*0.19999999999999973)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*2.3999999999999999 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.3999999999999999 + jac_affine_inv_1_0_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999996 + jac_affine_inv_1_0_BLUE*0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.5999999999999999 + jac_affine_inv_1_0_BLUE*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.4000000000000001 + jac_affine_inv_1_0_BLUE*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004 + jac_affine_inv_1_0_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*1.5999999999999999 + jac_affine_inv_1_0_BLUE*-0.80000000000000004))};
      
          const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {0.0, 0.0, 0.0, 0.0};
      
          const real_t _data_tabulated_and_untitled_1_1_BLUE [] = {((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333348 + jac_affine_inv_1_1_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3333333333333333 + jac_affine_inv_1_1_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3333333333333333 + jac_affine_inv_1_1_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_1_BLUE*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999973 + jac_affine_inv_1_1_BLUE*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*2.3999999999999999 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.3999999999999999 + jac_affine_inv_1_1_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999996 + jac_affine_inv_1_1_BLUE*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.5999999999999999 + jac_affine_inv_1_1_BLUE*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.4000000000000001 + jac_affine_inv_1_1_BLUE*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004 + jac_affine_inv_1_1_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*1.5999999999999999 + jac_affine_inv_1_1_BLUE*-0.80000000000000004))};
      
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
                const __m256d mu_dof_0 = _mm256_loadu_pd(& _data_muVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d mu_dof_1 = _mm256_loadu_pd(& _data_muVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d mu_dof_2 = _mm256_loadu_pd(& _data_muVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d mu_dof_3 = _mm256_loadu_pd(& _data_muEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d mu_dof_4 = _mm256_loadu_pd(& _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d mu_dof_5 = _mm256_loadu_pd(& _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
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
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_1_0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_2_0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                   const __m256d tmp_qloop_2 = _mm256_mul_pd(tmp_qloop_0,tmp_qloop_0);
                   const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_1_1),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_2_1),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                   const __m256d tmp_qloop_4 = _mm256_mul_pd(tmp_qloop_3,tmp_qloop_3);
                   const __m256d tmp_qloop_5 = _mm256_add_pd(tmp_qloop_2,tmp_qloop_4);
                   const __m256d tmp_qloop_6 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_5));
                   const __m256d tmp_qloop_13 = _mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12));
                   const __m256d tmp_qloop_14 = _mm256_mul_pd(tmp_qloop_13,_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1));
                   const __m256d tmp_qloop_15 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_5),_mm256_mul_pd(tmp_qloop_5,tmp_qloop_5));
                   const __m256d tmp_qloop_16 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_0),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8))),_mm256_set_pd(tmp_qloop_11,tmp_qloop_11,tmp_qloop_11,tmp_qloop_11)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                   const __m256d tmp_qloop_17 = _mm256_mul_pd(tmp_qloop_15,tmp_qloop_16);
                   const __m256d tmp_qloop_18 = _mm256_mul_pd(tmp_qloop_17,_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_19 = _mm256_mul_pd(tmp_qloop_13,_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8));
                   const __m256d tmp_qloop_20 = _mm256_mul_pd(tmp_qloop_0,tmp_qloop_18);
                   const __m256d tmp_qloop_23 = _mm256_mul_pd(tmp_qloop_15,_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12));
                   const __m256d tmp_qloop_24 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1));
                   const __m256d tmp_qloop_25 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_24);
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_16,_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_5),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_5,tmp_qloop_5),tmp_qloop_5))),_mm256_set_pd(3.0,3.0,3.0,3.0));
                   const __m256d tmp_qloop_27 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_26),tmp_qloop_4);
                   const __m256d tmp_qloop_28 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_24,tmp_qloop_4));
                   const __m256d tmp_qloop_29 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_7,tmp_qloop_7,tmp_qloop_7,tmp_qloop_7));
                   const __m256d tmp_qloop_30 = _mm256_mul_pd(tmp_qloop_0,tmp_qloop_3);
                   const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_24,tmp_qloop_30);
                   const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_17,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_33 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_26),tmp_qloop_3);
                   const __m256d tmp_qloop_34 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_18,tmp_qloop_3));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(tmp_qloop_29,tmp_qloop_30);
                   const __m256d tmp_qloop_36 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_30),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8));
                   const __m256d tmp_qloop_54 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_55 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_56 = _mm256_mul_pd(tmp_qloop_55,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_57 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_58 = _mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_59 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(mu_dof_1,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_56)),_mm256_mul_pd(mu_dof_2,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_58))),_mm256_mul_pd(mu_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_55,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_54,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(mu_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_qloop_54,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))),_mm256_mul_pd(mu_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_54),tmp_qloop_56),tmp_qloop_58))),_mm256_mul_pd(mu_dof_3,tmp_qloop_54)),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q]));
                   const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_14),_mm256_mul_pd(tmp_qloop_18,tmp_qloop_4));
                   const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_19),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_15),tmp_qloop_16),tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_14,tmp_qloop_3),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_20,tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_16),tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_21 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_22 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_21);
                   const __m256d abs_det_jac_blending = tmp_qloop_21;
                   const __m256d tmp_qloop_43 = _mm256_mul_pd(abs_det_jac_blending,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[2*q + 1],_data_tabulated_and_untitled_0_0_BLUE[2*q + 1],_data_tabulated_and_untitled_0_0_BLUE[2*q + 1],_data_tabulated_and_untitled_0_0_BLUE[2*q + 1]));
                   const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_22);
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[2*q],_data_tabulated_and_untitled_0_0_BLUE[2*q],_data_tabulated_and_untitled_0_0_BLUE[2*q],_data_tabulated_and_untitled_0_0_BLUE[2*q]));
                   const __m256d tmp_qloop_47 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q],_data_tabulated_and_untitled_0_1_BLUE[6*q],_data_tabulated_and_untitled_0_1_BLUE[6*q],_data_tabulated_and_untitled_0_1_BLUE[6*q]));
                   const __m256d tmp_qloop_64 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 1],_data_tabulated_and_untitled_0_1_BLUE[6*q + 1],_data_tabulated_and_untitled_0_1_BLUE[6*q + 1],_data_tabulated_and_untitled_0_1_BLUE[6*q + 1]));
                   const __m256d tmp_qloop_71 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 2],_data_tabulated_and_untitled_0_1_BLUE[6*q + 2],_data_tabulated_and_untitled_0_1_BLUE[6*q + 2],_data_tabulated_and_untitled_0_1_BLUE[6*q + 2]));
                   const __m256d tmp_qloop_78 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 3],_data_tabulated_and_untitled_0_1_BLUE[6*q + 3],_data_tabulated_and_untitled_0_1_BLUE[6*q + 3],_data_tabulated_and_untitled_0_1_BLUE[6*q + 3]));
                   const __m256d tmp_qloop_85 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 4],_data_tabulated_and_untitled_0_1_BLUE[6*q + 4],_data_tabulated_and_untitled_0_1_BLUE[6*q + 4],_data_tabulated_and_untitled_0_1_BLUE[6*q + 4]));
                   const __m256d tmp_qloop_92 = _mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 5],_data_tabulated_and_untitled_0_1_BLUE[6*q + 5],_data_tabulated_and_untitled_0_1_BLUE[6*q + 5],_data_tabulated_and_untitled_0_1_BLUE[6*q + 5]));
                   const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q],_data_tabulated_and_untitled_0_1_BLUE[6*q],_data_tabulated_and_untitled_0_1_BLUE[6*q],_data_tabulated_and_untitled_0_1_BLUE[6*q]));
                   const __m256d tmp_qloop_49 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[2*q],_data_tabulated_and_untitled_0_0_BLUE[2*q],_data_tabulated_and_untitled_0_0_BLUE[2*q],_data_tabulated_and_untitled_0_0_BLUE[2*q]));
                   const __m256d tmp_qloop_60 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 1],_data_tabulated_and_untitled_0_1_BLUE[6*q + 1],_data_tabulated_and_untitled_0_1_BLUE[6*q + 1],_data_tabulated_and_untitled_0_1_BLUE[6*q + 1]));
                   const __m256d tmp_qloop_67 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 2],_data_tabulated_and_untitled_0_1_BLUE[6*q + 2],_data_tabulated_and_untitled_0_1_BLUE[6*q + 2],_data_tabulated_and_untitled_0_1_BLUE[6*q + 2]));
                   const __m256d tmp_qloop_74 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 3],_data_tabulated_and_untitled_0_1_BLUE[6*q + 3],_data_tabulated_and_untitled_0_1_BLUE[6*q + 3],_data_tabulated_and_untitled_0_1_BLUE[6*q + 3]));
                   const __m256d tmp_qloop_81 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 4],_data_tabulated_and_untitled_0_1_BLUE[6*q + 4],_data_tabulated_and_untitled_0_1_BLUE[6*q + 4],_data_tabulated_and_untitled_0_1_BLUE[6*q + 4]));
                   const __m256d tmp_qloop_88 = _mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[6*q + 5],_data_tabulated_and_untitled_0_1_BLUE[6*q + 5],_data_tabulated_and_untitled_0_1_BLUE[6*q + 5],_data_tabulated_and_untitled_0_1_BLUE[6*q + 5]));
                   const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_40 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[q],_data_tabulated_and_untitled_1_0_BLUE[q],_data_tabulated_and_untitled_1_0_BLUE[q],_data_tabulated_and_untitled_1_0_BLUE[q]));
                   const __m256d tmp_qloop_41 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_40,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)));
                   const __m256d tmp_qloop_42 = _mm256_add_pd(tmp_qloop_39,tmp_qloop_40);
                   const __m256d tmp_qloop_45 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_40,_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_40,_mm256_set_pd(2.0,2.0,2.0,2.0))));
                   const __m256d tmp_qloop_48 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q],_data_tabulated_and_untitled_1_1_BLUE[6*q],_data_tabulated_and_untitled_1_1_BLUE[6*q],_data_tabulated_and_untitled_1_1_BLUE[6*q]));
                   const __m256d tmp_qloop_65 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 1],_data_tabulated_and_untitled_1_1_BLUE[6*q + 1],_data_tabulated_and_untitled_1_1_BLUE[6*q + 1],_data_tabulated_and_untitled_1_1_BLUE[6*q + 1]));
                   const __m256d tmp_qloop_72 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 2],_data_tabulated_and_untitled_1_1_BLUE[6*q + 2],_data_tabulated_and_untitled_1_1_BLUE[6*q + 2],_data_tabulated_and_untitled_1_1_BLUE[6*q + 2]));
                   const __m256d tmp_qloop_79 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 3],_data_tabulated_and_untitled_1_1_BLUE[6*q + 3],_data_tabulated_and_untitled_1_1_BLUE[6*q + 3],_data_tabulated_and_untitled_1_1_BLUE[6*q + 3]));
                   const __m256d tmp_qloop_86 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 4],_data_tabulated_and_untitled_1_1_BLUE[6*q + 4],_data_tabulated_and_untitled_1_1_BLUE[6*q + 4],_data_tabulated_and_untitled_1_1_BLUE[6*q + 4]));
                   const __m256d tmp_qloop_93 = _mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 5],_data_tabulated_and_untitled_1_1_BLUE[6*q + 5],_data_tabulated_and_untitled_1_1_BLUE[6*q + 5],_data_tabulated_and_untitled_1_1_BLUE[6*q + 5]));
                   const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_22);
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q],_data_tabulated_and_untitled_1_1_BLUE[6*q],_data_tabulated_and_untitled_1_1_BLUE[6*q],_data_tabulated_and_untitled_1_1_BLUE[6*q]));
                   const __m256d tmp_qloop_44 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_37,tmp_qloop_38),tmp_qloop_42));
                   const __m256d tmp_qloop_46 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_50 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[q],_data_tabulated_and_untitled_1_0_BLUE[q],_data_tabulated_and_untitled_1_0_BLUE[q],_data_tabulated_and_untitled_1_0_BLUE[q]));
                   const __m256d tmp_qloop_51 = _mm256_add_pd(tmp_qloop_49,tmp_qloop_50);
                   const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_49,_mm256_set_pd(0.5,0.5,0.5,0.5)),_mm256_mul_pd(tmp_qloop_50,_mm256_set_pd(0.5,0.5,0.5,0.5)));
                   const __m256d tmp_qloop_53 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_47),tmp_qloop_48);
                   const __m256d tmp_qloop_61 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 1],_data_tabulated_and_untitled_1_1_BLUE[6*q + 1],_data_tabulated_and_untitled_1_1_BLUE[6*q + 1],_data_tabulated_and_untitled_1_1_BLUE[6*q + 1]));
                   const __m256d tmp_qloop_62 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_63 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_66 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_64),tmp_qloop_65);
                   const __m256d tmp_qloop_68 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 2],_data_tabulated_and_untitled_1_1_BLUE[6*q + 2],_data_tabulated_and_untitled_1_1_BLUE[6*q + 2],_data_tabulated_and_untitled_1_1_BLUE[6*q + 2]));
                   const __m256d tmp_qloop_69 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_67,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_70 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_67,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_73 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_71),tmp_qloop_72);
                   const __m256d tmp_qloop_75 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 3],_data_tabulated_and_untitled_1_1_BLUE[6*q + 3],_data_tabulated_and_untitled_1_1_BLUE[6*q + 3],_data_tabulated_and_untitled_1_1_BLUE[6*q + 3]));
                   const __m256d tmp_qloop_76 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_74,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_75,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_77 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_74,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_75,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_80 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_78),tmp_qloop_79);
                   const __m256d tmp_qloop_82 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 4],_data_tabulated_and_untitled_1_1_BLUE[6*q + 4],_data_tabulated_and_untitled_1_1_BLUE[6*q + 4],_data_tabulated_and_untitled_1_1_BLUE[6*q + 4]));
                   const __m256d tmp_qloop_83 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_81,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_82,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_84 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_81,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_82,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_87 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_85),tmp_qloop_86);
                   const __m256d tmp_qloop_89 = _mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[6*q + 5],_data_tabulated_and_untitled_1_1_BLUE[6*q + 5],_data_tabulated_and_untitled_1_1_BLUE[6*q + 5],_data_tabulated_and_untitled_1_1_BLUE[6*q + 5]));
                   const __m256d tmp_qloop_90 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_88,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_89,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41);
                   const __m256d tmp_qloop_91 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_88,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_89,_mm256_set_pd(2.0,2.0,2.0,2.0)));
                   const __m256d tmp_qloop_94 = _mm256_add_pd(_mm256_add_pd(tmp_qloop_51,tmp_qloop_92),tmp_qloop_93);
                   const __m256d tmp_qloop_95 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_60),tmp_qloop_61));
                   const __m256d tmp_qloop_96 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_97 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_64),tmp_qloop_65);
                   const __m256d tmp_qloop_98 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_67),tmp_qloop_68));
                   const __m256d tmp_qloop_99 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_67,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_100 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_71),tmp_qloop_72);
                   const __m256d tmp_qloop_101 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_74),tmp_qloop_75));
                   const __m256d tmp_qloop_102 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_74,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_75,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_103 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_78),tmp_qloop_79);
                   const __m256d tmp_qloop_104 = _mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_81),tmp_qloop_82));
                   const __m256d tmp_qloop_105 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_81,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_82,_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_106 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_52,_mm256_set_pd(2.0,2.0,2.0,2.0)),tmp_qloop_85),tmp_qloop_86);
                   const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_14),tmp_qloop_28);
                   const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_4)),_mm256_mul_pd(tmp_qloop_3,tmp_qloop_32)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_26,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_3,tmp_qloop_3),tmp_qloop_3)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_30),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_set_pd(tmp_qloop_11,tmp_qloop_11,tmp_qloop_11,tmp_qloop_11)));
                   const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_34,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_27),tmp_qloop_36);
                   const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_32),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_0),tmp_qloop_0),tmp_qloop_26),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_25),tmp_qloop_36);
                   const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_7,tmp_qloop_7,tmp_qloop_7,tmp_qloop_7)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_4),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(2.0,2.0,2.0,2.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(2.0,2.0,2.0,2.0)))),_mm256_mul_pd(tmp_qloop_53,_mm256_add_pd(_mm256_add_pd(tmp_qloop_47,tmp_qloop_48),tmp_qloop_51))),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(0.66666666666666667,0.66666666666666667,0.66666666666666667,0.66666666666666667))),tmp_qloop_41)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_63),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_66)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_62),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_70),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_73)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_69),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_77),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_80)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_76),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_84),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_87)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_83),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,tmp_qloop_91),_mm256_mul_pd(tmp_qloop_53,tmp_qloop_94)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,tmp_qloop_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_63,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_66,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_62,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_70,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_73,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_77,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_80,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_76,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_84,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_87,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_83,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_91,tmp_qloop_96),_mm256_mul_pd(tmp_qloop_94,tmp_qloop_97)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_90,tmp_qloop_95),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_100,tmp_qloop_73),_mm256_mul_pd(tmp_qloop_70,tmp_qloop_99)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,tmp_qloop_98),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_100,tmp_qloop_80),_mm256_mul_pd(tmp_qloop_77,tmp_qloop_99)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_76,tmp_qloop_98),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_100,tmp_qloop_87),_mm256_mul_pd(tmp_qloop_84,tmp_qloop_99)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_83,tmp_qloop_98),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_100,tmp_qloop_94),_mm256_mul_pd(tmp_qloop_91,tmp_qloop_99)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_90,tmp_qloop_98),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_3_3 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_102,tmp_qloop_77),_mm256_mul_pd(tmp_qloop_103,tmp_qloop_80)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_101,tmp_qloop_76),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_3_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_102,tmp_qloop_84),_mm256_mul_pd(tmp_qloop_103,tmp_qloop_87)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_101,tmp_qloop_83),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_3_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_102,tmp_qloop_91),_mm256_mul_pd(tmp_qloop_103,tmp_qloop_94)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_101,tmp_qloop_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_105,tmp_qloop_84),_mm256_mul_pd(tmp_qloop_106,tmp_qloop_87)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_104,tmp_qloop_83),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_4_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_105,tmp_qloop_91),_mm256_mul_pd(tmp_qloop_106,tmp_qloop_94)),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_104,tmp_qloop_90),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
                   const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_59,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_91,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_88,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_mul_pd(tmp_qloop_89,_mm256_set_pd(1.0,1.0,1.0,1.0)))),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_94,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_92,_mm256_set_pd(0.5,0.5,0.5,0.5)),_mm256_mul_pd(tmp_qloop_93,_mm256_set_pd(0.5,0.5,0.5,0.5))),tmp_qloop_52)),_mm256_set_pd(2.0,2.0,2.0,2.0))),tmp_qloop_45)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_43,tmp_qloop_90),_mm256_add_pd(_mm256_add_pd(tmp_qloop_42,tmp_qloop_88),tmp_qloop_89)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))));
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
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_0,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_1,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_2,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_3,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_4,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_5,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
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
                const real_t mu_dof_0 = _data_muVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t mu_dof_1 = _data_muVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t mu_dof_2 = _data_muVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t mu_dof_3 = _data_muEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t mu_dof_4 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t mu_dof_5 = _data_muEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
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
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_qloop_0 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q];
                   const real_t tmp_qloop_2 = (tmp_qloop_0*tmp_qloop_0);
                   const real_t tmp_qloop_3 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q];
                   const real_t tmp_qloop_4 = (tmp_qloop_3*tmp_qloop_3);
                   const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_4;
                   const real_t tmp_qloop_6 = pow(tmp_qloop_5, -0.50000000000000000);
                   const real_t tmp_qloop_13 = tmp_qloop_12*tmp_qloop_6;
                   const real_t tmp_qloop_14 = tmp_qloop_1*tmp_qloop_13;
                   const real_t tmp_qloop_15 = pow(tmp_qloop_5, -1.5000000000000000);
                   const real_t tmp_qloop_16 = radRayVertex + tmp_qloop_11*(tmp_qloop_1*(-rayVertex_0 + tmp_qloop_0) - tmp_qloop_8*(-rayVertex_1 + tmp_qloop_3));
                   const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_16;
                   const real_t tmp_qloop_18 = tmp_qloop_17*1.0;
                   const real_t tmp_qloop_19 = tmp_qloop_13*tmp_qloop_8;
                   const real_t tmp_qloop_20 = tmp_qloop_0*tmp_qloop_18;
                   const real_t tmp_qloop_23 = tmp_qloop_12*tmp_qloop_15;
                   const real_t tmp_qloop_24 = tmp_qloop_1*tmp_qloop_23;
                   const real_t tmp_qloop_25 = tmp_qloop_2*tmp_qloop_24;
                   const real_t tmp_qloop_26 = tmp_qloop_16*pow(tmp_qloop_5, -2.5000000000000000)*3.0;
                   const real_t tmp_qloop_27 = tmp_qloop_0*tmp_qloop_26*tmp_qloop_4;
                   const real_t tmp_qloop_28 = tmp_qloop_24*tmp_qloop_4 - tmp_qloop_27;
                   const real_t tmp_qloop_29 = tmp_qloop_23*tmp_qloop_7;
                   const real_t tmp_qloop_30 = tmp_qloop_0*tmp_qloop_3;
                   const real_t tmp_qloop_31 = tmp_qloop_24*tmp_qloop_30;
                   const real_t tmp_qloop_32 = tmp_qloop_17*2.0;
                   const real_t tmp_qloop_33 = tmp_qloop_2*tmp_qloop_26*tmp_qloop_3;
                   const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_3 - tmp_qloop_33;
                   const real_t tmp_qloop_35 = tmp_qloop_29*tmp_qloop_30;
                   const real_t tmp_qloop_36 = tmp_qloop_23*tmp_qloop_30*tmp_qloop_8;
                   const real_t tmp_qloop_54 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                   const real_t tmp_qloop_55 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_qloop_56 = tmp_qloop_55*2.0;
                   const real_t tmp_qloop_57 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_qloop_58 = tmp_qloop_57*2.0;
                   const real_t tmp_qloop_59 = (mu_dof_0*(tmp_qloop_54 + tmp_qloop_56 + tmp_qloop_58 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + mu_dof_1*(tmp_qloop_56 - _data_q_p_0[q]) + mu_dof_2*(tmp_qloop_58 - _data_q_p_1[q]) + mu_dof_3*tmp_qloop_54 + mu_dof_4*(-tmp_qloop_54 + tmp_qloop_57*-4.0 + 4.0*_data_q_p_1[q]) + mu_dof_5*(-tmp_qloop_54 + tmp_qloop_55*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                   const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                   const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                   const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                   const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                   const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                   const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                   const real_t abs_det_jac_blending = tmp_qloop_21;
                   const real_t tmp_qloop_43 = abs_det_jac_blending*_data_tabulated_and_untitled_0_0_BLUE[2*q + 1];
                   const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                   const real_t tmp_qloop_39 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[2*q];
                   const real_t tmp_qloop_47 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[6*q];
                   const real_t tmp_qloop_64 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[6*q + 1];
                   const real_t tmp_qloop_71 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[6*q + 2];
                   const real_t tmp_qloop_78 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[6*q + 3];
                   const real_t tmp_qloop_85 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[6*q + 4];
                   const real_t tmp_qloop_92 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[6*q + 5];
                   const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                   const real_t tmp_qloop_37 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[6*q];
                   const real_t tmp_qloop_49 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[2*q];
                   const real_t tmp_qloop_60 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[6*q + 1];
                   const real_t tmp_qloop_67 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[6*q + 2];
                   const real_t tmp_qloop_74 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[6*q + 3];
                   const real_t tmp_qloop_81 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[6*q + 4];
                   const real_t tmp_qloop_88 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[6*q + 5];
                   const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                   const real_t tmp_qloop_40 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[q];
                   const real_t tmp_qloop_41 = tmp_qloop_39*0.66666666666666667 + tmp_qloop_40*0.66666666666666667;
                   const real_t tmp_qloop_42 = tmp_qloop_39 + tmp_qloop_40;
                   const real_t tmp_qloop_45 = (tmp_qloop_39*1.0 + tmp_qloop_40*1.0)*(tmp_qloop_39*2.0 + tmp_qloop_40*2.0);
                   const real_t tmp_qloop_48 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[6*q];
                   const real_t tmp_qloop_65 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[6*q + 1];
                   const real_t tmp_qloop_72 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[6*q + 2];
                   const real_t tmp_qloop_79 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[6*q + 3];
                   const real_t tmp_qloop_86 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[6*q + 4];
                   const real_t tmp_qloop_93 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[6*q + 5];
                   const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                   const real_t tmp_qloop_38 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[6*q];
                   const real_t tmp_qloop_44 = tmp_qloop_43*(tmp_qloop_37 + tmp_qloop_38 + tmp_qloop_42);
                   const real_t tmp_qloop_46 = tmp_qloop_37*1.0 + tmp_qloop_38*1.0;
                   const real_t tmp_qloop_50 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[q];
                   const real_t tmp_qloop_51 = tmp_qloop_49 + tmp_qloop_50;
                   const real_t tmp_qloop_52 = tmp_qloop_49*0.5 + tmp_qloop_50*0.5;
                   const real_t tmp_qloop_53 = tmp_qloop_47 + tmp_qloop_48 + tmp_qloop_52*2.0;
                   const real_t tmp_qloop_61 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[6*q + 1];
                   const real_t tmp_qloop_62 = tmp_qloop_41 + tmp_qloop_60*0.66666666666666667 + tmp_qloop_61*0.66666666666666667;
                   const real_t tmp_qloop_63 = tmp_qloop_60*2.0 + tmp_qloop_61*2.0;
                   const real_t tmp_qloop_66 = tmp_qloop_51 + tmp_qloop_64 + tmp_qloop_65;
                   const real_t tmp_qloop_68 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[6*q + 2];
                   const real_t tmp_qloop_69 = tmp_qloop_41 + tmp_qloop_67*0.66666666666666667 + tmp_qloop_68*0.66666666666666667;
                   const real_t tmp_qloop_70 = tmp_qloop_67*2.0 + tmp_qloop_68*2.0;
                   const real_t tmp_qloop_73 = tmp_qloop_51 + tmp_qloop_71 + tmp_qloop_72;
                   const real_t tmp_qloop_75 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[6*q + 3];
                   const real_t tmp_qloop_76 = tmp_qloop_41 + tmp_qloop_74*0.66666666666666667 + tmp_qloop_75*0.66666666666666667;
                   const real_t tmp_qloop_77 = tmp_qloop_74*2.0 + tmp_qloop_75*2.0;
                   const real_t tmp_qloop_80 = tmp_qloop_51 + tmp_qloop_78 + tmp_qloop_79;
                   const real_t tmp_qloop_82 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[6*q + 4];
                   const real_t tmp_qloop_83 = tmp_qloop_41 + tmp_qloop_81*0.66666666666666667 + tmp_qloop_82*0.66666666666666667;
                   const real_t tmp_qloop_84 = tmp_qloop_81*2.0 + tmp_qloop_82*2.0;
                   const real_t tmp_qloop_87 = tmp_qloop_51 + tmp_qloop_85 + tmp_qloop_86;
                   const real_t tmp_qloop_89 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[6*q + 5];
                   const real_t tmp_qloop_90 = tmp_qloop_41 + tmp_qloop_88*0.66666666666666667 + tmp_qloop_89*0.66666666666666667;
                   const real_t tmp_qloop_91 = tmp_qloop_88*2.0 + tmp_qloop_89*2.0;
                   const real_t tmp_qloop_94 = tmp_qloop_51 + tmp_qloop_92 + tmp_qloop_93;
                   const real_t tmp_qloop_95 = tmp_qloop_43*(tmp_qloop_42 + tmp_qloop_60 + tmp_qloop_61);
                   const real_t tmp_qloop_96 = tmp_qloop_60*1.0 + tmp_qloop_61*1.0;
                   const real_t tmp_qloop_97 = tmp_qloop_52*2.0 + tmp_qloop_64 + tmp_qloop_65;
                   const real_t tmp_qloop_98 = tmp_qloop_43*(tmp_qloop_42 + tmp_qloop_67 + tmp_qloop_68);
                   const real_t tmp_qloop_99 = tmp_qloop_67*1.0 + tmp_qloop_68*1.0;
                   const real_t tmp_qloop_100 = tmp_qloop_52*2.0 + tmp_qloop_71 + tmp_qloop_72;
                   const real_t tmp_qloop_101 = tmp_qloop_43*(tmp_qloop_42 + tmp_qloop_74 + tmp_qloop_75);
                   const real_t tmp_qloop_102 = tmp_qloop_74*1.0 + tmp_qloop_75*1.0;
                   const real_t tmp_qloop_103 = tmp_qloop_52*2.0 + tmp_qloop_78 + tmp_qloop_79;
                   const real_t tmp_qloop_104 = tmp_qloop_43*(tmp_qloop_42 + tmp_qloop_81 + tmp_qloop_82);
                   const real_t tmp_qloop_105 = tmp_qloop_81*1.0 + tmp_qloop_82*1.0;
                   const real_t tmp_qloop_106 = tmp_qloop_52*2.0 + tmp_qloop_85 + tmp_qloop_86;
                   const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                   const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                   const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                   const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                   const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                   const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                   const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                   const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                   const real_t q_tmp_0_0 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*(tmp_qloop_37*2.0 + tmp_qloop_38*2.0) + tmp_qloop_53*(tmp_qloop_47 + tmp_qloop_48 + tmp_qloop_51)) - tmp_qloop_44*(tmp_qloop_37*0.66666666666666667 + tmp_qloop_38*0.66666666666666667 + tmp_qloop_41));
                   const real_t q_tmp_0_1 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_63 + tmp_qloop_53*tmp_qloop_66) - tmp_qloop_44*tmp_qloop_62);
                   const real_t q_tmp_0_2 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_70 + tmp_qloop_53*tmp_qloop_73) - tmp_qloop_44*tmp_qloop_69);
                   const real_t q_tmp_0_3 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_77 + tmp_qloop_53*tmp_qloop_80) - tmp_qloop_44*tmp_qloop_76);
                   const real_t q_tmp_0_4 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_84 + tmp_qloop_53*tmp_qloop_87) - tmp_qloop_44*tmp_qloop_83);
                   const real_t q_tmp_0_5 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_46*tmp_qloop_91 + tmp_qloop_53*tmp_qloop_94) - tmp_qloop_44*tmp_qloop_90);
                   const real_t q_tmp_1_1 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_63*tmp_qloop_96 + tmp_qloop_66*tmp_qloop_97) - tmp_qloop_62*tmp_qloop_95);
                   const real_t q_tmp_1_2 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_70*tmp_qloop_96 + tmp_qloop_73*tmp_qloop_97) - tmp_qloop_69*tmp_qloop_95);
                   const real_t q_tmp_1_3 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_77*tmp_qloop_96 + tmp_qloop_80*tmp_qloop_97) - tmp_qloop_76*tmp_qloop_95);
                   const real_t q_tmp_1_4 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_84*tmp_qloop_96 + tmp_qloop_87*tmp_qloop_97) - tmp_qloop_83*tmp_qloop_95);
                   const real_t q_tmp_1_5 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_91*tmp_qloop_96 + tmp_qloop_94*tmp_qloop_97) - tmp_qloop_90*tmp_qloop_95);
                   const real_t q_tmp_2_2 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_100*tmp_qloop_73 + tmp_qloop_45 + tmp_qloop_70*tmp_qloop_99) - tmp_qloop_69*tmp_qloop_98);
                   const real_t q_tmp_2_3 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_100*tmp_qloop_80 + tmp_qloop_45 + tmp_qloop_77*tmp_qloop_99) - tmp_qloop_76*tmp_qloop_98);
                   const real_t q_tmp_2_4 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_100*tmp_qloop_87 + tmp_qloop_45 + tmp_qloop_84*tmp_qloop_99) - tmp_qloop_83*tmp_qloop_98);
                   const real_t q_tmp_2_5 = tmp_qloop_59*(tmp_qloop_43*(tmp_qloop_100*tmp_qloop_94 + tmp_qloop_45 + tmp_qloop_91*tmp_qloop_99) - tmp_qloop_90*tmp_qloop_98);
                   const real_t q_tmp_3_3 = tmp_qloop_59*(-tmp_qloop_101*tmp_qloop_76 + tmp_qloop_43*(tmp_qloop_102*tmp_qloop_77 + tmp_qloop_103*tmp_qloop_80 + tmp_qloop_45));
                   const real_t q_tmp_3_4 = tmp_qloop_59*(-tmp_qloop_101*tmp_qloop_83 + tmp_qloop_43*(tmp_qloop_102*tmp_qloop_84 + tmp_qloop_103*tmp_qloop_87 + tmp_qloop_45));
                   const real_t q_tmp_3_5 = tmp_qloop_59*(-tmp_qloop_101*tmp_qloop_90 + tmp_qloop_43*(tmp_qloop_102*tmp_qloop_91 + tmp_qloop_103*tmp_qloop_94 + tmp_qloop_45));
                   const real_t q_tmp_4_4 = tmp_qloop_59*(-tmp_qloop_104*tmp_qloop_83 + tmp_qloop_43*(tmp_qloop_105*tmp_qloop_84 + tmp_qloop_106*tmp_qloop_87 + tmp_qloop_45));
                   const real_t q_tmp_4_5 = tmp_qloop_59*(-tmp_qloop_104*tmp_qloop_90 + tmp_qloop_43*(tmp_qloop_105*tmp_qloop_91 + tmp_qloop_106*tmp_qloop_94 + tmp_qloop_45));
                   const real_t q_tmp_5_5 = tmp_qloop_59*(-tmp_qloop_43*tmp_qloop_90*(tmp_qloop_42 + tmp_qloop_88 + tmp_qloop_89) + tmp_qloop_43*(tmp_qloop_45 + tmp_qloop_91*(tmp_qloop_88*1.0 + tmp_qloop_89*1.0) + tmp_qloop_94*(tmp_qloop_52 + tmp_qloop_92*0.5 + tmp_qloop_93*0.5)*2.0));
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
                _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3*operatorScaling + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
