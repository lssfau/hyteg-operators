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

























#include "../P1ElementwiseDiffusion.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseDiffusion::computeInverseDiagonalOperatorValues_macro_3D( real_t * RESTRICT  _data_invDiag_, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_0_GREEN_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_1_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_2_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_3_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_4_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_5_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_6_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_7_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_8_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_9_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_GREEN_DOWN = tmp_1_GREEN_DOWN;
       const real_t p_affine_const_0_1_GREEN_DOWN = tmp_2_GREEN_DOWN;
       const real_t p_affine_const_0_2_GREEN_DOWN = tmp_3_GREEN_DOWN;
       const real_t p_affine_const_1_0_GREEN_DOWN = tmp_1_GREEN_DOWN + tmp_4_GREEN_DOWN;
       const real_t p_affine_const_1_1_GREEN_DOWN = tmp_2_GREEN_DOWN + tmp_5_GREEN_DOWN;
       const real_t p_affine_const_1_2_GREEN_DOWN = tmp_3_GREEN_DOWN + tmp_6_GREEN_DOWN;
       const real_t p_affine_const_2_0_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_4_GREEN_DOWN + tmp_7_GREEN_DOWN;
       const real_t p_affine_const_2_1_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_5_GREEN_DOWN + tmp_8_GREEN_DOWN;
       const real_t p_affine_const_2_2_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_6_GREEN_DOWN + tmp_9_GREEN_DOWN;
       const real_t p_affine_const_3_0_GREEN_DOWN = tmp_1_GREEN_DOWN + tmp_7_GREEN_DOWN;
       const real_t p_affine_const_3_1_GREEN_DOWN = tmp_2_GREEN_DOWN + tmp_8_GREEN_DOWN;
       const real_t p_affine_const_3_2_GREEN_DOWN = tmp_3_GREEN_DOWN + tmp_9_GREEN_DOWN;
       const real_t jac_affine_0_0_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_1_0_GREEN_DOWN;
       const real_t jac_affine_0_1_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_2_0_GREEN_DOWN;
       const real_t jac_affine_0_2_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_3_0_GREEN_DOWN;
       const real_t jac_affine_1_0_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_1_1_GREEN_DOWN;
       const real_t jac_affine_1_1_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_2_1_GREEN_DOWN;
       const real_t tmp_14_GREEN_DOWN = jac_affine_0_2_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN;
       const real_t jac_affine_1_2_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_3_1_GREEN_DOWN;
       const real_t tmp_12_GREEN_DOWN = jac_affine_0_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN;
       const real_t jac_affine_2_0_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_1_2_GREEN_DOWN;
       const real_t jac_affine_2_1_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_2_2_GREEN_DOWN;
       const real_t tmp_11_GREEN_DOWN = jac_affine_1_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN;
       const real_t jac_affine_2_2_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_3_2_GREEN_DOWN;
       const real_t tmp_10_GREEN_DOWN = jac_affine_1_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN;
       const real_t tmp_13_GREEN_DOWN = jac_affine_0_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN;
       const real_t tmp_15_GREEN_DOWN = jac_affine_0_0_GREEN_DOWN*tmp_10_GREEN_DOWN - jac_affine_0_0_GREEN_DOWN*tmp_11_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_1_0_GREEN_DOWN*tmp_13_GREEN_DOWN + jac_affine_2_0_GREEN_DOWN*tmp_12_GREEN_DOWN - jac_affine_2_0_GREEN_DOWN*tmp_14_GREEN_DOWN;
       const real_t tmp_16_GREEN_DOWN = 1.0 / (tmp_15_GREEN_DOWN);
       const real_t jac_affine_inv_0_0_GREEN_DOWN = tmp_16_GREEN_DOWN*(tmp_10_GREEN_DOWN - tmp_11_GREEN_DOWN);
       const real_t jac_affine_inv_0_1_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_0_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - tmp_13_GREEN_DOWN);
       const real_t jac_affine_inv_0_2_GREEN_DOWN = tmp_16_GREEN_DOWN*(tmp_12_GREEN_DOWN - tmp_14_GREEN_DOWN);
       const real_t jac_affine_inv_1_0_GREEN_DOWN = tmp_16_GREEN_DOWN*(-jac_affine_1_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN + jac_affine_1_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const real_t jac_affine_inv_1_1_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_0_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN - jac_affine_0_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const real_t jac_affine_inv_1_2_GREEN_DOWN = tmp_16_GREEN_DOWN*(-jac_affine_0_0_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN);
       const real_t jac_affine_inv_2_0_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_1_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const real_t jac_affine_inv_2_1_GREEN_DOWN = tmp_16_GREEN_DOWN*(-jac_affine_0_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN + jac_affine_0_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const real_t jac_affine_inv_2_2_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_0_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN - jac_affine_0_1_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN);
       const real_t abs_det_jac_affine_GREEN_DOWN = abs(tmp_15_GREEN_DOWN);
       const real_t tmp_0_GREEN_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_1_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_2_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_3_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_4_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_5_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_6_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_GREEN_UP = tmp_1_GREEN_UP;
       const real_t p_affine_const_0_1_GREEN_UP = tmp_2_GREEN_UP;
       const real_t p_affine_const_0_2_GREEN_UP = tmp_3_GREEN_UP;
       const real_t p_affine_const_1_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_1_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_1_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_2_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_4_GREEN_UP;
       const real_t p_affine_const_2_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_5_GREEN_UP;
       const real_t p_affine_const_2_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_6_GREEN_UP;
       const real_t p_affine_const_3_0_GREEN_UP = tmp_1_GREEN_UP + tmp_4_GREEN_UP;
       const real_t p_affine_const_3_1_GREEN_UP = tmp_2_GREEN_UP + tmp_5_GREEN_UP;
       const real_t p_affine_const_3_2_GREEN_UP = tmp_3_GREEN_UP + tmp_6_GREEN_UP;
       const real_t jac_affine_0_0_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_1_0_GREEN_UP;
       const real_t jac_affine_0_1_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_2_0_GREEN_UP;
       const real_t jac_affine_0_2_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_3_0_GREEN_UP;
       const real_t jac_affine_1_0_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_1_1_GREEN_UP;
       const real_t jac_affine_1_1_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_2_1_GREEN_UP;
       const real_t tmp_11_GREEN_UP = jac_affine_0_2_GREEN_UP*jac_affine_1_1_GREEN_UP;
       const real_t jac_affine_1_2_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_3_1_GREEN_UP;
       const real_t tmp_9_GREEN_UP = jac_affine_0_1_GREEN_UP*jac_affine_1_2_GREEN_UP;
       const real_t jac_affine_2_0_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_1_2_GREEN_UP;
       const real_t jac_affine_2_1_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_2_2_GREEN_UP;
       const real_t tmp_8_GREEN_UP = jac_affine_1_2_GREEN_UP*jac_affine_2_1_GREEN_UP;
       const real_t jac_affine_2_2_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_3_2_GREEN_UP;
       const real_t tmp_7_GREEN_UP = jac_affine_1_1_GREEN_UP*jac_affine_2_2_GREEN_UP;
       const real_t tmp_10_GREEN_UP = jac_affine_0_1_GREEN_UP*jac_affine_2_2_GREEN_UP;
       const real_t tmp_12_GREEN_UP = jac_affine_0_0_GREEN_UP*tmp_7_GREEN_UP - jac_affine_0_0_GREEN_UP*tmp_8_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_1_0_GREEN_UP*tmp_10_GREEN_UP - jac_affine_2_0_GREEN_UP*tmp_11_GREEN_UP + jac_affine_2_0_GREEN_UP*tmp_9_GREEN_UP;
       const real_t tmp_13_GREEN_UP = 1.0 / (tmp_12_GREEN_UP);
       const real_t jac_affine_inv_0_0_GREEN_UP = tmp_13_GREEN_UP*(tmp_7_GREEN_UP - tmp_8_GREEN_UP);
       const real_t jac_affine_inv_0_1_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_0_2_GREEN_UP*jac_affine_2_1_GREEN_UP - tmp_10_GREEN_UP);
       const real_t jac_affine_inv_0_2_GREEN_UP = tmp_13_GREEN_UP*(-tmp_11_GREEN_UP + tmp_9_GREEN_UP);
       const real_t jac_affine_inv_1_0_GREEN_UP = tmp_13_GREEN_UP*(-jac_affine_1_0_GREEN_UP*jac_affine_2_2_GREEN_UP + jac_affine_1_2_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const real_t jac_affine_inv_1_1_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_0_0_GREEN_UP*jac_affine_2_2_GREEN_UP - jac_affine_0_2_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const real_t jac_affine_inv_1_2_GREEN_UP = tmp_13_GREEN_UP*(-jac_affine_0_0_GREEN_UP*jac_affine_1_2_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP);
       const real_t jac_affine_inv_2_0_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_1_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const real_t jac_affine_inv_2_1_GREEN_UP = tmp_13_GREEN_UP*(-jac_affine_0_0_GREEN_UP*jac_affine_2_1_GREEN_UP + jac_affine_0_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const real_t jac_affine_inv_2_2_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_0_0_GREEN_UP*jac_affine_1_1_GREEN_UP - jac_affine_0_1_GREEN_UP*jac_affine_1_0_GREEN_UP);
       const real_t abs_det_jac_affine_GREEN_UP = abs(tmp_12_GREEN_UP);
       const real_t tmp_0_BLUE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_1_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_2_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_3_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_4_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_5_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_4_BLUE_DOWN;
       const real_t tmp_6_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_7_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_6_BLUE_DOWN;
       const real_t tmp_8_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t tmp_9_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_8_BLUE_DOWN;
       const real_t p_affine_const_0_0_BLUE_DOWN = tmp_1_BLUE_DOWN;
       const real_t p_affine_const_0_1_BLUE_DOWN = tmp_2_BLUE_DOWN;
       const real_t p_affine_const_0_2_BLUE_DOWN = tmp_3_BLUE_DOWN;
       const real_t p_affine_const_1_0_BLUE_DOWN = tmp_5_BLUE_DOWN;
       const real_t p_affine_const_1_1_BLUE_DOWN = tmp_7_BLUE_DOWN;
       const real_t p_affine_const_1_2_BLUE_DOWN = tmp_9_BLUE_DOWN;
       const real_t p_affine_const_2_0_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_5_BLUE_DOWN;
       const real_t p_affine_const_2_1_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_7_BLUE_DOWN;
       const real_t p_affine_const_2_2_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_9_BLUE_DOWN;
       const real_t p_affine_const_3_0_BLUE_DOWN = tmp_1_BLUE_DOWN + tmp_4_BLUE_DOWN;
       const real_t p_affine_const_3_1_BLUE_DOWN = tmp_2_BLUE_DOWN + tmp_6_BLUE_DOWN;
       const real_t p_affine_const_3_2_BLUE_DOWN = tmp_3_BLUE_DOWN + tmp_8_BLUE_DOWN;
       const real_t jac_affine_0_0_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_1_0_BLUE_DOWN;
       const real_t jac_affine_0_1_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_2_0_BLUE_DOWN;
       const real_t jac_affine_0_2_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_3_0_BLUE_DOWN;
       const real_t jac_affine_1_0_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_1_1_BLUE_DOWN;
       const real_t jac_affine_1_1_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_2_1_BLUE_DOWN;
       const real_t tmp_14_BLUE_DOWN = jac_affine_0_2_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN;
       const real_t jac_affine_1_2_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_3_1_BLUE_DOWN;
       const real_t tmp_12_BLUE_DOWN = jac_affine_0_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN;
       const real_t jac_affine_2_0_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_1_2_BLUE_DOWN;
       const real_t jac_affine_2_1_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_2_2_BLUE_DOWN;
       const real_t tmp_11_BLUE_DOWN = jac_affine_1_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN;
       const real_t jac_affine_2_2_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_3_2_BLUE_DOWN;
       const real_t tmp_10_BLUE_DOWN = jac_affine_1_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN;
       const real_t tmp_13_BLUE_DOWN = jac_affine_0_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN;
       const real_t tmp_15_BLUE_DOWN = jac_affine_0_0_BLUE_DOWN*tmp_10_BLUE_DOWN - jac_affine_0_0_BLUE_DOWN*tmp_11_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_1_0_BLUE_DOWN*tmp_13_BLUE_DOWN + jac_affine_2_0_BLUE_DOWN*tmp_12_BLUE_DOWN - jac_affine_2_0_BLUE_DOWN*tmp_14_BLUE_DOWN;
       const real_t tmp_16_BLUE_DOWN = 1.0 / (tmp_15_BLUE_DOWN);
       const real_t jac_affine_inv_0_0_BLUE_DOWN = tmp_16_BLUE_DOWN*(tmp_10_BLUE_DOWN - tmp_11_BLUE_DOWN);
       const real_t jac_affine_inv_0_1_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_0_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - tmp_13_BLUE_DOWN);
       const real_t jac_affine_inv_0_2_BLUE_DOWN = tmp_16_BLUE_DOWN*(tmp_12_BLUE_DOWN - tmp_14_BLUE_DOWN);
       const real_t jac_affine_inv_1_0_BLUE_DOWN = tmp_16_BLUE_DOWN*(-jac_affine_1_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN + jac_affine_1_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const real_t jac_affine_inv_1_1_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_0_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN - jac_affine_0_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const real_t jac_affine_inv_1_2_BLUE_DOWN = tmp_16_BLUE_DOWN*(-jac_affine_0_0_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN);
       const real_t jac_affine_inv_2_0_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_1_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const real_t jac_affine_inv_2_1_BLUE_DOWN = tmp_16_BLUE_DOWN*(-jac_affine_0_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN + jac_affine_0_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const real_t jac_affine_inv_2_2_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_0_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN - jac_affine_0_1_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN);
       const real_t abs_det_jac_affine_BLUE_DOWN = abs(tmp_15_BLUE_DOWN);
       const real_t tmp_0_BLUE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_1_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_2_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_3_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_4_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_5_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_6_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_0_0_BLUE_UP = tmp_1_BLUE_UP;
       const real_t p_affine_const_0_1_BLUE_UP = tmp_2_BLUE_UP;
       const real_t p_affine_const_0_2_BLUE_UP = tmp_3_BLUE_UP;
       const real_t p_affine_const_1_0_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_4_BLUE_UP;
       const real_t p_affine_const_1_1_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_5_BLUE_UP;
       const real_t p_affine_const_1_2_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_6_BLUE_UP;
       const real_t p_affine_const_2_0_BLUE_UP = tmp_1_BLUE_UP + tmp_4_BLUE_UP;
       const real_t p_affine_const_2_1_BLUE_UP = tmp_2_BLUE_UP + tmp_5_BLUE_UP;
       const real_t p_affine_const_2_2_BLUE_UP = tmp_3_BLUE_UP + tmp_6_BLUE_UP;
       const real_t p_affine_const_3_0_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_1_BLUE_UP;
       const real_t p_affine_const_3_1_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_2_BLUE_UP;
       const real_t p_affine_const_3_2_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_3_BLUE_UP;
       const real_t jac_affine_0_0_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_1_0_BLUE_UP;
       const real_t jac_affine_0_1_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_2_0_BLUE_UP;
       const real_t jac_affine_0_2_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_3_0_BLUE_UP;
       const real_t jac_affine_1_0_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_1_1_BLUE_UP;
       const real_t jac_affine_1_1_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_2_1_BLUE_UP;
       const real_t tmp_11_BLUE_UP = jac_affine_0_2_BLUE_UP*jac_affine_1_1_BLUE_UP;
       const real_t jac_affine_1_2_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_3_1_BLUE_UP;
       const real_t tmp_9_BLUE_UP = jac_affine_0_1_BLUE_UP*jac_affine_1_2_BLUE_UP;
       const real_t jac_affine_2_0_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_1_2_BLUE_UP;
       const real_t jac_affine_2_1_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_2_2_BLUE_UP;
       const real_t tmp_8_BLUE_UP = jac_affine_1_2_BLUE_UP*jac_affine_2_1_BLUE_UP;
       const real_t jac_affine_2_2_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_3_2_BLUE_UP;
       const real_t tmp_7_BLUE_UP = jac_affine_1_1_BLUE_UP*jac_affine_2_2_BLUE_UP;
       const real_t tmp_10_BLUE_UP = jac_affine_0_1_BLUE_UP*jac_affine_2_2_BLUE_UP;
       const real_t tmp_12_BLUE_UP = jac_affine_0_0_BLUE_UP*tmp_7_BLUE_UP - jac_affine_0_0_BLUE_UP*tmp_8_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_1_0_BLUE_UP*tmp_10_BLUE_UP - jac_affine_2_0_BLUE_UP*tmp_11_BLUE_UP + jac_affine_2_0_BLUE_UP*tmp_9_BLUE_UP;
       const real_t tmp_13_BLUE_UP = 1.0 / (tmp_12_BLUE_UP);
       const real_t jac_affine_inv_0_0_BLUE_UP = tmp_13_BLUE_UP*(tmp_7_BLUE_UP - tmp_8_BLUE_UP);
       const real_t jac_affine_inv_0_1_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_0_2_BLUE_UP*jac_affine_2_1_BLUE_UP - tmp_10_BLUE_UP);
       const real_t jac_affine_inv_0_2_BLUE_UP = tmp_13_BLUE_UP*(-tmp_11_BLUE_UP + tmp_9_BLUE_UP);
       const real_t jac_affine_inv_1_0_BLUE_UP = tmp_13_BLUE_UP*(-jac_affine_1_0_BLUE_UP*jac_affine_2_2_BLUE_UP + jac_affine_1_2_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const real_t jac_affine_inv_1_1_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_0_0_BLUE_UP*jac_affine_2_2_BLUE_UP - jac_affine_0_2_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const real_t jac_affine_inv_1_2_BLUE_UP = tmp_13_BLUE_UP*(-jac_affine_0_0_BLUE_UP*jac_affine_1_2_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP);
       const real_t jac_affine_inv_2_0_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_1_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const real_t jac_affine_inv_2_1_BLUE_UP = tmp_13_BLUE_UP*(-jac_affine_0_0_BLUE_UP*jac_affine_2_1_BLUE_UP + jac_affine_0_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const real_t jac_affine_inv_2_2_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_0_0_BLUE_UP*jac_affine_1_1_BLUE_UP - jac_affine_0_1_BLUE_UP*jac_affine_1_0_BLUE_UP);
       const real_t abs_det_jac_affine_BLUE_UP = abs(tmp_12_BLUE_UP);
       const real_t tmp_0_WHITE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_1_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_2_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_3_WHITE_DOWN = tmp_1_WHITE_DOWN + tmp_2_WHITE_DOWN;
       const real_t tmp_4_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_5_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_6_WHITE_DOWN = tmp_4_WHITE_DOWN + tmp_5_WHITE_DOWN;
       const real_t tmp_7_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_8_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_9_WHITE_DOWN = tmp_7_WHITE_DOWN + tmp_8_WHITE_DOWN;
       const real_t tmp_10_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_11_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_12_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_WHITE_DOWN = tmp_3_WHITE_DOWN;
       const real_t p_affine_const_0_1_WHITE_DOWN = tmp_6_WHITE_DOWN;
       const real_t p_affine_const_0_2_WHITE_DOWN = tmp_9_WHITE_DOWN;
       const real_t p_affine_const_1_0_WHITE_DOWN = tmp_10_WHITE_DOWN + tmp_2_WHITE_DOWN;
       const real_t p_affine_const_1_1_WHITE_DOWN = tmp_11_WHITE_DOWN + tmp_5_WHITE_DOWN;
       const real_t p_affine_const_1_2_WHITE_DOWN = tmp_12_WHITE_DOWN + tmp_8_WHITE_DOWN;
       const real_t p_affine_const_2_0_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_10_WHITE_DOWN + tmp_1_WHITE_DOWN;
       const real_t p_affine_const_2_1_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_11_WHITE_DOWN + tmp_4_WHITE_DOWN;
       const real_t p_affine_const_2_2_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_12_WHITE_DOWN + tmp_7_WHITE_DOWN;
       const real_t p_affine_const_3_0_WHITE_DOWN = tmp_10_WHITE_DOWN + tmp_3_WHITE_DOWN;
       const real_t p_affine_const_3_1_WHITE_DOWN = tmp_11_WHITE_DOWN + tmp_6_WHITE_DOWN;
       const real_t p_affine_const_3_2_WHITE_DOWN = tmp_12_WHITE_DOWN + tmp_9_WHITE_DOWN;
       const real_t jac_affine_0_0_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_1_0_WHITE_DOWN;
       const real_t jac_affine_0_1_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_2_0_WHITE_DOWN;
       const real_t jac_affine_0_2_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_3_0_WHITE_DOWN;
       const real_t jac_affine_1_0_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_1_1_WHITE_DOWN;
       const real_t jac_affine_1_1_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_2_1_WHITE_DOWN;
       const real_t tmp_17_WHITE_DOWN = jac_affine_0_2_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN;
       const real_t jac_affine_1_2_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_3_1_WHITE_DOWN;
       const real_t tmp_15_WHITE_DOWN = jac_affine_0_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN;
       const real_t jac_affine_2_0_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_1_2_WHITE_DOWN;
       const real_t jac_affine_2_1_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_2_2_WHITE_DOWN;
       const real_t tmp_14_WHITE_DOWN = jac_affine_1_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN;
       const real_t jac_affine_2_2_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_3_2_WHITE_DOWN;
       const real_t tmp_13_WHITE_DOWN = jac_affine_1_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN;
       const real_t tmp_16_WHITE_DOWN = jac_affine_0_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN;
       const real_t tmp_18_WHITE_DOWN = jac_affine_0_0_WHITE_DOWN*tmp_13_WHITE_DOWN - jac_affine_0_0_WHITE_DOWN*tmp_14_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_1_0_WHITE_DOWN*tmp_16_WHITE_DOWN + jac_affine_2_0_WHITE_DOWN*tmp_15_WHITE_DOWN - jac_affine_2_0_WHITE_DOWN*tmp_17_WHITE_DOWN;
       const real_t tmp_19_WHITE_DOWN = 1.0 / (tmp_18_WHITE_DOWN);
       const real_t jac_affine_inv_0_0_WHITE_DOWN = tmp_19_WHITE_DOWN*(tmp_13_WHITE_DOWN - tmp_14_WHITE_DOWN);
       const real_t jac_affine_inv_0_1_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_0_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - tmp_16_WHITE_DOWN);
       const real_t jac_affine_inv_0_2_WHITE_DOWN = tmp_19_WHITE_DOWN*(tmp_15_WHITE_DOWN - tmp_17_WHITE_DOWN);
       const real_t jac_affine_inv_1_0_WHITE_DOWN = tmp_19_WHITE_DOWN*(-jac_affine_1_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN + jac_affine_1_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const real_t jac_affine_inv_1_1_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_0_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN - jac_affine_0_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const real_t jac_affine_inv_1_2_WHITE_DOWN = tmp_19_WHITE_DOWN*(-jac_affine_0_0_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN);
       const real_t jac_affine_inv_2_0_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_1_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const real_t jac_affine_inv_2_1_WHITE_DOWN = tmp_19_WHITE_DOWN*(-jac_affine_0_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN + jac_affine_0_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const real_t jac_affine_inv_2_2_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_0_0_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN - jac_affine_0_1_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN);
       const real_t abs_det_jac_affine_WHITE_DOWN = abs(tmp_18_WHITE_DOWN);
       const real_t tmp_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const real_t p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t jac_affine_0_0_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_1_0_WHITE_UP;
       const real_t jac_affine_0_1_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_2_0_WHITE_UP;
       const real_t jac_affine_0_2_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_3_0_WHITE_UP;
       const real_t jac_affine_1_0_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_1_1_WHITE_UP;
       const real_t jac_affine_1_1_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_2_1_WHITE_UP;
       const real_t tmp_5_WHITE_UP = jac_affine_0_2_WHITE_UP*jac_affine_1_1_WHITE_UP;
       const real_t jac_affine_1_2_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_3_1_WHITE_UP;
       const real_t tmp_3_WHITE_UP = jac_affine_0_1_WHITE_UP*jac_affine_1_2_WHITE_UP;
       const real_t jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const real_t jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const real_t tmp_2_WHITE_UP = jac_affine_1_2_WHITE_UP*jac_affine_2_1_WHITE_UP;
       const real_t jac_affine_2_2_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_3_2_WHITE_UP;
       const real_t tmp_1_WHITE_UP = jac_affine_1_1_WHITE_UP*jac_affine_2_2_WHITE_UP;
       const real_t tmp_4_WHITE_UP = jac_affine_0_1_WHITE_UP*jac_affine_2_2_WHITE_UP;
       const real_t tmp_6_WHITE_UP = jac_affine_0_0_WHITE_UP*tmp_1_WHITE_UP - jac_affine_0_0_WHITE_UP*tmp_2_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_1_0_WHITE_UP*tmp_4_WHITE_UP + jac_affine_2_0_WHITE_UP*tmp_3_WHITE_UP - jac_affine_2_0_WHITE_UP*tmp_5_WHITE_UP;
       const real_t tmp_7_WHITE_UP = 1.0 / (tmp_6_WHITE_UP);
       const real_t jac_affine_inv_0_0_WHITE_UP = tmp_7_WHITE_UP*(tmp_1_WHITE_UP - tmp_2_WHITE_UP);
       const real_t jac_affine_inv_0_1_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_0_2_WHITE_UP*jac_affine_2_1_WHITE_UP - tmp_4_WHITE_UP);
       const real_t jac_affine_inv_0_2_WHITE_UP = tmp_7_WHITE_UP*(tmp_3_WHITE_UP - tmp_5_WHITE_UP);
       const real_t jac_affine_inv_1_0_WHITE_UP = tmp_7_WHITE_UP*(-jac_affine_1_0_WHITE_UP*jac_affine_2_2_WHITE_UP + jac_affine_1_2_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const real_t jac_affine_inv_1_1_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_0_0_WHITE_UP*jac_affine_2_2_WHITE_UP - jac_affine_0_2_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const real_t jac_affine_inv_1_2_WHITE_UP = tmp_7_WHITE_UP*(-jac_affine_0_0_WHITE_UP*jac_affine_1_2_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP);
       const real_t jac_affine_inv_2_0_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_1_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const real_t jac_affine_inv_2_1_WHITE_UP = tmp_7_WHITE_UP*(-jac_affine_0_0_WHITE_UP*jac_affine_2_1_WHITE_UP + jac_affine_0_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const real_t jac_affine_inv_2_2_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_0_0_WHITE_UP*jac_affine_1_1_WHITE_UP - jac_affine_0_1_WHITE_UP*jac_affine_1_0_WHITE_UP);
       const real_t abs_det_jac_affine_WHITE_UP = abs(tmp_6_WHITE_UP);
       const real_t Dummy_1735 = abs_det_jac_affine_WHITE_UP*0.16666666666666666;
       const real_t elMatDiag_0 = Dummy_1735*(((-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)*(-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)) + ((-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)*(-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)) + ((-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)*(-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)));
       const real_t elMatDiag_1 = Dummy_1735*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
       const real_t elMatDiag_2 = Dummy_1735*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
       const real_t elMatDiag_3 = Dummy_1735*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
       const real_t Dummy_1736 = abs_det_jac_affine_WHITE_DOWN*0.16666666666666666;
       const real_t Dummy_1737 = Dummy_1736*(((-jac_affine_inv_0_0_WHITE_DOWN - jac_affine_inv_1_0_WHITE_DOWN - jac_affine_inv_2_0_WHITE_DOWN)*(-jac_affine_inv_0_0_WHITE_DOWN - jac_affine_inv_1_0_WHITE_DOWN - jac_affine_inv_2_0_WHITE_DOWN)) + ((-jac_affine_inv_0_1_WHITE_DOWN - jac_affine_inv_1_1_WHITE_DOWN - jac_affine_inv_2_1_WHITE_DOWN)*(-jac_affine_inv_0_1_WHITE_DOWN - jac_affine_inv_1_1_WHITE_DOWN - jac_affine_inv_2_1_WHITE_DOWN)) + ((-jac_affine_inv_0_2_WHITE_DOWN - jac_affine_inv_1_2_WHITE_DOWN - jac_affine_inv_2_2_WHITE_DOWN)*(-jac_affine_inv_0_2_WHITE_DOWN - jac_affine_inv_1_2_WHITE_DOWN - jac_affine_inv_2_2_WHITE_DOWN)));
       const real_t Dummy_1738 = Dummy_1736*((jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_0_0_WHITE_DOWN) + (jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_0_1_WHITE_DOWN) + (jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_0_2_WHITE_DOWN));
       const real_t Dummy_1739 = Dummy_1736*((jac_affine_inv_1_0_WHITE_DOWN*jac_affine_inv_1_0_WHITE_DOWN) + (jac_affine_inv_1_1_WHITE_DOWN*jac_affine_inv_1_1_WHITE_DOWN) + (jac_affine_inv_1_2_WHITE_DOWN*jac_affine_inv_1_2_WHITE_DOWN));
       const real_t Dummy_1740 = Dummy_1736*((jac_affine_inv_2_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN) + (jac_affine_inv_2_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN) + (jac_affine_inv_2_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN));
       const real_t Dummy_1741 = abs_det_jac_affine_BLUE_UP*0.16666666666666666;
       const real_t Dummy_1742 = Dummy_1741*(((-jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP)*(-jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP)) + ((-jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP)*(-jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP)) + ((-jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP)*(-jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP)));
       const real_t Dummy_1743 = Dummy_1741*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
       const real_t Dummy_1744 = Dummy_1741*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
       const real_t Dummy_1745 = Dummy_1741*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP));
       const real_t Dummy_1746 = abs_det_jac_affine_BLUE_DOWN*0.16666666666666666;
       const real_t Dummy_1747 = Dummy_1746*(((-jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN)*(-jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN)) + ((-jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN)*(-jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN)) + ((-jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN)*(-jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN)));
       const real_t Dummy_1748 = Dummy_1746*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
       const real_t Dummy_1749 = Dummy_1746*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
       const real_t Dummy_1750 = Dummy_1746*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN));
       const real_t Dummy_1751 = abs_det_jac_affine_GREEN_UP*0.16666666666666666;
       const real_t Dummy_1752 = Dummy_1751*(((-jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP)*(-jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP)) + ((-jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP)*(-jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP)) + ((-jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP)*(-jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP)));
       const real_t Dummy_1753 = Dummy_1751*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
       const real_t Dummy_1754 = Dummy_1751*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
       const real_t Dummy_1755 = Dummy_1751*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP));
       const real_t Dummy_1756 = abs_det_jac_affine_GREEN_DOWN*0.16666666666666666;
       const real_t Dummy_1757 = Dummy_1756*(((-jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN)*(-jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN)) + ((-jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN)*(-jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN)) + ((-jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN)*(-jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN)));
       const real_t Dummy_1758 = Dummy_1756*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
       const real_t Dummy_1759 = Dummy_1756*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
       const real_t Dummy_1760 = Dummy_1756*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN));
       const real_t Dummy_1777 = abs_det_jac_affine_WHITE_UP*0.16666666666666666;
       const real_t Dummy_1778 = Dummy_1777*(((-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)*(-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)) + ((-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)*(-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)) + ((-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)*(-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)));
       const real_t Dummy_1779 = Dummy_1777*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
       const real_t Dummy_1780 = Dummy_1777*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
       const real_t Dummy_1781 = Dummy_1777*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
       for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
       for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             {
                {
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1737 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1738 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1739 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1740 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1742 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1743 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1744 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1745 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1747 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1748 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1749 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1750 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1752 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1753 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1754 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1755 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1757 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1758 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1759 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1760 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
          }
          if (-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2 >= 0)
          {
             const real_t tmp_0_WHITE_UP = abs_det_jac_affine_WHITE_UP*0.16666666666666666;
             const real_t elMatDiag_0 = tmp_0_WHITE_UP*(((-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)*(-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)) + ((-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)*(-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)) + ((-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)*(-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)));
             const real_t elMatDiag_1 = tmp_0_WHITE_UP*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
             const real_t elMatDiag_2 = tmp_0_WHITE_UP*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
             const real_t elMatDiag_3 = tmp_0_WHITE_UP*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatDiag_0 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatDiag_1 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatDiag_2 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatDiag_3 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const real_t tmp_0_BLUE_UP = abs_det_jac_affine_BLUE_UP*0.16666666666666666;
             const real_t Dummy_1761 = tmp_0_BLUE_UP*(((-jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP)*(-jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP)) + ((-jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP)*(-jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP)) + ((-jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP)*(-jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP)));
             const real_t Dummy_1762 = tmp_0_BLUE_UP*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
             const real_t Dummy_1763 = tmp_0_BLUE_UP*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
             const real_t Dummy_1764 = tmp_0_BLUE_UP*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP));
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1761 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1762 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1763 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1764 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
             const real_t tmp_0_BLUE_DOWN = abs_det_jac_affine_BLUE_DOWN*0.16666666666666666;
             const real_t Dummy_1765 = tmp_0_BLUE_DOWN*(((-jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN)*(-jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN)) + ((-jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN)*(-jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN)) + ((-jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN)*(-jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN)));
             const real_t Dummy_1766 = tmp_0_BLUE_DOWN*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
             const real_t Dummy_1767 = tmp_0_BLUE_DOWN*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
             const real_t Dummy_1768 = tmp_0_BLUE_DOWN*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN));
             {
                {
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1765 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1766 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1767 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1768 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const real_t tmp_0_GREEN_UP = abs_det_jac_affine_GREEN_UP*0.16666666666666666;
             const real_t Dummy_1769 = tmp_0_GREEN_UP*(((-jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP)*(-jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP)) + ((-jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP)*(-jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP)) + ((-jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP)*(-jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP)));
             const real_t Dummy_1770 = tmp_0_GREEN_UP*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
             const real_t Dummy_1771 = tmp_0_GREEN_UP*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
             const real_t Dummy_1772 = tmp_0_GREEN_UP*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP));
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1769 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1770 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1771 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1772 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
             const real_t tmp_0_GREEN_DOWN = abs_det_jac_affine_GREEN_DOWN*0.16666666666666666;
             const real_t Dummy_1773 = tmp_0_GREEN_DOWN*(((-jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN)*(-jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN)) + ((-jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN)*(-jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN)) + ((-jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN)*(-jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN)));
             const real_t Dummy_1774 = tmp_0_GREEN_DOWN*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
             const real_t Dummy_1775 = tmp_0_GREEN_DOWN*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
             const real_t Dummy_1776 = tmp_0_GREEN_DOWN*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN));
             {
                {
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1773 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1774 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1775 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1776 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
          } 
          {
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1778 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1779 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1780 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1781 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
