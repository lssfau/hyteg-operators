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

void P1ElementwiseMass::computeInverseDiagonalOperatorValues_macro_2D( walberla::float64 * RESTRICT  _data_invDiag_, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 _data_q_w [] = {0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
   
       const walberla::float64 tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const walberla::float64 jac_affine_0_1_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_2_0_GRAY;
       const walberla::float64 jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const walberla::float64 jac_affine_1_1_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_2_1_GRAY;
       const walberla::float64 abs_det_jac_affine_GRAY = abs(jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY);
       {
          /* FaceType.GRAY */
          const walberla::float64 _data_phi_psi_det_jac_aff_0_0_GRAY [] = {abs_det_jac_affine_GRAY*0.027777777777777804, abs_det_jac_affine_GRAY*0.02777777777777779, abs_det_jac_affine_GRAY*0.11111111111111116, abs_det_jac_affine_GRAY*0.027777777777777776, abs_det_jac_affine_GRAY*0.1111111111111111, abs_det_jac_affine_GRAY*0.44444444444444442, abs_det_jac_affine_GRAY*0.027777777777777794, abs_det_jac_affine_GRAY*0.11111111111111113, abs_det_jac_affine_GRAY*0.027777777777777783, abs_det_jac_affine_GRAY*0.44444444444444442, abs_det_jac_affine_GRAY*0.1111111111111111, abs_det_jac_affine_GRAY*0.027777777777777776, abs_det_jac_affine_GRAY*0.44444444444444453, abs_det_jac_affine_GRAY*0.11111111111111112, abs_det_jac_affine_GRAY*0.11111111111111112, abs_det_jac_affine_GRAY*0.027777777777777776, abs_det_jac_affine_GRAY*0.027777777777777776, abs_det_jac_affine_GRAY*0.027777777777777776};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 += 4)
             {
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const walberla::float64 q_tmp_0_0 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q]*_data_q_w[q];
                   const walberla::float64 q_tmp_1_1 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q + 3]*_data_q_w[q];
                   const walberla::float64 q_tmp_2_2 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q + 5]*_data_q_w[q];
                   q_acc_0_0 = _mm256_add_pd(_mm256_set_pd(q_tmp_0_0,q_tmp_0_0,q_tmp_0_0,q_tmp_0_0),q_acc_0_0);
                   q_acc_1_1 = _mm256_add_pd(_mm256_set_pd(q_tmp_1_1,q_tmp_1_1,q_tmp_1_1,q_tmp_1_1),q_acc_1_1);
                   q_acc_2_2 = _mm256_add_pd(_mm256_set_pd(q_tmp_2_2,q_tmp_2_2,q_tmp_2_2,q_tmp_2_2),q_acc_2_2);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
             {
                walberla::float64 q_acc_0_0 = 0.0;
                walberla::float64 q_acc_1_1 = 0.0;
                walberla::float64 q_acc_2_2 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const walberla::float64 q_tmp_0_0 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q]*_data_q_w[q];
                   const walberla::float64 q_tmp_1_1 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q + 3]*_data_q_w[q];
                   const walberla::float64 q_tmp_2_2 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q + 5]*_data_q_w[q];
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                }
                const walberla::float64 elMatDiag_0 = q_acc_0_0;
                const walberla::float64 elMatDiag_1 = q_acc_1_1;
                const walberla::float64 elMatDiag_2 = q_acc_2_2;
                _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             }
          }
       }
       const walberla::float64 tmp_coords_jac_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_3_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_4_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_0_0_BLUE = tmp_coords_jac_1_BLUE;
       const walberla::float64 p_affine_const_0_1_BLUE = tmp_coords_jac_2_BLUE;
       const walberla::float64 p_affine_const_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_3_BLUE;
       const walberla::float64 p_affine_const_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_4_BLUE;
       const walberla::float64 p_affine_const_2_0_BLUE = tmp_coords_jac_1_BLUE + tmp_coords_jac_3_BLUE;
       const walberla::float64 p_affine_const_2_1_BLUE = tmp_coords_jac_2_BLUE + tmp_coords_jac_4_BLUE;
       const walberla::float64 jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const walberla::float64 jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const walberla::float64 jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const walberla::float64 jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const walberla::float64 abs_det_jac_affine_BLUE = abs(jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE);
       {
          /* FaceType.BLUE */
          const walberla::float64 _data_phi_psi_det_jac_aff_0_0_BLUE [] = {abs_det_jac_affine_BLUE*0.027777777777777804, abs_det_jac_affine_BLUE*0.02777777777777779, abs_det_jac_affine_BLUE*0.11111111111111116, abs_det_jac_affine_BLUE*0.027777777777777776, abs_det_jac_affine_BLUE*0.1111111111111111, abs_det_jac_affine_BLUE*0.44444444444444442, abs_det_jac_affine_BLUE*0.027777777777777794, abs_det_jac_affine_BLUE*0.11111111111111113, abs_det_jac_affine_BLUE*0.027777777777777783, abs_det_jac_affine_BLUE*0.44444444444444442, abs_det_jac_affine_BLUE*0.1111111111111111, abs_det_jac_affine_BLUE*0.027777777777777776, abs_det_jac_affine_BLUE*0.44444444444444453, abs_det_jac_affine_BLUE*0.11111111111111112, abs_det_jac_affine_BLUE*0.11111111111111112, abs_det_jac_affine_BLUE*0.027777777777777776, abs_det_jac_affine_BLUE*0.027777777777777776, abs_det_jac_affine_BLUE*0.027777777777777776};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const walberla::float64 q_tmp_0_0 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q]*_data_q_w[q];
                   const walberla::float64 q_tmp_1_1 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q + 3]*_data_q_w[q];
                   const walberla::float64 q_tmp_2_2 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q + 5]*_data_q_w[q];
                   q_acc_0_0 = _mm256_add_pd(_mm256_set_pd(q_tmp_0_0,q_tmp_0_0,q_tmp_0_0,q_tmp_0_0),q_acc_0_0);
                   q_acc_1_1 = _mm256_add_pd(_mm256_set_pd(q_tmp_1_1,q_tmp_1_1,q_tmp_1_1,q_tmp_1_1),q_acc_1_1);
                   q_acc_2_2 = _mm256_add_pd(_mm256_set_pd(q_tmp_2_2,q_tmp_2_2,q_tmp_2_2,q_tmp_2_2),q_acc_2_2);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                walberla::float64 q_acc_0_0 = 0.0;
                walberla::float64 q_acc_1_1 = 0.0;
                walberla::float64 q_acc_2_2 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const walberla::float64 q_tmp_0_0 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q]*_data_q_w[q];
                   const walberla::float64 q_tmp_1_1 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q + 3]*_data_q_w[q];
                   const walberla::float64 q_tmp_2_2 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q + 5]*_data_q_w[q];
                   q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                }
                const walberla::float64 elMatDiag_0 = q_acc_0_0;
                const walberla::float64 elMatDiag_1 = q_acc_1_1;
                const walberla::float64 elMatDiag_2 = q_acc_2_2;
                _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_1 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
