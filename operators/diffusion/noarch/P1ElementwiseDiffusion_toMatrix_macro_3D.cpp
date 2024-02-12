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
       const walberla::float64 Dummy_1290 = -jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP;
       const walberla::float64 Dummy_1291 = -jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP;
       const walberla::float64 Dummy_1292 = -jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP;
       const walberla::float64 Dummy_1293 = abs_det_jac_affine_WHITE_UP*0.16666666666666666;
       const walberla::float64 Dummy_1294 = Dummy_1293*(Dummy_1290*jac_affine_inv_0_0_WHITE_UP + Dummy_1291*jac_affine_inv_0_1_WHITE_UP + Dummy_1292*jac_affine_inv_0_2_WHITE_UP);
       const walberla::float64 Dummy_1295 = Dummy_1293*(Dummy_1290*jac_affine_inv_1_0_WHITE_UP + Dummy_1291*jac_affine_inv_1_1_WHITE_UP + Dummy_1292*jac_affine_inv_1_2_WHITE_UP);
       const walberla::float64 Dummy_1296 = Dummy_1293*(Dummy_1290*jac_affine_inv_2_0_WHITE_UP + Dummy_1291*jac_affine_inv_2_1_WHITE_UP + Dummy_1292*jac_affine_inv_2_2_WHITE_UP);
       const walberla::float64 Dummy_1297 = Dummy_1293*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP);
       const walberla::float64 tmp_8 = Dummy_1293*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
       const walberla::float64 tmp_9 = Dummy_1293*(jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
       const walberla::float64 elMat_0_0 = Dummy_1293*((Dummy_1290*Dummy_1290) + (Dummy_1291*Dummy_1291) + (Dummy_1292*Dummy_1292));
       const walberla::float64 elMat_0_1 = Dummy_1294;
       const walberla::float64 elMat_0_2 = Dummy_1295;
       const walberla::float64 elMat_0_3 = Dummy_1296;
       const walberla::float64 elMat_1_0 = Dummy_1294;
       const walberla::float64 elMat_1_1 = Dummy_1293*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
       const walberla::float64 elMat_1_2 = Dummy_1297;
       const walberla::float64 elMat_1_3 = tmp_8;
       const walberla::float64 elMat_2_0 = Dummy_1295;
       const walberla::float64 elMat_2_1 = Dummy_1297;
       const walberla::float64 elMat_2_2 = Dummy_1293*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
       const walberla::float64 elMat_2_3 = tmp_9;
       const walberla::float64 elMat_3_0 = Dummy_1296;
       const walberla::float64 elMat_3_1 = tmp_8;
       const walberla::float64 elMat_3_2 = tmp_9;
       const walberla::float64 elMat_3_3 = Dummy_1293*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
       const walberla::float64 Dummy_1298 = -jac_affine_inv_0_0_WHITE_DOWN - jac_affine_inv_1_0_WHITE_DOWN - jac_affine_inv_2_0_WHITE_DOWN;
       const walberla::float64 Dummy_1299 = -jac_affine_inv_0_1_WHITE_DOWN - jac_affine_inv_1_1_WHITE_DOWN - jac_affine_inv_2_1_WHITE_DOWN;
       const walberla::float64 Dummy_1300 = -jac_affine_inv_0_2_WHITE_DOWN - jac_affine_inv_1_2_WHITE_DOWN - jac_affine_inv_2_2_WHITE_DOWN;
       const walberla::float64 Dummy_1301 = abs_det_jac_affine_WHITE_DOWN*0.16666666666666666;
       const walberla::float64 Dummy_1302 = Dummy_1301*(Dummy_1298*jac_affine_inv_0_0_WHITE_DOWN + Dummy_1299*jac_affine_inv_0_1_WHITE_DOWN + Dummy_1300*jac_affine_inv_0_2_WHITE_DOWN);
       const walberla::float64 Dummy_1303 = Dummy_1301*(Dummy_1298*jac_affine_inv_1_0_WHITE_DOWN + Dummy_1299*jac_affine_inv_1_1_WHITE_DOWN + Dummy_1300*jac_affine_inv_1_2_WHITE_DOWN);
       const walberla::float64 Dummy_1304 = Dummy_1301*(Dummy_1298*jac_affine_inv_2_0_WHITE_DOWN + Dummy_1299*jac_affine_inv_2_1_WHITE_DOWN + Dummy_1300*jac_affine_inv_2_2_WHITE_DOWN);
       const walberla::float64 Dummy_1305 = Dummy_1301*(jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_1_0_WHITE_DOWN + jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_1_1_WHITE_DOWN + jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_1_2_WHITE_DOWN);
       const walberla::float64 Dummy_1306 = Dummy_1301*(jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN + jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN + jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN);
       const walberla::float64 Dummy_1307 = Dummy_1301*(jac_affine_inv_1_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN + jac_affine_inv_1_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN + jac_affine_inv_1_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN);
       const walberla::float64 Dummy_1308 = Dummy_1301*((Dummy_1298*Dummy_1298) + (Dummy_1299*Dummy_1299) + (Dummy_1300*Dummy_1300));
       const walberla::float64 Dummy_1309 = Dummy_1302;
       const walberla::float64 Dummy_1310 = Dummy_1303;
       const walberla::float64 Dummy_1311 = Dummy_1304;
       const walberla::float64 Dummy_1312 = Dummy_1302;
       const walberla::float64 Dummy_1313 = Dummy_1301*((jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_0_0_WHITE_DOWN) + (jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_0_1_WHITE_DOWN) + (jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_0_2_WHITE_DOWN));
       const walberla::float64 Dummy_1314 = Dummy_1305;
       const walberla::float64 Dummy_1315 = Dummy_1306;
       const walberla::float64 Dummy_1316 = Dummy_1303;
       const walberla::float64 Dummy_1317 = Dummy_1305;
       const walberla::float64 Dummy_1318 = Dummy_1301*((jac_affine_inv_1_0_WHITE_DOWN*jac_affine_inv_1_0_WHITE_DOWN) + (jac_affine_inv_1_1_WHITE_DOWN*jac_affine_inv_1_1_WHITE_DOWN) + (jac_affine_inv_1_2_WHITE_DOWN*jac_affine_inv_1_2_WHITE_DOWN));
       const walberla::float64 Dummy_1319 = Dummy_1307;
       const walberla::float64 Dummy_1320 = Dummy_1304;
       const walberla::float64 Dummy_1321 = Dummy_1306;
       const walberla::float64 Dummy_1322 = Dummy_1307;
       const walberla::float64 Dummy_1323 = Dummy_1301*((jac_affine_inv_2_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN) + (jac_affine_inv_2_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN) + (jac_affine_inv_2_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN));
       const walberla::float64 Dummy_1324 = -jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP;
       const walberla::float64 Dummy_1325 = -jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP;
       const walberla::float64 Dummy_1326 = -jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP;
       const walberla::float64 Dummy_1327 = abs_det_jac_affine_BLUE_UP*0.16666666666666666;
       const walberla::float64 Dummy_1328 = Dummy_1327*(Dummy_1324*jac_affine_inv_0_0_BLUE_UP + Dummy_1325*jac_affine_inv_0_1_BLUE_UP + Dummy_1326*jac_affine_inv_0_2_BLUE_UP);
       const walberla::float64 Dummy_1329 = Dummy_1327*(Dummy_1324*jac_affine_inv_1_0_BLUE_UP + Dummy_1325*jac_affine_inv_1_1_BLUE_UP + Dummy_1326*jac_affine_inv_1_2_BLUE_UP);
       const walberla::float64 Dummy_1330 = Dummy_1327*(Dummy_1324*jac_affine_inv_2_0_BLUE_UP + Dummy_1325*jac_affine_inv_2_1_BLUE_UP + Dummy_1326*jac_affine_inv_2_2_BLUE_UP);
       const walberla::float64 Dummy_1331 = Dummy_1327*(jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP);
       const walberla::float64 Dummy_1332 = Dummy_1327*(jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP);
       const walberla::float64 Dummy_1333 = Dummy_1327*(jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP);
       const walberla::float64 Dummy_1334 = Dummy_1327*((Dummy_1324*Dummy_1324) + (Dummy_1325*Dummy_1325) + (Dummy_1326*Dummy_1326));
       const walberla::float64 Dummy_1335 = Dummy_1328;
       const walberla::float64 Dummy_1336 = Dummy_1329;
       const walberla::float64 Dummy_1337 = Dummy_1330;
       const walberla::float64 Dummy_1338 = Dummy_1328;
       const walberla::float64 Dummy_1339 = Dummy_1327*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
       const walberla::float64 Dummy_1340 = Dummy_1331;
       const walberla::float64 Dummy_1341 = Dummy_1332;
       const walberla::float64 Dummy_1342 = Dummy_1329;
       const walberla::float64 Dummy_1343 = Dummy_1331;
       const walberla::float64 Dummy_1344 = Dummy_1327*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
       const walberla::float64 Dummy_1345 = Dummy_1333;
       const walberla::float64 Dummy_1346 = Dummy_1330;
       const walberla::float64 Dummy_1347 = Dummy_1332;
       const walberla::float64 Dummy_1348 = Dummy_1333;
       const walberla::float64 Dummy_1349 = Dummy_1327*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP));
       const walberla::float64 Dummy_1350 = -jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN;
       const walberla::float64 Dummy_1351 = -jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN;
       const walberla::float64 Dummy_1352 = -jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN;
       const walberla::float64 Dummy_1353 = abs_det_jac_affine_BLUE_DOWN*0.16666666666666666;
       const walberla::float64 Dummy_1354 = Dummy_1353*(Dummy_1350*jac_affine_inv_0_0_BLUE_DOWN + Dummy_1351*jac_affine_inv_0_1_BLUE_DOWN + Dummy_1352*jac_affine_inv_0_2_BLUE_DOWN);
       const walberla::float64 Dummy_1355 = Dummy_1353*(Dummy_1350*jac_affine_inv_1_0_BLUE_DOWN + Dummy_1351*jac_affine_inv_1_1_BLUE_DOWN + Dummy_1352*jac_affine_inv_1_2_BLUE_DOWN);
       const walberla::float64 Dummy_1356 = Dummy_1353*(Dummy_1350*jac_affine_inv_2_0_BLUE_DOWN + Dummy_1351*jac_affine_inv_2_1_BLUE_DOWN + Dummy_1352*jac_affine_inv_2_2_BLUE_DOWN);
       const walberla::float64 Dummy_1357 = Dummy_1353*(jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN);
       const walberla::float64 Dummy_1358 = Dummy_1353*(jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN);
       const walberla::float64 Dummy_1359 = Dummy_1353*(jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN);
       const walberla::float64 Dummy_1360 = Dummy_1353*((Dummy_1350*Dummy_1350) + (Dummy_1351*Dummy_1351) + (Dummy_1352*Dummy_1352));
       const walberla::float64 Dummy_1361 = Dummy_1354;
       const walberla::float64 Dummy_1362 = Dummy_1355;
       const walberla::float64 Dummy_1363 = Dummy_1356;
       const walberla::float64 Dummy_1364 = Dummy_1354;
       const walberla::float64 Dummy_1365 = Dummy_1353*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
       const walberla::float64 Dummy_1366 = Dummy_1357;
       const walberla::float64 Dummy_1367 = Dummy_1358;
       const walberla::float64 Dummy_1368 = Dummy_1355;
       const walberla::float64 Dummy_1369 = Dummy_1357;
       const walberla::float64 Dummy_1370 = Dummy_1353*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
       const walberla::float64 Dummy_1371 = Dummy_1359;
       const walberla::float64 Dummy_1372 = Dummy_1356;
       const walberla::float64 Dummy_1373 = Dummy_1358;
       const walberla::float64 Dummy_1374 = Dummy_1359;
       const walberla::float64 Dummy_1375 = Dummy_1353*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN));
       const walberla::float64 Dummy_1376 = -jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP;
       const walberla::float64 Dummy_1377 = -jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP;
       const walberla::float64 Dummy_1378 = -jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP;
       const walberla::float64 Dummy_1379 = abs_det_jac_affine_GREEN_UP*0.16666666666666666;
       const walberla::float64 Dummy_1380 = Dummy_1379*(Dummy_1376*jac_affine_inv_0_0_GREEN_UP + Dummy_1377*jac_affine_inv_0_1_GREEN_UP + Dummy_1378*jac_affine_inv_0_2_GREEN_UP);
       const walberla::float64 Dummy_1381 = Dummy_1379*(Dummy_1376*jac_affine_inv_1_0_GREEN_UP + Dummy_1377*jac_affine_inv_1_1_GREEN_UP + Dummy_1378*jac_affine_inv_1_2_GREEN_UP);
       const walberla::float64 Dummy_1382 = Dummy_1379*(Dummy_1376*jac_affine_inv_2_0_GREEN_UP + Dummy_1377*jac_affine_inv_2_1_GREEN_UP + Dummy_1378*jac_affine_inv_2_2_GREEN_UP);
       const walberla::float64 Dummy_1383 = Dummy_1379*(jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP);
       const walberla::float64 Dummy_1384 = Dummy_1379*(jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP);
       const walberla::float64 Dummy_1385 = Dummy_1379*(jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP);
       const walberla::float64 Dummy_1386 = Dummy_1379*((Dummy_1376*Dummy_1376) + (Dummy_1377*Dummy_1377) + (Dummy_1378*Dummy_1378));
       const walberla::float64 Dummy_1387 = Dummy_1380;
       const walberla::float64 Dummy_1388 = Dummy_1381;
       const walberla::float64 Dummy_1389 = Dummy_1382;
       const walberla::float64 Dummy_1390 = Dummy_1380;
       const walberla::float64 Dummy_1391 = Dummy_1379*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
       const walberla::float64 Dummy_1392 = Dummy_1383;
       const walberla::float64 Dummy_1393 = Dummy_1384;
       const walberla::float64 Dummy_1394 = Dummy_1381;
       const walberla::float64 Dummy_1395 = Dummy_1383;
       const walberla::float64 Dummy_1396 = Dummy_1379*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
       const walberla::float64 Dummy_1397 = Dummy_1385;
       const walberla::float64 Dummy_1398 = Dummy_1382;
       const walberla::float64 Dummy_1399 = Dummy_1384;
       const walberla::float64 Dummy_1400 = Dummy_1385;
       const walberla::float64 Dummy_1401 = Dummy_1379*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP));
       const walberla::float64 Dummy_1402 = -jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN;
       const walberla::float64 Dummy_1403 = -jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN;
       const walberla::float64 Dummy_1404 = -jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN;
       const walberla::float64 Dummy_1405 = abs_det_jac_affine_GREEN_DOWN*0.16666666666666666;
       const walberla::float64 Dummy_1406 = Dummy_1405*(Dummy_1402*jac_affine_inv_0_0_GREEN_DOWN + Dummy_1403*jac_affine_inv_0_1_GREEN_DOWN + Dummy_1404*jac_affine_inv_0_2_GREEN_DOWN);
       const walberla::float64 Dummy_1407 = Dummy_1405*(Dummy_1402*jac_affine_inv_1_0_GREEN_DOWN + Dummy_1403*jac_affine_inv_1_1_GREEN_DOWN + Dummy_1404*jac_affine_inv_1_2_GREEN_DOWN);
       const walberla::float64 Dummy_1408 = Dummy_1405*(Dummy_1402*jac_affine_inv_2_0_GREEN_DOWN + Dummy_1403*jac_affine_inv_2_1_GREEN_DOWN + Dummy_1404*jac_affine_inv_2_2_GREEN_DOWN);
       const walberla::float64 Dummy_1409 = Dummy_1405*(jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN);
       const walberla::float64 Dummy_1410 = Dummy_1405*(jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN);
       const walberla::float64 Dummy_1411 = Dummy_1405*(jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN);
       const walberla::float64 Dummy_1412 = Dummy_1405*((Dummy_1402*Dummy_1402) + (Dummy_1403*Dummy_1403) + (Dummy_1404*Dummy_1404));
       const walberla::float64 Dummy_1413 = Dummy_1406;
       const walberla::float64 Dummy_1414 = Dummy_1407;
       const walberla::float64 Dummy_1415 = Dummy_1408;
       const walberla::float64 Dummy_1416 = Dummy_1406;
       const walberla::float64 Dummy_1417 = Dummy_1405*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
       const walberla::float64 Dummy_1418 = Dummy_1409;
       const walberla::float64 Dummy_1419 = Dummy_1410;
       const walberla::float64 Dummy_1420 = Dummy_1407;
       const walberla::float64 Dummy_1421 = Dummy_1409;
       const walberla::float64 Dummy_1422 = Dummy_1405*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
       const walberla::float64 Dummy_1423 = Dummy_1411;
       const walberla::float64 Dummy_1424 = Dummy_1408;
       const walberla::float64 Dummy_1425 = Dummy_1410;
       const walberla::float64 Dummy_1426 = Dummy_1411;
       const walberla::float64 Dummy_1427 = Dummy_1405*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN));
       const walberla::float64 Dummy_1492 = -jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP;
       const walberla::float64 Dummy_1493 = -jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP;
       const walberla::float64 Dummy_1494 = -jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP;
       const walberla::float64 Dummy_1495 = abs_det_jac_affine_WHITE_UP*0.16666666666666666;
       const walberla::float64 Dummy_1496 = Dummy_1495*(Dummy_1492*jac_affine_inv_0_0_WHITE_UP + Dummy_1493*jac_affine_inv_0_1_WHITE_UP + Dummy_1494*jac_affine_inv_0_2_WHITE_UP);
       const walberla::float64 Dummy_1497 = Dummy_1495*(Dummy_1492*jac_affine_inv_1_0_WHITE_UP + Dummy_1493*jac_affine_inv_1_1_WHITE_UP + Dummy_1494*jac_affine_inv_1_2_WHITE_UP);
       const walberla::float64 Dummy_1498 = Dummy_1495*(Dummy_1492*jac_affine_inv_2_0_WHITE_UP + Dummy_1493*jac_affine_inv_2_1_WHITE_UP + Dummy_1494*jac_affine_inv_2_2_WHITE_UP);
       const walberla::float64 Dummy_1499 = Dummy_1495*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP);
       const walberla::float64 Dummy_1500 = Dummy_1495*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
       const walberla::float64 Dummy_1501 = Dummy_1495*(jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
       const walberla::float64 Dummy_1502 = Dummy_1495*((Dummy_1492*Dummy_1492) + (Dummy_1493*Dummy_1493) + (Dummy_1494*Dummy_1494));
       const walberla::float64 Dummy_1503 = Dummy_1496;
       const walberla::float64 Dummy_1504 = Dummy_1497;
       const walberla::float64 Dummy_1505 = Dummy_1498;
       const walberla::float64 Dummy_1506 = Dummy_1496;
       const walberla::float64 Dummy_1507 = Dummy_1495*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
       const walberla::float64 Dummy_1508 = Dummy_1499;
       const walberla::float64 Dummy_1509 = Dummy_1500;
       const walberla::float64 Dummy_1510 = Dummy_1497;
       const walberla::float64 Dummy_1511 = Dummy_1499;
       const walberla::float64 Dummy_1512 = Dummy_1495*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
       const walberla::float64 Dummy_1513 = Dummy_1501;
       const walberla::float64 Dummy_1514 = Dummy_1498;
       const walberla::float64 Dummy_1515 = Dummy_1500;
       const walberla::float64 Dummy_1516 = Dummy_1501;
       const walberla::float64 Dummy_1517 = Dummy_1495*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1308));
                   _data_mat[1] = ((walberla::float64)(Dummy_1309));
                   _data_mat[2] = ((walberla::float64)(Dummy_1310));
                   _data_mat[3] = ((walberla::float64)(Dummy_1311));
                   _data_mat[4] = ((walberla::float64)(Dummy_1312));
                   _data_mat[5] = ((walberla::float64)(Dummy_1313));
                   _data_mat[6] = ((walberla::float64)(Dummy_1314));
                   _data_mat[7] = ((walberla::float64)(Dummy_1315));
                   _data_mat[8] = ((walberla::float64)(Dummy_1316));
                   _data_mat[9] = ((walberla::float64)(Dummy_1317));
                   _data_mat[10] = ((walberla::float64)(Dummy_1318));
                   _data_mat[11] = ((walberla::float64)(Dummy_1319));
                   _data_mat[12] = ((walberla::float64)(Dummy_1320));
                   _data_mat[13] = ((walberla::float64)(Dummy_1321));
                   _data_mat[14] = ((walberla::float64)(Dummy_1322));
                   _data_mat[15] = ((walberla::float64)(Dummy_1323));
               
               
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1334));
                   _data_mat[1] = ((walberla::float64)(Dummy_1335));
                   _data_mat[2] = ((walberla::float64)(Dummy_1336));
                   _data_mat[3] = ((walberla::float64)(Dummy_1337));
                   _data_mat[4] = ((walberla::float64)(Dummy_1338));
                   _data_mat[5] = ((walberla::float64)(Dummy_1339));
                   _data_mat[6] = ((walberla::float64)(Dummy_1340));
                   _data_mat[7] = ((walberla::float64)(Dummy_1341));
                   _data_mat[8] = ((walberla::float64)(Dummy_1342));
                   _data_mat[9] = ((walberla::float64)(Dummy_1343));
                   _data_mat[10] = ((walberla::float64)(Dummy_1344));
                   _data_mat[11] = ((walberla::float64)(Dummy_1345));
                   _data_mat[12] = ((walberla::float64)(Dummy_1346));
                   _data_mat[13] = ((walberla::float64)(Dummy_1347));
                   _data_mat[14] = ((walberla::float64)(Dummy_1348));
                   _data_mat[15] = ((walberla::float64)(Dummy_1349));
               
               
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1360));
                   _data_mat[1] = ((walberla::float64)(Dummy_1361));
                   _data_mat[2] = ((walberla::float64)(Dummy_1362));
                   _data_mat[3] = ((walberla::float64)(Dummy_1363));
                   _data_mat[4] = ((walberla::float64)(Dummy_1364));
                   _data_mat[5] = ((walberla::float64)(Dummy_1365));
                   _data_mat[6] = ((walberla::float64)(Dummy_1366));
                   _data_mat[7] = ((walberla::float64)(Dummy_1367));
                   _data_mat[8] = ((walberla::float64)(Dummy_1368));
                   _data_mat[9] = ((walberla::float64)(Dummy_1369));
                   _data_mat[10] = ((walberla::float64)(Dummy_1370));
                   _data_mat[11] = ((walberla::float64)(Dummy_1371));
                   _data_mat[12] = ((walberla::float64)(Dummy_1372));
                   _data_mat[13] = ((walberla::float64)(Dummy_1373));
                   _data_mat[14] = ((walberla::float64)(Dummy_1374));
                   _data_mat[15] = ((walberla::float64)(Dummy_1375));
               
               
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1386));
                   _data_mat[1] = ((walberla::float64)(Dummy_1387));
                   _data_mat[2] = ((walberla::float64)(Dummy_1388));
                   _data_mat[3] = ((walberla::float64)(Dummy_1389));
                   _data_mat[4] = ((walberla::float64)(Dummy_1390));
                   _data_mat[5] = ((walberla::float64)(Dummy_1391));
                   _data_mat[6] = ((walberla::float64)(Dummy_1392));
                   _data_mat[7] = ((walberla::float64)(Dummy_1393));
                   _data_mat[8] = ((walberla::float64)(Dummy_1394));
                   _data_mat[9] = ((walberla::float64)(Dummy_1395));
                   _data_mat[10] = ((walberla::float64)(Dummy_1396));
                   _data_mat[11] = ((walberla::float64)(Dummy_1397));
                   _data_mat[12] = ((walberla::float64)(Dummy_1398));
                   _data_mat[13] = ((walberla::float64)(Dummy_1399));
                   _data_mat[14] = ((walberla::float64)(Dummy_1400));
                   _data_mat[15] = ((walberla::float64)(Dummy_1401));
               
               
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1412));
                   _data_mat[1] = ((walberla::float64)(Dummy_1413));
                   _data_mat[2] = ((walberla::float64)(Dummy_1414));
                   _data_mat[3] = ((walberla::float64)(Dummy_1415));
                   _data_mat[4] = ((walberla::float64)(Dummy_1416));
                   _data_mat[5] = ((walberla::float64)(Dummy_1417));
                   _data_mat[6] = ((walberla::float64)(Dummy_1418));
                   _data_mat[7] = ((walberla::float64)(Dummy_1419));
                   _data_mat[8] = ((walberla::float64)(Dummy_1420));
                   _data_mat[9] = ((walberla::float64)(Dummy_1421));
                   _data_mat[10] = ((walberla::float64)(Dummy_1422));
                   _data_mat[11] = ((walberla::float64)(Dummy_1423));
                   _data_mat[12] = ((walberla::float64)(Dummy_1424));
                   _data_mat[13] = ((walberla::float64)(Dummy_1425));
                   _data_mat[14] = ((walberla::float64)(Dummy_1426));
                   _data_mat[15] = ((walberla::float64)(Dummy_1427));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          if (-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2 >= 0)
          {
             const walberla::float64 tmp_0_WHITE_UP = -jac_affine_inv_0_0_WHITE_UP - jac_affine_inv_1_0_WHITE_UP - jac_affine_inv_2_0_WHITE_UP;
             const walberla::float64 tmp_1_WHITE_UP = -jac_affine_inv_0_1_WHITE_UP - jac_affine_inv_1_1_WHITE_UP - jac_affine_inv_2_1_WHITE_UP;
             const walberla::float64 tmp_2_WHITE_UP = -jac_affine_inv_0_2_WHITE_UP - jac_affine_inv_1_2_WHITE_UP - jac_affine_inv_2_2_WHITE_UP;
             const walberla::float64 tmp_3_WHITE_UP = abs_det_jac_affine_WHITE_UP*0.16666666666666666;
             const walberla::float64 tmp_4_WHITE_UP = tmp_3_WHITE_UP*(jac_affine_inv_0_0_WHITE_UP*tmp_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*tmp_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*tmp_2_WHITE_UP);
             const walberla::float64 tmp_5_WHITE_UP = tmp_3_WHITE_UP*(jac_affine_inv_1_0_WHITE_UP*tmp_0_WHITE_UP + jac_affine_inv_1_1_WHITE_UP*tmp_1_WHITE_UP + jac_affine_inv_1_2_WHITE_UP*tmp_2_WHITE_UP);
             const walberla::float64 tmp_6_WHITE_UP = tmp_3_WHITE_UP*(jac_affine_inv_2_0_WHITE_UP*tmp_0_WHITE_UP + jac_affine_inv_2_1_WHITE_UP*tmp_1_WHITE_UP + jac_affine_inv_2_2_WHITE_UP*tmp_2_WHITE_UP);
             const walberla::float64 tmp_7_WHITE_UP = tmp_3_WHITE_UP*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP);
             const walberla::float64 tmp_8 = tmp_3_WHITE_UP*(jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
             const walberla::float64 tmp_9 = tmp_3_WHITE_UP*(jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP + jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP + jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP);
             const walberla::float64 elMat_0_0 = tmp_3_WHITE_UP*((tmp_0_WHITE_UP*tmp_0_WHITE_UP) + (tmp_1_WHITE_UP*tmp_1_WHITE_UP) + (tmp_2_WHITE_UP*tmp_2_WHITE_UP));
             const walberla::float64 elMat_0_1 = tmp_4_WHITE_UP;
             const walberla::float64 elMat_0_2 = tmp_5_WHITE_UP;
             const walberla::float64 elMat_0_3 = tmp_6_WHITE_UP;
             const walberla::float64 elMat_1_0 = tmp_4_WHITE_UP;
             const walberla::float64 elMat_1_1 = tmp_3_WHITE_UP*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP) + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP) + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP));
             const walberla::float64 elMat_1_2 = tmp_7_WHITE_UP;
             const walberla::float64 elMat_1_3 = tmp_8;
             const walberla::float64 elMat_2_0 = tmp_5_WHITE_UP;
             const walberla::float64 elMat_2_1 = tmp_7_WHITE_UP;
             const walberla::float64 elMat_2_2 = tmp_3_WHITE_UP*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP) + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP) + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP));
             const walberla::float64 elMat_2_3 = tmp_9;
             const walberla::float64 elMat_3_0 = tmp_6_WHITE_UP;
             const walberla::float64 elMat_3_1 = tmp_8;
             const walberla::float64 elMat_3_2 = tmp_9;
             const walberla::float64 elMat_3_3 = tmp_3_WHITE_UP*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP) + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP) + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP));
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
             const walberla::float64 tmp_0_BLUE_UP = -jac_affine_inv_0_0_BLUE_UP - jac_affine_inv_1_0_BLUE_UP - jac_affine_inv_2_0_BLUE_UP;
             const walberla::float64 tmp_1_BLUE_UP = -jac_affine_inv_0_1_BLUE_UP - jac_affine_inv_1_1_BLUE_UP - jac_affine_inv_2_1_BLUE_UP;
             const walberla::float64 tmp_2_BLUE_UP = -jac_affine_inv_0_2_BLUE_UP - jac_affine_inv_1_2_BLUE_UP - jac_affine_inv_2_2_BLUE_UP;
             const walberla::float64 tmp_3_BLUE_UP = abs_det_jac_affine_BLUE_UP*0.16666666666666666;
             const walberla::float64 tmp_4_BLUE_UP = tmp_3_BLUE_UP*(jac_affine_inv_0_0_BLUE_UP*tmp_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*tmp_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*tmp_2_BLUE_UP);
             const walberla::float64 tmp_5_BLUE_UP = tmp_3_BLUE_UP*(jac_affine_inv_1_0_BLUE_UP*tmp_0_BLUE_UP + jac_affine_inv_1_1_BLUE_UP*tmp_1_BLUE_UP + jac_affine_inv_1_2_BLUE_UP*tmp_2_BLUE_UP);
             const walberla::float64 tmp_6_BLUE_UP = tmp_3_BLUE_UP*(jac_affine_inv_2_0_BLUE_UP*tmp_0_BLUE_UP + jac_affine_inv_2_1_BLUE_UP*tmp_1_BLUE_UP + jac_affine_inv_2_2_BLUE_UP*tmp_2_BLUE_UP);
             const walberla::float64 tmp_7_BLUE_UP = tmp_3_BLUE_UP*(jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP);
             const walberla::float64 tmp_8_BLUE_UP = tmp_3_BLUE_UP*(jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP);
             const walberla::float64 tmp_9_BLUE_UP = tmp_3_BLUE_UP*(jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP + jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP + jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP);
             const walberla::float64 Dummy_1428 = tmp_3_BLUE_UP*((tmp_0_BLUE_UP*tmp_0_BLUE_UP) + (tmp_1_BLUE_UP*tmp_1_BLUE_UP) + (tmp_2_BLUE_UP*tmp_2_BLUE_UP));
             const walberla::float64 Dummy_1429 = tmp_4_BLUE_UP;
             const walberla::float64 Dummy_1430 = tmp_5_BLUE_UP;
             const walberla::float64 Dummy_1431 = tmp_6_BLUE_UP;
             const walberla::float64 Dummy_1432 = tmp_4_BLUE_UP;
             const walberla::float64 Dummy_1433 = tmp_3_BLUE_UP*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP) + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP) + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP));
             const walberla::float64 Dummy_1434 = tmp_7_BLUE_UP;
             const walberla::float64 Dummy_1435 = tmp_8_BLUE_UP;
             const walberla::float64 Dummy_1436 = tmp_5_BLUE_UP;
             const walberla::float64 Dummy_1437 = tmp_7_BLUE_UP;
             const walberla::float64 Dummy_1438 = tmp_3_BLUE_UP*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP) + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP) + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP));
             const walberla::float64 Dummy_1439 = tmp_9_BLUE_UP;
             const walberla::float64 Dummy_1440 = tmp_6_BLUE_UP;
             const walberla::float64 Dummy_1441 = tmp_8_BLUE_UP;
             const walberla::float64 Dummy_1442 = tmp_9_BLUE_UP;
             const walberla::float64 Dummy_1443 = tmp_3_BLUE_UP*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP) + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP) + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP));
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1428));
                   _data_mat[1] = ((walberla::float64)(Dummy_1429));
                   _data_mat[2] = ((walberla::float64)(Dummy_1430));
                   _data_mat[3] = ((walberla::float64)(Dummy_1431));
                   _data_mat[4] = ((walberla::float64)(Dummy_1432));
                   _data_mat[5] = ((walberla::float64)(Dummy_1433));
                   _data_mat[6] = ((walberla::float64)(Dummy_1434));
                   _data_mat[7] = ((walberla::float64)(Dummy_1435));
                   _data_mat[8] = ((walberla::float64)(Dummy_1436));
                   _data_mat[9] = ((walberla::float64)(Dummy_1437));
                   _data_mat[10] = ((walberla::float64)(Dummy_1438));
                   _data_mat[11] = ((walberla::float64)(Dummy_1439));
                   _data_mat[12] = ((walberla::float64)(Dummy_1440));
                   _data_mat[13] = ((walberla::float64)(Dummy_1441));
                   _data_mat[14] = ((walberla::float64)(Dummy_1442));
                   _data_mat[15] = ((walberla::float64)(Dummy_1443));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const walberla::float64 tmp_0_BLUE_DOWN = -jac_affine_inv_0_0_BLUE_DOWN - jac_affine_inv_1_0_BLUE_DOWN - jac_affine_inv_2_0_BLUE_DOWN;
             const walberla::float64 tmp_1_BLUE_DOWN = -jac_affine_inv_0_1_BLUE_DOWN - jac_affine_inv_1_1_BLUE_DOWN - jac_affine_inv_2_1_BLUE_DOWN;
             const walberla::float64 tmp_2_BLUE_DOWN = -jac_affine_inv_0_2_BLUE_DOWN - jac_affine_inv_1_2_BLUE_DOWN - jac_affine_inv_2_2_BLUE_DOWN;
             const walberla::float64 tmp_3_BLUE_DOWN = abs_det_jac_affine_BLUE_DOWN*0.16666666666666666;
             const walberla::float64 tmp_4_BLUE_DOWN = tmp_3_BLUE_DOWN*(jac_affine_inv_0_0_BLUE_DOWN*tmp_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*tmp_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*tmp_2_BLUE_DOWN);
             const walberla::float64 tmp_5_BLUE_DOWN = tmp_3_BLUE_DOWN*(jac_affine_inv_1_0_BLUE_DOWN*tmp_0_BLUE_DOWN + jac_affine_inv_1_1_BLUE_DOWN*tmp_1_BLUE_DOWN + jac_affine_inv_1_2_BLUE_DOWN*tmp_2_BLUE_DOWN);
             const walberla::float64 tmp_6_BLUE_DOWN = tmp_3_BLUE_DOWN*(jac_affine_inv_2_0_BLUE_DOWN*tmp_0_BLUE_DOWN + jac_affine_inv_2_1_BLUE_DOWN*tmp_1_BLUE_DOWN + jac_affine_inv_2_2_BLUE_DOWN*tmp_2_BLUE_DOWN);
             const walberla::float64 tmp_7_BLUE_DOWN = tmp_3_BLUE_DOWN*(jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN);
             const walberla::float64 tmp_8_BLUE_DOWN = tmp_3_BLUE_DOWN*(jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN);
             const walberla::float64 tmp_9_BLUE_DOWN = tmp_3_BLUE_DOWN*(jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN + jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN + jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN);
             const walberla::float64 Dummy_1444 = tmp_3_BLUE_DOWN*((tmp_0_BLUE_DOWN*tmp_0_BLUE_DOWN) + (tmp_1_BLUE_DOWN*tmp_1_BLUE_DOWN) + (tmp_2_BLUE_DOWN*tmp_2_BLUE_DOWN));
             const walberla::float64 Dummy_1445 = tmp_4_BLUE_DOWN;
             const walberla::float64 Dummy_1446 = tmp_5_BLUE_DOWN;
             const walberla::float64 Dummy_1447 = tmp_6_BLUE_DOWN;
             const walberla::float64 Dummy_1448 = tmp_4_BLUE_DOWN;
             const walberla::float64 Dummy_1449 = tmp_3_BLUE_DOWN*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN) + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN) + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN));
             const walberla::float64 Dummy_1450 = tmp_7_BLUE_DOWN;
             const walberla::float64 Dummy_1451 = tmp_8_BLUE_DOWN;
             const walberla::float64 Dummy_1452 = tmp_5_BLUE_DOWN;
             const walberla::float64 Dummy_1453 = tmp_7_BLUE_DOWN;
             const walberla::float64 Dummy_1454 = tmp_3_BLUE_DOWN*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN) + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN) + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN));
             const walberla::float64 Dummy_1455 = tmp_9_BLUE_DOWN;
             const walberla::float64 Dummy_1456 = tmp_6_BLUE_DOWN;
             const walberla::float64 Dummy_1457 = tmp_8_BLUE_DOWN;
             const walberla::float64 Dummy_1458 = tmp_9_BLUE_DOWN;
             const walberla::float64 Dummy_1459 = tmp_3_BLUE_DOWN*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN) + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN) + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN));
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1444));
                   _data_mat[1] = ((walberla::float64)(Dummy_1445));
                   _data_mat[2] = ((walberla::float64)(Dummy_1446));
                   _data_mat[3] = ((walberla::float64)(Dummy_1447));
                   _data_mat[4] = ((walberla::float64)(Dummy_1448));
                   _data_mat[5] = ((walberla::float64)(Dummy_1449));
                   _data_mat[6] = ((walberla::float64)(Dummy_1450));
                   _data_mat[7] = ((walberla::float64)(Dummy_1451));
                   _data_mat[8] = ((walberla::float64)(Dummy_1452));
                   _data_mat[9] = ((walberla::float64)(Dummy_1453));
                   _data_mat[10] = ((walberla::float64)(Dummy_1454));
                   _data_mat[11] = ((walberla::float64)(Dummy_1455));
                   _data_mat[12] = ((walberla::float64)(Dummy_1456));
                   _data_mat[13] = ((walberla::float64)(Dummy_1457));
                   _data_mat[14] = ((walberla::float64)(Dummy_1458));
                   _data_mat[15] = ((walberla::float64)(Dummy_1459));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const walberla::float64 tmp_0_GREEN_UP = -jac_affine_inv_0_0_GREEN_UP - jac_affine_inv_1_0_GREEN_UP - jac_affine_inv_2_0_GREEN_UP;
             const walberla::float64 tmp_1_GREEN_UP = -jac_affine_inv_0_1_GREEN_UP - jac_affine_inv_1_1_GREEN_UP - jac_affine_inv_2_1_GREEN_UP;
             const walberla::float64 tmp_2_GREEN_UP = -jac_affine_inv_0_2_GREEN_UP - jac_affine_inv_1_2_GREEN_UP - jac_affine_inv_2_2_GREEN_UP;
             const walberla::float64 tmp_3_GREEN_UP = abs_det_jac_affine_GREEN_UP*0.16666666666666666;
             const walberla::float64 tmp_4_GREEN_UP = tmp_3_GREEN_UP*(jac_affine_inv_0_0_GREEN_UP*tmp_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*tmp_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*tmp_2_GREEN_UP);
             const walberla::float64 tmp_5_GREEN_UP = tmp_3_GREEN_UP*(jac_affine_inv_1_0_GREEN_UP*tmp_0_GREEN_UP + jac_affine_inv_1_1_GREEN_UP*tmp_1_GREEN_UP + jac_affine_inv_1_2_GREEN_UP*tmp_2_GREEN_UP);
             const walberla::float64 tmp_6_GREEN_UP = tmp_3_GREEN_UP*(jac_affine_inv_2_0_GREEN_UP*tmp_0_GREEN_UP + jac_affine_inv_2_1_GREEN_UP*tmp_1_GREEN_UP + jac_affine_inv_2_2_GREEN_UP*tmp_2_GREEN_UP);
             const walberla::float64 tmp_7_GREEN_UP = tmp_3_GREEN_UP*(jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP);
             const walberla::float64 tmp_8_GREEN_UP = tmp_3_GREEN_UP*(jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP);
             const walberla::float64 tmp_9_GREEN_UP = tmp_3_GREEN_UP*(jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP + jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP + jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP);
             const walberla::float64 Dummy_1460 = tmp_3_GREEN_UP*((tmp_0_GREEN_UP*tmp_0_GREEN_UP) + (tmp_1_GREEN_UP*tmp_1_GREEN_UP) + (tmp_2_GREEN_UP*tmp_2_GREEN_UP));
             const walberla::float64 Dummy_1461 = tmp_4_GREEN_UP;
             const walberla::float64 Dummy_1462 = tmp_5_GREEN_UP;
             const walberla::float64 Dummy_1463 = tmp_6_GREEN_UP;
             const walberla::float64 Dummy_1464 = tmp_4_GREEN_UP;
             const walberla::float64 Dummy_1465 = tmp_3_GREEN_UP*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP) + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP) + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP));
             const walberla::float64 Dummy_1466 = tmp_7_GREEN_UP;
             const walberla::float64 Dummy_1467 = tmp_8_GREEN_UP;
             const walberla::float64 Dummy_1468 = tmp_5_GREEN_UP;
             const walberla::float64 Dummy_1469 = tmp_7_GREEN_UP;
             const walberla::float64 Dummy_1470 = tmp_3_GREEN_UP*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP) + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP) + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP));
             const walberla::float64 Dummy_1471 = tmp_9_GREEN_UP;
             const walberla::float64 Dummy_1472 = tmp_6_GREEN_UP;
             const walberla::float64 Dummy_1473 = tmp_8_GREEN_UP;
             const walberla::float64 Dummy_1474 = tmp_9_GREEN_UP;
             const walberla::float64 Dummy_1475 = tmp_3_GREEN_UP*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP) + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP) + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP));
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1460));
                   _data_mat[1] = ((walberla::float64)(Dummy_1461));
                   _data_mat[2] = ((walberla::float64)(Dummy_1462));
                   _data_mat[3] = ((walberla::float64)(Dummy_1463));
                   _data_mat[4] = ((walberla::float64)(Dummy_1464));
                   _data_mat[5] = ((walberla::float64)(Dummy_1465));
                   _data_mat[6] = ((walberla::float64)(Dummy_1466));
                   _data_mat[7] = ((walberla::float64)(Dummy_1467));
                   _data_mat[8] = ((walberla::float64)(Dummy_1468));
                   _data_mat[9] = ((walberla::float64)(Dummy_1469));
                   _data_mat[10] = ((walberla::float64)(Dummy_1470));
                   _data_mat[11] = ((walberla::float64)(Dummy_1471));
                   _data_mat[12] = ((walberla::float64)(Dummy_1472));
                   _data_mat[13] = ((walberla::float64)(Dummy_1473));
                   _data_mat[14] = ((walberla::float64)(Dummy_1474));
                   _data_mat[15] = ((walberla::float64)(Dummy_1475));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const walberla::float64 tmp_0_GREEN_DOWN = -jac_affine_inv_0_0_GREEN_DOWN - jac_affine_inv_1_0_GREEN_DOWN - jac_affine_inv_2_0_GREEN_DOWN;
             const walberla::float64 tmp_1_GREEN_DOWN = -jac_affine_inv_0_1_GREEN_DOWN - jac_affine_inv_1_1_GREEN_DOWN - jac_affine_inv_2_1_GREEN_DOWN;
             const walberla::float64 tmp_2_GREEN_DOWN = -jac_affine_inv_0_2_GREEN_DOWN - jac_affine_inv_1_2_GREEN_DOWN - jac_affine_inv_2_2_GREEN_DOWN;
             const walberla::float64 tmp_3_GREEN_DOWN = abs_det_jac_affine_GREEN_DOWN*0.16666666666666666;
             const walberla::float64 tmp_4_GREEN_DOWN = tmp_3_GREEN_DOWN*(jac_affine_inv_0_0_GREEN_DOWN*tmp_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*tmp_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*tmp_2_GREEN_DOWN);
             const walberla::float64 tmp_5_GREEN_DOWN = tmp_3_GREEN_DOWN*(jac_affine_inv_1_0_GREEN_DOWN*tmp_0_GREEN_DOWN + jac_affine_inv_1_1_GREEN_DOWN*tmp_1_GREEN_DOWN + jac_affine_inv_1_2_GREEN_DOWN*tmp_2_GREEN_DOWN);
             const walberla::float64 tmp_6_GREEN_DOWN = tmp_3_GREEN_DOWN*(jac_affine_inv_2_0_GREEN_DOWN*tmp_0_GREEN_DOWN + jac_affine_inv_2_1_GREEN_DOWN*tmp_1_GREEN_DOWN + jac_affine_inv_2_2_GREEN_DOWN*tmp_2_GREEN_DOWN);
             const walberla::float64 tmp_7_GREEN_DOWN = tmp_3_GREEN_DOWN*(jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN);
             const walberla::float64 tmp_8_GREEN_DOWN = tmp_3_GREEN_DOWN*(jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN);
             const walberla::float64 tmp_9_GREEN_DOWN = tmp_3_GREEN_DOWN*(jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN + jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN + jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN);
             const walberla::float64 Dummy_1476 = tmp_3_GREEN_DOWN*((tmp_0_GREEN_DOWN*tmp_0_GREEN_DOWN) + (tmp_1_GREEN_DOWN*tmp_1_GREEN_DOWN) + (tmp_2_GREEN_DOWN*tmp_2_GREEN_DOWN));
             const walberla::float64 Dummy_1477 = tmp_4_GREEN_DOWN;
             const walberla::float64 Dummy_1478 = tmp_5_GREEN_DOWN;
             const walberla::float64 Dummy_1479 = tmp_6_GREEN_DOWN;
             const walberla::float64 Dummy_1480 = tmp_4_GREEN_DOWN;
             const walberla::float64 Dummy_1481 = tmp_3_GREEN_DOWN*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN) + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN) + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN));
             const walberla::float64 Dummy_1482 = tmp_7_GREEN_DOWN;
             const walberla::float64 Dummy_1483 = tmp_8_GREEN_DOWN;
             const walberla::float64 Dummy_1484 = tmp_5_GREEN_DOWN;
             const walberla::float64 Dummy_1485 = tmp_7_GREEN_DOWN;
             const walberla::float64 Dummy_1486 = tmp_3_GREEN_DOWN*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN) + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN) + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN));
             const walberla::float64 Dummy_1487 = tmp_9_GREEN_DOWN;
             const walberla::float64 Dummy_1488 = tmp_6_GREEN_DOWN;
             const walberla::float64 Dummy_1489 = tmp_8_GREEN_DOWN;
             const walberla::float64 Dummy_1490 = tmp_9_GREEN_DOWN;
             const walberla::float64 Dummy_1491 = tmp_3_GREEN_DOWN*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN) + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN) + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN));
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1476));
                   _data_mat[1] = ((walberla::float64)(Dummy_1477));
                   _data_mat[2] = ((walberla::float64)(Dummy_1478));
                   _data_mat[3] = ((walberla::float64)(Dummy_1479));
                   _data_mat[4] = ((walberla::float64)(Dummy_1480));
                   _data_mat[5] = ((walberla::float64)(Dummy_1481));
                   _data_mat[6] = ((walberla::float64)(Dummy_1482));
                   _data_mat[7] = ((walberla::float64)(Dummy_1483));
                   _data_mat[8] = ((walberla::float64)(Dummy_1484));
                   _data_mat[9] = ((walberla::float64)(Dummy_1485));
                   _data_mat[10] = ((walberla::float64)(Dummy_1486));
                   _data_mat[11] = ((walberla::float64)(Dummy_1487));
                   _data_mat[12] = ((walberla::float64)(Dummy_1488));
                   _data_mat[13] = ((walberla::float64)(Dummy_1489));
                   _data_mat[14] = ((walberla::float64)(Dummy_1490));
                   _data_mat[15] = ((walberla::float64)(Dummy_1491));
               
               
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1502));
                   _data_mat[1] = ((walberla::float64)(Dummy_1503));
                   _data_mat[2] = ((walberla::float64)(Dummy_1504));
                   _data_mat[3] = ((walberla::float64)(Dummy_1505));
                   _data_mat[4] = ((walberla::float64)(Dummy_1506));
                   _data_mat[5] = ((walberla::float64)(Dummy_1507));
                   _data_mat[6] = ((walberla::float64)(Dummy_1508));
                   _data_mat[7] = ((walberla::float64)(Dummy_1509));
                   _data_mat[8] = ((walberla::float64)(Dummy_1510));
                   _data_mat[9] = ((walberla::float64)(Dummy_1511));
                   _data_mat[10] = ((walberla::float64)(Dummy_1512));
                   _data_mat[11] = ((walberla::float64)(Dummy_1513));
                   _data_mat[12] = ((walberla::float64)(Dummy_1514));
                   _data_mat[13] = ((walberla::float64)(Dummy_1515));
                   _data_mat[14] = ((walberla::float64)(Dummy_1516));
                   _data_mat[15] = ((walberla::float64)(Dummy_1517));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
