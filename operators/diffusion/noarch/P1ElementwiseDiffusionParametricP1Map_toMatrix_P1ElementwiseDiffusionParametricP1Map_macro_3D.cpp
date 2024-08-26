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

































#include "../P1ElementwiseDiffusionParametricP1Map.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseDiffusionParametricP1Map::toMatrix_P1ElementwiseDiffusionParametricP1Map_macro_3D( idx_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_micromesh_0, real_t * RESTRICT  _data_micromesh_1, real_t * RESTRICT  _data_micromesh_2, idx_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_coords_jac_0_GREEN_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_2_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_coords_jac_3_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_coords_jac_4_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_5_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_6_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_coords_jac_7_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_coords_jac_8_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_coords_jac_9_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN;
       const real_t p_affine_const_0_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN;
       const real_t p_affine_const_0_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN;
       const real_t p_affine_const_1_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_4_GREEN_DOWN;
       const real_t p_affine_const_1_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN + tmp_coords_jac_5_GREEN_DOWN;
       const real_t p_affine_const_1_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_6_GREEN_DOWN;
       const real_t p_affine_const_2_0_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const real_t p_affine_const_2_1_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const real_t p_affine_const_2_2_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
       const real_t p_affine_const_3_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const real_t p_affine_const_3_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const real_t p_affine_const_3_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
       const real_t tmp_coords_jac_0_GREEN_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_2_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_3_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_coords_jac_4_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_coords_jac_5_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_coords_jac_6_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_GREEN_UP = tmp_coords_jac_1_GREEN_UP;
       const real_t p_affine_const_0_1_GREEN_UP = tmp_coords_jac_2_GREEN_UP;
       const real_t p_affine_const_0_2_GREEN_UP = tmp_coords_jac_3_GREEN_UP;
       const real_t p_affine_const_1_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_1_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_1_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_2_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_GREEN_UP;
       const real_t p_affine_const_2_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_GREEN_UP;
       const real_t p_affine_const_2_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_GREEN_UP;
       const real_t p_affine_const_3_0_GREEN_UP = tmp_coords_jac_1_GREEN_UP + tmp_coords_jac_4_GREEN_UP;
       const real_t p_affine_const_3_1_GREEN_UP = tmp_coords_jac_2_GREEN_UP + tmp_coords_jac_5_GREEN_UP;
       const real_t p_affine_const_3_2_GREEN_UP = tmp_coords_jac_3_GREEN_UP + tmp_coords_jac_6_GREEN_UP;
       const real_t tmp_coords_jac_0_BLUE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_2_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_coords_jac_3_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_coords_jac_4_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_coords_jac_5_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_BLUE_DOWN;
       const real_t tmp_coords_jac_6_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_coords_jac_7_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_6_BLUE_DOWN;
       const real_t tmp_coords_jac_8_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t tmp_coords_jac_9_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_8_BLUE_DOWN;
       const real_t p_affine_const_0_0_BLUE_DOWN = tmp_coords_jac_1_BLUE_DOWN;
       const real_t p_affine_const_0_1_BLUE_DOWN = tmp_coords_jac_2_BLUE_DOWN;
       const real_t p_affine_const_0_2_BLUE_DOWN = tmp_coords_jac_3_BLUE_DOWN;
       const real_t p_affine_const_1_0_BLUE_DOWN = tmp_coords_jac_5_BLUE_DOWN;
       const real_t p_affine_const_1_1_BLUE_DOWN = tmp_coords_jac_7_BLUE_DOWN;
       const real_t p_affine_const_1_2_BLUE_DOWN = tmp_coords_jac_9_BLUE_DOWN;
       const real_t p_affine_const_2_0_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_coords_jac_5_BLUE_DOWN;
       const real_t p_affine_const_2_1_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_coords_jac_7_BLUE_DOWN;
       const real_t p_affine_const_2_2_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_coords_jac_9_BLUE_DOWN;
       const real_t p_affine_const_3_0_BLUE_DOWN = tmp_coords_jac_1_BLUE_DOWN + tmp_coords_jac_4_BLUE_DOWN;
       const real_t p_affine_const_3_1_BLUE_DOWN = tmp_coords_jac_2_BLUE_DOWN + tmp_coords_jac_6_BLUE_DOWN;
       const real_t p_affine_const_3_2_BLUE_DOWN = tmp_coords_jac_3_BLUE_DOWN + tmp_coords_jac_8_BLUE_DOWN;
       const real_t tmp_coords_jac_0_BLUE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_2_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_3_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_coords_jac_4_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_5_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_coords_jac_6_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_0_0_BLUE_UP = tmp_coords_jac_1_BLUE_UP;
       const real_t p_affine_const_0_1_BLUE_UP = tmp_coords_jac_2_BLUE_UP;
       const real_t p_affine_const_0_2_BLUE_UP = tmp_coords_jac_3_BLUE_UP;
       const real_t p_affine_const_1_0_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_BLUE_UP;
       const real_t p_affine_const_1_1_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_BLUE_UP;
       const real_t p_affine_const_1_2_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_BLUE_UP;
       const real_t p_affine_const_2_0_BLUE_UP = tmp_coords_jac_1_BLUE_UP + tmp_coords_jac_4_BLUE_UP;
       const real_t p_affine_const_2_1_BLUE_UP = tmp_coords_jac_2_BLUE_UP + tmp_coords_jac_5_BLUE_UP;
       const real_t p_affine_const_2_2_BLUE_UP = tmp_coords_jac_3_BLUE_UP + tmp_coords_jac_6_BLUE_UP;
       const real_t p_affine_const_3_0_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_coords_jac_1_BLUE_UP;
       const real_t p_affine_const_3_1_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_coords_jac_2_BLUE_UP;
       const real_t p_affine_const_3_2_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_coords_jac_3_BLUE_UP;
       const real_t tmp_coords_jac_0_WHITE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_2_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_3_WHITE_DOWN = tmp_coords_jac_1_WHITE_DOWN + tmp_coords_jac_2_WHITE_DOWN;
       const real_t tmp_coords_jac_4_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_coords_jac_5_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_6_WHITE_DOWN = tmp_coords_jac_4_WHITE_DOWN + tmp_coords_jac_5_WHITE_DOWN;
       const real_t tmp_coords_jac_7_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_coords_jac_8_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_coords_jac_9_WHITE_DOWN = tmp_coords_jac_7_WHITE_DOWN + tmp_coords_jac_8_WHITE_DOWN;
       const real_t tmp_coords_jac_10_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_coords_jac_11_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_coords_jac_12_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_WHITE_DOWN = tmp_coords_jac_3_WHITE_DOWN;
       const real_t p_affine_const_0_1_WHITE_DOWN = tmp_coords_jac_6_WHITE_DOWN;
       const real_t p_affine_const_0_2_WHITE_DOWN = tmp_coords_jac_9_WHITE_DOWN;
       const real_t p_affine_const_1_0_WHITE_DOWN = tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_2_WHITE_DOWN;
       const real_t p_affine_const_1_1_WHITE_DOWN = tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_5_WHITE_DOWN;
       const real_t p_affine_const_1_2_WHITE_DOWN = tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_8_WHITE_DOWN;
       const real_t p_affine_const_2_0_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_1_WHITE_DOWN;
       const real_t p_affine_const_2_1_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_4_WHITE_DOWN;
       const real_t p_affine_const_2_2_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_7_WHITE_DOWN;
       const real_t p_affine_const_3_0_WHITE_DOWN = tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_3_WHITE_DOWN;
       const real_t p_affine_const_3_1_WHITE_DOWN = tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_6_WHITE_DOWN;
       const real_t p_affine_const_3_2_WHITE_DOWN = tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_9_WHITE_DOWN;
       const real_t tmp_coords_jac_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const real_t p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
       for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const real_t micromesh_dof_0 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_1 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t micromesh_dof_10 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_11 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_2 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_3 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_4 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_5 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t micromesh_dof_6 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_7 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_8 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_9 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_kernel_op_0 = micromesh_dof_0 - micromesh_dof_1;
             const real_t tmp_kernel_op_1 = -tmp_kernel_op_0;
             const real_t tmp_kernel_op_2 = -micromesh_dof_8;
             const real_t tmp_kernel_op_3 = micromesh_dof_10 + tmp_kernel_op_2;
             const real_t tmp_kernel_op_4 = micromesh_dof_0 - micromesh_dof_2;
             const real_t tmp_kernel_op_5 = -tmp_kernel_op_4;
             const real_t tmp_kernel_op_6 = micromesh_dof_8 - micromesh_dof_9;
             const real_t tmp_kernel_op_7 = -tmp_kernel_op_6;
             const real_t tmp_kernel_op_8 = -tmp_kernel_op_1*tmp_kernel_op_3 + tmp_kernel_op_5*tmp_kernel_op_7;
             const real_t tmp_kernel_op_9 = micromesh_dof_4 - micromesh_dof_7;
             const real_t tmp_kernel_op_10 = -tmp_kernel_op_9;
             const real_t tmp_kernel_op_11 = tmp_kernel_op_1*tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = micromesh_dof_11 + tmp_kernel_op_2;
             const real_t tmp_kernel_op_13 = micromesh_dof_4 - micromesh_dof_5;
             const real_t tmp_kernel_op_14 = -tmp_kernel_op_13;
             const real_t tmp_kernel_op_15 = tmp_kernel_op_14*tmp_kernel_op_5;
             const real_t tmp_kernel_op_16 = micromesh_dof_0 - micromesh_dof_3;
             const real_t tmp_kernel_op_17 = -tmp_kernel_op_16;
             const real_t tmp_kernel_op_18 = micromesh_dof_4 - micromesh_dof_6;
             const real_t tmp_kernel_op_19 = -tmp_kernel_op_18;
             const real_t tmp_kernel_op_20 = tmp_kernel_op_17*tmp_kernel_op_19;
             const real_t tmp_kernel_op_21 = tmp_kernel_op_1*tmp_kernel_op_12*tmp_kernel_op_19 + tmp_kernel_op_10*tmp_kernel_op_5*tmp_kernel_op_7 - tmp_kernel_op_11*tmp_kernel_op_3 - tmp_kernel_op_12*tmp_kernel_op_15 + tmp_kernel_op_14*tmp_kernel_op_17*tmp_kernel_op_3 - tmp_kernel_op_20*tmp_kernel_op_7;
             const real_t tmp_kernel_op_22 = 1.0 / (tmp_kernel_op_21);
             const real_t tmp_kernel_op_23 = tmp_kernel_op_22*tmp_kernel_op_8;
             const real_t tmp_kernel_op_24 = tmp_kernel_op_1*tmp_kernel_op_12 - tmp_kernel_op_17*tmp_kernel_op_7;
             const real_t tmp_kernel_op_25 = tmp_kernel_op_22*tmp_kernel_op_24;
             const real_t tmp_kernel_op_26 = -tmp_kernel_op_12*tmp_kernel_op_5 + tmp_kernel_op_17*tmp_kernel_op_3;
             const real_t tmp_kernel_op_27 = tmp_kernel_op_22*tmp_kernel_op_26;
             const real_t tmp_kernel_op_28 = -tmp_kernel_op_23 - tmp_kernel_op_25 - tmp_kernel_op_27;
             const real_t tmp_kernel_op_29 = tmp_kernel_op_1*tmp_kernel_op_19 - tmp_kernel_op_15;
             const real_t tmp_kernel_op_30 = tmp_kernel_op_22*tmp_kernel_op_29;
             const real_t tmp_kernel_op_31 = -tmp_kernel_op_11 + tmp_kernel_op_14*tmp_kernel_op_17;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_22*tmp_kernel_op_31;
             const real_t tmp_kernel_op_33 = tmp_kernel_op_10*tmp_kernel_op_5 - tmp_kernel_op_20;
             const real_t tmp_kernel_op_34 = tmp_kernel_op_22*tmp_kernel_op_33;
             const real_t tmp_kernel_op_35 = -tmp_kernel_op_30 - tmp_kernel_op_32 - tmp_kernel_op_34;
             const real_t tmp_kernel_op_36 = tmp_kernel_op_14*tmp_kernel_op_3 - tmp_kernel_op_19*tmp_kernel_op_7;
             const real_t tmp_kernel_op_37 = tmp_kernel_op_22*tmp_kernel_op_36;
             const real_t tmp_kernel_op_38 = -tmp_kernel_op_10*tmp_kernel_op_3 + tmp_kernel_op_12*tmp_kernel_op_19;
             const real_t tmp_kernel_op_39 = tmp_kernel_op_22*tmp_kernel_op_38;
             const real_t tmp_kernel_op_40 = tmp_kernel_op_10*tmp_kernel_op_7 - tmp_kernel_op_12*tmp_kernel_op_14;
             const real_t tmp_kernel_op_41 = tmp_kernel_op_22*tmp_kernel_op_40;
             const real_t tmp_kernel_op_42 = -tmp_kernel_op_37 - tmp_kernel_op_39 - tmp_kernel_op_41;
             const real_t tmp_kernel_op_43 = 0.16666666666666663*abs(tmp_kernel_op_0*tmp_kernel_op_12*tmp_kernel_op_18 - tmp_kernel_op_0*tmp_kernel_op_3*tmp_kernel_op_9 - tmp_kernel_op_12*tmp_kernel_op_13*tmp_kernel_op_4 + tmp_kernel_op_13*tmp_kernel_op_16*tmp_kernel_op_3 + tmp_kernel_op_16*tmp_kernel_op_18*tmp_kernel_op_6 - tmp_kernel_op_4*tmp_kernel_op_6*tmp_kernel_op_9);
             const real_t tmp_kernel_op_44 = tmp_kernel_op_43*(tmp_kernel_op_27*tmp_kernel_op_28 + tmp_kernel_op_34*tmp_kernel_op_35 + tmp_kernel_op_39*tmp_kernel_op_42);
             const real_t tmp_kernel_op_45 = tmp_kernel_op_43*(tmp_kernel_op_25*tmp_kernel_op_28 + tmp_kernel_op_32*tmp_kernel_op_35 + tmp_kernel_op_41*tmp_kernel_op_42);
             const real_t tmp_kernel_op_46 = tmp_kernel_op_43*(tmp_kernel_op_23*tmp_kernel_op_28 + tmp_kernel_op_30*tmp_kernel_op_35 + tmp_kernel_op_37*tmp_kernel_op_42);
             const real_t tmp_kernel_op_47 = 1.0 / (tmp_kernel_op_21*tmp_kernel_op_21);
             const real_t tmp_kernel_op_48 = tmp_kernel_op_26*tmp_kernel_op_47;
             const real_t tmp_kernel_op_49 = tmp_kernel_op_33*tmp_kernel_op_47;
             const real_t tmp_kernel_op_50 = tmp_kernel_op_38*tmp_kernel_op_47;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_43*(tmp_kernel_op_24*tmp_kernel_op_48 + tmp_kernel_op_31*tmp_kernel_op_49 + tmp_kernel_op_40*tmp_kernel_op_50);
             const real_t tmp_kernel_op_52 = tmp_kernel_op_43*(tmp_kernel_op_29*tmp_kernel_op_49 + tmp_kernel_op_36*tmp_kernel_op_50 + tmp_kernel_op_48*tmp_kernel_op_8);
             const real_t tmp_kernel_op_53 = tmp_kernel_op_43*(tmp_kernel_op_24*tmp_kernel_op_47*tmp_kernel_op_8 + tmp_kernel_op_29*tmp_kernel_op_31*tmp_kernel_op_47 + tmp_kernel_op_36*tmp_kernel_op_40*tmp_kernel_op_47);
             const real_t elMat_0_0 = tmp_kernel_op_43*((tmp_kernel_op_28*tmp_kernel_op_28) + (tmp_kernel_op_35*tmp_kernel_op_35) + (tmp_kernel_op_42*tmp_kernel_op_42));
             const real_t elMat_0_1 = tmp_kernel_op_44;
             const real_t elMat_0_2 = tmp_kernel_op_45;
             const real_t elMat_0_3 = tmp_kernel_op_46;
             const real_t elMat_1_0 = tmp_kernel_op_44;
             const real_t elMat_1_1 = tmp_kernel_op_43*((tmp_kernel_op_26*tmp_kernel_op_26)*tmp_kernel_op_47 + (tmp_kernel_op_33*tmp_kernel_op_33)*tmp_kernel_op_47 + (tmp_kernel_op_38*tmp_kernel_op_38)*tmp_kernel_op_47);
             const real_t elMat_1_2 = tmp_kernel_op_51;
             const real_t elMat_1_3 = tmp_kernel_op_52;
             const real_t elMat_2_0 = tmp_kernel_op_45;
             const real_t elMat_2_1 = tmp_kernel_op_51;
             const real_t elMat_2_2 = tmp_kernel_op_43*((tmp_kernel_op_24*tmp_kernel_op_24)*tmp_kernel_op_47 + (tmp_kernel_op_31*tmp_kernel_op_31)*tmp_kernel_op_47 + (tmp_kernel_op_40*tmp_kernel_op_40)*tmp_kernel_op_47);
             const real_t elMat_2_3 = tmp_kernel_op_53;
             const real_t elMat_3_0 = tmp_kernel_op_46;
             const real_t elMat_3_1 = tmp_kernel_op_52;
             const real_t elMat_3_2 = tmp_kernel_op_53;
             const real_t elMat_3_3 = tmp_kernel_op_43*((tmp_kernel_op_29*tmp_kernel_op_29)*tmp_kernel_op_47 + (tmp_kernel_op_36*tmp_kernel_op_36)*tmp_kernel_op_47 + tmp_kernel_op_47*(tmp_kernel_op_8*tmp_kernel_op_8));
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
                   real_t _data_float_loop_ctr_array_dim_2[4];
                   _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
               
                   const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_1_0));
                   _data_mat[5] = ((real_t)(elMat_1_1));
                   _data_mat[6] = ((real_t)(elMat_1_2));
                   _data_mat[7] = ((real_t)(elMat_1_3));
                   _data_mat[8] = ((real_t)(elMat_2_0));
                   _data_mat[9] = ((real_t)(elMat_2_1));
                   _data_mat[10] = ((real_t)(elMat_2_2));
                   _data_mat[11] = ((real_t)(elMat_2_3));
                   _data_mat[12] = ((real_t)(elMat_3_0));
                   _data_mat[13] = ((real_t)(elMat_3_1));
                   _data_mat[14] = ((real_t)(elMat_3_2));
                   _data_mat[15] = ((real_t)(elMat_3_3));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const real_t tmp_moved_constant_0 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_1 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_2 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_3 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_4 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_5 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_6 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_7 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_8 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_9 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_10 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_11 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_12 = tmp_moved_constant_0 - tmp_moved_constant_1;
             const real_t tmp_moved_constant_13 = -tmp_moved_constant_12;
             const real_t tmp_moved_constant_14 = -tmp_moved_constant_10;
             const real_t tmp_moved_constant_15 = tmp_moved_constant_14 + tmp_moved_constant_2;
             const real_t tmp_moved_constant_16 = tmp_moved_constant_0 - tmp_moved_constant_4;
             const real_t tmp_moved_constant_17 = -tmp_moved_constant_16;
             const real_t tmp_moved_constant_18 = tmp_moved_constant_10 - tmp_moved_constant_11;
             const real_t tmp_moved_constant_19 = -tmp_moved_constant_18;
             const real_t tmp_moved_constant_20 = -tmp_moved_constant_13*tmp_moved_constant_15 + tmp_moved_constant_17*tmp_moved_constant_19;
             const real_t tmp_moved_constant_21 = tmp_moved_constant_6 - tmp_moved_constant_9;
             const real_t tmp_moved_constant_22 = -tmp_moved_constant_21;
             const real_t tmp_moved_constant_23 = tmp_moved_constant_13*tmp_moved_constant_22;
             const real_t tmp_moved_constant_24 = tmp_moved_constant_14 + tmp_moved_constant_3;
             const real_t tmp_moved_constant_25 = tmp_moved_constant_6 - tmp_moved_constant_7;
             const real_t tmp_moved_constant_26 = -tmp_moved_constant_25;
             const real_t tmp_moved_constant_27 = tmp_moved_constant_17*tmp_moved_constant_26;
             const real_t tmp_moved_constant_28 = tmp_moved_constant_0 - tmp_moved_constant_5;
             const real_t tmp_moved_constant_29 = -tmp_moved_constant_28;
             const real_t tmp_moved_constant_30 = tmp_moved_constant_6 - tmp_moved_constant_8;
             const real_t tmp_moved_constant_31 = -tmp_moved_constant_30;
             const real_t tmp_moved_constant_32 = tmp_moved_constant_29*tmp_moved_constant_31;
             const real_t tmp_moved_constant_33 = tmp_moved_constant_13*tmp_moved_constant_24*tmp_moved_constant_31 - tmp_moved_constant_15*tmp_moved_constant_23 + tmp_moved_constant_15*tmp_moved_constant_26*tmp_moved_constant_29 + tmp_moved_constant_17*tmp_moved_constant_19*tmp_moved_constant_22 - tmp_moved_constant_19*tmp_moved_constant_32 - tmp_moved_constant_24*tmp_moved_constant_27;
             const real_t tmp_moved_constant_34 = 1.0 / (tmp_moved_constant_33);
             const real_t tmp_moved_constant_35 = tmp_moved_constant_20*tmp_moved_constant_34;
             const real_t tmp_moved_constant_36 = tmp_moved_constant_13*tmp_moved_constant_24 - tmp_moved_constant_19*tmp_moved_constant_29;
             const real_t tmp_moved_constant_37 = tmp_moved_constant_34*tmp_moved_constant_36;
             const real_t tmp_moved_constant_38 = tmp_moved_constant_15*tmp_moved_constant_29 - tmp_moved_constant_17*tmp_moved_constant_24;
             const real_t tmp_moved_constant_39 = tmp_moved_constant_34*tmp_moved_constant_38;
             const real_t tmp_moved_constant_40 = -tmp_moved_constant_35 - tmp_moved_constant_37 - tmp_moved_constant_39;
             const real_t tmp_moved_constant_41 = tmp_moved_constant_13*tmp_moved_constant_31 - tmp_moved_constant_27;
             const real_t tmp_moved_constant_42 = tmp_moved_constant_34*tmp_moved_constant_41;
             const real_t tmp_moved_constant_43 = -tmp_moved_constant_23 + tmp_moved_constant_26*tmp_moved_constant_29;
             const real_t tmp_moved_constant_44 = tmp_moved_constant_34*tmp_moved_constant_43;
             const real_t tmp_moved_constant_45 = tmp_moved_constant_17*tmp_moved_constant_22 - tmp_moved_constant_32;
             const real_t tmp_moved_constant_46 = tmp_moved_constant_34*tmp_moved_constant_45;
             const real_t tmp_moved_constant_47 = -tmp_moved_constant_42 - tmp_moved_constant_44 - tmp_moved_constant_46;
             const real_t tmp_moved_constant_48 = tmp_moved_constant_15*tmp_moved_constant_26 - tmp_moved_constant_19*tmp_moved_constant_31;
             const real_t tmp_moved_constant_49 = tmp_moved_constant_34*tmp_moved_constant_48;
             const real_t tmp_moved_constant_50 = -tmp_moved_constant_15*tmp_moved_constant_22 + tmp_moved_constant_24*tmp_moved_constant_31;
             const real_t tmp_moved_constant_51 = tmp_moved_constant_34*tmp_moved_constant_50;
             const real_t tmp_moved_constant_52 = tmp_moved_constant_19*tmp_moved_constant_22 - tmp_moved_constant_24*tmp_moved_constant_26;
             const real_t tmp_moved_constant_53 = tmp_moved_constant_34*tmp_moved_constant_52;
             const real_t tmp_moved_constant_54 = -tmp_moved_constant_49 - tmp_moved_constant_51 - tmp_moved_constant_53;
             const real_t tmp_moved_constant_55 = 0.16666666666666663*abs(tmp_moved_constant_12*tmp_moved_constant_15*tmp_moved_constant_21 - tmp_moved_constant_12*tmp_moved_constant_24*tmp_moved_constant_30 - tmp_moved_constant_15*tmp_moved_constant_25*tmp_moved_constant_28 + tmp_moved_constant_16*tmp_moved_constant_18*tmp_moved_constant_21 + tmp_moved_constant_16*tmp_moved_constant_24*tmp_moved_constant_25 - tmp_moved_constant_18*tmp_moved_constant_28*tmp_moved_constant_30);
             const real_t tmp_moved_constant_56 = tmp_moved_constant_55*(tmp_moved_constant_39*tmp_moved_constant_40 + tmp_moved_constant_46*tmp_moved_constant_47 + tmp_moved_constant_51*tmp_moved_constant_54);
             const real_t tmp_moved_constant_57 = tmp_moved_constant_55*(tmp_moved_constant_37*tmp_moved_constant_40 + tmp_moved_constant_44*tmp_moved_constant_47 + tmp_moved_constant_53*tmp_moved_constant_54);
             const real_t tmp_moved_constant_58 = tmp_moved_constant_55*(tmp_moved_constant_35*tmp_moved_constant_40 + tmp_moved_constant_42*tmp_moved_constant_47 + tmp_moved_constant_49*tmp_moved_constant_54);
             const real_t tmp_moved_constant_59 = 1.0 / (tmp_moved_constant_33*tmp_moved_constant_33);
             const real_t tmp_moved_constant_60 = tmp_moved_constant_38*tmp_moved_constant_59;
             const real_t tmp_moved_constant_61 = tmp_moved_constant_45*tmp_moved_constant_59;
             const real_t tmp_moved_constant_62 = tmp_moved_constant_50*tmp_moved_constant_59;
             const real_t tmp_moved_constant_63 = tmp_moved_constant_55*(tmp_moved_constant_36*tmp_moved_constant_60 + tmp_moved_constant_43*tmp_moved_constant_61 + tmp_moved_constant_52*tmp_moved_constant_62);
             const real_t tmp_moved_constant_64 = tmp_moved_constant_55*(tmp_moved_constant_20*tmp_moved_constant_60 + tmp_moved_constant_41*tmp_moved_constant_61 + tmp_moved_constant_48*tmp_moved_constant_62);
             const real_t tmp_moved_constant_65 = tmp_moved_constant_55*(tmp_moved_constant_20*tmp_moved_constant_36*tmp_moved_constant_59 + tmp_moved_constant_41*tmp_moved_constant_43*tmp_moved_constant_59 + tmp_moved_constant_48*tmp_moved_constant_52*tmp_moved_constant_59);
             const real_t tmp_moved_constant_66 = tmp_moved_constant_55*((tmp_moved_constant_40*tmp_moved_constant_40) + (tmp_moved_constant_47*tmp_moved_constant_47) + (tmp_moved_constant_54*tmp_moved_constant_54));
             const real_t tmp_moved_constant_67 = tmp_moved_constant_56;
             const real_t tmp_moved_constant_68 = tmp_moved_constant_57;
             const real_t tmp_moved_constant_69 = tmp_moved_constant_58;
             const real_t tmp_moved_constant_70 = tmp_moved_constant_56;
             const real_t tmp_moved_constant_71 = tmp_moved_constant_55*((tmp_moved_constant_38*tmp_moved_constant_38)*tmp_moved_constant_59 + (tmp_moved_constant_45*tmp_moved_constant_45)*tmp_moved_constant_59 + (tmp_moved_constant_50*tmp_moved_constant_50)*tmp_moved_constant_59);
             const real_t tmp_moved_constant_72 = tmp_moved_constant_63;
             const real_t tmp_moved_constant_73 = tmp_moved_constant_64;
             const real_t tmp_moved_constant_74 = tmp_moved_constant_57;
             const real_t tmp_moved_constant_75 = tmp_moved_constant_63;
             const real_t tmp_moved_constant_76 = tmp_moved_constant_55*((tmp_moved_constant_36*tmp_moved_constant_36)*tmp_moved_constant_59 + (tmp_moved_constant_43*tmp_moved_constant_43)*tmp_moved_constant_59 + (tmp_moved_constant_52*tmp_moved_constant_52)*tmp_moved_constant_59);
             const real_t tmp_moved_constant_77 = tmp_moved_constant_65;
             const real_t tmp_moved_constant_78 = tmp_moved_constant_58;
             const real_t tmp_moved_constant_79 = tmp_moved_constant_64;
             const real_t tmp_moved_constant_80 = tmp_moved_constant_65;
             const real_t tmp_moved_constant_81 = tmp_moved_constant_55*((tmp_moved_constant_20*tmp_moved_constant_20)*tmp_moved_constant_59 + (tmp_moved_constant_41*tmp_moved_constant_41)*tmp_moved_constant_59 + (tmp_moved_constant_48*tmp_moved_constant_48)*tmp_moved_constant_59);
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
                   real_t _data_float_loop_ctr_array_dim_2[4];
                   _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
               
                   const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(tmp_moved_constant_66));
                   _data_mat[1] = ((real_t)(tmp_moved_constant_67));
                   _data_mat[2] = ((real_t)(tmp_moved_constant_68));
                   _data_mat[3] = ((real_t)(tmp_moved_constant_69));
                   _data_mat[4] = ((real_t)(tmp_moved_constant_70));
                   _data_mat[5] = ((real_t)(tmp_moved_constant_71));
                   _data_mat[6] = ((real_t)(tmp_moved_constant_72));
                   _data_mat[7] = ((real_t)(tmp_moved_constant_73));
                   _data_mat[8] = ((real_t)(tmp_moved_constant_74));
                   _data_mat[9] = ((real_t)(tmp_moved_constant_75));
                   _data_mat[10] = ((real_t)(tmp_moved_constant_76));
                   _data_mat[11] = ((real_t)(tmp_moved_constant_77));
                   _data_mat[12] = ((real_t)(tmp_moved_constant_78));
                   _data_mat[13] = ((real_t)(tmp_moved_constant_79));
                   _data_mat[14] = ((real_t)(tmp_moved_constant_80));
                   _data_mat[15] = ((real_t)(tmp_moved_constant_81));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const real_t tmp_moved_constant_82 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_83 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_84 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_85 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_86 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_87 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_88 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_89 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_90 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_91 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_92 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_93 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_94 = tmp_moved_constant_82 - tmp_moved_constant_83;
             const real_t tmp_moved_constant_95 = -tmp_moved_constant_94;
             const real_t tmp_moved_constant_96 = -tmp_moved_constant_92;
             const real_t tmp_moved_constant_97 = tmp_moved_constant_84 + tmp_moved_constant_96;
             const real_t tmp_moved_constant_98 = tmp_moved_constant_82 - tmp_moved_constant_86;
             const real_t tmp_moved_constant_99 = -tmp_moved_constant_98;
             const real_t tmp_moved_constant_100 = tmp_moved_constant_92 - tmp_moved_constant_93;
             const real_t tmp_moved_constant_101 = -tmp_moved_constant_100;
             const real_t tmp_moved_constant_102 = tmp_moved_constant_101*tmp_moved_constant_99 - tmp_moved_constant_95*tmp_moved_constant_97;
             const real_t tmp_moved_constant_103 = tmp_moved_constant_88 - tmp_moved_constant_91;
             const real_t tmp_moved_constant_104 = -tmp_moved_constant_103;
             const real_t tmp_moved_constant_105 = tmp_moved_constant_104*tmp_moved_constant_95;
             const real_t tmp_moved_constant_106 = tmp_moved_constant_85 + tmp_moved_constant_96;
             const real_t tmp_moved_constant_107 = tmp_moved_constant_88 - tmp_moved_constant_89;
             const real_t tmp_moved_constant_108 = -tmp_moved_constant_107;
             const real_t tmp_moved_constant_109 = tmp_moved_constant_108*tmp_moved_constant_99;
             const real_t tmp_moved_constant_110 = tmp_moved_constant_82 - tmp_moved_constant_87;
             const real_t tmp_moved_constant_111 = -tmp_moved_constant_110;
             const real_t tmp_moved_constant_112 = tmp_moved_constant_88 - tmp_moved_constant_90;
             const real_t tmp_moved_constant_113 = -tmp_moved_constant_112;
             const real_t tmp_moved_constant_114 = tmp_moved_constant_111*tmp_moved_constant_113;
             const real_t tmp_moved_constant_115 = tmp_moved_constant_101*tmp_moved_constant_104*tmp_moved_constant_99 - tmp_moved_constant_101*tmp_moved_constant_114 - tmp_moved_constant_105*tmp_moved_constant_97 - tmp_moved_constant_106*tmp_moved_constant_109 + tmp_moved_constant_106*tmp_moved_constant_113*tmp_moved_constant_95 + tmp_moved_constant_108*tmp_moved_constant_111*tmp_moved_constant_97;
             const real_t tmp_moved_constant_116 = 1.0 / (tmp_moved_constant_115);
             const real_t tmp_moved_constant_117 = tmp_moved_constant_102*tmp_moved_constant_116;
             const real_t tmp_moved_constant_118 = -tmp_moved_constant_101*tmp_moved_constant_111 + tmp_moved_constant_106*tmp_moved_constant_95;
             const real_t tmp_moved_constant_119 = tmp_moved_constant_116*tmp_moved_constant_118;
             const real_t tmp_moved_constant_120 = -tmp_moved_constant_106*tmp_moved_constant_99 + tmp_moved_constant_111*tmp_moved_constant_97;
             const real_t tmp_moved_constant_121 = tmp_moved_constant_116*tmp_moved_constant_120;
             const real_t tmp_moved_constant_122 = -tmp_moved_constant_117 - tmp_moved_constant_119 - tmp_moved_constant_121;
             const real_t tmp_moved_constant_123 = -tmp_moved_constant_109 + tmp_moved_constant_113*tmp_moved_constant_95;
             const real_t tmp_moved_constant_124 = tmp_moved_constant_116*tmp_moved_constant_123;
             const real_t tmp_moved_constant_125 = -tmp_moved_constant_105 + tmp_moved_constant_108*tmp_moved_constant_111;
             const real_t tmp_moved_constant_126 = tmp_moved_constant_116*tmp_moved_constant_125;
             const real_t tmp_moved_constant_127 = tmp_moved_constant_104*tmp_moved_constant_99 - tmp_moved_constant_114;
             const real_t tmp_moved_constant_128 = tmp_moved_constant_116*tmp_moved_constant_127;
             const real_t tmp_moved_constant_129 = -tmp_moved_constant_124 - tmp_moved_constant_126 - tmp_moved_constant_128;
             const real_t tmp_moved_constant_130 = -tmp_moved_constant_101*tmp_moved_constant_113 + tmp_moved_constant_108*tmp_moved_constant_97;
             const real_t tmp_moved_constant_131 = tmp_moved_constant_116*tmp_moved_constant_130;
             const real_t tmp_moved_constant_132 = -tmp_moved_constant_104*tmp_moved_constant_97 + tmp_moved_constant_106*tmp_moved_constant_113;
             const real_t tmp_moved_constant_133 = tmp_moved_constant_116*tmp_moved_constant_132;
             const real_t tmp_moved_constant_134 = tmp_moved_constant_101*tmp_moved_constant_104 - tmp_moved_constant_106*tmp_moved_constant_108;
             const real_t tmp_moved_constant_135 = tmp_moved_constant_116*tmp_moved_constant_134;
             const real_t tmp_moved_constant_136 = -tmp_moved_constant_131 - tmp_moved_constant_133 - tmp_moved_constant_135;
             const real_t tmp_moved_constant_137 = 0.16666666666666663*abs(tmp_moved_constant_100*tmp_moved_constant_103*tmp_moved_constant_98 - tmp_moved_constant_100*tmp_moved_constant_110*tmp_moved_constant_112 + tmp_moved_constant_103*tmp_moved_constant_94*tmp_moved_constant_97 + tmp_moved_constant_106*tmp_moved_constant_107*tmp_moved_constant_98 - tmp_moved_constant_106*tmp_moved_constant_112*tmp_moved_constant_94 - tmp_moved_constant_107*tmp_moved_constant_110*tmp_moved_constant_97);
             const real_t tmp_moved_constant_138 = tmp_moved_constant_137*(tmp_moved_constant_121*tmp_moved_constant_122 + tmp_moved_constant_128*tmp_moved_constant_129 + tmp_moved_constant_133*tmp_moved_constant_136);
             const real_t tmp_moved_constant_139 = tmp_moved_constant_137*(tmp_moved_constant_119*tmp_moved_constant_122 + tmp_moved_constant_126*tmp_moved_constant_129 + tmp_moved_constant_135*tmp_moved_constant_136);
             const real_t tmp_moved_constant_140 = tmp_moved_constant_137*(tmp_moved_constant_117*tmp_moved_constant_122 + tmp_moved_constant_124*tmp_moved_constant_129 + tmp_moved_constant_131*tmp_moved_constant_136);
             const real_t tmp_moved_constant_141 = 1.0 / (tmp_moved_constant_115*tmp_moved_constant_115);
             const real_t tmp_moved_constant_142 = tmp_moved_constant_120*tmp_moved_constant_141;
             const real_t tmp_moved_constant_143 = tmp_moved_constant_127*tmp_moved_constant_141;
             const real_t tmp_moved_constant_144 = tmp_moved_constant_132*tmp_moved_constant_141;
             const real_t tmp_moved_constant_145 = tmp_moved_constant_137*(tmp_moved_constant_118*tmp_moved_constant_142 + tmp_moved_constant_125*tmp_moved_constant_143 + tmp_moved_constant_134*tmp_moved_constant_144);
             const real_t tmp_moved_constant_146 = tmp_moved_constant_137*(tmp_moved_constant_102*tmp_moved_constant_142 + tmp_moved_constant_123*tmp_moved_constant_143 + tmp_moved_constant_130*tmp_moved_constant_144);
             const real_t tmp_moved_constant_147 = tmp_moved_constant_137*(tmp_moved_constant_102*tmp_moved_constant_118*tmp_moved_constant_141 + tmp_moved_constant_123*tmp_moved_constant_125*tmp_moved_constant_141 + tmp_moved_constant_130*tmp_moved_constant_134*tmp_moved_constant_141);
             const real_t tmp_moved_constant_148 = tmp_moved_constant_137*((tmp_moved_constant_122*tmp_moved_constant_122) + (tmp_moved_constant_129*tmp_moved_constant_129) + (tmp_moved_constant_136*tmp_moved_constant_136));
             const real_t tmp_moved_constant_149 = tmp_moved_constant_138;
             const real_t tmp_moved_constant_150 = tmp_moved_constant_139;
             const real_t tmp_moved_constant_151 = tmp_moved_constant_140;
             const real_t tmp_moved_constant_152 = tmp_moved_constant_138;
             const real_t tmp_moved_constant_153 = tmp_moved_constant_137*((tmp_moved_constant_120*tmp_moved_constant_120)*tmp_moved_constant_141 + (tmp_moved_constant_127*tmp_moved_constant_127)*tmp_moved_constant_141 + (tmp_moved_constant_132*tmp_moved_constant_132)*tmp_moved_constant_141);
             const real_t tmp_moved_constant_154 = tmp_moved_constant_145;
             const real_t tmp_moved_constant_155 = tmp_moved_constant_146;
             const real_t tmp_moved_constant_156 = tmp_moved_constant_139;
             const real_t tmp_moved_constant_157 = tmp_moved_constant_145;
             const real_t tmp_moved_constant_158 = tmp_moved_constant_137*((tmp_moved_constant_118*tmp_moved_constant_118)*tmp_moved_constant_141 + (tmp_moved_constant_125*tmp_moved_constant_125)*tmp_moved_constant_141 + (tmp_moved_constant_134*tmp_moved_constant_134)*tmp_moved_constant_141);
             const real_t tmp_moved_constant_159 = tmp_moved_constant_147;
             const real_t tmp_moved_constant_160 = tmp_moved_constant_140;
             const real_t tmp_moved_constant_161 = tmp_moved_constant_146;
             const real_t tmp_moved_constant_162 = tmp_moved_constant_147;
             const real_t tmp_moved_constant_163 = tmp_moved_constant_137*((tmp_moved_constant_102*tmp_moved_constant_102)*tmp_moved_constant_141 + (tmp_moved_constant_123*tmp_moved_constant_123)*tmp_moved_constant_141 + (tmp_moved_constant_130*tmp_moved_constant_130)*tmp_moved_constant_141);
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
                   real_t _data_float_loop_ctr_array_dim_2[4];
                   _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
               
                   const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(tmp_moved_constant_148));
                   _data_mat[1] = ((real_t)(tmp_moved_constant_149));
                   _data_mat[2] = ((real_t)(tmp_moved_constant_150));
                   _data_mat[3] = ((real_t)(tmp_moved_constant_151));
                   _data_mat[4] = ((real_t)(tmp_moved_constant_152));
                   _data_mat[5] = ((real_t)(tmp_moved_constant_153));
                   _data_mat[6] = ((real_t)(tmp_moved_constant_154));
                   _data_mat[7] = ((real_t)(tmp_moved_constant_155));
                   _data_mat[8] = ((real_t)(tmp_moved_constant_156));
                   _data_mat[9] = ((real_t)(tmp_moved_constant_157));
                   _data_mat[10] = ((real_t)(tmp_moved_constant_158));
                   _data_mat[11] = ((real_t)(tmp_moved_constant_159));
                   _data_mat[12] = ((real_t)(tmp_moved_constant_160));
                   _data_mat[13] = ((real_t)(tmp_moved_constant_161));
                   _data_mat[14] = ((real_t)(tmp_moved_constant_162));
                   _data_mat[15] = ((real_t)(tmp_moved_constant_163));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const real_t tmp_moved_constant_164 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_165 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_166 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_167 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_168 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_169 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_170 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_171 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_172 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_173 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_174 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_175 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_176 = tmp_moved_constant_164 - tmp_moved_constant_165;
             const real_t tmp_moved_constant_177 = -tmp_moved_constant_176;
             const real_t tmp_moved_constant_178 = -tmp_moved_constant_174;
             const real_t tmp_moved_constant_179 = tmp_moved_constant_166 + tmp_moved_constant_178;
             const real_t tmp_moved_constant_180 = tmp_moved_constant_164 - tmp_moved_constant_168;
             const real_t tmp_moved_constant_181 = -tmp_moved_constant_180;
             const real_t tmp_moved_constant_182 = tmp_moved_constant_174 - tmp_moved_constant_175;
             const real_t tmp_moved_constant_183 = -tmp_moved_constant_182;
             const real_t tmp_moved_constant_184 = -tmp_moved_constant_177*tmp_moved_constant_179 + tmp_moved_constant_181*tmp_moved_constant_183;
             const real_t tmp_moved_constant_185 = tmp_moved_constant_170 - tmp_moved_constant_173;
             const real_t tmp_moved_constant_186 = -tmp_moved_constant_185;
             const real_t tmp_moved_constant_187 = tmp_moved_constant_177*tmp_moved_constant_186;
             const real_t tmp_moved_constant_188 = tmp_moved_constant_167 + tmp_moved_constant_178;
             const real_t tmp_moved_constant_189 = tmp_moved_constant_170 - tmp_moved_constant_171;
             const real_t tmp_moved_constant_190 = -tmp_moved_constant_189;
             const real_t tmp_moved_constant_191 = tmp_moved_constant_181*tmp_moved_constant_190;
             const real_t tmp_moved_constant_192 = tmp_moved_constant_164 - tmp_moved_constant_169;
             const real_t tmp_moved_constant_193 = -tmp_moved_constant_192;
             const real_t tmp_moved_constant_194 = tmp_moved_constant_170 - tmp_moved_constant_172;
             const real_t tmp_moved_constant_195 = -tmp_moved_constant_194;
             const real_t tmp_moved_constant_196 = tmp_moved_constant_193*tmp_moved_constant_195;
             const real_t tmp_moved_constant_197 = tmp_moved_constant_177*tmp_moved_constant_188*tmp_moved_constant_195 - tmp_moved_constant_179*tmp_moved_constant_187 + tmp_moved_constant_179*tmp_moved_constant_190*tmp_moved_constant_193 + tmp_moved_constant_181*tmp_moved_constant_183*tmp_moved_constant_186 - tmp_moved_constant_183*tmp_moved_constant_196 - tmp_moved_constant_188*tmp_moved_constant_191;
             const real_t tmp_moved_constant_198 = 1.0 / (tmp_moved_constant_197);
             const real_t tmp_moved_constant_199 = tmp_moved_constant_184*tmp_moved_constant_198;
             const real_t tmp_moved_constant_200 = tmp_moved_constant_177*tmp_moved_constant_188 - tmp_moved_constant_183*tmp_moved_constant_193;
             const real_t tmp_moved_constant_201 = tmp_moved_constant_198*tmp_moved_constant_200;
             const real_t tmp_moved_constant_202 = tmp_moved_constant_179*tmp_moved_constant_193 - tmp_moved_constant_181*tmp_moved_constant_188;
             const real_t tmp_moved_constant_203 = tmp_moved_constant_198*tmp_moved_constant_202;
             const real_t tmp_moved_constant_204 = -tmp_moved_constant_199 - tmp_moved_constant_201 - tmp_moved_constant_203;
             const real_t tmp_moved_constant_205 = tmp_moved_constant_177*tmp_moved_constant_195 - tmp_moved_constant_191;
             const real_t tmp_moved_constant_206 = tmp_moved_constant_198*tmp_moved_constant_205;
             const real_t tmp_moved_constant_207 = -tmp_moved_constant_187 + tmp_moved_constant_190*tmp_moved_constant_193;
             const real_t tmp_moved_constant_208 = tmp_moved_constant_198*tmp_moved_constant_207;
             const real_t tmp_moved_constant_209 = tmp_moved_constant_181*tmp_moved_constant_186 - tmp_moved_constant_196;
             const real_t tmp_moved_constant_210 = tmp_moved_constant_198*tmp_moved_constant_209;
             const real_t tmp_moved_constant_211 = -tmp_moved_constant_206 - tmp_moved_constant_208 - tmp_moved_constant_210;
             const real_t tmp_moved_constant_212 = tmp_moved_constant_179*tmp_moved_constant_190 - tmp_moved_constant_183*tmp_moved_constant_195;
             const real_t tmp_moved_constant_213 = tmp_moved_constant_198*tmp_moved_constant_212;
             const real_t tmp_moved_constant_214 = -tmp_moved_constant_179*tmp_moved_constant_186 + tmp_moved_constant_188*tmp_moved_constant_195;
             const real_t tmp_moved_constant_215 = tmp_moved_constant_198*tmp_moved_constant_214;
             const real_t tmp_moved_constant_216 = tmp_moved_constant_183*tmp_moved_constant_186 - tmp_moved_constant_188*tmp_moved_constant_190;
             const real_t tmp_moved_constant_217 = tmp_moved_constant_198*tmp_moved_constant_216;
             const real_t tmp_moved_constant_218 = -tmp_moved_constant_213 - tmp_moved_constant_215 - tmp_moved_constant_217;
             const real_t tmp_moved_constant_219 = 0.16666666666666663*abs(tmp_moved_constant_176*tmp_moved_constant_179*tmp_moved_constant_185 - tmp_moved_constant_176*tmp_moved_constant_188*tmp_moved_constant_194 - tmp_moved_constant_179*tmp_moved_constant_189*tmp_moved_constant_192 + tmp_moved_constant_180*tmp_moved_constant_182*tmp_moved_constant_185 + tmp_moved_constant_180*tmp_moved_constant_188*tmp_moved_constant_189 - tmp_moved_constant_182*tmp_moved_constant_192*tmp_moved_constant_194);
             const real_t tmp_moved_constant_220 = tmp_moved_constant_219*(tmp_moved_constant_203*tmp_moved_constant_204 + tmp_moved_constant_210*tmp_moved_constant_211 + tmp_moved_constant_215*tmp_moved_constant_218);
             const real_t tmp_moved_constant_221 = tmp_moved_constant_219*(tmp_moved_constant_201*tmp_moved_constant_204 + tmp_moved_constant_208*tmp_moved_constant_211 + tmp_moved_constant_217*tmp_moved_constant_218);
             const real_t tmp_moved_constant_222 = tmp_moved_constant_219*(tmp_moved_constant_199*tmp_moved_constant_204 + tmp_moved_constant_206*tmp_moved_constant_211 + tmp_moved_constant_213*tmp_moved_constant_218);
             const real_t tmp_moved_constant_223 = 1.0 / (tmp_moved_constant_197*tmp_moved_constant_197);
             const real_t tmp_moved_constant_224 = tmp_moved_constant_202*tmp_moved_constant_223;
             const real_t tmp_moved_constant_225 = tmp_moved_constant_209*tmp_moved_constant_223;
             const real_t tmp_moved_constant_226 = tmp_moved_constant_214*tmp_moved_constant_223;
             const real_t tmp_moved_constant_227 = tmp_moved_constant_219*(tmp_moved_constant_200*tmp_moved_constant_224 + tmp_moved_constant_207*tmp_moved_constant_225 + tmp_moved_constant_216*tmp_moved_constant_226);
             const real_t tmp_moved_constant_228 = tmp_moved_constant_219*(tmp_moved_constant_184*tmp_moved_constant_224 + tmp_moved_constant_205*tmp_moved_constant_225 + tmp_moved_constant_212*tmp_moved_constant_226);
             const real_t tmp_moved_constant_229 = tmp_moved_constant_219*(tmp_moved_constant_184*tmp_moved_constant_200*tmp_moved_constant_223 + tmp_moved_constant_205*tmp_moved_constant_207*tmp_moved_constant_223 + tmp_moved_constant_212*tmp_moved_constant_216*tmp_moved_constant_223);
             const real_t tmp_moved_constant_230 = tmp_moved_constant_219*((tmp_moved_constant_204*tmp_moved_constant_204) + (tmp_moved_constant_211*tmp_moved_constant_211) + (tmp_moved_constant_218*tmp_moved_constant_218));
             const real_t tmp_moved_constant_231 = tmp_moved_constant_220;
             const real_t tmp_moved_constant_232 = tmp_moved_constant_221;
             const real_t tmp_moved_constant_233 = tmp_moved_constant_222;
             const real_t tmp_moved_constant_234 = tmp_moved_constant_220;
             const real_t tmp_moved_constant_235 = tmp_moved_constant_219*((tmp_moved_constant_202*tmp_moved_constant_202)*tmp_moved_constant_223 + (tmp_moved_constant_209*tmp_moved_constant_209)*tmp_moved_constant_223 + (tmp_moved_constant_214*tmp_moved_constant_214)*tmp_moved_constant_223);
             const real_t tmp_moved_constant_236 = tmp_moved_constant_227;
             const real_t tmp_moved_constant_237 = tmp_moved_constant_228;
             const real_t tmp_moved_constant_238 = tmp_moved_constant_221;
             const real_t tmp_moved_constant_239 = tmp_moved_constant_227;
             const real_t tmp_moved_constant_240 = tmp_moved_constant_219*((tmp_moved_constant_200*tmp_moved_constant_200)*tmp_moved_constant_223 + (tmp_moved_constant_207*tmp_moved_constant_207)*tmp_moved_constant_223 + (tmp_moved_constant_216*tmp_moved_constant_216)*tmp_moved_constant_223);
             const real_t tmp_moved_constant_241 = tmp_moved_constant_229;
             const real_t tmp_moved_constant_242 = tmp_moved_constant_222;
             const real_t tmp_moved_constant_243 = tmp_moved_constant_228;
             const real_t tmp_moved_constant_244 = tmp_moved_constant_229;
             const real_t tmp_moved_constant_245 = tmp_moved_constant_219*((tmp_moved_constant_184*tmp_moved_constant_184)*tmp_moved_constant_223 + (tmp_moved_constant_205*tmp_moved_constant_205)*tmp_moved_constant_223 + (tmp_moved_constant_212*tmp_moved_constant_212)*tmp_moved_constant_223);
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
                   real_t _data_float_loop_ctr_array_dim_2[4];
                   _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
               
                   const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(tmp_moved_constant_230));
                   _data_mat[1] = ((real_t)(tmp_moved_constant_231));
                   _data_mat[2] = ((real_t)(tmp_moved_constant_232));
                   _data_mat[3] = ((real_t)(tmp_moved_constant_233));
                   _data_mat[4] = ((real_t)(tmp_moved_constant_234));
                   _data_mat[5] = ((real_t)(tmp_moved_constant_235));
                   _data_mat[6] = ((real_t)(tmp_moved_constant_236));
                   _data_mat[7] = ((real_t)(tmp_moved_constant_237));
                   _data_mat[8] = ((real_t)(tmp_moved_constant_238));
                   _data_mat[9] = ((real_t)(tmp_moved_constant_239));
                   _data_mat[10] = ((real_t)(tmp_moved_constant_240));
                   _data_mat[11] = ((real_t)(tmp_moved_constant_241));
                   _data_mat[12] = ((real_t)(tmp_moved_constant_242));
                   _data_mat[13] = ((real_t)(tmp_moved_constant_243));
                   _data_mat[14] = ((real_t)(tmp_moved_constant_244));
                   _data_mat[15] = ((real_t)(tmp_moved_constant_245));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const real_t tmp_moved_constant_246 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_247 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_248 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_249 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_250 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_251 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_252 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_253 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_254 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_255 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_256 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_257 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_258 = tmp_moved_constant_246 - tmp_moved_constant_247;
             const real_t tmp_moved_constant_259 = -tmp_moved_constant_258;
             const real_t tmp_moved_constant_260 = -tmp_moved_constant_256;
             const real_t tmp_moved_constant_261 = tmp_moved_constant_248 + tmp_moved_constant_260;
             const real_t tmp_moved_constant_262 = tmp_moved_constant_246 - tmp_moved_constant_250;
             const real_t tmp_moved_constant_263 = -tmp_moved_constant_262;
             const real_t tmp_moved_constant_264 = tmp_moved_constant_256 - tmp_moved_constant_257;
             const real_t tmp_moved_constant_265 = -tmp_moved_constant_264;
             const real_t tmp_moved_constant_266 = -tmp_moved_constant_259*tmp_moved_constant_261 + tmp_moved_constant_263*tmp_moved_constant_265;
             const real_t tmp_moved_constant_267 = tmp_moved_constant_252 - tmp_moved_constant_255;
             const real_t tmp_moved_constant_268 = -tmp_moved_constant_267;
             const real_t tmp_moved_constant_269 = tmp_moved_constant_259*tmp_moved_constant_268;
             const real_t tmp_moved_constant_270 = tmp_moved_constant_249 + tmp_moved_constant_260;
             const real_t tmp_moved_constant_271 = tmp_moved_constant_252 - tmp_moved_constant_253;
             const real_t tmp_moved_constant_272 = -tmp_moved_constant_271;
             const real_t tmp_moved_constant_273 = tmp_moved_constant_263*tmp_moved_constant_272;
             const real_t tmp_moved_constant_274 = tmp_moved_constant_246 - tmp_moved_constant_251;
             const real_t tmp_moved_constant_275 = -tmp_moved_constant_274;
             const real_t tmp_moved_constant_276 = tmp_moved_constant_252 - tmp_moved_constant_254;
             const real_t tmp_moved_constant_277 = -tmp_moved_constant_276;
             const real_t tmp_moved_constant_278 = tmp_moved_constant_275*tmp_moved_constant_277;
             const real_t tmp_moved_constant_279 = tmp_moved_constant_259*tmp_moved_constant_270*tmp_moved_constant_277 - tmp_moved_constant_261*tmp_moved_constant_269 + tmp_moved_constant_261*tmp_moved_constant_272*tmp_moved_constant_275 + tmp_moved_constant_263*tmp_moved_constant_265*tmp_moved_constant_268 - tmp_moved_constant_265*tmp_moved_constant_278 - tmp_moved_constant_270*tmp_moved_constant_273;
             const real_t tmp_moved_constant_280 = 1.0 / (tmp_moved_constant_279);
             const real_t tmp_moved_constant_281 = tmp_moved_constant_266*tmp_moved_constant_280;
             const real_t tmp_moved_constant_282 = tmp_moved_constant_259*tmp_moved_constant_270 - tmp_moved_constant_265*tmp_moved_constant_275;
             const real_t tmp_moved_constant_283 = tmp_moved_constant_280*tmp_moved_constant_282;
             const real_t tmp_moved_constant_284 = tmp_moved_constant_261*tmp_moved_constant_275 - tmp_moved_constant_263*tmp_moved_constant_270;
             const real_t tmp_moved_constant_285 = tmp_moved_constant_280*tmp_moved_constant_284;
             const real_t tmp_moved_constant_286 = -tmp_moved_constant_281 - tmp_moved_constant_283 - tmp_moved_constant_285;
             const real_t tmp_moved_constant_287 = tmp_moved_constant_259*tmp_moved_constant_277 - tmp_moved_constant_273;
             const real_t tmp_moved_constant_288 = tmp_moved_constant_280*tmp_moved_constant_287;
             const real_t tmp_moved_constant_289 = -tmp_moved_constant_269 + tmp_moved_constant_272*tmp_moved_constant_275;
             const real_t tmp_moved_constant_290 = tmp_moved_constant_280*tmp_moved_constant_289;
             const real_t tmp_moved_constant_291 = tmp_moved_constant_263*tmp_moved_constant_268 - tmp_moved_constant_278;
             const real_t tmp_moved_constant_292 = tmp_moved_constant_280*tmp_moved_constant_291;
             const real_t tmp_moved_constant_293 = -tmp_moved_constant_288 - tmp_moved_constant_290 - tmp_moved_constant_292;
             const real_t tmp_moved_constant_294 = tmp_moved_constant_261*tmp_moved_constant_272 - tmp_moved_constant_265*tmp_moved_constant_277;
             const real_t tmp_moved_constant_295 = tmp_moved_constant_280*tmp_moved_constant_294;
             const real_t tmp_moved_constant_296 = -tmp_moved_constant_261*tmp_moved_constant_268 + tmp_moved_constant_270*tmp_moved_constant_277;
             const real_t tmp_moved_constant_297 = tmp_moved_constant_280*tmp_moved_constant_296;
             const real_t tmp_moved_constant_298 = tmp_moved_constant_265*tmp_moved_constant_268 - tmp_moved_constant_270*tmp_moved_constant_272;
             const real_t tmp_moved_constant_299 = tmp_moved_constant_280*tmp_moved_constant_298;
             const real_t tmp_moved_constant_300 = -tmp_moved_constant_295 - tmp_moved_constant_297 - tmp_moved_constant_299;
             const real_t tmp_moved_constant_301 = 0.16666666666666663*abs(tmp_moved_constant_258*tmp_moved_constant_261*tmp_moved_constant_267 - tmp_moved_constant_258*tmp_moved_constant_270*tmp_moved_constant_276 - tmp_moved_constant_261*tmp_moved_constant_271*tmp_moved_constant_274 + tmp_moved_constant_262*tmp_moved_constant_264*tmp_moved_constant_267 + tmp_moved_constant_262*tmp_moved_constant_270*tmp_moved_constant_271 - tmp_moved_constant_264*tmp_moved_constant_274*tmp_moved_constant_276);
             const real_t tmp_moved_constant_302 = tmp_moved_constant_301*(tmp_moved_constant_285*tmp_moved_constant_286 + tmp_moved_constant_292*tmp_moved_constant_293 + tmp_moved_constant_297*tmp_moved_constant_300);
             const real_t tmp_moved_constant_303 = tmp_moved_constant_301*(tmp_moved_constant_283*tmp_moved_constant_286 + tmp_moved_constant_290*tmp_moved_constant_293 + tmp_moved_constant_299*tmp_moved_constant_300);
             const real_t tmp_moved_constant_304 = tmp_moved_constant_301*(tmp_moved_constant_281*tmp_moved_constant_286 + tmp_moved_constant_288*tmp_moved_constant_293 + tmp_moved_constant_295*tmp_moved_constant_300);
             const real_t tmp_moved_constant_305 = 1.0 / (tmp_moved_constant_279*tmp_moved_constant_279);
             const real_t tmp_moved_constant_306 = tmp_moved_constant_284*tmp_moved_constant_305;
             const real_t tmp_moved_constant_307 = tmp_moved_constant_291*tmp_moved_constant_305;
             const real_t tmp_moved_constant_308 = tmp_moved_constant_296*tmp_moved_constant_305;
             const real_t tmp_moved_constant_309 = tmp_moved_constant_301*(tmp_moved_constant_282*tmp_moved_constant_306 + tmp_moved_constant_289*tmp_moved_constant_307 + tmp_moved_constant_298*tmp_moved_constant_308);
             const real_t tmp_moved_constant_310 = tmp_moved_constant_301*(tmp_moved_constant_266*tmp_moved_constant_306 + tmp_moved_constant_287*tmp_moved_constant_307 + tmp_moved_constant_294*tmp_moved_constant_308);
             const real_t tmp_moved_constant_311 = tmp_moved_constant_301*(tmp_moved_constant_266*tmp_moved_constant_282*tmp_moved_constant_305 + tmp_moved_constant_287*tmp_moved_constant_289*tmp_moved_constant_305 + tmp_moved_constant_294*tmp_moved_constant_298*tmp_moved_constant_305);
             const real_t tmp_moved_constant_312 = tmp_moved_constant_301*((tmp_moved_constant_286*tmp_moved_constant_286) + (tmp_moved_constant_293*tmp_moved_constant_293) + (tmp_moved_constant_300*tmp_moved_constant_300));
             const real_t tmp_moved_constant_313 = tmp_moved_constant_302;
             const real_t tmp_moved_constant_314 = tmp_moved_constant_303;
             const real_t tmp_moved_constant_315 = tmp_moved_constant_304;
             const real_t tmp_moved_constant_316 = tmp_moved_constant_302;
             const real_t tmp_moved_constant_317 = tmp_moved_constant_301*((tmp_moved_constant_284*tmp_moved_constant_284)*tmp_moved_constant_305 + (tmp_moved_constant_291*tmp_moved_constant_291)*tmp_moved_constant_305 + (tmp_moved_constant_296*tmp_moved_constant_296)*tmp_moved_constant_305);
             const real_t tmp_moved_constant_318 = tmp_moved_constant_309;
             const real_t tmp_moved_constant_319 = tmp_moved_constant_310;
             const real_t tmp_moved_constant_320 = tmp_moved_constant_303;
             const real_t tmp_moved_constant_321 = tmp_moved_constant_309;
             const real_t tmp_moved_constant_322 = tmp_moved_constant_301*((tmp_moved_constant_282*tmp_moved_constant_282)*tmp_moved_constant_305 + (tmp_moved_constant_289*tmp_moved_constant_289)*tmp_moved_constant_305 + (tmp_moved_constant_298*tmp_moved_constant_298)*tmp_moved_constant_305);
             const real_t tmp_moved_constant_323 = tmp_moved_constant_311;
             const real_t tmp_moved_constant_324 = tmp_moved_constant_304;
             const real_t tmp_moved_constant_325 = tmp_moved_constant_310;
             const real_t tmp_moved_constant_326 = tmp_moved_constant_311;
             const real_t tmp_moved_constant_327 = tmp_moved_constant_301*((tmp_moved_constant_266*tmp_moved_constant_266)*tmp_moved_constant_305 + (tmp_moved_constant_287*tmp_moved_constant_287)*tmp_moved_constant_305 + (tmp_moved_constant_294*tmp_moved_constant_294)*tmp_moved_constant_305);
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
                   real_t _data_float_loop_ctr_array_dim_2[4];
                   _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
               
                   const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(tmp_moved_constant_312));
                   _data_mat[1] = ((real_t)(tmp_moved_constant_313));
                   _data_mat[2] = ((real_t)(tmp_moved_constant_314));
                   _data_mat[3] = ((real_t)(tmp_moved_constant_315));
                   _data_mat[4] = ((real_t)(tmp_moved_constant_316));
                   _data_mat[5] = ((real_t)(tmp_moved_constant_317));
                   _data_mat[6] = ((real_t)(tmp_moved_constant_318));
                   _data_mat[7] = ((real_t)(tmp_moved_constant_319));
                   _data_mat[8] = ((real_t)(tmp_moved_constant_320));
                   _data_mat[9] = ((real_t)(tmp_moved_constant_321));
                   _data_mat[10] = ((real_t)(tmp_moved_constant_322));
                   _data_mat[11] = ((real_t)(tmp_moved_constant_323));
                   _data_mat[12] = ((real_t)(tmp_moved_constant_324));
                   _data_mat[13] = ((real_t)(tmp_moved_constant_325));
                   _data_mat[14] = ((real_t)(tmp_moved_constant_326));
                   _data_mat[15] = ((real_t)(tmp_moved_constant_327));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const real_t tmp_moved_constant_328 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_329 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_330 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_331 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_332 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_333 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_334 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_335 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_336 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_337 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_338 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_moved_constant_339 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_moved_constant_340 = tmp_moved_constant_328 - tmp_moved_constant_329;
             const real_t tmp_moved_constant_341 = -tmp_moved_constant_340;
             const real_t tmp_moved_constant_342 = -tmp_moved_constant_338;
             const real_t tmp_moved_constant_343 = tmp_moved_constant_330 + tmp_moved_constant_342;
             const real_t tmp_moved_constant_344 = tmp_moved_constant_328 - tmp_moved_constant_332;
             const real_t tmp_moved_constant_345 = -tmp_moved_constant_344;
             const real_t tmp_moved_constant_346 = tmp_moved_constant_338 - tmp_moved_constant_339;
             const real_t tmp_moved_constant_347 = -tmp_moved_constant_346;
             const real_t tmp_moved_constant_348 = -tmp_moved_constant_341*tmp_moved_constant_343 + tmp_moved_constant_345*tmp_moved_constant_347;
             const real_t tmp_moved_constant_349 = tmp_moved_constant_334 - tmp_moved_constant_337;
             const real_t tmp_moved_constant_350 = -tmp_moved_constant_349;
             const real_t tmp_moved_constant_351 = tmp_moved_constant_341*tmp_moved_constant_350;
             const real_t tmp_moved_constant_352 = tmp_moved_constant_331 + tmp_moved_constant_342;
             const real_t tmp_moved_constant_353 = tmp_moved_constant_334 - tmp_moved_constant_335;
             const real_t tmp_moved_constant_354 = -tmp_moved_constant_353;
             const real_t tmp_moved_constant_355 = tmp_moved_constant_345*tmp_moved_constant_354;
             const real_t tmp_moved_constant_356 = tmp_moved_constant_328 - tmp_moved_constant_333;
             const real_t tmp_moved_constant_357 = -tmp_moved_constant_356;
             const real_t tmp_moved_constant_358 = tmp_moved_constant_334 - tmp_moved_constant_336;
             const real_t tmp_moved_constant_359 = -tmp_moved_constant_358;
             const real_t tmp_moved_constant_360 = tmp_moved_constant_357*tmp_moved_constant_359;
             const real_t tmp_moved_constant_361 = tmp_moved_constant_341*tmp_moved_constant_352*tmp_moved_constant_359 - tmp_moved_constant_343*tmp_moved_constant_351 + tmp_moved_constant_343*tmp_moved_constant_354*tmp_moved_constant_357 + tmp_moved_constant_345*tmp_moved_constant_347*tmp_moved_constant_350 - tmp_moved_constant_347*tmp_moved_constant_360 - tmp_moved_constant_352*tmp_moved_constant_355;
             const real_t tmp_moved_constant_362 = 1.0 / (tmp_moved_constant_361);
             const real_t tmp_moved_constant_363 = tmp_moved_constant_348*tmp_moved_constant_362;
             const real_t tmp_moved_constant_364 = tmp_moved_constant_341*tmp_moved_constant_352 - tmp_moved_constant_347*tmp_moved_constant_357;
             const real_t tmp_moved_constant_365 = tmp_moved_constant_362*tmp_moved_constant_364;
             const real_t tmp_moved_constant_366 = tmp_moved_constant_343*tmp_moved_constant_357 - tmp_moved_constant_345*tmp_moved_constant_352;
             const real_t tmp_moved_constant_367 = tmp_moved_constant_362*tmp_moved_constant_366;
             const real_t tmp_moved_constant_368 = -tmp_moved_constant_363 - tmp_moved_constant_365 - tmp_moved_constant_367;
             const real_t tmp_moved_constant_369 = tmp_moved_constant_341*tmp_moved_constant_359 - tmp_moved_constant_355;
             const real_t tmp_moved_constant_370 = tmp_moved_constant_362*tmp_moved_constant_369;
             const real_t tmp_moved_constant_371 = -tmp_moved_constant_351 + tmp_moved_constant_354*tmp_moved_constant_357;
             const real_t tmp_moved_constant_372 = tmp_moved_constant_362*tmp_moved_constant_371;
             const real_t tmp_moved_constant_373 = tmp_moved_constant_345*tmp_moved_constant_350 - tmp_moved_constant_360;
             const real_t tmp_moved_constant_374 = tmp_moved_constant_362*tmp_moved_constant_373;
             const real_t tmp_moved_constant_375 = -tmp_moved_constant_370 - tmp_moved_constant_372 - tmp_moved_constant_374;
             const real_t tmp_moved_constant_376 = tmp_moved_constant_343*tmp_moved_constant_354 - tmp_moved_constant_347*tmp_moved_constant_359;
             const real_t tmp_moved_constant_377 = tmp_moved_constant_362*tmp_moved_constant_376;
             const real_t tmp_moved_constant_378 = -tmp_moved_constant_343*tmp_moved_constant_350 + tmp_moved_constant_352*tmp_moved_constant_359;
             const real_t tmp_moved_constant_379 = tmp_moved_constant_362*tmp_moved_constant_378;
             const real_t tmp_moved_constant_380 = tmp_moved_constant_347*tmp_moved_constant_350 - tmp_moved_constant_352*tmp_moved_constant_354;
             const real_t tmp_moved_constant_381 = tmp_moved_constant_362*tmp_moved_constant_380;
             const real_t tmp_moved_constant_382 = -tmp_moved_constant_377 - tmp_moved_constant_379 - tmp_moved_constant_381;
             const real_t tmp_moved_constant_383 = 0.16666666666666663*abs(tmp_moved_constant_340*tmp_moved_constant_343*tmp_moved_constant_349 - tmp_moved_constant_340*tmp_moved_constant_352*tmp_moved_constant_358 - tmp_moved_constant_343*tmp_moved_constant_353*tmp_moved_constant_356 + tmp_moved_constant_344*tmp_moved_constant_346*tmp_moved_constant_349 + tmp_moved_constant_344*tmp_moved_constant_352*tmp_moved_constant_353 - tmp_moved_constant_346*tmp_moved_constant_356*tmp_moved_constant_358);
             const real_t tmp_moved_constant_384 = tmp_moved_constant_383*(tmp_moved_constant_367*tmp_moved_constant_368 + tmp_moved_constant_374*tmp_moved_constant_375 + tmp_moved_constant_379*tmp_moved_constant_382);
             const real_t tmp_moved_constant_385 = tmp_moved_constant_383*(tmp_moved_constant_365*tmp_moved_constant_368 + tmp_moved_constant_372*tmp_moved_constant_375 + tmp_moved_constant_381*tmp_moved_constant_382);
             const real_t tmp_moved_constant_386 = tmp_moved_constant_383*(tmp_moved_constant_363*tmp_moved_constant_368 + tmp_moved_constant_370*tmp_moved_constant_375 + tmp_moved_constant_377*tmp_moved_constant_382);
             const real_t tmp_moved_constant_387 = 1.0 / (tmp_moved_constant_361*tmp_moved_constant_361);
             const real_t tmp_moved_constant_388 = tmp_moved_constant_366*tmp_moved_constant_387;
             const real_t tmp_moved_constant_389 = tmp_moved_constant_373*tmp_moved_constant_387;
             const real_t tmp_moved_constant_390 = tmp_moved_constant_378*tmp_moved_constant_387;
             const real_t tmp_moved_constant_391 = tmp_moved_constant_383*(tmp_moved_constant_364*tmp_moved_constant_388 + tmp_moved_constant_371*tmp_moved_constant_389 + tmp_moved_constant_380*tmp_moved_constant_390);
             const real_t tmp_moved_constant_392 = tmp_moved_constant_383*(tmp_moved_constant_348*tmp_moved_constant_388 + tmp_moved_constant_369*tmp_moved_constant_389 + tmp_moved_constant_376*tmp_moved_constant_390);
             const real_t tmp_moved_constant_393 = tmp_moved_constant_383*(tmp_moved_constant_348*tmp_moved_constant_364*tmp_moved_constant_387 + tmp_moved_constant_369*tmp_moved_constant_371*tmp_moved_constant_387 + tmp_moved_constant_376*tmp_moved_constant_380*tmp_moved_constant_387);
             const real_t tmp_moved_constant_394 = tmp_moved_constant_383*((tmp_moved_constant_368*tmp_moved_constant_368) + (tmp_moved_constant_375*tmp_moved_constant_375) + (tmp_moved_constant_382*tmp_moved_constant_382));
             const real_t tmp_moved_constant_395 = tmp_moved_constant_384;
             const real_t tmp_moved_constant_396 = tmp_moved_constant_385;
             const real_t tmp_moved_constant_397 = tmp_moved_constant_386;
             const real_t tmp_moved_constant_398 = tmp_moved_constant_384;
             const real_t tmp_moved_constant_399 = tmp_moved_constant_383*((tmp_moved_constant_366*tmp_moved_constant_366)*tmp_moved_constant_387 + (tmp_moved_constant_373*tmp_moved_constant_373)*tmp_moved_constant_387 + (tmp_moved_constant_378*tmp_moved_constant_378)*tmp_moved_constant_387);
             const real_t tmp_moved_constant_400 = tmp_moved_constant_391;
             const real_t tmp_moved_constant_401 = tmp_moved_constant_392;
             const real_t tmp_moved_constant_402 = tmp_moved_constant_385;
             const real_t tmp_moved_constant_403 = tmp_moved_constant_391;
             const real_t tmp_moved_constant_404 = tmp_moved_constant_383*((tmp_moved_constant_364*tmp_moved_constant_364)*tmp_moved_constant_387 + (tmp_moved_constant_371*tmp_moved_constant_371)*tmp_moved_constant_387 + (tmp_moved_constant_380*tmp_moved_constant_380)*tmp_moved_constant_387);
             const real_t tmp_moved_constant_405 = tmp_moved_constant_393;
             const real_t tmp_moved_constant_406 = tmp_moved_constant_386;
             const real_t tmp_moved_constant_407 = tmp_moved_constant_392;
             const real_t tmp_moved_constant_408 = tmp_moved_constant_393;
             const real_t tmp_moved_constant_409 = tmp_moved_constant_383*((tmp_moved_constant_348*tmp_moved_constant_348)*tmp_moved_constant_387 + (tmp_moved_constant_369*tmp_moved_constant_369)*tmp_moved_constant_387 + (tmp_moved_constant_376*tmp_moved_constant_376)*tmp_moved_constant_387);
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
                   real_t _data_float_loop_ctr_array_dim_2[4];
                   _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                   _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
               
                   const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
               
                   std::vector< uint_t > _data_rowIdx( 4 );
                   std::vector< uint_t > _data_colIdx( 4 );
                   std::vector< real_t > _data_mat( 16 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(tmp_moved_constant_394));
                   _data_mat[1] = ((real_t)(tmp_moved_constant_395));
                   _data_mat[2] = ((real_t)(tmp_moved_constant_396));
                   _data_mat[3] = ((real_t)(tmp_moved_constant_397));
                   _data_mat[4] = ((real_t)(tmp_moved_constant_398));
                   _data_mat[5] = ((real_t)(tmp_moved_constant_399));
                   _data_mat[6] = ((real_t)(tmp_moved_constant_400));
                   _data_mat[7] = ((real_t)(tmp_moved_constant_401));
                   _data_mat[8] = ((real_t)(tmp_moved_constant_402));
                   _data_mat[9] = ((real_t)(tmp_moved_constant_403));
                   _data_mat[10] = ((real_t)(tmp_moved_constant_404));
                   _data_mat[11] = ((real_t)(tmp_moved_constant_405));
                   _data_mat[12] = ((real_t)(tmp_moved_constant_406));
                   _data_mat[13] = ((real_t)(tmp_moved_constant_407));
                   _data_mat[14] = ((real_t)(tmp_moved_constant_408));
                   _data_mat[15] = ((real_t)(tmp_moved_constant_409));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          for (int64_t ctr_0 = -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             if (-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2 >= 0)
             {
                const real_t micromesh_dof_0 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t micromesh_dof_1 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t micromesh_dof_10 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t micromesh_dof_11 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t micromesh_dof_2 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t micromesh_dof_3 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t micromesh_dof_4 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t micromesh_dof_5 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t micromesh_dof_6 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t micromesh_dof_7 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t micromesh_dof_8 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t micromesh_dof_9 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_kernel_op_0 = micromesh_dof_0 - micromesh_dof_1;
                const real_t tmp_kernel_op_1 = -tmp_kernel_op_0;
                const real_t tmp_kernel_op_2 = -micromesh_dof_8;
                const real_t tmp_kernel_op_3 = micromesh_dof_10 + tmp_kernel_op_2;
                const real_t tmp_kernel_op_4 = micromesh_dof_0 - micromesh_dof_2;
                const real_t tmp_kernel_op_5 = -tmp_kernel_op_4;
                const real_t tmp_kernel_op_6 = micromesh_dof_8 - micromesh_dof_9;
                const real_t tmp_kernel_op_7 = -tmp_kernel_op_6;
                const real_t tmp_kernel_op_8 = -tmp_kernel_op_1*tmp_kernel_op_3 + tmp_kernel_op_5*tmp_kernel_op_7;
                const real_t tmp_kernel_op_9 = micromesh_dof_4 - micromesh_dof_7;
                const real_t tmp_kernel_op_10 = -tmp_kernel_op_9;
                const real_t tmp_kernel_op_11 = tmp_kernel_op_1*tmp_kernel_op_10;
                const real_t tmp_kernel_op_12 = micromesh_dof_11 + tmp_kernel_op_2;
                const real_t tmp_kernel_op_13 = micromesh_dof_4 - micromesh_dof_5;
                const real_t tmp_kernel_op_14 = -tmp_kernel_op_13;
                const real_t tmp_kernel_op_15 = tmp_kernel_op_14*tmp_kernel_op_5;
                const real_t tmp_kernel_op_16 = micromesh_dof_0 - micromesh_dof_3;
                const real_t tmp_kernel_op_17 = -tmp_kernel_op_16;
                const real_t tmp_kernel_op_18 = micromesh_dof_4 - micromesh_dof_6;
                const real_t tmp_kernel_op_19 = -tmp_kernel_op_18;
                const real_t tmp_kernel_op_20 = tmp_kernel_op_17*tmp_kernel_op_19;
                const real_t tmp_kernel_op_21 = tmp_kernel_op_1*tmp_kernel_op_12*tmp_kernel_op_19 + tmp_kernel_op_10*tmp_kernel_op_5*tmp_kernel_op_7 - tmp_kernel_op_11*tmp_kernel_op_3 - tmp_kernel_op_12*tmp_kernel_op_15 + tmp_kernel_op_14*tmp_kernel_op_17*tmp_kernel_op_3 - tmp_kernel_op_20*tmp_kernel_op_7;
                const real_t tmp_kernel_op_22 = 1.0 / (tmp_kernel_op_21);
                const real_t tmp_kernel_op_23 = tmp_kernel_op_22*tmp_kernel_op_8;
                const real_t tmp_kernel_op_24 = tmp_kernel_op_1*tmp_kernel_op_12 - tmp_kernel_op_17*tmp_kernel_op_7;
                const real_t tmp_kernel_op_25 = tmp_kernel_op_22*tmp_kernel_op_24;
                const real_t tmp_kernel_op_26 = -tmp_kernel_op_12*tmp_kernel_op_5 + tmp_kernel_op_17*tmp_kernel_op_3;
                const real_t tmp_kernel_op_27 = tmp_kernel_op_22*tmp_kernel_op_26;
                const real_t tmp_kernel_op_28 = -tmp_kernel_op_23 - tmp_kernel_op_25 - tmp_kernel_op_27;
                const real_t tmp_kernel_op_29 = tmp_kernel_op_1*tmp_kernel_op_19 - tmp_kernel_op_15;
                const real_t tmp_kernel_op_30 = tmp_kernel_op_22*tmp_kernel_op_29;
                const real_t tmp_kernel_op_31 = -tmp_kernel_op_11 + tmp_kernel_op_14*tmp_kernel_op_17;
                const real_t tmp_kernel_op_32 = tmp_kernel_op_22*tmp_kernel_op_31;
                const real_t tmp_kernel_op_33 = tmp_kernel_op_10*tmp_kernel_op_5 - tmp_kernel_op_20;
                const real_t tmp_kernel_op_34 = tmp_kernel_op_22*tmp_kernel_op_33;
                const real_t tmp_kernel_op_35 = -tmp_kernel_op_30 - tmp_kernel_op_32 - tmp_kernel_op_34;
                const real_t tmp_kernel_op_36 = tmp_kernel_op_14*tmp_kernel_op_3 - tmp_kernel_op_19*tmp_kernel_op_7;
                const real_t tmp_kernel_op_37 = tmp_kernel_op_22*tmp_kernel_op_36;
                const real_t tmp_kernel_op_38 = -tmp_kernel_op_10*tmp_kernel_op_3 + tmp_kernel_op_12*tmp_kernel_op_19;
                const real_t tmp_kernel_op_39 = tmp_kernel_op_22*tmp_kernel_op_38;
                const real_t tmp_kernel_op_40 = tmp_kernel_op_10*tmp_kernel_op_7 - tmp_kernel_op_12*tmp_kernel_op_14;
                const real_t tmp_kernel_op_41 = tmp_kernel_op_22*tmp_kernel_op_40;
                const real_t tmp_kernel_op_42 = -tmp_kernel_op_37 - tmp_kernel_op_39 - tmp_kernel_op_41;
                const real_t tmp_kernel_op_43 = 0.16666666666666663*abs(tmp_kernel_op_0*tmp_kernel_op_12*tmp_kernel_op_18 - tmp_kernel_op_0*tmp_kernel_op_3*tmp_kernel_op_9 - tmp_kernel_op_12*tmp_kernel_op_13*tmp_kernel_op_4 + tmp_kernel_op_13*tmp_kernel_op_16*tmp_kernel_op_3 + tmp_kernel_op_16*tmp_kernel_op_18*tmp_kernel_op_6 - tmp_kernel_op_4*tmp_kernel_op_6*tmp_kernel_op_9);
                const real_t tmp_kernel_op_44 = tmp_kernel_op_43*(tmp_kernel_op_27*tmp_kernel_op_28 + tmp_kernel_op_34*tmp_kernel_op_35 + tmp_kernel_op_39*tmp_kernel_op_42);
                const real_t tmp_kernel_op_45 = tmp_kernel_op_43*(tmp_kernel_op_25*tmp_kernel_op_28 + tmp_kernel_op_32*tmp_kernel_op_35 + tmp_kernel_op_41*tmp_kernel_op_42);
                const real_t tmp_kernel_op_46 = tmp_kernel_op_43*(tmp_kernel_op_23*tmp_kernel_op_28 + tmp_kernel_op_30*tmp_kernel_op_35 + tmp_kernel_op_37*tmp_kernel_op_42);
                const real_t tmp_kernel_op_47 = 1.0 / (tmp_kernel_op_21*tmp_kernel_op_21);
                const real_t tmp_kernel_op_48 = tmp_kernel_op_26*tmp_kernel_op_47;
                const real_t tmp_kernel_op_49 = tmp_kernel_op_33*tmp_kernel_op_47;
                const real_t tmp_kernel_op_50 = tmp_kernel_op_38*tmp_kernel_op_47;
                const real_t tmp_kernel_op_51 = tmp_kernel_op_43*(tmp_kernel_op_24*tmp_kernel_op_48 + tmp_kernel_op_31*tmp_kernel_op_49 + tmp_kernel_op_40*tmp_kernel_op_50);
                const real_t tmp_kernel_op_52 = tmp_kernel_op_43*(tmp_kernel_op_29*tmp_kernel_op_49 + tmp_kernel_op_36*tmp_kernel_op_50 + tmp_kernel_op_48*tmp_kernel_op_8);
                const real_t tmp_kernel_op_53 = tmp_kernel_op_43*(tmp_kernel_op_24*tmp_kernel_op_47*tmp_kernel_op_8 + tmp_kernel_op_29*tmp_kernel_op_31*tmp_kernel_op_47 + tmp_kernel_op_36*tmp_kernel_op_40*tmp_kernel_op_47);
                const real_t elMat_0_0 = tmp_kernel_op_43*((tmp_kernel_op_28*tmp_kernel_op_28) + (tmp_kernel_op_35*tmp_kernel_op_35) + (tmp_kernel_op_42*tmp_kernel_op_42));
                const real_t elMat_0_1 = tmp_kernel_op_44;
                const real_t elMat_0_2 = tmp_kernel_op_45;
                const real_t elMat_0_3 = tmp_kernel_op_46;
                const real_t elMat_1_0 = tmp_kernel_op_44;
                const real_t elMat_1_1 = tmp_kernel_op_43*((tmp_kernel_op_26*tmp_kernel_op_26)*tmp_kernel_op_47 + (tmp_kernel_op_33*tmp_kernel_op_33)*tmp_kernel_op_47 + (tmp_kernel_op_38*tmp_kernel_op_38)*tmp_kernel_op_47);
                const real_t elMat_1_2 = tmp_kernel_op_51;
                const real_t elMat_1_3 = tmp_kernel_op_52;
                const real_t elMat_2_0 = tmp_kernel_op_45;
                const real_t elMat_2_1 = tmp_kernel_op_51;
                const real_t elMat_2_2 = tmp_kernel_op_43*((tmp_kernel_op_24*tmp_kernel_op_24)*tmp_kernel_op_47 + (tmp_kernel_op_31*tmp_kernel_op_31)*tmp_kernel_op_47 + (tmp_kernel_op_40*tmp_kernel_op_40)*tmp_kernel_op_47);
                const real_t elMat_2_3 = tmp_kernel_op_53;
                const real_t elMat_3_0 = tmp_kernel_op_46;
                const real_t elMat_3_1 = tmp_kernel_op_52;
                const real_t elMat_3_2 = tmp_kernel_op_53;
                const real_t elMat_3_3 = tmp_kernel_op_43*((tmp_kernel_op_29*tmp_kernel_op_29)*tmp_kernel_op_47 + (tmp_kernel_op_36*tmp_kernel_op_36)*tmp_kernel_op_47 + tmp_kernel_op_47*(tmp_kernel_op_8*tmp_kernel_op_8));
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
                      real_t _data_float_loop_ctr_array_dim_2[4];
                      _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
                  
                      const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                  
                      std::vector< uint_t > _data_rowIdx( 4 );
                      std::vector< uint_t > _data_colIdx( 4 );
                      std::vector< real_t > _data_mat( 16 );
                  
                      _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                  
                      /* Apply basis transformation */
                  
                  
                  
                      _data_mat[0] = ((real_t)(elMat_0_0));
                      _data_mat[1] = ((real_t)(elMat_0_1));
                      _data_mat[2] = ((real_t)(elMat_0_2));
                      _data_mat[3] = ((real_t)(elMat_0_3));
                      _data_mat[4] = ((real_t)(elMat_1_0));
                      _data_mat[5] = ((real_t)(elMat_1_1));
                      _data_mat[6] = ((real_t)(elMat_1_2));
                      _data_mat[7] = ((real_t)(elMat_1_3));
                      _data_mat[8] = ((real_t)(elMat_2_0));
                      _data_mat[9] = ((real_t)(elMat_2_1));
                      _data_mat[10] = ((real_t)(elMat_2_2));
                      _data_mat[11] = ((real_t)(elMat_2_3));
                      _data_mat[12] = ((real_t)(elMat_3_0));
                      _data_mat[13] = ((real_t)(elMat_3_1));
                      _data_mat[14] = ((real_t)(elMat_3_2));
                      _data_mat[15] = ((real_t)(elMat_3_3));
                  
                  
                      mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                   }
                }
                const real_t tmp_moved_constant_410 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_411 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_412 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_413 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_414 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_415 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_416 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_417 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_418 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_419 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_420 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_421 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_422 = tmp_moved_constant_410 - tmp_moved_constant_411;
                const real_t tmp_moved_constant_423 = -tmp_moved_constant_422;
                const real_t tmp_moved_constant_424 = -tmp_moved_constant_420;
                const real_t tmp_moved_constant_425 = tmp_moved_constant_412 + tmp_moved_constant_424;
                const real_t tmp_moved_constant_426 = tmp_moved_constant_410 - tmp_moved_constant_414;
                const real_t tmp_moved_constant_427 = -tmp_moved_constant_426;
                const real_t tmp_moved_constant_428 = tmp_moved_constant_420 - tmp_moved_constant_421;
                const real_t tmp_moved_constant_429 = -tmp_moved_constant_428;
                const real_t tmp_moved_constant_430 = -tmp_moved_constant_423*tmp_moved_constant_425 + tmp_moved_constant_427*tmp_moved_constant_429;
                const real_t tmp_moved_constant_431 = tmp_moved_constant_416 - tmp_moved_constant_419;
                const real_t tmp_moved_constant_432 = -tmp_moved_constant_431;
                const real_t tmp_moved_constant_433 = tmp_moved_constant_423*tmp_moved_constant_432;
                const real_t tmp_moved_constant_434 = tmp_moved_constant_413 + tmp_moved_constant_424;
                const real_t tmp_moved_constant_435 = tmp_moved_constant_416 - tmp_moved_constant_417;
                const real_t tmp_moved_constant_436 = -tmp_moved_constant_435;
                const real_t tmp_moved_constant_437 = tmp_moved_constant_427*tmp_moved_constant_436;
                const real_t tmp_moved_constant_438 = tmp_moved_constant_410 - tmp_moved_constant_415;
                const real_t tmp_moved_constant_439 = -tmp_moved_constant_438;
                const real_t tmp_moved_constant_440 = tmp_moved_constant_416 - tmp_moved_constant_418;
                const real_t tmp_moved_constant_441 = -tmp_moved_constant_440;
                const real_t tmp_moved_constant_442 = tmp_moved_constant_439*tmp_moved_constant_441;
                const real_t tmp_moved_constant_443 = tmp_moved_constant_423*tmp_moved_constant_434*tmp_moved_constant_441 - tmp_moved_constant_425*tmp_moved_constant_433 + tmp_moved_constant_425*tmp_moved_constant_436*tmp_moved_constant_439 + tmp_moved_constant_427*tmp_moved_constant_429*tmp_moved_constant_432 - tmp_moved_constant_429*tmp_moved_constant_442 - tmp_moved_constant_434*tmp_moved_constant_437;
                const real_t tmp_moved_constant_444 = 1.0 / (tmp_moved_constant_443);
                const real_t tmp_moved_constant_445 = tmp_moved_constant_430*tmp_moved_constant_444;
                const real_t tmp_moved_constant_446 = tmp_moved_constant_423*tmp_moved_constant_434 - tmp_moved_constant_429*tmp_moved_constant_439;
                const real_t tmp_moved_constant_447 = tmp_moved_constant_444*tmp_moved_constant_446;
                const real_t tmp_moved_constant_448 = tmp_moved_constant_425*tmp_moved_constant_439 - tmp_moved_constant_427*tmp_moved_constant_434;
                const real_t tmp_moved_constant_449 = tmp_moved_constant_444*tmp_moved_constant_448;
                const real_t tmp_moved_constant_450 = -tmp_moved_constant_445 - tmp_moved_constant_447 - tmp_moved_constant_449;
                const real_t tmp_moved_constant_451 = tmp_moved_constant_423*tmp_moved_constant_441 - tmp_moved_constant_437;
                const real_t tmp_moved_constant_452 = tmp_moved_constant_444*tmp_moved_constant_451;
                const real_t tmp_moved_constant_453 = -tmp_moved_constant_433 + tmp_moved_constant_436*tmp_moved_constant_439;
                const real_t tmp_moved_constant_454 = tmp_moved_constant_444*tmp_moved_constant_453;
                const real_t tmp_moved_constant_455 = tmp_moved_constant_427*tmp_moved_constant_432 - tmp_moved_constant_442;
                const real_t tmp_moved_constant_456 = tmp_moved_constant_444*tmp_moved_constant_455;
                const real_t tmp_moved_constant_457 = -tmp_moved_constant_452 - tmp_moved_constant_454 - tmp_moved_constant_456;
                const real_t tmp_moved_constant_458 = tmp_moved_constant_425*tmp_moved_constant_436 - tmp_moved_constant_429*tmp_moved_constant_441;
                const real_t tmp_moved_constant_459 = tmp_moved_constant_444*tmp_moved_constant_458;
                const real_t tmp_moved_constant_460 = -tmp_moved_constant_425*tmp_moved_constant_432 + tmp_moved_constant_434*tmp_moved_constant_441;
                const real_t tmp_moved_constant_461 = tmp_moved_constant_444*tmp_moved_constant_460;
                const real_t tmp_moved_constant_462 = tmp_moved_constant_429*tmp_moved_constant_432 - tmp_moved_constant_434*tmp_moved_constant_436;
                const real_t tmp_moved_constant_463 = tmp_moved_constant_444*tmp_moved_constant_462;
                const real_t tmp_moved_constant_464 = -tmp_moved_constant_459 - tmp_moved_constant_461 - tmp_moved_constant_463;
                const real_t tmp_moved_constant_465 = 0.16666666666666663*abs(tmp_moved_constant_422*tmp_moved_constant_425*tmp_moved_constant_431 - tmp_moved_constant_422*tmp_moved_constant_434*tmp_moved_constant_440 - tmp_moved_constant_425*tmp_moved_constant_435*tmp_moved_constant_438 + tmp_moved_constant_426*tmp_moved_constant_428*tmp_moved_constant_431 + tmp_moved_constant_426*tmp_moved_constant_434*tmp_moved_constant_435 - tmp_moved_constant_428*tmp_moved_constant_438*tmp_moved_constant_440);
                const real_t tmp_moved_constant_466 = tmp_moved_constant_465*(tmp_moved_constant_449*tmp_moved_constant_450 + tmp_moved_constant_456*tmp_moved_constant_457 + tmp_moved_constant_461*tmp_moved_constant_464);
                const real_t tmp_moved_constant_467 = tmp_moved_constant_465*(tmp_moved_constant_447*tmp_moved_constant_450 + tmp_moved_constant_454*tmp_moved_constant_457 + tmp_moved_constant_463*tmp_moved_constant_464);
                const real_t tmp_moved_constant_468 = tmp_moved_constant_465*(tmp_moved_constant_445*tmp_moved_constant_450 + tmp_moved_constant_452*tmp_moved_constant_457 + tmp_moved_constant_459*tmp_moved_constant_464);
                const real_t tmp_moved_constant_469 = 1.0 / (tmp_moved_constant_443*tmp_moved_constant_443);
                const real_t tmp_moved_constant_470 = tmp_moved_constant_448*tmp_moved_constant_469;
                const real_t tmp_moved_constant_471 = tmp_moved_constant_455*tmp_moved_constant_469;
                const real_t tmp_moved_constant_472 = tmp_moved_constant_460*tmp_moved_constant_469;
                const real_t tmp_moved_constant_473 = tmp_moved_constant_465*(tmp_moved_constant_446*tmp_moved_constant_470 + tmp_moved_constant_453*tmp_moved_constant_471 + tmp_moved_constant_462*tmp_moved_constant_472);
                const real_t tmp_moved_constant_474 = tmp_moved_constant_465*(tmp_moved_constant_430*tmp_moved_constant_470 + tmp_moved_constant_451*tmp_moved_constant_471 + tmp_moved_constant_458*tmp_moved_constant_472);
                const real_t tmp_moved_constant_475 = tmp_moved_constant_465*(tmp_moved_constant_430*tmp_moved_constant_446*tmp_moved_constant_469 + tmp_moved_constant_451*tmp_moved_constant_453*tmp_moved_constant_469 + tmp_moved_constant_458*tmp_moved_constant_462*tmp_moved_constant_469);
                const real_t tmp_moved_constant_476 = tmp_moved_constant_465*((tmp_moved_constant_450*tmp_moved_constant_450) + (tmp_moved_constant_457*tmp_moved_constant_457) + (tmp_moved_constant_464*tmp_moved_constant_464));
                const real_t tmp_moved_constant_477 = tmp_moved_constant_466;
                const real_t tmp_moved_constant_478 = tmp_moved_constant_467;
                const real_t tmp_moved_constant_479 = tmp_moved_constant_468;
                const real_t tmp_moved_constant_480 = tmp_moved_constant_466;
                const real_t tmp_moved_constant_481 = tmp_moved_constant_465*((tmp_moved_constant_448*tmp_moved_constant_448)*tmp_moved_constant_469 + (tmp_moved_constant_455*tmp_moved_constant_455)*tmp_moved_constant_469 + (tmp_moved_constant_460*tmp_moved_constant_460)*tmp_moved_constant_469);
                const real_t tmp_moved_constant_482 = tmp_moved_constant_473;
                const real_t tmp_moved_constant_483 = tmp_moved_constant_474;
                const real_t tmp_moved_constant_484 = tmp_moved_constant_467;
                const real_t tmp_moved_constant_485 = tmp_moved_constant_473;
                const real_t tmp_moved_constant_486 = tmp_moved_constant_465*((tmp_moved_constant_446*tmp_moved_constant_446)*tmp_moved_constant_469 + (tmp_moved_constant_453*tmp_moved_constant_453)*tmp_moved_constant_469 + (tmp_moved_constant_462*tmp_moved_constant_462)*tmp_moved_constant_469);
                const real_t tmp_moved_constant_487 = tmp_moved_constant_475;
                const real_t tmp_moved_constant_488 = tmp_moved_constant_468;
                const real_t tmp_moved_constant_489 = tmp_moved_constant_474;
                const real_t tmp_moved_constant_490 = tmp_moved_constant_475;
                const real_t tmp_moved_constant_491 = tmp_moved_constant_465*((tmp_moved_constant_430*tmp_moved_constant_430)*tmp_moved_constant_469 + (tmp_moved_constant_451*tmp_moved_constant_451)*tmp_moved_constant_469 + (tmp_moved_constant_458*tmp_moved_constant_458)*tmp_moved_constant_469);
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
                      real_t _data_float_loop_ctr_array_dim_2[4];
                      _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
                  
                      const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                  
                      std::vector< uint_t > _data_rowIdx( 4 );
                      std::vector< uint_t > _data_colIdx( 4 );
                      std::vector< real_t > _data_mat( 16 );
                  
                      _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                  
                      /* Apply basis transformation */
                  
                  
                  
                      _data_mat[0] = ((real_t)(tmp_moved_constant_476));
                      _data_mat[1] = ((real_t)(tmp_moved_constant_477));
                      _data_mat[2] = ((real_t)(tmp_moved_constant_478));
                      _data_mat[3] = ((real_t)(tmp_moved_constant_479));
                      _data_mat[4] = ((real_t)(tmp_moved_constant_480));
                      _data_mat[5] = ((real_t)(tmp_moved_constant_481));
                      _data_mat[6] = ((real_t)(tmp_moved_constant_482));
                      _data_mat[7] = ((real_t)(tmp_moved_constant_483));
                      _data_mat[8] = ((real_t)(tmp_moved_constant_484));
                      _data_mat[9] = ((real_t)(tmp_moved_constant_485));
                      _data_mat[10] = ((real_t)(tmp_moved_constant_486));
                      _data_mat[11] = ((real_t)(tmp_moved_constant_487));
                      _data_mat[12] = ((real_t)(tmp_moved_constant_488));
                      _data_mat[13] = ((real_t)(tmp_moved_constant_489));
                      _data_mat[14] = ((real_t)(tmp_moved_constant_490));
                      _data_mat[15] = ((real_t)(tmp_moved_constant_491));
                  
                  
                      mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                   }
                }
                const real_t tmp_moved_constant_492 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_493 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_494 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_495 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_496 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_497 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_498 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_499 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_500 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_501 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_502 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_503 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_504 = tmp_moved_constant_492 - tmp_moved_constant_493;
                const real_t tmp_moved_constant_505 = -tmp_moved_constant_504;
                const real_t tmp_moved_constant_506 = -tmp_moved_constant_502;
                const real_t tmp_moved_constant_507 = tmp_moved_constant_494 + tmp_moved_constant_506;
                const real_t tmp_moved_constant_508 = tmp_moved_constant_492 - tmp_moved_constant_496;
                const real_t tmp_moved_constant_509 = -tmp_moved_constant_508;
                const real_t tmp_moved_constant_510 = tmp_moved_constant_502 - tmp_moved_constant_503;
                const real_t tmp_moved_constant_511 = -tmp_moved_constant_510;
                const real_t tmp_moved_constant_512 = -tmp_moved_constant_505*tmp_moved_constant_507 + tmp_moved_constant_509*tmp_moved_constant_511;
                const real_t tmp_moved_constant_513 = tmp_moved_constant_498 - tmp_moved_constant_501;
                const real_t tmp_moved_constant_514 = -tmp_moved_constant_513;
                const real_t tmp_moved_constant_515 = tmp_moved_constant_505*tmp_moved_constant_514;
                const real_t tmp_moved_constant_516 = tmp_moved_constant_495 + tmp_moved_constant_506;
                const real_t tmp_moved_constant_517 = tmp_moved_constant_498 - tmp_moved_constant_499;
                const real_t tmp_moved_constant_518 = -tmp_moved_constant_517;
                const real_t tmp_moved_constant_519 = tmp_moved_constant_509*tmp_moved_constant_518;
                const real_t tmp_moved_constant_520 = tmp_moved_constant_492 - tmp_moved_constant_497;
                const real_t tmp_moved_constant_521 = -tmp_moved_constant_520;
                const real_t tmp_moved_constant_522 = tmp_moved_constant_498 - tmp_moved_constant_500;
                const real_t tmp_moved_constant_523 = -tmp_moved_constant_522;
                const real_t tmp_moved_constant_524 = tmp_moved_constant_521*tmp_moved_constant_523;
                const real_t tmp_moved_constant_525 = tmp_moved_constant_505*tmp_moved_constant_516*tmp_moved_constant_523 - tmp_moved_constant_507*tmp_moved_constant_515 + tmp_moved_constant_507*tmp_moved_constant_518*tmp_moved_constant_521 + tmp_moved_constant_509*tmp_moved_constant_511*tmp_moved_constant_514 - tmp_moved_constant_511*tmp_moved_constant_524 - tmp_moved_constant_516*tmp_moved_constant_519;
                const real_t tmp_moved_constant_526 = 1.0 / (tmp_moved_constant_525);
                const real_t tmp_moved_constant_527 = tmp_moved_constant_512*tmp_moved_constant_526;
                const real_t tmp_moved_constant_528 = tmp_moved_constant_505*tmp_moved_constant_516 - tmp_moved_constant_511*tmp_moved_constant_521;
                const real_t tmp_moved_constant_529 = tmp_moved_constant_526*tmp_moved_constant_528;
                const real_t tmp_moved_constant_530 = tmp_moved_constant_507*tmp_moved_constant_521 - tmp_moved_constant_509*tmp_moved_constant_516;
                const real_t tmp_moved_constant_531 = tmp_moved_constant_526*tmp_moved_constant_530;
                const real_t tmp_moved_constant_532 = -tmp_moved_constant_527 - tmp_moved_constant_529 - tmp_moved_constant_531;
                const real_t tmp_moved_constant_533 = tmp_moved_constant_505*tmp_moved_constant_523 - tmp_moved_constant_519;
                const real_t tmp_moved_constant_534 = tmp_moved_constant_526*tmp_moved_constant_533;
                const real_t tmp_moved_constant_535 = -tmp_moved_constant_515 + tmp_moved_constant_518*tmp_moved_constant_521;
                const real_t tmp_moved_constant_536 = tmp_moved_constant_526*tmp_moved_constant_535;
                const real_t tmp_moved_constant_537 = tmp_moved_constant_509*tmp_moved_constant_514 - tmp_moved_constant_524;
                const real_t tmp_moved_constant_538 = tmp_moved_constant_526*tmp_moved_constant_537;
                const real_t tmp_moved_constant_539 = -tmp_moved_constant_534 - tmp_moved_constant_536 - tmp_moved_constant_538;
                const real_t tmp_moved_constant_540 = tmp_moved_constant_507*tmp_moved_constant_518 - tmp_moved_constant_511*tmp_moved_constant_523;
                const real_t tmp_moved_constant_541 = tmp_moved_constant_526*tmp_moved_constant_540;
                const real_t tmp_moved_constant_542 = -tmp_moved_constant_507*tmp_moved_constant_514 + tmp_moved_constant_516*tmp_moved_constant_523;
                const real_t tmp_moved_constant_543 = tmp_moved_constant_526*tmp_moved_constant_542;
                const real_t tmp_moved_constant_544 = tmp_moved_constant_511*tmp_moved_constant_514 - tmp_moved_constant_516*tmp_moved_constant_518;
                const real_t tmp_moved_constant_545 = tmp_moved_constant_526*tmp_moved_constant_544;
                const real_t tmp_moved_constant_546 = -tmp_moved_constant_541 - tmp_moved_constant_543 - tmp_moved_constant_545;
                const real_t tmp_moved_constant_547 = 0.16666666666666663*abs(tmp_moved_constant_504*tmp_moved_constant_507*tmp_moved_constant_513 - tmp_moved_constant_504*tmp_moved_constant_516*tmp_moved_constant_522 - tmp_moved_constant_507*tmp_moved_constant_517*tmp_moved_constant_520 + tmp_moved_constant_508*tmp_moved_constant_510*tmp_moved_constant_513 + tmp_moved_constant_508*tmp_moved_constant_516*tmp_moved_constant_517 - tmp_moved_constant_510*tmp_moved_constant_520*tmp_moved_constant_522);
                const real_t tmp_moved_constant_548 = tmp_moved_constant_547*(tmp_moved_constant_531*tmp_moved_constant_532 + tmp_moved_constant_538*tmp_moved_constant_539 + tmp_moved_constant_543*tmp_moved_constant_546);
                const real_t tmp_moved_constant_549 = tmp_moved_constant_547*(tmp_moved_constant_529*tmp_moved_constant_532 + tmp_moved_constant_536*tmp_moved_constant_539 + tmp_moved_constant_545*tmp_moved_constant_546);
                const real_t tmp_moved_constant_550 = tmp_moved_constant_547*(tmp_moved_constant_527*tmp_moved_constant_532 + tmp_moved_constant_534*tmp_moved_constant_539 + tmp_moved_constant_541*tmp_moved_constant_546);
                const real_t tmp_moved_constant_551 = 1.0 / (tmp_moved_constant_525*tmp_moved_constant_525);
                const real_t tmp_moved_constant_552 = tmp_moved_constant_530*tmp_moved_constant_551;
                const real_t tmp_moved_constant_553 = tmp_moved_constant_537*tmp_moved_constant_551;
                const real_t tmp_moved_constant_554 = tmp_moved_constant_542*tmp_moved_constant_551;
                const real_t tmp_moved_constant_555 = tmp_moved_constant_547*(tmp_moved_constant_528*tmp_moved_constant_552 + tmp_moved_constant_535*tmp_moved_constant_553 + tmp_moved_constant_544*tmp_moved_constant_554);
                const real_t tmp_moved_constant_556 = tmp_moved_constant_547*(tmp_moved_constant_512*tmp_moved_constant_552 + tmp_moved_constant_533*tmp_moved_constant_553 + tmp_moved_constant_540*tmp_moved_constant_554);
                const real_t tmp_moved_constant_557 = tmp_moved_constant_547*(tmp_moved_constant_512*tmp_moved_constant_528*tmp_moved_constant_551 + tmp_moved_constant_533*tmp_moved_constant_535*tmp_moved_constant_551 + tmp_moved_constant_540*tmp_moved_constant_544*tmp_moved_constant_551);
                const real_t tmp_moved_constant_558 = tmp_moved_constant_547*((tmp_moved_constant_532*tmp_moved_constant_532) + (tmp_moved_constant_539*tmp_moved_constant_539) + (tmp_moved_constant_546*tmp_moved_constant_546));
                const real_t tmp_moved_constant_559 = tmp_moved_constant_548;
                const real_t tmp_moved_constant_560 = tmp_moved_constant_549;
                const real_t tmp_moved_constant_561 = tmp_moved_constant_550;
                const real_t tmp_moved_constant_562 = tmp_moved_constant_548;
                const real_t tmp_moved_constant_563 = tmp_moved_constant_547*((tmp_moved_constant_530*tmp_moved_constant_530)*tmp_moved_constant_551 + (tmp_moved_constant_537*tmp_moved_constant_537)*tmp_moved_constant_551 + (tmp_moved_constant_542*tmp_moved_constant_542)*tmp_moved_constant_551);
                const real_t tmp_moved_constant_564 = tmp_moved_constant_555;
                const real_t tmp_moved_constant_565 = tmp_moved_constant_556;
                const real_t tmp_moved_constant_566 = tmp_moved_constant_549;
                const real_t tmp_moved_constant_567 = tmp_moved_constant_555;
                const real_t tmp_moved_constant_568 = tmp_moved_constant_547*((tmp_moved_constant_528*tmp_moved_constant_528)*tmp_moved_constant_551 + (tmp_moved_constant_535*tmp_moved_constant_535)*tmp_moved_constant_551 + (tmp_moved_constant_544*tmp_moved_constant_544)*tmp_moved_constant_551);
                const real_t tmp_moved_constant_569 = tmp_moved_constant_557;
                const real_t tmp_moved_constant_570 = tmp_moved_constant_550;
                const real_t tmp_moved_constant_571 = tmp_moved_constant_556;
                const real_t tmp_moved_constant_572 = tmp_moved_constant_557;
                const real_t tmp_moved_constant_573 = tmp_moved_constant_547*((tmp_moved_constant_512*tmp_moved_constant_512)*tmp_moved_constant_551 + (tmp_moved_constant_533*tmp_moved_constant_533)*tmp_moved_constant_551 + (tmp_moved_constant_540*tmp_moved_constant_540)*tmp_moved_constant_551);
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
                      real_t _data_float_loop_ctr_array_dim_2[4];
                      _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
                  
                      const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                  
                      std::vector< uint_t > _data_rowIdx( 4 );
                      std::vector< uint_t > _data_colIdx( 4 );
                      std::vector< real_t > _data_mat( 16 );
                  
                      _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                  
                      /* Apply basis transformation */
                  
                  
                  
                      _data_mat[0] = ((real_t)(tmp_moved_constant_558));
                      _data_mat[1] = ((real_t)(tmp_moved_constant_559));
                      _data_mat[2] = ((real_t)(tmp_moved_constant_560));
                      _data_mat[3] = ((real_t)(tmp_moved_constant_561));
                      _data_mat[4] = ((real_t)(tmp_moved_constant_562));
                      _data_mat[5] = ((real_t)(tmp_moved_constant_563));
                      _data_mat[6] = ((real_t)(tmp_moved_constant_564));
                      _data_mat[7] = ((real_t)(tmp_moved_constant_565));
                      _data_mat[8] = ((real_t)(tmp_moved_constant_566));
                      _data_mat[9] = ((real_t)(tmp_moved_constant_567));
                      _data_mat[10] = ((real_t)(tmp_moved_constant_568));
                      _data_mat[11] = ((real_t)(tmp_moved_constant_569));
                      _data_mat[12] = ((real_t)(tmp_moved_constant_570));
                      _data_mat[13] = ((real_t)(tmp_moved_constant_571));
                      _data_mat[14] = ((real_t)(tmp_moved_constant_572));
                      _data_mat[15] = ((real_t)(tmp_moved_constant_573));
                  
                  
                      mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                   }
                }
                const real_t tmp_moved_constant_574 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_575 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_576 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_577 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_578 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_579 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_580 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_581 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_582 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_583 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_584 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_585 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_586 = tmp_moved_constant_574 - tmp_moved_constant_575;
                const real_t tmp_moved_constant_587 = -tmp_moved_constant_586;
                const real_t tmp_moved_constant_588 = -tmp_moved_constant_584;
                const real_t tmp_moved_constant_589 = tmp_moved_constant_576 + tmp_moved_constant_588;
                const real_t tmp_moved_constant_590 = tmp_moved_constant_574 - tmp_moved_constant_578;
                const real_t tmp_moved_constant_591 = -tmp_moved_constant_590;
                const real_t tmp_moved_constant_592 = tmp_moved_constant_584 - tmp_moved_constant_585;
                const real_t tmp_moved_constant_593 = -tmp_moved_constant_592;
                const real_t tmp_moved_constant_594 = -tmp_moved_constant_587*tmp_moved_constant_589 + tmp_moved_constant_591*tmp_moved_constant_593;
                const real_t tmp_moved_constant_595 = tmp_moved_constant_580 - tmp_moved_constant_583;
                const real_t tmp_moved_constant_596 = -tmp_moved_constant_595;
                const real_t tmp_moved_constant_597 = tmp_moved_constant_587*tmp_moved_constant_596;
                const real_t tmp_moved_constant_598 = tmp_moved_constant_577 + tmp_moved_constant_588;
                const real_t tmp_moved_constant_599 = tmp_moved_constant_580 - tmp_moved_constant_581;
                const real_t tmp_moved_constant_600 = -tmp_moved_constant_599;
                const real_t tmp_moved_constant_601 = tmp_moved_constant_591*tmp_moved_constant_600;
                const real_t tmp_moved_constant_602 = tmp_moved_constant_574 - tmp_moved_constant_579;
                const real_t tmp_moved_constant_603 = -tmp_moved_constant_602;
                const real_t tmp_moved_constant_604 = tmp_moved_constant_580 - tmp_moved_constant_582;
                const real_t tmp_moved_constant_605 = -tmp_moved_constant_604;
                const real_t tmp_moved_constant_606 = tmp_moved_constant_603*tmp_moved_constant_605;
                const real_t tmp_moved_constant_607 = tmp_moved_constant_587*tmp_moved_constant_598*tmp_moved_constant_605 - tmp_moved_constant_589*tmp_moved_constant_597 + tmp_moved_constant_589*tmp_moved_constant_600*tmp_moved_constant_603 + tmp_moved_constant_591*tmp_moved_constant_593*tmp_moved_constant_596 - tmp_moved_constant_593*tmp_moved_constant_606 - tmp_moved_constant_598*tmp_moved_constant_601;
                const real_t tmp_moved_constant_608 = 1.0 / (tmp_moved_constant_607);
                const real_t tmp_moved_constant_609 = tmp_moved_constant_594*tmp_moved_constant_608;
                const real_t tmp_moved_constant_610 = tmp_moved_constant_587*tmp_moved_constant_598 - tmp_moved_constant_593*tmp_moved_constant_603;
                const real_t tmp_moved_constant_611 = tmp_moved_constant_608*tmp_moved_constant_610;
                const real_t tmp_moved_constant_612 = tmp_moved_constant_589*tmp_moved_constant_603 - tmp_moved_constant_591*tmp_moved_constant_598;
                const real_t tmp_moved_constant_613 = tmp_moved_constant_608*tmp_moved_constant_612;
                const real_t tmp_moved_constant_614 = -tmp_moved_constant_609 - tmp_moved_constant_611 - tmp_moved_constant_613;
                const real_t tmp_moved_constant_615 = tmp_moved_constant_587*tmp_moved_constant_605 - tmp_moved_constant_601;
                const real_t tmp_moved_constant_616 = tmp_moved_constant_608*tmp_moved_constant_615;
                const real_t tmp_moved_constant_617 = -tmp_moved_constant_597 + tmp_moved_constant_600*tmp_moved_constant_603;
                const real_t tmp_moved_constant_618 = tmp_moved_constant_608*tmp_moved_constant_617;
                const real_t tmp_moved_constant_619 = tmp_moved_constant_591*tmp_moved_constant_596 - tmp_moved_constant_606;
                const real_t tmp_moved_constant_620 = tmp_moved_constant_608*tmp_moved_constant_619;
                const real_t tmp_moved_constant_621 = -tmp_moved_constant_616 - tmp_moved_constant_618 - tmp_moved_constant_620;
                const real_t tmp_moved_constant_622 = tmp_moved_constant_589*tmp_moved_constant_600 - tmp_moved_constant_593*tmp_moved_constant_605;
                const real_t tmp_moved_constant_623 = tmp_moved_constant_608*tmp_moved_constant_622;
                const real_t tmp_moved_constant_624 = -tmp_moved_constant_589*tmp_moved_constant_596 + tmp_moved_constant_598*tmp_moved_constant_605;
                const real_t tmp_moved_constant_625 = tmp_moved_constant_608*tmp_moved_constant_624;
                const real_t tmp_moved_constant_626 = tmp_moved_constant_593*tmp_moved_constant_596 - tmp_moved_constant_598*tmp_moved_constant_600;
                const real_t tmp_moved_constant_627 = tmp_moved_constant_608*tmp_moved_constant_626;
                const real_t tmp_moved_constant_628 = -tmp_moved_constant_623 - tmp_moved_constant_625 - tmp_moved_constant_627;
                const real_t tmp_moved_constant_629 = 0.16666666666666663*abs(tmp_moved_constant_586*tmp_moved_constant_589*tmp_moved_constant_595 - tmp_moved_constant_586*tmp_moved_constant_598*tmp_moved_constant_604 - tmp_moved_constant_589*tmp_moved_constant_599*tmp_moved_constant_602 + tmp_moved_constant_590*tmp_moved_constant_592*tmp_moved_constant_595 + tmp_moved_constant_590*tmp_moved_constant_598*tmp_moved_constant_599 - tmp_moved_constant_592*tmp_moved_constant_602*tmp_moved_constant_604);
                const real_t tmp_moved_constant_630 = tmp_moved_constant_629*(tmp_moved_constant_613*tmp_moved_constant_614 + tmp_moved_constant_620*tmp_moved_constant_621 + tmp_moved_constant_625*tmp_moved_constant_628);
                const real_t tmp_moved_constant_631 = tmp_moved_constant_629*(tmp_moved_constant_611*tmp_moved_constant_614 + tmp_moved_constant_618*tmp_moved_constant_621 + tmp_moved_constant_627*tmp_moved_constant_628);
                const real_t tmp_moved_constant_632 = tmp_moved_constant_629*(tmp_moved_constant_609*tmp_moved_constant_614 + tmp_moved_constant_616*tmp_moved_constant_621 + tmp_moved_constant_623*tmp_moved_constant_628);
                const real_t tmp_moved_constant_633 = 1.0 / (tmp_moved_constant_607*tmp_moved_constant_607);
                const real_t tmp_moved_constant_634 = tmp_moved_constant_612*tmp_moved_constant_633;
                const real_t tmp_moved_constant_635 = tmp_moved_constant_619*tmp_moved_constant_633;
                const real_t tmp_moved_constant_636 = tmp_moved_constant_624*tmp_moved_constant_633;
                const real_t tmp_moved_constant_637 = tmp_moved_constant_629*(tmp_moved_constant_610*tmp_moved_constant_634 + tmp_moved_constant_617*tmp_moved_constant_635 + tmp_moved_constant_626*tmp_moved_constant_636);
                const real_t tmp_moved_constant_638 = tmp_moved_constant_629*(tmp_moved_constant_594*tmp_moved_constant_634 + tmp_moved_constant_615*tmp_moved_constant_635 + tmp_moved_constant_622*tmp_moved_constant_636);
                const real_t tmp_moved_constant_639 = tmp_moved_constant_629*(tmp_moved_constant_594*tmp_moved_constant_610*tmp_moved_constant_633 + tmp_moved_constant_615*tmp_moved_constant_617*tmp_moved_constant_633 + tmp_moved_constant_622*tmp_moved_constant_626*tmp_moved_constant_633);
                const real_t tmp_moved_constant_640 = tmp_moved_constant_629*((tmp_moved_constant_614*tmp_moved_constant_614) + (tmp_moved_constant_621*tmp_moved_constant_621) + (tmp_moved_constant_628*tmp_moved_constant_628));
                const real_t tmp_moved_constant_641 = tmp_moved_constant_630;
                const real_t tmp_moved_constant_642 = tmp_moved_constant_631;
                const real_t tmp_moved_constant_643 = tmp_moved_constant_632;
                const real_t tmp_moved_constant_644 = tmp_moved_constant_630;
                const real_t tmp_moved_constant_645 = tmp_moved_constant_629*((tmp_moved_constant_612*tmp_moved_constant_612)*tmp_moved_constant_633 + (tmp_moved_constant_619*tmp_moved_constant_619)*tmp_moved_constant_633 + (tmp_moved_constant_624*tmp_moved_constant_624)*tmp_moved_constant_633);
                const real_t tmp_moved_constant_646 = tmp_moved_constant_637;
                const real_t tmp_moved_constant_647 = tmp_moved_constant_638;
                const real_t tmp_moved_constant_648 = tmp_moved_constant_631;
                const real_t tmp_moved_constant_649 = tmp_moved_constant_637;
                const real_t tmp_moved_constant_650 = tmp_moved_constant_629*((tmp_moved_constant_610*tmp_moved_constant_610)*tmp_moved_constant_633 + (tmp_moved_constant_617*tmp_moved_constant_617)*tmp_moved_constant_633 + (tmp_moved_constant_626*tmp_moved_constant_626)*tmp_moved_constant_633);
                const real_t tmp_moved_constant_651 = tmp_moved_constant_639;
                const real_t tmp_moved_constant_652 = tmp_moved_constant_632;
                const real_t tmp_moved_constant_653 = tmp_moved_constant_638;
                const real_t tmp_moved_constant_654 = tmp_moved_constant_639;
                const real_t tmp_moved_constant_655 = tmp_moved_constant_629*((tmp_moved_constant_594*tmp_moved_constant_594)*tmp_moved_constant_633 + (tmp_moved_constant_615*tmp_moved_constant_615)*tmp_moved_constant_633 + (tmp_moved_constant_622*tmp_moved_constant_622)*tmp_moved_constant_633);
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
                      real_t _data_float_loop_ctr_array_dim_2[4];
                      _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
                  
                      const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                  
                      std::vector< uint_t > _data_rowIdx( 4 );
                      std::vector< uint_t > _data_colIdx( 4 );
                      std::vector< real_t > _data_mat( 16 );
                  
                      _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                  
                      /* Apply basis transformation */
                  
                  
                  
                      _data_mat[0] = ((real_t)(tmp_moved_constant_640));
                      _data_mat[1] = ((real_t)(tmp_moved_constant_641));
                      _data_mat[2] = ((real_t)(tmp_moved_constant_642));
                      _data_mat[3] = ((real_t)(tmp_moved_constant_643));
                      _data_mat[4] = ((real_t)(tmp_moved_constant_644));
                      _data_mat[5] = ((real_t)(tmp_moved_constant_645));
                      _data_mat[6] = ((real_t)(tmp_moved_constant_646));
                      _data_mat[7] = ((real_t)(tmp_moved_constant_647));
                      _data_mat[8] = ((real_t)(tmp_moved_constant_648));
                      _data_mat[9] = ((real_t)(tmp_moved_constant_649));
                      _data_mat[10] = ((real_t)(tmp_moved_constant_650));
                      _data_mat[11] = ((real_t)(tmp_moved_constant_651));
                      _data_mat[12] = ((real_t)(tmp_moved_constant_652));
                      _data_mat[13] = ((real_t)(tmp_moved_constant_653));
                      _data_mat[14] = ((real_t)(tmp_moved_constant_654));
                      _data_mat[15] = ((real_t)(tmp_moved_constant_655));
                  
                  
                      mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                   }
                }
                const real_t tmp_moved_constant_656 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_657 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_658 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_659 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_660 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_661 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_662 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_663 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_664 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_665 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_666 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t tmp_moved_constant_667 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t tmp_moved_constant_668 = tmp_moved_constant_656 - tmp_moved_constant_657;
                const real_t tmp_moved_constant_669 = -tmp_moved_constant_668;
                const real_t tmp_moved_constant_670 = -tmp_moved_constant_666;
                const real_t tmp_moved_constant_671 = tmp_moved_constant_658 + tmp_moved_constant_670;
                const real_t tmp_moved_constant_672 = tmp_moved_constant_656 - tmp_moved_constant_660;
                const real_t tmp_moved_constant_673 = -tmp_moved_constant_672;
                const real_t tmp_moved_constant_674 = tmp_moved_constant_666 - tmp_moved_constant_667;
                const real_t tmp_moved_constant_675 = -tmp_moved_constant_674;
                const real_t tmp_moved_constant_676 = -tmp_moved_constant_669*tmp_moved_constant_671 + tmp_moved_constant_673*tmp_moved_constant_675;
                const real_t tmp_moved_constant_677 = tmp_moved_constant_662 - tmp_moved_constant_665;
                const real_t tmp_moved_constant_678 = -tmp_moved_constant_677;
                const real_t tmp_moved_constant_679 = tmp_moved_constant_669*tmp_moved_constant_678;
                const real_t tmp_moved_constant_680 = tmp_moved_constant_659 + tmp_moved_constant_670;
                const real_t tmp_moved_constant_681 = tmp_moved_constant_662 - tmp_moved_constant_663;
                const real_t tmp_moved_constant_682 = -tmp_moved_constant_681;
                const real_t tmp_moved_constant_683 = tmp_moved_constant_673*tmp_moved_constant_682;
                const real_t tmp_moved_constant_684 = tmp_moved_constant_656 - tmp_moved_constant_661;
                const real_t tmp_moved_constant_685 = -tmp_moved_constant_684;
                const real_t tmp_moved_constant_686 = tmp_moved_constant_662 - tmp_moved_constant_664;
                const real_t tmp_moved_constant_687 = -tmp_moved_constant_686;
                const real_t tmp_moved_constant_688 = tmp_moved_constant_685*tmp_moved_constant_687;
                const real_t tmp_moved_constant_689 = tmp_moved_constant_669*tmp_moved_constant_680*tmp_moved_constant_687 - tmp_moved_constant_671*tmp_moved_constant_679 + tmp_moved_constant_671*tmp_moved_constant_682*tmp_moved_constant_685 + tmp_moved_constant_673*tmp_moved_constant_675*tmp_moved_constant_678 - tmp_moved_constant_675*tmp_moved_constant_688 - tmp_moved_constant_680*tmp_moved_constant_683;
                const real_t tmp_moved_constant_690 = 1.0 / (tmp_moved_constant_689);
                const real_t tmp_moved_constant_691 = tmp_moved_constant_676*tmp_moved_constant_690;
                const real_t tmp_moved_constant_692 = tmp_moved_constant_669*tmp_moved_constant_680 - tmp_moved_constant_675*tmp_moved_constant_685;
                const real_t tmp_moved_constant_693 = tmp_moved_constant_690*tmp_moved_constant_692;
                const real_t tmp_moved_constant_694 = tmp_moved_constant_671*tmp_moved_constant_685 - tmp_moved_constant_673*tmp_moved_constant_680;
                const real_t tmp_moved_constant_695 = tmp_moved_constant_690*tmp_moved_constant_694;
                const real_t tmp_moved_constant_696 = -tmp_moved_constant_691 - tmp_moved_constant_693 - tmp_moved_constant_695;
                const real_t tmp_moved_constant_697 = tmp_moved_constant_669*tmp_moved_constant_687 - tmp_moved_constant_683;
                const real_t tmp_moved_constant_698 = tmp_moved_constant_690*tmp_moved_constant_697;
                const real_t tmp_moved_constant_699 = -tmp_moved_constant_679 + tmp_moved_constant_682*tmp_moved_constant_685;
                const real_t tmp_moved_constant_700 = tmp_moved_constant_690*tmp_moved_constant_699;
                const real_t tmp_moved_constant_701 = tmp_moved_constant_673*tmp_moved_constant_678 - tmp_moved_constant_688;
                const real_t tmp_moved_constant_702 = tmp_moved_constant_690*tmp_moved_constant_701;
                const real_t tmp_moved_constant_703 = -tmp_moved_constant_698 - tmp_moved_constant_700 - tmp_moved_constant_702;
                const real_t tmp_moved_constant_704 = tmp_moved_constant_671*tmp_moved_constant_682 - tmp_moved_constant_675*tmp_moved_constant_687;
                const real_t tmp_moved_constant_705 = tmp_moved_constant_690*tmp_moved_constant_704;
                const real_t tmp_moved_constant_706 = -tmp_moved_constant_671*tmp_moved_constant_678 + tmp_moved_constant_680*tmp_moved_constant_687;
                const real_t tmp_moved_constant_707 = tmp_moved_constant_690*tmp_moved_constant_706;
                const real_t tmp_moved_constant_708 = tmp_moved_constant_675*tmp_moved_constant_678 - tmp_moved_constant_680*tmp_moved_constant_682;
                const real_t tmp_moved_constant_709 = tmp_moved_constant_690*tmp_moved_constant_708;
                const real_t tmp_moved_constant_710 = -tmp_moved_constant_705 - tmp_moved_constant_707 - tmp_moved_constant_709;
                const real_t tmp_moved_constant_711 = 0.16666666666666663*abs(tmp_moved_constant_668*tmp_moved_constant_671*tmp_moved_constant_677 - tmp_moved_constant_668*tmp_moved_constant_680*tmp_moved_constant_686 - tmp_moved_constant_671*tmp_moved_constant_681*tmp_moved_constant_684 + tmp_moved_constant_672*tmp_moved_constant_674*tmp_moved_constant_677 + tmp_moved_constant_672*tmp_moved_constant_680*tmp_moved_constant_681 - tmp_moved_constant_674*tmp_moved_constant_684*tmp_moved_constant_686);
                const real_t tmp_moved_constant_712 = tmp_moved_constant_711*(tmp_moved_constant_695*tmp_moved_constant_696 + tmp_moved_constant_702*tmp_moved_constant_703 + tmp_moved_constant_707*tmp_moved_constant_710);
                const real_t tmp_moved_constant_713 = tmp_moved_constant_711*(tmp_moved_constant_693*tmp_moved_constant_696 + tmp_moved_constant_700*tmp_moved_constant_703 + tmp_moved_constant_709*tmp_moved_constant_710);
                const real_t tmp_moved_constant_714 = tmp_moved_constant_711*(tmp_moved_constant_691*tmp_moved_constant_696 + tmp_moved_constant_698*tmp_moved_constant_703 + tmp_moved_constant_705*tmp_moved_constant_710);
                const real_t tmp_moved_constant_715 = 1.0 / (tmp_moved_constant_689*tmp_moved_constant_689);
                const real_t tmp_moved_constant_716 = tmp_moved_constant_694*tmp_moved_constant_715;
                const real_t tmp_moved_constant_717 = tmp_moved_constant_701*tmp_moved_constant_715;
                const real_t tmp_moved_constant_718 = tmp_moved_constant_706*tmp_moved_constant_715;
                const real_t tmp_moved_constant_719 = tmp_moved_constant_711*(tmp_moved_constant_692*tmp_moved_constant_716 + tmp_moved_constant_699*tmp_moved_constant_717 + tmp_moved_constant_708*tmp_moved_constant_718);
                const real_t tmp_moved_constant_720 = tmp_moved_constant_711*(tmp_moved_constant_676*tmp_moved_constant_716 + tmp_moved_constant_697*tmp_moved_constant_717 + tmp_moved_constant_704*tmp_moved_constant_718);
                const real_t tmp_moved_constant_721 = tmp_moved_constant_711*(tmp_moved_constant_676*tmp_moved_constant_692*tmp_moved_constant_715 + tmp_moved_constant_697*tmp_moved_constant_699*tmp_moved_constant_715 + tmp_moved_constant_704*tmp_moved_constant_708*tmp_moved_constant_715);
                const real_t tmp_moved_constant_722 = tmp_moved_constant_711*((tmp_moved_constant_696*tmp_moved_constant_696) + (tmp_moved_constant_703*tmp_moved_constant_703) + (tmp_moved_constant_710*tmp_moved_constant_710));
                const real_t tmp_moved_constant_723 = tmp_moved_constant_712;
                const real_t tmp_moved_constant_724 = tmp_moved_constant_713;
                const real_t tmp_moved_constant_725 = tmp_moved_constant_714;
                const real_t tmp_moved_constant_726 = tmp_moved_constant_712;
                const real_t tmp_moved_constant_727 = tmp_moved_constant_711*((tmp_moved_constant_694*tmp_moved_constant_694)*tmp_moved_constant_715 + (tmp_moved_constant_701*tmp_moved_constant_701)*tmp_moved_constant_715 + (tmp_moved_constant_706*tmp_moved_constant_706)*tmp_moved_constant_715);
                const real_t tmp_moved_constant_728 = tmp_moved_constant_719;
                const real_t tmp_moved_constant_729 = tmp_moved_constant_720;
                const real_t tmp_moved_constant_730 = tmp_moved_constant_713;
                const real_t tmp_moved_constant_731 = tmp_moved_constant_719;
                const real_t tmp_moved_constant_732 = tmp_moved_constant_711*((tmp_moved_constant_692*tmp_moved_constant_692)*tmp_moved_constant_715 + (tmp_moved_constant_699*tmp_moved_constant_699)*tmp_moved_constant_715 + (tmp_moved_constant_708*tmp_moved_constant_708)*tmp_moved_constant_715);
                const real_t tmp_moved_constant_733 = tmp_moved_constant_721;
                const real_t tmp_moved_constant_734 = tmp_moved_constant_714;
                const real_t tmp_moved_constant_735 = tmp_moved_constant_720;
                const real_t tmp_moved_constant_736 = tmp_moved_constant_721;
                const real_t tmp_moved_constant_737 = tmp_moved_constant_711*((tmp_moved_constant_676*tmp_moved_constant_676)*tmp_moved_constant_715 + (tmp_moved_constant_697*tmp_moved_constant_697)*tmp_moved_constant_715 + (tmp_moved_constant_704*tmp_moved_constant_704)*tmp_moved_constant_715);
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
                      real_t _data_float_loop_ctr_array_dim_2[4];
                      _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
                  
                      const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                  
                      std::vector< uint_t > _data_rowIdx( 4 );
                      std::vector< uint_t > _data_colIdx( 4 );
                      std::vector< real_t > _data_mat( 16 );
                  
                      _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                  
                      /* Apply basis transformation */
                  
                  
                  
                      _data_mat[0] = ((real_t)(tmp_moved_constant_722));
                      _data_mat[1] = ((real_t)(tmp_moved_constant_723));
                      _data_mat[2] = ((real_t)(tmp_moved_constant_724));
                      _data_mat[3] = ((real_t)(tmp_moved_constant_725));
                      _data_mat[4] = ((real_t)(tmp_moved_constant_726));
                      _data_mat[5] = ((real_t)(tmp_moved_constant_727));
                      _data_mat[6] = ((real_t)(tmp_moved_constant_728));
                      _data_mat[7] = ((real_t)(tmp_moved_constant_729));
                      _data_mat[8] = ((real_t)(tmp_moved_constant_730));
                      _data_mat[9] = ((real_t)(tmp_moved_constant_731));
                      _data_mat[10] = ((real_t)(tmp_moved_constant_732));
                      _data_mat[11] = ((real_t)(tmp_moved_constant_733));
                      _data_mat[12] = ((real_t)(tmp_moved_constant_734));
                      _data_mat[13] = ((real_t)(tmp_moved_constant_735));
                      _data_mat[14] = ((real_t)(tmp_moved_constant_736));
                      _data_mat[15] = ((real_t)(tmp_moved_constant_737));
                  
                  
                      mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                   }
                }
             } 
          }
          for (int64_t ctr_0 = -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t micromesh_dof_0 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_1 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t micromesh_dof_10 = _data_micromesh_2[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_11 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_2 = _data_micromesh_0[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_3 = _data_micromesh_0[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_4 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_5 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t micromesh_dof_6 = _data_micromesh_1[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_7 = _data_micromesh_1[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_8 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t micromesh_dof_9 = _data_micromesh_2[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t tmp_kernel_op_0 = micromesh_dof_0 - micromesh_dof_1;
             const real_t tmp_kernel_op_1 = -tmp_kernel_op_0;
             const real_t tmp_kernel_op_2 = -micromesh_dof_8;
             const real_t tmp_kernel_op_3 = micromesh_dof_10 + tmp_kernel_op_2;
             const real_t tmp_kernel_op_4 = micromesh_dof_0 - micromesh_dof_2;
             const real_t tmp_kernel_op_5 = -tmp_kernel_op_4;
             const real_t tmp_kernel_op_6 = micromesh_dof_8 - micromesh_dof_9;
             const real_t tmp_kernel_op_7 = -tmp_kernel_op_6;
             const real_t tmp_kernel_op_8 = -tmp_kernel_op_1*tmp_kernel_op_3 + tmp_kernel_op_5*tmp_kernel_op_7;
             const real_t tmp_kernel_op_9 = micromesh_dof_4 - micromesh_dof_7;
             const real_t tmp_kernel_op_10 = -tmp_kernel_op_9;
             const real_t tmp_kernel_op_11 = tmp_kernel_op_1*tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = micromesh_dof_11 + tmp_kernel_op_2;
             const real_t tmp_kernel_op_13 = micromesh_dof_4 - micromesh_dof_5;
             const real_t tmp_kernel_op_14 = -tmp_kernel_op_13;
             const real_t tmp_kernel_op_15 = tmp_kernel_op_14*tmp_kernel_op_5;
             const real_t tmp_kernel_op_16 = micromesh_dof_0 - micromesh_dof_3;
             const real_t tmp_kernel_op_17 = -tmp_kernel_op_16;
             const real_t tmp_kernel_op_18 = micromesh_dof_4 - micromesh_dof_6;
             const real_t tmp_kernel_op_19 = -tmp_kernel_op_18;
             const real_t tmp_kernel_op_20 = tmp_kernel_op_17*tmp_kernel_op_19;
             const real_t tmp_kernel_op_21 = tmp_kernel_op_1*tmp_kernel_op_12*tmp_kernel_op_19 + tmp_kernel_op_10*tmp_kernel_op_5*tmp_kernel_op_7 - tmp_kernel_op_11*tmp_kernel_op_3 - tmp_kernel_op_12*tmp_kernel_op_15 + tmp_kernel_op_14*tmp_kernel_op_17*tmp_kernel_op_3 - tmp_kernel_op_20*tmp_kernel_op_7;
             const real_t tmp_kernel_op_22 = 1.0 / (tmp_kernel_op_21);
             const real_t tmp_kernel_op_23 = tmp_kernel_op_22*tmp_kernel_op_8;
             const real_t tmp_kernel_op_24 = tmp_kernel_op_1*tmp_kernel_op_12 - tmp_kernel_op_17*tmp_kernel_op_7;
             const real_t tmp_kernel_op_25 = tmp_kernel_op_22*tmp_kernel_op_24;
             const real_t tmp_kernel_op_26 = -tmp_kernel_op_12*tmp_kernel_op_5 + tmp_kernel_op_17*tmp_kernel_op_3;
             const real_t tmp_kernel_op_27 = tmp_kernel_op_22*tmp_kernel_op_26;
             const real_t tmp_kernel_op_28 = -tmp_kernel_op_23 - tmp_kernel_op_25 - tmp_kernel_op_27;
             const real_t tmp_kernel_op_29 = tmp_kernel_op_1*tmp_kernel_op_19 - tmp_kernel_op_15;
             const real_t tmp_kernel_op_30 = tmp_kernel_op_22*tmp_kernel_op_29;
             const real_t tmp_kernel_op_31 = -tmp_kernel_op_11 + tmp_kernel_op_14*tmp_kernel_op_17;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_22*tmp_kernel_op_31;
             const real_t tmp_kernel_op_33 = tmp_kernel_op_10*tmp_kernel_op_5 - tmp_kernel_op_20;
             const real_t tmp_kernel_op_34 = tmp_kernel_op_22*tmp_kernel_op_33;
             const real_t tmp_kernel_op_35 = -tmp_kernel_op_30 - tmp_kernel_op_32 - tmp_kernel_op_34;
             const real_t tmp_kernel_op_36 = tmp_kernel_op_14*tmp_kernel_op_3 - tmp_kernel_op_19*tmp_kernel_op_7;
             const real_t tmp_kernel_op_37 = tmp_kernel_op_22*tmp_kernel_op_36;
             const real_t tmp_kernel_op_38 = -tmp_kernel_op_10*tmp_kernel_op_3 + tmp_kernel_op_12*tmp_kernel_op_19;
             const real_t tmp_kernel_op_39 = tmp_kernel_op_22*tmp_kernel_op_38;
             const real_t tmp_kernel_op_40 = tmp_kernel_op_10*tmp_kernel_op_7 - tmp_kernel_op_12*tmp_kernel_op_14;
             const real_t tmp_kernel_op_41 = tmp_kernel_op_22*tmp_kernel_op_40;
             const real_t tmp_kernel_op_42 = -tmp_kernel_op_37 - tmp_kernel_op_39 - tmp_kernel_op_41;
             const real_t tmp_kernel_op_43 = 0.16666666666666663*abs(tmp_kernel_op_0*tmp_kernel_op_12*tmp_kernel_op_18 - tmp_kernel_op_0*tmp_kernel_op_3*tmp_kernel_op_9 - tmp_kernel_op_12*tmp_kernel_op_13*tmp_kernel_op_4 + tmp_kernel_op_13*tmp_kernel_op_16*tmp_kernel_op_3 + tmp_kernel_op_16*tmp_kernel_op_18*tmp_kernel_op_6 - tmp_kernel_op_4*tmp_kernel_op_6*tmp_kernel_op_9);
             const real_t tmp_kernel_op_44 = tmp_kernel_op_43*(tmp_kernel_op_27*tmp_kernel_op_28 + tmp_kernel_op_34*tmp_kernel_op_35 + tmp_kernel_op_39*tmp_kernel_op_42);
             const real_t tmp_kernel_op_45 = tmp_kernel_op_43*(tmp_kernel_op_25*tmp_kernel_op_28 + tmp_kernel_op_32*tmp_kernel_op_35 + tmp_kernel_op_41*tmp_kernel_op_42);
             const real_t tmp_kernel_op_46 = tmp_kernel_op_43*(tmp_kernel_op_23*tmp_kernel_op_28 + tmp_kernel_op_30*tmp_kernel_op_35 + tmp_kernel_op_37*tmp_kernel_op_42);
             const real_t tmp_kernel_op_47 = 1.0 / (tmp_kernel_op_21*tmp_kernel_op_21);
             const real_t tmp_kernel_op_48 = tmp_kernel_op_26*tmp_kernel_op_47;
             const real_t tmp_kernel_op_49 = tmp_kernel_op_33*tmp_kernel_op_47;
             const real_t tmp_kernel_op_50 = tmp_kernel_op_38*tmp_kernel_op_47;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_43*(tmp_kernel_op_24*tmp_kernel_op_48 + tmp_kernel_op_31*tmp_kernel_op_49 + tmp_kernel_op_40*tmp_kernel_op_50);
             const real_t tmp_kernel_op_52 = tmp_kernel_op_43*(tmp_kernel_op_29*tmp_kernel_op_49 + tmp_kernel_op_36*tmp_kernel_op_50 + tmp_kernel_op_48*tmp_kernel_op_8);
             const real_t tmp_kernel_op_53 = tmp_kernel_op_43*(tmp_kernel_op_24*tmp_kernel_op_47*tmp_kernel_op_8 + tmp_kernel_op_29*tmp_kernel_op_31*tmp_kernel_op_47 + tmp_kernel_op_36*tmp_kernel_op_40*tmp_kernel_op_47);
             const real_t elMat_0_0 = tmp_kernel_op_43*((tmp_kernel_op_28*tmp_kernel_op_28) + (tmp_kernel_op_35*tmp_kernel_op_35) + (tmp_kernel_op_42*tmp_kernel_op_42));
             const real_t elMat_0_1 = tmp_kernel_op_44;
             const real_t elMat_0_2 = tmp_kernel_op_45;
             const real_t elMat_0_3 = tmp_kernel_op_46;
             const real_t elMat_1_0 = tmp_kernel_op_44;
             const real_t elMat_1_1 = tmp_kernel_op_43*((tmp_kernel_op_26*tmp_kernel_op_26)*tmp_kernel_op_47 + (tmp_kernel_op_33*tmp_kernel_op_33)*tmp_kernel_op_47 + (tmp_kernel_op_38*tmp_kernel_op_38)*tmp_kernel_op_47);
             const real_t elMat_1_2 = tmp_kernel_op_51;
             const real_t elMat_1_3 = tmp_kernel_op_52;
             const real_t elMat_2_0 = tmp_kernel_op_45;
             const real_t elMat_2_1 = tmp_kernel_op_51;
             const real_t elMat_2_2 = tmp_kernel_op_43*((tmp_kernel_op_24*tmp_kernel_op_24)*tmp_kernel_op_47 + (tmp_kernel_op_31*tmp_kernel_op_31)*tmp_kernel_op_47 + (tmp_kernel_op_40*tmp_kernel_op_40)*tmp_kernel_op_47);
             const real_t elMat_2_3 = tmp_kernel_op_53;
             const real_t elMat_3_0 = tmp_kernel_op_46;
             const real_t elMat_3_1 = tmp_kernel_op_52;
             const real_t elMat_3_2 = tmp_kernel_op_53;
             const real_t elMat_3_3 = tmp_kernel_op_43*((tmp_kernel_op_29*tmp_kernel_op_29)*tmp_kernel_op_47 + (tmp_kernel_op_36*tmp_kernel_op_36)*tmp_kernel_op_47 + tmp_kernel_op_47*(tmp_kernel_op_8*tmp_kernel_op_8));
             {
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
                      real_t _data_float_loop_ctr_array_dim_2[4];
                      _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
                      _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
                  
                      const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
                      const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                      const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
                  
                      std::vector< uint_t > _data_rowIdx( 4 );
                      std::vector< uint_t > _data_colIdx( 4 );
                      std::vector< real_t > _data_mat( 16 );
                  
                      _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
                      _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
                      _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
                  
                      /* Apply basis transformation */
                  
                  
                  
                      _data_mat[0] = ((real_t)(elMat_0_0));
                      _data_mat[1] = ((real_t)(elMat_0_1));
                      _data_mat[2] = ((real_t)(elMat_0_2));
                      _data_mat[3] = ((real_t)(elMat_0_3));
                      _data_mat[4] = ((real_t)(elMat_1_0));
                      _data_mat[5] = ((real_t)(elMat_1_1));
                      _data_mat[6] = ((real_t)(elMat_1_2));
                      _data_mat[7] = ((real_t)(elMat_1_3));
                      _data_mat[8] = ((real_t)(elMat_2_0));
                      _data_mat[9] = ((real_t)(elMat_2_1));
                      _data_mat[10] = ((real_t)(elMat_2_2));
                      _data_mat[11] = ((real_t)(elMat_2_3));
                      _data_mat[12] = ((real_t)(elMat_3_0));
                      _data_mat[13] = ((real_t)(elMat_3_1));
                      _data_mat[14] = ((real_t)(elMat_3_2));
                      _data_mat[15] = ((real_t)(elMat_3_3));
                  
                  
                      mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                   }
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
