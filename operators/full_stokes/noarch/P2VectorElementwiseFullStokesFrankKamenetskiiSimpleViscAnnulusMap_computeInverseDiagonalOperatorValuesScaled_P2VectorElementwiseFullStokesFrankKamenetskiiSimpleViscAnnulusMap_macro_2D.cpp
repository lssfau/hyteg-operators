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

































#include "../P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscAnnulusMap::computeInverseDiagonalOperatorValuesScaled_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscAnnulusMap_macro_2D( real_t * RESTRICT  _data_T_extraEdge, real_t * RESTRICT  _data_T_extraVertex, real_t * RESTRICT  _data_invDiag__edge_0, real_t * RESTRICT  _data_invDiag__edge_1, real_t * RESTRICT  _data_invDiag__vertex_0, real_t * RESTRICT  _data_invDiag__vertex_1, real_t additive_offset, real_t depth_dependency, real_t diagScaling, real_t eta_ref, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t radius_CMB, real_t radius_surface, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t rock_chemical_composition_parameter, real_t temperature_surface, real_t thrVertex_0, real_t thrVertex_1 ) const
{
    {
       const real_t _data_q_w [] = {0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949};
   
       const real_t _data_q_p_0 [] = {0.44594849091596489, 0.091576213509770715, 0.10810301816807022, 0.81684757298045851, 0.44594849091596489, 0.091576213509770715};
   
       const real_t _data_q_p_1 [] = {0.10810301816807022, 0.81684757298045851, 0.44594849091596489, 0.091576213509770715, 0.44594849091596489, 0.091576213509770715};
   
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
       const real_t tmp_qloop_3 = rayVertex_1 - thrVertex_1;
       const real_t tmp_qloop_4 = -tmp_qloop_3;
       const real_t tmp_qloop_12 = rayVertex_0 - refVertex_0;
       const real_t tmp_qloop_13 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_14 = -tmp_qloop_13;
       const real_t tmp_qloop_15 = rayVertex_1 - refVertex_1;
       const real_t tmp_qloop_16 = 1.0 / (-tmp_qloop_12*tmp_qloop_4 + tmp_qloop_14*tmp_qloop_15);
       const real_t tmp_qloop_17 = radRayVertex - radRefVertex;
       const real_t tmp_qloop_18 = -tmp_qloop_17;
       const real_t tmp_qloop_19 = tmp_qloop_16*tmp_qloop_18;
       const real_t tmp_qloop_20 = tmp_qloop_19*1.0;
       {
          /* FaceType.GRAY */
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_GRAY*0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_0_GRAY*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091703 + jac_affine_inv_1_0_GRAY*0.63369514596091703)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*3.2673902919218341 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-3.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.36630485403908286)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3513818909915787 + jac_affine_inv_1_0_GRAY*-0.43241207267228088)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091692 + jac_affine_inv_1_0_GRAY*0.63369514596091692)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.9010854378827511 + jac_affine_inv_1_0_GRAY*-3.2673902919218341)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.56758792732771912 + jac_affine_inv_1_0_GRAY*0.56758792732771912)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596 + jac_affine_inv_1_0_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3513818909915787 + jac_affine_inv_1_0_GRAY*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-2.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.2673902919218341)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286 + jac_affine_inv_1_0_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_0_GRAY*2.9010854378827511 + jac_affine_inv_1_0_GRAY*-0.36630485403908286)), 0.0};
      
          const real_t _data_tabulated_and_untitled_0_1_GRAY [] = {0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_GRAY*0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_0_GRAY*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091703 + jac_affine_inv_1_0_GRAY*0.63369514596091703)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*3.2673902919218341 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-3.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.36630485403908286)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3513818909915787 + jac_affine_inv_1_0_GRAY*-0.43241207267228088)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091692 + jac_affine_inv_1_0_GRAY*0.63369514596091692)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.9010854378827511 + jac_affine_inv_1_0_GRAY*-3.2673902919218341)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.56758792732771912 + jac_affine_inv_1_0_GRAY*0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596 + jac_affine_inv_1_0_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3513818909915787 + jac_affine_inv_1_0_GRAY*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-2.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286 + jac_affine_inv_1_0_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_0_GRAY*2.9010854378827511 + jac_affine_inv_1_0_GRAY*-0.36630485403908286))};
      
          const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY*0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_1_GRAY*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091703 + jac_affine_inv_1_1_GRAY*0.63369514596091703)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*3.2673902919218341 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-3.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.36630485403908286)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3513818909915787 + jac_affine_inv_1_1_GRAY*-0.43241207267228088)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091692 + jac_affine_inv_1_1_GRAY*0.63369514596091692)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.9010854378827511 + jac_affine_inv_1_1_GRAY*-3.2673902919218341)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.56758792732771912 + jac_affine_inv_1_1_GRAY*0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596 + jac_affine_inv_1_1_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3513818909915787 + jac_affine_inv_1_1_GRAY*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-2.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286 + jac_affine_inv_1_1_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_1_GRAY*2.9010854378827511 + jac_affine_inv_1_1_GRAY*-0.36630485403908286)), 0.0};
      
          const real_t _data_tabulated_and_untitled_1_1_GRAY [] = {0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY*0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_1_GRAY*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091703 + jac_affine_inv_1_1_GRAY*0.63369514596091703)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*3.2673902919218341 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-3.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.36630485403908286)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3513818909915787 + jac_affine_inv_1_1_GRAY*-0.43241207267228088)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091692 + jac_affine_inv_1_1_GRAY*0.63369514596091692)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.9010854378827511 + jac_affine_inv_1_1_GRAY*-3.2673902919218341)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.56758792732771912 + jac_affine_inv_1_1_GRAY*0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596 + jac_affine_inv_1_1_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3513818909915787 + jac_affine_inv_1_1_GRAY*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-2.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286 + jac_affine_inv_1_1_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_1_GRAY*2.9010854378827511 + jac_affine_inv_1_1_GRAY*-0.36630485403908286))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
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
             const real_t T_extra_dof_0 = _data_T_extraVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t T_extra_dof_1 = _data_T_extraVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t T_extra_dof_2 = _data_T_extraVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t T_extra_dof_3 = _data_T_extraEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t T_extra_dof_4 = _data_T_extraEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t T_extra_dof_5 = _data_T_extraEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_11_11 = 0.0;
             const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
             const real_t tmp_qloop_1 = p_affine_0_0 - p_affine_2_0;
             const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
             const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_2 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_5 = (tmp_qloop_2*tmp_qloop_2);
                const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                const real_t tmp_qloop_11 = pow(tmp_qloop_10, -0.50000000000000000);
                const real_t tmp_qloop_21 = tmp_qloop_11*tmp_qloop_20;
                const real_t tmp_qloop_22 = tmp_qloop_21*tmp_qloop_4;
                const real_t tmp_qloop_23 = pow(tmp_qloop_10, -1.5000000000000000);
                const real_t tmp_qloop_24 = radRayVertex + tmp_qloop_19*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_8) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_2));
                const real_t tmp_qloop_25 = tmp_qloop_23*tmp_qloop_24;
                const real_t tmp_qloop_26 = tmp_qloop_25*1.0;
                const real_t tmp_qloop_27 = tmp_qloop_14*tmp_qloop_21;
                const real_t tmp_qloop_28 = tmp_qloop_2*tmp_qloop_26;
                const real_t tmp_qloop_31 = tmp_qloop_20*tmp_qloop_23;
                const real_t tmp_qloop_32 = tmp_qloop_31*tmp_qloop_4;
                const real_t tmp_qloop_33 = tmp_qloop_32*tmp_qloop_5;
                const real_t tmp_qloop_34 = pow(tmp_qloop_10, -2.5000000000000000)*tmp_qloop_24*3.0;
                const real_t tmp_qloop_35 = tmp_qloop_2*tmp_qloop_34*tmp_qloop_9;
                const real_t tmp_qloop_36 = tmp_qloop_32*tmp_qloop_9 - tmp_qloop_35;
                const real_t tmp_qloop_37 = tmp_qloop_13*tmp_qloop_31;
                const real_t tmp_qloop_38 = tmp_qloop_2*tmp_qloop_8;
                const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_38;
                const real_t tmp_qloop_40 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_5*tmp_qloop_8;
                const real_t tmp_qloop_42 = tmp_qloop_26*tmp_qloop_8 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_37*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_14*tmp_qloop_31*tmp_qloop_38;
                const real_t tmp_qloop_58 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_59 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_60 = tmp_qloop_59*2.0;
                const real_t tmp_qloop_61 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_62 = tmp_qloop_61*2.0;
                const real_t tmp_qloop_63 = rock_chemical_composition_parameter*(T_extra_dof_0*(tmp_qloop_58 + tmp_qloop_60 + tmp_qloop_62 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + T_extra_dof_1*(tmp_qloop_60 - _data_q_p_0[q]) + T_extra_dof_2*(tmp_qloop_62 - _data_q_p_1[q]) + T_extra_dof_3*tmp_qloop_58 + T_extra_dof_4*(-tmp_qloop_58 + tmp_qloop_61*-4.0 + 4.0*_data_q_p_1[q]) + T_extra_dof_5*(-tmp_qloop_58 + tmp_qloop_59*-4.0 + 4.0*_data_q_p_0[q]) - temperature_surface);
                const real_t tmp_qloop_64 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_65 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_66 = 1.0 / (abs(pow((tmp_qloop_64*tmp_qloop_64) + (tmp_qloop_65*tmp_qloop_65), 0.50000000000000000))*abs(pow((tmp_qloop_64*tmp_qloop_64) + (tmp_qloop_65*tmp_qloop_65), 0.50000000000000000)));
                const real_t tmp_qloop_67 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_65) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_64));
                const real_t tmp_qloop_68 = pow(tmp_qloop_66*(abs(tmp_qloop_64*tmp_qloop_67)*abs(tmp_qloop_64*tmp_qloop_67)) + tmp_qloop_66*(abs(tmp_qloop_65*tmp_qloop_67)*abs(tmp_qloop_65*tmp_qloop_67)), 0.50000000000000000);
                const real_t tmp_qloop_69 = -tmp_qloop_68;
                const real_t tmp_qloop_70 = depth_dependency*(radius_surface + tmp_qloop_69);
                const real_t tmp_qloop_71 = additive_offset - tmp_qloop_63 + tmp_qloop_70;
                const real_t tmp_qloop_72 = (tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_73 = (tmp_qloop_71*tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_74 = (tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_75 = (tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_76 = (tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_77 = radius_CMB + tmp_qloop_69;
                const real_t tmp_qloop_78 = (tmp_qloop_77*tmp_qloop_77);
                const real_t tmp_qloop_79 = 1.0 / (eta_ref)*((tmp_qloop_71 <= -2.5) ? (additive_offset*0.70801927789039698 + tmp_qloop_63*-0.70801927789039698 + tmp_qloop_70*0.70801927789039698 + tmp_qloop_72*0.25619887829476801 + tmp_qloop_73*0.049440241998136299 + tmp_qloop_74*0.0050119007869658802 + tmp_qloop_75*0.000210799310036196 + 0.84819864056416305): ((tmp_qloop_71 >= -2.5 && tmp_qloop_71 <= 0.0) ? (additive_offset*0.999816711696631 + tmp_qloop_63*-0.999816711696631 + tmp_qloop_70*0.999816711696631 + tmp_qloop_72*0.49874653174445999 + tmp_qloop_73*0.163477078891512 + tmp_qloop_74*0.0377262341425878 + tmp_qloop_75*0.0057137319852466704 + tmp_qloop_76*0.00042229066167372002 + 0.99999631202959804): ((tmp_qloop_71 >= 0.0 && tmp_qloop_71 <= 1.25) ? (additive_offset*1.0002311481775901 + tmp_qloop_63*-1.0002311481775901 + tmp_qloop_70*1.0002311481775901 + tmp_qloop_72*0.49781576903043201 + tmp_qloop_73*0.17411796050345499 + tmp_qloop_74*0.030456484353984001 + tmp_qloop_75*0.0156585460585765 + 0.99999625640632195): ((tmp_qloop_71 >= 1.25 && tmp_qloop_71 <= 2.5) ? (additive_offset*0.72915233588440898 + tmp_qloop_63*-0.72915233588440898 + tmp_qloop_70*0.72915233588440898 + tmp_qloop_72*0.9392688549289 + tmp_qloop_73*-0.21938605668132599 + tmp_qloop_74*0.23813465659153299 + tmp_qloop_75*-0.048116994406515803 + tmp_qloop_76*0.0091901766476822806 + 1.0701841156342999): ((tmp_qloop_71 >= 2.5 && tmp_qloop_71 <= 3.75) ? (additive_offset*-18.157774987389999 + tmp_qloop_63*18.157774987389999 + tmp_qloop_70*-18.157774987389999 + tmp_qloop_72*18.216957764537799 + tmp_qloop_73*-8.7181905368482795 + tmp_qloop_74*2.61245893835647 + tmp_qloop_75*-0.40584114855030301 + tmp_qloop_76*0.031929232673434102 + 9.7311987868742502): ((tmp_qloop_71 >= 3.75 && tmp_qloop_71 <= 4.375) ? (additive_offset*308.46588370142803 + tmp_qloop_63*-308.46588370142803 + tmp_qloop_70*308.46588370142803 + tmp_qloop_72*-172.70828167835899 + tmp_qloop_73*50.0684690859892 + tmp_qloop_74*-7.4040453575121603 + tmp_qloop_75*0.48433410712200098 - 220.83741149551901): (additive_offset*-935.63959456652196 + tmp_qloop_63*935.63959456652196 + tmp_qloop_70*-935.63959456652196 + tmp_qloop_72*557.83752587300603 + tmp_qloop_73*-179.24929535351001 + tmp_qloop_74*33.176006484038297 + tmp_qloop_75*-3.3536686327068299 + tmp_qloop_76*0.15155124630876601 + 664.05710533428396)))))))*((tmp_qloop_77 >= -0.75) ? (1.25e+23): ((tmp_qloop_77 >= -0.75840517241379302) ? (radius_CMB*5.43063135866058e+26 + tmp_qloop_68*-5.43063135866058e+26 + tmp_qloop_78*3.54619628745821e+26 + 2.0794881073001899e+26): ((tmp_qloop_77 >= -0.76400862068965503) ? (radius_CMB*2.8816164906437698e+26 + tmp_qloop_68*-2.8816164906437698e+26 + tmp_qloop_78*1.8656863432129701e+26 + 1.11289507706839e+26): ((tmp_qloop_77 >= -0.77241379310344804) ? (radius_CMB*1.66471118539444e+26 + tmp_qloop_68*-1.66471118539444e+26 + tmp_qloop_78*1.06929133385375e+26 + 6.4803200518165701e+25): ((tmp_qloop_77 >= -0.85172413999999996) ? (1.5e+22): ((tmp_qloop_77 >= -0.85948275862069001) ? (radius_CMB*6.6965235842778496e+25 + tmp_qloop_68*-6.6965235842778496e+25 + tmp_qloop_78*3.8579740318342099e+25 + 2.90638521562008e+25): ((tmp_qloop_77 >= -0.86465517241379297) ? (radius_CMB*3.9127983014155496e+25 + tmp_qloop_68*-3.9127983014155496e+25 + tmp_qloop_78*2.2385551110116e+25 + 1.7101032729417599e+25): ((tmp_qloop_77 >= -0.87241379310344802) ? (radius_CMB*2.4361020984252302e+25 + tmp_qloop_68*-2.4361020984252302e+25 + tmp_qloop_78*1.38463307937214e+25 + 1.0716867679420699e+25): ((tmp_qloop_77 >= -0.93793103) ? (2.5e+21): ((tmp_qloop_77 >= -0.95344827586206904) ? (radius_CMB*3.6535322574369698e+25 + tmp_qloop_68*-3.6535322574369698e+25 + tmp_qloop_78*1.9551462059537398e+25 + 1.70704057747143e+25): ((tmp_qloop_77 >= -0.96379310344827596) ? (radius_CMB*9.6647891247610802e+25 + tmp_qloop_68*-9.6647891247610802e+25 + tmp_qloop_78*5.10752322498446e+25 + 4.57275182542852e+25): ((tmp_qloop_77 >= -0.97413793103448298) ? (radius_CMB*2.4634415249381102e+26 + tmp_qloop_68*-2.4634415249381102e+26 + tmp_qloop_78*1.28735188889197e+26 + 1.17865630354825e+26): ((tmp_qloop_77 >= -0.98448275862069001) ? (radius_CMB*5.3212721590952799e+26 + tmp_qloop_68*-5.3212721590952799e+26 + tmp_qloop_78*2.7542030108487401e+26 + 2.5706169141506601e+26): (radius_CMB*1.7196602723807901e+27 + tmp_qloop_68*-1.7196602723807901e+27 + tmp_qloop_78*8.7854567127168094e+26 + 8.4161460110911101e+26))))))))))))))*_data_q_w[q];
                const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                const real_t abs_det_jac_blending = tmp_qloop_29;
                const real_t tmp_qloop_50 = abs_det_jac_blending*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1];
                const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                const real_t tmp_qloop_45 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q];
                const real_t tmp_qloop_54 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q];
                const real_t tmp_qloop_80 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_84 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3];
                const real_t tmp_qloop_88 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4];
                const real_t tmp_qloop_92 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5];
                const real_t tmp_qloop_96 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6];
                const real_t tmp_qloop_102 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7];
                const real_t tmp_qloop_106 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 1];
                const real_t tmp_qloop_114 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 2];
                const real_t tmp_qloop_118 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 3];
                const real_t tmp_qloop_122 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 4];
                const real_t tmp_qloop_126 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 5];
                const real_t tmp_qloop_130 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_GRAY[7*q + 6];
                const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                const real_t tmp_qloop_47 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q];
                const real_t tmp_qloop_52 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q];
                const real_t tmp_qloop_82 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                const real_t tmp_qloop_86 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3];
                const real_t tmp_qloop_90 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4];
                const real_t tmp_qloop_94 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5];
                const real_t tmp_qloop_98 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6];
                const real_t tmp_qloop_100 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 1];
                const real_t tmp_qloop_108 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7];
                const real_t tmp_qloop_112 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 2];
                const real_t tmp_qloop_116 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 3];
                const real_t tmp_qloop_120 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 4];
                const real_t tmp_qloop_124 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 5];
                const real_t tmp_qloop_128 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_GRAY[7*q + 6];
                const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                const real_t tmp_qloop_46 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_55 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q];
                const real_t tmp_qloop_56 = tmp_qloop_54 + tmp_qloop_55;
                const real_t tmp_qloop_57 = tmp_qloop_54*0.5 + tmp_qloop_55*0.5;
                const real_t tmp_qloop_81 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 1];
                const real_t tmp_qloop_85 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 2];
                const real_t tmp_qloop_89 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 3];
                const real_t tmp_qloop_93 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 4];
                const real_t tmp_qloop_97 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 5];
                const real_t tmp_qloop_103 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 6];
                const real_t tmp_qloop_104 = tmp_qloop_102 + tmp_qloop_103;
                const real_t tmp_qloop_105 = (tmp_qloop_102*1.0 + tmp_qloop_103*1.0)*(tmp_qloop_102*2.0 + tmp_qloop_103*2.0);
                const real_t tmp_qloop_107 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 1];
                const real_t tmp_qloop_115 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 2];
                const real_t tmp_qloop_119 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 3];
                const real_t tmp_qloop_123 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 4];
                const real_t tmp_qloop_127 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 5];
                const real_t tmp_qloop_131 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_GRAY[7*q + 6];
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                const real_t tmp_qloop_48 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q];
                const real_t tmp_qloop_49 = tmp_qloop_47 + tmp_qloop_48;
                const real_t tmp_qloop_51 = (tmp_qloop_47*1.0 + tmp_qloop_48*1.0)*(tmp_qloop_47*2.0 + tmp_qloop_48*2.0);
                const real_t tmp_qloop_53 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q];
                const real_t tmp_qloop_83 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 1];
                const real_t tmp_qloop_87 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 2];
                const real_t tmp_qloop_91 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 3];
                const real_t tmp_qloop_95 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 4];
                const real_t tmp_qloop_99 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 5];
                const real_t tmp_qloop_101 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 1];
                const real_t tmp_qloop_109 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[7*q + 6];
                const real_t tmp_qloop_110 = tmp_qloop_108 + tmp_qloop_109;
                const real_t tmp_qloop_111 = tmp_qloop_108*0.5 + tmp_qloop_109*0.5;
                const real_t tmp_qloop_113 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 2];
                const real_t tmp_qloop_117 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 3];
                const real_t tmp_qloop_121 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 4];
                const real_t tmp_qloop_125 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 5];
                const real_t tmp_qloop_129 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_GRAY[7*q + 6];
                const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                const real_t q_tmp_0_0 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_45 + tmp_qloop_46 + tmp_qloop_49)*(tmp_qloop_45 + tmp_qloop_46 + tmp_qloop_49)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_45*1.0 + tmp_qloop_46*1.0)*(tmp_qloop_45*2.0 + tmp_qloop_46*2.0) + (tmp_qloop_52 + tmp_qloop_53 + tmp_qloop_56)*(tmp_qloop_52*0.5 + tmp_qloop_53*0.5 + tmp_qloop_57)*2.0));
                const real_t q_tmp_1_1 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_80 + tmp_qloop_81)*(tmp_qloop_49 + tmp_qloop_80 + tmp_qloop_81)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_80*1.0 + tmp_qloop_81*1.0)*(tmp_qloop_80*2.0 + tmp_qloop_81*2.0) + (tmp_qloop_56 + tmp_qloop_82 + tmp_qloop_83)*(tmp_qloop_57 + tmp_qloop_82*0.5 + tmp_qloop_83*0.5)*2.0));
                const real_t q_tmp_2_2 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_84 + tmp_qloop_85)*(tmp_qloop_49 + tmp_qloop_84 + tmp_qloop_85)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_84*1.0 + tmp_qloop_85*1.0)*(tmp_qloop_84*2.0 + tmp_qloop_85*2.0) + (tmp_qloop_56 + tmp_qloop_86 + tmp_qloop_87)*(tmp_qloop_57 + tmp_qloop_86*0.5 + tmp_qloop_87*0.5)*2.0));
                const real_t q_tmp_3_3 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_88 + tmp_qloop_89)*(tmp_qloop_49 + tmp_qloop_88 + tmp_qloop_89)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_88*1.0 + tmp_qloop_89*1.0)*(tmp_qloop_88*2.0 + tmp_qloop_89*2.0) + (tmp_qloop_56 + tmp_qloop_90 + tmp_qloop_91)*(tmp_qloop_57 + tmp_qloop_90*0.5 + tmp_qloop_91*0.5)*2.0));
                const real_t q_tmp_4_4 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_92 + tmp_qloop_93)*(tmp_qloop_49 + tmp_qloop_92 + tmp_qloop_93)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_92*1.0 + tmp_qloop_93*1.0)*(tmp_qloop_92*2.0 + tmp_qloop_93*2.0) + (tmp_qloop_56 + tmp_qloop_94 + tmp_qloop_95)*(tmp_qloop_57 + tmp_qloop_94*0.5 + tmp_qloop_95*0.5)*2.0));
                const real_t q_tmp_5_5 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_96 + tmp_qloop_97)*(tmp_qloop_49 + tmp_qloop_96 + tmp_qloop_97)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_96*1.0 + tmp_qloop_97*1.0)*(tmp_qloop_96*2.0 + tmp_qloop_97*2.0) + (tmp_qloop_56 + tmp_qloop_98 + tmp_qloop_99)*(tmp_qloop_57 + tmp_qloop_98*0.5 + tmp_qloop_99*0.5)*2.0));
                const real_t q_tmp_6_6 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_100 + tmp_qloop_101 + tmp_qloop_104)*(tmp_qloop_100 + tmp_qloop_101 + tmp_qloop_104)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_100*1.0 + tmp_qloop_101*1.0)*(tmp_qloop_100*2.0 + tmp_qloop_101*2.0) + (tmp_qloop_106 + tmp_qloop_107 + tmp_qloop_110)*(tmp_qloop_106*0.5 + tmp_qloop_107*0.5 + tmp_qloop_111)*2.0));
                const real_t q_tmp_7_7 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_112 + tmp_qloop_113)*(tmp_qloop_104 + tmp_qloop_112 + tmp_qloop_113)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_112*1.0 + tmp_qloop_113*1.0)*(tmp_qloop_112*2.0 + tmp_qloop_113*2.0) + (tmp_qloop_110 + tmp_qloop_114 + tmp_qloop_115)*(tmp_qloop_111 + tmp_qloop_114*0.5 + tmp_qloop_115*0.5)*2.0));
                const real_t q_tmp_8_8 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_116 + tmp_qloop_117)*(tmp_qloop_104 + tmp_qloop_116 + tmp_qloop_117)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_116*1.0 + tmp_qloop_117*1.0)*(tmp_qloop_116*2.0 + tmp_qloop_117*2.0) + (tmp_qloop_110 + tmp_qloop_118 + tmp_qloop_119)*(tmp_qloop_111 + tmp_qloop_118*0.5 + tmp_qloop_119*0.5)*2.0));
                const real_t q_tmp_9_9 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_120 + tmp_qloop_121)*(tmp_qloop_104 + tmp_qloop_120 + tmp_qloop_121)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_120*1.0 + tmp_qloop_121*1.0)*(tmp_qloop_120*2.0 + tmp_qloop_121*2.0) + (tmp_qloop_110 + tmp_qloop_122 + tmp_qloop_123)*(tmp_qloop_111 + tmp_qloop_122*0.5 + tmp_qloop_123*0.5)*2.0));
                const real_t q_tmp_10_10 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_124 + tmp_qloop_125)*(tmp_qloop_104 + tmp_qloop_124 + tmp_qloop_125)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_124*1.0 + tmp_qloop_125*1.0)*(tmp_qloop_124*2.0 + tmp_qloop_125*2.0) + (tmp_qloop_110 + tmp_qloop_126 + tmp_qloop_127)*(tmp_qloop_111 + tmp_qloop_126*0.5 + tmp_qloop_127*0.5)*2.0));
                const real_t q_tmp_11_11 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_128 + tmp_qloop_129)*(tmp_qloop_104 + tmp_qloop_128 + tmp_qloop_129)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_128*1.0 + tmp_qloop_129*1.0)*(tmp_qloop_128*2.0 + tmp_qloop_129*2.0) + (tmp_qloop_110 + tmp_qloop_130 + tmp_qloop_131)*(tmp_qloop_111 + tmp_qloop_130*0.5 + tmp_qloop_131*0.5)*2.0));
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             const real_t elMatDiag_10 = q_acc_10_10;
             const real_t elMatDiag_11 = q_acc_11_11;
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(jac_affine_inv_0_0_BLUE*-0.78379396366385956 + jac_affine_inv_1_0_BLUE*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_BLUE*0.43241207267228088 + jac_affine_inv_1_0_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.43241207267228088 + jac_affine_inv_1_0_BLUE*1.3513818909915787)), ((real_t)(jac_affine_inv_1_0_BLUE*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.63369514596091703 + jac_affine_inv_1_0_BLUE*0.63369514596091703)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*3.2673902919218341 + jac_affine_inv_1_0_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-3.2673902919218341 + jac_affine_inv_1_0_BLUE*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.36630485403908286)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-0.78379396366385956 + jac_affine_inv_1_0_BLUE*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*1.7837939636638596 + jac_affine_inv_1_0_BLUE*0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3513818909915787 + jac_affine_inv_1_0_BLUE*-0.43241207267228088)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.63369514596091692 + jac_affine_inv_1_0_BLUE*0.63369514596091692)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_BLUE*0.36630485403908286 + jac_affine_inv_1_0_BLUE*3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.9010854378827511 + jac_affine_inv_1_0_BLUE*-3.2673902919218341)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.56758792732771912 + jac_affine_inv_1_0_BLUE*0.56758792732771912)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*1.7837939636638596 + jac_affine_inv_1_0_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.7837939636638596 + jac_affine_inv_1_0_BLUE*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3513818909915787 + jac_affine_inv_1_0_BLUE*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-2.2673902919218341 + jac_affine_inv_1_0_BLUE*-2.2673902919218341)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_BLUE*0.36630485403908286 + jac_affine_inv_1_0_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.36630485403908286 + jac_affine_inv_1_0_BLUE*2.9010854378827511)), ((real_t)(jac_affine_inv_0_0_BLUE*2.9010854378827511 + jac_affine_inv_1_0_BLUE*-0.36630485403908286)), 0.0};
      
          const real_t _data_tabulated_and_untitled_0_1_BLUE [] = {0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-0.78379396366385956 + jac_affine_inv_1_0_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_BLUE*0.43241207267228088 + jac_affine_inv_1_0_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.43241207267228088 + jac_affine_inv_1_0_BLUE*1.3513818909915787)), ((real_t)(jac_affine_inv_1_0_BLUE*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.63369514596091703 + jac_affine_inv_1_0_BLUE*0.63369514596091703)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*3.2673902919218341 + jac_affine_inv_1_0_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-3.2673902919218341 + jac_affine_inv_1_0_BLUE*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.36630485403908286)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-0.78379396366385956 + jac_affine_inv_1_0_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*1.7837939636638596 + jac_affine_inv_1_0_BLUE*0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3513818909915787 + jac_affine_inv_1_0_BLUE*-0.43241207267228088)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.63369514596091692 + jac_affine_inv_1_0_BLUE*0.63369514596091692)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_BLUE*0.36630485403908286 + jac_affine_inv_1_0_BLUE*3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.9010854378827511 + jac_affine_inv_1_0_BLUE*-3.2673902919218341)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.56758792732771912 + jac_affine_inv_1_0_BLUE*0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*1.7837939636638596 + jac_affine_inv_1_0_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.7837939636638596 + jac_affine_inv_1_0_BLUE*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3513818909915787 + jac_affine_inv_1_0_BLUE*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-2.2673902919218341 + jac_affine_inv_1_0_BLUE*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_BLUE*0.36630485403908286 + jac_affine_inv_1_0_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.36630485403908286 + jac_affine_inv_1_0_BLUE*2.9010854378827511)), ((real_t)(jac_affine_inv_0_0_BLUE*2.9010854378827511 + jac_affine_inv_1_0_BLUE*-0.36630485403908286))};
      
          const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {((real_t)(jac_affine_inv_0_1_BLUE*-0.78379396366385956 + jac_affine_inv_1_1_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_BLUE*0.43241207267228088 + jac_affine_inv_1_1_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.43241207267228088 + jac_affine_inv_1_1_BLUE*1.3513818909915787)), ((real_t)(jac_affine_inv_1_1_BLUE*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.63369514596091703 + jac_affine_inv_1_1_BLUE*0.63369514596091703)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*3.2673902919218341 + jac_affine_inv_1_1_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-3.2673902919218341 + jac_affine_inv_1_1_BLUE*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.36630485403908286)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-0.78379396366385956 + jac_affine_inv_1_1_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*1.7837939636638596 + jac_affine_inv_1_1_BLUE*0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3513818909915787 + jac_affine_inv_1_1_BLUE*-0.43241207267228088)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.63369514596091692 + jac_affine_inv_1_1_BLUE*0.63369514596091692)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_BLUE*0.36630485403908286 + jac_affine_inv_1_1_BLUE*3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.9010854378827511 + jac_affine_inv_1_1_BLUE*-3.2673902919218341)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.56758792732771912 + jac_affine_inv_1_1_BLUE*0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*1.7837939636638596 + jac_affine_inv_1_1_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.7837939636638596 + jac_affine_inv_1_1_BLUE*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3513818909915787 + jac_affine_inv_1_1_BLUE*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-2.2673902919218341 + jac_affine_inv_1_1_BLUE*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_BLUE*0.36630485403908286 + jac_affine_inv_1_1_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.36630485403908286 + jac_affine_inv_1_1_BLUE*2.9010854378827511)), ((real_t)(jac_affine_inv_0_1_BLUE*2.9010854378827511 + jac_affine_inv_1_1_BLUE*-0.36630485403908286)), 0.0};
      
          const real_t _data_tabulated_and_untitled_1_1_BLUE [] = {0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-0.78379396366385956 + jac_affine_inv_1_1_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_BLUE*0.43241207267228088 + jac_affine_inv_1_1_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.43241207267228088 + jac_affine_inv_1_1_BLUE*1.3513818909915787)), ((real_t)(jac_affine_inv_1_1_BLUE*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.63369514596091703 + jac_affine_inv_1_1_BLUE*0.63369514596091703)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*3.2673902919218341 + jac_affine_inv_1_1_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-3.2673902919218341 + jac_affine_inv_1_1_BLUE*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.36630485403908286)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-0.78379396366385956 + jac_affine_inv_1_1_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*1.7837939636638596 + jac_affine_inv_1_1_BLUE*0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3513818909915787 + jac_affine_inv_1_1_BLUE*-0.43241207267228088)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.63369514596091692 + jac_affine_inv_1_1_BLUE*0.63369514596091692)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_BLUE*0.36630485403908286 + jac_affine_inv_1_1_BLUE*3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.9010854378827511 + jac_affine_inv_1_1_BLUE*-3.2673902919218341)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.56758792732771912 + jac_affine_inv_1_1_BLUE*0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*1.7837939636638596 + jac_affine_inv_1_1_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.7837939636638596 + jac_affine_inv_1_1_BLUE*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3513818909915787 + jac_affine_inv_1_1_BLUE*-1.7837939636638596)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-2.2673902919218341 + jac_affine_inv_1_1_BLUE*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_BLUE*0.36630485403908286 + jac_affine_inv_1_1_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.36630485403908286 + jac_affine_inv_1_1_BLUE*2.9010854378827511)), ((real_t)(jac_affine_inv_0_1_BLUE*2.9010854378827511 + jac_affine_inv_1_1_BLUE*-0.36630485403908286))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
             const real_t T_extra_dof_0 = _data_T_extraVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t T_extra_dof_1 = _data_T_extraVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t T_extra_dof_2 = _data_T_extraVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t T_extra_dof_3 = _data_T_extraEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t T_extra_dof_4 = _data_T_extraEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t T_extra_dof_5 = _data_T_extraEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_11_11 = 0.0;
             const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
             const real_t tmp_qloop_1 = p_affine_0_0 - p_affine_2_0;
             const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
             const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_2 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_5 = (tmp_qloop_2*tmp_qloop_2);
                const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                const real_t tmp_qloop_11 = pow(tmp_qloop_10, -0.50000000000000000);
                const real_t tmp_qloop_21 = tmp_qloop_11*tmp_qloop_20;
                const real_t tmp_qloop_22 = tmp_qloop_21*tmp_qloop_4;
                const real_t tmp_qloop_23 = pow(tmp_qloop_10, -1.5000000000000000);
                const real_t tmp_qloop_24 = radRayVertex + tmp_qloop_19*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_8) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_2));
                const real_t tmp_qloop_25 = tmp_qloop_23*tmp_qloop_24;
                const real_t tmp_qloop_26 = tmp_qloop_25*1.0;
                const real_t tmp_qloop_27 = tmp_qloop_14*tmp_qloop_21;
                const real_t tmp_qloop_28 = tmp_qloop_2*tmp_qloop_26;
                const real_t tmp_qloop_31 = tmp_qloop_20*tmp_qloop_23;
                const real_t tmp_qloop_32 = tmp_qloop_31*tmp_qloop_4;
                const real_t tmp_qloop_33 = tmp_qloop_32*tmp_qloop_5;
                const real_t tmp_qloop_34 = pow(tmp_qloop_10, -2.5000000000000000)*tmp_qloop_24*3.0;
                const real_t tmp_qloop_35 = tmp_qloop_2*tmp_qloop_34*tmp_qloop_9;
                const real_t tmp_qloop_36 = tmp_qloop_32*tmp_qloop_9 - tmp_qloop_35;
                const real_t tmp_qloop_37 = tmp_qloop_13*tmp_qloop_31;
                const real_t tmp_qloop_38 = tmp_qloop_2*tmp_qloop_8;
                const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_38;
                const real_t tmp_qloop_40 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_5*tmp_qloop_8;
                const real_t tmp_qloop_42 = tmp_qloop_26*tmp_qloop_8 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_37*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_14*tmp_qloop_31*tmp_qloop_38;
                const real_t tmp_qloop_58 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_59 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_60 = tmp_qloop_59*2.0;
                const real_t tmp_qloop_61 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_62 = tmp_qloop_61*2.0;
                const real_t tmp_qloop_63 = rock_chemical_composition_parameter*(T_extra_dof_0*(tmp_qloop_58 + tmp_qloop_60 + tmp_qloop_62 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + T_extra_dof_1*(tmp_qloop_60 - _data_q_p_0[q]) + T_extra_dof_2*(tmp_qloop_62 - _data_q_p_1[q]) + T_extra_dof_3*tmp_qloop_58 + T_extra_dof_4*(-tmp_qloop_58 + tmp_qloop_61*-4.0 + 4.0*_data_q_p_1[q]) + T_extra_dof_5*(-tmp_qloop_58 + tmp_qloop_59*-4.0 + 4.0*_data_q_p_0[q]) - temperature_surface);
                const real_t tmp_qloop_64 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_65 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_66 = 1.0 / (abs(pow((tmp_qloop_64*tmp_qloop_64) + (tmp_qloop_65*tmp_qloop_65), 0.50000000000000000))*abs(pow((tmp_qloop_64*tmp_qloop_64) + (tmp_qloop_65*tmp_qloop_65), 0.50000000000000000)));
                const real_t tmp_qloop_67 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_65) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_64));
                const real_t tmp_qloop_68 = pow(tmp_qloop_66*(abs(tmp_qloop_64*tmp_qloop_67)*abs(tmp_qloop_64*tmp_qloop_67)) + tmp_qloop_66*(abs(tmp_qloop_65*tmp_qloop_67)*abs(tmp_qloop_65*tmp_qloop_67)), 0.50000000000000000);
                const real_t tmp_qloop_69 = -tmp_qloop_68;
                const real_t tmp_qloop_70 = depth_dependency*(radius_surface + tmp_qloop_69);
                const real_t tmp_qloop_71 = additive_offset - tmp_qloop_63 + tmp_qloop_70;
                const real_t tmp_qloop_72 = (tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_73 = (tmp_qloop_71*tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_74 = (tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_75 = (tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_76 = (tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71*tmp_qloop_71);
                const real_t tmp_qloop_77 = radius_CMB + tmp_qloop_69;
                const real_t tmp_qloop_78 = (tmp_qloop_77*tmp_qloop_77);
                const real_t tmp_qloop_79 = 1.0 / (eta_ref)*((tmp_qloop_71 <= -2.5) ? (additive_offset*0.70801927789039698 + tmp_qloop_63*-0.70801927789039698 + tmp_qloop_70*0.70801927789039698 + tmp_qloop_72*0.25619887829476801 + tmp_qloop_73*0.049440241998136299 + tmp_qloop_74*0.0050119007869658802 + tmp_qloop_75*0.000210799310036196 + 0.84819864056416305): ((tmp_qloop_71 >= -2.5 && tmp_qloop_71 <= 0.0) ? (additive_offset*0.999816711696631 + tmp_qloop_63*-0.999816711696631 + tmp_qloop_70*0.999816711696631 + tmp_qloop_72*0.49874653174445999 + tmp_qloop_73*0.163477078891512 + tmp_qloop_74*0.0377262341425878 + tmp_qloop_75*0.0057137319852466704 + tmp_qloop_76*0.00042229066167372002 + 0.99999631202959804): ((tmp_qloop_71 >= 0.0 && tmp_qloop_71 <= 1.25) ? (additive_offset*1.0002311481775901 + tmp_qloop_63*-1.0002311481775901 + tmp_qloop_70*1.0002311481775901 + tmp_qloop_72*0.49781576903043201 + tmp_qloop_73*0.17411796050345499 + tmp_qloop_74*0.030456484353984001 + tmp_qloop_75*0.0156585460585765 + 0.99999625640632195): ((tmp_qloop_71 >= 1.25 && tmp_qloop_71 <= 2.5) ? (additive_offset*0.72915233588440898 + tmp_qloop_63*-0.72915233588440898 + tmp_qloop_70*0.72915233588440898 + tmp_qloop_72*0.9392688549289 + tmp_qloop_73*-0.21938605668132599 + tmp_qloop_74*0.23813465659153299 + tmp_qloop_75*-0.048116994406515803 + tmp_qloop_76*0.0091901766476822806 + 1.0701841156342999): ((tmp_qloop_71 >= 2.5 && tmp_qloop_71 <= 3.75) ? (additive_offset*-18.157774987389999 + tmp_qloop_63*18.157774987389999 + tmp_qloop_70*-18.157774987389999 + tmp_qloop_72*18.216957764537799 + tmp_qloop_73*-8.7181905368482795 + tmp_qloop_74*2.61245893835647 + tmp_qloop_75*-0.40584114855030301 + tmp_qloop_76*0.031929232673434102 + 9.7311987868742502): ((tmp_qloop_71 >= 3.75 && tmp_qloop_71 <= 4.375) ? (additive_offset*308.46588370142803 + tmp_qloop_63*-308.46588370142803 + tmp_qloop_70*308.46588370142803 + tmp_qloop_72*-172.70828167835899 + tmp_qloop_73*50.0684690859892 + tmp_qloop_74*-7.4040453575121603 + tmp_qloop_75*0.48433410712200098 - 220.83741149551901): (additive_offset*-935.63959456652196 + tmp_qloop_63*935.63959456652196 + tmp_qloop_70*-935.63959456652196 + tmp_qloop_72*557.83752587300603 + tmp_qloop_73*-179.24929535351001 + tmp_qloop_74*33.176006484038297 + tmp_qloop_75*-3.3536686327068299 + tmp_qloop_76*0.15155124630876601 + 664.05710533428396)))))))*((tmp_qloop_77 >= -0.75) ? (1.25e+23): ((tmp_qloop_77 >= -0.75840517241379302) ? (radius_CMB*5.43063135866058e+26 + tmp_qloop_68*-5.43063135866058e+26 + tmp_qloop_78*3.54619628745821e+26 + 2.0794881073001899e+26): ((tmp_qloop_77 >= -0.76400862068965503) ? (radius_CMB*2.8816164906437698e+26 + tmp_qloop_68*-2.8816164906437698e+26 + tmp_qloop_78*1.8656863432129701e+26 + 1.11289507706839e+26): ((tmp_qloop_77 >= -0.77241379310344804) ? (radius_CMB*1.66471118539444e+26 + tmp_qloop_68*-1.66471118539444e+26 + tmp_qloop_78*1.06929133385375e+26 + 6.4803200518165701e+25): ((tmp_qloop_77 >= -0.85172413999999996) ? (1.5e+22): ((tmp_qloop_77 >= -0.85948275862069001) ? (radius_CMB*6.6965235842778496e+25 + tmp_qloop_68*-6.6965235842778496e+25 + tmp_qloop_78*3.8579740318342099e+25 + 2.90638521562008e+25): ((tmp_qloop_77 >= -0.86465517241379297) ? (radius_CMB*3.9127983014155496e+25 + tmp_qloop_68*-3.9127983014155496e+25 + tmp_qloop_78*2.2385551110116e+25 + 1.7101032729417599e+25): ((tmp_qloop_77 >= -0.87241379310344802) ? (radius_CMB*2.4361020984252302e+25 + tmp_qloop_68*-2.4361020984252302e+25 + tmp_qloop_78*1.38463307937214e+25 + 1.0716867679420699e+25): ((tmp_qloop_77 >= -0.93793103) ? (2.5e+21): ((tmp_qloop_77 >= -0.95344827586206904) ? (radius_CMB*3.6535322574369698e+25 + tmp_qloop_68*-3.6535322574369698e+25 + tmp_qloop_78*1.9551462059537398e+25 + 1.70704057747143e+25): ((tmp_qloop_77 >= -0.96379310344827596) ? (radius_CMB*9.6647891247610802e+25 + tmp_qloop_68*-9.6647891247610802e+25 + tmp_qloop_78*5.10752322498446e+25 + 4.57275182542852e+25): ((tmp_qloop_77 >= -0.97413793103448298) ? (radius_CMB*2.4634415249381102e+26 + tmp_qloop_68*-2.4634415249381102e+26 + tmp_qloop_78*1.28735188889197e+26 + 1.17865630354825e+26): ((tmp_qloop_77 >= -0.98448275862069001) ? (radius_CMB*5.3212721590952799e+26 + tmp_qloop_68*-5.3212721590952799e+26 + tmp_qloop_78*2.7542030108487401e+26 + 2.5706169141506601e+26): (radius_CMB*1.7196602723807901e+27 + tmp_qloop_68*-1.7196602723807901e+27 + tmp_qloop_78*8.7854567127168094e+26 + 8.4161460110911101e+26))))))))))))))*_data_q_w[q];
                const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                const real_t abs_det_jac_blending = tmp_qloop_29;
                const real_t tmp_qloop_50 = abs_det_jac_blending*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1];
                const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                const real_t tmp_qloop_45 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q];
                const real_t tmp_qloop_54 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q];
                const real_t tmp_qloop_80 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_84 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 3];
                const real_t tmp_qloop_88 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 4];
                const real_t tmp_qloop_92 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 5];
                const real_t tmp_qloop_96 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 6];
                const real_t tmp_qloop_102 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[8*q + 7];
                const real_t tmp_qloop_106 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 1];
                const real_t tmp_qloop_114 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 2];
                const real_t tmp_qloop_118 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 3];
                const real_t tmp_qloop_122 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 4];
                const real_t tmp_qloop_126 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 5];
                const real_t tmp_qloop_130 = jac_blending_inv_0_0*_data_tabulated_and_untitled_0_1_BLUE[7*q + 6];
                const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                const real_t tmp_qloop_47 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q];
                const real_t tmp_qloop_52 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q];
                const real_t tmp_qloop_82 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                const real_t tmp_qloop_86 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 3];
                const real_t tmp_qloop_90 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 4];
                const real_t tmp_qloop_94 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 5];
                const real_t tmp_qloop_98 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 6];
                const real_t tmp_qloop_100 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 1];
                const real_t tmp_qloop_108 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[8*q + 7];
                const real_t tmp_qloop_112 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 2];
                const real_t tmp_qloop_116 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 3];
                const real_t tmp_qloop_120 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 4];
                const real_t tmp_qloop_124 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 5];
                const real_t tmp_qloop_128 = jac_blending_inv_0_1*_data_tabulated_and_untitled_0_1_BLUE[7*q + 6];
                const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                const real_t tmp_qloop_46 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_55 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q];
                const real_t tmp_qloop_56 = tmp_qloop_54 + tmp_qloop_55;
                const real_t tmp_qloop_57 = tmp_qloop_54*0.5 + tmp_qloop_55*0.5;
                const real_t tmp_qloop_81 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 1];
                const real_t tmp_qloop_85 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 2];
                const real_t tmp_qloop_89 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 3];
                const real_t tmp_qloop_93 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 4];
                const real_t tmp_qloop_97 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 5];
                const real_t tmp_qloop_103 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[7*q + 6];
                const real_t tmp_qloop_104 = tmp_qloop_102 + tmp_qloop_103;
                const real_t tmp_qloop_105 = (tmp_qloop_102*1.0 + tmp_qloop_103*1.0)*(tmp_qloop_102*2.0 + tmp_qloop_103*2.0);
                const real_t tmp_qloop_107 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 1];
                const real_t tmp_qloop_115 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 2];
                const real_t tmp_qloop_119 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 3];
                const real_t tmp_qloop_123 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 4];
                const real_t tmp_qloop_127 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 5];
                const real_t tmp_qloop_131 = jac_blending_inv_1_0*_data_tabulated_and_untitled_1_1_BLUE[7*q + 6];
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                const real_t tmp_qloop_48 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q];
                const real_t tmp_qloop_49 = tmp_qloop_47 + tmp_qloop_48;
                const real_t tmp_qloop_51 = (tmp_qloop_47*1.0 + tmp_qloop_48*1.0)*(tmp_qloop_47*2.0 + tmp_qloop_48*2.0);
                const real_t tmp_qloop_53 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q];
                const real_t tmp_qloop_83 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 1];
                const real_t tmp_qloop_87 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 2];
                const real_t tmp_qloop_91 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 3];
                const real_t tmp_qloop_95 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 4];
                const real_t tmp_qloop_99 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 5];
                const real_t tmp_qloop_101 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 1];
                const real_t tmp_qloop_109 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[7*q + 6];
                const real_t tmp_qloop_110 = tmp_qloop_108 + tmp_qloop_109;
                const real_t tmp_qloop_111 = tmp_qloop_108*0.5 + tmp_qloop_109*0.5;
                const real_t tmp_qloop_113 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 2];
                const real_t tmp_qloop_117 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 3];
                const real_t tmp_qloop_121 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 4];
                const real_t tmp_qloop_125 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 5];
                const real_t tmp_qloop_129 = jac_blending_inv_1_1*_data_tabulated_and_untitled_1_1_BLUE[7*q + 6];
                const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                const real_t q_tmp_0_0 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_45 + tmp_qloop_46 + tmp_qloop_49)*(tmp_qloop_45 + tmp_qloop_46 + tmp_qloop_49)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_45*1.0 + tmp_qloop_46*1.0)*(tmp_qloop_45*2.0 + tmp_qloop_46*2.0) + (tmp_qloop_52 + tmp_qloop_53 + tmp_qloop_56)*(tmp_qloop_52*0.5 + tmp_qloop_53*0.5 + tmp_qloop_57)*2.0));
                const real_t q_tmp_1_1 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_80 + tmp_qloop_81)*(tmp_qloop_49 + tmp_qloop_80 + tmp_qloop_81)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_80*1.0 + tmp_qloop_81*1.0)*(tmp_qloop_80*2.0 + tmp_qloop_81*2.0) + (tmp_qloop_56 + tmp_qloop_82 + tmp_qloop_83)*(tmp_qloop_57 + tmp_qloop_82*0.5 + tmp_qloop_83*0.5)*2.0));
                const real_t q_tmp_2_2 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_84 + tmp_qloop_85)*(tmp_qloop_49 + tmp_qloop_84 + tmp_qloop_85)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_84*1.0 + tmp_qloop_85*1.0)*(tmp_qloop_84*2.0 + tmp_qloop_85*2.0) + (tmp_qloop_56 + tmp_qloop_86 + tmp_qloop_87)*(tmp_qloop_57 + tmp_qloop_86*0.5 + tmp_qloop_87*0.5)*2.0));
                const real_t q_tmp_3_3 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_88 + tmp_qloop_89)*(tmp_qloop_49 + tmp_qloop_88 + tmp_qloop_89)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_88*1.0 + tmp_qloop_89*1.0)*(tmp_qloop_88*2.0 + tmp_qloop_89*2.0) + (tmp_qloop_56 + tmp_qloop_90 + tmp_qloop_91)*(tmp_qloop_57 + tmp_qloop_90*0.5 + tmp_qloop_91*0.5)*2.0));
                const real_t q_tmp_4_4 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_92 + tmp_qloop_93)*(tmp_qloop_49 + tmp_qloop_92 + tmp_qloop_93)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_92*1.0 + tmp_qloop_93*1.0)*(tmp_qloop_92*2.0 + tmp_qloop_93*2.0) + (tmp_qloop_56 + tmp_qloop_94 + tmp_qloop_95)*(tmp_qloop_57 + tmp_qloop_94*0.5 + tmp_qloop_95*0.5)*2.0));
                const real_t q_tmp_5_5 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_49 + tmp_qloop_96 + tmp_qloop_97)*(tmp_qloop_49 + tmp_qloop_96 + tmp_qloop_97)) + tmp_qloop_50*(tmp_qloop_51 + (tmp_qloop_96*1.0 + tmp_qloop_97*1.0)*(tmp_qloop_96*2.0 + tmp_qloop_97*2.0) + (tmp_qloop_56 + tmp_qloop_98 + tmp_qloop_99)*(tmp_qloop_57 + tmp_qloop_98*0.5 + tmp_qloop_99*0.5)*2.0));
                const real_t q_tmp_6_6 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_100 + tmp_qloop_101 + tmp_qloop_104)*(tmp_qloop_100 + tmp_qloop_101 + tmp_qloop_104)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_100*1.0 + tmp_qloop_101*1.0)*(tmp_qloop_100*2.0 + tmp_qloop_101*2.0) + (tmp_qloop_106 + tmp_qloop_107 + tmp_qloop_110)*(tmp_qloop_106*0.5 + tmp_qloop_107*0.5 + tmp_qloop_111)*2.0));
                const real_t q_tmp_7_7 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_112 + tmp_qloop_113)*(tmp_qloop_104 + tmp_qloop_112 + tmp_qloop_113)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_112*1.0 + tmp_qloop_113*1.0)*(tmp_qloop_112*2.0 + tmp_qloop_113*2.0) + (tmp_qloop_110 + tmp_qloop_114 + tmp_qloop_115)*(tmp_qloop_111 + tmp_qloop_114*0.5 + tmp_qloop_115*0.5)*2.0));
                const real_t q_tmp_8_8 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_116 + tmp_qloop_117)*(tmp_qloop_104 + tmp_qloop_116 + tmp_qloop_117)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_116*1.0 + tmp_qloop_117*1.0)*(tmp_qloop_116*2.0 + tmp_qloop_117*2.0) + (tmp_qloop_110 + tmp_qloop_118 + tmp_qloop_119)*(tmp_qloop_111 + tmp_qloop_118*0.5 + tmp_qloop_119*0.5)*2.0));
                const real_t q_tmp_9_9 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_120 + tmp_qloop_121)*(tmp_qloop_104 + tmp_qloop_120 + tmp_qloop_121)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_120*1.0 + tmp_qloop_121*1.0)*(tmp_qloop_120*2.0 + tmp_qloop_121*2.0) + (tmp_qloop_110 + tmp_qloop_122 + tmp_qloop_123)*(tmp_qloop_111 + tmp_qloop_122*0.5 + tmp_qloop_123*0.5)*2.0));
                const real_t q_tmp_10_10 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_124 + tmp_qloop_125)*(tmp_qloop_104 + tmp_qloop_124 + tmp_qloop_125)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_124*1.0 + tmp_qloop_125*1.0)*(tmp_qloop_124*2.0 + tmp_qloop_125*2.0) + (tmp_qloop_110 + tmp_qloop_126 + tmp_qloop_127)*(tmp_qloop_111 + tmp_qloop_126*0.5 + tmp_qloop_127*0.5)*2.0));
                const real_t q_tmp_11_11 = tmp_qloop_79*(-tmp_qloop_50*((tmp_qloop_104 + tmp_qloop_128 + tmp_qloop_129)*(tmp_qloop_104 + tmp_qloop_128 + tmp_qloop_129)) + tmp_qloop_50*(tmp_qloop_105 + (tmp_qloop_128*1.0 + tmp_qloop_129*1.0)*(tmp_qloop_128*2.0 + tmp_qloop_129*2.0) + (tmp_qloop_110 + tmp_qloop_130 + tmp_qloop_131)*(tmp_qloop_111 + tmp_qloop_130*0.5 + tmp_qloop_131*0.5)*2.0));
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             const real_t elMatDiag_10 = q_acc_10_10;
             const real_t elMatDiag_11 = q_acc_11_11;
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
