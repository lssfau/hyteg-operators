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



































#include "../P2ElementwiseKMassP1CoefficientParametricP2Map.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseKMassP1CoefficientParametricP2Map::toMatrixScaled_P2ElementwiseKMassP1CoefficientParametricP2Map_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_k, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t toMatrixScaling ) const
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
       {
          /* FaceType.GRAY */
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {0.0023240476916031672, 0.002324047691603162, 0.0040847196235691361, -0.0092961907664126427, -0.0092961907664126427, -0.03834881128946236, 0.0023240476916031563, 0.0040847196235691266, -0.0092961907664126219, -0.0092961907664126219, -0.03834881128946227, 0.0071792564599486505, -0.016338878494276499, -0.016338878494276499, -0.067401431812511889, 0.037184763065650467, 0.037184763065650474, 0.153395245157849, 0.037184763065650474, 0.153395245157849, 0.63278879027664414, 0.0055956096536291184, 0.0055956096536291296, -0.038720870194294474, -0.022382438614516519, -0.022382438614516529, -0.0025092796321270756, 0.0055956096536291418, -0.03872087019429455, -0.022382438614516567, -0.022382438614516574, -0.0025092796321270808, 0.26794324147164272, 0.1548834807771782, 0.15488348077717826, 0.01736387935026238, 0.089529754458066241, 0.089529754458066296, 0.010037118528508323, 0.089529754458066324, 0.010037118528508327, 0.0011252543801235511, 0.0023240476916031646, 0.0040847196235691344, 0.0023240476916031602, -0.0092961907664126375, -0.038348811289462333, -0.0092961907664126375, 0.0071792564599486505, 0.0040847196235691266, -0.016338878494276499, -0.067401431812511889, -0.016338878494276499, 0.0023240476916031563, -0.0092961907664126219, -0.03834881128946227, -0.0092961907664126219, 0.037184763065650467, 0.153395245157849, 0.037184763065650474, 0.63278879027664414, 0.153395245157849, 0.037184763065650474, 0.0055956096536291019, -0.038720870194294418, 0.0055956096536291218, -0.022382438614516487, -0.0025092796321270722, -0.022382438614516494, 0.26794324147164272, -0.03872087019429455, 0.1548834807771782, 0.01736387935026238, 0.15488348077717826, 0.0055956096536291418, -0.022382438614516567, -0.0025092796321270808, -0.022382438614516574, 0.089529754458066241, 0.010037118528508323, 0.089529754458066296, 0.0011252543801235511, 0.010037118528508327, 0.089529754458066324, 0.0071792564599487208, 0.0040847196235691474, 0.0040847196235691474, -0.067401431812512208, -0.01633887849427659, -0.01633887849427659, 0.0023240476916031563, 0.0023240476916031563, -0.038348811289462263, -0.0092961907664126254, -0.0092961907664126254, 0.0023240476916031563, -0.038348811289462263, -0.0092961907664126254, -0.0092961907664126254, 0.63278879027664403, 0.15339524515784905, 0.15339524515784905, 0.037184763065650502, 0.037184763065650502, 0.037184763065650502, 0.26794324147164295, -0.038720870194294571, -0.038720870194294571, 0.017363879350262401, 0.15488348077717826, 0.15488348077717826, 0.0055956096536291418, 0.0055956096536291418, -0.002509279632127083, -0.02238243861451656, -0.02238243861451656, 0.0055956096536291418, -0.002509279632127083, -0.02238243861451656, -0.02238243861451656, 0.0011252543801235529, 0.01003711852850833, 0.01003711852850833, 0.089529754458066227, 0.089529754458066227, 0.089529754458066227};
      
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
             const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_0 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_1 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_10 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_11 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_2 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_3 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_4 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_5 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_6 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_7 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_8 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_9 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
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
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_1 - 1.0;
                const real_t tmp_qloop_3 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                const real_t tmp_qloop_4 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                const real_t tmp_qloop_5 = micromesh_dof_6*tmp_qloop_4;
                const real_t tmp_qloop_6 = tmp_qloop_0 - 1.0;
                const real_t tmp_qloop_7 = micromesh_dof_0*tmp_qloop_4;
                const real_t tmp_qloop_8 = -tmp_qloop_1 - 8.0*_data_q_p_0[q] + 4.0;
                const real_t tmp_qloop_9 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q])*abs((micromesh_dof_1*tmp_qloop_6 + micromesh_dof_3*tmp_qloop_1 - micromesh_dof_4*tmp_qloop_1 + micromesh_dof_5*tmp_qloop_8 + tmp_qloop_7)*(micromesh_dof_10*tmp_qloop_3 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_2 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_5) - (-micromesh_dof_10*tmp_qloop_1 + micromesh_dof_11*tmp_qloop_8 + micromesh_dof_7*tmp_qloop_6 + micromesh_dof_9*tmp_qloop_1 + tmp_qloop_5)*(micromesh_dof_2*tmp_qloop_2 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_3 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_7))*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q];
                const real_t q_tmp_0_1 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 5];
                const real_t q_tmp_1_1 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 6];
                const real_t q_tmp_1_2 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 7];
                const real_t q_tmp_1_3 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 8];
                const real_t q_tmp_1_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 9];
                const real_t q_tmp_1_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 10];
                const real_t q_tmp_2_2 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 11];
                const real_t q_tmp_2_3 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 12];
                const real_t q_tmp_2_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 13];
                const real_t q_tmp_2_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 14];
                const real_t q_tmp_3_3 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 15];
                const real_t q_tmp_3_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 16];
                const real_t q_tmp_3_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 17];
                const real_t q_tmp_4_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 18];
                const real_t q_tmp_4_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 19];
                const real_t q_tmp_5_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_GRAY[21*q + 20];
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
             const real_t tmp_kernel_op_0 = q_acc_0_1*toMatrixScaling;
             const real_t tmp_kernel_op_1 = q_acc_0_2*toMatrixScaling;
             const real_t tmp_kernel_op_2 = q_acc_0_3*toMatrixScaling;
             const real_t tmp_kernel_op_3 = q_acc_0_4*toMatrixScaling;
             const real_t tmp_kernel_op_4 = q_acc_0_5*toMatrixScaling;
             const real_t tmp_kernel_op_5 = q_acc_1_2*toMatrixScaling;
             const real_t tmp_kernel_op_6 = q_acc_1_3*toMatrixScaling;
             const real_t tmp_kernel_op_7 = q_acc_1_4*toMatrixScaling;
             const real_t tmp_kernel_op_8 = q_acc_1_5*toMatrixScaling;
             const real_t tmp_kernel_op_9 = q_acc_2_3*toMatrixScaling;
             const real_t tmp_kernel_op_10 = q_acc_2_4*toMatrixScaling;
             const real_t tmp_kernel_op_11 = q_acc_2_5*toMatrixScaling;
             const real_t tmp_kernel_op_12 = q_acc_3_4*toMatrixScaling;
             const real_t tmp_kernel_op_13 = q_acc_3_5*toMatrixScaling;
             const real_t tmp_kernel_op_14 = q_acc_4_5*toMatrixScaling;
             const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
             const real_t elMat_0_1 = tmp_kernel_op_0;
             const real_t elMat_0_2 = tmp_kernel_op_1;
             const real_t elMat_0_3 = tmp_kernel_op_2;
             const real_t elMat_0_4 = tmp_kernel_op_3;
             const real_t elMat_0_5 = tmp_kernel_op_4;
             const real_t elMat_1_0 = tmp_kernel_op_0;
             const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
             const real_t elMat_1_2 = tmp_kernel_op_5;
             const real_t elMat_1_3 = tmp_kernel_op_6;
             const real_t elMat_1_4 = tmp_kernel_op_7;
             const real_t elMat_1_5 = tmp_kernel_op_8;
             const real_t elMat_2_0 = tmp_kernel_op_1;
             const real_t elMat_2_1 = tmp_kernel_op_5;
             const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
             const real_t elMat_2_3 = tmp_kernel_op_9;
             const real_t elMat_2_4 = tmp_kernel_op_10;
             const real_t elMat_2_5 = tmp_kernel_op_11;
             const real_t elMat_3_0 = tmp_kernel_op_2;
             const real_t elMat_3_1 = tmp_kernel_op_6;
             const real_t elMat_3_2 = tmp_kernel_op_9;
             const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
             const real_t elMat_3_4 = tmp_kernel_op_12;
             const real_t elMat_3_5 = tmp_kernel_op_13;
             const real_t elMat_4_0 = tmp_kernel_op_3;
             const real_t elMat_4_1 = tmp_kernel_op_7;
             const real_t elMat_4_2 = tmp_kernel_op_10;
             const real_t elMat_4_3 = tmp_kernel_op_12;
             const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
             const real_t elMat_4_5 = tmp_kernel_op_14;
             const real_t elMat_5_0 = tmp_kernel_op_4;
             const real_t elMat_5_1 = tmp_kernel_op_8;
             const real_t elMat_5_2 = tmp_kernel_op_11;
             const real_t elMat_5_3 = tmp_kernel_op_13;
             const real_t elMat_5_4 = tmp_kernel_op_14;
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
       {
          /* FaceType.BLUE */
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {0.0023240476916031672, 0.002324047691603162, 0.0040847196235691361, -0.0092961907664126427, -0.0092961907664126427, -0.03834881128946236, 0.0023240476916031563, 0.0040847196235691266, -0.0092961907664126219, -0.0092961907664126219, -0.03834881128946227, 0.0071792564599486505, -0.016338878494276499, -0.016338878494276499, -0.067401431812511889, 0.037184763065650467, 0.037184763065650474, 0.153395245157849, 0.037184763065650474, 0.153395245157849, 0.63278879027664414, 0.0055956096536291184, 0.0055956096536291296, -0.038720870194294474, -0.022382438614516519, -0.022382438614516529, -0.0025092796321270756, 0.0055956096536291418, -0.03872087019429455, -0.022382438614516567, -0.022382438614516574, -0.0025092796321270808, 0.26794324147164272, 0.1548834807771782, 0.15488348077717826, 0.01736387935026238, 0.089529754458066241, 0.089529754458066296, 0.010037118528508323, 0.089529754458066324, 0.010037118528508327, 0.0011252543801235511, 0.0023240476916031646, 0.0040847196235691344, 0.0023240476916031602, -0.0092961907664126375, -0.038348811289462333, -0.0092961907664126375, 0.0071792564599486505, 0.0040847196235691266, -0.016338878494276499, -0.067401431812511889, -0.016338878494276499, 0.0023240476916031563, -0.0092961907664126219, -0.03834881128946227, -0.0092961907664126219, 0.037184763065650467, 0.153395245157849, 0.037184763065650474, 0.63278879027664414, 0.153395245157849, 0.037184763065650474, 0.0055956096536291019, -0.038720870194294418, 0.0055956096536291218, -0.022382438614516487, -0.0025092796321270722, -0.022382438614516494, 0.26794324147164272, -0.03872087019429455, 0.1548834807771782, 0.01736387935026238, 0.15488348077717826, 0.0055956096536291418, -0.022382438614516567, -0.0025092796321270808, -0.022382438614516574, 0.089529754458066241, 0.010037118528508323, 0.089529754458066296, 0.0011252543801235511, 0.010037118528508327, 0.089529754458066324, 0.0071792564599487208, 0.0040847196235691474, 0.0040847196235691474, -0.067401431812512208, -0.01633887849427659, -0.01633887849427659, 0.0023240476916031563, 0.0023240476916031563, -0.038348811289462263, -0.0092961907664126254, -0.0092961907664126254, 0.0023240476916031563, -0.038348811289462263, -0.0092961907664126254, -0.0092961907664126254, 0.63278879027664403, 0.15339524515784905, 0.15339524515784905, 0.037184763065650502, 0.037184763065650502, 0.037184763065650502, 0.26794324147164295, -0.038720870194294571, -0.038720870194294571, 0.017363879350262401, 0.15488348077717826, 0.15488348077717826, 0.0055956096536291418, 0.0055956096536291418, -0.002509279632127083, -0.02238243861451656, -0.02238243861451656, 0.0055956096536291418, -0.002509279632127083, -0.02238243861451656, -0.02238243861451656, 0.0011252543801235529, 0.01003711852850833, 0.01003711852850833, 0.089529754458066227, 0.089529754458066227, 0.089529754458066227};
      
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
             const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t micromesh_dof_0 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_1 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_10 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t micromesh_dof_11 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_2 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t micromesh_dof_3 = _data_micromesh_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_4 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t micromesh_dof_5 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_6 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_7 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_8 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t micromesh_dof_9 = _data_micromesh_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_1 - 1.0;
                const real_t tmp_qloop_3 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                const real_t tmp_qloop_4 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                const real_t tmp_qloop_5 = micromesh_dof_6*tmp_qloop_4;
                const real_t tmp_qloop_6 = tmp_qloop_0 - 1.0;
                const real_t tmp_qloop_7 = micromesh_dof_0*tmp_qloop_4;
                const real_t tmp_qloop_8 = -tmp_qloop_1 - 8.0*_data_q_p_0[q] + 4.0;
                const real_t tmp_qloop_9 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q])*abs((micromesh_dof_1*tmp_qloop_6 + micromesh_dof_3*tmp_qloop_1 - micromesh_dof_4*tmp_qloop_1 + micromesh_dof_5*tmp_qloop_8 + tmp_qloop_7)*(micromesh_dof_10*tmp_qloop_3 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_2 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_5) - (-micromesh_dof_10*tmp_qloop_1 + micromesh_dof_11*tmp_qloop_8 + micromesh_dof_7*tmp_qloop_6 + micromesh_dof_9*tmp_qloop_1 + tmp_qloop_5)*(micromesh_dof_2*tmp_qloop_2 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_3 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_7))*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q];
                const real_t q_tmp_0_1 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 5];
                const real_t q_tmp_1_1 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 6];
                const real_t q_tmp_1_2 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 7];
                const real_t q_tmp_1_3 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 8];
                const real_t q_tmp_1_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 9];
                const real_t q_tmp_1_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 10];
                const real_t q_tmp_2_2 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 11];
                const real_t q_tmp_2_3 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 12];
                const real_t q_tmp_2_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 13];
                const real_t q_tmp_2_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 14];
                const real_t q_tmp_3_3 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 15];
                const real_t q_tmp_3_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 16];
                const real_t q_tmp_3_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 17];
                const real_t q_tmp_4_4 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 18];
                const real_t q_tmp_4_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 19];
                const real_t q_tmp_5_5 = tmp_qloop_9*_data_tabulated_and_untitled_0_0_BLUE[21*q + 20];
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
             const real_t tmp_kernel_op_0 = q_acc_0_1*toMatrixScaling;
             const real_t tmp_kernel_op_1 = q_acc_0_2*toMatrixScaling;
             const real_t tmp_kernel_op_2 = q_acc_0_3*toMatrixScaling;
             const real_t tmp_kernel_op_3 = q_acc_0_4*toMatrixScaling;
             const real_t tmp_kernel_op_4 = q_acc_0_5*toMatrixScaling;
             const real_t tmp_kernel_op_5 = q_acc_1_2*toMatrixScaling;
             const real_t tmp_kernel_op_6 = q_acc_1_3*toMatrixScaling;
             const real_t tmp_kernel_op_7 = q_acc_1_4*toMatrixScaling;
             const real_t tmp_kernel_op_8 = q_acc_1_5*toMatrixScaling;
             const real_t tmp_kernel_op_9 = q_acc_2_3*toMatrixScaling;
             const real_t tmp_kernel_op_10 = q_acc_2_4*toMatrixScaling;
             const real_t tmp_kernel_op_11 = q_acc_2_5*toMatrixScaling;
             const real_t tmp_kernel_op_12 = q_acc_3_4*toMatrixScaling;
             const real_t tmp_kernel_op_13 = q_acc_3_5*toMatrixScaling;
             const real_t tmp_kernel_op_14 = q_acc_4_5*toMatrixScaling;
             const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
             const real_t elMat_0_1 = tmp_kernel_op_0;
             const real_t elMat_0_2 = tmp_kernel_op_1;
             const real_t elMat_0_3 = tmp_kernel_op_2;
             const real_t elMat_0_4 = tmp_kernel_op_3;
             const real_t elMat_0_5 = tmp_kernel_op_4;
             const real_t elMat_1_0 = tmp_kernel_op_0;
             const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
             const real_t elMat_1_2 = tmp_kernel_op_5;
             const real_t elMat_1_3 = tmp_kernel_op_6;
             const real_t elMat_1_4 = tmp_kernel_op_7;
             const real_t elMat_1_5 = tmp_kernel_op_8;
             const real_t elMat_2_0 = tmp_kernel_op_1;
             const real_t elMat_2_1 = tmp_kernel_op_5;
             const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
             const real_t elMat_2_3 = tmp_kernel_op_9;
             const real_t elMat_2_4 = tmp_kernel_op_10;
             const real_t elMat_2_5 = tmp_kernel_op_11;
             const real_t elMat_3_0 = tmp_kernel_op_2;
             const real_t elMat_3_1 = tmp_kernel_op_6;
             const real_t elMat_3_2 = tmp_kernel_op_9;
             const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
             const real_t elMat_3_4 = tmp_kernel_op_12;
             const real_t elMat_3_5 = tmp_kernel_op_13;
             const real_t elMat_4_0 = tmp_kernel_op_3;
             const real_t elMat_4_1 = tmp_kernel_op_7;
             const real_t elMat_4_2 = tmp_kernel_op_10;
             const real_t elMat_4_3 = tmp_kernel_op_12;
             const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
             const real_t elMat_4_5 = tmp_kernel_op_14;
             const real_t elMat_5_0 = tmp_kernel_op_4;
             const real_t elMat_5_1 = tmp_kernel_op_8;
             const real_t elMat_5_2 = tmp_kernel_op_11;
             const real_t elMat_5_3 = tmp_kernel_op_13;
             const real_t elMat_5_4 = tmp_kernel_op_14;
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
}
} // namespace operatorgeneration

} // namespace hyteg
