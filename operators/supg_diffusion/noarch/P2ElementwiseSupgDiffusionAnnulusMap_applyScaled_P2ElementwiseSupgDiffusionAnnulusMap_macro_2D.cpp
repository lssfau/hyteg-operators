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

































#include "../P2ElementwiseSupgDiffusionAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseSupgDiffusionAnnulusMap::applyScaled_P2ElementwiseSupgDiffusionAnnulusMap_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_rho, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t * RESTRICT  _data_uxEdge, real_t * RESTRICT  _data_uxVertex, real_t * RESTRICT  _data_uyEdge, real_t * RESTRICT  _data_uyVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thermalConductivity, real_t thrVertex_0, real_t thrVertex_1 ) const
{
    {
       const real_t _data_q_w [] = {-0.28125, 0.26041666666666669, 0.26041666666666669, 0.26041666666666669};
   
       const real_t _data_q_p_0 [] = {0.33333333333333331, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001};
   
       const real_t _data_q_p_1 [] = {0.33333333333333331, 0.59999999999999998, 0.20000000000000001, 0.20000000000000001};
   
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
       const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333348 + jac_affine_inv_1_0_GRAY*-0.33333333333333348)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999973 + jac_affine_inv_1_0_GRAY*0.19999999999999973)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*2.3999999999999999 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.3999999999999999 + jac_affine_inv_1_0_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999996 + jac_affine_inv_1_0_GRAY*0.19999999999999996)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.5999999999999999 + jac_affine_inv_1_0_GRAY*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.4000000000000001 + jac_affine_inv_1_0_GRAY*-1.4000000000000001)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004 + jac_affine_inv_1_0_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*1.5999999999999999 + jac_affine_inv_1_0_GRAY*-0.80000000000000004))};
   
       const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333348 + jac_affine_inv_1_1_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3333333333333333 + jac_affine_inv_1_1_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3333333333333333 + jac_affine_inv_1_1_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_1_GRAY*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999973 + jac_affine_inv_1_1_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*2.3999999999999999 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.3999999999999999 + jac_affine_inv_1_1_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999996 + jac_affine_inv_1_1_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.5999999999999999 + jac_affine_inv_1_1_GRAY*-2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.4000000000000001 + jac_affine_inv_1_1_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004 + jac_affine_inv_1_1_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*1.5999999999999999 + jac_affine_inv_1_1_GRAY*-0.80000000000000004))};
   
       const real_t tmp_qloop_4 = -rayVertex_1 + thrVertex_1;
       const real_t tmp_qloop_13 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_14 = -tmp_qloop_13;
       const real_t tmp_qloop_15 = 1.0 / (-tmp_qloop_14*(-rayVertex_1 + refVertex_1) + tmp_qloop_4*(-rayVertex_0 + refVertex_0));
       const real_t tmp_qloop_16 = -radRayVertex + radRefVertex;
       const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_16;
       const real_t tmp_qloop_18 = tmp_qloop_17*1.0;
       const real_t tmp_qloop_43 = jac_affine_inv_0_0_GRAY*4.0;
       const real_t tmp_qloop_44 = jac_affine_inv_1_0_GRAY*4.0;
       const real_t tmp_qloop_45 = tmp_qloop_43 + tmp_qloop_44;
       const real_t tmp_qloop_46 = jac_affine_inv_0_0_GRAY*tmp_qloop_45 + jac_affine_inv_1_0_GRAY*tmp_qloop_45;
       const real_t tmp_qloop_47 = jac_affine_inv_0_1_GRAY*4.0;
       const real_t tmp_qloop_48 = jac_affine_inv_1_1_GRAY*4.0;
       const real_t tmp_qloop_49 = tmp_qloop_47 + tmp_qloop_48;
       const real_t tmp_qloop_50 = jac_affine_inv_0_0_GRAY*tmp_qloop_49 + jac_affine_inv_1_0_GRAY*tmp_qloop_49;
       const real_t tmp_qloop_51 = jac_affine_inv_0_1_GRAY*tmp_qloop_45 + jac_affine_inv_1_1_GRAY*tmp_qloop_45;
       const real_t tmp_qloop_52 = jac_affine_inv_0_1_GRAY*tmp_qloop_49 + jac_affine_inv_1_1_GRAY*tmp_qloop_49;
       const real_t tmp_qloop_90 = 1.0 / (thermalConductivity*thermalConductivity*thermalConductivity);
       const real_t tmp_qloop_101 = 1.0 / (thermalConductivity);
       const real_t tmp_qloop_111 = jac_affine_inv_0_1_GRAY*tmp_qloop_43;
       const real_t tmp_qloop_112 = (jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY)*4.0;
       const real_t tmp_qloop_113 = (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY)*4.0;
       const real_t tmp_qloop_118 = jac_affine_inv_1_1_GRAY*tmp_qloop_44;
       const real_t tmp_qloop_119 = (jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY)*4.0;
       const real_t tmp_qloop_120 = (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY)*4.0;
       const real_t tmp_qloop_125 = jac_affine_inv_1_0_GRAY*8.0;
       const real_t tmp_qloop_126 = jac_affine_inv_0_0_GRAY*tmp_qloop_125;
       const real_t tmp_qloop_127 = jac_affine_inv_1_1_GRAY*tmp_qloop_43;
       const real_t tmp_qloop_128 = jac_affine_inv_0_1_GRAY*tmp_qloop_44;
       const real_t tmp_qloop_129 = tmp_qloop_127 + tmp_qloop_128;
       const real_t tmp_qloop_130 = jac_affine_inv_1_1_GRAY*8.0;
       const real_t tmp_qloop_131 = jac_affine_inv_0_1_GRAY*tmp_qloop_130;
       const real_t tmp_qloop_139 = jac_affine_inv_1_0_GRAY*tmp_qloop_43;
       const real_t tmp_qloop_140 = -tmp_qloop_125 - tmp_qloop_43;
       const real_t tmp_qloop_141 = jac_affine_inv_1_0_GRAY*tmp_qloop_140 - tmp_qloop_139;
       const real_t tmp_qloop_142 = -tmp_qloop_130 - tmp_qloop_47;
       const real_t tmp_qloop_143 = jac_affine_inv_1_0_GRAY*tmp_qloop_142 - tmp_qloop_127;
       const real_t tmp_qloop_144 = jac_affine_inv_1_1_GRAY*tmp_qloop_140 - tmp_qloop_128;
       const real_t tmp_qloop_145 = jac_affine_inv_1_1_GRAY*tmp_qloop_47;
       const real_t tmp_qloop_146 = jac_affine_inv_1_1_GRAY*tmp_qloop_142 - tmp_qloop_145;
       const real_t tmp_qloop_151 = jac_affine_inv_0_0_GRAY*-8.0 - tmp_qloop_44;
       const real_t tmp_qloop_152 = jac_affine_inv_0_0_GRAY*tmp_qloop_151 - tmp_qloop_139;
       const real_t tmp_qloop_153 = jac_affine_inv_0_1_GRAY*-8.0 - tmp_qloop_48;
       const real_t tmp_qloop_154 = jac_affine_inv_0_0_GRAY*tmp_qloop_153 - tmp_qloop_128;
       const real_t tmp_qloop_155 = jac_affine_inv_0_1_GRAY*tmp_qloop_151 - tmp_qloop_127;
       const real_t tmp_qloop_156 = jac_affine_inv_0_1_GRAY*tmp_qloop_153 - tmp_qloop_145;
       const real_t tmp_moved_constant_21 = jac_affine_inv_0_0_BLUE*4.0;
       const real_t tmp_moved_constant_22 = jac_affine_inv_1_0_BLUE*4.0;
       const real_t tmp_moved_constant_23 = tmp_moved_constant_21 + tmp_moved_constant_22;
       const real_t tmp_moved_constant_24 = jac_affine_inv_0_0_BLUE*tmp_moved_constant_23 + jac_affine_inv_1_0_BLUE*tmp_moved_constant_23;
       const real_t tmp_moved_constant_25 = jac_affine_inv_0_1_BLUE*4.0;
       const real_t tmp_moved_constant_26 = jac_affine_inv_1_1_BLUE*4.0;
       const real_t tmp_moved_constant_27 = tmp_moved_constant_25 + tmp_moved_constant_26;
       const real_t tmp_moved_constant_28 = jac_affine_inv_0_0_BLUE*tmp_moved_constant_27 + jac_affine_inv_1_0_BLUE*tmp_moved_constant_27;
       const real_t tmp_moved_constant_29 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_23 + jac_affine_inv_1_1_BLUE*tmp_moved_constant_23;
       const real_t tmp_moved_constant_30 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_27 + jac_affine_inv_1_1_BLUE*tmp_moved_constant_27;
       const real_t tmp_moved_constant_35 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_21;
       const real_t tmp_moved_constant_36 = (jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE)*4.0;
       const real_t tmp_moved_constant_37 = (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE)*4.0;
       const real_t tmp_moved_constant_38 = jac_affine_inv_1_1_BLUE*tmp_moved_constant_22;
       const real_t tmp_moved_constant_39 = (jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE)*4.0;
       const real_t tmp_moved_constant_40 = (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE)*4.0;
       const real_t tmp_moved_constant_41 = jac_affine_inv_1_0_BLUE*8.0;
       const real_t tmp_moved_constant_42 = jac_affine_inv_0_0_BLUE*tmp_moved_constant_41;
       const real_t tmp_moved_constant_43 = jac_affine_inv_1_1_BLUE*tmp_moved_constant_21;
       const real_t tmp_moved_constant_44 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_22;
       const real_t tmp_moved_constant_45 = tmp_moved_constant_43 + tmp_moved_constant_44;
       const real_t tmp_moved_constant_46 = jac_affine_inv_1_1_BLUE*8.0;
       const real_t tmp_moved_constant_47 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_46;
       const real_t tmp_moved_constant_48 = jac_affine_inv_1_0_BLUE*tmp_moved_constant_21;
       const real_t tmp_moved_constant_49 = -tmp_moved_constant_21 - tmp_moved_constant_41;
       const real_t tmp_moved_constant_50 = jac_affine_inv_1_0_BLUE*tmp_moved_constant_49 - tmp_moved_constant_48;
       const real_t tmp_moved_constant_51 = -tmp_moved_constant_25 - tmp_moved_constant_46;
       const real_t tmp_moved_constant_52 = jac_affine_inv_1_0_BLUE*tmp_moved_constant_51 - tmp_moved_constant_43;
       const real_t tmp_moved_constant_53 = jac_affine_inv_1_1_BLUE*tmp_moved_constant_49 - tmp_moved_constant_44;
       const real_t tmp_moved_constant_54 = jac_affine_inv_1_1_BLUE*tmp_moved_constant_25;
       const real_t tmp_moved_constant_55 = jac_affine_inv_1_1_BLUE*tmp_moved_constant_51 - tmp_moved_constant_54;
       const real_t tmp_moved_constant_56 = jac_affine_inv_0_0_BLUE*-8.0 - tmp_moved_constant_22;
       const real_t tmp_moved_constant_57 = jac_affine_inv_0_0_BLUE*tmp_moved_constant_56 - tmp_moved_constant_48;
       const real_t tmp_moved_constant_58 = jac_affine_inv_0_1_BLUE*-8.0 - tmp_moved_constant_26;
       const real_t tmp_moved_constant_59 = jac_affine_inv_0_0_BLUE*tmp_moved_constant_58 - tmp_moved_constant_44;
       const real_t tmp_moved_constant_60 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_56 - tmp_moved_constant_43;
       const real_t tmp_moved_constant_61 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_58 - tmp_moved_constant_54;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
             const real_t tmp_qloop_87 = ((ux_dof_0*-0.11111111111111111 + ux_dof_1*-0.11111111111111111 + ux_dof_2*-0.11111111111111111 + ux_dof_3*0.44444444444444444 + ux_dof_4*0.44444444444444444 + ux_dof_5*0.44444444444444444)*(ux_dof_0*-0.11111111111111111 + ux_dof_1*-0.11111111111111111 + ux_dof_2*-0.11111111111111111 + ux_dof_3*0.44444444444444444 + ux_dof_4*0.44444444444444444 + ux_dof_5*0.44444444444444444)) + ((uy_dof_0*-0.11111111111111111 + uy_dof_1*-0.11111111111111111 + uy_dof_2*-0.11111111111111111 + uy_dof_3*0.44444444444444444 + uy_dof_4*0.44444444444444444 + uy_dof_5*0.44444444444444444)*(uy_dof_0*-0.11111111111111111 + uy_dof_1*-0.11111111111111111 + uy_dof_2*-0.11111111111111111 + uy_dof_3*0.44444444444444444 + uy_dof_4*0.44444444444444444 + uy_dof_5*0.44444444444444444));
             const real_t tmp_qloop_88 = pow(tmp_qloop_87, 0.50000000000000000);
             const real_t tmp_qloop_89 = 1.0 / (tmp_qloop_88);
             const real_t tmp_qloop_91 = pow(tmp_qloop_87, 1.5000000000000000);
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
                   real_t q_acc_3_0 = 0.0;
                   real_t q_acc_3_1 = 0.0;
                   real_t q_acc_3_2 = 0.0;
                   real_t q_acc_3_3 = 0.0;
                   real_t q_acc_3_4 = 0.0;
                   real_t q_acc_3_5 = 0.0;
                   real_t q_acc_4_0 = 0.0;
                   real_t q_acc_4_1 = 0.0;
                   real_t q_acc_4_2 = 0.0;
                   real_t q_acc_4_3 = 0.0;
                   real_t q_acc_4_4 = 0.0;
                   real_t q_acc_4_5 = 0.0;
                   real_t q_acc_5_0 = 0.0;
                   real_t q_acc_5_1 = 0.0;
                   real_t q_acc_5_2 = 0.0;
                   real_t q_acc_5_3 = 0.0;
                   real_t q_acc_5_4 = 0.0;
                   real_t q_acc_5_5 = 0.0;
                   const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                   const real_t tmp_qloop_1 = -p_affine_2_0;
                   const real_t tmp_qloop_2 = p_affine_0_0 + tmp_qloop_1;
                   const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                   const real_t tmp_qloop_7 = -p_affine_2_1;
                   const real_t tmp_qloop_8 = p_affine_0_1 + tmp_qloop_7;
                   const real_t tmp_qloop_92 = (abs(tmp_qloop_0)*abs(tmp_qloop_0)) + (abs(tmp_qloop_6)*abs(tmp_qloop_6));
                   const real_t tmp_qloop_93 = pow(tmp_qloop_92, 1.5000000000000000);
                   const real_t tmp_qloop_94 = (abs(tmp_qloop_2)*abs(tmp_qloop_2)) + (abs(tmp_qloop_8)*abs(tmp_qloop_8));
                   const real_t tmp_qloop_95 = pow(tmp_qloop_94, 1.5000000000000000);
                   const real_t tmp_qloop_96 = (abs(p_affine_1_0 + tmp_qloop_1)*abs(p_affine_1_0 + tmp_qloop_1)) + (abs(p_affine_1_1 + tmp_qloop_7)*abs(p_affine_1_1 + tmp_qloop_7));
                   const real_t tmp_qloop_97 = pow(tmp_qloop_96, 1.5000000000000000);
                   const real_t tmp_qloop_98 = abs(tmp_qloop_0*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_6);
                   const real_t tmp_qloop_99 = 1.0 / (tmp_qloop_98*tmp_qloop_98*tmp_qloop_98);
                   const real_t tmp_qloop_100 = tmp_qloop_90*tmp_qloop_91*tmp_qloop_93*tmp_qloop_95*tmp_qloop_97*tmp_qloop_99;
                   const real_t tmp_qloop_102 = pow(tmp_qloop_92, 0.50000000000000000);
                   const real_t tmp_qloop_103 = pow(tmp_qloop_94, 0.50000000000000000);
                   const real_t tmp_qloop_104 = pow(tmp_qloop_96, 0.50000000000000000);
                   const real_t tmp_qloop_105 = 1.0 / (tmp_qloop_98);
                   const real_t tmp_qloop_106 = tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105;
                   const real_t tmp_qloop_107 = tmp_qloop_101*tmp_qloop_106*tmp_qloop_88;
                   const real_t tmp_qloop_108 = 1.0 / (thermalConductivity*thermalConductivity)*tmp_qloop_87*tmp_qloop_92*tmp_qloop_94*tmp_qloop_96*1.0 / (tmp_qloop_98*tmp_qloop_98);
                   for (int64_t q = 0; q < 4; q += 1)
                   {
                      const real_t tmp_qloop_3 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_2*_data_q_p_1[q];
                      const real_t tmp_qloop_5 = (tmp_qloop_3*tmp_qloop_3);
                      const real_t tmp_qloop_9 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_8*_data_q_p_1[q];
                      const real_t tmp_qloop_10 = (tmp_qloop_9*tmp_qloop_9);
                      const real_t tmp_qloop_11 = tmp_qloop_10 + tmp_qloop_5;
                      const real_t tmp_qloop_12 = pow(tmp_qloop_11, -0.50000000000000000);
                      const real_t tmp_qloop_19 = tmp_qloop_12*tmp_qloop_18;
                      const real_t tmp_qloop_20 = tmp_qloop_19*tmp_qloop_4;
                      const real_t tmp_qloop_21 = pow(tmp_qloop_11, -1.5000000000000000);
                      const real_t tmp_qloop_22 = radRayVertex + tmp_qloop_17*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_9) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_3));
                      const real_t tmp_qloop_23 = tmp_qloop_21*tmp_qloop_22;
                      const real_t tmp_qloop_24 = tmp_qloop_23*1.0;
                      const real_t tmp_qloop_25 = tmp_qloop_14*tmp_qloop_19;
                      const real_t tmp_qloop_26 = tmp_qloop_24*tmp_qloop_3;
                      const real_t tmp_qloop_29 = tmp_qloop_18*tmp_qloop_21;
                      const real_t tmp_qloop_30 = tmp_qloop_29*tmp_qloop_4;
                      const real_t tmp_qloop_31 = tmp_qloop_30*tmp_qloop_5;
                      const real_t tmp_qloop_32 = pow(tmp_qloop_11, -2.5000000000000000)*tmp_qloop_22*3.0;
                      const real_t tmp_qloop_33 = tmp_qloop_10*tmp_qloop_3*tmp_qloop_32;
                      const real_t tmp_qloop_34 = tmp_qloop_10*tmp_qloop_30 - tmp_qloop_33;
                      const real_t tmp_qloop_35 = tmp_qloop_13*tmp_qloop_29;
                      const real_t tmp_qloop_36 = tmp_qloop_3*tmp_qloop_9;
                      const real_t tmp_qloop_37 = tmp_qloop_30*tmp_qloop_36;
                      const real_t tmp_qloop_38 = tmp_qloop_23*2.0;
                      const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_5*tmp_qloop_9;
                      const real_t tmp_qloop_40 = tmp_qloop_24*tmp_qloop_9 - tmp_qloop_39;
                      const real_t tmp_qloop_41 = tmp_qloop_35*tmp_qloop_36;
                      const real_t tmp_qloop_42 = tmp_qloop_14*tmp_qloop_29*tmp_qloop_36;
                      const real_t tmp_qloop_53 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_54 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_55 = tmp_qloop_53 + tmp_qloop_54 - 3.0;
                      const real_t tmp_qloop_56 = jac_affine_inv_0_0_GRAY*tmp_qloop_55 + jac_affine_inv_1_0_GRAY*tmp_qloop_55;
                      const real_t tmp_qloop_60 = jac_affine_inv_0_1_GRAY*tmp_qloop_55 + jac_affine_inv_1_1_GRAY*tmp_qloop_55;
                      const real_t tmp_qloop_75 = tmp_qloop_53*_data_q_p_1[q];
                      const real_t tmp_qloop_76 = (_data_q_p_0[q]*_data_q_p_0[q]);
                      const real_t tmp_qloop_77 = tmp_qloop_76*2.0;
                      const real_t tmp_qloop_78 = tmp_qloop_77 - _data_q_p_0[q];
                      const real_t tmp_qloop_79 = (_data_q_p_1[q]*_data_q_p_1[q]);
                      const real_t tmp_qloop_80 = tmp_qloop_79*2.0;
                      const real_t tmp_qloop_81 = tmp_qloop_80 - _data_q_p_1[q];
                      const real_t tmp_qloop_82 = tmp_qloop_54 - tmp_qloop_75 + tmp_qloop_79*-4.0;
                      const real_t tmp_qloop_83 = tmp_qloop_53 - tmp_qloop_75 + tmp_qloop_76*-4.0;
                      const real_t tmp_qloop_84 = tmp_qloop_75 + tmp_qloop_77 + tmp_qloop_80 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                      const real_t tmp_qloop_85 = tmp_qloop_75*ux_dof_3 + tmp_qloop_78*ux_dof_1 + tmp_qloop_81*ux_dof_2 + tmp_qloop_82*ux_dof_4 + tmp_qloop_83*ux_dof_5 + tmp_qloop_84*ux_dof_0;
                      const real_t tmp_qloop_86 = tmp_qloop_75*uy_dof_3 + tmp_qloop_78*uy_dof_1 + tmp_qloop_81*uy_dof_2 + tmp_qloop_82*uy_dof_4 + tmp_qloop_83*uy_dof_5 + tmp_qloop_84*uy_dof_0;
                      const real_t tmp_qloop_114 = tmp_qloop_53 - 1.0;
                      const real_t tmp_qloop_115 = jac_affine_inv_0_0_GRAY*tmp_qloop_114;
                      const real_t tmp_qloop_116 = jac_affine_inv_0_1_GRAY*tmp_qloop_114;
                      const real_t tmp_qloop_121 = tmp_qloop_54 - 1.0;
                      const real_t tmp_qloop_122 = jac_affine_inv_1_0_GRAY*tmp_qloop_121;
                      const real_t tmp_qloop_123 = jac_affine_inv_1_1_GRAY*tmp_qloop_121;
                      const real_t tmp_qloop_132 = jac_affine_inv_1_0_GRAY*tmp_qloop_53;
                      const real_t tmp_qloop_133 = jac_affine_inv_0_0_GRAY*tmp_qloop_54;
                      const real_t tmp_qloop_134 = tmp_qloop_132 + tmp_qloop_133;
                      const real_t tmp_qloop_135 = jac_affine_inv_1_1_GRAY*tmp_qloop_53;
                      const real_t tmp_qloop_136 = jac_affine_inv_0_1_GRAY*tmp_qloop_54;
                      const real_t tmp_qloop_137 = tmp_qloop_135 + tmp_qloop_136;
                      const real_t tmp_qloop_147 = -tmp_qloop_53 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_148 = jac_affine_inv_1_0_GRAY*tmp_qloop_147 - tmp_qloop_133;
                      const real_t tmp_qloop_149 = jac_affine_inv_1_1_GRAY*tmp_qloop_147 - tmp_qloop_136;
                      const real_t tmp_qloop_157 = -tmp_qloop_54 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_158 = jac_affine_inv_0_0_GRAY*tmp_qloop_157 - tmp_qloop_132;
                      const real_t tmp_qloop_159 = jac_affine_inv_0_1_GRAY*tmp_qloop_157 - tmp_qloop_135;
                      const real_t jac_blending_0_0 = tmp_qloop_10*tmp_qloop_24 + tmp_qloop_20*tmp_qloop_3;
                      const real_t jac_blending_0_1 = -tmp_qloop_21*tmp_qloop_22*tmp_qloop_3*tmp_qloop_9 - tmp_qloop_25*tmp_qloop_3;
                      const real_t jac_blending_1_0 = tmp_qloop_20*tmp_qloop_9 - tmp_qloop_26*tmp_qloop_9;
                      const real_t jac_blending_1_1 = tmp_qloop_21*tmp_qloop_22*tmp_qloop_5*1.0 - tmp_qloop_25*tmp_qloop_9;
                      const real_t tmp_qloop_27 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                      const real_t tmp_qloop_28 = 1.0 / (tmp_qloop_27);
                      const real_t abs_det_jac_blending = tmp_qloop_27;
                      const real_t tmp_qloop_109 = abs_det_jac_blending*tmp_qloop_106*tmp_qloop_89*1.0 / (rho_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + rho_dof_1*_data_q_p_0[q] + rho_dof_2*_data_q_p_1[q])*0.50000000000000000*((tmp_qloop_107 <= 1.1799999561582399) ? (tmp_qloop_100*-0.0027777777777777778 + tmp_qloop_107*0.16666666666666667): ((tmp_qloop_107 <= 3.0159389978870399) ? (tmp_qloop_100*-0.00051942446859271248 + tmp_qloop_101*tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_88*0.17969906536907199 + tmp_qloop_108*-0.0089393368193446242 - 0.0064954259688208404): ((tmp_qloop_107 <= 6.7434348119715999) ? (tmp_qloop_101*tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_88*0.2146156710600175 + tmp_qloop_108*-0.020516694887729999 + tmp_qloop_90*tmp_qloop_91*tmp_qloop_93*tmp_qloop_95*tmp_qloop_97*tmp_qloop_99*0.00076015027042957372 - 0.041597543561209399): ((tmp_qloop_107 <= 9.7000000058627194) ? (tmp_qloop_100*0.0003890697253152925 + tmp_qloop_107*0.16399221771597999 + tmp_qloop_108*-0.01300962248982295 + 0.072194442299590406): (thermalConductivity*1.0 / (tmp_qloop_102)*1.0 / (tmp_qloop_103)*1.0 / (tmp_qloop_104)*tmp_qloop_89*tmp_qloop_98*-2.0 + 1.0)))))*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                      const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_28;
                      const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_28;
                      const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_28;
                      const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_28;
                      const real_t tmp_qloop_110 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]));
                      const real_t tmp_qloop_161 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]));
                      const real_t tmp_qloop_162 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]));
                      const real_t tmp_qloop_163 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]));
                      const real_t tmp_qloop_164 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]));
                      const real_t tmp_qloop_165 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]));
                      const real_t hessian_blending_0_0_0 = tmp_qloop_20 - tmp_qloop_31 + tmp_qloop_34;
                      const real_t hessian_blending_1_0_0 = tmp_qloop_10*tmp_qloop_35 - tmp_qloop_32*(tmp_qloop_9*tmp_qloop_9*tmp_qloop_9) - tmp_qloop_37 + tmp_qloop_38*tmp_qloop_9;
                      const real_t hessian_blending_0_0_1 = tmp_qloop_17*tmp_qloop_21*tmp_qloop_36*tmp_qloop_4*-2.0 - tmp_qloop_40;
                      const real_t hessian_blending_1_0_1 = tmp_qloop_12*tmp_qloop_15*tmp_qloop_16*tmp_qloop_4*1.0 - tmp_qloop_26 - tmp_qloop_34 - tmp_qloop_41;
                      const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_15*tmp_qloop_16*tmp_qloop_21*tmp_qloop_5*1.0 - tmp_qloop_25 - tmp_qloop_37 - tmp_qloop_40;
                      const real_t tmp_qloop_57 = -hessian_blending_0_0_0*jac_blending_inv_0_0 - hessian_blending_0_1_0*jac_blending_inv_1_0;
                      const real_t tmp_qloop_66 = -hessian_blending_0_0_0*jac_blending_inv_0_1 - hessian_blending_0_1_0*jac_blending_inv_1_1;
                      const real_t hessian_blending_1_1_0 = -tmp_qloop_26 + tmp_qloop_33 - tmp_qloop_41 + tmp_qloop_42;
                      const real_t tmp_qloop_62 = -hessian_blending_1_0_0*jac_blending_inv_0_0 - hessian_blending_1_1_0*jac_blending_inv_1_0;
                      const real_t tmp_qloop_70 = -hessian_blending_1_0_0*jac_blending_inv_0_1 - hessian_blending_1_1_0*jac_blending_inv_1_1;
                      const real_t hessian_blending_0_1_1 = tmp_qloop_3*tmp_qloop_38 - (tmp_qloop_3*tmp_qloop_3*tmp_qloop_3)*tmp_qloop_32 + tmp_qloop_31 + tmp_qloop_42;
                      const real_t tmp_qloop_58 = -hessian_blending_0_0_1*jac_blending_inv_0_0 - hessian_blending_0_1_1*jac_blending_inv_1_0;
                      const real_t tmp_qloop_59 = jac_blending_inv_0_0*tmp_qloop_57 + jac_blending_inv_0_1*tmp_qloop_58;
                      const real_t tmp_qloop_61 = jac_blending_inv_1_0*tmp_qloop_57 + jac_blending_inv_1_1*tmp_qloop_58;
                      const real_t tmp_qloop_67 = -hessian_blending_0_0_1*jac_blending_inv_0_1 - hessian_blending_0_1_1*jac_blending_inv_1_1;
                      const real_t tmp_qloop_68 = jac_blending_inv_0_0*tmp_qloop_66 + jac_blending_inv_0_1*tmp_qloop_67;
                      const real_t tmp_qloop_69 = jac_blending_inv_1_0*tmp_qloop_66 + jac_blending_inv_1_1*tmp_qloop_67;
                      const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_14*tmp_qloop_15*tmp_qloop_16*tmp_qloop_21*1.0 + tmp_qloop_13*tmp_qloop_15*tmp_qloop_16*tmp_qloop_21*tmp_qloop_5*1.0 - tmp_qloop_25 - tmp_qloop_39;
                      const real_t tmp_qloop_63 = -hessian_blending_1_0_1*jac_blending_inv_0_0 - hessian_blending_1_1_1*jac_blending_inv_1_0;
                      const real_t tmp_qloop_64 = jac_blending_inv_0_0*tmp_qloop_62 + jac_blending_inv_0_1*tmp_qloop_63;
                      const real_t tmp_qloop_65 = jac_blending_inv_1_0*tmp_qloop_62 + jac_blending_inv_1_1*tmp_qloop_63;
                      const real_t tmp_qloop_71 = -hessian_blending_1_0_1*jac_blending_inv_0_1 - hessian_blending_1_1_1*jac_blending_inv_1_1;
                      const real_t tmp_qloop_72 = jac_blending_inv_0_0*tmp_qloop_70 + jac_blending_inv_0_1*tmp_qloop_71;
                      const real_t tmp_qloop_73 = jac_blending_inv_1_0*tmp_qloop_70 + jac_blending_inv_1_1*tmp_qloop_71;
                      const real_t tmp_qloop_74 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_46 + jac_blending_inv_1_0*tmp_qloop_50) + jac_blending_inv_0_0*(tmp_qloop_56*tmp_qloop_59 + tmp_qloop_60*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_46 + jac_blending_inv_1_1*tmp_qloop_50) + jac_blending_inv_0_1*(tmp_qloop_56*tmp_qloop_64 + tmp_qloop_60*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_51 + jac_blending_inv_1_0*tmp_qloop_52) + jac_blending_inv_1_0*(tmp_qloop_56*tmp_qloop_68 + tmp_qloop_60*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_51 + jac_blending_inv_1_1*tmp_qloop_52) + jac_blending_inv_1_1*(tmp_qloop_56*tmp_qloop_72 + tmp_qloop_60*tmp_qloop_73);
                      const real_t tmp_qloop_117 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_112 + jac_blending_inv_1_0*tmp_qloop_111) + jac_blending_inv_0_0*(tmp_qloop_115*tmp_qloop_59 + tmp_qloop_116*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_112 + jac_blending_inv_1_1*tmp_qloop_111) + jac_blending_inv_0_1*(tmp_qloop_115*tmp_qloop_64 + tmp_qloop_116*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_111 + jac_blending_inv_1_0*tmp_qloop_113) + jac_blending_inv_1_0*(tmp_qloop_115*tmp_qloop_68 + tmp_qloop_116*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_111 + jac_blending_inv_1_1*tmp_qloop_113) + jac_blending_inv_1_1*(tmp_qloop_115*tmp_qloop_72 + tmp_qloop_116*tmp_qloop_73);
                      const real_t tmp_qloop_124 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_119 + jac_blending_inv_1_0*tmp_qloop_118) + jac_blending_inv_0_0*(tmp_qloop_122*tmp_qloop_59 + tmp_qloop_123*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_119 + jac_blending_inv_1_1*tmp_qloop_118) + jac_blending_inv_0_1*(tmp_qloop_122*tmp_qloop_64 + tmp_qloop_123*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_118 + jac_blending_inv_1_0*tmp_qloop_120) + jac_blending_inv_1_0*(tmp_qloop_122*tmp_qloop_68 + tmp_qloop_123*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_118 + jac_blending_inv_1_1*tmp_qloop_120) + jac_blending_inv_1_1*(tmp_qloop_122*tmp_qloop_72 + tmp_qloop_123*tmp_qloop_73);
                      const real_t tmp_qloop_138 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_126 + jac_blending_inv_1_0*tmp_qloop_129) + jac_blending_inv_0_0*(tmp_qloop_134*tmp_qloop_59 + tmp_qloop_137*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_126 + jac_blending_inv_1_1*tmp_qloop_129) + jac_blending_inv_0_1*(tmp_qloop_134*tmp_qloop_64 + tmp_qloop_137*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_129 + jac_blending_inv_1_0*tmp_qloop_131) + jac_blending_inv_1_0*(tmp_qloop_134*tmp_qloop_68 + tmp_qloop_137*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_129 + jac_blending_inv_1_1*tmp_qloop_131) + jac_blending_inv_1_1*(tmp_qloop_134*tmp_qloop_72 + tmp_qloop_137*tmp_qloop_73);
                      const real_t tmp_qloop_150 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_141 + jac_blending_inv_1_0*tmp_qloop_143) + jac_blending_inv_0_0*(tmp_qloop_148*tmp_qloop_59 + tmp_qloop_149*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_141 + jac_blending_inv_1_1*tmp_qloop_143) + jac_blending_inv_0_1*(tmp_qloop_148*tmp_qloop_64 + tmp_qloop_149*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_144 + jac_blending_inv_1_0*tmp_qloop_146) + jac_blending_inv_1_0*(tmp_qloop_148*tmp_qloop_68 + tmp_qloop_149*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_144 + jac_blending_inv_1_1*tmp_qloop_146) + jac_blending_inv_1_1*(tmp_qloop_148*tmp_qloop_72 + tmp_qloop_149*tmp_qloop_73);
                      const real_t tmp_qloop_160 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_152 + jac_blending_inv_1_0*tmp_qloop_154) + jac_blending_inv_0_0*(tmp_qloop_158*tmp_qloop_59 + tmp_qloop_159*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_152 + jac_blending_inv_1_1*tmp_qloop_154) + jac_blending_inv_0_1*(tmp_qloop_158*tmp_qloop_64 + tmp_qloop_159*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_155 + jac_blending_inv_1_0*tmp_qloop_156) + jac_blending_inv_1_0*(tmp_qloop_158*tmp_qloop_68 + tmp_qloop_159*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_155 + jac_blending_inv_1_1*tmp_qloop_156) + jac_blending_inv_1_1*(tmp_qloop_158*tmp_qloop_72 + tmp_qloop_159*tmp_qloop_73);
                      const real_t q_tmp_0_0 = -tmp_qloop_110*tmp_qloop_74;
                      const real_t q_tmp_0_1 = -tmp_qloop_110*tmp_qloop_117;
                      const real_t q_tmp_0_2 = -tmp_qloop_110*tmp_qloop_124;
                      const real_t q_tmp_0_3 = -tmp_qloop_110*tmp_qloop_138;
                      const real_t q_tmp_0_4 = -tmp_qloop_110*tmp_qloop_150;
                      const real_t q_tmp_0_5 = -tmp_qloop_110*tmp_qloop_160;
                      const real_t q_tmp_1_0 = -tmp_qloop_161*tmp_qloop_74;
                      const real_t q_tmp_1_1 = -tmp_qloop_117*tmp_qloop_161;
                      const real_t q_tmp_1_2 = -tmp_qloop_124*tmp_qloop_161;
                      const real_t q_tmp_1_3 = -tmp_qloop_138*tmp_qloop_161;
                      const real_t q_tmp_1_4 = -tmp_qloop_150*tmp_qloop_161;
                      const real_t q_tmp_1_5 = -tmp_qloop_160*tmp_qloop_161;
                      const real_t q_tmp_2_0 = -tmp_qloop_162*tmp_qloop_74;
                      const real_t q_tmp_2_1 = -tmp_qloop_117*tmp_qloop_162;
                      const real_t q_tmp_2_2 = -tmp_qloop_124*tmp_qloop_162;
                      const real_t q_tmp_2_3 = -tmp_qloop_138*tmp_qloop_162;
                      const real_t q_tmp_2_4 = -tmp_qloop_150*tmp_qloop_162;
                      const real_t q_tmp_2_5 = -tmp_qloop_160*tmp_qloop_162;
                      const real_t q_tmp_3_0 = -tmp_qloop_163*tmp_qloop_74;
                      const real_t q_tmp_3_1 = -tmp_qloop_117*tmp_qloop_163;
                      const real_t q_tmp_3_2 = -tmp_qloop_124*tmp_qloop_163;
                      const real_t q_tmp_3_3 = -tmp_qloop_138*tmp_qloop_163;
                      const real_t q_tmp_3_4 = -tmp_qloop_150*tmp_qloop_163;
                      const real_t q_tmp_3_5 = -tmp_qloop_160*tmp_qloop_163;
                      const real_t q_tmp_4_0 = -tmp_qloop_164*tmp_qloop_74;
                      const real_t q_tmp_4_1 = -tmp_qloop_117*tmp_qloop_164;
                      const real_t q_tmp_4_2 = -tmp_qloop_124*tmp_qloop_164;
                      const real_t q_tmp_4_3 = -tmp_qloop_138*tmp_qloop_164;
                      const real_t q_tmp_4_4 = -tmp_qloop_150*tmp_qloop_164;
                      const real_t q_tmp_4_5 = -tmp_qloop_160*tmp_qloop_164;
                      const real_t q_tmp_5_0 = -tmp_qloop_165*tmp_qloop_74;
                      const real_t q_tmp_5_1 = -tmp_qloop_117*tmp_qloop_165;
                      const real_t q_tmp_5_2 = -tmp_qloop_124*tmp_qloop_165;
                      const real_t q_tmp_5_3 = -tmp_qloop_138*tmp_qloop_165;
                      const real_t q_tmp_5_4 = -tmp_qloop_150*tmp_qloop_165;
                      const real_t q_tmp_5_5 = -tmp_qloop_160*tmp_qloop_165;
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
                      q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                      q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                      q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                      q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                      q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                      q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                      q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                      q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                      q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                      q_acc_4_3 = q_acc_4_3 + q_tmp_4_3;
                      q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                      q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                      q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                      q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                      q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                      q_acc_5_3 = q_acc_5_3 + q_tmp_5_3;
                      q_acc_5_4 = q_acc_5_4 + q_tmp_5_4;
                      q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                   }
                   const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
                   const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
                   const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
                   const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
                   const real_t elMatVec_4 = q_acc_4_0*src_dof_0 + q_acc_4_1*src_dof_1 + q_acc_4_2*src_dof_2 + q_acc_4_3*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
                   const real_t elMatVec_5 = q_acc_5_0*src_dof_0 + q_acc_5_1*src_dof_1 + q_acc_5_2*src_dof_2 + q_acc_5_3*src_dof_3 + q_acc_5_4*src_dof_4 + q_acc_5_5*src_dof_5;
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
             const real_t tmp_moved_constant_6 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_7 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_8 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_9 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_10 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_11 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_12 = _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_13 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_14 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_15 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_16 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_17 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_18 = _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_19 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_20 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_31 = ((tmp_moved_constant_10*-0.11111111111111111 + tmp_moved_constant_11*-0.11111111111111111 + tmp_moved_constant_12*0.44444444444444444 + tmp_moved_constant_13*0.44444444444444444 + tmp_moved_constant_14*0.44444444444444444 + tmp_moved_constant_9*-0.11111111111111111)*(tmp_moved_constant_10*-0.11111111111111111 + tmp_moved_constant_11*-0.11111111111111111 + tmp_moved_constant_12*0.44444444444444444 + tmp_moved_constant_13*0.44444444444444444 + tmp_moved_constant_14*0.44444444444444444 + tmp_moved_constant_9*-0.11111111111111111)) + ((tmp_moved_constant_15*-0.11111111111111111 + tmp_moved_constant_16*-0.11111111111111111 + tmp_moved_constant_17*-0.11111111111111111 + tmp_moved_constant_18*0.44444444444444444 + tmp_moved_constant_19*0.44444444444444444 + tmp_moved_constant_20*0.44444444444444444)*(tmp_moved_constant_15*-0.11111111111111111 + tmp_moved_constant_16*-0.11111111111111111 + tmp_moved_constant_17*-0.11111111111111111 + tmp_moved_constant_18*0.44444444444444444 + tmp_moved_constant_19*0.44444444444444444 + tmp_moved_constant_20*0.44444444444444444));
             const real_t tmp_moved_constant_32 = pow(tmp_moved_constant_31, 0.50000000000000000);
             const real_t tmp_moved_constant_33 = 1.0 / (tmp_moved_constant_32);
             const real_t tmp_moved_constant_34 = pow(tmp_moved_constant_31, 1.5000000000000000);
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
                   real_t q_acc_3_0 = 0.0;
                   real_t q_acc_3_1 = 0.0;
                   real_t q_acc_3_2 = 0.0;
                   real_t q_acc_3_3 = 0.0;
                   real_t q_acc_3_4 = 0.0;
                   real_t q_acc_3_5 = 0.0;
                   real_t q_acc_4_0 = 0.0;
                   real_t q_acc_4_1 = 0.0;
                   real_t q_acc_4_2 = 0.0;
                   real_t q_acc_4_3 = 0.0;
                   real_t q_acc_4_4 = 0.0;
                   real_t q_acc_4_5 = 0.0;
                   real_t q_acc_5_0 = 0.0;
                   real_t q_acc_5_1 = 0.0;
                   real_t q_acc_5_2 = 0.0;
                   real_t q_acc_5_3 = 0.0;
                   real_t q_acc_5_4 = 0.0;
                   real_t q_acc_5_5 = 0.0;
                   const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                   const real_t tmp_qloop_1 = -p_affine_2_0;
                   const real_t tmp_qloop_2 = p_affine_0_0 + tmp_qloop_1;
                   const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                   const real_t tmp_qloop_7 = -p_affine_2_1;
                   const real_t tmp_qloop_8 = p_affine_0_1 + tmp_qloop_7;
                   const real_t tmp_qloop_92 = (abs(tmp_qloop_0)*abs(tmp_qloop_0)) + (abs(tmp_qloop_6)*abs(tmp_qloop_6));
                   const real_t tmp_qloop_93 = pow(tmp_qloop_92, 1.5000000000000000);
                   const real_t tmp_qloop_94 = (abs(tmp_qloop_2)*abs(tmp_qloop_2)) + (abs(tmp_qloop_8)*abs(tmp_qloop_8));
                   const real_t tmp_qloop_95 = pow(tmp_qloop_94, 1.5000000000000000);
                   const real_t tmp_qloop_96 = (abs(p_affine_1_0 + tmp_qloop_1)*abs(p_affine_1_0 + tmp_qloop_1)) + (abs(p_affine_1_1 + tmp_qloop_7)*abs(p_affine_1_1 + tmp_qloop_7));
                   const real_t tmp_qloop_97 = pow(tmp_qloop_96, 1.5000000000000000);
                   const real_t tmp_qloop_98 = abs(tmp_qloop_0*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_6);
                   const real_t tmp_qloop_99 = 1.0 / (tmp_qloop_98*tmp_qloop_98*tmp_qloop_98);
                   const real_t tmp_qloop_100 = tmp_moved_constant_34*tmp_qloop_90*tmp_qloop_93*tmp_qloop_95*tmp_qloop_97*tmp_qloop_99;
                   const real_t tmp_qloop_102 = pow(tmp_qloop_92, 0.50000000000000000);
                   const real_t tmp_qloop_103 = pow(tmp_qloop_94, 0.50000000000000000);
                   const real_t tmp_qloop_104 = pow(tmp_qloop_96, 0.50000000000000000);
                   const real_t tmp_qloop_105 = 1.0 / (tmp_qloop_98);
                   const real_t tmp_qloop_106 = tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105;
                   const real_t tmp_qloop_107 = tmp_moved_constant_32*tmp_qloop_101*tmp_qloop_106;
                   const real_t tmp_qloop_108 = 1.0 / (thermalConductivity*thermalConductivity)*tmp_moved_constant_31*tmp_qloop_92*tmp_qloop_94*tmp_qloop_96*1.0 / (tmp_qloop_98*tmp_qloop_98);
                   for (int64_t q = 0; q < 4; q += 1)
                   {
                      const real_t tmp_qloop_3 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_2*_data_q_p_1[q];
                      const real_t tmp_qloop_5 = (tmp_qloop_3*tmp_qloop_3);
                      const real_t tmp_qloop_9 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_8*_data_q_p_1[q];
                      const real_t tmp_qloop_10 = (tmp_qloop_9*tmp_qloop_9);
                      const real_t tmp_qloop_11 = tmp_qloop_10 + tmp_qloop_5;
                      const real_t tmp_qloop_12 = pow(tmp_qloop_11, -0.50000000000000000);
                      const real_t tmp_qloop_19 = tmp_qloop_12*tmp_qloop_18;
                      const real_t tmp_qloop_20 = tmp_qloop_19*tmp_qloop_4;
                      const real_t tmp_qloop_21 = pow(tmp_qloop_11, -1.5000000000000000);
                      const real_t tmp_qloop_22 = radRayVertex + tmp_qloop_17*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_9) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_3));
                      const real_t tmp_qloop_23 = tmp_qloop_21*tmp_qloop_22;
                      const real_t tmp_qloop_24 = tmp_qloop_23*1.0;
                      const real_t tmp_qloop_25 = tmp_qloop_14*tmp_qloop_19;
                      const real_t tmp_qloop_26 = tmp_qloop_24*tmp_qloop_3;
                      const real_t tmp_qloop_29 = tmp_qloop_18*tmp_qloop_21;
                      const real_t tmp_qloop_30 = tmp_qloop_29*tmp_qloop_4;
                      const real_t tmp_qloop_31 = tmp_qloop_30*tmp_qloop_5;
                      const real_t tmp_qloop_32 = pow(tmp_qloop_11, -2.5000000000000000)*tmp_qloop_22*3.0;
                      const real_t tmp_qloop_33 = tmp_qloop_10*tmp_qloop_3*tmp_qloop_32;
                      const real_t tmp_qloop_34 = tmp_qloop_10*tmp_qloop_30 - tmp_qloop_33;
                      const real_t tmp_qloop_35 = tmp_qloop_13*tmp_qloop_29;
                      const real_t tmp_qloop_36 = tmp_qloop_3*tmp_qloop_9;
                      const real_t tmp_qloop_37 = tmp_qloop_30*tmp_qloop_36;
                      const real_t tmp_qloop_38 = tmp_qloop_23*2.0;
                      const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_5*tmp_qloop_9;
                      const real_t tmp_qloop_40 = tmp_qloop_24*tmp_qloop_9 - tmp_qloop_39;
                      const real_t tmp_qloop_41 = tmp_qloop_35*tmp_qloop_36;
                      const real_t tmp_qloop_42 = tmp_qloop_14*tmp_qloop_29*tmp_qloop_36;
                      const real_t tmp_qloop_53 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_54 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_55 = tmp_qloop_53 + tmp_qloop_54 - 3.0;
                      const real_t tmp_qloop_56 = jac_affine_inv_0_0_BLUE*tmp_qloop_55 + jac_affine_inv_1_0_BLUE*tmp_qloop_55;
                      const real_t tmp_qloop_60 = jac_affine_inv_0_1_BLUE*tmp_qloop_55 + jac_affine_inv_1_1_BLUE*tmp_qloop_55;
                      const real_t tmp_qloop_75 = tmp_qloop_53*_data_q_p_1[q];
                      const real_t tmp_qloop_76 = (_data_q_p_0[q]*_data_q_p_0[q]);
                      const real_t tmp_qloop_77 = tmp_qloop_76*2.0;
                      const real_t tmp_qloop_78 = tmp_qloop_77 - _data_q_p_0[q];
                      const real_t tmp_qloop_79 = (_data_q_p_1[q]*_data_q_p_1[q]);
                      const real_t tmp_qloop_80 = tmp_qloop_79*2.0;
                      const real_t tmp_qloop_81 = tmp_qloop_80 - _data_q_p_1[q];
                      const real_t tmp_qloop_82 = tmp_qloop_54 - tmp_qloop_75 + tmp_qloop_79*-4.0;
                      const real_t tmp_qloop_83 = tmp_qloop_53 - tmp_qloop_75 + tmp_qloop_76*-4.0;
                      const real_t tmp_qloop_84 = tmp_qloop_75 + tmp_qloop_77 + tmp_qloop_80 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                      const real_t tmp_qloop_85 = tmp_moved_constant_10*tmp_qloop_78 + tmp_moved_constant_11*tmp_qloop_81 + tmp_moved_constant_12*tmp_qloop_75 + tmp_moved_constant_13*tmp_qloop_82 + tmp_moved_constant_14*tmp_qloop_83 + tmp_moved_constant_9*tmp_qloop_84;
                      const real_t tmp_qloop_86 = tmp_moved_constant_15*tmp_qloop_84 + tmp_moved_constant_16*tmp_qloop_78 + tmp_moved_constant_17*tmp_qloop_81 + tmp_moved_constant_18*tmp_qloop_75 + tmp_moved_constant_19*tmp_qloop_82 + tmp_moved_constant_20*tmp_qloop_83;
                      const real_t tmp_qloop_114 = tmp_qloop_53 - 1.0;
                      const real_t tmp_qloop_115 = jac_affine_inv_0_0_BLUE*tmp_qloop_114;
                      const real_t tmp_qloop_116 = jac_affine_inv_0_1_BLUE*tmp_qloop_114;
                      const real_t tmp_qloop_121 = tmp_qloop_54 - 1.0;
                      const real_t tmp_qloop_122 = jac_affine_inv_1_0_BLUE*tmp_qloop_121;
                      const real_t tmp_qloop_123 = jac_affine_inv_1_1_BLUE*tmp_qloop_121;
                      const real_t tmp_qloop_132 = jac_affine_inv_1_0_BLUE*tmp_qloop_53;
                      const real_t tmp_qloop_133 = jac_affine_inv_0_0_BLUE*tmp_qloop_54;
                      const real_t tmp_qloop_134 = tmp_qloop_132 + tmp_qloop_133;
                      const real_t tmp_qloop_135 = jac_affine_inv_1_1_BLUE*tmp_qloop_53;
                      const real_t tmp_qloop_136 = jac_affine_inv_0_1_BLUE*tmp_qloop_54;
                      const real_t tmp_qloop_137 = tmp_qloop_135 + tmp_qloop_136;
                      const real_t tmp_qloop_147 = -tmp_qloop_53 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_148 = jac_affine_inv_1_0_BLUE*tmp_qloop_147 - tmp_qloop_133;
                      const real_t tmp_qloop_149 = jac_affine_inv_1_1_BLUE*tmp_qloop_147 - tmp_qloop_136;
                      const real_t tmp_qloop_157 = -tmp_qloop_54 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_158 = jac_affine_inv_0_0_BLUE*tmp_qloop_157 - tmp_qloop_132;
                      const real_t tmp_qloop_159 = jac_affine_inv_0_1_BLUE*tmp_qloop_157 - tmp_qloop_135;
                      const real_t jac_blending_0_0 = tmp_qloop_10*tmp_qloop_24 + tmp_qloop_20*tmp_qloop_3;
                      const real_t jac_blending_0_1 = -tmp_qloop_21*tmp_qloop_22*tmp_qloop_3*tmp_qloop_9 - tmp_qloop_25*tmp_qloop_3;
                      const real_t jac_blending_1_0 = tmp_qloop_20*tmp_qloop_9 - tmp_qloop_26*tmp_qloop_9;
                      const real_t jac_blending_1_1 = tmp_qloop_21*tmp_qloop_22*tmp_qloop_5*1.0 - tmp_qloop_25*tmp_qloop_9;
                      const real_t tmp_qloop_27 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                      const real_t tmp_qloop_28 = 1.0 / (tmp_qloop_27);
                      const real_t abs_det_jac_blending = tmp_qloop_27;
                      const real_t tmp_qloop_109 = abs_det_jac_blending*tmp_moved_constant_33*tmp_qloop_106*1.0 / (tmp_moved_constant_6*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + tmp_moved_constant_7*_data_q_p_0[q] + tmp_moved_constant_8*_data_q_p_1[q])*0.50000000000000000*((tmp_qloop_107 <= 1.1799999561582399) ? (tmp_qloop_100*-0.0027777777777777778 + tmp_qloop_107*0.16666666666666667): ((tmp_qloop_107 <= 3.0159389978870399) ? (tmp_moved_constant_32*tmp_qloop_101*tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*0.17969906536907199 + tmp_qloop_100*-0.00051942446859271248 + tmp_qloop_108*-0.0089393368193446242 - 0.0064954259688208404): ((tmp_qloop_107 <= 6.7434348119715999) ? (tmp_moved_constant_32*tmp_qloop_101*tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*0.2146156710600175 + tmp_moved_constant_34*tmp_qloop_90*tmp_qloop_93*tmp_qloop_95*tmp_qloop_97*tmp_qloop_99*0.00076015027042957372 + tmp_qloop_108*-0.020516694887729999 - 0.041597543561209399): ((tmp_qloop_107 <= 9.7000000058627194) ? (tmp_qloop_100*0.0003890697253152925 + tmp_qloop_107*0.16399221771597999 + tmp_qloop_108*-0.01300962248982295 + 0.072194442299590406): (thermalConductivity*tmp_moved_constant_33*1.0 / (tmp_qloop_102)*1.0 / (tmp_qloop_103)*1.0 / (tmp_qloop_104)*tmp_qloop_98*-2.0 + 1.0)))))*_data_q_w[q]*_data_tabulated_and_untitled_0_0_BLUE[7*q + 1];
                      const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_28;
                      const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_28;
                      const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_28;
                      const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_28;
                      const real_t tmp_qloop_110 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[7*q] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[7*q] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q]));
                      const real_t tmp_qloop_161 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[7*q + 2] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]));
                      const real_t tmp_qloop_162 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[7*q + 3] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]));
                      const real_t tmp_qloop_163 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[7*q + 4] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]));
                      const real_t tmp_qloop_164 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[7*q + 5] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]));
                      const real_t tmp_qloop_165 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[7*q + 6] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]));
                      const real_t hessian_blending_0_0_0 = tmp_qloop_20 - tmp_qloop_31 + tmp_qloop_34;
                      const real_t hessian_blending_1_0_0 = tmp_qloop_10*tmp_qloop_35 - tmp_qloop_32*(tmp_qloop_9*tmp_qloop_9*tmp_qloop_9) - tmp_qloop_37 + tmp_qloop_38*tmp_qloop_9;
                      const real_t hessian_blending_0_0_1 = tmp_qloop_17*tmp_qloop_21*tmp_qloop_36*tmp_qloop_4*-2.0 - tmp_qloop_40;
                      const real_t hessian_blending_1_0_1 = tmp_qloop_12*tmp_qloop_15*tmp_qloop_16*tmp_qloop_4*1.0 - tmp_qloop_26 - tmp_qloop_34 - tmp_qloop_41;
                      const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_15*tmp_qloop_16*tmp_qloop_21*tmp_qloop_5*1.0 - tmp_qloop_25 - tmp_qloop_37 - tmp_qloop_40;
                      const real_t tmp_qloop_57 = -hessian_blending_0_0_0*jac_blending_inv_0_0 - hessian_blending_0_1_0*jac_blending_inv_1_0;
                      const real_t tmp_qloop_66 = -hessian_blending_0_0_0*jac_blending_inv_0_1 - hessian_blending_0_1_0*jac_blending_inv_1_1;
                      const real_t hessian_blending_1_1_0 = -tmp_qloop_26 + tmp_qloop_33 - tmp_qloop_41 + tmp_qloop_42;
                      const real_t tmp_qloop_62 = -hessian_blending_1_0_0*jac_blending_inv_0_0 - hessian_blending_1_1_0*jac_blending_inv_1_0;
                      const real_t tmp_qloop_70 = -hessian_blending_1_0_0*jac_blending_inv_0_1 - hessian_blending_1_1_0*jac_blending_inv_1_1;
                      const real_t hessian_blending_0_1_1 = tmp_qloop_3*tmp_qloop_38 - (tmp_qloop_3*tmp_qloop_3*tmp_qloop_3)*tmp_qloop_32 + tmp_qloop_31 + tmp_qloop_42;
                      const real_t tmp_qloop_58 = -hessian_blending_0_0_1*jac_blending_inv_0_0 - hessian_blending_0_1_1*jac_blending_inv_1_0;
                      const real_t tmp_qloop_59 = jac_blending_inv_0_0*tmp_qloop_57 + jac_blending_inv_0_1*tmp_qloop_58;
                      const real_t tmp_qloop_61 = jac_blending_inv_1_0*tmp_qloop_57 + jac_blending_inv_1_1*tmp_qloop_58;
                      const real_t tmp_qloop_67 = -hessian_blending_0_0_1*jac_blending_inv_0_1 - hessian_blending_0_1_1*jac_blending_inv_1_1;
                      const real_t tmp_qloop_68 = jac_blending_inv_0_0*tmp_qloop_66 + jac_blending_inv_0_1*tmp_qloop_67;
                      const real_t tmp_qloop_69 = jac_blending_inv_1_0*tmp_qloop_66 + jac_blending_inv_1_1*tmp_qloop_67;
                      const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_14*tmp_qloop_15*tmp_qloop_16*tmp_qloop_21*1.0 + tmp_qloop_13*tmp_qloop_15*tmp_qloop_16*tmp_qloop_21*tmp_qloop_5*1.0 - tmp_qloop_25 - tmp_qloop_39;
                      const real_t tmp_qloop_63 = -hessian_blending_1_0_1*jac_blending_inv_0_0 - hessian_blending_1_1_1*jac_blending_inv_1_0;
                      const real_t tmp_qloop_64 = jac_blending_inv_0_0*tmp_qloop_62 + jac_blending_inv_0_1*tmp_qloop_63;
                      const real_t tmp_qloop_65 = jac_blending_inv_1_0*tmp_qloop_62 + jac_blending_inv_1_1*tmp_qloop_63;
                      const real_t tmp_qloop_71 = -hessian_blending_1_0_1*jac_blending_inv_0_1 - hessian_blending_1_1_1*jac_blending_inv_1_1;
                      const real_t tmp_qloop_72 = jac_blending_inv_0_0*tmp_qloop_70 + jac_blending_inv_0_1*tmp_qloop_71;
                      const real_t tmp_qloop_73 = jac_blending_inv_1_0*tmp_qloop_70 + jac_blending_inv_1_1*tmp_qloop_71;
                      const real_t tmp_qloop_74 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_moved_constant_24 + jac_blending_inv_1_0*tmp_moved_constant_28) + jac_blending_inv_0_0*(tmp_qloop_56*tmp_qloop_59 + tmp_qloop_60*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_moved_constant_24 + jac_blending_inv_1_1*tmp_moved_constant_28) + jac_blending_inv_0_1*(tmp_qloop_56*tmp_qloop_64 + tmp_qloop_60*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_moved_constant_29 + jac_blending_inv_1_0*tmp_moved_constant_30) + jac_blending_inv_1_0*(tmp_qloop_56*tmp_qloop_68 + tmp_qloop_60*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_moved_constant_29 + jac_blending_inv_1_1*tmp_moved_constant_30) + jac_blending_inv_1_1*(tmp_qloop_56*tmp_qloop_72 + tmp_qloop_60*tmp_qloop_73);
                      const real_t tmp_qloop_117 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_moved_constant_36 + jac_blending_inv_1_0*tmp_moved_constant_35) + jac_blending_inv_0_0*(tmp_qloop_115*tmp_qloop_59 + tmp_qloop_116*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_moved_constant_36 + jac_blending_inv_1_1*tmp_moved_constant_35) + jac_blending_inv_0_1*(tmp_qloop_115*tmp_qloop_64 + tmp_qloop_116*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_moved_constant_35 + jac_blending_inv_1_0*tmp_moved_constant_37) + jac_blending_inv_1_0*(tmp_qloop_115*tmp_qloop_68 + tmp_qloop_116*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_moved_constant_35 + jac_blending_inv_1_1*tmp_moved_constant_37) + jac_blending_inv_1_1*(tmp_qloop_115*tmp_qloop_72 + tmp_qloop_116*tmp_qloop_73);
                      const real_t tmp_qloop_124 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_moved_constant_39 + jac_blending_inv_1_0*tmp_moved_constant_38) + jac_blending_inv_0_0*(tmp_qloop_122*tmp_qloop_59 + tmp_qloop_123*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_moved_constant_39 + jac_blending_inv_1_1*tmp_moved_constant_38) + jac_blending_inv_0_1*(tmp_qloop_122*tmp_qloop_64 + tmp_qloop_123*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_moved_constant_38 + jac_blending_inv_1_0*tmp_moved_constant_40) + jac_blending_inv_1_0*(tmp_qloop_122*tmp_qloop_68 + tmp_qloop_123*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_moved_constant_38 + jac_blending_inv_1_1*tmp_moved_constant_40) + jac_blending_inv_1_1*(tmp_qloop_122*tmp_qloop_72 + tmp_qloop_123*tmp_qloop_73);
                      const real_t tmp_qloop_138 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_moved_constant_42 + jac_blending_inv_1_0*tmp_moved_constant_45) + jac_blending_inv_0_0*(tmp_qloop_134*tmp_qloop_59 + tmp_qloop_137*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_moved_constant_42 + jac_blending_inv_1_1*tmp_moved_constant_45) + jac_blending_inv_0_1*(tmp_qloop_134*tmp_qloop_64 + tmp_qloop_137*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_moved_constant_45 + jac_blending_inv_1_0*tmp_moved_constant_47) + jac_blending_inv_1_0*(tmp_qloop_134*tmp_qloop_68 + tmp_qloop_137*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_moved_constant_45 + jac_blending_inv_1_1*tmp_moved_constant_47) + jac_blending_inv_1_1*(tmp_qloop_134*tmp_qloop_72 + tmp_qloop_137*tmp_qloop_73);
                      const real_t tmp_qloop_150 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_moved_constant_50 + jac_blending_inv_1_0*tmp_moved_constant_52) + jac_blending_inv_0_0*(tmp_qloop_148*tmp_qloop_59 + tmp_qloop_149*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_moved_constant_50 + jac_blending_inv_1_1*tmp_moved_constant_52) + jac_blending_inv_0_1*(tmp_qloop_148*tmp_qloop_64 + tmp_qloop_149*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_moved_constant_53 + jac_blending_inv_1_0*tmp_moved_constant_55) + jac_blending_inv_1_0*(tmp_qloop_148*tmp_qloop_68 + tmp_qloop_149*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_moved_constant_53 + jac_blending_inv_1_1*tmp_moved_constant_55) + jac_blending_inv_1_1*(tmp_qloop_148*tmp_qloop_72 + tmp_qloop_149*tmp_qloop_73);
                      const real_t tmp_qloop_160 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_moved_constant_57 + jac_blending_inv_1_0*tmp_moved_constant_59) + jac_blending_inv_0_0*(tmp_qloop_158*tmp_qloop_59 + tmp_qloop_159*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_moved_constant_57 + jac_blending_inv_1_1*tmp_moved_constant_59) + jac_blending_inv_0_1*(tmp_qloop_158*tmp_qloop_64 + tmp_qloop_159*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_moved_constant_60 + jac_blending_inv_1_0*tmp_moved_constant_61) + jac_blending_inv_1_0*(tmp_qloop_158*tmp_qloop_68 + tmp_qloop_159*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_moved_constant_60 + jac_blending_inv_1_1*tmp_moved_constant_61) + jac_blending_inv_1_1*(tmp_qloop_158*tmp_qloop_72 + tmp_qloop_159*tmp_qloop_73);
                      const real_t q_tmp_0_0 = -tmp_qloop_110*tmp_qloop_74;
                      const real_t q_tmp_0_1 = -tmp_qloop_110*tmp_qloop_117;
                      const real_t q_tmp_0_2 = -tmp_qloop_110*tmp_qloop_124;
                      const real_t q_tmp_0_3 = -tmp_qloop_110*tmp_qloop_138;
                      const real_t q_tmp_0_4 = -tmp_qloop_110*tmp_qloop_150;
                      const real_t q_tmp_0_5 = -tmp_qloop_110*tmp_qloop_160;
                      const real_t q_tmp_1_0 = -tmp_qloop_161*tmp_qloop_74;
                      const real_t q_tmp_1_1 = -tmp_qloop_117*tmp_qloop_161;
                      const real_t q_tmp_1_2 = -tmp_qloop_124*tmp_qloop_161;
                      const real_t q_tmp_1_3 = -tmp_qloop_138*tmp_qloop_161;
                      const real_t q_tmp_1_4 = -tmp_qloop_150*tmp_qloop_161;
                      const real_t q_tmp_1_5 = -tmp_qloop_160*tmp_qloop_161;
                      const real_t q_tmp_2_0 = -tmp_qloop_162*tmp_qloop_74;
                      const real_t q_tmp_2_1 = -tmp_qloop_117*tmp_qloop_162;
                      const real_t q_tmp_2_2 = -tmp_qloop_124*tmp_qloop_162;
                      const real_t q_tmp_2_3 = -tmp_qloop_138*tmp_qloop_162;
                      const real_t q_tmp_2_4 = -tmp_qloop_150*tmp_qloop_162;
                      const real_t q_tmp_2_5 = -tmp_qloop_160*tmp_qloop_162;
                      const real_t q_tmp_3_0 = -tmp_qloop_163*tmp_qloop_74;
                      const real_t q_tmp_3_1 = -tmp_qloop_117*tmp_qloop_163;
                      const real_t q_tmp_3_2 = -tmp_qloop_124*tmp_qloop_163;
                      const real_t q_tmp_3_3 = -tmp_qloop_138*tmp_qloop_163;
                      const real_t q_tmp_3_4 = -tmp_qloop_150*tmp_qloop_163;
                      const real_t q_tmp_3_5 = -tmp_qloop_160*tmp_qloop_163;
                      const real_t q_tmp_4_0 = -tmp_qloop_164*tmp_qloop_74;
                      const real_t q_tmp_4_1 = -tmp_qloop_117*tmp_qloop_164;
                      const real_t q_tmp_4_2 = -tmp_qloop_124*tmp_qloop_164;
                      const real_t q_tmp_4_3 = -tmp_qloop_138*tmp_qloop_164;
                      const real_t q_tmp_4_4 = -tmp_qloop_150*tmp_qloop_164;
                      const real_t q_tmp_4_5 = -tmp_qloop_160*tmp_qloop_164;
                      const real_t q_tmp_5_0 = -tmp_qloop_165*tmp_qloop_74;
                      const real_t q_tmp_5_1 = -tmp_qloop_117*tmp_qloop_165;
                      const real_t q_tmp_5_2 = -tmp_qloop_124*tmp_qloop_165;
                      const real_t q_tmp_5_3 = -tmp_qloop_138*tmp_qloop_165;
                      const real_t q_tmp_5_4 = -tmp_qloop_150*tmp_qloop_165;
                      const real_t q_tmp_5_5 = -tmp_qloop_160*tmp_qloop_165;
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
                      q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                      q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                      q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                      q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                      q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                      q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                      q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                      q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                      q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                      q_acc_4_3 = q_acc_4_3 + q_tmp_4_3;
                      q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                      q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                      q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                      q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                      q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                      q_acc_5_3 = q_acc_5_3 + q_tmp_5_3;
                      q_acc_5_4 = q_acc_5_4 + q_tmp_5_4;
                      q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                   }
                   const real_t elMatVec_0 = q_acc_0_0*tmp_moved_constant_0 + q_acc_0_1*tmp_moved_constant_1 + q_acc_0_2*tmp_moved_constant_2 + q_acc_0_3*tmp_moved_constant_3 + q_acc_0_4*tmp_moved_constant_4 + q_acc_0_5*tmp_moved_constant_5;
                   const real_t elMatVec_1 = q_acc_1_0*tmp_moved_constant_0 + q_acc_1_1*tmp_moved_constant_1 + q_acc_1_2*tmp_moved_constant_2 + q_acc_1_3*tmp_moved_constant_3 + q_acc_1_4*tmp_moved_constant_4 + q_acc_1_5*tmp_moved_constant_5;
                   const real_t elMatVec_2 = q_acc_2_0*tmp_moved_constant_0 + q_acc_2_1*tmp_moved_constant_1 + q_acc_2_2*tmp_moved_constant_2 + q_acc_2_3*tmp_moved_constant_3 + q_acc_2_4*tmp_moved_constant_4 + q_acc_2_5*tmp_moved_constant_5;
                   const real_t elMatVec_3 = q_acc_3_0*tmp_moved_constant_0 + q_acc_3_1*tmp_moved_constant_1 + q_acc_3_2*tmp_moved_constant_2 + q_acc_3_3*tmp_moved_constant_3 + q_acc_3_4*tmp_moved_constant_4 + q_acc_3_5*tmp_moved_constant_5;
                   const real_t elMatVec_4 = q_acc_4_0*tmp_moved_constant_0 + q_acc_4_1*tmp_moved_constant_1 + q_acc_4_2*tmp_moved_constant_2 + q_acc_4_3*tmp_moved_constant_3 + q_acc_4_4*tmp_moved_constant_4 + q_acc_4_5*tmp_moved_constant_5;
                   const real_t elMatVec_5 = q_acc_5_0*tmp_moved_constant_0 + q_acc_5_1*tmp_moved_constant_1 + q_acc_5_2*tmp_moved_constant_2 + q_acc_5_3*tmp_moved_constant_3 + q_acc_5_4*tmp_moved_constant_4 + q_acc_5_5*tmp_moved_constant_5;
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3*operatorScaling + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                }
             }
          }
          for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
             const real_t tmp_qloop_87 = ((ux_dof_0*-0.11111111111111111 + ux_dof_1*-0.11111111111111111 + ux_dof_2*-0.11111111111111111 + ux_dof_3*0.44444444444444444 + ux_dof_4*0.44444444444444444 + ux_dof_5*0.44444444444444444)*(ux_dof_0*-0.11111111111111111 + ux_dof_1*-0.11111111111111111 + ux_dof_2*-0.11111111111111111 + ux_dof_3*0.44444444444444444 + ux_dof_4*0.44444444444444444 + ux_dof_5*0.44444444444444444)) + ((uy_dof_0*-0.11111111111111111 + uy_dof_1*-0.11111111111111111 + uy_dof_2*-0.11111111111111111 + uy_dof_3*0.44444444444444444 + uy_dof_4*0.44444444444444444 + uy_dof_5*0.44444444444444444)*(uy_dof_0*-0.11111111111111111 + uy_dof_1*-0.11111111111111111 + uy_dof_2*-0.11111111111111111 + uy_dof_3*0.44444444444444444 + uy_dof_4*0.44444444444444444 + uy_dof_5*0.44444444444444444));
             const real_t tmp_qloop_88 = pow(tmp_qloop_87, 0.50000000000000000);
             const real_t tmp_qloop_89 = 1.0 / (tmp_qloop_88);
             const real_t tmp_qloop_91 = pow(tmp_qloop_87, 1.5000000000000000);
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
                   real_t q_acc_3_0 = 0.0;
                   real_t q_acc_3_1 = 0.0;
                   real_t q_acc_3_2 = 0.0;
                   real_t q_acc_3_3 = 0.0;
                   real_t q_acc_3_4 = 0.0;
                   real_t q_acc_3_5 = 0.0;
                   real_t q_acc_4_0 = 0.0;
                   real_t q_acc_4_1 = 0.0;
                   real_t q_acc_4_2 = 0.0;
                   real_t q_acc_4_3 = 0.0;
                   real_t q_acc_4_4 = 0.0;
                   real_t q_acc_4_5 = 0.0;
                   real_t q_acc_5_0 = 0.0;
                   real_t q_acc_5_1 = 0.0;
                   real_t q_acc_5_2 = 0.0;
                   real_t q_acc_5_3 = 0.0;
                   real_t q_acc_5_4 = 0.0;
                   real_t q_acc_5_5 = 0.0;
                   const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                   const real_t tmp_qloop_1 = -p_affine_2_0;
                   const real_t tmp_qloop_2 = p_affine_0_0 + tmp_qloop_1;
                   const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                   const real_t tmp_qloop_7 = -p_affine_2_1;
                   const real_t tmp_qloop_8 = p_affine_0_1 + tmp_qloop_7;
                   const real_t tmp_qloop_92 = (abs(tmp_qloop_0)*abs(tmp_qloop_0)) + (abs(tmp_qloop_6)*abs(tmp_qloop_6));
                   const real_t tmp_qloop_93 = pow(tmp_qloop_92, 1.5000000000000000);
                   const real_t tmp_qloop_94 = (abs(tmp_qloop_2)*abs(tmp_qloop_2)) + (abs(tmp_qloop_8)*abs(tmp_qloop_8));
                   const real_t tmp_qloop_95 = pow(tmp_qloop_94, 1.5000000000000000);
                   const real_t tmp_qloop_96 = (abs(p_affine_1_0 + tmp_qloop_1)*abs(p_affine_1_0 + tmp_qloop_1)) + (abs(p_affine_1_1 + tmp_qloop_7)*abs(p_affine_1_1 + tmp_qloop_7));
                   const real_t tmp_qloop_97 = pow(tmp_qloop_96, 1.5000000000000000);
                   const real_t tmp_qloop_98 = abs(tmp_qloop_0*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_6);
                   const real_t tmp_qloop_99 = 1.0 / (tmp_qloop_98*tmp_qloop_98*tmp_qloop_98);
                   const real_t tmp_qloop_100 = tmp_qloop_90*tmp_qloop_91*tmp_qloop_93*tmp_qloop_95*tmp_qloop_97*tmp_qloop_99;
                   const real_t tmp_qloop_102 = pow(tmp_qloop_92, 0.50000000000000000);
                   const real_t tmp_qloop_103 = pow(tmp_qloop_94, 0.50000000000000000);
                   const real_t tmp_qloop_104 = pow(tmp_qloop_96, 0.50000000000000000);
                   const real_t tmp_qloop_105 = 1.0 / (tmp_qloop_98);
                   const real_t tmp_qloop_106 = tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105;
                   const real_t tmp_qloop_107 = tmp_qloop_101*tmp_qloop_106*tmp_qloop_88;
                   const real_t tmp_qloop_108 = 1.0 / (thermalConductivity*thermalConductivity)*tmp_qloop_87*tmp_qloop_92*tmp_qloop_94*tmp_qloop_96*1.0 / (tmp_qloop_98*tmp_qloop_98);
                   for (int64_t q = 0; q < 4; q += 1)
                   {
                      const real_t tmp_qloop_3 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_2*_data_q_p_1[q];
                      const real_t tmp_qloop_5 = (tmp_qloop_3*tmp_qloop_3);
                      const real_t tmp_qloop_9 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_8*_data_q_p_1[q];
                      const real_t tmp_qloop_10 = (tmp_qloop_9*tmp_qloop_9);
                      const real_t tmp_qloop_11 = tmp_qloop_10 + tmp_qloop_5;
                      const real_t tmp_qloop_12 = pow(tmp_qloop_11, -0.50000000000000000);
                      const real_t tmp_qloop_19 = tmp_qloop_12*tmp_qloop_18;
                      const real_t tmp_qloop_20 = tmp_qloop_19*tmp_qloop_4;
                      const real_t tmp_qloop_21 = pow(tmp_qloop_11, -1.5000000000000000);
                      const real_t tmp_qloop_22 = radRayVertex + tmp_qloop_17*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_9) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_3));
                      const real_t tmp_qloop_23 = tmp_qloop_21*tmp_qloop_22;
                      const real_t tmp_qloop_24 = tmp_qloop_23*1.0;
                      const real_t tmp_qloop_25 = tmp_qloop_14*tmp_qloop_19;
                      const real_t tmp_qloop_26 = tmp_qloop_24*tmp_qloop_3;
                      const real_t tmp_qloop_29 = tmp_qloop_18*tmp_qloop_21;
                      const real_t tmp_qloop_30 = tmp_qloop_29*tmp_qloop_4;
                      const real_t tmp_qloop_31 = tmp_qloop_30*tmp_qloop_5;
                      const real_t tmp_qloop_32 = pow(tmp_qloop_11, -2.5000000000000000)*tmp_qloop_22*3.0;
                      const real_t tmp_qloop_33 = tmp_qloop_10*tmp_qloop_3*tmp_qloop_32;
                      const real_t tmp_qloop_34 = tmp_qloop_10*tmp_qloop_30 - tmp_qloop_33;
                      const real_t tmp_qloop_35 = tmp_qloop_13*tmp_qloop_29;
                      const real_t tmp_qloop_36 = tmp_qloop_3*tmp_qloop_9;
                      const real_t tmp_qloop_37 = tmp_qloop_30*tmp_qloop_36;
                      const real_t tmp_qloop_38 = tmp_qloop_23*2.0;
                      const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_5*tmp_qloop_9;
                      const real_t tmp_qloop_40 = tmp_qloop_24*tmp_qloop_9 - tmp_qloop_39;
                      const real_t tmp_qloop_41 = tmp_qloop_35*tmp_qloop_36;
                      const real_t tmp_qloop_42 = tmp_qloop_14*tmp_qloop_29*tmp_qloop_36;
                      const real_t tmp_qloop_53 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_54 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_55 = tmp_qloop_53 + tmp_qloop_54 - 3.0;
                      const real_t tmp_qloop_56 = jac_affine_inv_0_0_GRAY*tmp_qloop_55 + jac_affine_inv_1_0_GRAY*tmp_qloop_55;
                      const real_t tmp_qloop_60 = jac_affine_inv_0_1_GRAY*tmp_qloop_55 + jac_affine_inv_1_1_GRAY*tmp_qloop_55;
                      const real_t tmp_qloop_75 = tmp_qloop_53*_data_q_p_1[q];
                      const real_t tmp_qloop_76 = (_data_q_p_0[q]*_data_q_p_0[q]);
                      const real_t tmp_qloop_77 = tmp_qloop_76*2.0;
                      const real_t tmp_qloop_78 = tmp_qloop_77 - _data_q_p_0[q];
                      const real_t tmp_qloop_79 = (_data_q_p_1[q]*_data_q_p_1[q]);
                      const real_t tmp_qloop_80 = tmp_qloop_79*2.0;
                      const real_t tmp_qloop_81 = tmp_qloop_80 - _data_q_p_1[q];
                      const real_t tmp_qloop_82 = tmp_qloop_54 - tmp_qloop_75 + tmp_qloop_79*-4.0;
                      const real_t tmp_qloop_83 = tmp_qloop_53 - tmp_qloop_75 + tmp_qloop_76*-4.0;
                      const real_t tmp_qloop_84 = tmp_qloop_75 + tmp_qloop_77 + tmp_qloop_80 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                      const real_t tmp_qloop_85 = tmp_qloop_75*ux_dof_3 + tmp_qloop_78*ux_dof_1 + tmp_qloop_81*ux_dof_2 + tmp_qloop_82*ux_dof_4 + tmp_qloop_83*ux_dof_5 + tmp_qloop_84*ux_dof_0;
                      const real_t tmp_qloop_86 = tmp_qloop_75*uy_dof_3 + tmp_qloop_78*uy_dof_1 + tmp_qloop_81*uy_dof_2 + tmp_qloop_82*uy_dof_4 + tmp_qloop_83*uy_dof_5 + tmp_qloop_84*uy_dof_0;
                      const real_t tmp_qloop_114 = tmp_qloop_53 - 1.0;
                      const real_t tmp_qloop_115 = jac_affine_inv_0_0_GRAY*tmp_qloop_114;
                      const real_t tmp_qloop_116 = jac_affine_inv_0_1_GRAY*tmp_qloop_114;
                      const real_t tmp_qloop_121 = tmp_qloop_54 - 1.0;
                      const real_t tmp_qloop_122 = jac_affine_inv_1_0_GRAY*tmp_qloop_121;
                      const real_t tmp_qloop_123 = jac_affine_inv_1_1_GRAY*tmp_qloop_121;
                      const real_t tmp_qloop_132 = jac_affine_inv_1_0_GRAY*tmp_qloop_53;
                      const real_t tmp_qloop_133 = jac_affine_inv_0_0_GRAY*tmp_qloop_54;
                      const real_t tmp_qloop_134 = tmp_qloop_132 + tmp_qloop_133;
                      const real_t tmp_qloop_135 = jac_affine_inv_1_1_GRAY*tmp_qloop_53;
                      const real_t tmp_qloop_136 = jac_affine_inv_0_1_GRAY*tmp_qloop_54;
                      const real_t tmp_qloop_137 = tmp_qloop_135 + tmp_qloop_136;
                      const real_t tmp_qloop_147 = -tmp_qloop_53 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_148 = jac_affine_inv_1_0_GRAY*tmp_qloop_147 - tmp_qloop_133;
                      const real_t tmp_qloop_149 = jac_affine_inv_1_1_GRAY*tmp_qloop_147 - tmp_qloop_136;
                      const real_t tmp_qloop_157 = -tmp_qloop_54 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_158 = jac_affine_inv_0_0_GRAY*tmp_qloop_157 - tmp_qloop_132;
                      const real_t tmp_qloop_159 = jac_affine_inv_0_1_GRAY*tmp_qloop_157 - tmp_qloop_135;
                      const real_t jac_blending_0_0 = tmp_qloop_10*tmp_qloop_24 + tmp_qloop_20*tmp_qloop_3;
                      const real_t jac_blending_0_1 = -tmp_qloop_21*tmp_qloop_22*tmp_qloop_3*tmp_qloop_9 - tmp_qloop_25*tmp_qloop_3;
                      const real_t jac_blending_1_0 = tmp_qloop_20*tmp_qloop_9 - tmp_qloop_26*tmp_qloop_9;
                      const real_t jac_blending_1_1 = tmp_qloop_21*tmp_qloop_22*tmp_qloop_5*1.0 - tmp_qloop_25*tmp_qloop_9;
                      const real_t tmp_qloop_27 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                      const real_t tmp_qloop_28 = 1.0 / (tmp_qloop_27);
                      const real_t abs_det_jac_blending = tmp_qloop_27;
                      const real_t tmp_qloop_109 = abs_det_jac_blending*tmp_qloop_106*tmp_qloop_89*1.0 / (rho_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + rho_dof_1*_data_q_p_0[q] + rho_dof_2*_data_q_p_1[q])*0.50000000000000000*((tmp_qloop_107 <= 1.1799999561582399) ? (tmp_qloop_100*-0.0027777777777777778 + tmp_qloop_107*0.16666666666666667): ((tmp_qloop_107 <= 3.0159389978870399) ? (tmp_qloop_100*-0.00051942446859271248 + tmp_qloop_101*tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_88*0.17969906536907199 + tmp_qloop_108*-0.0089393368193446242 - 0.0064954259688208404): ((tmp_qloop_107 <= 6.7434348119715999) ? (tmp_qloop_101*tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_88*0.2146156710600175 + tmp_qloop_108*-0.020516694887729999 + tmp_qloop_90*tmp_qloop_91*tmp_qloop_93*tmp_qloop_95*tmp_qloop_97*tmp_qloop_99*0.00076015027042957372 - 0.041597543561209399): ((tmp_qloop_107 <= 9.7000000058627194) ? (tmp_qloop_100*0.0003890697253152925 + tmp_qloop_107*0.16399221771597999 + tmp_qloop_108*-0.01300962248982295 + 0.072194442299590406): (thermalConductivity*1.0 / (tmp_qloop_102)*1.0 / (tmp_qloop_103)*1.0 / (tmp_qloop_104)*tmp_qloop_89*tmp_qloop_98*-2.0 + 1.0)))))*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[7*q + 1];
                      const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_28;
                      const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_28;
                      const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_28;
                      const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_28;
                      const real_t tmp_qloop_110 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]));
                      const real_t tmp_qloop_161 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 2] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]));
                      const real_t tmp_qloop_162 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 3] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]));
                      const real_t tmp_qloop_163 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 4] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]));
                      const real_t tmp_qloop_164 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 5] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]));
                      const real_t tmp_qloop_165 = tmp_qloop_109*(tmp_qloop_85*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]) + tmp_qloop_86*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[7*q + 6] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]));
                      const real_t hessian_blending_0_0_0 = tmp_qloop_20 - tmp_qloop_31 + tmp_qloop_34;
                      const real_t hessian_blending_1_0_0 = tmp_qloop_10*tmp_qloop_35 - tmp_qloop_32*(tmp_qloop_9*tmp_qloop_9*tmp_qloop_9) - tmp_qloop_37 + tmp_qloop_38*tmp_qloop_9;
                      const real_t hessian_blending_0_0_1 = tmp_qloop_17*tmp_qloop_21*tmp_qloop_36*tmp_qloop_4*-2.0 - tmp_qloop_40;
                      const real_t hessian_blending_1_0_1 = tmp_qloop_12*tmp_qloop_15*tmp_qloop_16*tmp_qloop_4*1.0 - tmp_qloop_26 - tmp_qloop_34 - tmp_qloop_41;
                      const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_15*tmp_qloop_16*tmp_qloop_21*tmp_qloop_5*1.0 - tmp_qloop_25 - tmp_qloop_37 - tmp_qloop_40;
                      const real_t tmp_qloop_57 = -hessian_blending_0_0_0*jac_blending_inv_0_0 - hessian_blending_0_1_0*jac_blending_inv_1_0;
                      const real_t tmp_qloop_66 = -hessian_blending_0_0_0*jac_blending_inv_0_1 - hessian_blending_0_1_0*jac_blending_inv_1_1;
                      const real_t hessian_blending_1_1_0 = -tmp_qloop_26 + tmp_qloop_33 - tmp_qloop_41 + tmp_qloop_42;
                      const real_t tmp_qloop_62 = -hessian_blending_1_0_0*jac_blending_inv_0_0 - hessian_blending_1_1_0*jac_blending_inv_1_0;
                      const real_t tmp_qloop_70 = -hessian_blending_1_0_0*jac_blending_inv_0_1 - hessian_blending_1_1_0*jac_blending_inv_1_1;
                      const real_t hessian_blending_0_1_1 = tmp_qloop_3*tmp_qloop_38 - (tmp_qloop_3*tmp_qloop_3*tmp_qloop_3)*tmp_qloop_32 + tmp_qloop_31 + tmp_qloop_42;
                      const real_t tmp_qloop_58 = -hessian_blending_0_0_1*jac_blending_inv_0_0 - hessian_blending_0_1_1*jac_blending_inv_1_0;
                      const real_t tmp_qloop_59 = jac_blending_inv_0_0*tmp_qloop_57 + jac_blending_inv_0_1*tmp_qloop_58;
                      const real_t tmp_qloop_61 = jac_blending_inv_1_0*tmp_qloop_57 + jac_blending_inv_1_1*tmp_qloop_58;
                      const real_t tmp_qloop_67 = -hessian_blending_0_0_1*jac_blending_inv_0_1 - hessian_blending_0_1_1*jac_blending_inv_1_1;
                      const real_t tmp_qloop_68 = jac_blending_inv_0_0*tmp_qloop_66 + jac_blending_inv_0_1*tmp_qloop_67;
                      const real_t tmp_qloop_69 = jac_blending_inv_1_0*tmp_qloop_66 + jac_blending_inv_1_1*tmp_qloop_67;
                      const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_14*tmp_qloop_15*tmp_qloop_16*tmp_qloop_21*1.0 + tmp_qloop_13*tmp_qloop_15*tmp_qloop_16*tmp_qloop_21*tmp_qloop_5*1.0 - tmp_qloop_25 - tmp_qloop_39;
                      const real_t tmp_qloop_63 = -hessian_blending_1_0_1*jac_blending_inv_0_0 - hessian_blending_1_1_1*jac_blending_inv_1_0;
                      const real_t tmp_qloop_64 = jac_blending_inv_0_0*tmp_qloop_62 + jac_blending_inv_0_1*tmp_qloop_63;
                      const real_t tmp_qloop_65 = jac_blending_inv_1_0*tmp_qloop_62 + jac_blending_inv_1_1*tmp_qloop_63;
                      const real_t tmp_qloop_71 = -hessian_blending_1_0_1*jac_blending_inv_0_1 - hessian_blending_1_1_1*jac_blending_inv_1_1;
                      const real_t tmp_qloop_72 = jac_blending_inv_0_0*tmp_qloop_70 + jac_blending_inv_0_1*tmp_qloop_71;
                      const real_t tmp_qloop_73 = jac_blending_inv_1_0*tmp_qloop_70 + jac_blending_inv_1_1*tmp_qloop_71;
                      const real_t tmp_qloop_74 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_46 + jac_blending_inv_1_0*tmp_qloop_50) + jac_blending_inv_0_0*(tmp_qloop_56*tmp_qloop_59 + tmp_qloop_60*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_46 + jac_blending_inv_1_1*tmp_qloop_50) + jac_blending_inv_0_1*(tmp_qloop_56*tmp_qloop_64 + tmp_qloop_60*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_51 + jac_blending_inv_1_0*tmp_qloop_52) + jac_blending_inv_1_0*(tmp_qloop_56*tmp_qloop_68 + tmp_qloop_60*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_51 + jac_blending_inv_1_1*tmp_qloop_52) + jac_blending_inv_1_1*(tmp_qloop_56*tmp_qloop_72 + tmp_qloop_60*tmp_qloop_73);
                      const real_t tmp_qloop_117 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_112 + jac_blending_inv_1_0*tmp_qloop_111) + jac_blending_inv_0_0*(tmp_qloop_115*tmp_qloop_59 + tmp_qloop_116*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_112 + jac_blending_inv_1_1*tmp_qloop_111) + jac_blending_inv_0_1*(tmp_qloop_115*tmp_qloop_64 + tmp_qloop_116*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_111 + jac_blending_inv_1_0*tmp_qloop_113) + jac_blending_inv_1_0*(tmp_qloop_115*tmp_qloop_68 + tmp_qloop_116*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_111 + jac_blending_inv_1_1*tmp_qloop_113) + jac_blending_inv_1_1*(tmp_qloop_115*tmp_qloop_72 + tmp_qloop_116*tmp_qloop_73);
                      const real_t tmp_qloop_124 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_119 + jac_blending_inv_1_0*tmp_qloop_118) + jac_blending_inv_0_0*(tmp_qloop_122*tmp_qloop_59 + tmp_qloop_123*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_119 + jac_blending_inv_1_1*tmp_qloop_118) + jac_blending_inv_0_1*(tmp_qloop_122*tmp_qloop_64 + tmp_qloop_123*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_118 + jac_blending_inv_1_0*tmp_qloop_120) + jac_blending_inv_1_0*(tmp_qloop_122*tmp_qloop_68 + tmp_qloop_123*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_118 + jac_blending_inv_1_1*tmp_qloop_120) + jac_blending_inv_1_1*(tmp_qloop_122*tmp_qloop_72 + tmp_qloop_123*tmp_qloop_73);
                      const real_t tmp_qloop_138 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_126 + jac_blending_inv_1_0*tmp_qloop_129) + jac_blending_inv_0_0*(tmp_qloop_134*tmp_qloop_59 + tmp_qloop_137*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_126 + jac_blending_inv_1_1*tmp_qloop_129) + jac_blending_inv_0_1*(tmp_qloop_134*tmp_qloop_64 + tmp_qloop_137*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_129 + jac_blending_inv_1_0*tmp_qloop_131) + jac_blending_inv_1_0*(tmp_qloop_134*tmp_qloop_68 + tmp_qloop_137*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_129 + jac_blending_inv_1_1*tmp_qloop_131) + jac_blending_inv_1_1*(tmp_qloop_134*tmp_qloop_72 + tmp_qloop_137*tmp_qloop_73);
                      const real_t tmp_qloop_150 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_141 + jac_blending_inv_1_0*tmp_qloop_143) + jac_blending_inv_0_0*(tmp_qloop_148*tmp_qloop_59 + tmp_qloop_149*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_141 + jac_blending_inv_1_1*tmp_qloop_143) + jac_blending_inv_0_1*(tmp_qloop_148*tmp_qloop_64 + tmp_qloop_149*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_144 + jac_blending_inv_1_0*tmp_qloop_146) + jac_blending_inv_1_0*(tmp_qloop_148*tmp_qloop_68 + tmp_qloop_149*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_144 + jac_blending_inv_1_1*tmp_qloop_146) + jac_blending_inv_1_1*(tmp_qloop_148*tmp_qloop_72 + tmp_qloop_149*tmp_qloop_73);
                      const real_t tmp_qloop_160 = jac_blending_inv_0_0*(jac_blending_inv_0_0*tmp_qloop_152 + jac_blending_inv_1_0*tmp_qloop_154) + jac_blending_inv_0_0*(tmp_qloop_158*tmp_qloop_59 + tmp_qloop_159*tmp_qloop_61) + jac_blending_inv_0_1*(jac_blending_inv_0_1*tmp_qloop_152 + jac_blending_inv_1_1*tmp_qloop_154) + jac_blending_inv_0_1*(tmp_qloop_158*tmp_qloop_64 + tmp_qloop_159*tmp_qloop_65) + jac_blending_inv_1_0*(jac_blending_inv_0_0*tmp_qloop_155 + jac_blending_inv_1_0*tmp_qloop_156) + jac_blending_inv_1_0*(tmp_qloop_158*tmp_qloop_68 + tmp_qloop_159*tmp_qloop_69) + jac_blending_inv_1_1*(jac_blending_inv_0_1*tmp_qloop_155 + jac_blending_inv_1_1*tmp_qloop_156) + jac_blending_inv_1_1*(tmp_qloop_158*tmp_qloop_72 + tmp_qloop_159*tmp_qloop_73);
                      const real_t q_tmp_0_0 = -tmp_qloop_110*tmp_qloop_74;
                      const real_t q_tmp_0_1 = -tmp_qloop_110*tmp_qloop_117;
                      const real_t q_tmp_0_2 = -tmp_qloop_110*tmp_qloop_124;
                      const real_t q_tmp_0_3 = -tmp_qloop_110*tmp_qloop_138;
                      const real_t q_tmp_0_4 = -tmp_qloop_110*tmp_qloop_150;
                      const real_t q_tmp_0_5 = -tmp_qloop_110*tmp_qloop_160;
                      const real_t q_tmp_1_0 = -tmp_qloop_161*tmp_qloop_74;
                      const real_t q_tmp_1_1 = -tmp_qloop_117*tmp_qloop_161;
                      const real_t q_tmp_1_2 = -tmp_qloop_124*tmp_qloop_161;
                      const real_t q_tmp_1_3 = -tmp_qloop_138*tmp_qloop_161;
                      const real_t q_tmp_1_4 = -tmp_qloop_150*tmp_qloop_161;
                      const real_t q_tmp_1_5 = -tmp_qloop_160*tmp_qloop_161;
                      const real_t q_tmp_2_0 = -tmp_qloop_162*tmp_qloop_74;
                      const real_t q_tmp_2_1 = -tmp_qloop_117*tmp_qloop_162;
                      const real_t q_tmp_2_2 = -tmp_qloop_124*tmp_qloop_162;
                      const real_t q_tmp_2_3 = -tmp_qloop_138*tmp_qloop_162;
                      const real_t q_tmp_2_4 = -tmp_qloop_150*tmp_qloop_162;
                      const real_t q_tmp_2_5 = -tmp_qloop_160*tmp_qloop_162;
                      const real_t q_tmp_3_0 = -tmp_qloop_163*tmp_qloop_74;
                      const real_t q_tmp_3_1 = -tmp_qloop_117*tmp_qloop_163;
                      const real_t q_tmp_3_2 = -tmp_qloop_124*tmp_qloop_163;
                      const real_t q_tmp_3_3 = -tmp_qloop_138*tmp_qloop_163;
                      const real_t q_tmp_3_4 = -tmp_qloop_150*tmp_qloop_163;
                      const real_t q_tmp_3_5 = -tmp_qloop_160*tmp_qloop_163;
                      const real_t q_tmp_4_0 = -tmp_qloop_164*tmp_qloop_74;
                      const real_t q_tmp_4_1 = -tmp_qloop_117*tmp_qloop_164;
                      const real_t q_tmp_4_2 = -tmp_qloop_124*tmp_qloop_164;
                      const real_t q_tmp_4_3 = -tmp_qloop_138*tmp_qloop_164;
                      const real_t q_tmp_4_4 = -tmp_qloop_150*tmp_qloop_164;
                      const real_t q_tmp_4_5 = -tmp_qloop_160*tmp_qloop_164;
                      const real_t q_tmp_5_0 = -tmp_qloop_165*tmp_qloop_74;
                      const real_t q_tmp_5_1 = -tmp_qloop_117*tmp_qloop_165;
                      const real_t q_tmp_5_2 = -tmp_qloop_124*tmp_qloop_165;
                      const real_t q_tmp_5_3 = -tmp_qloop_138*tmp_qloop_165;
                      const real_t q_tmp_5_4 = -tmp_qloop_150*tmp_qloop_165;
                      const real_t q_tmp_5_5 = -tmp_qloop_160*tmp_qloop_165;
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
                      q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                      q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                      q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                      q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                      q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                      q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                      q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                      q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                      q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                      q_acc_4_3 = q_acc_4_3 + q_tmp_4_3;
                      q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                      q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                      q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                      q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                      q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                      q_acc_5_3 = q_acc_5_3 + q_tmp_5_3;
                      q_acc_5_4 = q_acc_5_4 + q_tmp_5_4;
                      q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                   }
                   const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
                   const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
                   const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
                   const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
                   const real_t elMatVec_4 = q_acc_4_0*src_dof_0 + q_acc_4_1*src_dof_1 + q_acc_4_2*src_dof_2 + q_acc_4_3*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
                   const real_t elMatVec_5 = q_acc_5_0*src_dof_0 + q_acc_5_1*src_dof_1 + q_acc_5_2*src_dof_2 + q_acc_5_3*src_dof_3 + q_acc_5_4*src_dof_4 + q_acc_5_5*src_dof_5;
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
} // namespace operatorgeneration

} // namespace hyteg
