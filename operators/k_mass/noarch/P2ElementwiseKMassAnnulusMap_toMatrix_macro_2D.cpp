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



























#include "../P2ElementwiseKMassAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseKMassAnnulusMap::toMatrix_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_kEdge, real_t * RESTRICT  _data_kVertex, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t abs_det_jac_affine_GRAY = abs(jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY);
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
       const real_t tmp_qloop_55 = tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_psi_jac_affine_det_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031672)), ((real_t)(abs_det_jac_affine_GRAY*0.002324047691603162)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691361)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126427)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126427)), ((real_t)(abs_det_jac_affine_GRAY*-0.03834881128946236)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691266)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_GRAY*-0.03834881128946227)), ((real_t)(abs_det_jac_affine_GRAY*0.0071792564599486505)), ((real_t)(abs_det_jac_affine_GRAY*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_GRAY*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_GRAY*-0.067401431812511889)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650467)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650474)), ((real_t)(abs_det_jac_affine_GRAY*0.153395245157849)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650474)), ((real_t)(abs_det_jac_affine_GRAY*0.153395245157849)), ((real_t)(abs_det_jac_affine_GRAY*0.63278879027664414)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291184)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291296)), ((real_t)(abs_det_jac_affine_GRAY*-0.038720870194294474)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516519)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516529)), ((real_t)(abs_det_jac_affine_GRAY*-0.0025092796321270756)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*-0.03872087019429455)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516567)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516574)), ((real_t)(abs_det_jac_affine_GRAY*-0.0025092796321270808)), ((real_t)(abs_det_jac_affine_GRAY*0.26794324147164272)), ((real_t)(abs_det_jac_affine_GRAY*0.1548834807771782)), ((real_t)(abs_det_jac_affine_GRAY*0.15488348077717826)), ((real_t)(abs_det_jac_affine_GRAY*0.01736387935026238)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066241)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066296)), ((real_t)(abs_det_jac_affine_GRAY*0.010037118528508323)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066324)), ((real_t)(abs_det_jac_affine_GRAY*0.010037118528508327)), ((real_t)(abs_det_jac_affine_GRAY*0.0011252543801235511)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031646)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691344)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031602)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126375)), ((real_t)(abs_det_jac_affine_GRAY*-0.038348811289462333)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126375)), ((real_t)(abs_det_jac_affine_GRAY*0.0071792564599486505)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691266)), ((real_t)(abs_det_jac_affine_GRAY*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_GRAY*-0.067401431812511889)), ((real_t)(abs_det_jac_affine_GRAY*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_GRAY*-0.03834881128946227)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650467)), ((real_t)(abs_det_jac_affine_GRAY*0.153395245157849)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650474)), ((real_t)(abs_det_jac_affine_GRAY*0.63278879027664414)), ((real_t)(abs_det_jac_affine_GRAY*0.153395245157849)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650474)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291019)), ((real_t)(abs_det_jac_affine_GRAY*-0.038720870194294418)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291218)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516487)), ((real_t)(abs_det_jac_affine_GRAY*-0.0025092796321270722)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516494)), ((real_t)(abs_det_jac_affine_GRAY*0.26794324147164272)), ((real_t)(abs_det_jac_affine_GRAY*-0.03872087019429455)), ((real_t)(abs_det_jac_affine_GRAY*0.1548834807771782)), ((real_t)(abs_det_jac_affine_GRAY*0.01736387935026238)), ((real_t)(abs_det_jac_affine_GRAY*0.15488348077717826)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516567)), ((real_t)(abs_det_jac_affine_GRAY*-0.0025092796321270808)), ((real_t)(abs_det_jac_affine_GRAY*-0.022382438614516574)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066241)), ((real_t)(abs_det_jac_affine_GRAY*0.010037118528508323)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066296)), ((real_t)(abs_det_jac_affine_GRAY*0.0011252543801235511)), ((real_t)(abs_det_jac_affine_GRAY*0.010037118528508327)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066324)), ((real_t)(abs_det_jac_affine_GRAY*0.0071792564599487208)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691474)), ((real_t)(abs_det_jac_affine_GRAY*0.0040847196235691474)), ((real_t)(abs_det_jac_affine_GRAY*-0.067401431812512208)), ((real_t)(abs_det_jac_affine_GRAY*-0.01633887849427659)), ((real_t)(abs_det_jac_affine_GRAY*-0.01633887849427659)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*-0.038348811289462263)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_GRAY*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_GRAY*-0.038348811289462263)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_GRAY*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_GRAY*0.63278879027664403)), ((real_t)(abs_det_jac_affine_GRAY*0.15339524515784905)), ((real_t)(abs_det_jac_affine_GRAY*0.15339524515784905)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650502)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650502)), ((real_t)(abs_det_jac_affine_GRAY*0.037184763065650502)), ((real_t)(abs_det_jac_affine_GRAY*0.26794324147164295)), ((real_t)(abs_det_jac_affine_GRAY*-0.038720870194294571)), ((real_t)(abs_det_jac_affine_GRAY*-0.038720870194294571)), ((real_t)(abs_det_jac_affine_GRAY*0.017363879350262401)), ((real_t)(abs_det_jac_affine_GRAY*0.15488348077717826)), ((real_t)(abs_det_jac_affine_GRAY*0.15488348077717826)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*-0.002509279632127083)), ((real_t)(abs_det_jac_affine_GRAY*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_GRAY*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_GRAY*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_GRAY*-0.002509279632127083)), ((real_t)(abs_det_jac_affine_GRAY*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_GRAY*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_GRAY*0.0011252543801235529)), ((real_t)(abs_det_jac_affine_GRAY*0.01003711852850833)), ((real_t)(abs_det_jac_affine_GRAY*0.01003711852850833)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066227)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066227)), ((real_t)(abs_det_jac_affine_GRAY*0.089529754458066227))};
      
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
                const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_46 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_47 = tmp_qloop_46*2.0;
                const real_t tmp_qloop_48 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_49 = tmp_qloop_48*2.0;
                const real_t tmp_qloop_50 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_51 = (tmp_qloop_50*tmp_qloop_50);
                const real_t tmp_qloop_52 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_53 = (tmp_qloop_52*tmp_qloop_52);
                const real_t tmp_qloop_54 = tmp_qloop_51 + tmp_qloop_53;
                const real_t tmp_qloop_56 = pow(tmp_qloop_54, -0.50000000000000000)*tmp_qloop_55*1.0;
                const real_t tmp_qloop_57 = tmp_qloop_50*tmp_qloop_56;
                const real_t tmp_qloop_58 = tmp_qloop_13*(rayVertex_1 + tmp_qloop_52) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_50);
                const real_t tmp_qloop_59 = pow(tmp_qloop_54, -1.5000000000000000)*1.0;
                const real_t tmp_qloop_60 = tmp_qloop_59*(radRayVertex + tmp_qloop_55*tmp_qloop_58);
                const real_t tmp_qloop_61 = tmp_qloop_52*tmp_qloop_56;
                const real_t tmp_qloop_62 = tmp_qloop_59*(radRayVertex + tmp_qloop_55*tmp_qloop_58);
                const real_t tmp_qloop_63 = tmp_qloop_50*tmp_qloop_52;
                const real_t tmp_qloop_64 = (k_dof_0*(tmp_qloop_45 + tmp_qloop_47 + tmp_qloop_49 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_qloop_47 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_49 - _data_q_p_1[q]) + k_dof_3*tmp_qloop_45 + k_dof_4*(-tmp_qloop_45 + tmp_qloop_48*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_5*(-tmp_qloop_45 + tmp_qloop_46*-4.0 + 4.0*_data_q_p_0[q]))*abs((tmp_qloop_13*tmp_qloop_57 - tmp_qloop_62*tmp_qloop_63)*(tmp_qloop_3*tmp_qloop_61 + tmp_qloop_60*tmp_qloop_63) - (tmp_qloop_13*tmp_qloop_61 + tmp_qloop_51*tmp_qloop_62)*(tmp_qloop_3*tmp_qloop_57 - tmp_qloop_53*tmp_qloop_60))*_data_q_w[q];
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
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                const real_t q_tmp_0_0 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q];
                const real_t q_tmp_0_1 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 5];
                const real_t q_tmp_1_1 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 6];
                const real_t q_tmp_1_2 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 7];
                const real_t q_tmp_1_3 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 8];
                const real_t q_tmp_1_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 9];
                const real_t q_tmp_1_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 10];
                const real_t q_tmp_2_2 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 11];
                const real_t q_tmp_2_3 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 12];
                const real_t q_tmp_2_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 13];
                const real_t q_tmp_2_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 14];
                const real_t q_tmp_3_3 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 15];
                const real_t q_tmp_3_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 16];
                const real_t q_tmp_3_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 17];
                const real_t q_tmp_4_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 18];
                const real_t q_tmp_4_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 19];
                const real_t q_tmp_5_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 20];
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
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_1_0 = q_acc_0_1;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_2_0 = q_acc_0_2;
             const real_t elMat_2_1 = q_acc_1_2;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_3_0 = q_acc_0_3;
             const real_t elMat_3_1 = q_acc_1_3;
             const real_t elMat_3_2 = q_acc_2_3;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_4_0 = q_acc_0_4;
             const real_t elMat_4_1 = q_acc_1_4;
             const real_t elMat_4_2 = q_acc_2_4;
             const real_t elMat_4_3 = q_acc_3_4;
             const real_t elMat_4_4 = q_acc_4_4;
             const real_t elMat_4_5 = q_acc_4_5;
             const real_t elMat_5_0 = q_acc_0_5;
             const real_t elMat_5_1 = q_acc_1_5;
             const real_t elMat_5_2 = q_acc_2_5;
             const real_t elMat_5_3 = q_acc_3_5;
             const real_t elMat_5_4 = q_acc_4_5;
             const real_t elMat_5_5 = q_acc_5_5;
         
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
          const real_t _data_phi_psi_jac_affine_det_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031672)), ((real_t)(abs_det_jac_affine_BLUE*0.002324047691603162)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691361)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126427)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126427)), ((real_t)(abs_det_jac_affine_BLUE*-0.03834881128946236)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691266)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_BLUE*-0.03834881128946227)), ((real_t)(abs_det_jac_affine_BLUE*0.0071792564599486505)), ((real_t)(abs_det_jac_affine_BLUE*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_BLUE*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_BLUE*-0.067401431812511889)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650467)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650474)), ((real_t)(abs_det_jac_affine_BLUE*0.153395245157849)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650474)), ((real_t)(abs_det_jac_affine_BLUE*0.153395245157849)), ((real_t)(abs_det_jac_affine_BLUE*0.63278879027664414)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291184)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291296)), ((real_t)(abs_det_jac_affine_BLUE*-0.038720870194294474)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516519)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516529)), ((real_t)(abs_det_jac_affine_BLUE*-0.0025092796321270756)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*-0.03872087019429455)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516567)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516574)), ((real_t)(abs_det_jac_affine_BLUE*-0.0025092796321270808)), ((real_t)(abs_det_jac_affine_BLUE*0.26794324147164272)), ((real_t)(abs_det_jac_affine_BLUE*0.1548834807771782)), ((real_t)(abs_det_jac_affine_BLUE*0.15488348077717826)), ((real_t)(abs_det_jac_affine_BLUE*0.01736387935026238)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066241)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066296)), ((real_t)(abs_det_jac_affine_BLUE*0.010037118528508323)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066324)), ((real_t)(abs_det_jac_affine_BLUE*0.010037118528508327)), ((real_t)(abs_det_jac_affine_BLUE*0.0011252543801235511)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031646)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691344)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031602)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126375)), ((real_t)(abs_det_jac_affine_BLUE*-0.038348811289462333)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126375)), ((real_t)(abs_det_jac_affine_BLUE*0.0071792564599486505)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691266)), ((real_t)(abs_det_jac_affine_BLUE*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_BLUE*-0.067401431812511889)), ((real_t)(abs_det_jac_affine_BLUE*-0.016338878494276499)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_BLUE*-0.03834881128946227)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126219)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650467)), ((real_t)(abs_det_jac_affine_BLUE*0.153395245157849)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650474)), ((real_t)(abs_det_jac_affine_BLUE*0.63278879027664414)), ((real_t)(abs_det_jac_affine_BLUE*0.153395245157849)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650474)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291019)), ((real_t)(abs_det_jac_affine_BLUE*-0.038720870194294418)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291218)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516487)), ((real_t)(abs_det_jac_affine_BLUE*-0.0025092796321270722)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516494)), ((real_t)(abs_det_jac_affine_BLUE*0.26794324147164272)), ((real_t)(abs_det_jac_affine_BLUE*-0.03872087019429455)), ((real_t)(abs_det_jac_affine_BLUE*0.1548834807771782)), ((real_t)(abs_det_jac_affine_BLUE*0.01736387935026238)), ((real_t)(abs_det_jac_affine_BLUE*0.15488348077717826)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516567)), ((real_t)(abs_det_jac_affine_BLUE*-0.0025092796321270808)), ((real_t)(abs_det_jac_affine_BLUE*-0.022382438614516574)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066241)), ((real_t)(abs_det_jac_affine_BLUE*0.010037118528508323)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066296)), ((real_t)(abs_det_jac_affine_BLUE*0.0011252543801235511)), ((real_t)(abs_det_jac_affine_BLUE*0.010037118528508327)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066324)), ((real_t)(abs_det_jac_affine_BLUE*0.0071792564599487208)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691474)), ((real_t)(abs_det_jac_affine_BLUE*0.0040847196235691474)), ((real_t)(abs_det_jac_affine_BLUE*-0.067401431812512208)), ((real_t)(abs_det_jac_affine_BLUE*-0.01633887849427659)), ((real_t)(abs_det_jac_affine_BLUE*-0.01633887849427659)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*-0.038348811289462263)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_BLUE*0.0023240476916031563)), ((real_t)(abs_det_jac_affine_BLUE*-0.038348811289462263)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_BLUE*-0.0092961907664126254)), ((real_t)(abs_det_jac_affine_BLUE*0.63278879027664403)), ((real_t)(abs_det_jac_affine_BLUE*0.15339524515784905)), ((real_t)(abs_det_jac_affine_BLUE*0.15339524515784905)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650502)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650502)), ((real_t)(abs_det_jac_affine_BLUE*0.037184763065650502)), ((real_t)(abs_det_jac_affine_BLUE*0.26794324147164295)), ((real_t)(abs_det_jac_affine_BLUE*-0.038720870194294571)), ((real_t)(abs_det_jac_affine_BLUE*-0.038720870194294571)), ((real_t)(abs_det_jac_affine_BLUE*0.017363879350262401)), ((real_t)(abs_det_jac_affine_BLUE*0.15488348077717826)), ((real_t)(abs_det_jac_affine_BLUE*0.15488348077717826)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*-0.002509279632127083)), ((real_t)(abs_det_jac_affine_BLUE*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_BLUE*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_BLUE*0.0055956096536291418)), ((real_t)(abs_det_jac_affine_BLUE*-0.002509279632127083)), ((real_t)(abs_det_jac_affine_BLUE*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_BLUE*-0.02238243861451656)), ((real_t)(abs_det_jac_affine_BLUE*0.0011252543801235529)), ((real_t)(abs_det_jac_affine_BLUE*0.01003711852850833)), ((real_t)(abs_det_jac_affine_BLUE*0.01003711852850833)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066227)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066227)), ((real_t)(abs_det_jac_affine_BLUE*0.089529754458066227))};
      
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
                const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_46 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_47 = tmp_qloop_46*2.0;
                const real_t tmp_qloop_48 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_49 = tmp_qloop_48*2.0;
                const real_t tmp_qloop_50 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                const real_t tmp_qloop_51 = (tmp_qloop_50*tmp_qloop_50);
                const real_t tmp_qloop_52 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                const real_t tmp_qloop_53 = (tmp_qloop_52*tmp_qloop_52);
                const real_t tmp_qloop_54 = tmp_qloop_51 + tmp_qloop_53;
                const real_t tmp_qloop_56 = pow(tmp_qloop_54, -0.50000000000000000)*tmp_qloop_55*1.0;
                const real_t tmp_qloop_57 = tmp_qloop_50*tmp_qloop_56;
                const real_t tmp_qloop_58 = tmp_qloop_13*(rayVertex_1 + tmp_qloop_52) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_50);
                const real_t tmp_qloop_59 = pow(tmp_qloop_54, -1.5000000000000000)*1.0;
                const real_t tmp_qloop_60 = tmp_qloop_59*(radRayVertex + tmp_qloop_55*tmp_qloop_58);
                const real_t tmp_qloop_61 = tmp_qloop_52*tmp_qloop_56;
                const real_t tmp_qloop_62 = tmp_qloop_59*(radRayVertex + tmp_qloop_55*tmp_qloop_58);
                const real_t tmp_qloop_63 = tmp_qloop_50*tmp_qloop_52;
                const real_t tmp_qloop_64 = (k_dof_0*(tmp_qloop_45 + tmp_qloop_47 + tmp_qloop_49 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_qloop_47 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_49 - _data_q_p_1[q]) + k_dof_3*tmp_qloop_45 + k_dof_4*(-tmp_qloop_45 + tmp_qloop_48*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_5*(-tmp_qloop_45 + tmp_qloop_46*-4.0 + 4.0*_data_q_p_0[q]))*abs((tmp_qloop_13*tmp_qloop_57 - tmp_qloop_62*tmp_qloop_63)*(tmp_qloop_3*tmp_qloop_61 + tmp_qloop_60*tmp_qloop_63) - (tmp_qloop_13*tmp_qloop_61 + tmp_qloop_51*tmp_qloop_62)*(tmp_qloop_3*tmp_qloop_57 - tmp_qloop_53*tmp_qloop_60))*_data_q_w[q];
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
                const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                const real_t q_tmp_0_0 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q];
                const real_t q_tmp_0_1 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 5];
                const real_t q_tmp_1_1 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 6];
                const real_t q_tmp_1_2 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 7];
                const real_t q_tmp_1_3 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 8];
                const real_t q_tmp_1_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 9];
                const real_t q_tmp_1_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 10];
                const real_t q_tmp_2_2 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 11];
                const real_t q_tmp_2_3 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 12];
                const real_t q_tmp_2_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 13];
                const real_t q_tmp_2_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 14];
                const real_t q_tmp_3_3 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 15];
                const real_t q_tmp_3_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 16];
                const real_t q_tmp_3_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 17];
                const real_t q_tmp_4_4 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 18];
                const real_t q_tmp_4_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 19];
                const real_t q_tmp_5_5 = tmp_qloop_64*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 20];
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
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_1_0 = q_acc_0_1;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_2_0 = q_acc_0_2;
             const real_t elMat_2_1 = q_acc_1_2;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_3_0 = q_acc_0_3;
             const real_t elMat_3_1 = q_acc_1_3;
             const real_t elMat_3_2 = q_acc_2_3;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_4_0 = q_acc_0_4;
             const real_t elMat_4_1 = q_acc_1_4;
             const real_t elMat_4_2 = q_acc_2_4;
             const real_t elMat_4_3 = q_acc_3_4;
             const real_t elMat_4_4 = q_acc_4_4;
             const real_t elMat_4_5 = q_acc_4_5;
             const real_t elMat_5_0 = q_acc_0_5;
             const real_t elMat_5_1 = q_acc_1_5;
             const real_t elMat_5_2 = q_acc_2_5;
             const real_t elMat_5_3 = q_acc_3_5;
             const real_t elMat_5_4 = q_acc_4_5;
             const real_t elMat_5_5 = q_acc_5_5;
         
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
}
} // namespace operatorgeneration

} // namespace hyteg
