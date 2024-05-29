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

























#include "../P2ElementwiseDivKGrad.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDivKGrad::apply_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_kEdge, real_t * RESTRICT  _data_kVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
   
       const real_t _data_q_p_0 [] = {0.16666666666666666, 0.66666666666666663, 0.16666666666666666};
   
       const real_t _data_q_p_1 [] = {0.66666666666666663, 0.16666666666666666, 0.16666666666666666};
   
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
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                const real_t tmp_qloop_3 = jac_affine_inv_0_0_GRAY*tmp_qloop_2 + jac_affine_inv_1_0_GRAY*tmp_qloop_2;
                const real_t tmp_qloop_4 = jac_affine_inv_0_1_GRAY*tmp_qloop_2 + jac_affine_inv_1_1_GRAY*tmp_qloop_2;
                const real_t tmp_qloop_5 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_6 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                const real_t tmp_qloop_8 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                const real_t tmp_qloop_10 = abs_det_jac_affine_GRAY*(k_dof_0*(tmp_qloop_5 + tmp_qloop_7 + tmp_qloop_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_qloop_7 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_9 - _data_q_p_1[q]) + k_dof_3*tmp_qloop_5 + k_dof_4*(tmp_qloop_1 - tmp_qloop_5 + tmp_qloop_8*-4.0) + k_dof_5*(tmp_qloop_0 - tmp_qloop_5 + tmp_qloop_6*-4.0))*_data_q_w[q];
                const real_t tmp_qloop_11 = tmp_qloop_0 - 1.0;
                const real_t tmp_qloop_12 = jac_affine_inv_0_0_GRAY*tmp_qloop_11;
                const real_t tmp_qloop_13 = jac_affine_inv_0_1_GRAY*tmp_qloop_11;
                const real_t tmp_qloop_14 = tmp_qloop_1 - 1.0;
                const real_t tmp_qloop_15 = jac_affine_inv_1_0_GRAY*tmp_qloop_14;
                const real_t tmp_qloop_16 = jac_affine_inv_1_1_GRAY*tmp_qloop_14;
                const real_t tmp_qloop_17 = jac_affine_inv_1_0_GRAY*tmp_qloop_0;
                const real_t tmp_qloop_18 = jac_affine_inv_0_0_GRAY*tmp_qloop_1;
                const real_t tmp_qloop_19 = tmp_qloop_17 + tmp_qloop_18;
                const real_t tmp_qloop_20 = jac_affine_inv_1_1_GRAY*tmp_qloop_0;
                const real_t tmp_qloop_21 = jac_affine_inv_0_1_GRAY*tmp_qloop_1;
                const real_t tmp_qloop_22 = tmp_qloop_20 + tmp_qloop_21;
                const real_t tmp_qloop_23 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                const real_t tmp_qloop_24 = jac_affine_inv_1_0_GRAY*tmp_qloop_23 - tmp_qloop_18;
                const real_t tmp_qloop_25 = jac_affine_inv_1_1_GRAY*tmp_qloop_23 - tmp_qloop_21;
                const real_t tmp_qloop_26 = -tmp_qloop_1 - 8.0*_data_q_p_0[q] + 4.0;
                const real_t tmp_qloop_27 = jac_affine_inv_0_0_GRAY*tmp_qloop_26 - tmp_qloop_17;
                const real_t tmp_qloop_28 = jac_affine_inv_0_1_GRAY*tmp_qloop_26 - tmp_qloop_20;
                const real_t tmp_qloop_29 = (tmp_qloop_11*tmp_qloop_11);
                const real_t tmp_qloop_30 = (tmp_qloop_14*tmp_qloop_14);
                const real_t q_tmp_0_0 = tmp_qloop_10*((tmp_qloop_3*tmp_qloop_3) + (tmp_qloop_4*tmp_qloop_4));
                const real_t q_tmp_0_1 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_3 + tmp_qloop_13*tmp_qloop_4);
                const real_t q_tmp_0_2 = tmp_qloop_10*(tmp_qloop_15*tmp_qloop_3 + tmp_qloop_16*tmp_qloop_4);
                const real_t q_tmp_0_3 = tmp_qloop_10*(tmp_qloop_19*tmp_qloop_3 + tmp_qloop_22*tmp_qloop_4);
                const real_t q_tmp_0_4 = tmp_qloop_10*(tmp_qloop_24*tmp_qloop_3 + tmp_qloop_25*tmp_qloop_4);
                const real_t q_tmp_0_5 = tmp_qloop_10*(tmp_qloop_27*tmp_qloop_3 + tmp_qloop_28*tmp_qloop_4);
                const real_t q_tmp_1_1 = tmp_qloop_10*((jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY)*tmp_qloop_29 + (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY)*tmp_qloop_29);
                const real_t q_tmp_1_2 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_15 + tmp_qloop_13*tmp_qloop_16);
                const real_t q_tmp_1_3 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_19 + tmp_qloop_13*tmp_qloop_22);
                const real_t q_tmp_1_4 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_24 + tmp_qloop_13*tmp_qloop_25);
                const real_t q_tmp_1_5 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_27 + tmp_qloop_13*tmp_qloop_28);
                const real_t q_tmp_2_2 = tmp_qloop_10*((jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY)*tmp_qloop_30 + (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY)*tmp_qloop_30);
                const real_t q_tmp_2_3 = tmp_qloop_10*(tmp_qloop_15*tmp_qloop_19 + tmp_qloop_16*tmp_qloop_22);
                const real_t q_tmp_2_4 = tmp_qloop_10*(tmp_qloop_15*tmp_qloop_24 + tmp_qloop_16*tmp_qloop_25);
                const real_t q_tmp_2_5 = tmp_qloop_10*(tmp_qloop_15*tmp_qloop_27 + tmp_qloop_16*tmp_qloop_28);
                const real_t q_tmp_3_3 = tmp_qloop_10*((tmp_qloop_19*tmp_qloop_19) + (tmp_qloop_22*tmp_qloop_22));
                const real_t q_tmp_3_4 = tmp_qloop_10*(tmp_qloop_19*tmp_qloop_24 + tmp_qloop_22*tmp_qloop_25);
                const real_t q_tmp_3_5 = tmp_qloop_10*(tmp_qloop_19*tmp_qloop_27 + tmp_qloop_22*tmp_qloop_28);
                const real_t q_tmp_4_4 = tmp_qloop_10*((tmp_qloop_24*tmp_qloop_24) + (tmp_qloop_25*tmp_qloop_25));
                const real_t q_tmp_4_5 = tmp_qloop_10*(tmp_qloop_24*tmp_qloop_27 + tmp_qloop_25*tmp_qloop_28);
                const real_t q_tmp_5_5 = tmp_qloop_10*((tmp_qloop_27*tmp_qloop_27) + (tmp_qloop_28*tmp_qloop_28));
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
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q];
                const real_t tmp_qloop_1 = 4.0*_data_q_p_1[q];
                const real_t tmp_qloop_2 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                const real_t tmp_qloop_3 = jac_affine_inv_0_0_BLUE*tmp_qloop_2 + jac_affine_inv_1_0_BLUE*tmp_qloop_2;
                const real_t tmp_qloop_4 = jac_affine_inv_0_1_BLUE*tmp_qloop_2 + jac_affine_inv_1_1_BLUE*tmp_qloop_2;
                const real_t tmp_qloop_5 = tmp_qloop_0*_data_q_p_1[q];
                const real_t tmp_qloop_6 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_7 = tmp_qloop_6*2.0;
                const real_t tmp_qloop_8 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_9 = tmp_qloop_8*2.0;
                const real_t tmp_qloop_10 = abs_det_jac_affine_BLUE*(k_dof_0*(tmp_qloop_5 + tmp_qloop_7 + tmp_qloop_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_qloop_7 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_9 - _data_q_p_1[q]) + k_dof_3*tmp_qloop_5 + k_dof_4*(tmp_qloop_1 - tmp_qloop_5 + tmp_qloop_8*-4.0) + k_dof_5*(tmp_qloop_0 - tmp_qloop_5 + tmp_qloop_6*-4.0))*_data_q_w[q];
                const real_t tmp_qloop_11 = tmp_qloop_0 - 1.0;
                const real_t tmp_qloop_12 = jac_affine_inv_0_0_BLUE*tmp_qloop_11;
                const real_t tmp_qloop_13 = jac_affine_inv_0_1_BLUE*tmp_qloop_11;
                const real_t tmp_qloop_14 = tmp_qloop_1 - 1.0;
                const real_t tmp_qloop_15 = jac_affine_inv_1_0_BLUE*tmp_qloop_14;
                const real_t tmp_qloop_16 = jac_affine_inv_1_1_BLUE*tmp_qloop_14;
                const real_t tmp_qloop_17 = jac_affine_inv_1_0_BLUE*tmp_qloop_0;
                const real_t tmp_qloop_18 = jac_affine_inv_0_0_BLUE*tmp_qloop_1;
                const real_t tmp_qloop_19 = tmp_qloop_17 + tmp_qloop_18;
                const real_t tmp_qloop_20 = jac_affine_inv_1_1_BLUE*tmp_qloop_0;
                const real_t tmp_qloop_21 = jac_affine_inv_0_1_BLUE*tmp_qloop_1;
                const real_t tmp_qloop_22 = tmp_qloop_20 + tmp_qloop_21;
                const real_t tmp_qloop_23 = -tmp_qloop_0 - 8.0*_data_q_p_1[q] + 4.0;
                const real_t tmp_qloop_24 = jac_affine_inv_1_0_BLUE*tmp_qloop_23 - tmp_qloop_18;
                const real_t tmp_qloop_25 = jac_affine_inv_1_1_BLUE*tmp_qloop_23 - tmp_qloop_21;
                const real_t tmp_qloop_26 = -tmp_qloop_1 - 8.0*_data_q_p_0[q] + 4.0;
                const real_t tmp_qloop_27 = jac_affine_inv_0_0_BLUE*tmp_qloop_26 - tmp_qloop_17;
                const real_t tmp_qloop_28 = jac_affine_inv_0_1_BLUE*tmp_qloop_26 - tmp_qloop_20;
                const real_t tmp_qloop_29 = (tmp_qloop_11*tmp_qloop_11);
                const real_t tmp_qloop_30 = (tmp_qloop_14*tmp_qloop_14);
                const real_t q_tmp_0_0 = tmp_qloop_10*((tmp_qloop_3*tmp_qloop_3) + (tmp_qloop_4*tmp_qloop_4));
                const real_t q_tmp_0_1 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_3 + tmp_qloop_13*tmp_qloop_4);
                const real_t q_tmp_0_2 = tmp_qloop_10*(tmp_qloop_15*tmp_qloop_3 + tmp_qloop_16*tmp_qloop_4);
                const real_t q_tmp_0_3 = tmp_qloop_10*(tmp_qloop_19*tmp_qloop_3 + tmp_qloop_22*tmp_qloop_4);
                const real_t q_tmp_0_4 = tmp_qloop_10*(tmp_qloop_24*tmp_qloop_3 + tmp_qloop_25*tmp_qloop_4);
                const real_t q_tmp_0_5 = tmp_qloop_10*(tmp_qloop_27*tmp_qloop_3 + tmp_qloop_28*tmp_qloop_4);
                const real_t q_tmp_1_1 = tmp_qloop_10*((jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE)*tmp_qloop_29 + (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE)*tmp_qloop_29);
                const real_t q_tmp_1_2 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_15 + tmp_qloop_13*tmp_qloop_16);
                const real_t q_tmp_1_3 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_19 + tmp_qloop_13*tmp_qloop_22);
                const real_t q_tmp_1_4 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_24 + tmp_qloop_13*tmp_qloop_25);
                const real_t q_tmp_1_5 = tmp_qloop_10*(tmp_qloop_12*tmp_qloop_27 + tmp_qloop_13*tmp_qloop_28);
                const real_t q_tmp_2_2 = tmp_qloop_10*((jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE)*tmp_qloop_30 + (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE)*tmp_qloop_30);
                const real_t q_tmp_2_3 = tmp_qloop_10*(tmp_qloop_15*tmp_qloop_19 + tmp_qloop_16*tmp_qloop_22);
                const real_t q_tmp_2_4 = tmp_qloop_10*(tmp_qloop_15*tmp_qloop_24 + tmp_qloop_16*tmp_qloop_25);
                const real_t q_tmp_2_5 = tmp_qloop_10*(tmp_qloop_15*tmp_qloop_27 + tmp_qloop_16*tmp_qloop_28);
                const real_t q_tmp_3_3 = tmp_qloop_10*((tmp_qloop_19*tmp_qloop_19) + (tmp_qloop_22*tmp_qloop_22));
                const real_t q_tmp_3_4 = tmp_qloop_10*(tmp_qloop_19*tmp_qloop_24 + tmp_qloop_22*tmp_qloop_25);
                const real_t q_tmp_3_5 = tmp_qloop_10*(tmp_qloop_19*tmp_qloop_27 + tmp_qloop_22*tmp_qloop_28);
                const real_t q_tmp_4_4 = tmp_qloop_10*((tmp_qloop_24*tmp_qloop_24) + (tmp_qloop_25*tmp_qloop_25));
                const real_t q_tmp_4_5 = tmp_qloop_10*(tmp_qloop_24*tmp_qloop_27 + tmp_qloop_25*tmp_qloop_28);
                const real_t q_tmp_5_5 = tmp_qloop_10*((tmp_qloop_27*tmp_qloop_27) + (tmp_qloop_28*tmp_qloop_28));
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
