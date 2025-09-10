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































#include "../P2ElementwiseSupgShearHeatingP1ViscosityScaledCoeffDelta.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseSupgShearHeatingP1ViscosityScaledCoeffDelta::applyScaled_P2ElementwiseSupgShearHeatingP1ViscosityScaledCoeffDelta_macro_2D( real_t * RESTRICT  _data_deltaEdge, real_t * RESTRICT  _data_deltaVertex, real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_eta, real_t * RESTRICT  _data_rho, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t * RESTRICT  _data_uxEdge, real_t * RESTRICT  _data_uxVertex, real_t * RESTRICT  _data_uyEdge, real_t * RESTRICT  _data_uyVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling ) const
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
       const real_t _data_phi_0_0_BLUE [] = {-0.048208377815512182, -0.048208377815512071, -0.084730493093977982, 0.1928335112620482, 0.1928335112620482, 0.79548022620090575, 0.44594849091596489, 0.44594849091596489, 0.10810301816807022, -0.074803807748196338, -0.074803807748196491, 0.5176323419876725, 0.29921523099278596, 0.29921523099278607, 0.033544811523148421, 0.091576213509770743, 0.091576213509770715, 0.81684757298045851, -0.048208377815512155, -0.084730493093977982, -0.048208377815512071, 0.1928335112620482, 0.79548022620090575, 0.1928335112620482, 0.44594849091596489, 0.10810301816807022, 0.44594849091596489, -0.074803807748196227, 0.5176323419876725, -0.074803807748196491, 0.29921523099278596, 0.033544811523148421, 0.29921523099278607, 0.091576213509770771, 0.81684757298045851, 0.091576213509770715, -0.084730493093978398, -0.048208377815512071, -0.048208377815512071, 0.79548022620090564, 0.19283351126204828, 0.19283351126204828, 0.10810301816807022, 0.44594849091596489, 0.44594849091596489, 0.51763234198767272, -0.074803807748196491, -0.074803807748196491, 0.033544811523148449, 0.29921523099278591, 0.29921523099278591, 0.81684757298045851, 0.091576213509770715, 0.091576213509770715};
   
       const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512182)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.78379396366385956 + jac_affine_inv_1_0_BLUE*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_BLUE*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_BLUE*0.1928335112620482)), ((real_t)(abs_det_jac_affine_BLUE*0.1928335112620482)), ((real_t)(abs_det_jac_affine_BLUE*0.79548022620090575)), ((real_t)(jac_affine_inv_0_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_BLUE*0.43241207267228088 + jac_affine_inv_1_0_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.43241207267228088 + jac_affine_inv_1_0_BLUE*1.3513818909915787)), ((real_t)(jac_affine_inv_1_0_BLUE*-1.7837939636638596)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196338)), ((real_t)(jac_affine_inv_0_0_BLUE*0.63369514596091703 + jac_affine_inv_1_0_BLUE*0.63369514596091703)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.5176323419876725)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278596)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278607)), ((real_t)(abs_det_jac_affine_BLUE*0.033544811523148421)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*3.2673902919218341 + jac_affine_inv_1_0_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-3.2673902919218341 + jac_affine_inv_1_0_BLUE*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.36630485403908286)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512155)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.78379396366385956 + jac_affine_inv_1_0_BLUE*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_BLUE*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_BLUE*0.1928335112620482)), ((real_t)(abs_det_jac_affine_BLUE*0.79548022620090575)), ((real_t)(abs_det_jac_affine_BLUE*0.1928335112620482)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*1.7837939636638596 + jac_affine_inv_1_0_BLUE*0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3513818909915787 + jac_affine_inv_1_0_BLUE*-0.43241207267228088)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196227)), ((real_t)(jac_affine_inv_0_0_BLUE*0.63369514596091692 + jac_affine_inv_1_0_BLUE*0.63369514596091692)), ((real_t)(abs_det_jac_affine_BLUE*0.5176323419876725)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278596)), ((real_t)(abs_det_jac_affine_BLUE*0.033544811523148421)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278607)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_BLUE*0.36630485403908286 + jac_affine_inv_1_0_BLUE*3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.9010854378827511 + jac_affine_inv_1_0_BLUE*-3.2673902919218341)), ((real_t)(abs_det_jac_affine_BLUE*-0.084730493093978398)), ((real_t)(jac_affine_inv_0_0_BLUE*0.56758792732771912 + jac_affine_inv_1_0_BLUE*0.56758792732771912)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_BLUE*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_BLUE*0.79548022620090564)), ((real_t)(abs_det_jac_affine_BLUE*0.19283351126204828)), ((real_t)(abs_det_jac_affine_BLUE*0.19283351126204828)), ((real_t)(jac_affine_inv_0_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_BLUE*1.7837939636638596 + jac_affine_inv_1_0_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.7837939636638596 + jac_affine_inv_1_0_BLUE*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3513818909915787 + jac_affine_inv_1_0_BLUE*-1.7837939636638596)), ((real_t)(abs_det_jac_affine_BLUE*0.51763234198767272)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.2673902919218341 + jac_affine_inv_1_0_BLUE*-2.2673902919218341)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.033544811523148449)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278591)), ((real_t)(abs_det_jac_affine_BLUE*0.29921523099278591)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_BLUE*0.36630485403908286 + jac_affine_inv_1_0_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.36630485403908286 + jac_affine_inv_1_0_BLUE*2.9010854378827511)), ((real_t)(jac_affine_inv_0_0_BLUE*2.9010854378827511 + jac_affine_inv_1_0_BLUE*-0.36630485403908286))};
   
       const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {((real_t)(jac_affine_inv_0_1_BLUE*-0.78379396366385956 + jac_affine_inv_1_1_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_BLUE*0.43241207267228088 + jac_affine_inv_1_1_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.43241207267228088 + jac_affine_inv_1_1_BLUE*1.3513818909915787)), ((real_t)(jac_affine_inv_1_1_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*0.63369514596091703 + jac_affine_inv_1_1_BLUE*0.63369514596091703)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*3.2673902919218341 + jac_affine_inv_1_1_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-3.2673902919218341 + jac_affine_inv_1_1_BLUE*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.78379396366385956 + jac_affine_inv_1_1_BLUE*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*1.7837939636638596 + jac_affine_inv_1_1_BLUE*0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3513818909915787 + jac_affine_inv_1_1_BLUE*-0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_BLUE*0.63369514596091692 + jac_affine_inv_1_1_BLUE*0.63369514596091692)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2673902919218341)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_BLUE*0.36630485403908286 + jac_affine_inv_1_1_BLUE*3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.9010854378827511 + jac_affine_inv_1_1_BLUE*-3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*0.56758792732771912 + jac_affine_inv_1_1_BLUE*0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_BLUE*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_BLUE*1.7837939636638596 + jac_affine_inv_1_1_BLUE*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.7837939636638596 + jac_affine_inv_1_1_BLUE*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3513818909915787 + jac_affine_inv_1_1_BLUE*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.2673902919218341 + jac_affine_inv_1_1_BLUE*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_BLUE*0.36630485403908286 + jac_affine_inv_1_1_BLUE*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.36630485403908286 + jac_affine_inv_1_1_BLUE*2.9010854378827511)), ((real_t)(jac_affine_inv_0_1_BLUE*2.9010854378827511 + jac_affine_inv_1_1_BLUE*-0.36630485403908286))};
   
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
       const real_t _data_phi_0_0_GRAY [] = {-0.048208377815512182, -0.048208377815512071, -0.084730493093977982, 0.1928335112620482, 0.1928335112620482, 0.79548022620090575, 0.44594849091596489, 0.44594849091596489, 0.10810301816807022, -0.074803807748196338, -0.074803807748196491, 0.5176323419876725, 0.29921523099278596, 0.29921523099278607, 0.033544811523148421, 0.091576213509770743, 0.091576213509770715, 0.81684757298045851, -0.048208377815512155, -0.084730493093977982, -0.048208377815512071, 0.1928335112620482, 0.79548022620090575, 0.1928335112620482, 0.44594849091596489, 0.10810301816807022, 0.44594849091596489, -0.074803807748196227, 0.5176323419876725, -0.074803807748196491, 0.29921523099278596, 0.033544811523148421, 0.29921523099278607, 0.091576213509770771, 0.81684757298045851, 0.091576213509770715, -0.084730493093978398, -0.048208377815512071, -0.048208377815512071, 0.79548022620090564, 0.19283351126204828, 0.19283351126204828, 0.10810301816807022, 0.44594849091596489, 0.44594849091596489, 0.51763234198767272, -0.074803807748196491, -0.074803807748196491, 0.033544811523148449, 0.29921523099278591, 0.29921523099278591, 0.81684757298045851, 0.091576213509770715, 0.091576213509770715};
   
       const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512182)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*0.79548022620090575)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_GRAY*0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_0_GRAY*-1.7837939636638596)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196338)), ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091703 + jac_affine_inv_1_0_GRAY*0.63369514596091703)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.5176323419876725)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278596)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278607)), ((real_t)(abs_det_jac_affine_GRAY*0.033544811523148421)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*3.2673902919218341 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-3.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.36630485403908286)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512155)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_GRAY*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*0.79548022620090575)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3513818909915787 + jac_affine_inv_1_0_GRAY*-0.43241207267228088)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196227)), ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091692 + jac_affine_inv_1_0_GRAY*0.63369514596091692)), ((real_t)(abs_det_jac_affine_GRAY*0.5176323419876725)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278596)), ((real_t)(abs_det_jac_affine_GRAY*0.033544811523148421)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278607)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.9010854378827511 + jac_affine_inv_1_0_GRAY*-3.2673902919218341)), ((real_t)(abs_det_jac_affine_GRAY*-0.084730493093978398)), ((real_t)(jac_affine_inv_0_0_GRAY*0.56758792732771912 + jac_affine_inv_1_0_GRAY*0.56758792732771912)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*0.79548022620090564)), ((real_t)(abs_det_jac_affine_GRAY*0.19283351126204828)), ((real_t)(abs_det_jac_affine_GRAY*0.19283351126204828)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596 + jac_affine_inv_1_0_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3513818909915787 + jac_affine_inv_1_0_GRAY*-1.7837939636638596)), ((real_t)(abs_det_jac_affine_GRAY*0.51763234198767272)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.2673902919218341)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.033544811523148449)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278591)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278591)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286 + jac_affine_inv_1_0_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_0_GRAY*2.9010854378827511 + jac_affine_inv_1_0_GRAY*-0.36630485403908286))};
   
       const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY*0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091703 + jac_affine_inv_1_1_GRAY*0.63369514596091703)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*3.2673902919218341 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-3.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3513818909915787 + jac_affine_inv_1_1_GRAY*-0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091692 + jac_affine_inv_1_1_GRAY*0.63369514596091692)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.9010854378827511 + jac_affine_inv_1_1_GRAY*-3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*0.56758792732771912 + jac_affine_inv_1_1_GRAY*0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596 + jac_affine_inv_1_1_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3513818909915787 + jac_affine_inv_1_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286 + jac_affine_inv_1_1_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_1_GRAY*2.9010854378827511 + jac_affine_inv_1_1_GRAY*-0.36630485403908286))};
   
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t delta_dof_0 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t delta_dof_1 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t delta_dof_2 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t delta_dof_3 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t delta_dof_4 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t delta_dof_5 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t eta_dof_0 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t eta_dof_1 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t eta_dof_2 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_0 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ux_dof_1 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ux_dof_2 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_3 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_4 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_5 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_0 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_1 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t uy_dof_2 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t uy_dof_3 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_4 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_5 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
                   for (int64_t q = 0; q < 6; q += 1)
                   {
                      const real_t tmp_qloop_0 = ux_dof_0*_data_phi_0_0_GRAY[9*q] + ux_dof_1*_data_phi_0_0_GRAY[9*q + 1] + ux_dof_2*_data_phi_0_0_GRAY[9*q + 2] + ux_dof_3*_data_phi_0_0_GRAY[9*q + 3] + ux_dof_4*_data_phi_0_0_GRAY[9*q + 4] + ux_dof_5*_data_phi_0_0_GRAY[9*q + 5];
                      const real_t tmp_qloop_1 = uy_dof_0*_data_phi_0_0_GRAY[9*q] + uy_dof_1*_data_phi_0_0_GRAY[9*q + 1] + uy_dof_2*_data_phi_0_0_GRAY[9*q + 2] + uy_dof_3*_data_phi_0_0_GRAY[9*q + 3] + uy_dof_4*_data_phi_0_0_GRAY[9*q + 4] + uy_dof_5*_data_phi_0_0_GRAY[9*q + 5];
                      const real_t tmp_qloop_2 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_3 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_4 = tmp_qloop_3 - 1.0;
                      const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_3 - 3.0;
                      const real_t tmp_qloop_6 = tmp_qloop_5*uy_dof_0;
                      const real_t tmp_qloop_7 = -tmp_qloop_2 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_8 = tmp_qloop_2*uy_dof_3 - tmp_qloop_2*uy_dof_4 + tmp_qloop_4*uy_dof_1 + tmp_qloop_6 + tmp_qloop_7*uy_dof_5;
                      const real_t tmp_qloop_9 = tmp_qloop_2 - 1.0;
                      const real_t tmp_qloop_10 = -tmp_qloop_3 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_11 = tmp_qloop_10*uy_dof_4 + tmp_qloop_3*uy_dof_3 - tmp_qloop_3*uy_dof_5 + tmp_qloop_6 + tmp_qloop_9*uy_dof_2;
                      const real_t tmp_qloop_12 = jac_affine_inv_0_0_GRAY*tmp_qloop_8 + jac_affine_inv_1_0_GRAY*tmp_qloop_11;
                      const real_t tmp_qloop_13 = tmp_qloop_5*ux_dof_0;
                      const real_t tmp_qloop_14 = tmp_qloop_13 + tmp_qloop_2*ux_dof_3 - tmp_qloop_2*ux_dof_4 + tmp_qloop_4*ux_dof_1 + tmp_qloop_7*ux_dof_5;
                      const real_t tmp_qloop_15 = tmp_qloop_10*ux_dof_4 + tmp_qloop_13 + tmp_qloop_3*ux_dof_3 - tmp_qloop_3*ux_dof_5 + tmp_qloop_9*ux_dof_2;
                      const real_t tmp_qloop_16 = jac_affine_inv_0_1_GRAY*tmp_qloop_14 + jac_affine_inv_1_1_GRAY*tmp_qloop_15;
                      const real_t tmp_qloop_17 = tmp_qloop_12 + tmp_qloop_16;
                      const real_t tmp_qloop_18 = jac_affine_inv_0_0_GRAY*tmp_qloop_14 + jac_affine_inv_1_0_GRAY*tmp_qloop_15;
                      const real_t tmp_qloop_19 = jac_affine_inv_0_1_GRAY*tmp_qloop_8;
                      const real_t tmp_qloop_20 = jac_affine_inv_1_1_GRAY*tmp_qloop_11;
                      const real_t tmp_qloop_21 = tmp_qloop_18 - tmp_qloop_19 - tmp_qloop_20;
                      const real_t tmp_qloop_22 = (eta_dof_0*_data_phi_0_0_GRAY[9*q + 6] + eta_dof_1*_data_phi_0_0_GRAY[9*q + 7] + eta_dof_2*_data_phi_0_0_GRAY[9*q + 8])*1.0 / (rho_dof_0*_data_phi_0_0_GRAY[9*q + 6] + rho_dof_1*_data_phi_0_0_GRAY[9*q + 7] + rho_dof_2*_data_phi_0_0_GRAY[9*q + 8])*(tmp_qloop_12*tmp_qloop_17 + tmp_qloop_16*tmp_qloop_17 + tmp_qloop_18*tmp_qloop_21 - tmp_qloop_21*(tmp_qloop_19 + tmp_qloop_20))*(delta_dof_0*_data_phi_0_0_GRAY[9*q] + delta_dof_1*_data_phi_0_0_GRAY[9*q + 1] + delta_dof_2*_data_phi_0_0_GRAY[9*q + 2] + delta_dof_3*_data_phi_0_0_GRAY[9*q + 3] + delta_dof_4*_data_phi_0_0_GRAY[9*q + 4] + delta_dof_5*_data_phi_0_0_GRAY[9*q + 5])*_data_q_w[q];
                      const real_t tmp_qloop_23 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]);
                      const real_t tmp_qloop_24 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]);
                      const real_t tmp_qloop_25 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]);
                      const real_t tmp_qloop_26 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]);
                      const real_t tmp_qloop_27 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]);
                      const real_t tmp_qloop_28 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]);
                      const real_t q_tmp_0_0 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_0_1 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_0_2 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_0_3 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_0_4 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_0_5 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_1_0 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_1_1 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_1_2 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_1_3 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_1_4 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_1_5 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_2_0 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_2_1 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_2_2 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_2_3 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_2_4 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_2_5 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_3_0 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_3_1 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_3_2 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_3_3 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_3_4 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_3_5 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_4_0 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_4_1 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_4_2 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_4_3 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_4_4 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_4_5 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_5_0 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_5_1 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_5_2 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_5_3 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_5_4 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_5_5 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
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
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                }
             }
             const real_t tmp_moved_constant_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_1 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_3 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_6 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_7 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_8 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_9 = _data_deltaEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_10 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_11 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_12 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_13 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_14 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_15 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_16 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_17 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_18 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_19 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_20 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_21 = _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_22 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_23 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_24 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_25 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_26 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_27 = _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_28 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_29 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
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
                   for (int64_t q = 0; q < 6; q += 1)
                   {
                      const real_t tmp_qloop_0 = tmp_moved_constant_18*_data_phi_0_0_BLUE[9*q] + tmp_moved_constant_19*_data_phi_0_0_BLUE[9*q + 1] + tmp_moved_constant_20*_data_phi_0_0_BLUE[9*q + 2] + tmp_moved_constant_21*_data_phi_0_0_BLUE[9*q + 3] + tmp_moved_constant_22*_data_phi_0_0_BLUE[9*q + 4] + tmp_moved_constant_23*_data_phi_0_0_BLUE[9*q + 5];
                      const real_t tmp_qloop_1 = tmp_moved_constant_24*_data_phi_0_0_BLUE[9*q] + tmp_moved_constant_25*_data_phi_0_0_BLUE[9*q + 1] + tmp_moved_constant_26*_data_phi_0_0_BLUE[9*q + 2] + tmp_moved_constant_27*_data_phi_0_0_BLUE[9*q + 3] + tmp_moved_constant_28*_data_phi_0_0_BLUE[9*q + 4] + tmp_moved_constant_29*_data_phi_0_0_BLUE[9*q + 5];
                      const real_t tmp_qloop_2 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_3 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_4 = tmp_qloop_3 - 1.0;
                      const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_3 - 3.0;
                      const real_t tmp_qloop_6 = tmp_moved_constant_24*tmp_qloop_5;
                      const real_t tmp_qloop_7 = -tmp_qloop_2 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_8 = tmp_moved_constant_25*tmp_qloop_4 + tmp_moved_constant_27*tmp_qloop_2 - tmp_moved_constant_28*tmp_qloop_2 + tmp_moved_constant_29*tmp_qloop_7 + tmp_qloop_6;
                      const real_t tmp_qloop_9 = tmp_qloop_2 - 1.0;
                      const real_t tmp_qloop_10 = -tmp_qloop_3 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_11 = tmp_moved_constant_26*tmp_qloop_9 + tmp_moved_constant_27*tmp_qloop_3 + tmp_moved_constant_28*tmp_qloop_10 - tmp_moved_constant_29*tmp_qloop_3 + tmp_qloop_6;
                      const real_t tmp_qloop_12 = jac_affine_inv_0_0_BLUE*tmp_qloop_8 + jac_affine_inv_1_0_BLUE*tmp_qloop_11;
                      const real_t tmp_qloop_13 = tmp_moved_constant_18*tmp_qloop_5;
                      const real_t tmp_qloop_14 = tmp_moved_constant_19*tmp_qloop_4 + tmp_moved_constant_21*tmp_qloop_2 - tmp_moved_constant_22*tmp_qloop_2 + tmp_moved_constant_23*tmp_qloop_7 + tmp_qloop_13;
                      const real_t tmp_qloop_15 = tmp_moved_constant_20*tmp_qloop_9 + tmp_moved_constant_21*tmp_qloop_3 + tmp_moved_constant_22*tmp_qloop_10 - tmp_moved_constant_23*tmp_qloop_3 + tmp_qloop_13;
                      const real_t tmp_qloop_16 = jac_affine_inv_0_1_BLUE*tmp_qloop_14 + jac_affine_inv_1_1_BLUE*tmp_qloop_15;
                      const real_t tmp_qloop_17 = tmp_qloop_12 + tmp_qloop_16;
                      const real_t tmp_qloop_18 = jac_affine_inv_0_0_BLUE*tmp_qloop_14 + jac_affine_inv_1_0_BLUE*tmp_qloop_15;
                      const real_t tmp_qloop_19 = jac_affine_inv_0_1_BLUE*tmp_qloop_8;
                      const real_t tmp_qloop_20 = jac_affine_inv_1_1_BLUE*tmp_qloop_11;
                      const real_t tmp_qloop_21 = tmp_qloop_18 - tmp_qloop_19 - tmp_qloop_20;
                      const real_t tmp_qloop_22 = (tmp_moved_constant_12*_data_phi_0_0_BLUE[9*q + 6] + tmp_moved_constant_13*_data_phi_0_0_BLUE[9*q + 7] + tmp_moved_constant_14*_data_phi_0_0_BLUE[9*q + 8])*1.0 / (tmp_moved_constant_15*_data_phi_0_0_BLUE[9*q + 6] + tmp_moved_constant_16*_data_phi_0_0_BLUE[9*q + 7] + tmp_moved_constant_17*_data_phi_0_0_BLUE[9*q + 8])*(tmp_qloop_12*tmp_qloop_17 + tmp_qloop_16*tmp_qloop_17 + tmp_qloop_18*tmp_qloop_21 - tmp_qloop_21*(tmp_qloop_19 + tmp_qloop_20))*(tmp_moved_constant_10*_data_phi_0_0_BLUE[9*q + 4] + tmp_moved_constant_11*_data_phi_0_0_BLUE[9*q + 5] + tmp_moved_constant_6*_data_phi_0_0_BLUE[9*q] + tmp_moved_constant_7*_data_phi_0_0_BLUE[9*q + 1] + tmp_moved_constant_8*_data_phi_0_0_BLUE[9*q + 2] + tmp_moved_constant_9*_data_phi_0_0_BLUE[9*q + 3])*_data_q_w[q];
                      const real_t tmp_qloop_23 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 1] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q]);
                      const real_t tmp_qloop_24 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 7] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]);
                      const real_t tmp_qloop_25 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 8] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]);
                      const real_t tmp_qloop_26 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 9] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]);
                      const real_t tmp_qloop_27 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 10] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]);
                      const real_t tmp_qloop_28 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 11] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]);
                      const real_t q_tmp_0_0 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_0_1 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_0_2 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_0_3 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_0_4 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_0_5 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_1_0 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_1_1 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_1_2 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_1_3 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_1_4 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_1_5 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_2_0 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_2_1 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_2_2 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_2_3 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_2_4 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_2_5 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_3_0 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_3_1 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_3_2 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_3_3 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_3_4 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_3_5 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_4_0 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_4_1 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_4_2 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_4_3 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_4_4 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_4_5 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_5_0 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_5_1 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_5_2 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_5_3 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_5_4 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_5_5 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
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
                   const real_t elMatVec_0 = q_acc_0_0*tmp_moved_constant_0 + q_acc_0_1*tmp_moved_constant_1 + q_acc_0_2*tmp_moved_constant_2 + q_acc_0_3*tmp_moved_constant_3 + q_acc_0_4*tmp_moved_constant_4 + q_acc_0_5*tmp_moved_constant_5;
                   const real_t elMatVec_1 = q_acc_1_0*tmp_moved_constant_0 + q_acc_1_1*tmp_moved_constant_1 + q_acc_1_2*tmp_moved_constant_2 + q_acc_1_3*tmp_moved_constant_3 + q_acc_1_4*tmp_moved_constant_4 + q_acc_1_5*tmp_moved_constant_5;
                   const real_t elMatVec_2 = q_acc_2_0*tmp_moved_constant_0 + q_acc_2_1*tmp_moved_constant_1 + q_acc_2_2*tmp_moved_constant_2 + q_acc_2_3*tmp_moved_constant_3 + q_acc_2_4*tmp_moved_constant_4 + q_acc_2_5*tmp_moved_constant_5;
                   const real_t elMatVec_3 = q_acc_3_0*tmp_moved_constant_0 + q_acc_3_1*tmp_moved_constant_1 + q_acc_3_2*tmp_moved_constant_2 + q_acc_3_3*tmp_moved_constant_3 + q_acc_3_4*tmp_moved_constant_4 + q_acc_3_5*tmp_moved_constant_5;
                   const real_t elMatVec_4 = q_acc_4_0*tmp_moved_constant_0 + q_acc_4_1*tmp_moved_constant_1 + q_acc_4_2*tmp_moved_constant_2 + q_acc_4_3*tmp_moved_constant_3 + q_acc_4_4*tmp_moved_constant_4 + q_acc_4_5*tmp_moved_constant_5;
                   const real_t elMatVec_5 = q_acc_5_0*tmp_moved_constant_0 + q_acc_5_1*tmp_moved_constant_1 + q_acc_5_2*tmp_moved_constant_2 + q_acc_5_3*tmp_moved_constant_3 + q_acc_5_4*tmp_moved_constant_4 + q_acc_5_5*tmp_moved_constant_5;
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3*operatorScaling + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                }
             }
          }
          for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t delta_dof_0 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t delta_dof_1 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t delta_dof_2 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t delta_dof_3 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t delta_dof_4 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t delta_dof_5 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t eta_dof_0 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t eta_dof_1 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t eta_dof_2 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_0 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ux_dof_1 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ux_dof_2 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_3 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_4 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_5 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_0 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_1 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t uy_dof_2 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t uy_dof_3 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_4 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_5 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
                   for (int64_t q = 0; q < 6; q += 1)
                   {
                      const real_t tmp_qloop_0 = ux_dof_0*_data_phi_0_0_GRAY[9*q] + ux_dof_1*_data_phi_0_0_GRAY[9*q + 1] + ux_dof_2*_data_phi_0_0_GRAY[9*q + 2] + ux_dof_3*_data_phi_0_0_GRAY[9*q + 3] + ux_dof_4*_data_phi_0_0_GRAY[9*q + 4] + ux_dof_5*_data_phi_0_0_GRAY[9*q + 5];
                      const real_t tmp_qloop_1 = uy_dof_0*_data_phi_0_0_GRAY[9*q] + uy_dof_1*_data_phi_0_0_GRAY[9*q + 1] + uy_dof_2*_data_phi_0_0_GRAY[9*q + 2] + uy_dof_3*_data_phi_0_0_GRAY[9*q + 3] + uy_dof_4*_data_phi_0_0_GRAY[9*q + 4] + uy_dof_5*_data_phi_0_0_GRAY[9*q + 5];
                      const real_t tmp_qloop_2 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_3 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_4 = tmp_qloop_3 - 1.0;
                      const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_3 - 3.0;
                      const real_t tmp_qloop_6 = tmp_qloop_5*uy_dof_0;
                      const real_t tmp_qloop_7 = -tmp_qloop_2 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_8 = tmp_qloop_2*uy_dof_3 - tmp_qloop_2*uy_dof_4 + tmp_qloop_4*uy_dof_1 + tmp_qloop_6 + tmp_qloop_7*uy_dof_5;
                      const real_t tmp_qloop_9 = tmp_qloop_2 - 1.0;
                      const real_t tmp_qloop_10 = -tmp_qloop_3 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_11 = tmp_qloop_10*uy_dof_4 + tmp_qloop_3*uy_dof_3 - tmp_qloop_3*uy_dof_5 + tmp_qloop_6 + tmp_qloop_9*uy_dof_2;
                      const real_t tmp_qloop_12 = jac_affine_inv_0_0_GRAY*tmp_qloop_8 + jac_affine_inv_1_0_GRAY*tmp_qloop_11;
                      const real_t tmp_qloop_13 = tmp_qloop_5*ux_dof_0;
                      const real_t tmp_qloop_14 = tmp_qloop_13 + tmp_qloop_2*ux_dof_3 - tmp_qloop_2*ux_dof_4 + tmp_qloop_4*ux_dof_1 + tmp_qloop_7*ux_dof_5;
                      const real_t tmp_qloop_15 = tmp_qloop_10*ux_dof_4 + tmp_qloop_13 + tmp_qloop_3*ux_dof_3 - tmp_qloop_3*ux_dof_5 + tmp_qloop_9*ux_dof_2;
                      const real_t tmp_qloop_16 = jac_affine_inv_0_1_GRAY*tmp_qloop_14 + jac_affine_inv_1_1_GRAY*tmp_qloop_15;
                      const real_t tmp_qloop_17 = tmp_qloop_12 + tmp_qloop_16;
                      const real_t tmp_qloop_18 = jac_affine_inv_0_0_GRAY*tmp_qloop_14 + jac_affine_inv_1_0_GRAY*tmp_qloop_15;
                      const real_t tmp_qloop_19 = jac_affine_inv_0_1_GRAY*tmp_qloop_8;
                      const real_t tmp_qloop_20 = jac_affine_inv_1_1_GRAY*tmp_qloop_11;
                      const real_t tmp_qloop_21 = tmp_qloop_18 - tmp_qloop_19 - tmp_qloop_20;
                      const real_t tmp_qloop_22 = (eta_dof_0*_data_phi_0_0_GRAY[9*q + 6] + eta_dof_1*_data_phi_0_0_GRAY[9*q + 7] + eta_dof_2*_data_phi_0_0_GRAY[9*q + 8])*1.0 / (rho_dof_0*_data_phi_0_0_GRAY[9*q + 6] + rho_dof_1*_data_phi_0_0_GRAY[9*q + 7] + rho_dof_2*_data_phi_0_0_GRAY[9*q + 8])*(tmp_qloop_12*tmp_qloop_17 + tmp_qloop_16*tmp_qloop_17 + tmp_qloop_18*tmp_qloop_21 - tmp_qloop_21*(tmp_qloop_19 + tmp_qloop_20))*(delta_dof_0*_data_phi_0_0_GRAY[9*q] + delta_dof_1*_data_phi_0_0_GRAY[9*q + 1] + delta_dof_2*_data_phi_0_0_GRAY[9*q + 2] + delta_dof_3*_data_phi_0_0_GRAY[9*q + 3] + delta_dof_4*_data_phi_0_0_GRAY[9*q + 4] + delta_dof_5*_data_phi_0_0_GRAY[9*q + 5])*_data_q_w[q];
                      const real_t tmp_qloop_23 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]);
                      const real_t tmp_qloop_24 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]);
                      const real_t tmp_qloop_25 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]);
                      const real_t tmp_qloop_26 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]);
                      const real_t tmp_qloop_27 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]);
                      const real_t tmp_qloop_28 = tmp_qloop_22*(tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + tmp_qloop_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]);
                      const real_t q_tmp_0_0 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_0_1 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_0_2 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_0_3 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_0_4 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_0_5 = tmp_qloop_23*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_1_0 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_1_1 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_1_2 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_1_3 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_1_4 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_1_5 = tmp_qloop_24*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_2_0 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_2_1 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_2_2 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_2_3 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_2_4 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_2_5 = tmp_qloop_25*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_3_0 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_3_1 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_3_2 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_3_3 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_3_4 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_3_5 = tmp_qloop_26*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_4_0 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_4_1 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_4_2 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_4_3 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_4_4 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_4_5 = tmp_qloop_27*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_5_0 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_5_1 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_5_2 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_5_3 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_5_4 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_5_5 = tmp_qloop_28*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
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
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
