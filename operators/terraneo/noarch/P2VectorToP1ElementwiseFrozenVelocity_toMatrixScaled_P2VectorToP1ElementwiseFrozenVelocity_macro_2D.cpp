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































#include "../P2VectorToP1ElementwiseFrozenVelocity.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorToP1ElementwiseFrozenVelocity::toMatrixScaled_P2VectorToP1ElementwiseFrozenVelocity_macro_2D( idx_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_rhoEdge, real_t * RESTRICT  _data_rhoVertex, idx_t * RESTRICT  _data_src_edge_0, idx_t * RESTRICT  _data_src_edge_1, idx_t * RESTRICT  _data_src_vertex_0, idx_t * RESTRICT  _data_src_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t toMatrixScaling ) const
{
    {
       const real_t _data_q_w [] = {-0.28125, 0.26041666666666669, 0.26041666666666669, 0.26041666666666669};
   
       const real_t _data_q_p_0 [] = {0.33333333333333331, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001};
   
       const real_t _data_q_p_1 [] = {0.33333333333333331, 0.59999999999999998, 0.20000000000000001, 0.20000000000000001};
   
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
             const real_t rho_dof_0 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_3 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t rho_dof_4 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t rho_dof_5 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_0_10 = 0.0;
             real_t q_acc_0_11 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_1_10 = 0.0;
             real_t q_acc_1_11 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_2_10 = 0.0;
             real_t q_acc_2_11 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_3 = tmp_qloop_2*2.0;
                const real_t tmp_qloop_4 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = tmp_qloop_1 + tmp_qloop_3 + tmp_qloop_5 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                const real_t tmp_qloop_7 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_8 = rho_dof_0*(tmp_qloop_0 + tmp_qloop_7 - 3.0);
                const real_t tmp_qloop_9 = rho_dof_1*(tmp_qloop_0 - 1.0) + rho_dof_3*tmp_qloop_7 - rho_dof_4*tmp_qloop_7 + rho_dof_5*(-tmp_qloop_7 - 8.0*_data_q_p_0[q] + 4.0) + tmp_qloop_8;
                const real_t tmp_qloop_10 = rho_dof_2*(tmp_qloop_7 - 1.0) + rho_dof_3*tmp_qloop_0 + rho_dof_4*(-tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0) - rho_dof_5*tmp_qloop_0 + tmp_qloop_8;
                const real_t tmp_qloop_11 = jac_affine_inv_0_0_GRAY*tmp_qloop_9 + jac_affine_inv_1_0_GRAY*tmp_qloop_10;
                const real_t tmp_qloop_12 = tmp_qloop_3 - _data_q_p_0[q];
                const real_t tmp_qloop_13 = tmp_qloop_5 - _data_q_p_1[q];
                const real_t tmp_qloop_14 = -tmp_qloop_1 + tmp_qloop_4*-4.0 + tmp_qloop_7;
                const real_t tmp_qloop_15 = tmp_qloop_2*4.0;
                const real_t tmp_qloop_16 = tmp_qloop_0 - tmp_qloop_1 - tmp_qloop_15;
                const real_t tmp_qloop_17 = abs_det_jac_affine_GRAY*1.0 / (rho_dof_0*tmp_qloop_6 + rho_dof_1*tmp_qloop_12 + rho_dof_2*tmp_qloop_13 + rho_dof_3*tmp_qloop_1 + rho_dof_4*tmp_qloop_14 + rho_dof_5*tmp_qloop_16)*_data_q_w[q];
                const real_t tmp_qloop_18 = tmp_qloop_17*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]);
                const real_t tmp_qloop_19 = tmp_qloop_11*tmp_qloop_18;
                const real_t tmp_qloop_20 = jac_affine_inv_0_1_GRAY*tmp_qloop_9 + jac_affine_inv_1_1_GRAY*tmp_qloop_10;
                const real_t tmp_qloop_21 = tmp_qloop_18*tmp_qloop_20;
                const real_t tmp_qloop_22 = tmp_qloop_17*_data_q_p_0[q];
                const real_t tmp_qloop_23 = tmp_qloop_11*tmp_qloop_22;
                const real_t tmp_qloop_24 = tmp_qloop_17*_data_q_p_1[q];
                const real_t tmp_qloop_25 = tmp_qloop_11*tmp_qloop_24;
                const real_t tmp_qloop_26 = tmp_qloop_20*tmp_qloop_22;
                const real_t tmp_qloop_27 = tmp_qloop_20*tmp_qloop_24;
                const real_t tmp_qloop_28 = tmp_qloop_0*tmp_qloop_17*tmp_qloop_4;
                const real_t q_tmp_0_0 = tmp_qloop_19*tmp_qloop_6;
                const real_t q_tmp_0_1 = tmp_qloop_12*tmp_qloop_19;
                const real_t q_tmp_0_2 = tmp_qloop_13*tmp_qloop_19;
                const real_t q_tmp_0_3 = tmp_qloop_1*tmp_qloop_19;
                const real_t q_tmp_0_4 = tmp_qloop_14*tmp_qloop_19;
                const real_t q_tmp_0_5 = tmp_qloop_16*tmp_qloop_19;
                const real_t q_tmp_0_6 = tmp_qloop_21*tmp_qloop_6;
                const real_t q_tmp_0_7 = tmp_qloop_12*tmp_qloop_21;
                const real_t q_tmp_0_8 = tmp_qloop_13*tmp_qloop_21;
                const real_t q_tmp_0_9 = tmp_qloop_1*tmp_qloop_21;
                const real_t q_tmp_0_10 = tmp_qloop_14*tmp_qloop_21;
                const real_t q_tmp_0_11 = tmp_qloop_16*tmp_qloop_21;
                const real_t q_tmp_1_0 = tmp_qloop_23*tmp_qloop_6;
                const real_t q_tmp_1_1 = tmp_qloop_12*tmp_qloop_23;
                const real_t q_tmp_1_2 = tmp_qloop_13*tmp_qloop_23;
                const real_t q_tmp_1_3 = tmp_qloop_15*tmp_qloop_25;
                const real_t q_tmp_1_4 = tmp_qloop_14*tmp_qloop_23;
                const real_t q_tmp_1_5 = tmp_qloop_16*tmp_qloop_23;
                const real_t q_tmp_1_6 = tmp_qloop_26*tmp_qloop_6;
                const real_t q_tmp_1_7 = tmp_qloop_12*tmp_qloop_26;
                const real_t q_tmp_1_8 = tmp_qloop_13*tmp_qloop_26;
                const real_t q_tmp_1_9 = tmp_qloop_15*tmp_qloop_27;
                const real_t q_tmp_1_10 = tmp_qloop_14*tmp_qloop_26;
                const real_t q_tmp_1_11 = tmp_qloop_16*tmp_qloop_26;
                const real_t q_tmp_2_0 = tmp_qloop_25*tmp_qloop_6;
                const real_t q_tmp_2_1 = tmp_qloop_12*tmp_qloop_25;
                const real_t q_tmp_2_2 = tmp_qloop_13*tmp_qloop_25;
                const real_t q_tmp_2_3 = tmp_qloop_11*tmp_qloop_28;
                const real_t q_tmp_2_4 = tmp_qloop_14*tmp_qloop_25;
                const real_t q_tmp_2_5 = tmp_qloop_16*tmp_qloop_25;
                const real_t q_tmp_2_6 = tmp_qloop_27*tmp_qloop_6;
                const real_t q_tmp_2_7 = tmp_qloop_12*tmp_qloop_27;
                const real_t q_tmp_2_8 = tmp_qloop_13*tmp_qloop_27;
                const real_t q_tmp_2_9 = tmp_qloop_20*tmp_qloop_28;
                const real_t q_tmp_2_10 = tmp_qloop_14*tmp_qloop_27;
                const real_t q_tmp_2_11 = tmp_qloop_16*tmp_qloop_27;
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_0_10 = q_acc_0_10 + q_tmp_0_10;
                q_acc_0_11 = q_acc_0_11 + q_tmp_0_11;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_1_10 = q_acc_1_10 + q_tmp_1_10;
                q_acc_1_11 = q_acc_1_11 + q_tmp_1_11;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_2_10 = q_acc_2_10 + q_tmp_2_10;
                q_acc_2_11 = q_acc_2_11 + q_tmp_2_11;
             }
             const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
             const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
             const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
             const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
             const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
             const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
             const real_t elMat_0_6 = q_acc_0_6*toMatrixScaling;
             const real_t elMat_0_7 = q_acc_0_7*toMatrixScaling;
             const real_t elMat_0_8 = q_acc_0_8*toMatrixScaling;
             const real_t elMat_0_9 = q_acc_0_9*toMatrixScaling;
             const real_t elMat_0_10 = q_acc_0_10*toMatrixScaling;
             const real_t elMat_0_11 = q_acc_0_11*toMatrixScaling;
             const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
             const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
             const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
             const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
             const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
             const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
             const real_t elMat_1_6 = q_acc_1_6*toMatrixScaling;
             const real_t elMat_1_7 = q_acc_1_7*toMatrixScaling;
             const real_t elMat_1_8 = q_acc_1_8*toMatrixScaling;
             const real_t elMat_1_9 = q_acc_1_9*toMatrixScaling;
             const real_t elMat_1_10 = q_acc_1_10*toMatrixScaling;
             const real_t elMat_1_11 = q_acc_1_11*toMatrixScaling;
             const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
             const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
             const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
             const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
             const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
             const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
             const real_t elMat_2_6 = q_acc_2_6*toMatrixScaling;
             const real_t elMat_2_7 = q_acc_2_7*toMatrixScaling;
             const real_t elMat_2_8 = q_acc_2_8*toMatrixScaling;
             const real_t elMat_2_9 = q_acc_2_9*toMatrixScaling;
             const real_t elMat_2_10 = q_acc_2_10*toMatrixScaling;
             const real_t elMat_2_11 = q_acc_2_11*toMatrixScaling;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 12 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[1] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[3] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[5] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[6] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[7] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[8] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[9] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[10] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[11] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_0_10));
             _data_mat[11] = ((real_t)(elMat_0_11));
             _data_mat[12] = ((real_t)(elMat_1_0));
             _data_mat[13] = ((real_t)(elMat_1_1));
             _data_mat[14] = ((real_t)(elMat_1_2));
             _data_mat[15] = ((real_t)(elMat_1_3));
             _data_mat[16] = ((real_t)(elMat_1_4));
             _data_mat[17] = ((real_t)(elMat_1_5));
             _data_mat[18] = ((real_t)(elMat_1_6));
             _data_mat[19] = ((real_t)(elMat_1_7));
             _data_mat[20] = ((real_t)(elMat_1_8));
             _data_mat[21] = ((real_t)(elMat_1_9));
             _data_mat[22] = ((real_t)(elMat_1_10));
             _data_mat[23] = ((real_t)(elMat_1_11));
             _data_mat[24] = ((real_t)(elMat_2_0));
             _data_mat[25] = ((real_t)(elMat_2_1));
             _data_mat[26] = ((real_t)(elMat_2_2));
             _data_mat[27] = ((real_t)(elMat_2_3));
             _data_mat[28] = ((real_t)(elMat_2_4));
             _data_mat[29] = ((real_t)(elMat_2_5));
             _data_mat[30] = ((real_t)(elMat_2_6));
             _data_mat[31] = ((real_t)(elMat_2_7));
             _data_mat[32] = ((real_t)(elMat_2_8));
             _data_mat[33] = ((real_t)(elMat_2_9));
             _data_mat[34] = ((real_t)(elMat_2_10));
             _data_mat[35] = ((real_t)(elMat_2_11));
         
         
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
       const real_t tmp_coords_jac_5_BLUE = jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE;
       const real_t tmp_coords_jac_6_BLUE = 1.0 / (tmp_coords_jac_5_BLUE);
       const real_t jac_affine_inv_0_0_BLUE = jac_affine_1_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t abs_det_jac_affine_BLUE = abs(tmp_coords_jac_5_BLUE);
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
             const real_t rho_dof_0 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_1 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_2 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t rho_dof_3 = _data_rhoEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_4 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t rho_dof_5 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_0_4 = 0.0;
             real_t q_acc_0_5 = 0.0;
             real_t q_acc_0_6 = 0.0;
             real_t q_acc_0_7 = 0.0;
             real_t q_acc_0_8 = 0.0;
             real_t q_acc_0_9 = 0.0;
             real_t q_acc_0_10 = 0.0;
             real_t q_acc_0_11 = 0.0;
             real_t q_acc_1_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_1_4 = 0.0;
             real_t q_acc_1_5 = 0.0;
             real_t q_acc_1_6 = 0.0;
             real_t q_acc_1_7 = 0.0;
             real_t q_acc_1_8 = 0.0;
             real_t q_acc_1_9 = 0.0;
             real_t q_acc_1_10 = 0.0;
             real_t q_acc_1_11 = 0.0;
             real_t q_acc_2_0 = 0.0;
             real_t q_acc_2_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_2_4 = 0.0;
             real_t q_acc_2_5 = 0.0;
             real_t q_acc_2_6 = 0.0;
             real_t q_acc_2_7 = 0.0;
             real_t q_acc_2_8 = 0.0;
             real_t q_acc_2_9 = 0.0;
             real_t q_acc_2_10 = 0.0;
             real_t q_acc_2_11 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_3 = tmp_qloop_2*2.0;
                const real_t tmp_qloop_4 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_5 = tmp_qloop_4*2.0;
                const real_t tmp_qloop_6 = tmp_qloop_1 + tmp_qloop_3 + tmp_qloop_5 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                const real_t tmp_qloop_7 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_8 = rho_dof_0*(tmp_qloop_0 + tmp_qloop_7 - 3.0);
                const real_t tmp_qloop_9 = rho_dof_1*(tmp_qloop_0 - 1.0) + rho_dof_3*tmp_qloop_7 - rho_dof_4*tmp_qloop_7 + rho_dof_5*(-tmp_qloop_7 - 8.0*_data_q_p_0[q] + 4.0) + tmp_qloop_8;
                const real_t tmp_qloop_10 = rho_dof_2*(tmp_qloop_7 - 1.0) + rho_dof_3*tmp_qloop_0 + rho_dof_4*(-tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0) - rho_dof_5*tmp_qloop_0 + tmp_qloop_8;
                const real_t tmp_qloop_11 = jac_affine_inv_0_0_BLUE*tmp_qloop_9 + jac_affine_inv_1_0_BLUE*tmp_qloop_10;
                const real_t tmp_qloop_12 = tmp_qloop_3 - _data_q_p_0[q];
                const real_t tmp_qloop_13 = tmp_qloop_5 - _data_q_p_1[q];
                const real_t tmp_qloop_14 = -tmp_qloop_1 + tmp_qloop_4*-4.0 + tmp_qloop_7;
                const real_t tmp_qloop_15 = tmp_qloop_2*4.0;
                const real_t tmp_qloop_16 = tmp_qloop_0 - tmp_qloop_1 - tmp_qloop_15;
                const real_t tmp_qloop_17 = abs_det_jac_affine_BLUE*1.0 / (rho_dof_0*tmp_qloop_6 + rho_dof_1*tmp_qloop_12 + rho_dof_2*tmp_qloop_13 + rho_dof_3*tmp_qloop_1 + rho_dof_4*tmp_qloop_14 + rho_dof_5*tmp_qloop_16)*_data_q_w[q];
                const real_t tmp_qloop_18 = tmp_qloop_17*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]);
                const real_t tmp_qloop_19 = tmp_qloop_11*tmp_qloop_18;
                const real_t tmp_qloop_20 = jac_affine_inv_0_1_BLUE*tmp_qloop_9 + jac_affine_inv_1_1_BLUE*tmp_qloop_10;
                const real_t tmp_qloop_21 = tmp_qloop_18*tmp_qloop_20;
                const real_t tmp_qloop_22 = tmp_qloop_17*_data_q_p_0[q];
                const real_t tmp_qloop_23 = tmp_qloop_11*tmp_qloop_22;
                const real_t tmp_qloop_24 = tmp_qloop_17*_data_q_p_1[q];
                const real_t tmp_qloop_25 = tmp_qloop_11*tmp_qloop_24;
                const real_t tmp_qloop_26 = tmp_qloop_20*tmp_qloop_22;
                const real_t tmp_qloop_27 = tmp_qloop_20*tmp_qloop_24;
                const real_t tmp_qloop_28 = tmp_qloop_0*tmp_qloop_17*tmp_qloop_4;
                const real_t q_tmp_0_0 = tmp_qloop_19*tmp_qloop_6;
                const real_t q_tmp_0_1 = tmp_qloop_12*tmp_qloop_19;
                const real_t q_tmp_0_2 = tmp_qloop_13*tmp_qloop_19;
                const real_t q_tmp_0_3 = tmp_qloop_1*tmp_qloop_19;
                const real_t q_tmp_0_4 = tmp_qloop_14*tmp_qloop_19;
                const real_t q_tmp_0_5 = tmp_qloop_16*tmp_qloop_19;
                const real_t q_tmp_0_6 = tmp_qloop_21*tmp_qloop_6;
                const real_t q_tmp_0_7 = tmp_qloop_12*tmp_qloop_21;
                const real_t q_tmp_0_8 = tmp_qloop_13*tmp_qloop_21;
                const real_t q_tmp_0_9 = tmp_qloop_1*tmp_qloop_21;
                const real_t q_tmp_0_10 = tmp_qloop_14*tmp_qloop_21;
                const real_t q_tmp_0_11 = tmp_qloop_16*tmp_qloop_21;
                const real_t q_tmp_1_0 = tmp_qloop_23*tmp_qloop_6;
                const real_t q_tmp_1_1 = tmp_qloop_12*tmp_qloop_23;
                const real_t q_tmp_1_2 = tmp_qloop_13*tmp_qloop_23;
                const real_t q_tmp_1_3 = tmp_qloop_15*tmp_qloop_25;
                const real_t q_tmp_1_4 = tmp_qloop_14*tmp_qloop_23;
                const real_t q_tmp_1_5 = tmp_qloop_16*tmp_qloop_23;
                const real_t q_tmp_1_6 = tmp_qloop_26*tmp_qloop_6;
                const real_t q_tmp_1_7 = tmp_qloop_12*tmp_qloop_26;
                const real_t q_tmp_1_8 = tmp_qloop_13*tmp_qloop_26;
                const real_t q_tmp_1_9 = tmp_qloop_15*tmp_qloop_27;
                const real_t q_tmp_1_10 = tmp_qloop_14*tmp_qloop_26;
                const real_t q_tmp_1_11 = tmp_qloop_16*tmp_qloop_26;
                const real_t q_tmp_2_0 = tmp_qloop_25*tmp_qloop_6;
                const real_t q_tmp_2_1 = tmp_qloop_12*tmp_qloop_25;
                const real_t q_tmp_2_2 = tmp_qloop_13*tmp_qloop_25;
                const real_t q_tmp_2_3 = tmp_qloop_11*tmp_qloop_28;
                const real_t q_tmp_2_4 = tmp_qloop_14*tmp_qloop_25;
                const real_t q_tmp_2_5 = tmp_qloop_16*tmp_qloop_25;
                const real_t q_tmp_2_6 = tmp_qloop_27*tmp_qloop_6;
                const real_t q_tmp_2_7 = tmp_qloop_12*tmp_qloop_27;
                const real_t q_tmp_2_8 = tmp_qloop_13*tmp_qloop_27;
                const real_t q_tmp_2_9 = tmp_qloop_20*tmp_qloop_28;
                const real_t q_tmp_2_10 = tmp_qloop_14*tmp_qloop_27;
                const real_t q_tmp_2_11 = tmp_qloop_16*tmp_qloop_27;
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_0_6 = q_acc_0_6 + q_tmp_0_6;
                q_acc_0_7 = q_acc_0_7 + q_tmp_0_7;
                q_acc_0_8 = q_acc_0_8 + q_tmp_0_8;
                q_acc_0_9 = q_acc_0_9 + q_tmp_0_9;
                q_acc_0_10 = q_acc_0_10 + q_tmp_0_10;
                q_acc_0_11 = q_acc_0_11 + q_tmp_0_11;
                q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_1_6 = q_acc_1_6 + q_tmp_1_6;
                q_acc_1_7 = q_acc_1_7 + q_tmp_1_7;
                q_acc_1_8 = q_acc_1_8 + q_tmp_1_8;
                q_acc_1_9 = q_acc_1_9 + q_tmp_1_9;
                q_acc_1_10 = q_acc_1_10 + q_tmp_1_10;
                q_acc_1_11 = q_acc_1_11 + q_tmp_1_11;
                q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_2_6 = q_acc_2_6 + q_tmp_2_6;
                q_acc_2_7 = q_acc_2_7 + q_tmp_2_7;
                q_acc_2_8 = q_acc_2_8 + q_tmp_2_8;
                q_acc_2_9 = q_acc_2_9 + q_tmp_2_9;
                q_acc_2_10 = q_acc_2_10 + q_tmp_2_10;
                q_acc_2_11 = q_acc_2_11 + q_tmp_2_11;
             }
             const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
             const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
             const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
             const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
             const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
             const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
             const real_t elMat_0_6 = q_acc_0_6*toMatrixScaling;
             const real_t elMat_0_7 = q_acc_0_7*toMatrixScaling;
             const real_t elMat_0_8 = q_acc_0_8*toMatrixScaling;
             const real_t elMat_0_9 = q_acc_0_9*toMatrixScaling;
             const real_t elMat_0_10 = q_acc_0_10*toMatrixScaling;
             const real_t elMat_0_11 = q_acc_0_11*toMatrixScaling;
             const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
             const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
             const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
             const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
             const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
             const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
             const real_t elMat_1_6 = q_acc_1_6*toMatrixScaling;
             const real_t elMat_1_7 = q_acc_1_7*toMatrixScaling;
             const real_t elMat_1_8 = q_acc_1_8*toMatrixScaling;
             const real_t elMat_1_9 = q_acc_1_9*toMatrixScaling;
             const real_t elMat_1_10 = q_acc_1_10*toMatrixScaling;
             const real_t elMat_1_11 = q_acc_1_11*toMatrixScaling;
             const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
             const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
             const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
             const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
             const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
             const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
             const real_t elMat_2_6 = q_acc_2_6*toMatrixScaling;
             const real_t elMat_2_7 = q_acc_2_7*toMatrixScaling;
             const real_t elMat_2_8 = q_acc_2_8*toMatrixScaling;
             const real_t elMat_2_9 = q_acc_2_9*toMatrixScaling;
             const real_t elMat_2_10 = q_acc_2_10*toMatrixScaling;
             const real_t elMat_2_11 = q_acc_2_11*toMatrixScaling;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 12 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[2] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_src_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[6] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[7] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[8] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[9] = ((uint64_t)(_data_src_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[10] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_colIdx[11] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_0_6));
             _data_mat[7] = ((real_t)(elMat_0_7));
             _data_mat[8] = ((real_t)(elMat_0_8));
             _data_mat[9] = ((real_t)(elMat_0_9));
             _data_mat[10] = ((real_t)(elMat_0_10));
             _data_mat[11] = ((real_t)(elMat_0_11));
             _data_mat[12] = ((real_t)(elMat_1_0));
             _data_mat[13] = ((real_t)(elMat_1_1));
             _data_mat[14] = ((real_t)(elMat_1_2));
             _data_mat[15] = ((real_t)(elMat_1_3));
             _data_mat[16] = ((real_t)(elMat_1_4));
             _data_mat[17] = ((real_t)(elMat_1_5));
             _data_mat[18] = ((real_t)(elMat_1_6));
             _data_mat[19] = ((real_t)(elMat_1_7));
             _data_mat[20] = ((real_t)(elMat_1_8));
             _data_mat[21] = ((real_t)(elMat_1_9));
             _data_mat[22] = ((real_t)(elMat_1_10));
             _data_mat[23] = ((real_t)(elMat_1_11));
             _data_mat[24] = ((real_t)(elMat_2_0));
             _data_mat[25] = ((real_t)(elMat_2_1));
             _data_mat[26] = ((real_t)(elMat_2_2));
             _data_mat[27] = ((real_t)(elMat_2_3));
             _data_mat[28] = ((real_t)(elMat_2_4));
             _data_mat[29] = ((real_t)(elMat_2_5));
             _data_mat[30] = ((real_t)(elMat_2_6));
             _data_mat[31] = ((real_t)(elMat_2_7));
             _data_mat[32] = ((real_t)(elMat_2_8));
             _data_mat[33] = ((real_t)(elMat_2_9));
             _data_mat[34] = ((real_t)(elMat_2_10));
             _data_mat[35] = ((real_t)(elMat_2_11));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
