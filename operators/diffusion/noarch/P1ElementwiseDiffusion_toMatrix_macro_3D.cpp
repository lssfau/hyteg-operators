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

void P1ElementwiseDiffusion::toMatrix_macro_3D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_src, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_0comp2, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_1comp2, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, walberla::float64 macro_vertex_coord_id_2comp2, walberla::float64 macro_vertex_coord_id_3comp0, walberla::float64 macro_vertex_coord_id_3comp1, walberla::float64 macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
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
       const walberla::float64 tmp_kernel_op_0 = -jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP;
       const walberla::float64 tmp_kernel_op_1 = -jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP;
       const walberla::float64 tmp_kernel_op_2 = -jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP;
       const walberla::float64 tmp_kernel_op_3 = abs_det_jac_affine_WHITE_UP*0.16666666666666663;
       const walberla::float64 tmp_kernel_op_4 = tmp_kernel_op_3*(jac_affine_inv_0_0_WHITE_UP*tmp_kernel_op_0 + jac_affine_inv_0_1_WHITE_UP*tmp_kernel_op_1 + jac_affine_inv_0_2_WHITE_UP*tmp_kernel_op_2);
       const walberla::float64 tmp_kernel_op_5 = tmp_kernel_op_3*(jac_affine_inv_1_0_WHITE_UP*tmp_kernel_op_0 + jac_affine_inv_1_1_WHITE_UP*tmp_kernel_op_1 + jac_affine_inv_1_2_WHITE_UP*tmp_kernel_op_2);
       const walberla::float64 tmp_kernel_op_6 = tmp_kernel_op_3*(jac_affine_inv_2_0_WHITE_UP*tmp_kernel_op_0 + jac_affine_inv_2_1_WHITE_UP*tmp_kernel_op_1 + jac_affine_inv_2_2_WHITE_UP*tmp_kernel_op_2);
       const walberla::float64 tmp_kernel_op_7 = tmp_kernel_op_3*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP);
       const walberla::float64 tmp_kernel_op_8 = tmp_kernel_op_3*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
       const walberla::float64 tmp_kernel_op_9 = tmp_kernel_op_3*(jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
       const walberla::float64 elMat_0_0 = tmp_kernel_op_3*((tmp_kernel_op_0*tmp_kernel_op_0) + (tmp_kernel_op_1*tmp_kernel_op_1) + (tmp_kernel_op_2*tmp_kernel_op_2));
       const walberla::float64 elMat_0_1 = tmp_kernel_op_4;
       const walberla::float64 elMat_0_2 = tmp_kernel_op_5;
       const walberla::float64 elMat_0_3 = tmp_kernel_op_6;
       const walberla::float64 elMat_1_0 = tmp_kernel_op_4;
       const walberla::float64 elMat_1_1 = tmp_kernel_op_3*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
       const walberla::float64 elMat_1_2 = tmp_kernel_op_7;
       const walberla::float64 elMat_1_3 = tmp_kernel_op_8;
       const walberla::float64 elMat_2_0 = tmp_kernel_op_5;
       const walberla::float64 elMat_2_1 = tmp_kernel_op_7;
       const walberla::float64 elMat_2_2 = tmp_kernel_op_3*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
       const walberla::float64 elMat_2_3 = tmp_kernel_op_9;
       const walberla::float64 elMat_3_0 = tmp_kernel_op_6;
       const walberla::float64 elMat_3_1 = tmp_kernel_op_8;
       const walberla::float64 elMat_3_2 = tmp_kernel_op_9;
       const walberla::float64 elMat_3_3 = tmp_kernel_op_3*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
       const walberla::float64 Dummy_1326 = -jac_affine_inv_0_0_WHITE_DOWN - jac_affine_inv_1_0_WHITE_DOWN - jac_affine_inv_2_0_WHITE_DOWN;
       const walberla::float64 Dummy_1327 = -jac_affine_inv_0_1_WHITE_DOWN - jac_affine_inv_1_1_WHITE_DOWN - jac_affine_inv_2_1_WHITE_DOWN;
       const walberla::float64 Dummy_1328 = -jac_affine_inv_0_2_WHITE_DOWN - jac_affine_inv_1_2_WHITE_DOWN - jac_affine_inv_2_2_WHITE_DOWN;
       const walberla::float64 Dummy_1329 = abs_det_jac_affine_WHITE_DOWN*0.16666666666666663;
       const walberla::float64 Dummy_1330 = Dummy_1329*(Dummy_1326*jac_affine_inv_0_0_WHITE_DOWN + Dummy_1327*jac_affine_inv_0_1_WHITE_DOWN + Dummy_1328*jac_affine_inv_0_2_WHITE_DOWN);
       const walberla::float64 Dummy_1331 = Dummy_1329*(Dummy_1326*jac_affine_inv_1_0_WHITE_DOWN + Dummy_1327*jac_affine_inv_1_1_WHITE_DOWN + Dummy_1328*jac_affine_inv_1_2_WHITE_DOWN);
       const walberla::float64 Dummy_1332 = Dummy_1329*(Dummy_1326*jac_affine_inv_2_0_WHITE_DOWN + Dummy_1327*jac_affine_inv_2_1_WHITE_DOWN + Dummy_1328*jac_affine_inv_2_2_WHITE_DOWN);
       const walberla::float64 Dummy_1333 = Dummy_1329*(jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_1_0_WHITE_DOWN + jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_1_1_WHITE_DOWN + jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_1_2_WHITE_DOWN);
       const walberla::float64 Dummy_1334 = Dummy_1329*(jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN + jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN + jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN);
       const walberla::float64 Dummy_1335 = Dummy_1329*(jac_affine_inv_1_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN + jac_affine_inv_1_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN + jac_affine_inv_1_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN);
       const walberla::float64 Dummy_1336 = Dummy_1329*((Dummy_1326*Dummy_1326) + (Dummy_1327*Dummy_1327) + (Dummy_1328*Dummy_1328));
       const walberla::float64 Dummy_1337 = Dummy_1330;
       const walberla::float64 Dummy_1338 = Dummy_1331;
       const walberla::float64 Dummy_1339 = Dummy_1332;
       const walberla::float64 Dummy_1340 = Dummy_1330;
       const walberla::float64 Dummy_1341 = Dummy_1329*((jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_0_0_WHITE_DOWN) + (jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_0_1_WHITE_DOWN) + (jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_0_2_WHITE_DOWN));
       const walberla::float64 Dummy_1342 = Dummy_1333;
       const walberla::float64 Dummy_1343 = Dummy_1334;
       const walberla::float64 Dummy_1344 = Dummy_1331;
       const walberla::float64 Dummy_1345 = Dummy_1333;
       const walberla::float64 Dummy_1346 = Dummy_1329*((jac_affine_inv_1_0_WHITE_DOWN*jac_affine_inv_1_0_WHITE_DOWN) + (jac_affine_inv_1_1_WHITE_DOWN*jac_affine_inv_1_1_WHITE_DOWN) + (jac_affine_inv_1_2_WHITE_DOWN*jac_affine_inv_1_2_WHITE_DOWN));
       const walberla::float64 Dummy_1347 = Dummy_1335;
       const walberla::float64 Dummy_1348 = Dummy_1332;
       const walberla::float64 Dummy_1349 = Dummy_1334;
       const walberla::float64 Dummy_1350 = Dummy_1335;
       const walberla::float64 Dummy_1351 = Dummy_1329*((jac_affine_inv_2_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN) + (jac_affine_inv_2_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN) + (jac_affine_inv_2_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN));
       const walberla::float64 Dummy_1352 = -jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP;
       const walberla::float64 Dummy_1353 = -jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP;
       const walberla::float64 Dummy_1354 = -jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP;
       const walberla::float64 Dummy_1355 = abs_det_jac_affine_BLUE_UP*0.16666666666666663;
       const walberla::float64 Dummy_1356 = Dummy_1355*(Dummy_1352*jac_affine_inv_0_0_BLUE_UP + Dummy_1353*jac_affine_inv_0_1_BLUE_UP + Dummy_1354*jac_affine_inv_0_2_BLUE_UP);
       const walberla::float64 Dummy_1357 = Dummy_1355*(Dummy_1352*jac_affine_inv_1_0_BLUE_UP + Dummy_1353*jac_affine_inv_1_1_BLUE_UP + Dummy_1354*jac_affine_inv_1_2_BLUE_UP);
       const walberla::float64 Dummy_1358 = Dummy_1355*(Dummy_1352*jac_affine_inv_2_0_BLUE_UP + Dummy_1353*jac_affine_inv_2_1_BLUE_UP + Dummy_1354*jac_affine_inv_2_2_BLUE_UP);
       const walberla::float64 Dummy_1359 = Dummy_1355*(jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP);
       const walberla::float64 Dummy_1360 = Dummy_1355*(jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP);
       const walberla::float64 Dummy_1361 = Dummy_1355*(jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP);
       const walberla::float64 Dummy_1362 = Dummy_1355*((Dummy_1352*Dummy_1352) + (Dummy_1353*Dummy_1353) + (Dummy_1354*Dummy_1354));
       const walberla::float64 Dummy_1363 = Dummy_1356;
       const walberla::float64 Dummy_1364 = Dummy_1357;
       const walberla::float64 Dummy_1365 = Dummy_1358;
       const walberla::float64 Dummy_1366 = Dummy_1356;
       const walberla::float64 Dummy_1367 = Dummy_1355*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
       const walberla::float64 Dummy_1368 = Dummy_1359;
       const walberla::float64 Dummy_1369 = Dummy_1360;
       const walberla::float64 Dummy_1370 = Dummy_1357;
       const walberla::float64 Dummy_1371 = Dummy_1359;
       const walberla::float64 Dummy_1372 = Dummy_1355*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
       const walberla::float64 Dummy_1373 = Dummy_1361;
       const walberla::float64 Dummy_1374 = Dummy_1358;
       const walberla::float64 Dummy_1375 = Dummy_1360;
       const walberla::float64 Dummy_1376 = Dummy_1361;
       const walberla::float64 Dummy_1377 = Dummy_1355*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP));
       const walberla::float64 Dummy_1378 = -jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN;
       const walberla::float64 Dummy_1379 = -jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN;
       const walberla::float64 Dummy_1380 = -jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN;
       const walberla::float64 Dummy_1381 = abs_det_jac_affine_BLUE_DOWN*0.16666666666666663;
       const walberla::float64 Dummy_1382 = Dummy_1381*(Dummy_1378*jac_affine_inv_0_0_BLUE_DOWN + Dummy_1379*jac_affine_inv_0_1_BLUE_DOWN + Dummy_1380*jac_affine_inv_0_2_BLUE_DOWN);
       const walberla::float64 Dummy_1383 = Dummy_1381*(Dummy_1378*jac_affine_inv_1_0_BLUE_DOWN + Dummy_1379*jac_affine_inv_1_1_BLUE_DOWN + Dummy_1380*jac_affine_inv_1_2_BLUE_DOWN);
       const walberla::float64 Dummy_1384 = Dummy_1381*(Dummy_1378*jac_affine_inv_2_0_BLUE_DOWN + Dummy_1379*jac_affine_inv_2_1_BLUE_DOWN + Dummy_1380*jac_affine_inv_2_2_BLUE_DOWN);
       const walberla::float64 Dummy_1385 = Dummy_1381*(jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN);
       const walberla::float64 Dummy_1386 = Dummy_1381*(jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN);
       const walberla::float64 Dummy_1387 = Dummy_1381*(jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN);
       const walberla::float64 Dummy_1388 = Dummy_1381*((Dummy_1378*Dummy_1378) + (Dummy_1379*Dummy_1379) + (Dummy_1380*Dummy_1380));
       const walberla::float64 Dummy_1389 = Dummy_1382;
       const walberla::float64 Dummy_1390 = Dummy_1383;
       const walberla::float64 Dummy_1391 = Dummy_1384;
       const walberla::float64 Dummy_1392 = Dummy_1382;
       const walberla::float64 Dummy_1393 = Dummy_1381*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
       const walberla::float64 Dummy_1394 = Dummy_1385;
       const walberla::float64 Dummy_1395 = Dummy_1386;
       const walberla::float64 Dummy_1396 = Dummy_1383;
       const walberla::float64 Dummy_1397 = Dummy_1385;
       const walberla::float64 Dummy_1398 = Dummy_1381*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
       const walberla::float64 Dummy_1399 = Dummy_1387;
       const walberla::float64 Dummy_1400 = Dummy_1384;
       const walberla::float64 Dummy_1401 = Dummy_1386;
       const walberla::float64 Dummy_1402 = Dummy_1387;
       const walberla::float64 Dummy_1403 = Dummy_1381*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN));
       const walberla::float64 Dummy_1404 = -jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP;
       const walberla::float64 Dummy_1405 = -jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP;
       const walberla::float64 Dummy_1406 = -jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP;
       const walberla::float64 Dummy_1407 = abs_det_jac_affine_GREEN_UP*0.16666666666666663;
       const walberla::float64 Dummy_1408 = Dummy_1407*(Dummy_1404*jac_affine_inv_0_0_GREEN_UP + Dummy_1405*jac_affine_inv_0_1_GREEN_UP + Dummy_1406*jac_affine_inv_0_2_GREEN_UP);
       const walberla::float64 Dummy_1409 = Dummy_1407*(Dummy_1404*jac_affine_inv_1_0_GREEN_UP + Dummy_1405*jac_affine_inv_1_1_GREEN_UP + Dummy_1406*jac_affine_inv_1_2_GREEN_UP);
       const walberla::float64 Dummy_1410 = Dummy_1407*(Dummy_1404*jac_affine_inv_2_0_GREEN_UP + Dummy_1405*jac_affine_inv_2_1_GREEN_UP + Dummy_1406*jac_affine_inv_2_2_GREEN_UP);
       const walberla::float64 Dummy_1411 = Dummy_1407*(jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP);
       const walberla::float64 Dummy_1412 = Dummy_1407*(jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP);
       const walberla::float64 Dummy_1413 = Dummy_1407*(jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP);
       const walberla::float64 Dummy_1414 = Dummy_1407*((Dummy_1404*Dummy_1404) + (Dummy_1405*Dummy_1405) + (Dummy_1406*Dummy_1406));
       const walberla::float64 Dummy_1415 = Dummy_1408;
       const walberla::float64 Dummy_1416 = Dummy_1409;
       const walberla::float64 Dummy_1417 = Dummy_1410;
       const walberla::float64 Dummy_1418 = Dummy_1408;
       const walberla::float64 Dummy_1419 = Dummy_1407*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
       const walberla::float64 Dummy_1420 = Dummy_1411;
       const walberla::float64 Dummy_1421 = Dummy_1412;
       const walberla::float64 Dummy_1422 = Dummy_1409;
       const walberla::float64 Dummy_1423 = Dummy_1411;
       const walberla::float64 Dummy_1424 = Dummy_1407*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
       const walberla::float64 Dummy_1425 = Dummy_1413;
       const walberla::float64 Dummy_1426 = Dummy_1410;
       const walberla::float64 Dummy_1427 = Dummy_1412;
       const walberla::float64 Dummy_1428 = Dummy_1413;
       const walberla::float64 Dummy_1429 = Dummy_1407*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP));
       const walberla::float64 Dummy_1430 = -jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN;
       const walberla::float64 Dummy_1431 = -jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN;
       const walberla::float64 Dummy_1432 = -jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN;
       const walberla::float64 Dummy_1433 = abs_det_jac_affine_GREEN_DOWN*0.16666666666666663;
       const walberla::float64 Dummy_1434 = Dummy_1433*(Dummy_1430*jac_affine_inv_0_0_GREEN_DOWN + Dummy_1431*jac_affine_inv_0_1_GREEN_DOWN + Dummy_1432*jac_affine_inv_0_2_GREEN_DOWN);
       const walberla::float64 Dummy_1435 = Dummy_1433*(Dummy_1430*jac_affine_inv_1_0_GREEN_DOWN + Dummy_1431*jac_affine_inv_1_1_GREEN_DOWN + Dummy_1432*jac_affine_inv_1_2_GREEN_DOWN);
       const walberla::float64 Dummy_1436 = Dummy_1433*(Dummy_1430*jac_affine_inv_2_0_GREEN_DOWN + Dummy_1431*jac_affine_inv_2_1_GREEN_DOWN + Dummy_1432*jac_affine_inv_2_2_GREEN_DOWN);
       const walberla::float64 Dummy_1437 = Dummy_1433*(jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN);
       const walberla::float64 Dummy_1438 = Dummy_1433*(jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN);
       const walberla::float64 Dummy_1439 = Dummy_1433*(jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN);
       const walberla::float64 Dummy_1440 = Dummy_1433*((Dummy_1430*Dummy_1430) + (Dummy_1431*Dummy_1431) + (Dummy_1432*Dummy_1432));
       const walberla::float64 Dummy_1441 = Dummy_1434;
       const walberla::float64 Dummy_1442 = Dummy_1435;
       const walberla::float64 Dummy_1443 = Dummy_1436;
       const walberla::float64 Dummy_1444 = Dummy_1434;
       const walberla::float64 Dummy_1445 = Dummy_1433*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
       const walberla::float64 Dummy_1446 = Dummy_1437;
       const walberla::float64 Dummy_1447 = Dummy_1438;
       const walberla::float64 Dummy_1448 = Dummy_1435;
       const walberla::float64 Dummy_1449 = Dummy_1437;
       const walberla::float64 Dummy_1450 = Dummy_1433*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
       const walberla::float64 Dummy_1451 = Dummy_1439;
       const walberla::float64 Dummy_1452 = Dummy_1436;
       const walberla::float64 Dummy_1453 = Dummy_1438;
       const walberla::float64 Dummy_1454 = Dummy_1439;
       const walberla::float64 Dummy_1455 = Dummy_1433*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN));
       for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
       for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(elMat_0_0));
                   _data_mat[1] = ((walberla::float64)(elMat_0_1));
                   _data_mat[2] = ((walberla::float64)(elMat_0_2));
                   _data_mat[3] = ((walberla::float64)(elMat_0_3));
                   _data_mat[4] = ((walberla::float64)(elMat_1_0));
                   _data_mat[5] = ((walberla::float64)(elMat_1_1));
                   _data_mat[6] = ((walberla::float64)(elMat_1_2));
                   _data_mat[7] = ((walberla::float64)(elMat_1_3));
                   _data_mat[8] = ((walberla::float64)(elMat_2_0));
                   _data_mat[9] = ((walberla::float64)(elMat_2_1));
                   _data_mat[10] = ((walberla::float64)(elMat_2_2));
                   _data_mat[11] = ((walberla::float64)(elMat_2_3));
                   _data_mat[12] = ((walberla::float64)(elMat_3_0));
                   _data_mat[13] = ((walberla::float64)(elMat_3_1));
                   _data_mat[14] = ((walberla::float64)(elMat_3_2));
                   _data_mat[15] = ((walberla::float64)(elMat_3_3));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1336));
                   _data_mat[1] = ((walberla::float64)(Dummy_1337));
                   _data_mat[2] = ((walberla::float64)(Dummy_1338));
                   _data_mat[3] = ((walberla::float64)(Dummy_1339));
                   _data_mat[4] = ((walberla::float64)(Dummy_1340));
                   _data_mat[5] = ((walberla::float64)(Dummy_1341));
                   _data_mat[6] = ((walberla::float64)(Dummy_1342));
                   _data_mat[7] = ((walberla::float64)(Dummy_1343));
                   _data_mat[8] = ((walberla::float64)(Dummy_1344));
                   _data_mat[9] = ((walberla::float64)(Dummy_1345));
                   _data_mat[10] = ((walberla::float64)(Dummy_1346));
                   _data_mat[11] = ((walberla::float64)(Dummy_1347));
                   _data_mat[12] = ((walberla::float64)(Dummy_1348));
                   _data_mat[13] = ((walberla::float64)(Dummy_1349));
                   _data_mat[14] = ((walberla::float64)(Dummy_1350));
                   _data_mat[15] = ((walberla::float64)(Dummy_1351));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1362));
                   _data_mat[1] = ((walberla::float64)(Dummy_1363));
                   _data_mat[2] = ((walberla::float64)(Dummy_1364));
                   _data_mat[3] = ((walberla::float64)(Dummy_1365));
                   _data_mat[4] = ((walberla::float64)(Dummy_1366));
                   _data_mat[5] = ((walberla::float64)(Dummy_1367));
                   _data_mat[6] = ((walberla::float64)(Dummy_1368));
                   _data_mat[7] = ((walberla::float64)(Dummy_1369));
                   _data_mat[8] = ((walberla::float64)(Dummy_1370));
                   _data_mat[9] = ((walberla::float64)(Dummy_1371));
                   _data_mat[10] = ((walberla::float64)(Dummy_1372));
                   _data_mat[11] = ((walberla::float64)(Dummy_1373));
                   _data_mat[12] = ((walberla::float64)(Dummy_1374));
                   _data_mat[13] = ((walberla::float64)(Dummy_1375));
                   _data_mat[14] = ((walberla::float64)(Dummy_1376));
                   _data_mat[15] = ((walberla::float64)(Dummy_1377));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1388));
                   _data_mat[1] = ((walberla::float64)(Dummy_1389));
                   _data_mat[2] = ((walberla::float64)(Dummy_1390));
                   _data_mat[3] = ((walberla::float64)(Dummy_1391));
                   _data_mat[4] = ((walberla::float64)(Dummy_1392));
                   _data_mat[5] = ((walberla::float64)(Dummy_1393));
                   _data_mat[6] = ((walberla::float64)(Dummy_1394));
                   _data_mat[7] = ((walberla::float64)(Dummy_1395));
                   _data_mat[8] = ((walberla::float64)(Dummy_1396));
                   _data_mat[9] = ((walberla::float64)(Dummy_1397));
                   _data_mat[10] = ((walberla::float64)(Dummy_1398));
                   _data_mat[11] = ((walberla::float64)(Dummy_1399));
                   _data_mat[12] = ((walberla::float64)(Dummy_1400));
                   _data_mat[13] = ((walberla::float64)(Dummy_1401));
                   _data_mat[14] = ((walberla::float64)(Dummy_1402));
                   _data_mat[15] = ((walberla::float64)(Dummy_1403));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1414));
                   _data_mat[1] = ((walberla::float64)(Dummy_1415));
                   _data_mat[2] = ((walberla::float64)(Dummy_1416));
                   _data_mat[3] = ((walberla::float64)(Dummy_1417));
                   _data_mat[4] = ((walberla::float64)(Dummy_1418));
                   _data_mat[5] = ((walberla::float64)(Dummy_1419));
                   _data_mat[6] = ((walberla::float64)(Dummy_1420));
                   _data_mat[7] = ((walberla::float64)(Dummy_1421));
                   _data_mat[8] = ((walberla::float64)(Dummy_1422));
                   _data_mat[9] = ((walberla::float64)(Dummy_1423));
                   _data_mat[10] = ((walberla::float64)(Dummy_1424));
                   _data_mat[11] = ((walberla::float64)(Dummy_1425));
                   _data_mat[12] = ((walberla::float64)(Dummy_1426));
                   _data_mat[13] = ((walberla::float64)(Dummy_1427));
                   _data_mat[14] = ((walberla::float64)(Dummy_1428));
                   _data_mat[15] = ((walberla::float64)(Dummy_1429));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1440));
                   _data_mat[1] = ((walberla::float64)(Dummy_1441));
                   _data_mat[2] = ((walberla::float64)(Dummy_1442));
                   _data_mat[3] = ((walberla::float64)(Dummy_1443));
                   _data_mat[4] = ((walberla::float64)(Dummy_1444));
                   _data_mat[5] = ((walberla::float64)(Dummy_1445));
                   _data_mat[6] = ((walberla::float64)(Dummy_1446));
                   _data_mat[7] = ((walberla::float64)(Dummy_1447));
                   _data_mat[8] = ((walberla::float64)(Dummy_1448));
                   _data_mat[9] = ((walberla::float64)(Dummy_1449));
                   _data_mat[10] = ((walberla::float64)(Dummy_1450));
                   _data_mat[11] = ((walberla::float64)(Dummy_1451));
                   _data_mat[12] = ((walberla::float64)(Dummy_1452));
                   _data_mat[13] = ((walberla::float64)(Dummy_1453));
                   _data_mat[14] = ((walberla::float64)(Dummy_1454));
                   _data_mat[15] = ((walberla::float64)(Dummy_1455));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          if (-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2 >= 0)
          {
             const walberla::float64 tmp_kernel_op_0 = -jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP;
             const walberla::float64 tmp_kernel_op_1 = -jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP;
             const walberla::float64 tmp_kernel_op_2 = -jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP;
             const walberla::float64 tmp_kernel_op_3 = abs_det_jac_affine_WHITE_UP*0.16666666666666663;
             const walberla::float64 tmp_kernel_op_4 = tmp_kernel_op_3*(jac_affine_inv_0_0_WHITE_UP*tmp_kernel_op_0 + jac_affine_inv_0_1_WHITE_UP*tmp_kernel_op_1 + jac_affine_inv_0_2_WHITE_UP*tmp_kernel_op_2);
             const walberla::float64 tmp_kernel_op_5 = tmp_kernel_op_3*(jac_affine_inv_1_0_WHITE_UP*tmp_kernel_op_0 + jac_affine_inv_1_1_WHITE_UP*tmp_kernel_op_1 + jac_affine_inv_1_2_WHITE_UP*tmp_kernel_op_2);
             const walberla::float64 tmp_kernel_op_6 = tmp_kernel_op_3*(jac_affine_inv_2_0_WHITE_UP*tmp_kernel_op_0 + jac_affine_inv_2_1_WHITE_UP*tmp_kernel_op_1 + jac_affine_inv_2_2_WHITE_UP*tmp_kernel_op_2);
             const walberla::float64 tmp_kernel_op_7 = tmp_kernel_op_3*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP);
             const walberla::float64 tmp_kernel_op_8 = tmp_kernel_op_3*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
             const walberla::float64 tmp_kernel_op_9 = tmp_kernel_op_3*(jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
             const walberla::float64 elMat_0_0 = tmp_kernel_op_3*((tmp_kernel_op_0*tmp_kernel_op_0) + (tmp_kernel_op_1*tmp_kernel_op_1) + (tmp_kernel_op_2*tmp_kernel_op_2));
             const walberla::float64 elMat_0_1 = tmp_kernel_op_4;
             const walberla::float64 elMat_0_2 = tmp_kernel_op_5;
             const walberla::float64 elMat_0_3 = tmp_kernel_op_6;
             const walberla::float64 elMat_1_0 = tmp_kernel_op_4;
             const walberla::float64 elMat_1_1 = tmp_kernel_op_3*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
             const walberla::float64 elMat_1_2 = tmp_kernel_op_7;
             const walberla::float64 elMat_1_3 = tmp_kernel_op_8;
             const walberla::float64 elMat_2_0 = tmp_kernel_op_5;
             const walberla::float64 elMat_2_1 = tmp_kernel_op_7;
             const walberla::float64 elMat_2_2 = tmp_kernel_op_3*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
             const walberla::float64 elMat_2_3 = tmp_kernel_op_9;
             const walberla::float64 elMat_3_0 = tmp_kernel_op_6;
             const walberla::float64 elMat_3_1 = tmp_kernel_op_8;
             const walberla::float64 elMat_3_2 = tmp_kernel_op_9;
             const walberla::float64 elMat_3_3 = tmp_kernel_op_3*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(elMat_0_0));
                   _data_mat[1] = ((walberla::float64)(elMat_0_1));
                   _data_mat[2] = ((walberla::float64)(elMat_0_2));
                   _data_mat[3] = ((walberla::float64)(elMat_0_3));
                   _data_mat[4] = ((walberla::float64)(elMat_1_0));
                   _data_mat[5] = ((walberla::float64)(elMat_1_1));
                   _data_mat[6] = ((walberla::float64)(elMat_1_2));
                   _data_mat[7] = ((walberla::float64)(elMat_1_3));
                   _data_mat[8] = ((walberla::float64)(elMat_2_0));
                   _data_mat[9] = ((walberla::float64)(elMat_2_1));
                   _data_mat[10] = ((walberla::float64)(elMat_2_2));
                   _data_mat[11] = ((walberla::float64)(elMat_2_3));
                   _data_mat[12] = ((walberla::float64)(elMat_3_0));
                   _data_mat[13] = ((walberla::float64)(elMat_3_1));
                   _data_mat[14] = ((walberla::float64)(elMat_3_2));
                   _data_mat[15] = ((walberla::float64)(elMat_3_3));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const walberla::float64 Dummy_1456 = -jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP;
             const walberla::float64 Dummy_1457 = -jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP;
             const walberla::float64 Dummy_1458 = -jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP;
             const walberla::float64 Dummy_1459 = abs_det_jac_affine_BLUE_UP*0.16666666666666663;
             const walberla::float64 Dummy_1460 = Dummy_1459*(Dummy_1456*jac_affine_inv_0_0_BLUE_UP + Dummy_1457*jac_affine_inv_0_1_BLUE_UP + Dummy_1458*jac_affine_inv_0_2_BLUE_UP);
             const walberla::float64 Dummy_1461 = Dummy_1459*(Dummy_1456*jac_affine_inv_1_0_BLUE_UP + Dummy_1457*jac_affine_inv_1_1_BLUE_UP + Dummy_1458*jac_affine_inv_1_2_BLUE_UP);
             const walberla::float64 Dummy_1462 = Dummy_1459*(Dummy_1456*jac_affine_inv_2_0_BLUE_UP + Dummy_1457*jac_affine_inv_2_1_BLUE_UP + Dummy_1458*jac_affine_inv_2_2_BLUE_UP);
             const walberla::float64 Dummy_1463 = Dummy_1459*(jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP);
             const walberla::float64 Dummy_1464 = Dummy_1459*(jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP);
             const walberla::float64 Dummy_1465 = Dummy_1459*(jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP);
             const walberla::float64 Dummy_1466 = Dummy_1459*((Dummy_1456*Dummy_1456) + (Dummy_1457*Dummy_1457) + (Dummy_1458*Dummy_1458));
             const walberla::float64 Dummy_1467 = Dummy_1460;
             const walberla::float64 Dummy_1468 = Dummy_1461;
             const walberla::float64 Dummy_1469 = Dummy_1462;
             const walberla::float64 Dummy_1470 = Dummy_1460;
             const walberla::float64 Dummy_1471 = Dummy_1459*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
             const walberla::float64 Dummy_1472 = Dummy_1463;
             const walberla::float64 Dummy_1473 = Dummy_1464;
             const walberla::float64 Dummy_1474 = Dummy_1461;
             const walberla::float64 Dummy_1475 = Dummy_1463;
             const walberla::float64 Dummy_1476 = Dummy_1459*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
             const walberla::float64 Dummy_1477 = Dummy_1465;
             const walberla::float64 Dummy_1478 = Dummy_1462;
             const walberla::float64 Dummy_1479 = Dummy_1464;
             const walberla::float64 Dummy_1480 = Dummy_1465;
             const walberla::float64 Dummy_1481 = Dummy_1459*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1466));
                   _data_mat[1] = ((walberla::float64)(Dummy_1467));
                   _data_mat[2] = ((walberla::float64)(Dummy_1468));
                   _data_mat[3] = ((walberla::float64)(Dummy_1469));
                   _data_mat[4] = ((walberla::float64)(Dummy_1470));
                   _data_mat[5] = ((walberla::float64)(Dummy_1471));
                   _data_mat[6] = ((walberla::float64)(Dummy_1472));
                   _data_mat[7] = ((walberla::float64)(Dummy_1473));
                   _data_mat[8] = ((walberla::float64)(Dummy_1474));
                   _data_mat[9] = ((walberla::float64)(Dummy_1475));
                   _data_mat[10] = ((walberla::float64)(Dummy_1476));
                   _data_mat[11] = ((walberla::float64)(Dummy_1477));
                   _data_mat[12] = ((walberla::float64)(Dummy_1478));
                   _data_mat[13] = ((walberla::float64)(Dummy_1479));
                   _data_mat[14] = ((walberla::float64)(Dummy_1480));
                   _data_mat[15] = ((walberla::float64)(Dummy_1481));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const walberla::float64 Dummy_1482 = -jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN;
             const walberla::float64 Dummy_1483 = -jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN;
             const walberla::float64 Dummy_1484 = -jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN;
             const walberla::float64 Dummy_1485 = abs_det_jac_affine_BLUE_DOWN*0.16666666666666663;
             const walberla::float64 Dummy_1486 = Dummy_1485*(Dummy_1482*jac_affine_inv_0_0_BLUE_DOWN + Dummy_1483*jac_affine_inv_0_1_BLUE_DOWN + Dummy_1484*jac_affine_inv_0_2_BLUE_DOWN);
             const walberla::float64 Dummy_1487 = Dummy_1485*(Dummy_1482*jac_affine_inv_1_0_BLUE_DOWN + Dummy_1483*jac_affine_inv_1_1_BLUE_DOWN + Dummy_1484*jac_affine_inv_1_2_BLUE_DOWN);
             const walberla::float64 Dummy_1488 = Dummy_1485*(Dummy_1482*jac_affine_inv_2_0_BLUE_DOWN + Dummy_1483*jac_affine_inv_2_1_BLUE_DOWN + Dummy_1484*jac_affine_inv_2_2_BLUE_DOWN);
             const walberla::float64 Dummy_1489 = Dummy_1485*(jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN);
             const walberla::float64 Dummy_1490 = Dummy_1485*(jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN);
             const walberla::float64 Dummy_1491 = Dummy_1485*(jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN);
             const walberla::float64 Dummy_1492 = Dummy_1485*((Dummy_1482*Dummy_1482) + (Dummy_1483*Dummy_1483) + (Dummy_1484*Dummy_1484));
             const walberla::float64 Dummy_1493 = Dummy_1486;
             const walberla::float64 Dummy_1494 = Dummy_1487;
             const walberla::float64 Dummy_1495 = Dummy_1488;
             const walberla::float64 Dummy_1496 = Dummy_1486;
             const walberla::float64 Dummy_1497 = Dummy_1485*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
             const walberla::float64 Dummy_1498 = Dummy_1489;
             const walberla::float64 Dummy_1499 = Dummy_1490;
             const walberla::float64 Dummy_1500 = Dummy_1487;
             const walberla::float64 Dummy_1501 = Dummy_1489;
             const walberla::float64 Dummy_1502 = Dummy_1485*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
             const walberla::float64 Dummy_1503 = Dummy_1491;
             const walberla::float64 Dummy_1504 = Dummy_1488;
             const walberla::float64 Dummy_1505 = Dummy_1490;
             const walberla::float64 Dummy_1506 = Dummy_1491;
             const walberla::float64 Dummy_1507 = Dummy_1485*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1492));
                   _data_mat[1] = ((walberla::float64)(Dummy_1493));
                   _data_mat[2] = ((walberla::float64)(Dummy_1494));
                   _data_mat[3] = ((walberla::float64)(Dummy_1495));
                   _data_mat[4] = ((walberla::float64)(Dummy_1496));
                   _data_mat[5] = ((walberla::float64)(Dummy_1497));
                   _data_mat[6] = ((walberla::float64)(Dummy_1498));
                   _data_mat[7] = ((walberla::float64)(Dummy_1499));
                   _data_mat[8] = ((walberla::float64)(Dummy_1500));
                   _data_mat[9] = ((walberla::float64)(Dummy_1501));
                   _data_mat[10] = ((walberla::float64)(Dummy_1502));
                   _data_mat[11] = ((walberla::float64)(Dummy_1503));
                   _data_mat[12] = ((walberla::float64)(Dummy_1504));
                   _data_mat[13] = ((walberla::float64)(Dummy_1505));
                   _data_mat[14] = ((walberla::float64)(Dummy_1506));
                   _data_mat[15] = ((walberla::float64)(Dummy_1507));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const walberla::float64 Dummy_1508 = -jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP;
             const walberla::float64 Dummy_1509 = -jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP;
             const walberla::float64 Dummy_1510 = -jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP;
             const walberla::float64 Dummy_1511 = abs_det_jac_affine_GREEN_UP*0.16666666666666663;
             const walberla::float64 Dummy_1512 = Dummy_1511*(Dummy_1508*jac_affine_inv_0_0_GREEN_UP + Dummy_1509*jac_affine_inv_0_1_GREEN_UP + Dummy_1510*jac_affine_inv_0_2_GREEN_UP);
             const walberla::float64 Dummy_1513 = Dummy_1511*(Dummy_1508*jac_affine_inv_1_0_GREEN_UP + Dummy_1509*jac_affine_inv_1_1_GREEN_UP + Dummy_1510*jac_affine_inv_1_2_GREEN_UP);
             const walberla::float64 Dummy_1514 = Dummy_1511*(Dummy_1508*jac_affine_inv_2_0_GREEN_UP + Dummy_1509*jac_affine_inv_2_1_GREEN_UP + Dummy_1510*jac_affine_inv_2_2_GREEN_UP);
             const walberla::float64 Dummy_1515 = Dummy_1511*(jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP);
             const walberla::float64 Dummy_1516 = Dummy_1511*(jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP);
             const walberla::float64 Dummy_1517 = Dummy_1511*(jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP);
             const walberla::float64 Dummy_1518 = Dummy_1511*((Dummy_1508*Dummy_1508) + (Dummy_1509*Dummy_1509) + (Dummy_1510*Dummy_1510));
             const walberla::float64 Dummy_1519 = Dummy_1512;
             const walberla::float64 Dummy_1520 = Dummy_1513;
             const walberla::float64 Dummy_1521 = Dummy_1514;
             const walberla::float64 Dummy_1522 = Dummy_1512;
             const walberla::float64 Dummy_1523 = Dummy_1511*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
             const walberla::float64 Dummy_1524 = Dummy_1515;
             const walberla::float64 Dummy_1525 = Dummy_1516;
             const walberla::float64 Dummy_1526 = Dummy_1513;
             const walberla::float64 Dummy_1527 = Dummy_1515;
             const walberla::float64 Dummy_1528 = Dummy_1511*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
             const walberla::float64 Dummy_1529 = Dummy_1517;
             const walberla::float64 Dummy_1530 = Dummy_1514;
             const walberla::float64 Dummy_1531 = Dummy_1516;
             const walberla::float64 Dummy_1532 = Dummy_1517;
             const walberla::float64 Dummy_1533 = Dummy_1511*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1518));
                   _data_mat[1] = ((walberla::float64)(Dummy_1519));
                   _data_mat[2] = ((walberla::float64)(Dummy_1520));
                   _data_mat[3] = ((walberla::float64)(Dummy_1521));
                   _data_mat[4] = ((walberla::float64)(Dummy_1522));
                   _data_mat[5] = ((walberla::float64)(Dummy_1523));
                   _data_mat[6] = ((walberla::float64)(Dummy_1524));
                   _data_mat[7] = ((walberla::float64)(Dummy_1525));
                   _data_mat[8] = ((walberla::float64)(Dummy_1526));
                   _data_mat[9] = ((walberla::float64)(Dummy_1527));
                   _data_mat[10] = ((walberla::float64)(Dummy_1528));
                   _data_mat[11] = ((walberla::float64)(Dummy_1529));
                   _data_mat[12] = ((walberla::float64)(Dummy_1530));
                   _data_mat[13] = ((walberla::float64)(Dummy_1531));
                   _data_mat[14] = ((walberla::float64)(Dummy_1532));
                   _data_mat[15] = ((walberla::float64)(Dummy_1533));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const walberla::float64 Dummy_1534 = -jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN;
             const walberla::float64 Dummy_1535 = -jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN;
             const walberla::float64 Dummy_1536 = -jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN;
             const walberla::float64 Dummy_1537 = abs_det_jac_affine_GREEN_DOWN*0.16666666666666663;
             const walberla::float64 Dummy_1538 = Dummy_1537*(Dummy_1534*jac_affine_inv_0_0_GREEN_DOWN + Dummy_1535*jac_affine_inv_0_1_GREEN_DOWN + Dummy_1536*jac_affine_inv_0_2_GREEN_DOWN);
             const walberla::float64 Dummy_1539 = Dummy_1537*(Dummy_1534*jac_affine_inv_1_0_GREEN_DOWN + Dummy_1535*jac_affine_inv_1_1_GREEN_DOWN + Dummy_1536*jac_affine_inv_1_2_GREEN_DOWN);
             const walberla::float64 Dummy_1540 = Dummy_1537*(Dummy_1534*jac_affine_inv_2_0_GREEN_DOWN + Dummy_1535*jac_affine_inv_2_1_GREEN_DOWN + Dummy_1536*jac_affine_inv_2_2_GREEN_DOWN);
             const walberla::float64 Dummy_1541 = Dummy_1537*(jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN);
             const walberla::float64 Dummy_1542 = Dummy_1537*(jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN);
             const walberla::float64 Dummy_1543 = Dummy_1537*(jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN);
             const walberla::float64 Dummy_1544 = Dummy_1537*((Dummy_1534*Dummy_1534) + (Dummy_1535*Dummy_1535) + (Dummy_1536*Dummy_1536));
             const walberla::float64 Dummy_1545 = Dummy_1538;
             const walberla::float64 Dummy_1546 = Dummy_1539;
             const walberla::float64 Dummy_1547 = Dummy_1540;
             const walberla::float64 Dummy_1548 = Dummy_1538;
             const walberla::float64 Dummy_1549 = Dummy_1537*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
             const walberla::float64 Dummy_1550 = Dummy_1541;
             const walberla::float64 Dummy_1551 = Dummy_1542;
             const walberla::float64 Dummy_1552 = Dummy_1539;
             const walberla::float64 Dummy_1553 = Dummy_1541;
             const walberla::float64 Dummy_1554 = Dummy_1537*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
             const walberla::float64 Dummy_1555 = Dummy_1543;
             const walberla::float64 Dummy_1556 = Dummy_1540;
             const walberla::float64 Dummy_1557 = Dummy_1542;
             const walberla::float64 Dummy_1558 = Dummy_1543;
             const walberla::float64 Dummy_1559 = Dummy_1537*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN));
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1544));
                   _data_mat[1] = ((walberla::float64)(Dummy_1545));
                   _data_mat[2] = ((walberla::float64)(Dummy_1546));
                   _data_mat[3] = ((walberla::float64)(Dummy_1547));
                   _data_mat[4] = ((walberla::float64)(Dummy_1548));
                   _data_mat[5] = ((walberla::float64)(Dummy_1549));
                   _data_mat[6] = ((walberla::float64)(Dummy_1550));
                   _data_mat[7] = ((walberla::float64)(Dummy_1551));
                   _data_mat[8] = ((walberla::float64)(Dummy_1552));
                   _data_mat[9] = ((walberla::float64)(Dummy_1553));
                   _data_mat[10] = ((walberla::float64)(Dummy_1554));
                   _data_mat[11] = ((walberla::float64)(Dummy_1555));
                   _data_mat[12] = ((walberla::float64)(Dummy_1556));
                   _data_mat[13] = ((walberla::float64)(Dummy_1557));
                   _data_mat[14] = ((walberla::float64)(Dummy_1558));
                   _data_mat[15] = ((walberla::float64)(Dummy_1559));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          } 
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< walberla::float64 > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(elMat_0_0));
                   _data_mat[1] = ((walberla::float64)(elMat_0_1));
                   _data_mat[2] = ((walberla::float64)(elMat_0_2));
                   _data_mat[3] = ((walberla::float64)(elMat_0_3));
                   _data_mat[4] = ((walberla::float64)(elMat_1_0));
                   _data_mat[5] = ((walberla::float64)(elMat_1_1));
                   _data_mat[6] = ((walberla::float64)(elMat_1_2));
                   _data_mat[7] = ((walberla::float64)(elMat_1_3));
                   _data_mat[8] = ((walberla::float64)(elMat_2_0));
                   _data_mat[9] = ((walberla::float64)(elMat_2_1));
                   _data_mat[10] = ((walberla::float64)(elMat_2_2));
                   _data_mat[11] = ((walberla::float64)(elMat_2_3));
                   _data_mat[12] = ((walberla::float64)(elMat_3_0));
                   _data_mat[13] = ((walberla::float64)(elMat_3_1));
                   _data_mat[14] = ((walberla::float64)(elMat_3_2));
                   _data_mat[15] = ((walberla::float64)(elMat_3_3));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
