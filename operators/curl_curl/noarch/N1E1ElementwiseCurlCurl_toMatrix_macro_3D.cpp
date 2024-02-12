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



























#include "../N1E1ElementwiseCurlCurl.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void N1E1ElementwiseCurlCurl::toMatrix_macro_3D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_src, const Cell& cell, const uint_t level, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_0comp2, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_1comp2, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, walberla::float64 macro_vertex_coord_id_2comp2, walberla::float64 macro_vertex_coord_id_3comp0, walberla::float64 macro_vertex_coord_id_3comp1, walberla::float64 macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 tmp_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const walberla::float64 p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 jac_affine_0_0_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_1_0_WHITE_UP;
       const walberla::float64 jac_affine_0_1_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_2_0_WHITE_UP;
       const walberla::float64 jac_affine_0_2_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_3_0_WHITE_UP;
       const walberla::float64 jac_affine_1_0_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_1_1_WHITE_UP;
       const walberla::float64 jac_affine_1_1_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_2_1_WHITE_UP;
       const walberla::float64 jac_affine_1_2_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_3_1_WHITE_UP;
       const walberla::float64 jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const walberla::float64 jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const walberla::float64 jac_affine_2_2_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_3_2_WHITE_UP;
       const walberla::float64 abs_det_jac_affine_WHITE_UP = abs(jac_affine_0_0_WHITE_UP*jac_affine_1_1_WHITE_UP*jac_affine_2_2_WHITE_UP - jac_affine_0_0_WHITE_UP*jac_affine_1_2_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_0_1_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_2_WHITE_UP + jac_affine_0_1_WHITE_UP*jac_affine_1_2_WHITE_UP*jac_affine_2_0_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_0_2_WHITE_UP*jac_affine_1_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 Dummy_223 = 1.0 / (abs_det_jac_affine_WHITE_UP)*0.16666666666666666;
       const walberla::float64 tmp_1 = jac_affine_0_0_WHITE_UP*4.0;
       const walberla::float64 tmp_2 = jac_affine_1_0_WHITE_UP*4.0;
       const walberla::float64 tmp_3 = jac_affine_2_0_WHITE_UP*4.0;
       const walberla::float64 tmp_4 = Dummy_223*(-jac_affine_0_1_WHITE_UP*tmp_1 - jac_affine_1_1_WHITE_UP*tmp_2 - jac_affine_2_1_WHITE_UP*tmp_3);
       const walberla::float64 tmp_5 = Dummy_223*(jac_affine_0_2_WHITE_UP*tmp_1 + jac_affine_1_2_WHITE_UP*tmp_2 + jac_affine_2_2_WHITE_UP*tmp_3);
       const walberla::float64 tmp_6 = jac_affine_0_0_WHITE_UP*2.0;
       const walberla::float64 tmp_7 = jac_affine_0_1_WHITE_UP*2.0;
       const walberla::float64 tmp_8 = -tmp_6 + tmp_7;
       const walberla::float64 tmp_9 = jac_affine_1_0_WHITE_UP*2.0;
       const walberla::float64 tmp_10 = jac_affine_1_1_WHITE_UP*2.0;
       const walberla::float64 tmp_11 = tmp_10 - tmp_9;
       const walberla::float64 tmp_12 = jac_affine_2_0_WHITE_UP*2.0;
       const walberla::float64 tmp_13 = jac_affine_2_1_WHITE_UP*2.0;
       const walberla::float64 tmp_14 = -tmp_12 + tmp_13;
       const walberla::float64 tmp_15 = Dummy_223*(tmp_11*tmp_9 + tmp_12*tmp_14 + tmp_6*tmp_8);
       const walberla::float64 tmp_16 = jac_affine_0_2_WHITE_UP*2.0;
       const walberla::float64 tmp_17 = -tmp_16;
       const walberla::float64 tmp_18 = tmp_17 + tmp_6;
       const walberla::float64 tmp_19 = jac_affine_1_2_WHITE_UP*2.0;
       const walberla::float64 tmp_20 = -tmp_19;
       const walberla::float64 tmp_21 = tmp_20 + tmp_9;
       const walberla::float64 tmp_22 = jac_affine_2_2_WHITE_UP*2.0;
       const walberla::float64 tmp_23 = -tmp_22;
       const walberla::float64 tmp_24 = tmp_12 + tmp_23;
       const walberla::float64 tmp_25 = Dummy_223*(tmp_12*tmp_24 + tmp_18*tmp_6 + tmp_21*tmp_9);
       const walberla::float64 tmp_26 = -tmp_17 - tmp_7;
       const walberla::float64 tmp_27 = -tmp_10 - tmp_20;
       const walberla::float64 tmp_28 = -tmp_13 - tmp_23;
       const walberla::float64 tmp_29 = Dummy_223*(tmp_12*tmp_28 + tmp_26*tmp_6 + tmp_27*tmp_9);
       const walberla::float64 tmp_30 = Dummy_223*(jac_affine_0_1_WHITE_UP*jac_affine_0_2_WHITE_UP*-4.0 + jac_affine_1_1_WHITE_UP*jac_affine_1_2_WHITE_UP*-4.0 + jac_affine_2_1_WHITE_UP*jac_affine_2_2_WHITE_UP*-4.0);
       const walberla::float64 tmp_31 = Dummy_223*(-tmp_10*tmp_11 - tmp_13*tmp_14 - tmp_7*tmp_8);
       const walberla::float64 tmp_32 = Dummy_223*(-tmp_10*tmp_21 - tmp_13*tmp_24 - tmp_18*tmp_7);
       const walberla::float64 tmp_33 = Dummy_223*(-tmp_10*tmp_27 - tmp_13*tmp_28 - tmp_26*tmp_7);
       const walberla::float64 tmp_34 = Dummy_223*(tmp_11*tmp_19 + tmp_14*tmp_22 + tmp_16*tmp_8);
       const walberla::float64 tmp_35 = Dummy_223*(tmp_16*tmp_18 + tmp_19*tmp_21 + tmp_22*tmp_24);
       const walberla::float64 tmp_36 = Dummy_223*(tmp_16*tmp_26 + tmp_19*tmp_27 + tmp_22*tmp_28);
       const walberla::float64 tmp_37 = Dummy_223*(tmp_11*tmp_21 + tmp_14*tmp_24 + tmp_18*tmp_8);
       const walberla::float64 tmp_38 = Dummy_223*(tmp_11*tmp_27 + tmp_14*tmp_28 + tmp_26*tmp_8);
       const walberla::float64 tmp_39 = Dummy_223*(tmp_18*tmp_26 + tmp_21*tmp_27 + tmp_24*tmp_28);
       const walberla::float64 elMat_0_0 = Dummy_223*((jac_affine_0_0_WHITE_UP*jac_affine_0_0_WHITE_UP)*4.0 + (jac_affine_1_0_WHITE_UP*jac_affine_1_0_WHITE_UP)*4.0 + (jac_affine_2_0_WHITE_UP*jac_affine_2_0_WHITE_UP)*4.0);
       const walberla::float64 elMat_0_1 = tmp_4;
       const walberla::float64 elMat_0_2 = tmp_5;
       const walberla::float64 elMat_0_3 = tmp_15;
       const walberla::float64 elMat_0_4 = tmp_25;
       const walberla::float64 elMat_0_5 = tmp_29;
       const walberla::float64 elMat_1_0 = tmp_4;
       const walberla::float64 elMat_1_1 = Dummy_223*((jac_affine_0_1_WHITE_UP*jac_affine_0_1_WHITE_UP)*4.0 + (jac_affine_1_1_WHITE_UP*jac_affine_1_1_WHITE_UP)*4.0 + (jac_affine_2_1_WHITE_UP*jac_affine_2_1_WHITE_UP)*4.0);
       const walberla::float64 elMat_1_2 = tmp_30;
       const walberla::float64 elMat_1_3 = tmp_31;
       const walberla::float64 elMat_1_4 = tmp_32;
       const walberla::float64 elMat_1_5 = tmp_33;
       const walberla::float64 elMat_2_0 = tmp_5;
       const walberla::float64 elMat_2_1 = tmp_30;
       const walberla::float64 elMat_2_2 = Dummy_223*((jac_affine_0_2_WHITE_UP*jac_affine_0_2_WHITE_UP)*4.0 + (jac_affine_1_2_WHITE_UP*jac_affine_1_2_WHITE_UP)*4.0 + (jac_affine_2_2_WHITE_UP*jac_affine_2_2_WHITE_UP)*4.0);
       const walberla::float64 elMat_2_3 = tmp_34;
       const walberla::float64 elMat_2_4 = tmp_35;
       const walberla::float64 elMat_2_5 = tmp_36;
       const walberla::float64 elMat_3_0 = tmp_15;
       const walberla::float64 elMat_3_1 = tmp_31;
       const walberla::float64 elMat_3_2 = tmp_34;
       const walberla::float64 elMat_3_3 = Dummy_223*((tmp_11*tmp_11) + (tmp_14*tmp_14) + (tmp_8*tmp_8));
       const walberla::float64 elMat_3_4 = tmp_37;
       const walberla::float64 elMat_3_5 = tmp_38;
       const walberla::float64 elMat_4_0 = tmp_25;
       const walberla::float64 elMat_4_1 = tmp_32;
       const walberla::float64 elMat_4_2 = tmp_35;
       const walberla::float64 elMat_4_3 = tmp_37;
       const walberla::float64 elMat_4_4 = Dummy_223*((tmp_18*tmp_18) + (tmp_21*tmp_21) + (tmp_24*tmp_24));
       const walberla::float64 elMat_4_5 = tmp_39;
       const walberla::float64 elMat_5_0 = tmp_29;
       const walberla::float64 elMat_5_1 = tmp_33;
       const walberla::float64 elMat_5_2 = tmp_36;
       const walberla::float64 elMat_5_3 = tmp_38;
       const walberla::float64 elMat_5_4 = tmp_39;
       const walberla::float64 elMat_5_5 = Dummy_223*((tmp_26*tmp_26) + (tmp_27*tmp_27) + (tmp_28*tmp_28));
       {
          /* CellType.WHITE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< walberla::float64 > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::WHITE_UP );
         
             _data_mat[0] = ((walberla::float64)((basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))*elMat_0_0));
             _data_mat[1] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*elMat_0_1));
             _data_mat[2] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*elMat_0_2));
             _data_mat[3] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*elMat_0_3));
             _data_mat[4] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*elMat_0_4));
             _data_mat[5] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*elMat_0_5));
             _data_mat[6] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*elMat_1_0));
             _data_mat[7] = ((walberla::float64)((basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))*elMat_1_1));
             _data_mat[8] = ((walberla::float64)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*elMat_1_2));
             _data_mat[9] = ((walberla::float64)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*elMat_1_3));
             _data_mat[10] = ((walberla::float64)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*elMat_1_4));
             _data_mat[11] = ((walberla::float64)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*elMat_1_5));
             _data_mat[12] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*elMat_2_0));
             _data_mat[13] = ((walberla::float64)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*elMat_2_1));
             _data_mat[14] = ((walberla::float64)((basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))*elMat_2_2));
             _data_mat[15] = ((walberla::float64)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*elMat_2_3));
             _data_mat[16] = ((walberla::float64)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*elMat_2_4));
             _data_mat[17] = ((walberla::float64)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*elMat_2_5));
             _data_mat[18] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*elMat_3_0));
             _data_mat[19] = ((walberla::float64)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*elMat_3_1));
             _data_mat[20] = ((walberla::float64)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*elMat_3_2));
             _data_mat[21] = ((walberla::float64)((basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))*elMat_3_3));
             _data_mat[22] = ((walberla::float64)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*elMat_3_4));
             _data_mat[23] = ((walberla::float64)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*elMat_3_5));
             _data_mat[24] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*elMat_4_0));
             _data_mat[25] = ((walberla::float64)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*elMat_4_1));
             _data_mat[26] = ((walberla::float64)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*elMat_4_2));
             _data_mat[27] = ((walberla::float64)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*elMat_4_3));
             _data_mat[28] = ((walberla::float64)((basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))*elMat_4_4));
             _data_mat[29] = ((walberla::float64)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*elMat_4_5));
             _data_mat[30] = ((walberla::float64)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*elMat_5_0));
             _data_mat[31] = ((walberla::float64)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*elMat_5_1));
             _data_mat[32] = ((walberla::float64)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*elMat_5_2));
             _data_mat[33] = ((walberla::float64)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*elMat_5_3));
             _data_mat[34] = ((walberla::float64)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*elMat_5_4));
             _data_mat[35] = ((walberla::float64)((basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))*elMat_5_5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_0_WHITE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_2_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_3_WHITE_DOWN = tmp_1_WHITE_DOWN + tmp_2_WHITE_DOWN;
       const walberla::float64 tmp_4_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_5_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_6_WHITE_DOWN = tmp_4_WHITE_DOWN + tmp_5_WHITE_DOWN;
       const walberla::float64 tmp_7_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_8_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_9_WHITE_DOWN = tmp_7_WHITE_DOWN + tmp_8_WHITE_DOWN;
       const walberla::float64 tmp_10_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_11_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_12_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_WHITE_DOWN = tmp_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_1_WHITE_DOWN = tmp_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_2_WHITE_DOWN = tmp_9_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_0_WHITE_DOWN = tmp_10_WHITE_DOWN + tmp_2_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_1_WHITE_DOWN = tmp_11_WHITE_DOWN + tmp_5_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_2_WHITE_DOWN = tmp_12_WHITE_DOWN + tmp_8_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_0_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_10_WHITE_DOWN + tmp_1_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_1_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_11_WHITE_DOWN + tmp_4_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_2_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_12_WHITE_DOWN + tmp_7_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_0_WHITE_DOWN = tmp_10_WHITE_DOWN + tmp_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_1_WHITE_DOWN = tmp_11_WHITE_DOWN + tmp_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_2_WHITE_DOWN = tmp_12_WHITE_DOWN + tmp_9_WHITE_DOWN;
       const walberla::float64 jac_affine_0_0_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_1_0_WHITE_DOWN;
       const walberla::float64 jac_affine_0_1_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_2_0_WHITE_DOWN;
       const walberla::float64 jac_affine_0_2_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_3_0_WHITE_DOWN;
       const walberla::float64 jac_affine_1_0_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_1_1_WHITE_DOWN;
       const walberla::float64 jac_affine_1_1_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_2_1_WHITE_DOWN;
       const walberla::float64 jac_affine_1_2_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_3_1_WHITE_DOWN;
       const walberla::float64 jac_affine_2_0_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_1_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_1_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_2_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_2_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_3_2_WHITE_DOWN;
       const walberla::float64 abs_det_jac_affine_WHITE_DOWN = abs(jac_affine_0_0_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN - jac_affine_0_0_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_0_1_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN + jac_affine_0_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_0_2_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 Dummy_224 = 1.0 / (abs_det_jac_affine_WHITE_DOWN)*0.16666666666666666;
       const walberla::float64 Dummy_225 = jac_affine_0_0_WHITE_DOWN*4.0;
       const walberla::float64 Dummy_226 = jac_affine_1_0_WHITE_DOWN*4.0;
       const walberla::float64 Dummy_227 = jac_affine_2_0_WHITE_DOWN*4.0;
       const walberla::float64 Dummy_228 = Dummy_224*(-Dummy_225*jac_affine_0_1_WHITE_DOWN - Dummy_226*jac_affine_1_1_WHITE_DOWN - Dummy_227*jac_affine_2_1_WHITE_DOWN);
       const walberla::float64 Dummy_229 = Dummy_224*(Dummy_225*jac_affine_0_2_WHITE_DOWN + Dummy_226*jac_affine_1_2_WHITE_DOWN + Dummy_227*jac_affine_2_2_WHITE_DOWN);
       const walberla::float64 Dummy_230 = jac_affine_0_0_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_231 = jac_affine_0_1_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_232 = -Dummy_230 + Dummy_231;
       const walberla::float64 Dummy_233 = jac_affine_1_0_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_234 = jac_affine_1_1_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_235 = -Dummy_233 + Dummy_234;
       const walberla::float64 Dummy_236 = jac_affine_2_0_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_237 = jac_affine_2_1_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_238 = -Dummy_236 + Dummy_237;
       const walberla::float64 Dummy_239 = Dummy_224*(Dummy_230*Dummy_232 + Dummy_233*Dummy_235 + Dummy_236*Dummy_238);
       const walberla::float64 Dummy_240 = jac_affine_0_2_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_241 = -Dummy_240;
       const walberla::float64 Dummy_242 = Dummy_230 + Dummy_241;
       const walberla::float64 Dummy_243 = jac_affine_1_2_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_244 = -Dummy_243;
       const walberla::float64 Dummy_245 = Dummy_233 + Dummy_244;
       const walberla::float64 Dummy_246 = jac_affine_2_2_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_247 = -Dummy_246;
       const walberla::float64 Dummy_248 = Dummy_236 + Dummy_247;
       const walberla::float64 Dummy_249 = Dummy_224*(Dummy_230*Dummy_242 + Dummy_233*Dummy_245 + Dummy_236*Dummy_248);
       const walberla::float64 Dummy_250 = -Dummy_231 - Dummy_241;
       const walberla::float64 Dummy_251 = -Dummy_234 - Dummy_244;
       const walberla::float64 Dummy_252 = -Dummy_237 - Dummy_247;
       const walberla::float64 Dummy_253 = Dummy_224*(Dummy_230*Dummy_250 + Dummy_233*Dummy_251 + Dummy_236*Dummy_252);
       const walberla::float64 Dummy_254 = Dummy_224*(jac_affine_0_1_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN*-4.0 + jac_affine_1_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*-4.0 + jac_affine_2_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN*-4.0);
       const walberla::float64 Dummy_255 = Dummy_224*(-Dummy_231*Dummy_232 - Dummy_234*Dummy_235 - Dummy_237*Dummy_238);
       const walberla::float64 Dummy_256 = Dummy_224*(-Dummy_231*Dummy_242 - Dummy_234*Dummy_245 - Dummy_237*Dummy_248);
       const walberla::float64 Dummy_257 = Dummy_224*(-Dummy_231*Dummy_250 - Dummy_234*Dummy_251 - Dummy_237*Dummy_252);
       const walberla::float64 Dummy_258 = Dummy_224*(Dummy_232*Dummy_240 + Dummy_235*Dummy_243 + Dummy_238*Dummy_246);
       const walberla::float64 Dummy_259 = Dummy_224*(Dummy_240*Dummy_242 + Dummy_243*Dummy_245 + Dummy_246*Dummy_248);
       const walberla::float64 Dummy_260 = Dummy_224*(Dummy_240*Dummy_250 + Dummy_243*Dummy_251 + Dummy_246*Dummy_252);
       const walberla::float64 Dummy_261 = Dummy_224*(Dummy_232*Dummy_242 + Dummy_235*Dummy_245 + Dummy_238*Dummy_248);
       const walberla::float64 Dummy_262 = Dummy_224*(Dummy_232*Dummy_250 + Dummy_235*Dummy_251 + Dummy_238*Dummy_252);
       const walberla::float64 Dummy_263 = Dummy_224*(Dummy_242*Dummy_250 + Dummy_245*Dummy_251 + Dummy_248*Dummy_252);
       const walberla::float64 Dummy_264 = Dummy_224*((jac_affine_0_0_WHITE_DOWN*jac_affine_0_0_WHITE_DOWN)*4.0 + (jac_affine_1_0_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN)*4.0 + (jac_affine_2_0_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN)*4.0);
       const walberla::float64 Dummy_265 = Dummy_228;
       const walberla::float64 Dummy_266 = Dummy_229;
       const walberla::float64 Dummy_267 = Dummy_239;
       const walberla::float64 Dummy_268 = Dummy_249;
       const walberla::float64 Dummy_269 = Dummy_253;
       const walberla::float64 Dummy_270 = Dummy_228;
       const walberla::float64 Dummy_271 = Dummy_224*((jac_affine_0_1_WHITE_DOWN*jac_affine_0_1_WHITE_DOWN)*4.0 + (jac_affine_1_1_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN)*4.0 + (jac_affine_2_1_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN)*4.0);
       const walberla::float64 Dummy_272 = Dummy_254;
       const walberla::float64 Dummy_273 = Dummy_255;
       const walberla::float64 Dummy_274 = Dummy_256;
       const walberla::float64 Dummy_275 = Dummy_257;
       const walberla::float64 Dummy_276 = Dummy_229;
       const walberla::float64 Dummy_277 = Dummy_254;
       const walberla::float64 Dummy_278 = Dummy_224*((jac_affine_0_2_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN)*4.0 + (jac_affine_1_2_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN)*4.0 + (jac_affine_2_2_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN)*4.0);
       const walberla::float64 Dummy_279 = Dummy_258;
       const walberla::float64 Dummy_280 = Dummy_259;
       const walberla::float64 Dummy_281 = Dummy_260;
       const walberla::float64 Dummy_282 = Dummy_239;
       const walberla::float64 Dummy_283 = Dummy_255;
       const walberla::float64 Dummy_284 = Dummy_258;
       const walberla::float64 Dummy_285 = Dummy_224*((Dummy_232*Dummy_232) + (Dummy_235*Dummy_235) + (Dummy_238*Dummy_238));
       const walberla::float64 Dummy_286 = Dummy_261;
       const walberla::float64 Dummy_287 = Dummy_262;
       const walberla::float64 Dummy_288 = Dummy_249;
       const walberla::float64 Dummy_289 = Dummy_256;
       const walberla::float64 Dummy_290 = Dummy_259;
       const walberla::float64 Dummy_291 = Dummy_261;
       const walberla::float64 Dummy_292 = Dummy_224*((Dummy_242*Dummy_242) + (Dummy_245*Dummy_245) + (Dummy_248*Dummy_248));
       const walberla::float64 Dummy_293 = Dummy_263;
       const walberla::float64 Dummy_294 = Dummy_253;
       const walberla::float64 Dummy_295 = Dummy_257;
       const walberla::float64 Dummy_296 = Dummy_260;
       const walberla::float64 Dummy_297 = Dummy_262;
       const walberla::float64 Dummy_298 = Dummy_263;
       const walberla::float64 Dummy_299 = Dummy_224*((Dummy_250*Dummy_250) + (Dummy_251*Dummy_251) + (Dummy_252*Dummy_252));
       {
          /* CellType.WHITE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< walberla::float64 > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::WHITE_DOWN );
         
             _data_mat[0] = ((walberla::float64)(Dummy_264*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_265*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_266*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_267*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_268*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_269*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_270*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_271*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_272*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_273*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_274*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_275*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_276*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_277*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_278*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_279*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_280*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_281*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_282*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_283*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_284*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_285*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_286*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_287*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_288*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_289*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_290*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_291*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_292*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_293*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_294*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_295*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_296*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_297*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_298*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_299*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_0_BLUE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_2_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_3_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_4_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_5_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_6_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_0_0_BLUE_UP = tmp_1_BLUE_UP;
       const walberla::float64 p_affine_const_0_1_BLUE_UP = tmp_2_BLUE_UP;
       const walberla::float64 p_affine_const_0_2_BLUE_UP = tmp_3_BLUE_UP;
       const walberla::float64 p_affine_const_1_0_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_4_BLUE_UP;
       const walberla::float64 p_affine_const_1_1_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_5_BLUE_UP;
       const walberla::float64 p_affine_const_1_2_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_6_BLUE_UP;
       const walberla::float64 p_affine_const_2_0_BLUE_UP = tmp_1_BLUE_UP + tmp_4_BLUE_UP;
       const walberla::float64 p_affine_const_2_1_BLUE_UP = tmp_2_BLUE_UP + tmp_5_BLUE_UP;
       const walberla::float64 p_affine_const_2_2_BLUE_UP = tmp_3_BLUE_UP + tmp_6_BLUE_UP;
       const walberla::float64 p_affine_const_3_0_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_1_BLUE_UP;
       const walberla::float64 p_affine_const_3_1_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_2_BLUE_UP;
       const walberla::float64 p_affine_const_3_2_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_3_BLUE_UP;
       const walberla::float64 jac_affine_0_0_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_1_0_BLUE_UP;
       const walberla::float64 jac_affine_0_1_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_2_0_BLUE_UP;
       const walberla::float64 jac_affine_0_2_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_3_0_BLUE_UP;
       const walberla::float64 jac_affine_1_0_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_1_1_BLUE_UP;
       const walberla::float64 jac_affine_1_1_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_2_1_BLUE_UP;
       const walberla::float64 jac_affine_1_2_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_3_1_BLUE_UP;
       const walberla::float64 jac_affine_2_0_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_1_2_BLUE_UP;
       const walberla::float64 jac_affine_2_1_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_2_2_BLUE_UP;
       const walberla::float64 jac_affine_2_2_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_3_2_BLUE_UP;
       const walberla::float64 abs_det_jac_affine_BLUE_UP = abs(jac_affine_0_0_BLUE_UP*jac_affine_1_1_BLUE_UP*jac_affine_2_2_BLUE_UP - jac_affine_0_0_BLUE_UP*jac_affine_1_2_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_0_1_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_2_BLUE_UP + jac_affine_0_1_BLUE_UP*jac_affine_1_2_BLUE_UP*jac_affine_2_0_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_0_2_BLUE_UP*jac_affine_1_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 Dummy_300 = 1.0 / (abs_det_jac_affine_BLUE_UP)*0.16666666666666666;
       const walberla::float64 Dummy_301 = jac_affine_0_0_BLUE_UP*4.0;
       const walberla::float64 Dummy_302 = jac_affine_1_0_BLUE_UP*4.0;
       const walberla::float64 Dummy_303 = jac_affine_2_0_BLUE_UP*4.0;
       const walberla::float64 Dummy_304 = Dummy_300*(-Dummy_301*jac_affine_0_1_BLUE_UP - Dummy_302*jac_affine_1_1_BLUE_UP - Dummy_303*jac_affine_2_1_BLUE_UP);
       const walberla::float64 Dummy_305 = Dummy_300*(Dummy_301*jac_affine_0_2_BLUE_UP + Dummy_302*jac_affine_1_2_BLUE_UP + Dummy_303*jac_affine_2_2_BLUE_UP);
       const walberla::float64 Dummy_306 = jac_affine_0_0_BLUE_UP*2.0;
       const walberla::float64 Dummy_307 = jac_affine_0_1_BLUE_UP*2.0;
       const walberla::float64 Dummy_308 = -Dummy_306 + Dummy_307;
       const walberla::float64 Dummy_309 = jac_affine_1_0_BLUE_UP*2.0;
       const walberla::float64 Dummy_310 = jac_affine_1_1_BLUE_UP*2.0;
       const walberla::float64 Dummy_311 = -Dummy_309 + Dummy_310;
       const walberla::float64 Dummy_312 = jac_affine_2_0_BLUE_UP*2.0;
       const walberla::float64 Dummy_313 = jac_affine_2_1_BLUE_UP*2.0;
       const walberla::float64 Dummy_314 = -Dummy_312 + Dummy_313;
       const walberla::float64 Dummy_315 = Dummy_300*(Dummy_306*Dummy_308 + Dummy_309*Dummy_311 + Dummy_312*Dummy_314);
       const walberla::float64 Dummy_316 = jac_affine_0_2_BLUE_UP*2.0;
       const walberla::float64 Dummy_317 = -Dummy_316;
       const walberla::float64 Dummy_318 = Dummy_306 + Dummy_317;
       const walberla::float64 Dummy_319 = jac_affine_1_2_BLUE_UP*2.0;
       const walberla::float64 Dummy_320 = -Dummy_319;
       const walberla::float64 Dummy_321 = Dummy_309 + Dummy_320;
       const walberla::float64 Dummy_322 = jac_affine_2_2_BLUE_UP*2.0;
       const walberla::float64 Dummy_323 = -Dummy_322;
       const walberla::float64 Dummy_324 = Dummy_312 + Dummy_323;
       const walberla::float64 Dummy_325 = Dummy_300*(Dummy_306*Dummy_318 + Dummy_309*Dummy_321 + Dummy_312*Dummy_324);
       const walberla::float64 Dummy_326 = -Dummy_307 - Dummy_317;
       const walberla::float64 Dummy_327 = -Dummy_310 - Dummy_320;
       const walberla::float64 Dummy_328 = -Dummy_313 - Dummy_323;
       const walberla::float64 Dummy_329 = Dummy_300*(Dummy_306*Dummy_326 + Dummy_309*Dummy_327 + Dummy_312*Dummy_328);
       const walberla::float64 Dummy_330 = Dummy_300*(jac_affine_0_1_BLUE_UP*jac_affine_0_2_BLUE_UP*-4.0 + jac_affine_1_1_BLUE_UP*jac_affine_1_2_BLUE_UP*-4.0 + jac_affine_2_1_BLUE_UP*jac_affine_2_2_BLUE_UP*-4.0);
       const walberla::float64 Dummy_331 = Dummy_300*(-Dummy_307*Dummy_308 - Dummy_310*Dummy_311 - Dummy_313*Dummy_314);
       const walberla::float64 Dummy_332 = Dummy_300*(-Dummy_307*Dummy_318 - Dummy_310*Dummy_321 - Dummy_313*Dummy_324);
       const walberla::float64 Dummy_333 = Dummy_300*(-Dummy_307*Dummy_326 - Dummy_310*Dummy_327 - Dummy_313*Dummy_328);
       const walberla::float64 Dummy_334 = Dummy_300*(Dummy_308*Dummy_316 + Dummy_311*Dummy_319 + Dummy_314*Dummy_322);
       const walberla::float64 Dummy_335 = Dummy_300*(Dummy_316*Dummy_318 + Dummy_319*Dummy_321 + Dummy_322*Dummy_324);
       const walberla::float64 Dummy_336 = Dummy_300*(Dummy_316*Dummy_326 + Dummy_319*Dummy_327 + Dummy_322*Dummy_328);
       const walberla::float64 Dummy_337 = Dummy_300*(Dummy_308*Dummy_318 + Dummy_311*Dummy_321 + Dummy_314*Dummy_324);
       const walberla::float64 Dummy_338 = Dummy_300*(Dummy_308*Dummy_326 + Dummy_311*Dummy_327 + Dummy_314*Dummy_328);
       const walberla::float64 Dummy_339 = Dummy_300*(Dummy_318*Dummy_326 + Dummy_321*Dummy_327 + Dummy_324*Dummy_328);
       const walberla::float64 Dummy_340 = Dummy_300*((jac_affine_0_0_BLUE_UP*jac_affine_0_0_BLUE_UP)*4.0 + (jac_affine_1_0_BLUE_UP*jac_affine_1_0_BLUE_UP)*4.0 + (jac_affine_2_0_BLUE_UP*jac_affine_2_0_BLUE_UP)*4.0);
       const walberla::float64 Dummy_341 = Dummy_304;
       const walberla::float64 Dummy_342 = Dummy_305;
       const walberla::float64 Dummy_343 = Dummy_315;
       const walberla::float64 Dummy_344 = Dummy_325;
       const walberla::float64 Dummy_345 = Dummy_329;
       const walberla::float64 Dummy_346 = Dummy_304;
       const walberla::float64 Dummy_347 = Dummy_300*((jac_affine_0_1_BLUE_UP*jac_affine_0_1_BLUE_UP)*4.0 + (jac_affine_1_1_BLUE_UP*jac_affine_1_1_BLUE_UP)*4.0 + (jac_affine_2_1_BLUE_UP*jac_affine_2_1_BLUE_UP)*4.0);
       const walberla::float64 Dummy_348 = Dummy_330;
       const walberla::float64 Dummy_349 = Dummy_331;
       const walberla::float64 Dummy_350 = Dummy_332;
       const walberla::float64 Dummy_351 = Dummy_333;
       const walberla::float64 Dummy_352 = Dummy_305;
       const walberla::float64 Dummy_353 = Dummy_330;
       const walberla::float64 Dummy_354 = Dummy_300*((jac_affine_0_2_BLUE_UP*jac_affine_0_2_BLUE_UP)*4.0 + (jac_affine_1_2_BLUE_UP*jac_affine_1_2_BLUE_UP)*4.0 + (jac_affine_2_2_BLUE_UP*jac_affine_2_2_BLUE_UP)*4.0);
       const walberla::float64 Dummy_355 = Dummy_334;
       const walberla::float64 Dummy_356 = Dummy_335;
       const walberla::float64 Dummy_357 = Dummy_336;
       const walberla::float64 Dummy_358 = Dummy_315;
       const walberla::float64 Dummy_359 = Dummy_331;
       const walberla::float64 Dummy_360 = Dummy_334;
       const walberla::float64 Dummy_361 = Dummy_300*((Dummy_308*Dummy_308) + (Dummy_311*Dummy_311) + (Dummy_314*Dummy_314));
       const walberla::float64 Dummy_362 = Dummy_337;
       const walberla::float64 Dummy_363 = Dummy_338;
       const walberla::float64 Dummy_364 = Dummy_325;
       const walberla::float64 Dummy_365 = Dummy_332;
       const walberla::float64 Dummy_366 = Dummy_335;
       const walberla::float64 Dummy_367 = Dummy_337;
       const walberla::float64 Dummy_368 = Dummy_300*((Dummy_318*Dummy_318) + (Dummy_321*Dummy_321) + (Dummy_324*Dummy_324));
       const walberla::float64 Dummy_369 = Dummy_339;
       const walberla::float64 Dummy_370 = Dummy_329;
       const walberla::float64 Dummy_371 = Dummy_333;
       const walberla::float64 Dummy_372 = Dummy_336;
       const walberla::float64 Dummy_373 = Dummy_338;
       const walberla::float64 Dummy_374 = Dummy_339;
       const walberla::float64 Dummy_375 = Dummy_300*((Dummy_326*Dummy_326) + (Dummy_327*Dummy_327) + (Dummy_328*Dummy_328));
       {
          /* CellType.BLUE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< walberla::float64 > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::BLUE_UP );
         
             _data_mat[0] = ((walberla::float64)(Dummy_340*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_341*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_342*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_343*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_344*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_345*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_346*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_347*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_348*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_349*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_350*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_351*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_352*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_353*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_354*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_355*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_356*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_357*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_358*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_359*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_360*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_361*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_362*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_363*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_364*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_365*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_366*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_367*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_368*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_369*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_370*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_371*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_372*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_373*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_374*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_375*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_0_BLUE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_2_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_3_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_4_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_5_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_4_BLUE_DOWN;
       const walberla::float64 tmp_6_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_7_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_6_BLUE_DOWN;
       const walberla::float64 tmp_8_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 tmp_9_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_8_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_0_BLUE_DOWN = tmp_1_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_1_BLUE_DOWN = tmp_2_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_2_BLUE_DOWN = tmp_3_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_0_BLUE_DOWN = tmp_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_1_BLUE_DOWN = tmp_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_2_BLUE_DOWN = tmp_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_0_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_1_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_2_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_0_BLUE_DOWN = tmp_1_BLUE_DOWN + tmp_4_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_1_BLUE_DOWN = tmp_2_BLUE_DOWN + tmp_6_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_2_BLUE_DOWN = tmp_3_BLUE_DOWN + tmp_8_BLUE_DOWN;
       const walberla::float64 jac_affine_0_0_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_1_0_BLUE_DOWN;
       const walberla::float64 jac_affine_0_1_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_2_0_BLUE_DOWN;
       const walberla::float64 jac_affine_0_2_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_3_0_BLUE_DOWN;
       const walberla::float64 jac_affine_1_0_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_1_1_BLUE_DOWN;
       const walberla::float64 jac_affine_1_1_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_2_1_BLUE_DOWN;
       const walberla::float64 jac_affine_1_2_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_3_1_BLUE_DOWN;
       const walberla::float64 jac_affine_2_0_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_1_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_1_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_2_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_2_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_3_2_BLUE_DOWN;
       const walberla::float64 abs_det_jac_affine_BLUE_DOWN = abs(jac_affine_0_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN - jac_affine_0_0_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_0_1_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN + jac_affine_0_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_0_2_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 Dummy_376 = 1.0 / (abs_det_jac_affine_BLUE_DOWN)*0.16666666666666666;
       const walberla::float64 Dummy_377 = jac_affine_0_0_BLUE_DOWN*4.0;
       const walberla::float64 Dummy_378 = jac_affine_1_0_BLUE_DOWN*4.0;
       const walberla::float64 Dummy_379 = jac_affine_2_0_BLUE_DOWN*4.0;
       const walberla::float64 Dummy_380 = Dummy_376*(-Dummy_377*jac_affine_0_1_BLUE_DOWN - Dummy_378*jac_affine_1_1_BLUE_DOWN - Dummy_379*jac_affine_2_1_BLUE_DOWN);
       const walberla::float64 Dummy_381 = Dummy_376*(Dummy_377*jac_affine_0_2_BLUE_DOWN + Dummy_378*jac_affine_1_2_BLUE_DOWN + Dummy_379*jac_affine_2_2_BLUE_DOWN);
       const walberla::float64 Dummy_382 = jac_affine_0_0_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_383 = jac_affine_0_1_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_384 = -Dummy_382 + Dummy_383;
       const walberla::float64 Dummy_385 = jac_affine_1_0_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_386 = jac_affine_1_1_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_387 = -Dummy_385 + Dummy_386;
       const walberla::float64 Dummy_388 = jac_affine_2_0_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_389 = jac_affine_2_1_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_390 = -Dummy_388 + Dummy_389;
       const walberla::float64 Dummy_391 = Dummy_376*(Dummy_382*Dummy_384 + Dummy_385*Dummy_387 + Dummy_388*Dummy_390);
       const walberla::float64 Dummy_392 = jac_affine_0_2_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_393 = -Dummy_392;
       const walberla::float64 Dummy_394 = Dummy_382 + Dummy_393;
       const walberla::float64 Dummy_395 = jac_affine_1_2_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_396 = -Dummy_395;
       const walberla::float64 Dummy_397 = Dummy_385 + Dummy_396;
       const walberla::float64 Dummy_398 = jac_affine_2_2_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_399 = -Dummy_398;
       const walberla::float64 Dummy_400 = Dummy_388 + Dummy_399;
       const walberla::float64 Dummy_401 = Dummy_376*(Dummy_382*Dummy_394 + Dummy_385*Dummy_397 + Dummy_388*Dummy_400);
       const walberla::float64 Dummy_402 = -Dummy_383 - Dummy_393;
       const walberla::float64 Dummy_403 = -Dummy_386 - Dummy_396;
       const walberla::float64 Dummy_404 = -Dummy_389 - Dummy_399;
       const walberla::float64 Dummy_405 = Dummy_376*(Dummy_382*Dummy_402 + Dummy_385*Dummy_403 + Dummy_388*Dummy_404);
       const walberla::float64 Dummy_406 = Dummy_376*(jac_affine_0_1_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN*-4.0 + jac_affine_1_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*-4.0 + jac_affine_2_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN*-4.0);
       const walberla::float64 Dummy_407 = Dummy_376*(-Dummy_383*Dummy_384 - Dummy_386*Dummy_387 - Dummy_389*Dummy_390);
       const walberla::float64 Dummy_408 = Dummy_376*(-Dummy_383*Dummy_394 - Dummy_386*Dummy_397 - Dummy_389*Dummy_400);
       const walberla::float64 Dummy_409 = Dummy_376*(-Dummy_383*Dummy_402 - Dummy_386*Dummy_403 - Dummy_389*Dummy_404);
       const walberla::float64 Dummy_410 = Dummy_376*(Dummy_384*Dummy_392 + Dummy_387*Dummy_395 + Dummy_390*Dummy_398);
       const walberla::float64 Dummy_411 = Dummy_376*(Dummy_392*Dummy_394 + Dummy_395*Dummy_397 + Dummy_398*Dummy_400);
       const walberla::float64 Dummy_412 = Dummy_376*(Dummy_392*Dummy_402 + Dummy_395*Dummy_403 + Dummy_398*Dummy_404);
       const walberla::float64 Dummy_413 = Dummy_376*(Dummy_384*Dummy_394 + Dummy_387*Dummy_397 + Dummy_390*Dummy_400);
       const walberla::float64 Dummy_414 = Dummy_376*(Dummy_384*Dummy_402 + Dummy_387*Dummy_403 + Dummy_390*Dummy_404);
       const walberla::float64 Dummy_415 = Dummy_376*(Dummy_394*Dummy_402 + Dummy_397*Dummy_403 + Dummy_400*Dummy_404);
       const walberla::float64 Dummy_416 = Dummy_376*((jac_affine_0_0_BLUE_DOWN*jac_affine_0_0_BLUE_DOWN)*4.0 + (jac_affine_1_0_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN)*4.0 + (jac_affine_2_0_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN)*4.0);
       const walberla::float64 Dummy_417 = Dummy_380;
       const walberla::float64 Dummy_418 = Dummy_381;
       const walberla::float64 Dummy_419 = Dummy_391;
       const walberla::float64 Dummy_420 = Dummy_401;
       const walberla::float64 Dummy_421 = Dummy_405;
       const walberla::float64 Dummy_422 = Dummy_380;
       const walberla::float64 Dummy_423 = Dummy_376*((jac_affine_0_1_BLUE_DOWN*jac_affine_0_1_BLUE_DOWN)*4.0 + (jac_affine_1_1_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN)*4.0 + (jac_affine_2_1_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN)*4.0);
       const walberla::float64 Dummy_424 = Dummy_406;
       const walberla::float64 Dummy_425 = Dummy_407;
       const walberla::float64 Dummy_426 = Dummy_408;
       const walberla::float64 Dummy_427 = Dummy_409;
       const walberla::float64 Dummy_428 = Dummy_381;
       const walberla::float64 Dummy_429 = Dummy_406;
       const walberla::float64 Dummy_430 = Dummy_376*((jac_affine_0_2_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN)*4.0 + (jac_affine_1_2_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN)*4.0 + (jac_affine_2_2_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN)*4.0);
       const walberla::float64 Dummy_431 = Dummy_410;
       const walberla::float64 Dummy_432 = Dummy_411;
       const walberla::float64 Dummy_433 = Dummy_412;
       const walberla::float64 Dummy_434 = Dummy_391;
       const walberla::float64 Dummy_435 = Dummy_407;
       const walberla::float64 Dummy_436 = Dummy_410;
       const walberla::float64 Dummy_437 = Dummy_376*((Dummy_384*Dummy_384) + (Dummy_387*Dummy_387) + (Dummy_390*Dummy_390));
       const walberla::float64 Dummy_438 = Dummy_413;
       const walberla::float64 Dummy_439 = Dummy_414;
       const walberla::float64 Dummy_440 = Dummy_401;
       const walberla::float64 Dummy_441 = Dummy_408;
       const walberla::float64 Dummy_442 = Dummy_411;
       const walberla::float64 Dummy_443 = Dummy_413;
       const walberla::float64 Dummy_444 = Dummy_376*((Dummy_394*Dummy_394) + (Dummy_397*Dummy_397) + (Dummy_400*Dummy_400));
       const walberla::float64 Dummy_445 = Dummy_415;
       const walberla::float64 Dummy_446 = Dummy_405;
       const walberla::float64 Dummy_447 = Dummy_409;
       const walberla::float64 Dummy_448 = Dummy_412;
       const walberla::float64 Dummy_449 = Dummy_414;
       const walberla::float64 Dummy_450 = Dummy_415;
       const walberla::float64 Dummy_451 = Dummy_376*((Dummy_402*Dummy_402) + (Dummy_403*Dummy_403) + (Dummy_404*Dummy_404));
       {
          /* CellType.BLUE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< walberla::float64 > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::BLUE_DOWN );
         
             _data_mat[0] = ((walberla::float64)(Dummy_416*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_417*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_418*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_419*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_420*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_421*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_422*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_423*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_424*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_425*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_426*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_427*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_428*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_429*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_430*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_431*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_432*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_433*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_434*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_435*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_436*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_437*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_438*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_439*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_440*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_441*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_442*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_443*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_444*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_445*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_446*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_447*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_448*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_449*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_450*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_451*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_0_GREEN_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_2_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_3_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_4_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_5_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_6_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_UP = tmp_1_GREEN_UP;
       const walberla::float64 p_affine_const_0_1_GREEN_UP = tmp_2_GREEN_UP;
       const walberla::float64 p_affine_const_0_2_GREEN_UP = tmp_3_GREEN_UP;
       const walberla::float64 p_affine_const_1_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_1_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_1_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_2_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_4_GREEN_UP;
       const walberla::float64 p_affine_const_2_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_5_GREEN_UP;
       const walberla::float64 p_affine_const_2_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_6_GREEN_UP;
       const walberla::float64 p_affine_const_3_0_GREEN_UP = tmp_1_GREEN_UP + tmp_4_GREEN_UP;
       const walberla::float64 p_affine_const_3_1_GREEN_UP = tmp_2_GREEN_UP + tmp_5_GREEN_UP;
       const walberla::float64 p_affine_const_3_2_GREEN_UP = tmp_3_GREEN_UP + tmp_6_GREEN_UP;
       const walberla::float64 jac_affine_0_0_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_1_0_GREEN_UP;
       const walberla::float64 jac_affine_0_1_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_2_0_GREEN_UP;
       const walberla::float64 jac_affine_0_2_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_3_0_GREEN_UP;
       const walberla::float64 jac_affine_1_0_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_1_1_GREEN_UP;
       const walberla::float64 jac_affine_1_1_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_2_1_GREEN_UP;
       const walberla::float64 jac_affine_1_2_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_3_1_GREEN_UP;
       const walberla::float64 jac_affine_2_0_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_1_2_GREEN_UP;
       const walberla::float64 jac_affine_2_1_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_2_2_GREEN_UP;
       const walberla::float64 jac_affine_2_2_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_3_2_GREEN_UP;
       const walberla::float64 abs_det_jac_affine_GREEN_UP = abs(jac_affine_0_0_GREEN_UP*jac_affine_1_1_GREEN_UP*jac_affine_2_2_GREEN_UP - jac_affine_0_0_GREEN_UP*jac_affine_1_2_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_0_1_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_2_GREEN_UP + jac_affine_0_1_GREEN_UP*jac_affine_1_2_GREEN_UP*jac_affine_2_0_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_0_2_GREEN_UP*jac_affine_1_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 Dummy_452 = 1.0 / (abs_det_jac_affine_GREEN_UP)*0.16666666666666666;
       const walberla::float64 Dummy_453 = jac_affine_0_0_GREEN_UP*4.0;
       const walberla::float64 Dummy_454 = jac_affine_1_0_GREEN_UP*4.0;
       const walberla::float64 Dummy_455 = jac_affine_2_0_GREEN_UP*4.0;
       const walberla::float64 Dummy_456 = Dummy_452*(-Dummy_453*jac_affine_0_1_GREEN_UP - Dummy_454*jac_affine_1_1_GREEN_UP - Dummy_455*jac_affine_2_1_GREEN_UP);
       const walberla::float64 Dummy_457 = Dummy_452*(Dummy_453*jac_affine_0_2_GREEN_UP + Dummy_454*jac_affine_1_2_GREEN_UP + Dummy_455*jac_affine_2_2_GREEN_UP);
       const walberla::float64 Dummy_458 = jac_affine_0_0_GREEN_UP*2.0;
       const walberla::float64 Dummy_459 = jac_affine_0_1_GREEN_UP*2.0;
       const walberla::float64 Dummy_460 = -Dummy_458 + Dummy_459;
       const walberla::float64 Dummy_461 = jac_affine_1_0_GREEN_UP*2.0;
       const walberla::float64 Dummy_462 = jac_affine_1_1_GREEN_UP*2.0;
       const walberla::float64 Dummy_463 = -Dummy_461 + Dummy_462;
       const walberla::float64 Dummy_464 = jac_affine_2_0_GREEN_UP*2.0;
       const walberla::float64 Dummy_465 = jac_affine_2_1_GREEN_UP*2.0;
       const walberla::float64 Dummy_466 = -Dummy_464 + Dummy_465;
       const walberla::float64 Dummy_467 = Dummy_452*(Dummy_458*Dummy_460 + Dummy_461*Dummy_463 + Dummy_464*Dummy_466);
       const walberla::float64 Dummy_468 = jac_affine_0_2_GREEN_UP*2.0;
       const walberla::float64 Dummy_469 = -Dummy_468;
       const walberla::float64 Dummy_470 = Dummy_458 + Dummy_469;
       const walberla::float64 Dummy_471 = jac_affine_1_2_GREEN_UP*2.0;
       const walberla::float64 Dummy_472 = -Dummy_471;
       const walberla::float64 Dummy_473 = Dummy_461 + Dummy_472;
       const walberla::float64 Dummy_474 = jac_affine_2_2_GREEN_UP*2.0;
       const walberla::float64 Dummy_475 = -Dummy_474;
       const walberla::float64 Dummy_476 = Dummy_464 + Dummy_475;
       const walberla::float64 Dummy_477 = Dummy_452*(Dummy_458*Dummy_470 + Dummy_461*Dummy_473 + Dummy_464*Dummy_476);
       const walberla::float64 Dummy_478 = -Dummy_459 - Dummy_469;
       const walberla::float64 Dummy_479 = -Dummy_462 - Dummy_472;
       const walberla::float64 Dummy_480 = -Dummy_465 - Dummy_475;
       const walberla::float64 Dummy_481 = Dummy_452*(Dummy_458*Dummy_478 + Dummy_461*Dummy_479 + Dummy_464*Dummy_480);
       const walberla::float64 Dummy_482 = Dummy_452*(jac_affine_0_1_GREEN_UP*jac_affine_0_2_GREEN_UP*-4.0 + jac_affine_1_1_GREEN_UP*jac_affine_1_2_GREEN_UP*-4.0 + jac_affine_2_1_GREEN_UP*jac_affine_2_2_GREEN_UP*-4.0);
       const walberla::float64 Dummy_483 = Dummy_452*(-Dummy_459*Dummy_460 - Dummy_462*Dummy_463 - Dummy_465*Dummy_466);
       const walberla::float64 Dummy_484 = Dummy_452*(-Dummy_459*Dummy_470 - Dummy_462*Dummy_473 - Dummy_465*Dummy_476);
       const walberla::float64 Dummy_485 = Dummy_452*(-Dummy_459*Dummy_478 - Dummy_462*Dummy_479 - Dummy_465*Dummy_480);
       const walberla::float64 Dummy_486 = Dummy_452*(Dummy_460*Dummy_468 + Dummy_463*Dummy_471 + Dummy_466*Dummy_474);
       const walberla::float64 Dummy_487 = Dummy_452*(Dummy_468*Dummy_470 + Dummy_471*Dummy_473 + Dummy_474*Dummy_476);
       const walberla::float64 Dummy_488 = Dummy_452*(Dummy_468*Dummy_478 + Dummy_471*Dummy_479 + Dummy_474*Dummy_480);
       const walberla::float64 Dummy_489 = Dummy_452*(Dummy_460*Dummy_470 + Dummy_463*Dummy_473 + Dummy_466*Dummy_476);
       const walberla::float64 Dummy_490 = Dummy_452*(Dummy_460*Dummy_478 + Dummy_463*Dummy_479 + Dummy_466*Dummy_480);
       const walberla::float64 Dummy_491 = Dummy_452*(Dummy_470*Dummy_478 + Dummy_473*Dummy_479 + Dummy_476*Dummy_480);
       const walberla::float64 Dummy_492 = Dummy_452*((jac_affine_0_0_GREEN_UP*jac_affine_0_0_GREEN_UP)*4.0 + (jac_affine_1_0_GREEN_UP*jac_affine_1_0_GREEN_UP)*4.0 + (jac_affine_2_0_GREEN_UP*jac_affine_2_0_GREEN_UP)*4.0);
       const walberla::float64 Dummy_493 = Dummy_456;
       const walberla::float64 Dummy_494 = Dummy_457;
       const walberla::float64 Dummy_495 = Dummy_467;
       const walberla::float64 Dummy_496 = Dummy_477;
       const walberla::float64 Dummy_497 = Dummy_481;
       const walberla::float64 Dummy_498 = Dummy_456;
       const walberla::float64 Dummy_499 = Dummy_452*((jac_affine_0_1_GREEN_UP*jac_affine_0_1_GREEN_UP)*4.0 + (jac_affine_1_1_GREEN_UP*jac_affine_1_1_GREEN_UP)*4.0 + (jac_affine_2_1_GREEN_UP*jac_affine_2_1_GREEN_UP)*4.0);
       const walberla::float64 Dummy_500 = Dummy_482;
       const walberla::float64 Dummy_501 = Dummy_483;
       const walberla::float64 Dummy_502 = Dummy_484;
       const walberla::float64 Dummy_503 = Dummy_485;
       const walberla::float64 Dummy_504 = Dummy_457;
       const walberla::float64 Dummy_505 = Dummy_482;
       const walberla::float64 Dummy_506 = Dummy_452*((jac_affine_0_2_GREEN_UP*jac_affine_0_2_GREEN_UP)*4.0 + (jac_affine_1_2_GREEN_UP*jac_affine_1_2_GREEN_UP)*4.0 + (jac_affine_2_2_GREEN_UP*jac_affine_2_2_GREEN_UP)*4.0);
       const walberla::float64 Dummy_507 = Dummy_486;
       const walberla::float64 Dummy_508 = Dummy_487;
       const walberla::float64 Dummy_509 = Dummy_488;
       const walberla::float64 Dummy_510 = Dummy_467;
       const walberla::float64 Dummy_511 = Dummy_483;
       const walberla::float64 Dummy_512 = Dummy_486;
       const walberla::float64 Dummy_513 = Dummy_452*((Dummy_460*Dummy_460) + (Dummy_463*Dummy_463) + (Dummy_466*Dummy_466));
       const walberla::float64 Dummy_514 = Dummy_489;
       const walberla::float64 Dummy_515 = Dummy_490;
       const walberla::float64 Dummy_516 = Dummy_477;
       const walberla::float64 Dummy_517 = Dummy_484;
       const walberla::float64 Dummy_518 = Dummy_487;
       const walberla::float64 Dummy_519 = Dummy_489;
       const walberla::float64 Dummy_520 = Dummy_452*((Dummy_470*Dummy_470) + (Dummy_473*Dummy_473) + (Dummy_476*Dummy_476));
       const walberla::float64 Dummy_521 = Dummy_491;
       const walberla::float64 Dummy_522 = Dummy_481;
       const walberla::float64 Dummy_523 = Dummy_485;
       const walberla::float64 Dummy_524 = Dummy_488;
       const walberla::float64 Dummy_525 = Dummy_490;
       const walberla::float64 Dummy_526 = Dummy_491;
       const walberla::float64 Dummy_527 = Dummy_452*((Dummy_478*Dummy_478) + (Dummy_479*Dummy_479) + (Dummy_480*Dummy_480));
       {
          /* CellType.GREEN_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< walberla::float64 > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::GREEN_UP );
         
             _data_mat[0] = ((walberla::float64)(Dummy_492*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_493*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_494*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_495*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_496*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_497*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_498*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_499*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_500*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_501*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_502*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_503*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_504*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_505*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_506*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_507*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_508*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_509*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_510*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_511*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_512*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_513*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_514*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_515*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_516*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_517*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_518*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_519*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_520*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_521*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_522*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_523*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_524*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_525*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_526*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_527*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_0_GREEN_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_2_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_3_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_4_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_5_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_6_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_7_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_8_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_9_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_DOWN = tmp_1_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_1_GREEN_DOWN = tmp_2_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_2_GREEN_DOWN = tmp_3_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_0_GREEN_DOWN = tmp_1_GREEN_DOWN + tmp_4_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_1_GREEN_DOWN = tmp_2_GREEN_DOWN + tmp_5_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_2_GREEN_DOWN = tmp_3_GREEN_DOWN + tmp_6_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_0_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_4_GREEN_DOWN + tmp_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_1_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_5_GREEN_DOWN + tmp_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_2_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_6_GREEN_DOWN + tmp_9_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_0_GREEN_DOWN = tmp_1_GREEN_DOWN + tmp_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_1_GREEN_DOWN = tmp_2_GREEN_DOWN + tmp_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_2_GREEN_DOWN = tmp_3_GREEN_DOWN + tmp_9_GREEN_DOWN;
       const walberla::float64 jac_affine_0_0_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_1_0_GREEN_DOWN;
       const walberla::float64 jac_affine_0_1_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_2_0_GREEN_DOWN;
       const walberla::float64 jac_affine_0_2_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_3_0_GREEN_DOWN;
       const walberla::float64 jac_affine_1_0_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_1_1_GREEN_DOWN;
       const walberla::float64 jac_affine_1_1_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_2_1_GREEN_DOWN;
       const walberla::float64 jac_affine_1_2_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_3_1_GREEN_DOWN;
       const walberla::float64 jac_affine_2_0_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_1_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_1_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_2_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_2_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_3_2_GREEN_DOWN;
       const walberla::float64 abs_det_jac_affine_GREEN_DOWN = abs(jac_affine_0_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN - jac_affine_0_0_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_0_1_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN + jac_affine_0_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_0_2_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 Dummy_528 = 1.0 / (abs_det_jac_affine_GREEN_DOWN)*0.16666666666666666;
       const walberla::float64 Dummy_529 = jac_affine_0_0_GREEN_DOWN*4.0;
       const walberla::float64 Dummy_530 = jac_affine_1_0_GREEN_DOWN*4.0;
       const walberla::float64 Dummy_531 = jac_affine_2_0_GREEN_DOWN*4.0;
       const walberla::float64 Dummy_532 = Dummy_528*(-Dummy_529*jac_affine_0_1_GREEN_DOWN - Dummy_530*jac_affine_1_1_GREEN_DOWN - Dummy_531*jac_affine_2_1_GREEN_DOWN);
       const walberla::float64 Dummy_533 = Dummy_528*(Dummy_529*jac_affine_0_2_GREEN_DOWN + Dummy_530*jac_affine_1_2_GREEN_DOWN + Dummy_531*jac_affine_2_2_GREEN_DOWN);
       const walberla::float64 Dummy_534 = jac_affine_0_0_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_535 = jac_affine_0_1_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_536 = -Dummy_534 + Dummy_535;
       const walberla::float64 Dummy_537 = jac_affine_1_0_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_538 = jac_affine_1_1_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_539 = -Dummy_537 + Dummy_538;
       const walberla::float64 Dummy_540 = jac_affine_2_0_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_541 = jac_affine_2_1_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_542 = -Dummy_540 + Dummy_541;
       const walberla::float64 Dummy_543 = Dummy_528*(Dummy_534*Dummy_536 + Dummy_537*Dummy_539 + Dummy_540*Dummy_542);
       const walberla::float64 Dummy_544 = jac_affine_0_2_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_545 = -Dummy_544;
       const walberla::float64 Dummy_546 = Dummy_534 + Dummy_545;
       const walberla::float64 Dummy_547 = jac_affine_1_2_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_548 = -Dummy_547;
       const walberla::float64 Dummy_549 = Dummy_537 + Dummy_548;
       const walberla::float64 Dummy_550 = jac_affine_2_2_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_551 = -Dummy_550;
       const walberla::float64 Dummy_552 = Dummy_540 + Dummy_551;
       const walberla::float64 Dummy_553 = Dummy_528*(Dummy_534*Dummy_546 + Dummy_537*Dummy_549 + Dummy_540*Dummy_552);
       const walberla::float64 Dummy_554 = -Dummy_535 - Dummy_545;
       const walberla::float64 Dummy_555 = -Dummy_538 - Dummy_548;
       const walberla::float64 Dummy_556 = -Dummy_541 - Dummy_551;
       const walberla::float64 Dummy_557 = Dummy_528*(Dummy_534*Dummy_554 + Dummy_537*Dummy_555 + Dummy_540*Dummy_556);
       const walberla::float64 Dummy_558 = Dummy_528*(jac_affine_0_1_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN*-4.0 + jac_affine_1_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*-4.0 + jac_affine_2_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN*-4.0);
       const walberla::float64 Dummy_559 = Dummy_528*(-Dummy_535*Dummy_536 - Dummy_538*Dummy_539 - Dummy_541*Dummy_542);
       const walberla::float64 Dummy_560 = Dummy_528*(-Dummy_535*Dummy_546 - Dummy_538*Dummy_549 - Dummy_541*Dummy_552);
       const walberla::float64 Dummy_561 = Dummy_528*(-Dummy_535*Dummy_554 - Dummy_538*Dummy_555 - Dummy_541*Dummy_556);
       const walberla::float64 Dummy_562 = Dummy_528*(Dummy_536*Dummy_544 + Dummy_539*Dummy_547 + Dummy_542*Dummy_550);
       const walberla::float64 Dummy_563 = Dummy_528*(Dummy_544*Dummy_546 + Dummy_547*Dummy_549 + Dummy_550*Dummy_552);
       const walberla::float64 Dummy_564 = Dummy_528*(Dummy_544*Dummy_554 + Dummy_547*Dummy_555 + Dummy_550*Dummy_556);
       const walberla::float64 Dummy_565 = Dummy_528*(Dummy_536*Dummy_546 + Dummy_539*Dummy_549 + Dummy_542*Dummy_552);
       const walberla::float64 Dummy_566 = Dummy_528*(Dummy_536*Dummy_554 + Dummy_539*Dummy_555 + Dummy_542*Dummy_556);
       const walberla::float64 Dummy_567 = Dummy_528*(Dummy_546*Dummy_554 + Dummy_549*Dummy_555 + Dummy_552*Dummy_556);
       const walberla::float64 Dummy_568 = Dummy_528*((jac_affine_0_0_GREEN_DOWN*jac_affine_0_0_GREEN_DOWN)*4.0 + (jac_affine_1_0_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN)*4.0 + (jac_affine_2_0_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN)*4.0);
       const walberla::float64 Dummy_569 = Dummy_532;
       const walberla::float64 Dummy_570 = Dummy_533;
       const walberla::float64 Dummy_571 = Dummy_543;
       const walberla::float64 Dummy_572 = Dummy_553;
       const walberla::float64 Dummy_573 = Dummy_557;
       const walberla::float64 Dummy_574 = Dummy_532;
       const walberla::float64 Dummy_575 = Dummy_528*((jac_affine_0_1_GREEN_DOWN*jac_affine_0_1_GREEN_DOWN)*4.0 + (jac_affine_1_1_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN)*4.0 + (jac_affine_2_1_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN)*4.0);
       const walberla::float64 Dummy_576 = Dummy_558;
       const walberla::float64 Dummy_577 = Dummy_559;
       const walberla::float64 Dummy_578 = Dummy_560;
       const walberla::float64 Dummy_579 = Dummy_561;
       const walberla::float64 Dummy_580 = Dummy_533;
       const walberla::float64 Dummy_581 = Dummy_558;
       const walberla::float64 Dummy_582 = Dummy_528*((jac_affine_0_2_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN)*4.0 + (jac_affine_1_2_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN)*4.0 + (jac_affine_2_2_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN)*4.0);
       const walberla::float64 Dummy_583 = Dummy_562;
       const walberla::float64 Dummy_584 = Dummy_563;
       const walberla::float64 Dummy_585 = Dummy_564;
       const walberla::float64 Dummy_586 = Dummy_543;
       const walberla::float64 Dummy_587 = Dummy_559;
       const walberla::float64 Dummy_588 = Dummy_562;
       const walberla::float64 Dummy_589 = Dummy_528*((Dummy_536*Dummy_536) + (Dummy_539*Dummy_539) + (Dummy_542*Dummy_542));
       const walberla::float64 Dummy_590 = Dummy_565;
       const walberla::float64 Dummy_591 = Dummy_566;
       const walberla::float64 Dummy_592 = Dummy_553;
       const walberla::float64 Dummy_593 = Dummy_560;
       const walberla::float64 Dummy_594 = Dummy_563;
       const walberla::float64 Dummy_595 = Dummy_565;
       const walberla::float64 Dummy_596 = Dummy_528*((Dummy_546*Dummy_546) + (Dummy_549*Dummy_549) + (Dummy_552*Dummy_552));
       const walberla::float64 Dummy_597 = Dummy_567;
       const walberla::float64 Dummy_598 = Dummy_557;
       const walberla::float64 Dummy_599 = Dummy_561;
       const walberla::float64 Dummy_600 = Dummy_564;
       const walberla::float64 Dummy_601 = Dummy_566;
       const walberla::float64 Dummy_602 = Dummy_567;
       const walberla::float64 Dummy_603 = Dummy_528*((Dummy_554*Dummy_554) + (Dummy_555*Dummy_555) + (Dummy_556*Dummy_556));
       {
          /* CellType.GREEN_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< walberla::float64 > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::GREEN_DOWN );
         
             _data_mat[0] = ((walberla::float64)(Dummy_568*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_569*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_570*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_571*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_572*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_573*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_574*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_575*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_576*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_577*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_578*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_579*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_580*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_581*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_582*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_583*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_584*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_585*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_586*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_587*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_588*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_589*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_590*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_591*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_592*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_593*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_594*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_595*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_596*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_597*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_598*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_599*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_600*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_601*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_602*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_603*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
