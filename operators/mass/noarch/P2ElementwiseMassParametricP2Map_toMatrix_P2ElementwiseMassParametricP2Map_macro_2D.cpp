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

































#include "../P2ElementwiseMassParametricP2Map.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseMassParametricP2Map::toMatrix_P2ElementwiseMassParametricP2Map_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_3 = tmp_qloop_2*2.0;
                const real_t tmp_qloop_4 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = tmp_qloop_1 + tmp_qloop_3 + tmp_qloop_5 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                const real_t tmp_qloop_7 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_8 = tmp_qloop_7 - 1.0;
                const real_t tmp_qloop_9 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                const real_t tmp_qloop_10 = tmp_qloop_0 + tmp_qloop_7 - 3.0;
                const real_t tmp_qloop_11 = micromesh_dof_6*tmp_qloop_10;
                const real_t tmp_qloop_12 = tmp_qloop_0 - 1.0;
                const real_t tmp_qloop_13 = micromesh_dof_0*tmp_qloop_10;
                const real_t tmp_qloop_14 = -tmp_qloop_7 - 8.0*_data_q_p_0[q] + 4.0;
                const real_t tmp_qloop_15 = abs((micromesh_dof_1*tmp_qloop_12 + micromesh_dof_3*tmp_qloop_7 - micromesh_dof_4*tmp_qloop_7 + micromesh_dof_5*tmp_qloop_14 + tmp_qloop_13)*(micromesh_dof_10*tmp_qloop_9 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_8 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_11) - (-micromesh_dof_10*tmp_qloop_7 + micromesh_dof_11*tmp_qloop_14 + micromesh_dof_7*tmp_qloop_12 + micromesh_dof_9*tmp_qloop_7 + tmp_qloop_11)*(micromesh_dof_2*tmp_qloop_8 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_9 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_13))*_data_q_w[q];
                const real_t tmp_qloop_16 = tmp_qloop_3 - _data_q_p_0[q];
                const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_6;
                const real_t tmp_qloop_18 = tmp_qloop_5 - _data_q_p_1[q];
                const real_t tmp_qloop_19 = -tmp_qloop_1 + tmp_qloop_4*-4.0 + tmp_qloop_7;
                const real_t tmp_qloop_20 = tmp_qloop_0 - tmp_qloop_1 + tmp_qloop_2*-4.0;
                const real_t tmp_qloop_21 = tmp_qloop_15*tmp_qloop_16;
                const real_t tmp_qloop_22 = tmp_qloop_15*tmp_qloop_18;
                const real_t tmp_qloop_23 = tmp_qloop_15*tmp_qloop_19;
                const real_t q_tmp_0_0 = tmp_qloop_15*(tmp_qloop_6*tmp_qloop_6);
                const real_t q_tmp_0_1 = tmp_qloop_16*tmp_qloop_17;
                const real_t q_tmp_0_2 = tmp_qloop_17*tmp_qloop_18;
                const real_t q_tmp_0_3 = tmp_qloop_1*tmp_qloop_17;
                const real_t q_tmp_0_4 = tmp_qloop_17*tmp_qloop_19;
                const real_t q_tmp_0_5 = tmp_qloop_17*tmp_qloop_20;
                const real_t q_tmp_1_1 = tmp_qloop_15*(tmp_qloop_16*tmp_qloop_16);
                const real_t q_tmp_1_2 = tmp_qloop_18*tmp_qloop_21;
                const real_t q_tmp_1_3 = tmp_qloop_1*tmp_qloop_21;
                const real_t q_tmp_1_4 = tmp_qloop_19*tmp_qloop_21;
                const real_t q_tmp_1_5 = tmp_qloop_20*tmp_qloop_21;
                const real_t q_tmp_2_2 = tmp_qloop_15*(tmp_qloop_18*tmp_qloop_18);
                const real_t q_tmp_2_3 = tmp_qloop_1*tmp_qloop_22;
                const real_t q_tmp_2_4 = tmp_qloop_19*tmp_qloop_22;
                const real_t q_tmp_2_5 = tmp_qloop_20*tmp_qloop_22;
                const real_t q_tmp_3_3 = tmp_qloop_15*tmp_qloop_2*tmp_qloop_4*16.0;
                const real_t q_tmp_3_4 = tmp_qloop_1*tmp_qloop_23;
                const real_t q_tmp_3_5 = tmp_qloop_1*tmp_qloop_15*tmp_qloop_20;
                const real_t q_tmp_4_4 = tmp_qloop_15*(tmp_qloop_19*tmp_qloop_19);
                const real_t q_tmp_4_5 = tmp_qloop_20*tmp_qloop_23;
                const real_t q_tmp_5_5 = tmp_qloop_15*(tmp_qloop_20*tmp_qloop_20);
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
       {
          /* FaceType.BLUE */
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
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_3 = tmp_qloop_2*2.0;
                const real_t tmp_qloop_4 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = tmp_qloop_1 + tmp_qloop_3 + tmp_qloop_5 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                const real_t tmp_qloop_7 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_8 = tmp_qloop_7 - 1.0;
                const real_t tmp_qloop_9 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                const real_t tmp_qloop_10 = tmp_qloop_0 + tmp_qloop_7 - 3.0;
                const real_t tmp_qloop_11 = micromesh_dof_6*tmp_qloop_10;
                const real_t tmp_qloop_12 = tmp_qloop_0 - 1.0;
                const real_t tmp_qloop_13 = micromesh_dof_0*tmp_qloop_10;
                const real_t tmp_qloop_14 = -tmp_qloop_7 - 8.0*_data_q_p_0[q] + 4.0;
                const real_t tmp_qloop_15 = abs((micromesh_dof_1*tmp_qloop_12 + micromesh_dof_3*tmp_qloop_7 - micromesh_dof_4*tmp_qloop_7 + micromesh_dof_5*tmp_qloop_14 + tmp_qloop_13)*(micromesh_dof_10*tmp_qloop_9 - micromesh_dof_11*tmp_qloop_0 + micromesh_dof_8*tmp_qloop_8 + micromesh_dof_9*tmp_qloop_0 + tmp_qloop_11) - (-micromesh_dof_10*tmp_qloop_7 + micromesh_dof_11*tmp_qloop_14 + micromesh_dof_7*tmp_qloop_12 + micromesh_dof_9*tmp_qloop_7 + tmp_qloop_11)*(micromesh_dof_2*tmp_qloop_8 + micromesh_dof_3*tmp_qloop_0 + micromesh_dof_4*tmp_qloop_9 - micromesh_dof_5*tmp_qloop_0 + tmp_qloop_13))*_data_q_w[q];
                const real_t tmp_qloop_16 = tmp_qloop_3 - _data_q_p_0[q];
                const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_6;
                const real_t tmp_qloop_18 = tmp_qloop_5 - _data_q_p_1[q];
                const real_t tmp_qloop_19 = -tmp_qloop_1 + tmp_qloop_4*-4.0 + tmp_qloop_7;
                const real_t tmp_qloop_20 = tmp_qloop_0 - tmp_qloop_1 + tmp_qloop_2*-4.0;
                const real_t tmp_qloop_21 = tmp_qloop_15*tmp_qloop_16;
                const real_t tmp_qloop_22 = tmp_qloop_15*tmp_qloop_18;
                const real_t tmp_qloop_23 = tmp_qloop_15*tmp_qloop_19;
                const real_t q_tmp_0_0 = tmp_qloop_15*(tmp_qloop_6*tmp_qloop_6);
                const real_t q_tmp_0_1 = tmp_qloop_16*tmp_qloop_17;
                const real_t q_tmp_0_2 = tmp_qloop_17*tmp_qloop_18;
                const real_t q_tmp_0_3 = tmp_qloop_1*tmp_qloop_17;
                const real_t q_tmp_0_4 = tmp_qloop_17*tmp_qloop_19;
                const real_t q_tmp_0_5 = tmp_qloop_17*tmp_qloop_20;
                const real_t q_tmp_1_1 = tmp_qloop_15*(tmp_qloop_16*tmp_qloop_16);
                const real_t q_tmp_1_2 = tmp_qloop_18*tmp_qloop_21;
                const real_t q_tmp_1_3 = tmp_qloop_1*tmp_qloop_21;
                const real_t q_tmp_1_4 = tmp_qloop_19*tmp_qloop_21;
                const real_t q_tmp_1_5 = tmp_qloop_20*tmp_qloop_21;
                const real_t q_tmp_2_2 = tmp_qloop_15*(tmp_qloop_18*tmp_qloop_18);
                const real_t q_tmp_2_3 = tmp_qloop_1*tmp_qloop_22;
                const real_t q_tmp_2_4 = tmp_qloop_19*tmp_qloop_22;
                const real_t q_tmp_2_5 = tmp_qloop_20*tmp_qloop_22;
                const real_t q_tmp_3_3 = tmp_qloop_15*tmp_qloop_2*tmp_qloop_4*16.0;
                const real_t q_tmp_3_4 = tmp_qloop_1*tmp_qloop_23;
                const real_t q_tmp_3_5 = tmp_qloop_1*tmp_qloop_15*tmp_qloop_20;
                const real_t q_tmp_4_4 = tmp_qloop_15*(tmp_qloop_19*tmp_qloop_19);
                const real_t q_tmp_4_5 = tmp_qloop_20*tmp_qloop_23;
                const real_t q_tmp_5_5 = tmp_qloop_15*(tmp_qloop_20*tmp_qloop_20);
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
