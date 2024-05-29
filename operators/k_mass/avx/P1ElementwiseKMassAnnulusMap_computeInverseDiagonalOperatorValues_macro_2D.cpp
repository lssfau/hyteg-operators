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



























#include "../P1ElementwiseKMassAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseKMassAnnulusMap::computeInverseDiagonalOperatorValues_macro_2D( real_t * RESTRICT  _data_invDiag_, real_t * RESTRICT  _data_k, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t tmp_qloop_0 = rayVertex_1 - thrVertex_1;
       const real_t tmp_qloop_1 = -tmp_qloop_0;
       const real_t tmp_qloop_11 = rayVertex_0 - refVertex_0;
       const real_t tmp_qloop_12 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_13 = -tmp_qloop_12;
       const real_t tmp_qloop_14 = rayVertex_1 - refVertex_1;
       const real_t tmp_qloop_15 = radRayVertex - radRefVertex;
       const real_t tmp_qloop_16 = -tmp_qloop_15*1.0 / (-tmp_qloop_1*tmp_qloop_11 + tmp_qloop_13*tmp_qloop_14);
       const real_t tmp_qloop_30 = tmp_qloop_15*1.0 / (tmp_qloop_0*tmp_qloop_11 - tmp_qloop_12*tmp_qloop_14);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_psi_jac_affine_det_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*0.11111111111111117)), ((real_t)(abs_det_jac_affine_GRAY*0.11111111111111113)), ((real_t)(abs_det_jac_affine_GRAY*0.11111111111111113)), ((real_t)(abs_det_jac_affine_GRAY*0.1111111111111111)), ((real_t)(abs_det_jac_affine_GRAY*0.1111111111111111)), ((real_t)(abs_det_jac_affine_GRAY*0.1111111111111111)), ((real_t)(abs_det_jac_affine_GRAY*0.040000000000000029)), ((real_t)(abs_det_jac_affine_GRAY*0.040000000000000015)), ((real_t)(abs_det_jac_affine_GRAY*0.12000000000000004)), ((real_t)(abs_det_jac_affine_GRAY*0.040000000000000008)), ((real_t)(abs_det_jac_affine_GRAY*0.12)), ((real_t)(abs_det_jac_affine_GRAY*0.35999999999999999)), ((real_t)(abs_det_jac_affine_GRAY*0.040000000000000008)), ((real_t)(abs_det_jac_affine_GRAY*0.12)), ((real_t)(abs_det_jac_affine_GRAY*0.040000000000000008)), ((real_t)(abs_det_jac_affine_GRAY*0.35999999999999999)), ((real_t)(abs_det_jac_affine_GRAY*0.12)), ((real_t)(abs_det_jac_affine_GRAY*0.040000000000000008)), ((real_t)(abs_det_jac_affine_GRAY*0.3600000000000001)), ((real_t)(abs_det_jac_affine_GRAY*0.12000000000000002)), ((real_t)(abs_det_jac_affine_GRAY*0.12000000000000002)), ((real_t)(abs_det_jac_affine_GRAY*0.040000000000000008)), ((real_t)(abs_det_jac_affine_GRAY*0.040000000000000008)), ((real_t)(abs_det_jac_affine_GRAY*0.040000000000000008))};
      
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
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_qloop_4 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                   const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_4,tmp_qloop_4);
                   const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                   const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,tmp_qloop_8);
                   const __m256d tmp_qloop_10 = _mm256_add_pd(tmp_qloop_5,tmp_qloop_9);
                   const __m256d tmp_qloop_17 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_10)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16));
                   const __m256d tmp_qloop_18 = _mm256_mul_pd(tmp_qloop_17,tmp_qloop_4);
                   const __m256d tmp_qloop_19 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10));
                   const __m256d tmp_qloop_20 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_4),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13))),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                   const __m256d tmp_qloop_21 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_20),_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_17,tmp_qloop_8);
                   const __m256d tmp_qloop_25 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_25,tmp_qloop_25);
                   const __m256d tmp_qloop_27 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_qloop_28 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_27);
                   const __m256d tmp_qloop_29 = _mm256_add_pd(tmp_qloop_26,tmp_qloop_28);
                   const __m256d tmp_qloop_31 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_29)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_30,tmp_qloop_30,tmp_qloop_30,tmp_qloop_30));
                   const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_25,tmp_qloop_31);
                   const __m256d tmp_qloop_33 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_qloop_27),_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_qloop_25),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_0,tmp_qloop_0,tmp_qloop_0,tmp_qloop_0)));
                   const __m256d tmp_qloop_34 = _mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_29),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_29)),_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(tmp_qloop_34,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(tmp_qloop_30,tmp_qloop_30,tmp_qloop_30,tmp_qloop_30)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                   const __m256d tmp_qloop_36 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_31);
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_34,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(tmp_qloop_30,tmp_qloop_30,tmp_qloop_30,tmp_qloop_30)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_25,tmp_qloop_27);
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12)),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_37)),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,_mm256_set_pd(tmp_qloop_0,tmp_qloop_0,tmp_qloop_0,tmp_qloop_0)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_35),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_37,tmp_qloop_38),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(tmp_qloop_0,tmp_qloop_0,tmp_qloop_0,tmp_qloop_0)),_mm256_mul_pd(tmp_qloop_35,tmp_qloop_38))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))))));
                   const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_mul_pd(tmp_qloop_21,tmp_qloop_9));
                   const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_18,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_20),tmp_qloop_4),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_21,tmp_qloop_4),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_20),tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_23 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_24 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_23);
                   const __m256d abs_det_jac_blending = tmp_qloop_23;
                   const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_24);
                   const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_24),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_24),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_24);
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(_data_phi_psi_jac_affine_det_0_0_GRAY[6*q],_data_phi_psi_jac_affine_det_0_0_GRAY[6*q],_data_phi_psi_jac_affine_det_0_0_GRAY[6*q],_data_phi_psi_jac_affine_det_0_0_GRAY[6*q]));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 3],_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 3],_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 3],_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 3]));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 5],_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 5],_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 5],_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 5]));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
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
                const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                const real_t tmp_qloop_2 = p_affine_0_0 - p_affine_1_0;
                const real_t tmp_qloop_3 = p_affine_0_0 - p_affine_2_0;
                const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_qloop_4 = p_affine_0_0 - tmp_qloop_2*_data_q_p_0[q] - tmp_qloop_3*_data_q_p_1[q];
                   const real_t tmp_qloop_5 = (tmp_qloop_4*tmp_qloop_4);
                   const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                   const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                   const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                   const real_t tmp_qloop_17 = pow(tmp_qloop_10, -0.50000000000000000)*tmp_qloop_16*1.0;
                   const real_t tmp_qloop_18 = tmp_qloop_17*tmp_qloop_4;
                   const real_t tmp_qloop_19 = pow(tmp_qloop_10, -1.5000000000000000);
                   const real_t tmp_qloop_20 = radRayVertex + tmp_qloop_16*(tmp_qloop_1*(-rayVertex_0 + tmp_qloop_4) - tmp_qloop_13*(-rayVertex_1 + tmp_qloop_8));
                   const real_t tmp_qloop_21 = tmp_qloop_19*tmp_qloop_20*1.0;
                   const real_t tmp_qloop_22 = tmp_qloop_17*tmp_qloop_8;
                   const real_t tmp_qloop_25 = -p_affine_0_0 + tmp_qloop_2*_data_q_p_0[q] + tmp_qloop_3*_data_q_p_1[q];
                   const real_t tmp_qloop_26 = (tmp_qloop_25*tmp_qloop_25);
                   const real_t tmp_qloop_27 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                   const real_t tmp_qloop_28 = (tmp_qloop_27*tmp_qloop_27);
                   const real_t tmp_qloop_29 = tmp_qloop_26 + tmp_qloop_28;
                   const real_t tmp_qloop_31 = pow(tmp_qloop_29, -0.50000000000000000)*tmp_qloop_30*1.0;
                   const real_t tmp_qloop_32 = tmp_qloop_25*tmp_qloop_31;
                   const real_t tmp_qloop_33 = -tmp_qloop_0*(rayVertex_0 + tmp_qloop_25) + tmp_qloop_12*(rayVertex_1 + tmp_qloop_27);
                   const real_t tmp_qloop_34 = pow(tmp_qloop_29, -1.5000000000000000)*1.0;
                   const real_t tmp_qloop_35 = tmp_qloop_34*(radRayVertex + tmp_qloop_30*tmp_qloop_33);
                   const real_t tmp_qloop_36 = tmp_qloop_27*tmp_qloop_31;
                   const real_t tmp_qloop_37 = tmp_qloop_34*(radRayVertex + tmp_qloop_30*tmp_qloop_33);
                   const real_t tmp_qloop_38 = tmp_qloop_25*tmp_qloop_27;
                   const real_t tmp_qloop_39 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q])*abs((tmp_qloop_0*tmp_qloop_32 - tmp_qloop_28*tmp_qloop_35)*(tmp_qloop_12*tmp_qloop_36 + tmp_qloop_26*tmp_qloop_37) - (tmp_qloop_0*tmp_qloop_36 + tmp_qloop_35*tmp_qloop_38)*(tmp_qloop_12*tmp_qloop_32 - tmp_qloop_37*tmp_qloop_38))*_data_q_w[q];
                   const real_t jac_blending_0_0 = tmp_qloop_1*tmp_qloop_18 + tmp_qloop_21*tmp_qloop_9;
                   const real_t jac_blending_0_1 = -tmp_qloop_13*tmp_qloop_18 - tmp_qloop_19*tmp_qloop_20*tmp_qloop_4*tmp_qloop_8;
                   const real_t jac_blending_1_0 = tmp_qloop_1*tmp_qloop_22 - tmp_qloop_21*tmp_qloop_4*tmp_qloop_8;
                   const real_t jac_blending_1_1 = -tmp_qloop_13*tmp_qloop_22 + tmp_qloop_19*tmp_qloop_20*tmp_qloop_5*1.0;
                   const real_t tmp_qloop_23 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                   const real_t tmp_qloop_24 = 1.0 / (tmp_qloop_23);
                   const real_t abs_det_jac_blending = tmp_qloop_23;
                   const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_24;
                   const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_24;
                   const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_24;
                   const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_24;
                   const real_t q_tmp_0_0 = tmp_qloop_39*_data_phi_psi_jac_affine_det_0_0_GRAY[6*q];
                   const real_t q_tmp_1_1 = tmp_qloop_39*_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 3];
                   const real_t q_tmp_2_2 = tmp_qloop_39*_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 5];
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                }
                const real_t elMatDiag_0 = q_acc_0_0;
                const real_t elMatDiag_1 = q_acc_1_1;
                const real_t elMatDiag_2 = q_acc_2_2;
                _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
          const real_t _data_phi_psi_jac_affine_det_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*0.11111111111111117)), ((real_t)(abs_det_jac_affine_BLUE*0.11111111111111113)), ((real_t)(abs_det_jac_affine_BLUE*0.11111111111111113)), ((real_t)(abs_det_jac_affine_BLUE*0.1111111111111111)), ((real_t)(abs_det_jac_affine_BLUE*0.1111111111111111)), ((real_t)(abs_det_jac_affine_BLUE*0.1111111111111111)), ((real_t)(abs_det_jac_affine_BLUE*0.040000000000000029)), ((real_t)(abs_det_jac_affine_BLUE*0.040000000000000015)), ((real_t)(abs_det_jac_affine_BLUE*0.12000000000000004)), ((real_t)(abs_det_jac_affine_BLUE*0.040000000000000008)), ((real_t)(abs_det_jac_affine_BLUE*0.12)), ((real_t)(abs_det_jac_affine_BLUE*0.35999999999999999)), ((real_t)(abs_det_jac_affine_BLUE*0.040000000000000008)), ((real_t)(abs_det_jac_affine_BLUE*0.12)), ((real_t)(abs_det_jac_affine_BLUE*0.040000000000000008)), ((real_t)(abs_det_jac_affine_BLUE*0.35999999999999999)), ((real_t)(abs_det_jac_affine_BLUE*0.12)), ((real_t)(abs_det_jac_affine_BLUE*0.040000000000000008)), ((real_t)(abs_det_jac_affine_BLUE*0.3600000000000001)), ((real_t)(abs_det_jac_affine_BLUE*0.12000000000000002)), ((real_t)(abs_det_jac_affine_BLUE*0.12000000000000002)), ((real_t)(abs_det_jac_affine_BLUE*0.040000000000000008)), ((real_t)(abs_det_jac_affine_BLUE*0.040000000000000008)), ((real_t)(abs_det_jac_affine_BLUE*0.040000000000000008))};
      
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
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_qloop_4 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                   const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_4,tmp_qloop_4);
                   const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                   const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,tmp_qloop_8);
                   const __m256d tmp_qloop_10 = _mm256_add_pd(tmp_qloop_5,tmp_qloop_9);
                   const __m256d tmp_qloop_17 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_10)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16));
                   const __m256d tmp_qloop_18 = _mm256_mul_pd(tmp_qloop_17,tmp_qloop_4);
                   const __m256d tmp_qloop_19 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10));
                   const __m256d tmp_qloop_20 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_4),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13))),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                   const __m256d tmp_qloop_21 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_20),_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_17,tmp_qloop_8);
                   const __m256d tmp_qloop_25 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_25,tmp_qloop_25);
                   const __m256d tmp_qloop_27 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_qloop_28 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_27);
                   const __m256d tmp_qloop_29 = _mm256_add_pd(tmp_qloop_26,tmp_qloop_28);
                   const __m256d tmp_qloop_31 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_29)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_30,tmp_qloop_30,tmp_qloop_30,tmp_qloop_30));
                   const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_25,tmp_qloop_31);
                   const __m256d tmp_qloop_33 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_qloop_27),_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_qloop_25),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_0,tmp_qloop_0,tmp_qloop_0,tmp_qloop_0)));
                   const __m256d tmp_qloop_34 = _mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_29),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_29)),_mm256_set_pd(1.0,1.0,1.0,1.0));
                   const __m256d tmp_qloop_35 = _mm256_mul_pd(tmp_qloop_34,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(tmp_qloop_30,tmp_qloop_30,tmp_qloop_30,tmp_qloop_30)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                   const __m256d tmp_qloop_36 = _mm256_mul_pd(tmp_qloop_27,tmp_qloop_31);
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_34,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(tmp_qloop_30,tmp_qloop_30,tmp_qloop_30,tmp_qloop_30)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex)));
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_25,tmp_qloop_27);
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12)),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_37)),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,_mm256_set_pd(tmp_qloop_0,tmp_qloop_0,tmp_qloop_0,tmp_qloop_0)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_35),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_32,_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_37,tmp_qloop_38),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(tmp_qloop_0,tmp_qloop_0,tmp_qloop_0,tmp_qloop_0)),_mm256_mul_pd(tmp_qloop_35,tmp_qloop_38))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))))));
                   const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_18,_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_mul_pd(tmp_qloop_21,tmp_qloop_9));
                   const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_18,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_20),tmp_qloop_4),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_21,tmp_qloop_4),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_20),tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_23 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_24 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_23);
                   const __m256d abs_det_jac_blending = tmp_qloop_23;
                   const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_24);
                   const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_24),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_24),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_24);
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(_data_phi_psi_jac_affine_det_0_0_BLUE[6*q],_data_phi_psi_jac_affine_det_0_0_BLUE[6*q],_data_phi_psi_jac_affine_det_0_0_BLUE[6*q],_data_phi_psi_jac_affine_det_0_0_BLUE[6*q]));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 3],_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 3],_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 3],_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 3]));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 5],_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 5],_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 5],_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 5]));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
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
                const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                const real_t tmp_qloop_2 = p_affine_0_0 - p_affine_1_0;
                const real_t tmp_qloop_3 = p_affine_0_0 - p_affine_2_0;
                const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_qloop_4 = p_affine_0_0 - tmp_qloop_2*_data_q_p_0[q] - tmp_qloop_3*_data_q_p_1[q];
                   const real_t tmp_qloop_5 = (tmp_qloop_4*tmp_qloop_4);
                   const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                   const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                   const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                   const real_t tmp_qloop_17 = pow(tmp_qloop_10, -0.50000000000000000)*tmp_qloop_16*1.0;
                   const real_t tmp_qloop_18 = tmp_qloop_17*tmp_qloop_4;
                   const real_t tmp_qloop_19 = pow(tmp_qloop_10, -1.5000000000000000);
                   const real_t tmp_qloop_20 = radRayVertex + tmp_qloop_16*(tmp_qloop_1*(-rayVertex_0 + tmp_qloop_4) - tmp_qloop_13*(-rayVertex_1 + tmp_qloop_8));
                   const real_t tmp_qloop_21 = tmp_qloop_19*tmp_qloop_20*1.0;
                   const real_t tmp_qloop_22 = tmp_qloop_17*tmp_qloop_8;
                   const real_t tmp_qloop_25 = -p_affine_0_0 + tmp_qloop_2*_data_q_p_0[q] + tmp_qloop_3*_data_q_p_1[q];
                   const real_t tmp_qloop_26 = (tmp_qloop_25*tmp_qloop_25);
                   const real_t tmp_qloop_27 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                   const real_t tmp_qloop_28 = (tmp_qloop_27*tmp_qloop_27);
                   const real_t tmp_qloop_29 = tmp_qloop_26 + tmp_qloop_28;
                   const real_t tmp_qloop_31 = pow(tmp_qloop_29, -0.50000000000000000)*tmp_qloop_30*1.0;
                   const real_t tmp_qloop_32 = tmp_qloop_25*tmp_qloop_31;
                   const real_t tmp_qloop_33 = -tmp_qloop_0*(rayVertex_0 + tmp_qloop_25) + tmp_qloop_12*(rayVertex_1 + tmp_qloop_27);
                   const real_t tmp_qloop_34 = pow(tmp_qloop_29, -1.5000000000000000)*1.0;
                   const real_t tmp_qloop_35 = tmp_qloop_34*(radRayVertex + tmp_qloop_30*tmp_qloop_33);
                   const real_t tmp_qloop_36 = tmp_qloop_27*tmp_qloop_31;
                   const real_t tmp_qloop_37 = tmp_qloop_34*(radRayVertex + tmp_qloop_30*tmp_qloop_33);
                   const real_t tmp_qloop_38 = tmp_qloop_25*tmp_qloop_27;
                   const real_t tmp_qloop_39 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q])*abs((tmp_qloop_0*tmp_qloop_32 - tmp_qloop_28*tmp_qloop_35)*(tmp_qloop_12*tmp_qloop_36 + tmp_qloop_26*tmp_qloop_37) - (tmp_qloop_0*tmp_qloop_36 + tmp_qloop_35*tmp_qloop_38)*(tmp_qloop_12*tmp_qloop_32 - tmp_qloop_37*tmp_qloop_38))*_data_q_w[q];
                   const real_t jac_blending_0_0 = tmp_qloop_1*tmp_qloop_18 + tmp_qloop_21*tmp_qloop_9;
                   const real_t jac_blending_0_1 = -tmp_qloop_13*tmp_qloop_18 - tmp_qloop_19*tmp_qloop_20*tmp_qloop_4*tmp_qloop_8;
                   const real_t jac_blending_1_0 = tmp_qloop_1*tmp_qloop_22 - tmp_qloop_21*tmp_qloop_4*tmp_qloop_8;
                   const real_t jac_blending_1_1 = -tmp_qloop_13*tmp_qloop_22 + tmp_qloop_19*tmp_qloop_20*tmp_qloop_5*1.0;
                   const real_t tmp_qloop_23 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                   const real_t tmp_qloop_24 = 1.0 / (tmp_qloop_23);
                   const real_t abs_det_jac_blending = tmp_qloop_23;
                   const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_24;
                   const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_24;
                   const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_24;
                   const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_24;
                   const real_t q_tmp_0_0 = tmp_qloop_39*_data_phi_psi_jac_affine_det_0_0_BLUE[6*q];
                   const real_t q_tmp_1_1 = tmp_qloop_39*_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 3];
                   const real_t q_tmp_2_2 = tmp_qloop_39*_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 5];
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                }
                const real_t elMatDiag_0 = q_acc_0_0;
                const real_t elMatDiag_1 = q_acc_1_1;
                const real_t elMatDiag_2 = q_acc_2_2;
                _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_1 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
