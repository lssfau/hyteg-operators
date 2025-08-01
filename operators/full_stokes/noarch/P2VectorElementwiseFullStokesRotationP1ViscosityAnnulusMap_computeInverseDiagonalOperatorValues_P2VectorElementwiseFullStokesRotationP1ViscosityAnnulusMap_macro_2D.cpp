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



































#include "../P2VectorElementwiseFullStokesRotationP1ViscosityAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorElementwiseFullStokesRotationP1ViscosityAnnulusMap::computeInverseDiagonalOperatorValues_P2VectorElementwiseFullStokesRotationP1ViscosityAnnulusMap_macro_2D( real_t * RESTRICT  _data_invDiag__edge_0, real_t * RESTRICT  _data_invDiag__edge_1, real_t * RESTRICT  _data_invDiag__vertex_0, real_t * RESTRICT  _data_invDiag__vertex_1, real_t * RESTRICT  _data_mu, real_t * RESTRICT  _data_nx_rotationEdge, real_t * RESTRICT  _data_nx_rotationVertex, real_t * RESTRICT  _data_ny_rotationEdge, real_t * RESTRICT  _data_ny_rotationVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
          const real_t _data_phi_0_0_GRAY [] = {0.33333333333333343, 0.33333333333333331, 0.33333333333333331, 0.20000000000000007, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, 0.60000000000000009, 0.20000000000000001, 0.20000000000000001};
      
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
             const real_t mu_dof_0 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t mu_dof_1 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t mu_dof_2 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t nx_rotation_dof_0 = _data_nx_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t nx_rotation_dof_1 = _data_nx_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t nx_rotation_dof_2 = _data_nx_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t nx_rotation_dof_3 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t nx_rotation_dof_4 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t nx_rotation_dof_5 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ny_rotation_dof_0 = _data_ny_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ny_rotation_dof_1 = _data_ny_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ny_rotation_dof_2 = _data_ny_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ny_rotation_dof_3 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ny_rotation_dof_4 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ny_rotation_dof_5 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_11_11 = 0.0;
             const bool tmp_qloop_37 = pow((nx_rotation_dof_0*nx_rotation_dof_0) + (ny_rotation_dof_0*ny_rotation_dof_0), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_38 = ((tmp_qloop_37) ? (nx_rotation_dof_0): (0.0));
             const real_t tmp_qloop_79 = ((tmp_qloop_37) ? (-ny_rotation_dof_0): (1.0));
             const bool tmp_qloop_90 = pow((nx_rotation_dof_1*nx_rotation_dof_1) + (ny_rotation_dof_1*ny_rotation_dof_1), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_91 = ((tmp_qloop_90) ? (nx_rotation_dof_1): (0.0));
             const real_t tmp_qloop_112 = ((tmp_qloop_90) ? (-ny_rotation_dof_1): (1.0));
             const bool tmp_qloop_119 = pow((nx_rotation_dof_2*nx_rotation_dof_2) + (ny_rotation_dof_2*ny_rotation_dof_2), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_120 = ((tmp_qloop_119) ? (nx_rotation_dof_2): (0.0));
             const real_t tmp_qloop_141 = ((tmp_qloop_119) ? (-ny_rotation_dof_2): (1.0));
             const bool tmp_qloop_148 = pow((nx_rotation_dof_3*nx_rotation_dof_3) + (ny_rotation_dof_3*ny_rotation_dof_3), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_149 = ((tmp_qloop_148) ? (nx_rotation_dof_3): (0.0));
             const real_t tmp_qloop_170 = ((tmp_qloop_148) ? (-ny_rotation_dof_3): (1.0));
             const bool tmp_qloop_177 = pow((nx_rotation_dof_4*nx_rotation_dof_4) + (ny_rotation_dof_4*ny_rotation_dof_4), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_178 = ((tmp_qloop_177) ? (nx_rotation_dof_4): (0.0));
             const real_t tmp_qloop_199 = ((tmp_qloop_177) ? (-ny_rotation_dof_4): (1.0));
             const bool tmp_qloop_206 = pow((nx_rotation_dof_5*nx_rotation_dof_5) + (ny_rotation_dof_5*ny_rotation_dof_5), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_207 = ((tmp_qloop_206) ? (nx_rotation_dof_5): (0.0));
             const real_t tmp_qloop_228 = ((tmp_qloop_206) ? (-ny_rotation_dof_5): (1.0));
             const real_t tmp_qloop_235 = ((tmp_qloop_37) ? (ny_rotation_dof_0): (1.0));
             const real_t tmp_qloop_237 = ((tmp_qloop_90) ? (ny_rotation_dof_1): (1.0));
             const real_t tmp_qloop_239 = ((tmp_qloop_119) ? (ny_rotation_dof_2): (1.0));
             const real_t tmp_qloop_241 = ((tmp_qloop_148) ? (ny_rotation_dof_3): (1.0));
             const real_t tmp_qloop_243 = ((tmp_qloop_177) ? (ny_rotation_dof_4): (1.0));
             const real_t tmp_qloop_245 = ((tmp_qloop_206) ? (ny_rotation_dof_5): (1.0));
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
                const real_t tmp_qloop_62 = mu_dof_0*_data_phi_0_0_GRAY[3*q] + mu_dof_1*_data_phi_0_0_GRAY[3*q + 1] + mu_dof_2*_data_phi_0_0_GRAY[3*q + 2];
                const real_t tmp_qloop_63 = tmp_qloop_38*tmp_qloop_62;
                const real_t tmp_qloop_80 = tmp_qloop_62*tmp_qloop_79;
                const real_t tmp_qloop_103 = tmp_qloop_62*tmp_qloop_91;
                const real_t tmp_qloop_113 = tmp_qloop_112*tmp_qloop_62;
                const real_t tmp_qloop_132 = tmp_qloop_120*tmp_qloop_62;
                const real_t tmp_qloop_142 = tmp_qloop_141*tmp_qloop_62;
                const real_t tmp_qloop_161 = tmp_qloop_149*tmp_qloop_62;
                const real_t tmp_qloop_171 = tmp_qloop_170*tmp_qloop_62;
                const real_t tmp_qloop_190 = tmp_qloop_178*tmp_qloop_62;
                const real_t tmp_qloop_200 = tmp_qloop_199*tmp_qloop_62;
                const real_t tmp_qloop_219 = tmp_qloop_207*tmp_qloop_62;
                const real_t tmp_qloop_229 = tmp_qloop_228*tmp_qloop_62;
                const real_t tmp_qloop_236 = tmp_qloop_235*tmp_qloop_62;
                const real_t tmp_qloop_238 = tmp_qloop_237*tmp_qloop_62;
                const real_t tmp_qloop_240 = tmp_qloop_239*tmp_qloop_62;
                const real_t tmp_qloop_242 = tmp_qloop_241*tmp_qloop_62;
                const real_t tmp_qloop_244 = tmp_qloop_243*tmp_qloop_62;
                const real_t tmp_qloop_246 = tmp_qloop_245*tmp_qloop_62;
                const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                const real_t abs_det_jac_blending = tmp_qloop_21;
                const real_t tmp_qloop_46 = abs_det_jac_blending*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1];
                const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                const real_t tmp_qloop_41 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7];
                const real_t tmp_qloop_53 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 1];
                const real_t tmp_qloop_64 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q];
                const real_t tmp_qloop_74 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q];
                const real_t tmp_qloop_98 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 2];
                const real_t tmp_qloop_104 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_127 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 3];
                const real_t tmp_qloop_133 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3];
                const real_t tmp_qloop_156 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 4];
                const real_t tmp_qloop_162 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4];
                const real_t tmp_qloop_185 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 5];
                const real_t tmp_qloop_191 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5];
                const real_t tmp_qloop_214 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 6];
                const real_t tmp_qloop_220 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6];
                const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                const real_t tmp_qloop_39 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 1];
                const real_t tmp_qloop_55 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7];
                const real_t tmp_qloop_66 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q];
                const real_t tmp_qloop_72 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q];
                const real_t tmp_qloop_92 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 2];
                const real_t tmp_qloop_108 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_121 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 3];
                const real_t tmp_qloop_137 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3];
                const real_t tmp_qloop_150 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 4];
                const real_t tmp_qloop_166 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4];
                const real_t tmp_qloop_179 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 5];
                const real_t tmp_qloop_195 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5];
                const real_t tmp_qloop_208 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 6];
                const real_t tmp_qloop_224 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6];
                const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                const real_t tmp_qloop_42 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 6];
                const real_t tmp_qloop_43 = tmp_qloop_41 + tmp_qloop_42;
                const real_t tmp_qloop_45 = tmp_qloop_41*0.66666666666666663 + tmp_qloop_42*0.66666666666666663;
                const real_t tmp_qloop_48 = tmp_qloop_41*1.0 + tmp_qloop_42*1.0;
                const real_t tmp_qloop_49 = tmp_qloop_41*2.0 + tmp_qloop_42*2.0;
                const real_t tmp_qloop_50 = tmp_qloop_48*tmp_qloop_49;
                const real_t tmp_qloop_54 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 1];
                const real_t tmp_qloop_65 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_70 = tmp_qloop_64*1.0 + tmp_qloop_65*1.0;
                const real_t tmp_qloop_75 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q];
                const real_t tmp_qloop_76 = tmp_qloop_74*0.5 + tmp_qloop_75*0.5;
                const real_t tmp_qloop_83 = tmp_qloop_64*2.0 + tmp_qloop_65*2.0;
                const real_t tmp_qloop_85 = tmp_qloop_74 + tmp_qloop_75;
                const real_t tmp_qloop_99 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 2];
                const real_t tmp_qloop_105 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 1];
                const real_t tmp_qloop_107 = tmp_qloop_104*1.0 + tmp_qloop_105*1.0;
                const real_t tmp_qloop_115 = tmp_qloop_104*2.0 + tmp_qloop_105*2.0;
                const real_t tmp_qloop_128 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 3];
                const real_t tmp_qloop_134 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 2];
                const real_t tmp_qloop_136 = tmp_qloop_133*1.0 + tmp_qloop_134*1.0;
                const real_t tmp_qloop_144 = tmp_qloop_133*2.0 + tmp_qloop_134*2.0;
                const real_t tmp_qloop_157 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 4];
                const real_t tmp_qloop_163 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 3];
                const real_t tmp_qloop_165 = tmp_qloop_162*1.0 + tmp_qloop_163*1.0;
                const real_t tmp_qloop_173 = tmp_qloop_162*2.0 + tmp_qloop_163*2.0;
                const real_t tmp_qloop_186 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 5];
                const real_t tmp_qloop_192 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 4];
                const real_t tmp_qloop_194 = tmp_qloop_191*1.0 + tmp_qloop_192*1.0;
                const real_t tmp_qloop_202 = tmp_qloop_191*2.0 + tmp_qloop_192*2.0;
                const real_t tmp_qloop_215 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 6];
                const real_t tmp_qloop_221 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 5];
                const real_t tmp_qloop_223 = tmp_qloop_220*1.0 + tmp_qloop_221*1.0;
                const real_t tmp_qloop_231 = tmp_qloop_220*2.0 + tmp_qloop_221*2.0;
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                const real_t tmp_qloop_40 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 1];
                const real_t tmp_qloop_44 = tmp_qloop_39 + tmp_qloop_40 + tmp_qloop_43;
                const real_t tmp_qloop_47 = tmp_qloop_46*(tmp_qloop_39*0.66666666666666663 + tmp_qloop_40*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_51 = tmp_qloop_39*1.0 + tmp_qloop_40*1.0;
                const real_t tmp_qloop_52 = tmp_qloop_39*2.0 + tmp_qloop_40*2.0;
                const real_t tmp_qloop_56 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 6];
                const real_t tmp_qloop_57 = tmp_qloop_55*0.5 + tmp_qloop_56*0.5;
                const real_t tmp_qloop_58 = tmp_qloop_53*0.5 + tmp_qloop_54*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_59 = tmp_qloop_55 + tmp_qloop_56;
                const real_t tmp_qloop_60 = tmp_qloop_53*2.0 + tmp_qloop_54*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_61 = -tmp_qloop_44*tmp_qloop_47 + tmp_qloop_46*(tmp_qloop_50 + tmp_qloop_51*tmp_qloop_52 + tmp_qloop_58*tmp_qloop_60);
                const real_t tmp_qloop_67 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q];
                const real_t tmp_qloop_68 = tmp_qloop_66 + tmp_qloop_67;
                const real_t tmp_qloop_69 = tmp_qloop_64 + tmp_qloop_65 + tmp_qloop_68;
                const real_t tmp_qloop_71 = tmp_qloop_66*1.0 + tmp_qloop_67*1.0;
                const real_t tmp_qloop_73 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_77 = tmp_qloop_72*0.5 + tmp_qloop_73*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_46*(tmp_qloop_49*tmp_qloop_70 + tmp_qloop_52*tmp_qloop_71 + tmp_qloop_60*tmp_qloop_77) - tmp_qloop_47*tmp_qloop_69;
                const real_t tmp_qloop_81 = tmp_qloop_66*0.66666666666666663 + tmp_qloop_67*0.66666666666666663;
                const real_t tmp_qloop_82 = tmp_qloop_46*(tmp_qloop_64*0.66666666666666663 + tmp_qloop_65*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_84 = tmp_qloop_66*2.0 + tmp_qloop_67*2.0;
                const real_t tmp_qloop_86 = tmp_qloop_72*2.0 + tmp_qloop_73*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_87 = -tmp_qloop_44*tmp_qloop_82 + tmp_qloop_46*(tmp_qloop_48*tmp_qloop_83 + tmp_qloop_51*tmp_qloop_84 + tmp_qloop_58*tmp_qloop_86);
                const real_t tmp_qloop_88 = tmp_qloop_71*tmp_qloop_84;
                const real_t tmp_qloop_89 = tmp_qloop_46*(tmp_qloop_70*tmp_qloop_83 + tmp_qloop_77*tmp_qloop_86 + tmp_qloop_88) - tmp_qloop_69*tmp_qloop_82;
                const real_t tmp_qloop_93 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 2];
                const real_t tmp_qloop_94 = tmp_qloop_43 + tmp_qloop_92 + tmp_qloop_93;
                const real_t tmp_qloop_95 = tmp_qloop_46*(tmp_qloop_45 + tmp_qloop_92*0.66666666666666663 + tmp_qloop_93*0.66666666666666663);
                const real_t tmp_qloop_96 = tmp_qloop_92*1.0 + tmp_qloop_93*1.0;
                const real_t tmp_qloop_97 = tmp_qloop_92*2.0 + tmp_qloop_93*2.0;
                const real_t tmp_qloop_100 = tmp_qloop_57 + tmp_qloop_98*0.5 + tmp_qloop_99*0.5;
                const real_t tmp_qloop_101 = tmp_qloop_59*2.0 + tmp_qloop_98*2.0 + tmp_qloop_99*2.0;
                const real_t tmp_qloop_102 = tmp_qloop_46*(tmp_qloop_100*tmp_qloop_101 + tmp_qloop_50 + tmp_qloop_96*tmp_qloop_97) - tmp_qloop_94*tmp_qloop_95;
                const real_t tmp_qloop_106 = tmp_qloop_104 + tmp_qloop_105 + tmp_qloop_68;
                const real_t tmp_qloop_109 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 1];
                const real_t tmp_qloop_110 = tmp_qloop_108*0.5 + tmp_qloop_109*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_111 = -tmp_qloop_106*tmp_qloop_95 + tmp_qloop_46*(tmp_qloop_101*tmp_qloop_110 + tmp_qloop_107*tmp_qloop_49 + tmp_qloop_71*tmp_qloop_97);
                const real_t tmp_qloop_114 = tmp_qloop_46*(tmp_qloop_104*0.66666666666666663 + tmp_qloop_105*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_116 = tmp_qloop_108*2.0 + tmp_qloop_109*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_117 = -tmp_qloop_114*tmp_qloop_94 + tmp_qloop_46*(tmp_qloop_100*tmp_qloop_116 + tmp_qloop_115*tmp_qloop_48 + tmp_qloop_84*tmp_qloop_96);
                const real_t tmp_qloop_118 = -tmp_qloop_106*tmp_qloop_114 + tmp_qloop_46*(tmp_qloop_107*tmp_qloop_115 + tmp_qloop_110*tmp_qloop_116 + tmp_qloop_88);
                const real_t tmp_qloop_122 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 3];
                const real_t tmp_qloop_123 = tmp_qloop_121 + tmp_qloop_122 + tmp_qloop_43;
                const real_t tmp_qloop_124 = tmp_qloop_46*(tmp_qloop_121*0.66666666666666663 + tmp_qloop_122*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_125 = tmp_qloop_121*1.0 + tmp_qloop_122*1.0;
                const real_t tmp_qloop_126 = tmp_qloop_121*2.0 + tmp_qloop_122*2.0;
                const real_t tmp_qloop_129 = tmp_qloop_127*0.5 + tmp_qloop_128*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_130 = tmp_qloop_127*2.0 + tmp_qloop_128*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_131 = -tmp_qloop_123*tmp_qloop_124 + tmp_qloop_46*(tmp_qloop_125*tmp_qloop_126 + tmp_qloop_129*tmp_qloop_130 + tmp_qloop_50);
                const real_t tmp_qloop_135 = tmp_qloop_133 + tmp_qloop_134 + tmp_qloop_68;
                const real_t tmp_qloop_138 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 2];
                const real_t tmp_qloop_139 = tmp_qloop_137*0.5 + tmp_qloop_138*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_140 = -tmp_qloop_124*tmp_qloop_135 + tmp_qloop_46*(tmp_qloop_126*tmp_qloop_71 + tmp_qloop_130*tmp_qloop_139 + tmp_qloop_136*tmp_qloop_49);
                const real_t tmp_qloop_143 = tmp_qloop_46*(tmp_qloop_133*0.66666666666666663 + tmp_qloop_134*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_145 = tmp_qloop_137*2.0 + tmp_qloop_138*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_146 = -tmp_qloop_123*tmp_qloop_143 + tmp_qloop_46*(tmp_qloop_125*tmp_qloop_84 + tmp_qloop_129*tmp_qloop_145 + tmp_qloop_144*tmp_qloop_48);
                const real_t tmp_qloop_147 = -tmp_qloop_135*tmp_qloop_143 + tmp_qloop_46*(tmp_qloop_136*tmp_qloop_144 + tmp_qloop_139*tmp_qloop_145 + tmp_qloop_88);
                const real_t tmp_qloop_151 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 4];
                const real_t tmp_qloop_152 = tmp_qloop_150 + tmp_qloop_151 + tmp_qloop_43;
                const real_t tmp_qloop_153 = tmp_qloop_46*(tmp_qloop_150*0.66666666666666663 + tmp_qloop_151*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_154 = tmp_qloop_150*1.0 + tmp_qloop_151*1.0;
                const real_t tmp_qloop_155 = tmp_qloop_150*2.0 + tmp_qloop_151*2.0;
                const real_t tmp_qloop_158 = tmp_qloop_156*0.5 + tmp_qloop_157*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_159 = tmp_qloop_156*2.0 + tmp_qloop_157*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_160 = -tmp_qloop_152*tmp_qloop_153 + tmp_qloop_46*(tmp_qloop_154*tmp_qloop_155 + tmp_qloop_158*tmp_qloop_159 + tmp_qloop_50);
                const real_t tmp_qloop_164 = tmp_qloop_162 + tmp_qloop_163 + tmp_qloop_68;
                const real_t tmp_qloop_167 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 3];
                const real_t tmp_qloop_168 = tmp_qloop_166*0.5 + tmp_qloop_167*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_169 = -tmp_qloop_153*tmp_qloop_164 + tmp_qloop_46*(tmp_qloop_155*tmp_qloop_71 + tmp_qloop_159*tmp_qloop_168 + tmp_qloop_165*tmp_qloop_49);
                const real_t tmp_qloop_172 = tmp_qloop_46*(tmp_qloop_162*0.66666666666666663 + tmp_qloop_163*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_174 = tmp_qloop_166*2.0 + tmp_qloop_167*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_175 = -tmp_qloop_152*tmp_qloop_172 + tmp_qloop_46*(tmp_qloop_154*tmp_qloop_84 + tmp_qloop_158*tmp_qloop_174 + tmp_qloop_173*tmp_qloop_48);
                const real_t tmp_qloop_176 = -tmp_qloop_164*tmp_qloop_172 + tmp_qloop_46*(tmp_qloop_165*tmp_qloop_173 + tmp_qloop_168*tmp_qloop_174 + tmp_qloop_88);
                const real_t tmp_qloop_180 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 5];
                const real_t tmp_qloop_181 = tmp_qloop_179 + tmp_qloop_180 + tmp_qloop_43;
                const real_t tmp_qloop_182 = tmp_qloop_46*(tmp_qloop_179*0.66666666666666663 + tmp_qloop_180*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_183 = tmp_qloop_179*1.0 + tmp_qloop_180*1.0;
                const real_t tmp_qloop_184 = tmp_qloop_179*2.0 + tmp_qloop_180*2.0;
                const real_t tmp_qloop_187 = tmp_qloop_185*0.5 + tmp_qloop_186*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_188 = tmp_qloop_185*2.0 + tmp_qloop_186*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_189 = -tmp_qloop_181*tmp_qloop_182 + tmp_qloop_46*(tmp_qloop_183*tmp_qloop_184 + tmp_qloop_187*tmp_qloop_188 + tmp_qloop_50);
                const real_t tmp_qloop_193 = tmp_qloop_191 + tmp_qloop_192 + tmp_qloop_68;
                const real_t tmp_qloop_196 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 4];
                const real_t tmp_qloop_197 = tmp_qloop_195*0.5 + tmp_qloop_196*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_198 = -tmp_qloop_182*tmp_qloop_193 + tmp_qloop_46*(tmp_qloop_184*tmp_qloop_71 + tmp_qloop_188*tmp_qloop_197 + tmp_qloop_194*tmp_qloop_49);
                const real_t tmp_qloop_201 = tmp_qloop_46*(tmp_qloop_191*0.66666666666666663 + tmp_qloop_192*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_203 = tmp_qloop_195*2.0 + tmp_qloop_196*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_204 = -tmp_qloop_181*tmp_qloop_201 + tmp_qloop_46*(tmp_qloop_183*tmp_qloop_84 + tmp_qloop_187*tmp_qloop_203 + tmp_qloop_202*tmp_qloop_48);
                const real_t tmp_qloop_205 = -tmp_qloop_193*tmp_qloop_201 + tmp_qloop_46*(tmp_qloop_194*tmp_qloop_202 + tmp_qloop_197*tmp_qloop_203 + tmp_qloop_88);
                const real_t tmp_qloop_209 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 6];
                const real_t tmp_qloop_210 = tmp_qloop_208 + tmp_qloop_209 + tmp_qloop_43;
                const real_t tmp_qloop_211 = tmp_qloop_46*(tmp_qloop_208*0.66666666666666663 + tmp_qloop_209*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_212 = tmp_qloop_208*1.0 + tmp_qloop_209*1.0;
                const real_t tmp_qloop_213 = tmp_qloop_208*2.0 + tmp_qloop_209*2.0;
                const real_t tmp_qloop_216 = tmp_qloop_214*0.5 + tmp_qloop_215*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_217 = tmp_qloop_214*2.0 + tmp_qloop_215*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_218 = -tmp_qloop_210*tmp_qloop_211 + tmp_qloop_46*(tmp_qloop_212*tmp_qloop_213 + tmp_qloop_216*tmp_qloop_217 + tmp_qloop_50);
                const real_t tmp_qloop_222 = tmp_qloop_220 + tmp_qloop_221 + tmp_qloop_68;
                const real_t tmp_qloop_225 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 5];
                const real_t tmp_qloop_226 = tmp_qloop_224*0.5 + tmp_qloop_225*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_227 = -tmp_qloop_211*tmp_qloop_222 + tmp_qloop_46*(tmp_qloop_213*tmp_qloop_71 + tmp_qloop_217*tmp_qloop_226 + tmp_qloop_223*tmp_qloop_49);
                const real_t tmp_qloop_230 = tmp_qloop_46*(tmp_qloop_220*0.66666666666666663 + tmp_qloop_221*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_232 = tmp_qloop_224*2.0 + tmp_qloop_225*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_233 = -tmp_qloop_210*tmp_qloop_230 + tmp_qloop_46*(tmp_qloop_212*tmp_qloop_84 + tmp_qloop_216*tmp_qloop_232 + tmp_qloop_231*tmp_qloop_48);
                const real_t tmp_qloop_234 = -tmp_qloop_222*tmp_qloop_230 + tmp_qloop_46*(tmp_qloop_223*tmp_qloop_231 + tmp_qloop_226*tmp_qloop_232 + tmp_qloop_88);
                const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                const real_t q_tmp_0_0 = (tmp_qloop_38*(tmp_qloop_61*tmp_qloop_63 + tmp_qloop_78*tmp_qloop_80) + tmp_qloop_79*(tmp_qloop_63*tmp_qloop_87 + tmp_qloop_80*tmp_qloop_89))*_data_q_w[q];
                const real_t q_tmp_1_1 = (tmp_qloop_112*(tmp_qloop_103*tmp_qloop_117 + tmp_qloop_113*tmp_qloop_118) + tmp_qloop_91*(tmp_qloop_102*tmp_qloop_103 + tmp_qloop_111*tmp_qloop_113))*_data_q_w[q];
                const real_t q_tmp_2_2 = (tmp_qloop_120*(tmp_qloop_131*tmp_qloop_132 + tmp_qloop_140*tmp_qloop_142) + tmp_qloop_141*(tmp_qloop_132*tmp_qloop_146 + tmp_qloop_142*tmp_qloop_147))*_data_q_w[q];
                const real_t q_tmp_3_3 = (tmp_qloop_149*(tmp_qloop_160*tmp_qloop_161 + tmp_qloop_169*tmp_qloop_171) + tmp_qloop_170*(tmp_qloop_161*tmp_qloop_175 + tmp_qloop_171*tmp_qloop_176))*_data_q_w[q];
                const real_t q_tmp_4_4 = (tmp_qloop_178*(tmp_qloop_189*tmp_qloop_190 + tmp_qloop_198*tmp_qloop_200) + tmp_qloop_199*(tmp_qloop_190*tmp_qloop_204 + tmp_qloop_200*tmp_qloop_205))*_data_q_w[q];
                const real_t q_tmp_5_5 = (tmp_qloop_207*(tmp_qloop_218*tmp_qloop_219 + tmp_qloop_227*tmp_qloop_229) + tmp_qloop_228*(tmp_qloop_219*tmp_qloop_233 + tmp_qloop_229*tmp_qloop_234))*_data_q_w[q];
                const real_t q_tmp_6_6 = (tmp_qloop_235*(tmp_qloop_236*tmp_qloop_61 + tmp_qloop_63*tmp_qloop_78) + tmp_qloop_38*(tmp_qloop_236*tmp_qloop_87 + tmp_qloop_63*tmp_qloop_89))*_data_q_w[q];
                const real_t q_tmp_7_7 = (tmp_qloop_237*(tmp_qloop_102*tmp_qloop_238 + tmp_qloop_103*tmp_qloop_111) + tmp_qloop_91*(tmp_qloop_103*tmp_qloop_118 + tmp_qloop_117*tmp_qloop_238))*_data_q_w[q];
                const real_t q_tmp_8_8 = (tmp_qloop_120*(tmp_qloop_132*tmp_qloop_147 + tmp_qloop_146*tmp_qloop_240) + tmp_qloop_239*(tmp_qloop_131*tmp_qloop_240 + tmp_qloop_132*tmp_qloop_140))*_data_q_w[q];
                const real_t q_tmp_9_9 = (tmp_qloop_149*(tmp_qloop_161*tmp_qloop_176 + tmp_qloop_175*tmp_qloop_242) + tmp_qloop_241*(tmp_qloop_160*tmp_qloop_242 + tmp_qloop_161*tmp_qloop_169))*_data_q_w[q];
                const real_t q_tmp_10_10 = (tmp_qloop_178*(tmp_qloop_190*tmp_qloop_205 + tmp_qloop_204*tmp_qloop_244) + tmp_qloop_243*(tmp_qloop_189*tmp_qloop_244 + tmp_qloop_190*tmp_qloop_198))*_data_q_w[q];
                const real_t q_tmp_11_11 = (tmp_qloop_207*(tmp_qloop_219*tmp_qloop_234 + tmp_qloop_233*tmp_qloop_246) + tmp_qloop_245*(tmp_qloop_218*tmp_qloop_246 + tmp_qloop_219*tmp_qloop_227))*_data_q_w[q];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             const real_t elMatDiag_10 = q_acc_10_10;
             const real_t elMatDiag_11 = q_acc_11_11;
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
          const real_t _data_phi_0_0_BLUE [] = {0.33333333333333343, 0.33333333333333331, 0.33333333333333331, 0.20000000000000007, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, 0.60000000000000009, 0.20000000000000001, 0.20000000000000001};
      
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
             const real_t mu_dof_0 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t mu_dof_1 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t mu_dof_2 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t nx_rotation_dof_0 = _data_nx_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t nx_rotation_dof_1 = _data_nx_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t nx_rotation_dof_2 = _data_nx_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t nx_rotation_dof_3 = _data_nx_rotationEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t nx_rotation_dof_4 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t nx_rotation_dof_5 = _data_nx_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ny_rotation_dof_0 = _data_ny_rotationVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ny_rotation_dof_1 = _data_ny_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ny_rotation_dof_2 = _data_ny_rotationVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t ny_rotation_dof_3 = _data_ny_rotationEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ny_rotation_dof_4 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t ny_rotation_dof_5 = _data_ny_rotationEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_11_11 = 0.0;
             const bool tmp_qloop_37 = pow((nx_rotation_dof_0*nx_rotation_dof_0) + (ny_rotation_dof_0*ny_rotation_dof_0), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_38 = ((tmp_qloop_37) ? (nx_rotation_dof_0): (0.0));
             const real_t tmp_qloop_79 = ((tmp_qloop_37) ? (-ny_rotation_dof_0): (1.0));
             const bool tmp_qloop_90 = pow((nx_rotation_dof_1*nx_rotation_dof_1) + (ny_rotation_dof_1*ny_rotation_dof_1), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_91 = ((tmp_qloop_90) ? (nx_rotation_dof_1): (0.0));
             const real_t tmp_qloop_112 = ((tmp_qloop_90) ? (-ny_rotation_dof_1): (1.0));
             const bool tmp_qloop_119 = pow((nx_rotation_dof_2*nx_rotation_dof_2) + (ny_rotation_dof_2*ny_rotation_dof_2), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_120 = ((tmp_qloop_119) ? (nx_rotation_dof_2): (0.0));
             const real_t tmp_qloop_141 = ((tmp_qloop_119) ? (-ny_rotation_dof_2): (1.0));
             const bool tmp_qloop_148 = pow((nx_rotation_dof_3*nx_rotation_dof_3) + (ny_rotation_dof_3*ny_rotation_dof_3), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_149 = ((tmp_qloop_148) ? (nx_rotation_dof_3): (0.0));
             const real_t tmp_qloop_170 = ((tmp_qloop_148) ? (-ny_rotation_dof_3): (1.0));
             const bool tmp_qloop_177 = pow((nx_rotation_dof_4*nx_rotation_dof_4) + (ny_rotation_dof_4*ny_rotation_dof_4), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_178 = ((tmp_qloop_177) ? (nx_rotation_dof_4): (0.0));
             const real_t tmp_qloop_199 = ((tmp_qloop_177) ? (-ny_rotation_dof_4): (1.0));
             const bool tmp_qloop_206 = pow((nx_rotation_dof_5*nx_rotation_dof_5) + (ny_rotation_dof_5*ny_rotation_dof_5), 0.50000000000000000) > 0.5;
             const real_t tmp_qloop_207 = ((tmp_qloop_206) ? (nx_rotation_dof_5): (0.0));
             const real_t tmp_qloop_228 = ((tmp_qloop_206) ? (-ny_rotation_dof_5): (1.0));
             const real_t tmp_qloop_235 = ((tmp_qloop_37) ? (ny_rotation_dof_0): (1.0));
             const real_t tmp_qloop_237 = ((tmp_qloop_90) ? (ny_rotation_dof_1): (1.0));
             const real_t tmp_qloop_239 = ((tmp_qloop_119) ? (ny_rotation_dof_2): (1.0));
             const real_t tmp_qloop_241 = ((tmp_qloop_148) ? (ny_rotation_dof_3): (1.0));
             const real_t tmp_qloop_243 = ((tmp_qloop_177) ? (ny_rotation_dof_4): (1.0));
             const real_t tmp_qloop_245 = ((tmp_qloop_206) ? (ny_rotation_dof_5): (1.0));
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
                const real_t tmp_qloop_62 = mu_dof_0*_data_phi_0_0_BLUE[3*q] + mu_dof_1*_data_phi_0_0_BLUE[3*q + 1] + mu_dof_2*_data_phi_0_0_BLUE[3*q + 2];
                const real_t tmp_qloop_63 = tmp_qloop_38*tmp_qloop_62;
                const real_t tmp_qloop_80 = tmp_qloop_62*tmp_qloop_79;
                const real_t tmp_qloop_103 = tmp_qloop_62*tmp_qloop_91;
                const real_t tmp_qloop_113 = tmp_qloop_112*tmp_qloop_62;
                const real_t tmp_qloop_132 = tmp_qloop_120*tmp_qloop_62;
                const real_t tmp_qloop_142 = tmp_qloop_141*tmp_qloop_62;
                const real_t tmp_qloop_161 = tmp_qloop_149*tmp_qloop_62;
                const real_t tmp_qloop_171 = tmp_qloop_170*tmp_qloop_62;
                const real_t tmp_qloop_190 = tmp_qloop_178*tmp_qloop_62;
                const real_t tmp_qloop_200 = tmp_qloop_199*tmp_qloop_62;
                const real_t tmp_qloop_219 = tmp_qloop_207*tmp_qloop_62;
                const real_t tmp_qloop_229 = tmp_qloop_228*tmp_qloop_62;
                const real_t tmp_qloop_236 = tmp_qloop_235*tmp_qloop_62;
                const real_t tmp_qloop_238 = tmp_qloop_237*tmp_qloop_62;
                const real_t tmp_qloop_240 = tmp_qloop_239*tmp_qloop_62;
                const real_t tmp_qloop_242 = tmp_qloop_241*tmp_qloop_62;
                const real_t tmp_qloop_244 = tmp_qloop_243*tmp_qloop_62;
                const real_t tmp_qloop_246 = tmp_qloop_245*tmp_qloop_62;
                const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                const real_t abs_det_jac_blending = tmp_qloop_21;
                const real_t tmp_qloop_46 = abs_det_jac_blending*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1];
                const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                const real_t tmp_qloop_41 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 7];
                const real_t tmp_qloop_53 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 1];
                const real_t tmp_qloop_64 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q];
                const real_t tmp_qloop_74 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q];
                const real_t tmp_qloop_98 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 2];
                const real_t tmp_qloop_104 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_127 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 3];
                const real_t tmp_qloop_133 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 3];
                const real_t tmp_qloop_156 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 4];
                const real_t tmp_qloop_162 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 4];
                const real_t tmp_qloop_185 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 5];
                const real_t tmp_qloop_191 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 5];
                const real_t tmp_qloop_214 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 6];
                const real_t tmp_qloop_220 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 6];
                const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                const real_t tmp_qloop_39 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 1];
                const real_t tmp_qloop_55 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 7];
                const real_t tmp_qloop_66 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q];
                const real_t tmp_qloop_72 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q];
                const real_t tmp_qloop_92 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 2];
                const real_t tmp_qloop_108 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_121 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 3];
                const real_t tmp_qloop_137 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 3];
                const real_t tmp_qloop_150 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 4];
                const real_t tmp_qloop_166 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 4];
                const real_t tmp_qloop_179 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 5];
                const real_t tmp_qloop_195 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 5];
                const real_t tmp_qloop_208 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 6];
                const real_t tmp_qloop_224 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 6];
                const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                const real_t tmp_qloop_42 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 6];
                const real_t tmp_qloop_43 = tmp_qloop_41 + tmp_qloop_42;
                const real_t tmp_qloop_45 = tmp_qloop_41*0.66666666666666663 + tmp_qloop_42*0.66666666666666663;
                const real_t tmp_qloop_48 = tmp_qloop_41*1.0 + tmp_qloop_42*1.0;
                const real_t tmp_qloop_49 = tmp_qloop_41*2.0 + tmp_qloop_42*2.0;
                const real_t tmp_qloop_50 = tmp_qloop_48*tmp_qloop_49;
                const real_t tmp_qloop_54 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 1];
                const real_t tmp_qloop_65 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_70 = tmp_qloop_64*1.0 + tmp_qloop_65*1.0;
                const real_t tmp_qloop_75 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q];
                const real_t tmp_qloop_76 = tmp_qloop_74*0.5 + tmp_qloop_75*0.5;
                const real_t tmp_qloop_83 = tmp_qloop_64*2.0 + tmp_qloop_65*2.0;
                const real_t tmp_qloop_85 = tmp_qloop_74 + tmp_qloop_75;
                const real_t tmp_qloop_99 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 2];
                const real_t tmp_qloop_105 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 1];
                const real_t tmp_qloop_107 = tmp_qloop_104*1.0 + tmp_qloop_105*1.0;
                const real_t tmp_qloop_115 = tmp_qloop_104*2.0 + tmp_qloop_105*2.0;
                const real_t tmp_qloop_128 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 3];
                const real_t tmp_qloop_134 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 2];
                const real_t tmp_qloop_136 = tmp_qloop_133*1.0 + tmp_qloop_134*1.0;
                const real_t tmp_qloop_144 = tmp_qloop_133*2.0 + tmp_qloop_134*2.0;
                const real_t tmp_qloop_157 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 4];
                const real_t tmp_qloop_163 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 3];
                const real_t tmp_qloop_165 = tmp_qloop_162*1.0 + tmp_qloop_163*1.0;
                const real_t tmp_qloop_173 = tmp_qloop_162*2.0 + tmp_qloop_163*2.0;
                const real_t tmp_qloop_186 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 5];
                const real_t tmp_qloop_192 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 4];
                const real_t tmp_qloop_194 = tmp_qloop_191*1.0 + tmp_qloop_192*1.0;
                const real_t tmp_qloop_202 = tmp_qloop_191*2.0 + tmp_qloop_192*2.0;
                const real_t tmp_qloop_215 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 6];
                const real_t tmp_qloop_221 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 5];
                const real_t tmp_qloop_223 = tmp_qloop_220*1.0 + tmp_qloop_221*1.0;
                const real_t tmp_qloop_231 = tmp_qloop_220*2.0 + tmp_qloop_221*2.0;
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                const real_t tmp_qloop_40 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 1];
                const real_t tmp_qloop_44 = tmp_qloop_39 + tmp_qloop_40 + tmp_qloop_43;
                const real_t tmp_qloop_47 = tmp_qloop_46*(tmp_qloop_39*0.66666666666666663 + tmp_qloop_40*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_51 = tmp_qloop_39*1.0 + tmp_qloop_40*1.0;
                const real_t tmp_qloop_52 = tmp_qloop_39*2.0 + tmp_qloop_40*2.0;
                const real_t tmp_qloop_56 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 6];
                const real_t tmp_qloop_57 = tmp_qloop_55*0.5 + tmp_qloop_56*0.5;
                const real_t tmp_qloop_58 = tmp_qloop_53*0.5 + tmp_qloop_54*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_59 = tmp_qloop_55 + tmp_qloop_56;
                const real_t tmp_qloop_60 = tmp_qloop_53*2.0 + tmp_qloop_54*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_61 = -tmp_qloop_44*tmp_qloop_47 + tmp_qloop_46*(tmp_qloop_50 + tmp_qloop_51*tmp_qloop_52 + tmp_qloop_58*tmp_qloop_60);
                const real_t tmp_qloop_67 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q];
                const real_t tmp_qloop_68 = tmp_qloop_66 + tmp_qloop_67;
                const real_t tmp_qloop_69 = tmp_qloop_64 + tmp_qloop_65 + tmp_qloop_68;
                const real_t tmp_qloop_71 = tmp_qloop_66*1.0 + tmp_qloop_67*1.0;
                const real_t tmp_qloop_73 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_77 = tmp_qloop_72*0.5 + tmp_qloop_73*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_46*(tmp_qloop_49*tmp_qloop_70 + tmp_qloop_52*tmp_qloop_71 + tmp_qloop_60*tmp_qloop_77) - tmp_qloop_47*tmp_qloop_69;
                const real_t tmp_qloop_81 = tmp_qloop_66*0.66666666666666663 + tmp_qloop_67*0.66666666666666663;
                const real_t tmp_qloop_82 = tmp_qloop_46*(tmp_qloop_64*0.66666666666666663 + tmp_qloop_65*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_84 = tmp_qloop_66*2.0 + tmp_qloop_67*2.0;
                const real_t tmp_qloop_86 = tmp_qloop_72*2.0 + tmp_qloop_73*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_87 = -tmp_qloop_44*tmp_qloop_82 + tmp_qloop_46*(tmp_qloop_48*tmp_qloop_83 + tmp_qloop_51*tmp_qloop_84 + tmp_qloop_58*tmp_qloop_86);
                const real_t tmp_qloop_88 = tmp_qloop_71*tmp_qloop_84;
                const real_t tmp_qloop_89 = tmp_qloop_46*(tmp_qloop_70*tmp_qloop_83 + tmp_qloop_77*tmp_qloop_86 + tmp_qloop_88) - tmp_qloop_69*tmp_qloop_82;
                const real_t tmp_qloop_93 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 2];
                const real_t tmp_qloop_94 = tmp_qloop_43 + tmp_qloop_92 + tmp_qloop_93;
                const real_t tmp_qloop_95 = tmp_qloop_46*(tmp_qloop_45 + tmp_qloop_92*0.66666666666666663 + tmp_qloop_93*0.66666666666666663);
                const real_t tmp_qloop_96 = tmp_qloop_92*1.0 + tmp_qloop_93*1.0;
                const real_t tmp_qloop_97 = tmp_qloop_92*2.0 + tmp_qloop_93*2.0;
                const real_t tmp_qloop_100 = tmp_qloop_57 + tmp_qloop_98*0.5 + tmp_qloop_99*0.5;
                const real_t tmp_qloop_101 = tmp_qloop_59*2.0 + tmp_qloop_98*2.0 + tmp_qloop_99*2.0;
                const real_t tmp_qloop_102 = tmp_qloop_46*(tmp_qloop_100*tmp_qloop_101 + tmp_qloop_50 + tmp_qloop_96*tmp_qloop_97) - tmp_qloop_94*tmp_qloop_95;
                const real_t tmp_qloop_106 = tmp_qloop_104 + tmp_qloop_105 + tmp_qloop_68;
                const real_t tmp_qloop_109 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 1];
                const real_t tmp_qloop_110 = tmp_qloop_108*0.5 + tmp_qloop_109*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_111 = -tmp_qloop_106*tmp_qloop_95 + tmp_qloop_46*(tmp_qloop_101*tmp_qloop_110 + tmp_qloop_107*tmp_qloop_49 + tmp_qloop_71*tmp_qloop_97);
                const real_t tmp_qloop_114 = tmp_qloop_46*(tmp_qloop_104*0.66666666666666663 + tmp_qloop_105*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_116 = tmp_qloop_108*2.0 + tmp_qloop_109*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_117 = -tmp_qloop_114*tmp_qloop_94 + tmp_qloop_46*(tmp_qloop_100*tmp_qloop_116 + tmp_qloop_115*tmp_qloop_48 + tmp_qloop_84*tmp_qloop_96);
                const real_t tmp_qloop_118 = -tmp_qloop_106*tmp_qloop_114 + tmp_qloop_46*(tmp_qloop_107*tmp_qloop_115 + tmp_qloop_110*tmp_qloop_116 + tmp_qloop_88);
                const real_t tmp_qloop_122 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 3];
                const real_t tmp_qloop_123 = tmp_qloop_121 + tmp_qloop_122 + tmp_qloop_43;
                const real_t tmp_qloop_124 = tmp_qloop_46*(tmp_qloop_121*0.66666666666666663 + tmp_qloop_122*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_125 = tmp_qloop_121*1.0 + tmp_qloop_122*1.0;
                const real_t tmp_qloop_126 = tmp_qloop_121*2.0 + tmp_qloop_122*2.0;
                const real_t tmp_qloop_129 = tmp_qloop_127*0.5 + tmp_qloop_128*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_130 = tmp_qloop_127*2.0 + tmp_qloop_128*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_131 = -tmp_qloop_123*tmp_qloop_124 + tmp_qloop_46*(tmp_qloop_125*tmp_qloop_126 + tmp_qloop_129*tmp_qloop_130 + tmp_qloop_50);
                const real_t tmp_qloop_135 = tmp_qloop_133 + tmp_qloop_134 + tmp_qloop_68;
                const real_t tmp_qloop_138 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 2];
                const real_t tmp_qloop_139 = tmp_qloop_137*0.5 + tmp_qloop_138*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_140 = -tmp_qloop_124*tmp_qloop_135 + tmp_qloop_46*(tmp_qloop_126*tmp_qloop_71 + tmp_qloop_130*tmp_qloop_139 + tmp_qloop_136*tmp_qloop_49);
                const real_t tmp_qloop_143 = tmp_qloop_46*(tmp_qloop_133*0.66666666666666663 + tmp_qloop_134*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_145 = tmp_qloop_137*2.0 + tmp_qloop_138*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_146 = -tmp_qloop_123*tmp_qloop_143 + tmp_qloop_46*(tmp_qloop_125*tmp_qloop_84 + tmp_qloop_129*tmp_qloop_145 + tmp_qloop_144*tmp_qloop_48);
                const real_t tmp_qloop_147 = -tmp_qloop_135*tmp_qloop_143 + tmp_qloop_46*(tmp_qloop_136*tmp_qloop_144 + tmp_qloop_139*tmp_qloop_145 + tmp_qloop_88);
                const real_t tmp_qloop_151 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 4];
                const real_t tmp_qloop_152 = tmp_qloop_150 + tmp_qloop_151 + tmp_qloop_43;
                const real_t tmp_qloop_153 = tmp_qloop_46*(tmp_qloop_150*0.66666666666666663 + tmp_qloop_151*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_154 = tmp_qloop_150*1.0 + tmp_qloop_151*1.0;
                const real_t tmp_qloop_155 = tmp_qloop_150*2.0 + tmp_qloop_151*2.0;
                const real_t tmp_qloop_158 = tmp_qloop_156*0.5 + tmp_qloop_157*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_159 = tmp_qloop_156*2.0 + tmp_qloop_157*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_160 = -tmp_qloop_152*tmp_qloop_153 + tmp_qloop_46*(tmp_qloop_154*tmp_qloop_155 + tmp_qloop_158*tmp_qloop_159 + tmp_qloop_50);
                const real_t tmp_qloop_164 = tmp_qloop_162 + tmp_qloop_163 + tmp_qloop_68;
                const real_t tmp_qloop_167 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 3];
                const real_t tmp_qloop_168 = tmp_qloop_166*0.5 + tmp_qloop_167*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_169 = -tmp_qloop_153*tmp_qloop_164 + tmp_qloop_46*(tmp_qloop_155*tmp_qloop_71 + tmp_qloop_159*tmp_qloop_168 + tmp_qloop_165*tmp_qloop_49);
                const real_t tmp_qloop_172 = tmp_qloop_46*(tmp_qloop_162*0.66666666666666663 + tmp_qloop_163*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_174 = tmp_qloop_166*2.0 + tmp_qloop_167*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_175 = -tmp_qloop_152*tmp_qloop_172 + tmp_qloop_46*(tmp_qloop_154*tmp_qloop_84 + tmp_qloop_158*tmp_qloop_174 + tmp_qloop_173*tmp_qloop_48);
                const real_t tmp_qloop_176 = -tmp_qloop_164*tmp_qloop_172 + tmp_qloop_46*(tmp_qloop_165*tmp_qloop_173 + tmp_qloop_168*tmp_qloop_174 + tmp_qloop_88);
                const real_t tmp_qloop_180 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 5];
                const real_t tmp_qloop_181 = tmp_qloop_179 + tmp_qloop_180 + tmp_qloop_43;
                const real_t tmp_qloop_182 = tmp_qloop_46*(tmp_qloop_179*0.66666666666666663 + tmp_qloop_180*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_183 = tmp_qloop_179*1.0 + tmp_qloop_180*1.0;
                const real_t tmp_qloop_184 = tmp_qloop_179*2.0 + tmp_qloop_180*2.0;
                const real_t tmp_qloop_187 = tmp_qloop_185*0.5 + tmp_qloop_186*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_188 = tmp_qloop_185*2.0 + tmp_qloop_186*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_189 = -tmp_qloop_181*tmp_qloop_182 + tmp_qloop_46*(tmp_qloop_183*tmp_qloop_184 + tmp_qloop_187*tmp_qloop_188 + tmp_qloop_50);
                const real_t tmp_qloop_193 = tmp_qloop_191 + tmp_qloop_192 + tmp_qloop_68;
                const real_t tmp_qloop_196 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 4];
                const real_t tmp_qloop_197 = tmp_qloop_195*0.5 + tmp_qloop_196*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_198 = -tmp_qloop_182*tmp_qloop_193 + tmp_qloop_46*(tmp_qloop_184*tmp_qloop_71 + tmp_qloop_188*tmp_qloop_197 + tmp_qloop_194*tmp_qloop_49);
                const real_t tmp_qloop_201 = tmp_qloop_46*(tmp_qloop_191*0.66666666666666663 + tmp_qloop_192*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_203 = tmp_qloop_195*2.0 + tmp_qloop_196*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_204 = -tmp_qloop_181*tmp_qloop_201 + tmp_qloop_46*(tmp_qloop_183*tmp_qloop_84 + tmp_qloop_187*tmp_qloop_203 + tmp_qloop_202*tmp_qloop_48);
                const real_t tmp_qloop_205 = -tmp_qloop_193*tmp_qloop_201 + tmp_qloop_46*(tmp_qloop_194*tmp_qloop_202 + tmp_qloop_197*tmp_qloop_203 + tmp_qloop_88);
                const real_t tmp_qloop_209 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 6];
                const real_t tmp_qloop_210 = tmp_qloop_208 + tmp_qloop_209 + tmp_qloop_43;
                const real_t tmp_qloop_211 = tmp_qloop_46*(tmp_qloop_208*0.66666666666666663 + tmp_qloop_209*0.66666666666666663 + tmp_qloop_45);
                const real_t tmp_qloop_212 = tmp_qloop_208*1.0 + tmp_qloop_209*1.0;
                const real_t tmp_qloop_213 = tmp_qloop_208*2.0 + tmp_qloop_209*2.0;
                const real_t tmp_qloop_216 = tmp_qloop_214*0.5 + tmp_qloop_215*0.5 + tmp_qloop_57;
                const real_t tmp_qloop_217 = tmp_qloop_214*2.0 + tmp_qloop_215*2.0 + tmp_qloop_59*2.0;
                const real_t tmp_qloop_218 = -tmp_qloop_210*tmp_qloop_211 + tmp_qloop_46*(tmp_qloop_212*tmp_qloop_213 + tmp_qloop_216*tmp_qloop_217 + tmp_qloop_50);
                const real_t tmp_qloop_222 = tmp_qloop_220 + tmp_qloop_221 + tmp_qloop_68;
                const real_t tmp_qloop_225 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 5];
                const real_t tmp_qloop_226 = tmp_qloop_224*0.5 + tmp_qloop_225*0.5 + tmp_qloop_76;
                const real_t tmp_qloop_227 = -tmp_qloop_211*tmp_qloop_222 + tmp_qloop_46*(tmp_qloop_213*tmp_qloop_71 + tmp_qloop_217*tmp_qloop_226 + tmp_qloop_223*tmp_qloop_49);
                const real_t tmp_qloop_230 = tmp_qloop_46*(tmp_qloop_220*0.66666666666666663 + tmp_qloop_221*0.66666666666666663 + tmp_qloop_81);
                const real_t tmp_qloop_232 = tmp_qloop_224*2.0 + tmp_qloop_225*2.0 + tmp_qloop_85*2.0;
                const real_t tmp_qloop_233 = -tmp_qloop_210*tmp_qloop_230 + tmp_qloop_46*(tmp_qloop_212*tmp_qloop_84 + tmp_qloop_216*tmp_qloop_232 + tmp_qloop_231*tmp_qloop_48);
                const real_t tmp_qloop_234 = -tmp_qloop_222*tmp_qloop_230 + tmp_qloop_46*(tmp_qloop_223*tmp_qloop_231 + tmp_qloop_226*tmp_qloop_232 + tmp_qloop_88);
                const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                const real_t q_tmp_0_0 = (tmp_qloop_38*(tmp_qloop_61*tmp_qloop_63 + tmp_qloop_78*tmp_qloop_80) + tmp_qloop_79*(tmp_qloop_63*tmp_qloop_87 + tmp_qloop_80*tmp_qloop_89))*_data_q_w[q];
                const real_t q_tmp_1_1 = (tmp_qloop_112*(tmp_qloop_103*tmp_qloop_117 + tmp_qloop_113*tmp_qloop_118) + tmp_qloop_91*(tmp_qloop_102*tmp_qloop_103 + tmp_qloop_111*tmp_qloop_113))*_data_q_w[q];
                const real_t q_tmp_2_2 = (tmp_qloop_120*(tmp_qloop_131*tmp_qloop_132 + tmp_qloop_140*tmp_qloop_142) + tmp_qloop_141*(tmp_qloop_132*tmp_qloop_146 + tmp_qloop_142*tmp_qloop_147))*_data_q_w[q];
                const real_t q_tmp_3_3 = (tmp_qloop_149*(tmp_qloop_160*tmp_qloop_161 + tmp_qloop_169*tmp_qloop_171) + tmp_qloop_170*(tmp_qloop_161*tmp_qloop_175 + tmp_qloop_171*tmp_qloop_176))*_data_q_w[q];
                const real_t q_tmp_4_4 = (tmp_qloop_178*(tmp_qloop_189*tmp_qloop_190 + tmp_qloop_198*tmp_qloop_200) + tmp_qloop_199*(tmp_qloop_190*tmp_qloop_204 + tmp_qloop_200*tmp_qloop_205))*_data_q_w[q];
                const real_t q_tmp_5_5 = (tmp_qloop_207*(tmp_qloop_218*tmp_qloop_219 + tmp_qloop_227*tmp_qloop_229) + tmp_qloop_228*(tmp_qloop_219*tmp_qloop_233 + tmp_qloop_229*tmp_qloop_234))*_data_q_w[q];
                const real_t q_tmp_6_6 = (tmp_qloop_235*(tmp_qloop_236*tmp_qloop_61 + tmp_qloop_63*tmp_qloop_78) + tmp_qloop_38*(tmp_qloop_236*tmp_qloop_87 + tmp_qloop_63*tmp_qloop_89))*_data_q_w[q];
                const real_t q_tmp_7_7 = (tmp_qloop_237*(tmp_qloop_102*tmp_qloop_238 + tmp_qloop_103*tmp_qloop_111) + tmp_qloop_91*(tmp_qloop_103*tmp_qloop_118 + tmp_qloop_117*tmp_qloop_238))*_data_q_w[q];
                const real_t q_tmp_8_8 = (tmp_qloop_120*(tmp_qloop_132*tmp_qloop_147 + tmp_qloop_146*tmp_qloop_240) + tmp_qloop_239*(tmp_qloop_131*tmp_qloop_240 + tmp_qloop_132*tmp_qloop_140))*_data_q_w[q];
                const real_t q_tmp_9_9 = (tmp_qloop_149*(tmp_qloop_161*tmp_qloop_176 + tmp_qloop_175*tmp_qloop_242) + tmp_qloop_241*(tmp_qloop_160*tmp_qloop_242 + tmp_qloop_161*tmp_qloop_169))*_data_q_w[q];
                const real_t q_tmp_10_10 = (tmp_qloop_178*(tmp_qloop_190*tmp_qloop_205 + tmp_qloop_204*tmp_qloop_244) + tmp_qloop_243*(tmp_qloop_189*tmp_qloop_244 + tmp_qloop_190*tmp_qloop_198))*_data_q_w[q];
                const real_t q_tmp_11_11 = (tmp_qloop_207*(tmp_qloop_219*tmp_qloop_234 + tmp_qloop_233*tmp_qloop_246) + tmp_qloop_245*(tmp_qloop_218*tmp_qloop_246 + tmp_qloop_219*tmp_qloop_227))*_data_q_w[q];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             const real_t elMatDiag_10 = q_acc_10_10;
             const real_t elMatDiag_11 = q_acc_11_11;
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
