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





























#include "../P2ToP1ElementwiseKMass.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ToP1ElementwiseKMass::applyScaled_P2ToP1ElementwiseKMass_macro_2D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_kEdge, real_t * RESTRICT  _data_kVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling ) const
{
    {
       const real_t _data_q_w [] = {0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949};
   
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
       const real_t abs_det_jac_affine_GRAY = abs(jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_0_0_GRAY [] = {-0.048208377815512182, -0.048208377815512071, -0.084730493093977982, 0.1928335112620482, 0.1928335112620482, 0.79548022620090575, -0.074803807748196338, -0.074803807748196491, 0.5176323419876725, 0.29921523099278596, 0.29921523099278607, 0.033544811523148421, -0.048208377815512155, -0.084730493093977982, -0.048208377815512071, 0.1928335112620482, 0.79548022620090575, 0.1928335112620482, -0.074803807748196227, 0.5176323419876725, -0.074803807748196491, 0.29921523099278596, 0.033544811523148421, 0.29921523099278607, -0.084730493093978398, -0.048208377815512071, -0.048208377815512071, 0.79548022620090564, 0.19283351126204828, 0.19283351126204828, 0.51763234198767272, -0.074803807748196491, -0.074803807748196491, 0.033544811523148449, 0.29921523099278591, 0.29921523099278591};
      
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334336)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778434)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334336)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337108)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778434)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428435066)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_GRAY*-0.0091596220343278505)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373971)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373971)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926711)), ((real_t)(abs_det_jac_affine_GRAY*-0.006850249469692685)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425765)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877074)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877075)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888579)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926685)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425751)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877073)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877074)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888566)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808810999)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_GRAY*0.42282672224882095)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524447)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524458)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770705)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334326)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778434)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*-0.005211471142843504)), ((real_t)(abs_det_jac_affine_GRAY*-0.0091596220343278505)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373971)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373971)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334326)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337108)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778434)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926625)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425779)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926867)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770747)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888588)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770757)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808810909)), ((real_t)(abs_det_jac_affine_GRAY*0.42282672224882095)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524447)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770705)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524458)), ((real_t)(abs_det_jac_affine_GRAY*-0.006850249469692659)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425751)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877073)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888566)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877074)), ((real_t)(abs_det_jac_affine_GRAY*-0.0091596220343278956)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337108)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373978)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373978)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825252)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778429)), ((real_t)(abs_det_jac_affine_GRAY*0.08599381334533715)), ((real_t)(abs_det_jac_affine_GRAY*0.08599381334533715)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825252)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778429)), ((real_t)(abs_det_jac_affine_GRAY*0.08599381334533715)), ((real_t)(abs_det_jac_affine_GRAY*0.08599381334533715)), ((real_t)(abs_det_jac_affine_GRAY*0.42282672224882117)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877073)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524444)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524444)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425772)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888592)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770726)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770726)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425772)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888592)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770726)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770726))};
      
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
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d k_dof_4 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d k_dof_5 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 6; q += 1)
                {
                   const __m256d tmp_qloop_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_set_pd(_data_phi_0_0_GRAY[6*q],_data_phi_0_0_GRAY[6*q],_data_phi_0_0_GRAY[6*q],_data_phi_0_0_GRAY[6*q])),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 1],_data_phi_0_0_GRAY[6*q + 1],_data_phi_0_0_GRAY[6*q + 1],_data_phi_0_0_GRAY[6*q + 1]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 2],_data_phi_0_0_GRAY[6*q + 2],_data_phi_0_0_GRAY[6*q + 2],_data_phi_0_0_GRAY[6*q + 2]))),_mm256_mul_pd(k_dof_3,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 3],_data_phi_0_0_GRAY[6*q + 3],_data_phi_0_0_GRAY[6*q + 3],_data_phi_0_0_GRAY[6*q + 3]))),_mm256_mul_pd(k_dof_4,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 4],_data_phi_0_0_GRAY[6*q + 4],_data_phi_0_0_GRAY[6*q + 4],_data_phi_0_0_GRAY[6*q + 4]))),_mm256_mul_pd(k_dof_5,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 5],_data_phi_0_0_GRAY[6*q + 5],_data_phi_0_0_GRAY[6*q + 5],_data_phi_0_0_GRAY[6*q + 5]))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q]));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q],_data_tabulated_and_untitled_0_0_GRAY[18*q],_data_tabulated_and_untitled_0_0_GRAY[18*q],_data_tabulated_and_untitled_0_0_GRAY[18*q]));
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 1],_data_tabulated_and_untitled_0_0_GRAY[18*q + 1],_data_tabulated_and_untitled_0_0_GRAY[18*q + 1],_data_tabulated_and_untitled_0_0_GRAY[18*q + 1]));
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 2],_data_tabulated_and_untitled_0_0_GRAY[18*q + 2],_data_tabulated_and_untitled_0_0_GRAY[18*q + 2],_data_tabulated_and_untitled_0_0_GRAY[18*q + 2]));
                   const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 3],_data_tabulated_and_untitled_0_0_GRAY[18*q + 3],_data_tabulated_and_untitled_0_0_GRAY[18*q + 3],_data_tabulated_and_untitled_0_0_GRAY[18*q + 3]));
                   const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 4],_data_tabulated_and_untitled_0_0_GRAY[18*q + 4],_data_tabulated_and_untitled_0_0_GRAY[18*q + 4],_data_tabulated_and_untitled_0_0_GRAY[18*q + 4]));
                   const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 5],_data_tabulated_and_untitled_0_0_GRAY[18*q + 5],_data_tabulated_and_untitled_0_0_GRAY[18*q + 5],_data_tabulated_and_untitled_0_0_GRAY[18*q + 5]));
                   const __m256d q_tmp_1_0 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 6],_data_tabulated_and_untitled_0_0_GRAY[18*q + 6],_data_tabulated_and_untitled_0_0_GRAY[18*q + 6],_data_tabulated_and_untitled_0_0_GRAY[18*q + 6]));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 7],_data_tabulated_and_untitled_0_0_GRAY[18*q + 7],_data_tabulated_and_untitled_0_0_GRAY[18*q + 7],_data_tabulated_and_untitled_0_0_GRAY[18*q + 7]));
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 8],_data_tabulated_and_untitled_0_0_GRAY[18*q + 8],_data_tabulated_and_untitled_0_0_GRAY[18*q + 8],_data_tabulated_and_untitled_0_0_GRAY[18*q + 8]));
                   const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 9],_data_tabulated_and_untitled_0_0_GRAY[18*q + 9],_data_tabulated_and_untitled_0_0_GRAY[18*q + 9],_data_tabulated_and_untitled_0_0_GRAY[18*q + 9]));
                   const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 10],_data_tabulated_and_untitled_0_0_GRAY[18*q + 10],_data_tabulated_and_untitled_0_0_GRAY[18*q + 10],_data_tabulated_and_untitled_0_0_GRAY[18*q + 10]));
                   const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 11],_data_tabulated_and_untitled_0_0_GRAY[18*q + 11],_data_tabulated_and_untitled_0_0_GRAY[18*q + 11],_data_tabulated_and_untitled_0_0_GRAY[18*q + 11]));
                   const __m256d q_tmp_2_0 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 12],_data_tabulated_and_untitled_0_0_GRAY[18*q + 12],_data_tabulated_and_untitled_0_0_GRAY[18*q + 12],_data_tabulated_and_untitled_0_0_GRAY[18*q + 12]));
                   const __m256d q_tmp_2_1 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 13],_data_tabulated_and_untitled_0_0_GRAY[18*q + 13],_data_tabulated_and_untitled_0_0_GRAY[18*q + 13],_data_tabulated_and_untitled_0_0_GRAY[18*q + 13]));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 14],_data_tabulated_and_untitled_0_0_GRAY[18*q + 14],_data_tabulated_and_untitled_0_0_GRAY[18*q + 14],_data_tabulated_and_untitled_0_0_GRAY[18*q + 14]));
                   const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 15],_data_tabulated_and_untitled_0_0_GRAY[18*q + 15],_data_tabulated_and_untitled_0_0_GRAY[18*q + 15],_data_tabulated_and_untitled_0_0_GRAY[18*q + 15]));
                   const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 16],_data_tabulated_and_untitled_0_0_GRAY[18*q + 16],_data_tabulated_and_untitled_0_0_GRAY[18*q + 16],_data_tabulated_and_untitled_0_0_GRAY[18*q + 16]));
                   const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[18*q + 17],_data_tabulated_and_untitled_0_0_GRAY[18*q + 17],_data_tabulated_and_untitled_0_0_GRAY[18*q + 17],_data_tabulated_and_untitled_0_0_GRAY[18*q + 17]));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,q_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,q_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,q_tmp_0_3);
                   q_acc_0_4 = _mm256_add_pd(q_acc_0_4,q_tmp_0_4);
                   q_acc_0_5 = _mm256_add_pd(q_acc_0_5,q_tmp_0_5);
                   q_acc_1_0 = _mm256_add_pd(q_acc_1_0,q_tmp_1_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,q_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,q_tmp_1_3);
                   q_acc_1_4 = _mm256_add_pd(q_acc_1_4,q_tmp_1_4);
                   q_acc_1_5 = _mm256_add_pd(q_acc_1_5,q_tmp_1_5);
                   q_acc_2_0 = _mm256_add_pd(q_acc_2_0,q_tmp_2_0);
                   q_acc_2_1 = _mm256_add_pd(q_acc_2_1,q_tmp_2_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,q_tmp_2_3);
                   q_acc_2_4 = _mm256_add_pd(q_acc_2_4,q_tmp_2_4);
                   q_acc_2_5 = _mm256_add_pd(q_acc_2_5,q_tmp_2_5);
                }
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3)),_mm256_mul_pd(q_acc_0_4,src_dof_4)),_mm256_mul_pd(q_acc_0_5,src_dof_5));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3)),_mm256_mul_pd(q_acc_1_4,src_dof_4)),_mm256_mul_pd(q_acc_1_5,src_dof_5));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3)),_mm256_mul_pd(q_acc_2_4,src_dof_4)),_mm256_mul_pd(q_acc_2_5,src_dof_5));
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
                const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t k_dof_3 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_0_4 = 0.0;
                real_t q_acc_0_5 = 0.0;
                real_t q_acc_1_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_1_4 = 0.0;
                real_t q_acc_1_5 = 0.0;
                real_t q_acc_2_0 = 0.0;
                real_t q_acc_2_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_2_4 = 0.0;
                real_t q_acc_2_5 = 0.0;
                for (int64_t q = 0; q < 6; q += 1)
                {
                   const real_t tmp_qloop_0 = (k_dof_0*_data_phi_0_0_GRAY[6*q] + k_dof_1*_data_phi_0_0_GRAY[6*q + 1] + k_dof_2*_data_phi_0_0_GRAY[6*q + 2] + k_dof_3*_data_phi_0_0_GRAY[6*q + 3] + k_dof_4*_data_phi_0_0_GRAY[6*q + 4] + k_dof_5*_data_phi_0_0_GRAY[6*q + 5])*_data_q_w[q];
                   const real_t q_tmp_0_0 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q];
                   const real_t q_tmp_0_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 1];
                   const real_t q_tmp_0_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 2];
                   const real_t q_tmp_0_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 3];
                   const real_t q_tmp_0_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 4];
                   const real_t q_tmp_0_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 5];
                   const real_t q_tmp_1_0 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 6];
                   const real_t q_tmp_1_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 7];
                   const real_t q_tmp_1_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 8];
                   const real_t q_tmp_1_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 9];
                   const real_t q_tmp_1_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 10];
                   const real_t q_tmp_1_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 11];
                   const real_t q_tmp_2_0 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 12];
                   const real_t q_tmp_2_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 13];
                   const real_t q_tmp_2_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 14];
                   const real_t q_tmp_2_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 15];
                   const real_t q_tmp_2_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 16];
                   const real_t q_tmp_2_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[18*q + 17];
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                   q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                   q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                   q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                   q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                   q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                   q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                   q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                   q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                   q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                   q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                   q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                }
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
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
       const real_t jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const real_t jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const real_t jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const real_t jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const real_t abs_det_jac_affine_BLUE = abs(jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE);
       {
          /* FaceType.BLUE */
          const real_t _data_phi_0_0_BLUE [] = {-0.048208377815512182, -0.048208377815512071, -0.084730493093977982, 0.1928335112620482, 0.1928335112620482, 0.79548022620090575, -0.074803807748196338, -0.074803807748196491, 0.5176323419876725, 0.29921523099278596, 0.29921523099278607, 0.033544811523148421, -0.048208377815512155, -0.084730493093977982, -0.048208377815512071, 0.1928335112620482, 0.79548022620090575, 0.1928335112620482, -0.074803807748196227, 0.5176323419876725, -0.074803807748196491, 0.29921523099278596, 0.033544811523148421, 0.29921523099278607, -0.084730493093978398, -0.048208377815512071, -0.048208377815512071, 0.79548022620090564, 0.19283351126204828, 0.19283351126204828, 0.51763234198767272, -0.074803807748196491, -0.074803807748196491, 0.033544811523148449, 0.29921523099278591, 0.29921523099278591};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334336)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778434)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334336)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337108)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778434)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428435066)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_BLUE*-0.0091596220343278505)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373971)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373971)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926711)), ((real_t)(abs_det_jac_affine_BLUE*-0.006850249469692685)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425765)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877074)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877075)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888579)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926685)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425751)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877073)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877074)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888566)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808810999)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_BLUE*0.42282672224882095)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524447)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524458)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770705)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334326)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778434)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*-0.005211471142843504)), ((real_t)(abs_det_jac_affine_BLUE*-0.0091596220343278505)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373971)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373971)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334326)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337108)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778434)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926625)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425779)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926867)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770747)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888588)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770757)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808810909)), ((real_t)(abs_det_jac_affine_BLUE*0.42282672224882095)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524447)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770705)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524458)), ((real_t)(abs_det_jac_affine_BLUE*-0.006850249469692659)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425751)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877073)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888566)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877074)), ((real_t)(abs_det_jac_affine_BLUE*-0.0091596220343278956)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337108)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373978)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373978)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825252)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778429)), ((real_t)(abs_det_jac_affine_BLUE*0.08599381334533715)), ((real_t)(abs_det_jac_affine_BLUE*0.08599381334533715)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825252)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778429)), ((real_t)(abs_det_jac_affine_BLUE*0.08599381334533715)), ((real_t)(abs_det_jac_affine_BLUE*0.08599381334533715)), ((real_t)(abs_det_jac_affine_BLUE*0.42282672224882117)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877073)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524444)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524444)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425772)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888592)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770726)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770726)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425772)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888592)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770726)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770726))};
      
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
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_4 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d k_dof_5 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 6; q += 1)
                {
                   const __m256d tmp_qloop_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_set_pd(_data_phi_0_0_BLUE[6*q],_data_phi_0_0_BLUE[6*q],_data_phi_0_0_BLUE[6*q],_data_phi_0_0_BLUE[6*q])),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 1],_data_phi_0_0_BLUE[6*q + 1],_data_phi_0_0_BLUE[6*q + 1],_data_phi_0_0_BLUE[6*q + 1]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 2],_data_phi_0_0_BLUE[6*q + 2],_data_phi_0_0_BLUE[6*q + 2],_data_phi_0_0_BLUE[6*q + 2]))),_mm256_mul_pd(k_dof_3,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 3],_data_phi_0_0_BLUE[6*q + 3],_data_phi_0_0_BLUE[6*q + 3],_data_phi_0_0_BLUE[6*q + 3]))),_mm256_mul_pd(k_dof_4,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 4],_data_phi_0_0_BLUE[6*q + 4],_data_phi_0_0_BLUE[6*q + 4],_data_phi_0_0_BLUE[6*q + 4]))),_mm256_mul_pd(k_dof_5,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 5],_data_phi_0_0_BLUE[6*q + 5],_data_phi_0_0_BLUE[6*q + 5],_data_phi_0_0_BLUE[6*q + 5]))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q]));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q],_data_tabulated_and_untitled_0_0_BLUE[18*q],_data_tabulated_and_untitled_0_0_BLUE[18*q],_data_tabulated_and_untitled_0_0_BLUE[18*q]));
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 1],_data_tabulated_and_untitled_0_0_BLUE[18*q + 1],_data_tabulated_and_untitled_0_0_BLUE[18*q + 1],_data_tabulated_and_untitled_0_0_BLUE[18*q + 1]));
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 2],_data_tabulated_and_untitled_0_0_BLUE[18*q + 2],_data_tabulated_and_untitled_0_0_BLUE[18*q + 2],_data_tabulated_and_untitled_0_0_BLUE[18*q + 2]));
                   const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 3],_data_tabulated_and_untitled_0_0_BLUE[18*q + 3],_data_tabulated_and_untitled_0_0_BLUE[18*q + 3],_data_tabulated_and_untitled_0_0_BLUE[18*q + 3]));
                   const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 4],_data_tabulated_and_untitled_0_0_BLUE[18*q + 4],_data_tabulated_and_untitled_0_0_BLUE[18*q + 4],_data_tabulated_and_untitled_0_0_BLUE[18*q + 4]));
                   const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 5],_data_tabulated_and_untitled_0_0_BLUE[18*q + 5],_data_tabulated_and_untitled_0_0_BLUE[18*q + 5],_data_tabulated_and_untitled_0_0_BLUE[18*q + 5]));
                   const __m256d q_tmp_1_0 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 6],_data_tabulated_and_untitled_0_0_BLUE[18*q + 6],_data_tabulated_and_untitled_0_0_BLUE[18*q + 6],_data_tabulated_and_untitled_0_0_BLUE[18*q + 6]));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 7],_data_tabulated_and_untitled_0_0_BLUE[18*q + 7],_data_tabulated_and_untitled_0_0_BLUE[18*q + 7],_data_tabulated_and_untitled_0_0_BLUE[18*q + 7]));
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 8],_data_tabulated_and_untitled_0_0_BLUE[18*q + 8],_data_tabulated_and_untitled_0_0_BLUE[18*q + 8],_data_tabulated_and_untitled_0_0_BLUE[18*q + 8]));
                   const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 9],_data_tabulated_and_untitled_0_0_BLUE[18*q + 9],_data_tabulated_and_untitled_0_0_BLUE[18*q + 9],_data_tabulated_and_untitled_0_0_BLUE[18*q + 9]));
                   const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 10],_data_tabulated_and_untitled_0_0_BLUE[18*q + 10],_data_tabulated_and_untitled_0_0_BLUE[18*q + 10],_data_tabulated_and_untitled_0_0_BLUE[18*q + 10]));
                   const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 11],_data_tabulated_and_untitled_0_0_BLUE[18*q + 11],_data_tabulated_and_untitled_0_0_BLUE[18*q + 11],_data_tabulated_and_untitled_0_0_BLUE[18*q + 11]));
                   const __m256d q_tmp_2_0 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 12],_data_tabulated_and_untitled_0_0_BLUE[18*q + 12],_data_tabulated_and_untitled_0_0_BLUE[18*q + 12],_data_tabulated_and_untitled_0_0_BLUE[18*q + 12]));
                   const __m256d q_tmp_2_1 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 13],_data_tabulated_and_untitled_0_0_BLUE[18*q + 13],_data_tabulated_and_untitled_0_0_BLUE[18*q + 13],_data_tabulated_and_untitled_0_0_BLUE[18*q + 13]));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 14],_data_tabulated_and_untitled_0_0_BLUE[18*q + 14],_data_tabulated_and_untitled_0_0_BLUE[18*q + 14],_data_tabulated_and_untitled_0_0_BLUE[18*q + 14]));
                   const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 15],_data_tabulated_and_untitled_0_0_BLUE[18*q + 15],_data_tabulated_and_untitled_0_0_BLUE[18*q + 15],_data_tabulated_and_untitled_0_0_BLUE[18*q + 15]));
                   const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 16],_data_tabulated_and_untitled_0_0_BLUE[18*q + 16],_data_tabulated_and_untitled_0_0_BLUE[18*q + 16],_data_tabulated_and_untitled_0_0_BLUE[18*q + 16]));
                   const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[18*q + 17],_data_tabulated_and_untitled_0_0_BLUE[18*q + 17],_data_tabulated_and_untitled_0_0_BLUE[18*q + 17],_data_tabulated_and_untitled_0_0_BLUE[18*q + 17]));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,q_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,q_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,q_tmp_0_3);
                   q_acc_0_4 = _mm256_add_pd(q_acc_0_4,q_tmp_0_4);
                   q_acc_0_5 = _mm256_add_pd(q_acc_0_5,q_tmp_0_5);
                   q_acc_1_0 = _mm256_add_pd(q_acc_1_0,q_tmp_1_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,q_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,q_tmp_1_3);
                   q_acc_1_4 = _mm256_add_pd(q_acc_1_4,q_tmp_1_4);
                   q_acc_1_5 = _mm256_add_pd(q_acc_1_5,q_tmp_1_5);
                   q_acc_2_0 = _mm256_add_pd(q_acc_2_0,q_tmp_2_0);
                   q_acc_2_1 = _mm256_add_pd(q_acc_2_1,q_tmp_2_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,q_tmp_2_3);
                   q_acc_2_4 = _mm256_add_pd(q_acc_2_4,q_tmp_2_4);
                   q_acc_2_5 = _mm256_add_pd(q_acc_2_5,q_tmp_2_5);
                }
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3)),_mm256_mul_pd(q_acc_0_4,src_dof_4)),_mm256_mul_pd(q_acc_0_5,src_dof_5));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3)),_mm256_mul_pd(q_acc_1_4,src_dof_4)),_mm256_mul_pd(q_acc_1_5,src_dof_5));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3)),_mm256_mul_pd(q_acc_2_4,src_dof_4)),_mm256_mul_pd(q_acc_2_5,src_dof_5));
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
                const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_1 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t src_dof_3 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t k_dof_3 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_0_4 = 0.0;
                real_t q_acc_0_5 = 0.0;
                real_t q_acc_1_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_1_4 = 0.0;
                real_t q_acc_1_5 = 0.0;
                real_t q_acc_2_0 = 0.0;
                real_t q_acc_2_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_2_4 = 0.0;
                real_t q_acc_2_5 = 0.0;
                for (int64_t q = 0; q < 6; q += 1)
                {
                   const real_t tmp_qloop_0 = (k_dof_0*_data_phi_0_0_BLUE[6*q] + k_dof_1*_data_phi_0_0_BLUE[6*q + 1] + k_dof_2*_data_phi_0_0_BLUE[6*q + 2] + k_dof_3*_data_phi_0_0_BLUE[6*q + 3] + k_dof_4*_data_phi_0_0_BLUE[6*q + 4] + k_dof_5*_data_phi_0_0_BLUE[6*q + 5])*_data_q_w[q];
                   const real_t q_tmp_0_0 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q];
                   const real_t q_tmp_0_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 1];
                   const real_t q_tmp_0_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 2];
                   const real_t q_tmp_0_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 3];
                   const real_t q_tmp_0_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 4];
                   const real_t q_tmp_0_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 5];
                   const real_t q_tmp_1_0 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 6];
                   const real_t q_tmp_1_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 7];
                   const real_t q_tmp_1_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 8];
                   const real_t q_tmp_1_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 9];
                   const real_t q_tmp_1_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 10];
                   const real_t q_tmp_1_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 11];
                   const real_t q_tmp_2_0 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 12];
                   const real_t q_tmp_2_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 13];
                   const real_t q_tmp_2_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 14];
                   const real_t q_tmp_2_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 15];
                   const real_t q_tmp_2_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 16];
                   const real_t q_tmp_2_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[18*q + 17];
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                   q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                   q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                   q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                   q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                   q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                   q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                   q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                   q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                   q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                   q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                   q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                }
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
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
