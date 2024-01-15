/*
* Copyright (c) 2017-2023 Nils Kohl, Daniel Bauer, Fabian Böhm.
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

























#include "../P1ElementwiseDivKGrad.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseDivKGrad::toMatrix_macro_2D( idx_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_k, idx_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.16666666666666674, 0.16666666666666674, 0.16666666666666674};
   
       const real_t _data_q_p_0 [] = {0.16666666666666674, 0.66666666666666674, 0.16666666666666663};
   
       const real_t _data_q_p_1 [] = {0.16666666666666663, 0.16666666666666663, 0.66666666666666685};
   
       const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const real_t jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const real_t jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const real_t jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const real_t jac_affine_inv_0_0 = jac_affine_1_1*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t jac_affine_inv_0_1 = -jac_affine_0_1*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t jac_affine_inv_1_0 = -jac_affine_1_0*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t jac_affine_inv_1_1 = jac_affine_0_0*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t abs_det_jac_affine = abs(jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t tmp_q_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0;
       const real_t tmp_q_4 = -jac_affine_inv_0_1 - jac_affine_inv_1_1;
       const real_t Dummy_3376 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t Dummy_3377 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t Dummy_3378 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3379 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3380 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3381 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3382 = -Dummy_3376 + Dummy_3378;
       const real_t Dummy_3383 = -Dummy_3376 + Dummy_3380;
       const real_t Dummy_3384 = -Dummy_3377 + Dummy_3379;
       const real_t Dummy_3385 = -Dummy_3377 + Dummy_3381;
       const real_t Dummy_3386 = Dummy_3385*1.0 / (Dummy_3382*Dummy_3385 - Dummy_3383*Dummy_3384);
       const real_t Dummy_3387 = -Dummy_3383*1.0 / (Dummy_3382*Dummy_3385 - Dummy_3383*Dummy_3384);
       const real_t Dummy_3388 = -Dummy_3384*1.0 / (Dummy_3382*Dummy_3385 - Dummy_3383*Dummy_3384);
       const real_t Dummy_3389 = Dummy_3382*1.0 / (Dummy_3382*Dummy_3385 - Dummy_3383*Dummy_3384);
       const real_t Dummy_3390 = abs(Dummy_3382*Dummy_3385 - Dummy_3383*Dummy_3384);
       const real_t Dummy_3391 = -Dummy_3386 - Dummy_3388;
       const real_t Dummy_3392 = -Dummy_3387 - Dummy_3389;
       {
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_2_2 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q];
                const real_t tmp_q_2 = jac_affine_inv_0_0*tmp_q_1;
                const real_t tmp_q_3 = jac_affine_inv_1_0*tmp_q_1;
                const real_t tmp_q_5 = jac_affine_inv_0_1*tmp_q_1;
                const real_t tmp_q_6 = jac_affine_inv_1_1*tmp_q_1;
                const real_t tmp_q_7 = abs_det_jac_affine*_data_q_w[q];
                const real_t res_tmp_0_0 = tmp_q_7*(tmp_q_0*(-tmp_q_2 - tmp_q_3) + tmp_q_4*(-tmp_q_5 - tmp_q_6));
                const real_t res_tmp_0_1 = tmp_q_7*(tmp_q_0*tmp_q_2 + tmp_q_4*tmp_q_5);
                const real_t res_tmp_0_2 = tmp_q_7*(tmp_q_0*tmp_q_3 + tmp_q_4*tmp_q_6);
                const real_t res_tmp_1_1 = tmp_q_7*((jac_affine_inv_0_0*jac_affine_inv_0_0)*tmp_q_1 + (jac_affine_inv_0_1*jac_affine_inv_0_1)*tmp_q_1);
                const real_t res_tmp_1_2 = tmp_q_7*(jac_affine_inv_1_0*tmp_q_2 + jac_affine_inv_1_1*tmp_q_5);
                const real_t res_tmp_2_2 = tmp_q_7*((jac_affine_inv_1_0*jac_affine_inv_1_0)*tmp_q_1 + (jac_affine_inv_1_1*jac_affine_inv_1_1)*tmp_q_1);
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
             }
             real_t q_acc_1_0 = q_acc_0_1;
             real_t q_acc_2_0 = q_acc_0_2;
             real_t q_acc_2_1 = q_acc_1_2;
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
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
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_0_1 = 0.0;
             real_t q_acc_0_2 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_1_2 = 0.0;
             real_t q_acc_2_2 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const real_t tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q];
                const real_t tmp_q_2 = Dummy_3386*tmp_q_1;
                const real_t tmp_q_3 = Dummy_3388*tmp_q_1;
                const real_t tmp_q_5 = Dummy_3387*tmp_q_1;
                const real_t tmp_q_6 = Dummy_3389*tmp_q_1;
                const real_t tmp_q_7 = Dummy_3390*_data_q_w[q];
                const real_t res_tmp_0_0 = tmp_q_7*(Dummy_3391*(-tmp_q_2 - tmp_q_3) + Dummy_3392*(-tmp_q_5 - tmp_q_6));
                const real_t res_tmp_0_1 = tmp_q_7*(Dummy_3391*tmp_q_2 + Dummy_3392*tmp_q_5);
                const real_t res_tmp_0_2 = tmp_q_7*(Dummy_3391*tmp_q_3 + Dummy_3392*tmp_q_6);
                const real_t res_tmp_1_1 = tmp_q_7*((Dummy_3386*Dummy_3386)*tmp_q_1 + (Dummy_3387*Dummy_3387)*tmp_q_1);
                const real_t res_tmp_1_2 = tmp_q_7*(Dummy_3388*tmp_q_2 + Dummy_3389*tmp_q_5);
                const real_t res_tmp_2_2 = tmp_q_7*((Dummy_3388*Dummy_3388)*tmp_q_1 + (Dummy_3389*Dummy_3389)*tmp_q_1);
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
             }
             real_t q_acc_1_0 = q_acc_0_1;
             real_t q_acc_2_0 = q_acc_0_2;
             real_t q_acc_2_1 = q_acc_1_2;
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
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
