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

void P1ElementwiseMass::toMatrix_macro_2D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_src, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 _data_q_w [] = {0.16666666666666674, 0.16666666666666674, 0.16666666666666674};
   
       const walberla::float64 tmp_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const walberla::float64 jac_affine_0_1_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_2_0_GRAY;
       const walberla::float64 jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const walberla::float64 jac_affine_1_1_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_2_1_GRAY;
       const walberla::float64 abs_det_jac_affine_GRAY = abs(jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY);
       {
          /* FaceType.GRAY */
          const walberla::float64 _data_phi_psi_det_jac_aff_0_0_GRAY [] = {abs_det_jac_affine_GRAY*0.44444444444444442, abs_det_jac_affine_GRAY*0.11111111111111116, abs_det_jac_affine_GRAY*0.11111111111111108, abs_det_jac_affine_GRAY*0.027777777777777804, abs_det_jac_affine_GRAY*0.027777777777777783, abs_det_jac_affine_GRAY*0.027777777777777766, abs_det_jac_affine_GRAY*0.027777777777777766, abs_det_jac_affine_GRAY*0.1111111111111111, abs_det_jac_affine_GRAY*0.027777777777777766, abs_det_jac_affine_GRAY*0.44444444444444453, abs_det_jac_affine_GRAY*0.1111111111111111, abs_det_jac_affine_GRAY*0.027777777777777766, abs_det_jac_affine_GRAY*0.027777777777777728, abs_det_jac_affine_GRAY*0.027777777777777748, abs_det_jac_affine_GRAY*0.11111111111111105, abs_det_jac_affine_GRAY*0.027777777777777766, abs_det_jac_affine_GRAY*0.11111111111111112, abs_det_jac_affine_GRAY*0.4444444444444447};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_0_1 = 0.0;
             walberla::float64 q_acc_0_2 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_1_2 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const walberla::float64 q_tmp_0_0 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q]*_data_q_w[q];
                const walberla::float64 q_tmp_0_1 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q + 1]*_data_q_w[q];
                const walberla::float64 q_tmp_0_2 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q + 2]*_data_q_w[q];
                const walberla::float64 q_tmp_1_1 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q + 3]*_data_q_w[q];
                const walberla::float64 q_tmp_1_2 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q + 4]*_data_q_w[q];
                const walberla::float64 q_tmp_2_2 = _data_phi_psi_det_jac_aff_0_0_GRAY[6*q + 5]*_data_q_w[q];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
             }
             const walberla::float64 elMat_0_0 = q_acc_0_0;
             const walberla::float64 elMat_0_1 = q_acc_0_1;
             const walberla::float64 elMat_0_2 = q_acc_0_2;
             const walberla::float64 elMat_1_0 = q_acc_0_1;
             const walberla::float64 elMat_1_1 = q_acc_1_1;
             const walberla::float64 elMat_1_2 = q_acc_1_2;
             const walberla::float64 elMat_2_0 = q_acc_0_2;
             const walberla::float64 elMat_2_1 = q_acc_1_2;
             const walberla::float64 elMat_2_2 = q_acc_2_2;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 3 );
             std::vector< walberla::float64 > _data_mat( 9 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((walberla::float64)(elMat_0_0));
             _data_mat[1] = ((walberla::float64)(elMat_0_1));
             _data_mat[2] = ((walberla::float64)(elMat_0_2));
             _data_mat[3] = ((walberla::float64)(elMat_1_0));
             _data_mat[4] = ((walberla::float64)(elMat_1_1));
             _data_mat[5] = ((walberla::float64)(elMat_1_2));
             _data_mat[6] = ((walberla::float64)(elMat_2_0));
             _data_mat[7] = ((walberla::float64)(elMat_2_1));
             _data_mat[8] = ((walberla::float64)(elMat_2_2));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_3_BLUE = tmp_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_4_BLUE = tmp_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_0_0_BLUE = tmp_1_BLUE;
       const walberla::float64 p_affine_const_0_1_BLUE = tmp_2_BLUE;
       const walberla::float64 p_affine_const_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_3_BLUE;
       const walberla::float64 p_affine_const_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_4_BLUE;
       const walberla::float64 p_affine_const_2_0_BLUE = tmp_1_BLUE + tmp_3_BLUE;
       const walberla::float64 p_affine_const_2_1_BLUE = tmp_2_BLUE + tmp_4_BLUE;
       const walberla::float64 jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const walberla::float64 jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const walberla::float64 jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const walberla::float64 jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const walberla::float64 abs_det_jac_affine_BLUE = abs(jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE);
       {
          /* FaceType.BLUE */
          const walberla::float64 _data_phi_psi_det_jac_aff_0_0_BLUE [] = {abs_det_jac_affine_BLUE*0.44444444444444442, abs_det_jac_affine_BLUE*0.11111111111111116, abs_det_jac_affine_BLUE*0.11111111111111108, abs_det_jac_affine_BLUE*0.027777777777777804, abs_det_jac_affine_BLUE*0.027777777777777783, abs_det_jac_affine_BLUE*0.027777777777777766, abs_det_jac_affine_BLUE*0.027777777777777766, abs_det_jac_affine_BLUE*0.1111111111111111, abs_det_jac_affine_BLUE*0.027777777777777766, abs_det_jac_affine_BLUE*0.44444444444444453, abs_det_jac_affine_BLUE*0.1111111111111111, abs_det_jac_affine_BLUE*0.027777777777777766, abs_det_jac_affine_BLUE*0.027777777777777728, abs_det_jac_affine_BLUE*0.027777777777777748, abs_det_jac_affine_BLUE*0.11111111111111105, abs_det_jac_affine_BLUE*0.027777777777777766, abs_det_jac_affine_BLUE*0.11111111111111112, abs_det_jac_affine_BLUE*0.4444444444444447};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_0_1 = 0.0;
             walberla::float64 q_acc_0_2 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_1_2 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const walberla::float64 q_tmp_0_0 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q]*_data_q_w[q];
                const walberla::float64 q_tmp_0_1 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q + 1]*_data_q_w[q];
                const walberla::float64 q_tmp_0_2 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q + 2]*_data_q_w[q];
                const walberla::float64 q_tmp_1_1 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q + 3]*_data_q_w[q];
                const walberla::float64 q_tmp_1_2 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q + 4]*_data_q_w[q];
                const walberla::float64 q_tmp_2_2 = _data_phi_psi_det_jac_aff_0_0_BLUE[6*q + 5]*_data_q_w[q];
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
             }
             const walberla::float64 elMat_0_0 = q_acc_0_0;
             const walberla::float64 elMat_0_1 = q_acc_0_1;
             const walberla::float64 elMat_0_2 = q_acc_0_2;
             const walberla::float64 elMat_1_0 = q_acc_0_1;
             const walberla::float64 elMat_1_1 = q_acc_1_1;
             const walberla::float64 elMat_1_2 = q_acc_1_2;
             const walberla::float64 elMat_2_0 = q_acc_0_2;
             const walberla::float64 elMat_2_1 = q_acc_1_2;
             const walberla::float64 elMat_2_2 = q_acc_2_2;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 3 );
             std::vector< walberla::float64 > _data_mat( 9 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((walberla::float64)(elMat_0_0));
             _data_mat[1] = ((walberla::float64)(elMat_0_1));
             _data_mat[2] = ((walberla::float64)(elMat_0_2));
             _data_mat[3] = ((walberla::float64)(elMat_1_0));
             _data_mat[4] = ((walberla::float64)(elMat_1_1));
             _data_mat[5] = ((walberla::float64)(elMat_1_2));
             _data_mat[6] = ((walberla::float64)(elMat_2_0));
             _data_mat[7] = ((walberla::float64)(elMat_2_1));
             _data_mat[8] = ((walberla::float64)(elMat_2_2));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
