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

























#include "../P1ElementwiseKMass.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseKMass::apply_macro_3D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_k, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {-0.1333333333333333, 0.074999999999999983, 0.074999999999999983, 0.074999999999999983, 0.074999999999999983};
   
       const real_t _data_q_p_0 [] = {0.25, 0.16666666666666666, 0.16666666666666666, 0.5, 0.16666666666666666};
   
       const real_t _data_q_p_1 [] = {0.25, 0.16666666666666666, 0.5, 0.16666666666666666, 0.16666666666666666};
   
       const real_t _data_q_p_2 [] = {0.25, 0.5, 0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
   
       const real_t tmp_coords_jac_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const real_t p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t jac_affine_0_0_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_1_0_WHITE_UP;
       const real_t jac_affine_0_1_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_2_0_WHITE_UP;
       const real_t jac_affine_0_2_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_3_0_WHITE_UP;
       const real_t jac_affine_1_0_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_1_1_WHITE_UP;
       const real_t jac_affine_1_1_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_2_1_WHITE_UP;
       const real_t jac_affine_1_2_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_3_1_WHITE_UP;
       const real_t jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const real_t jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const real_t jac_affine_2_2_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_3_2_WHITE_UP;
       const real_t abs_det_jac_affine_WHITE_UP = abs(jac_affine_0_0_WHITE_UP*jac_affine_1_1_WHITE_UP*jac_affine_2_2_WHITE_UP - jac_affine_0_0_WHITE_UP*jac_affine_1_2_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_0_1_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_2_WHITE_UP + jac_affine_0_1_WHITE_UP*jac_affine_1_2_WHITE_UP*jac_affine_2_0_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_0_2_WHITE_UP*jac_affine_1_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       {
          /* CellType.WHITE_UP */
          const real_t _data_phi_psi_jac_affine_det_0_0_WHITE_UP [] = {((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777804)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.08333333333333337)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.25)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.25)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.25)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.25000000000000011)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_3 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_UP[10*q + 9];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3;
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
          }
       }
       const real_t tmp_coords_jac_0_WHITE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_2_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_3_WHITE_DOWN = tmp_coords_jac_1_WHITE_DOWN + tmp_coords_jac_2_WHITE_DOWN;
       const real_t tmp_coords_jac_4_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_coords_jac_5_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_6_WHITE_DOWN = tmp_coords_jac_4_WHITE_DOWN + tmp_coords_jac_5_WHITE_DOWN;
       const real_t tmp_coords_jac_7_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_coords_jac_8_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_coords_jac_9_WHITE_DOWN = tmp_coords_jac_7_WHITE_DOWN + tmp_coords_jac_8_WHITE_DOWN;
       const real_t tmp_coords_jac_10_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_coords_jac_11_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_coords_jac_12_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_WHITE_DOWN = tmp_coords_jac_3_WHITE_DOWN;
       const real_t p_affine_const_0_1_WHITE_DOWN = tmp_coords_jac_6_WHITE_DOWN;
       const real_t p_affine_const_0_2_WHITE_DOWN = tmp_coords_jac_9_WHITE_DOWN;
       const real_t p_affine_const_1_0_WHITE_DOWN = tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_2_WHITE_DOWN;
       const real_t p_affine_const_1_1_WHITE_DOWN = tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_5_WHITE_DOWN;
       const real_t p_affine_const_1_2_WHITE_DOWN = tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_8_WHITE_DOWN;
       const real_t p_affine_const_2_0_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_1_WHITE_DOWN;
       const real_t p_affine_const_2_1_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_4_WHITE_DOWN;
       const real_t p_affine_const_2_2_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_7_WHITE_DOWN;
       const real_t p_affine_const_3_0_WHITE_DOWN = tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_3_WHITE_DOWN;
       const real_t p_affine_const_3_1_WHITE_DOWN = tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_6_WHITE_DOWN;
       const real_t p_affine_const_3_2_WHITE_DOWN = tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_9_WHITE_DOWN;
       const real_t jac_affine_0_0_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_1_0_WHITE_DOWN;
       const real_t jac_affine_0_1_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_2_0_WHITE_DOWN;
       const real_t jac_affine_0_2_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_3_0_WHITE_DOWN;
       const real_t jac_affine_1_0_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_1_1_WHITE_DOWN;
       const real_t jac_affine_1_1_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_2_1_WHITE_DOWN;
       const real_t jac_affine_1_2_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_3_1_WHITE_DOWN;
       const real_t jac_affine_2_0_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_1_2_WHITE_DOWN;
       const real_t jac_affine_2_1_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_2_2_WHITE_DOWN;
       const real_t jac_affine_2_2_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_3_2_WHITE_DOWN;
       const real_t abs_det_jac_affine_WHITE_DOWN = abs(jac_affine_0_0_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN - jac_affine_0_0_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_0_1_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN + jac_affine_0_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_0_2_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       {
          /* CellType.WHITE_DOWN */
          const real_t _data_phi_psi_jac_affine_det_0_0_WHITE_DOWN [] = {((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777804)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.08333333333333337)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.25000000000000011)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_0 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_3 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_WHITE_DOWN[10*q + 9];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3;
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
          }
       }
       const real_t tmp_coords_jac_0_BLUE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_2_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_3_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_coords_jac_4_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_5_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_coords_jac_6_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_0_0_BLUE_UP = tmp_coords_jac_1_BLUE_UP;
       const real_t p_affine_const_0_1_BLUE_UP = tmp_coords_jac_2_BLUE_UP;
       const real_t p_affine_const_0_2_BLUE_UP = tmp_coords_jac_3_BLUE_UP;
       const real_t p_affine_const_1_0_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_BLUE_UP;
       const real_t p_affine_const_1_1_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_BLUE_UP;
       const real_t p_affine_const_1_2_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_BLUE_UP;
       const real_t p_affine_const_2_0_BLUE_UP = tmp_coords_jac_1_BLUE_UP + tmp_coords_jac_4_BLUE_UP;
       const real_t p_affine_const_2_1_BLUE_UP = tmp_coords_jac_2_BLUE_UP + tmp_coords_jac_5_BLUE_UP;
       const real_t p_affine_const_2_2_BLUE_UP = tmp_coords_jac_3_BLUE_UP + tmp_coords_jac_6_BLUE_UP;
       const real_t p_affine_const_3_0_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_coords_jac_1_BLUE_UP;
       const real_t p_affine_const_3_1_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_coords_jac_2_BLUE_UP;
       const real_t p_affine_const_3_2_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_coords_jac_3_BLUE_UP;
       const real_t jac_affine_0_0_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_1_0_BLUE_UP;
       const real_t jac_affine_0_1_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_2_0_BLUE_UP;
       const real_t jac_affine_0_2_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_3_0_BLUE_UP;
       const real_t jac_affine_1_0_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_1_1_BLUE_UP;
       const real_t jac_affine_1_1_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_2_1_BLUE_UP;
       const real_t jac_affine_1_2_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_3_1_BLUE_UP;
       const real_t jac_affine_2_0_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_1_2_BLUE_UP;
       const real_t jac_affine_2_1_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_2_2_BLUE_UP;
       const real_t jac_affine_2_2_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_3_2_BLUE_UP;
       const real_t abs_det_jac_affine_BLUE_UP = abs(jac_affine_0_0_BLUE_UP*jac_affine_1_1_BLUE_UP*jac_affine_2_2_BLUE_UP - jac_affine_0_0_BLUE_UP*jac_affine_1_2_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_0_1_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_2_BLUE_UP + jac_affine_0_1_BLUE_UP*jac_affine_1_2_BLUE_UP*jac_affine_2_0_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_0_2_BLUE_UP*jac_affine_1_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       {
          /* CellType.BLUE_UP */
          const real_t _data_phi_psi_jac_affine_det_0_0_BLUE_UP [] = {((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777804)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.08333333333333337)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.25)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.25)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.25)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.25000000000000011)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_3 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_UP[10*q + 9];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3;
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
          }
       }
       const real_t tmp_coords_jac_0_BLUE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_2_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_coords_jac_3_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_coords_jac_4_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_coords_jac_5_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_BLUE_DOWN;
       const real_t tmp_coords_jac_6_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_coords_jac_7_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_6_BLUE_DOWN;
       const real_t tmp_coords_jac_8_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t tmp_coords_jac_9_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_8_BLUE_DOWN;
       const real_t p_affine_const_0_0_BLUE_DOWN = tmp_coords_jac_1_BLUE_DOWN;
       const real_t p_affine_const_0_1_BLUE_DOWN = tmp_coords_jac_2_BLUE_DOWN;
       const real_t p_affine_const_0_2_BLUE_DOWN = tmp_coords_jac_3_BLUE_DOWN;
       const real_t p_affine_const_1_0_BLUE_DOWN = tmp_coords_jac_5_BLUE_DOWN;
       const real_t p_affine_const_1_1_BLUE_DOWN = tmp_coords_jac_7_BLUE_DOWN;
       const real_t p_affine_const_1_2_BLUE_DOWN = tmp_coords_jac_9_BLUE_DOWN;
       const real_t p_affine_const_2_0_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_coords_jac_5_BLUE_DOWN;
       const real_t p_affine_const_2_1_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_coords_jac_7_BLUE_DOWN;
       const real_t p_affine_const_2_2_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_coords_jac_9_BLUE_DOWN;
       const real_t p_affine_const_3_0_BLUE_DOWN = tmp_coords_jac_1_BLUE_DOWN + tmp_coords_jac_4_BLUE_DOWN;
       const real_t p_affine_const_3_1_BLUE_DOWN = tmp_coords_jac_2_BLUE_DOWN + tmp_coords_jac_6_BLUE_DOWN;
       const real_t p_affine_const_3_2_BLUE_DOWN = tmp_coords_jac_3_BLUE_DOWN + tmp_coords_jac_8_BLUE_DOWN;
       const real_t jac_affine_0_0_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_1_0_BLUE_DOWN;
       const real_t jac_affine_0_1_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_2_0_BLUE_DOWN;
       const real_t jac_affine_0_2_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_3_0_BLUE_DOWN;
       const real_t jac_affine_1_0_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_1_1_BLUE_DOWN;
       const real_t jac_affine_1_1_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_2_1_BLUE_DOWN;
       const real_t jac_affine_1_2_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_3_1_BLUE_DOWN;
       const real_t jac_affine_2_0_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_1_2_BLUE_DOWN;
       const real_t jac_affine_2_1_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_2_2_BLUE_DOWN;
       const real_t jac_affine_2_2_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_3_2_BLUE_DOWN;
       const real_t abs_det_jac_affine_BLUE_DOWN = abs(jac_affine_0_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN - jac_affine_0_0_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_0_1_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN + jac_affine_0_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_0_2_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       {
          /* CellType.BLUE_DOWN */
          const real_t _data_phi_psi_jac_affine_det_0_0_BLUE_DOWN [] = {((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777804)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.08333333333333337)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.25000000000000011)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_0 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_2 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_3 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_BLUE_DOWN[10*q + 9];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3;
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
          }
       }
       const real_t tmp_coords_jac_0_GREEN_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_2_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_3_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_coords_jac_4_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_coords_jac_5_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_coords_jac_6_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_GREEN_UP = tmp_coords_jac_1_GREEN_UP;
       const real_t p_affine_const_0_1_GREEN_UP = tmp_coords_jac_2_GREEN_UP;
       const real_t p_affine_const_0_2_GREEN_UP = tmp_coords_jac_3_GREEN_UP;
       const real_t p_affine_const_1_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_1_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_1_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_2_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_GREEN_UP;
       const real_t p_affine_const_2_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_GREEN_UP;
       const real_t p_affine_const_2_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_GREEN_UP;
       const real_t p_affine_const_3_0_GREEN_UP = tmp_coords_jac_1_GREEN_UP + tmp_coords_jac_4_GREEN_UP;
       const real_t p_affine_const_3_1_GREEN_UP = tmp_coords_jac_2_GREEN_UP + tmp_coords_jac_5_GREEN_UP;
       const real_t p_affine_const_3_2_GREEN_UP = tmp_coords_jac_3_GREEN_UP + tmp_coords_jac_6_GREEN_UP;
       const real_t jac_affine_0_0_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_1_0_GREEN_UP;
       const real_t jac_affine_0_1_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_2_0_GREEN_UP;
       const real_t jac_affine_0_2_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_3_0_GREEN_UP;
       const real_t jac_affine_1_0_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_1_1_GREEN_UP;
       const real_t jac_affine_1_1_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_2_1_GREEN_UP;
       const real_t jac_affine_1_2_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_3_1_GREEN_UP;
       const real_t jac_affine_2_0_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_1_2_GREEN_UP;
       const real_t jac_affine_2_1_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_2_2_GREEN_UP;
       const real_t jac_affine_2_2_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_3_2_GREEN_UP;
       const real_t abs_det_jac_affine_GREEN_UP = abs(jac_affine_0_0_GREEN_UP*jac_affine_1_1_GREEN_UP*jac_affine_2_2_GREEN_UP - jac_affine_0_0_GREEN_UP*jac_affine_1_2_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_0_1_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_2_GREEN_UP + jac_affine_0_1_GREEN_UP*jac_affine_1_2_GREEN_UP*jac_affine_2_0_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_0_2_GREEN_UP*jac_affine_1_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       {
          /* CellType.GREEN_UP */
          const real_t _data_phi_psi_jac_affine_det_0_0_GREEN_UP [] = {((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777804)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.08333333333333337)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.25)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.25)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.25)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.25000000000000011)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_2 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_3 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_UP[10*q + 9];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3;
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
          }
       }
       const real_t tmp_coords_jac_0_GREEN_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_2_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_coords_jac_3_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_coords_jac_4_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_5_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_6_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_coords_jac_7_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_coords_jac_8_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_coords_jac_9_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN;
       const real_t p_affine_const_0_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN;
       const real_t p_affine_const_0_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN;
       const real_t p_affine_const_1_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_4_GREEN_DOWN;
       const real_t p_affine_const_1_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN + tmp_coords_jac_5_GREEN_DOWN;
       const real_t p_affine_const_1_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_6_GREEN_DOWN;
       const real_t p_affine_const_2_0_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const real_t p_affine_const_2_1_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const real_t p_affine_const_2_2_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
       const real_t p_affine_const_3_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const real_t p_affine_const_3_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const real_t p_affine_const_3_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
       const real_t jac_affine_0_0_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_1_0_GREEN_DOWN;
       const real_t jac_affine_0_1_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_2_0_GREEN_DOWN;
       const real_t jac_affine_0_2_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_3_0_GREEN_DOWN;
       const real_t jac_affine_1_0_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_1_1_GREEN_DOWN;
       const real_t jac_affine_1_1_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_2_1_GREEN_DOWN;
       const real_t jac_affine_1_2_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_3_1_GREEN_DOWN;
       const real_t jac_affine_2_0_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_1_2_GREEN_DOWN;
       const real_t jac_affine_2_1_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_2_2_GREEN_DOWN;
       const real_t jac_affine_2_2_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_3_2_GREEN_DOWN;
       const real_t abs_det_jac_affine_GREEN_DOWN = abs(jac_affine_0_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN - jac_affine_0_0_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_0_1_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN + jac_affine_0_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_0_2_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       {
          /* CellType.GREEN_DOWN */
          const real_t _data_phi_psi_jac_affine_det_0_0_GREEN_DOWN [] = {((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777804)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.08333333333333337)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.25)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.25)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.25)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.25000000000000011)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776))};
      
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_0 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_2 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_3 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_0_3 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_1_3 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_2_3 = 0.0;
             real_t q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 5; q += 1)
             {
                const real_t tmp_qloop_0 = (k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q])*_data_q_w[q];
                const real_t q_tmp_0_0 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_0*_data_phi_psi_jac_affine_det_0_0_GREEN_DOWN[10*q + 9];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
             const real_t elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3;
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg