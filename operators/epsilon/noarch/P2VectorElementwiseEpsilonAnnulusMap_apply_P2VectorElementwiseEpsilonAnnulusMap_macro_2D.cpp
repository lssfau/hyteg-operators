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

































#include "../P2VectorElementwiseEpsilonAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorElementwiseEpsilonAnnulusMap::apply_P2VectorElementwiseEpsilonAnnulusMap_macro_2D( real_t * RESTRICT  _data_dst_edge_0, real_t * RESTRICT  _data_dst_edge_1, real_t * RESTRICT  _data_dst_vertex_0, real_t * RESTRICT  _data_dst_vertex_1, real_t * RESTRICT  _data_muEdge, real_t * RESTRICT  _data_muVertex, real_t * RESTRICT  _data_src_edge_0, real_t * RESTRICT  _data_src_edge_1, real_t * RESTRICT  _data_src_vertex_0, real_t * RESTRICT  _data_src_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
          const real_t _data_phi_0_0_GRAY [] = {-0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, -0.11999999999999988, -0.12, 0.12, 0.47999999999999998, 0.47999999999999998, 0.16000000000000003, -0.11999999999999988, 0.12, -0.12, 0.47999999999999998, 0.16000000000000003, 0.47999999999999998, 0.11999999999999988, -0.12, -0.12, 0.16000000000000003, 0.47999999999999998, 0.47999999999999998};
      
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333348 + jac_affine_inv_1_0_GRAY*-0.33333333333333348)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999973 + jac_affine_inv_1_0_GRAY*0.19999999999999973)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*2.3999999999999999 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.3999999999999999 + jac_affine_inv_1_0_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999996 + jac_affine_inv_1_0_GRAY*0.19999999999999996)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.5999999999999999 + jac_affine_inv_1_0_GRAY*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-1.4000000000000001 + jac_affine_inv_1_0_GRAY*-1.4000000000000001)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004 + jac_affine_inv_1_0_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*1.5999999999999999 + jac_affine_inv_1_0_GRAY*-0.80000000000000004)), 0.0};
      
          const real_t _data_tabulated_and_untitled_0_1_GRAY [] = {0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333348 + jac_affine_inv_1_0_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999973 + jac_affine_inv_1_0_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*2.3999999999999999 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.3999999999999999 + jac_affine_inv_1_0_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999996 + jac_affine_inv_1_0_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.5999999999999999 + jac_affine_inv_1_0_GRAY*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-1.4000000000000001 + jac_affine_inv_1_0_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004 + jac_affine_inv_1_0_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*1.5999999999999999 + jac_affine_inv_1_0_GRAY*-0.80000000000000004))};
      
          const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333348 + jac_affine_inv_1_1_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3333333333333333 + jac_affine_inv_1_1_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3333333333333333 + jac_affine_inv_1_1_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_1_GRAY*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999973 + jac_affine_inv_1_1_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*2.3999999999999999 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.3999999999999999 + jac_affine_inv_1_1_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999996 + jac_affine_inv_1_1_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.5999999999999999 + jac_affine_inv_1_1_GRAY*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-1.4000000000000001 + jac_affine_inv_1_1_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004 + jac_affine_inv_1_1_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*1.5999999999999999 + jac_affine_inv_1_1_GRAY*-0.80000000000000004)), 0.0};
      
          const real_t _data_tabulated_and_untitled_1_1_GRAY [] = {0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333348 + jac_affine_inv_1_1_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3333333333333333 + jac_affine_inv_1_1_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3333333333333333 + jac_affine_inv_1_1_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_1_GRAY*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999973 + jac_affine_inv_1_1_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*2.3999999999999999 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.3999999999999999 + jac_affine_inv_1_1_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999996 + jac_affine_inv_1_1_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.5999999999999999 + jac_affine_inv_1_1_GRAY*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-1.4000000000000001 + jac_affine_inv_1_1_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004 + jac_affine_inv_1_1_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*1.5999999999999999 + jac_affine_inv_1_1_GRAY*-0.80000000000000004))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
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
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_0_10 = 0.0;
             real_t q_acc_0_11 = 0.0;
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
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             real_t q_acc_3_10 = 0.0;
             real_t q_acc_3_11 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_4_6 = 0.0;
             real_t q_acc_4_7 = 0.0;
             real_t q_acc_4_8 = 0.0;
             real_t q_acc_4_9 = 0.0;
             real_t q_acc_4_10 = 0.0;
             real_t q_acc_4_11 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_5_6 = 0.0;
             real_t q_acc_5_7 = 0.0;
             real_t q_acc_5_8 = 0.0;
             real_t q_acc_5_9 = 0.0;
             real_t q_acc_5_10 = 0.0;
             real_t q_acc_5_11 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_6_7 = 0.0;
             real_t q_acc_6_8 = 0.0;
             real_t q_acc_6_9 = 0.0;
             real_t q_acc_6_10 = 0.0;
             real_t q_acc_6_11 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_7_8 = 0.0;
             real_t q_acc_7_9 = 0.0;
             real_t q_acc_7_10 = 0.0;
             real_t q_acc_7_11 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_8_9 = 0.0;
             real_t q_acc_8_10 = 0.0;
             real_t q_acc_8_11 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_9_10 = 0.0;
             real_t q_acc_9_11 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_10_11 = 0.0;
             real_t q_acc_11_11 = 0.0;
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
                const real_t tmp_qloop_40 = mu_dof_0*2.0*_data_phi_0_0_GRAY[6*q] + mu_dof_1*2.0*_data_phi_0_0_GRAY[6*q + 1] + mu_dof_2*2.0*_data_phi_0_0_GRAY[6*q + 2] + mu_dof_3*2.0*_data_phi_0_0_GRAY[6*q + 3] + mu_dof_4*2.0*_data_phi_0_0_GRAY[6*q + 4] + mu_dof_5*2.0*_data_phi_0_0_GRAY[6*q + 5];
                const real_t tmp_qloop_50 = tmp_qloop_40*0.5;
                const real_t tmp_qloop_58 = tmp_qloop_40*2.0;
                const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                const real_t abs_det_jac_blending = tmp_qloop_21;
                const real_t tmp_qloop_51 = abs_det_jac_blending*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1];
                const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                const real_t tmp_qloop_37 = jac_blending_inv_0_0*1.0;
                const real_t tmp_qloop_47 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q];
                const real_t tmp_qloop_81 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 1];
                const real_t tmp_qloop_89 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 2];
                const real_t tmp_qloop_94 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 3];
                const real_t tmp_qloop_99 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 4];
                const real_t tmp_qloop_104 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 5];
                const real_t tmp_qloop_109 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 6];
                const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                const real_t tmp_qloop_41 = jac_blending_inv_0_1*1.0;
                const real_t tmp_qloop_45 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q];
                const real_t tmp_qloop_54 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_61 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3];
                const real_t tmp_qloop_65 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4];
                const real_t tmp_qloop_69 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5];
                const real_t tmp_qloop_73 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6];
                const real_t tmp_qloop_83 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7];
                const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                const real_t tmp_qloop_38 = jac_blending_inv_1_0*1.0;
                const real_t tmp_qloop_39 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[8*q] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_48 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q];
                const real_t tmp_qloop_49 = tmp_qloop_47 + tmp_qloop_48;
                const real_t tmp_qloop_52 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_GRAY[7*q + 1];
                const real_t tmp_qloop_53 = tmp_qloop_39*tmp_qloop_40;
                const real_t tmp_qloop_56 = tmp_qloop_47*0.5 + tmp_qloop_48*0.5;
                const real_t tmp_qloop_60 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_GRAY[7*q + 2];
                const real_t tmp_qloop_64 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_GRAY[7*q + 3];
                const real_t tmp_qloop_68 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_GRAY[7*q + 4];
                const real_t tmp_qloop_72 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_GRAY[7*q + 5];
                const real_t tmp_qloop_76 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_GRAY[7*q + 6];
                const real_t tmp_qloop_77 = tmp_qloop_53*tmp_qloop_76;
                const real_t tmp_qloop_82 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 1];
                const real_t tmp_qloop_90 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 2];
                const real_t tmp_qloop_95 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 3];
                const real_t tmp_qloop_100 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 4];
                const real_t tmp_qloop_105 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 5];
                const real_t tmp_qloop_110 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 6];
                const real_t tmp_qloop_112 = tmp_qloop_40*tmp_qloop_52;
                const real_t tmp_qloop_114 = tmp_qloop_112*tmp_qloop_76;
                const real_t tmp_qloop_115 = tmp_qloop_40*tmp_qloop_60;
                const real_t tmp_qloop_117 = tmp_qloop_115*tmp_qloop_76;
                const real_t tmp_qloop_118 = tmp_qloop_40*tmp_qloop_64;
                const real_t tmp_qloop_120 = tmp_qloop_118*tmp_qloop_76;
                const real_t tmp_qloop_121 = tmp_qloop_40*tmp_qloop_68;
                const real_t tmp_qloop_123 = tmp_qloop_121*tmp_qloop_76;
                const real_t tmp_qloop_124 = tmp_qloop_40*tmp_qloop_72*tmp_qloop_76;
                const real_t tmp_qloop_126 = tmp_qloop_40*(tmp_qloop_76*tmp_qloop_76);
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                const real_t tmp_qloop_42 = jac_blending_inv_1_1*1.0;
                const real_t tmp_qloop_43 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_GRAY[7*q] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_GRAY[7*q];
                const real_t tmp_qloop_44 = tmp_qloop_40*(tmp_qloop_43*tmp_qloop_43);
                const real_t tmp_qloop_46 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_55 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 1];
                const real_t tmp_qloop_57 = tmp_qloop_54*0.5 + tmp_qloop_55*0.5 + tmp_qloop_56;
                const real_t tmp_qloop_59 = tmp_qloop_58*(tmp_qloop_45*0.5 + tmp_qloop_46*0.5 + tmp_qloop_56);
                const real_t tmp_qloop_62 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 2];
                const real_t tmp_qloop_63 = tmp_qloop_56 + tmp_qloop_61*0.5 + tmp_qloop_62*0.5;
                const real_t tmp_qloop_66 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 3];
                const real_t tmp_qloop_67 = tmp_qloop_56 + tmp_qloop_65*0.5 + tmp_qloop_66*0.5;
                const real_t tmp_qloop_70 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 4];
                const real_t tmp_qloop_71 = tmp_qloop_56 + tmp_qloop_69*0.5 + tmp_qloop_70*0.5;
                const real_t tmp_qloop_74 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 5];
                const real_t tmp_qloop_75 = tmp_qloop_56 + tmp_qloop_73*0.5 + tmp_qloop_74*0.5;
                const real_t tmp_qloop_78 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_GRAY[7*q + 1] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_GRAY[7*q + 1];
                const real_t tmp_qloop_79 = tmp_qloop_40*tmp_qloop_43;
                const real_t tmp_qloop_80 = tmp_qloop_78*tmp_qloop_79;
                const real_t tmp_qloop_84 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 6];
                const real_t tmp_qloop_85 = tmp_qloop_83*0.5 + tmp_qloop_84*0.5;
                const real_t tmp_qloop_86 = tmp_qloop_81*0.5 + tmp_qloop_82*0.5 + tmp_qloop_85;
                const real_t tmp_qloop_87 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_GRAY[7*q + 2] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_GRAY[7*q + 2];
                const real_t tmp_qloop_88 = tmp_qloop_79*tmp_qloop_87;
                const real_t tmp_qloop_91 = tmp_qloop_85 + tmp_qloop_89*0.5 + tmp_qloop_90*0.5;
                const real_t tmp_qloop_92 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_GRAY[7*q + 3] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_GRAY[7*q + 3];
                const real_t tmp_qloop_93 = tmp_qloop_79*tmp_qloop_92;
                const real_t tmp_qloop_96 = tmp_qloop_85 + tmp_qloop_94*0.5 + tmp_qloop_95*0.5;
                const real_t tmp_qloop_97 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_GRAY[7*q + 4] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_GRAY[7*q + 4];
                const real_t tmp_qloop_98 = tmp_qloop_79*tmp_qloop_97;
                const real_t tmp_qloop_101 = tmp_qloop_100*0.5 + tmp_qloop_85 + tmp_qloop_99*0.5;
                const real_t tmp_qloop_102 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_GRAY[7*q + 5] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_GRAY[7*q + 5];
                const real_t tmp_qloop_103 = tmp_qloop_102*tmp_qloop_79;
                const real_t tmp_qloop_106 = tmp_qloop_104*0.5 + tmp_qloop_105*0.5 + tmp_qloop_85;
                const real_t tmp_qloop_107 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_GRAY[7*q + 6] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_GRAY[7*q + 6];
                const real_t tmp_qloop_108 = tmp_qloop_107*tmp_qloop_79;
                const real_t tmp_qloop_111 = tmp_qloop_109*0.5 + tmp_qloop_110*0.5 + tmp_qloop_85;
                const real_t tmp_qloop_113 = tmp_qloop_57*tmp_qloop_58;
                const real_t tmp_qloop_116 = tmp_qloop_58*tmp_qloop_63;
                const real_t tmp_qloop_119 = tmp_qloop_58*tmp_qloop_67;
                const real_t tmp_qloop_122 = tmp_qloop_58*tmp_qloop_71;
                const real_t tmp_qloop_125 = tmp_qloop_58*tmp_qloop_75;
                const real_t tmp_qloop_127 = tmp_qloop_83 + tmp_qloop_84;
                const real_t tmp_qloop_128 = tmp_qloop_40*tmp_qloop_78;
                const real_t tmp_qloop_129 = tmp_qloop_58*tmp_qloop_86;
                const real_t tmp_qloop_130 = tmp_qloop_40*tmp_qloop_87;
                const real_t tmp_qloop_131 = tmp_qloop_58*tmp_qloop_91;
                const real_t tmp_qloop_132 = tmp_qloop_40*tmp_qloop_92;
                const real_t tmp_qloop_133 = tmp_qloop_58*tmp_qloop_96;
                const real_t tmp_qloop_134 = tmp_qloop_40*tmp_qloop_97;
                const real_t tmp_qloop_135 = tmp_qloop_101*tmp_qloop_58;
                const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                const real_t q_tmp_0_0 = tmp_qloop_51*((tmp_qloop_39*tmp_qloop_39)*tmp_qloop_40 + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_45 + tmp_qloop_46 + tmp_qloop_49)*(tmp_qloop_45 + tmp_qloop_46 + tmp_qloop_49)));
                const real_t q_tmp_0_1 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_52*tmp_qloop_53 + tmp_qloop_57*tmp_qloop_59);
                const real_t q_tmp_0_2 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_53*tmp_qloop_60 + tmp_qloop_59*tmp_qloop_63);
                const real_t q_tmp_0_3 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_53*tmp_qloop_64 + tmp_qloop_59*tmp_qloop_67);
                const real_t q_tmp_0_4 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_53*tmp_qloop_68 + tmp_qloop_59*tmp_qloop_71);
                const real_t q_tmp_0_5 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_53*tmp_qloop_72 + tmp_qloop_59*tmp_qloop_75);
                const real_t q_tmp_0_6 = tmp_qloop_51*(tmp_qloop_59*tmp_qloop_86 + tmp_qloop_77 + tmp_qloop_80);
                const real_t q_tmp_0_7 = tmp_qloop_51*(tmp_qloop_59*tmp_qloop_91 + tmp_qloop_77 + tmp_qloop_88);
                const real_t q_tmp_0_8 = tmp_qloop_51*(tmp_qloop_59*tmp_qloop_96 + tmp_qloop_77 + tmp_qloop_93);
                const real_t q_tmp_0_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_59 + tmp_qloop_77 + tmp_qloop_98);
                const real_t q_tmp_0_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_59 + tmp_qloop_77);
                const real_t q_tmp_0_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_59 + tmp_qloop_77);
                const real_t q_tmp_1_1 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_52*tmp_qloop_52) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_54 + tmp_qloop_55)*(tmp_qloop_49 + tmp_qloop_54 + tmp_qloop_55)));
                const real_t q_tmp_1_2 = tmp_qloop_51*(tmp_qloop_112*tmp_qloop_60 + tmp_qloop_113*tmp_qloop_63 + tmp_qloop_44);
                const real_t q_tmp_1_3 = tmp_qloop_51*(tmp_qloop_112*tmp_qloop_64 + tmp_qloop_113*tmp_qloop_67 + tmp_qloop_44);
                const real_t q_tmp_1_4 = tmp_qloop_51*(tmp_qloop_112*tmp_qloop_68 + tmp_qloop_113*tmp_qloop_71 + tmp_qloop_44);
                const real_t q_tmp_1_5 = tmp_qloop_51*(tmp_qloop_112*tmp_qloop_72 + tmp_qloop_113*tmp_qloop_75 + tmp_qloop_44);
                const real_t q_tmp_1_6 = tmp_qloop_51*(tmp_qloop_113*tmp_qloop_86 + tmp_qloop_114 + tmp_qloop_80);
                const real_t q_tmp_1_7 = tmp_qloop_51*(tmp_qloop_113*tmp_qloop_91 + tmp_qloop_114 + tmp_qloop_88);
                const real_t q_tmp_1_8 = tmp_qloop_51*(tmp_qloop_113*tmp_qloop_96 + tmp_qloop_114 + tmp_qloop_93);
                const real_t q_tmp_1_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_113 + tmp_qloop_114 + tmp_qloop_98);
                const real_t q_tmp_1_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_113 + tmp_qloop_114);
                const real_t q_tmp_1_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_113 + tmp_qloop_114);
                const real_t q_tmp_2_2 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_60*tmp_qloop_60) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_61 + tmp_qloop_62)*(tmp_qloop_49 + tmp_qloop_61 + tmp_qloop_62)));
                const real_t q_tmp_2_3 = tmp_qloop_51*(tmp_qloop_115*tmp_qloop_64 + tmp_qloop_116*tmp_qloop_67 + tmp_qloop_44);
                const real_t q_tmp_2_4 = tmp_qloop_51*(tmp_qloop_115*tmp_qloop_68 + tmp_qloop_116*tmp_qloop_71 + tmp_qloop_44);
                const real_t q_tmp_2_5 = tmp_qloop_51*(tmp_qloop_115*tmp_qloop_72 + tmp_qloop_116*tmp_qloop_75 + tmp_qloop_44);
                const real_t q_tmp_2_6 = tmp_qloop_51*(tmp_qloop_116*tmp_qloop_86 + tmp_qloop_117 + tmp_qloop_80);
                const real_t q_tmp_2_7 = tmp_qloop_51*(tmp_qloop_116*tmp_qloop_91 + tmp_qloop_117 + tmp_qloop_88);
                const real_t q_tmp_2_8 = tmp_qloop_51*(tmp_qloop_116*tmp_qloop_96 + tmp_qloop_117 + tmp_qloop_93);
                const real_t q_tmp_2_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_116 + tmp_qloop_117 + tmp_qloop_98);
                const real_t q_tmp_2_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_116 + tmp_qloop_117);
                const real_t q_tmp_2_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_116 + tmp_qloop_117);
                const real_t q_tmp_3_3 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_64*tmp_qloop_64) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_65 + tmp_qloop_66)*(tmp_qloop_49 + tmp_qloop_65 + tmp_qloop_66)));
                const real_t q_tmp_3_4 = tmp_qloop_51*(tmp_qloop_118*tmp_qloop_68 + tmp_qloop_119*tmp_qloop_71 + tmp_qloop_44);
                const real_t q_tmp_3_5 = tmp_qloop_51*(tmp_qloop_118*tmp_qloop_72 + tmp_qloop_119*tmp_qloop_75 + tmp_qloop_44);
                const real_t q_tmp_3_6 = tmp_qloop_51*(tmp_qloop_119*tmp_qloop_86 + tmp_qloop_120 + tmp_qloop_80);
                const real_t q_tmp_3_7 = tmp_qloop_51*(tmp_qloop_119*tmp_qloop_91 + tmp_qloop_120 + tmp_qloop_88);
                const real_t q_tmp_3_8 = tmp_qloop_51*(tmp_qloop_119*tmp_qloop_96 + tmp_qloop_120 + tmp_qloop_93);
                const real_t q_tmp_3_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_119 + tmp_qloop_120 + tmp_qloop_98);
                const real_t q_tmp_3_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_119 + tmp_qloop_120);
                const real_t q_tmp_3_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_119 + tmp_qloop_120);
                const real_t q_tmp_4_4 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_68*tmp_qloop_68) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_69 + tmp_qloop_70)*(tmp_qloop_49 + tmp_qloop_69 + tmp_qloop_70)));
                const real_t q_tmp_4_5 = tmp_qloop_51*(tmp_qloop_121*tmp_qloop_72 + tmp_qloop_122*tmp_qloop_75 + tmp_qloop_44);
                const real_t q_tmp_4_6 = tmp_qloop_51*(tmp_qloop_122*tmp_qloop_86 + tmp_qloop_123 + tmp_qloop_80);
                const real_t q_tmp_4_7 = tmp_qloop_51*(tmp_qloop_122*tmp_qloop_91 + tmp_qloop_123 + tmp_qloop_88);
                const real_t q_tmp_4_8 = tmp_qloop_51*(tmp_qloop_122*tmp_qloop_96 + tmp_qloop_123 + tmp_qloop_93);
                const real_t q_tmp_4_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_122 + tmp_qloop_123 + tmp_qloop_98);
                const real_t q_tmp_4_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_122 + tmp_qloop_123);
                const real_t q_tmp_4_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_122 + tmp_qloop_123);
                const real_t q_tmp_5_5 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_72*tmp_qloop_72) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_73 + tmp_qloop_74)*(tmp_qloop_49 + tmp_qloop_73 + tmp_qloop_74)));
                const real_t q_tmp_5_6 = tmp_qloop_51*(tmp_qloop_124 + tmp_qloop_125*tmp_qloop_86 + tmp_qloop_80);
                const real_t q_tmp_5_7 = tmp_qloop_51*(tmp_qloop_124 + tmp_qloop_125*tmp_qloop_91 + tmp_qloop_88);
                const real_t q_tmp_5_8 = tmp_qloop_51*(tmp_qloop_124 + tmp_qloop_125*tmp_qloop_96 + tmp_qloop_93);
                const real_t q_tmp_5_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_125 + tmp_qloop_124 + tmp_qloop_98);
                const real_t q_tmp_5_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_125 + tmp_qloop_124);
                const real_t q_tmp_5_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_125 + tmp_qloop_124);
                const real_t q_tmp_6_6 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_40*(tmp_qloop_78*tmp_qloop_78) + tmp_qloop_50*((tmp_qloop_127 + tmp_qloop_81 + tmp_qloop_82)*(tmp_qloop_127 + tmp_qloop_81 + tmp_qloop_82)));
                const real_t q_tmp_6_7 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_128*tmp_qloop_87 + tmp_qloop_129*tmp_qloop_91);
                const real_t q_tmp_6_8 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_128*tmp_qloop_92 + tmp_qloop_129*tmp_qloop_96);
                const real_t q_tmp_6_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_129 + tmp_qloop_126 + tmp_qloop_128*tmp_qloop_97);
                const real_t q_tmp_6_10 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_128 + tmp_qloop_106*tmp_qloop_129 + tmp_qloop_126);
                const real_t q_tmp_6_11 = tmp_qloop_51*(tmp_qloop_107*tmp_qloop_128 + tmp_qloop_111*tmp_qloop_129 + tmp_qloop_126);
                const real_t q_tmp_7_7 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_40*(tmp_qloop_87*tmp_qloop_87) + tmp_qloop_50*((tmp_qloop_127 + tmp_qloop_89 + tmp_qloop_90)*(tmp_qloop_127 + tmp_qloop_89 + tmp_qloop_90)));
                const real_t q_tmp_7_8 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_130*tmp_qloop_92 + tmp_qloop_131*tmp_qloop_96);
                const real_t q_tmp_7_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_131 + tmp_qloop_126 + tmp_qloop_130*tmp_qloop_97);
                const real_t q_tmp_7_10 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_130 + tmp_qloop_106*tmp_qloop_131 + tmp_qloop_126);
                const real_t q_tmp_7_11 = tmp_qloop_51*(tmp_qloop_107*tmp_qloop_130 + tmp_qloop_111*tmp_qloop_131 + tmp_qloop_126);
                const real_t q_tmp_8_8 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_40*(tmp_qloop_92*tmp_qloop_92) + tmp_qloop_50*((tmp_qloop_127 + tmp_qloop_94 + tmp_qloop_95)*(tmp_qloop_127 + tmp_qloop_94 + tmp_qloop_95)));
                const real_t q_tmp_8_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_133 + tmp_qloop_126 + tmp_qloop_132*tmp_qloop_97);
                const real_t q_tmp_8_10 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_132 + tmp_qloop_106*tmp_qloop_133 + tmp_qloop_126);
                const real_t q_tmp_8_11 = tmp_qloop_51*(tmp_qloop_107*tmp_qloop_132 + tmp_qloop_111*tmp_qloop_133 + tmp_qloop_126);
                const real_t q_tmp_9_9 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_40*(tmp_qloop_97*tmp_qloop_97) + tmp_qloop_50*((tmp_qloop_100 + tmp_qloop_127 + tmp_qloop_99)*(tmp_qloop_100 + tmp_qloop_127 + tmp_qloop_99)));
                const real_t q_tmp_9_10 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_134 + tmp_qloop_106*tmp_qloop_135 + tmp_qloop_126);
                const real_t q_tmp_9_11 = tmp_qloop_51*(tmp_qloop_107*tmp_qloop_134 + tmp_qloop_111*tmp_qloop_135 + tmp_qloop_126);
                const real_t q_tmp_10_10 = tmp_qloop_51*((tmp_qloop_102*tmp_qloop_102)*tmp_qloop_40 + tmp_qloop_126 + tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_105 + tmp_qloop_127)*(tmp_qloop_104 + tmp_qloop_105 + tmp_qloop_127)));
                const real_t q_tmp_10_11 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_107*tmp_qloop_40 + tmp_qloop_106*tmp_qloop_111*tmp_qloop_58 + tmp_qloop_126);
                const real_t q_tmp_11_11 = tmp_qloop_51*((tmp_qloop_107*tmp_qloop_107)*tmp_qloop_40 + tmp_qloop_126 + tmp_qloop_50*((tmp_qloop_109 + tmp_qloop_110 + tmp_qloop_127)*(tmp_qloop_109 + tmp_qloop_110 + tmp_qloop_127)));
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
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
                q_acc_3_10 = q_acc_3_10 + q_tmp_3_10;
                q_acc_3_11 = q_acc_3_11 + q_tmp_3_11;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_4_6 = q_acc_4_6 + q_tmp_4_6;
                q_acc_4_7 = q_acc_4_7 + q_tmp_4_7;
                q_acc_4_8 = q_acc_4_8 + q_tmp_4_8;
                q_acc_4_9 = q_acc_4_9 + q_tmp_4_9;
                q_acc_4_10 = q_acc_4_10 + q_tmp_4_10;
                q_acc_4_11 = q_acc_4_11 + q_tmp_4_11;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_5_6 = q_acc_5_6 + q_tmp_5_6;
                q_acc_5_7 = q_acc_5_7 + q_tmp_5_7;
                q_acc_5_8 = q_acc_5_8 + q_tmp_5_8;
                q_acc_5_9 = q_acc_5_9 + q_tmp_5_9;
                q_acc_5_10 = q_acc_5_10 + q_tmp_5_10;
                q_acc_5_11 = q_acc_5_11 + q_tmp_5_11;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_6_7 = q_acc_6_7 + q_tmp_6_7;
                q_acc_6_8 = q_acc_6_8 + q_tmp_6_8;
                q_acc_6_9 = q_acc_6_9 + q_tmp_6_9;
                q_acc_6_10 = q_acc_6_10 + q_tmp_6_10;
                q_acc_6_11 = q_acc_6_11 + q_tmp_6_11;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_7_8 = q_acc_7_8 + q_tmp_7_8;
                q_acc_7_9 = q_acc_7_9 + q_tmp_7_9;
                q_acc_7_10 = q_acc_7_10 + q_tmp_7_10;
                q_acc_7_11 = q_acc_7_11 + q_tmp_7_11;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_8_9 = q_acc_8_9 + q_tmp_8_9;
                q_acc_8_10 = q_acc_8_10 + q_tmp_8_10;
                q_acc_8_11 = q_acc_8_11 + q_tmp_8_11;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_9_10 = q_acc_9_10 + q_tmp_9_10;
                q_acc_9_11 = q_acc_9_11 + q_tmp_9_11;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_10_11 = q_acc_10_11 + q_tmp_10_11;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_10*src_dof_10 + q_acc_0_11*src_dof_11 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5 + q_acc_0_6*src_dof_6 + q_acc_0_7*src_dof_7 + q_acc_0_8*src_dof_8 + q_acc_0_9*src_dof_9;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_10*src_dof_10 + q_acc_1_11*src_dof_11 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5 + q_acc_1_6*src_dof_6 + q_acc_1_7*src_dof_7 + q_acc_1_8*src_dof_8 + q_acc_1_9*src_dof_9;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_10*src_dof_10 + q_acc_2_11*src_dof_11 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5 + q_acc_2_6*src_dof_6 + q_acc_2_7*src_dof_7 + q_acc_2_8*src_dof_8 + q_acc_2_9*src_dof_9;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_10*src_dof_10 + q_acc_3_11*src_dof_11 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5 + q_acc_3_6*src_dof_6 + q_acc_3_7*src_dof_7 + q_acc_3_8*src_dof_8 + q_acc_3_9*src_dof_9;
             const real_t elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_10*src_dof_10 + q_acc_4_11*src_dof_11 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5 + q_acc_4_6*src_dof_6 + q_acc_4_7*src_dof_7 + q_acc_4_8*src_dof_8 + q_acc_4_9*src_dof_9;
             const real_t elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_10*src_dof_10 + q_acc_5_11*src_dof_11 + q_acc_5_5*src_dof_5 + q_acc_5_6*src_dof_6 + q_acc_5_7*src_dof_7 + q_acc_5_8*src_dof_8 + q_acc_5_9*src_dof_9;
             const real_t elMatVec_6 = q_acc_0_6*src_dof_0 + q_acc_1_6*src_dof_1 + q_acc_2_6*src_dof_2 + q_acc_3_6*src_dof_3 + q_acc_4_6*src_dof_4 + q_acc_5_6*src_dof_5 + q_acc_6_10*src_dof_10 + q_acc_6_11*src_dof_11 + q_acc_6_6*src_dof_6 + q_acc_6_7*src_dof_7 + q_acc_6_8*src_dof_8 + q_acc_6_9*src_dof_9;
             const real_t elMatVec_7 = q_acc_0_7*src_dof_0 + q_acc_1_7*src_dof_1 + q_acc_2_7*src_dof_2 + q_acc_3_7*src_dof_3 + q_acc_4_7*src_dof_4 + q_acc_5_7*src_dof_5 + q_acc_6_7*src_dof_6 + q_acc_7_10*src_dof_10 + q_acc_7_11*src_dof_11 + q_acc_7_7*src_dof_7 + q_acc_7_8*src_dof_8 + q_acc_7_9*src_dof_9;
             const real_t elMatVec_8 = q_acc_0_8*src_dof_0 + q_acc_1_8*src_dof_1 + q_acc_2_8*src_dof_2 + q_acc_3_8*src_dof_3 + q_acc_4_8*src_dof_4 + q_acc_5_8*src_dof_5 + q_acc_6_8*src_dof_6 + q_acc_7_8*src_dof_7 + q_acc_8_10*src_dof_10 + q_acc_8_11*src_dof_11 + q_acc_8_8*src_dof_8 + q_acc_8_9*src_dof_9;
             const real_t elMatVec_9 = q_acc_0_9*src_dof_0 + q_acc_1_9*src_dof_1 + q_acc_2_9*src_dof_2 + q_acc_3_9*src_dof_3 + q_acc_4_9*src_dof_4 + q_acc_5_9*src_dof_5 + q_acc_6_9*src_dof_6 + q_acc_7_9*src_dof_7 + q_acc_8_9*src_dof_8 + q_acc_9_10*src_dof_10 + q_acc_9_11*src_dof_11 + q_acc_9_9*src_dof_9;
             const real_t elMatVec_10 = q_acc_0_10*src_dof_0 + q_acc_10_10*src_dof_10 + q_acc_10_11*src_dof_11 + q_acc_1_10*src_dof_1 + q_acc_2_10*src_dof_2 + q_acc_3_10*src_dof_3 + q_acc_4_10*src_dof_4 + q_acc_5_10*src_dof_5 + q_acc_6_10*src_dof_6 + q_acc_7_10*src_dof_7 + q_acc_8_10*src_dof_8 + q_acc_9_10*src_dof_9;
             const real_t elMatVec_11 = q_acc_0_11*src_dof_0 + q_acc_10_11*src_dof_10 + q_acc_11_11*src_dof_11 + q_acc_1_11*src_dof_1 + q_acc_2_11*src_dof_2 + q_acc_3_11*src_dof_3 + q_acc_4_11*src_dof_4 + q_acc_5_11*src_dof_5 + q_acc_6_11*src_dof_6 + q_acc_7_11*src_dof_7 + q_acc_8_11*src_dof_8 + q_acc_9_11*src_dof_9;
             _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_6 + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_7 + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_8 + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_9 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_10 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_11 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
          const real_t _data_phi_0_0_BLUE [] = {-0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, -0.11999999999999988, -0.12, 0.12, 0.47999999999999998, 0.47999999999999998, 0.16000000000000003, -0.11999999999999988, 0.12, -0.12, 0.47999999999999998, 0.16000000000000003, 0.47999999999999998, 0.11999999999999988, -0.12, -0.12, 0.16000000000000003, 0.47999999999999998, 0.47999999999999998};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333348 + jac_affine_inv_1_0_BLUE*-0.33333333333333348)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999973 + jac_affine_inv_1_0_BLUE*0.19999999999999973)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*2.3999999999999999 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.3999999999999999 + jac_affine_inv_1_0_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999996 + jac_affine_inv_1_0_BLUE*0.19999999999999996)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.5999999999999999 + jac_affine_inv_1_0_BLUE*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-1.4000000000000001 + jac_affine_inv_1_0_BLUE*-1.4000000000000001)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004 + jac_affine_inv_1_0_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*1.5999999999999999 + jac_affine_inv_1_0_BLUE*-0.80000000000000004)), 0.0};
      
          const real_t _data_tabulated_and_untitled_0_1_BLUE [] = {0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333348 + jac_affine_inv_1_0_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999973 + jac_affine_inv_1_0_BLUE*0.19999999999999973)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*2.3999999999999999 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.3999999999999999 + jac_affine_inv_1_0_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999996 + jac_affine_inv_1_0_BLUE*0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.5999999999999999 + jac_affine_inv_1_0_BLUE*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-1.4000000000000001 + jac_affine_inv_1_0_BLUE*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004 + jac_affine_inv_1_0_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*1.5999999999999999 + jac_affine_inv_1_0_BLUE*-0.80000000000000004))};
      
          const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333348 + jac_affine_inv_1_1_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3333333333333333 + jac_affine_inv_1_1_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3333333333333333 + jac_affine_inv_1_1_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_1_BLUE*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999973 + jac_affine_inv_1_1_BLUE*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*2.3999999999999999 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.3999999999999999 + jac_affine_inv_1_1_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999996 + jac_affine_inv_1_1_BLUE*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.5999999999999999 + jac_affine_inv_1_1_BLUE*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-1.4000000000000001 + jac_affine_inv_1_1_BLUE*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004 + jac_affine_inv_1_1_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*1.5999999999999999 + jac_affine_inv_1_1_BLUE*-0.80000000000000004)), 0.0};
      
          const real_t _data_tabulated_and_untitled_1_1_BLUE [] = {0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333348 + jac_affine_inv_1_1_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3333333333333333 + jac_affine_inv_1_1_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3333333333333333 + jac_affine_inv_1_1_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_1_BLUE*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999973 + jac_affine_inv_1_1_BLUE*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*2.3999999999999999 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.3999999999999999 + jac_affine_inv_1_1_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999996 + jac_affine_inv_1_1_BLUE*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.5999999999999999 + jac_affine_inv_1_1_BLUE*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-1.4000000000000001 + jac_affine_inv_1_1_BLUE*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004 + jac_affine_inv_1_1_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*1.5999999999999999 + jac_affine_inv_1_1_BLUE*-0.80000000000000004))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_0_10 = 0.0;
             real_t q_acc_0_11 = 0.0;
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
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             real_t q_acc_3_10 = 0.0;
             real_t q_acc_3_11 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_4_6 = 0.0;
             real_t q_acc_4_7 = 0.0;
             real_t q_acc_4_8 = 0.0;
             real_t q_acc_4_9 = 0.0;
             real_t q_acc_4_10 = 0.0;
             real_t q_acc_4_11 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_5_6 = 0.0;
             real_t q_acc_5_7 = 0.0;
             real_t q_acc_5_8 = 0.0;
             real_t q_acc_5_9 = 0.0;
             real_t q_acc_5_10 = 0.0;
             real_t q_acc_5_11 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_6_7 = 0.0;
             real_t q_acc_6_8 = 0.0;
             real_t q_acc_6_9 = 0.0;
             real_t q_acc_6_10 = 0.0;
             real_t q_acc_6_11 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_7_8 = 0.0;
             real_t q_acc_7_9 = 0.0;
             real_t q_acc_7_10 = 0.0;
             real_t q_acc_7_11 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_8_9 = 0.0;
             real_t q_acc_8_10 = 0.0;
             real_t q_acc_8_11 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_9_10 = 0.0;
             real_t q_acc_9_11 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_10_11 = 0.0;
             real_t q_acc_11_11 = 0.0;
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
                const real_t tmp_qloop_40 = mu_dof_0*2.0*_data_phi_0_0_BLUE[6*q] + mu_dof_1*2.0*_data_phi_0_0_BLUE[6*q + 1] + mu_dof_2*2.0*_data_phi_0_0_BLUE[6*q + 2] + mu_dof_3*2.0*_data_phi_0_0_BLUE[6*q + 3] + mu_dof_4*2.0*_data_phi_0_0_BLUE[6*q + 4] + mu_dof_5*2.0*_data_phi_0_0_BLUE[6*q + 5];
                const real_t tmp_qloop_50 = tmp_qloop_40*0.5;
                const real_t tmp_qloop_58 = tmp_qloop_40*2.0;
                const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                const real_t abs_det_jac_blending = tmp_qloop_21;
                const real_t tmp_qloop_51 = abs_det_jac_blending*_data_q_w[q]*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1];
                const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                const real_t tmp_qloop_37 = jac_blending_inv_0_0*1.0;
                const real_t tmp_qloop_47 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q];
                const real_t tmp_qloop_81 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 1];
                const real_t tmp_qloop_89 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 2];
                const real_t tmp_qloop_94 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 3];
                const real_t tmp_qloop_99 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 4];
                const real_t tmp_qloop_104 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 5];
                const real_t tmp_qloop_109 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 6];
                const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                const real_t tmp_qloop_41 = jac_blending_inv_0_1*1.0;
                const real_t tmp_qloop_45 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q];
                const real_t tmp_qloop_54 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_61 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 3];
                const real_t tmp_qloop_65 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 4];
                const real_t tmp_qloop_69 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 5];
                const real_t tmp_qloop_73 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 6];
                const real_t tmp_qloop_83 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 7];
                const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                const real_t tmp_qloop_38 = jac_blending_inv_1_0*1.0;
                const real_t tmp_qloop_39 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[8*q] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_48 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q];
                const real_t tmp_qloop_49 = tmp_qloop_47 + tmp_qloop_48;
                const real_t tmp_qloop_52 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_BLUE[7*q + 1];
                const real_t tmp_qloop_53 = tmp_qloop_39*tmp_qloop_40;
                const real_t tmp_qloop_56 = tmp_qloop_47*0.5 + tmp_qloop_48*0.5;
                const real_t tmp_qloop_60 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[8*q + 3] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_BLUE[7*q + 2];
                const real_t tmp_qloop_64 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[8*q + 4] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_BLUE[7*q + 3];
                const real_t tmp_qloop_68 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[8*q + 5] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_BLUE[7*q + 4];
                const real_t tmp_qloop_72 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[8*q + 6] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_BLUE[7*q + 5];
                const real_t tmp_qloop_76 = tmp_qloop_37*_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + tmp_qloop_38*_data_tabulated_and_untitled_1_0_BLUE[7*q + 6];
                const real_t tmp_qloop_77 = tmp_qloop_53*tmp_qloop_76;
                const real_t tmp_qloop_82 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 1];
                const real_t tmp_qloop_90 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 2];
                const real_t tmp_qloop_95 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 3];
                const real_t tmp_qloop_100 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 4];
                const real_t tmp_qloop_105 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 5];
                const real_t tmp_qloop_110 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 6];
                const real_t tmp_qloop_112 = tmp_qloop_40*tmp_qloop_52;
                const real_t tmp_qloop_114 = tmp_qloop_112*tmp_qloop_76;
                const real_t tmp_qloop_115 = tmp_qloop_40*tmp_qloop_60;
                const real_t tmp_qloop_117 = tmp_qloop_115*tmp_qloop_76;
                const real_t tmp_qloop_118 = tmp_qloop_40*tmp_qloop_64;
                const real_t tmp_qloop_120 = tmp_qloop_118*tmp_qloop_76;
                const real_t tmp_qloop_121 = tmp_qloop_40*tmp_qloop_68;
                const real_t tmp_qloop_123 = tmp_qloop_121*tmp_qloop_76;
                const real_t tmp_qloop_124 = tmp_qloop_40*tmp_qloop_72*tmp_qloop_76;
                const real_t tmp_qloop_126 = tmp_qloop_40*(tmp_qloop_76*tmp_qloop_76);
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                const real_t tmp_qloop_42 = jac_blending_inv_1_1*1.0;
                const real_t tmp_qloop_43 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_BLUE[7*q] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_BLUE[7*q];
                const real_t tmp_qloop_44 = tmp_qloop_40*(tmp_qloop_43*tmp_qloop_43);
                const real_t tmp_qloop_46 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_55 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 1];
                const real_t tmp_qloop_57 = tmp_qloop_54*0.5 + tmp_qloop_55*0.5 + tmp_qloop_56;
                const real_t tmp_qloop_59 = tmp_qloop_58*(tmp_qloop_45*0.5 + tmp_qloop_46*0.5 + tmp_qloop_56);
                const real_t tmp_qloop_62 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 2];
                const real_t tmp_qloop_63 = tmp_qloop_56 + tmp_qloop_61*0.5 + tmp_qloop_62*0.5;
                const real_t tmp_qloop_66 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 3];
                const real_t tmp_qloop_67 = tmp_qloop_56 + tmp_qloop_65*0.5 + tmp_qloop_66*0.5;
                const real_t tmp_qloop_70 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 4];
                const real_t tmp_qloop_71 = tmp_qloop_56 + tmp_qloop_69*0.5 + tmp_qloop_70*0.5;
                const real_t tmp_qloop_74 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 5];
                const real_t tmp_qloop_75 = tmp_qloop_56 + tmp_qloop_73*0.5 + tmp_qloop_74*0.5;
                const real_t tmp_qloop_78 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_BLUE[7*q + 1] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_BLUE[7*q + 1];
                const real_t tmp_qloop_79 = tmp_qloop_40*tmp_qloop_43;
                const real_t tmp_qloop_80 = tmp_qloop_78*tmp_qloop_79;
                const real_t tmp_qloop_84 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 6];
                const real_t tmp_qloop_85 = tmp_qloop_83*0.5 + tmp_qloop_84*0.5;
                const real_t tmp_qloop_86 = tmp_qloop_81*0.5 + tmp_qloop_82*0.5 + tmp_qloop_85;
                const real_t tmp_qloop_87 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_BLUE[7*q + 2] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_BLUE[7*q + 2];
                const real_t tmp_qloop_88 = tmp_qloop_79*tmp_qloop_87;
                const real_t tmp_qloop_91 = tmp_qloop_85 + tmp_qloop_89*0.5 + tmp_qloop_90*0.5;
                const real_t tmp_qloop_92 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_BLUE[7*q + 3] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_BLUE[7*q + 3];
                const real_t tmp_qloop_93 = tmp_qloop_79*tmp_qloop_92;
                const real_t tmp_qloop_96 = tmp_qloop_85 + tmp_qloop_94*0.5 + tmp_qloop_95*0.5;
                const real_t tmp_qloop_97 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_BLUE[7*q + 4] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_BLUE[7*q + 4];
                const real_t tmp_qloop_98 = tmp_qloop_79*tmp_qloop_97;
                const real_t tmp_qloop_101 = tmp_qloop_100*0.5 + tmp_qloop_85 + tmp_qloop_99*0.5;
                const real_t tmp_qloop_102 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_BLUE[7*q + 5] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_BLUE[7*q + 5];
                const real_t tmp_qloop_103 = tmp_qloop_102*tmp_qloop_79;
                const real_t tmp_qloop_106 = tmp_qloop_104*0.5 + tmp_qloop_105*0.5 + tmp_qloop_85;
                const real_t tmp_qloop_107 = tmp_qloop_41*_data_tabulated_and_untitled_0_1_BLUE[7*q + 6] + tmp_qloop_42*_data_tabulated_and_untitled_1_1_BLUE[7*q + 6];
                const real_t tmp_qloop_108 = tmp_qloop_107*tmp_qloop_79;
                const real_t tmp_qloop_111 = tmp_qloop_109*0.5 + tmp_qloop_110*0.5 + tmp_qloop_85;
                const real_t tmp_qloop_113 = tmp_qloop_57*tmp_qloop_58;
                const real_t tmp_qloop_116 = tmp_qloop_58*tmp_qloop_63;
                const real_t tmp_qloop_119 = tmp_qloop_58*tmp_qloop_67;
                const real_t tmp_qloop_122 = tmp_qloop_58*tmp_qloop_71;
                const real_t tmp_qloop_125 = tmp_qloop_58*tmp_qloop_75;
                const real_t tmp_qloop_127 = tmp_qloop_83 + tmp_qloop_84;
                const real_t tmp_qloop_128 = tmp_qloop_40*tmp_qloop_78;
                const real_t tmp_qloop_129 = tmp_qloop_58*tmp_qloop_86;
                const real_t tmp_qloop_130 = tmp_qloop_40*tmp_qloop_87;
                const real_t tmp_qloop_131 = tmp_qloop_58*tmp_qloop_91;
                const real_t tmp_qloop_132 = tmp_qloop_40*tmp_qloop_92;
                const real_t tmp_qloop_133 = tmp_qloop_58*tmp_qloop_96;
                const real_t tmp_qloop_134 = tmp_qloop_40*tmp_qloop_97;
                const real_t tmp_qloop_135 = tmp_qloop_101*tmp_qloop_58;
                const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                const real_t q_tmp_0_0 = tmp_qloop_51*((tmp_qloop_39*tmp_qloop_39)*tmp_qloop_40 + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_45 + tmp_qloop_46 + tmp_qloop_49)*(tmp_qloop_45 + tmp_qloop_46 + tmp_qloop_49)));
                const real_t q_tmp_0_1 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_52*tmp_qloop_53 + tmp_qloop_57*tmp_qloop_59);
                const real_t q_tmp_0_2 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_53*tmp_qloop_60 + tmp_qloop_59*tmp_qloop_63);
                const real_t q_tmp_0_3 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_53*tmp_qloop_64 + tmp_qloop_59*tmp_qloop_67);
                const real_t q_tmp_0_4 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_53*tmp_qloop_68 + tmp_qloop_59*tmp_qloop_71);
                const real_t q_tmp_0_5 = tmp_qloop_51*(tmp_qloop_44 + tmp_qloop_53*tmp_qloop_72 + tmp_qloop_59*tmp_qloop_75);
                const real_t q_tmp_0_6 = tmp_qloop_51*(tmp_qloop_59*tmp_qloop_86 + tmp_qloop_77 + tmp_qloop_80);
                const real_t q_tmp_0_7 = tmp_qloop_51*(tmp_qloop_59*tmp_qloop_91 + tmp_qloop_77 + tmp_qloop_88);
                const real_t q_tmp_0_8 = tmp_qloop_51*(tmp_qloop_59*tmp_qloop_96 + tmp_qloop_77 + tmp_qloop_93);
                const real_t q_tmp_0_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_59 + tmp_qloop_77 + tmp_qloop_98);
                const real_t q_tmp_0_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_59 + tmp_qloop_77);
                const real_t q_tmp_0_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_59 + tmp_qloop_77);
                const real_t q_tmp_1_1 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_52*tmp_qloop_52) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_54 + tmp_qloop_55)*(tmp_qloop_49 + tmp_qloop_54 + tmp_qloop_55)));
                const real_t q_tmp_1_2 = tmp_qloop_51*(tmp_qloop_112*tmp_qloop_60 + tmp_qloop_113*tmp_qloop_63 + tmp_qloop_44);
                const real_t q_tmp_1_3 = tmp_qloop_51*(tmp_qloop_112*tmp_qloop_64 + tmp_qloop_113*tmp_qloop_67 + tmp_qloop_44);
                const real_t q_tmp_1_4 = tmp_qloop_51*(tmp_qloop_112*tmp_qloop_68 + tmp_qloop_113*tmp_qloop_71 + tmp_qloop_44);
                const real_t q_tmp_1_5 = tmp_qloop_51*(tmp_qloop_112*tmp_qloop_72 + tmp_qloop_113*tmp_qloop_75 + tmp_qloop_44);
                const real_t q_tmp_1_6 = tmp_qloop_51*(tmp_qloop_113*tmp_qloop_86 + tmp_qloop_114 + tmp_qloop_80);
                const real_t q_tmp_1_7 = tmp_qloop_51*(tmp_qloop_113*tmp_qloop_91 + tmp_qloop_114 + tmp_qloop_88);
                const real_t q_tmp_1_8 = tmp_qloop_51*(tmp_qloop_113*tmp_qloop_96 + tmp_qloop_114 + tmp_qloop_93);
                const real_t q_tmp_1_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_113 + tmp_qloop_114 + tmp_qloop_98);
                const real_t q_tmp_1_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_113 + tmp_qloop_114);
                const real_t q_tmp_1_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_113 + tmp_qloop_114);
                const real_t q_tmp_2_2 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_60*tmp_qloop_60) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_61 + tmp_qloop_62)*(tmp_qloop_49 + tmp_qloop_61 + tmp_qloop_62)));
                const real_t q_tmp_2_3 = tmp_qloop_51*(tmp_qloop_115*tmp_qloop_64 + tmp_qloop_116*tmp_qloop_67 + tmp_qloop_44);
                const real_t q_tmp_2_4 = tmp_qloop_51*(tmp_qloop_115*tmp_qloop_68 + tmp_qloop_116*tmp_qloop_71 + tmp_qloop_44);
                const real_t q_tmp_2_5 = tmp_qloop_51*(tmp_qloop_115*tmp_qloop_72 + tmp_qloop_116*tmp_qloop_75 + tmp_qloop_44);
                const real_t q_tmp_2_6 = tmp_qloop_51*(tmp_qloop_116*tmp_qloop_86 + tmp_qloop_117 + tmp_qloop_80);
                const real_t q_tmp_2_7 = tmp_qloop_51*(tmp_qloop_116*tmp_qloop_91 + tmp_qloop_117 + tmp_qloop_88);
                const real_t q_tmp_2_8 = tmp_qloop_51*(tmp_qloop_116*tmp_qloop_96 + tmp_qloop_117 + tmp_qloop_93);
                const real_t q_tmp_2_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_116 + tmp_qloop_117 + tmp_qloop_98);
                const real_t q_tmp_2_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_116 + tmp_qloop_117);
                const real_t q_tmp_2_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_116 + tmp_qloop_117);
                const real_t q_tmp_3_3 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_64*tmp_qloop_64) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_65 + tmp_qloop_66)*(tmp_qloop_49 + tmp_qloop_65 + tmp_qloop_66)));
                const real_t q_tmp_3_4 = tmp_qloop_51*(tmp_qloop_118*tmp_qloop_68 + tmp_qloop_119*tmp_qloop_71 + tmp_qloop_44);
                const real_t q_tmp_3_5 = tmp_qloop_51*(tmp_qloop_118*tmp_qloop_72 + tmp_qloop_119*tmp_qloop_75 + tmp_qloop_44);
                const real_t q_tmp_3_6 = tmp_qloop_51*(tmp_qloop_119*tmp_qloop_86 + tmp_qloop_120 + tmp_qloop_80);
                const real_t q_tmp_3_7 = tmp_qloop_51*(tmp_qloop_119*tmp_qloop_91 + tmp_qloop_120 + tmp_qloop_88);
                const real_t q_tmp_3_8 = tmp_qloop_51*(tmp_qloop_119*tmp_qloop_96 + tmp_qloop_120 + tmp_qloop_93);
                const real_t q_tmp_3_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_119 + tmp_qloop_120 + tmp_qloop_98);
                const real_t q_tmp_3_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_119 + tmp_qloop_120);
                const real_t q_tmp_3_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_119 + tmp_qloop_120);
                const real_t q_tmp_4_4 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_68*tmp_qloop_68) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_69 + tmp_qloop_70)*(tmp_qloop_49 + tmp_qloop_69 + tmp_qloop_70)));
                const real_t q_tmp_4_5 = tmp_qloop_51*(tmp_qloop_121*tmp_qloop_72 + tmp_qloop_122*tmp_qloop_75 + tmp_qloop_44);
                const real_t q_tmp_4_6 = tmp_qloop_51*(tmp_qloop_122*tmp_qloop_86 + tmp_qloop_123 + tmp_qloop_80);
                const real_t q_tmp_4_7 = tmp_qloop_51*(tmp_qloop_122*tmp_qloop_91 + tmp_qloop_123 + tmp_qloop_88);
                const real_t q_tmp_4_8 = tmp_qloop_51*(tmp_qloop_122*tmp_qloop_96 + tmp_qloop_123 + tmp_qloop_93);
                const real_t q_tmp_4_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_122 + tmp_qloop_123 + tmp_qloop_98);
                const real_t q_tmp_4_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_122 + tmp_qloop_123);
                const real_t q_tmp_4_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_122 + tmp_qloop_123);
                const real_t q_tmp_5_5 = tmp_qloop_51*(tmp_qloop_40*(tmp_qloop_72*tmp_qloop_72) + tmp_qloop_44 + tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_73 + tmp_qloop_74)*(tmp_qloop_49 + tmp_qloop_73 + tmp_qloop_74)));
                const real_t q_tmp_5_6 = tmp_qloop_51*(tmp_qloop_124 + tmp_qloop_125*tmp_qloop_86 + tmp_qloop_80);
                const real_t q_tmp_5_7 = tmp_qloop_51*(tmp_qloop_124 + tmp_qloop_125*tmp_qloop_91 + tmp_qloop_88);
                const real_t q_tmp_5_8 = tmp_qloop_51*(tmp_qloop_124 + tmp_qloop_125*tmp_qloop_96 + tmp_qloop_93);
                const real_t q_tmp_5_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_125 + tmp_qloop_124 + tmp_qloop_98);
                const real_t q_tmp_5_10 = tmp_qloop_51*(tmp_qloop_103 + tmp_qloop_106*tmp_qloop_125 + tmp_qloop_124);
                const real_t q_tmp_5_11 = tmp_qloop_51*(tmp_qloop_108 + tmp_qloop_111*tmp_qloop_125 + tmp_qloop_124);
                const real_t q_tmp_6_6 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_40*(tmp_qloop_78*tmp_qloop_78) + tmp_qloop_50*((tmp_qloop_127 + tmp_qloop_81 + tmp_qloop_82)*(tmp_qloop_127 + tmp_qloop_81 + tmp_qloop_82)));
                const real_t q_tmp_6_7 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_128*tmp_qloop_87 + tmp_qloop_129*tmp_qloop_91);
                const real_t q_tmp_6_8 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_128*tmp_qloop_92 + tmp_qloop_129*tmp_qloop_96);
                const real_t q_tmp_6_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_129 + tmp_qloop_126 + tmp_qloop_128*tmp_qloop_97);
                const real_t q_tmp_6_10 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_128 + tmp_qloop_106*tmp_qloop_129 + tmp_qloop_126);
                const real_t q_tmp_6_11 = tmp_qloop_51*(tmp_qloop_107*tmp_qloop_128 + tmp_qloop_111*tmp_qloop_129 + tmp_qloop_126);
                const real_t q_tmp_7_7 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_40*(tmp_qloop_87*tmp_qloop_87) + tmp_qloop_50*((tmp_qloop_127 + tmp_qloop_89 + tmp_qloop_90)*(tmp_qloop_127 + tmp_qloop_89 + tmp_qloop_90)));
                const real_t q_tmp_7_8 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_130*tmp_qloop_92 + tmp_qloop_131*tmp_qloop_96);
                const real_t q_tmp_7_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_131 + tmp_qloop_126 + tmp_qloop_130*tmp_qloop_97);
                const real_t q_tmp_7_10 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_130 + tmp_qloop_106*tmp_qloop_131 + tmp_qloop_126);
                const real_t q_tmp_7_11 = tmp_qloop_51*(tmp_qloop_107*tmp_qloop_130 + tmp_qloop_111*tmp_qloop_131 + tmp_qloop_126);
                const real_t q_tmp_8_8 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_40*(tmp_qloop_92*tmp_qloop_92) + tmp_qloop_50*((tmp_qloop_127 + tmp_qloop_94 + tmp_qloop_95)*(tmp_qloop_127 + tmp_qloop_94 + tmp_qloop_95)));
                const real_t q_tmp_8_9 = tmp_qloop_51*(tmp_qloop_101*tmp_qloop_133 + tmp_qloop_126 + tmp_qloop_132*tmp_qloop_97);
                const real_t q_tmp_8_10 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_132 + tmp_qloop_106*tmp_qloop_133 + tmp_qloop_126);
                const real_t q_tmp_8_11 = tmp_qloop_51*(tmp_qloop_107*tmp_qloop_132 + tmp_qloop_111*tmp_qloop_133 + tmp_qloop_126);
                const real_t q_tmp_9_9 = tmp_qloop_51*(tmp_qloop_126 + tmp_qloop_40*(tmp_qloop_97*tmp_qloop_97) + tmp_qloop_50*((tmp_qloop_100 + tmp_qloop_127 + tmp_qloop_99)*(tmp_qloop_100 + tmp_qloop_127 + tmp_qloop_99)));
                const real_t q_tmp_9_10 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_134 + tmp_qloop_106*tmp_qloop_135 + tmp_qloop_126);
                const real_t q_tmp_9_11 = tmp_qloop_51*(tmp_qloop_107*tmp_qloop_134 + tmp_qloop_111*tmp_qloop_135 + tmp_qloop_126);
                const real_t q_tmp_10_10 = tmp_qloop_51*((tmp_qloop_102*tmp_qloop_102)*tmp_qloop_40 + tmp_qloop_126 + tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_105 + tmp_qloop_127)*(tmp_qloop_104 + tmp_qloop_105 + tmp_qloop_127)));
                const real_t q_tmp_10_11 = tmp_qloop_51*(tmp_qloop_102*tmp_qloop_107*tmp_qloop_40 + tmp_qloop_106*tmp_qloop_111*tmp_qloop_58 + tmp_qloop_126);
                const real_t q_tmp_11_11 = tmp_qloop_51*((tmp_qloop_107*tmp_qloop_107)*tmp_qloop_40 + tmp_qloop_126 + tmp_qloop_50*((tmp_qloop_109 + tmp_qloop_110 + tmp_qloop_127)*(tmp_qloop_109 + tmp_qloop_110 + tmp_qloop_127)));
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
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
                q_acc_3_10 = q_acc_3_10 + q_tmp_3_10;
                q_acc_3_11 = q_acc_3_11 + q_tmp_3_11;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_4_6 = q_acc_4_6 + q_tmp_4_6;
                q_acc_4_7 = q_acc_4_7 + q_tmp_4_7;
                q_acc_4_8 = q_acc_4_8 + q_tmp_4_8;
                q_acc_4_9 = q_acc_4_9 + q_tmp_4_9;
                q_acc_4_10 = q_acc_4_10 + q_tmp_4_10;
                q_acc_4_11 = q_acc_4_11 + q_tmp_4_11;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_5_6 = q_acc_5_6 + q_tmp_5_6;
                q_acc_5_7 = q_acc_5_7 + q_tmp_5_7;
                q_acc_5_8 = q_acc_5_8 + q_tmp_5_8;
                q_acc_5_9 = q_acc_5_9 + q_tmp_5_9;
                q_acc_5_10 = q_acc_5_10 + q_tmp_5_10;
                q_acc_5_11 = q_acc_5_11 + q_tmp_5_11;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_6_7 = q_acc_6_7 + q_tmp_6_7;
                q_acc_6_8 = q_acc_6_8 + q_tmp_6_8;
                q_acc_6_9 = q_acc_6_9 + q_tmp_6_9;
                q_acc_6_10 = q_acc_6_10 + q_tmp_6_10;
                q_acc_6_11 = q_acc_6_11 + q_tmp_6_11;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_7_8 = q_acc_7_8 + q_tmp_7_8;
                q_acc_7_9 = q_acc_7_9 + q_tmp_7_9;
                q_acc_7_10 = q_acc_7_10 + q_tmp_7_10;
                q_acc_7_11 = q_acc_7_11 + q_tmp_7_11;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_8_9 = q_acc_8_9 + q_tmp_8_9;
                q_acc_8_10 = q_acc_8_10 + q_tmp_8_10;
                q_acc_8_11 = q_acc_8_11 + q_tmp_8_11;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_9_10 = q_acc_9_10 + q_tmp_9_10;
                q_acc_9_11 = q_acc_9_11 + q_tmp_9_11;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_10_11 = q_acc_10_11 + q_tmp_10_11;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_10*src_dof_10 + q_acc_0_11*src_dof_11 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5 + q_acc_0_6*src_dof_6 + q_acc_0_7*src_dof_7 + q_acc_0_8*src_dof_8 + q_acc_0_9*src_dof_9;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_10*src_dof_10 + q_acc_1_11*src_dof_11 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5 + q_acc_1_6*src_dof_6 + q_acc_1_7*src_dof_7 + q_acc_1_8*src_dof_8 + q_acc_1_9*src_dof_9;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_10*src_dof_10 + q_acc_2_11*src_dof_11 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5 + q_acc_2_6*src_dof_6 + q_acc_2_7*src_dof_7 + q_acc_2_8*src_dof_8 + q_acc_2_9*src_dof_9;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_10*src_dof_10 + q_acc_3_11*src_dof_11 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5 + q_acc_3_6*src_dof_6 + q_acc_3_7*src_dof_7 + q_acc_3_8*src_dof_8 + q_acc_3_9*src_dof_9;
             const real_t elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_10*src_dof_10 + q_acc_4_11*src_dof_11 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5 + q_acc_4_6*src_dof_6 + q_acc_4_7*src_dof_7 + q_acc_4_8*src_dof_8 + q_acc_4_9*src_dof_9;
             const real_t elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_10*src_dof_10 + q_acc_5_11*src_dof_11 + q_acc_5_5*src_dof_5 + q_acc_5_6*src_dof_6 + q_acc_5_7*src_dof_7 + q_acc_5_8*src_dof_8 + q_acc_5_9*src_dof_9;
             const real_t elMatVec_6 = q_acc_0_6*src_dof_0 + q_acc_1_6*src_dof_1 + q_acc_2_6*src_dof_2 + q_acc_3_6*src_dof_3 + q_acc_4_6*src_dof_4 + q_acc_5_6*src_dof_5 + q_acc_6_10*src_dof_10 + q_acc_6_11*src_dof_11 + q_acc_6_6*src_dof_6 + q_acc_6_7*src_dof_7 + q_acc_6_8*src_dof_8 + q_acc_6_9*src_dof_9;
             const real_t elMatVec_7 = q_acc_0_7*src_dof_0 + q_acc_1_7*src_dof_1 + q_acc_2_7*src_dof_2 + q_acc_3_7*src_dof_3 + q_acc_4_7*src_dof_4 + q_acc_5_7*src_dof_5 + q_acc_6_7*src_dof_6 + q_acc_7_10*src_dof_10 + q_acc_7_11*src_dof_11 + q_acc_7_7*src_dof_7 + q_acc_7_8*src_dof_8 + q_acc_7_9*src_dof_9;
             const real_t elMatVec_8 = q_acc_0_8*src_dof_0 + q_acc_1_8*src_dof_1 + q_acc_2_8*src_dof_2 + q_acc_3_8*src_dof_3 + q_acc_4_8*src_dof_4 + q_acc_5_8*src_dof_5 + q_acc_6_8*src_dof_6 + q_acc_7_8*src_dof_7 + q_acc_8_10*src_dof_10 + q_acc_8_11*src_dof_11 + q_acc_8_8*src_dof_8 + q_acc_8_9*src_dof_9;
             const real_t elMatVec_9 = q_acc_0_9*src_dof_0 + q_acc_1_9*src_dof_1 + q_acc_2_9*src_dof_2 + q_acc_3_9*src_dof_3 + q_acc_4_9*src_dof_4 + q_acc_5_9*src_dof_5 + q_acc_6_9*src_dof_6 + q_acc_7_9*src_dof_7 + q_acc_8_9*src_dof_8 + q_acc_9_10*src_dof_10 + q_acc_9_11*src_dof_11 + q_acc_9_9*src_dof_9;
             const real_t elMatVec_10 = q_acc_0_10*src_dof_0 + q_acc_10_10*src_dof_10 + q_acc_10_11*src_dof_11 + q_acc_1_10*src_dof_1 + q_acc_2_10*src_dof_2 + q_acc_3_10*src_dof_3 + q_acc_4_10*src_dof_4 + q_acc_5_10*src_dof_5 + q_acc_6_10*src_dof_6 + q_acc_7_10*src_dof_7 + q_acc_8_10*src_dof_8 + q_acc_9_10*src_dof_9;
             const real_t elMatVec_11 = q_acc_0_11*src_dof_0 + q_acc_10_11*src_dof_10 + q_acc_11_11*src_dof_11 + q_acc_1_11*src_dof_1 + q_acc_2_11*src_dof_2 + q_acc_3_11*src_dof_3 + q_acc_4_11*src_dof_4 + q_acc_5_11*src_dof_5 + q_acc_6_11*src_dof_6 + q_acc_7_11*src_dof_7 + q_acc_8_11*src_dof_8 + q_acc_9_11*src_dof_9;
             _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dst_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dst_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3 + _data_dst_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5 + _data_dst_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_6 + _data_dst_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_7 + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_8 + _data_dst_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_9 + _data_dst_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_10 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_11 + _data_dst_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
