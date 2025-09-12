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































#include "../P2ElementwiseDiffusionInvRho.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDiffusionInvRho::computeInverseDiagonalOperatorValuesScaled_P2ElementwiseDiffusionInvRho_macro_2D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t * RESTRICT  _data_rho, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949};
   
       const real_t _data_q_p_0 [] = {0.44594849091596489, 0.091576213509770715, 0.10810301816807022, 0.81684757298045851, 0.44594849091596489, 0.091576213509770715};
   
       const real_t _data_q_p_1 [] = {0.10810301816807022, 0.81684757298045851, 0.44594849091596489, 0.091576213509770715, 0.44594849091596489, 0.091576213509770715};
   
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
       const real_t _data_phi_0_0_BLUE [] = {0.44594849091596489, 0.44594849091596489, 0.10810301816807022, 0.091576213509770743, 0.091576213509770715, 0.81684757298045851, 0.44594849091596489, 0.10810301816807022, 0.44594849091596489, 0.091576213509770771, 0.81684757298045851, 0.091576213509770715, 0.10810301816807022, 0.44594849091596489, 0.44594849091596489, 0.81684757298045851, 0.091576213509770715, 0.091576213509770715};
   
       const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(jac_affine_inv_0_0_BLUE*-0.78379396366385956 + jac_affine_inv_1_0_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_BLUE*0.43241207267228088 + jac_affine_inv_1_0_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.43241207267228088 + jac_affine_inv_1_0_BLUE*1.3513818909915787)), ((real_t)(jac_affine_inv_1_0_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*0.63369514596091703 + jac_affine_inv_1_0_BLUE*0.63369514596091703)), ((real_t)(jac_affine_inv_0_0_BLUE)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*3.2673902919218341 + jac_affine_inv_1_0_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-3.2673902919218341 + jac_affine_inv_1_0_BLUE*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.78379396366385956 + jac_affine_inv_1_0_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*1.7837939636638596 + jac_affine_inv_1_0_BLUE*0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3513818909915787 + jac_affine_inv_1_0_BLUE*-0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_BLUE*0.63369514596091692 + jac_affine_inv_1_0_BLUE*0.63369514596091692)), ((real_t)(jac_affine_inv_0_0_BLUE)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_BLUE*0.36630485403908286 + jac_affine_inv_1_0_BLUE*3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.9010854378827511 + jac_affine_inv_1_0_BLUE*-3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*0.56758792732771912 + jac_affine_inv_1_0_BLUE*0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_BLUE)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*1.7837939636638596 + jac_affine_inv_1_0_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.7837939636638596 + jac_affine_inv_1_0_BLUE*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3513818909915787 + jac_affine_inv_1_0_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.2673902919218341 + jac_affine_inv_1_0_BLUE*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_BLUE*0.36630485403908286 + jac_affine_inv_1_0_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.36630485403908286 + jac_affine_inv_1_0_BLUE*2.9010854378827511)), ((real_t)(jac_affine_inv_0_0_BLUE*2.9010854378827511 + jac_affine_inv_1_0_BLUE*-0.36630485403908286))};
   
       const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {((real_t)(jac_affine_inv_0_1_BLUE*-0.78379396366385956 + jac_affine_inv_1_1_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE)), ((real_t)(jac_affine_inv_0_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_BLUE*0.43241207267228088 + jac_affine_inv_1_1_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.43241207267228088 + jac_affine_inv_1_1_BLUE*1.3513818909915787)), ((real_t)(jac_affine_inv_1_1_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*0.63369514596091703 + jac_affine_inv_1_1_BLUE*0.63369514596091703)), ((real_t)(jac_affine_inv_0_1_BLUE)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*3.2673902919218341 + jac_affine_inv_1_1_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-3.2673902919218341 + jac_affine_inv_1_1_BLUE*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.78379396366385956 + jac_affine_inv_1_1_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*1.7837939636638596 + jac_affine_inv_1_1_BLUE*0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3513818909915787 + jac_affine_inv_1_1_BLUE*-0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_BLUE*0.63369514596091692 + jac_affine_inv_1_1_BLUE*0.63369514596091692)), ((real_t)(jac_affine_inv_0_1_BLUE)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_BLUE*0.36630485403908286 + jac_affine_inv_1_1_BLUE*3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.9010854378827511 + jac_affine_inv_1_1_BLUE*-3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*0.56758792732771912 + jac_affine_inv_1_1_BLUE*0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_BLUE)), ((real_t)(jac_affine_inv_0_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*1.7837939636638596 + jac_affine_inv_1_1_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.7837939636638596 + jac_affine_inv_1_1_BLUE*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3513818909915787 + jac_affine_inv_1_1_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.2673902919218341 + jac_affine_inv_1_1_BLUE*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_BLUE*0.36630485403908286 + jac_affine_inv_1_1_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.36630485403908286 + jac_affine_inv_1_1_BLUE*2.9010854378827511)), ((real_t)(jac_affine_inv_0_1_BLUE*2.9010854378827511 + jac_affine_inv_1_1_BLUE*-0.36630485403908286))};
   
       const real_t _data_tabulated_and_untitled_0_1_BLUE [] = {((real_t)(jac_affine_inv_1_0_BLUE)), ((real_t)(jac_affine_inv_1_0_BLUE)), ((real_t)(jac_affine_inv_1_0_BLUE)), ((real_t)(jac_affine_inv_1_0_BLUE)), ((real_t)(jac_affine_inv_1_0_BLUE)), ((real_t)(jac_affine_inv_1_0_BLUE))};
   
       const real_t _data_tabulated_and_untitled_1_1_BLUE [] = {((real_t)(jac_affine_inv_1_1_BLUE)), ((real_t)(jac_affine_inv_1_1_BLUE)), ((real_t)(jac_affine_inv_1_1_BLUE)), ((real_t)(jac_affine_inv_1_1_BLUE)), ((real_t)(jac_affine_inv_1_1_BLUE)), ((real_t)(jac_affine_inv_1_1_BLUE))};
   
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
       const real_t _data_phi_0_0_GRAY [] = {0.44594849091596489, 0.44594849091596489, 0.10810301816807022, 0.091576213509770743, 0.091576213509770715, 0.81684757298045851, 0.44594849091596489, 0.10810301816807022, 0.44594849091596489, 0.091576213509770771, 0.81684757298045851, 0.091576213509770715, 0.10810301816807022, 0.44594849091596489, 0.44594849091596489, 0.81684757298045851, 0.091576213509770715, 0.091576213509770715};
   
       const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_GRAY*0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_0_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091703 + jac_affine_inv_1_0_GRAY*0.63369514596091703)), ((real_t)(jac_affine_inv_0_0_GRAY)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*3.2673902919218341 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-3.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3513818909915787 + jac_affine_inv_1_0_GRAY*-0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091692 + jac_affine_inv_1_0_GRAY*0.63369514596091692)), ((real_t)(jac_affine_inv_0_0_GRAY)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.9010854378827511 + jac_affine_inv_1_0_GRAY*-3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*0.56758792732771912 + jac_affine_inv_1_0_GRAY*0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_GRAY)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596 + jac_affine_inv_1_0_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3513818909915787 + jac_affine_inv_1_0_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286 + jac_affine_inv_1_0_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_0_GRAY*2.9010854378827511 + jac_affine_inv_1_0_GRAY*-0.36630485403908286))};
   
       const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY*0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091703 + jac_affine_inv_1_1_GRAY*0.63369514596091703)), ((real_t)(jac_affine_inv_0_1_GRAY)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*3.2673902919218341 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-3.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3513818909915787 + jac_affine_inv_1_1_GRAY*-0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091692 + jac_affine_inv_1_1_GRAY*0.63369514596091692)), ((real_t)(jac_affine_inv_0_1_GRAY)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.9010854378827511 + jac_affine_inv_1_1_GRAY*-3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*0.56758792732771912 + jac_affine_inv_1_1_GRAY*0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596 + jac_affine_inv_1_1_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3513818909915787 + jac_affine_inv_1_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286 + jac_affine_inv_1_1_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_1_GRAY*2.9010854378827511 + jac_affine_inv_1_1_GRAY*-0.36630485403908286))};
   
       const real_t _data_tabulated_and_untitled_0_1_GRAY [] = {((real_t)(jac_affine_inv_1_0_GRAY)), ((real_t)(jac_affine_inv_1_0_GRAY)), ((real_t)(jac_affine_inv_1_0_GRAY)), ((real_t)(jac_affine_inv_1_0_GRAY)), ((real_t)(jac_affine_inv_1_0_GRAY)), ((real_t)(jac_affine_inv_1_0_GRAY))};
   
       const real_t _data_tabulated_and_untitled_1_1_GRAY [] = {((real_t)(jac_affine_inv_1_1_GRAY)), ((real_t)(jac_affine_inv_1_1_GRAY)), ((real_t)(jac_affine_inv_1_1_GRAY)), ((real_t)(jac_affine_inv_1_1_GRAY)), ((real_t)(jac_affine_inv_1_1_GRAY)), ((real_t)(jac_affine_inv_1_1_GRAY))};
   
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d rho_dof_0 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d rho_dof_1 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d rho_dof_2 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_mul_pd(rho_dof_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),rho_dof_1);
                const __m256d tmp_qloop_1 = _mm256_add_pd(_mm256_mul_pd(rho_dof_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),rho_dof_2);
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
                  
                      const __m256d p_affine_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_2_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_2_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_5_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      for (int64_t q = 0; q < 6; q += 1)
                      {
                         const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[8*q + 1],_data_tabulated_and_untitled_0_0_GRAY[8*q + 1],_data_tabulated_and_untitled_0_0_GRAY[8*q + 1],_data_tabulated_and_untitled_0_0_GRAY[8*q + 1])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_0_1_GRAY[q],_data_tabulated_and_untitled_0_1_GRAY[q],_data_tabulated_and_untitled_0_1_GRAY[q],_data_tabulated_and_untitled_0_1_GRAY[q])));
                         const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[7*q + 1],_data_tabulated_and_untitled_1_0_GRAY[7*q + 1],_data_tabulated_and_untitled_1_0_GRAY[7*q + 1],_data_tabulated_and_untitled_1_0_GRAY[7*q + 1])),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_tabulated_and_untitled_1_1_GRAY[q],_data_tabulated_and_untitled_1_1_GRAY[q],_data_tabulated_and_untitled_1_1_GRAY[q],_data_tabulated_and_untitled_1_1_GRAY[q])));
                         const __m256d tmp_qloop_4 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_4,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_6 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_7 = _mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_8 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_10 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(rho_dof_0,_mm256_set_pd(_data_phi_0_0_GRAY[3*q],_data_phi_0_0_GRAY[3*q],_data_phi_0_0_GRAY[3*q],_data_phi_0_0_GRAY[3*q])),_mm256_mul_pd(rho_dof_1,_mm256_set_pd(_data_phi_0_0_GRAY[3*q + 1],_data_phi_0_0_GRAY[3*q + 1],_data_phi_0_0_GRAY[3*q + 1],_data_phi_0_0_GRAY[3*q + 1]))),_mm256_mul_pd(rho_dof_2,_mm256_set_pd(_data_phi_0_0_GRAY[3*q + 2],_data_phi_0_0_GRAY[3*q + 2],_data_phi_0_0_GRAY[3*q + 2],_data_phi_0_0_GRAY[3*q + 2])))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(rho_dof_0,_mm256_set_pd(_data_phi_0_0_GRAY[3*q],_data_phi_0_0_GRAY[3*q],_data_phi_0_0_GRAY[3*q],_data_phi_0_0_GRAY[3*q])),_mm256_mul_pd(rho_dof_1,_mm256_set_pd(_data_phi_0_0_GRAY[3*q + 1],_data_phi_0_0_GRAY[3*q + 1],_data_phi_0_0_GRAY[3*q + 1],_data_phi_0_0_GRAY[3*q + 1]))),_mm256_mul_pd(rho_dof_2,_mm256_set_pd(_data_phi_0_0_GRAY[3*q + 2],_data_phi_0_0_GRAY[3*q + 2],_data_phi_0_0_GRAY[3*q + 2],_data_phi_0_0_GRAY[3*q + 2]))))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[8*q + 2],_data_tabulated_and_untitled_0_0_GRAY[8*q + 2],_data_tabulated_and_untitled_0_0_GRAY[8*q + 2],_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]));
                         const __m256d q_tmp_0_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[8*q],_data_tabulated_and_untitled_0_0_GRAY[8*q],_data_tabulated_and_untitled_0_0_GRAY[8*q],_data_tabulated_and_untitled_0_0_GRAY[8*q])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[7*q],_data_tabulated_and_untitled_1_0_GRAY[7*q],_data_tabulated_and_untitled_1_0_GRAY[7*q],_data_tabulated_and_untitled_1_0_GRAY[7*q])))),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(3.0,3.0,3.0,3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(3.0,3.0,3.0,3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_qloop_5,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_9,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d q_tmp_1_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[8*q + 3],_data_tabulated_and_untitled_0_0_GRAY[8*q + 3],_data_tabulated_and_untitled_0_0_GRAY[8*q + 3],_data_tabulated_and_untitled_0_0_GRAY[8*q + 3])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[7*q + 2],_data_tabulated_and_untitled_1_0_GRAY[7*q + 2],_data_tabulated_and_untitled_1_0_GRAY[7*q + 2],_data_tabulated_and_untitled_1_0_GRAY[7*q + 2])))),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])));
                         const __m256d q_tmp_2_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[8*q + 4],_data_tabulated_and_untitled_0_0_GRAY[8*q + 4],_data_tabulated_and_untitled_0_0_GRAY[8*q + 4],_data_tabulated_and_untitled_0_0_GRAY[8*q + 4])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[7*q + 3],_data_tabulated_and_untitled_1_0_GRAY[7*q + 3],_data_tabulated_and_untitled_1_0_GRAY[7*q + 3],_data_tabulated_and_untitled_1_0_GRAY[7*q + 3])))),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_9,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d q_tmp_3_3 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_5),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[8*q + 5],_data_tabulated_and_untitled_0_0_GRAY[8*q + 5],_data_tabulated_and_untitled_0_0_GRAY[8*q + 5],_data_tabulated_and_untitled_0_0_GRAY[8*q + 5])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[7*q + 4],_data_tabulated_and_untitled_1_0_GRAY[7*q + 4],_data_tabulated_and_untitled_1_0_GRAY[7*q + 4],_data_tabulated_and_untitled_1_0_GRAY[7*q + 4])))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d q_tmp_4_4 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[8*q + 6],_data_tabulated_and_untitled_0_0_GRAY[8*q + 6],_data_tabulated_and_untitled_0_0_GRAY[8*q + 6],_data_tabulated_and_untitled_0_0_GRAY[8*q + 6])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[7*q + 5],_data_tabulated_and_untitled_1_0_GRAY[7*q + 5],_data_tabulated_and_untitled_1_0_GRAY[7*q + 5],_data_tabulated_and_untitled_1_0_GRAY[7*q + 5])))),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_8,_mm256_set_pd(4.0,4.0,4.0,4.0)),_mm256_mul_pd(tmp_qloop_4,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_5));
                         const __m256d q_tmp_5_5 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[8*q + 7],_data_tabulated_and_untitled_0_0_GRAY[8*q + 7],_data_tabulated_and_untitled_0_0_GRAY[8*q + 7],_data_tabulated_and_untitled_0_0_GRAY[8*q + 7])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[7*q + 6],_data_tabulated_and_untitled_1_0_GRAY[7*q + 6],_data_tabulated_and_untitled_1_0_GRAY[7*q + 6],_data_tabulated_and_untitled_1_0_GRAY[7*q + 6])))),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-4.0,-4.0,-4.0,-4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(4.0,4.0,4.0,4.0))),tmp_qloop_5));
                         q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                         q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                         q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                         q_acc_3_3 = _mm256_add_pd(q_acc_3_3,q_tmp_3_3);
                         q_acc_4_4 = _mm256_add_pd(q_acc_4_4,q_tmp_4_4);
                         q_acc_5_5 = _mm256_add_pd(q_acc_5_5,q_tmp_5_5);
                      }
                      const __m256d elMatDiag_0 = q_acc_0_0;
                      const __m256d elMatDiag_1 = q_acc_1_1;
                      const __m256d elMatDiag_2 = q_acc_2_2;
                      const __m256d elMatDiag_3 = q_acc_3_3;
                      const __m256d elMatDiag_4 = q_acc_4_4;
                      const __m256d elMatDiag_5 = q_acc_5_5;
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_0,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatDiag_1,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_2,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_3,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_4,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_5,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                   }
                }
                const __m256d tmp_moved_constant_0 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_1 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_2 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_3 = _mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_moved_constant_1);
                const __m256d tmp_moved_constant_4 = _mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_moved_constant_2);
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
                  
                      const __m256d p_affine_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_2_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_2_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_5_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      for (int64_t q = 0; q < 6; q += 1)
                      {
                         const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_3,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[8*q + 1],_data_tabulated_and_untitled_0_0_BLUE[8*q + 1],_data_tabulated_and_untitled_0_0_BLUE[8*q + 1],_data_tabulated_and_untitled_0_0_BLUE[8*q + 1])),_mm256_mul_pd(tmp_moved_constant_4,_mm256_set_pd(_data_tabulated_and_untitled_0_1_BLUE[q],_data_tabulated_and_untitled_0_1_BLUE[q],_data_tabulated_and_untitled_0_1_BLUE[q],_data_tabulated_and_untitled_0_1_BLUE[q])));
                         const __m256d tmp_qloop_3 = _mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[7*q + 1],_data_tabulated_and_untitled_1_0_BLUE[7*q + 1],_data_tabulated_and_untitled_1_0_BLUE[7*q + 1],_data_tabulated_and_untitled_1_0_BLUE[7*q + 1])),_mm256_mul_pd(tmp_moved_constant_4,_mm256_set_pd(_data_tabulated_and_untitled_1_1_BLUE[q],_data_tabulated_and_untitled_1_1_BLUE[q],_data_tabulated_and_untitled_1_1_BLUE[q],_data_tabulated_and_untitled_1_1_BLUE[q])));
                         const __m256d tmp_qloop_4 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_4,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_6 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_7 = _mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_8 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_10 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_0,_mm256_set_pd(_data_phi_0_0_BLUE[3*q],_data_phi_0_0_BLUE[3*q],_data_phi_0_0_BLUE[3*q],_data_phi_0_0_BLUE[3*q])),_mm256_mul_pd(tmp_moved_constant_1,_mm256_set_pd(_data_phi_0_0_BLUE[3*q + 1],_data_phi_0_0_BLUE[3*q + 1],_data_phi_0_0_BLUE[3*q + 1],_data_phi_0_0_BLUE[3*q + 1]))),_mm256_mul_pd(tmp_moved_constant_2,_mm256_set_pd(_data_phi_0_0_BLUE[3*q + 2],_data_phi_0_0_BLUE[3*q + 2],_data_phi_0_0_BLUE[3*q + 2],_data_phi_0_0_BLUE[3*q + 2])))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_0,_mm256_set_pd(_data_phi_0_0_BLUE[3*q],_data_phi_0_0_BLUE[3*q],_data_phi_0_0_BLUE[3*q],_data_phi_0_0_BLUE[3*q])),_mm256_mul_pd(tmp_moved_constant_1,_mm256_set_pd(_data_phi_0_0_BLUE[3*q + 1],_data_phi_0_0_BLUE[3*q + 1],_data_phi_0_0_BLUE[3*q + 1],_data_phi_0_0_BLUE[3*q + 1]))),_mm256_mul_pd(tmp_moved_constant_2,_mm256_set_pd(_data_phi_0_0_BLUE[3*q + 2],_data_phi_0_0_BLUE[3*q + 2],_data_phi_0_0_BLUE[3*q + 2],_data_phi_0_0_BLUE[3*q + 2]))))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[8*q + 2],_data_tabulated_and_untitled_0_0_BLUE[8*q + 2],_data_tabulated_and_untitled_0_0_BLUE[8*q + 2],_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]));
                         const __m256d q_tmp_0_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[8*q],_data_tabulated_and_untitled_0_0_BLUE[8*q],_data_tabulated_and_untitled_0_0_BLUE[8*q],_data_tabulated_and_untitled_0_0_BLUE[8*q])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[7*q],_data_tabulated_and_untitled_1_0_BLUE[7*q],_data_tabulated_and_untitled_1_0_BLUE[7*q],_data_tabulated_and_untitled_1_0_BLUE[7*q])))),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(3.0,3.0,3.0,3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(3.0,3.0,3.0,3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_qloop_5,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_9,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d q_tmp_1_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[8*q + 3],_data_tabulated_and_untitled_0_0_BLUE[8*q + 3],_data_tabulated_and_untitled_0_0_BLUE[8*q + 3],_data_tabulated_and_untitled_0_0_BLUE[8*q + 3])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[7*q + 2],_data_tabulated_and_untitled_1_0_BLUE[7*q + 2],_data_tabulated_and_untitled_1_0_BLUE[7*q + 2],_data_tabulated_and_untitled_1_0_BLUE[7*q + 2])))),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])));
                         const __m256d q_tmp_2_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[8*q + 4],_data_tabulated_and_untitled_0_0_BLUE[8*q + 4],_data_tabulated_and_untitled_0_0_BLUE[8*q + 4],_data_tabulated_and_untitled_0_0_BLUE[8*q + 4])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[7*q + 3],_data_tabulated_and_untitled_1_0_BLUE[7*q + 3],_data_tabulated_and_untitled_1_0_BLUE[7*q + 3],_data_tabulated_and_untitled_1_0_BLUE[7*q + 3])))),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_9,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d q_tmp_3_3 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_5),_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[8*q + 5],_data_tabulated_and_untitled_0_0_BLUE[8*q + 5],_data_tabulated_and_untitled_0_0_BLUE[8*q + 5],_data_tabulated_and_untitled_0_0_BLUE[8*q + 5])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[7*q + 4],_data_tabulated_and_untitled_1_0_BLUE[7*q + 4],_data_tabulated_and_untitled_1_0_BLUE[7*q + 4],_data_tabulated_and_untitled_1_0_BLUE[7*q + 4])))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d q_tmp_4_4 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[8*q + 6],_data_tabulated_and_untitled_0_0_BLUE[8*q + 6],_data_tabulated_and_untitled_0_0_BLUE[8*q + 6],_data_tabulated_and_untitled_0_0_BLUE[8*q + 6])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[7*q + 5],_data_tabulated_and_untitled_1_0_BLUE[7*q + 5],_data_tabulated_and_untitled_1_0_BLUE[7*q + 5],_data_tabulated_and_untitled_1_0_BLUE[7*q + 5])))),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_8,_mm256_set_pd(4.0,4.0,4.0,4.0)),_mm256_mul_pd(tmp_qloop_4,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_5));
                         const __m256d q_tmp_5_5 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[8*q + 7],_data_tabulated_and_untitled_0_0_BLUE[8*q + 7],_data_tabulated_and_untitled_0_0_BLUE[8*q + 7],_data_tabulated_and_untitled_0_0_BLUE[8*q + 7])),_mm256_mul_pd(tmp_qloop_3,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[7*q + 6],_data_tabulated_and_untitled_1_0_BLUE[7*q + 6],_data_tabulated_and_untitled_1_0_BLUE[7*q + 6],_data_tabulated_and_untitled_1_0_BLUE[7*q + 6])))),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-4.0,-4.0,-4.0,-4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(4.0,4.0,4.0,4.0))),tmp_qloop_5));
                         q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                         q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                         q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                         q_acc_3_3 = _mm256_add_pd(q_acc_3_3,q_tmp_3_3);
                         q_acc_4_4 = _mm256_add_pd(q_acc_4_4,q_tmp_4_4);
                         q_acc_5_5 = _mm256_add_pd(q_acc_5_5,q_tmp_5_5);
                      }
                      const __m256d elMatDiag_0 = q_acc_0_0;
                      const __m256d elMatDiag_1 = q_acc_1_1;
                      const __m256d elMatDiag_2 = q_acc_2_2;
                      const __m256d elMatDiag_3 = q_acc_3_3;
                      const __m256d elMatDiag_4 = q_acc_4_4;
                      const __m256d elMatDiag_5 = q_acc_5_5;
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatDiag_0,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_1,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatDiag_2,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_3,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatDiag_4,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_5,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_qloop_0 = -rho_dof_0 + rho_dof_1;
                const real_t tmp_qloop_1 = -rho_dof_0 + rho_dof_2;
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
                      real_t q_acc_1_1 = 0.0;
                      real_t q_acc_2_2 = 0.0;
                      real_t q_acc_3_3 = 0.0;
                      real_t q_acc_4_4 = 0.0;
                      real_t q_acc_5_5 = 0.0;
                      for (int64_t q = 0; q < 6; q += 1)
                      {
                         const real_t tmp_qloop_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + tmp_qloop_1*_data_tabulated_and_untitled_0_1_GRAY[q];
                         const real_t tmp_qloop_3 = tmp_qloop_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 1] + tmp_qloop_1*_data_tabulated_and_untitled_1_1_GRAY[q];
                         const real_t tmp_qloop_4 = 4.0*_data_q_p_1[q];
                         const real_t tmp_qloop_5 = tmp_qloop_4*_data_q_p_0[q];
                         const real_t tmp_qloop_6 = (_data_q_p_0[q]*_data_q_p_0[q]);
                         const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                         const real_t tmp_qloop_8 = (_data_q_p_1[q]*_data_q_p_1[q]);
                         const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                         const real_t tmp_qloop_10 = 1.0 / ((rho_dof_0*_data_phi_0_0_GRAY[3*q] + rho_dof_1*_data_phi_0_0_GRAY[3*q + 1] + rho_dof_2*_data_phi_0_0_GRAY[3*q + 2])*(rho_dof_0*_data_phi_0_0_GRAY[3*q] + rho_dof_1*_data_phi_0_0_GRAY[3*q + 1] + rho_dof_2*_data_phi_0_0_GRAY[3*q + 2]))*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                         const real_t q_tmp_0_0 = tmp_qloop_10*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q])*(-tmp_qloop_5 - tmp_qloop_7 - tmp_qloop_9 - 1.0 + 3.0*_data_q_p_0[q] + 3.0*_data_q_p_1[q]);
                         const real_t q_tmp_1_1 = tmp_qloop_10*(-tmp_qloop_7 + _data_q_p_0[q])*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 2]);
                         const real_t q_tmp_2_2 = tmp_qloop_10*(-tmp_qloop_9 + _data_q_p_1[q])*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 3]);
                         const real_t q_tmp_3_3 = -tmp_qloop_10*tmp_qloop_5*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 4]);
                         const real_t q_tmp_4_4 = tmp_qloop_10*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 5])*(-tmp_qloop_4 + tmp_qloop_5 + tmp_qloop_8*4.0);
                         const real_t q_tmp_5_5 = tmp_qloop_10*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 6])*(tmp_qloop_5 + tmp_qloop_6*4.0 - 4.0*_data_q_p_0[q]);
                         q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                         q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                         q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                         q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                         q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                         q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                      }
                      const real_t elMatDiag_0 = q_acc_0_0;
                      const real_t elMatDiag_1 = q_acc_1_1;
                      const real_t elMatDiag_2 = q_acc_2_2;
                      const real_t elMatDiag_3 = q_acc_3_3;
                      const real_t elMatDiag_4 = q_acc_4_4;
                      const real_t elMatDiag_5 = q_acc_5_5;
                      _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                      _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                      _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                      _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   }
                }
                const real_t tmp_moved_constant_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_1 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t tmp_moved_constant_3 = -tmp_moved_constant_0 + tmp_moved_constant_1;
                const real_t tmp_moved_constant_4 = -tmp_moved_constant_0 + tmp_moved_constant_2;
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
                      real_t q_acc_1_1 = 0.0;
                      real_t q_acc_2_2 = 0.0;
                      real_t q_acc_3_3 = 0.0;
                      real_t q_acc_4_4 = 0.0;
                      real_t q_acc_5_5 = 0.0;
                      for (int64_t q = 0; q < 6; q += 1)
                      {
                         const real_t tmp_qloop_2 = tmp_moved_constant_3*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + tmp_moved_constant_4*_data_tabulated_and_untitled_0_1_BLUE[q];
                         const real_t tmp_qloop_3 = tmp_moved_constant_3*_data_tabulated_and_untitled_1_0_BLUE[7*q + 1] + tmp_moved_constant_4*_data_tabulated_and_untitled_1_1_BLUE[q];
                         const real_t tmp_qloop_4 = 4.0*_data_q_p_1[q];
                         const real_t tmp_qloop_5 = tmp_qloop_4*_data_q_p_0[q];
                         const real_t tmp_qloop_6 = (_data_q_p_0[q]*_data_q_p_0[q]);
                         const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                         const real_t tmp_qloop_8 = (_data_q_p_1[q]*_data_q_p_1[q]);
                         const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                         const real_t tmp_qloop_10 = 1.0 / ((tmp_moved_constant_0*_data_phi_0_0_BLUE[3*q] + tmp_moved_constant_1*_data_phi_0_0_BLUE[3*q + 1] + tmp_moved_constant_2*_data_phi_0_0_BLUE[3*q + 2])*(tmp_moved_constant_0*_data_phi_0_0_BLUE[3*q] + tmp_moved_constant_1*_data_phi_0_0_BLUE[3*q + 1] + tmp_moved_constant_2*_data_phi_0_0_BLUE[3*q + 2]))*_data_q_w[q]*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2];
                         const real_t q_tmp_0_0 = tmp_qloop_10*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_BLUE[8*q] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_BLUE[7*q])*(-tmp_qloop_5 - tmp_qloop_7 - tmp_qloop_9 - 1.0 + 3.0*_data_q_p_0[q] + 3.0*_data_q_p_1[q]);
                         const real_t q_tmp_1_1 = tmp_qloop_10*(-tmp_qloop_7 + _data_q_p_0[q])*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_BLUE[8*q + 3] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_BLUE[7*q + 2]);
                         const real_t q_tmp_2_2 = tmp_qloop_10*(-tmp_qloop_9 + _data_q_p_1[q])*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_BLUE[8*q + 4] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_BLUE[7*q + 3]);
                         const real_t q_tmp_3_3 = -tmp_qloop_10*tmp_qloop_5*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_BLUE[8*q + 5] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_BLUE[7*q + 4]);
                         const real_t q_tmp_4_4 = tmp_qloop_10*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_BLUE[8*q + 6] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_BLUE[7*q + 5])*(-tmp_qloop_4 + tmp_qloop_5 + tmp_qloop_8*4.0);
                         const real_t q_tmp_5_5 = tmp_qloop_10*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_BLUE[7*q + 6])*(tmp_qloop_5 + tmp_qloop_6*4.0 - 4.0*_data_q_p_0[q]);
                         q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                         q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                         q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                         q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                         q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                         q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                      }
                      const real_t elMatDiag_0 = q_acc_0_0;
                      const real_t elMatDiag_1 = q_acc_1_1;
                      const real_t elMatDiag_2 = q_acc_2_2;
                      const real_t elMatDiag_3 = q_acc_3_3;
                      const real_t elMatDiag_4 = q_acc_4_4;
                      const real_t elMatDiag_5 = q_acc_5_5;
                      _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                      _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                      _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   }
                }
             }
          }
          {
             for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
             {
                const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_qloop_0 = -rho_dof_0 + rho_dof_1;
                const real_t tmp_qloop_1 = -rho_dof_0 + rho_dof_2;
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
                      real_t q_acc_1_1 = 0.0;
                      real_t q_acc_2_2 = 0.0;
                      real_t q_acc_3_3 = 0.0;
                      real_t q_acc_4_4 = 0.0;
                      real_t q_acc_5_5 = 0.0;
                      for (int64_t q = 0; q < 6; q += 1)
                      {
                         const real_t tmp_qloop_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + tmp_qloop_1*_data_tabulated_and_untitled_0_1_GRAY[q];
                         const real_t tmp_qloop_3 = tmp_qloop_0*_data_tabulated_and_untitled_1_0_GRAY[7*q + 1] + tmp_qloop_1*_data_tabulated_and_untitled_1_1_GRAY[q];
                         const real_t tmp_qloop_4 = 4.0*_data_q_p_1[q];
                         const real_t tmp_qloop_5 = tmp_qloop_4*_data_q_p_0[q];
                         const real_t tmp_qloop_6 = (_data_q_p_0[q]*_data_q_p_0[q]);
                         const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                         const real_t tmp_qloop_8 = (_data_q_p_1[q]*_data_q_p_1[q]);
                         const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                         const real_t tmp_qloop_10 = 1.0 / ((rho_dof_0*_data_phi_0_0_GRAY[3*q] + rho_dof_1*_data_phi_0_0_GRAY[3*q + 1] + rho_dof_2*_data_phi_0_0_GRAY[3*q + 2])*(rho_dof_0*_data_phi_0_0_GRAY[3*q] + rho_dof_1*_data_phi_0_0_GRAY[3*q + 1] + rho_dof_2*_data_phi_0_0_GRAY[3*q + 2]))*_data_q_w[q]*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2];
                         const real_t q_tmp_0_0 = tmp_qloop_10*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q])*(-tmp_qloop_5 - tmp_qloop_7 - tmp_qloop_9 - 1.0 + 3.0*_data_q_p_0[q] + 3.0*_data_q_p_1[q]);
                         const real_t q_tmp_1_1 = tmp_qloop_10*(-tmp_qloop_7 + _data_q_p_0[q])*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 2]);
                         const real_t q_tmp_2_2 = tmp_qloop_10*(-tmp_qloop_9 + _data_q_p_1[q])*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 3]);
                         const real_t q_tmp_3_3 = -tmp_qloop_10*tmp_qloop_5*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 4]);
                         const real_t q_tmp_4_4 = tmp_qloop_10*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 5])*(-tmp_qloop_4 + tmp_qloop_5 + tmp_qloop_8*4.0);
                         const real_t q_tmp_5_5 = tmp_qloop_10*(tmp_qloop_2*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + tmp_qloop_3*_data_tabulated_and_untitled_1_0_GRAY[7*q + 6])*(tmp_qloop_5 + tmp_qloop_6*4.0 - 4.0*_data_q_p_0[q]);
                         q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                         q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                         q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                         q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                         q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                         q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                      }
                      const real_t elMatDiag_0 = q_acc_0_0;
                      const real_t elMatDiag_1 = q_acc_1_1;
                      const real_t elMatDiag_2 = q_acc_2_2;
                      const real_t elMatDiag_3 = q_acc_3_3;
                      const real_t elMatDiag_4 = q_acc_4_4;
                      const real_t elMatDiag_5 = q_acc_5_5;
                      _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                      _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                      _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                      _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   }
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
