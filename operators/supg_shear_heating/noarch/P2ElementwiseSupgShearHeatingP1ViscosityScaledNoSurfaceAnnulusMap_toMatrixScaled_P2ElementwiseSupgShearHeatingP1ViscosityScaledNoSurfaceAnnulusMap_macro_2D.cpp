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

































#include "../P2ElementwiseSupgShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseSupgShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap::toMatrixScaled_P2ElementwiseSupgShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_eta, real_t * RESTRICT  _data_rho, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t * RESTRICT  _data_uxEdge, real_t * RESTRICT  _data_uxVertex, real_t * RESTRICT  _data_uyEdge, real_t * RESTRICT  _data_uyVertex, real_t cutoff, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t radiusSurface, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thermalConductivity, real_t thrVertex_0, real_t thrVertex_1, real_t toMatrixScaling ) const
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
   
       const real_t tmp_qloop_4 = rayVertex_1 - thrVertex_1;
       const real_t tmp_qloop_5 = -tmp_qloop_4;
       const real_t tmp_qloop_14 = rayVertex_0 - refVertex_0;
       const real_t tmp_qloop_15 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_16 = -tmp_qloop_15;
       const real_t tmp_qloop_17 = rayVertex_1 - refVertex_1;
       const real_t tmp_qloop_18 = 1.0 / (-tmp_qloop_14*tmp_qloop_5 + tmp_qloop_16*tmp_qloop_17);
       const real_t tmp_qloop_19 = radRayVertex - radRefVertex;
       const real_t tmp_qloop_20 = -tmp_qloop_19;
       const real_t tmp_qloop_21 = tmp_qloop_18*tmp_qloop_20;
       const real_t tmp_qloop_22 = tmp_qloop_21*1.0;
       const real_t tmp_qloop_91 = 1.0 / (thermalConductivity*thermalConductivity*thermalConductivity);
       const real_t tmp_qloop_102 = 1.0 / (thermalConductivity);
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
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
             const real_t tmp_qloop_61 = ((ux_dof_0*-0.11111111111111111 + ux_dof_1*-0.11111111111111111 + ux_dof_2*-0.11111111111111111 + ux_dof_3*0.44444444444444444 + ux_dof_4*0.44444444444444444 + ux_dof_5*0.44444444444444444)*(ux_dof_0*-0.11111111111111111 + ux_dof_1*-0.11111111111111111 + ux_dof_2*-0.11111111111111111 + ux_dof_3*0.44444444444444444 + ux_dof_4*0.44444444444444444 + ux_dof_5*0.44444444444444444)) + ((uy_dof_0*-0.11111111111111111 + uy_dof_1*-0.11111111111111111 + uy_dof_2*-0.11111111111111111 + uy_dof_3*0.44444444444444444 + uy_dof_4*0.44444444444444444 + uy_dof_5*0.44444444444444444)*(uy_dof_0*-0.11111111111111111 + uy_dof_1*-0.11111111111111111 + uy_dof_2*-0.11111111111111111 + uy_dof_3*0.44444444444444444 + uy_dof_4*0.44444444444444444 + uy_dof_5*0.44444444444444444));
             const real_t tmp_qloop_62 = pow(tmp_qloop_61, 0.50000000000000000);
             const real_t tmp_qloop_63 = 1.0 / (tmp_qloop_62);
             const real_t tmp_qloop_92 = pow(tmp_qloop_61, 1.5000000000000000);
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
                   const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                   const real_t tmp_qloop_1 = -p_affine_2_0;
                   const real_t tmp_qloop_2 = p_affine_0_0 + tmp_qloop_1;
                   const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_1_1;
                   const real_t tmp_qloop_8 = -p_affine_2_1;
                   const real_t tmp_qloop_9 = p_affine_0_1 + tmp_qloop_8;
                   const real_t tmp_qloop_93 = (abs(tmp_qloop_0)*abs(tmp_qloop_0)) + (abs(tmp_qloop_7)*abs(tmp_qloop_7));
                   const real_t tmp_qloop_94 = pow(tmp_qloop_93, 1.5000000000000000);
                   const real_t tmp_qloop_95 = (abs(tmp_qloop_2)*abs(tmp_qloop_2)) + (abs(tmp_qloop_9)*abs(tmp_qloop_9));
                   const real_t tmp_qloop_96 = pow(tmp_qloop_95, 1.5000000000000000);
                   const real_t tmp_qloop_97 = (abs(p_affine_1_0 + tmp_qloop_1)*abs(p_affine_1_0 + tmp_qloop_1)) + (abs(p_affine_1_1 + tmp_qloop_8)*abs(p_affine_1_1 + tmp_qloop_8));
                   const real_t tmp_qloop_98 = pow(tmp_qloop_97, 1.5000000000000000);
                   const real_t tmp_qloop_99 = abs(tmp_qloop_0*tmp_qloop_9 - tmp_qloop_2*tmp_qloop_7);
                   const real_t tmp_qloop_100 = 1.0 / (tmp_qloop_99*tmp_qloop_99*tmp_qloop_99);
                   const real_t tmp_qloop_101 = tmp_qloop_100*tmp_qloop_91*tmp_qloop_92*tmp_qloop_94*tmp_qloop_96*tmp_qloop_98;
                   const real_t tmp_qloop_103 = pow(tmp_qloop_93, 0.50000000000000000);
                   const real_t tmp_qloop_104 = pow(tmp_qloop_95, 0.50000000000000000);
                   const real_t tmp_qloop_105 = pow(tmp_qloop_97, 0.50000000000000000);
                   const real_t tmp_qloop_106 = 1.0 / (tmp_qloop_99);
                   const real_t tmp_qloop_107 = tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_106;
                   const real_t tmp_qloop_108 = tmp_qloop_102*tmp_qloop_107*tmp_qloop_62;
                   const real_t tmp_qloop_109 = 1.0 / (thermalConductivity*thermalConductivity)*tmp_qloop_61*tmp_qloop_93*tmp_qloop_95*tmp_qloop_97*1.0 / (tmp_qloop_99*tmp_qloop_99);
                   for (int64_t q = 0; q < 6; q += 1)
                   {
                      const real_t tmp_qloop_3 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_2*_data_q_p_1[q];
                      const real_t tmp_qloop_6 = (tmp_qloop_3*tmp_qloop_3);
                      const real_t tmp_qloop_10 = p_affine_0_1 - tmp_qloop_7*_data_q_p_0[q] - tmp_qloop_9*_data_q_p_1[q];
                      const real_t tmp_qloop_11 = (tmp_qloop_10*tmp_qloop_10);
                      const real_t tmp_qloop_12 = tmp_qloop_11 + tmp_qloop_6;
                      const real_t tmp_qloop_13 = pow(tmp_qloop_12, -0.50000000000000000);
                      const real_t tmp_qloop_23 = tmp_qloop_13*tmp_qloop_22;
                      const real_t tmp_qloop_24 = tmp_qloop_23*tmp_qloop_5;
                      const real_t tmp_qloop_25 = pow(tmp_qloop_12, -1.5000000000000000);
                      const real_t tmp_qloop_26 = radRayVertex + tmp_qloop_21*(-tmp_qloop_16*(-rayVertex_1 + tmp_qloop_10) + tmp_qloop_5*(-rayVertex_0 + tmp_qloop_3));
                      const real_t tmp_qloop_27 = tmp_qloop_25*tmp_qloop_26;
                      const real_t tmp_qloop_28 = tmp_qloop_27*1.0;
                      const real_t tmp_qloop_29 = tmp_qloop_16*tmp_qloop_23;
                      const real_t tmp_qloop_30 = tmp_qloop_28*tmp_qloop_3;
                      const real_t tmp_qloop_33 = tmp_qloop_22*tmp_qloop_25;
                      const real_t tmp_qloop_34 = tmp_qloop_33*tmp_qloop_5;
                      const real_t tmp_qloop_35 = tmp_qloop_34*tmp_qloop_6;
                      const real_t tmp_qloop_36 = pow(tmp_qloop_12, -2.5000000000000000)*tmp_qloop_26*3.0;
                      const real_t tmp_qloop_37 = tmp_qloop_11*tmp_qloop_3*tmp_qloop_36;
                      const real_t tmp_qloop_38 = tmp_qloop_11*tmp_qloop_34 - tmp_qloop_37;
                      const real_t tmp_qloop_39 = tmp_qloop_15*tmp_qloop_33;
                      const real_t tmp_qloop_40 = tmp_qloop_10*tmp_qloop_3;
                      const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_40;
                      const real_t tmp_qloop_42 = tmp_qloop_27*2.0;
                      const real_t tmp_qloop_43 = tmp_qloop_10*tmp_qloop_36*tmp_qloop_6;
                      const real_t tmp_qloop_44 = tmp_qloop_10*tmp_qloop_28 - tmp_qloop_43;
                      const real_t tmp_qloop_45 = tmp_qloop_39*tmp_qloop_40;
                      const real_t tmp_qloop_46 = tmp_qloop_16*tmp_qloop_33*tmp_qloop_40;
                      const real_t tmp_qloop_47 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_48 = tmp_qloop_47*_data_q_p_1[q];
                      const real_t tmp_qloop_49 = (_data_q_p_0[q]*_data_q_p_0[q]);
                      const real_t tmp_qloop_50 = tmp_qloop_49*2.0;
                      const real_t tmp_qloop_51 = tmp_qloop_50 - _data_q_p_0[q];
                      const real_t tmp_qloop_52 = (_data_q_p_1[q]*_data_q_p_1[q]);
                      const real_t tmp_qloop_53 = tmp_qloop_52*2.0;
                      const real_t tmp_qloop_54 = tmp_qloop_53 - _data_q_p_1[q];
                      const real_t tmp_qloop_55 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_56 = -tmp_qloop_48 + tmp_qloop_52*-4.0 + tmp_qloop_55;
                      const real_t tmp_qloop_57 = tmp_qloop_47 - tmp_qloop_48 + tmp_qloop_49*-4.0;
                      const real_t tmp_qloop_58 = tmp_qloop_48 + tmp_qloop_50 + tmp_qloop_53 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                      const real_t tmp_qloop_59 = tmp_qloop_48*ux_dof_3 + tmp_qloop_51*ux_dof_1 + tmp_qloop_54*ux_dof_2 + tmp_qloop_56*ux_dof_4 + tmp_qloop_57*ux_dof_5 + tmp_qloop_58*ux_dof_0;
                      const real_t tmp_qloop_60 = tmp_qloop_48*uy_dof_3 + tmp_qloop_51*uy_dof_1 + tmp_qloop_54*uy_dof_2 + tmp_qloop_56*uy_dof_4 + tmp_qloop_57*uy_dof_5 + tmp_qloop_58*uy_dof_0;
                      const real_t tmp_qloop_64 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                      const real_t tmp_qloop_66 = tmp_qloop_47 - 1.0;
                      const real_t tmp_qloop_67 = tmp_qloop_47 + tmp_qloop_55 - 3.0;
                      const real_t tmp_qloop_68 = tmp_qloop_67*uy_dof_0;
                      const real_t tmp_qloop_69 = -tmp_qloop_55 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_70 = tmp_qloop_55*uy_dof_3 - tmp_qloop_55*uy_dof_4 + tmp_qloop_66*uy_dof_1 + tmp_qloop_68 + tmp_qloop_69*uy_dof_5;
                      const real_t tmp_qloop_72 = tmp_qloop_55 - 1.0;
                      const real_t tmp_qloop_73 = -tmp_qloop_47 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_74 = tmp_qloop_47*uy_dof_3 - tmp_qloop_47*uy_dof_5 + tmp_qloop_68 + tmp_qloop_72*uy_dof_2 + tmp_qloop_73*uy_dof_4;
                      const real_t tmp_qloop_77 = tmp_qloop_67*ux_dof_0;
                      const real_t tmp_qloop_78 = tmp_qloop_55*ux_dof_3 - tmp_qloop_55*ux_dof_4 + tmp_qloop_66*ux_dof_1 + tmp_qloop_69*ux_dof_5 + tmp_qloop_77;
                      const real_t tmp_qloop_80 = tmp_qloop_47*ux_dof_3 - tmp_qloop_47*ux_dof_5 + tmp_qloop_72*ux_dof_2 + tmp_qloop_73*ux_dof_4 + tmp_qloop_77;
                      const real_t tmp_qloop_87 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_2*_data_q_p_1[q];
                      const real_t tmp_qloop_88 = -p_affine_0_1 + tmp_qloop_7*_data_q_p_0[q] + tmp_qloop_9*_data_q_p_1[q];
                      const real_t tmp_qloop_89 = 1.0 / (abs(pow((tmp_qloop_87*tmp_qloop_87) + (tmp_qloop_88*tmp_qloop_88), 0.50000000000000000))*abs(pow((tmp_qloop_87*tmp_qloop_87) + (tmp_qloop_88*tmp_qloop_88), 0.50000000000000000)));
                      const real_t tmp_qloop_90 = radRayVertex + tmp_qloop_19*1.0 / (tmp_qloop_14*tmp_qloop_4 - tmp_qloop_15*tmp_qloop_17)*(tmp_qloop_15*(rayVertex_1 + tmp_qloop_88) - tmp_qloop_4*(rayVertex_0 + tmp_qloop_87));
                      const real_t jac_blending_0_0 = tmp_qloop_11*tmp_qloop_28 + tmp_qloop_24*tmp_qloop_3;
                      const real_t jac_blending_0_1 = -tmp_qloop_10*tmp_qloop_25*tmp_qloop_26*tmp_qloop_3 - tmp_qloop_29*tmp_qloop_3;
                      const real_t jac_blending_1_0 = tmp_qloop_10*tmp_qloop_24 - tmp_qloop_10*tmp_qloop_30;
                      const real_t jac_blending_1_1 = -tmp_qloop_10*tmp_qloop_29 + tmp_qloop_25*tmp_qloop_26*tmp_qloop_6*1.0;
                      const real_t tmp_qloop_31 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                      const real_t tmp_qloop_32 = 1.0 / (tmp_qloop_31);
                      const real_t abs_det_jac_blending = tmp_qloop_31;
                      const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_32;
                      const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_32;
                      const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_32;
                      const real_t tmp_qloop_65 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_0;
                      const real_t tmp_qloop_71 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_0;
                      const real_t tmp_qloop_75 = tmp_qloop_65*tmp_qloop_70 + tmp_qloop_71*tmp_qloop_74;
                      const real_t tmp_qloop_83 = tmp_qloop_65*tmp_qloop_78 + tmp_qloop_71*tmp_qloop_80;
                      const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_32;
                      const real_t tmp_qloop_76 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_1;
                      const real_t tmp_qloop_79 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_1;
                      const real_t tmp_qloop_81 = tmp_qloop_76*tmp_qloop_78 + tmp_qloop_79*tmp_qloop_80;
                      const real_t tmp_qloop_82 = tmp_qloop_75 + tmp_qloop_81;
                      const real_t tmp_qloop_84 = tmp_qloop_70*tmp_qloop_76;
                      const real_t tmp_qloop_85 = tmp_qloop_74*tmp_qloop_79;
                      const real_t tmp_qloop_86 = tmp_qloop_83 - tmp_qloop_84 - tmp_qloop_85;
                      const real_t tmp_qloop_110 = abs_det_jac_blending*tmp_qloop_107*tmp_qloop_63*(eta_dof_0*tmp_qloop_64 + eta_dof_1*_data_q_p_0[q] + eta_dof_2*_data_q_p_1[q])*1.0 / (rho_dof_0*tmp_qloop_64 + rho_dof_1*_data_q_p_0[q] + rho_dof_2*_data_q_p_1[q])*(tmp_qloop_75*tmp_qloop_82 + tmp_qloop_81*tmp_qloop_82 + tmp_qloop_83*tmp_qloop_86 - tmp_qloop_86*(tmp_qloop_84 + tmp_qloop_85))*0.50000000000000000*((cutoff > radiusSurface - pow(tmp_qloop_89*(abs(tmp_qloop_87*tmp_qloop_90)*abs(tmp_qloop_87*tmp_qloop_90)) + tmp_qloop_89*(abs(tmp_qloop_88*tmp_qloop_90)*abs(tmp_qloop_88*tmp_qloop_90)), 0.50000000000000000)) ? (0.0): (1.0))*((tmp_qloop_108 <= 1.1799999561582399) ? (tmp_qloop_101*-0.0027777777777777778 + tmp_qloop_108*0.16666666666666667): ((tmp_qloop_108 <= 3.0159389978870399) ? (tmp_qloop_101*-0.00051942446859271248 + tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_106*tmp_qloop_62*0.17969906536907199 + tmp_qloop_109*-0.0089393368193446242 - 0.0064954259688208404): ((tmp_qloop_108 <= 6.7434348119715999) ? (tmp_qloop_100*tmp_qloop_91*tmp_qloop_92*tmp_qloop_94*tmp_qloop_96*tmp_qloop_98*0.00076015027042957372 + tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_106*tmp_qloop_62*0.2146156710600175 + tmp_qloop_109*-0.020516694887729999 - 0.041597543561209399): ((tmp_qloop_108 <= 9.7000000058627194) ? (tmp_qloop_101*0.0003890697253152925 + tmp_qloop_108*0.16399221771597999 + tmp_qloop_109*-0.01300962248982295 + 0.072194442299590406): (thermalConductivity*1.0 / (tmp_qloop_103)*1.0 / (tmp_qloop_104)*1.0 / (tmp_qloop_105)*tmp_qloop_63*tmp_qloop_99*-2.0 + 1.0)))))*_data_q_w[q];
                      const real_t tmp_qloop_111 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]));
                      const real_t tmp_qloop_112 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]));
                      const real_t tmp_qloop_113 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]));
                      const real_t tmp_qloop_114 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]));
                      const real_t tmp_qloop_115 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]));
                      const real_t tmp_qloop_116 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]));
                      const real_t hessian_blending_0_0_0 = tmp_qloop_24 - tmp_qloop_35 + tmp_qloop_38;
                      const real_t hessian_blending_1_0_0 = tmp_qloop_10*tmp_qloop_42 - (tmp_qloop_10*tmp_qloop_10*tmp_qloop_10)*tmp_qloop_36 + tmp_qloop_11*tmp_qloop_39 - tmp_qloop_41;
                      const real_t hessian_blending_0_0_1 = tmp_qloop_21*tmp_qloop_25*tmp_qloop_40*tmp_qloop_5*-2.0 - tmp_qloop_44;
                      const real_t hessian_blending_1_0_1 = tmp_qloop_13*tmp_qloop_18*tmp_qloop_20*tmp_qloop_5*1.0 - tmp_qloop_30 - tmp_qloop_38 - tmp_qloop_45;
                      const real_t hessian_blending_0_1_0 = tmp_qloop_16*tmp_qloop_18*tmp_qloop_20*tmp_qloop_25*tmp_qloop_6*1.0 - tmp_qloop_29 - tmp_qloop_41 - tmp_qloop_44;
                      const real_t hessian_blending_1_1_0 = -tmp_qloop_30 + tmp_qloop_37 - tmp_qloop_45 + tmp_qloop_46;
                      const real_t hessian_blending_0_1_1 = tmp_qloop_3*tmp_qloop_42 - (tmp_qloop_3*tmp_qloop_3*tmp_qloop_3)*tmp_qloop_36 + tmp_qloop_35 + tmp_qloop_46;
                      const real_t hessian_blending_1_1_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_20*tmp_qloop_25*1.0 + tmp_qloop_15*tmp_qloop_18*tmp_qloop_20*tmp_qloop_25*tmp_qloop_6*1.0 - tmp_qloop_29 - tmp_qloop_43;
                      const real_t q_tmp_0_0 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_0_1 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_0_2 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_0_3 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_0_4 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_0_5 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_1_0 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_1_1 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_1_2 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_1_3 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_1_4 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_1_5 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_2_0 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_2_1 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_2_2 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_2_3 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_2_4 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_2_5 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_3_0 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_3_1 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_3_2 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_3_3 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_3_4 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_3_5 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_4_0 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_4_1 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_4_2 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_4_3 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_4_4 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_4_5 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_5_0 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_5_1 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_5_2 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_5_3 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_5_4 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_5_5 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
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
                   const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
                   const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
                   const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
                   const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
                   const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
                   const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
                   const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
                   const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
                   const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
                   const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
                   const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
                   const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
                   const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
                   const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
                   const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
                   const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
                   const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
                   const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
                   const real_t elMat_3_0 = q_acc_3_0*toMatrixScaling;
                   const real_t elMat_3_1 = q_acc_3_1*toMatrixScaling;
                   const real_t elMat_3_2 = q_acc_3_2*toMatrixScaling;
                   const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
                   const real_t elMat_3_4 = q_acc_3_4*toMatrixScaling;
                   const real_t elMat_3_5 = q_acc_3_5*toMatrixScaling;
                   const real_t elMat_4_0 = q_acc_4_0*toMatrixScaling;
                   const real_t elMat_4_1 = q_acc_4_1*toMatrixScaling;
                   const real_t elMat_4_2 = q_acc_4_2*toMatrixScaling;
                   const real_t elMat_4_3 = q_acc_4_3*toMatrixScaling;
                   const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
                   const real_t elMat_4_5 = q_acc_4_5*toMatrixScaling;
                   const real_t elMat_5_0 = q_acc_5_0*toMatrixScaling;
                   const real_t elMat_5_1 = q_acc_5_1*toMatrixScaling;
                   const real_t elMat_5_2 = q_acc_5_2*toMatrixScaling;
                   const real_t elMat_5_3 = q_acc_5_3*toMatrixScaling;
                   const real_t elMat_5_4 = q_acc_5_4*toMatrixScaling;
                   const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_0_4));
                   _data_mat[5] = ((real_t)(elMat_0_5));
                   _data_mat[6] = ((real_t)(elMat_1_0));
                   _data_mat[7] = ((real_t)(elMat_1_1));
                   _data_mat[8] = ((real_t)(elMat_1_2));
                   _data_mat[9] = ((real_t)(elMat_1_3));
                   _data_mat[10] = ((real_t)(elMat_1_4));
                   _data_mat[11] = ((real_t)(elMat_1_5));
                   _data_mat[12] = ((real_t)(elMat_2_0));
                   _data_mat[13] = ((real_t)(elMat_2_1));
                   _data_mat[14] = ((real_t)(elMat_2_2));
                   _data_mat[15] = ((real_t)(elMat_2_3));
                   _data_mat[16] = ((real_t)(elMat_2_4));
                   _data_mat[17] = ((real_t)(elMat_2_5));
                   _data_mat[18] = ((real_t)(elMat_3_0));
                   _data_mat[19] = ((real_t)(elMat_3_1));
                   _data_mat[20] = ((real_t)(elMat_3_2));
                   _data_mat[21] = ((real_t)(elMat_3_3));
                   _data_mat[22] = ((real_t)(elMat_3_4));
                   _data_mat[23] = ((real_t)(elMat_3_5));
                   _data_mat[24] = ((real_t)(elMat_4_0));
                   _data_mat[25] = ((real_t)(elMat_4_1));
                   _data_mat[26] = ((real_t)(elMat_4_2));
                   _data_mat[27] = ((real_t)(elMat_4_3));
                   _data_mat[28] = ((real_t)(elMat_4_4));
                   _data_mat[29] = ((real_t)(elMat_4_5));
                   _data_mat[30] = ((real_t)(elMat_5_0));
                   _data_mat[31] = ((real_t)(elMat_5_1));
                   _data_mat[32] = ((real_t)(elMat_5_2));
                   _data_mat[33] = ((real_t)(elMat_5_3));
                   _data_mat[34] = ((real_t)(elMat_5_4));
                   _data_mat[35] = ((real_t)(elMat_5_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             const real_t tmp_moved_constant_0 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_1 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_2 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_3 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_4 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_5 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_6 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_7 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_8 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_9 = _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_10 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_11 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_12 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_13 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_14 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_15 = _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_16 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_17 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_18 = ((tmp_moved_constant_10*0.44444444444444444 + tmp_moved_constant_11*0.44444444444444444 + tmp_moved_constant_6*-0.11111111111111111 + tmp_moved_constant_7*-0.11111111111111111 + tmp_moved_constant_8*-0.11111111111111111 + tmp_moved_constant_9*0.44444444444444444)*(tmp_moved_constant_10*0.44444444444444444 + tmp_moved_constant_11*0.44444444444444444 + tmp_moved_constant_6*-0.11111111111111111 + tmp_moved_constant_7*-0.11111111111111111 + tmp_moved_constant_8*-0.11111111111111111 + tmp_moved_constant_9*0.44444444444444444)) + ((tmp_moved_constant_12*-0.11111111111111111 + tmp_moved_constant_13*-0.11111111111111111 + tmp_moved_constant_14*-0.11111111111111111 + tmp_moved_constant_15*0.44444444444444444 + tmp_moved_constant_16*0.44444444444444444 + tmp_moved_constant_17*0.44444444444444444)*(tmp_moved_constant_12*-0.11111111111111111 + tmp_moved_constant_13*-0.11111111111111111 + tmp_moved_constant_14*-0.11111111111111111 + tmp_moved_constant_15*0.44444444444444444 + tmp_moved_constant_16*0.44444444444444444 + tmp_moved_constant_17*0.44444444444444444));
             const real_t tmp_moved_constant_19 = pow(tmp_moved_constant_18, 0.50000000000000000);
             const real_t tmp_moved_constant_20 = 1.0 / (tmp_moved_constant_19);
             const real_t tmp_moved_constant_21 = pow(tmp_moved_constant_18, 1.5000000000000000);
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
                   const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                   const real_t tmp_qloop_1 = -p_affine_2_0;
                   const real_t tmp_qloop_2 = p_affine_0_0 + tmp_qloop_1;
                   const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_1_1;
                   const real_t tmp_qloop_8 = -p_affine_2_1;
                   const real_t tmp_qloop_9 = p_affine_0_1 + tmp_qloop_8;
                   const real_t tmp_qloop_93 = (abs(tmp_qloop_0)*abs(tmp_qloop_0)) + (abs(tmp_qloop_7)*abs(tmp_qloop_7));
                   const real_t tmp_qloop_94 = pow(tmp_qloop_93, 1.5000000000000000);
                   const real_t tmp_qloop_95 = (abs(tmp_qloop_2)*abs(tmp_qloop_2)) + (abs(tmp_qloop_9)*abs(tmp_qloop_9));
                   const real_t tmp_qloop_96 = pow(tmp_qloop_95, 1.5000000000000000);
                   const real_t tmp_qloop_97 = (abs(p_affine_1_0 + tmp_qloop_1)*abs(p_affine_1_0 + tmp_qloop_1)) + (abs(p_affine_1_1 + tmp_qloop_8)*abs(p_affine_1_1 + tmp_qloop_8));
                   const real_t tmp_qloop_98 = pow(tmp_qloop_97, 1.5000000000000000);
                   const real_t tmp_qloop_99 = abs(tmp_qloop_0*tmp_qloop_9 - tmp_qloop_2*tmp_qloop_7);
                   const real_t tmp_qloop_100 = 1.0 / (tmp_qloop_99*tmp_qloop_99*tmp_qloop_99);
                   const real_t tmp_qloop_101 = tmp_moved_constant_21*tmp_qloop_100*tmp_qloop_91*tmp_qloop_94*tmp_qloop_96*tmp_qloop_98;
                   const real_t tmp_qloop_103 = pow(tmp_qloop_93, 0.50000000000000000);
                   const real_t tmp_qloop_104 = pow(tmp_qloop_95, 0.50000000000000000);
                   const real_t tmp_qloop_105 = pow(tmp_qloop_97, 0.50000000000000000);
                   const real_t tmp_qloop_106 = 1.0 / (tmp_qloop_99);
                   const real_t tmp_qloop_107 = tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_106;
                   const real_t tmp_qloop_108 = tmp_moved_constant_19*tmp_qloop_102*tmp_qloop_107;
                   const real_t tmp_qloop_109 = 1.0 / (thermalConductivity*thermalConductivity)*tmp_moved_constant_18*tmp_qloop_93*tmp_qloop_95*tmp_qloop_97*1.0 / (tmp_qloop_99*tmp_qloop_99);
                   for (int64_t q = 0; q < 6; q += 1)
                   {
                      const real_t tmp_qloop_3 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_2*_data_q_p_1[q];
                      const real_t tmp_qloop_6 = (tmp_qloop_3*tmp_qloop_3);
                      const real_t tmp_qloop_10 = p_affine_0_1 - tmp_qloop_7*_data_q_p_0[q] - tmp_qloop_9*_data_q_p_1[q];
                      const real_t tmp_qloop_11 = (tmp_qloop_10*tmp_qloop_10);
                      const real_t tmp_qloop_12 = tmp_qloop_11 + tmp_qloop_6;
                      const real_t tmp_qloop_13 = pow(tmp_qloop_12, -0.50000000000000000);
                      const real_t tmp_qloop_23 = tmp_qloop_13*tmp_qloop_22;
                      const real_t tmp_qloop_24 = tmp_qloop_23*tmp_qloop_5;
                      const real_t tmp_qloop_25 = pow(tmp_qloop_12, -1.5000000000000000);
                      const real_t tmp_qloop_26 = radRayVertex + tmp_qloop_21*(-tmp_qloop_16*(-rayVertex_1 + tmp_qloop_10) + tmp_qloop_5*(-rayVertex_0 + tmp_qloop_3));
                      const real_t tmp_qloop_27 = tmp_qloop_25*tmp_qloop_26;
                      const real_t tmp_qloop_28 = tmp_qloop_27*1.0;
                      const real_t tmp_qloop_29 = tmp_qloop_16*tmp_qloop_23;
                      const real_t tmp_qloop_30 = tmp_qloop_28*tmp_qloop_3;
                      const real_t tmp_qloop_33 = tmp_qloop_22*tmp_qloop_25;
                      const real_t tmp_qloop_34 = tmp_qloop_33*tmp_qloop_5;
                      const real_t tmp_qloop_35 = tmp_qloop_34*tmp_qloop_6;
                      const real_t tmp_qloop_36 = pow(tmp_qloop_12, -2.5000000000000000)*tmp_qloop_26*3.0;
                      const real_t tmp_qloop_37 = tmp_qloop_11*tmp_qloop_3*tmp_qloop_36;
                      const real_t tmp_qloop_38 = tmp_qloop_11*tmp_qloop_34 - tmp_qloop_37;
                      const real_t tmp_qloop_39 = tmp_qloop_15*tmp_qloop_33;
                      const real_t tmp_qloop_40 = tmp_qloop_10*tmp_qloop_3;
                      const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_40;
                      const real_t tmp_qloop_42 = tmp_qloop_27*2.0;
                      const real_t tmp_qloop_43 = tmp_qloop_10*tmp_qloop_36*tmp_qloop_6;
                      const real_t tmp_qloop_44 = tmp_qloop_10*tmp_qloop_28 - tmp_qloop_43;
                      const real_t tmp_qloop_45 = tmp_qloop_39*tmp_qloop_40;
                      const real_t tmp_qloop_46 = tmp_qloop_16*tmp_qloop_33*tmp_qloop_40;
                      const real_t tmp_qloop_47 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_48 = tmp_qloop_47*_data_q_p_1[q];
                      const real_t tmp_qloop_49 = (_data_q_p_0[q]*_data_q_p_0[q]);
                      const real_t tmp_qloop_50 = tmp_qloop_49*2.0;
                      const real_t tmp_qloop_51 = tmp_qloop_50 - _data_q_p_0[q];
                      const real_t tmp_qloop_52 = (_data_q_p_1[q]*_data_q_p_1[q]);
                      const real_t tmp_qloop_53 = tmp_qloop_52*2.0;
                      const real_t tmp_qloop_54 = tmp_qloop_53 - _data_q_p_1[q];
                      const real_t tmp_qloop_55 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_56 = -tmp_qloop_48 + tmp_qloop_52*-4.0 + tmp_qloop_55;
                      const real_t tmp_qloop_57 = tmp_qloop_47 - tmp_qloop_48 + tmp_qloop_49*-4.0;
                      const real_t tmp_qloop_58 = tmp_qloop_48 + tmp_qloop_50 + tmp_qloop_53 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                      const real_t tmp_qloop_59 = tmp_moved_constant_10*tmp_qloop_56 + tmp_moved_constant_11*tmp_qloop_57 + tmp_moved_constant_6*tmp_qloop_58 + tmp_moved_constant_7*tmp_qloop_51 + tmp_moved_constant_8*tmp_qloop_54 + tmp_moved_constant_9*tmp_qloop_48;
                      const real_t tmp_qloop_60 = tmp_moved_constant_12*tmp_qloop_58 + tmp_moved_constant_13*tmp_qloop_51 + tmp_moved_constant_14*tmp_qloop_54 + tmp_moved_constant_15*tmp_qloop_48 + tmp_moved_constant_16*tmp_qloop_56 + tmp_moved_constant_17*tmp_qloop_57;
                      const real_t tmp_qloop_64 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                      const real_t tmp_qloop_66 = tmp_qloop_47 - 1.0;
                      const real_t tmp_qloop_67 = tmp_qloop_47 + tmp_qloop_55 - 3.0;
                      const real_t tmp_qloop_68 = tmp_moved_constant_12*tmp_qloop_67;
                      const real_t tmp_qloop_69 = -tmp_qloop_55 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_70 = tmp_moved_constant_13*tmp_qloop_66 + tmp_moved_constant_15*tmp_qloop_55 - tmp_moved_constant_16*tmp_qloop_55 + tmp_moved_constant_17*tmp_qloop_69 + tmp_qloop_68;
                      const real_t tmp_qloop_72 = tmp_qloop_55 - 1.0;
                      const real_t tmp_qloop_73 = -tmp_qloop_47 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_74 = tmp_moved_constant_14*tmp_qloop_72 + tmp_moved_constant_15*tmp_qloop_47 + tmp_moved_constant_16*tmp_qloop_73 - tmp_moved_constant_17*tmp_qloop_47 + tmp_qloop_68;
                      const real_t tmp_qloop_77 = tmp_moved_constant_6*tmp_qloop_67;
                      const real_t tmp_qloop_78 = -tmp_moved_constant_10*tmp_qloop_55 + tmp_moved_constant_11*tmp_qloop_69 + tmp_moved_constant_7*tmp_qloop_66 + tmp_moved_constant_9*tmp_qloop_55 + tmp_qloop_77;
                      const real_t tmp_qloop_80 = tmp_moved_constant_10*tmp_qloop_73 - tmp_moved_constant_11*tmp_qloop_47 + tmp_moved_constant_8*tmp_qloop_72 + tmp_moved_constant_9*tmp_qloop_47 + tmp_qloop_77;
                      const real_t tmp_qloop_87 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_2*_data_q_p_1[q];
                      const real_t tmp_qloop_88 = -p_affine_0_1 + tmp_qloop_7*_data_q_p_0[q] + tmp_qloop_9*_data_q_p_1[q];
                      const real_t tmp_qloop_89 = 1.0 / (abs(pow((tmp_qloop_87*tmp_qloop_87) + (tmp_qloop_88*tmp_qloop_88), 0.50000000000000000))*abs(pow((tmp_qloop_87*tmp_qloop_87) + (tmp_qloop_88*tmp_qloop_88), 0.50000000000000000)));
                      const real_t tmp_qloop_90 = radRayVertex + tmp_qloop_19*1.0 / (tmp_qloop_14*tmp_qloop_4 - tmp_qloop_15*tmp_qloop_17)*(tmp_qloop_15*(rayVertex_1 + tmp_qloop_88) - tmp_qloop_4*(rayVertex_0 + tmp_qloop_87));
                      const real_t jac_blending_0_0 = tmp_qloop_11*tmp_qloop_28 + tmp_qloop_24*tmp_qloop_3;
                      const real_t jac_blending_0_1 = -tmp_qloop_10*tmp_qloop_25*tmp_qloop_26*tmp_qloop_3 - tmp_qloop_29*tmp_qloop_3;
                      const real_t jac_blending_1_0 = tmp_qloop_10*tmp_qloop_24 - tmp_qloop_10*tmp_qloop_30;
                      const real_t jac_blending_1_1 = -tmp_qloop_10*tmp_qloop_29 + tmp_qloop_25*tmp_qloop_26*tmp_qloop_6*1.0;
                      const real_t tmp_qloop_31 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                      const real_t tmp_qloop_32 = 1.0 / (tmp_qloop_31);
                      const real_t abs_det_jac_blending = tmp_qloop_31;
                      const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_32;
                      const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_32;
                      const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_32;
                      const real_t tmp_qloop_65 = jac_affine_inv_0_0_BLUE*jac_blending_inv_0_0 + jac_affine_inv_0_1_BLUE*jac_blending_inv_1_0;
                      const real_t tmp_qloop_71 = jac_affine_inv_1_0_BLUE*jac_blending_inv_0_0 + jac_affine_inv_1_1_BLUE*jac_blending_inv_1_0;
                      const real_t tmp_qloop_75 = tmp_qloop_65*tmp_qloop_70 + tmp_qloop_71*tmp_qloop_74;
                      const real_t tmp_qloop_83 = tmp_qloop_65*tmp_qloop_78 + tmp_qloop_71*tmp_qloop_80;
                      const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_32;
                      const real_t tmp_qloop_76 = jac_affine_inv_0_0_BLUE*jac_blending_inv_0_1 + jac_affine_inv_0_1_BLUE*jac_blending_inv_1_1;
                      const real_t tmp_qloop_79 = jac_affine_inv_1_0_BLUE*jac_blending_inv_0_1 + jac_affine_inv_1_1_BLUE*jac_blending_inv_1_1;
                      const real_t tmp_qloop_81 = tmp_qloop_76*tmp_qloop_78 + tmp_qloop_79*tmp_qloop_80;
                      const real_t tmp_qloop_82 = tmp_qloop_75 + tmp_qloop_81;
                      const real_t tmp_qloop_84 = tmp_qloop_70*tmp_qloop_76;
                      const real_t tmp_qloop_85 = tmp_qloop_74*tmp_qloop_79;
                      const real_t tmp_qloop_86 = tmp_qloop_83 - tmp_qloop_84 - tmp_qloop_85;
                      const real_t tmp_qloop_110 = abs_det_jac_blending*tmp_moved_constant_20*tmp_qloop_107*(tmp_moved_constant_0*tmp_qloop_64 + tmp_moved_constant_1*_data_q_p_0[q] + tmp_moved_constant_2*_data_q_p_1[q])*1.0 / (tmp_moved_constant_3*tmp_qloop_64 + tmp_moved_constant_4*_data_q_p_0[q] + tmp_moved_constant_5*_data_q_p_1[q])*(tmp_qloop_75*tmp_qloop_82 + tmp_qloop_81*tmp_qloop_82 + tmp_qloop_83*tmp_qloop_86 - tmp_qloop_86*(tmp_qloop_84 + tmp_qloop_85))*0.50000000000000000*((cutoff > radiusSurface - pow(tmp_qloop_89*(abs(tmp_qloop_87*tmp_qloop_90)*abs(tmp_qloop_87*tmp_qloop_90)) + tmp_qloop_89*(abs(tmp_qloop_88*tmp_qloop_90)*abs(tmp_qloop_88*tmp_qloop_90)), 0.50000000000000000)) ? (0.0): (1.0))*((tmp_qloop_108 <= 1.1799999561582399) ? (tmp_qloop_101*-0.0027777777777777778 + tmp_qloop_108*0.16666666666666667): ((tmp_qloop_108 <= 3.0159389978870399) ? (tmp_moved_constant_19*tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_106*0.17969906536907199 + tmp_qloop_101*-0.00051942446859271248 + tmp_qloop_109*-0.0089393368193446242 - 0.0064954259688208404): ((tmp_qloop_108 <= 6.7434348119715999) ? (tmp_moved_constant_19*tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_106*0.2146156710600175 + tmp_moved_constant_21*tmp_qloop_100*tmp_qloop_91*tmp_qloop_94*tmp_qloop_96*tmp_qloop_98*0.00076015027042957372 + tmp_qloop_109*-0.020516694887729999 - 0.041597543561209399): ((tmp_qloop_108 <= 9.7000000058627194) ? (tmp_qloop_101*0.0003890697253152925 + tmp_qloop_108*0.16399221771597999 + tmp_qloop_109*-0.01300962248982295 + 0.072194442299590406): (thermalConductivity*tmp_moved_constant_20*1.0 / (tmp_qloop_103)*1.0 / (tmp_qloop_104)*1.0 / (tmp_qloop_105)*tmp_qloop_99*-2.0 + 1.0)))))*_data_q_w[q];
                      const real_t tmp_qloop_111 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 1] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 1] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q]));
                      const real_t tmp_qloop_112 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 7] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 7] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]));
                      const real_t tmp_qloop_113 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 8] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 8] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]));
                      const real_t tmp_qloop_114 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 9] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 9] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]));
                      const real_t tmp_qloop_115 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 10] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 10] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]));
                      const real_t tmp_qloop_116 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 11] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 11] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]));
                      const real_t hessian_blending_0_0_0 = tmp_qloop_24 - tmp_qloop_35 + tmp_qloop_38;
                      const real_t hessian_blending_1_0_0 = tmp_qloop_10*tmp_qloop_42 - (tmp_qloop_10*tmp_qloop_10*tmp_qloop_10)*tmp_qloop_36 + tmp_qloop_11*tmp_qloop_39 - tmp_qloop_41;
                      const real_t hessian_blending_0_0_1 = tmp_qloop_21*tmp_qloop_25*tmp_qloop_40*tmp_qloop_5*-2.0 - tmp_qloop_44;
                      const real_t hessian_blending_1_0_1 = tmp_qloop_13*tmp_qloop_18*tmp_qloop_20*tmp_qloop_5*1.0 - tmp_qloop_30 - tmp_qloop_38 - tmp_qloop_45;
                      const real_t hessian_blending_0_1_0 = tmp_qloop_16*tmp_qloop_18*tmp_qloop_20*tmp_qloop_25*tmp_qloop_6*1.0 - tmp_qloop_29 - tmp_qloop_41 - tmp_qloop_44;
                      const real_t hessian_blending_1_1_0 = -tmp_qloop_30 + tmp_qloop_37 - tmp_qloop_45 + tmp_qloop_46;
                      const real_t hessian_blending_0_1_1 = tmp_qloop_3*tmp_qloop_42 - (tmp_qloop_3*tmp_qloop_3*tmp_qloop_3)*tmp_qloop_36 + tmp_qloop_35 + tmp_qloop_46;
                      const real_t hessian_blending_1_1_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_20*tmp_qloop_25*1.0 + tmp_qloop_15*tmp_qloop_18*tmp_qloop_20*tmp_qloop_25*tmp_qloop_6*1.0 - tmp_qloop_29 - tmp_qloop_43;
                      const real_t q_tmp_0_0 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_0_1 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_0_2 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_0_3 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_0_4 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_0_5 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_1_0 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_1_1 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_1_2 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_1_3 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_1_4 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_1_5 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_2_0 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_2_1 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_2_2 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_2_3 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_2_4 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_2_5 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_3_0 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_3_1 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_3_2 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_3_3 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_3_4 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_3_5 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_4_0 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_4_1 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_4_2 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_4_3 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_4_4 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_4_5 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
                      const real_t q_tmp_5_0 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_BLUE[12*q];
                      const real_t q_tmp_5_1 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2];
                      const real_t q_tmp_5_2 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3];
                      const real_t q_tmp_5_3 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4];
                      const real_t q_tmp_5_4 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5];
                      const real_t q_tmp_5_5 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6];
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
                   const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
                   const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
                   const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
                   const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
                   const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
                   const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
                   const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
                   const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
                   const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
                   const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
                   const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
                   const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
                   const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
                   const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
                   const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
                   const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
                   const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
                   const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
                   const real_t elMat_3_0 = q_acc_3_0*toMatrixScaling;
                   const real_t elMat_3_1 = q_acc_3_1*toMatrixScaling;
                   const real_t elMat_3_2 = q_acc_3_2*toMatrixScaling;
                   const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
                   const real_t elMat_3_4 = q_acc_3_4*toMatrixScaling;
                   const real_t elMat_3_5 = q_acc_3_5*toMatrixScaling;
                   const real_t elMat_4_0 = q_acc_4_0*toMatrixScaling;
                   const real_t elMat_4_1 = q_acc_4_1*toMatrixScaling;
                   const real_t elMat_4_2 = q_acc_4_2*toMatrixScaling;
                   const real_t elMat_4_3 = q_acc_4_3*toMatrixScaling;
                   const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
                   const real_t elMat_4_5 = q_acc_4_5*toMatrixScaling;
                   const real_t elMat_5_0 = q_acc_5_0*toMatrixScaling;
                   const real_t elMat_5_1 = q_acc_5_1*toMatrixScaling;
                   const real_t elMat_5_2 = q_acc_5_2*toMatrixScaling;
                   const real_t elMat_5_3 = q_acc_5_3*toMatrixScaling;
                   const real_t elMat_5_4 = q_acc_5_4*toMatrixScaling;
                   const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_0_4));
                   _data_mat[5] = ((real_t)(elMat_0_5));
                   _data_mat[6] = ((real_t)(elMat_1_0));
                   _data_mat[7] = ((real_t)(elMat_1_1));
                   _data_mat[8] = ((real_t)(elMat_1_2));
                   _data_mat[9] = ((real_t)(elMat_1_3));
                   _data_mat[10] = ((real_t)(elMat_1_4));
                   _data_mat[11] = ((real_t)(elMat_1_5));
                   _data_mat[12] = ((real_t)(elMat_2_0));
                   _data_mat[13] = ((real_t)(elMat_2_1));
                   _data_mat[14] = ((real_t)(elMat_2_2));
                   _data_mat[15] = ((real_t)(elMat_2_3));
                   _data_mat[16] = ((real_t)(elMat_2_4));
                   _data_mat[17] = ((real_t)(elMat_2_5));
                   _data_mat[18] = ((real_t)(elMat_3_0));
                   _data_mat[19] = ((real_t)(elMat_3_1));
                   _data_mat[20] = ((real_t)(elMat_3_2));
                   _data_mat[21] = ((real_t)(elMat_3_3));
                   _data_mat[22] = ((real_t)(elMat_3_4));
                   _data_mat[23] = ((real_t)(elMat_3_5));
                   _data_mat[24] = ((real_t)(elMat_4_0));
                   _data_mat[25] = ((real_t)(elMat_4_1));
                   _data_mat[26] = ((real_t)(elMat_4_2));
                   _data_mat[27] = ((real_t)(elMat_4_3));
                   _data_mat[28] = ((real_t)(elMat_4_4));
                   _data_mat[29] = ((real_t)(elMat_4_5));
                   _data_mat[30] = ((real_t)(elMat_5_0));
                   _data_mat[31] = ((real_t)(elMat_5_1));
                   _data_mat[32] = ((real_t)(elMat_5_2));
                   _data_mat[33] = ((real_t)(elMat_5_3));
                   _data_mat[34] = ((real_t)(elMat_5_4));
                   _data_mat[35] = ((real_t)(elMat_5_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
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
             const real_t tmp_qloop_61 = ((ux_dof_0*-0.11111111111111111 + ux_dof_1*-0.11111111111111111 + ux_dof_2*-0.11111111111111111 + ux_dof_3*0.44444444444444444 + ux_dof_4*0.44444444444444444 + ux_dof_5*0.44444444444444444)*(ux_dof_0*-0.11111111111111111 + ux_dof_1*-0.11111111111111111 + ux_dof_2*-0.11111111111111111 + ux_dof_3*0.44444444444444444 + ux_dof_4*0.44444444444444444 + ux_dof_5*0.44444444444444444)) + ((uy_dof_0*-0.11111111111111111 + uy_dof_1*-0.11111111111111111 + uy_dof_2*-0.11111111111111111 + uy_dof_3*0.44444444444444444 + uy_dof_4*0.44444444444444444 + uy_dof_5*0.44444444444444444)*(uy_dof_0*-0.11111111111111111 + uy_dof_1*-0.11111111111111111 + uy_dof_2*-0.11111111111111111 + uy_dof_3*0.44444444444444444 + uy_dof_4*0.44444444444444444 + uy_dof_5*0.44444444444444444));
             const real_t tmp_qloop_62 = pow(tmp_qloop_61, 0.50000000000000000);
             const real_t tmp_qloop_63 = 1.0 / (tmp_qloop_62);
             const real_t tmp_qloop_92 = pow(tmp_qloop_61, 1.5000000000000000);
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
                   const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                   const real_t tmp_qloop_1 = -p_affine_2_0;
                   const real_t tmp_qloop_2 = p_affine_0_0 + tmp_qloop_1;
                   const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_1_1;
                   const real_t tmp_qloop_8 = -p_affine_2_1;
                   const real_t tmp_qloop_9 = p_affine_0_1 + tmp_qloop_8;
                   const real_t tmp_qloop_93 = (abs(tmp_qloop_0)*abs(tmp_qloop_0)) + (abs(tmp_qloop_7)*abs(tmp_qloop_7));
                   const real_t tmp_qloop_94 = pow(tmp_qloop_93, 1.5000000000000000);
                   const real_t tmp_qloop_95 = (abs(tmp_qloop_2)*abs(tmp_qloop_2)) + (abs(tmp_qloop_9)*abs(tmp_qloop_9));
                   const real_t tmp_qloop_96 = pow(tmp_qloop_95, 1.5000000000000000);
                   const real_t tmp_qloop_97 = (abs(p_affine_1_0 + tmp_qloop_1)*abs(p_affine_1_0 + tmp_qloop_1)) + (abs(p_affine_1_1 + tmp_qloop_8)*abs(p_affine_1_1 + tmp_qloop_8));
                   const real_t tmp_qloop_98 = pow(tmp_qloop_97, 1.5000000000000000);
                   const real_t tmp_qloop_99 = abs(tmp_qloop_0*tmp_qloop_9 - tmp_qloop_2*tmp_qloop_7);
                   const real_t tmp_qloop_100 = 1.0 / (tmp_qloop_99*tmp_qloop_99*tmp_qloop_99);
                   const real_t tmp_qloop_101 = tmp_qloop_100*tmp_qloop_91*tmp_qloop_92*tmp_qloop_94*tmp_qloop_96*tmp_qloop_98;
                   const real_t tmp_qloop_103 = pow(tmp_qloop_93, 0.50000000000000000);
                   const real_t tmp_qloop_104 = pow(tmp_qloop_95, 0.50000000000000000);
                   const real_t tmp_qloop_105 = pow(tmp_qloop_97, 0.50000000000000000);
                   const real_t tmp_qloop_106 = 1.0 / (tmp_qloop_99);
                   const real_t tmp_qloop_107 = tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_106;
                   const real_t tmp_qloop_108 = tmp_qloop_102*tmp_qloop_107*tmp_qloop_62;
                   const real_t tmp_qloop_109 = 1.0 / (thermalConductivity*thermalConductivity)*tmp_qloop_61*tmp_qloop_93*tmp_qloop_95*tmp_qloop_97*1.0 / (tmp_qloop_99*tmp_qloop_99);
                   for (int64_t q = 0; q < 6; q += 1)
                   {
                      const real_t tmp_qloop_3 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_2*_data_q_p_1[q];
                      const real_t tmp_qloop_6 = (tmp_qloop_3*tmp_qloop_3);
                      const real_t tmp_qloop_10 = p_affine_0_1 - tmp_qloop_7*_data_q_p_0[q] - tmp_qloop_9*_data_q_p_1[q];
                      const real_t tmp_qloop_11 = (tmp_qloop_10*tmp_qloop_10);
                      const real_t tmp_qloop_12 = tmp_qloop_11 + tmp_qloop_6;
                      const real_t tmp_qloop_13 = pow(tmp_qloop_12, -0.50000000000000000);
                      const real_t tmp_qloop_23 = tmp_qloop_13*tmp_qloop_22;
                      const real_t tmp_qloop_24 = tmp_qloop_23*tmp_qloop_5;
                      const real_t tmp_qloop_25 = pow(tmp_qloop_12, -1.5000000000000000);
                      const real_t tmp_qloop_26 = radRayVertex + tmp_qloop_21*(-tmp_qloop_16*(-rayVertex_1 + tmp_qloop_10) + tmp_qloop_5*(-rayVertex_0 + tmp_qloop_3));
                      const real_t tmp_qloop_27 = tmp_qloop_25*tmp_qloop_26;
                      const real_t tmp_qloop_28 = tmp_qloop_27*1.0;
                      const real_t tmp_qloop_29 = tmp_qloop_16*tmp_qloop_23;
                      const real_t tmp_qloop_30 = tmp_qloop_28*tmp_qloop_3;
                      const real_t tmp_qloop_33 = tmp_qloop_22*tmp_qloop_25;
                      const real_t tmp_qloop_34 = tmp_qloop_33*tmp_qloop_5;
                      const real_t tmp_qloop_35 = tmp_qloop_34*tmp_qloop_6;
                      const real_t tmp_qloop_36 = pow(tmp_qloop_12, -2.5000000000000000)*tmp_qloop_26*3.0;
                      const real_t tmp_qloop_37 = tmp_qloop_11*tmp_qloop_3*tmp_qloop_36;
                      const real_t tmp_qloop_38 = tmp_qloop_11*tmp_qloop_34 - tmp_qloop_37;
                      const real_t tmp_qloop_39 = tmp_qloop_15*tmp_qloop_33;
                      const real_t tmp_qloop_40 = tmp_qloop_10*tmp_qloop_3;
                      const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_40;
                      const real_t tmp_qloop_42 = tmp_qloop_27*2.0;
                      const real_t tmp_qloop_43 = tmp_qloop_10*tmp_qloop_36*tmp_qloop_6;
                      const real_t tmp_qloop_44 = tmp_qloop_10*tmp_qloop_28 - tmp_qloop_43;
                      const real_t tmp_qloop_45 = tmp_qloop_39*tmp_qloop_40;
                      const real_t tmp_qloop_46 = tmp_qloop_16*tmp_qloop_33*tmp_qloop_40;
                      const real_t tmp_qloop_47 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_48 = tmp_qloop_47*_data_q_p_1[q];
                      const real_t tmp_qloop_49 = (_data_q_p_0[q]*_data_q_p_0[q]);
                      const real_t tmp_qloop_50 = tmp_qloop_49*2.0;
                      const real_t tmp_qloop_51 = tmp_qloop_50 - _data_q_p_0[q];
                      const real_t tmp_qloop_52 = (_data_q_p_1[q]*_data_q_p_1[q]);
                      const real_t tmp_qloop_53 = tmp_qloop_52*2.0;
                      const real_t tmp_qloop_54 = tmp_qloop_53 - _data_q_p_1[q];
                      const real_t tmp_qloop_55 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_56 = -tmp_qloop_48 + tmp_qloop_52*-4.0 + tmp_qloop_55;
                      const real_t tmp_qloop_57 = tmp_qloop_47 - tmp_qloop_48 + tmp_qloop_49*-4.0;
                      const real_t tmp_qloop_58 = tmp_qloop_48 + tmp_qloop_50 + tmp_qloop_53 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                      const real_t tmp_qloop_59 = tmp_qloop_48*ux_dof_3 + tmp_qloop_51*ux_dof_1 + tmp_qloop_54*ux_dof_2 + tmp_qloop_56*ux_dof_4 + tmp_qloop_57*ux_dof_5 + tmp_qloop_58*ux_dof_0;
                      const real_t tmp_qloop_60 = tmp_qloop_48*uy_dof_3 + tmp_qloop_51*uy_dof_1 + tmp_qloop_54*uy_dof_2 + tmp_qloop_56*uy_dof_4 + tmp_qloop_57*uy_dof_5 + tmp_qloop_58*uy_dof_0;
                      const real_t tmp_qloop_64 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                      const real_t tmp_qloop_66 = tmp_qloop_47 - 1.0;
                      const real_t tmp_qloop_67 = tmp_qloop_47 + tmp_qloop_55 - 3.0;
                      const real_t tmp_qloop_68 = tmp_qloop_67*uy_dof_0;
                      const real_t tmp_qloop_69 = -tmp_qloop_55 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_70 = tmp_qloop_55*uy_dof_3 - tmp_qloop_55*uy_dof_4 + tmp_qloop_66*uy_dof_1 + tmp_qloop_68 + tmp_qloop_69*uy_dof_5;
                      const real_t tmp_qloop_72 = tmp_qloop_55 - 1.0;
                      const real_t tmp_qloop_73 = -tmp_qloop_47 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_74 = tmp_qloop_47*uy_dof_3 - tmp_qloop_47*uy_dof_5 + tmp_qloop_68 + tmp_qloop_72*uy_dof_2 + tmp_qloop_73*uy_dof_4;
                      const real_t tmp_qloop_77 = tmp_qloop_67*ux_dof_0;
                      const real_t tmp_qloop_78 = tmp_qloop_55*ux_dof_3 - tmp_qloop_55*ux_dof_4 + tmp_qloop_66*ux_dof_1 + tmp_qloop_69*ux_dof_5 + tmp_qloop_77;
                      const real_t tmp_qloop_80 = tmp_qloop_47*ux_dof_3 - tmp_qloop_47*ux_dof_5 + tmp_qloop_72*ux_dof_2 + tmp_qloop_73*ux_dof_4 + tmp_qloop_77;
                      const real_t tmp_qloop_87 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_2*_data_q_p_1[q];
                      const real_t tmp_qloop_88 = -p_affine_0_1 + tmp_qloop_7*_data_q_p_0[q] + tmp_qloop_9*_data_q_p_1[q];
                      const real_t tmp_qloop_89 = 1.0 / (abs(pow((tmp_qloop_87*tmp_qloop_87) + (tmp_qloop_88*tmp_qloop_88), 0.50000000000000000))*abs(pow((tmp_qloop_87*tmp_qloop_87) + (tmp_qloop_88*tmp_qloop_88), 0.50000000000000000)));
                      const real_t tmp_qloop_90 = radRayVertex + tmp_qloop_19*1.0 / (tmp_qloop_14*tmp_qloop_4 - tmp_qloop_15*tmp_qloop_17)*(tmp_qloop_15*(rayVertex_1 + tmp_qloop_88) - tmp_qloop_4*(rayVertex_0 + tmp_qloop_87));
                      const real_t jac_blending_0_0 = tmp_qloop_11*tmp_qloop_28 + tmp_qloop_24*tmp_qloop_3;
                      const real_t jac_blending_0_1 = -tmp_qloop_10*tmp_qloop_25*tmp_qloop_26*tmp_qloop_3 - tmp_qloop_29*tmp_qloop_3;
                      const real_t jac_blending_1_0 = tmp_qloop_10*tmp_qloop_24 - tmp_qloop_10*tmp_qloop_30;
                      const real_t jac_blending_1_1 = -tmp_qloop_10*tmp_qloop_29 + tmp_qloop_25*tmp_qloop_26*tmp_qloop_6*1.0;
                      const real_t tmp_qloop_31 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                      const real_t tmp_qloop_32 = 1.0 / (tmp_qloop_31);
                      const real_t abs_det_jac_blending = tmp_qloop_31;
                      const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_32;
                      const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_32;
                      const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_32;
                      const real_t tmp_qloop_65 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_0;
                      const real_t tmp_qloop_71 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_0 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_0;
                      const real_t tmp_qloop_75 = tmp_qloop_65*tmp_qloop_70 + tmp_qloop_71*tmp_qloop_74;
                      const real_t tmp_qloop_83 = tmp_qloop_65*tmp_qloop_78 + tmp_qloop_71*tmp_qloop_80;
                      const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_32;
                      const real_t tmp_qloop_76 = jac_affine_inv_0_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_0_1_GRAY*jac_blending_inv_1_1;
                      const real_t tmp_qloop_79 = jac_affine_inv_1_0_GRAY*jac_blending_inv_0_1 + jac_affine_inv_1_1_GRAY*jac_blending_inv_1_1;
                      const real_t tmp_qloop_81 = tmp_qloop_76*tmp_qloop_78 + tmp_qloop_79*tmp_qloop_80;
                      const real_t tmp_qloop_82 = tmp_qloop_75 + tmp_qloop_81;
                      const real_t tmp_qloop_84 = tmp_qloop_70*tmp_qloop_76;
                      const real_t tmp_qloop_85 = tmp_qloop_74*tmp_qloop_79;
                      const real_t tmp_qloop_86 = tmp_qloop_83 - tmp_qloop_84 - tmp_qloop_85;
                      const real_t tmp_qloop_110 = abs_det_jac_blending*tmp_qloop_107*tmp_qloop_63*(eta_dof_0*tmp_qloop_64 + eta_dof_1*_data_q_p_0[q] + eta_dof_2*_data_q_p_1[q])*1.0 / (rho_dof_0*tmp_qloop_64 + rho_dof_1*_data_q_p_0[q] + rho_dof_2*_data_q_p_1[q])*(tmp_qloop_75*tmp_qloop_82 + tmp_qloop_81*tmp_qloop_82 + tmp_qloop_83*tmp_qloop_86 - tmp_qloop_86*(tmp_qloop_84 + tmp_qloop_85))*0.50000000000000000*((cutoff > radiusSurface - pow(tmp_qloop_89*(abs(tmp_qloop_87*tmp_qloop_90)*abs(tmp_qloop_87*tmp_qloop_90)) + tmp_qloop_89*(abs(tmp_qloop_88*tmp_qloop_90)*abs(tmp_qloop_88*tmp_qloop_90)), 0.50000000000000000)) ? (0.0): (1.0))*((tmp_qloop_108 <= 1.1799999561582399) ? (tmp_qloop_101*-0.0027777777777777778 + tmp_qloop_108*0.16666666666666667): ((tmp_qloop_108 <= 3.0159389978870399) ? (tmp_qloop_101*-0.00051942446859271248 + tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_106*tmp_qloop_62*0.17969906536907199 + tmp_qloop_109*-0.0089393368193446242 - 0.0064954259688208404): ((tmp_qloop_108 <= 6.7434348119715999) ? (tmp_qloop_100*tmp_qloop_91*tmp_qloop_92*tmp_qloop_94*tmp_qloop_96*tmp_qloop_98*0.00076015027042957372 + tmp_qloop_102*tmp_qloop_103*tmp_qloop_104*tmp_qloop_105*tmp_qloop_106*tmp_qloop_62*0.2146156710600175 + tmp_qloop_109*-0.020516694887729999 - 0.041597543561209399): ((tmp_qloop_108 <= 9.7000000058627194) ? (tmp_qloop_101*0.0003890697253152925 + tmp_qloop_108*0.16399221771597999 + tmp_qloop_109*-0.01300962248982295 + 0.072194442299590406): (thermalConductivity*1.0 / (tmp_qloop_103)*1.0 / (tmp_qloop_104)*1.0 / (tmp_qloop_105)*tmp_qloop_63*tmp_qloop_99*-2.0 + 1.0)))))*_data_q_w[q];
                      const real_t tmp_qloop_111 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]));
                      const real_t tmp_qloop_112 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]));
                      const real_t tmp_qloop_113 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]));
                      const real_t tmp_qloop_114 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]));
                      const real_t tmp_qloop_115 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]));
                      const real_t tmp_qloop_116 = tmp_qloop_110*(tmp_qloop_59*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]) + tmp_qloop_60*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]));
                      const real_t hessian_blending_0_0_0 = tmp_qloop_24 - tmp_qloop_35 + tmp_qloop_38;
                      const real_t hessian_blending_1_0_0 = tmp_qloop_10*tmp_qloop_42 - (tmp_qloop_10*tmp_qloop_10*tmp_qloop_10)*tmp_qloop_36 + tmp_qloop_11*tmp_qloop_39 - tmp_qloop_41;
                      const real_t hessian_blending_0_0_1 = tmp_qloop_21*tmp_qloop_25*tmp_qloop_40*tmp_qloop_5*-2.0 - tmp_qloop_44;
                      const real_t hessian_blending_1_0_1 = tmp_qloop_13*tmp_qloop_18*tmp_qloop_20*tmp_qloop_5*1.0 - tmp_qloop_30 - tmp_qloop_38 - tmp_qloop_45;
                      const real_t hessian_blending_0_1_0 = tmp_qloop_16*tmp_qloop_18*tmp_qloop_20*tmp_qloop_25*tmp_qloop_6*1.0 - tmp_qloop_29 - tmp_qloop_41 - tmp_qloop_44;
                      const real_t hessian_blending_1_1_0 = -tmp_qloop_30 + tmp_qloop_37 - tmp_qloop_45 + tmp_qloop_46;
                      const real_t hessian_blending_0_1_1 = tmp_qloop_3*tmp_qloop_42 - (tmp_qloop_3*tmp_qloop_3*tmp_qloop_3)*tmp_qloop_36 + tmp_qloop_35 + tmp_qloop_46;
                      const real_t hessian_blending_1_1_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_20*tmp_qloop_25*1.0 + tmp_qloop_15*tmp_qloop_18*tmp_qloop_20*tmp_qloop_25*tmp_qloop_6*1.0 - tmp_qloop_29 - tmp_qloop_43;
                      const real_t q_tmp_0_0 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_0_1 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_0_2 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_0_3 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_0_4 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_0_5 = tmp_qloop_111*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_1_0 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_1_1 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_1_2 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_1_3 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_1_4 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_1_5 = tmp_qloop_112*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_2_0 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_2_1 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_2_2 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_2_3 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_2_4 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_2_5 = tmp_qloop_113*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_3_0 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_3_1 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_3_2 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_3_3 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_3_4 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_3_5 = tmp_qloop_114*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_4_0 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_4_1 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_4_2 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_4_3 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_4_4 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_4_5 = tmp_qloop_115*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
                      const real_t q_tmp_5_0 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q];
                      const real_t q_tmp_5_1 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2];
                      const real_t q_tmp_5_2 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3];
                      const real_t q_tmp_5_3 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4];
                      const real_t q_tmp_5_4 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5];
                      const real_t q_tmp_5_5 = tmp_qloop_116*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6];
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
                   const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
                   const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
                   const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
                   const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
                   const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
                   const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
                   const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
                   const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
                   const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
                   const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
                   const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
                   const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
                   const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
                   const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
                   const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
                   const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
                   const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
                   const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
                   const real_t elMat_3_0 = q_acc_3_0*toMatrixScaling;
                   const real_t elMat_3_1 = q_acc_3_1*toMatrixScaling;
                   const real_t elMat_3_2 = q_acc_3_2*toMatrixScaling;
                   const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
                   const real_t elMat_3_4 = q_acc_3_4*toMatrixScaling;
                   const real_t elMat_3_5 = q_acc_3_5*toMatrixScaling;
                   const real_t elMat_4_0 = q_acc_4_0*toMatrixScaling;
                   const real_t elMat_4_1 = q_acc_4_1*toMatrixScaling;
                   const real_t elMat_4_2 = q_acc_4_2*toMatrixScaling;
                   const real_t elMat_4_3 = q_acc_4_3*toMatrixScaling;
                   const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
                   const real_t elMat_4_5 = q_acc_4_5*toMatrixScaling;
                   const real_t elMat_5_0 = q_acc_5_0*toMatrixScaling;
                   const real_t elMat_5_1 = q_acc_5_1*toMatrixScaling;
                   const real_t elMat_5_2 = q_acc_5_2*toMatrixScaling;
                   const real_t elMat_5_3 = q_acc_5_3*toMatrixScaling;
                   const real_t elMat_5_4 = q_acc_5_4*toMatrixScaling;
                   const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_0_4));
                   _data_mat[5] = ((real_t)(elMat_0_5));
                   _data_mat[6] = ((real_t)(elMat_1_0));
                   _data_mat[7] = ((real_t)(elMat_1_1));
                   _data_mat[8] = ((real_t)(elMat_1_2));
                   _data_mat[9] = ((real_t)(elMat_1_3));
                   _data_mat[10] = ((real_t)(elMat_1_4));
                   _data_mat[11] = ((real_t)(elMat_1_5));
                   _data_mat[12] = ((real_t)(elMat_2_0));
                   _data_mat[13] = ((real_t)(elMat_2_1));
                   _data_mat[14] = ((real_t)(elMat_2_2));
                   _data_mat[15] = ((real_t)(elMat_2_3));
                   _data_mat[16] = ((real_t)(elMat_2_4));
                   _data_mat[17] = ((real_t)(elMat_2_5));
                   _data_mat[18] = ((real_t)(elMat_3_0));
                   _data_mat[19] = ((real_t)(elMat_3_1));
                   _data_mat[20] = ((real_t)(elMat_3_2));
                   _data_mat[21] = ((real_t)(elMat_3_3));
                   _data_mat[22] = ((real_t)(elMat_3_4));
                   _data_mat[23] = ((real_t)(elMat_3_5));
                   _data_mat[24] = ((real_t)(elMat_4_0));
                   _data_mat[25] = ((real_t)(elMat_4_1));
                   _data_mat[26] = ((real_t)(elMat_4_2));
                   _data_mat[27] = ((real_t)(elMat_4_3));
                   _data_mat[28] = ((real_t)(elMat_4_4));
                   _data_mat[29] = ((real_t)(elMat_4_5));
                   _data_mat[30] = ((real_t)(elMat_5_0));
                   _data_mat[31] = ((real_t)(elMat_5_1));
                   _data_mat[32] = ((real_t)(elMat_5_2));
                   _data_mat[33] = ((real_t)(elMat_5_3));
                   _data_mat[34] = ((real_t)(elMat_5_4));
                   _data_mat[35] = ((real_t)(elMat_5_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
