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

































#include "../P2ElementwiseSupgShearHeatingP1ViscosityScaledNoSurfaceCoeffDeltaAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseSupgShearHeatingP1ViscosityScaledNoSurfaceCoeffDeltaAnnulusMap::computeInverseDiagonalOperatorValuesScaled_P2ElementwiseSupgShearHeatingP1ViscosityScaledNoSurfaceCoeffDeltaAnnulusMap_macro_2D( real_t * RESTRICT  _data_deltaEdge, real_t * RESTRICT  _data_deltaVertex, real_t * RESTRICT  _data_eta, real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t * RESTRICT  _data_rho, real_t * RESTRICT  _data_uxEdge, real_t * RESTRICT  _data_uxVertex, real_t * RESTRICT  _data_uyEdge, real_t * RESTRICT  _data_uyVertex, real_t cutoff, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t radiusSurface, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512182)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*0.79548022620090575)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_0_GRAY*0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.43241207267228088 + jac_affine_inv_1_0_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_0_GRAY*-1.7837939636638596)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196338)), ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091703 + jac_affine_inv_1_0_GRAY*0.63369514596091703)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.5176323419876725)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278596)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278607)), ((real_t)(abs_det_jac_affine_GRAY*0.033544811523148421)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*3.2673902919218341 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-3.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.36630485403908286)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512155)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.78379396366385956 + jac_affine_inv_1_0_GRAY*-0.78379396366385956)), ((real_t)(abs_det_jac_affine_GRAY*-0.084730493093977982)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(abs_det_jac_affine_GRAY*0.79548022620090575)), ((real_t)(abs_det_jac_affine_GRAY*0.1928335112620482)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3513818909915787 + jac_affine_inv_1_0_GRAY*-0.43241207267228088)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196227)), ((real_t)(jac_affine_inv_0_0_GRAY*0.63369514596091692 + jac_affine_inv_1_0_GRAY*0.63369514596091692)), ((real_t)(abs_det_jac_affine_GRAY*0.5176323419876725)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278596)), ((real_t)(abs_det_jac_affine_GRAY*0.033544811523148421)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278607)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.9010854378827511 + jac_affine_inv_1_0_GRAY*-3.2673902919218341)), ((real_t)(abs_det_jac_affine_GRAY*-0.084730493093978398)), ((real_t)(jac_affine_inv_0_0_GRAY*0.56758792732771912 + jac_affine_inv_1_0_GRAY*0.56758792732771912)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*-0.048208377815512071)), ((real_t)(abs_det_jac_affine_GRAY*0.79548022620090564)), ((real_t)(abs_det_jac_affine_GRAY*0.19283351126204828)), ((real_t)(abs_det_jac_affine_GRAY*0.19283351126204828)), ((real_t)(jac_affine_inv_0_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_0_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_0_GRAY*1.7837939636638596 + jac_affine_inv_1_0_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.7837939636638596 + jac_affine_inv_1_0_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3513818909915787 + jac_affine_inv_1_0_GRAY*-1.7837939636638596)), ((real_t)(abs_det_jac_affine_GRAY*0.51763234198767272)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.2673902919218341 + jac_affine_inv_1_0_GRAY*-2.2673902919218341)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*-0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.033544811523148449)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278591)), ((real_t)(abs_det_jac_affine_GRAY*0.29921523099278591)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_0_GRAY*0.36630485403908286 + jac_affine_inv_1_0_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.36630485403908286 + jac_affine_inv_1_0_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_0_GRAY*2.9010854378827511 + jac_affine_inv_1_0_GRAY*-0.36630485403908286))};
   
       const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY*0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.43241207267228088 + jac_affine_inv_1_1_GRAY*1.3513818909915787)), ((real_t)(jac_affine_inv_1_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091703 + jac_affine_inv_1_1_GRAY*0.63369514596091703)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*3.2673902919218341 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-3.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.9010854378827511)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.78379396366385956 + jac_affine_inv_1_1_GRAY*-0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.56758792732771912)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3513818909915787 + jac_affine_inv_1_1_GRAY*-0.43241207267228088)), ((real_t)(jac_affine_inv_0_1_GRAY*0.63369514596091692 + jac_affine_inv_1_1_GRAY*0.63369514596091692)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2673902919218341)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.9010854378827511 + jac_affine_inv_1_1_GRAY*-3.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*0.56758792732771912 + jac_affine_inv_1_1_GRAY*0.56758792732771912)), ((real_t)(jac_affine_inv_0_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_1_1_GRAY*0.78379396366385956)), ((real_t)(jac_affine_inv_0_1_GRAY*1.7837939636638596 + jac_affine_inv_1_1_GRAY*1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.7837939636638596 + jac_affine_inv_1_1_GRAY*-1.3513818909915787)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3513818909915787 + jac_affine_inv_1_1_GRAY*-1.7837939636638596)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.2673902919218341 + jac_affine_inv_1_1_GRAY*-2.2673902919218341)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.63369514596091714)), ((real_t)(jac_affine_inv_0_1_GRAY*0.36630485403908286 + jac_affine_inv_1_1_GRAY*0.36630485403908286)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.36630485403908286 + jac_affine_inv_1_1_GRAY*2.9010854378827511)), ((real_t)(jac_affine_inv_0_1_GRAY*2.9010854378827511 + jac_affine_inv_1_1_GRAY*-0.36630485403908286))};
   
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
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d delta_dof_0 = _mm256_loadu_pd(& _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d delta_dof_1 = _mm256_loadu_pd(& _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d delta_dof_2 = _mm256_loadu_pd(& _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d delta_dof_3 = _mm256_loadu_pd(& _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d delta_dof_4 = _mm256_loadu_pd(& _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d delta_dof_5 = _mm256_loadu_pd(& _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d eta_dof_0 = _mm256_loadu_pd(& _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d eta_dof_1 = _mm256_loadu_pd(& _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d eta_dof_2 = _mm256_loadu_pd(& _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d rho_dof_0 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d rho_dof_1 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d rho_dof_2 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d ux_dof_0 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d ux_dof_1 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d ux_dof_2 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d ux_dof_3 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d ux_dof_4 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d ux_dof_5 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d uy_dof_0 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d uy_dof_1 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d uy_dof_2 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d uy_dof_3 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d uy_dof_4 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d uy_dof_5 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
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
                      const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_1 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      for (int64_t q = 0; q < 6; q += 1)
                      {
                         const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                         const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_2);
                         const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                         const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,tmp_qloop_8);
                         const __m256d tmp_qloop_10 = _mm256_add_pd(tmp_qloop_5,tmp_qloop_9);
                         const __m256d tmp_qloop_11 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_10));
                         const __m256d tmp_qloop_21 = _mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                         const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                         const __m256d tmp_qloop_23 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10));
                         const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_2),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14))),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                         const __m256d tmp_qloop_25 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_24);
                         const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(1.0,1.0,1.0,1.0));
                         const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                         const __m256d tmp_qloop_28 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_26);
                         const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                         const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                         const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_5);
                         const __m256d tmp_qloop_34 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10),tmp_qloop_10)),tmp_qloop_24),_mm256_set_pd(3.0,3.0,3.0,3.0));
                         const __m256d tmp_qloop_35 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_34),tmp_qloop_9);
                         const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_32,tmp_qloop_9));
                         const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13));
                         const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_8);
                         const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_38);
                         const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_41 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,tmp_qloop_5),tmp_qloop_8);
                         const __m256d tmp_qloop_42 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_8));
                         const __m256d tmp_qloop_43 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_38);
                         const __m256d tmp_qloop_44 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_31,tmp_qloop_38),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                         const __m256d tmp_qloop_45 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_46 = _mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_47 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_48 = _mm256_mul_pd(tmp_qloop_47,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_49 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_48);
                         const __m256d tmp_qloop_50 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_51 = _mm256_mul_pd(tmp_qloop_50,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_51);
                         const __m256d tmp_qloop_53 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_54 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_50,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_53);
                         const __m256d tmp_qloop_55 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_47,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_45);
                         const __m256d tmp_qloop_56 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_46),tmp_qloop_48),tmp_qloop_51);
                         const __m256d tmp_qloop_57 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,ux_dof_3),_mm256_mul_pd(tmp_qloop_49,ux_dof_1)),_mm256_mul_pd(tmp_qloop_52,ux_dof_2)),_mm256_mul_pd(tmp_qloop_54,ux_dof_4)),_mm256_mul_pd(tmp_qloop_55,ux_dof_5)),_mm256_mul_pd(tmp_qloop_56,ux_dof_0));
                         const __m256d tmp_qloop_58 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,uy_dof_3),_mm256_mul_pd(tmp_qloop_49,uy_dof_1)),_mm256_mul_pd(tmp_qloop_52,uy_dof_2)),_mm256_mul_pd(tmp_qloop_54,uy_dof_4)),_mm256_mul_pd(tmp_qloop_55,uy_dof_5)),_mm256_mul_pd(tmp_qloop_56,uy_dof_0));
                         const __m256d tmp_qloop_59 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0));
                         const __m256d tmp_qloop_61 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_45);
                         const __m256d tmp_qloop_62 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_qloop_45),tmp_qloop_53);
                         const __m256d tmp_qloop_63 = _mm256_mul_pd(tmp_qloop_62,uy_dof_0);
                         const __m256d tmp_qloop_64 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_53,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                         const __m256d tmp_qloop_65 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_53,uy_dof_3),_mm256_mul_pd(tmp_qloop_61,uy_dof_1)),_mm256_mul_pd(tmp_qloop_64,uy_dof_5)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_53,uy_dof_4),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_63);
                         const __m256d tmp_qloop_67 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_53);
                         const __m256d tmp_qloop_68 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                         const __m256d tmp_qloop_69 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_45,uy_dof_3),_mm256_mul_pd(tmp_qloop_67,uy_dof_2)),_mm256_mul_pd(tmp_qloop_68,uy_dof_4)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_45,uy_dof_5),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_63);
                         const __m256d tmp_qloop_72 = _mm256_mul_pd(tmp_qloop_62,ux_dof_0);
                         const __m256d tmp_qloop_73 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_53,ux_dof_3),_mm256_mul_pd(tmp_qloop_61,ux_dof_1)),_mm256_mul_pd(tmp_qloop_64,ux_dof_5)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_53,ux_dof_4),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_72);
                         const __m256d tmp_qloop_75 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_45,ux_dof_3),_mm256_mul_pd(tmp_qloop_67,ux_dof_2)),_mm256_mul_pd(tmp_qloop_68,ux_dof_4)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_45,ux_dof_5),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_72);
                         const __m256d tmp_qloop_82 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d tmp_qloop_83 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d tmp_qloop_84 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_82,tmp_qloop_82),_mm256_mul_pd(tmp_qloop_83,tmp_qloop_83))))))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_82,tmp_qloop_82),_mm256_mul_pd(tmp_qloop_83,tmp_qloop_83))))))));
                         const __m256d tmp_qloop_85 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_qloop_83),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_qloop_82),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_15,tmp_qloop_15,tmp_qloop_15,tmp_qloop_15))))),_mm256_set_pd(tmp_qloop_17,tmp_qloop_17,tmp_qloop_17,tmp_qloop_17)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                         const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_22),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_9));
                         const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_27),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_23),tmp_qloop_24),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,tmp_qloop_8),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_27,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_24),tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                         const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d tmp_qloop_30 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_29);
                         const __m256d abs_det_jac_blending = tmp_qloop_29;
                         const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_30);
                         const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d tmp_qloop_60 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY)),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY)));
                         const __m256d tmp_qloop_66 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY)),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY)));
                         const __m256d tmp_qloop_70 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,tmp_qloop_65),_mm256_mul_pd(tmp_qloop_66,tmp_qloop_69));
                         const __m256d tmp_qloop_78 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,tmp_qloop_73),_mm256_mul_pd(tmp_qloop_66,tmp_qloop_75));
                         const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_30);
                         const __m256d tmp_qloop_71 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY)),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY)));
                         const __m256d tmp_qloop_74 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY)),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY)));
                         const __m256d tmp_qloop_76 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_71,tmp_qloop_73),_mm256_mul_pd(tmp_qloop_74,tmp_qloop_75));
                         const __m256d tmp_qloop_77 = _mm256_add_pd(tmp_qloop_70,tmp_qloop_76);
                         const __m256d tmp_qloop_79 = _mm256_mul_pd(tmp_qloop_65,tmp_qloop_71);
                         const __m256d tmp_qloop_80 = _mm256_mul_pd(tmp_qloop_69,tmp_qloop_74);
                         const __m256d tmp_qloop_81 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_79,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_80,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_78);
                         const __m256d tmp_qloop_86 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(abs_det_jac_blending,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(eta_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(eta_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(eta_dof_0,tmp_qloop_59))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(rho_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(rho_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(rho_dof_0,tmp_qloop_59)))),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_70,tmp_qloop_77),_mm256_mul_pd(tmp_qloop_76,tmp_qloop_77)),_mm256_mul_pd(tmp_qloop_78,tmp_qloop_81)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_81,_mm256_add_pd(tmp_qloop_79,tmp_qloop_80)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(delta_dof_0,tmp_qloop_56),_mm256_mul_pd(delta_dof_1,tmp_qloop_49)),_mm256_mul_pd(delta_dof_2,tmp_qloop_52)),_mm256_mul_pd(delta_dof_3,tmp_qloop_46)),_mm256_mul_pd(delta_dof_4,tmp_qloop_54)),_mm256_mul_pd(delta_dof_5,tmp_qloop_55))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_blendv_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(0.0,0.0,0.0,0.0),_mm256_cmp_pd(_mm256_set_pd(cutoff,cutoff,cutoff,cutoff),_mm256_add_pd(_mm256_mul_pd(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_84,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_82,tmp_qloop_85)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_82,tmp_qloop_85)))))),_mm256_mul_pd(tmp_qloop_84,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_83,tmp_qloop_85)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_83,tmp_qloop_85)))))))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(radiusSurface,radiusSurface,radiusSurface,radiusSurface)),_CMP_NLE_UQ)));
                         const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_22),tmp_qloop_36);
                         const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_9)),_mm256_mul_pd(tmp_qloop_40,tmp_qloop_8)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_8,tmp_qloop_8),tmp_qloop_8)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_38),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                         const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                         const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                         const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_35),tmp_qloop_44);
                         const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_40),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_2),tmp_qloop_2),tmp_qloop_34),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_33),tmp_qloop_44);
                         const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_9),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                         const __m256d q_tmp_0_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 1],_data_tabulated_and_untitled_0_0_GRAY[12*q + 1],_data_tabulated_and_untitled_0_0_GRAY[12*q + 1],_data_tabulated_and_untitled_0_0_GRAY[12*q + 1])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 1],_data_tabulated_and_untitled_0_0_GRAY[12*q + 1],_data_tabulated_and_untitled_0_0_GRAY[12*q + 1],_data_tabulated_and_untitled_0_0_GRAY[12*q + 1])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q],_data_tabulated_and_untitled_1_0_GRAY[6*q])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q],_data_tabulated_and_untitled_0_0_GRAY[12*q],_data_tabulated_and_untitled_0_0_GRAY[12*q],_data_tabulated_and_untitled_0_0_GRAY[12*q]));
                         const __m256d q_tmp_1_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 7],_data_tabulated_and_untitled_0_0_GRAY[12*q + 7],_data_tabulated_and_untitled_0_0_GRAY[12*q + 7],_data_tabulated_and_untitled_0_0_GRAY[12*q + 7])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 7],_data_tabulated_and_untitled_0_0_GRAY[12*q + 7],_data_tabulated_and_untitled_0_0_GRAY[12*q + 7],_data_tabulated_and_untitled_0_0_GRAY[12*q + 7])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1],_data_tabulated_and_untitled_1_0_GRAY[6*q + 1])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 2],_data_tabulated_and_untitled_0_0_GRAY[12*q + 2],_data_tabulated_and_untitled_0_0_GRAY[12*q + 2],_data_tabulated_and_untitled_0_0_GRAY[12*q + 2]));
                         const __m256d q_tmp_2_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 8],_data_tabulated_and_untitled_0_0_GRAY[12*q + 8],_data_tabulated_and_untitled_0_0_GRAY[12*q + 8],_data_tabulated_and_untitled_0_0_GRAY[12*q + 8])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 8],_data_tabulated_and_untitled_0_0_GRAY[12*q + 8],_data_tabulated_and_untitled_0_0_GRAY[12*q + 8],_data_tabulated_and_untitled_0_0_GRAY[12*q + 8])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2],_data_tabulated_and_untitled_1_0_GRAY[6*q + 2])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 3],_data_tabulated_and_untitled_0_0_GRAY[12*q + 3],_data_tabulated_and_untitled_0_0_GRAY[12*q + 3],_data_tabulated_and_untitled_0_0_GRAY[12*q + 3]));
                         const __m256d q_tmp_3_3 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 9],_data_tabulated_and_untitled_0_0_GRAY[12*q + 9],_data_tabulated_and_untitled_0_0_GRAY[12*q + 9],_data_tabulated_and_untitled_0_0_GRAY[12*q + 9])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 9],_data_tabulated_and_untitled_0_0_GRAY[12*q + 9],_data_tabulated_and_untitled_0_0_GRAY[12*q + 9],_data_tabulated_and_untitled_0_0_GRAY[12*q + 9])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3],_data_tabulated_and_untitled_1_0_GRAY[6*q + 3])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 4],_data_tabulated_and_untitled_0_0_GRAY[12*q + 4],_data_tabulated_and_untitled_0_0_GRAY[12*q + 4],_data_tabulated_and_untitled_0_0_GRAY[12*q + 4]));
                         const __m256d q_tmp_4_4 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 10],_data_tabulated_and_untitled_0_0_GRAY[12*q + 10],_data_tabulated_and_untitled_0_0_GRAY[12*q + 10],_data_tabulated_and_untitled_0_0_GRAY[12*q + 10])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 10],_data_tabulated_and_untitled_0_0_GRAY[12*q + 10],_data_tabulated_and_untitled_0_0_GRAY[12*q + 10],_data_tabulated_and_untitled_0_0_GRAY[12*q + 10])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4],_data_tabulated_and_untitled_1_0_GRAY[6*q + 4])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 5],_data_tabulated_and_untitled_0_0_GRAY[12*q + 5],_data_tabulated_and_untitled_0_0_GRAY[12*q + 5],_data_tabulated_and_untitled_0_0_GRAY[12*q + 5]));
                         const __m256d q_tmp_5_5 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 11],_data_tabulated_and_untitled_0_0_GRAY[12*q + 11],_data_tabulated_and_untitled_0_0_GRAY[12*q + 11],_data_tabulated_and_untitled_0_0_GRAY[12*q + 11])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 11],_data_tabulated_and_untitled_0_0_GRAY[12*q + 11],_data_tabulated_and_untitled_0_0_GRAY[12*q + 11],_data_tabulated_and_untitled_0_0_GRAY[12*q + 11])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5],_data_tabulated_and_untitled_1_0_GRAY[6*q + 5])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[12*q + 6],_data_tabulated_and_untitled_0_0_GRAY[12*q + 6],_data_tabulated_and_untitled_0_0_GRAY[12*q + 6],_data_tabulated_and_untitled_0_0_GRAY[12*q + 6]));
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
                const __m256d tmp_moved_constant_0 = _mm256_loadu_pd(& _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_1 = _mm256_loadu_pd(& _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_2 = _mm256_loadu_pd(& _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_3 = _mm256_loadu_pd(& _data_deltaEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_4 = _mm256_loadu_pd(& _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_5 = _mm256_loadu_pd(& _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d tmp_moved_constant_6 = _mm256_loadu_pd(& _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_7 = _mm256_loadu_pd(& _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_8 = _mm256_loadu_pd(& _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_9 = _mm256_loadu_pd(& _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_10 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_11 = _mm256_loadu_pd(& _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_12 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_13 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_14 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_15 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_16 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_17 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d tmp_moved_constant_18 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_19 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_20 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_21 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_22 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_23 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
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
                      const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_1 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      for (int64_t q = 0; q < 6; q += 1)
                      {
                         const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                         const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_2);
                         const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                         const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,tmp_qloop_8);
                         const __m256d tmp_qloop_10 = _mm256_add_pd(tmp_qloop_5,tmp_qloop_9);
                         const __m256d tmp_qloop_11 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_10));
                         const __m256d tmp_qloop_21 = _mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                         const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                         const __m256d tmp_qloop_23 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10));
                         const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_2),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14))),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                         const __m256d tmp_qloop_25 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_24);
                         const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(1.0,1.0,1.0,1.0));
                         const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                         const __m256d tmp_qloop_28 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_26);
                         const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                         const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                         const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_5);
                         const __m256d tmp_qloop_34 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10),tmp_qloop_10)),tmp_qloop_24),_mm256_set_pd(3.0,3.0,3.0,3.0));
                         const __m256d tmp_qloop_35 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_34),tmp_qloop_9);
                         const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_32,tmp_qloop_9));
                         const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13));
                         const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_8);
                         const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_38);
                         const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_41 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,tmp_qloop_5),tmp_qloop_8);
                         const __m256d tmp_qloop_42 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_8));
                         const __m256d tmp_qloop_43 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_38);
                         const __m256d tmp_qloop_44 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_31,tmp_qloop_38),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                         const __m256d tmp_qloop_45 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_46 = _mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_47 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_48 = _mm256_mul_pd(tmp_qloop_47,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_49 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_48);
                         const __m256d tmp_qloop_50 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_51 = _mm256_mul_pd(tmp_qloop_50,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_51);
                         const __m256d tmp_qloop_53 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_54 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_50,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_53);
                         const __m256d tmp_qloop_55 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_47,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_45);
                         const __m256d tmp_qloop_56 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_46),tmp_qloop_48),tmp_qloop_51);
                         const __m256d tmp_qloop_57 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_12,tmp_qloop_56),_mm256_mul_pd(tmp_moved_constant_13,tmp_qloop_49)),_mm256_mul_pd(tmp_moved_constant_14,tmp_qloop_52)),_mm256_mul_pd(tmp_moved_constant_15,tmp_qloop_46)),_mm256_mul_pd(tmp_moved_constant_16,tmp_qloop_54)),_mm256_mul_pd(tmp_moved_constant_17,tmp_qloop_55));
                         const __m256d tmp_qloop_58 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_18,tmp_qloop_56),_mm256_mul_pd(tmp_moved_constant_19,tmp_qloop_49)),_mm256_mul_pd(tmp_moved_constant_20,tmp_qloop_52)),_mm256_mul_pd(tmp_moved_constant_21,tmp_qloop_46)),_mm256_mul_pd(tmp_moved_constant_22,tmp_qloop_54)),_mm256_mul_pd(tmp_moved_constant_23,tmp_qloop_55));
                         const __m256d tmp_qloop_59 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0));
                         const __m256d tmp_qloop_61 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_45);
                         const __m256d tmp_qloop_62 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_qloop_45),tmp_qloop_53);
                         const __m256d tmp_qloop_63 = _mm256_mul_pd(tmp_moved_constant_18,tmp_qloop_62);
                         const __m256d tmp_qloop_64 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_qloop_53,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                         const __m256d tmp_qloop_65 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_19,tmp_qloop_61),_mm256_mul_pd(tmp_moved_constant_21,tmp_qloop_53)),_mm256_mul_pd(tmp_moved_constant_23,tmp_qloop_64)),_mm256_mul_pd(_mm256_mul_pd(tmp_moved_constant_22,tmp_qloop_53),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_63);
                         const __m256d tmp_qloop_67 = _mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_qloop_53);
                         const __m256d tmp_qloop_68 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                         const __m256d tmp_qloop_69 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_20,tmp_qloop_67),_mm256_mul_pd(tmp_moved_constant_21,tmp_qloop_45)),_mm256_mul_pd(tmp_moved_constant_22,tmp_qloop_68)),_mm256_mul_pd(_mm256_mul_pd(tmp_moved_constant_23,tmp_qloop_45),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_63);
                         const __m256d tmp_qloop_72 = _mm256_mul_pd(tmp_moved_constant_12,tmp_qloop_62);
                         const __m256d tmp_qloop_73 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_13,tmp_qloop_61),_mm256_mul_pd(tmp_moved_constant_15,tmp_qloop_53)),_mm256_mul_pd(tmp_moved_constant_17,tmp_qloop_64)),_mm256_mul_pd(_mm256_mul_pd(tmp_moved_constant_16,tmp_qloop_53),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_72);
                         const __m256d tmp_qloop_75 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_14,tmp_qloop_67),_mm256_mul_pd(tmp_moved_constant_15,tmp_qloop_45)),_mm256_mul_pd(tmp_moved_constant_16,tmp_qloop_68)),_mm256_mul_pd(_mm256_mul_pd(tmp_moved_constant_17,tmp_qloop_45),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_72);
                         const __m256d tmp_qloop_82 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d tmp_qloop_83 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d tmp_qloop_84 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_82,tmp_qloop_82),_mm256_mul_pd(tmp_qloop_83,tmp_qloop_83))))))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_82,tmp_qloop_82),_mm256_mul_pd(tmp_qloop_83,tmp_qloop_83))))))));
                         const __m256d tmp_qloop_85 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_qloop_83),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_qloop_82),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_15,tmp_qloop_15,tmp_qloop_15,tmp_qloop_15))))),_mm256_set_pd(tmp_qloop_17,tmp_qloop_17,tmp_qloop_17,tmp_qloop_17)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                         const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_22),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_9));
                         const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_27),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_23),tmp_qloop_24),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,tmp_qloop_8),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_27,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_24),tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                         const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d tmp_qloop_30 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_29);
                         const __m256d abs_det_jac_blending = tmp_qloop_29;
                         const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_30);
                         const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d tmp_qloop_60 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE)),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE)));
                         const __m256d tmp_qloop_66 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE)),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE)));
                         const __m256d tmp_qloop_70 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,tmp_qloop_65),_mm256_mul_pd(tmp_qloop_66,tmp_qloop_69));
                         const __m256d tmp_qloop_78 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_60,tmp_qloop_73),_mm256_mul_pd(tmp_qloop_66,tmp_qloop_75));
                         const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_30);
                         const __m256d tmp_qloop_71 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE)),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE)));
                         const __m256d tmp_qloop_74 = _mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE)),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE)));
                         const __m256d tmp_qloop_76 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_71,tmp_qloop_73),_mm256_mul_pd(tmp_qloop_74,tmp_qloop_75));
                         const __m256d tmp_qloop_77 = _mm256_add_pd(tmp_qloop_70,tmp_qloop_76);
                         const __m256d tmp_qloop_79 = _mm256_mul_pd(tmp_qloop_65,tmp_qloop_71);
                         const __m256d tmp_qloop_80 = _mm256_mul_pd(tmp_qloop_69,tmp_qloop_74);
                         const __m256d tmp_qloop_81 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_79,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_80,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_78);
                         const __m256d tmp_qloop_86 = _mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(abs_det_jac_blending,_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_10,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_moved_constant_11,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_moved_constant_9,tmp_qloop_59)))),_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_7,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_moved_constant_8,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_moved_constant_6,tmp_qloop_59))),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_70,tmp_qloop_77),_mm256_mul_pd(tmp_qloop_76,tmp_qloop_77)),_mm256_mul_pd(tmp_qloop_78,tmp_qloop_81)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_81,_mm256_add_pd(tmp_qloop_79,tmp_qloop_80)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)))),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_0,tmp_qloop_56),_mm256_mul_pd(tmp_moved_constant_1,tmp_qloop_49)),_mm256_mul_pd(tmp_moved_constant_2,tmp_qloop_52)),_mm256_mul_pd(tmp_moved_constant_3,tmp_qloop_46)),_mm256_mul_pd(tmp_moved_constant_4,tmp_qloop_54)),_mm256_mul_pd(tmp_moved_constant_5,tmp_qloop_55))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q])),_mm256_blendv_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(0.0,0.0,0.0,0.0),_mm256_cmp_pd(_mm256_set_pd(cutoff,cutoff,cutoff,cutoff),_mm256_add_pd(_mm256_mul_pd(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_84,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_82,tmp_qloop_85)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_82,tmp_qloop_85)))))),_mm256_mul_pd(tmp_qloop_84,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_83,tmp_qloop_85)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_83,tmp_qloop_85)))))))),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(radiusSurface,radiusSurface,radiusSurface,radiusSurface)),_CMP_NLE_UQ)));
                         const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_22),tmp_qloop_36);
                         const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_9)),_mm256_mul_pd(tmp_qloop_40,tmp_qloop_8)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_8,tmp_qloop_8),tmp_qloop_8)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_38),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                         const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                         const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                         const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_35),tmp_qloop_44);
                         const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_40),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_2),tmp_qloop_2),tmp_qloop_34),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_33),tmp_qloop_44);
                         const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_9),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                         const __m256d q_tmp_0_0 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 1],_data_tabulated_and_untitled_0_0_BLUE[12*q + 1],_data_tabulated_and_untitled_0_0_BLUE[12*q + 1],_data_tabulated_and_untitled_0_0_BLUE[12*q + 1])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 1],_data_tabulated_and_untitled_0_0_BLUE[12*q + 1],_data_tabulated_and_untitled_0_0_BLUE[12*q + 1],_data_tabulated_and_untitled_0_0_BLUE[12*q + 1])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q],_data_tabulated_and_untitled_1_0_BLUE[6*q])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q],_data_tabulated_and_untitled_0_0_BLUE[12*q],_data_tabulated_and_untitled_0_0_BLUE[12*q],_data_tabulated_and_untitled_0_0_BLUE[12*q]));
                         const __m256d q_tmp_1_1 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 7],_data_tabulated_and_untitled_0_0_BLUE[12*q + 7],_data_tabulated_and_untitled_0_0_BLUE[12*q + 7],_data_tabulated_and_untitled_0_0_BLUE[12*q + 7])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 7],_data_tabulated_and_untitled_0_0_BLUE[12*q + 7],_data_tabulated_and_untitled_0_0_BLUE[12*q + 7],_data_tabulated_and_untitled_0_0_BLUE[12*q + 7])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1],_data_tabulated_and_untitled_1_0_BLUE[6*q + 1])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 2],_data_tabulated_and_untitled_0_0_BLUE[12*q + 2],_data_tabulated_and_untitled_0_0_BLUE[12*q + 2],_data_tabulated_and_untitled_0_0_BLUE[12*q + 2]));
                         const __m256d q_tmp_2_2 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 8],_data_tabulated_and_untitled_0_0_BLUE[12*q + 8],_data_tabulated_and_untitled_0_0_BLUE[12*q + 8],_data_tabulated_and_untitled_0_0_BLUE[12*q + 8])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 8],_data_tabulated_and_untitled_0_0_BLUE[12*q + 8],_data_tabulated_and_untitled_0_0_BLUE[12*q + 8],_data_tabulated_and_untitled_0_0_BLUE[12*q + 8])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2],_data_tabulated_and_untitled_1_0_BLUE[6*q + 2])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 3],_data_tabulated_and_untitled_0_0_BLUE[12*q + 3],_data_tabulated_and_untitled_0_0_BLUE[12*q + 3],_data_tabulated_and_untitled_0_0_BLUE[12*q + 3]));
                         const __m256d q_tmp_3_3 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 9],_data_tabulated_and_untitled_0_0_BLUE[12*q + 9],_data_tabulated_and_untitled_0_0_BLUE[12*q + 9],_data_tabulated_and_untitled_0_0_BLUE[12*q + 9])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 9],_data_tabulated_and_untitled_0_0_BLUE[12*q + 9],_data_tabulated_and_untitled_0_0_BLUE[12*q + 9],_data_tabulated_and_untitled_0_0_BLUE[12*q + 9])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3],_data_tabulated_and_untitled_1_0_BLUE[6*q + 3])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 4],_data_tabulated_and_untitled_0_0_BLUE[12*q + 4],_data_tabulated_and_untitled_0_0_BLUE[12*q + 4],_data_tabulated_and_untitled_0_0_BLUE[12*q + 4]));
                         const __m256d q_tmp_4_4 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 10],_data_tabulated_and_untitled_0_0_BLUE[12*q + 10],_data_tabulated_and_untitled_0_0_BLUE[12*q + 10],_data_tabulated_and_untitled_0_0_BLUE[12*q + 10])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 10],_data_tabulated_and_untitled_0_0_BLUE[12*q + 10],_data_tabulated_and_untitled_0_0_BLUE[12*q + 10],_data_tabulated_and_untitled_0_0_BLUE[12*q + 10])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4],_data_tabulated_and_untitled_1_0_BLUE[6*q + 4])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 5],_data_tabulated_and_untitled_0_0_BLUE[12*q + 5],_data_tabulated_and_untitled_0_0_BLUE[12*q + 5],_data_tabulated_and_untitled_0_0_BLUE[12*q + 5]));
                         const __m256d q_tmp_5_5 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_86,_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_0,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 11],_data_tabulated_and_untitled_0_0_BLUE[12*q + 11],_data_tabulated_and_untitled_0_0_BLUE[12*q + 11],_data_tabulated_and_untitled_0_0_BLUE[12*q + 11])),_mm256_mul_pd(jac_blending_inv_1_0,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5])))),_mm256_mul_pd(tmp_qloop_58,_mm256_add_pd(_mm256_mul_pd(jac_blending_inv_0_1,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 11],_data_tabulated_and_untitled_0_0_BLUE[12*q + 11],_data_tabulated_and_untitled_0_0_BLUE[12*q + 11],_data_tabulated_and_untitled_0_0_BLUE[12*q + 11])),_mm256_mul_pd(jac_blending_inv_1_1,_mm256_set_pd(_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5],_data_tabulated_and_untitled_1_0_BLUE[6*q + 5])))))),_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[12*q + 6],_data_tabulated_and_untitled_0_0_BLUE[12*q + 6],_data_tabulated_and_untitled_0_0_BLUE[12*q + 6],_data_tabulated_and_untitled_0_0_BLUE[12*q + 6]));
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
                      real_t q_acc_1_1 = 0.0;
                      real_t q_acc_2_2 = 0.0;
                      real_t q_acc_3_3 = 0.0;
                      real_t q_acc_4_4 = 0.0;
                      real_t q_acc_5_5 = 0.0;
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
                         const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q];
                         const real_t tmp_qloop_46 = tmp_qloop_45*_data_q_p_1[q];
                         const real_t tmp_qloop_47 = (_data_q_p_0[q]*_data_q_p_0[q]);
                         const real_t tmp_qloop_48 = tmp_qloop_47*2.0;
                         const real_t tmp_qloop_49 = tmp_qloop_48 - _data_q_p_0[q];
                         const real_t tmp_qloop_50 = (_data_q_p_1[q]*_data_q_p_1[q]);
                         const real_t tmp_qloop_51 = tmp_qloop_50*2.0;
                         const real_t tmp_qloop_52 = tmp_qloop_51 - _data_q_p_1[q];
                         const real_t tmp_qloop_53 = 4.0*_data_q_p_1[q];
                         const real_t tmp_qloop_54 = -tmp_qloop_46 + tmp_qloop_50*-4.0 + tmp_qloop_53;
                         const real_t tmp_qloop_55 = tmp_qloop_45 - tmp_qloop_46 + tmp_qloop_47*-4.0;
                         const real_t tmp_qloop_56 = tmp_qloop_46 + tmp_qloop_48 + tmp_qloop_51 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                         const real_t tmp_qloop_57 = tmp_qloop_46*ux_dof_3 + tmp_qloop_49*ux_dof_1 + tmp_qloop_52*ux_dof_2 + tmp_qloop_54*ux_dof_4 + tmp_qloop_55*ux_dof_5 + tmp_qloop_56*ux_dof_0;
                         const real_t tmp_qloop_58 = tmp_qloop_46*uy_dof_3 + tmp_qloop_49*uy_dof_1 + tmp_qloop_52*uy_dof_2 + tmp_qloop_54*uy_dof_4 + tmp_qloop_55*uy_dof_5 + tmp_qloop_56*uy_dof_0;
                         const real_t tmp_qloop_59 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                         const real_t tmp_qloop_61 = tmp_qloop_45 - 1.0;
                         const real_t tmp_qloop_62 = tmp_qloop_45 + tmp_qloop_53 - 3.0;
                         const real_t tmp_qloop_63 = tmp_qloop_62*uy_dof_0;
                         const real_t tmp_qloop_64 = -tmp_qloop_53 - 8.0*_data_q_p_0[q] + 4.0;
                         const real_t tmp_qloop_65 = tmp_qloop_53*uy_dof_3 - tmp_qloop_53*uy_dof_4 + tmp_qloop_61*uy_dof_1 + tmp_qloop_63 + tmp_qloop_64*uy_dof_5;
                         const real_t tmp_qloop_67 = tmp_qloop_53 - 1.0;
                         const real_t tmp_qloop_68 = -tmp_qloop_45 - 8.0*_data_q_p_1[q] + 4.0;
                         const real_t tmp_qloop_69 = tmp_qloop_45*uy_dof_3 - tmp_qloop_45*uy_dof_5 + tmp_qloop_63 + tmp_qloop_67*uy_dof_2 + tmp_qloop_68*uy_dof_4;
                         const real_t tmp_qloop_72 = tmp_qloop_62*ux_dof_0;
                         const real_t tmp_qloop_73 = tmp_qloop_53*ux_dof_3 - tmp_qloop_53*ux_dof_4 + tmp_qloop_61*ux_dof_1 + tmp_qloop_64*ux_dof_5 + tmp_qloop_72;
                         const real_t tmp_qloop_75 = tmp_qloop_45*ux_dof_3 - tmp_qloop_45*ux_dof_5 + tmp_qloop_67*ux_dof_2 + tmp_qloop_68*ux_dof_4 + tmp_qloop_72;
                         const real_t tmp_qloop_82 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                         const real_t tmp_qloop_83 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                         const real_t tmp_qloop_84 = 1.0 / (abs(pow((tmp_qloop_82*tmp_qloop_82) + (tmp_qloop_83*tmp_qloop_83), 0.50000000000000000))*abs(pow((tmp_qloop_82*tmp_qloop_82) + (tmp_qloop_83*tmp_qloop_83), 0.50000000000000000)));
                         const real_t tmp_qloop_85 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_83) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_82));
                         const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                         const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                         const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                         const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                         const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                         const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                         const real_t abs_det_jac_blending = tmp_qloop_29;
                         const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                         const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                         const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                         const real_t tmp_qloop_60 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_0;
                         const real_t tmp_qloop_66 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_0;
                         const real_t tmp_qloop_70 = tmp_qloop_60*tmp_qloop_65 + tmp_qloop_66*tmp_qloop_69;
                         const real_t tmp_qloop_78 = tmp_qloop_60*tmp_qloop_73 + tmp_qloop_66*tmp_qloop_75;
                         const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                         const real_t tmp_qloop_71 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_1;
                         const real_t tmp_qloop_74 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_1;
                         const real_t tmp_qloop_76 = tmp_qloop_71*tmp_qloop_73 + tmp_qloop_74*tmp_qloop_75;
                         const real_t tmp_qloop_77 = tmp_qloop_70 + tmp_qloop_76;
                         const real_t tmp_qloop_79 = tmp_qloop_65*tmp_qloop_71;
                         const real_t tmp_qloop_80 = tmp_qloop_69*tmp_qloop_74;
                         const real_t tmp_qloop_81 = tmp_qloop_78 - tmp_qloop_79 - tmp_qloop_80;
                         const real_t tmp_qloop_86 = abs_det_jac_blending*(eta_dof_0*tmp_qloop_59 + eta_dof_1*_data_q_p_0[q] + eta_dof_2*_data_q_p_1[q])*1.0 / (rho_dof_0*tmp_qloop_59 + rho_dof_1*_data_q_p_0[q] + rho_dof_2*_data_q_p_1[q])*(tmp_qloop_70*tmp_qloop_77 + tmp_qloop_76*tmp_qloop_77 + tmp_qloop_78*tmp_qloop_81 - tmp_qloop_81*(tmp_qloop_79 + tmp_qloop_80))*(delta_dof_0*tmp_qloop_56 + delta_dof_1*tmp_qloop_49 + delta_dof_2*tmp_qloop_52 + delta_dof_3*tmp_qloop_46 + delta_dof_4*tmp_qloop_54 + delta_dof_5*tmp_qloop_55)*((cutoff > radiusSurface - pow(tmp_qloop_84*(abs(tmp_qloop_82*tmp_qloop_85)*abs(tmp_qloop_82*tmp_qloop_85)) + tmp_qloop_84*(abs(tmp_qloop_83*tmp_qloop_85)*abs(tmp_qloop_83*tmp_qloop_85)), 0.50000000000000000)) ? (0.0): (1.0))*_data_q_w[q];
                         const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                         const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                         const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                         const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                         const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                         const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                         const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                         const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                         const real_t q_tmp_0_0 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]))*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                         const real_t q_tmp_1_1 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                         const real_t q_tmp_2_2 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                         const real_t q_tmp_3_3 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                         const real_t q_tmp_4_4 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                         const real_t q_tmp_5_5 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
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
                const real_t tmp_moved_constant_0 = _data_deltaVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_1 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_2 = _data_deltaVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t tmp_moved_constant_3 = _data_deltaEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_4 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_5 = _data_deltaEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t tmp_moved_constant_6 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_7 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_8 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t tmp_moved_constant_9 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_10 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_11 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t tmp_moved_constant_12 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_13 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_14 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t tmp_moved_constant_15 = _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_16 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_17 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t tmp_moved_constant_18 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_19 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_20 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t tmp_moved_constant_21 = _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t tmp_moved_constant_22 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t tmp_moved_constant_23 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
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
                         const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q];
                         const real_t tmp_qloop_46 = tmp_qloop_45*_data_q_p_1[q];
                         const real_t tmp_qloop_47 = (_data_q_p_0[q]*_data_q_p_0[q]);
                         const real_t tmp_qloop_48 = tmp_qloop_47*2.0;
                         const real_t tmp_qloop_49 = tmp_qloop_48 - _data_q_p_0[q];
                         const real_t tmp_qloop_50 = (_data_q_p_1[q]*_data_q_p_1[q]);
                         const real_t tmp_qloop_51 = tmp_qloop_50*2.0;
                         const real_t tmp_qloop_52 = tmp_qloop_51 - _data_q_p_1[q];
                         const real_t tmp_qloop_53 = 4.0*_data_q_p_1[q];
                         const real_t tmp_qloop_54 = -tmp_qloop_46 + tmp_qloop_50*-4.0 + tmp_qloop_53;
                         const real_t tmp_qloop_55 = tmp_qloop_45 - tmp_qloop_46 + tmp_qloop_47*-4.0;
                         const real_t tmp_qloop_56 = tmp_qloop_46 + tmp_qloop_48 + tmp_qloop_51 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                         const real_t tmp_qloop_57 = tmp_moved_constant_12*tmp_qloop_56 + tmp_moved_constant_13*tmp_qloop_49 + tmp_moved_constant_14*tmp_qloop_52 + tmp_moved_constant_15*tmp_qloop_46 + tmp_moved_constant_16*tmp_qloop_54 + tmp_moved_constant_17*tmp_qloop_55;
                         const real_t tmp_qloop_58 = tmp_moved_constant_18*tmp_qloop_56 + tmp_moved_constant_19*tmp_qloop_49 + tmp_moved_constant_20*tmp_qloop_52 + tmp_moved_constant_21*tmp_qloop_46 + tmp_moved_constant_22*tmp_qloop_54 + tmp_moved_constant_23*tmp_qloop_55;
                         const real_t tmp_qloop_59 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                         const real_t tmp_qloop_61 = tmp_qloop_45 - 1.0;
                         const real_t tmp_qloop_62 = tmp_qloop_45 + tmp_qloop_53 - 3.0;
                         const real_t tmp_qloop_63 = tmp_moved_constant_18*tmp_qloop_62;
                         const real_t tmp_qloop_64 = -tmp_qloop_53 - 8.0*_data_q_p_0[q] + 4.0;
                         const real_t tmp_qloop_65 = tmp_moved_constant_19*tmp_qloop_61 + tmp_moved_constant_21*tmp_qloop_53 - tmp_moved_constant_22*tmp_qloop_53 + tmp_moved_constant_23*tmp_qloop_64 + tmp_qloop_63;
                         const real_t tmp_qloop_67 = tmp_qloop_53 - 1.0;
                         const real_t tmp_qloop_68 = -tmp_qloop_45 - 8.0*_data_q_p_1[q] + 4.0;
                         const real_t tmp_qloop_69 = tmp_moved_constant_20*tmp_qloop_67 + tmp_moved_constant_21*tmp_qloop_45 + tmp_moved_constant_22*tmp_qloop_68 - tmp_moved_constant_23*tmp_qloop_45 + tmp_qloop_63;
                         const real_t tmp_qloop_72 = tmp_moved_constant_12*tmp_qloop_62;
                         const real_t tmp_qloop_73 = tmp_moved_constant_13*tmp_qloop_61 + tmp_moved_constant_15*tmp_qloop_53 - tmp_moved_constant_16*tmp_qloop_53 + tmp_moved_constant_17*tmp_qloop_64 + tmp_qloop_72;
                         const real_t tmp_qloop_75 = tmp_moved_constant_14*tmp_qloop_67 + tmp_moved_constant_15*tmp_qloop_45 + tmp_moved_constant_16*tmp_qloop_68 - tmp_moved_constant_17*tmp_qloop_45 + tmp_qloop_72;
                         const real_t tmp_qloop_82 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                         const real_t tmp_qloop_83 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                         const real_t tmp_qloop_84 = 1.0 / (abs(pow((tmp_qloop_82*tmp_qloop_82) + (tmp_qloop_83*tmp_qloop_83), 0.50000000000000000))*abs(pow((tmp_qloop_82*tmp_qloop_82) + (tmp_qloop_83*tmp_qloop_83), 0.50000000000000000)));
                         const real_t tmp_qloop_85 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_83) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_82));
                         const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                         const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                         const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                         const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                         const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                         const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                         const real_t abs_det_jac_blending = tmp_qloop_29;
                         const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                         const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                         const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                         const real_t tmp_qloop_60 = jac_affine_inv_0_0_BLUE*jac_blending_inv_0_0 + jac_affine_inv_0_1_BLUE*jac_blending_inv_1_0;
                         const real_t tmp_qloop_66 = jac_affine_inv_1_0_BLUE*jac_blending_inv_0_0 + jac_affine_inv_1_1_BLUE*jac_blending_inv_1_0;
                         const real_t tmp_qloop_70 = tmp_qloop_60*tmp_qloop_65 + tmp_qloop_66*tmp_qloop_69;
                         const real_t tmp_qloop_78 = tmp_qloop_60*tmp_qloop_73 + tmp_qloop_66*tmp_qloop_75;
                         const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                         const real_t tmp_qloop_71 = jac_affine_inv_0_0_BLUE*jac_blending_inv_0_1 + jac_affine_inv_0_1_BLUE*jac_blending_inv_1_1;
                         const real_t tmp_qloop_74 = jac_affine_inv_1_0_BLUE*jac_blending_inv_0_1 + jac_affine_inv_1_1_BLUE*jac_blending_inv_1_1;
                         const real_t tmp_qloop_76 = tmp_qloop_71*tmp_qloop_73 + tmp_qloop_74*tmp_qloop_75;
                         const real_t tmp_qloop_77 = tmp_qloop_70 + tmp_qloop_76;
                         const real_t tmp_qloop_79 = tmp_qloop_65*tmp_qloop_71;
                         const real_t tmp_qloop_80 = tmp_qloop_69*tmp_qloop_74;
                         const real_t tmp_qloop_81 = tmp_qloop_78 - tmp_qloop_79 - tmp_qloop_80;
                         const real_t tmp_qloop_86 = abs_det_jac_blending*1.0 / (tmp_moved_constant_10*_data_q_p_0[q] + tmp_moved_constant_11*_data_q_p_1[q] + tmp_moved_constant_9*tmp_qloop_59)*(tmp_moved_constant_6*tmp_qloop_59 + tmp_moved_constant_7*_data_q_p_0[q] + tmp_moved_constant_8*_data_q_p_1[q])*(tmp_qloop_70*tmp_qloop_77 + tmp_qloop_76*tmp_qloop_77 + tmp_qloop_78*tmp_qloop_81 - tmp_qloop_81*(tmp_qloop_79 + tmp_qloop_80))*(tmp_moved_constant_0*tmp_qloop_56 + tmp_moved_constant_1*tmp_qloop_49 + tmp_moved_constant_2*tmp_qloop_52 + tmp_moved_constant_3*tmp_qloop_46 + tmp_moved_constant_4*tmp_qloop_54 + tmp_moved_constant_5*tmp_qloop_55)*((cutoff > radiusSurface - pow(tmp_qloop_84*(abs(tmp_qloop_82*tmp_qloop_85)*abs(tmp_qloop_82*tmp_qloop_85)) + tmp_qloop_84*(abs(tmp_qloop_83*tmp_qloop_85)*abs(tmp_qloop_83*tmp_qloop_85)), 0.50000000000000000)) ? (0.0): (1.0))*_data_q_w[q];
                         const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                         const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                         const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                         const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                         const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                         const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                         const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                         const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                         const real_t q_tmp_0_0 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 1] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 1] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q]))*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                         const real_t q_tmp_1_1 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 7] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 7] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]))*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                         const real_t q_tmp_2_2 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 8] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 8] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]))*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                         const real_t q_tmp_3_3 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 9] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 9] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]))*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                         const real_t q_tmp_4_4 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 10] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 10] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]))*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                         const real_t q_tmp_5_5 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 11] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 11] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]))*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
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
                      real_t q_acc_1_1 = 0.0;
                      real_t q_acc_2_2 = 0.0;
                      real_t q_acc_3_3 = 0.0;
                      real_t q_acc_4_4 = 0.0;
                      real_t q_acc_5_5 = 0.0;
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
                         const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q];
                         const real_t tmp_qloop_46 = tmp_qloop_45*_data_q_p_1[q];
                         const real_t tmp_qloop_47 = (_data_q_p_0[q]*_data_q_p_0[q]);
                         const real_t tmp_qloop_48 = tmp_qloop_47*2.0;
                         const real_t tmp_qloop_49 = tmp_qloop_48 - _data_q_p_0[q];
                         const real_t tmp_qloop_50 = (_data_q_p_1[q]*_data_q_p_1[q]);
                         const real_t tmp_qloop_51 = tmp_qloop_50*2.0;
                         const real_t tmp_qloop_52 = tmp_qloop_51 - _data_q_p_1[q];
                         const real_t tmp_qloop_53 = 4.0*_data_q_p_1[q];
                         const real_t tmp_qloop_54 = -tmp_qloop_46 + tmp_qloop_50*-4.0 + tmp_qloop_53;
                         const real_t tmp_qloop_55 = tmp_qloop_45 - tmp_qloop_46 + tmp_qloop_47*-4.0;
                         const real_t tmp_qloop_56 = tmp_qloop_46 + tmp_qloop_48 + tmp_qloop_51 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                         const real_t tmp_qloop_57 = tmp_qloop_46*ux_dof_3 + tmp_qloop_49*ux_dof_1 + tmp_qloop_52*ux_dof_2 + tmp_qloop_54*ux_dof_4 + tmp_qloop_55*ux_dof_5 + tmp_qloop_56*ux_dof_0;
                         const real_t tmp_qloop_58 = tmp_qloop_46*uy_dof_3 + tmp_qloop_49*uy_dof_1 + tmp_qloop_52*uy_dof_2 + tmp_qloop_54*uy_dof_4 + tmp_qloop_55*uy_dof_5 + tmp_qloop_56*uy_dof_0;
                         const real_t tmp_qloop_59 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                         const real_t tmp_qloop_61 = tmp_qloop_45 - 1.0;
                         const real_t tmp_qloop_62 = tmp_qloop_45 + tmp_qloop_53 - 3.0;
                         const real_t tmp_qloop_63 = tmp_qloop_62*uy_dof_0;
                         const real_t tmp_qloop_64 = -tmp_qloop_53 - 8.0*_data_q_p_0[q] + 4.0;
                         const real_t tmp_qloop_65 = tmp_qloop_53*uy_dof_3 - tmp_qloop_53*uy_dof_4 + tmp_qloop_61*uy_dof_1 + tmp_qloop_63 + tmp_qloop_64*uy_dof_5;
                         const real_t tmp_qloop_67 = tmp_qloop_53 - 1.0;
                         const real_t tmp_qloop_68 = -tmp_qloop_45 - 8.0*_data_q_p_1[q] + 4.0;
                         const real_t tmp_qloop_69 = tmp_qloop_45*uy_dof_3 - tmp_qloop_45*uy_dof_5 + tmp_qloop_63 + tmp_qloop_67*uy_dof_2 + tmp_qloop_68*uy_dof_4;
                         const real_t tmp_qloop_72 = tmp_qloop_62*ux_dof_0;
                         const real_t tmp_qloop_73 = tmp_qloop_53*ux_dof_3 - tmp_qloop_53*ux_dof_4 + tmp_qloop_61*ux_dof_1 + tmp_qloop_64*ux_dof_5 + tmp_qloop_72;
                         const real_t tmp_qloop_75 = tmp_qloop_45*ux_dof_3 - tmp_qloop_45*ux_dof_5 + tmp_qloop_67*ux_dof_2 + tmp_qloop_68*ux_dof_4 + tmp_qloop_72;
                         const real_t tmp_qloop_82 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                         const real_t tmp_qloop_83 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                         const real_t tmp_qloop_84 = 1.0 / (abs(pow((tmp_qloop_82*tmp_qloop_82) + (tmp_qloop_83*tmp_qloop_83), 0.50000000000000000))*abs(pow((tmp_qloop_82*tmp_qloop_82) + (tmp_qloop_83*tmp_qloop_83), 0.50000000000000000)));
                         const real_t tmp_qloop_85 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_83) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_82));
                         const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                         const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                         const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                         const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                         const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                         const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                         const real_t abs_det_jac_blending = tmp_qloop_29;
                         const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                         const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                         const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                         const real_t tmp_qloop_60 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_0;
                         const real_t tmp_qloop_66 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_0;
                         const real_t tmp_qloop_70 = tmp_qloop_60*tmp_qloop_65 + tmp_qloop_66*tmp_qloop_69;
                         const real_t tmp_qloop_78 = tmp_qloop_60*tmp_qloop_73 + tmp_qloop_66*tmp_qloop_75;
                         const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                         const real_t tmp_qloop_71 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_1;
                         const real_t tmp_qloop_74 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_1;
                         const real_t tmp_qloop_76 = tmp_qloop_71*tmp_qloop_73 + tmp_qloop_74*tmp_qloop_75;
                         const real_t tmp_qloop_77 = tmp_qloop_70 + tmp_qloop_76;
                         const real_t tmp_qloop_79 = tmp_qloop_65*tmp_qloop_71;
                         const real_t tmp_qloop_80 = tmp_qloop_69*tmp_qloop_74;
                         const real_t tmp_qloop_81 = tmp_qloop_78 - tmp_qloop_79 - tmp_qloop_80;
                         const real_t tmp_qloop_86 = abs_det_jac_blending*(eta_dof_0*tmp_qloop_59 + eta_dof_1*_data_q_p_0[q] + eta_dof_2*_data_q_p_1[q])*1.0 / (rho_dof_0*tmp_qloop_59 + rho_dof_1*_data_q_p_0[q] + rho_dof_2*_data_q_p_1[q])*(tmp_qloop_70*tmp_qloop_77 + tmp_qloop_76*tmp_qloop_77 + tmp_qloop_78*tmp_qloop_81 - tmp_qloop_81*(tmp_qloop_79 + tmp_qloop_80))*(delta_dof_0*tmp_qloop_56 + delta_dof_1*tmp_qloop_49 + delta_dof_2*tmp_qloop_52 + delta_dof_3*tmp_qloop_46 + delta_dof_4*tmp_qloop_54 + delta_dof_5*tmp_qloop_55)*((cutoff > radiusSurface - pow(tmp_qloop_84*(abs(tmp_qloop_82*tmp_qloop_85)*abs(tmp_qloop_82*tmp_qloop_85)) + tmp_qloop_84*(abs(tmp_qloop_83*tmp_qloop_85)*abs(tmp_qloop_83*tmp_qloop_85)), 0.50000000000000000)) ? (0.0): (1.0))*_data_q_w[q];
                         const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                         const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                         const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                         const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                         const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                         const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                         const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                         const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                         const real_t q_tmp_0_0 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]))*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                         const real_t q_tmp_1_1 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                         const real_t q_tmp_2_2 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                         const real_t q_tmp_3_3 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                         const real_t q_tmp_4_4 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                         const real_t q_tmp_5_5 = tmp_qloop_86*(tmp_qloop_57*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]) + tmp_qloop_58*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]))*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
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
