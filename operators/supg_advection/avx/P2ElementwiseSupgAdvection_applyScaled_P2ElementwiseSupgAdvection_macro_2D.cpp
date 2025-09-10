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





























#include "../P2ElementwiseSupgAdvection.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseSupgAdvection::applyScaled_P2ElementwiseSupgAdvection_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t * RESTRICT  _data_uxEdge, real_t * RESTRICT  _data_uxVertex, real_t * RESTRICT  _data_uyEdge, real_t * RESTRICT  _data_uyVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling, real_t thermalConductivity ) const
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
   
       const real_t tmp_qloop_6 = 1.0 / (thermalConductivity*thermalConductivity*thermalConductivity);
       const real_t tmp_qloop_23 = 1.0 / (thermalConductivity);
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_4 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_5 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d ux_dof_0 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d ux_dof_1 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d ux_dof_2 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d ux_dof_3 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d ux_dof_4 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d ux_dof_5 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d uy_dof_0 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d uy_dof_1 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d uy_dof_2 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d uy_dof_3 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d uy_dof_4 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d uy_dof_5 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
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
                  
                      const __m256d p_affine_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_2_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_2_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
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
                      const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_9 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      const __m256d tmp_qloop_10 = _mm256_add_pd(_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_8))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_8)))),_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_9))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_9)))));
                      const __m256d tmp_qloop_11 = _mm256_mul_pd(_mm256_sqrt_pd(tmp_qloop_10),tmp_qloop_10);
                      const __m256d tmp_qloop_12 = _mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                      const __m256d tmp_qloop_13 = _mm256_add_pd(p_affine_0_0,tmp_qloop_12);
                      const __m256d tmp_qloop_14 = _mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                      const __m256d tmp_qloop_15 = _mm256_add_pd(p_affine_0_1,tmp_qloop_14);
                      const __m256d tmp_qloop_16 = _mm256_add_pd(_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_13))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_13)))),_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_15))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_15)))));
                      const __m256d tmp_qloop_17 = _mm256_mul_pd(_mm256_sqrt_pd(tmp_qloop_16),tmp_qloop_16);
                      const __m256d tmp_qloop_18 = _mm256_add_pd(_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(p_affine_1_0,tmp_qloop_12)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(p_affine_1_0,tmp_qloop_12))))),_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(p_affine_1_1,tmp_qloop_14)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(p_affine_1_1,tmp_qloop_14))))));
                      const __m256d tmp_qloop_19 = _mm256_mul_pd(_mm256_sqrt_pd(tmp_qloop_18),tmp_qloop_18);
                      const __m256d tmp_qloop_20 = _mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_13,tmp_qloop_9),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))));
                      const __m256d tmp_qloop_21 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20));
                      const __m256d tmp_qloop_24 = _mm256_sqrt_pd(tmp_qloop_10);
                      const __m256d tmp_qloop_25 = _mm256_sqrt_pd(tmp_qloop_16);
                      const __m256d tmp_qloop_26 = _mm256_sqrt_pd(tmp_qloop_18);
                      const __m256d tmp_qloop_27 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20);
                      const __m256d tmp_qloop_28 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_25),tmp_qloop_26),tmp_qloop_27);
                      for (int64_t q = 0; q < 4; q += 1)
                      {
                         const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(ux_dof_0,_mm256_set_pd(_data_phi_0_0_GRAY[6*q],_data_phi_0_0_GRAY[6*q],_data_phi_0_0_GRAY[6*q],_data_phi_0_0_GRAY[6*q])),_mm256_mul_pd(ux_dof_1,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 1],_data_phi_0_0_GRAY[6*q + 1],_data_phi_0_0_GRAY[6*q + 1],_data_phi_0_0_GRAY[6*q + 1]))),_mm256_mul_pd(ux_dof_2,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 2],_data_phi_0_0_GRAY[6*q + 2],_data_phi_0_0_GRAY[6*q + 2],_data_phi_0_0_GRAY[6*q + 2]))),_mm256_mul_pd(ux_dof_3,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 3],_data_phi_0_0_GRAY[6*q + 3],_data_phi_0_0_GRAY[6*q + 3],_data_phi_0_0_GRAY[6*q + 3]))),_mm256_mul_pd(ux_dof_4,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 4],_data_phi_0_0_GRAY[6*q + 4],_data_phi_0_0_GRAY[6*q + 4],_data_phi_0_0_GRAY[6*q + 4]))),_mm256_mul_pd(ux_dof_5,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 5],_data_phi_0_0_GRAY[6*q + 5],_data_phi_0_0_GRAY[6*q + 5],_data_phi_0_0_GRAY[6*q + 5])));
                         const __m256d tmp_qloop_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(uy_dof_0,_mm256_set_pd(_data_phi_0_0_GRAY[6*q],_data_phi_0_0_GRAY[6*q],_data_phi_0_0_GRAY[6*q],_data_phi_0_0_GRAY[6*q])),_mm256_mul_pd(uy_dof_1,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 1],_data_phi_0_0_GRAY[6*q + 1],_data_phi_0_0_GRAY[6*q + 1],_data_phi_0_0_GRAY[6*q + 1]))),_mm256_mul_pd(uy_dof_2,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 2],_data_phi_0_0_GRAY[6*q + 2],_data_phi_0_0_GRAY[6*q + 2],_data_phi_0_0_GRAY[6*q + 2]))),_mm256_mul_pd(uy_dof_3,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 3],_data_phi_0_0_GRAY[6*q + 3],_data_phi_0_0_GRAY[6*q + 3],_data_phi_0_0_GRAY[6*q + 3]))),_mm256_mul_pd(uy_dof_4,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 4],_data_phi_0_0_GRAY[6*q + 4],_data_phi_0_0_GRAY[6*q + 4],_data_phi_0_0_GRAY[6*q + 4]))),_mm256_mul_pd(uy_dof_5,_mm256_set_pd(_data_phi_0_0_GRAY[6*q + 5],_data_phi_0_0_GRAY[6*q + 5],_data_phi_0_0_GRAY[6*q + 5],_data_phi_0_0_GRAY[6*q + 5])));
                         const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q],_data_tabulated_and_untitled_0_0_GRAY[7*q],_data_tabulated_and_untitled_0_0_GRAY[7*q],_data_tabulated_and_untitled_0_0_GRAY[7*q])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q])));
                         const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_0),_mm256_mul_pd(tmp_qloop_1,tmp_qloop_1));
                         const __m256d tmp_qloop_4 = _mm256_sqrt_pd(tmp_qloop_3);
                         const __m256d tmp_qloop_5 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_4);
                         const __m256d tmp_qloop_7 = _mm256_mul_pd(_mm256_sqrt_pd(tmp_qloop_3),tmp_qloop_3);
                         const __m256d tmp_qloop_22 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,tmp_qloop_17),tmp_qloop_19),tmp_qloop_21),tmp_qloop_7),_mm256_set_pd(tmp_qloop_6,tmp_qloop_6,tmp_qloop_6,tmp_qloop_6));
                         const __m256d tmp_qloop_29 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_4),_mm256_set_pd(tmp_qloop_23,tmp_qloop_23,tmp_qloop_23,tmp_qloop_23));
                         const __m256d tmp_qloop_30 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_16),tmp_qloop_18),_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20))),tmp_qloop_3),_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(thermalConductivity,thermalConductivity,thermalConductivity,thermalConductivity)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(thermalConductivity,thermalConductivity,thermalConductivity,thermalConductivity))));
                         const __m256d tmp_qloop_31 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_5),_mm256_set_pd(0.50000000000000000,0.50000000000000000,0.50000000000000000,0.50000000000000000)),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 1],_data_tabulated_and_untitled_0_0_GRAY[7*q + 1],_data_tabulated_and_untitled_0_0_GRAY[7*q + 1],_data_tabulated_and_untitled_0_0_GRAY[7*q + 1])),_mm256_blendv_pd(_mm256_blendv_pd(_mm256_blendv_pd(_mm256_blendv_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_24)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_25)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_26)),tmp_qloop_5),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(thermalConductivity,thermalConductivity,thermalConductivity,thermalConductivity)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_29,_mm256_set_pd(0.16399221771597999,0.16399221771597999,0.16399221771597999,0.16399221771597999)),_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(0.0003890697253152925,0.0003890697253152925,0.0003890697253152925,0.0003890697253152925))),_mm256_mul_pd(tmp_qloop_30,_mm256_set_pd(-0.01300962248982295,-0.01300962248982295,-0.01300962248982295,-0.01300962248982295))),_mm256_set_pd(0.072194442299590406,0.072194442299590406,0.072194442299590406,0.072194442299590406)),_mm256_cmp_pd(tmp_qloop_29,_mm256_set_pd(9.7000000058627194,9.7000000058627194,9.7000000058627194,9.7000000058627194),_CMP_LE_OQ)),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_30,_mm256_set_pd(-0.020516694887729999,-0.020516694887729999,-0.020516694887729999,-0.020516694887729999)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,tmp_qloop_17),tmp_qloop_19),tmp_qloop_21),tmp_qloop_7),_mm256_set_pd(0.00076015027042957372,0.00076015027042957372,0.00076015027042957372,0.00076015027042957372)),_mm256_set_pd(tmp_qloop_6,tmp_qloop_6,tmp_qloop_6,tmp_qloop_6))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_25),tmp_qloop_26),tmp_qloop_27),tmp_qloop_4),_mm256_set_pd(0.2146156710600175,0.2146156710600175,0.2146156710600175,0.2146156710600175)),_mm256_set_pd(tmp_qloop_23,tmp_qloop_23,tmp_qloop_23,tmp_qloop_23))),_mm256_set_pd(-0.041597543561209399,-0.041597543561209399,-0.041597543561209399,-0.041597543561209399)),_mm256_cmp_pd(tmp_qloop_29,_mm256_set_pd(6.7434348119715999,6.7434348119715999,6.7434348119715999,6.7434348119715999),_CMP_LE_OQ)),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(-0.00051942446859271248,-0.00051942446859271248,-0.00051942446859271248,-0.00051942446859271248)),_mm256_mul_pd(tmp_qloop_30,_mm256_set_pd(-0.0089393368193446242,-0.0089393368193446242,-0.0089393368193446242,-0.0089393368193446242))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_25),tmp_qloop_26),tmp_qloop_27),tmp_qloop_4),_mm256_set_pd(0.17969906536907199,0.17969906536907199,0.17969906536907199,0.17969906536907199)),_mm256_set_pd(tmp_qloop_23,tmp_qloop_23,tmp_qloop_23,tmp_qloop_23))),_mm256_set_pd(-0.0064954259688208404,-0.0064954259688208404,-0.0064954259688208404,-0.0064954259688208404)),_mm256_cmp_pd(tmp_qloop_29,_mm256_set_pd(3.0159389978870399,3.0159389978870399,3.0159389978870399,3.0159389978870399),_CMP_LE_OQ)),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(-0.0027777777777777778,-0.0027777777777777778,-0.0027777777777777778,-0.0027777777777777778)),_mm256_mul_pd(tmp_qloop_29,_mm256_set_pd(0.16666666666666667,0.16666666666666667,0.16666666666666667,0.16666666666666667))),_mm256_cmp_pd(tmp_qloop_29,_mm256_set_pd(1.1799999561582399,1.1799999561582399,1.1799999561582399,1.1799999561582399),_CMP_LE_OQ)));
                         const __m256d tmp_qloop_32 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 2],_data_tabulated_and_untitled_0_0_GRAY[7*q + 2],_data_tabulated_and_untitled_0_0_GRAY[7*q + 2],_data_tabulated_and_untitled_0_0_GRAY[7*q + 2])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1])));
                         const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_31);
                         const __m256d tmp_qloop_34 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 3],_data_tabulated_and_untitled_0_0_GRAY[7*q + 3],_data_tabulated_and_untitled_0_0_GRAY[7*q + 3],_data_tabulated_and_untitled_0_0_GRAY[7*q + 3])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2])));
                         const __m256d tmp_qloop_35 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 4],_data_tabulated_and_untitled_0_0_GRAY[7*q + 4],_data_tabulated_and_untitled_0_0_GRAY[7*q + 4],_data_tabulated_and_untitled_0_0_GRAY[7*q + 4])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3])));
                         const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 5],_data_tabulated_and_untitled_0_0_GRAY[7*q + 5],_data_tabulated_and_untitled_0_0_GRAY[7*q + 5],_data_tabulated_and_untitled_0_0_GRAY[7*q + 5])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4])));
                         const __m256d tmp_qloop_37 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[7*q + 6],_data_tabulated_and_untitled_0_0_GRAY[7*q + 6],_data_tabulated_and_untitled_0_0_GRAY[7*q + 6],_data_tabulated_and_untitled_0_0_GRAY[7*q + 6])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5])));
                         const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_32);
                         const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_34);
                         const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_35);
                         const __m256d q_tmp_0_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_2),tmp_qloop_31);
                         const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_33);
                         const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_34);
                         const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_35);
                         const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_36);
                         const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_37);
                         const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_32,tmp_qloop_32));
                         const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_34,tmp_qloop_38);
                         const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_35,tmp_qloop_38);
                         const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_38);
                         const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_38);
                         const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_34,tmp_qloop_34));
                         const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_35,tmp_qloop_39);
                         const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_39);
                         const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_39);
                         const __m256d q_tmp_3_3 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_35,tmp_qloop_35));
                         const __m256d q_tmp_3_4 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_40);
                         const __m256d q_tmp_3_5 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_40);
                         const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_36,tmp_qloop_36));
                         const __m256d q_tmp_4_5 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_31,tmp_qloop_36),tmp_qloop_37);
                         const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_37,tmp_qloop_37));
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
                }
                const __m256d tmp_moved_constant_0 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_1 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_2 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_3 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_4 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_5 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d tmp_moved_constant_6 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_7 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_8 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_9 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_10 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_11 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d tmp_moved_constant_12 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_13 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_14 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_15 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_16 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_17 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
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
                  
                      const __m256d p_affine_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_2_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_2_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
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
                      const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_9 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      const __m256d tmp_qloop_10 = _mm256_add_pd(_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_8))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_8)))),_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_9))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_9)))));
                      const __m256d tmp_qloop_11 = _mm256_mul_pd(_mm256_sqrt_pd(tmp_qloop_10),tmp_qloop_10);
                      const __m256d tmp_qloop_12 = _mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                      const __m256d tmp_qloop_13 = _mm256_add_pd(p_affine_0_0,tmp_qloop_12);
                      const __m256d tmp_qloop_14 = _mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                      const __m256d tmp_qloop_15 = _mm256_add_pd(p_affine_0_1,tmp_qloop_14);
                      const __m256d tmp_qloop_16 = _mm256_add_pd(_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_13))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_13)))),_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_15))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(tmp_qloop_15)))));
                      const __m256d tmp_qloop_17 = _mm256_mul_pd(_mm256_sqrt_pd(tmp_qloop_16),tmp_qloop_16);
                      const __m256d tmp_qloop_18 = _mm256_add_pd(_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(p_affine_1_0,tmp_qloop_12)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(p_affine_1_0,tmp_qloop_12))))),_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(p_affine_1_1,tmp_qloop_14)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(p_affine_1_1,tmp_qloop_14))))));
                      const __m256d tmp_qloop_19 = _mm256_mul_pd(_mm256_sqrt_pd(tmp_qloop_18),tmp_qloop_18);
                      const __m256d tmp_qloop_20 = _mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_13,tmp_qloop_9),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_15,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))))));
                      const __m256d tmp_qloop_21 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20));
                      const __m256d tmp_qloop_24 = _mm256_sqrt_pd(tmp_qloop_10);
                      const __m256d tmp_qloop_25 = _mm256_sqrt_pd(tmp_qloop_16);
                      const __m256d tmp_qloop_26 = _mm256_sqrt_pd(tmp_qloop_18);
                      const __m256d tmp_qloop_27 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20);
                      const __m256d tmp_qloop_28 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_25),tmp_qloop_26),tmp_qloop_27);
                      for (int64_t q = 0; q < 4; q += 1)
                      {
                         const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_6,_mm256_set_pd(_data_phi_0_0_BLUE[6*q],_data_phi_0_0_BLUE[6*q],_data_phi_0_0_BLUE[6*q],_data_phi_0_0_BLUE[6*q])),_mm256_mul_pd(tmp_moved_constant_7,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 1],_data_phi_0_0_BLUE[6*q + 1],_data_phi_0_0_BLUE[6*q + 1],_data_phi_0_0_BLUE[6*q + 1]))),_mm256_mul_pd(tmp_moved_constant_8,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 2],_data_phi_0_0_BLUE[6*q + 2],_data_phi_0_0_BLUE[6*q + 2],_data_phi_0_0_BLUE[6*q + 2]))),_mm256_mul_pd(tmp_moved_constant_9,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 3],_data_phi_0_0_BLUE[6*q + 3],_data_phi_0_0_BLUE[6*q + 3],_data_phi_0_0_BLUE[6*q + 3]))),_mm256_mul_pd(tmp_moved_constant_10,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 4],_data_phi_0_0_BLUE[6*q + 4],_data_phi_0_0_BLUE[6*q + 4],_data_phi_0_0_BLUE[6*q + 4]))),_mm256_mul_pd(tmp_moved_constant_11,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 5],_data_phi_0_0_BLUE[6*q + 5],_data_phi_0_0_BLUE[6*q + 5],_data_phi_0_0_BLUE[6*q + 5])));
                         const __m256d tmp_qloop_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_12,_mm256_set_pd(_data_phi_0_0_BLUE[6*q],_data_phi_0_0_BLUE[6*q],_data_phi_0_0_BLUE[6*q],_data_phi_0_0_BLUE[6*q])),_mm256_mul_pd(tmp_moved_constant_13,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 1],_data_phi_0_0_BLUE[6*q + 1],_data_phi_0_0_BLUE[6*q + 1],_data_phi_0_0_BLUE[6*q + 1]))),_mm256_mul_pd(tmp_moved_constant_14,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 2],_data_phi_0_0_BLUE[6*q + 2],_data_phi_0_0_BLUE[6*q + 2],_data_phi_0_0_BLUE[6*q + 2]))),_mm256_mul_pd(tmp_moved_constant_15,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 3],_data_phi_0_0_BLUE[6*q + 3],_data_phi_0_0_BLUE[6*q + 3],_data_phi_0_0_BLUE[6*q + 3]))),_mm256_mul_pd(tmp_moved_constant_16,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 4],_data_phi_0_0_BLUE[6*q + 4],_data_phi_0_0_BLUE[6*q + 4],_data_phi_0_0_BLUE[6*q + 4]))),_mm256_mul_pd(tmp_moved_constant_17,_mm256_set_pd(_data_phi_0_0_BLUE[6*q + 5],_data_phi_0_0_BLUE[6*q + 5],_data_phi_0_0_BLUE[6*q + 5],_data_phi_0_0_BLUE[6*q + 5])));
                         const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q],_data_tabulated_and_untitled_0_0_BLUE[7*q],_data_tabulated_and_untitled_0_0_BLUE[7*q],_data_tabulated_and_untitled_0_0_BLUE[7*q])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q])));
                         const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,tmp_qloop_0),_mm256_mul_pd(tmp_qloop_1,tmp_qloop_1));
                         const __m256d tmp_qloop_4 = _mm256_sqrt_pd(tmp_qloop_3);
                         const __m256d tmp_qloop_5 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_4);
                         const __m256d tmp_qloop_7 = _mm256_mul_pd(_mm256_sqrt_pd(tmp_qloop_3),tmp_qloop_3);
                         const __m256d tmp_qloop_22 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,tmp_qloop_17),tmp_qloop_19),tmp_qloop_21),tmp_qloop_7),_mm256_set_pd(tmp_qloop_6,tmp_qloop_6,tmp_qloop_6,tmp_qloop_6));
                         const __m256d tmp_qloop_29 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_4),_mm256_set_pd(tmp_qloop_23,tmp_qloop_23,tmp_qloop_23,tmp_qloop_23));
                         const __m256d tmp_qloop_30 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_16),tmp_qloop_18),_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_20))),tmp_qloop_3),_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(thermalConductivity,thermalConductivity,thermalConductivity,thermalConductivity)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(thermalConductivity,thermalConductivity,thermalConductivity,thermalConductivity))));
                         const __m256d tmp_qloop_31 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_5),_mm256_set_pd(0.50000000000000000,0.50000000000000000,0.50000000000000000,0.50000000000000000)),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 1],_data_tabulated_and_untitled_0_0_BLUE[7*q + 1],_data_tabulated_and_untitled_0_0_BLUE[7*q + 1],_data_tabulated_and_untitled_0_0_BLUE[7*q + 1])),_mm256_blendv_pd(_mm256_blendv_pd(_mm256_blendv_pd(_mm256_blendv_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_20,_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_24)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_25)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_26)),tmp_qloop_5),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(thermalConductivity,thermalConductivity,thermalConductivity,thermalConductivity)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_29,_mm256_set_pd(0.16399221771597999,0.16399221771597999,0.16399221771597999,0.16399221771597999)),_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(0.0003890697253152925,0.0003890697253152925,0.0003890697253152925,0.0003890697253152925))),_mm256_mul_pd(tmp_qloop_30,_mm256_set_pd(-0.01300962248982295,-0.01300962248982295,-0.01300962248982295,-0.01300962248982295))),_mm256_set_pd(0.072194442299590406,0.072194442299590406,0.072194442299590406,0.072194442299590406)),_mm256_cmp_pd(tmp_qloop_29,_mm256_set_pd(9.7000000058627194,9.7000000058627194,9.7000000058627194,9.7000000058627194),_CMP_LE_OQ)),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_30,_mm256_set_pd(-0.020516694887729999,-0.020516694887729999,-0.020516694887729999,-0.020516694887729999)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,tmp_qloop_17),tmp_qloop_19),tmp_qloop_21),tmp_qloop_7),_mm256_set_pd(0.00076015027042957372,0.00076015027042957372,0.00076015027042957372,0.00076015027042957372)),_mm256_set_pd(tmp_qloop_6,tmp_qloop_6,tmp_qloop_6,tmp_qloop_6))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_25),tmp_qloop_26),tmp_qloop_27),tmp_qloop_4),_mm256_set_pd(0.2146156710600175,0.2146156710600175,0.2146156710600175,0.2146156710600175)),_mm256_set_pd(tmp_qloop_23,tmp_qloop_23,tmp_qloop_23,tmp_qloop_23))),_mm256_set_pd(-0.041597543561209399,-0.041597543561209399,-0.041597543561209399,-0.041597543561209399)),_mm256_cmp_pd(tmp_qloop_29,_mm256_set_pd(6.7434348119715999,6.7434348119715999,6.7434348119715999,6.7434348119715999),_CMP_LE_OQ)),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(-0.00051942446859271248,-0.00051942446859271248,-0.00051942446859271248,-0.00051942446859271248)),_mm256_mul_pd(tmp_qloop_30,_mm256_set_pd(-0.0089393368193446242,-0.0089393368193446242,-0.0089393368193446242,-0.0089393368193446242))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_24,tmp_qloop_25),tmp_qloop_26),tmp_qloop_27),tmp_qloop_4),_mm256_set_pd(0.17969906536907199,0.17969906536907199,0.17969906536907199,0.17969906536907199)),_mm256_set_pd(tmp_qloop_23,tmp_qloop_23,tmp_qloop_23,tmp_qloop_23))),_mm256_set_pd(-0.0064954259688208404,-0.0064954259688208404,-0.0064954259688208404,-0.0064954259688208404)),_mm256_cmp_pd(tmp_qloop_29,_mm256_set_pd(3.0159389978870399,3.0159389978870399,3.0159389978870399,3.0159389978870399),_CMP_LE_OQ)),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,_mm256_set_pd(-0.0027777777777777778,-0.0027777777777777778,-0.0027777777777777778,-0.0027777777777777778)),_mm256_mul_pd(tmp_qloop_29,_mm256_set_pd(0.16666666666666667,0.16666666666666667,0.16666666666666667,0.16666666666666667))),_mm256_cmp_pd(tmp_qloop_29,_mm256_set_pd(1.1799999561582399,1.1799999561582399,1.1799999561582399,1.1799999561582399),_CMP_LE_OQ)));
                         const __m256d tmp_qloop_32 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 2],_data_tabulated_and_untitled_0_0_BLUE[7*q + 2],_data_tabulated_and_untitled_0_0_BLUE[7*q + 2],_data_tabulated_and_untitled_0_0_BLUE[7*q + 2])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1])));
                         const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_31);
                         const __m256d tmp_qloop_34 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 3],_data_tabulated_and_untitled_0_0_BLUE[7*q + 3],_data_tabulated_and_untitled_0_0_BLUE[7*q + 3],_data_tabulated_and_untitled_0_0_BLUE[7*q + 3])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2])));
                         const __m256d tmp_qloop_35 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 4],_data_tabulated_and_untitled_0_0_BLUE[7*q + 4],_data_tabulated_and_untitled_0_0_BLUE[7*q + 4],_data_tabulated_and_untitled_0_0_BLUE[7*q + 4])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3])));
                         const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 5],_data_tabulated_and_untitled_0_0_BLUE[7*q + 5],_data_tabulated_and_untitled_0_0_BLUE[7*q + 5],_data_tabulated_and_untitled_0_0_BLUE[7*q + 5])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4])));
                         const __m256d tmp_qloop_37 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[7*q + 6],_data_tabulated_and_untitled_0_0_BLUE[7*q + 6],_data_tabulated_and_untitled_0_0_BLUE[7*q + 6],_data_tabulated_and_untitled_0_0_BLUE[7*q + 6])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5])));
                         const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_32);
                         const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_34);
                         const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_31,tmp_qloop_35);
                         const __m256d q_tmp_0_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_2),tmp_qloop_31);
                         const __m256d q_tmp_0_1 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_33);
                         const __m256d q_tmp_0_2 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_34);
                         const __m256d q_tmp_0_3 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_35);
                         const __m256d q_tmp_0_4 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_36);
                         const __m256d q_tmp_0_5 = _mm256_mul_pd(tmp_qloop_33,tmp_qloop_37);
                         const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_32,tmp_qloop_32));
                         const __m256d q_tmp_1_2 = _mm256_mul_pd(tmp_qloop_34,tmp_qloop_38);
                         const __m256d q_tmp_1_3 = _mm256_mul_pd(tmp_qloop_35,tmp_qloop_38);
                         const __m256d q_tmp_1_4 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_38);
                         const __m256d q_tmp_1_5 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_38);
                         const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_34,tmp_qloop_34));
                         const __m256d q_tmp_2_3 = _mm256_mul_pd(tmp_qloop_35,tmp_qloop_39);
                         const __m256d q_tmp_2_4 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_39);
                         const __m256d q_tmp_2_5 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_39);
                         const __m256d q_tmp_3_3 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_35,tmp_qloop_35));
                         const __m256d q_tmp_3_4 = _mm256_mul_pd(tmp_qloop_36,tmp_qloop_40);
                         const __m256d q_tmp_3_5 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_40);
                         const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_36,tmp_qloop_36));
                         const __m256d q_tmp_4_5 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_31,tmp_qloop_36),tmp_qloop_37);
                         const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_31,_mm256_mul_pd(tmp_qloop_37,tmp_qloop_37));
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
                      const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,tmp_moved_constant_0),_mm256_mul_pd(q_acc_0_1,tmp_moved_constant_1)),_mm256_mul_pd(q_acc_0_2,tmp_moved_constant_2)),_mm256_mul_pd(q_acc_0_3,tmp_moved_constant_3)),_mm256_mul_pd(q_acc_0_4,tmp_moved_constant_4)),_mm256_mul_pd(q_acc_0_5,tmp_moved_constant_5));
                      const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_1,tmp_moved_constant_0),_mm256_mul_pd(q_acc_1_1,tmp_moved_constant_1)),_mm256_mul_pd(q_acc_1_2,tmp_moved_constant_2)),_mm256_mul_pd(q_acc_1_3,tmp_moved_constant_3)),_mm256_mul_pd(q_acc_1_4,tmp_moved_constant_4)),_mm256_mul_pd(q_acc_1_5,tmp_moved_constant_5));
                      const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_2,tmp_moved_constant_0),_mm256_mul_pd(q_acc_1_2,tmp_moved_constant_1)),_mm256_mul_pd(q_acc_2_2,tmp_moved_constant_2)),_mm256_mul_pd(q_acc_2_3,tmp_moved_constant_3)),_mm256_mul_pd(q_acc_2_4,tmp_moved_constant_4)),_mm256_mul_pd(q_acc_2_5,tmp_moved_constant_5));
                      const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_3,tmp_moved_constant_0),_mm256_mul_pd(q_acc_1_3,tmp_moved_constant_1)),_mm256_mul_pd(q_acc_2_3,tmp_moved_constant_2)),_mm256_mul_pd(q_acc_3_3,tmp_moved_constant_3)),_mm256_mul_pd(q_acc_3_4,tmp_moved_constant_4)),_mm256_mul_pd(q_acc_3_5,tmp_moved_constant_5));
                      const __m256d elMatVec_4 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_4,tmp_moved_constant_0),_mm256_mul_pd(q_acc_1_4,tmp_moved_constant_1)),_mm256_mul_pd(q_acc_2_4,tmp_moved_constant_2)),_mm256_mul_pd(q_acc_3_4,tmp_moved_constant_3)),_mm256_mul_pd(q_acc_4_4,tmp_moved_constant_4)),_mm256_mul_pd(q_acc_4_5,tmp_moved_constant_5));
                      const __m256d elMatVec_5 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_5,tmp_moved_constant_0),_mm256_mul_pd(q_acc_1_5,tmp_moved_constant_1)),_mm256_mul_pd(q_acc_2_5,tmp_moved_constant_2)),_mm256_mul_pd(q_acc_3_5,tmp_moved_constant_3)),_mm256_mul_pd(q_acc_4_5,tmp_moved_constant_4)),_mm256_mul_pd(q_acc_5_5,tmp_moved_constant_5));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_0,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_1,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_2,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_3,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatVec_4,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatVec_5,_mm256_set_pd(operatorScaling,operatorScaling,operatorScaling,operatorScaling)),_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
                      const real_t tmp_qloop_8 = p_affine_0_0 - p_affine_1_0;
                      const real_t tmp_qloop_9 = p_affine_0_1 - p_affine_1_1;
                      const real_t tmp_qloop_10 = (abs(tmp_qloop_8)*abs(tmp_qloop_8)) + (abs(tmp_qloop_9)*abs(tmp_qloop_9));
                      const real_t tmp_qloop_11 = pow(tmp_qloop_10, 1.5000000000000000);
                      const real_t tmp_qloop_12 = -p_affine_2_0;
                      const real_t tmp_qloop_13 = p_affine_0_0 + tmp_qloop_12;
                      const real_t tmp_qloop_14 = -p_affine_2_1;
                      const real_t tmp_qloop_15 = p_affine_0_1 + tmp_qloop_14;
                      const real_t tmp_qloop_16 = (abs(tmp_qloop_13)*abs(tmp_qloop_13)) + (abs(tmp_qloop_15)*abs(tmp_qloop_15));
                      const real_t tmp_qloop_17 = pow(tmp_qloop_16, 1.5000000000000000);
                      const real_t tmp_qloop_18 = (abs(p_affine_1_0 + tmp_qloop_12)*abs(p_affine_1_0 + tmp_qloop_12)) + (abs(p_affine_1_1 + tmp_qloop_14)*abs(p_affine_1_1 + tmp_qloop_14));
                      const real_t tmp_qloop_19 = pow(tmp_qloop_18, 1.5000000000000000);
                      const real_t tmp_qloop_20 = abs(tmp_qloop_13*tmp_qloop_9 - tmp_qloop_15*tmp_qloop_8);
                      const real_t tmp_qloop_21 = 1.0 / (tmp_qloop_20*tmp_qloop_20*tmp_qloop_20);
                      const real_t tmp_qloop_24 = pow(tmp_qloop_10, 0.50000000000000000);
                      const real_t tmp_qloop_25 = pow(tmp_qloop_16, 0.50000000000000000);
                      const real_t tmp_qloop_26 = pow(tmp_qloop_18, 0.50000000000000000);
                      const real_t tmp_qloop_27 = 1.0 / (tmp_qloop_20);
                      const real_t tmp_qloop_28 = tmp_qloop_24*tmp_qloop_25*tmp_qloop_26*tmp_qloop_27;
                      for (int64_t q = 0; q < 4; q += 1)
                      {
                         const real_t tmp_qloop_0 = ux_dof_0*_data_phi_0_0_GRAY[6*q] + ux_dof_1*_data_phi_0_0_GRAY[6*q + 1] + ux_dof_2*_data_phi_0_0_GRAY[6*q + 2] + ux_dof_3*_data_phi_0_0_GRAY[6*q + 3] + ux_dof_4*_data_phi_0_0_GRAY[6*q + 4] + ux_dof_5*_data_phi_0_0_GRAY[6*q + 5];
                         const real_t tmp_qloop_1 = uy_dof_0*_data_phi_0_0_GRAY[6*q] + uy_dof_1*_data_phi_0_0_GRAY[6*q + 1] + uy_dof_2*_data_phi_0_0_GRAY[6*q + 2] + uy_dof_3*_data_phi_0_0_GRAY[6*q + 3] + uy_dof_4*_data_phi_0_0_GRAY[6*q + 4] + uy_dof_5*_data_phi_0_0_GRAY[6*q + 5];
                         const real_t tmp_qloop_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q];
                         const real_t tmp_qloop_3 = (tmp_qloop_0*tmp_qloop_0) + (tmp_qloop_1*tmp_qloop_1);
                         const real_t tmp_qloop_4 = pow(tmp_qloop_3, 0.50000000000000000);
                         const real_t tmp_qloop_5 = 1.0 / (tmp_qloop_4);
                         const real_t tmp_qloop_7 = pow(tmp_qloop_3, 1.5000000000000000);
                         const real_t tmp_qloop_22 = tmp_qloop_11*tmp_qloop_17*tmp_qloop_19*tmp_qloop_21*tmp_qloop_6*tmp_qloop_7;
                         const real_t tmp_qloop_29 = tmp_qloop_23*tmp_qloop_28*tmp_qloop_4;
                         const real_t tmp_qloop_30 = 1.0 / (thermalConductivity*thermalConductivity)*tmp_qloop_10*tmp_qloop_16*tmp_qloop_18*1.0 / (tmp_qloop_20*tmp_qloop_20)*tmp_qloop_3;
                         const real_t tmp_qloop_31 = tmp_qloop_28*tmp_qloop_5*0.50000000000000000*((tmp_qloop_29 <= 1.1799999561582399) ? (tmp_qloop_22*-0.0027777777777777778 + tmp_qloop_29*0.16666666666666667): ((tmp_qloop_29 <= 3.0159389978870399) ? (tmp_qloop_22*-0.00051942446859271248 + tmp_qloop_23*tmp_qloop_24*tmp_qloop_25*tmp_qloop_26*tmp_qloop_27*tmp_qloop_4*0.17969906536907199 + tmp_qloop_30*-0.0089393368193446242 - 0.0064954259688208404): ((tmp_qloop_29 <= 6.7434348119715999) ? (tmp_qloop_11*tmp_qloop_17*tmp_qloop_19*tmp_qloop_21*tmp_qloop_6*tmp_qloop_7*0.00076015027042957372 + tmp_qloop_23*tmp_qloop_24*tmp_qloop_25*tmp_qloop_26*tmp_qloop_27*tmp_qloop_4*0.2146156710600175 + tmp_qloop_30*-0.020516694887729999 - 0.041597543561209399): ((tmp_qloop_29 <= 9.7000000058627194) ? (tmp_qloop_22*0.0003890697253152925 + tmp_qloop_29*0.16399221771597999 + tmp_qloop_30*-0.01300962248982295 + 0.072194442299590406): (thermalConductivity*tmp_qloop_20*1.0 / (tmp_qloop_24)*1.0 / (tmp_qloop_25)*1.0 / (tmp_qloop_26)*tmp_qloop_5*-2.0 + 1.0)))))*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                         const real_t tmp_qloop_32 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                         const real_t tmp_qloop_33 = tmp_qloop_2*tmp_qloop_31;
                         const real_t tmp_qloop_34 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2];
                         const real_t tmp_qloop_35 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3];
                         const real_t tmp_qloop_36 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4];
                         const real_t tmp_qloop_37 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5];
                         const real_t tmp_qloop_38 = tmp_qloop_31*tmp_qloop_32;
                         const real_t tmp_qloop_39 = tmp_qloop_31*tmp_qloop_34;
                         const real_t tmp_qloop_40 = tmp_qloop_31*tmp_qloop_35;
                         const real_t q_tmp_0_0 = (tmp_qloop_2*tmp_qloop_2)*tmp_qloop_31;
                         const real_t q_tmp_0_1 = tmp_qloop_32*tmp_qloop_33;
                         const real_t q_tmp_0_2 = tmp_qloop_33*tmp_qloop_34;
                         const real_t q_tmp_0_3 = tmp_qloop_33*tmp_qloop_35;
                         const real_t q_tmp_0_4 = tmp_qloop_33*tmp_qloop_36;
                         const real_t q_tmp_0_5 = tmp_qloop_33*tmp_qloop_37;
                         const real_t q_tmp_1_1 = tmp_qloop_31*(tmp_qloop_32*tmp_qloop_32);
                         const real_t q_tmp_1_2 = tmp_qloop_34*tmp_qloop_38;
                         const real_t q_tmp_1_3 = tmp_qloop_35*tmp_qloop_38;
                         const real_t q_tmp_1_4 = tmp_qloop_36*tmp_qloop_38;
                         const real_t q_tmp_1_5 = tmp_qloop_37*tmp_qloop_38;
                         const real_t q_tmp_2_2 = tmp_qloop_31*(tmp_qloop_34*tmp_qloop_34);
                         const real_t q_tmp_2_3 = tmp_qloop_35*tmp_qloop_39;
                         const real_t q_tmp_2_4 = tmp_qloop_36*tmp_qloop_39;
                         const real_t q_tmp_2_5 = tmp_qloop_37*tmp_qloop_39;
                         const real_t q_tmp_3_3 = tmp_qloop_31*(tmp_qloop_35*tmp_qloop_35);
                         const real_t q_tmp_3_4 = tmp_qloop_36*tmp_qloop_40;
                         const real_t q_tmp_3_5 = tmp_qloop_37*tmp_qloop_40;
                         const real_t q_tmp_4_4 = tmp_qloop_31*(tmp_qloop_36*tmp_qloop_36);
                         const real_t q_tmp_4_5 = tmp_qloop_31*tmp_qloop_36*tmp_qloop_37;
                         const real_t q_tmp_5_5 = tmp_qloop_31*(tmp_qloop_37*tmp_qloop_37);
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
                const real_t tmp_moved_constant_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_1 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t tmp_moved_constant_3 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
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
                      const real_t tmp_qloop_8 = p_affine_0_0 - p_affine_1_0;
                      const real_t tmp_qloop_9 = p_affine_0_1 - p_affine_1_1;
                      const real_t tmp_qloop_10 = (abs(tmp_qloop_8)*abs(tmp_qloop_8)) + (abs(tmp_qloop_9)*abs(tmp_qloop_9));
                      const real_t tmp_qloop_11 = pow(tmp_qloop_10, 1.5000000000000000);
                      const real_t tmp_qloop_12 = -p_affine_2_0;
                      const real_t tmp_qloop_13 = p_affine_0_0 + tmp_qloop_12;
                      const real_t tmp_qloop_14 = -p_affine_2_1;
                      const real_t tmp_qloop_15 = p_affine_0_1 + tmp_qloop_14;
                      const real_t tmp_qloop_16 = (abs(tmp_qloop_13)*abs(tmp_qloop_13)) + (abs(tmp_qloop_15)*abs(tmp_qloop_15));
                      const real_t tmp_qloop_17 = pow(tmp_qloop_16, 1.5000000000000000);
                      const real_t tmp_qloop_18 = (abs(p_affine_1_0 + tmp_qloop_12)*abs(p_affine_1_0 + tmp_qloop_12)) + (abs(p_affine_1_1 + tmp_qloop_14)*abs(p_affine_1_1 + tmp_qloop_14));
                      const real_t tmp_qloop_19 = pow(tmp_qloop_18, 1.5000000000000000);
                      const real_t tmp_qloop_20 = abs(tmp_qloop_13*tmp_qloop_9 - tmp_qloop_15*tmp_qloop_8);
                      const real_t tmp_qloop_21 = 1.0 / (tmp_qloop_20*tmp_qloop_20*tmp_qloop_20);
                      const real_t tmp_qloop_24 = pow(tmp_qloop_10, 0.50000000000000000);
                      const real_t tmp_qloop_25 = pow(tmp_qloop_16, 0.50000000000000000);
                      const real_t tmp_qloop_26 = pow(tmp_qloop_18, 0.50000000000000000);
                      const real_t tmp_qloop_27 = 1.0 / (tmp_qloop_20);
                      const real_t tmp_qloop_28 = tmp_qloop_24*tmp_qloop_25*tmp_qloop_26*tmp_qloop_27;
                      for (int64_t q = 0; q < 4; q += 1)
                      {
                         const real_t tmp_qloop_0 = tmp_moved_constant_10*_data_phi_0_0_BLUE[6*q + 4] + tmp_moved_constant_11*_data_phi_0_0_BLUE[6*q + 5] + tmp_moved_constant_6*_data_phi_0_0_BLUE[6*q] + tmp_moved_constant_7*_data_phi_0_0_BLUE[6*q + 1] + tmp_moved_constant_8*_data_phi_0_0_BLUE[6*q + 2] + tmp_moved_constant_9*_data_phi_0_0_BLUE[6*q + 3];
                         const real_t tmp_qloop_1 = tmp_moved_constant_12*_data_phi_0_0_BLUE[6*q] + tmp_moved_constant_13*_data_phi_0_0_BLUE[6*q + 1] + tmp_moved_constant_14*_data_phi_0_0_BLUE[6*q + 2] + tmp_moved_constant_15*_data_phi_0_0_BLUE[6*q + 3] + tmp_moved_constant_16*_data_phi_0_0_BLUE[6*q + 4] + tmp_moved_constant_17*_data_phi_0_0_BLUE[6*q + 5];
                         const real_t tmp_qloop_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q];
                         const real_t tmp_qloop_3 = (tmp_qloop_0*tmp_qloop_0) + (tmp_qloop_1*tmp_qloop_1);
                         const real_t tmp_qloop_4 = pow(tmp_qloop_3, 0.50000000000000000);
                         const real_t tmp_qloop_5 = 1.0 / (tmp_qloop_4);
                         const real_t tmp_qloop_7 = pow(tmp_qloop_3, 1.5000000000000000);
                         const real_t tmp_qloop_22 = tmp_qloop_11*tmp_qloop_17*tmp_qloop_19*tmp_qloop_21*tmp_qloop_6*tmp_qloop_7;
                         const real_t tmp_qloop_29 = tmp_qloop_23*tmp_qloop_28*tmp_qloop_4;
                         const real_t tmp_qloop_30 = 1.0 / (thermalConductivity*thermalConductivity)*tmp_qloop_10*tmp_qloop_16*tmp_qloop_18*1.0 / (tmp_qloop_20*tmp_qloop_20)*tmp_qloop_3;
                         const real_t tmp_qloop_31 = tmp_qloop_28*tmp_qloop_5*0.50000000000000000*((tmp_qloop_29 <= 1.1799999561582399) ? (tmp_qloop_22*-0.0027777777777777778 + tmp_qloop_29*0.16666666666666667): ((tmp_qloop_29 <= 3.0159389978870399) ? (tmp_qloop_22*-0.00051942446859271248 + tmp_qloop_23*tmp_qloop_24*tmp_qloop_25*tmp_qloop_26*tmp_qloop_27*tmp_qloop_4*0.17969906536907199 + tmp_qloop_30*-0.0089393368193446242 - 0.0064954259688208404): ((tmp_qloop_29 <= 6.7434348119715999) ? (tmp_qloop_11*tmp_qloop_17*tmp_qloop_19*tmp_qloop_21*tmp_qloop_6*tmp_qloop_7*0.00076015027042957372 + tmp_qloop_23*tmp_qloop_24*tmp_qloop_25*tmp_qloop_26*tmp_qloop_27*tmp_qloop_4*0.2146156710600175 + tmp_qloop_30*-0.020516694887729999 - 0.041597543561209399): ((tmp_qloop_29 <= 9.7000000058627194) ? (tmp_qloop_22*0.0003890697253152925 + tmp_qloop_29*0.16399221771597999 + tmp_qloop_30*-0.01300962248982295 + 0.072194442299590406): (thermalConductivity*tmp_qloop_20*1.0 / (tmp_qloop_24)*1.0 / (tmp_qloop_25)*1.0 / (tmp_qloop_26)*tmp_qloop_5*-2.0 + 1.0)))))*_data_q_w[q]*_data_tabulated_and_untitled_0_0_BLUE[7*q + 1];
                         const real_t tmp_qloop_32 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1];
                         const real_t tmp_qloop_33 = tmp_qloop_2*tmp_qloop_31;
                         const real_t tmp_qloop_34 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2];
                         const real_t tmp_qloop_35 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3];
                         const real_t tmp_qloop_36 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4];
                         const real_t tmp_qloop_37 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5];
                         const real_t tmp_qloop_38 = tmp_qloop_31*tmp_qloop_32;
                         const real_t tmp_qloop_39 = tmp_qloop_31*tmp_qloop_34;
                         const real_t tmp_qloop_40 = tmp_qloop_31*tmp_qloop_35;
                         const real_t q_tmp_0_0 = (tmp_qloop_2*tmp_qloop_2)*tmp_qloop_31;
                         const real_t q_tmp_0_1 = tmp_qloop_32*tmp_qloop_33;
                         const real_t q_tmp_0_2 = tmp_qloop_33*tmp_qloop_34;
                         const real_t q_tmp_0_3 = tmp_qloop_33*tmp_qloop_35;
                         const real_t q_tmp_0_4 = tmp_qloop_33*tmp_qloop_36;
                         const real_t q_tmp_0_5 = tmp_qloop_33*tmp_qloop_37;
                         const real_t q_tmp_1_1 = tmp_qloop_31*(tmp_qloop_32*tmp_qloop_32);
                         const real_t q_tmp_1_2 = tmp_qloop_34*tmp_qloop_38;
                         const real_t q_tmp_1_3 = tmp_qloop_35*tmp_qloop_38;
                         const real_t q_tmp_1_4 = tmp_qloop_36*tmp_qloop_38;
                         const real_t q_tmp_1_5 = tmp_qloop_37*tmp_qloop_38;
                         const real_t q_tmp_2_2 = tmp_qloop_31*(tmp_qloop_34*tmp_qloop_34);
                         const real_t q_tmp_2_3 = tmp_qloop_35*tmp_qloop_39;
                         const real_t q_tmp_2_4 = tmp_qloop_36*tmp_qloop_39;
                         const real_t q_tmp_2_5 = tmp_qloop_37*tmp_qloop_39;
                         const real_t q_tmp_3_3 = tmp_qloop_31*(tmp_qloop_35*tmp_qloop_35);
                         const real_t q_tmp_3_4 = tmp_qloop_36*tmp_qloop_40;
                         const real_t q_tmp_3_5 = tmp_qloop_37*tmp_qloop_40;
                         const real_t q_tmp_4_4 = tmp_qloop_31*(tmp_qloop_36*tmp_qloop_36);
                         const real_t q_tmp_4_5 = tmp_qloop_31*tmp_qloop_36*tmp_qloop_37;
                         const real_t q_tmp_5_5 = tmp_qloop_31*(tmp_qloop_37*tmp_qloop_37);
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
                      const real_t elMatVec_0 = q_acc_0_0*tmp_moved_constant_0 + q_acc_0_1*tmp_moved_constant_1 + q_acc_0_2*tmp_moved_constant_2 + q_acc_0_3*tmp_moved_constant_3 + q_acc_0_4*tmp_moved_constant_4 + q_acc_0_5*tmp_moved_constant_5;
                      const real_t elMatVec_1 = q_acc_0_1*tmp_moved_constant_0 + q_acc_1_1*tmp_moved_constant_1 + q_acc_1_2*tmp_moved_constant_2 + q_acc_1_3*tmp_moved_constant_3 + q_acc_1_4*tmp_moved_constant_4 + q_acc_1_5*tmp_moved_constant_5;
                      const real_t elMatVec_2 = q_acc_0_2*tmp_moved_constant_0 + q_acc_1_2*tmp_moved_constant_1 + q_acc_2_2*tmp_moved_constant_2 + q_acc_2_3*tmp_moved_constant_3 + q_acc_2_4*tmp_moved_constant_4 + q_acc_2_5*tmp_moved_constant_5;
                      const real_t elMatVec_3 = q_acc_0_3*tmp_moved_constant_0 + q_acc_1_3*tmp_moved_constant_1 + q_acc_2_3*tmp_moved_constant_2 + q_acc_3_3*tmp_moved_constant_3 + q_acc_3_4*tmp_moved_constant_4 + q_acc_3_5*tmp_moved_constant_5;
                      const real_t elMatVec_4 = q_acc_0_4*tmp_moved_constant_0 + q_acc_1_4*tmp_moved_constant_1 + q_acc_2_4*tmp_moved_constant_2 + q_acc_3_4*tmp_moved_constant_3 + q_acc_4_4*tmp_moved_constant_4 + q_acc_4_5*tmp_moved_constant_5;
                      const real_t elMatVec_5 = q_acc_0_5*tmp_moved_constant_0 + q_acc_1_5*tmp_moved_constant_1 + q_acc_2_5*tmp_moved_constant_2 + q_acc_3_5*tmp_moved_constant_3 + q_acc_4_5*tmp_moved_constant_4 + q_acc_5_5*tmp_moved_constant_5;
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
          {
             for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
                      const real_t tmp_qloop_8 = p_affine_0_0 - p_affine_1_0;
                      const real_t tmp_qloop_9 = p_affine_0_1 - p_affine_1_1;
                      const real_t tmp_qloop_10 = (abs(tmp_qloop_8)*abs(tmp_qloop_8)) + (abs(tmp_qloop_9)*abs(tmp_qloop_9));
                      const real_t tmp_qloop_11 = pow(tmp_qloop_10, 1.5000000000000000);
                      const real_t tmp_qloop_12 = -p_affine_2_0;
                      const real_t tmp_qloop_13 = p_affine_0_0 + tmp_qloop_12;
                      const real_t tmp_qloop_14 = -p_affine_2_1;
                      const real_t tmp_qloop_15 = p_affine_0_1 + tmp_qloop_14;
                      const real_t tmp_qloop_16 = (abs(tmp_qloop_13)*abs(tmp_qloop_13)) + (abs(tmp_qloop_15)*abs(tmp_qloop_15));
                      const real_t tmp_qloop_17 = pow(tmp_qloop_16, 1.5000000000000000);
                      const real_t tmp_qloop_18 = (abs(p_affine_1_0 + tmp_qloop_12)*abs(p_affine_1_0 + tmp_qloop_12)) + (abs(p_affine_1_1 + tmp_qloop_14)*abs(p_affine_1_1 + tmp_qloop_14));
                      const real_t tmp_qloop_19 = pow(tmp_qloop_18, 1.5000000000000000);
                      const real_t tmp_qloop_20 = abs(tmp_qloop_13*tmp_qloop_9 - tmp_qloop_15*tmp_qloop_8);
                      const real_t tmp_qloop_21 = 1.0 / (tmp_qloop_20*tmp_qloop_20*tmp_qloop_20);
                      const real_t tmp_qloop_24 = pow(tmp_qloop_10, 0.50000000000000000);
                      const real_t tmp_qloop_25 = pow(tmp_qloop_16, 0.50000000000000000);
                      const real_t tmp_qloop_26 = pow(tmp_qloop_18, 0.50000000000000000);
                      const real_t tmp_qloop_27 = 1.0 / (tmp_qloop_20);
                      const real_t tmp_qloop_28 = tmp_qloop_24*tmp_qloop_25*tmp_qloop_26*tmp_qloop_27;
                      for (int64_t q = 0; q < 4; q += 1)
                      {
                         const real_t tmp_qloop_0 = ux_dof_0*_data_phi_0_0_GRAY[6*q] + ux_dof_1*_data_phi_0_0_GRAY[6*q + 1] + ux_dof_2*_data_phi_0_0_GRAY[6*q + 2] + ux_dof_3*_data_phi_0_0_GRAY[6*q + 3] + ux_dof_4*_data_phi_0_0_GRAY[6*q + 4] + ux_dof_5*_data_phi_0_0_GRAY[6*q + 5];
                         const real_t tmp_qloop_1 = uy_dof_0*_data_phi_0_0_GRAY[6*q] + uy_dof_1*_data_phi_0_0_GRAY[6*q + 1] + uy_dof_2*_data_phi_0_0_GRAY[6*q + 2] + uy_dof_3*_data_phi_0_0_GRAY[6*q + 3] + uy_dof_4*_data_phi_0_0_GRAY[6*q + 4] + uy_dof_5*_data_phi_0_0_GRAY[6*q + 5];
                         const real_t tmp_qloop_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q];
                         const real_t tmp_qloop_3 = (tmp_qloop_0*tmp_qloop_0) + (tmp_qloop_1*tmp_qloop_1);
                         const real_t tmp_qloop_4 = pow(tmp_qloop_3, 0.50000000000000000);
                         const real_t tmp_qloop_5 = 1.0 / (tmp_qloop_4);
                         const real_t tmp_qloop_7 = pow(tmp_qloop_3, 1.5000000000000000);
                         const real_t tmp_qloop_22 = tmp_qloop_11*tmp_qloop_17*tmp_qloop_19*tmp_qloop_21*tmp_qloop_6*tmp_qloop_7;
                         const real_t tmp_qloop_29 = tmp_qloop_23*tmp_qloop_28*tmp_qloop_4;
                         const real_t tmp_qloop_30 = 1.0 / (thermalConductivity*thermalConductivity)*tmp_qloop_10*tmp_qloop_16*tmp_qloop_18*1.0 / (tmp_qloop_20*tmp_qloop_20)*tmp_qloop_3;
                         const real_t tmp_qloop_31 = tmp_qloop_28*tmp_qloop_5*0.50000000000000000*((tmp_qloop_29 <= 1.1799999561582399) ? (tmp_qloop_22*-0.0027777777777777778 + tmp_qloop_29*0.16666666666666667): ((tmp_qloop_29 <= 3.0159389978870399) ? (tmp_qloop_22*-0.00051942446859271248 + tmp_qloop_23*tmp_qloop_24*tmp_qloop_25*tmp_qloop_26*tmp_qloop_27*tmp_qloop_4*0.17969906536907199 + tmp_qloop_30*-0.0089393368193446242 - 0.0064954259688208404): ((tmp_qloop_29 <= 6.7434348119715999) ? (tmp_qloop_11*tmp_qloop_17*tmp_qloop_19*tmp_qloop_21*tmp_qloop_6*tmp_qloop_7*0.00076015027042957372 + tmp_qloop_23*tmp_qloop_24*tmp_qloop_25*tmp_qloop_26*tmp_qloop_27*tmp_qloop_4*0.2146156710600175 + tmp_qloop_30*-0.020516694887729999 - 0.041597543561209399): ((tmp_qloop_29 <= 9.7000000058627194) ? (tmp_qloop_22*0.0003890697253152925 + tmp_qloop_29*0.16399221771597999 + tmp_qloop_30*-0.01300962248982295 + 0.072194442299590406): (thermalConductivity*tmp_qloop_20*1.0 / (tmp_qloop_24)*1.0 / (tmp_qloop_25)*1.0 / (tmp_qloop_26)*tmp_qloop_5*-2.0 + 1.0)))))*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                         const real_t tmp_qloop_32 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1];
                         const real_t tmp_qloop_33 = tmp_qloop_2*tmp_qloop_31;
                         const real_t tmp_qloop_34 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2];
                         const real_t tmp_qloop_35 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3];
                         const real_t tmp_qloop_36 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4];
                         const real_t tmp_qloop_37 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5];
                         const real_t tmp_qloop_38 = tmp_qloop_31*tmp_qloop_32;
                         const real_t tmp_qloop_39 = tmp_qloop_31*tmp_qloop_34;
                         const real_t tmp_qloop_40 = tmp_qloop_31*tmp_qloop_35;
                         const real_t q_tmp_0_0 = (tmp_qloop_2*tmp_qloop_2)*tmp_qloop_31;
                         const real_t q_tmp_0_1 = tmp_qloop_32*tmp_qloop_33;
                         const real_t q_tmp_0_2 = tmp_qloop_33*tmp_qloop_34;
                         const real_t q_tmp_0_3 = tmp_qloop_33*tmp_qloop_35;
                         const real_t q_tmp_0_4 = tmp_qloop_33*tmp_qloop_36;
                         const real_t q_tmp_0_5 = tmp_qloop_33*tmp_qloop_37;
                         const real_t q_tmp_1_1 = tmp_qloop_31*(tmp_qloop_32*tmp_qloop_32);
                         const real_t q_tmp_1_2 = tmp_qloop_34*tmp_qloop_38;
                         const real_t q_tmp_1_3 = tmp_qloop_35*tmp_qloop_38;
                         const real_t q_tmp_1_4 = tmp_qloop_36*tmp_qloop_38;
                         const real_t q_tmp_1_5 = tmp_qloop_37*tmp_qloop_38;
                         const real_t q_tmp_2_2 = tmp_qloop_31*(tmp_qloop_34*tmp_qloop_34);
                         const real_t q_tmp_2_3 = tmp_qloop_35*tmp_qloop_39;
                         const real_t q_tmp_2_4 = tmp_qloop_36*tmp_qloop_39;
                         const real_t q_tmp_2_5 = tmp_qloop_37*tmp_qloop_39;
                         const real_t q_tmp_3_3 = tmp_qloop_31*(tmp_qloop_35*tmp_qloop_35);
                         const real_t q_tmp_3_4 = tmp_qloop_36*tmp_qloop_40;
                         const real_t q_tmp_3_5 = tmp_qloop_37*tmp_qloop_40;
                         const real_t q_tmp_4_4 = tmp_qloop_31*(tmp_qloop_36*tmp_qloop_36);
                         const real_t q_tmp_4_5 = tmp_qloop_31*tmp_qloop_36*tmp_qloop_37;
                         const real_t q_tmp_5_5 = tmp_qloop_31*(tmp_qloop_37*tmp_qloop_37);
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
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
