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

































#include "../P1ToP2VectorElementwiseRhoGMassAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ToP2VectorElementwiseRhoGMassAnnulusMap::applyScaled_P1ToP2VectorElementwiseRhoGMassAnnulusMap_macro_2D( real_t * RESTRICT  _data_dst_edge_0, real_t * RESTRICT  _data_dst_edge_1, real_t * RESTRICT  _data_dst_vertex_0, real_t * RESTRICT  _data_dst_vertex_1, real_t * RESTRICT  _data_rho, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t abs_det_jac_affine_GRAY = abs(jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY);
       const real_t tmp_qloop_3 = rayVertex_1 - thrVertex_1;
       const real_t tmp_qloop_4 = -tmp_qloop_3;
       const real_t tmp_qloop_12 = rayVertex_0 - refVertex_0;
       const real_t tmp_qloop_13 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_14 = -tmp_qloop_13;
       const real_t tmp_qloop_15 = rayVertex_1 - refVertex_1;
       const real_t tmp_qloop_16 = 1.0 / (-tmp_qloop_12*tmp_qloop_4 + tmp_qloop_14*tmp_qloop_15);
       const real_t tmp_qloop_17 = radRayVertex - radRefVertex;
       const real_t tmp_qloop_18 = -tmp_qloop_17;
       const real_t tmp_qloop_19 = tmp_qloop_16*tmp_qloop_18;
       const real_t tmp_qloop_20 = tmp_qloop_19*1.0;
       {
          /* FaceType.GRAY */
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*0.33333333333333343)), ((real_t)(abs_det_jac_affine_GRAY*0.33333333333333331)), ((real_t)(abs_det_jac_affine_GRAY*0.33333333333333331)), ((real_t)(abs_det_jac_affine_GRAY*0.20000000000000007)), ((real_t)(abs_det_jac_affine_GRAY*0.20000000000000001)), ((real_t)(abs_det_jac_affine_GRAY*0.59999999999999998)), ((real_t)(abs_det_jac_affine_GRAY*0.20000000000000001)), ((real_t)(abs_det_jac_affine_GRAY*0.59999999999999998)), ((real_t)(abs_det_jac_affine_GRAY*0.20000000000000001)), ((real_t)(abs_det_jac_affine_GRAY*0.60000000000000009)), ((real_t)(abs_det_jac_affine_GRAY*0.20000000000000001)), ((real_t)(abs_det_jac_affine_GRAY*0.20000000000000001))};
      
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
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d rho_dof_0 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d rho_dof_1 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d rho_dof_2 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_6_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_6_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_6_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_7_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_7_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_7_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_8_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_8_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_8_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_9_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_9_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_9_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_10_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_10_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_10_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_11_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_11_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_11_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_qloop_1 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                   const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_2);
                   const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                   const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,tmp_qloop_8);
                   const __m256d tmp_qloop_10 = _mm256_add_pd(tmp_qloop_5,tmp_qloop_9);
                   const __m256d tmp_qloop_11 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_10));
                   const __m256d tmp_qloop_21 = _mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                   const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                   const __m256d tmp_qloop_23 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10));
                   const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_2),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14))),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                   const __m256d tmp_qloop_25 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_24);
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                   const __m256d tmp_qloop_28 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_26);
                   const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                   const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                   const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_5);
                   const __m256d tmp_qloop_34 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10),tmp_qloop_10)),tmp_qloop_24),_mm256_set_pd(3.0,3.0,3.0,3.0));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_34),tmp_qloop_9);
                   const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_32,tmp_qloop_9));
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13));
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_8);
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_38);
                   const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_41 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,tmp_qloop_5),tmp_qloop_8);
                   const __m256d tmp_qloop_42 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_8));
                   const __m256d tmp_qloop_43 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_38);
                   const __m256d tmp_qloop_44 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_31,tmp_qloop_38),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                   const __m256d tmp_qloop_45 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_46 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_47 = _mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_48 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_49 = _mm256_mul_pd(tmp_qloop_48,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_50 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_45),tmp_qloop_47),tmp_qloop_49);
                   const __m256d tmp_qloop_51 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_qloop_53 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_51,tmp_qloop_51),_mm256_mul_pd(tmp_qloop_52,tmp_qloop_52))))))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_51,tmp_qloop_51),_mm256_mul_pd(tmp_qloop_52,tmp_qloop_52))))))));
                   const __m256d tmp_qloop_54 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_qloop_52),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_qloop_51),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_15,tmp_qloop_15,tmp_qloop_15,tmp_qloop_15))))),_mm256_set_pd(tmp_qloop_17,tmp_qloop_17,tmp_qloop_17,tmp_qloop_17)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                   const __m256d tmp_qloop_58 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_47);
                   const __m256d tmp_qloop_60 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_49);
                   const __m256d tmp_qloop_63 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_48,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_65 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_22),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_9));
                   const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_27),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_23),tmp_qloop_24),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,tmp_qloop_8),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_27,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_24),tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_30 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_29);
                   const __m256d abs_det_jac_blending = tmp_qloop_29;
                   const __m256d tmp_qloop_55 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(abs_det_jac_blending,tmp_qloop_11),tmp_qloop_24),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_53,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_51,tmp_qloop_54)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_51,tmp_qloop_54)))))),_mm256_mul_pd(tmp_qloop_53,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_52,tmp_qloop_54)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_52,tmp_qloop_54)))))))))),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(rho_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(rho_dof_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(_mm256_mul_pd(rho_dof_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q]));
                   const __m256d tmp_qloop_56 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_55);
                   const __m256d tmp_qloop_57 = _mm256_mul_pd(tmp_qloop_50,tmp_qloop_56);
                   const __m256d tmp_qloop_59 = _mm256_mul_pd(tmp_qloop_56,tmp_qloop_58);
                   const __m256d tmp_qloop_61 = _mm256_mul_pd(tmp_qloop_56,tmp_qloop_60);
                   const __m256d tmp_qloop_62 = _mm256_mul_pd(tmp_qloop_45,tmp_qloop_56);
                   const __m256d tmp_qloop_64 = _mm256_mul_pd(tmp_qloop_56,tmp_qloop_63);
                   const __m256d tmp_qloop_66 = _mm256_mul_pd(tmp_qloop_56,tmp_qloop_65);
                   const __m256d tmp_qloop_67 = _mm256_mul_pd(tmp_qloop_55,tmp_qloop_8);
                   const __m256d tmp_qloop_68 = _mm256_mul_pd(tmp_qloop_50,tmp_qloop_67);
                   const __m256d tmp_qloop_69 = _mm256_mul_pd(tmp_qloop_58,tmp_qloop_67);
                   const __m256d tmp_qloop_70 = _mm256_mul_pd(tmp_qloop_60,tmp_qloop_67);
                   const __m256d tmp_qloop_71 = _mm256_mul_pd(tmp_qloop_45,tmp_qloop_67);
                   const __m256d tmp_qloop_72 = _mm256_mul_pd(tmp_qloop_63,tmp_qloop_67);
                   const __m256d tmp_qloop_73 = _mm256_mul_pd(tmp_qloop_65,tmp_qloop_67);
                   const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_30);
                   const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_30);
                   const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_22),tmp_qloop_36);
                   const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_9)),_mm256_mul_pd(tmp_qloop_40,tmp_qloop_8)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_8,tmp_qloop_8),tmp_qloop_8)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_38),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                   const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                   const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                   const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_35),tmp_qloop_44);
                   const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_40),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_2),tmp_qloop_2),tmp_qloop_34),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_33),tmp_qloop_44);
                   const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_9),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_1_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_59,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_59,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_59,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_2_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_2_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_3_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_62,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_3_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_62,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_3_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_62,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_4_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_64,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_4_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_64,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_4_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_64,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_5_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_66,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_5_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_66,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_5_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_66,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_6_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_6_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_6_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_7_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_7_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_7_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_8_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_70,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_8_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_70,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_8_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_70,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_9_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_71,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_9_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_71,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_9_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_71,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_10_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_72,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_10_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_72,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_10_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_72,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   const __m256d q_tmp_11_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_73,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q],_data_tabulated_and_untitled_0_0_GRAY[3*q]));
                   const __m256d q_tmp_11_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_73,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1],_data_tabulated_and_untitled_0_0_GRAY[3*q + 1]));
                   const __m256d q_tmp_11_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_73,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2],_data_tabulated_and_untitled_0_0_GRAY[3*q + 2]));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,q_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,q_tmp_0_2);
                   q_acc_1_0 = _mm256_add_pd(q_acc_1_0,q_tmp_1_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,q_tmp_1_2);
                   q_acc_2_0 = _mm256_add_pd(q_acc_2_0,q_tmp_2_0);
                   q_acc_2_1 = _mm256_add_pd(q_acc_2_1,q_tmp_2_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_3_0 = _mm256_add_pd(q_acc_3_0,q_tmp_3_0);
                   q_acc_3_1 = _mm256_add_pd(q_acc_3_1,q_tmp_3_1);
                   q_acc_3_2 = _mm256_add_pd(q_acc_3_2,q_tmp_3_2);
                   q_acc_4_0 = _mm256_add_pd(q_acc_4_0,q_tmp_4_0);
                   q_acc_4_1 = _mm256_add_pd(q_acc_4_1,q_tmp_4_1);
                   q_acc_4_2 = _mm256_add_pd(q_acc_4_2,q_tmp_4_2);
                   q_acc_5_0 = _mm256_add_pd(q_acc_5_0,q_tmp_5_0);
                   q_acc_5_1 = _mm256_add_pd(q_acc_5_1,q_tmp_5_1);
                   q_acc_5_2 = _mm256_add_pd(q_acc_5_2,q_tmp_5_2);
                   q_acc_6_0 = _mm256_add_pd(q_acc_6_0,q_tmp_6_0);
                   q_acc_6_1 = _mm256_add_pd(q_acc_6_1,q_tmp_6_1);
                   q_acc_6_2 = _mm256_add_pd(q_acc_6_2,q_tmp_6_2);
                   q_acc_7_0 = _mm256_add_pd(q_acc_7_0,q_tmp_7_0);
                   q_acc_7_1 = _mm256_add_pd(q_acc_7_1,q_tmp_7_1);
                   q_acc_7_2 = _mm256_add_pd(q_acc_7_2,q_tmp_7_2);
                   q_acc_8_0 = _mm256_add_pd(q_acc_8_0,q_tmp_8_0);
                   q_acc_8_1 = _mm256_add_pd(q_acc_8_1,q_tmp_8_1);
                   q_acc_8_2 = _mm256_add_pd(q_acc_8_2,q_tmp_8_2);
                   q_acc_9_0 = _mm256_add_pd(q_acc_9_0,q_tmp_9_0);
                   q_acc_9_1 = _mm256_add_pd(q_acc_9_1,q_tmp_9_1);
                   q_acc_9_2 = _mm256_add_pd(q_acc_9_2,q_tmp_9_2);
                   q_acc_10_0 = _mm256_add_pd(q_acc_10_0,q_tmp_10_0);
                   q_acc_10_1 = _mm256_add_pd(q_acc_10_1,q_tmp_10_1);
                   q_acc_10_2 = _mm256_add_pd(q_acc_10_2,q_tmp_10_2);
                   q_acc_11_0 = _mm256_add_pd(q_acc_11_0,q_tmp_11_0);
                   q_acc_11_1 = _mm256_add_pd(q_acc_11_1,q_tmp_11_1);
                   q_acc_11_2 = _mm256_add_pd(q_acc_11_2,q_tmp_11_2);
                }
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_3_0,src_dof_0),_mm256_mul_pd(q_acc_3_1,src_dof_1)),_mm256_mul_pd(q_acc_3_2,src_dof_2));
                const __m256d elMatVec_4 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_4_0,src_dof_0),_mm256_mul_pd(q_acc_4_1,src_dof_1)),_mm256_mul_pd(q_acc_4_2,src_dof_2));
                const __m256d elMatVec_5 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_5_0,src_dof_0),_mm256_mul_pd(q_acc_5_1,src_dof_1)),_mm256_mul_pd(q_acc_5_2,src_dof_2));
                const __m256d elMatVec_6 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_6_0,src_dof_0),_mm256_mul_pd(q_acc_6_1,src_dof_1)),_mm256_mul_pd(q_acc_6_2,src_dof_2));
                const __m256d elMatVec_7 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_7_0,src_dof_0),_mm256_mul_pd(q_acc_7_1,src_dof_1)),_mm256_mul_pd(q_acc_7_2,src_dof_2));
                const __m256d elMatVec_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_8_0,src_dof_0),_mm256_mul_pd(q_acc_8_1,src_dof_1)),_mm256_mul_pd(q_acc_8_2,src_dof_2));
                const __m256d elMatVec_9 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_9_0,src_dof_0),_mm256_mul_pd(q_acc_9_1,src_dof_1)),_mm256_mul_pd(q_acc_9_2,src_dof_2));
                const __m256d elMatVec_10 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_10_0,src_dof_0),_mm256_mul_pd(q_acc_10_1,src_dof_1)),_mm256_mul_pd(q_acc_10_2,src_dof_2));
                const __m256d elMatVec_11 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_11_0,src_dof_0),_mm256_mul_pd(q_acc_11_1,src_dof_1)),_mm256_mul_pd(q_acc_11_2,src_dof_2));
                _mm256_storeu_pd(&_data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_0,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_1,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_2,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_3,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_4,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_5,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_6,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_7,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_8,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_9,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_10,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_11,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
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
                const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_1_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_2_0 = 0.0;
                real_t q_acc_2_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_3_0 = 0.0;
                real_t q_acc_3_1 = 0.0;
                real_t q_acc_3_2 = 0.0;
                real_t q_acc_4_0 = 0.0;
                real_t q_acc_4_1 = 0.0;
                real_t q_acc_4_2 = 0.0;
                real_t q_acc_5_0 = 0.0;
                real_t q_acc_5_1 = 0.0;
                real_t q_acc_5_2 = 0.0;
                real_t q_acc_6_0 = 0.0;
                real_t q_acc_6_1 = 0.0;
                real_t q_acc_6_2 = 0.0;
                real_t q_acc_7_0 = 0.0;
                real_t q_acc_7_1 = 0.0;
                real_t q_acc_7_2 = 0.0;
                real_t q_acc_8_0 = 0.0;
                real_t q_acc_8_1 = 0.0;
                real_t q_acc_8_2 = 0.0;
                real_t q_acc_9_0 = 0.0;
                real_t q_acc_9_1 = 0.0;
                real_t q_acc_9_2 = 0.0;
                real_t q_acc_10_0 = 0.0;
                real_t q_acc_10_1 = 0.0;
                real_t q_acc_10_2 = 0.0;
                real_t q_acc_11_0 = 0.0;
                real_t q_acc_11_1 = 0.0;
                real_t q_acc_11_2 = 0.0;
                const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                const real_t tmp_qloop_1 = p_affine_0_0 - p_affine_2_0;
                const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_qloop_2 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_1*_data_q_p_1[q];
                   const real_t tmp_qloop_5 = (tmp_qloop_2*tmp_qloop_2);
                   const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                   const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                   const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                   const real_t tmp_qloop_11 = pow(tmp_qloop_10, -0.50000000000000000);
                   const real_t tmp_qloop_21 = tmp_qloop_11*tmp_qloop_20;
                   const real_t tmp_qloop_22 = tmp_qloop_21*tmp_qloop_4;
                   const real_t tmp_qloop_23 = pow(tmp_qloop_10, -1.5000000000000000);
                   const real_t tmp_qloop_24 = radRayVertex + tmp_qloop_19*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_8) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_2));
                   const real_t tmp_qloop_25 = tmp_qloop_23*tmp_qloop_24;
                   const real_t tmp_qloop_26 = tmp_qloop_25*1.0;
                   const real_t tmp_qloop_27 = tmp_qloop_14*tmp_qloop_21;
                   const real_t tmp_qloop_28 = tmp_qloop_2*tmp_qloop_26;
                   const real_t tmp_qloop_31 = tmp_qloop_20*tmp_qloop_23;
                   const real_t tmp_qloop_32 = tmp_qloop_31*tmp_qloop_4;
                   const real_t tmp_qloop_33 = tmp_qloop_32*tmp_qloop_5;
                   const real_t tmp_qloop_34 = pow(tmp_qloop_10, -2.5000000000000000)*tmp_qloop_24*3.0;
                   const real_t tmp_qloop_35 = tmp_qloop_2*tmp_qloop_34*tmp_qloop_9;
                   const real_t tmp_qloop_36 = tmp_qloop_32*tmp_qloop_9 - tmp_qloop_35;
                   const real_t tmp_qloop_37 = tmp_qloop_13*tmp_qloop_31;
                   const real_t tmp_qloop_38 = tmp_qloop_2*tmp_qloop_8;
                   const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_38;
                   const real_t tmp_qloop_40 = tmp_qloop_25*2.0;
                   const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_5*tmp_qloop_8;
                   const real_t tmp_qloop_42 = tmp_qloop_26*tmp_qloop_8 - tmp_qloop_41;
                   const real_t tmp_qloop_43 = tmp_qloop_37*tmp_qloop_38;
                   const real_t tmp_qloop_44 = tmp_qloop_14*tmp_qloop_31*tmp_qloop_38;
                   const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                   const real_t tmp_qloop_46 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_qloop_47 = tmp_qloop_46*2.0;
                   const real_t tmp_qloop_48 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_qloop_49 = tmp_qloop_48*2.0;
                   const real_t tmp_qloop_50 = tmp_qloop_45 + tmp_qloop_47 + tmp_qloop_49 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                   const real_t tmp_qloop_51 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                   const real_t tmp_qloop_52 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                   const real_t tmp_qloop_53 = 1.0 / (abs(pow((tmp_qloop_51*tmp_qloop_51) + (tmp_qloop_52*tmp_qloop_52), 0.50000000000000000))*abs(pow((tmp_qloop_51*tmp_qloop_51) + (tmp_qloop_52*tmp_qloop_52), 0.50000000000000000)));
                   const real_t tmp_qloop_54 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_52) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_51));
                   const real_t tmp_qloop_58 = tmp_qloop_47 - _data_q_p_0[q];
                   const real_t tmp_qloop_60 = tmp_qloop_49 - _data_q_p_1[q];
                   const real_t tmp_qloop_63 = -tmp_qloop_45 + tmp_qloop_48*-4.0 + 4.0*_data_q_p_1[q];
                   const real_t tmp_qloop_65 = -tmp_qloop_45 + tmp_qloop_46*-4.0 + 4.0*_data_q_p_0[q];
                   const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                   const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                   const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                   const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                   const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                   const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                   const real_t abs_det_jac_blending = tmp_qloop_29;
                   const real_t tmp_qloop_55 = abs_det_jac_blending*tmp_qloop_11*tmp_qloop_24*pow(tmp_qloop_53*(abs(tmp_qloop_51*tmp_qloop_54)*abs(tmp_qloop_51*tmp_qloop_54)) + tmp_qloop_53*(abs(tmp_qloop_52*tmp_qloop_54)*abs(tmp_qloop_52*tmp_qloop_54)), -0.50000000000000000)*(-rho_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) - rho_dof_1*_data_q_p_0[q] - rho_dof_2*_data_q_p_1[q])*_data_q_w[q];
                   const real_t tmp_qloop_56 = tmp_qloop_2*tmp_qloop_55;
                   const real_t tmp_qloop_57 = tmp_qloop_50*tmp_qloop_56;
                   const real_t tmp_qloop_59 = tmp_qloop_56*tmp_qloop_58;
                   const real_t tmp_qloop_61 = tmp_qloop_56*tmp_qloop_60;
                   const real_t tmp_qloop_62 = tmp_qloop_45*tmp_qloop_56;
                   const real_t tmp_qloop_64 = tmp_qloop_56*tmp_qloop_63;
                   const real_t tmp_qloop_66 = tmp_qloop_56*tmp_qloop_65;
                   const real_t tmp_qloop_67 = tmp_qloop_55*tmp_qloop_8;
                   const real_t tmp_qloop_68 = tmp_qloop_50*tmp_qloop_67;
                   const real_t tmp_qloop_69 = tmp_qloop_58*tmp_qloop_67;
                   const real_t tmp_qloop_70 = tmp_qloop_60*tmp_qloop_67;
                   const real_t tmp_qloop_71 = tmp_qloop_45*tmp_qloop_67;
                   const real_t tmp_qloop_72 = tmp_qloop_63*tmp_qloop_67;
                   const real_t tmp_qloop_73 = tmp_qloop_65*tmp_qloop_67;
                   const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                   const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                   const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                   const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                   const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                   const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                   const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                   const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                   const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                   const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                   const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                   const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                   const real_t q_tmp_0_0 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_0_1 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_0_2 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_1_0 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_1_1 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_1_2 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_2_0 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_2_1 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_2_2 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_3_0 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_3_1 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_3_2 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_4_0 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_4_1 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_4_2 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_5_0 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_5_1 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_5_2 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_6_0 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_6_1 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_6_2 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_7_0 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_7_1 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_7_2 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_8_0 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_8_1 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_8_2 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_9_0 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_9_1 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_9_2 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_10_0 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_10_1 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_10_2 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   const real_t q_tmp_11_0 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_GRAY[3*q];
                   const real_t q_tmp_11_1 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_GRAY[3*q + 1];
                   const real_t q_tmp_11_2 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_GRAY[3*q + 2];
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                   q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                   q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                   q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                   q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                   q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                   q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                   q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                   q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                   q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                   q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                   q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                   q_acc_6_0 = q_acc_6_0 + q_tmp_6_0;
                   q_acc_6_1 = q_acc_6_1 + q_tmp_6_1;
                   q_acc_6_2 = q_acc_6_2 + q_tmp_6_2;
                   q_acc_7_0 = q_acc_7_0 + q_tmp_7_0;
                   q_acc_7_1 = q_acc_7_1 + q_tmp_7_1;
                   q_acc_7_2 = q_acc_7_2 + q_tmp_7_2;
                   q_acc_8_0 = q_acc_8_0 + q_tmp_8_0;
                   q_acc_8_1 = q_acc_8_1 + q_tmp_8_1;
                   q_acc_8_2 = q_acc_8_2 + q_tmp_8_2;
                   q_acc_9_0 = q_acc_9_0 + q_tmp_9_0;
                   q_acc_9_1 = q_acc_9_1 + q_tmp_9_1;
                   q_acc_9_2 = q_acc_9_2 + q_tmp_9_2;
                   q_acc_10_0 = q_acc_10_0 + q_tmp_10_0;
                   q_acc_10_1 = q_acc_10_1 + q_tmp_10_1;
                   q_acc_10_2 = q_acc_10_2 + q_tmp_10_2;
                   q_acc_11_0 = q_acc_11_0 + q_tmp_11_0;
                   q_acc_11_1 = q_acc_11_1 + q_tmp_11_1;
                   q_acc_11_2 = q_acc_11_2 + q_tmp_11_2;
                }
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2;
                const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2;
                const real_t elMatVec_4 = q_acc_4_0*src_dof_0 + q_acc_4_1*src_dof_1 + q_acc_4_2*src_dof_2;
                const real_t elMatVec_5 = q_acc_5_0*src_dof_0 + q_acc_5_1*src_dof_1 + q_acc_5_2*src_dof_2;
                const real_t elMatVec_6 = q_acc_6_0*src_dof_0 + q_acc_6_1*src_dof_1 + q_acc_6_2*src_dof_2;
                const real_t elMatVec_7 = q_acc_7_0*src_dof_0 + q_acc_7_1*src_dof_1 + q_acc_7_2*src_dof_2;
                const real_t elMatVec_8 = q_acc_8_0*src_dof_0 + q_acc_8_1*src_dof_1 + q_acc_8_2*src_dof_2;
                const real_t elMatVec_9 = q_acc_9_0*src_dof_0 + q_acc_9_1*src_dof_1 + q_acc_9_2*src_dof_2;
                const real_t elMatVec_10 = q_acc_10_0*src_dof_0 + q_acc_10_1*src_dof_1 + q_acc_10_2*src_dof_2;
                const real_t elMatVec_11 = q_acc_11_0*src_dof_0 + q_acc_11_1*src_dof_1 + q_acc_11_2*src_dof_2;
                _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0*operatorScaling + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1*operatorScaling + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2*operatorScaling + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_6*operatorScaling + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_7*operatorScaling + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_8*operatorScaling + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_9*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_10*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_11*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*0.33333333333333343)), ((real_t)(abs_det_jac_affine_BLUE*0.33333333333333331)), ((real_t)(abs_det_jac_affine_BLUE*0.33333333333333331)), ((real_t)(abs_det_jac_affine_BLUE*0.20000000000000007)), ((real_t)(abs_det_jac_affine_BLUE*0.20000000000000001)), ((real_t)(abs_det_jac_affine_BLUE*0.59999999999999998)), ((real_t)(abs_det_jac_affine_BLUE*0.20000000000000001)), ((real_t)(abs_det_jac_affine_BLUE*0.59999999999999998)), ((real_t)(abs_det_jac_affine_BLUE*0.20000000000000001)), ((real_t)(abs_det_jac_affine_BLUE*0.60000000000000009)), ((real_t)(abs_det_jac_affine_BLUE*0.20000000000000001)), ((real_t)(abs_det_jac_affine_BLUE*0.20000000000000001))};
      
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
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d rho_dof_0 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d rho_dof_1 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d rho_dof_2 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_6_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_6_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_6_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_7_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_7_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_7_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_8_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_8_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_8_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_9_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_9_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_9_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_10_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_10_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_10_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_11_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_11_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_11_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_qloop_1 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                   const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_2);
                   const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                   const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,tmp_qloop_8);
                   const __m256d tmp_qloop_10 = _mm256_add_pd(tmp_qloop_5,tmp_qloop_9);
                   const __m256d tmp_qloop_11 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_10));
                   const __m256d tmp_qloop_21 = _mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                   const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                   const __m256d tmp_qloop_23 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10));
                   const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_2),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14))),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                   const __m256d tmp_qloop_25 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_24);
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                   const __m256d tmp_qloop_28 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_26);
                   const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                   const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                   const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_5);
                   const __m256d tmp_qloop_34 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10),tmp_qloop_10)),tmp_qloop_24),_mm256_set_pd(3.0,3.0,3.0,3.0));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_34),tmp_qloop_9);
                   const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_32,tmp_qloop_9));
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13));
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_8);
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_38);
                   const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_41 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,tmp_qloop_5),tmp_qloop_8);
                   const __m256d tmp_qloop_42 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_8));
                   const __m256d tmp_qloop_43 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_38);
                   const __m256d tmp_qloop_44 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_31,tmp_qloop_38),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                   const __m256d tmp_qloop_45 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_46 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_47 = _mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_48 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_49 = _mm256_mul_pd(tmp_qloop_48,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_50 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_45),tmp_qloop_47),tmp_qloop_49);
                   const __m256d tmp_qloop_51 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_qloop_53 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_51,tmp_qloop_51),_mm256_mul_pd(tmp_qloop_52,tmp_qloop_52))))))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_51,tmp_qloop_51),_mm256_mul_pd(tmp_qloop_52,tmp_qloop_52))))))));
                   const __m256d tmp_qloop_54 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_qloop_52),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_qloop_51),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_15,tmp_qloop_15,tmp_qloop_15,tmp_qloop_15))))),_mm256_set_pd(tmp_qloop_17,tmp_qloop_17,tmp_qloop_17,tmp_qloop_17)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                   const __m256d tmp_qloop_58 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_47);
                   const __m256d tmp_qloop_60 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_49);
                   const __m256d tmp_qloop_63 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_48,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_65 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_22),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_9));
                   const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_27),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_23),tmp_qloop_24),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,tmp_qloop_8),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_27,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_24),tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_30 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_29);
                   const __m256d abs_det_jac_blending = tmp_qloop_29;
                   const __m256d tmp_qloop_55 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(abs_det_jac_blending,tmp_qloop_11),tmp_qloop_24),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_53,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_51,tmp_qloop_54)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_51,tmp_qloop_54)))))),_mm256_mul_pd(tmp_qloop_53,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_52,tmp_qloop_54)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_52,tmp_qloop_54)))))))))),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(rho_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(rho_dof_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(_mm256_mul_pd(rho_dof_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q]));
                   const __m256d tmp_qloop_56 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_55);
                   const __m256d tmp_qloop_57 = _mm256_mul_pd(tmp_qloop_50,tmp_qloop_56);
                   const __m256d tmp_qloop_59 = _mm256_mul_pd(tmp_qloop_56,tmp_qloop_58);
                   const __m256d tmp_qloop_61 = _mm256_mul_pd(tmp_qloop_56,tmp_qloop_60);
                   const __m256d tmp_qloop_62 = _mm256_mul_pd(tmp_qloop_45,tmp_qloop_56);
                   const __m256d tmp_qloop_64 = _mm256_mul_pd(tmp_qloop_56,tmp_qloop_63);
                   const __m256d tmp_qloop_66 = _mm256_mul_pd(tmp_qloop_56,tmp_qloop_65);
                   const __m256d tmp_qloop_67 = _mm256_mul_pd(tmp_qloop_55,tmp_qloop_8);
                   const __m256d tmp_qloop_68 = _mm256_mul_pd(tmp_qloop_50,tmp_qloop_67);
                   const __m256d tmp_qloop_69 = _mm256_mul_pd(tmp_qloop_58,tmp_qloop_67);
                   const __m256d tmp_qloop_70 = _mm256_mul_pd(tmp_qloop_60,tmp_qloop_67);
                   const __m256d tmp_qloop_71 = _mm256_mul_pd(tmp_qloop_45,tmp_qloop_67);
                   const __m256d tmp_qloop_72 = _mm256_mul_pd(tmp_qloop_63,tmp_qloop_67);
                   const __m256d tmp_qloop_73 = _mm256_mul_pd(tmp_qloop_65,tmp_qloop_67);
                   const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_30);
                   const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_30);
                   const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_22),tmp_qloop_36);
                   const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_9)),_mm256_mul_pd(tmp_qloop_40,tmp_qloop_8)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_8,tmp_qloop_8),tmp_qloop_8)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_38),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                   const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                   const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                   const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_35),tmp_qloop_44);
                   const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_40),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_2),tmp_qloop_2),tmp_qloop_34),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_33),tmp_qloop_44);
                   const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_9),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_0_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_0_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_1_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_59,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_59,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_1_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_59,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_2_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_2_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_61,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_3_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_62,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_3_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_62,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_3_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_62,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_4_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_64,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_4_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_64,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_4_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_64,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_5_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_66,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_5_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_66,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_5_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_66,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_6_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_6_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_6_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_68,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_7_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_7_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_7_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_69,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_8_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_70,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_8_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_70,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_8_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_70,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_9_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_71,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_9_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_71,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_9_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_71,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_10_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_72,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_10_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_72,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_10_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_72,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   const __m256d q_tmp_11_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_73,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q],_data_tabulated_and_untitled_0_0_BLUE[3*q]));
                   const __m256d q_tmp_11_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_73,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1],_data_tabulated_and_untitled_0_0_BLUE[3*q + 1]));
                   const __m256d q_tmp_11_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_73,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2],_data_tabulated_and_untitled_0_0_BLUE[3*q + 2]));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,q_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,q_tmp_0_2);
                   q_acc_1_0 = _mm256_add_pd(q_acc_1_0,q_tmp_1_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,q_tmp_1_2);
                   q_acc_2_0 = _mm256_add_pd(q_acc_2_0,q_tmp_2_0);
                   q_acc_2_1 = _mm256_add_pd(q_acc_2_1,q_tmp_2_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_3_0 = _mm256_add_pd(q_acc_3_0,q_tmp_3_0);
                   q_acc_3_1 = _mm256_add_pd(q_acc_3_1,q_tmp_3_1);
                   q_acc_3_2 = _mm256_add_pd(q_acc_3_2,q_tmp_3_2);
                   q_acc_4_0 = _mm256_add_pd(q_acc_4_0,q_tmp_4_0);
                   q_acc_4_1 = _mm256_add_pd(q_acc_4_1,q_tmp_4_1);
                   q_acc_4_2 = _mm256_add_pd(q_acc_4_2,q_tmp_4_2);
                   q_acc_5_0 = _mm256_add_pd(q_acc_5_0,q_tmp_5_0);
                   q_acc_5_1 = _mm256_add_pd(q_acc_5_1,q_tmp_5_1);
                   q_acc_5_2 = _mm256_add_pd(q_acc_5_2,q_tmp_5_2);
                   q_acc_6_0 = _mm256_add_pd(q_acc_6_0,q_tmp_6_0);
                   q_acc_6_1 = _mm256_add_pd(q_acc_6_1,q_tmp_6_1);
                   q_acc_6_2 = _mm256_add_pd(q_acc_6_2,q_tmp_6_2);
                   q_acc_7_0 = _mm256_add_pd(q_acc_7_0,q_tmp_7_0);
                   q_acc_7_1 = _mm256_add_pd(q_acc_7_1,q_tmp_7_1);
                   q_acc_7_2 = _mm256_add_pd(q_acc_7_2,q_tmp_7_2);
                   q_acc_8_0 = _mm256_add_pd(q_acc_8_0,q_tmp_8_0);
                   q_acc_8_1 = _mm256_add_pd(q_acc_8_1,q_tmp_8_1);
                   q_acc_8_2 = _mm256_add_pd(q_acc_8_2,q_tmp_8_2);
                   q_acc_9_0 = _mm256_add_pd(q_acc_9_0,q_tmp_9_0);
                   q_acc_9_1 = _mm256_add_pd(q_acc_9_1,q_tmp_9_1);
                   q_acc_9_2 = _mm256_add_pd(q_acc_9_2,q_tmp_9_2);
                   q_acc_10_0 = _mm256_add_pd(q_acc_10_0,q_tmp_10_0);
                   q_acc_10_1 = _mm256_add_pd(q_acc_10_1,q_tmp_10_1);
                   q_acc_10_2 = _mm256_add_pd(q_acc_10_2,q_tmp_10_2);
                   q_acc_11_0 = _mm256_add_pd(q_acc_11_0,q_tmp_11_0);
                   q_acc_11_1 = _mm256_add_pd(q_acc_11_1,q_tmp_11_1);
                   q_acc_11_2 = _mm256_add_pd(q_acc_11_2,q_tmp_11_2);
                }
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_3_0,src_dof_0),_mm256_mul_pd(q_acc_3_1,src_dof_1)),_mm256_mul_pd(q_acc_3_2,src_dof_2));
                const __m256d elMatVec_4 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_4_0,src_dof_0),_mm256_mul_pd(q_acc_4_1,src_dof_1)),_mm256_mul_pd(q_acc_4_2,src_dof_2));
                const __m256d elMatVec_5 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_5_0,src_dof_0),_mm256_mul_pd(q_acc_5_1,src_dof_1)),_mm256_mul_pd(q_acc_5_2,src_dof_2));
                const __m256d elMatVec_6 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_6_0,src_dof_0),_mm256_mul_pd(q_acc_6_1,src_dof_1)),_mm256_mul_pd(q_acc_6_2,src_dof_2));
                const __m256d elMatVec_7 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_7_0,src_dof_0),_mm256_mul_pd(q_acc_7_1,src_dof_1)),_mm256_mul_pd(q_acc_7_2,src_dof_2));
                const __m256d elMatVec_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_8_0,src_dof_0),_mm256_mul_pd(q_acc_8_1,src_dof_1)),_mm256_mul_pd(q_acc_8_2,src_dof_2));
                const __m256d elMatVec_9 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_9_0,src_dof_0),_mm256_mul_pd(q_acc_9_1,src_dof_1)),_mm256_mul_pd(q_acc_9_2,src_dof_2));
                const __m256d elMatVec_10 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_10_0,src_dof_0),_mm256_mul_pd(q_acc_10_1,src_dof_1)),_mm256_mul_pd(q_acc_10_2,src_dof_2));
                const __m256d elMatVec_11 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_11_0,src_dof_0),_mm256_mul_pd(q_acc_11_1,src_dof_1)),_mm256_mul_pd(q_acc_11_2,src_dof_2));
                _mm256_storeu_pd(&_data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_0,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_1,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_2,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_3,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_4,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_5,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_6,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_7,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_8,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_9,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_10,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_11,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
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
                const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t rho_dof_1 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_1_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_2_0 = 0.0;
                real_t q_acc_2_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_3_0 = 0.0;
                real_t q_acc_3_1 = 0.0;
                real_t q_acc_3_2 = 0.0;
                real_t q_acc_4_0 = 0.0;
                real_t q_acc_4_1 = 0.0;
                real_t q_acc_4_2 = 0.0;
                real_t q_acc_5_0 = 0.0;
                real_t q_acc_5_1 = 0.0;
                real_t q_acc_5_2 = 0.0;
                real_t q_acc_6_0 = 0.0;
                real_t q_acc_6_1 = 0.0;
                real_t q_acc_6_2 = 0.0;
                real_t q_acc_7_0 = 0.0;
                real_t q_acc_7_1 = 0.0;
                real_t q_acc_7_2 = 0.0;
                real_t q_acc_8_0 = 0.0;
                real_t q_acc_8_1 = 0.0;
                real_t q_acc_8_2 = 0.0;
                real_t q_acc_9_0 = 0.0;
                real_t q_acc_9_1 = 0.0;
                real_t q_acc_9_2 = 0.0;
                real_t q_acc_10_0 = 0.0;
                real_t q_acc_10_1 = 0.0;
                real_t q_acc_10_2 = 0.0;
                real_t q_acc_11_0 = 0.0;
                real_t q_acc_11_1 = 0.0;
                real_t q_acc_11_2 = 0.0;
                const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                const real_t tmp_qloop_1 = p_affine_0_0 - p_affine_2_0;
                const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_qloop_2 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_1*_data_q_p_1[q];
                   const real_t tmp_qloop_5 = (tmp_qloop_2*tmp_qloop_2);
                   const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                   const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                   const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                   const real_t tmp_qloop_11 = pow(tmp_qloop_10, -0.50000000000000000);
                   const real_t tmp_qloop_21 = tmp_qloop_11*tmp_qloop_20;
                   const real_t tmp_qloop_22 = tmp_qloop_21*tmp_qloop_4;
                   const real_t tmp_qloop_23 = pow(tmp_qloop_10, -1.5000000000000000);
                   const real_t tmp_qloop_24 = radRayVertex + tmp_qloop_19*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_8) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_2));
                   const real_t tmp_qloop_25 = tmp_qloop_23*tmp_qloop_24;
                   const real_t tmp_qloop_26 = tmp_qloop_25*1.0;
                   const real_t tmp_qloop_27 = tmp_qloop_14*tmp_qloop_21;
                   const real_t tmp_qloop_28 = tmp_qloop_2*tmp_qloop_26;
                   const real_t tmp_qloop_31 = tmp_qloop_20*tmp_qloop_23;
                   const real_t tmp_qloop_32 = tmp_qloop_31*tmp_qloop_4;
                   const real_t tmp_qloop_33 = tmp_qloop_32*tmp_qloop_5;
                   const real_t tmp_qloop_34 = pow(tmp_qloop_10, -2.5000000000000000)*tmp_qloop_24*3.0;
                   const real_t tmp_qloop_35 = tmp_qloop_2*tmp_qloop_34*tmp_qloop_9;
                   const real_t tmp_qloop_36 = tmp_qloop_32*tmp_qloop_9 - tmp_qloop_35;
                   const real_t tmp_qloop_37 = tmp_qloop_13*tmp_qloop_31;
                   const real_t tmp_qloop_38 = tmp_qloop_2*tmp_qloop_8;
                   const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_38;
                   const real_t tmp_qloop_40 = tmp_qloop_25*2.0;
                   const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_5*tmp_qloop_8;
                   const real_t tmp_qloop_42 = tmp_qloop_26*tmp_qloop_8 - tmp_qloop_41;
                   const real_t tmp_qloop_43 = tmp_qloop_37*tmp_qloop_38;
                   const real_t tmp_qloop_44 = tmp_qloop_14*tmp_qloop_31*tmp_qloop_38;
                   const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                   const real_t tmp_qloop_46 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_qloop_47 = tmp_qloop_46*2.0;
                   const real_t tmp_qloop_48 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_qloop_49 = tmp_qloop_48*2.0;
                   const real_t tmp_qloop_50 = tmp_qloop_45 + tmp_qloop_47 + tmp_qloop_49 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                   const real_t tmp_qloop_51 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                   const real_t tmp_qloop_52 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                   const real_t tmp_qloop_53 = 1.0 / (abs(pow((tmp_qloop_51*tmp_qloop_51) + (tmp_qloop_52*tmp_qloop_52), 0.50000000000000000))*abs(pow((tmp_qloop_51*tmp_qloop_51) + (tmp_qloop_52*tmp_qloop_52), 0.50000000000000000)));
                   const real_t tmp_qloop_54 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_52) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_51));
                   const real_t tmp_qloop_58 = tmp_qloop_47 - _data_q_p_0[q];
                   const real_t tmp_qloop_60 = tmp_qloop_49 - _data_q_p_1[q];
                   const real_t tmp_qloop_63 = -tmp_qloop_45 + tmp_qloop_48*-4.0 + 4.0*_data_q_p_1[q];
                   const real_t tmp_qloop_65 = -tmp_qloop_45 + tmp_qloop_46*-4.0 + 4.0*_data_q_p_0[q];
                   const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                   const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                   const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                   const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                   const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                   const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                   const real_t abs_det_jac_blending = tmp_qloop_29;
                   const real_t tmp_qloop_55 = abs_det_jac_blending*tmp_qloop_11*tmp_qloop_24*pow(tmp_qloop_53*(abs(tmp_qloop_51*tmp_qloop_54)*abs(tmp_qloop_51*tmp_qloop_54)) + tmp_qloop_53*(abs(tmp_qloop_52*tmp_qloop_54)*abs(tmp_qloop_52*tmp_qloop_54)), -0.50000000000000000)*(-rho_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) - rho_dof_1*_data_q_p_0[q] - rho_dof_2*_data_q_p_1[q])*_data_q_w[q];
                   const real_t tmp_qloop_56 = tmp_qloop_2*tmp_qloop_55;
                   const real_t tmp_qloop_57 = tmp_qloop_50*tmp_qloop_56;
                   const real_t tmp_qloop_59 = tmp_qloop_56*tmp_qloop_58;
                   const real_t tmp_qloop_61 = tmp_qloop_56*tmp_qloop_60;
                   const real_t tmp_qloop_62 = tmp_qloop_45*tmp_qloop_56;
                   const real_t tmp_qloop_64 = tmp_qloop_56*tmp_qloop_63;
                   const real_t tmp_qloop_66 = tmp_qloop_56*tmp_qloop_65;
                   const real_t tmp_qloop_67 = tmp_qloop_55*tmp_qloop_8;
                   const real_t tmp_qloop_68 = tmp_qloop_50*tmp_qloop_67;
                   const real_t tmp_qloop_69 = tmp_qloop_58*tmp_qloop_67;
                   const real_t tmp_qloop_70 = tmp_qloop_60*tmp_qloop_67;
                   const real_t tmp_qloop_71 = tmp_qloop_45*tmp_qloop_67;
                   const real_t tmp_qloop_72 = tmp_qloop_63*tmp_qloop_67;
                   const real_t tmp_qloop_73 = tmp_qloop_65*tmp_qloop_67;
                   const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                   const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                   const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                   const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                   const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                   const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                   const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                   const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                   const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                   const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                   const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                   const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                   const real_t q_tmp_0_0 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_0_1 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_0_2 = -tmp_qloop_57*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_1_0 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_1_1 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_1_2 = -tmp_qloop_59*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_2_0 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_2_1 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_2_2 = -tmp_qloop_61*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_3_0 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_3_1 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_3_2 = -tmp_qloop_62*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_4_0 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_4_1 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_4_2 = -tmp_qloop_64*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_5_0 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_5_1 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_5_2 = -tmp_qloop_66*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_6_0 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_6_1 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_6_2 = -tmp_qloop_68*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_7_0 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_7_1 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_7_2 = -tmp_qloop_69*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_8_0 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_8_1 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_8_2 = -tmp_qloop_70*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_9_0 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_9_1 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_9_2 = -tmp_qloop_71*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_10_0 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_10_1 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_10_2 = -tmp_qloop_72*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   const real_t q_tmp_11_0 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_BLUE[3*q];
                   const real_t q_tmp_11_1 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_BLUE[3*q + 1];
                   const real_t q_tmp_11_2 = -tmp_qloop_73*_data_tabulated_and_untitled_0_0_BLUE[3*q + 2];
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                   q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                   q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                   q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                   q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                   q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                   q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                   q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                   q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                   q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                   q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                   q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                   q_acc_6_0 = q_acc_6_0 + q_tmp_6_0;
                   q_acc_6_1 = q_acc_6_1 + q_tmp_6_1;
                   q_acc_6_2 = q_acc_6_2 + q_tmp_6_2;
                   q_acc_7_0 = q_acc_7_0 + q_tmp_7_0;
                   q_acc_7_1 = q_acc_7_1 + q_tmp_7_1;
                   q_acc_7_2 = q_acc_7_2 + q_tmp_7_2;
                   q_acc_8_0 = q_acc_8_0 + q_tmp_8_0;
                   q_acc_8_1 = q_acc_8_1 + q_tmp_8_1;
                   q_acc_8_2 = q_acc_8_2 + q_tmp_8_2;
                   q_acc_9_0 = q_acc_9_0 + q_tmp_9_0;
                   q_acc_9_1 = q_acc_9_1 + q_tmp_9_1;
                   q_acc_9_2 = q_acc_9_2 + q_tmp_9_2;
                   q_acc_10_0 = q_acc_10_0 + q_tmp_10_0;
                   q_acc_10_1 = q_acc_10_1 + q_tmp_10_1;
                   q_acc_10_2 = q_acc_10_2 + q_tmp_10_2;
                   q_acc_11_0 = q_acc_11_0 + q_tmp_11_0;
                   q_acc_11_1 = q_acc_11_1 + q_tmp_11_1;
                   q_acc_11_2 = q_acc_11_2 + q_tmp_11_2;
                }
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2;
                const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2;
                const real_t elMatVec_4 = q_acc_4_0*src_dof_0 + q_acc_4_1*src_dof_1 + q_acc_4_2*src_dof_2;
                const real_t elMatVec_5 = q_acc_5_0*src_dof_0 + q_acc_5_1*src_dof_1 + q_acc_5_2*src_dof_2;
                const real_t elMatVec_6 = q_acc_6_0*src_dof_0 + q_acc_6_1*src_dof_1 + q_acc_6_2*src_dof_2;
                const real_t elMatVec_7 = q_acc_7_0*src_dof_0 + q_acc_7_1*src_dof_1 + q_acc_7_2*src_dof_2;
                const real_t elMatVec_8 = q_acc_8_0*src_dof_0 + q_acc_8_1*src_dof_1 + q_acc_8_2*src_dof_2;
                const real_t elMatVec_9 = q_acc_9_0*src_dof_0 + q_acc_9_1*src_dof_1 + q_acc_9_2*src_dof_2;
                const real_t elMatVec_10 = q_acc_10_0*src_dof_0 + q_acc_10_1*src_dof_1 + q_acc_10_2*src_dof_2;
                const real_t elMatVec_11 = q_acc_11_0*src_dof_0 + q_acc_11_1*src_dof_1 + q_acc_11_2*src_dof_2;
                _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0*operatorScaling + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1*operatorScaling + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2*operatorScaling + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                _data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3*operatorScaling + _data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_6*operatorScaling + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_7*operatorScaling + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_8*operatorScaling + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                _data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_9*operatorScaling + _data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_10*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_11*operatorScaling + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
