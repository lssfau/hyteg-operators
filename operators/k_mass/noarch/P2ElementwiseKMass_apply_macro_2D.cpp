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

























#include "../P2ElementwiseKMass.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseKMass::apply_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_kEdge, real_t * RESTRICT  _data_kVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t abs_det_jac_affine_GRAY = abs(jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_psi_jac_affine_det_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*0.01234567901234569)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345684)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345684)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345678)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345678)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345678)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.014399999999999972)), ((real_t)(abs_det_jac_affine_GRAY*0.014399999999999986)), ((real_t)(abs_det_jac_affine_GRAY*-0.014399999999999986)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999943)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999943)), ((real_t)(abs_det_jac_affine_GRAY*-0.019199999999999984)), ((real_t)(abs_det_jac_affine_GRAY*0.0144)), ((real_t)(abs_det_jac_affine_GRAY*-0.0144)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*-0.019200000000000002)), ((real_t)(abs_det_jac_affine_GRAY*0.0144)), ((real_t)(abs_det_jac_affine_GRAY*0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*0.019200000000000002)), ((real_t)(abs_det_jac_affine_GRAY*0.23040000000000005)), ((real_t)(abs_det_jac_affine_GRAY*0.23039999999999999)), ((real_t)(abs_det_jac_affine_GRAY*0.076800000000000007)), ((real_t)(abs_det_jac_affine_GRAY*0.23039999999999999)), ((real_t)(abs_det_jac_affine_GRAY*0.076800000000000007)), ((real_t)(abs_det_jac_affine_GRAY*0.025600000000000012)), ((real_t)(abs_det_jac_affine_GRAY*0.014399999999999972)), ((real_t)(abs_det_jac_affine_GRAY*-0.014399999999999986)), ((real_t)(abs_det_jac_affine_GRAY*0.014399999999999986)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999943)), ((real_t)(abs_det_jac_affine_GRAY*-0.019199999999999984)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999943)), ((real_t)(abs_det_jac_affine_GRAY*0.0144)), ((real_t)(abs_det_jac_affine_GRAY*-0.0144)), ((real_t)(abs_det_jac_affine_GRAY*0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*0.019200000000000002)), ((real_t)(abs_det_jac_affine_GRAY*0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*0.0144)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*-0.019200000000000002)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*0.23040000000000005)), ((real_t)(abs_det_jac_affine_GRAY*0.076800000000000007)), ((real_t)(abs_det_jac_affine_GRAY*0.23039999999999999)), ((real_t)(abs_det_jac_affine_GRAY*0.025600000000000012)), ((real_t)(abs_det_jac_affine_GRAY*0.076800000000000007)), ((real_t)(abs_det_jac_affine_GRAY*0.23039999999999999)), ((real_t)(abs_det_jac_affine_GRAY*0.014399999999999972)), ((real_t)(abs_det_jac_affine_GRAY*-0.014399999999999986)), ((real_t)(abs_det_jac_affine_GRAY*-0.014399999999999986)), ((real_t)(abs_det_jac_affine_GRAY*0.019199999999999984)), ((real_t)(abs_det_jac_affine_GRAY*0.057599999999999943)), ((real_t)(abs_det_jac_affine_GRAY*0.057599999999999943)), ((real_t)(abs_det_jac_affine_GRAY*0.0144)), ((real_t)(abs_det_jac_affine_GRAY*0.0144)), ((real_t)(abs_det_jac_affine_GRAY*-0.019200000000000002)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*0.0144)), ((real_t)(abs_det_jac_affine_GRAY*-0.019200000000000002)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_GRAY*0.025600000000000012)), ((real_t)(abs_det_jac_affine_GRAY*0.076800000000000007)), ((real_t)(abs_det_jac_affine_GRAY*0.076800000000000007)), ((real_t)(abs_det_jac_affine_GRAY*0.23039999999999999)), ((real_t)(abs_det_jac_affine_GRAY*0.23039999999999999)), ((real_t)(abs_det_jac_affine_GRAY*0.23039999999999999))};
      
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
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_1 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_2 = tmp_qloop_1*2.0;
                const real_t tmp_qloop_3 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_4 = tmp_qloop_3*2.0;
                const real_t tmp_qloop_5 = (k_dof_0*(tmp_qloop_0 + tmp_qloop_2 + tmp_qloop_4 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_qloop_2 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_4 - _data_q_p_1[q]) + k_dof_3*tmp_qloop_0 + k_dof_4*(-tmp_qloop_0 + tmp_qloop_3*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_5*(-tmp_qloop_0 + tmp_qloop_1*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q];
                const real_t q_tmp_0_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 5];
                const real_t q_tmp_1_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 6];
                const real_t q_tmp_1_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 7];
                const real_t q_tmp_1_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 8];
                const real_t q_tmp_1_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 9];
                const real_t q_tmp_1_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 10];
                const real_t q_tmp_2_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 11];
                const real_t q_tmp_2_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 12];
                const real_t q_tmp_2_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 13];
                const real_t q_tmp_2_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 14];
                const real_t q_tmp_3_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 15];
                const real_t q_tmp_3_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 16];
                const real_t q_tmp_3_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 17];
                const real_t q_tmp_4_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 18];
                const real_t q_tmp_4_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 19];
                const real_t q_tmp_5_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_GRAY[21*q + 20];
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
          const real_t _data_phi_psi_jac_affine_det_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*0.01234567901234569)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345684)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345684)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345678)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345678)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345678)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.014399999999999972)), ((real_t)(abs_det_jac_affine_BLUE*0.014399999999999986)), ((real_t)(abs_det_jac_affine_BLUE*-0.014399999999999986)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999943)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999943)), ((real_t)(abs_det_jac_affine_BLUE*-0.019199999999999984)), ((real_t)(abs_det_jac_affine_BLUE*0.0144)), ((real_t)(abs_det_jac_affine_BLUE*-0.0144)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*-0.019200000000000002)), ((real_t)(abs_det_jac_affine_BLUE*0.0144)), ((real_t)(abs_det_jac_affine_BLUE*0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*0.019200000000000002)), ((real_t)(abs_det_jac_affine_BLUE*0.23040000000000005)), ((real_t)(abs_det_jac_affine_BLUE*0.23039999999999999)), ((real_t)(abs_det_jac_affine_BLUE*0.076800000000000007)), ((real_t)(abs_det_jac_affine_BLUE*0.23039999999999999)), ((real_t)(abs_det_jac_affine_BLUE*0.076800000000000007)), ((real_t)(abs_det_jac_affine_BLUE*0.025600000000000012)), ((real_t)(abs_det_jac_affine_BLUE*0.014399999999999972)), ((real_t)(abs_det_jac_affine_BLUE*-0.014399999999999986)), ((real_t)(abs_det_jac_affine_BLUE*0.014399999999999986)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999943)), ((real_t)(abs_det_jac_affine_BLUE*-0.019199999999999984)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999943)), ((real_t)(abs_det_jac_affine_BLUE*0.0144)), ((real_t)(abs_det_jac_affine_BLUE*-0.0144)), ((real_t)(abs_det_jac_affine_BLUE*0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*0.019200000000000002)), ((real_t)(abs_det_jac_affine_BLUE*0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*0.0144)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*-0.019200000000000002)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*0.23040000000000005)), ((real_t)(abs_det_jac_affine_BLUE*0.076800000000000007)), ((real_t)(abs_det_jac_affine_BLUE*0.23039999999999999)), ((real_t)(abs_det_jac_affine_BLUE*0.025600000000000012)), ((real_t)(abs_det_jac_affine_BLUE*0.076800000000000007)), ((real_t)(abs_det_jac_affine_BLUE*0.23039999999999999)), ((real_t)(abs_det_jac_affine_BLUE*0.014399999999999972)), ((real_t)(abs_det_jac_affine_BLUE*-0.014399999999999986)), ((real_t)(abs_det_jac_affine_BLUE*-0.014399999999999986)), ((real_t)(abs_det_jac_affine_BLUE*0.019199999999999984)), ((real_t)(abs_det_jac_affine_BLUE*0.057599999999999943)), ((real_t)(abs_det_jac_affine_BLUE*0.057599999999999943)), ((real_t)(abs_det_jac_affine_BLUE*0.0144)), ((real_t)(abs_det_jac_affine_BLUE*0.0144)), ((real_t)(abs_det_jac_affine_BLUE*-0.019200000000000002)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*0.0144)), ((real_t)(abs_det_jac_affine_BLUE*-0.019200000000000002)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*-0.057599999999999998)), ((real_t)(abs_det_jac_affine_BLUE*0.025600000000000012)), ((real_t)(abs_det_jac_affine_BLUE*0.076800000000000007)), ((real_t)(abs_det_jac_affine_BLUE*0.076800000000000007)), ((real_t)(abs_det_jac_affine_BLUE*0.23039999999999999)), ((real_t)(abs_det_jac_affine_BLUE*0.23039999999999999)), ((real_t)(abs_det_jac_affine_BLUE*0.23039999999999999))};
      
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
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_qloop_0 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                const real_t tmp_qloop_1 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_qloop_2 = tmp_qloop_1*2.0;
                const real_t tmp_qloop_3 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_qloop_4 = tmp_qloop_3*2.0;
                const real_t tmp_qloop_5 = (k_dof_0*(tmp_qloop_0 + tmp_qloop_2 + tmp_qloop_4 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_qloop_2 - _data_q_p_0[q]) + k_dof_2*(tmp_qloop_4 - _data_q_p_1[q]) + k_dof_3*tmp_qloop_0 + k_dof_4*(-tmp_qloop_0 + tmp_qloop_3*-4.0 + 4.0*_data_q_p_1[q]) + k_dof_5*(-tmp_qloop_0 + tmp_qloop_1*-4.0 + 4.0*_data_q_p_0[q]))*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q];
                const real_t q_tmp_0_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 3];
                const real_t q_tmp_0_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 4];
                const real_t q_tmp_0_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 5];
                const real_t q_tmp_1_1 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 6];
                const real_t q_tmp_1_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 7];
                const real_t q_tmp_1_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 8];
                const real_t q_tmp_1_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 9];
                const real_t q_tmp_1_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 10];
                const real_t q_tmp_2_2 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 11];
                const real_t q_tmp_2_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 12];
                const real_t q_tmp_2_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 13];
                const real_t q_tmp_2_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 14];
                const real_t q_tmp_3_3 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 15];
                const real_t q_tmp_3_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 16];
                const real_t q_tmp_3_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 17];
                const real_t q_tmp_4_4 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 18];
                const real_t q_tmp_4_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 19];
                const real_t q_tmp_5_5 = tmp_qloop_5*_data_phi_psi_jac_affine_det_0_0_BLUE[21*q + 20];
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
