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
* The entire file was generated with the HyTeG form generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/



























#include "../P1ElementwiseKMassAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseKMassAnnulusMap::toMatrix_macro_2D( idx_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_k, idx_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t tmp_qloop_0 = rayVertex_1 - thrVertex_1;
       const real_t tmp_qloop_6 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_7 = (radRayVertex - radRefVertex)*1.0 / (tmp_qloop_0*(rayVertex_0 - refVertex_0) - tmp_qloop_6*(rayVertex_1 - refVertex_1));
       {
          /* FaceType.GRAY */
          const real_t _data_phi_psi_jac_affine_det_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*0.19887005655022641)), ((real_t)(abs_det_jac_affine_GRAY*0.19887005655022641)), ((real_t)(abs_det_jac_affine_GRAY*0.04820837781551205)), ((real_t)(abs_det_jac_affine_GRAY*0.19887005655022641)), ((real_t)(abs_det_jac_affine_GRAY*0.04820837781551205)), ((real_t)(abs_det_jac_affine_GRAY*0.01168626253704612)), ((real_t)(abs_det_jac_affine_GRAY*0.0083862028807871174)), ((real_t)(abs_det_jac_affine_GRAY*0.0083862028807871157)), ((real_t)(abs_det_jac_affine_GRAY*0.074803807748196505)), ((real_t)(abs_det_jac_affine_GRAY*0.0083862028807871122)), ((real_t)(abs_det_jac_affine_GRAY*0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.6672399574840655)), ((real_t)(abs_det_jac_affine_GRAY*0.19887005655022641)), ((real_t)(abs_det_jac_affine_GRAY*0.04820837781551205)), ((real_t)(abs_det_jac_affine_GRAY*0.19887005655022641)), ((real_t)(abs_det_jac_affine_GRAY*0.01168626253704612)), ((real_t)(abs_det_jac_affine_GRAY*0.04820837781551205)), ((real_t)(abs_det_jac_affine_GRAY*0.19887005655022641)), ((real_t)(abs_det_jac_affine_GRAY*0.0083862028807871226)), ((real_t)(abs_det_jac_affine_GRAY*0.074803807748196532)), ((real_t)(abs_det_jac_affine_GRAY*0.0083862028807871174)), ((real_t)(abs_det_jac_affine_GRAY*0.6672399574840655)), ((real_t)(abs_det_jac_affine_GRAY*0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.0083862028807871122)), ((real_t)(abs_det_jac_affine_GRAY*0.01168626253704612)), ((real_t)(abs_det_jac_affine_GRAY*0.04820837781551205)), ((real_t)(abs_det_jac_affine_GRAY*0.04820837781551205)), ((real_t)(abs_det_jac_affine_GRAY*0.19887005655022641)), ((real_t)(abs_det_jac_affine_GRAY*0.19887005655022641)), ((real_t)(abs_det_jac_affine_GRAY*0.19887005655022641)), ((real_t)(abs_det_jac_affine_GRAY*0.6672399574840655)), ((real_t)(abs_det_jac_affine_GRAY*0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.074803807748196491)), ((real_t)(abs_det_jac_affine_GRAY*0.0083862028807871122)), ((real_t)(abs_det_jac_affine_GRAY*0.0083862028807871122)), ((real_t)(abs_det_jac_affine_GRAY*0.0083862028807871122))};
      
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
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_2_2 = 0.0;
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_1 = -p_affine_0_0 + (p_affine_0_0 - p_affine_1_0)*_data_q_p_0[q] + (p_affine_0_0 - p_affine_2_0)*_data_q_p_1[q];
                const real_t tmp_qloop_2 = (tmp_qloop_1*tmp_qloop_1);
                const real_t tmp_qloop_3 = -p_affine_0_1 + (p_affine_0_1 - p_affine_1_1)*_data_q_p_0[q] + (p_affine_0_1 - p_affine_2_1)*_data_q_p_1[q];
                const real_t tmp_qloop_4 = (tmp_qloop_3*tmp_qloop_3);
                const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_4;
                const real_t tmp_qloop_8 = pow(tmp_qloop_5, -0.50000000000000000)*tmp_qloop_7*1.0;
                const real_t tmp_qloop_9 = tmp_qloop_1*tmp_qloop_8;
                const real_t tmp_qloop_10 = -tmp_qloop_0*(rayVertex_0 + tmp_qloop_1) + tmp_qloop_6*(rayVertex_1 + tmp_qloop_3);
                const real_t tmp_qloop_11 = pow(tmp_qloop_5, -1.5000000000000000)*1.0;
                const real_t tmp_qloop_12 = tmp_qloop_11*(radRayVertex + tmp_qloop_10*tmp_qloop_7);
                const real_t tmp_qloop_13 = tmp_qloop_3*tmp_qloop_8;
                const real_t tmp_qloop_14 = tmp_qloop_11*(radRayVertex + tmp_qloop_10*tmp_qloop_7);
                const real_t tmp_qloop_15 = tmp_qloop_1*tmp_qloop_3;
                const real_t tmp_qloop_16 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q])*abs((tmp_qloop_0*tmp_qloop_13 + tmp_qloop_12*tmp_qloop_15)*(tmp_qloop_14*tmp_qloop_15 - tmp_qloop_6*tmp_qloop_9) + (tmp_qloop_0*tmp_qloop_9 - tmp_qloop_12*tmp_qloop_4)*(tmp_qloop_13*tmp_qloop_6 + tmp_qloop_14*tmp_qloop_2))*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_GRAY[6*q];
                const real_t q_tmp_0_1 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 2];
                const real_t q_tmp_1_1 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 3];
                const real_t q_tmp_1_2 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 4];
                const real_t q_tmp_2_2 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_GRAY[6*q + 5];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_1_0 = q_acc_0_1;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_2_0 = q_acc_0_2;
             const real_t elMat_2_1 = q_acc_1_2;
             const real_t elMat_2_2 = q_acc_2_2;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 3 );
             std::vector< real_t > _data_mat( 9 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_1_0));
             _data_mat[4] = ((real_t)(elMat_1_1));
             _data_mat[5] = ((real_t)(elMat_1_2));
             _data_mat[6] = ((real_t)(elMat_2_0));
             _data_mat[7] = ((real_t)(elMat_2_1));
             _data_mat[8] = ((real_t)(elMat_2_2));
         
         
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
          const real_t _data_phi_psi_jac_affine_det_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*0.19887005655022641)), ((real_t)(abs_det_jac_affine_BLUE*0.19887005655022641)), ((real_t)(abs_det_jac_affine_BLUE*0.04820837781551205)), ((real_t)(abs_det_jac_affine_BLUE*0.19887005655022641)), ((real_t)(abs_det_jac_affine_BLUE*0.04820837781551205)), ((real_t)(abs_det_jac_affine_BLUE*0.01168626253704612)), ((real_t)(abs_det_jac_affine_BLUE*0.0083862028807871174)), ((real_t)(abs_det_jac_affine_BLUE*0.0083862028807871157)), ((real_t)(abs_det_jac_affine_BLUE*0.074803807748196505)), ((real_t)(abs_det_jac_affine_BLUE*0.0083862028807871122)), ((real_t)(abs_det_jac_affine_BLUE*0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.6672399574840655)), ((real_t)(abs_det_jac_affine_BLUE*0.19887005655022641)), ((real_t)(abs_det_jac_affine_BLUE*0.04820837781551205)), ((real_t)(abs_det_jac_affine_BLUE*0.19887005655022641)), ((real_t)(abs_det_jac_affine_BLUE*0.01168626253704612)), ((real_t)(abs_det_jac_affine_BLUE*0.04820837781551205)), ((real_t)(abs_det_jac_affine_BLUE*0.19887005655022641)), ((real_t)(abs_det_jac_affine_BLUE*0.0083862028807871226)), ((real_t)(abs_det_jac_affine_BLUE*0.074803807748196532)), ((real_t)(abs_det_jac_affine_BLUE*0.0083862028807871174)), ((real_t)(abs_det_jac_affine_BLUE*0.6672399574840655)), ((real_t)(abs_det_jac_affine_BLUE*0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.0083862028807871122)), ((real_t)(abs_det_jac_affine_BLUE*0.01168626253704612)), ((real_t)(abs_det_jac_affine_BLUE*0.04820837781551205)), ((real_t)(abs_det_jac_affine_BLUE*0.04820837781551205)), ((real_t)(abs_det_jac_affine_BLUE*0.19887005655022641)), ((real_t)(abs_det_jac_affine_BLUE*0.19887005655022641)), ((real_t)(abs_det_jac_affine_BLUE*0.19887005655022641)), ((real_t)(abs_det_jac_affine_BLUE*0.6672399574840655)), ((real_t)(abs_det_jac_affine_BLUE*0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.074803807748196491)), ((real_t)(abs_det_jac_affine_BLUE*0.0083862028807871122)), ((real_t)(abs_det_jac_affine_BLUE*0.0083862028807871122)), ((real_t)(abs_det_jac_affine_BLUE*0.0083862028807871122))};
      
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
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_2_2 = 0.0;
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_1 = -p_affine_0_0 + (p_affine_0_0 - p_affine_1_0)*_data_q_p_0[q] + (p_affine_0_0 - p_affine_2_0)*_data_q_p_1[q];
                const real_t tmp_qloop_2 = (tmp_qloop_1*tmp_qloop_1);
                const real_t tmp_qloop_3 = -p_affine_0_1 + (p_affine_0_1 - p_affine_1_1)*_data_q_p_0[q] + (p_affine_0_1 - p_affine_2_1)*_data_q_p_1[q];
                const real_t tmp_qloop_4 = (tmp_qloop_3*tmp_qloop_3);
                const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_4;
                const real_t tmp_qloop_8 = pow(tmp_qloop_5, -0.50000000000000000)*tmp_qloop_7*1.0;
                const real_t tmp_qloop_9 = tmp_qloop_1*tmp_qloop_8;
                const real_t tmp_qloop_10 = -tmp_qloop_0*(rayVertex_0 + tmp_qloop_1) + tmp_qloop_6*(rayVertex_1 + tmp_qloop_3);
                const real_t tmp_qloop_11 = pow(tmp_qloop_5, -1.5000000000000000)*1.0;
                const real_t tmp_qloop_12 = tmp_qloop_11*(radRayVertex + tmp_qloop_10*tmp_qloop_7);
                const real_t tmp_qloop_13 = tmp_qloop_3*tmp_qloop_8;
                const real_t tmp_qloop_14 = tmp_qloop_11*(radRayVertex + tmp_qloop_10*tmp_qloop_7);
                const real_t tmp_qloop_15 = tmp_qloop_1*tmp_qloop_3;
                const real_t tmp_qloop_16 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q])*abs((tmp_qloop_0*tmp_qloop_13 + tmp_qloop_12*tmp_qloop_15)*(tmp_qloop_14*tmp_qloop_15 - tmp_qloop_6*tmp_qloop_9) + (tmp_qloop_0*tmp_qloop_9 - tmp_qloop_12*tmp_qloop_4)*(tmp_qloop_13*tmp_qloop_6 + tmp_qloop_14*tmp_qloop_2))*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_BLUE[6*q];
                const real_t q_tmp_0_1 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 2];
                const real_t q_tmp_1_1 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 3];
                const real_t q_tmp_1_2 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 4];
                const real_t q_tmp_2_2 = tmp_qloop_16*_data_phi_psi_jac_affine_det_0_0_BLUE[6*q + 5];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_1_0 = q_acc_0_1;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_2_0 = q_acc_0_2;
             const real_t elMat_2_1 = q_acc_1_2;
             const real_t elMat_2_2 = q_acc_2_2;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 3 );
             std::vector< real_t > _data_mat( 9 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_1_0));
             _data_mat[4] = ((real_t)(elMat_1_1));
             _data_mat[5] = ((real_t)(elMat_1_2));
             _data_mat[6] = ((real_t)(elMat_2_0));
             _data_mat[7] = ((real_t)(elMat_2_1));
             _data_mat[8] = ((real_t)(elMat_2_2));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg