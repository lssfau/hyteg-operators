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

























#include "../P2ToP1ElementwiseKMass.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ToP1ElementwiseKMass::toMatrix_macro_2D( idx_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_kEdge, real_t * RESTRICT  _data_kVertex, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       {
          /* FaceType.GRAY */
          const real_t _data_phi_psi_jac_affine_det_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334336)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778434)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334336)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337108)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778434)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428435066)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_GRAY*-0.0091596220343278505)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373971)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373971)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926711)), ((real_t)(abs_det_jac_affine_GRAY*-0.006850249469692685)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425765)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877074)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877075)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888579)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926685)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425751)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877073)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877074)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888566)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808810999)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_GRAY*0.42282672224882095)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524447)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524458)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770705)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334326)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778434)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*-0.005211471142843504)), ((real_t)(abs_det_jac_affine_GRAY*-0.0091596220343278505)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373971)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373971)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334326)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337108)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778434)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337122)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926625)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425779)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926867)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770747)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888588)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770757)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808810909)), ((real_t)(abs_det_jac_affine_GRAY*0.42282672224882095)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524447)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770705)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524458)), ((real_t)(abs_det_jac_affine_GRAY*-0.006850249469692659)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425751)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877073)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888566)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877074)), ((real_t)(abs_det_jac_affine_GRAY*-0.0091596220343278956)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_GRAY*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_GRAY*0.085993813345337108)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373978)), ((real_t)(abs_det_jac_affine_GRAY*0.020845884571373978)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825252)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778429)), ((real_t)(abs_det_jac_affine_GRAY*0.08599381334533715)), ((real_t)(abs_det_jac_affine_GRAY*0.08599381334533715)), ((real_t)(abs_det_jac_affine_GRAY*-0.037785435529825252)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_GRAY*0.35474320642778429)), ((real_t)(abs_det_jac_affine_GRAY*0.08599381334533715)), ((real_t)(abs_det_jac_affine_GRAY*0.08599381334533715)), ((real_t)(abs_det_jac_affine_GRAY*0.42282672224882117)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_GRAY*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_GRAY*0.02740099787877073)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524444)), ((real_t)(abs_det_jac_affine_GRAY*0.24441323523524444)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425772)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888592)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770726)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770726)), ((real_t)(abs_det_jac_affine_GRAY*0.047402809869425772)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_GRAY*0.0030719068221888592)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770726)), ((real_t)(abs_det_jac_affine_GRAY*0.027400997878770726))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
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
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_1 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_2 = tmp_qloop_1*2.0;
                const real_t tmp_qloop_3 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_4 = tmp_qloop_3*2.0;
                const real_t tmp_qloop_5 = (k_dof_0*(tmp_qloop_0 + tmp_qloop_2 + tmp_qloop_4 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_qloop_2 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_4 - _data_q_p_1[q]) + k_dof_3*tmp_qloop_0 + k_dof_4*(-tmp_qloop_0 + tmp_qloop_3*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_5*(-tmp_qloop_0 + tmp_qloop_1*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q];
                const real_t q_tmp_0_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 5];
                const real_t q_tmp_1_0 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 6];
                const real_t q_tmp_1_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 7];
                const real_t q_tmp_1_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 8];
                const real_t q_tmp_1_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 9];
                const real_t q_tmp_1_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 10];
                const real_t q_tmp_1_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 11];
                const real_t q_tmp_2_0 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 12];
                const real_t q_tmp_2_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 13];
                const real_t q_tmp_2_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 14];
                const real_t q_tmp_2_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 15];
                const real_t q_tmp_2_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 16];
                const real_t q_tmp_2_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[18*q + 17];
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
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 18 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
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
          const real_t _data_phi_psi_jac_affine_det_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334336)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778434)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334336)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337108)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778434)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428435066)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_BLUE*-0.0091596220343278505)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373971)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373971)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926711)), ((real_t)(abs_det_jac_affine_BLUE*-0.006850249469692685)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425765)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877074)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877075)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888579)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926685)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425751)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877073)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877074)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888566)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808810999)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_BLUE*0.42282672224882095)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524447)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524458)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770705)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334326)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778434)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*-0.005211471142843504)), ((real_t)(abs_det_jac_affine_BLUE*-0.0091596220343278505)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373971)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373971)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334326)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825065)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337108)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778434)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337122)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926625)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425779)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926867)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770747)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888588)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770757)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808810909)), ((real_t)(abs_det_jac_affine_BLUE*0.42282672224882095)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524447)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770705)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524458)), ((real_t)(abs_det_jac_affine_BLUE*-0.006850249469692659)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425751)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877073)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888566)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877074)), ((real_t)(abs_det_jac_affine_BLUE*-0.0091596220343278956)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_BLUE*-0.0052114711428434945)), ((real_t)(abs_det_jac_affine_BLUE*0.085993813345337108)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373978)), ((real_t)(abs_det_jac_affine_BLUE*0.020845884571373978)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825252)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778429)), ((real_t)(abs_det_jac_affine_BLUE*0.08599381334533715)), ((real_t)(abs_det_jac_affine_BLUE*0.08599381334533715)), ((real_t)(abs_det_jac_affine_BLUE*-0.037785435529825252)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*-0.021498453336334288)), ((real_t)(abs_det_jac_affine_BLUE*0.35474320642778429)), ((real_t)(abs_det_jac_affine_BLUE*0.08599381334533715)), ((real_t)(abs_det_jac_affine_BLUE*0.08599381334533715)), ((real_t)(abs_det_jac_affine_BLUE*0.42282672224882117)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_BLUE*-0.061103308808811124)), ((real_t)(abs_det_jac_affine_BLUE*0.02740099787877073)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524444)), ((real_t)(abs_det_jac_affine_BLUE*0.24441323523524444)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425772)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888592)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770726)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770726)), ((real_t)(abs_det_jac_affine_BLUE*0.047402809869425772)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*-0.0068502494696926824)), ((real_t)(abs_det_jac_affine_BLUE*0.0030719068221888592)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770726)), ((real_t)(abs_det_jac_affine_BLUE*0.027400997878770726))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
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
             for (int64_t q = 0; q < 6; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_1 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_2 = tmp_qloop_1*2.0;
                const real_t tmp_qloop_3 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_4 = tmp_qloop_3*2.0;
                const real_t tmp_qloop_5 = (k_dof_0*(tmp_qloop_0 + tmp_qloop_2 + tmp_qloop_4 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_qloop_2 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_4 - _data_q_p_1[q]) + k_dof_3*tmp_qloop_0 + k_dof_4*(-tmp_qloop_0 + tmp_qloop_3*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_5*(-tmp_qloop_0 + tmp_qloop_1*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q];
                const real_t q_tmp_0_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 5];
                const real_t q_tmp_1_0 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 6];
                const real_t q_tmp_1_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 7];
                const real_t q_tmp_1_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 8];
                const real_t q_tmp_1_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 9];
                const real_t q_tmp_1_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 10];
                const real_t q_tmp_1_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 11];
                const real_t q_tmp_2_0 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 12];
                const real_t q_tmp_2_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 13];
                const real_t q_tmp_2_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 14];
                const real_t q_tmp_2_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 15];
                const real_t q_tmp_2_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 16];
                const real_t q_tmp_2_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[18*q + 17];
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
             }
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_0_4 = q_acc_0_4;
             const real_t elMat_0_5 = q_acc_0_5;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_1_4 = q_acc_1_4;
             const real_t elMat_1_5 = q_acc_1_5;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_2_4 = q_acc_2_4;
             const real_t elMat_2_5 = q_acc_2_5;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 18 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
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
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
