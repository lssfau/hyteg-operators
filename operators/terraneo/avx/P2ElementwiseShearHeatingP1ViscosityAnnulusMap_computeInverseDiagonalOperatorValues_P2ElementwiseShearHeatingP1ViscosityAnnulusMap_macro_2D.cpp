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

































#include "../P2ElementwiseShearHeatingP1ViscosityAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseShearHeatingP1ViscosityAnnulusMap::computeInverseDiagonalOperatorValues_P2ElementwiseShearHeatingP1ViscosityAnnulusMap_macro_2D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t * RESTRICT  _data_mu, real_t * RESTRICT  _data_wxEdge, real_t * RESTRICT  _data_wxVertex, real_t * RESTRICT  _data_wyEdge, real_t * RESTRICT  _data_wyVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
                const __m256d mu_dof_0 = _mm256_loadu_pd(& _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d mu_dof_1 = _mm256_loadu_pd(& _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d mu_dof_2 = _mm256_loadu_pd(& _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d wx_dof_0 = _mm256_loadu_pd(& _data_wxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d wx_dof_1 = _mm256_loadu_pd(& _data_wxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d wx_dof_2 = _mm256_loadu_pd(& _data_wxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d wx_dof_3 = _mm256_loadu_pd(& _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d wx_dof_4 = _mm256_loadu_pd(& _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d wx_dof_5 = _mm256_loadu_pd(& _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d wy_dof_0 = _mm256_loadu_pd(& _data_wyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d wy_dof_1 = _mm256_loadu_pd(& _data_wyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d wy_dof_2 = _mm256_loadu_pd(& _data_wyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d wy_dof_3 = _mm256_loadu_pd(& _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d wy_dof_4 = _mm256_loadu_pd(& _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d wy_dof_5 = _mm256_loadu_pd(& _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
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
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_41 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_42 = _mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_44 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_45 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_37);
                   const __m256d tmp_qloop_46 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_qloop_37),tmp_qloop_44);
                   const __m256d tmp_qloop_47 = _mm256_mul_pd(tmp_qloop_46,wy_dof_0);
                   const __m256d tmp_qloop_48 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_44,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_49 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_44,wy_dof_3),_mm256_mul_pd(tmp_qloop_45,wy_dof_1)),_mm256_mul_pd(tmp_qloop_48,wy_dof_5)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,wy_dof_4),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_47);
                   const __m256d tmp_qloop_51 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_44);
                   const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_53 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,wy_dof_3),_mm256_mul_pd(tmp_qloop_51,wy_dof_2)),_mm256_mul_pd(tmp_qloop_52,wy_dof_4)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_37,wy_dof_5),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_47);
                   const __m256d tmp_qloop_56 = _mm256_mul_pd(tmp_qloop_46,wx_dof_0);
                   const __m256d tmp_qloop_57 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_44,wx_dof_3),_mm256_mul_pd(tmp_qloop_45,wx_dof_1)),_mm256_mul_pd(tmp_qloop_48,wx_dof_5)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,wx_dof_4),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_56);
                   const __m256d tmp_qloop_59 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,wx_dof_3),_mm256_mul_pd(tmp_qloop_51,wx_dof_2)),_mm256_mul_pd(tmp_qloop_52,wx_dof_4)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_37,wx_dof_5),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_56);
                   const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_14),_mm256_mul_pd(tmp_qloop_18,tmp_qloop_4));
                   const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_19),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_15),tmp_qloop_16),tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_14,tmp_qloop_3),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_20,tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_16),tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_21 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_22 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_21);
                   const __m256d abs_det_jac_blending = tmp_qloop_21;
                   const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_22);
                   const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_43 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY)),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY)));
                   const __m256d tmp_qloop_50 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY)),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY)));
                   const __m256d tmp_qloop_54 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,tmp_qloop_49),_mm256_mul_pd(tmp_qloop_50,tmp_qloop_53));
                   const __m256d tmp_qloop_62 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,tmp_qloop_57),_mm256_mul_pd(tmp_qloop_50,tmp_qloop_59));
                   const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_22);
                   const __m256d tmp_qloop_55 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY)),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY)));
                   const __m256d tmp_qloop_58 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY)),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY)));
                   const __m256d tmp_qloop_60 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_57),_mm256_mul_pd(tmp_qloop_58,tmp_qloop_59));
                   const __m256d tmp_qloop_61 = _mm256_add_pd(tmp_qloop_54,tmp_qloop_60);
                   const __m256d tmp_qloop_63 = _mm256_mul_pd(tmp_qloop_49,tmp_qloop_55);
                   const __m256d tmp_qloop_64 = _mm256_mul_pd(tmp_qloop_53,tmp_qloop_58);
                   const __m256d tmp_qloop_65 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_63,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_64,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_62);
                   const __m256d tmp_qloop_66 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(abs_det_jac_blending,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(mu_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(mu_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(mu_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])))),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_54,tmp_qloop_61),_mm256_mul_pd(tmp_qloop_60,tmp_qloop_61)),_mm256_mul_pd(tmp_qloop_62,tmp_qloop_65)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_65,_mm256_add_pd(tmp_qloop_63,tmp_qloop_64)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_set_pd(abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY,abs_det_jac_affine_GRAY));
                   const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_14),tmp_qloop_28);
                   const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_4)),_mm256_mul_pd(tmp_qloop_3,tmp_qloop_32)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_26,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_3,tmp_qloop_3),tmp_qloop_3)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_30),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_set_pd(tmp_qloop_11,tmp_qloop_11,tmp_qloop_11,tmp_qloop_11)));
                   const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_34,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_27),tmp_qloop_36);
                   const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_32),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_0),tmp_qloop_0),tmp_qloop_26),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_25),tmp_qloop_36);
                   const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_7,tmp_qloop_7,tmp_qloop_7,tmp_qloop_7)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_4),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_38),tmp_qloop_40),tmp_qloop_42),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_38),tmp_qloop_40),tmp_qloop_42)));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_40),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_40)));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_42),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_42)));
                   const __m256d q_tmp_3_3 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_39,tmp_qloop_41),tmp_qloop_66),_mm256_set_pd(16.0,16.0,16.0,16.0));
                   const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_44),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_44)));
                   const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_37),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_37)));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,q_tmp_3_3);
                   q_acc_4_4 = _mm256_add_pd(q_acc_4_4,q_tmp_4_4);
                   q_acc_5_5 = _mm256_add_pd(q_acc_5_5,q_tmp_5_5);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                const __m256d elMatDiag_3 = q_acc_3_3;
                const __m256d elMatDiag_4 = q_acc_4_4;
                const __m256d elMatDiag_5 = q_acc_5_5;
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatDiag_3,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatDiag_4,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatDiag_5,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
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
                const real_t mu_dof_0 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t mu_dof_1 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t mu_dof_2 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t wx_dof_0 = _data_wxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t wx_dof_1 = _data_wxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t wx_dof_2 = _data_wxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t wx_dof_3 = _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t wx_dof_4 = _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t wx_dof_5 = _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t wy_dof_0 = _data_wyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t wy_dof_1 = _data_wyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t wy_dof_2 = _data_wyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t wy_dof_3 = _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t wy_dof_4 = _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t wy_dof_5 = _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_3_3 = 0.0;
                real_t q_acc_4_4 = 0.0;
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
                   const real_t tmp_qloop_37 = 4.0*_data_q_p_0[q];
                   const real_t tmp_qloop_38 = tmp_qloop_37*_data_q_p_1[q];
                   const real_t tmp_qloop_39 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_qloop_40 = tmp_qloop_39*2.0;
                   const real_t tmp_qloop_41 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_qloop_42 = tmp_qloop_41*2.0;
                   const real_t tmp_qloop_44 = 4.0*_data_q_p_1[q];
                   const real_t tmp_qloop_45 = tmp_qloop_37 - 1.0;
                   const real_t tmp_qloop_46 = tmp_qloop_37 + tmp_qloop_44 - 3.0;
                   const real_t tmp_qloop_47 = tmp_qloop_46*wy_dof_0;
                   const real_t tmp_qloop_48 = -tmp_qloop_44 - 8.0*_data_q_p_0[q] + 4.0;
                   const real_t tmp_qloop_49 = tmp_qloop_44*wy_dof_3 - tmp_qloop_44*wy_dof_4 + tmp_qloop_45*wy_dof_1 + tmp_qloop_47 + tmp_qloop_48*wy_dof_5;
                   const real_t tmp_qloop_51 = tmp_qloop_44 - 1.0;
                   const real_t tmp_qloop_52 = -tmp_qloop_37 - 8.0*_data_q_p_1[q] + 4.0;
                   const real_t tmp_qloop_53 = tmp_qloop_37*wy_dof_3 - tmp_qloop_37*wy_dof_5 + tmp_qloop_47 + tmp_qloop_51*wy_dof_2 + tmp_qloop_52*wy_dof_4;
                   const real_t tmp_qloop_56 = tmp_qloop_46*wx_dof_0;
                   const real_t tmp_qloop_57 = tmp_qloop_44*wx_dof_3 - tmp_qloop_44*wx_dof_4 + tmp_qloop_45*wx_dof_1 + tmp_qloop_48*wx_dof_5 + tmp_qloop_56;
                   const real_t tmp_qloop_59 = tmp_qloop_37*wx_dof_3 - tmp_qloop_37*wx_dof_5 + tmp_qloop_51*wx_dof_2 + tmp_qloop_52*wx_dof_4 + tmp_qloop_56;
                   const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                   const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                   const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                   const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                   const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                   const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                   const real_t abs_det_jac_blending = tmp_qloop_21;
                   const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                   const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                   const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                   const real_t tmp_qloop_43 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_0;
                   const real_t tmp_qloop_50 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_0;
                   const real_t tmp_qloop_54 = tmp_qloop_43*tmp_qloop_49 + tmp_qloop_50*tmp_qloop_53;
                   const real_t tmp_qloop_62 = tmp_qloop_43*tmp_qloop_57 + tmp_qloop_50*tmp_qloop_59;
                   const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                   const real_t tmp_qloop_55 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_1;
                   const real_t tmp_qloop_58 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_1;
                   const real_t tmp_qloop_60 = tmp_qloop_55*tmp_qloop_57 + tmp_qloop_58*tmp_qloop_59;
                   const real_t tmp_qloop_61 = tmp_qloop_54 + tmp_qloop_60;
                   const real_t tmp_qloop_63 = tmp_qloop_49*tmp_qloop_55;
                   const real_t tmp_qloop_64 = tmp_qloop_53*tmp_qloop_58;
                   const real_t tmp_qloop_65 = tmp_qloop_62 - tmp_qloop_63 - tmp_qloop_64;
                   const real_t tmp_qloop_66 = abs_det_jac_affine_GRAY*abs_det_jac_blending*(mu_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + mu_dof_1*_data_q_p_0[q] + mu_dof_2*_data_q_p_1[q])*(tmp_qloop_54*tmp_qloop_61 + tmp_qloop_60*tmp_qloop_61 + tmp_qloop_62*tmp_qloop_65 - tmp_qloop_65*(tmp_qloop_63 + tmp_qloop_64))*_data_q_w[q];
                   const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                   const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                   const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                   const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                   const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                   const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                   const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                   const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                   const real_t q_tmp_0_0 = tmp_qloop_66*((tmp_qloop_38 + tmp_qloop_40 + tmp_qloop_42 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0)*(tmp_qloop_38 + tmp_qloop_40 + tmp_qloop_42 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0));
                   const real_t q_tmp_1_1 = tmp_qloop_66*((tmp_qloop_40 - _data_q_p_0[q])*(tmp_qloop_40 - _data_q_p_0[q]));
                   const real_t q_tmp_2_2 = tmp_qloop_66*((tmp_qloop_42 - _data_q_p_1[q])*(tmp_qloop_42 - _data_q_p_1[q]));
                   const real_t q_tmp_3_3 = tmp_qloop_39*tmp_qloop_41*tmp_qloop_66*16.0;
                   const real_t q_tmp_4_4 = tmp_qloop_66*((-tmp_qloop_38 + tmp_qloop_41*-4.0 + tmp_qloop_44)*(-tmp_qloop_38 + tmp_qloop_41*-4.0 + tmp_qloop_44));
                   const real_t q_tmp_5_5 = tmp_qloop_66*((tmp_qloop_37 - tmp_qloop_38 + tmp_qloop_39*-4.0)*(tmp_qloop_37 - tmp_qloop_38 + tmp_qloop_39*-4.0));
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                   q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                   q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                }
                const real_t elMatDiag_0 = q_acc_0_0;
                const real_t elMatDiag_1 = q_acc_1_1;
                const real_t elMatDiag_2 = q_acc_2_2;
                const real_t elMatDiag_3 = q_acc_3_3;
                const real_t elMatDiag_4 = q_acc_4_4;
                const real_t elMatDiag_5 = q_acc_5_5;
                _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
                const __m256d mu_dof_0 = _mm256_loadu_pd(& _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d mu_dof_1 = _mm256_loadu_pd(& _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d mu_dof_2 = _mm256_loadu_pd(& _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d wx_dof_0 = _mm256_loadu_pd(& _data_wxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d wx_dof_1 = _mm256_loadu_pd(& _data_wxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d wx_dof_2 = _mm256_loadu_pd(& _data_wxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d wx_dof_3 = _mm256_loadu_pd(& _data_wxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d wx_dof_4 = _mm256_loadu_pd(& _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d wx_dof_5 = _mm256_loadu_pd(& _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d wy_dof_0 = _mm256_loadu_pd(& _data_wyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d wy_dof_1 = _mm256_loadu_pd(& _data_wyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d wy_dof_2 = _mm256_loadu_pd(& _data_wyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d wy_dof_3 = _mm256_loadu_pd(& _data_wyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d wy_dof_4 = _mm256_loadu_pd(& _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d wy_dof_5 = _mm256_loadu_pd(& _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
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
                   const __m256d tmp_qloop_37 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_39 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_41 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_42 = _mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_qloop_44 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_qloop_45 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_37);
                   const __m256d tmp_qloop_46 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_qloop_37),tmp_qloop_44);
                   const __m256d tmp_qloop_47 = _mm256_mul_pd(tmp_qloop_46,wy_dof_0);
                   const __m256d tmp_qloop_48 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_44,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_49 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_44,wy_dof_3),_mm256_mul_pd(tmp_qloop_45,wy_dof_1)),_mm256_mul_pd(tmp_qloop_48,wy_dof_5)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,wy_dof_4),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_47);
                   const __m256d tmp_qloop_51 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_44);
                   const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_qloop_37,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_qloop_53 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,wy_dof_3),_mm256_mul_pd(tmp_qloop_51,wy_dof_2)),_mm256_mul_pd(tmp_qloop_52,wy_dof_4)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_37,wy_dof_5),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_47);
                   const __m256d tmp_qloop_56 = _mm256_mul_pd(tmp_qloop_46,wx_dof_0);
                   const __m256d tmp_qloop_57 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_44,wx_dof_3),_mm256_mul_pd(tmp_qloop_45,wx_dof_1)),_mm256_mul_pd(tmp_qloop_48,wx_dof_5)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_44,wx_dof_4),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_56);
                   const __m256d tmp_qloop_59 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_37,wx_dof_3),_mm256_mul_pd(tmp_qloop_51,wx_dof_2)),_mm256_mul_pd(tmp_qloop_52,wx_dof_4)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_37,wx_dof_5),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_56);
                   const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_14),_mm256_mul_pd(tmp_qloop_18,tmp_qloop_4));
                   const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_19),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_15),tmp_qloop_16),tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_14,tmp_qloop_3),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_20,tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_19,tmp_qloop_3),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_16),tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                   const __m256d tmp_qloop_21 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d tmp_qloop_22 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_21);
                   const __m256d abs_det_jac_blending = tmp_qloop_21;
                   const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_22);
                   const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_22),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                   const __m256d tmp_qloop_43 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE)),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE)));
                   const __m256d tmp_qloop_50 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE)),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE)));
                   const __m256d tmp_qloop_54 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,tmp_qloop_49),_mm256_mul_pd(tmp_qloop_50,tmp_qloop_53));
                   const __m256d tmp_qloop_62 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_43,tmp_qloop_57),_mm256_mul_pd(tmp_qloop_50,tmp_qloop_59));
                   const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_22);
                   const __m256d tmp_qloop_55 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE)),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE)));
                   const __m256d tmp_qloop_58 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE)),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE)));
                   const __m256d tmp_qloop_60 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_57),_mm256_mul_pd(tmp_qloop_58,tmp_qloop_59));
                   const __m256d tmp_qloop_61 = _mm256_add_pd(tmp_qloop_54,tmp_qloop_60);
                   const __m256d tmp_qloop_63 = _mm256_mul_pd(tmp_qloop_49,tmp_qloop_55);
                   const __m256d tmp_qloop_64 = _mm256_mul_pd(tmp_qloop_53,tmp_qloop_58);
                   const __m256d tmp_qloop_65 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_63,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_64,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_62);
                   const __m256d tmp_qloop_66 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(abs_det_jac_blending,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(mu_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(mu_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(mu_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])))),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_54,tmp_qloop_61),_mm256_mul_pd(tmp_qloop_60,tmp_qloop_61)),_mm256_mul_pd(tmp_qloop_62,tmp_qloop_65)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_65,_mm256_add_pd(tmp_qloop_63,tmp_qloop_64)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_set_pd(abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE,abs_det_jac_affine_BLUE));
                   const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_14),tmp_qloop_28);
                   const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_29,tmp_qloop_4)),_mm256_mul_pd(tmp_qloop_3,tmp_qloop_32)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_26,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_3,tmp_qloop_3),tmp_qloop_3)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                   const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_30),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_set_pd(tmp_qloop_11,tmp_qloop_11,tmp_qloop_11,tmp_qloop_11)));
                   const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_1,tmp_qloop_1,tmp_qloop_1,tmp_qloop_1)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_34,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_27),tmp_qloop_36);
                   const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_32),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_0),tmp_qloop_0),tmp_qloop_26),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_25),tmp_qloop_36);
                   const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_2),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_7,tmp_qloop_7,tmp_qloop_7,tmp_qloop_7)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_4),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_10,tmp_qloop_10,tmp_qloop_10,tmp_qloop_10)),_mm256_set_pd(tmp_qloop_8,tmp_qloop_8,tmp_qloop_8,tmp_qloop_8)),_mm256_set_pd(tmp_qloop_9,tmp_qloop_9,tmp_qloop_9,tmp_qloop_9)));
                   const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_38),tmp_qloop_40),tmp_qloop_42),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_38),tmp_qloop_40),tmp_qloop_42)));
                   const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_40),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_40)));
                   const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_42),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_42)));
                   const __m256d q_tmp_3_3 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_39,tmp_qloop_41),tmp_qloop_66),_mm256_set_pd(16.0,16.0,16.0,16.0));
                   const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_44),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_44)));
                   const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_66,_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_37),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_38,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_37)));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,q_tmp_3_3);
                   q_acc_4_4 = _mm256_add_pd(q_acc_4_4,q_tmp_4_4);
                   q_acc_5_5 = _mm256_add_pd(q_acc_5_5,q_tmp_5_5);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                const __m256d elMatDiag_3 = q_acc_3_3;
                const __m256d elMatDiag_4 = q_acc_4_4;
                const __m256d elMatDiag_5 = q_acc_5_5;
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_3,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_4,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatDiag_5,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
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
                const real_t mu_dof_0 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t mu_dof_1 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t mu_dof_2 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t wx_dof_0 = _data_wxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t wx_dof_1 = _data_wxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t wx_dof_2 = _data_wxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t wx_dof_3 = _data_wxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t wx_dof_4 = _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t wx_dof_5 = _data_wxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t wy_dof_0 = _data_wyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t wy_dof_1 = _data_wyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t wy_dof_2 = _data_wyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t wy_dof_3 = _data_wyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t wy_dof_4 = _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t wy_dof_5 = _data_wyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_3_3 = 0.0;
                real_t q_acc_4_4 = 0.0;
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
                   const real_t tmp_qloop_37 = 4.0*_data_q_p_0[q];
                   const real_t tmp_qloop_38 = tmp_qloop_37*_data_q_p_1[q];
                   const real_t tmp_qloop_39 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_qloop_40 = tmp_qloop_39*2.0;
                   const real_t tmp_qloop_41 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_qloop_42 = tmp_qloop_41*2.0;
                   const real_t tmp_qloop_44 = 4.0*_data_q_p_1[q];
                   const real_t tmp_qloop_45 = tmp_qloop_37 - 1.0;
                   const real_t tmp_qloop_46 = tmp_qloop_37 + tmp_qloop_44 - 3.0;
                   const real_t tmp_qloop_47 = tmp_qloop_46*wy_dof_0;
                   const real_t tmp_qloop_48 = -tmp_qloop_44 - 8.0*_data_q_p_0[q] + 4.0;
                   const real_t tmp_qloop_49 = tmp_qloop_44*wy_dof_3 - tmp_qloop_44*wy_dof_4 + tmp_qloop_45*wy_dof_1 + tmp_qloop_47 + tmp_qloop_48*wy_dof_5;
                   const real_t tmp_qloop_51 = tmp_qloop_44 - 1.0;
                   const real_t tmp_qloop_52 = -tmp_qloop_37 - 8.0*_data_q_p_1[q] + 4.0;
                   const real_t tmp_qloop_53 = tmp_qloop_37*wy_dof_3 - tmp_qloop_37*wy_dof_5 + tmp_qloop_47 + tmp_qloop_51*wy_dof_2 + tmp_qloop_52*wy_dof_4;
                   const real_t tmp_qloop_56 = tmp_qloop_46*wx_dof_0;
                   const real_t tmp_qloop_57 = tmp_qloop_44*wx_dof_3 - tmp_qloop_44*wx_dof_4 + tmp_qloop_45*wx_dof_1 + tmp_qloop_48*wx_dof_5 + tmp_qloop_56;
                   const real_t tmp_qloop_59 = tmp_qloop_37*wx_dof_3 - tmp_qloop_37*wx_dof_5 + tmp_qloop_51*wx_dof_2 + tmp_qloop_52*wx_dof_4 + tmp_qloop_56;
                   const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                   const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                   const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                   const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                   const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                   const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                   const real_t abs_det_jac_blending = tmp_qloop_21;
                   const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                   const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                   const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                   const real_t tmp_qloop_43 = jac_affine_inv_0_0_BLUE*jac_blending_inv_0_0 + jac_affine_inv_0_1_BLUE*jac_blending_inv_1_0;
                   const real_t tmp_qloop_50 = jac_affine_inv_1_0_BLUE*jac_blending_inv_0_0 + jac_affine_inv_1_1_BLUE*jac_blending_inv_1_0;
                   const real_t tmp_qloop_54 = tmp_qloop_43*tmp_qloop_49 + tmp_qloop_50*tmp_qloop_53;
                   const real_t tmp_qloop_62 = tmp_qloop_43*tmp_qloop_57 + tmp_qloop_50*tmp_qloop_59;
                   const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                   const real_t tmp_qloop_55 = jac_affine_inv_0_0_BLUE*jac_blending_inv_0_1 + jac_affine_inv_0_1_BLUE*jac_blending_inv_1_1;
                   const real_t tmp_qloop_58 = jac_affine_inv_1_0_BLUE*jac_blending_inv_0_1 + jac_affine_inv_1_1_BLUE*jac_blending_inv_1_1;
                   const real_t tmp_qloop_60 = tmp_qloop_55*tmp_qloop_57 + tmp_qloop_58*tmp_qloop_59;
                   const real_t tmp_qloop_61 = tmp_qloop_54 + tmp_qloop_60;
                   const real_t tmp_qloop_63 = tmp_qloop_49*tmp_qloop_55;
                   const real_t tmp_qloop_64 = tmp_qloop_53*tmp_qloop_58;
                   const real_t tmp_qloop_65 = tmp_qloop_62 - tmp_qloop_63 - tmp_qloop_64;
                   const real_t tmp_qloop_66 = abs_det_jac_affine_BLUE*abs_det_jac_blending*(mu_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + mu_dof_1*_data_q_p_0[q] + mu_dof_2*_data_q_p_1[q])*(tmp_qloop_54*tmp_qloop_61 + tmp_qloop_60*tmp_qloop_61 + tmp_qloop_62*tmp_qloop_65 - tmp_qloop_65*(tmp_qloop_63 + tmp_qloop_64))*_data_q_w[q];
                   const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                   const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                   const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                   const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                   const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                   const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                   const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                   const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                   const real_t q_tmp_0_0 = tmp_qloop_66*((tmp_qloop_38 + tmp_qloop_40 + tmp_qloop_42 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0)*(tmp_qloop_38 + tmp_qloop_40 + tmp_qloop_42 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0));
                   const real_t q_tmp_1_1 = tmp_qloop_66*((tmp_qloop_40 - _data_q_p_0[q])*(tmp_qloop_40 - _data_q_p_0[q]));
                   const real_t q_tmp_2_2 = tmp_qloop_66*((tmp_qloop_42 - _data_q_p_1[q])*(tmp_qloop_42 - _data_q_p_1[q]));
                   const real_t q_tmp_3_3 = tmp_qloop_39*tmp_qloop_41*tmp_qloop_66*16.0;
                   const real_t q_tmp_4_4 = tmp_qloop_66*((-tmp_qloop_38 + tmp_qloop_41*-4.0 + tmp_qloop_44)*(-tmp_qloop_38 + tmp_qloop_41*-4.0 + tmp_qloop_44));
                   const real_t q_tmp_5_5 = tmp_qloop_66*((tmp_qloop_37 - tmp_qloop_38 + tmp_qloop_39*-4.0)*(tmp_qloop_37 - tmp_qloop_38 + tmp_qloop_39*-4.0));
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                   q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                   q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                   q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                }
                const real_t elMatDiag_0 = q_acc_0_0;
                const real_t elMatDiag_1 = q_acc_1_1;
                const real_t elMatDiag_2 = q_acc_2_2;
                const real_t elMatDiag_3 = q_acc_3_3;
                const real_t elMatDiag_4 = q_acc_4_4;
                const real_t elMatDiag_5 = q_acc_5_5;
                _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_3 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
