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

























#include "../P1ElementwiseMass.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseMass::apply_macro_2D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.16666666666666674, 0.16666666666666674, 0.16666666666666674};
   
       const real_t tmp_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       {
          /* FaceType.GRAY */
          const real_t _data_phi_psi_det_jac_aff_0_GRAY [] = {0.44444444444444442*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.11111111111111116*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.11111111111111108*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.027777777777777804*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.027777777777777783*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.027777777777777766*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.027777777777777766*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.1111111111111111*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.027777777777777766*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.44444444444444453*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.1111111111111111*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.027777777777777766*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.027777777777777728*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.027777777777777748*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.11111111111111105*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.027777777777777766*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.11111111111111112*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY)), 0.4444444444444447*abs((-p_affine_0_0_GRAY + p_affine_1_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_2_1_GRAY) - (-p_affine_0_0_GRAY + p_affine_2_0_GRAY)*(-p_affine_0_1_GRAY + p_affine_1_1_GRAY))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_2_2 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t q_tmp_0_0 = _data_phi_psi_det_jac_aff_0_GRAY[6*q]*_data_q_w[q];
                const real_t q_tmp_0_1 = _data_phi_psi_det_jac_aff_0_GRAY[6*q + 1]*_data_q_w[q];
                const real_t q_tmp_0_2 = _data_phi_psi_det_jac_aff_0_GRAY[6*q + 2]*_data_q_w[q];
                const real_t q_tmp_1_1 = _data_phi_psi_det_jac_aff_0_GRAY[6*q + 3]*_data_q_w[q];
                const real_t q_tmp_1_2 = _data_phi_psi_det_jac_aff_0_GRAY[6*q + 4]*_data_q_w[q];
                const real_t q_tmp_2_2 = _data_phi_psi_det_jac_aff_0_GRAY[6*q + 5]*_data_q_w[q];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2;
             _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
          }
       }
       const real_t tmp_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_3_BLUE = tmp_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_4_BLUE = tmp_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_0_0_BLUE = tmp_1_BLUE;
       const real_t p_affine_0_1_BLUE = tmp_2_BLUE;
       const real_t p_affine_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_3_BLUE;
       const real_t p_affine_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_4_BLUE;
       const real_t p_affine_2_0_BLUE = tmp_1_BLUE + tmp_3_BLUE;
       const real_t p_affine_2_1_BLUE = tmp_2_BLUE + tmp_4_BLUE;
       {
          /* FaceType.BLUE */
          const real_t _data_phi_psi_det_jac_aff_0_BLUE [] = {0.44444444444444442*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.11111111111111116*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.11111111111111108*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.027777777777777804*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.027777777777777783*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.027777777777777766*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.027777777777777766*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.1111111111111111*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.027777777777777766*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.44444444444444453*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.1111111111111111*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.027777777777777766*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.027777777777777728*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.027777777777777748*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.11111111111111105*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.027777777777777766*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.11111111111111112*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE)), 0.4444444444444447*abs((-p_affine_0_0_BLUE + p_affine_1_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_2_1_BLUE) - (-p_affine_0_0_BLUE + p_affine_2_0_BLUE)*(-p_affine_0_1_BLUE + p_affine_1_1_BLUE))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_2_2 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t q_tmp_0_0 = _data_phi_psi_det_jac_aff_0_BLUE[6*q]*_data_q_w[q];
                const real_t q_tmp_0_1 = _data_phi_psi_det_jac_aff_0_BLUE[6*q + 1]*_data_q_w[q];
                const real_t q_tmp_0_2 = _data_phi_psi_det_jac_aff_0_BLUE[6*q + 2]*_data_q_w[q];
                const real_t q_tmp_1_1 = _data_phi_psi_det_jac_aff_0_BLUE[6*q + 3]*_data_q_w[q];
                const real_t q_tmp_1_2 = _data_phi_psi_det_jac_aff_0_BLUE[6*q + 4]*_data_q_w[q];
                const real_t q_tmp_2_2 = _data_phi_psi_det_jac_aff_0_BLUE[6*q + 5]*_data_q_w[q];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
             }
             const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2;
             const real_t elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2;
             const real_t elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2;
             _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
