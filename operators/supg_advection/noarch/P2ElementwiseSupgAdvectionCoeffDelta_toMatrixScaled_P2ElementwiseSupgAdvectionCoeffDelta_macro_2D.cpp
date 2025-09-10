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





























#include "../P2ElementwiseSupgAdvectionCoeffDelta.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseSupgAdvectionCoeffDelta::toMatrixScaled_P2ElementwiseSupgAdvectionCoeffDelta_macro_2D( real_t * RESTRICT  _data_deltaEdge, real_t * RESTRICT  _data_deltaVertex, idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t * RESTRICT  _data_uxEdge, real_t * RESTRICT  _data_uxVertex, real_t * RESTRICT  _data_uyEdge, real_t * RESTRICT  _data_uyVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t toMatrixScaling ) const
{
    {
       const real_t _data_q_w [] = {-0.28125, 0.26041666666666669, 0.26041666666666669, 0.26041666666666669};
   
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
       const real_t _data_phi_0_0_BLUE [] = {-0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, -0.11999999999999988, -0.12, 0.12, 0.47999999999999998, 0.47999999999999998, 0.16000000000000003, -0.11999999999999988, 0.12, -0.12, 0.47999999999999998, 0.16000000000000003, 0.47999999999999998, 0.11999999999999988, -0.12, -0.12, 0.16000000000000003, 0.47999999999999998, 0.47999999999999998};
   
       const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333348 + jac_affine_inv_1_0_BLUE*-0.33333333333333348)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999973 + jac_affine_inv_1_0_BLUE*0.19999999999999973)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*2.3999999999999999 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.3999999999999999 + jac_affine_inv_1_0_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999996 + jac_affine_inv_1_0_BLUE*0.19999999999999996)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.5999999999999999 + jac_affine_inv_1_0_BLUE*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.4000000000000001 + jac_affine_inv_1_0_BLUE*-1.4000000000000001)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004 + jac_affine_inv_1_0_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*1.5999999999999999 + jac_affine_inv_1_0_BLUE*-0.80000000000000004))};
   
       const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333348 + jac_affine_inv_1_1_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3333333333333333 + jac_affine_inv_1_1_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3333333333333333 + jac_affine_inv_1_1_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_1_BLUE*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999973 + jac_affine_inv_1_1_BLUE*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*2.3999999999999999 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.3999999999999999 + jac_affine_inv_1_1_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999996 + jac_affine_inv_1_1_BLUE*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.5999999999999999 + jac_affine_inv_1_1_BLUE*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.4000000000000001 + jac_affine_inv_1_1_BLUE*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004 + jac_affine_inv_1_1_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*1.5999999999999999 + jac_affine_inv_1_1_BLUE*-0.80000000000000004))};
   
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
       const real_t _data_phi_0_0_GRAY [] = {-0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, -0.11999999999999988, -0.12, 0.12, 0.47999999999999998, 0.47999999999999998, 0.16000000000000003, -0.11999999999999988, 0.12, -0.12, 0.47999999999999998, 0.16000000000000003, 0.47999999999999998, 0.11999999999999988, -0.12, -0.12, 0.16000000000000003, 0.47999999999999998, 0.47999999999999998};
   
       const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333348 + jac_affine_inv_1_0_GRAY*-0.33333333333333348)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999973 + jac_affine_inv_1_0_GRAY*0.19999999999999973)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*2.3999999999999999 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.3999999999999999 + jac_affine_inv_1_0_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999996 + jac_affine_inv_1_0_GRAY*0.19999999999999996)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.5999999999999999 + jac_affine_inv_1_0_GRAY*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.4000000000000001 + jac_affine_inv_1_0_GRAY*-1.4000000000000001)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004 + jac_affine_inv_1_0_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*1.5999999999999999 + jac_affine_inv_1_0_GRAY*-0.80000000000000004))};
   
       const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333348 + jac_affine_inv_1_1_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3333333333333333 + jac_affine_inv_1_1_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3333333333333333 + jac_affine_inv_1_1_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_1_GRAY*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999973 + jac_affine_inv_1_1_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*2.3999999999999999 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.3999999999999999 + jac_affine_inv_1_1_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999996 + jac_affine_inv_1_1_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.5999999999999999 + jac_affine_inv_1_1_GRAY*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.4000000000000001 + jac_affine_inv_1_1_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004 + jac_affine_inv_1_1_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*1.5999999999999999 + jac_affine_inv_1_1_GRAY*-0.80000000000000004))};
   
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t delta_dof_0 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t delta_dof_1 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t delta_dof_2 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t delta_dof_3 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t delta_dof_4 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t delta_dof_5 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ux_dof_0 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ux_dof_1 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ux_dof_2 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_3 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_4 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_5 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_0 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_1 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t uy_dof_2 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t uy_dof_3 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_4 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_5 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             {
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
                      const real_t tmp_qloop_0 = ux_dof_0*_data_phi_0_0_GRAY[6*q] + ux_dof_1*_data_phi_0_0_GRAY[6*q + 1] + ux_dof_2*_data_phi_0_0_GRAY[6*q + 2] + ux_dof_3*_data_phi_0_0_GRAY[6*q + 3] + ux_dof_4*_data_phi_0_0_GRAY[6*q + 4] + ux_dof_5*_data_phi_0_0_GRAY[6*q + 5];
                      const real_t tmp_qloop_1 = uy_dof_0*_data_phi_0_0_GRAY[6*q] + uy_dof_1*_data_phi_0_0_GRAY[6*q + 1] + uy_dof_2*_data_phi_0_0_GRAY[6*q + 2] + uy_dof_3*_data_phi_0_0_GRAY[6*q + 3] + uy_dof_4*_data_phi_0_0_GRAY[6*q + 4] + uy_dof_5*_data_phi_0_0_GRAY[6*q + 5];
                      const real_t tmp_qloop_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q];
                      const real_t tmp_qloop_3 = (delta_dof_0*_data_phi_0_0_GRAY[6*q] + delta_dof_1*_data_phi_0_0_GRAY[6*q + 1] + delta_dof_2*_data_phi_0_0_GRAY[6*q + 2] + delta_dof_3*_data_phi_0_0_GRAY[6*q + 3] + delta_dof_4*_data_phi_0_0_GRAY[6*q + 4] + delta_dof_5*_data_phi_0_0_GRAY[6*q + 5])*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                      const real_t tmp_qloop_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                      const real_t tmp_qloop_5 = tmp_qloop_2*tmp_qloop_3;
                      const real_t tmp_qloop_6 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2];
                      const real_t tmp_qloop_7 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3];
                      const real_t tmp_qloop_8 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4];
                      const real_t tmp_qloop_9 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5];
                      const real_t tmp_qloop_10 = tmp_qloop_3*tmp_qloop_4;
                      const real_t tmp_qloop_11 = tmp_qloop_3*tmp_qloop_6;
                      const real_t tmp_qloop_12 = tmp_qloop_3*tmp_qloop_7;
                      const real_t q_tmp_0_0 = (tmp_qloop_2*tmp_qloop_2)*tmp_qloop_3;
                      const real_t q_tmp_0_1 = tmp_qloop_4*tmp_qloop_5;
                      const real_t q_tmp_0_2 = tmp_qloop_5*tmp_qloop_6;
                      const real_t q_tmp_0_3 = tmp_qloop_5*tmp_qloop_7;
                      const real_t q_tmp_0_4 = tmp_qloop_5*tmp_qloop_8;
                      const real_t q_tmp_0_5 = tmp_qloop_5*tmp_qloop_9;
                      const real_t q_tmp_1_1 = tmp_qloop_3*(tmp_qloop_4*tmp_qloop_4);
                      const real_t q_tmp_1_2 = tmp_qloop_10*tmp_qloop_6;
                      const real_t q_tmp_1_3 = tmp_qloop_10*tmp_qloop_7;
                      const real_t q_tmp_1_4 = tmp_qloop_10*tmp_qloop_8;
                      const real_t q_tmp_1_5 = tmp_qloop_10*tmp_qloop_9;
                      const real_t q_tmp_2_2 = tmp_qloop_3*(tmp_qloop_6*tmp_qloop_6);
                      const real_t q_tmp_2_3 = tmp_qloop_11*tmp_qloop_7;
                      const real_t q_tmp_2_4 = tmp_qloop_11*tmp_qloop_8;
                      const real_t q_tmp_2_5 = tmp_qloop_11*tmp_qloop_9;
                      const real_t q_tmp_3_3 = tmp_qloop_3*(tmp_qloop_7*tmp_qloop_7);
                      const real_t q_tmp_3_4 = tmp_qloop_12*tmp_qloop_8;
                      const real_t q_tmp_3_5 = tmp_qloop_12*tmp_qloop_9;
                      const real_t q_tmp_4_4 = tmp_qloop_3*(tmp_qloop_8*tmp_qloop_8);
                      const real_t q_tmp_4_5 = tmp_qloop_3*tmp_qloop_8*tmp_qloop_9;
                      const real_t q_tmp_5_5 = tmp_qloop_3*(tmp_qloop_9*tmp_qloop_9);
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
                   const real_t tmp_kernel_op_0 = q_acc_0_1*toMatrixScaling;
                   const real_t tmp_kernel_op_1 = q_acc_0_2*toMatrixScaling;
                   const real_t tmp_kernel_op_2 = q_acc_0_3*toMatrixScaling;
                   const real_t tmp_kernel_op_3 = q_acc_0_4*toMatrixScaling;
                   const real_t tmp_kernel_op_4 = q_acc_0_5*toMatrixScaling;
                   const real_t tmp_kernel_op_5 = q_acc_1_2*toMatrixScaling;
                   const real_t tmp_kernel_op_6 = q_acc_1_3*toMatrixScaling;
                   const real_t tmp_kernel_op_7 = q_acc_1_4*toMatrixScaling;
                   const real_t tmp_kernel_op_8 = q_acc_1_5*toMatrixScaling;
                   const real_t tmp_kernel_op_9 = q_acc_2_3*toMatrixScaling;
                   const real_t tmp_kernel_op_10 = q_acc_2_4*toMatrixScaling;
                   const real_t tmp_kernel_op_11 = q_acc_2_5*toMatrixScaling;
                   const real_t tmp_kernel_op_12 = q_acc_3_4*toMatrixScaling;
                   const real_t tmp_kernel_op_13 = q_acc_3_5*toMatrixScaling;
                   const real_t tmp_kernel_op_14 = q_acc_4_5*toMatrixScaling;
                   const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
                   const real_t elMat_0_1 = tmp_kernel_op_0;
                   const real_t elMat_0_2 = tmp_kernel_op_1;
                   const real_t elMat_0_3 = tmp_kernel_op_2;
                   const real_t elMat_0_4 = tmp_kernel_op_3;
                   const real_t elMat_0_5 = tmp_kernel_op_4;
                   const real_t elMat_1_0 = tmp_kernel_op_0;
                   const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
                   const real_t elMat_1_2 = tmp_kernel_op_5;
                   const real_t elMat_1_3 = tmp_kernel_op_6;
                   const real_t elMat_1_4 = tmp_kernel_op_7;
                   const real_t elMat_1_5 = tmp_kernel_op_8;
                   const real_t elMat_2_0 = tmp_kernel_op_1;
                   const real_t elMat_2_1 = tmp_kernel_op_5;
                   const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
                   const real_t elMat_2_3 = tmp_kernel_op_9;
                   const real_t elMat_2_4 = tmp_kernel_op_10;
                   const real_t elMat_2_5 = tmp_kernel_op_11;
                   const real_t elMat_3_0 = tmp_kernel_op_2;
                   const real_t elMat_3_1 = tmp_kernel_op_6;
                   const real_t elMat_3_2 = tmp_kernel_op_9;
                   const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
                   const real_t elMat_3_4 = tmp_kernel_op_12;
                   const real_t elMat_3_5 = tmp_kernel_op_13;
                   const real_t elMat_4_0 = tmp_kernel_op_3;
                   const real_t elMat_4_1 = tmp_kernel_op_7;
                   const real_t elMat_4_2 = tmp_kernel_op_10;
                   const real_t elMat_4_3 = tmp_kernel_op_12;
                   const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
                   const real_t elMat_4_5 = tmp_kernel_op_14;
                   const real_t elMat_5_0 = tmp_kernel_op_4;
                   const real_t elMat_5_1 = tmp_kernel_op_8;
                   const real_t elMat_5_2 = tmp_kernel_op_11;
                   const real_t elMat_5_3 = tmp_kernel_op_13;
                   const real_t elMat_5_4 = tmp_kernel_op_14;
                   const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_0_4));
                   _data_mat[5] = ((real_t)(elMat_0_5));
                   _data_mat[6] = ((real_t)(elMat_1_0));
                   _data_mat[7] = ((real_t)(elMat_1_1));
                   _data_mat[8] = ((real_t)(elMat_1_2));
                   _data_mat[9] = ((real_t)(elMat_1_3));
                   _data_mat[10] = ((real_t)(elMat_1_4));
                   _data_mat[11] = ((real_t)(elMat_1_5));
                   _data_mat[12] = ((real_t)(elMat_2_0));
                   _data_mat[13] = ((real_t)(elMat_2_1));
                   _data_mat[14] = ((real_t)(elMat_2_2));
                   _data_mat[15] = ((real_t)(elMat_2_3));
                   _data_mat[16] = ((real_t)(elMat_2_4));
                   _data_mat[17] = ((real_t)(elMat_2_5));
                   _data_mat[18] = ((real_t)(elMat_3_0));
                   _data_mat[19] = ((real_t)(elMat_3_1));
                   _data_mat[20] = ((real_t)(elMat_3_2));
                   _data_mat[21] = ((real_t)(elMat_3_3));
                   _data_mat[22] = ((real_t)(elMat_3_4));
                   _data_mat[23] = ((real_t)(elMat_3_5));
                   _data_mat[24] = ((real_t)(elMat_4_0));
                   _data_mat[25] = ((real_t)(elMat_4_1));
                   _data_mat[26] = ((real_t)(elMat_4_2));
                   _data_mat[27] = ((real_t)(elMat_4_3));
                   _data_mat[28] = ((real_t)(elMat_4_4));
                   _data_mat[29] = ((real_t)(elMat_4_5));
                   _data_mat[30] = ((real_t)(elMat_5_0));
                   _data_mat[31] = ((real_t)(elMat_5_1));
                   _data_mat[32] = ((real_t)(elMat_5_2));
                   _data_mat[33] = ((real_t)(elMat_5_3));
                   _data_mat[34] = ((real_t)(elMat_5_4));
                   _data_mat[35] = ((real_t)(elMat_5_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const real_t tmp_moved_constant_0 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_1 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_2 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_3 = _data_deltaEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_4 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_5 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_6 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_7 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_8 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_9 = _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_10 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_11 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_12 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_13 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_14 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_15 = _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_16 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_17 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             {
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
                      const real_t tmp_qloop_0 = tmp_moved_constant_10*_data_phi_0_0_BLUE[6*q + 4] + tmp_moved_constant_11*_data_phi_0_0_BLUE[6*q + 5] + tmp_moved_constant_6*_data_phi_0_0_BLUE[6*q] + tmp_moved_constant_7*_data_phi_0_0_BLUE[6*q + 1] + tmp_moved_constant_8*_data_phi_0_0_BLUE[6*q + 2] + tmp_moved_constant_9*_data_phi_0_0_BLUE[6*q + 3];
                      const real_t tmp_qloop_1 = tmp_moved_constant_12*_data_phi_0_0_BLUE[6*q] + tmp_moved_constant_13*_data_phi_0_0_BLUE[6*q + 1] + tmp_moved_constant_14*_data_phi_0_0_BLUE[6*q + 2] + tmp_moved_constant_15*_data_phi_0_0_BLUE[6*q + 3] + tmp_moved_constant_16*_data_phi_0_0_BLUE[6*q + 4] + tmp_moved_constant_17*_data_phi_0_0_BLUE[6*q + 5];
                      const real_t tmp_qloop_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q];
                      const real_t tmp_qloop_3 = (tmp_moved_constant_0*_data_phi_0_0_BLUE[6*q] + tmp_moved_constant_1*_data_phi_0_0_BLUE[6*q + 1] + tmp_moved_constant_2*_data_phi_0_0_BLUE[6*q + 2] + tmp_moved_constant_3*_data_phi_0_0_BLUE[6*q + 3] + tmp_moved_constant_4*_data_phi_0_0_BLUE[6*q + 4] + tmp_moved_constant_5*_data_phi_0_0_BLUE[6*q + 5])*_data_q_w[q]*_data_tabulated_and_untitled_0_0_BLUE[7*q + 1];
                      const real_t tmp_qloop_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1];
                      const real_t tmp_qloop_5 = tmp_qloop_2*tmp_qloop_3;
                      const real_t tmp_qloop_6 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2];
                      const real_t tmp_qloop_7 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3];
                      const real_t tmp_qloop_8 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4];
                      const real_t tmp_qloop_9 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5];
                      const real_t tmp_qloop_10 = tmp_qloop_3*tmp_qloop_4;
                      const real_t tmp_qloop_11 = tmp_qloop_3*tmp_qloop_6;
                      const real_t tmp_qloop_12 = tmp_qloop_3*tmp_qloop_7;
                      const real_t q_tmp_0_0 = (tmp_qloop_2*tmp_qloop_2)*tmp_qloop_3;
                      const real_t q_tmp_0_1 = tmp_qloop_4*tmp_qloop_5;
                      const real_t q_tmp_0_2 = tmp_qloop_5*tmp_qloop_6;
                      const real_t q_tmp_0_3 = tmp_qloop_5*tmp_qloop_7;
                      const real_t q_tmp_0_4 = tmp_qloop_5*tmp_qloop_8;
                      const real_t q_tmp_0_5 = tmp_qloop_5*tmp_qloop_9;
                      const real_t q_tmp_1_1 = tmp_qloop_3*(tmp_qloop_4*tmp_qloop_4);
                      const real_t q_tmp_1_2 = tmp_qloop_10*tmp_qloop_6;
                      const real_t q_tmp_1_3 = tmp_qloop_10*tmp_qloop_7;
                      const real_t q_tmp_1_4 = tmp_qloop_10*tmp_qloop_8;
                      const real_t q_tmp_1_5 = tmp_qloop_10*tmp_qloop_9;
                      const real_t q_tmp_2_2 = tmp_qloop_3*(tmp_qloop_6*tmp_qloop_6);
                      const real_t q_tmp_2_3 = tmp_qloop_11*tmp_qloop_7;
                      const real_t q_tmp_2_4 = tmp_qloop_11*tmp_qloop_8;
                      const real_t q_tmp_2_5 = tmp_qloop_11*tmp_qloop_9;
                      const real_t q_tmp_3_3 = tmp_qloop_3*(tmp_qloop_7*tmp_qloop_7);
                      const real_t q_tmp_3_4 = tmp_qloop_12*tmp_qloop_8;
                      const real_t q_tmp_3_5 = tmp_qloop_12*tmp_qloop_9;
                      const real_t q_tmp_4_4 = tmp_qloop_3*(tmp_qloop_8*tmp_qloop_8);
                      const real_t q_tmp_4_5 = tmp_qloop_3*tmp_qloop_8*tmp_qloop_9;
                      const real_t q_tmp_5_5 = tmp_qloop_3*(tmp_qloop_9*tmp_qloop_9);
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
                   const real_t tmp_kernel_op_0 = q_acc_0_1*toMatrixScaling;
                   const real_t tmp_kernel_op_1 = q_acc_0_2*toMatrixScaling;
                   const real_t tmp_kernel_op_2 = q_acc_0_3*toMatrixScaling;
                   const real_t tmp_kernel_op_3 = q_acc_0_4*toMatrixScaling;
                   const real_t tmp_kernel_op_4 = q_acc_0_5*toMatrixScaling;
                   const real_t tmp_kernel_op_5 = q_acc_1_2*toMatrixScaling;
                   const real_t tmp_kernel_op_6 = q_acc_1_3*toMatrixScaling;
                   const real_t tmp_kernel_op_7 = q_acc_1_4*toMatrixScaling;
                   const real_t tmp_kernel_op_8 = q_acc_1_5*toMatrixScaling;
                   const real_t tmp_kernel_op_9 = q_acc_2_3*toMatrixScaling;
                   const real_t tmp_kernel_op_10 = q_acc_2_4*toMatrixScaling;
                   const real_t tmp_kernel_op_11 = q_acc_2_5*toMatrixScaling;
                   const real_t tmp_kernel_op_12 = q_acc_3_4*toMatrixScaling;
                   const real_t tmp_kernel_op_13 = q_acc_3_5*toMatrixScaling;
                   const real_t tmp_kernel_op_14 = q_acc_4_5*toMatrixScaling;
                   const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
                   const real_t elMat_0_1 = tmp_kernel_op_0;
                   const real_t elMat_0_2 = tmp_kernel_op_1;
                   const real_t elMat_0_3 = tmp_kernel_op_2;
                   const real_t elMat_0_4 = tmp_kernel_op_3;
                   const real_t elMat_0_5 = tmp_kernel_op_4;
                   const real_t elMat_1_0 = tmp_kernel_op_0;
                   const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
                   const real_t elMat_1_2 = tmp_kernel_op_5;
                   const real_t elMat_1_3 = tmp_kernel_op_6;
                   const real_t elMat_1_4 = tmp_kernel_op_7;
                   const real_t elMat_1_5 = tmp_kernel_op_8;
                   const real_t elMat_2_0 = tmp_kernel_op_1;
                   const real_t elMat_2_1 = tmp_kernel_op_5;
                   const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
                   const real_t elMat_2_3 = tmp_kernel_op_9;
                   const real_t elMat_2_4 = tmp_kernel_op_10;
                   const real_t elMat_2_5 = tmp_kernel_op_11;
                   const real_t elMat_3_0 = tmp_kernel_op_2;
                   const real_t elMat_3_1 = tmp_kernel_op_6;
                   const real_t elMat_3_2 = tmp_kernel_op_9;
                   const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
                   const real_t elMat_3_4 = tmp_kernel_op_12;
                   const real_t elMat_3_5 = tmp_kernel_op_13;
                   const real_t elMat_4_0 = tmp_kernel_op_3;
                   const real_t elMat_4_1 = tmp_kernel_op_7;
                   const real_t elMat_4_2 = tmp_kernel_op_10;
                   const real_t elMat_4_3 = tmp_kernel_op_12;
                   const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
                   const real_t elMat_4_5 = tmp_kernel_op_14;
                   const real_t elMat_5_0 = tmp_kernel_op_4;
                   const real_t elMat_5_1 = tmp_kernel_op_8;
                   const real_t elMat_5_2 = tmp_kernel_op_11;
                   const real_t elMat_5_3 = tmp_kernel_op_13;
                   const real_t elMat_5_4 = tmp_kernel_op_14;
                   const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_0_4));
                   _data_mat[5] = ((real_t)(elMat_0_5));
                   _data_mat[6] = ((real_t)(elMat_1_0));
                   _data_mat[7] = ((real_t)(elMat_1_1));
                   _data_mat[8] = ((real_t)(elMat_1_2));
                   _data_mat[9] = ((real_t)(elMat_1_3));
                   _data_mat[10] = ((real_t)(elMat_1_4));
                   _data_mat[11] = ((real_t)(elMat_1_5));
                   _data_mat[12] = ((real_t)(elMat_2_0));
                   _data_mat[13] = ((real_t)(elMat_2_1));
                   _data_mat[14] = ((real_t)(elMat_2_2));
                   _data_mat[15] = ((real_t)(elMat_2_3));
                   _data_mat[16] = ((real_t)(elMat_2_4));
                   _data_mat[17] = ((real_t)(elMat_2_5));
                   _data_mat[18] = ((real_t)(elMat_3_0));
                   _data_mat[19] = ((real_t)(elMat_3_1));
                   _data_mat[20] = ((real_t)(elMat_3_2));
                   _data_mat[21] = ((real_t)(elMat_3_3));
                   _data_mat[22] = ((real_t)(elMat_3_4));
                   _data_mat[23] = ((real_t)(elMat_3_5));
                   _data_mat[24] = ((real_t)(elMat_4_0));
                   _data_mat[25] = ((real_t)(elMat_4_1));
                   _data_mat[26] = ((real_t)(elMat_4_2));
                   _data_mat[27] = ((real_t)(elMat_4_3));
                   _data_mat[28] = ((real_t)(elMat_4_4));
                   _data_mat[29] = ((real_t)(elMat_4_5));
                   _data_mat[30] = ((real_t)(elMat_5_0));
                   _data_mat[31] = ((real_t)(elMat_5_1));
                   _data_mat[32] = ((real_t)(elMat_5_2));
                   _data_mat[33] = ((real_t)(elMat_5_3));
                   _data_mat[34] = ((real_t)(elMat_5_4));
                   _data_mat[35] = ((real_t)(elMat_5_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t delta_dof_0 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t delta_dof_1 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t delta_dof_2 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t delta_dof_3 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t delta_dof_4 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t delta_dof_5 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ux_dof_0 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ux_dof_1 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ux_dof_2 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_3 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_4 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_5 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_0 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_1 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t uy_dof_2 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t uy_dof_3 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_4 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_5 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             {
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
                      const real_t tmp_qloop_0 = ux_dof_0*_data_phi_0_0_GRAY[6*q] + ux_dof_1*_data_phi_0_0_GRAY[6*q + 1] + ux_dof_2*_data_phi_0_0_GRAY[6*q + 2] + ux_dof_3*_data_phi_0_0_GRAY[6*q + 3] + ux_dof_4*_data_phi_0_0_GRAY[6*q + 4] + ux_dof_5*_data_phi_0_0_GRAY[6*q + 5];
                      const real_t tmp_qloop_1 = uy_dof_0*_data_phi_0_0_GRAY[6*q] + uy_dof_1*_data_phi_0_0_GRAY[6*q + 1] + uy_dof_2*_data_phi_0_0_GRAY[6*q + 2] + uy_dof_3*_data_phi_0_0_GRAY[6*q + 3] + uy_dof_4*_data_phi_0_0_GRAY[6*q + 4] + uy_dof_5*_data_phi_0_0_GRAY[6*q + 5];
                      const real_t tmp_qloop_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q];
                      const real_t tmp_qloop_3 = (delta_dof_0*_data_phi_0_0_GRAY[6*q] + delta_dof_1*_data_phi_0_0_GRAY[6*q + 1] + delta_dof_2*_data_phi_0_0_GRAY[6*q + 2] + delta_dof_3*_data_phi_0_0_GRAY[6*q + 3] + delta_dof_4*_data_phi_0_0_GRAY[6*q + 4] + delta_dof_5*_data_phi_0_0_GRAY[6*q + 5])*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                      const real_t tmp_qloop_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                      const real_t tmp_qloop_5 = tmp_qloop_2*tmp_qloop_3;
                      const real_t tmp_qloop_6 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2];
                      const real_t tmp_qloop_7 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3];
                      const real_t tmp_qloop_8 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4];
                      const real_t tmp_qloop_9 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5];
                      const real_t tmp_qloop_10 = tmp_qloop_3*tmp_qloop_4;
                      const real_t tmp_qloop_11 = tmp_qloop_3*tmp_qloop_6;
                      const real_t tmp_qloop_12 = tmp_qloop_3*tmp_qloop_7;
                      const real_t q_tmp_0_0 = (tmp_qloop_2*tmp_qloop_2)*tmp_qloop_3;
                      const real_t q_tmp_0_1 = tmp_qloop_4*tmp_qloop_5;
                      const real_t q_tmp_0_2 = tmp_qloop_5*tmp_qloop_6;
                      const real_t q_tmp_0_3 = tmp_qloop_5*tmp_qloop_7;
                      const real_t q_tmp_0_4 = tmp_qloop_5*tmp_qloop_8;
                      const real_t q_tmp_0_5 = tmp_qloop_5*tmp_qloop_9;
                      const real_t q_tmp_1_1 = tmp_qloop_3*(tmp_qloop_4*tmp_qloop_4);
                      const real_t q_tmp_1_2 = tmp_qloop_10*tmp_qloop_6;
                      const real_t q_tmp_1_3 = tmp_qloop_10*tmp_qloop_7;
                      const real_t q_tmp_1_4 = tmp_qloop_10*tmp_qloop_8;
                      const real_t q_tmp_1_5 = tmp_qloop_10*tmp_qloop_9;
                      const real_t q_tmp_2_2 = tmp_qloop_3*(tmp_qloop_6*tmp_qloop_6);
                      const real_t q_tmp_2_3 = tmp_qloop_11*tmp_qloop_7;
                      const real_t q_tmp_2_4 = tmp_qloop_11*tmp_qloop_8;
                      const real_t q_tmp_2_5 = tmp_qloop_11*tmp_qloop_9;
                      const real_t q_tmp_3_3 = tmp_qloop_3*(tmp_qloop_7*tmp_qloop_7);
                      const real_t q_tmp_3_4 = tmp_qloop_12*tmp_qloop_8;
                      const real_t q_tmp_3_5 = tmp_qloop_12*tmp_qloop_9;
                      const real_t q_tmp_4_4 = tmp_qloop_3*(tmp_qloop_8*tmp_qloop_8);
                      const real_t q_tmp_4_5 = tmp_qloop_3*tmp_qloop_8*tmp_qloop_9;
                      const real_t q_tmp_5_5 = tmp_qloop_3*(tmp_qloop_9*tmp_qloop_9);
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
                   const real_t tmp_kernel_op_0 = q_acc_0_1*toMatrixScaling;
                   const real_t tmp_kernel_op_1 = q_acc_0_2*toMatrixScaling;
                   const real_t tmp_kernel_op_2 = q_acc_0_3*toMatrixScaling;
                   const real_t tmp_kernel_op_3 = q_acc_0_4*toMatrixScaling;
                   const real_t tmp_kernel_op_4 = q_acc_0_5*toMatrixScaling;
                   const real_t tmp_kernel_op_5 = q_acc_1_2*toMatrixScaling;
                   const real_t tmp_kernel_op_6 = q_acc_1_3*toMatrixScaling;
                   const real_t tmp_kernel_op_7 = q_acc_1_4*toMatrixScaling;
                   const real_t tmp_kernel_op_8 = q_acc_1_5*toMatrixScaling;
                   const real_t tmp_kernel_op_9 = q_acc_2_3*toMatrixScaling;
                   const real_t tmp_kernel_op_10 = q_acc_2_4*toMatrixScaling;
                   const real_t tmp_kernel_op_11 = q_acc_2_5*toMatrixScaling;
                   const real_t tmp_kernel_op_12 = q_acc_3_4*toMatrixScaling;
                   const real_t tmp_kernel_op_13 = q_acc_3_5*toMatrixScaling;
                   const real_t tmp_kernel_op_14 = q_acc_4_5*toMatrixScaling;
                   const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
                   const real_t elMat_0_1 = tmp_kernel_op_0;
                   const real_t elMat_0_2 = tmp_kernel_op_1;
                   const real_t elMat_0_3 = tmp_kernel_op_2;
                   const real_t elMat_0_4 = tmp_kernel_op_3;
                   const real_t elMat_0_5 = tmp_kernel_op_4;
                   const real_t elMat_1_0 = tmp_kernel_op_0;
                   const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
                   const real_t elMat_1_2 = tmp_kernel_op_5;
                   const real_t elMat_1_3 = tmp_kernel_op_6;
                   const real_t elMat_1_4 = tmp_kernel_op_7;
                   const real_t elMat_1_5 = tmp_kernel_op_8;
                   const real_t elMat_2_0 = tmp_kernel_op_1;
                   const real_t elMat_2_1 = tmp_kernel_op_5;
                   const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
                   const real_t elMat_2_3 = tmp_kernel_op_9;
                   const real_t elMat_2_4 = tmp_kernel_op_10;
                   const real_t elMat_2_5 = tmp_kernel_op_11;
                   const real_t elMat_3_0 = tmp_kernel_op_2;
                   const real_t elMat_3_1 = tmp_kernel_op_6;
                   const real_t elMat_3_2 = tmp_kernel_op_9;
                   const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
                   const real_t elMat_3_4 = tmp_kernel_op_12;
                   const real_t elMat_3_5 = tmp_kernel_op_13;
                   const real_t elMat_4_0 = tmp_kernel_op_3;
                   const real_t elMat_4_1 = tmp_kernel_op_7;
                   const real_t elMat_4_2 = tmp_kernel_op_10;
                   const real_t elMat_4_3 = tmp_kernel_op_12;
                   const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
                   const real_t elMat_4_5 = tmp_kernel_op_14;
                   const real_t elMat_5_0 = tmp_kernel_op_4;
                   const real_t elMat_5_1 = tmp_kernel_op_8;
                   const real_t elMat_5_2 = tmp_kernel_op_11;
                   const real_t elMat_5_3 = tmp_kernel_op_13;
                   const real_t elMat_5_4 = tmp_kernel_op_14;
                   const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_0_4));
                   _data_mat[5] = ((real_t)(elMat_0_5));
                   _data_mat[6] = ((real_t)(elMat_1_0));
                   _data_mat[7] = ((real_t)(elMat_1_1));
                   _data_mat[8] = ((real_t)(elMat_1_2));
                   _data_mat[9] = ((real_t)(elMat_1_3));
                   _data_mat[10] = ((real_t)(elMat_1_4));
                   _data_mat[11] = ((real_t)(elMat_1_5));
                   _data_mat[12] = ((real_t)(elMat_2_0));
                   _data_mat[13] = ((real_t)(elMat_2_1));
                   _data_mat[14] = ((real_t)(elMat_2_2));
                   _data_mat[15] = ((real_t)(elMat_2_3));
                   _data_mat[16] = ((real_t)(elMat_2_4));
                   _data_mat[17] = ((real_t)(elMat_2_5));
                   _data_mat[18] = ((real_t)(elMat_3_0));
                   _data_mat[19] = ((real_t)(elMat_3_1));
                   _data_mat[20] = ((real_t)(elMat_3_2));
                   _data_mat[21] = ((real_t)(elMat_3_3));
                   _data_mat[22] = ((real_t)(elMat_3_4));
                   _data_mat[23] = ((real_t)(elMat_3_5));
                   _data_mat[24] = ((real_t)(elMat_4_0));
                   _data_mat[25] = ((real_t)(elMat_4_1));
                   _data_mat[26] = ((real_t)(elMat_4_2));
                   _data_mat[27] = ((real_t)(elMat_4_3));
                   _data_mat[28] = ((real_t)(elMat_4_4));
                   _data_mat[29] = ((real_t)(elMat_4_5));
                   _data_mat[30] = ((real_t)(elMat_5_0));
                   _data_mat[31] = ((real_t)(elMat_5_1));
                   _data_mat[32] = ((real_t)(elMat_5_2));
                   _data_mat[33] = ((real_t)(elMat_5_3));
                   _data_mat[34] = ((real_t)(elMat_5_4));
                   _data_mat[35] = ((real_t)(elMat_5_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
