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





























#include "../P2PlusBubbleElementwiseMass.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2PlusBubbleElementwiseMass::toMatrix_P2PlusBubbleElementwiseMass_macro_2D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, idx_t * RESTRICT  _data_src, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.00025771437964227723, 0.052397656566423402, 0.074275554650521658, 0.047488619588783712, 0.00025771437964227723, 0.052397656566423402, 0.074275554650521658, 0.047488619588783712, 0.045496761795224737, 0.10566414783403316};
   
       const real_t _data_q_p_0 [] = {-0.0087919971442063111, 0.064688806056010906, 0.076825716849082099, 0.29502511936941517, 1.2886799075734023, 0.78822920956686404, 0.40172877323475981, 0.64933214716985022, 0.085333161170310701, 0.35369054666996447};
   
       const real_t _data_q_p_1 [] = {-0.27988791042919603, 0.14708198437712505, 0.52144550991615801, 0.055642733460734617, -0.27988791042919603, 0.14708198437712505, 0.52144550991615801, 0.055642733460734617, 0.8293336776593786, 0.29261890666007107};
   
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
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_4_6 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_5_6 = 0.0;
             real_t q_acc_6_6 = 0.0;
             for (int64_t q = 0; q < 10; q += 1)
             {
                const real_t tmp_qloop_0 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                const real_t tmp_qloop_1 = 2.0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = -1.0 + 2.0*_data_q_p_0[q];
                const real_t tmp_qloop_3 = -tmp_qloop_1 - tmp_qloop_2;
                const real_t tmp_qloop_4 = abs_det_jac_affine_GRAY*_data_q_w[q];
                const real_t tmp_qloop_5 = tmp_qloop_4*_data_q_p_0[q];
                const real_t tmp_qloop_6 = tmp_qloop_0*tmp_qloop_3;
                const real_t tmp_qloop_7 = tmp_qloop_5*tmp_qloop_6;
                const real_t tmp_qloop_8 = tmp_qloop_1 - 1.0;
                const real_t tmp_qloop_9 = tmp_qloop_4*tmp_qloop_6*_data_q_p_1[q];
                const real_t tmp_qloop_10 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_11 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_12 = -tmp_qloop_10 - tmp_qloop_11 + 4.0;
                const real_t tmp_qloop_13 = -27.0*_data_q_p_0[q] - 27.0*_data_q_p_1[q] + 27.0;
                const real_t tmp_qloop_14 = tmp_qloop_5*_data_q_p_1[q];
                const real_t tmp_qloop_15 = tmp_qloop_4*(_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_16 = tmp_qloop_14*tmp_qloop_2;
                const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_2;
                const real_t tmp_qloop_18 = tmp_qloop_13*_data_q_p_1[q];
                const real_t tmp_qloop_19 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_20 = tmp_qloop_19*tmp_qloop_4;
                const real_t tmp_qloop_21 = tmp_qloop_20*tmp_qloop_8;
                const real_t tmp_qloop_22 = tmp_qloop_13*_data_q_p_0[q];
                const real_t tmp_qloop_23 = tmp_qloop_15*tmp_qloop_19;
                const real_t tmp_qloop_24 = tmp_qloop_12*tmp_qloop_20;
                const real_t tmp_qloop_25 = tmp_qloop_12*tmp_qloop_15;
                const real_t tmp_qloop_26 = (tmp_qloop_12*tmp_qloop_12);
                const real_t q_tmp_0_0 = (tmp_qloop_0*tmp_qloop_0)*(tmp_qloop_3*tmp_qloop_3)*tmp_qloop_4;
                const real_t q_tmp_0_1 = tmp_qloop_2*tmp_qloop_7;
                const real_t q_tmp_0_2 = tmp_qloop_8*tmp_qloop_9;
                const real_t q_tmp_0_3 = tmp_qloop_10*tmp_qloop_9;
                const real_t q_tmp_0_4 = tmp_qloop_12*tmp_qloop_9;
                const real_t q_tmp_0_5 = tmp_qloop_12*tmp_qloop_7;
                const real_t q_tmp_0_6 = tmp_qloop_13*tmp_qloop_14*tmp_qloop_6;
                const real_t q_tmp_1_1 = tmp_qloop_15*(tmp_qloop_2*tmp_qloop_2);
                const real_t q_tmp_1_2 = tmp_qloop_16*tmp_qloop_8;
                const real_t q_tmp_1_3 = tmp_qloop_11*tmp_qloop_17;
                const real_t q_tmp_1_4 = tmp_qloop_12*tmp_qloop_16;
                const real_t q_tmp_1_5 = tmp_qloop_12*tmp_qloop_17;
                const real_t q_tmp_1_6 = tmp_qloop_17*tmp_qloop_18;
                const real_t q_tmp_2_2 = tmp_qloop_20*(tmp_qloop_8*tmp_qloop_8);
                const real_t q_tmp_2_3 = tmp_qloop_10*tmp_qloop_21;
                const real_t q_tmp_2_4 = tmp_qloop_12*tmp_qloop_21;
                const real_t q_tmp_2_5 = tmp_qloop_12*tmp_qloop_14*tmp_qloop_8;
                const real_t q_tmp_2_6 = tmp_qloop_21*tmp_qloop_22;
                const real_t q_tmp_3_3 = tmp_qloop_23*16.0;
                const real_t q_tmp_3_4 = tmp_qloop_10*tmp_qloop_24;
                const real_t q_tmp_3_5 = tmp_qloop_11*tmp_qloop_25;
                const real_t q_tmp_3_6 = tmp_qloop_13*tmp_qloop_23*4.0;
                const real_t q_tmp_4_4 = tmp_qloop_20*tmp_qloop_26;
                const real_t q_tmp_4_5 = tmp_qloop_14*tmp_qloop_26;
                const real_t q_tmp_4_6 = tmp_qloop_22*tmp_qloop_24;
                const real_t q_tmp_5_5 = tmp_qloop_15*tmp_qloop_26;
                const real_t q_tmp_5_6 = tmp_qloop_18*tmp_qloop_25;
                const real_t q_tmp_6_6 = (tmp_qloop_13*tmp_qloop_13)*tmp_qloop_23;
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_4_6 = q_acc_4_6 + q_tmp_4_6;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_5_6 = q_acc_5_6 + q_tmp_5_6;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_0_6 = q_acc_0_6;
             const real_t elMat_1_0 = q_acc_0_1;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_1_6 = q_acc_1_6;
             const real_t elMat_2_0 = q_acc_0_2;
             const real_t elMat_2_1 = q_acc_1_2;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_2_6 = q_acc_2_6;
             const real_t elMat_3_0 = q_acc_0_3;
             const real_t elMat_3_1 = q_acc_1_3;
             const real_t elMat_3_2 = q_acc_2_3;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_3_6 = q_acc_3_6;
             const real_t elMat_4_0 = q_acc_0_4;
             const real_t elMat_4_1 = q_acc_1_4;
             const real_t elMat_4_2 = q_acc_2_4;
             const real_t elMat_4_3 = q_acc_3_4;
             const real_t elMat_4_4 = q_acc_4_4;
             const real_t elMat_4_5 = q_acc_4_5;
             const real_t elMat_4_6 = q_acc_4_6;
             const real_t elMat_5_0 = q_acc_0_5;
             const real_t elMat_5_1 = q_acc_1_5;
             const real_t elMat_5_2 = q_acc_2_5;
             const real_t elMat_5_3 = q_acc_3_5;
             const real_t elMat_5_4 = q_acc_4_5;
             const real_t elMat_5_5 = q_acc_5_5;
             const real_t elMat_5_6 = q_acc_5_6;
             const real_t elMat_6_0 = q_acc_0_6;
             const real_t elMat_6_1 = q_acc_1_6;
             const real_t elMat_6_2 = q_acc_2_6;
             const real_t elMat_6_3 = q_acc_3_6;
             const real_t elMat_6_4 = q_acc_4_6;
             const real_t elMat_6_5 = q_acc_5_6;
             const real_t elMat_6_6 = q_acc_6_6;
         
             std::vector< uint_t > _data_rowIdx( 7 );
             std::vector< uint_t > _data_colIdx( 7 );
             std::vector< real_t > _data_mat( 49 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[6] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[6] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_1_0));
             _data_mat[8] = ((real_t)(elMat_1_1));
             _data_mat[9] = ((real_t)(elMat_1_2));
             _data_mat[10] = ((real_t)(elMat_1_3));
             _data_mat[11] = ((real_t)(elMat_1_4));
             _data_mat[12] = ((real_t)(elMat_1_5));
             _data_mat[13] = ((real_t)(elMat_1_6));
             _data_mat[14] = ((real_t)(elMat_2_0));
             _data_mat[15] = ((real_t)(elMat_2_1));
             _data_mat[16] = ((real_t)(elMat_2_2));
             _data_mat[17] = ((real_t)(elMat_2_3));
             _data_mat[18] = ((real_t)(elMat_2_4));
             _data_mat[19] = ((real_t)(elMat_2_5));
             _data_mat[20] = ((real_t)(elMat_2_6));
             _data_mat[21] = ((real_t)(elMat_3_0));
             _data_mat[22] = ((real_t)(elMat_3_1));
             _data_mat[23] = ((real_t)(elMat_3_2));
             _data_mat[24] = ((real_t)(elMat_3_3));
             _data_mat[25] = ((real_t)(elMat_3_4));
             _data_mat[26] = ((real_t)(elMat_3_5));
             _data_mat[27] = ((real_t)(elMat_3_6));
             _data_mat[28] = ((real_t)(elMat_4_0));
             _data_mat[29] = ((real_t)(elMat_4_1));
             _data_mat[30] = ((real_t)(elMat_4_2));
             _data_mat[31] = ((real_t)(elMat_4_3));
             _data_mat[32] = ((real_t)(elMat_4_4));
             _data_mat[33] = ((real_t)(elMat_4_5));
             _data_mat[34] = ((real_t)(elMat_4_6));
             _data_mat[35] = ((real_t)(elMat_5_0));
             _data_mat[36] = ((real_t)(elMat_5_1));
             _data_mat[37] = ((real_t)(elMat_5_2));
             _data_mat[38] = ((real_t)(elMat_5_3));
             _data_mat[39] = ((real_t)(elMat_5_4));
             _data_mat[40] = ((real_t)(elMat_5_5));
             _data_mat[41] = ((real_t)(elMat_5_6));
             _data_mat[42] = ((real_t)(elMat_6_0));
             _data_mat[43] = ((real_t)(elMat_6_1));
             _data_mat[44] = ((real_t)(elMat_6_2));
             _data_mat[45] = ((real_t)(elMat_6_3));
             _data_mat[46] = ((real_t)(elMat_6_4));
             _data_mat[47] = ((real_t)(elMat_6_5));
             _data_mat[48] = ((real_t)(elMat_6_6));
         
         
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
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_3_4 = 0.0;
             real_t q_acc_3_5 = 0.0;
             real_t q_acc_3_6 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_4_5 = 0.0;
             real_t q_acc_4_6 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_5_6 = 0.0;
             real_t q_acc_6_6 = 0.0;
             for (int64_t q = 0; q < 10; q += 1)
             {
                const real_t tmp_qloop_0 = 1.0 - _data_q_p_0[q] - _data_q_p_1[q];
                const real_t tmp_qloop_1 = 2.0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = -1.0 + 2.0*_data_q_p_0[q];
                const real_t tmp_qloop_3 = -tmp_qloop_1 - tmp_qloop_2;
                const real_t tmp_qloop_4 = abs_det_jac_affine_BLUE*_data_q_w[q];
                const real_t tmp_qloop_5 = tmp_qloop_4*_data_q_p_0[q];
                const real_t tmp_qloop_6 = tmp_qloop_0*tmp_qloop_3;
                const real_t tmp_qloop_7 = tmp_qloop_5*tmp_qloop_6;
                const real_t tmp_qloop_8 = tmp_qloop_1 - 1.0;
                const real_t tmp_qloop_9 = tmp_qloop_4*tmp_qloop_6*_data_q_p_1[q];
                const real_t tmp_qloop_10 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_11 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_12 = -tmp_qloop_10 - tmp_qloop_11 + 4.0;
                const real_t tmp_qloop_13 = -27.0*_data_q_p_0[q] - 27.0*_data_q_p_1[q] + 27.0;
                const real_t tmp_qloop_14 = tmp_qloop_5*_data_q_p_1[q];
                const real_t tmp_qloop_15 = tmp_qloop_4*(_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_16 = tmp_qloop_14*tmp_qloop_2;
                const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_2;
                const real_t tmp_qloop_18 = tmp_qloop_13*_data_q_p_1[q];
                const real_t tmp_qloop_19 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_20 = tmp_qloop_19*tmp_qloop_4;
                const real_t tmp_qloop_21 = tmp_qloop_20*tmp_qloop_8;
                const real_t tmp_qloop_22 = tmp_qloop_13*_data_q_p_0[q];
                const real_t tmp_qloop_23 = tmp_qloop_15*tmp_qloop_19;
                const real_t tmp_qloop_24 = tmp_qloop_12*tmp_qloop_20;
                const real_t tmp_qloop_25 = tmp_qloop_12*tmp_qloop_15;
                const real_t tmp_qloop_26 = (tmp_qloop_12*tmp_qloop_12);
                const real_t q_tmp_0_0 = (tmp_qloop_0*tmp_qloop_0)*(tmp_qloop_3*tmp_qloop_3)*tmp_qloop_4;
                const real_t q_tmp_0_1 = tmp_qloop_2*tmp_qloop_7;
                const real_t q_tmp_0_2 = tmp_qloop_8*tmp_qloop_9;
                const real_t q_tmp_0_3 = tmp_qloop_10*tmp_qloop_9;
                const real_t q_tmp_0_4 = tmp_qloop_12*tmp_qloop_9;
                const real_t q_tmp_0_5 = tmp_qloop_12*tmp_qloop_7;
                const real_t q_tmp_0_6 = tmp_qloop_13*tmp_qloop_14*tmp_qloop_6;
                const real_t q_tmp_1_1 = tmp_qloop_15*(tmp_qloop_2*tmp_qloop_2);
                const real_t q_tmp_1_2 = tmp_qloop_16*tmp_qloop_8;
                const real_t q_tmp_1_3 = tmp_qloop_11*tmp_qloop_17;
                const real_t q_tmp_1_4 = tmp_qloop_12*tmp_qloop_16;
                const real_t q_tmp_1_5 = tmp_qloop_12*tmp_qloop_17;
                const real_t q_tmp_1_6 = tmp_qloop_17*tmp_qloop_18;
                const real_t q_tmp_2_2 = tmp_qloop_20*(tmp_qloop_8*tmp_qloop_8);
                const real_t q_tmp_2_3 = tmp_qloop_10*tmp_qloop_21;
                const real_t q_tmp_2_4 = tmp_qloop_12*tmp_qloop_21;
                const real_t q_tmp_2_5 = tmp_qloop_12*tmp_qloop_14*tmp_qloop_8;
                const real_t q_tmp_2_6 = tmp_qloop_21*tmp_qloop_22;
                const real_t q_tmp_3_3 = tmp_qloop_23*16.0;
                const real_t q_tmp_3_4 = tmp_qloop_10*tmp_qloop_24;
                const real_t q_tmp_3_5 = tmp_qloop_11*tmp_qloop_25;
                const real_t q_tmp_3_6 = tmp_qloop_13*tmp_qloop_23*4.0;
                const real_t q_tmp_4_4 = tmp_qloop_20*tmp_qloop_26;
                const real_t q_tmp_4_5 = tmp_qloop_14*tmp_qloop_26;
                const real_t q_tmp_4_6 = tmp_qloop_22*tmp_qloop_24;
                const real_t q_tmp_5_5 = tmp_qloop_15*tmp_qloop_26;
                const real_t q_tmp_5_6 = tmp_qloop_18*tmp_qloop_25;
                const real_t q_tmp_6_6 = (tmp_qloop_13*tmp_qloop_13)*tmp_qloop_23;
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_3_6 = q_acc_3_6 + q_tmp_3_6;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_4_6 = q_acc_4_6 + q_tmp_4_6;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_5_6 = q_acc_5_6 + q_tmp_5_6;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_0_6 = q_acc_0_6;
             const real_t elMat_1_0 = q_acc_0_1;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_1_6 = q_acc_1_6;
             const real_t elMat_2_0 = q_acc_0_2;
             const real_t elMat_2_1 = q_acc_1_2;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
             const real_t elMat_2_6 = q_acc_2_6;
             const real_t elMat_3_0 = q_acc_0_3;
             const real_t elMat_3_1 = q_acc_1_3;
             const real_t elMat_3_2 = q_acc_2_3;
             const real_t elMat_3_3 = q_acc_3_3;
             const real_t elMat_3_4 = q_acc_3_4;
             const real_t elMat_3_5 = q_acc_3_5;
             const real_t elMat_3_6 = q_acc_3_6;
             const real_t elMat_4_0 = q_acc_0_4;
             const real_t elMat_4_1 = q_acc_1_4;
             const real_t elMat_4_2 = q_acc_2_4;
             const real_t elMat_4_3 = q_acc_3_4;
             const real_t elMat_4_4 = q_acc_4_4;
             const real_t elMat_4_5 = q_acc_4_5;
             const real_t elMat_4_6 = q_acc_4_6;
             const real_t elMat_5_0 = q_acc_0_5;
             const real_t elMat_5_1 = q_acc_1_5;
             const real_t elMat_5_2 = q_acc_2_5;
             const real_t elMat_5_3 = q_acc_3_5;
             const real_t elMat_5_4 = q_acc_4_5;
             const real_t elMat_5_5 = q_acc_5_5;
             const real_t elMat_5_6 = q_acc_5_6;
             const real_t elMat_6_0 = q_acc_0_6;
             const real_t elMat_6_1 = q_acc_1_6;
             const real_t elMat_6_2 = q_acc_2_6;
             const real_t elMat_6_3 = q_acc_3_6;
             const real_t elMat_6_4 = q_acc_4_6;
             const real_t elMat_6_5 = q_acc_5_6;
             const real_t elMat_6_6 = q_acc_6_6;
         
             std::vector< uint_t > _data_rowIdx( 7 );
             std::vector< uint_t > _data_colIdx( 7 );
             std::vector< real_t > _data_mat( 49 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[6] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[6] = ((uint64_t)(_data_src[ctr_0 + ctr_1*micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_1_0));
             _data_mat[8] = ((real_t)(elMat_1_1));
             _data_mat[9] = ((real_t)(elMat_1_2));
             _data_mat[10] = ((real_t)(elMat_1_3));
             _data_mat[11] = ((real_t)(elMat_1_4));
             _data_mat[12] = ((real_t)(elMat_1_5));
             _data_mat[13] = ((real_t)(elMat_1_6));
             _data_mat[14] = ((real_t)(elMat_2_0));
             _data_mat[15] = ((real_t)(elMat_2_1));
             _data_mat[16] = ((real_t)(elMat_2_2));
             _data_mat[17] = ((real_t)(elMat_2_3));
             _data_mat[18] = ((real_t)(elMat_2_4));
             _data_mat[19] = ((real_t)(elMat_2_5));
             _data_mat[20] = ((real_t)(elMat_2_6));
             _data_mat[21] = ((real_t)(elMat_3_0));
             _data_mat[22] = ((real_t)(elMat_3_1));
             _data_mat[23] = ((real_t)(elMat_3_2));
             _data_mat[24] = ((real_t)(elMat_3_3));
             _data_mat[25] = ((real_t)(elMat_3_4));
             _data_mat[26] = ((real_t)(elMat_3_5));
             _data_mat[27] = ((real_t)(elMat_3_6));
             _data_mat[28] = ((real_t)(elMat_4_0));
             _data_mat[29] = ((real_t)(elMat_4_1));
             _data_mat[30] = ((real_t)(elMat_4_2));
             _data_mat[31] = ((real_t)(elMat_4_3));
             _data_mat[32] = ((real_t)(elMat_4_4));
             _data_mat[33] = ((real_t)(elMat_4_5));
             _data_mat[34] = ((real_t)(elMat_4_6));
             _data_mat[35] = ((real_t)(elMat_5_0));
             _data_mat[36] = ((real_t)(elMat_5_1));
             _data_mat[37] = ((real_t)(elMat_5_2));
             _data_mat[38] = ((real_t)(elMat_5_3));
             _data_mat[39] = ((real_t)(elMat_5_4));
             _data_mat[40] = ((real_t)(elMat_5_5));
             _data_mat[41] = ((real_t)(elMat_5_6));
             _data_mat[42] = ((real_t)(elMat_6_0));
             _data_mat[43] = ((real_t)(elMat_6_1));
             _data_mat[44] = ((real_t)(elMat_6_2));
             _data_mat[45] = ((real_t)(elMat_6_3));
             _data_mat[46] = ((real_t)(elMat_6_4));
             _data_mat[47] = ((real_t)(elMat_6_5));
             _data_mat[48] = ((real_t)(elMat_6_6));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
