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





























#include "../P2ElementwiseKMass.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseKMass::apply_P2ElementwiseKMass_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_kEdge, real_t * RESTRICT  _data_kVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949, 0.11169079483900581, 0.054975871827660949};
   
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
       const real_t abs_det_jac_affine_GRAY = abs(jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_0_0_GRAY [] = {-0.048208377815512182, -0.048208377815512071, -0.084730493093977982, 0.1928335112620482, 0.1928335112620482, 0.79548022620090575, -0.074803807748196338, -0.074803807748196491, 0.5176323419876725, 0.29921523099278596, 0.29921523099278607, 0.033544811523148421, -0.048208377815512155, -0.084730493093977982, -0.048208377815512071, 0.1928335112620482, 0.79548022620090575, 0.1928335112620482, -0.074803807748196227, 0.5176323419876725, -0.074803807748196491, 0.29921523099278596, 0.033544811523148421, 0.29921523099278607, -0.084730493093978398, -0.048208377815512071, -0.048208377815512071, 0.79548022620090564, 0.19283351126204828, 0.19283351126204828, 0.51763234198767272, -0.074803807748196491, -0.074803807748196491, 0.033544811523148449, 0.29921523099278591, 0.29921523099278591};
      
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031672)), ((real_t)(abs_det_jac_affine_GRAY*0.002324047691603162)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691361)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126427)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126427)), ((real_t)(abs_det_jac_affine_GRAY*-0.03834881128946236)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691266)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_GRAY*-0.03834881128946227)), ((real_t)(abs_det_jac_affine_GRAY*0.0071792564599486505)), ((real_t)(abs_det_jac_affine_GRAY*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_GRAY*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_GRAY*-0.067401431812511889)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650467)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650474)), ((real_t)(abs_det_jac_affine_GRAY*0.153395245157849)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650474)), ((real_t)(abs_det_jac_affine_GRAY*0.153395245157849)), ((real_t)(abs_det_jac_affine_GRAY*0.63278879027664414)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291184)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291296)), ((real_t)(abs_det_jac_affine_GRAY*-0.038720870194294474)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516519)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516529)), ((real_t)(abs_det_jac_affine_GRAY*-0.0025092796321270756)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*-0.03872087019429455)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516567)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516574)), ((real_t)(abs_det_jac_affine_GRAY*-0.0025092796321270808)), ((real_t)(abs_det_jac_affine_GRAY*0.26794324147164272)), ((real_t)(abs_det_jac_affine_GRAY*0.1548834807771782)), ((real_t)(abs_det_jac_affine_GRAY*0.15488348077717826)), ((real_t)(abs_det_jac_affine_GRAY*0.01736387935026238)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066241)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066296)), ((real_t)(abs_det_jac_affine_GRAY*0.010037118528508323)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066324)), ((real_t)(abs_det_jac_affine_GRAY*0.010037118528508327)), ((real_t)(abs_det_jac_affine_GRAY*0.0011252543801235511)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031646)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691344)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031602)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126375)), ((real_t)(abs_det_jac_affine_GRAY*-0.038348811289462333)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126375)), ((real_t)(abs_det_jac_affine_GRAY*0.0071792564599486505)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691266)), ((real_t)(abs_det_jac_affine_GRAY*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_GRAY*-0.067401431812511889)), ((real_t)(abs_det_jac_affine_GRAY*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_GRAY*-0.03834881128946227)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650467)), ((real_t)(abs_det_jac_affine_GRAY*0.153395245157849)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650474)), ((real_t)(abs_det_jac_affine_GRAY*0.63278879027664414)), ((real_t)(abs_det_jac_affine_GRAY*0.153395245157849)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650474)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291019)), ((real_t)(abs_det_jac_affine_GRAY*-0.038720870194294418)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291218)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516487)), ((real_t)(abs_det_jac_affine_GRAY*-0.0025092796321270722)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516494)), ((real_t)(abs_det_jac_affine_GRAY*0.26794324147164272)), ((real_t)(abs_det_jac_affine_GRAY*-0.03872087019429455)), ((real_t)(abs_det_jac_affine_GRAY*0.1548834807771782)), ((real_t)(abs_det_jac_affine_GRAY*0.01736387935026238)), ((real_t)(abs_det_jac_affine_GRAY*0.15488348077717826)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516567)), ((real_t)(abs_det_jac_affine_GRAY*-0.0025092796321270808)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516574)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066241)), ((real_t)(abs_det_jac_affine_GRAY*0.010037118528508323)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066296)), ((real_t)(abs_det_jac_affine_GRAY*0.0011252543801235511)), ((real_t)(abs_det_jac_affine_GRAY*0.010037118528508327)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066324)), ((real_t)(abs_det_jac_affine_GRAY*0.0071792564599487208)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691474)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691474)), ((real_t)(abs_det_jac_affine_GRAY*-0.067401431812512208)), ((real_t)(abs_det_jac_affine_GRAY*-0.01633887849427659)), ((real_t)(abs_det_jac_affine_GRAY*-0.01633887849427659)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*-0.038348811289462263)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*-0.038348811289462263)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_GRAY*0.63278879027664403)), ((real_t)(abs_det_jac_affine_GRAY*0.15339524515784905)), ((real_t)(abs_det_jac_affine_GRAY*0.15339524515784905)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650502)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650502)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650502)), ((real_t)(abs_det_jac_affine_GRAY*0.26794324147164295)), ((real_t)(abs_det_jac_affine_GRAY*-0.038720870194294571)), ((real_t)(abs_det_jac_affine_GRAY*-0.038720870194294571)), ((real_t)(abs_det_jac_affine_GRAY*0.017363879350262401)), ((real_t)(abs_det_jac_affine_GRAY*0.15488348077717826)), ((real_t)(abs_det_jac_affine_GRAY*0.15488348077717826)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*-0.002509279632127083)), ((real_t)(abs_det_jac_affine_GRAY*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_GRAY*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*-0.002509279632127083)), ((real_t)(abs_det_jac_affine_GRAY*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_GRAY*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_GRAY*0.0011252543801235529)), ((real_t)(abs_det_jac_affine_GRAY*0.01003711852850833)), ((real_t)(abs_det_jac_affine_GRAY*0.01003711852850833)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066227)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066227)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066227))};
      
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
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t k_dof_3 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_5_5 = 0.0;
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_0 = (k_dof_0*_data_phi_0_0_GRAY[6*q] + k_dof_1*_data_phi_0_0_GRAY[6*q + 1] + k_dof_2*_data_phi_0_0_GRAY[6*q + 2] + k_dof_3*_data_phi_0_0_GRAY[6*q + 3] + k_dof_4*_data_phi_0_0_GRAY[6*q + 4] + k_dof_5*_data_phi_0_0_GRAY[6*q + 5])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 5];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 6];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 7];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 8];
                const real_t q_tmp_1_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 9];
                const real_t q_tmp_1_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 10];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 11];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 12];
                const real_t q_tmp_2_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 13];
                const real_t q_tmp_2_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 14];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 15];
                const real_t q_tmp_3_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 16];
                const real_t q_tmp_3_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 17];
                const real_t q_tmp_4_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 18];
                const real_t q_tmp_4_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 19];
                const real_t q_tmp_5_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_GRAY[21*q + 20];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
             const real_t elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
             const real_t elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_5*src_dof_5;
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
       const real_t abs_det_jac_affine_BLUE = abs(jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE);
       {
          /* FaceType.BLUE */
          const real_t _data_phi_0_0_BLUE [] = {-0.048208377815512182, -0.048208377815512071, -0.084730493093977982, 0.1928335112620482, 0.1928335112620482, 0.79548022620090575, -0.074803807748196338, -0.074803807748196491, 0.5176323419876725, 0.29921523099278596, 0.29921523099278607, 0.033544811523148421, -0.048208377815512155, -0.084730493093977982, -0.048208377815512071, 0.1928335112620482, 0.79548022620090575, 0.1928335112620482, -0.074803807748196227, 0.5176323419876725, -0.074803807748196491, 0.29921523099278596, 0.033544811523148421, 0.29921523099278607, -0.084730493093978398, -0.048208377815512071, -0.048208377815512071, 0.79548022620090564, 0.19283351126204828, 0.19283351126204828, 0.51763234198767272, -0.074803807748196491, -0.074803807748196491, 0.033544811523148449, 0.29921523099278591, 0.29921523099278591};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031672)), ((real_t)(abs_det_jac_affine_BLUE*0.002324047691603162)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691361)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126427)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126427)), ((real_t)(abs_det_jac_affine_BLUE*-0.03834881128946236)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691266)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_BLUE*-0.03834881128946227)), ((real_t)(abs_det_jac_affine_BLUE*0.0071792564599486505)), ((real_t)(abs_det_jac_affine_BLUE*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_BLUE*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_BLUE*-0.067401431812511889)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650467)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650474)), ((real_t)(abs_det_jac_affine_BLUE*0.153395245157849)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650474)), ((real_t)(abs_det_jac_affine_BLUE*0.153395245157849)), ((real_t)(abs_det_jac_affine_BLUE*0.63278879027664414)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291184)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291296)), ((real_t)(abs_det_jac_affine_BLUE*-0.038720870194294474)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516519)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516529)), ((real_t)(abs_det_jac_affine_BLUE*-0.0025092796321270756)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*-0.03872087019429455)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516567)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516574)), ((real_t)(abs_det_jac_affine_BLUE*-0.0025092796321270808)), ((real_t)(abs_det_jac_affine_BLUE*0.26794324147164272)), ((real_t)(abs_det_jac_affine_BLUE*0.1548834807771782)), ((real_t)(abs_det_jac_affine_BLUE*0.15488348077717826)), ((real_t)(abs_det_jac_affine_BLUE*0.01736387935026238)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066241)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066296)), ((real_t)(abs_det_jac_affine_BLUE*0.010037118528508323)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066324)), ((real_t)(abs_det_jac_affine_BLUE*0.010037118528508327)), ((real_t)(abs_det_jac_affine_BLUE*0.0011252543801235511)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031646)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691344)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031602)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126375)), ((real_t)(abs_det_jac_affine_BLUE*-0.038348811289462333)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126375)), ((real_t)(abs_det_jac_affine_BLUE*0.0071792564599486505)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691266)), ((real_t)(abs_det_jac_affine_BLUE*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_BLUE*-0.067401431812511889)), ((real_t)(abs_det_jac_affine_BLUE*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_BLUE*-0.03834881128946227)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650467)), ((real_t)(abs_det_jac_affine_BLUE*0.153395245157849)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650474)), ((real_t)(abs_det_jac_affine_BLUE*0.63278879027664414)), ((real_t)(abs_det_jac_affine_BLUE*0.153395245157849)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650474)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291019)), ((real_t)(abs_det_jac_affine_BLUE*-0.038720870194294418)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291218)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516487)), ((real_t)(abs_det_jac_affine_BLUE*-0.0025092796321270722)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516494)), ((real_t)(abs_det_jac_affine_BLUE*0.26794324147164272)), ((real_t)(abs_det_jac_affine_BLUE*-0.03872087019429455)), ((real_t)(abs_det_jac_affine_BLUE*0.1548834807771782)), ((real_t)(abs_det_jac_affine_BLUE*0.01736387935026238)), ((real_t)(abs_det_jac_affine_BLUE*0.15488348077717826)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516567)), ((real_t)(abs_det_jac_affine_BLUE*-0.0025092796321270808)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516574)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066241)), ((real_t)(abs_det_jac_affine_BLUE*0.010037118528508323)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066296)), ((real_t)(abs_det_jac_affine_BLUE*0.0011252543801235511)), ((real_t)(abs_det_jac_affine_BLUE*0.010037118528508327)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066324)), ((real_t)(abs_det_jac_affine_BLUE*0.0071792564599487208)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691474)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691474)), ((real_t)(abs_det_jac_affine_BLUE*-0.067401431812512208)), ((real_t)(abs_det_jac_affine_BLUE*-0.01633887849427659)), ((real_t)(abs_det_jac_affine_BLUE*-0.01633887849427659)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*-0.038348811289462263)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*-0.038348811289462263)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_BLUE*0.63278879027664403)), ((real_t)(abs_det_jac_affine_BLUE*0.15339524515784905)), ((real_t)(abs_det_jac_affine_BLUE*0.15339524515784905)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650502)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650502)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650502)), ((real_t)(abs_det_jac_affine_BLUE*0.26794324147164295)), ((real_t)(abs_det_jac_affine_BLUE*-0.038720870194294571)), ((real_t)(abs_det_jac_affine_BLUE*-0.038720870194294571)), ((real_t)(abs_det_jac_affine_BLUE*0.017363879350262401)), ((real_t)(abs_det_jac_affine_BLUE*0.15488348077717826)), ((real_t)(abs_det_jac_affine_BLUE*0.15488348077717826)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*-0.002509279632127083)), ((real_t)(abs_det_jac_affine_BLUE*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_BLUE*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*-0.002509279632127083)), ((real_t)(abs_det_jac_affine_BLUE*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_BLUE*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_BLUE*0.0011252543801235529)), ((real_t)(abs_det_jac_affine_BLUE*0.01003711852850833)), ((real_t)(abs_det_jac_affine_BLUE*0.01003711852850833)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066227)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066227)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066227))};
      
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
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t src_dof_3 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t k_dof_3 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_5_5 = 0.0;
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_0 = (k_dof_0*_data_phi_0_0_BLUE[6*q] + k_dof_1*_data_phi_0_0_BLUE[6*q + 1] + k_dof_2*_data_phi_0_0_BLUE[6*q + 2] + k_dof_3*_data_phi_0_0_BLUE[6*q + 3] + k_dof_4*_data_phi_0_0_BLUE[6*q + 4] + k_dof_5*_data_phi_0_0_BLUE[6*q + 5])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 5];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 6];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 7];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 8];
                const real_t q_tmp_1_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 9];
                const real_t q_tmp_1_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 10];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 11];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 12];
                const real_t q_tmp_2_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 13];
                const real_t q_tmp_2_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 14];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 15];
                const real_t q_tmp_3_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 16];
                const real_t q_tmp_3_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 17];
                const real_t q_tmp_4_4 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 18];
                const real_t q_tmp_4_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 19];
                const real_t q_tmp_5_5 = tmp_qloop_0*_data_tabulated_and_untitled_0_0_BLUE[21*q + 20];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
             const real_t elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
             const real_t elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_5*src_dof_5;
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
