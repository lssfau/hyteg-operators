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

void P1ElementwiseDiffusion::apply_macro_3D( walberla::float64 * RESTRICT  _data_dst, walberla::float64 * RESTRICT  _data_src, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_0comp2, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_1comp2, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, walberla::float64 macro_vertex_coord_id_2comp2, walberla::float64 macro_vertex_coord_id_3comp0, walberla::float64 macro_vertex_coord_id_3comp1, walberla::float64 macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 tmp_0_GREEN_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_2_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_3_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_4_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_5_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_6_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_7_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_8_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_9_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_DOWN = tmp_1_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_1_GREEN_DOWN = tmp_2_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_2_GREEN_DOWN = tmp_3_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_0_GREEN_DOWN = tmp_1_GREEN_DOWN + tmp_4_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_1_GREEN_DOWN = tmp_2_GREEN_DOWN + tmp_5_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_2_GREEN_DOWN = tmp_3_GREEN_DOWN + tmp_6_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_0_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_4_GREEN_DOWN + tmp_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_1_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_5_GREEN_DOWN + tmp_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_2_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_6_GREEN_DOWN + tmp_9_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_0_GREEN_DOWN = tmp_1_GREEN_DOWN + tmp_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_1_GREEN_DOWN = tmp_2_GREEN_DOWN + tmp_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_2_GREEN_DOWN = tmp_3_GREEN_DOWN + tmp_9_GREEN_DOWN;
       const walberla::float64 jac_affine_0_0_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_1_0_GREEN_DOWN;
       const walberla::float64 jac_affine_0_1_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_2_0_GREEN_DOWN;
       const walberla::float64 jac_affine_0_2_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_3_0_GREEN_DOWN;
       const walberla::float64 jac_affine_1_0_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_1_1_GREEN_DOWN;
       const walberla::float64 jac_affine_1_1_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_2_1_GREEN_DOWN;
       const walberla::float64 tmp_14_GREEN_DOWN = jac_affine_0_2_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN;
       const walberla::float64 jac_affine_1_2_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_3_1_GREEN_DOWN;
       const walberla::float64 tmp_12_GREEN_DOWN = jac_affine_0_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_0_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_1_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_1_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_2_2_GREEN_DOWN;
       const walberla::float64 tmp_11_GREEN_DOWN = jac_affine_1_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN;
       const walberla::float64 jac_affine_2_2_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_3_2_GREEN_DOWN;
       const walberla::float64 tmp_10_GREEN_DOWN = jac_affine_1_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN;
       const walberla::float64 tmp_13_GREEN_DOWN = jac_affine_0_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN;
       const walberla::float64 tmp_15_GREEN_DOWN = jac_affine_0_0_GREEN_DOWN*tmp_10_GREEN_DOWN - jac_affine_0_0_GREEN_DOWN*tmp_11_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_1_0_GREEN_DOWN*tmp_13_GREEN_DOWN + jac_affine_2_0_GREEN_DOWN*tmp_12_GREEN_DOWN - jac_affine_2_0_GREEN_DOWN*tmp_14_GREEN_DOWN;
       const walberla::float64 tmp_16_GREEN_DOWN = 1.0 / (tmp_15_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_0_0_GREEN_DOWN = tmp_16_GREEN_DOWN*(tmp_10_GREEN_DOWN - tmp_11_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_0_1_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_0_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - tmp_13_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_0_2_GREEN_DOWN = tmp_16_GREEN_DOWN*(tmp_12_GREEN_DOWN - tmp_14_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_1_0_GREEN_DOWN = tmp_16_GREEN_DOWN*(-jac_affine_1_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN + jac_affine_1_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_1_1_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_0_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN - jac_affine_0_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_1_2_GREEN_DOWN = tmp_16_GREEN_DOWN*(-jac_affine_0_0_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_2_0_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_1_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_2_1_GREEN_DOWN = tmp_16_GREEN_DOWN*(-jac_affine_0_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN + jac_affine_0_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_2_2_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_0_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN - jac_affine_0_1_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN);
       const walberla::float64 abs_det_jac_affine_GREEN_DOWN = abs(tmp_15_GREEN_DOWN);
       const walberla::float64 tmp_0_GREEN_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_2_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_3_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_4_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_5_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_6_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_UP = tmp_1_GREEN_UP;
       const walberla::float64 p_affine_const_0_1_GREEN_UP = tmp_2_GREEN_UP;
       const walberla::float64 p_affine_const_0_2_GREEN_UP = tmp_3_GREEN_UP;
       const walberla::float64 p_affine_const_1_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_1_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_1_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_2_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_4_GREEN_UP;
       const walberla::float64 p_affine_const_2_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_5_GREEN_UP;
       const walberla::float64 p_affine_const_2_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_6_GREEN_UP;
       const walberla::float64 p_affine_const_3_0_GREEN_UP = tmp_1_GREEN_UP + tmp_4_GREEN_UP;
       const walberla::float64 p_affine_const_3_1_GREEN_UP = tmp_2_GREEN_UP + tmp_5_GREEN_UP;
       const walberla::float64 p_affine_const_3_2_GREEN_UP = tmp_3_GREEN_UP + tmp_6_GREEN_UP;
       const walberla::float64 jac_affine_0_0_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_1_0_GREEN_UP;
       const walberla::float64 jac_affine_0_1_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_2_0_GREEN_UP;
       const walberla::float64 jac_affine_0_2_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_3_0_GREEN_UP;
       const walberla::float64 jac_affine_1_0_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_1_1_GREEN_UP;
       const walberla::float64 jac_affine_1_1_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_2_1_GREEN_UP;
       const walberla::float64 tmp_11_GREEN_UP = jac_affine_0_2_GREEN_UP*jac_affine_1_1_GREEN_UP;
       const walberla::float64 jac_affine_1_2_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_3_1_GREEN_UP;
       const walberla::float64 tmp_9_GREEN_UP = jac_affine_0_1_GREEN_UP*jac_affine_1_2_GREEN_UP;
       const walberla::float64 jac_affine_2_0_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_1_2_GREEN_UP;
       const walberla::float64 jac_affine_2_1_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_2_2_GREEN_UP;
       const walberla::float64 tmp_8_GREEN_UP = jac_affine_1_2_GREEN_UP*jac_affine_2_1_GREEN_UP;
       const walberla::float64 jac_affine_2_2_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_3_2_GREEN_UP;
       const walberla::float64 tmp_7_GREEN_UP = jac_affine_1_1_GREEN_UP*jac_affine_2_2_GREEN_UP;
       const walberla::float64 tmp_10_GREEN_UP = jac_affine_0_1_GREEN_UP*jac_affine_2_2_GREEN_UP;
       const walberla::float64 tmp_12_GREEN_UP = jac_affine_0_0_GREEN_UP*tmp_7_GREEN_UP - jac_affine_0_0_GREEN_UP*tmp_8_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_1_0_GREEN_UP*tmp_10_GREEN_UP - jac_affine_2_0_GREEN_UP*tmp_11_GREEN_UP + jac_affine_2_0_GREEN_UP*tmp_9_GREEN_UP;
       const walberla::float64 tmp_13_GREEN_UP = 1.0 / (tmp_12_GREEN_UP);
       const walberla::float64 jac_affine_inv_0_0_GREEN_UP = tmp_13_GREEN_UP*(tmp_7_GREEN_UP - tmp_8_GREEN_UP);
       const walberla::float64 jac_affine_inv_0_1_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_0_2_GREEN_UP*jac_affine_2_1_GREEN_UP - tmp_10_GREEN_UP);
       const walberla::float64 jac_affine_inv_0_2_GREEN_UP = tmp_13_GREEN_UP*(-tmp_11_GREEN_UP + tmp_9_GREEN_UP);
       const walberla::float64 jac_affine_inv_1_0_GREEN_UP = tmp_13_GREEN_UP*(-jac_affine_1_0_GREEN_UP*jac_affine_2_2_GREEN_UP + jac_affine_1_2_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_1_1_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_0_0_GREEN_UP*jac_affine_2_2_GREEN_UP - jac_affine_0_2_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_1_2_GREEN_UP = tmp_13_GREEN_UP*(-jac_affine_0_0_GREEN_UP*jac_affine_1_2_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_2_0_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_1_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_2_1_GREEN_UP = tmp_13_GREEN_UP*(-jac_affine_0_0_GREEN_UP*jac_affine_2_1_GREEN_UP + jac_affine_0_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_2_2_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_0_0_GREEN_UP*jac_affine_1_1_GREEN_UP - jac_affine_0_1_GREEN_UP*jac_affine_1_0_GREEN_UP);
       const walberla::float64 abs_det_jac_affine_GREEN_UP = abs(tmp_12_GREEN_UP);
       const walberla::float64 tmp_0_BLUE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_2_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_3_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_4_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_5_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_4_BLUE_DOWN;
       const walberla::float64 tmp_6_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_7_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_6_BLUE_DOWN;
       const walberla::float64 tmp_8_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 tmp_9_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_8_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_0_BLUE_DOWN = tmp_1_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_1_BLUE_DOWN = tmp_2_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_2_BLUE_DOWN = tmp_3_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_0_BLUE_DOWN = tmp_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_1_BLUE_DOWN = tmp_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_2_BLUE_DOWN = tmp_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_0_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_1_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_2_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_0_BLUE_DOWN = tmp_1_BLUE_DOWN + tmp_4_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_1_BLUE_DOWN = tmp_2_BLUE_DOWN + tmp_6_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_2_BLUE_DOWN = tmp_3_BLUE_DOWN + tmp_8_BLUE_DOWN;
       const walberla::float64 jac_affine_0_0_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_1_0_BLUE_DOWN;
       const walberla::float64 jac_affine_0_1_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_2_0_BLUE_DOWN;
       const walberla::float64 jac_affine_0_2_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_3_0_BLUE_DOWN;
       const walberla::float64 jac_affine_1_0_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_1_1_BLUE_DOWN;
       const walberla::float64 jac_affine_1_1_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_2_1_BLUE_DOWN;
       const walberla::float64 tmp_14_BLUE_DOWN = jac_affine_0_2_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN;
       const walberla::float64 jac_affine_1_2_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_3_1_BLUE_DOWN;
       const walberla::float64 tmp_12_BLUE_DOWN = jac_affine_0_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_0_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_1_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_1_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_2_2_BLUE_DOWN;
       const walberla::float64 tmp_11_BLUE_DOWN = jac_affine_1_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN;
       const walberla::float64 jac_affine_2_2_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_3_2_BLUE_DOWN;
       const walberla::float64 tmp_10_BLUE_DOWN = jac_affine_1_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN;
       const walberla::float64 tmp_13_BLUE_DOWN = jac_affine_0_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN;
       const walberla::float64 tmp_15_BLUE_DOWN = jac_affine_0_0_BLUE_DOWN*tmp_10_BLUE_DOWN - jac_affine_0_0_BLUE_DOWN*tmp_11_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_1_0_BLUE_DOWN*tmp_13_BLUE_DOWN + jac_affine_2_0_BLUE_DOWN*tmp_12_BLUE_DOWN - jac_affine_2_0_BLUE_DOWN*tmp_14_BLUE_DOWN;
       const walberla::float64 tmp_16_BLUE_DOWN = 1.0 / (tmp_15_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_0_0_BLUE_DOWN = tmp_16_BLUE_DOWN*(tmp_10_BLUE_DOWN - tmp_11_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_0_1_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_0_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - tmp_13_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_0_2_BLUE_DOWN = tmp_16_BLUE_DOWN*(tmp_12_BLUE_DOWN - tmp_14_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_1_0_BLUE_DOWN = tmp_16_BLUE_DOWN*(-jac_affine_1_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN + jac_affine_1_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_1_1_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_0_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN - jac_affine_0_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_1_2_BLUE_DOWN = tmp_16_BLUE_DOWN*(-jac_affine_0_0_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_2_0_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_1_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_2_1_BLUE_DOWN = tmp_16_BLUE_DOWN*(-jac_affine_0_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN + jac_affine_0_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_2_2_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_0_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN - jac_affine_0_1_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN);
       const walberla::float64 abs_det_jac_affine_BLUE_DOWN = abs(tmp_15_BLUE_DOWN);
       const walberla::float64 tmp_0_BLUE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_2_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_3_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_4_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_5_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_6_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_0_0_BLUE_UP = tmp_1_BLUE_UP;
       const walberla::float64 p_affine_const_0_1_BLUE_UP = tmp_2_BLUE_UP;
       const walberla::float64 p_affine_const_0_2_BLUE_UP = tmp_3_BLUE_UP;
       const walberla::float64 p_affine_const_1_0_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_4_BLUE_UP;
       const walberla::float64 p_affine_const_1_1_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_5_BLUE_UP;
       const walberla::float64 p_affine_const_1_2_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_6_BLUE_UP;
       const walberla::float64 p_affine_const_2_0_BLUE_UP = tmp_1_BLUE_UP + tmp_4_BLUE_UP;
       const walberla::float64 p_affine_const_2_1_BLUE_UP = tmp_2_BLUE_UP + tmp_5_BLUE_UP;
       const walberla::float64 p_affine_const_2_2_BLUE_UP = tmp_3_BLUE_UP + tmp_6_BLUE_UP;
       const walberla::float64 p_affine_const_3_0_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_1_BLUE_UP;
       const walberla::float64 p_affine_const_3_1_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_2_BLUE_UP;
       const walberla::float64 p_affine_const_3_2_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_3_BLUE_UP;
       const walberla::float64 jac_affine_0_0_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_1_0_BLUE_UP;
       const walberla::float64 jac_affine_0_1_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_2_0_BLUE_UP;
       const walberla::float64 jac_affine_0_2_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_3_0_BLUE_UP;
       const walberla::float64 jac_affine_1_0_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_1_1_BLUE_UP;
       const walberla::float64 jac_affine_1_1_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_2_1_BLUE_UP;
       const walberla::float64 tmp_11_BLUE_UP = jac_affine_0_2_BLUE_UP*jac_affine_1_1_BLUE_UP;
       const walberla::float64 jac_affine_1_2_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_3_1_BLUE_UP;
       const walberla::float64 tmp_9_BLUE_UP = jac_affine_0_1_BLUE_UP*jac_affine_1_2_BLUE_UP;
       const walberla::float64 jac_affine_2_0_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_1_2_BLUE_UP;
       const walberla::float64 jac_affine_2_1_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_2_2_BLUE_UP;
       const walberla::float64 tmp_8_BLUE_UP = jac_affine_1_2_BLUE_UP*jac_affine_2_1_BLUE_UP;
       const walberla::float64 jac_affine_2_2_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_3_2_BLUE_UP;
       const walberla::float64 tmp_7_BLUE_UP = jac_affine_1_1_BLUE_UP*jac_affine_2_2_BLUE_UP;
       const walberla::float64 tmp_10_BLUE_UP = jac_affine_0_1_BLUE_UP*jac_affine_2_2_BLUE_UP;
       const walberla::float64 tmp_12_BLUE_UP = jac_affine_0_0_BLUE_UP*tmp_7_BLUE_UP - jac_affine_0_0_BLUE_UP*tmp_8_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_1_0_BLUE_UP*tmp_10_BLUE_UP - jac_affine_2_0_BLUE_UP*tmp_11_BLUE_UP + jac_affine_2_0_BLUE_UP*tmp_9_BLUE_UP;
       const walberla::float64 tmp_13_BLUE_UP = 1.0 / (tmp_12_BLUE_UP);
       const walberla::float64 jac_affine_inv_0_0_BLUE_UP = tmp_13_BLUE_UP*(tmp_7_BLUE_UP - tmp_8_BLUE_UP);
       const walberla::float64 jac_affine_inv_0_1_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_0_2_BLUE_UP*jac_affine_2_1_BLUE_UP - tmp_10_BLUE_UP);
       const walberla::float64 jac_affine_inv_0_2_BLUE_UP = tmp_13_BLUE_UP*(-tmp_11_BLUE_UP + tmp_9_BLUE_UP);
       const walberla::float64 jac_affine_inv_1_0_BLUE_UP = tmp_13_BLUE_UP*(-jac_affine_1_0_BLUE_UP*jac_affine_2_2_BLUE_UP + jac_affine_1_2_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_1_1_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_0_0_BLUE_UP*jac_affine_2_2_BLUE_UP - jac_affine_0_2_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_1_2_BLUE_UP = tmp_13_BLUE_UP*(-jac_affine_0_0_BLUE_UP*jac_affine_1_2_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_2_0_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_1_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_2_1_BLUE_UP = tmp_13_BLUE_UP*(-jac_affine_0_0_BLUE_UP*jac_affine_2_1_BLUE_UP + jac_affine_0_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_2_2_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_0_0_BLUE_UP*jac_affine_1_1_BLUE_UP - jac_affine_0_1_BLUE_UP*jac_affine_1_0_BLUE_UP);
       const walberla::float64 abs_det_jac_affine_BLUE_UP = abs(tmp_12_BLUE_UP);
       const walberla::float64 tmp_0_WHITE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_2_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_3_WHITE_DOWN = tmp_1_WHITE_DOWN + tmp_2_WHITE_DOWN;
       const walberla::float64 tmp_4_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_5_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_6_WHITE_DOWN = tmp_4_WHITE_DOWN + tmp_5_WHITE_DOWN;
       const walberla::float64 tmp_7_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_8_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_9_WHITE_DOWN = tmp_7_WHITE_DOWN + tmp_8_WHITE_DOWN;
       const walberla::float64 tmp_10_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_11_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_12_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_WHITE_DOWN = tmp_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_1_WHITE_DOWN = tmp_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_2_WHITE_DOWN = tmp_9_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_0_WHITE_DOWN = tmp_10_WHITE_DOWN + tmp_2_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_1_WHITE_DOWN = tmp_11_WHITE_DOWN + tmp_5_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_2_WHITE_DOWN = tmp_12_WHITE_DOWN + tmp_8_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_0_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_10_WHITE_DOWN + tmp_1_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_1_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_11_WHITE_DOWN + tmp_4_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_2_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_12_WHITE_DOWN + tmp_7_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_0_WHITE_DOWN = tmp_10_WHITE_DOWN + tmp_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_1_WHITE_DOWN = tmp_11_WHITE_DOWN + tmp_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_2_WHITE_DOWN = tmp_12_WHITE_DOWN + tmp_9_WHITE_DOWN;
       const walberla::float64 jac_affine_0_0_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_1_0_WHITE_DOWN;
       const walberla::float64 jac_affine_0_1_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_2_0_WHITE_DOWN;
       const walberla::float64 jac_affine_0_2_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_3_0_WHITE_DOWN;
       const walberla::float64 jac_affine_1_0_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_1_1_WHITE_DOWN;
       const walberla::float64 jac_affine_1_1_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_2_1_WHITE_DOWN;
       const walberla::float64 tmp_17_WHITE_DOWN = jac_affine_0_2_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN;
       const walberla::float64 jac_affine_1_2_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_3_1_WHITE_DOWN;
       const walberla::float64 tmp_15_WHITE_DOWN = jac_affine_0_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_0_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_1_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_1_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_2_2_WHITE_DOWN;
       const walberla::float64 tmp_14_WHITE_DOWN = jac_affine_1_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN;
       const walberla::float64 jac_affine_2_2_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_3_2_WHITE_DOWN;
       const walberla::float64 tmp_13_WHITE_DOWN = jac_affine_1_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN;
       const walberla::float64 tmp_16_WHITE_DOWN = jac_affine_0_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN;
       const walberla::float64 tmp_18_WHITE_DOWN = jac_affine_0_0_WHITE_DOWN*tmp_13_WHITE_DOWN - jac_affine_0_0_WHITE_DOWN*tmp_14_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_1_0_WHITE_DOWN*tmp_16_WHITE_DOWN + jac_affine_2_0_WHITE_DOWN*tmp_15_WHITE_DOWN - jac_affine_2_0_WHITE_DOWN*tmp_17_WHITE_DOWN;
       const walberla::float64 tmp_19_WHITE_DOWN = 1.0 / (tmp_18_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_0_0_WHITE_DOWN = tmp_19_WHITE_DOWN*(tmp_13_WHITE_DOWN - tmp_14_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_0_1_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_0_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - tmp_16_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_0_2_WHITE_DOWN = tmp_19_WHITE_DOWN*(tmp_15_WHITE_DOWN - tmp_17_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_1_0_WHITE_DOWN = tmp_19_WHITE_DOWN*(-jac_affine_1_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN + jac_affine_1_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_1_1_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_0_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN - jac_affine_0_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_1_2_WHITE_DOWN = tmp_19_WHITE_DOWN*(-jac_affine_0_0_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_2_0_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_1_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_2_1_WHITE_DOWN = tmp_19_WHITE_DOWN*(-jac_affine_0_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN + jac_affine_0_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_2_2_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_0_0_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN - jac_affine_0_1_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN);
       const walberla::float64 abs_det_jac_affine_WHITE_DOWN = abs(tmp_18_WHITE_DOWN);
       const walberla::float64 tmp_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const walberla::float64 p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 jac_affine_0_0_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_1_0_WHITE_UP;
       const walberla::float64 jac_affine_0_1_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_2_0_WHITE_UP;
       const walberla::float64 jac_affine_0_2_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_3_0_WHITE_UP;
       const walberla::float64 jac_affine_1_0_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_1_1_WHITE_UP;
       const walberla::float64 jac_affine_1_1_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_2_1_WHITE_UP;
       const walberla::float64 tmp_5_WHITE_UP = jac_affine_0_2_WHITE_UP*jac_affine_1_1_WHITE_UP;
       const walberla::float64 jac_affine_1_2_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_3_1_WHITE_UP;
       const walberla::float64 tmp_3_WHITE_UP = jac_affine_0_1_WHITE_UP*jac_affine_1_2_WHITE_UP;
       const walberla::float64 jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const walberla::float64 jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const walberla::float64 tmp_2_WHITE_UP = jac_affine_1_2_WHITE_UP*jac_affine_2_1_WHITE_UP;
       const walberla::float64 jac_affine_2_2_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_3_2_WHITE_UP;
       const walberla::float64 tmp_1_WHITE_UP = jac_affine_1_1_WHITE_UP*jac_affine_2_2_WHITE_UP;
       const walberla::float64 tmp_4_WHITE_UP = jac_affine_0_1_WHITE_UP*jac_affine_2_2_WHITE_UP;
       const walberla::float64 tmp_6_WHITE_UP = jac_affine_0_0_WHITE_UP*tmp_1_WHITE_UP - jac_affine_0_0_WHITE_UP*tmp_2_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_1_0_WHITE_UP*tmp_4_WHITE_UP + jac_affine_2_0_WHITE_UP*tmp_3_WHITE_UP - jac_affine_2_0_WHITE_UP*tmp_5_WHITE_UP;
       const walberla::float64 tmp_7_WHITE_UP = 1.0 / (tmp_6_WHITE_UP);
       const walberla::float64 jac_affine_inv_0_0_WHITE_UP = tmp_7_WHITE_UP*(tmp_1_WHITE_UP - tmp_2_WHITE_UP);
       const walberla::float64 jac_affine_inv_0_1_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_0_2_WHITE_UP*jac_affine_2_1_WHITE_UP - tmp_4_WHITE_UP);
       const walberla::float64 jac_affine_inv_0_2_WHITE_UP = tmp_7_WHITE_UP*(tmp_3_WHITE_UP - tmp_5_WHITE_UP);
       const walberla::float64 jac_affine_inv_1_0_WHITE_UP = tmp_7_WHITE_UP*(-jac_affine_1_0_WHITE_UP*jac_affine_2_2_WHITE_UP + jac_affine_1_2_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_1_1_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_0_0_WHITE_UP*jac_affine_2_2_WHITE_UP - jac_affine_0_2_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_1_2_WHITE_UP = tmp_7_WHITE_UP*(-jac_affine_0_0_WHITE_UP*jac_affine_1_2_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_2_0_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_1_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_2_1_WHITE_UP = tmp_7_WHITE_UP*(-jac_affine_0_0_WHITE_UP*jac_affine_2_1_WHITE_UP + jac_affine_0_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_2_2_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_0_0_WHITE_UP*jac_affine_1_1_WHITE_UP - jac_affine_0_1_WHITE_UP*jac_affine_1_0_WHITE_UP);
       const walberla::float64 abs_det_jac_affine_WHITE_UP = abs(tmp_6_WHITE_UP);
       const walberla::float64 Dummy_914 = -jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP;
       const walberla::float64 Dummy_915 = -jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP;
       const walberla::float64 Dummy_916 = -jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP;
       const walberla::float64 Dummy_917 = abs_det_jac_affine_WHITE_UP*0.16666666666666666;
       const walberla::float64 Dummy_918 = Dummy_914*jac_affine_inv_0_0_WHITE_UP + Dummy_915*jac_affine_inv_0_1_WHITE_UP + Dummy_916*jac_affine_inv_0_2_WHITE_UP;
       const walberla::float64 Dummy_919 = Dummy_914*jac_affine_inv_1_0_WHITE_UP + Dummy_915*jac_affine_inv_1_1_WHITE_UP + Dummy_916*jac_affine_inv_1_2_WHITE_UP;
       const walberla::float64 tmp_9 = Dummy_914*jac_affine_inv_2_0_WHITE_UP + Dummy_915*jac_affine_inv_2_1_WHITE_UP + Dummy_916*jac_affine_inv_2_2_WHITE_UP;
       const walberla::float64 tmp_11 = jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP;
       const walberla::float64 tmp_12 = jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP;
       const walberla::float64 tmp_13 = jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP;
       const walberla::float64 Dummy_924 = -jac_affine_inv_0_0_WHITE_DOWN - jac_affine_inv_1_0_WHITE_DOWN - jac_affine_inv_2_0_WHITE_DOWN;
       const walberla::float64 Dummy_925 = -jac_affine_inv_0_1_WHITE_DOWN - jac_affine_inv_1_1_WHITE_DOWN - jac_affine_inv_2_1_WHITE_DOWN;
       const walberla::float64 Dummy_926 = -jac_affine_inv_0_2_WHITE_DOWN - jac_affine_inv_1_2_WHITE_DOWN - jac_affine_inv_2_2_WHITE_DOWN;
       const walberla::float64 Dummy_927 = abs_det_jac_affine_WHITE_DOWN*0.16666666666666666;
       const walberla::float64 Dummy_928 = Dummy_924*jac_affine_inv_0_0_WHITE_DOWN + Dummy_925*jac_affine_inv_0_1_WHITE_DOWN + Dummy_926*jac_affine_inv_0_2_WHITE_DOWN;
       const walberla::float64 Dummy_929 = Dummy_924*jac_affine_inv_1_0_WHITE_DOWN + Dummy_925*jac_affine_inv_1_1_WHITE_DOWN + Dummy_926*jac_affine_inv_1_2_WHITE_DOWN;
       const walberla::float64 Dummy_930 = Dummy_924*jac_affine_inv_2_0_WHITE_DOWN + Dummy_925*jac_affine_inv_2_1_WHITE_DOWN + Dummy_926*jac_affine_inv_2_2_WHITE_DOWN;
       const walberla::float64 Dummy_931 = jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_1_0_WHITE_DOWN + jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_1_1_WHITE_DOWN + jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_1_2_WHITE_DOWN;
       const walberla::float64 Dummy_932 = jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN + jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN + jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN;
       const walberla::float64 Dummy_933 = jac_affine_inv_1_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN + jac_affine_inv_1_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN + jac_affine_inv_1_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN;
       const walberla::float64 Dummy_942 = -jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP;
       const walberla::float64 Dummy_943 = -jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP;
       const walberla::float64 Dummy_944 = -jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP;
       const walberla::float64 Dummy_945 = abs_det_jac_affine_BLUE_UP*0.16666666666666666;
       const walberla::float64 Dummy_946 = Dummy_942*jac_affine_inv_0_0_BLUE_UP + Dummy_943*jac_affine_inv_0_1_BLUE_UP + Dummy_944*jac_affine_inv_0_2_BLUE_UP;
       const walberla::float64 Dummy_947 = Dummy_942*jac_affine_inv_1_0_BLUE_UP + Dummy_943*jac_affine_inv_1_1_BLUE_UP + Dummy_944*jac_affine_inv_1_2_BLUE_UP;
       const walberla::float64 Dummy_948 = Dummy_942*jac_affine_inv_2_0_BLUE_UP + Dummy_943*jac_affine_inv_2_1_BLUE_UP + Dummy_944*jac_affine_inv_2_2_BLUE_UP;
       const walberla::float64 Dummy_949 = jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP;
       const walberla::float64 Dummy_950 = jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP;
       const walberla::float64 Dummy_951 = jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP;
       const walberla::float64 Dummy_960 = -jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN;
       const walberla::float64 Dummy_961 = -jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN;
       const walberla::float64 Dummy_962 = -jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN;
       const walberla::float64 Dummy_963 = abs_det_jac_affine_BLUE_DOWN*0.16666666666666666;
       const walberla::float64 Dummy_964 = Dummy_960*jac_affine_inv_0_0_BLUE_DOWN + Dummy_961*jac_affine_inv_0_1_BLUE_DOWN + Dummy_962*jac_affine_inv_0_2_BLUE_DOWN;
       const walberla::float64 Dummy_965 = Dummy_960*jac_affine_inv_1_0_BLUE_DOWN + Dummy_961*jac_affine_inv_1_1_BLUE_DOWN + Dummy_962*jac_affine_inv_1_2_BLUE_DOWN;
       const walberla::float64 Dummy_966 = Dummy_960*jac_affine_inv_2_0_BLUE_DOWN + Dummy_961*jac_affine_inv_2_1_BLUE_DOWN + Dummy_962*jac_affine_inv_2_2_BLUE_DOWN;
       const walberla::float64 Dummy_967 = jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN;
       const walberla::float64 Dummy_968 = jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN;
       const walberla::float64 Dummy_969 = jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN;
       const walberla::float64 Dummy_978 = -jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP;
       const walberla::float64 Dummy_979 = -jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP;
       const walberla::float64 Dummy_980 = -jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP;
       const walberla::float64 Dummy_981 = abs_det_jac_affine_GREEN_UP*0.16666666666666666;
       const walberla::float64 Dummy_982 = Dummy_978*jac_affine_inv_0_0_GREEN_UP + Dummy_979*jac_affine_inv_0_1_GREEN_UP + Dummy_980*jac_affine_inv_0_2_GREEN_UP;
       const walberla::float64 Dummy_983 = Dummy_978*jac_affine_inv_1_0_GREEN_UP + Dummy_979*jac_affine_inv_1_1_GREEN_UP + Dummy_980*jac_affine_inv_1_2_GREEN_UP;
       const walberla::float64 Dummy_984 = Dummy_978*jac_affine_inv_2_0_GREEN_UP + Dummy_979*jac_affine_inv_2_1_GREEN_UP + Dummy_980*jac_affine_inv_2_2_GREEN_UP;
       const walberla::float64 Dummy_985 = jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP;
       const walberla::float64 Dummy_986 = jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP;
       const walberla::float64 Dummy_987 = jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP;
       const walberla::float64 Dummy_996 = -jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN;
       const walberla::float64 Dummy_997 = -jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN;
       const walberla::float64 Dummy_998 = -jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN;
       const walberla::float64 Dummy_999 = abs_det_jac_affine_GREEN_DOWN*0.16666666666666666;
       const walberla::float64 Dummy_1000 = Dummy_996*jac_affine_inv_0_0_GREEN_DOWN + Dummy_997*jac_affine_inv_0_1_GREEN_DOWN + Dummy_998*jac_affine_inv_0_2_GREEN_DOWN;
       const walberla::float64 Dummy_1001 = Dummy_996*jac_affine_inv_1_0_GREEN_DOWN + Dummy_997*jac_affine_inv_1_1_GREEN_DOWN + Dummy_998*jac_affine_inv_1_2_GREEN_DOWN;
       const walberla::float64 Dummy_1002 = Dummy_996*jac_affine_inv_2_0_GREEN_DOWN + Dummy_997*jac_affine_inv_2_1_GREEN_DOWN + Dummy_998*jac_affine_inv_2_2_GREEN_DOWN;
       const walberla::float64 Dummy_1003 = jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN;
       const walberla::float64 Dummy_1004 = jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN;
       const walberla::float64 Dummy_1005 = jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN;
       const walberla::float64 Dummy_1042 = -jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP;
       const walberla::float64 Dummy_1043 = -jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP;
       const walberla::float64 Dummy_1044 = -jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP;
       const walberla::float64 Dummy_1045 = abs_det_jac_affine_WHITE_UP*0.16666666666666666;
       const walberla::float64 Dummy_1046 = Dummy_1042*jac_affine_inv_0_0_WHITE_UP + Dummy_1043*jac_affine_inv_0_1_WHITE_UP + Dummy_1044*jac_affine_inv_0_2_WHITE_UP;
       const walberla::float64 Dummy_1047 = Dummy_1042*jac_affine_inv_1_0_WHITE_UP + Dummy_1043*jac_affine_inv_1_1_WHITE_UP + Dummy_1044*jac_affine_inv_1_2_WHITE_UP;
       const walberla::float64 Dummy_1048 = Dummy_1042*jac_affine_inv_2_0_WHITE_UP + Dummy_1043*jac_affine_inv_2_1_WHITE_UP + Dummy_1044*jac_affine_inv_2_2_WHITE_UP;
       for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
       for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 tmp_4_WHITE_UP = Dummy_917*src_dof_0;
             const walberla::float64 tmp_6_WHITE_UP = Dummy_917*src_dof_1;
             const walberla::float64 tmp_8 = Dummy_917*src_dof_2;
             const walberla::float64 tmp_10 = Dummy_917*src_dof_3;
             const walberla::float64 elMatVec_0 = Dummy_918*tmp_6_WHITE_UP + Dummy_919*tmp_8 + tmp_10*tmp_9 + tmp_4_WHITE_UP*((Dummy_914*Dummy_914) + (Dummy_915*Dummy_915) + (Dummy_916*Dummy_916));
             const walberla::float64 elMatVec_1 = Dummy_918*tmp_4_WHITE_UP + tmp_10*tmp_12 + tmp_11*tmp_8 + tmp_6_WHITE_UP*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
             const walberla::float64 elMatVec_2 = Dummy_919*tmp_4_WHITE_UP + tmp_10*tmp_13 + tmp_11*tmp_6_WHITE_UP + tmp_8*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
             const walberla::float64 elMatVec_3 = tmp_10*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP)) + tmp_12*tmp_6_WHITE_UP + tmp_13*tmp_8 + tmp_4_WHITE_UP*tmp_9;
             {
                {
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
             const walberla::float64 Dummy_920 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 Dummy_921 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 Dummy_922 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 Dummy_923 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 tmp_4_WHITE_DOWN = Dummy_920*Dummy_927;
             const walberla::float64 tmp_6_WHITE_DOWN = Dummy_921*Dummy_927;
             const walberla::float64 tmp_8_WHITE_DOWN = Dummy_922*Dummy_927;
             const walberla::float64 tmp_10_WHITE_DOWN = Dummy_923*Dummy_927;
             const walberla::float64 Dummy_934 = Dummy_928*tmp_6_WHITE_DOWN + Dummy_929*tmp_8_WHITE_DOWN + Dummy_930*tmp_10_WHITE_DOWN + tmp_4_WHITE_DOWN*((Dummy_924*Dummy_924) + (Dummy_925*Dummy_925) + (Dummy_926*Dummy_926));
             const walberla::float64 Dummy_935 = Dummy_928*tmp_4_WHITE_DOWN + Dummy_931*tmp_8_WHITE_DOWN + Dummy_932*tmp_10_WHITE_DOWN + tmp_6_WHITE_DOWN*((jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_0_0_WHITE_DOWN) + (jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_0_1_WHITE_DOWN) + (jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_0_2_WHITE_DOWN));
             const walberla::float64 Dummy_936 = Dummy_929*tmp_4_WHITE_DOWN + Dummy_931*tmp_6_WHITE_DOWN + Dummy_933*tmp_10_WHITE_DOWN + tmp_8_WHITE_DOWN*((jac_affine_inv_1_0_WHITE_DOWN*jac_affine_inv_1_0_WHITE_DOWN) + (jac_affine_inv_1_1_WHITE_DOWN*jac_affine_inv_1_1_WHITE_DOWN) + (jac_affine_inv_1_2_WHITE_DOWN*jac_affine_inv_1_2_WHITE_DOWN));
             const walberla::float64 Dummy_937 = Dummy_930*tmp_4_WHITE_DOWN + Dummy_932*tmp_6_WHITE_DOWN + Dummy_933*tmp_8_WHITE_DOWN + tmp_10_WHITE_DOWN*((jac_affine_inv_2_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN) + (jac_affine_inv_2_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN) + (jac_affine_inv_2_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN));
             {
                {
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_934 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_935 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_936 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_937 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             const walberla::float64 Dummy_938 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 Dummy_939 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 Dummy_940 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 Dummy_941 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 tmp_4_BLUE_UP = Dummy_938*Dummy_945;
             const walberla::float64 tmp_6_BLUE_UP = Dummy_939*Dummy_945;
             const walberla::float64 tmp_8_BLUE_UP = Dummy_940*Dummy_945;
             const walberla::float64 tmp_10_BLUE_UP = Dummy_941*Dummy_945;
             const walberla::float64 Dummy_952 = Dummy_946*tmp_6_BLUE_UP + Dummy_947*tmp_8_BLUE_UP + Dummy_948*tmp_10_BLUE_UP + tmp_4_BLUE_UP*((Dummy_942*Dummy_942) + (Dummy_943*Dummy_943) + (Dummy_944*Dummy_944));
             const walberla::float64 Dummy_953 = Dummy_946*tmp_4_BLUE_UP + Dummy_949*tmp_8_BLUE_UP + Dummy_950*tmp_10_BLUE_UP + tmp_6_BLUE_UP*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
             const walberla::float64 Dummy_954 = Dummy_947*tmp_4_BLUE_UP + Dummy_949*tmp_6_BLUE_UP + Dummy_951*tmp_10_BLUE_UP + tmp_8_BLUE_UP*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
             const walberla::float64 Dummy_955 = Dummy_948*tmp_4_BLUE_UP + Dummy_950*tmp_6_BLUE_UP + Dummy_951*tmp_8_BLUE_UP + tmp_10_BLUE_UP*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP));
             {
                {
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_952 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_953 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_954 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_955 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             const walberla::float64 Dummy_956 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 Dummy_957 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 Dummy_958 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 Dummy_959 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 tmp_4_BLUE_DOWN = Dummy_956*Dummy_963;
             const walberla::float64 tmp_6_BLUE_DOWN = Dummy_957*Dummy_963;
             const walberla::float64 tmp_8_BLUE_DOWN = Dummy_958*Dummy_963;
             const walberla::float64 tmp_10_BLUE_DOWN = Dummy_959*Dummy_963;
             const walberla::float64 Dummy_970 = Dummy_964*tmp_6_BLUE_DOWN + Dummy_965*tmp_8_BLUE_DOWN + Dummy_966*tmp_10_BLUE_DOWN + tmp_4_BLUE_DOWN*((Dummy_960*Dummy_960) + (Dummy_961*Dummy_961) + (Dummy_962*Dummy_962));
             const walberla::float64 Dummy_971 = Dummy_964*tmp_4_BLUE_DOWN + Dummy_967*tmp_8_BLUE_DOWN + Dummy_968*tmp_10_BLUE_DOWN + tmp_6_BLUE_DOWN*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
             const walberla::float64 Dummy_972 = Dummy_965*tmp_4_BLUE_DOWN + Dummy_967*tmp_6_BLUE_DOWN + Dummy_969*tmp_10_BLUE_DOWN + tmp_8_BLUE_DOWN*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
             const walberla::float64 Dummy_973 = Dummy_966*tmp_4_BLUE_DOWN + Dummy_968*tmp_6_BLUE_DOWN + Dummy_969*tmp_8_BLUE_DOWN + tmp_10_BLUE_DOWN*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN));
             {
                {
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_970 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_971 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_972 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_973 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
             const walberla::float64 Dummy_974 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 Dummy_975 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 Dummy_976 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 Dummy_977 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 tmp_4_GREEN_UP = Dummy_974*Dummy_981;
             const walberla::float64 tmp_6_GREEN_UP = Dummy_975*Dummy_981;
             const walberla::float64 tmp_8_GREEN_UP = Dummy_976*Dummy_981;
             const walberla::float64 tmp_10_GREEN_UP = Dummy_977*Dummy_981;
             const walberla::float64 Dummy_988 = Dummy_982*tmp_6_GREEN_UP + Dummy_983*tmp_8_GREEN_UP + Dummy_984*tmp_10_GREEN_UP + tmp_4_GREEN_UP*((Dummy_978*Dummy_978) + (Dummy_979*Dummy_979) + (Dummy_980*Dummy_980));
             const walberla::float64 Dummy_989 = Dummy_982*tmp_4_GREEN_UP + Dummy_985*tmp_8_GREEN_UP + Dummy_986*tmp_10_GREEN_UP + tmp_6_GREEN_UP*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
             const walberla::float64 Dummy_990 = Dummy_983*tmp_4_GREEN_UP + Dummy_985*tmp_6_GREEN_UP + Dummy_987*tmp_10_GREEN_UP + tmp_8_GREEN_UP*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
             const walberla::float64 Dummy_991 = Dummy_984*tmp_4_GREEN_UP + Dummy_986*tmp_6_GREEN_UP + Dummy_987*tmp_8_GREEN_UP + tmp_10_GREEN_UP*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP));
             {
                {
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_988 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_989 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_990 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_991 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             const walberla::float64 Dummy_992 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 Dummy_993 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 Dummy_994 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 Dummy_995 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 tmp_4_GREEN_DOWN = Dummy_992*Dummy_999;
             const walberla::float64 tmp_6_GREEN_DOWN = Dummy_993*Dummy_999;
             const walberla::float64 tmp_8_GREEN_DOWN = Dummy_994*Dummy_999;
             const walberla::float64 tmp_10_GREEN_DOWN = Dummy_995*Dummy_999;
             const walberla::float64 Dummy_1006 = Dummy_1000*tmp_6_GREEN_DOWN + Dummy_1001*tmp_8_GREEN_DOWN + Dummy_1002*tmp_10_GREEN_DOWN + tmp_4_GREEN_DOWN*((Dummy_996*Dummy_996) + (Dummy_997*Dummy_997) + (Dummy_998*Dummy_998));
             const walberla::float64 Dummy_1007 = Dummy_1000*tmp_4_GREEN_DOWN + Dummy_1003*tmp_8_GREEN_DOWN + Dummy_1004*tmp_10_GREEN_DOWN + tmp_6_GREEN_DOWN*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
             const walberla::float64 Dummy_1008 = Dummy_1001*tmp_4_GREEN_DOWN + Dummy_1003*tmp_6_GREEN_DOWN + Dummy_1005*tmp_10_GREEN_DOWN + tmp_8_GREEN_DOWN*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
             const walberla::float64 Dummy_1009 = Dummy_1002*tmp_4_GREEN_DOWN + Dummy_1004*tmp_6_GREEN_DOWN + Dummy_1005*tmp_8_GREEN_DOWN + tmp_10_GREEN_DOWN*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN));
             {
                {
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1006 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1007 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1008 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1009 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
          }
          if (-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2 >= 0)
          {
             const walberla::float64 src_dof_0 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 src_dof_1 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const walberla::float64 src_dof_2 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 src_dof_3 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 tmp_0_WHITE_UP = -jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP;
             const walberla::float64 tmp_1_WHITE_UP = -jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP;
             const walberla::float64 tmp_2_WHITE_UP = -jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP;
             const walberla::float64 tmp_3_WHITE_UP = abs_det_jac_affine_WHITE_UP*0.16666666666666666;
             const walberla::float64 tmp_4_WHITE_UP = src_dof_0*tmp_3_WHITE_UP;
             const walberla::float64 tmp_5_WHITE_UP = jac_affine_inv_0_0_WHITE_UP*tmp_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*tmp_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*tmp_2_WHITE_UP;
             const walberla::float64 tmp_6_WHITE_UP = src_dof_1*tmp_3_WHITE_UP;
             const walberla::float64 tmp_7_WHITE_UP = jac_affine_inv_1_0_WHITE_UP*tmp_0_WHITE_UP + jac_affine_inv_1_1_WHITE_UP*tmp_1_WHITE_UP + jac_affine_inv_1_2_WHITE_UP*tmp_2_WHITE_UP;
             const walberla::float64 tmp_8 = src_dof_2*tmp_3_WHITE_UP;
             const walberla::float64 tmp_9 = jac_affine_inv_2_0_WHITE_UP*tmp_0_WHITE_UP + jac_affine_inv_2_1_WHITE_UP*tmp_1_WHITE_UP + jac_affine_inv_2_2_WHITE_UP*tmp_2_WHITE_UP;
             const walberla::float64 tmp_10 = src_dof_3*tmp_3_WHITE_UP;
             const walberla::float64 tmp_11 = jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP;
             const walberla::float64 tmp_12 = jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP;
             const walberla::float64 tmp_13 = jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP;
             const walberla::float64 elMatVec_0 = tmp_10*tmp_9 + tmp_4_WHITE_UP*((tmp_0_WHITE_UP*tmp_0_WHITE_UP) + (tmp_1_WHITE_UP*tmp_1_WHITE_UP) + (tmp_2_WHITE_UP*tmp_2_WHITE_UP)) + tmp_5_WHITE_UP*tmp_6_WHITE_UP + tmp_7_WHITE_UP*tmp_8;
             const walberla::float64 elMatVec_1 = tmp_10*tmp_12 + tmp_11*tmp_8 + tmp_4_WHITE_UP*tmp_5_WHITE_UP + tmp_6_WHITE_UP*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
             const walberla::float64 elMatVec_2 = tmp_10*tmp_13 + tmp_11*tmp_6_WHITE_UP + tmp_4_WHITE_UP*tmp_7_WHITE_UP + tmp_8*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
             const walberla::float64 elMatVec_3 = tmp_10*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP)) + tmp_12*tmp_6_WHITE_UP + tmp_13*tmp_8 + tmp_4_WHITE_UP*tmp_9;
             {
                {
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatVec_0 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatVec_1 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatVec_2 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatVec_3 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const walberla::float64 Dummy_1010 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const walberla::float64 Dummy_1011 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 Dummy_1012 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const walberla::float64 Dummy_1013 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const walberla::float64 tmp_0_BLUE_UP = -jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP;
             const walberla::float64 tmp_1_BLUE_UP = -jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP;
             const walberla::float64 tmp_2_BLUE_UP = -jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP;
             const walberla::float64 tmp_3_BLUE_UP = abs_det_jac_affine_BLUE_UP*0.16666666666666666;
             const walberla::float64 tmp_4_BLUE_UP = Dummy_1010*tmp_3_BLUE_UP;
             const walberla::float64 tmp_5_BLUE_UP = jac_affine_inv_0_0_BLUE_UP*tmp_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*tmp_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*tmp_2_BLUE_UP;
             const walberla::float64 tmp_6_BLUE_UP = Dummy_1011*tmp_3_BLUE_UP;
             const walberla::float64 tmp_7_BLUE_UP = jac_affine_inv_1_0_BLUE_UP*tmp_0_BLUE_UP + jac_affine_inv_1_1_BLUE_UP*tmp_1_BLUE_UP + jac_affine_inv_1_2_BLUE_UP*tmp_2_BLUE_UP;
             const walberla::float64 tmp_8_BLUE_UP = Dummy_1012*tmp_3_BLUE_UP;
             const walberla::float64 tmp_9_BLUE_UP = jac_affine_inv_2_0_BLUE_UP*tmp_0_BLUE_UP + jac_affine_inv_2_1_BLUE_UP*tmp_1_BLUE_UP + jac_affine_inv_2_2_BLUE_UP*tmp_2_BLUE_UP;
             const walberla::float64 tmp_10_BLUE_UP = Dummy_1013*tmp_3_BLUE_UP;
             const walberla::float64 tmp_11_BLUE_UP = jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP;
             const walberla::float64 tmp_12_BLUE_UP = jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP;
             const walberla::float64 tmp_13_BLUE_UP = jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP;
             const walberla::float64 Dummy_1014 = tmp_10_BLUE_UP*tmp_9_BLUE_UP + tmp_4_BLUE_UP*((tmp_0_BLUE_UP*tmp_0_BLUE_UP) + (tmp_1_BLUE_UP*tmp_1_BLUE_UP) + (tmp_2_BLUE_UP*tmp_2_BLUE_UP)) + tmp_5_BLUE_UP*tmp_6_BLUE_UP + tmp_7_BLUE_UP*tmp_8_BLUE_UP;
             const walberla::float64 Dummy_1015 = tmp_10_BLUE_UP*tmp_12_BLUE_UP + tmp_11_BLUE_UP*tmp_8_BLUE_UP + tmp_4_BLUE_UP*tmp_5_BLUE_UP + tmp_6_BLUE_UP*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
             const walberla::float64 Dummy_1016 = tmp_10_BLUE_UP*tmp_13_BLUE_UP + tmp_11_BLUE_UP*tmp_6_BLUE_UP + tmp_4_BLUE_UP*tmp_7_BLUE_UP + tmp_8_BLUE_UP*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
             const walberla::float64 Dummy_1017 = tmp_10_BLUE_UP*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP)) + tmp_12_BLUE_UP*tmp_6_BLUE_UP + tmp_13_BLUE_UP*tmp_8_BLUE_UP + tmp_4_BLUE_UP*tmp_9_BLUE_UP;
             {
                {
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1014 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1015 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1016 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1017 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
             const walberla::float64 Dummy_1018 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 Dummy_1019 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 Dummy_1020 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const walberla::float64 Dummy_1021 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 tmp_0_BLUE_DOWN = -jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN;
             const walberla::float64 tmp_1_BLUE_DOWN = -jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN;
             const walberla::float64 tmp_2_BLUE_DOWN = -jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN;
             const walberla::float64 tmp_3_BLUE_DOWN = abs_det_jac_affine_BLUE_DOWN*0.16666666666666666;
             const walberla::float64 tmp_4_BLUE_DOWN = Dummy_1018*tmp_3_BLUE_DOWN;
             const walberla::float64 tmp_5_BLUE_DOWN = jac_affine_inv_0_0_BLUE_DOWN*tmp_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*tmp_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*tmp_2_BLUE_DOWN;
             const walberla::float64 tmp_6_BLUE_DOWN = Dummy_1019*tmp_3_BLUE_DOWN;
             const walberla::float64 tmp_7_BLUE_DOWN = jac_affine_inv_1_0_BLUE_DOWN*tmp_0_BLUE_DOWN + jac_affine_inv_1_1_BLUE_DOWN*tmp_1_BLUE_DOWN + jac_affine_inv_1_2_BLUE_DOWN*tmp_2_BLUE_DOWN;
             const walberla::float64 tmp_8_BLUE_DOWN = Dummy_1020*tmp_3_BLUE_DOWN;
             const walberla::float64 tmp_9_BLUE_DOWN = jac_affine_inv_2_0_BLUE_DOWN*tmp_0_BLUE_DOWN + jac_affine_inv_2_1_BLUE_DOWN*tmp_1_BLUE_DOWN + jac_affine_inv_2_2_BLUE_DOWN*tmp_2_BLUE_DOWN;
             const walberla::float64 tmp_10_BLUE_DOWN = Dummy_1021*tmp_3_BLUE_DOWN;
             const walberla::float64 tmp_11_BLUE_DOWN = jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN;
             const walberla::float64 tmp_12_BLUE_DOWN = jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN;
             const walberla::float64 tmp_13_BLUE_DOWN = jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN;
             const walberla::float64 Dummy_1022 = tmp_10_BLUE_DOWN*tmp_9_BLUE_DOWN + tmp_4_BLUE_DOWN*((tmp_0_BLUE_DOWN*tmp_0_BLUE_DOWN) + (tmp_1_BLUE_DOWN*tmp_1_BLUE_DOWN) + (tmp_2_BLUE_DOWN*tmp_2_BLUE_DOWN)) + tmp_5_BLUE_DOWN*tmp_6_BLUE_DOWN + tmp_7_BLUE_DOWN*tmp_8_BLUE_DOWN;
             const walberla::float64 Dummy_1023 = tmp_10_BLUE_DOWN*tmp_12_BLUE_DOWN + tmp_11_BLUE_DOWN*tmp_8_BLUE_DOWN + tmp_4_BLUE_DOWN*tmp_5_BLUE_DOWN + tmp_6_BLUE_DOWN*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
             const walberla::float64 Dummy_1024 = tmp_10_BLUE_DOWN*tmp_13_BLUE_DOWN + tmp_11_BLUE_DOWN*tmp_6_BLUE_DOWN + tmp_4_BLUE_DOWN*tmp_7_BLUE_DOWN + tmp_8_BLUE_DOWN*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
             const walberla::float64 Dummy_1025 = tmp_10_BLUE_DOWN*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN)) + tmp_12_BLUE_DOWN*tmp_6_BLUE_DOWN + tmp_13_BLUE_DOWN*tmp_8_BLUE_DOWN + tmp_4_BLUE_DOWN*tmp_9_BLUE_DOWN;
             {
                {
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1022 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1023 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1024 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1025 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const walberla::float64 Dummy_1026 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const walberla::float64 Dummy_1027 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 Dummy_1028 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 Dummy_1029 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const walberla::float64 tmp_0_GREEN_UP = -jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP;
             const walberla::float64 tmp_1_GREEN_UP = -jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP;
             const walberla::float64 tmp_2_GREEN_UP = -jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP;
             const walberla::float64 tmp_3_GREEN_UP = abs_det_jac_affine_GREEN_UP*0.16666666666666666;
             const walberla::float64 tmp_4_GREEN_UP = Dummy_1026*tmp_3_GREEN_UP;
             const walberla::float64 tmp_5_GREEN_UP = jac_affine_inv_0_0_GREEN_UP*tmp_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*tmp_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*tmp_2_GREEN_UP;
             const walberla::float64 tmp_6_GREEN_UP = Dummy_1027*tmp_3_GREEN_UP;
             const walberla::float64 tmp_7_GREEN_UP = jac_affine_inv_1_0_GREEN_UP*tmp_0_GREEN_UP + jac_affine_inv_1_1_GREEN_UP*tmp_1_GREEN_UP + jac_affine_inv_1_2_GREEN_UP*tmp_2_GREEN_UP;
             const walberla::float64 tmp_8_GREEN_UP = Dummy_1028*tmp_3_GREEN_UP;
             const walberla::float64 tmp_9_GREEN_UP = jac_affine_inv_2_0_GREEN_UP*tmp_0_GREEN_UP + jac_affine_inv_2_1_GREEN_UP*tmp_1_GREEN_UP + jac_affine_inv_2_2_GREEN_UP*tmp_2_GREEN_UP;
             const walberla::float64 tmp_10_GREEN_UP = Dummy_1029*tmp_3_GREEN_UP;
             const walberla::float64 tmp_11_GREEN_UP = jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP;
             const walberla::float64 tmp_12_GREEN_UP = jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP;
             const walberla::float64 tmp_13_GREEN_UP = jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP;
             const walberla::float64 Dummy_1030 = tmp_10_GREEN_UP*tmp_9_GREEN_UP + tmp_4_GREEN_UP*((tmp_0_GREEN_UP*tmp_0_GREEN_UP) + (tmp_1_GREEN_UP*tmp_1_GREEN_UP) + (tmp_2_GREEN_UP*tmp_2_GREEN_UP)) + tmp_5_GREEN_UP*tmp_6_GREEN_UP + tmp_7_GREEN_UP*tmp_8_GREEN_UP;
             const walberla::float64 Dummy_1031 = tmp_10_GREEN_UP*tmp_12_GREEN_UP + tmp_11_GREEN_UP*tmp_8_GREEN_UP + tmp_4_GREEN_UP*tmp_5_GREEN_UP + tmp_6_GREEN_UP*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
             const walberla::float64 Dummy_1032 = tmp_10_GREEN_UP*tmp_13_GREEN_UP + tmp_11_GREEN_UP*tmp_6_GREEN_UP + tmp_4_GREEN_UP*tmp_7_GREEN_UP + tmp_8_GREEN_UP*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
             const walberla::float64 Dummy_1033 = tmp_10_GREEN_UP*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP)) + tmp_12_GREEN_UP*tmp_6_GREEN_UP + tmp_13_GREEN_UP*tmp_8_GREEN_UP + tmp_4_GREEN_UP*tmp_9_GREEN_UP;
             {
                {
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1030 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1031 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1032 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1033 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
             const walberla::float64 Dummy_1034 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 Dummy_1035 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const walberla::float64 Dummy_1036 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const walberla::float64 Dummy_1037 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const walberla::float64 tmp_0_GREEN_DOWN = -jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN;
             const walberla::float64 tmp_1_GREEN_DOWN = -jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN;
             const walberla::float64 tmp_2_GREEN_DOWN = -jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN;
             const walberla::float64 tmp_3_GREEN_DOWN = abs_det_jac_affine_GREEN_DOWN*0.16666666666666666;
             const walberla::float64 tmp_4_GREEN_DOWN = Dummy_1034*tmp_3_GREEN_DOWN;
             const walberla::float64 tmp_5_GREEN_DOWN = jac_affine_inv_0_0_GREEN_DOWN*tmp_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*tmp_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*tmp_2_GREEN_DOWN;
             const walberla::float64 tmp_6_GREEN_DOWN = Dummy_1035*tmp_3_GREEN_DOWN;
             const walberla::float64 tmp_7_GREEN_DOWN = jac_affine_inv_1_0_GREEN_DOWN*tmp_0_GREEN_DOWN + jac_affine_inv_1_1_GREEN_DOWN*tmp_1_GREEN_DOWN + jac_affine_inv_1_2_GREEN_DOWN*tmp_2_GREEN_DOWN;
             const walberla::float64 tmp_8_GREEN_DOWN = Dummy_1036*tmp_3_GREEN_DOWN;
             const walberla::float64 tmp_9_GREEN_DOWN = jac_affine_inv_2_0_GREEN_DOWN*tmp_0_GREEN_DOWN + jac_affine_inv_2_1_GREEN_DOWN*tmp_1_GREEN_DOWN + jac_affine_inv_2_2_GREEN_DOWN*tmp_2_GREEN_DOWN;
             const walberla::float64 tmp_10_GREEN_DOWN = Dummy_1037*tmp_3_GREEN_DOWN;
             const walberla::float64 tmp_11_GREEN_DOWN = jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN;
             const walberla::float64 tmp_12_GREEN_DOWN = jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN;
             const walberla::float64 tmp_13_GREEN_DOWN = jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN;
             const walberla::float64 Dummy_1038 = tmp_10_GREEN_DOWN*tmp_9_GREEN_DOWN + tmp_4_GREEN_DOWN*((tmp_0_GREEN_DOWN*tmp_0_GREEN_DOWN) + (tmp_1_GREEN_DOWN*tmp_1_GREEN_DOWN) + (tmp_2_GREEN_DOWN*tmp_2_GREEN_DOWN)) + tmp_5_GREEN_DOWN*tmp_6_GREEN_DOWN + tmp_7_GREEN_DOWN*tmp_8_GREEN_DOWN;
             const walberla::float64 Dummy_1039 = tmp_10_GREEN_DOWN*tmp_12_GREEN_DOWN + tmp_11_GREEN_DOWN*tmp_8_GREEN_DOWN + tmp_4_GREEN_DOWN*tmp_5_GREEN_DOWN + tmp_6_GREEN_DOWN*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
             const walberla::float64 Dummy_1040 = tmp_10_GREEN_DOWN*tmp_13_GREEN_DOWN + tmp_11_GREEN_DOWN*tmp_6_GREEN_DOWN + tmp_4_GREEN_DOWN*tmp_7_GREEN_DOWN + tmp_8_GREEN_DOWN*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
             const walberla::float64 Dummy_1041 = tmp_10_GREEN_DOWN*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN)) + tmp_12_GREEN_DOWN*tmp_6_GREEN_DOWN + tmp_13_GREEN_DOWN*tmp_8_GREEN_DOWN + tmp_4_GREEN_DOWN*tmp_9_GREEN_DOWN;
             {
                {
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1038 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1039 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1040 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1041 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
          } 
          const walberla::float64 src_dof_0 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
          const walberla::float64 src_dof_1 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
          const walberla::float64 src_dof_2 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
          const walberla::float64 src_dof_3 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
          const walberla::float64 tmp_4_WHITE_UP = Dummy_1045*src_dof_0;
          const walberla::float64 tmp_6_WHITE_UP = Dummy_1045*src_dof_1;
          const walberla::float64 tmp_8 = Dummy_1045*src_dof_2;
          const walberla::float64 tmp_10 = Dummy_1045*src_dof_3;
          const walberla::float64 elMatVec_0 = Dummy_1046*tmp_6_WHITE_UP + Dummy_1047*tmp_8 + Dummy_1048*tmp_10 + tmp_4_WHITE_UP*((Dummy_1042*Dummy_1042) + (Dummy_1043*Dummy_1043) + (Dummy_1044*Dummy_1044));
          const walberla::float64 elMatVec_1 = Dummy_1046*tmp_4_WHITE_UP + tmp_10*tmp_12 + tmp_11*tmp_8 + tmp_6_WHITE_UP*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
          const walberla::float64 elMatVec_2 = Dummy_1047*tmp_4_WHITE_UP + tmp_10*tmp_13 + tmp_11*tmp_6_WHITE_UP + tmp_8*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
          const walberla::float64 elMatVec_3 = Dummy_1048*tmp_4_WHITE_UP + tmp_10*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP)) + tmp_12*tmp_6_WHITE_UP + tmp_13*tmp_8;
          {
             {
                {
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatVec_0 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatVec_2 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatVec_3 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
