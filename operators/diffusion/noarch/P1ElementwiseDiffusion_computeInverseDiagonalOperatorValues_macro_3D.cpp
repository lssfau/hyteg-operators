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

void P1ElementwiseDiffusion::computeInverseDiagonalOperatorValues_macro_3D( walberla::float64 * RESTRICT  _data_invDiag_, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_0comp2, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_1comp2, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, walberla::float64 macro_vertex_coord_id_2comp2, walberla::float64 macro_vertex_coord_id_3comp0, walberla::float64 macro_vertex_coord_id_3comp1, walberla::float64 macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 tmp_coords_jac_0_GREEN_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_2_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_coords_jac_3_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_coords_jac_4_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_5_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_6_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_coords_jac_7_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_coords_jac_8_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_coords_jac_9_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_4_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN + tmp_coords_jac_5_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_6_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_0_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_1_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_2_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
       const walberla::float64 jac_affine_0_0_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_1_0_GREEN_DOWN;
       const walberla::float64 jac_affine_0_1_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_2_0_GREEN_DOWN;
       const walberla::float64 jac_affine_0_2_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_3_0_GREEN_DOWN;
       const walberla::float64 jac_affine_1_0_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_1_1_GREEN_DOWN;
       const walberla::float64 jac_affine_1_1_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_2_1_GREEN_DOWN;
       const walberla::float64 tmp_coords_jac_14_GREEN_DOWN = jac_affine_0_2_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN;
       const walberla::float64 jac_affine_1_2_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_3_1_GREEN_DOWN;
       const walberla::float64 tmp_coords_jac_12_GREEN_DOWN = jac_affine_0_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_0_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_1_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_1_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_2_2_GREEN_DOWN;
       const walberla::float64 tmp_coords_jac_11_GREEN_DOWN = jac_affine_1_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN;
       const walberla::float64 jac_affine_2_2_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_3_2_GREEN_DOWN;
       const walberla::float64 tmp_coords_jac_10_GREEN_DOWN = jac_affine_1_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN;
       const walberla::float64 tmp_coords_jac_13_GREEN_DOWN = jac_affine_0_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN;
       const walberla::float64 tmp_coords_jac_15_GREEN_DOWN = jac_affine_0_0_GREEN_DOWN*tmp_coords_jac_10_GREEN_DOWN - jac_affine_0_0_GREEN_DOWN*tmp_coords_jac_11_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_1_0_GREEN_DOWN*tmp_coords_jac_13_GREEN_DOWN + jac_affine_2_0_GREEN_DOWN*tmp_coords_jac_12_GREEN_DOWN - jac_affine_2_0_GREEN_DOWN*tmp_coords_jac_14_GREEN_DOWN;
       const walberla::float64 tmp_coords_jac_16_GREEN_DOWN = 1.0 / (tmp_coords_jac_15_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_0_0_GREEN_DOWN = tmp_coords_jac_16_GREEN_DOWN*(tmp_coords_jac_10_GREEN_DOWN - tmp_coords_jac_11_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_0_1_GREEN_DOWN = tmp_coords_jac_16_GREEN_DOWN*(jac_affine_0_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - tmp_coords_jac_13_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_0_2_GREEN_DOWN = tmp_coords_jac_16_GREEN_DOWN*(tmp_coords_jac_12_GREEN_DOWN - tmp_coords_jac_14_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_1_0_GREEN_DOWN = tmp_coords_jac_16_GREEN_DOWN*(-jac_affine_1_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN + jac_affine_1_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_1_1_GREEN_DOWN = tmp_coords_jac_16_GREEN_DOWN*(jac_affine_0_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN - jac_affine_0_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_1_2_GREEN_DOWN = tmp_coords_jac_16_GREEN_DOWN*(-jac_affine_0_0_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_2_0_GREEN_DOWN = tmp_coords_jac_16_GREEN_DOWN*(jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_1_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_2_1_GREEN_DOWN = tmp_coords_jac_16_GREEN_DOWN*(-jac_affine_0_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN + jac_affine_0_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_2_2_GREEN_DOWN = tmp_coords_jac_16_GREEN_DOWN*(jac_affine_0_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN - jac_affine_0_1_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN);
       const walberla::float64 abs_det_jac_affine_GREEN_DOWN = abs(tmp_coords_jac_15_GREEN_DOWN);
       const walberla::float64 tmp_coords_jac_0_GREEN_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_2_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_3_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_coords_jac_4_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_coords_jac_5_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_coords_jac_6_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_UP = tmp_coords_jac_1_GREEN_UP;
       const walberla::float64 p_affine_const_0_1_GREEN_UP = tmp_coords_jac_2_GREEN_UP;
       const walberla::float64 p_affine_const_0_2_GREEN_UP = tmp_coords_jac_3_GREEN_UP;
       const walberla::float64 p_affine_const_1_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_1_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_1_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_2_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_GREEN_UP;
       const walberla::float64 p_affine_const_2_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_GREEN_UP;
       const walberla::float64 p_affine_const_2_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_GREEN_UP;
       const walberla::float64 p_affine_const_3_0_GREEN_UP = tmp_coords_jac_1_GREEN_UP + tmp_coords_jac_4_GREEN_UP;
       const walberla::float64 p_affine_const_3_1_GREEN_UP = tmp_coords_jac_2_GREEN_UP + tmp_coords_jac_5_GREEN_UP;
       const walberla::float64 p_affine_const_3_2_GREEN_UP = tmp_coords_jac_3_GREEN_UP + tmp_coords_jac_6_GREEN_UP;
       const walberla::float64 jac_affine_0_0_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_1_0_GREEN_UP;
       const walberla::float64 jac_affine_0_1_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_2_0_GREEN_UP;
       const walberla::float64 jac_affine_0_2_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_3_0_GREEN_UP;
       const walberla::float64 jac_affine_1_0_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_1_1_GREEN_UP;
       const walberla::float64 jac_affine_1_1_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_2_1_GREEN_UP;
       const walberla::float64 tmp_coords_jac_11_GREEN_UP = jac_affine_0_2_GREEN_UP*jac_affine_1_1_GREEN_UP;
       const walberla::float64 jac_affine_1_2_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_3_1_GREEN_UP;
       const walberla::float64 tmp_coords_jac_9_GREEN_UP = jac_affine_0_1_GREEN_UP*jac_affine_1_2_GREEN_UP;
       const walberla::float64 jac_affine_2_0_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_1_2_GREEN_UP;
       const walberla::float64 jac_affine_2_1_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_2_2_GREEN_UP;
       const walberla::float64 tmp_coords_jac_8_GREEN_UP = jac_affine_1_2_GREEN_UP*jac_affine_2_1_GREEN_UP;
       const walberla::float64 jac_affine_2_2_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_3_2_GREEN_UP;
       const walberla::float64 tmp_coords_jac_7_GREEN_UP = jac_affine_1_1_GREEN_UP*jac_affine_2_2_GREEN_UP;
       const walberla::float64 tmp_coords_jac_10_GREEN_UP = jac_affine_0_1_GREEN_UP*jac_affine_2_2_GREEN_UP;
       const walberla::float64 tmp_coords_jac_12_GREEN_UP = jac_affine_0_0_GREEN_UP*tmp_coords_jac_7_GREEN_UP - jac_affine_0_0_GREEN_UP*tmp_coords_jac_8_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_1_0_GREEN_UP*tmp_coords_jac_10_GREEN_UP - jac_affine_2_0_GREEN_UP*tmp_coords_jac_11_GREEN_UP + jac_affine_2_0_GREEN_UP*tmp_coords_jac_9_GREEN_UP;
       const walberla::float64 tmp_coords_jac_13_GREEN_UP = 1.0 / (tmp_coords_jac_12_GREEN_UP);
       const walberla::float64 jac_affine_inv_0_0_GREEN_UP = tmp_coords_jac_13_GREEN_UP*(tmp_coords_jac_7_GREEN_UP - tmp_coords_jac_8_GREEN_UP);
       const walberla::float64 jac_affine_inv_0_1_GREEN_UP = tmp_coords_jac_13_GREEN_UP*(jac_affine_0_2_GREEN_UP*jac_affine_2_1_GREEN_UP - tmp_coords_jac_10_GREEN_UP);
       const walberla::float64 jac_affine_inv_0_2_GREEN_UP = tmp_coords_jac_13_GREEN_UP*(-tmp_coords_jac_11_GREEN_UP + tmp_coords_jac_9_GREEN_UP);
       const walberla::float64 jac_affine_inv_1_0_GREEN_UP = tmp_coords_jac_13_GREEN_UP*(-jac_affine_1_0_GREEN_UP*jac_affine_2_2_GREEN_UP + jac_affine_1_2_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_1_1_GREEN_UP = tmp_coords_jac_13_GREEN_UP*(jac_affine_0_0_GREEN_UP*jac_affine_2_2_GREEN_UP - jac_affine_0_2_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_1_2_GREEN_UP = tmp_coords_jac_13_GREEN_UP*(-jac_affine_0_0_GREEN_UP*jac_affine_1_2_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_2_0_GREEN_UP = tmp_coords_jac_13_GREEN_UP*(jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_1_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_2_1_GREEN_UP = tmp_coords_jac_13_GREEN_UP*(-jac_affine_0_0_GREEN_UP*jac_affine_2_1_GREEN_UP + jac_affine_0_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_2_2_GREEN_UP = tmp_coords_jac_13_GREEN_UP*(jac_affine_0_0_GREEN_UP*jac_affine_1_1_GREEN_UP - jac_affine_0_1_GREEN_UP*jac_affine_1_0_GREEN_UP);
       const walberla::float64 abs_det_jac_affine_GREEN_UP = abs(tmp_coords_jac_12_GREEN_UP);
       const walberla::float64 tmp_coords_jac_0_BLUE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_2_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_coords_jac_3_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_coords_jac_4_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_coords_jac_5_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_6_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_coords_jac_7_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_6_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_8_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 tmp_coords_jac_9_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_8_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_0_BLUE_DOWN = tmp_coords_jac_1_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_1_BLUE_DOWN = tmp_coords_jac_2_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_2_BLUE_DOWN = tmp_coords_jac_3_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_0_BLUE_DOWN = tmp_coords_jac_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_1_BLUE_DOWN = tmp_coords_jac_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_2_BLUE_DOWN = tmp_coords_jac_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_0_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_coords_jac_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_1_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_coords_jac_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_2_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_coords_jac_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_0_BLUE_DOWN = tmp_coords_jac_1_BLUE_DOWN + tmp_coords_jac_4_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_1_BLUE_DOWN = tmp_coords_jac_2_BLUE_DOWN + tmp_coords_jac_6_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_2_BLUE_DOWN = tmp_coords_jac_3_BLUE_DOWN + tmp_coords_jac_8_BLUE_DOWN;
       const walberla::float64 jac_affine_0_0_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_1_0_BLUE_DOWN;
       const walberla::float64 jac_affine_0_1_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_2_0_BLUE_DOWN;
       const walberla::float64 jac_affine_0_2_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_3_0_BLUE_DOWN;
       const walberla::float64 jac_affine_1_0_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_1_1_BLUE_DOWN;
       const walberla::float64 jac_affine_1_1_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_2_1_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_14_BLUE_DOWN = jac_affine_0_2_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN;
       const walberla::float64 jac_affine_1_2_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_3_1_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_12_BLUE_DOWN = jac_affine_0_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_0_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_1_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_1_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_2_2_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_11_BLUE_DOWN = jac_affine_1_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN;
       const walberla::float64 jac_affine_2_2_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_3_2_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_10_BLUE_DOWN = jac_affine_1_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_13_BLUE_DOWN = jac_affine_0_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_15_BLUE_DOWN = jac_affine_0_0_BLUE_DOWN*tmp_coords_jac_10_BLUE_DOWN - jac_affine_0_0_BLUE_DOWN*tmp_coords_jac_11_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_1_0_BLUE_DOWN*tmp_coords_jac_13_BLUE_DOWN + jac_affine_2_0_BLUE_DOWN*tmp_coords_jac_12_BLUE_DOWN - jac_affine_2_0_BLUE_DOWN*tmp_coords_jac_14_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_16_BLUE_DOWN = 1.0 / (tmp_coords_jac_15_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_0_0_BLUE_DOWN = tmp_coords_jac_16_BLUE_DOWN*(tmp_coords_jac_10_BLUE_DOWN - tmp_coords_jac_11_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_0_1_BLUE_DOWN = tmp_coords_jac_16_BLUE_DOWN*(jac_affine_0_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - tmp_coords_jac_13_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_0_2_BLUE_DOWN = tmp_coords_jac_16_BLUE_DOWN*(tmp_coords_jac_12_BLUE_DOWN - tmp_coords_jac_14_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_1_0_BLUE_DOWN = tmp_coords_jac_16_BLUE_DOWN*(-jac_affine_1_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN + jac_affine_1_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_1_1_BLUE_DOWN = tmp_coords_jac_16_BLUE_DOWN*(jac_affine_0_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN - jac_affine_0_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_1_2_BLUE_DOWN = tmp_coords_jac_16_BLUE_DOWN*(-jac_affine_0_0_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_2_0_BLUE_DOWN = tmp_coords_jac_16_BLUE_DOWN*(jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_1_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_2_1_BLUE_DOWN = tmp_coords_jac_16_BLUE_DOWN*(-jac_affine_0_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN + jac_affine_0_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_2_2_BLUE_DOWN = tmp_coords_jac_16_BLUE_DOWN*(jac_affine_0_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN - jac_affine_0_1_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN);
       const walberla::float64 abs_det_jac_affine_BLUE_DOWN = abs(tmp_coords_jac_15_BLUE_DOWN);
       const walberla::float64 tmp_coords_jac_0_BLUE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_2_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_3_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_coords_jac_4_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_5_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_coords_jac_6_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_0_0_BLUE_UP = tmp_coords_jac_1_BLUE_UP;
       const walberla::float64 p_affine_const_0_1_BLUE_UP = tmp_coords_jac_2_BLUE_UP;
       const walberla::float64 p_affine_const_0_2_BLUE_UP = tmp_coords_jac_3_BLUE_UP;
       const walberla::float64 p_affine_const_1_0_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_BLUE_UP;
       const walberla::float64 p_affine_const_1_1_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_BLUE_UP;
       const walberla::float64 p_affine_const_1_2_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_BLUE_UP;
       const walberla::float64 p_affine_const_2_0_BLUE_UP = tmp_coords_jac_1_BLUE_UP + tmp_coords_jac_4_BLUE_UP;
       const walberla::float64 p_affine_const_2_1_BLUE_UP = tmp_coords_jac_2_BLUE_UP + tmp_coords_jac_5_BLUE_UP;
       const walberla::float64 p_affine_const_2_2_BLUE_UP = tmp_coords_jac_3_BLUE_UP + tmp_coords_jac_6_BLUE_UP;
       const walberla::float64 p_affine_const_3_0_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_coords_jac_1_BLUE_UP;
       const walberla::float64 p_affine_const_3_1_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_coords_jac_2_BLUE_UP;
       const walberla::float64 p_affine_const_3_2_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_coords_jac_3_BLUE_UP;
       const walberla::float64 jac_affine_0_0_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_1_0_BLUE_UP;
       const walberla::float64 jac_affine_0_1_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_2_0_BLUE_UP;
       const walberla::float64 jac_affine_0_2_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_3_0_BLUE_UP;
       const walberla::float64 jac_affine_1_0_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_1_1_BLUE_UP;
       const walberla::float64 jac_affine_1_1_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_2_1_BLUE_UP;
       const walberla::float64 tmp_coords_jac_11_BLUE_UP = jac_affine_0_2_BLUE_UP*jac_affine_1_1_BLUE_UP;
       const walberla::float64 jac_affine_1_2_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_3_1_BLUE_UP;
       const walberla::float64 tmp_coords_jac_9_BLUE_UP = jac_affine_0_1_BLUE_UP*jac_affine_1_2_BLUE_UP;
       const walberla::float64 jac_affine_2_0_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_1_2_BLUE_UP;
       const walberla::float64 jac_affine_2_1_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_2_2_BLUE_UP;
       const walberla::float64 tmp_coords_jac_8_BLUE_UP = jac_affine_1_2_BLUE_UP*jac_affine_2_1_BLUE_UP;
       const walberla::float64 jac_affine_2_2_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_3_2_BLUE_UP;
       const walberla::float64 tmp_coords_jac_7_BLUE_UP = jac_affine_1_1_BLUE_UP*jac_affine_2_2_BLUE_UP;
       const walberla::float64 tmp_coords_jac_10_BLUE_UP = jac_affine_0_1_BLUE_UP*jac_affine_2_2_BLUE_UP;
       const walberla::float64 tmp_coords_jac_12_BLUE_UP = jac_affine_0_0_BLUE_UP*tmp_coords_jac_7_BLUE_UP - jac_affine_0_0_BLUE_UP*tmp_coords_jac_8_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_1_0_BLUE_UP*tmp_coords_jac_10_BLUE_UP - jac_affine_2_0_BLUE_UP*tmp_coords_jac_11_BLUE_UP + jac_affine_2_0_BLUE_UP*tmp_coords_jac_9_BLUE_UP;
       const walberla::float64 tmp_coords_jac_13_BLUE_UP = 1.0 / (tmp_coords_jac_12_BLUE_UP);
       const walberla::float64 jac_affine_inv_0_0_BLUE_UP = tmp_coords_jac_13_BLUE_UP*(tmp_coords_jac_7_BLUE_UP - tmp_coords_jac_8_BLUE_UP);
       const walberla::float64 jac_affine_inv_0_1_BLUE_UP = tmp_coords_jac_13_BLUE_UP*(jac_affine_0_2_BLUE_UP*jac_affine_2_1_BLUE_UP - tmp_coords_jac_10_BLUE_UP);
       const walberla::float64 jac_affine_inv_0_2_BLUE_UP = tmp_coords_jac_13_BLUE_UP*(-tmp_coords_jac_11_BLUE_UP + tmp_coords_jac_9_BLUE_UP);
       const walberla::float64 jac_affine_inv_1_0_BLUE_UP = tmp_coords_jac_13_BLUE_UP*(-jac_affine_1_0_BLUE_UP*jac_affine_2_2_BLUE_UP + jac_affine_1_2_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_1_1_BLUE_UP = tmp_coords_jac_13_BLUE_UP*(jac_affine_0_0_BLUE_UP*jac_affine_2_2_BLUE_UP - jac_affine_0_2_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_1_2_BLUE_UP = tmp_coords_jac_13_BLUE_UP*(-jac_affine_0_0_BLUE_UP*jac_affine_1_2_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_2_0_BLUE_UP = tmp_coords_jac_13_BLUE_UP*(jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_1_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_2_1_BLUE_UP = tmp_coords_jac_13_BLUE_UP*(-jac_affine_0_0_BLUE_UP*jac_affine_2_1_BLUE_UP + jac_affine_0_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_2_2_BLUE_UP = tmp_coords_jac_13_BLUE_UP*(jac_affine_0_0_BLUE_UP*jac_affine_1_1_BLUE_UP - jac_affine_0_1_BLUE_UP*jac_affine_1_0_BLUE_UP);
       const walberla::float64 abs_det_jac_affine_BLUE_UP = abs(tmp_coords_jac_12_BLUE_UP);
       const walberla::float64 tmp_coords_jac_0_WHITE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_2_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_3_WHITE_DOWN = tmp_coords_jac_1_WHITE_DOWN + tmp_coords_jac_2_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_4_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_coords_jac_5_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_6_WHITE_DOWN = tmp_coords_jac_4_WHITE_DOWN + tmp_coords_jac_5_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_7_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_coords_jac_8_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_coords_jac_9_WHITE_DOWN = tmp_coords_jac_7_WHITE_DOWN + tmp_coords_jac_8_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_10_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_coords_jac_11_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_coords_jac_12_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_WHITE_DOWN = tmp_coords_jac_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_1_WHITE_DOWN = tmp_coords_jac_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_2_WHITE_DOWN = tmp_coords_jac_9_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_0_WHITE_DOWN = tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_2_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_1_WHITE_DOWN = tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_5_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_2_WHITE_DOWN = tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_8_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_0_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_1_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_1_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_4_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_2_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_7_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_0_WHITE_DOWN = tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_1_WHITE_DOWN = tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_2_WHITE_DOWN = tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_9_WHITE_DOWN;
       const walberla::float64 jac_affine_0_0_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_1_0_WHITE_DOWN;
       const walberla::float64 jac_affine_0_1_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_2_0_WHITE_DOWN;
       const walberla::float64 jac_affine_0_2_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_3_0_WHITE_DOWN;
       const walberla::float64 jac_affine_1_0_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_1_1_WHITE_DOWN;
       const walberla::float64 jac_affine_1_1_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_2_1_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_17_WHITE_DOWN = jac_affine_0_2_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN;
       const walberla::float64 jac_affine_1_2_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_3_1_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_15_WHITE_DOWN = jac_affine_0_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_0_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_1_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_1_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_2_2_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_14_WHITE_DOWN = jac_affine_1_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN;
       const walberla::float64 jac_affine_2_2_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_3_2_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_13_WHITE_DOWN = jac_affine_1_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_16_WHITE_DOWN = jac_affine_0_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_18_WHITE_DOWN = jac_affine_0_0_WHITE_DOWN*tmp_coords_jac_13_WHITE_DOWN - jac_affine_0_0_WHITE_DOWN*tmp_coords_jac_14_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_1_0_WHITE_DOWN*tmp_coords_jac_16_WHITE_DOWN + jac_affine_2_0_WHITE_DOWN*tmp_coords_jac_15_WHITE_DOWN - jac_affine_2_0_WHITE_DOWN*tmp_coords_jac_17_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_19_WHITE_DOWN = 1.0 / (tmp_coords_jac_18_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_0_0_WHITE_DOWN = tmp_coords_jac_19_WHITE_DOWN*(tmp_coords_jac_13_WHITE_DOWN - tmp_coords_jac_14_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_0_1_WHITE_DOWN = tmp_coords_jac_19_WHITE_DOWN*(jac_affine_0_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - tmp_coords_jac_16_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_0_2_WHITE_DOWN = tmp_coords_jac_19_WHITE_DOWN*(tmp_coords_jac_15_WHITE_DOWN - tmp_coords_jac_17_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_1_0_WHITE_DOWN = tmp_coords_jac_19_WHITE_DOWN*(-jac_affine_1_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN + jac_affine_1_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_1_1_WHITE_DOWN = tmp_coords_jac_19_WHITE_DOWN*(jac_affine_0_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN - jac_affine_0_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_1_2_WHITE_DOWN = tmp_coords_jac_19_WHITE_DOWN*(-jac_affine_0_0_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_2_0_WHITE_DOWN = tmp_coords_jac_19_WHITE_DOWN*(jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_1_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_2_1_WHITE_DOWN = tmp_coords_jac_19_WHITE_DOWN*(-jac_affine_0_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN + jac_affine_0_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_2_2_WHITE_DOWN = tmp_coords_jac_19_WHITE_DOWN*(jac_affine_0_0_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN - jac_affine_0_1_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN);
       const walberla::float64 abs_det_jac_affine_WHITE_DOWN = abs(tmp_coords_jac_18_WHITE_DOWN);
       const walberla::float64 tmp_coords_jac_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const walberla::float64 p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 jac_affine_0_0_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_1_0_WHITE_UP;
       const walberla::float64 jac_affine_0_1_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_2_0_WHITE_UP;
       const walberla::float64 jac_affine_0_2_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_3_0_WHITE_UP;
       const walberla::float64 jac_affine_1_0_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_1_1_WHITE_UP;
       const walberla::float64 jac_affine_1_1_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_2_1_WHITE_UP;
       const walberla::float64 tmp_coords_jac_5_WHITE_UP = jac_affine_0_2_WHITE_UP*jac_affine_1_1_WHITE_UP;
       const walberla::float64 jac_affine_1_2_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_3_1_WHITE_UP;
       const walberla::float64 tmp_coords_jac_3_WHITE_UP = jac_affine_0_1_WHITE_UP*jac_affine_1_2_WHITE_UP;
       const walberla::float64 jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const walberla::float64 jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const walberla::float64 tmp_coords_jac_2_WHITE_UP = jac_affine_1_2_WHITE_UP*jac_affine_2_1_WHITE_UP;
       const walberla::float64 jac_affine_2_2_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_3_2_WHITE_UP;
       const walberla::float64 tmp_coords_jac_1_WHITE_UP = jac_affine_1_1_WHITE_UP*jac_affine_2_2_WHITE_UP;
       const walberla::float64 tmp_coords_jac_4_WHITE_UP = jac_affine_0_1_WHITE_UP*jac_affine_2_2_WHITE_UP;
       const walberla::float64 tmp_coords_jac_6_WHITE_UP = jac_affine_0_0_WHITE_UP*tmp_coords_jac_1_WHITE_UP - jac_affine_0_0_WHITE_UP*tmp_coords_jac_2_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_1_0_WHITE_UP*tmp_coords_jac_4_WHITE_UP + jac_affine_2_0_WHITE_UP*tmp_coords_jac_3_WHITE_UP - jac_affine_2_0_WHITE_UP*tmp_coords_jac_5_WHITE_UP;
       const walberla::float64 tmp_coords_jac_7_WHITE_UP = 1.0 / (tmp_coords_jac_6_WHITE_UP);
       const walberla::float64 jac_affine_inv_0_0_WHITE_UP = tmp_coords_jac_7_WHITE_UP*(tmp_coords_jac_1_WHITE_UP - tmp_coords_jac_2_WHITE_UP);
       const walberla::float64 jac_affine_inv_0_1_WHITE_UP = tmp_coords_jac_7_WHITE_UP*(jac_affine_0_2_WHITE_UP*jac_affine_2_1_WHITE_UP - tmp_coords_jac_4_WHITE_UP);
       const walberla::float64 jac_affine_inv_0_2_WHITE_UP = tmp_coords_jac_7_WHITE_UP*(tmp_coords_jac_3_WHITE_UP - tmp_coords_jac_5_WHITE_UP);
       const walberla::float64 jac_affine_inv_1_0_WHITE_UP = tmp_coords_jac_7_WHITE_UP*(-jac_affine_1_0_WHITE_UP*jac_affine_2_2_WHITE_UP + jac_affine_1_2_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_1_1_WHITE_UP = tmp_coords_jac_7_WHITE_UP*(jac_affine_0_0_WHITE_UP*jac_affine_2_2_WHITE_UP - jac_affine_0_2_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_1_2_WHITE_UP = tmp_coords_jac_7_WHITE_UP*(-jac_affine_0_0_WHITE_UP*jac_affine_1_2_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_2_0_WHITE_UP = tmp_coords_jac_7_WHITE_UP*(jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_1_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_2_1_WHITE_UP = tmp_coords_jac_7_WHITE_UP*(-jac_affine_0_0_WHITE_UP*jac_affine_2_1_WHITE_UP + jac_affine_0_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_2_2_WHITE_UP = tmp_coords_jac_7_WHITE_UP*(jac_affine_0_0_WHITE_UP*jac_affine_1_1_WHITE_UP - jac_affine_0_1_WHITE_UP*jac_affine_1_0_WHITE_UP);
       const walberla::float64 abs_det_jac_affine_WHITE_UP = abs(tmp_coords_jac_6_WHITE_UP);
       const walberla::float64 tmp_kernel_op_0 = abs_det_jac_affine_WHITE_UP*0.16666666666666663;
       const walberla::float64 elMatDiag_0 = tmp_kernel_op_0*(((-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)*(-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)) + ((-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)*(-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)) + ((-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)*(-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)));
       const walberla::float64 elMatDiag_1 = tmp_kernel_op_0*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
       const walberla::float64 elMatDiag_2 = tmp_kernel_op_0*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
       const walberla::float64 elMatDiag_3 = tmp_kernel_op_0*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
       const walberla::float64 Dummy_1772 = abs_det_jac_affine_WHITE_DOWN*0.16666666666666663;
       const walberla::float64 Dummy_1773 = Dummy_1772*(((-jac_affine_inv_0_0_WHITE_DOWN - jac_affine_inv_1_0_WHITE_DOWN - jac_affine_inv_2_0_WHITE_DOWN)*(-jac_affine_inv_0_0_WHITE_DOWN - jac_affine_inv_1_0_WHITE_DOWN - jac_affine_inv_2_0_WHITE_DOWN)) + ((-jac_affine_inv_0_1_WHITE_DOWN - jac_affine_inv_1_1_WHITE_DOWN - jac_affine_inv_2_1_WHITE_DOWN)*(-jac_affine_inv_0_1_WHITE_DOWN - jac_affine_inv_1_1_WHITE_DOWN - jac_affine_inv_2_1_WHITE_DOWN)) + ((-jac_affine_inv_0_2_WHITE_DOWN - jac_affine_inv_1_2_WHITE_DOWN - jac_affine_inv_2_2_WHITE_DOWN)*(-jac_affine_inv_0_2_WHITE_DOWN - jac_affine_inv_1_2_WHITE_DOWN - jac_affine_inv_2_2_WHITE_DOWN)));
       const walberla::float64 Dummy_1774 = Dummy_1772*((jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_0_0_WHITE_DOWN) + (jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_0_1_WHITE_DOWN) + (jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_0_2_WHITE_DOWN));
       const walberla::float64 Dummy_1775 = Dummy_1772*((jac_affine_inv_1_0_WHITE_DOWN*jac_affine_inv_1_0_WHITE_DOWN) + (jac_affine_inv_1_1_WHITE_DOWN*jac_affine_inv_1_1_WHITE_DOWN) + (jac_affine_inv_1_2_WHITE_DOWN*jac_affine_inv_1_2_WHITE_DOWN));
       const walberla::float64 Dummy_1776 = Dummy_1772*((jac_affine_inv_2_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN) + (jac_affine_inv_2_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN) + (jac_affine_inv_2_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN));
       const walberla::float64 Dummy_1777 = abs_det_jac_affine_BLUE_UP*0.16666666666666663;
       const walberla::float64 Dummy_1778 = Dummy_1777*(((-jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP)*(-jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP)) + ((-jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP)*(-jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP)) + ((-jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP)*(-jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP)));
       const walberla::float64 Dummy_1779 = Dummy_1777*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
       const walberla::float64 Dummy_1780 = Dummy_1777*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
       const walberla::float64 Dummy_1781 = Dummy_1777*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP));
       const walberla::float64 Dummy_1782 = abs_det_jac_affine_BLUE_DOWN*0.16666666666666663;
       const walberla::float64 Dummy_1783 = Dummy_1782*(((-jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN)*(-jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN)) + ((-jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN)*(-jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN)) + ((-jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN)*(-jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN)));
       const walberla::float64 Dummy_1784 = Dummy_1782*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
       const walberla::float64 Dummy_1785 = Dummy_1782*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
       const walberla::float64 Dummy_1786 = Dummy_1782*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN));
       const walberla::float64 Dummy_1787 = abs_det_jac_affine_GREEN_UP*0.16666666666666663;
       const walberla::float64 Dummy_1788 = Dummy_1787*(((-jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP)*(-jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP)) + ((-jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP)*(-jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP)) + ((-jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP)*(-jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP)));
       const walberla::float64 Dummy_1789 = Dummy_1787*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
       const walberla::float64 Dummy_1790 = Dummy_1787*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
       const walberla::float64 Dummy_1791 = Dummy_1787*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP));
       const walberla::float64 Dummy_1792 = abs_det_jac_affine_GREEN_DOWN*0.16666666666666663;
       const walberla::float64 Dummy_1793 = Dummy_1792*(((-jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN)*(-jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN)) + ((-jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN)*(-jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN)) + ((-jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN)*(-jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN)));
       const walberla::float64 Dummy_1794 = Dummy_1792*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
       const walberla::float64 Dummy_1795 = Dummy_1792*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
       const walberla::float64 Dummy_1796 = Dummy_1792*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN));
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
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1773 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1774 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1775 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1776 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1778 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1779 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1780 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1781 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1783 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1784 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1785 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1786 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1788 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1789 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1790 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1791 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             {
                {
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1793 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1794 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1795 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1796 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
          }
          if (-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2 >= 0)
          {
             const walberla::float64 tmp_kernel_op_0 = abs_det_jac_affine_WHITE_UP*0.16666666666666663;
             const walberla::float64 elMatDiag_0 = tmp_kernel_op_0*(((-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)*(-jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP)) + ((-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)*(-jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP)) + ((-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)*(-jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP)));
             const walberla::float64 elMatDiag_1 = tmp_kernel_op_0*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
             const walberla::float64 elMatDiag_2 = tmp_kernel_op_0*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
             const walberla::float64 elMatDiag_3 = tmp_kernel_op_0*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatDiag_0 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatDiag_1 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatDiag_2 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatDiag_3 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const walberla::float64 Dummy_1797 = abs_det_jac_affine_BLUE_UP*0.16666666666666663;
             const walberla::float64 Dummy_1798 = Dummy_1797*(((-jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP)*(-jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP)) + ((-jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP)*(-jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP)) + ((-jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP)*(-jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP)));
             const walberla::float64 Dummy_1799 = Dummy_1797*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
             const walberla::float64 Dummy_1800 = Dummy_1797*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
             const walberla::float64 Dummy_1801 = Dummy_1797*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP));
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1798 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1799 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1800 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1801 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
             const walberla::float64 Dummy_1802 = abs_det_jac_affine_BLUE_DOWN*0.16666666666666663;
             const walberla::float64 Dummy_1803 = Dummy_1802*(((-jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN)*(-jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN)) + ((-jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN)*(-jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN)) + ((-jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN)*(-jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN)));
             const walberla::float64 Dummy_1804 = Dummy_1802*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
             const walberla::float64 Dummy_1805 = Dummy_1802*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
             const walberla::float64 Dummy_1806 = Dummy_1802*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN));
             {
                {
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1803 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1804 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1805 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1806 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const walberla::float64 Dummy_1807 = abs_det_jac_affine_GREEN_UP*0.16666666666666663;
             const walberla::float64 Dummy_1808 = Dummy_1807*(((-jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP)*(-jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP)) + ((-jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP)*(-jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP)) + ((-jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP)*(-jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP)));
             const walberla::float64 Dummy_1809 = Dummy_1807*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
             const walberla::float64 Dummy_1810 = Dummy_1807*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
             const walberla::float64 Dummy_1811 = Dummy_1807*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP));
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1808 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1809 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1810 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1811 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
             const walberla::float64 Dummy_1812 = abs_det_jac_affine_GREEN_DOWN*0.16666666666666663;
             const walberla::float64 Dummy_1813 = Dummy_1812*(((-jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN)*(-jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN)) + ((-jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN)*(-jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN)) + ((-jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN)*(-jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN)));
             const walberla::float64 Dummy_1814 = Dummy_1812*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
             const walberla::float64 Dummy_1815 = Dummy_1812*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
             const walberla::float64 Dummy_1816 = Dummy_1812*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN));
             {
                {
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1813 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1814 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1815 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1816 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
          } 
          {
             {
                {
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatDiag_0 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatDiag_2 + _data_invDiag_[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatDiag_3 + _data_invDiag_[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
