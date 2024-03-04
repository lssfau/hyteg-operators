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
* The entire file was generated with the HyTeG form generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/























#include "../P2ElementwiseEpsilon_1_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseEpsilon_1_0::apply_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_muEdge, real_t * RESTRICT  _data_muVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
   
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
       {
          /* FaceType.GRAY */
          const real_t _data_phi_0_0_GRAY [] = {-0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448};
      
          const real_t _data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666652 + jac_affine_inv_1_0_GRAY*0.16666666666666652)*(jac_affine_inv_0_1_GRAY*0.33333333333333304 + jac_affine_inv_1_1_GRAY*0.33333333333333304)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666652 + jac_affine_inv_1_0_GRAY*0.16666666666666652)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666652 + jac_affine_inv_1_0_GRAY*0.16666666666666652)*3.333333333333333)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666652 + jac_affine_inv_1_0_GRAY*0.16666666666666652)*(jac_affine_inv_0_1_GRAY*2.6666666666666665 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666652 + jac_affine_inv_1_0_GRAY*0.16666666666666652)*(jac_affine_inv_0_1_GRAY*-2.6666666666666665 + jac_affine_inv_1_1_GRAY*-1.9999999999999996)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666652 + jac_affine_inv_1_0_GRAY*0.16666666666666652)*(jac_affine_inv_0_1_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*0.33333333333333304 + jac_affine_inv_1_1_GRAY*0.33333333333333304)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*jac_affine_inv_0_1_GRAY*0.11111111111111113)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*jac_affine_inv_1_1_GRAY*-0.55555555555555558)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*2.6666666666666665 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*-2.6666666666666665 + jac_affine_inv_1_1_GRAY*-1.9999999999999996)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*0.33333333333333304 + jac_affine_inv_1_1_GRAY*0.33333333333333304)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*jac_affine_inv_1_0_GRAY*-0.55555555555555558)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*jac_affine_inv_1_1_GRAY*2.7777777777777772)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*2.6666666666666665 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*-2.6666666666666665 + jac_affine_inv_1_1_GRAY*-1.9999999999999996)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*(jac_affine_inv_0_1_GRAY*0.33333333333333304 + jac_affine_inv_1_1_GRAY*0.33333333333333304)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*3.333333333333333)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*(jac_affine_inv_0_1_GRAY*2.6666666666666665 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*(jac_affine_inv_0_1_GRAY*-2.6666666666666665 + jac_affine_inv_1_1_GRAY*-1.9999999999999996)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*(jac_affine_inv_0_1_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*-0.99999999999999978)*(jac_affine_inv_0_1_GRAY*0.33333333333333304 + jac_affine_inv_1_1_GRAY*0.33333333333333304)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*-0.99999999999999978)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*-0.99999999999999978)*3.333333333333333)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*-0.99999999999999978)*(jac_affine_inv_0_1_GRAY*2.6666666666666665 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*-0.99999999999999978)*(jac_affine_inv_0_1_GRAY*-2.6666666666666665 + jac_affine_inv_1_1_GRAY*-1.9999999999999996)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*-0.99999999999999978)*(jac_affine_inv_0_1_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*(jac_affine_inv_0_1_GRAY*0.33333333333333304 + jac_affine_inv_1_1_GRAY*0.33333333333333304)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*3.333333333333333)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*(jac_affine_inv_0_1_GRAY*2.6666666666666665 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*(jac_affine_inv_0_1_GRAY*-2.6666666666666665 + jac_affine_inv_1_1_GRAY*-1.9999999999999996)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*(jac_affine_inv_0_1_GRAY*4.4408920985006262e-16 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666657 + jac_affine_inv_1_0_GRAY*0.16666666666666657)*(jac_affine_inv_0_1_GRAY*0.33333333333333315 + jac_affine_inv_1_1_GRAY*0.33333333333333315)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666657 + jac_affine_inv_1_0_GRAY*0.16666666666666657)*3.333333333333333)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666657 + jac_affine_inv_1_0_GRAY*0.16666666666666657)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666657 + jac_affine_inv_1_0_GRAY*0.16666666666666657)*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666657 + jac_affine_inv_1_0_GRAY*0.16666666666666657)*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*4.4408920985006262e-16)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.16666666666666657 + jac_affine_inv_1_0_GRAY*0.16666666666666657)*(jac_affine_inv_0_1_GRAY*-1.9999999999999996 + jac_affine_inv_1_1_GRAY*-2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*0.33333333333333315 + jac_affine_inv_1_1_GRAY*0.33333333333333315)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*jac_affine_inv_0_1_GRAY*2.7777777777777772)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*jac_affine_inv_1_1_GRAY*-0.55555555555555558)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.6666666666666665)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*4.4408920985006262e-16)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*-1.9999999999999996 + jac_affine_inv_1_1_GRAY*-2.6666666666666665)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*0.33333333333333315 + jac_affine_inv_1_1_GRAY*0.33333333333333315)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*jac_affine_inv_1_0_GRAY*-0.55555555555555558)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*jac_affine_inv_1_1_GRAY*0.11111111111111113)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.6666666666666665)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*4.4408920985006262e-16)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*-1.9999999999999996 + jac_affine_inv_1_1_GRAY*-2.6666666666666665)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.3333333333333333)*(jac_affine_inv_0_1_GRAY*0.33333333333333315 + jac_affine_inv_1_1_GRAY*0.33333333333333315)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.3333333333333333)*3.333333333333333)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.3333333333333333)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.3333333333333333)*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.3333333333333333)*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*4.4408920985006262e-16)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.3333333333333333)*(jac_affine_inv_0_1_GRAY*-1.9999999999999996 + jac_affine_inv_1_1_GRAY*-2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)*(jac_affine_inv_0_1_GRAY*0.33333333333333315 + jac_affine_inv_1_1_GRAY*0.33333333333333315)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)*3.333333333333333)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*4.4408920985006262e-16)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)*(jac_affine_inv_0_1_GRAY*-1.9999999999999996 + jac_affine_inv_1_1_GRAY*-2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.99999999999999978 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)*(jac_affine_inv_0_1_GRAY*0.33333333333333315 + jac_affine_inv_1_1_GRAY*0.33333333333333315)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*-0.99999999999999978 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)*3.333333333333333)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*-0.99999999999999978 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.99999999999999978 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.99999999999999978 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*4.4408920985006262e-16)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.99999999999999978 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)*(jac_affine_inv_0_1_GRAY*-1.9999999999999996 + jac_affine_inv_1_1_GRAY*-2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.83333333333333348 + jac_affine_inv_1_0_GRAY*-0.83333333333333348)*(jac_affine_inv_0_1_GRAY*-1.666666666666667 + jac_affine_inv_1_1_GRAY*-1.666666666666667)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*-0.83333333333333348 + jac_affine_inv_1_0_GRAY*-0.83333333333333348)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*-0.83333333333333348 + jac_affine_inv_1_0_GRAY*-0.83333333333333348)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.83333333333333348 + jac_affine_inv_1_0_GRAY*-0.83333333333333348)*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.83333333333333348 + jac_affine_inv_1_0_GRAY*-0.83333333333333348)*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.0000000000000004)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.83333333333333348 + jac_affine_inv_1_0_GRAY*-0.83333333333333348)*(jac_affine_inv_0_1_GRAY*2.0000000000000004 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*-1.666666666666667 + jac_affine_inv_1_1_GRAY*-1.666666666666667)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*jac_affine_inv_0_1_GRAY*0.11111111111111113)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*jac_affine_inv_1_1_GRAY*0.11111111111111113)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.0000000000000004)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_0_GRAY*(jac_affine_inv_0_1_GRAY*2.0000000000000004 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*-1.666666666666667 + jac_affine_inv_1_1_GRAY*-1.666666666666667)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*jac_affine_inv_1_0_GRAY*0.11111111111111113)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*jac_affine_inv_1_1_GRAY*0.11111111111111113)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.0000000000000004)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_0_GRAY*(jac_affine_inv_0_1_GRAY*2.0000000000000004 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*(jac_affine_inv_0_1_GRAY*-1.666666666666667 + jac_affine_inv_1_1_GRAY*-1.666666666666667)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.0000000000000004)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*0.33333333333333331 + jac_affine_inv_1_0_GRAY*0.33333333333333331)*(jac_affine_inv_0_1_GRAY*2.0000000000000004 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.0000000000000002)*(jac_affine_inv_0_1_GRAY*-1.666666666666667 + jac_affine_inv_1_1_GRAY*-1.666666666666667)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.0000000000000002)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.0000000000000002)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.0000000000000002)*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.0000000000000002)*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.0000000000000004)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*-0.33333333333333331 + jac_affine_inv_1_0_GRAY*1.0000000000000002)*(jac_affine_inv_0_1_GRAY*2.0000000000000004 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*1.0000000000000002 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*(jac_affine_inv_0_1_GRAY*-1.666666666666667 + jac_affine_inv_1_1_GRAY*-1.666666666666667)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_0_1_GRAY*(jac_affine_inv_0_0_GRAY*1.0000000000000002 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*jac_affine_inv_1_1_GRAY*(jac_affine_inv_0_0_GRAY*1.0000000000000002 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*1.0000000000000002 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*(jac_affine_inv_0_1_GRAY*0.66666666666666663 + jac_affine_inv_1_1_GRAY*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*1.0000000000000002 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*(jac_affine_inv_0_1_GRAY*-0.66666666666666663 + jac_affine_inv_1_1_GRAY*2.0000000000000004)*2.0)), ((real_t)(abs_det_jac_affine_GRAY*(jac_affine_inv_0_0_GRAY*1.0000000000000002 + jac_affine_inv_1_0_GRAY*-0.33333333333333331)*(jac_affine_inv_0_1_GRAY*2.0000000000000004 + jac_affine_inv_1_1_GRAY*-0.66666666666666663)*2.0))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
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
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_qloop_0 = (mu_dof_0*_data_phi_0_0_GRAY[6*q] + mu_dof_1*_data_phi_0_0_GRAY[6*q + 1] + mu_dof_2*_data_phi_0_0_GRAY[6*q + 2] + mu_dof_3*_data_phi_0_0_GRAY[6*q + 3] + mu_dof_4*_data_phi_0_0_GRAY[6*q + 4] + mu_dof_5*_data_phi_0_0_GRAY[6*q + 5])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 5];
                const real_t q_tmp_1_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 6];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 7];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 8];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 9];
                const real_t q_tmp_1_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 10];
                const real_t q_tmp_1_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 11];
                const real_t q_tmp_2_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 12];
                const real_t q_tmp_2_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 13];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 14];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 15];
                const real_t q_tmp_2_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 16];
                const real_t q_tmp_2_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 17];
                const real_t q_tmp_3_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 18];
                const real_t q_tmp_3_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 19];
                const real_t q_tmp_3_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 20];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 21];
                const real_t q_tmp_3_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 22];
                const real_t q_tmp_3_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 23];
                const real_t q_tmp_4_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 24];
                const real_t q_tmp_4_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 25];
                const real_t q_tmp_4_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 26];
                const real_t q_tmp_4_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 27];
                const real_t q_tmp_4_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 28];
                const real_t q_tmp_4_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 29];
                const real_t q_tmp_5_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 30];
                const real_t q_tmp_5_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 31];
                const real_t q_tmp_5_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 32];
                const real_t q_tmp_5_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 33];
                const real_t q_tmp_5_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 34];
                const real_t q_tmp_5_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_GRAY[36*q + 35];
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
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
          const real_t _data_phi_0_0_BLUE [] = {-0.11111111111111116, -0.1111111111111111, 0.22222222222222221, 0.44444444444444442, 0.44444444444444442, 0.11111111111111116, -0.11111111111111116, 0.22222222222222221, -0.1111111111111111, 0.44444444444444442, 0.11111111111111116, 0.44444444444444442, 0.22222222222222221, -0.1111111111111111, -0.1111111111111111, 0.1111111111111111, 0.44444444444444448, 0.44444444444444448};
      
          const real_t _data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666652 + jac_affine_inv_1_0_BLUE*0.16666666666666652)*(jac_affine_inv_0_1_BLUE*0.33333333333333304 + jac_affine_inv_1_1_BLUE*0.33333333333333304)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666652 + jac_affine_inv_1_0_BLUE*0.16666666666666652)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666652 + jac_affine_inv_1_0_BLUE*0.16666666666666652)*3.333333333333333)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666652 + jac_affine_inv_1_0_BLUE*0.16666666666666652)*(jac_affine_inv_0_1_BLUE*2.6666666666666665 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666652 + jac_affine_inv_1_0_BLUE*0.16666666666666652)*(jac_affine_inv_0_1_BLUE*-2.6666666666666665 + jac_affine_inv_1_1_BLUE*-1.9999999999999996)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666652 + jac_affine_inv_1_0_BLUE*0.16666666666666652)*(jac_affine_inv_0_1_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*0.33333333333333304 + jac_affine_inv_1_1_BLUE*0.33333333333333304)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*jac_affine_inv_0_1_BLUE*0.11111111111111113)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*jac_affine_inv_1_1_BLUE*-0.55555555555555558)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*2.6666666666666665 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*-2.6666666666666665 + jac_affine_inv_1_1_BLUE*-1.9999999999999996)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*0.33333333333333304 + jac_affine_inv_1_1_BLUE*0.33333333333333304)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*jac_affine_inv_1_0_BLUE*-0.55555555555555558)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*jac_affine_inv_1_1_BLUE*2.7777777777777772)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*2.6666666666666665 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*-2.6666666666666665 + jac_affine_inv_1_1_BLUE*-1.9999999999999996)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*(jac_affine_inv_0_1_BLUE*0.33333333333333304 + jac_affine_inv_1_1_BLUE*0.33333333333333304)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*3.333333333333333)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*(jac_affine_inv_0_1_BLUE*2.6666666666666665 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*(jac_affine_inv_0_1_BLUE*-2.6666666666666665 + jac_affine_inv_1_1_BLUE*-1.9999999999999996)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*(jac_affine_inv_0_1_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*-0.99999999999999978)*(jac_affine_inv_0_1_BLUE*0.33333333333333304 + jac_affine_inv_1_1_BLUE*0.33333333333333304)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*-0.99999999999999978)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*-0.99999999999999978)*3.333333333333333)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*-0.99999999999999978)*(jac_affine_inv_0_1_BLUE*2.6666666666666665 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*-0.99999999999999978)*(jac_affine_inv_0_1_BLUE*-2.6666666666666665 + jac_affine_inv_1_1_BLUE*-1.9999999999999996)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*-0.99999999999999978)*(jac_affine_inv_0_1_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*(jac_affine_inv_0_1_BLUE*0.33333333333333304 + jac_affine_inv_1_1_BLUE*0.33333333333333304)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*3.333333333333333)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*(jac_affine_inv_0_1_BLUE*2.6666666666666665 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*(jac_affine_inv_0_1_BLUE*-2.6666666666666665 + jac_affine_inv_1_1_BLUE*-1.9999999999999996)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*(jac_affine_inv_0_1_BLUE*4.4408920985006262e-16 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666657 + jac_affine_inv_1_0_BLUE*0.16666666666666657)*(jac_affine_inv_0_1_BLUE*0.33333333333333315 + jac_affine_inv_1_1_BLUE*0.33333333333333315)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666657 + jac_affine_inv_1_0_BLUE*0.16666666666666657)*3.333333333333333)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666657 + jac_affine_inv_1_0_BLUE*0.16666666666666657)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666657 + jac_affine_inv_1_0_BLUE*0.16666666666666657)*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666657 + jac_affine_inv_1_0_BLUE*0.16666666666666657)*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*4.4408920985006262e-16)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.16666666666666657 + jac_affine_inv_1_0_BLUE*0.16666666666666657)*(jac_affine_inv_0_1_BLUE*-1.9999999999999996 + jac_affine_inv_1_1_BLUE*-2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*0.33333333333333315 + jac_affine_inv_1_1_BLUE*0.33333333333333315)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*jac_affine_inv_0_1_BLUE*2.7777777777777772)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*jac_affine_inv_1_1_BLUE*-0.55555555555555558)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.6666666666666665)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*4.4408920985006262e-16)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*-1.9999999999999996 + jac_affine_inv_1_1_BLUE*-2.6666666666666665)*1.6666666666666665)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*0.33333333333333315 + jac_affine_inv_1_1_BLUE*0.33333333333333315)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*jac_affine_inv_1_0_BLUE*-0.55555555555555558)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*jac_affine_inv_1_1_BLUE*0.11111111111111113)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.6666666666666665)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*4.4408920985006262e-16)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*-1.9999999999999996 + jac_affine_inv_1_1_BLUE*-2.6666666666666665)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.3333333333333333)*(jac_affine_inv_0_1_BLUE*0.33333333333333315 + jac_affine_inv_1_1_BLUE*0.33333333333333315)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.3333333333333333)*3.333333333333333)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.3333333333333333)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.3333333333333333)*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.3333333333333333)*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*4.4408920985006262e-16)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.3333333333333333)*(jac_affine_inv_0_1_BLUE*-1.9999999999999996 + jac_affine_inv_1_1_BLUE*-2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)*(jac_affine_inv_0_1_BLUE*0.33333333333333315 + jac_affine_inv_1_1_BLUE*0.33333333333333315)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)*3.333333333333333)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*4.4408920985006262e-16)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)*(jac_affine_inv_0_1_BLUE*-1.9999999999999996 + jac_affine_inv_1_1_BLUE*-2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.99999999999999978 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)*(jac_affine_inv_0_1_BLUE*0.33333333333333315 + jac_affine_inv_1_1_BLUE*0.33333333333333315)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*-0.99999999999999978 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)*3.333333333333333)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*-0.99999999999999978 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.99999999999999978 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.99999999999999978 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*4.4408920985006262e-16)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.99999999999999978 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)*(jac_affine_inv_0_1_BLUE*-1.9999999999999996 + jac_affine_inv_1_1_BLUE*-2.6666666666666665)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.83333333333333348 + jac_affine_inv_1_0_BLUE*-0.83333333333333348)*(jac_affine_inv_0_1_BLUE*-1.666666666666667 + jac_affine_inv_1_1_BLUE*-1.666666666666667)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*-0.83333333333333348 + jac_affine_inv_1_0_BLUE*-0.83333333333333348)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*-0.83333333333333348 + jac_affine_inv_1_0_BLUE*-0.83333333333333348)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.83333333333333348 + jac_affine_inv_1_0_BLUE*-0.83333333333333348)*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.83333333333333348 + jac_affine_inv_1_0_BLUE*-0.83333333333333348)*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.0000000000000004)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.83333333333333348 + jac_affine_inv_1_0_BLUE*-0.83333333333333348)*(jac_affine_inv_0_1_BLUE*2.0000000000000004 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*-1.666666666666667 + jac_affine_inv_1_1_BLUE*-1.666666666666667)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*jac_affine_inv_0_1_BLUE*0.11111111111111113)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*jac_affine_inv_1_1_BLUE*0.11111111111111113)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.0000000000000004)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_0_BLUE*(jac_affine_inv_0_1_BLUE*2.0000000000000004 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*-1.666666666666667 + jac_affine_inv_1_1_BLUE*-1.666666666666667)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*jac_affine_inv_1_0_BLUE*0.11111111111111113)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*jac_affine_inv_1_1_BLUE*0.11111111111111113)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.0000000000000004)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_0_BLUE*(jac_affine_inv_0_1_BLUE*2.0000000000000004 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*-0.33333333333333337)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*(jac_affine_inv_0_1_BLUE*-1.666666666666667 + jac_affine_inv_1_1_BLUE*-1.666666666666667)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.0000000000000004)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*0.33333333333333331 + jac_affine_inv_1_0_BLUE*0.33333333333333331)*(jac_affine_inv_0_1_BLUE*2.0000000000000004 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.0000000000000002)*(jac_affine_inv_0_1_BLUE*-1.666666666666667 + jac_affine_inv_1_1_BLUE*-1.666666666666667)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.0000000000000002)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.0000000000000002)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.0000000000000002)*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.0000000000000002)*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.0000000000000004)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*-0.33333333333333331 + jac_affine_inv_1_0_BLUE*1.0000000000000002)*(jac_affine_inv_0_1_BLUE*2.0000000000000004 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*1.0000000000000002 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*(jac_affine_inv_0_1_BLUE*-1.666666666666667 + jac_affine_inv_1_1_BLUE*-1.666666666666667)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_0_1_BLUE*(jac_affine_inv_0_0_BLUE*1.0000000000000002 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*jac_affine_inv_1_1_BLUE*(jac_affine_inv_0_0_BLUE*1.0000000000000002 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*-0.66666666666666674)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*1.0000000000000002 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*(jac_affine_inv_0_1_BLUE*0.66666666666666663 + jac_affine_inv_1_1_BLUE*0.66666666666666663)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*1.0000000000000002 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*(jac_affine_inv_0_1_BLUE*-0.66666666666666663 + jac_affine_inv_1_1_BLUE*2.0000000000000004)*2.0)), ((real_t)(abs_det_jac_affine_BLUE*(jac_affine_inv_0_0_BLUE*1.0000000000000002 + jac_affine_inv_1_0_BLUE*-0.33333333333333331)*(jac_affine_inv_0_1_BLUE*2.0000000000000004 + jac_affine_inv_1_1_BLUE*-0.66666666666666663)*2.0))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
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
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_qloop_0 = (mu_dof_0*_data_phi_0_0_BLUE[6*q] + mu_dof_1*_data_phi_0_0_BLUE[6*q + 1] + mu_dof_2*_data_phi_0_0_BLUE[6*q + 2] + mu_dof_3*_data_phi_0_0_BLUE[6*q + 3] + mu_dof_4*_data_phi_0_0_BLUE[6*q + 4] + mu_dof_5*_data_phi_0_0_BLUE[6*q + 5])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 5];
                const real_t q_tmp_1_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 6];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 7];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 8];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 9];
                const real_t q_tmp_1_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 10];
                const real_t q_tmp_1_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 11];
                const real_t q_tmp_2_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 12];
                const real_t q_tmp_2_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 13];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 14];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 15];
                const real_t q_tmp_2_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 16];
                const real_t q_tmp_2_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 17];
                const real_t q_tmp_3_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 18];
                const real_t q_tmp_3_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 19];
                const real_t q_tmp_3_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 20];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 21];
                const real_t q_tmp_3_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 22];
                const real_t q_tmp_3_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 23];
                const real_t q_tmp_4_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 24];
                const real_t q_tmp_4_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 25];
                const real_t q_tmp_4_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 26];
                const real_t q_tmp_4_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 27];
                const real_t q_tmp_4_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 28];
                const real_t q_tmp_4_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 29];
                const real_t q_tmp_5_0 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 30];
                const real_t q_tmp_5_1 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 31];
                const real_t q_tmp_5_2 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 32];
                const real_t q_tmp_5_3 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 33];
                const real_t q_tmp_5_4 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 34];
                const real_t q_tmp_5_5 = tmp_qloop_0*_data_contract_2_jac_affine_inv_sym_grad_phi_jac_affine_inv_sym_grad_psi_det_symbol_0_0_BLUE[36*q + 35];
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
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
