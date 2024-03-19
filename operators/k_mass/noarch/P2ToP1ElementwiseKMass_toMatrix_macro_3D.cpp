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

























#include "../P2ToP1ElementwiseKMass.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ToP1ElementwiseKMass::toMatrix_macro_3D( idx_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_kEdge, real_t * RESTRICT  _data_kVertex, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {-0.1333333333333333, 0.074999999999999983, 0.074999999999999983, 0.074999999999999983, 0.074999999999999983};
   
       const real_t _data_q_p_0 [] = {0.25, 0.16666666666666666, 0.16666666666666666, 0.5, 0.16666666666666666};
   
       const real_t _data_q_p_1 [] = {0.25, 0.16666666666666666, 0.5, 0.16666666666666666, 0.16666666666666666};
   
       const real_t _data_q_p_2 [] = {0.25, 0.5, 0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
   
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
       const real_t jac_affine_0_0_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_1_0_WHITE_UP;
       const real_t jac_affine_0_1_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_2_0_WHITE_UP;
       const real_t jac_affine_0_2_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_3_0_WHITE_UP;
       const real_t jac_affine_1_0_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_1_1_WHITE_UP;
       const real_t jac_affine_1_1_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_2_1_WHITE_UP;
       const real_t jac_affine_1_2_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_3_1_WHITE_UP;
       const real_t jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const real_t jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const real_t jac_affine_2_2_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_3_2_WHITE_UP;
       const real_t abs_det_jac_affine_WHITE_UP = abs(jac_affine_0_0_WHITE_UP*jac_affine_1_1_WHITE_UP*jac_affine_2_2_WHITE_UP - jac_affine_0_0_WHITE_UP*jac_affine_1_2_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_0_1_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_2_WHITE_UP + jac_affine_0_1_WHITE_UP*jac_affine_1_2_WHITE_UP*jac_affine_2_0_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_0_2_WHITE_UP*jac_affine_1_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       {
          /* CellType.WHITE_UP */
          const real_t _data_phi_psi_jac_affine_det_0_0_WHITE_UP [] = {((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555594)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518535)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518535)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555525)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518521)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555587)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518531)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555587)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.05555555555555558)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*2.775557561562892e-17)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_UP*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_UP*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_UP*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.055555555555555559))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_0*_data_q_p_2[q];
                const real_t tmp_qloop_3 = 4.0*_data_q_p_1[q]*_data_q_p_2[q];
                const real_t tmp_qloop_4 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                const real_t tmp_qloop_8 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                const real_t tmp_qloop_10 = tmp_qloop_1 + tmp_qloop_2;
                const real_t tmp_qloop_11 = (k_dof_0*(tmp_qloop_10 + tmp_qloop_3 + tmp_qloop_5 + tmp_qloop_7 + tmp_qloop_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_qloop_5 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_7 - _data_q_p_1[q]) + k_dof_3*(tmp_qloop_9 - _data_q_p_2[q]) + k_dof_4*tmp_qloop_3 + k_dof_5*tmp_qloop_2 + k_dof_6*tmp_qloop_1 + k_dof_7*(-tmp_qloop_2 - tmp_qloop_3 + tmp_qloop_8*-4.0 + 4.0*_data_q_p_2[q]) + k_dof_8*(-tmp_qloop_1 - tmp_qloop_3 + tmp_qloop_6*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_9*(-tmp_qloop_10 + tmp_qloop_4*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t tmp_qloop_12 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 14];
                const real_t q_tmp_0_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q];
                const real_t q_tmp_0_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 5];
                const real_t q_tmp_0_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 6];
                const real_t q_tmp_0_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 7];
                const real_t q_tmp_0_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 8];
                const real_t q_tmp_0_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 9];
                const real_t q_tmp_1_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 10];
                const real_t q_tmp_1_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 11];
                const real_t q_tmp_1_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 12];
                const real_t q_tmp_1_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 13];
                const real_t q_tmp_1_4 = tmp_qloop_12;
                const real_t q_tmp_1_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 15];
                const real_t q_tmp_1_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 16];
                const real_t q_tmp_1_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 17];
                const real_t q_tmp_1_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 18];
                const real_t q_tmp_1_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 19];
                const real_t q_tmp_2_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 20];
                const real_t q_tmp_2_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 21];
                const real_t q_tmp_2_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 22];
                const real_t q_tmp_2_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 23];
                const real_t q_tmp_2_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 24];
                const real_t q_tmp_2_5 = tmp_qloop_12;
                const real_t q_tmp_2_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 25];
                const real_t q_tmp_2_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 26];
                const real_t q_tmp_2_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 27];
                const real_t q_tmp_2_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 28];
                const real_t q_tmp_3_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 29];
                const real_t q_tmp_3_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 30];
                const real_t q_tmp_3_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 31];
                const real_t q_tmp_3_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 32];
                const real_t q_tmp_3_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 33];
                const real_t q_tmp_3_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 34];
                const real_t q_tmp_3_6 = tmp_qloop_12;
                const real_t q_tmp_3_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 35];
                const real_t q_tmp_3_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 36];
                const real_t q_tmp_3_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[38*q + 37];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_0_6 = q_acc_0_6;
             const real_t elMat_0_7 = q_acc_0_7;
             const real_t elMat_0_8 = q_acc_0_8;
             const real_t elMat_0_9 = q_acc_0_9;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_1_6 = q_acc_1_6;
             const real_t elMat_1_7 = q_acc_1_7;
             const real_t elMat_1_8 = q_acc_1_8;
             const real_t elMat_1_9 = q_acc_1_9;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_2_6 = q_acc_2_6;
             const real_t elMat_2_7 = q_acc_2_7;
             const real_t elMat_2_8 = q_acc_2_8;
             const real_t elMat_2_9 = q_acc_2_9;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_3_6 = q_acc_3_6;
             const real_t elMat_3_7 = q_acc_3_7;
             const real_t elMat_3_8 = q_acc_3_8;
             const real_t elMat_3_9 = q_acc_3_9;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 10 );
             std::vector< real_t > _data_mat( 40 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[6] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[7] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[8] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[9] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_1_0));
             _data_mat[11] = ((real_t)(elMat_1_1));
             _data_mat[12] = ((real_t)(elMat_1_2));
             _data_mat[13] = ((real_t)(elMat_1_3));
             _data_mat[14] = ((real_t)(elMat_1_4));
             _data_mat[15] = ((real_t)(elMat_1_5));
             _data_mat[16] = ((real_t)(elMat_1_6));
             _data_mat[17] = ((real_t)(elMat_1_7));
             _data_mat[18] = ((real_t)(elMat_1_8));
             _data_mat[19] = ((real_t)(elMat_1_9));
             _data_mat[20] = ((real_t)(elMat_2_0));
             _data_mat[21] = ((real_t)(elMat_2_1));
             _data_mat[22] = ((real_t)(elMat_2_2));
             _data_mat[23] = ((real_t)(elMat_2_3));
             _data_mat[24] = ((real_t)(elMat_2_4));
             _data_mat[25] = ((real_t)(elMat_2_5));
             _data_mat[26] = ((real_t)(elMat_2_6));
             _data_mat[27] = ((real_t)(elMat_2_7));
             _data_mat[28] = ((real_t)(elMat_2_8));
             _data_mat[29] = ((real_t)(elMat_2_9));
             _data_mat[30] = ((real_t)(elMat_3_0));
             _data_mat[31] = ((real_t)(elMat_3_1));
             _data_mat[32] = ((real_t)(elMat_3_2));
             _data_mat[33] = ((real_t)(elMat_3_3));
             _data_mat[34] = ((real_t)(elMat_3_4));
             _data_mat[35] = ((real_t)(elMat_3_5));
             _data_mat[36] = ((real_t)(elMat_3_6));
             _data_mat[37] = ((real_t)(elMat_3_7));
             _data_mat[38] = ((real_t)(elMat_3_8));
             _data_mat[39] = ((real_t)(elMat_3_9));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
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
       const real_t jac_affine_0_0_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_1_0_WHITE_DOWN;
       const real_t jac_affine_0_1_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_2_0_WHITE_DOWN;
       const real_t jac_affine_0_2_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_3_0_WHITE_DOWN;
       const real_t jac_affine_1_0_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_1_1_WHITE_DOWN;
       const real_t jac_affine_1_1_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_2_1_WHITE_DOWN;
       const real_t jac_affine_1_2_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_3_1_WHITE_DOWN;
       const real_t jac_affine_2_0_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_1_2_WHITE_DOWN;
       const real_t jac_affine_2_1_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_2_2_WHITE_DOWN;
       const real_t jac_affine_2_2_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_3_2_WHITE_DOWN;
       const real_t abs_det_jac_affine_WHITE_DOWN = abs(jac_affine_0_0_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN - jac_affine_0_0_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_0_1_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN + jac_affine_0_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_0_2_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       {
          /* CellType.WHITE_DOWN */
          const real_t _data_phi_psi_jac_affine_det_0_0_WHITE_DOWN [] = {((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555594)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518535)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518535)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555525)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518521)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555587)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518531)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518521)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555587)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.05555555555555558)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*2.775557561562892e-17)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.055555555555555559))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const real_t k_dof_0 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_0*_data_q_p_2[q];
                const real_t tmp_qloop_3 = 4.0*_data_q_p_1[q]*_data_q_p_2[q];
                const real_t tmp_qloop_4 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                const real_t tmp_qloop_8 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                const real_t tmp_qloop_10 = tmp_qloop_1 + tmp_qloop_2;
                const real_t tmp_qloop_11 = (k_dof_0*(tmp_qloop_10 + tmp_qloop_3 + tmp_qloop_5 + tmp_qloop_7 + tmp_qloop_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_qloop_5 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_7 - _data_q_p_1[q]) + k_dof_3*(tmp_qloop_9 - _data_q_p_2[q]) + k_dof_4*tmp_qloop_3 + k_dof_5*tmp_qloop_2 + k_dof_6*tmp_qloop_1 + k_dof_7*(-tmp_qloop_2 - tmp_qloop_3 + tmp_qloop_8*-4.0 + 4.0*_data_q_p_2[q]) + k_dof_8*(-tmp_qloop_1 - tmp_qloop_3 + tmp_qloop_6*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_9*(-tmp_qloop_10 + tmp_qloop_4*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t tmp_qloop_12 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 14];
                const real_t q_tmp_0_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q];
                const real_t q_tmp_0_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 5];
                const real_t q_tmp_0_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 6];
                const real_t q_tmp_0_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 7];
                const real_t q_tmp_0_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 8];
                const real_t q_tmp_0_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 9];
                const real_t q_tmp_1_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 10];
                const real_t q_tmp_1_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 11];
                const real_t q_tmp_1_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 12];
                const real_t q_tmp_1_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 13];
                const real_t q_tmp_1_4 = tmp_qloop_12;
                const real_t q_tmp_1_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 15];
                const real_t q_tmp_1_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 16];
                const real_t q_tmp_1_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 17];
                const real_t q_tmp_1_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 18];
                const real_t q_tmp_1_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 19];
                const real_t q_tmp_2_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 20];
                const real_t q_tmp_2_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 21];
                const real_t q_tmp_2_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 22];
                const real_t q_tmp_2_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 23];
                const real_t q_tmp_2_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 24];
                const real_t q_tmp_2_5 = tmp_qloop_12;
                const real_t q_tmp_2_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 25];
                const real_t q_tmp_2_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 26];
                const real_t q_tmp_2_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 27];
                const real_t q_tmp_2_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 28];
                const real_t q_tmp_3_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 29];
                const real_t q_tmp_3_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 30];
                const real_t q_tmp_3_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 31];
                const real_t q_tmp_3_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 32];
                const real_t q_tmp_3_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 33];
                const real_t q_tmp_3_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 34];
                const real_t q_tmp_3_6 = tmp_qloop_12;
                const real_t q_tmp_3_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 35];
                const real_t q_tmp_3_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 36];
                const real_t q_tmp_3_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[38*q + 37];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_0_6 = q_acc_0_6;
             const real_t elMat_0_7 = q_acc_0_7;
             const real_t elMat_0_8 = q_acc_0_8;
             const real_t elMat_0_9 = q_acc_0_9;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_1_6 = q_acc_1_6;
             const real_t elMat_1_7 = q_acc_1_7;
             const real_t elMat_1_8 = q_acc_1_8;
             const real_t elMat_1_9 = q_acc_1_9;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_2_6 = q_acc_2_6;
             const real_t elMat_2_7 = q_acc_2_7;
             const real_t elMat_2_8 = q_acc_2_8;
             const real_t elMat_2_9 = q_acc_2_9;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_3_6 = q_acc_3_6;
             const real_t elMat_3_7 = q_acc_3_7;
             const real_t elMat_3_8 = q_acc_3_8;
             const real_t elMat_3_9 = q_acc_3_9;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 10 );
             std::vector< real_t > _data_mat( 40 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1]));
             _data_colIdx[6] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[7] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[8] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[9] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_1_0));
             _data_mat[11] = ((real_t)(elMat_1_1));
             _data_mat[12] = ((real_t)(elMat_1_2));
             _data_mat[13] = ((real_t)(elMat_1_3));
             _data_mat[14] = ((real_t)(elMat_1_4));
             _data_mat[15] = ((real_t)(elMat_1_5));
             _data_mat[16] = ((real_t)(elMat_1_6));
             _data_mat[17] = ((real_t)(elMat_1_7));
             _data_mat[18] = ((real_t)(elMat_1_8));
             _data_mat[19] = ((real_t)(elMat_1_9));
             _data_mat[20] = ((real_t)(elMat_2_0));
             _data_mat[21] = ((real_t)(elMat_2_1));
             _data_mat[22] = ((real_t)(elMat_2_2));
             _data_mat[23] = ((real_t)(elMat_2_3));
             _data_mat[24] = ((real_t)(elMat_2_4));
             _data_mat[25] = ((real_t)(elMat_2_5));
             _data_mat[26] = ((real_t)(elMat_2_6));
             _data_mat[27] = ((real_t)(elMat_2_7));
             _data_mat[28] = ((real_t)(elMat_2_8));
             _data_mat[29] = ((real_t)(elMat_2_9));
             _data_mat[30] = ((real_t)(elMat_3_0));
             _data_mat[31] = ((real_t)(elMat_3_1));
             _data_mat[32] = ((real_t)(elMat_3_2));
             _data_mat[33] = ((real_t)(elMat_3_3));
             _data_mat[34] = ((real_t)(elMat_3_4));
             _data_mat[35] = ((real_t)(elMat_3_5));
             _data_mat[36] = ((real_t)(elMat_3_6));
             _data_mat[37] = ((real_t)(elMat_3_7));
             _data_mat[38] = ((real_t)(elMat_3_8));
             _data_mat[39] = ((real_t)(elMat_3_9));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
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
       const real_t jac_affine_0_0_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_1_0_BLUE_UP;
       const real_t jac_affine_0_1_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_2_0_BLUE_UP;
       const real_t jac_affine_0_2_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_3_0_BLUE_UP;
       const real_t jac_affine_1_0_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_1_1_BLUE_UP;
       const real_t jac_affine_1_1_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_2_1_BLUE_UP;
       const real_t jac_affine_1_2_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_3_1_BLUE_UP;
       const real_t jac_affine_2_0_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_1_2_BLUE_UP;
       const real_t jac_affine_2_1_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_2_2_BLUE_UP;
       const real_t jac_affine_2_2_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_3_2_BLUE_UP;
       const real_t abs_det_jac_affine_BLUE_UP = abs(jac_affine_0_0_BLUE_UP*jac_affine_1_1_BLUE_UP*jac_affine_2_2_BLUE_UP - jac_affine_0_0_BLUE_UP*jac_affine_1_2_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_0_1_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_2_BLUE_UP + jac_affine_0_1_BLUE_UP*jac_affine_1_2_BLUE_UP*jac_affine_2_0_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_0_2_BLUE_UP*jac_affine_1_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       {
          /* CellType.BLUE_UP */
          const real_t _data_phi_psi_jac_affine_det_0_0_BLUE_UP [] = {((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555594)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518535)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518535)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555525)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518521)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555587)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518531)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555587)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.05555555555555558)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*2.775557561562892e-17)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_UP*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_UP*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_UP*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.055555555555555559))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_0*_data_q_p_2[q];
                const real_t tmp_qloop_3 = 4.0*_data_q_p_1[q]*_data_q_p_2[q];
                const real_t tmp_qloop_4 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                const real_t tmp_qloop_8 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                const real_t tmp_qloop_10 = tmp_qloop_1 + tmp_qloop_2;
                const real_t tmp_qloop_11 = (k_dof_0*(tmp_qloop_10 + tmp_qloop_3 + tmp_qloop_5 + tmp_qloop_7 + tmp_qloop_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_qloop_5 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_7 - _data_q_p_1[q]) + k_dof_3*(tmp_qloop_9 - _data_q_p_2[q]) + k_dof_4*tmp_qloop_3 + k_dof_5*tmp_qloop_2 + k_dof_6*tmp_qloop_1 + k_dof_7*(-tmp_qloop_2 - tmp_qloop_3 + tmp_qloop_8*-4.0 + 4.0*_data_q_p_2[q]) + k_dof_8*(-tmp_qloop_1 - tmp_qloop_3 + tmp_qloop_6*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_9*(-tmp_qloop_10 + tmp_qloop_4*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t tmp_qloop_12 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 14];
                const real_t q_tmp_0_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q];
                const real_t q_tmp_0_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 5];
                const real_t q_tmp_0_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 6];
                const real_t q_tmp_0_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 7];
                const real_t q_tmp_0_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 8];
                const real_t q_tmp_0_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 9];
                const real_t q_tmp_1_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 10];
                const real_t q_tmp_1_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 11];
                const real_t q_tmp_1_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 12];
                const real_t q_tmp_1_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 13];
                const real_t q_tmp_1_4 = tmp_qloop_12;
                const real_t q_tmp_1_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 15];
                const real_t q_tmp_1_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 16];
                const real_t q_tmp_1_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 17];
                const real_t q_tmp_1_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 18];
                const real_t q_tmp_1_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 19];
                const real_t q_tmp_2_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 20];
                const real_t q_tmp_2_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 21];
                const real_t q_tmp_2_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 22];
                const real_t q_tmp_2_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 23];
                const real_t q_tmp_2_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 24];
                const real_t q_tmp_2_5 = tmp_qloop_12;
                const real_t q_tmp_2_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 25];
                const real_t q_tmp_2_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 26];
                const real_t q_tmp_2_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 27];
                const real_t q_tmp_2_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 28];
                const real_t q_tmp_3_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 29];
                const real_t q_tmp_3_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 30];
                const real_t q_tmp_3_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 31];
                const real_t q_tmp_3_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 32];
                const real_t q_tmp_3_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 33];
                const real_t q_tmp_3_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 34];
                const real_t q_tmp_3_6 = tmp_qloop_12;
                const real_t q_tmp_3_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 35];
                const real_t q_tmp_3_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 36];
                const real_t q_tmp_3_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[38*q + 37];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_0_6 = q_acc_0_6;
             const real_t elMat_0_7 = q_acc_0_7;
             const real_t elMat_0_8 = q_acc_0_8;
             const real_t elMat_0_9 = q_acc_0_9;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_1_6 = q_acc_1_6;
             const real_t elMat_1_7 = q_acc_1_7;
             const real_t elMat_1_8 = q_acc_1_8;
             const real_t elMat_1_9 = q_acc_1_9;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_2_6 = q_acc_2_6;
             const real_t elMat_2_7 = q_acc_2_7;
             const real_t elMat_2_8 = q_acc_2_8;
             const real_t elMat_2_9 = q_acc_2_9;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_3_6 = q_acc_3_6;
             const real_t elMat_3_7 = q_acc_3_7;
             const real_t elMat_3_8 = q_acc_3_8;
             const real_t elMat_3_9 = q_acc_3_9;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 10 );
             std::vector< real_t > _data_mat( 40 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[6] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[7] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[8] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[9] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_1_0));
             _data_mat[11] = ((real_t)(elMat_1_1));
             _data_mat[12] = ((real_t)(elMat_1_2));
             _data_mat[13] = ((real_t)(elMat_1_3));
             _data_mat[14] = ((real_t)(elMat_1_4));
             _data_mat[15] = ((real_t)(elMat_1_5));
             _data_mat[16] = ((real_t)(elMat_1_6));
             _data_mat[17] = ((real_t)(elMat_1_7));
             _data_mat[18] = ((real_t)(elMat_1_8));
             _data_mat[19] = ((real_t)(elMat_1_9));
             _data_mat[20] = ((real_t)(elMat_2_0));
             _data_mat[21] = ((real_t)(elMat_2_1));
             _data_mat[22] = ((real_t)(elMat_2_2));
             _data_mat[23] = ((real_t)(elMat_2_3));
             _data_mat[24] = ((real_t)(elMat_2_4));
             _data_mat[25] = ((real_t)(elMat_2_5));
             _data_mat[26] = ((real_t)(elMat_2_6));
             _data_mat[27] = ((real_t)(elMat_2_7));
             _data_mat[28] = ((real_t)(elMat_2_8));
             _data_mat[29] = ((real_t)(elMat_2_9));
             _data_mat[30] = ((real_t)(elMat_3_0));
             _data_mat[31] = ((real_t)(elMat_3_1));
             _data_mat[32] = ((real_t)(elMat_3_2));
             _data_mat[33] = ((real_t)(elMat_3_3));
             _data_mat[34] = ((real_t)(elMat_3_4));
             _data_mat[35] = ((real_t)(elMat_3_5));
             _data_mat[36] = ((real_t)(elMat_3_6));
             _data_mat[37] = ((real_t)(elMat_3_7));
             _data_mat[38] = ((real_t)(elMat_3_8));
             _data_mat[39] = ((real_t)(elMat_3_9));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
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
       const real_t jac_affine_0_0_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_1_0_BLUE_DOWN;
       const real_t jac_affine_0_1_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_2_0_BLUE_DOWN;
       const real_t jac_affine_0_2_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_3_0_BLUE_DOWN;
       const real_t jac_affine_1_0_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_1_1_BLUE_DOWN;
       const real_t jac_affine_1_1_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_2_1_BLUE_DOWN;
       const real_t jac_affine_1_2_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_3_1_BLUE_DOWN;
       const real_t jac_affine_2_0_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_1_2_BLUE_DOWN;
       const real_t jac_affine_2_1_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_2_2_BLUE_DOWN;
       const real_t jac_affine_2_2_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_3_2_BLUE_DOWN;
       const real_t abs_det_jac_affine_BLUE_DOWN = abs(jac_affine_0_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN - jac_affine_0_0_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_0_1_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN + jac_affine_0_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_0_2_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       {
          /* CellType.BLUE_DOWN */
          const real_t _data_phi_psi_jac_affine_det_0_0_BLUE_DOWN [] = {((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555594)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518535)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518535)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555525)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518521)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555587)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518531)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518521)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555587)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.05555555555555558)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*2.775557561562892e-17)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.055555555555555559))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t k_dof_0 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_0*_data_q_p_2[q];
                const real_t tmp_qloop_3 = 4.0*_data_q_p_1[q]*_data_q_p_2[q];
                const real_t tmp_qloop_4 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                const real_t tmp_qloop_8 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                const real_t tmp_qloop_10 = tmp_qloop_1 + tmp_qloop_2;
                const real_t tmp_qloop_11 = (k_dof_0*(tmp_qloop_10 + tmp_qloop_3 + tmp_qloop_5 + tmp_qloop_7 + tmp_qloop_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_qloop_5 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_7 - _data_q_p_1[q]) + k_dof_3*(tmp_qloop_9 - _data_q_p_2[q]) + k_dof_4*tmp_qloop_3 + k_dof_5*tmp_qloop_2 + k_dof_6*tmp_qloop_1 + k_dof_7*(-tmp_qloop_2 - tmp_qloop_3 + tmp_qloop_8*-4.0 + 4.0*_data_q_p_2[q]) + k_dof_8*(-tmp_qloop_1 - tmp_qloop_3 + tmp_qloop_6*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_9*(-tmp_qloop_10 + tmp_qloop_4*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t tmp_qloop_12 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 14];
                const real_t q_tmp_0_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q];
                const real_t q_tmp_0_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 5];
                const real_t q_tmp_0_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 6];
                const real_t q_tmp_0_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 7];
                const real_t q_tmp_0_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 8];
                const real_t q_tmp_0_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 9];
                const real_t q_tmp_1_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 10];
                const real_t q_tmp_1_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 11];
                const real_t q_tmp_1_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 12];
                const real_t q_tmp_1_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 13];
                const real_t q_tmp_1_4 = tmp_qloop_12;
                const real_t q_tmp_1_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 15];
                const real_t q_tmp_1_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 16];
                const real_t q_tmp_1_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 17];
                const real_t q_tmp_1_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 18];
                const real_t q_tmp_1_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 19];
                const real_t q_tmp_2_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 20];
                const real_t q_tmp_2_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 21];
                const real_t q_tmp_2_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 22];
                const real_t q_tmp_2_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 23];
                const real_t q_tmp_2_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 24];
                const real_t q_tmp_2_5 = tmp_qloop_12;
                const real_t q_tmp_2_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 25];
                const real_t q_tmp_2_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 26];
                const real_t q_tmp_2_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 27];
                const real_t q_tmp_2_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 28];
                const real_t q_tmp_3_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 29];
                const real_t q_tmp_3_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 30];
                const real_t q_tmp_3_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 31];
                const real_t q_tmp_3_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 32];
                const real_t q_tmp_3_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 33];
                const real_t q_tmp_3_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 34];
                const real_t q_tmp_3_6 = tmp_qloop_12;
                const real_t q_tmp_3_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 35];
                const real_t q_tmp_3_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 36];
                const real_t q_tmp_3_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[38*q + 37];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_0_6 = q_acc_0_6;
             const real_t elMat_0_7 = q_acc_0_7;
             const real_t elMat_0_8 = q_acc_0_8;
             const real_t elMat_0_9 = q_acc_0_9;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_1_6 = q_acc_1_6;
             const real_t elMat_1_7 = q_acc_1_7;
             const real_t elMat_1_8 = q_acc_1_8;
             const real_t elMat_1_9 = q_acc_1_9;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_2_6 = q_acc_2_6;
             const real_t elMat_2_7 = q_acc_2_7;
             const real_t elMat_2_8 = q_acc_2_8;
             const real_t elMat_2_9 = q_acc_2_9;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_3_6 = q_acc_3_6;
             const real_t elMat_3_7 = q_acc_3_7;
             const real_t elMat_3_8 = q_acc_3_8;
             const real_t elMat_3_9 = q_acc_3_9;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 10 );
             std::vector< real_t > _data_mat( 40 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[6] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[7] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[8] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[9] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_1_0));
             _data_mat[11] = ((real_t)(elMat_1_1));
             _data_mat[12] = ((real_t)(elMat_1_2));
             _data_mat[13] = ((real_t)(elMat_1_3));
             _data_mat[14] = ((real_t)(elMat_1_4));
             _data_mat[15] = ((real_t)(elMat_1_5));
             _data_mat[16] = ((real_t)(elMat_1_6));
             _data_mat[17] = ((real_t)(elMat_1_7));
             _data_mat[18] = ((real_t)(elMat_1_8));
             _data_mat[19] = ((real_t)(elMat_1_9));
             _data_mat[20] = ((real_t)(elMat_2_0));
             _data_mat[21] = ((real_t)(elMat_2_1));
             _data_mat[22] = ((real_t)(elMat_2_2));
             _data_mat[23] = ((real_t)(elMat_2_3));
             _data_mat[24] = ((real_t)(elMat_2_4));
             _data_mat[25] = ((real_t)(elMat_2_5));
             _data_mat[26] = ((real_t)(elMat_2_6));
             _data_mat[27] = ((real_t)(elMat_2_7));
             _data_mat[28] = ((real_t)(elMat_2_8));
             _data_mat[29] = ((real_t)(elMat_2_9));
             _data_mat[30] = ((real_t)(elMat_3_0));
             _data_mat[31] = ((real_t)(elMat_3_1));
             _data_mat[32] = ((real_t)(elMat_3_2));
             _data_mat[33] = ((real_t)(elMat_3_3));
             _data_mat[34] = ((real_t)(elMat_3_4));
             _data_mat[35] = ((real_t)(elMat_3_5));
             _data_mat[36] = ((real_t)(elMat_3_6));
             _data_mat[37] = ((real_t)(elMat_3_7));
             _data_mat[38] = ((real_t)(elMat_3_8));
             _data_mat[39] = ((real_t)(elMat_3_9));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
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
       const real_t jac_affine_0_0_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_1_0_GREEN_UP;
       const real_t jac_affine_0_1_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_2_0_GREEN_UP;
       const real_t jac_affine_0_2_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_3_0_GREEN_UP;
       const real_t jac_affine_1_0_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_1_1_GREEN_UP;
       const real_t jac_affine_1_1_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_2_1_GREEN_UP;
       const real_t jac_affine_1_2_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_3_1_GREEN_UP;
       const real_t jac_affine_2_0_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_1_2_GREEN_UP;
       const real_t jac_affine_2_1_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_2_2_GREEN_UP;
       const real_t jac_affine_2_2_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_3_2_GREEN_UP;
       const real_t abs_det_jac_affine_GREEN_UP = abs(jac_affine_0_0_GREEN_UP*jac_affine_1_1_GREEN_UP*jac_affine_2_2_GREEN_UP - jac_affine_0_0_GREEN_UP*jac_affine_1_2_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_0_1_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_2_GREEN_UP + jac_affine_0_1_GREEN_UP*jac_affine_1_2_GREEN_UP*jac_affine_2_0_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_0_2_GREEN_UP*jac_affine_1_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       {
          /* CellType.GREEN_UP */
          const real_t _data_phi_psi_jac_affine_det_0_0_GREEN_UP [] = {((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555594)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518535)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518535)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555525)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518521)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555587)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518531)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555587)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.05555555555555558)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*2.775557561562892e-17)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_UP*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_UP*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_UP*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.055555555555555559))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_0*_data_q_p_2[q];
                const real_t tmp_qloop_3 = 4.0*_data_q_p_1[q]*_data_q_p_2[q];
                const real_t tmp_qloop_4 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                const real_t tmp_qloop_8 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                const real_t tmp_qloop_10 = tmp_qloop_1 + tmp_qloop_2;
                const real_t tmp_qloop_11 = (k_dof_0*(tmp_qloop_10 + tmp_qloop_3 + tmp_qloop_5 + tmp_qloop_7 + tmp_qloop_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_qloop_5 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_7 - _data_q_p_1[q]) + k_dof_3*(tmp_qloop_9 - _data_q_p_2[q]) + k_dof_4*tmp_qloop_3 + k_dof_5*tmp_qloop_2 + k_dof_6*tmp_qloop_1 + k_dof_7*(-tmp_qloop_2 - tmp_qloop_3 + tmp_qloop_8*-4.0 + 4.0*_data_q_p_2[q]) + k_dof_8*(-tmp_qloop_1 - tmp_qloop_3 + tmp_qloop_6*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_9*(-tmp_qloop_10 + tmp_qloop_4*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t tmp_qloop_12 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 14];
                const real_t q_tmp_0_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q];
                const real_t q_tmp_0_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 5];
                const real_t q_tmp_0_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 6];
                const real_t q_tmp_0_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 7];
                const real_t q_tmp_0_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 8];
                const real_t q_tmp_0_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 9];
                const real_t q_tmp_1_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 10];
                const real_t q_tmp_1_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 11];
                const real_t q_tmp_1_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 12];
                const real_t q_tmp_1_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 13];
                const real_t q_tmp_1_4 = tmp_qloop_12;
                const real_t q_tmp_1_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 15];
                const real_t q_tmp_1_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 16];
                const real_t q_tmp_1_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 17];
                const real_t q_tmp_1_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 18];
                const real_t q_tmp_1_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 19];
                const real_t q_tmp_2_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 20];
                const real_t q_tmp_2_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 21];
                const real_t q_tmp_2_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 22];
                const real_t q_tmp_2_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 23];
                const real_t q_tmp_2_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 24];
                const real_t q_tmp_2_5 = tmp_qloop_12;
                const real_t q_tmp_2_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 25];
                const real_t q_tmp_2_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 26];
                const real_t q_tmp_2_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 27];
                const real_t q_tmp_2_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 28];
                const real_t q_tmp_3_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 29];
                const real_t q_tmp_3_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 30];
                const real_t q_tmp_3_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 31];
                const real_t q_tmp_3_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 32];
                const real_t q_tmp_3_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 33];
                const real_t q_tmp_3_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 34];
                const real_t q_tmp_3_6 = tmp_qloop_12;
                const real_t q_tmp_3_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 35];
                const real_t q_tmp_3_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 36];
                const real_t q_tmp_3_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[38*q + 37];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_0_6 = q_acc_0_6;
             const real_t elMat_0_7 = q_acc_0_7;
             const real_t elMat_0_8 = q_acc_0_8;
             const real_t elMat_0_9 = q_acc_0_9;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_1_6 = q_acc_1_6;
             const real_t elMat_1_7 = q_acc_1_7;
             const real_t elMat_1_8 = q_acc_1_8;
             const real_t elMat_1_9 = q_acc_1_9;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_2_6 = q_acc_2_6;
             const real_t elMat_2_7 = q_acc_2_7;
             const real_t elMat_2_8 = q_acc_2_8;
             const real_t elMat_2_9 = q_acc_2_9;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_3_6 = q_acc_3_6;
             const real_t elMat_3_7 = q_acc_3_7;
             const real_t elMat_3_8 = q_acc_3_8;
             const real_t elMat_3_9 = q_acc_3_9;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 10 );
             std::vector< real_t > _data_mat( 40 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[6] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[7] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[8] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[9] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_1_0));
             _data_mat[11] = ((real_t)(elMat_1_1));
             _data_mat[12] = ((real_t)(elMat_1_2));
             _data_mat[13] = ((real_t)(elMat_1_3));
             _data_mat[14] = ((real_t)(elMat_1_4));
             _data_mat[15] = ((real_t)(elMat_1_5));
             _data_mat[16] = ((real_t)(elMat_1_6));
             _data_mat[17] = ((real_t)(elMat_1_7));
             _data_mat[18] = ((real_t)(elMat_1_8));
             _data_mat[19] = ((real_t)(elMat_1_9));
             _data_mat[20] = ((real_t)(elMat_2_0));
             _data_mat[21] = ((real_t)(elMat_2_1));
             _data_mat[22] = ((real_t)(elMat_2_2));
             _data_mat[23] = ((real_t)(elMat_2_3));
             _data_mat[24] = ((real_t)(elMat_2_4));
             _data_mat[25] = ((real_t)(elMat_2_5));
             _data_mat[26] = ((real_t)(elMat_2_6));
             _data_mat[27] = ((real_t)(elMat_2_7));
             _data_mat[28] = ((real_t)(elMat_2_8));
             _data_mat[29] = ((real_t)(elMat_2_9));
             _data_mat[30] = ((real_t)(elMat_3_0));
             _data_mat[31] = ((real_t)(elMat_3_1));
             _data_mat[32] = ((real_t)(elMat_3_2));
             _data_mat[33] = ((real_t)(elMat_3_3));
             _data_mat[34] = ((real_t)(elMat_3_4));
             _data_mat[35] = ((real_t)(elMat_3_5));
             _data_mat[36] = ((real_t)(elMat_3_6));
             _data_mat[37] = ((real_t)(elMat_3_7));
             _data_mat[38] = ((real_t)(elMat_3_8));
             _data_mat[39] = ((real_t)(elMat_3_9));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
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
       const real_t jac_affine_0_0_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_1_0_GREEN_DOWN;
       const real_t jac_affine_0_1_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_2_0_GREEN_DOWN;
       const real_t jac_affine_0_2_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_3_0_GREEN_DOWN;
       const real_t jac_affine_1_0_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_1_1_GREEN_DOWN;
       const real_t jac_affine_1_1_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_2_1_GREEN_DOWN;
       const real_t jac_affine_1_2_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_3_1_GREEN_DOWN;
       const real_t jac_affine_2_0_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_1_2_GREEN_DOWN;
       const real_t jac_affine_2_1_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_2_2_GREEN_DOWN;
       const real_t jac_affine_2_2_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_3_2_GREEN_DOWN;
       const real_t abs_det_jac_affine_GREEN_DOWN = abs(jac_affine_0_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN - jac_affine_0_0_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_0_1_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN + jac_affine_0_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_0_2_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       {
          /* CellType.GREEN_DOWN */
          const real_t _data_phi_psi_jac_affine_det_0_0_GREEN_DOWN [] = {((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.03125)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555594)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518535)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518535)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518507)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555525)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518521)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555587)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555552)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518531)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518521)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518531)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555587)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.05555555555555558)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666666)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.05555555555555558)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518524)), 0.0, ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555552)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518524)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*2.775557561562892e-17)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555566)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.16666666666666671)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*9.2518585385429707e-18)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*-0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.018518518518518517)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555559)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.055555555555555559))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t k_dof_0 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_3_0 = 0.0;
             real_t q_acc_3_1 = 0.0;
             real_t q_acc_3_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_3_7 = 0.0;
             real_t q_acc_3_8 = 0.0;
             real_t q_acc_3_9 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_0*_data_q_p_2[q];
                const real_t tmp_qloop_3 = 4.0*_data_q_p_1[q]*_data_q_p_2[q];
                const real_t tmp_qloop_4 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                const real_t tmp_qloop_8 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                const real_t tmp_qloop_10 = tmp_qloop_1 + tmp_qloop_2;
                const real_t tmp_qloop_11 = (k_dof_0*(tmp_qloop_10 + tmp_qloop_3 + tmp_qloop_5 + tmp_qloop_7 + tmp_qloop_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_qloop_5 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_7 - _data_q_p_1[q]) + k_dof_3*(tmp_qloop_9 - _data_q_p_2[q]) + k_dof_4*tmp_qloop_3 + k_dof_5*tmp_qloop_2 + k_dof_6*tmp_qloop_1 + k_dof_7*(-tmp_qloop_2 - tmp_qloop_3 + tmp_qloop_8*-4.0 + 4.0*_data_q_p_2[q]) + k_dof_8*(-tmp_qloop_1 - tmp_qloop_3 + tmp_qloop_6*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_9*(-tmp_qloop_10 + tmp_qloop_4*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t tmp_qloop_12 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 14];
                const real_t q_tmp_0_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q];
                const real_t q_tmp_0_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 5];
                const real_t q_tmp_0_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 6];
                const real_t q_tmp_0_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 7];
                const real_t q_tmp_0_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 8];
                const real_t q_tmp_0_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 9];
                const real_t q_tmp_1_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 10];
                const real_t q_tmp_1_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 11];
                const real_t q_tmp_1_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 12];
                const real_t q_tmp_1_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 13];
                const real_t q_tmp_1_4 = tmp_qloop_12;
                const real_t q_tmp_1_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 15];
                const real_t q_tmp_1_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 16];
                const real_t q_tmp_1_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 17];
                const real_t q_tmp_1_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 18];
                const real_t q_tmp_1_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 19];
                const real_t q_tmp_2_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 20];
                const real_t q_tmp_2_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 21];
                const real_t q_tmp_2_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 22];
                const real_t q_tmp_2_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 23];
                const real_t q_tmp_2_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 24];
                const real_t q_tmp_2_5 = tmp_qloop_12;
                const real_t q_tmp_2_6 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 25];
                const real_t q_tmp_2_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 26];
                const real_t q_tmp_2_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 27];
                const real_t q_tmp_2_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 28];
                const real_t q_tmp_3_0 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 29];
                const real_t q_tmp_3_1 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 30];
                const real_t q_tmp_3_2 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 31];
                const real_t q_tmp_3_3 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 32];
                const real_t q_tmp_3_4 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 33];
                const real_t q_tmp_3_5 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 34];
                const real_t q_tmp_3_6 = tmp_qloop_12;
                const real_t q_tmp_3_7 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 35];
                const real_t q_tmp_3_8 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 36];
                const real_t q_tmp_3_9 = tmp_qloop_11*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[38*q + 37];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_3_7 = q_acc_3_7 + q_tmp_3_7;
                q_acc_3_8 = q_acc_3_8 + q_tmp_3_8;
                q_acc_3_9 = q_acc_3_9 + q_tmp_3_9;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_0_6 = q_acc_0_6;
             const real_t elMat_0_7 = q_acc_0_7;
             const real_t elMat_0_8 = q_acc_0_8;
             const real_t elMat_0_9 = q_acc_0_9;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_1_6 = q_acc_1_6;
             const real_t elMat_1_7 = q_acc_1_7;
             const real_t elMat_1_8 = q_acc_1_8;
             const real_t elMat_1_9 = q_acc_1_9;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_2_6 = q_acc_2_6;
             const real_t elMat_2_7 = q_acc_2_7;
             const real_t elMat_2_8 = q_acc_2_8;
             const real_t elMat_2_9 = q_acc_2_9;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_3_6 = q_acc_3_6;
             const real_t elMat_3_7 = q_acc_3_7;
             const real_t elMat_3_8 = q_acc_3_8;
             const real_t elMat_3_9 = q_acc_3_9;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 10 );
             std::vector< real_t > _data_mat( 40 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[6] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[7] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[8] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[9] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_1_0));
             _data_mat[11] = ((real_t)(elMat_1_1));
             _data_mat[12] = ((real_t)(elMat_1_2));
             _data_mat[13] = ((real_t)(elMat_1_3));
             _data_mat[14] = ((real_t)(elMat_1_4));
             _data_mat[15] = ((real_t)(elMat_1_5));
             _data_mat[16] = ((real_t)(elMat_1_6));
             _data_mat[17] = ((real_t)(elMat_1_7));
             _data_mat[18] = ((real_t)(elMat_1_8));
             _data_mat[19] = ((real_t)(elMat_1_9));
             _data_mat[20] = ((real_t)(elMat_2_0));
             _data_mat[21] = ((real_t)(elMat_2_1));
             _data_mat[22] = ((real_t)(elMat_2_2));
             _data_mat[23] = ((real_t)(elMat_2_3));
             _data_mat[24] = ((real_t)(elMat_2_4));
             _data_mat[25] = ((real_t)(elMat_2_5));
             _data_mat[26] = ((real_t)(elMat_2_6));
             _data_mat[27] = ((real_t)(elMat_2_7));
             _data_mat[28] = ((real_t)(elMat_2_8));
             _data_mat[29] = ((real_t)(elMat_2_9));
             _data_mat[30] = ((real_t)(elMat_3_0));
             _data_mat[31] = ((real_t)(elMat_3_1));
             _data_mat[32] = ((real_t)(elMat_3_2));
             _data_mat[33] = ((real_t)(elMat_3_3));
             _data_mat[34] = ((real_t)(elMat_3_4));
             _data_mat[35] = ((real_t)(elMat_3_5));
             _data_mat[36] = ((real_t)(elMat_3_6));
             _data_mat[37] = ((real_t)(elMat_3_7));
             _data_mat[38] = ((real_t)(elMat_3_8));
             _data_mat[39] = ((real_t)(elMat_3_9));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
