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
       const walberla::float64 tmp_coords_jac_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const walberla::float64 p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
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
       const walberla::float64 tmp_kernel_op_0 = 1.0 / (abs_det_jac_affine_WHITE_UP)*0.16666666666666663;
       const walberla::float64 tmp_kernel_op_1 = jac_affine_0_0_WHITE_UP*4.0;
       const walberla::float64 tmp_kernel_op_2 = jac_affine_1_0_WHITE_UP*4.0;
       const walberla::float64 tmp_kernel_op_3 = jac_affine_2_0_WHITE_UP*4.0;
       const walberla::float64 tmp_kernel_op_4 = tmp_kernel_op_0*(-jac_affine_0_1_WHITE_UP*tmp_kernel_op_1 - jac_affine_1_1_WHITE_UP*tmp_kernel_op_2 - jac_affine_2_1_WHITE_UP*tmp_kernel_op_3);
       const walberla::float64 tmp_kernel_op_5 = tmp_kernel_op_0*(jac_affine_0_2_WHITE_UP*tmp_kernel_op_1 + jac_affine_1_2_WHITE_UP*tmp_kernel_op_2 + jac_affine_2_2_WHITE_UP*tmp_kernel_op_3);
       const walberla::float64 tmp_kernel_op_6 = jac_affine_0_0_WHITE_UP*2.0;
       const walberla::float64 tmp_kernel_op_7 = jac_affine_0_1_WHITE_UP*2.0;
       const walberla::float64 tmp_kernel_op_8 = -tmp_kernel_op_6 + tmp_kernel_op_7;
       const walberla::float64 tmp_kernel_op_9 = jac_affine_1_0_WHITE_UP*2.0;
       const walberla::float64 tmp_kernel_op_10 = jac_affine_1_1_WHITE_UP*2.0;
       const walberla::float64 tmp_kernel_op_11 = tmp_kernel_op_10 - tmp_kernel_op_9;
       const walberla::float64 tmp_kernel_op_12 = jac_affine_2_0_WHITE_UP*2.0;
       const walberla::float64 tmp_kernel_op_13 = jac_affine_2_1_WHITE_UP*2.0;
       const walberla::float64 tmp_kernel_op_14 = -tmp_kernel_op_12 + tmp_kernel_op_13;
       const walberla::float64 tmp_kernel_op_15 = tmp_kernel_op_0*(tmp_kernel_op_11*tmp_kernel_op_9 + tmp_kernel_op_12*tmp_kernel_op_14 + tmp_kernel_op_6*tmp_kernel_op_8);
       const walberla::float64 tmp_kernel_op_16 = jac_affine_0_2_WHITE_UP*2.0;
       const walberla::float64 tmp_kernel_op_17 = -tmp_kernel_op_16;
       const walberla::float64 tmp_kernel_op_18 = tmp_kernel_op_17 + tmp_kernel_op_6;
       const walberla::float64 tmp_kernel_op_19 = jac_affine_1_2_WHITE_UP*2.0;
       const walberla::float64 tmp_kernel_op_20 = -tmp_kernel_op_19;
       const walberla::float64 tmp_kernel_op_21 = tmp_kernel_op_20 + tmp_kernel_op_9;
       const walberla::float64 tmp_kernel_op_22 = jac_affine_2_2_WHITE_UP*2.0;
       const walberla::float64 tmp_kernel_op_23 = -tmp_kernel_op_22;
       const walberla::float64 tmp_kernel_op_24 = tmp_kernel_op_12 + tmp_kernel_op_23;
       const walberla::float64 tmp_kernel_op_25 = tmp_kernel_op_0*(tmp_kernel_op_12*tmp_kernel_op_24 + tmp_kernel_op_18*tmp_kernel_op_6 + tmp_kernel_op_21*tmp_kernel_op_9);
       const walberla::float64 tmp_kernel_op_26 = -tmp_kernel_op_17 - tmp_kernel_op_7;
       const walberla::float64 tmp_kernel_op_27 = -tmp_kernel_op_10 - tmp_kernel_op_20;
       const walberla::float64 tmp_kernel_op_28 = -tmp_kernel_op_13 - tmp_kernel_op_23;
       const walberla::float64 tmp_kernel_op_29 = tmp_kernel_op_0*(tmp_kernel_op_12*tmp_kernel_op_28 + tmp_kernel_op_26*tmp_kernel_op_6 + tmp_kernel_op_27*tmp_kernel_op_9);
       const walberla::float64 tmp_kernel_op_30 = tmp_kernel_op_0*(jac_affine_0_1_WHITE_UP*jac_affine_0_2_WHITE_UP*-4.0 + jac_affine_1_1_WHITE_UP*jac_affine_1_2_WHITE_UP*-4.0 + jac_affine_2_1_WHITE_UP*jac_affine_2_2_WHITE_UP*-4.0);
       const walberla::float64 tmp_kernel_op_31 = tmp_kernel_op_0*(-tmp_kernel_op_10*tmp_kernel_op_11 - tmp_kernel_op_13*tmp_kernel_op_14 - tmp_kernel_op_7*tmp_kernel_op_8);
       const walberla::float64 tmp_kernel_op_32 = tmp_kernel_op_0*(-tmp_kernel_op_10*tmp_kernel_op_21 - tmp_kernel_op_13*tmp_kernel_op_24 - tmp_kernel_op_18*tmp_kernel_op_7);
       const walberla::float64 tmp_kernel_op_33 = tmp_kernel_op_0*(-tmp_kernel_op_10*tmp_kernel_op_27 - tmp_kernel_op_13*tmp_kernel_op_28 - tmp_kernel_op_26*tmp_kernel_op_7);
       const walberla::float64 tmp_kernel_op_34 = tmp_kernel_op_0*(tmp_kernel_op_11*tmp_kernel_op_19 + tmp_kernel_op_14*tmp_kernel_op_22 + tmp_kernel_op_16*tmp_kernel_op_8);
       const walberla::float64 tmp_kernel_op_35 = tmp_kernel_op_0*(tmp_kernel_op_16*tmp_kernel_op_18 + tmp_kernel_op_19*tmp_kernel_op_21 + tmp_kernel_op_22*tmp_kernel_op_24);
       const walberla::float64 tmp_kernel_op_36 = tmp_kernel_op_0*(tmp_kernel_op_16*tmp_kernel_op_26 + tmp_kernel_op_19*tmp_kernel_op_27 + tmp_kernel_op_22*tmp_kernel_op_28);
       const walberla::float64 tmp_kernel_op_37 = tmp_kernel_op_0*(tmp_kernel_op_11*tmp_kernel_op_21 + tmp_kernel_op_14*tmp_kernel_op_24 + tmp_kernel_op_18*tmp_kernel_op_8);
       const walberla::float64 tmp_kernel_op_38 = tmp_kernel_op_0*(tmp_kernel_op_11*tmp_kernel_op_27 + tmp_kernel_op_14*tmp_kernel_op_28 + tmp_kernel_op_26*tmp_kernel_op_8);
       const walberla::float64 tmp_kernel_op_39 = tmp_kernel_op_0*(tmp_kernel_op_18*tmp_kernel_op_26 + tmp_kernel_op_21*tmp_kernel_op_27 + tmp_kernel_op_24*tmp_kernel_op_28);
       const walberla::float64 elMat_0_0 = tmp_kernel_op_0*((jac_affine_0_0_WHITE_UP*jac_affine_0_0_WHITE_UP)*4.0 + (jac_affine_1_0_WHITE_UP*jac_affine_1_0_WHITE_UP)*4.0 + (jac_affine_2_0_WHITE_UP*jac_affine_2_0_WHITE_UP)*4.0);
       const walberla::float64 elMat_0_1 = tmp_kernel_op_4;
       const walberla::float64 elMat_0_2 = tmp_kernel_op_5;
       const walberla::float64 elMat_0_3 = tmp_kernel_op_15;
       const walberla::float64 elMat_0_4 = tmp_kernel_op_25;
       const walberla::float64 elMat_0_5 = tmp_kernel_op_29;
       const walberla::float64 elMat_1_0 = tmp_kernel_op_4;
       const walberla::float64 elMat_1_1 = tmp_kernel_op_0*((jac_affine_0_1_WHITE_UP*jac_affine_0_1_WHITE_UP)*4.0 + (jac_affine_1_1_WHITE_UP*jac_affine_1_1_WHITE_UP)*4.0 + (jac_affine_2_1_WHITE_UP*jac_affine_2_1_WHITE_UP)*4.0);
       const walberla::float64 elMat_1_2 = tmp_kernel_op_30;
       const walberla::float64 elMat_1_3 = tmp_kernel_op_31;
       const walberla::float64 elMat_1_4 = tmp_kernel_op_32;
       const walberla::float64 elMat_1_5 = tmp_kernel_op_33;
       const walberla::float64 elMat_2_0 = tmp_kernel_op_5;
       const walberla::float64 elMat_2_1 = tmp_kernel_op_30;
       const walberla::float64 elMat_2_2 = tmp_kernel_op_0*((jac_affine_0_2_WHITE_UP*jac_affine_0_2_WHITE_UP)*4.0 + (jac_affine_1_2_WHITE_UP*jac_affine_1_2_WHITE_UP)*4.0 + (jac_affine_2_2_WHITE_UP*jac_affine_2_2_WHITE_UP)*4.0);
       const walberla::float64 elMat_2_3 = tmp_kernel_op_34;
       const walberla::float64 elMat_2_4 = tmp_kernel_op_35;
       const walberla::float64 elMat_2_5 = tmp_kernel_op_36;
       const walberla::float64 elMat_3_0 = tmp_kernel_op_15;
       const walberla::float64 elMat_3_1 = tmp_kernel_op_31;
       const walberla::float64 elMat_3_2 = tmp_kernel_op_34;
       const walberla::float64 elMat_3_3 = tmp_kernel_op_0*((tmp_kernel_op_11*tmp_kernel_op_11) + (tmp_kernel_op_14*tmp_kernel_op_14) + (tmp_kernel_op_8*tmp_kernel_op_8));
       const walberla::float64 elMat_3_4 = tmp_kernel_op_37;
       const walberla::float64 elMat_3_5 = tmp_kernel_op_38;
       const walberla::float64 elMat_4_0 = tmp_kernel_op_25;
       const walberla::float64 elMat_4_1 = tmp_kernel_op_32;
       const walberla::float64 elMat_4_2 = tmp_kernel_op_35;
       const walberla::float64 elMat_4_3 = tmp_kernel_op_37;
       const walberla::float64 elMat_4_4 = tmp_kernel_op_0*((tmp_kernel_op_18*tmp_kernel_op_18) + (tmp_kernel_op_21*tmp_kernel_op_21) + (tmp_kernel_op_24*tmp_kernel_op_24));
       const walberla::float64 elMat_4_5 = tmp_kernel_op_39;
       const walberla::float64 elMat_5_0 = tmp_kernel_op_29;
       const walberla::float64 elMat_5_1 = tmp_kernel_op_33;
       const walberla::float64 elMat_5_2 = tmp_kernel_op_36;
       const walberla::float64 elMat_5_3 = tmp_kernel_op_38;
       const walberla::float64 elMat_5_4 = tmp_kernel_op_39;
       const walberla::float64 elMat_5_5 = tmp_kernel_op_0*((tmp_kernel_op_26*tmp_kernel_op_26) + (tmp_kernel_op_27*tmp_kernel_op_27) + (tmp_kernel_op_28*tmp_kernel_op_28));
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
       const walberla::float64 tmp_coords_jac_0_WHITE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_2_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_3_WHITE_DOWN = tmp_coords_jac_1_WHITE_DOWN + tmp_coords_jac_2_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_4_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_coords_jac_5_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_6_WHITE_DOWN = tmp_coords_jac_4_WHITE_DOWN + tmp_coords_jac_5_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_7_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_coords_jac_8_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_coords_jac_9_WHITE_DOWN = tmp_coords_jac_7_WHITE_DOWN + tmp_coords_jac_8_WHITE_DOWN;
       const walberla::float64 tmp_coords_jac_10_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_coords_jac_11_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_coords_jac_12_WHITE_DOWN = tmp_coords_jac_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_WHITE_DOWN = tmp_coords_jac_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_1_WHITE_DOWN = tmp_coords_jac_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_2_WHITE_DOWN = tmp_coords_jac_9_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_0_WHITE_DOWN = tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_2_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_1_WHITE_DOWN = tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_5_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_2_WHITE_DOWN = tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_8_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_0_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_1_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_1_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_4_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_2_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_7_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_0_WHITE_DOWN = tmp_coords_jac_10_WHITE_DOWN + tmp_coords_jac_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_1_WHITE_DOWN = tmp_coords_jac_11_WHITE_DOWN + tmp_coords_jac_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_2_WHITE_DOWN = tmp_coords_jac_12_WHITE_DOWN + tmp_coords_jac_9_WHITE_DOWN;
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
       const walberla::float64 Dummy_222 = 1.0 / (abs_det_jac_affine_WHITE_DOWN)*0.16666666666666663;
       const walberla::float64 Dummy_223 = jac_affine_0_0_WHITE_DOWN*4.0;
       const walberla::float64 Dummy_224 = jac_affine_1_0_WHITE_DOWN*4.0;
       const walberla::float64 Dummy_225 = jac_affine_2_0_WHITE_DOWN*4.0;
       const walberla::float64 Dummy_226 = Dummy_222*(-Dummy_223*jac_affine_0_1_WHITE_DOWN - Dummy_224*jac_affine_1_1_WHITE_DOWN - Dummy_225*jac_affine_2_1_WHITE_DOWN);
       const walberla::float64 Dummy_227 = Dummy_222*(Dummy_223*jac_affine_0_2_WHITE_DOWN + Dummy_224*jac_affine_1_2_WHITE_DOWN + Dummy_225*jac_affine_2_2_WHITE_DOWN);
       const walberla::float64 Dummy_228 = jac_affine_0_0_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_229 = jac_affine_0_1_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_230 = -Dummy_228 + Dummy_229;
       const walberla::float64 Dummy_231 = jac_affine_1_0_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_232 = jac_affine_1_1_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_233 = -Dummy_231 + Dummy_232;
       const walberla::float64 Dummy_234 = jac_affine_2_0_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_235 = jac_affine_2_1_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_236 = -Dummy_234 + Dummy_235;
       const walberla::float64 Dummy_237 = Dummy_222*(Dummy_228*Dummy_230 + Dummy_231*Dummy_233 + Dummy_234*Dummy_236);
       const walberla::float64 Dummy_238 = jac_affine_0_2_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_239 = -Dummy_238;
       const walberla::float64 Dummy_240 = Dummy_228 + Dummy_239;
       const walberla::float64 Dummy_241 = jac_affine_1_2_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_242 = -Dummy_241;
       const walberla::float64 Dummy_243 = Dummy_231 + Dummy_242;
       const walberla::float64 Dummy_244 = jac_affine_2_2_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_245 = -Dummy_244;
       const walberla::float64 Dummy_246 = Dummy_234 + Dummy_245;
       const walberla::float64 Dummy_247 = Dummy_222*(Dummy_228*Dummy_240 + Dummy_231*Dummy_243 + Dummy_234*Dummy_246);
       const walberla::float64 Dummy_248 = -Dummy_229 - Dummy_239;
       const walberla::float64 Dummy_249 = -Dummy_232 - Dummy_242;
       const walberla::float64 Dummy_250 = -Dummy_235 - Dummy_245;
       const walberla::float64 Dummy_251 = Dummy_222*(Dummy_228*Dummy_248 + Dummy_231*Dummy_249 + Dummy_234*Dummy_250);
       const walberla::float64 Dummy_252 = Dummy_222*(jac_affine_0_1_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN*-4.0 + jac_affine_1_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*-4.0 + jac_affine_2_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN*-4.0);
       const walberla::float64 Dummy_253 = Dummy_222*(-Dummy_229*Dummy_230 - Dummy_232*Dummy_233 - Dummy_235*Dummy_236);
       const walberla::float64 Dummy_254 = Dummy_222*(-Dummy_229*Dummy_240 - Dummy_232*Dummy_243 - Dummy_235*Dummy_246);
       const walberla::float64 Dummy_255 = Dummy_222*(-Dummy_229*Dummy_248 - Dummy_232*Dummy_249 - Dummy_235*Dummy_250);
       const walberla::float64 Dummy_256 = Dummy_222*(Dummy_230*Dummy_238 + Dummy_233*Dummy_241 + Dummy_236*Dummy_244);
       const walberla::float64 Dummy_257 = Dummy_222*(Dummy_238*Dummy_240 + Dummy_241*Dummy_243 + Dummy_244*Dummy_246);
       const walberla::float64 Dummy_258 = Dummy_222*(Dummy_238*Dummy_248 + Dummy_241*Dummy_249 + Dummy_244*Dummy_250);
       const walberla::float64 Dummy_259 = Dummy_222*(Dummy_230*Dummy_240 + Dummy_233*Dummy_243 + Dummy_236*Dummy_246);
       const walberla::float64 Dummy_260 = Dummy_222*(Dummy_230*Dummy_248 + Dummy_233*Dummy_249 + Dummy_236*Dummy_250);
       const walberla::float64 Dummy_261 = Dummy_222*(Dummy_240*Dummy_248 + Dummy_243*Dummy_249 + Dummy_246*Dummy_250);
       const walberla::float64 Dummy_262 = Dummy_222*((jac_affine_0_0_WHITE_DOWN*jac_affine_0_0_WHITE_DOWN)*4.0 + (jac_affine_1_0_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN)*4.0 + (jac_affine_2_0_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN)*4.0);
       const walberla::float64 Dummy_263 = Dummy_226;
       const walberla::float64 Dummy_264 = Dummy_227;
       const walberla::float64 Dummy_265 = Dummy_237;
       const walberla::float64 Dummy_266 = Dummy_247;
       const walberla::float64 Dummy_267 = Dummy_251;
       const walberla::float64 Dummy_268 = Dummy_226;
       const walberla::float64 Dummy_269 = Dummy_222*((jac_affine_0_1_WHITE_DOWN*jac_affine_0_1_WHITE_DOWN)*4.0 + (jac_affine_1_1_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN)*4.0 + (jac_affine_2_1_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN)*4.0);
       const walberla::float64 Dummy_270 = Dummy_252;
       const walberla::float64 Dummy_271 = Dummy_253;
       const walberla::float64 Dummy_272 = Dummy_254;
       const walberla::float64 Dummy_273 = Dummy_255;
       const walberla::float64 Dummy_274 = Dummy_227;
       const walberla::float64 Dummy_275 = Dummy_252;
       const walberla::float64 Dummy_276 = Dummy_222*((jac_affine_0_2_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN)*4.0 + (jac_affine_1_2_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN)*4.0 + (jac_affine_2_2_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN)*4.0);
       const walberla::float64 Dummy_277 = Dummy_256;
       const walberla::float64 Dummy_278 = Dummy_257;
       const walberla::float64 Dummy_279 = Dummy_258;
       const walberla::float64 Dummy_280 = Dummy_237;
       const walberla::float64 Dummy_281 = Dummy_253;
       const walberla::float64 Dummy_282 = Dummy_256;
       const walberla::float64 Dummy_283 = Dummy_222*((Dummy_230*Dummy_230) + (Dummy_233*Dummy_233) + (Dummy_236*Dummy_236));
       const walberla::float64 Dummy_284 = Dummy_259;
       const walberla::float64 Dummy_285 = Dummy_260;
       const walberla::float64 Dummy_286 = Dummy_247;
       const walberla::float64 Dummy_287 = Dummy_254;
       const walberla::float64 Dummy_288 = Dummy_257;
       const walberla::float64 Dummy_289 = Dummy_259;
       const walberla::float64 Dummy_290 = Dummy_222*((Dummy_240*Dummy_240) + (Dummy_243*Dummy_243) + (Dummy_246*Dummy_246));
       const walberla::float64 Dummy_291 = Dummy_261;
       const walberla::float64 Dummy_292 = Dummy_251;
       const walberla::float64 Dummy_293 = Dummy_255;
       const walberla::float64 Dummy_294 = Dummy_258;
       const walberla::float64 Dummy_295 = Dummy_260;
       const walberla::float64 Dummy_296 = Dummy_261;
       const walberla::float64 Dummy_297 = Dummy_222*((Dummy_248*Dummy_248) + (Dummy_249*Dummy_249) + (Dummy_250*Dummy_250));
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
         
             _data_mat[0] = ((walberla::float64)(Dummy_262*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_263*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_264*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_265*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_266*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_267*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_268*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_269*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_270*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_271*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_272*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_273*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_274*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_275*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_276*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_277*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_278*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_279*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_280*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_281*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_282*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_283*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_284*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_285*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_286*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_287*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_288*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_289*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_290*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_291*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_292*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_293*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_294*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_295*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_296*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_297*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_coords_jac_0_BLUE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_2_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_3_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_coords_jac_4_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_5_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_coords_jac_6_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_0_0_BLUE_UP = tmp_coords_jac_1_BLUE_UP;
       const walberla::float64 p_affine_const_0_1_BLUE_UP = tmp_coords_jac_2_BLUE_UP;
       const walberla::float64 p_affine_const_0_2_BLUE_UP = tmp_coords_jac_3_BLUE_UP;
       const walberla::float64 p_affine_const_1_0_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_BLUE_UP;
       const walberla::float64 p_affine_const_1_1_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_BLUE_UP;
       const walberla::float64 p_affine_const_1_2_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_BLUE_UP;
       const walberla::float64 p_affine_const_2_0_BLUE_UP = tmp_coords_jac_1_BLUE_UP + tmp_coords_jac_4_BLUE_UP;
       const walberla::float64 p_affine_const_2_1_BLUE_UP = tmp_coords_jac_2_BLUE_UP + tmp_coords_jac_5_BLUE_UP;
       const walberla::float64 p_affine_const_2_2_BLUE_UP = tmp_coords_jac_3_BLUE_UP + tmp_coords_jac_6_BLUE_UP;
       const walberla::float64 p_affine_const_3_0_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_coords_jac_1_BLUE_UP;
       const walberla::float64 p_affine_const_3_1_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_coords_jac_2_BLUE_UP;
       const walberla::float64 p_affine_const_3_2_BLUE_UP = tmp_coords_jac_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_coords_jac_3_BLUE_UP;
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
       const walberla::float64 Dummy_298 = 1.0 / (abs_det_jac_affine_BLUE_UP)*0.16666666666666663;
       const walberla::float64 Dummy_299 = jac_affine_0_0_BLUE_UP*4.0;
       const walberla::float64 Dummy_300 = jac_affine_1_0_BLUE_UP*4.0;
       const walberla::float64 Dummy_301 = jac_affine_2_0_BLUE_UP*4.0;
       const walberla::float64 Dummy_302 = Dummy_298*(-Dummy_299*jac_affine_0_1_BLUE_UP - Dummy_300*jac_affine_1_1_BLUE_UP - Dummy_301*jac_affine_2_1_BLUE_UP);
       const walberla::float64 Dummy_303 = Dummy_298*(Dummy_299*jac_affine_0_2_BLUE_UP + Dummy_300*jac_affine_1_2_BLUE_UP + Dummy_301*jac_affine_2_2_BLUE_UP);
       const walberla::float64 Dummy_304 = jac_affine_0_0_BLUE_UP*2.0;
       const walberla::float64 Dummy_305 = jac_affine_0_1_BLUE_UP*2.0;
       const walberla::float64 Dummy_306 = -Dummy_304 + Dummy_305;
       const walberla::float64 Dummy_307 = jac_affine_1_0_BLUE_UP*2.0;
       const walberla::float64 Dummy_308 = jac_affine_1_1_BLUE_UP*2.0;
       const walberla::float64 Dummy_309 = -Dummy_307 + Dummy_308;
       const walberla::float64 Dummy_310 = jac_affine_2_0_BLUE_UP*2.0;
       const walberla::float64 Dummy_311 = jac_affine_2_1_BLUE_UP*2.0;
       const walberla::float64 Dummy_312 = -Dummy_310 + Dummy_311;
       const walberla::float64 Dummy_313 = Dummy_298*(Dummy_304*Dummy_306 + Dummy_307*Dummy_309 + Dummy_310*Dummy_312);
       const walberla::float64 Dummy_314 = jac_affine_0_2_BLUE_UP*2.0;
       const walberla::float64 Dummy_315 = -Dummy_314;
       const walberla::float64 Dummy_316 = Dummy_304 + Dummy_315;
       const walberla::float64 Dummy_317 = jac_affine_1_2_BLUE_UP*2.0;
       const walberla::float64 Dummy_318 = -Dummy_317;
       const walberla::float64 Dummy_319 = Dummy_307 + Dummy_318;
       const walberla::float64 Dummy_320 = jac_affine_2_2_BLUE_UP*2.0;
       const walberla::float64 Dummy_321 = -Dummy_320;
       const walberla::float64 Dummy_322 = Dummy_310 + Dummy_321;
       const walberla::float64 Dummy_323 = Dummy_298*(Dummy_304*Dummy_316 + Dummy_307*Dummy_319 + Dummy_310*Dummy_322);
       const walberla::float64 Dummy_324 = -Dummy_305 - Dummy_315;
       const walberla::float64 Dummy_325 = -Dummy_308 - Dummy_318;
       const walberla::float64 Dummy_326 = -Dummy_311 - Dummy_321;
       const walberla::float64 Dummy_327 = Dummy_298*(Dummy_304*Dummy_324 + Dummy_307*Dummy_325 + Dummy_310*Dummy_326);
       const walberla::float64 Dummy_328 = Dummy_298*(jac_affine_0_1_BLUE_UP*jac_affine_0_2_BLUE_UP*-4.0 + jac_affine_1_1_BLUE_UP*jac_affine_1_2_BLUE_UP*-4.0 + jac_affine_2_1_BLUE_UP*jac_affine_2_2_BLUE_UP*-4.0);
       const walberla::float64 Dummy_329 = Dummy_298*(-Dummy_305*Dummy_306 - Dummy_308*Dummy_309 - Dummy_311*Dummy_312);
       const walberla::float64 Dummy_330 = Dummy_298*(-Dummy_305*Dummy_316 - Dummy_308*Dummy_319 - Dummy_311*Dummy_322);
       const walberla::float64 Dummy_331 = Dummy_298*(-Dummy_305*Dummy_324 - Dummy_308*Dummy_325 - Dummy_311*Dummy_326);
       const walberla::float64 Dummy_332 = Dummy_298*(Dummy_306*Dummy_314 + Dummy_309*Dummy_317 + Dummy_312*Dummy_320);
       const walberla::float64 Dummy_333 = Dummy_298*(Dummy_314*Dummy_316 + Dummy_317*Dummy_319 + Dummy_320*Dummy_322);
       const walberla::float64 Dummy_334 = Dummy_298*(Dummy_314*Dummy_324 + Dummy_317*Dummy_325 + Dummy_320*Dummy_326);
       const walberla::float64 Dummy_335 = Dummy_298*(Dummy_306*Dummy_316 + Dummy_309*Dummy_319 + Dummy_312*Dummy_322);
       const walberla::float64 Dummy_336 = Dummy_298*(Dummy_306*Dummy_324 + Dummy_309*Dummy_325 + Dummy_312*Dummy_326);
       const walberla::float64 Dummy_337 = Dummy_298*(Dummy_316*Dummy_324 + Dummy_319*Dummy_325 + Dummy_322*Dummy_326);
       const walberla::float64 Dummy_338 = Dummy_298*((jac_affine_0_0_BLUE_UP*jac_affine_0_0_BLUE_UP)*4.0 + (jac_affine_1_0_BLUE_UP*jac_affine_1_0_BLUE_UP)*4.0 + (jac_affine_2_0_BLUE_UP*jac_affine_2_0_BLUE_UP)*4.0);
       const walberla::float64 Dummy_339 = Dummy_302;
       const walberla::float64 Dummy_340 = Dummy_303;
       const walberla::float64 Dummy_341 = Dummy_313;
       const walberla::float64 Dummy_342 = Dummy_323;
       const walberla::float64 Dummy_343 = Dummy_327;
       const walberla::float64 Dummy_344 = Dummy_302;
       const walberla::float64 Dummy_345 = Dummy_298*((jac_affine_0_1_BLUE_UP*jac_affine_0_1_BLUE_UP)*4.0 + (jac_affine_1_1_BLUE_UP*jac_affine_1_1_BLUE_UP)*4.0 + (jac_affine_2_1_BLUE_UP*jac_affine_2_1_BLUE_UP)*4.0);
       const walberla::float64 Dummy_346 = Dummy_328;
       const walberla::float64 Dummy_347 = Dummy_329;
       const walberla::float64 Dummy_348 = Dummy_330;
       const walberla::float64 Dummy_349 = Dummy_331;
       const walberla::float64 Dummy_350 = Dummy_303;
       const walberla::float64 Dummy_351 = Dummy_328;
       const walberla::float64 Dummy_352 = Dummy_298*((jac_affine_0_2_BLUE_UP*jac_affine_0_2_BLUE_UP)*4.0 + (jac_affine_1_2_BLUE_UP*jac_affine_1_2_BLUE_UP)*4.0 + (jac_affine_2_2_BLUE_UP*jac_affine_2_2_BLUE_UP)*4.0);
       const walberla::float64 Dummy_353 = Dummy_332;
       const walberla::float64 Dummy_354 = Dummy_333;
       const walberla::float64 Dummy_355 = Dummy_334;
       const walberla::float64 Dummy_356 = Dummy_313;
       const walberla::float64 Dummy_357 = Dummy_329;
       const walberla::float64 Dummy_358 = Dummy_332;
       const walberla::float64 Dummy_359 = Dummy_298*((Dummy_306*Dummy_306) + (Dummy_309*Dummy_309) + (Dummy_312*Dummy_312));
       const walberla::float64 Dummy_360 = Dummy_335;
       const walberla::float64 Dummy_361 = Dummy_336;
       const walberla::float64 Dummy_362 = Dummy_323;
       const walberla::float64 Dummy_363 = Dummy_330;
       const walberla::float64 Dummy_364 = Dummy_333;
       const walberla::float64 Dummy_365 = Dummy_335;
       const walberla::float64 Dummy_366 = Dummy_298*((Dummy_316*Dummy_316) + (Dummy_319*Dummy_319) + (Dummy_322*Dummy_322));
       const walberla::float64 Dummy_367 = Dummy_337;
       const walberla::float64 Dummy_368 = Dummy_327;
       const walberla::float64 Dummy_369 = Dummy_331;
       const walberla::float64 Dummy_370 = Dummy_334;
       const walberla::float64 Dummy_371 = Dummy_336;
       const walberla::float64 Dummy_372 = Dummy_337;
       const walberla::float64 Dummy_373 = Dummy_298*((Dummy_324*Dummy_324) + (Dummy_325*Dummy_325) + (Dummy_326*Dummy_326));
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
         
             _data_mat[0] = ((walberla::float64)(Dummy_338*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_339*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_340*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_341*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_342*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_343*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_344*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_345*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_346*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_347*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_348*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_349*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_350*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_351*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_352*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_353*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_354*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_355*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_356*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_357*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_358*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_359*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_360*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_361*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_362*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_363*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_364*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_365*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_366*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_367*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_368*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_369*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_370*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_371*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_372*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_373*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_coords_jac_0_BLUE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_2_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_coords_jac_3_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_coords_jac_4_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_coords_jac_5_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_6_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_coords_jac_7_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_6_BLUE_DOWN;
       const walberla::float64 tmp_coords_jac_8_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 tmp_coords_jac_9_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_8_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_0_BLUE_DOWN = tmp_coords_jac_1_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_1_BLUE_DOWN = tmp_coords_jac_2_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_2_BLUE_DOWN = tmp_coords_jac_3_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_0_BLUE_DOWN = tmp_coords_jac_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_1_BLUE_DOWN = tmp_coords_jac_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_2_BLUE_DOWN = tmp_coords_jac_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_0_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_coords_jac_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_1_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_coords_jac_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_2_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_coords_jac_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_0_BLUE_DOWN = tmp_coords_jac_1_BLUE_DOWN + tmp_coords_jac_4_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_1_BLUE_DOWN = tmp_coords_jac_2_BLUE_DOWN + tmp_coords_jac_6_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_2_BLUE_DOWN = tmp_coords_jac_3_BLUE_DOWN + tmp_coords_jac_8_BLUE_DOWN;
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
       const walberla::float64 Dummy_374 = 1.0 / (abs_det_jac_affine_BLUE_DOWN)*0.16666666666666663;
       const walberla::float64 Dummy_375 = jac_affine_0_0_BLUE_DOWN*4.0;
       const walberla::float64 Dummy_376 = jac_affine_1_0_BLUE_DOWN*4.0;
       const walberla::float64 Dummy_377 = jac_affine_2_0_BLUE_DOWN*4.0;
       const walberla::float64 Dummy_378 = Dummy_374*(-Dummy_375*jac_affine_0_1_BLUE_DOWN - Dummy_376*jac_affine_1_1_BLUE_DOWN - Dummy_377*jac_affine_2_1_BLUE_DOWN);
       const walberla::float64 Dummy_379 = Dummy_374*(Dummy_375*jac_affine_0_2_BLUE_DOWN + Dummy_376*jac_affine_1_2_BLUE_DOWN + Dummy_377*jac_affine_2_2_BLUE_DOWN);
       const walberla::float64 Dummy_380 = jac_affine_0_0_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_381 = jac_affine_0_1_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_382 = -Dummy_380 + Dummy_381;
       const walberla::float64 Dummy_383 = jac_affine_1_0_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_384 = jac_affine_1_1_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_385 = -Dummy_383 + Dummy_384;
       const walberla::float64 Dummy_386 = jac_affine_2_0_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_387 = jac_affine_2_1_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_388 = -Dummy_386 + Dummy_387;
       const walberla::float64 Dummy_389 = Dummy_374*(Dummy_380*Dummy_382 + Dummy_383*Dummy_385 + Dummy_386*Dummy_388);
       const walberla::float64 Dummy_390 = jac_affine_0_2_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_391 = -Dummy_390;
       const walberla::float64 Dummy_392 = Dummy_380 + Dummy_391;
       const walberla::float64 Dummy_393 = jac_affine_1_2_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_394 = -Dummy_393;
       const walberla::float64 Dummy_395 = Dummy_383 + Dummy_394;
       const walberla::float64 Dummy_396 = jac_affine_2_2_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_397 = -Dummy_396;
       const walberla::float64 Dummy_398 = Dummy_386 + Dummy_397;
       const walberla::float64 Dummy_399 = Dummy_374*(Dummy_380*Dummy_392 + Dummy_383*Dummy_395 + Dummy_386*Dummy_398);
       const walberla::float64 Dummy_400 = -Dummy_381 - Dummy_391;
       const walberla::float64 Dummy_401 = -Dummy_384 - Dummy_394;
       const walberla::float64 Dummy_402 = -Dummy_387 - Dummy_397;
       const walberla::float64 Dummy_403 = Dummy_374*(Dummy_380*Dummy_400 + Dummy_383*Dummy_401 + Dummy_386*Dummy_402);
       const walberla::float64 Dummy_404 = Dummy_374*(jac_affine_0_1_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN*-4.0 + jac_affine_1_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*-4.0 + jac_affine_2_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN*-4.0);
       const walberla::float64 Dummy_405 = Dummy_374*(-Dummy_381*Dummy_382 - Dummy_384*Dummy_385 - Dummy_387*Dummy_388);
       const walberla::float64 Dummy_406 = Dummy_374*(-Dummy_381*Dummy_392 - Dummy_384*Dummy_395 - Dummy_387*Dummy_398);
       const walberla::float64 Dummy_407 = Dummy_374*(-Dummy_381*Dummy_400 - Dummy_384*Dummy_401 - Dummy_387*Dummy_402);
       const walberla::float64 Dummy_408 = Dummy_374*(Dummy_382*Dummy_390 + Dummy_385*Dummy_393 + Dummy_388*Dummy_396);
       const walberla::float64 Dummy_409 = Dummy_374*(Dummy_390*Dummy_392 + Dummy_393*Dummy_395 + Dummy_396*Dummy_398);
       const walberla::float64 Dummy_410 = Dummy_374*(Dummy_390*Dummy_400 + Dummy_393*Dummy_401 + Dummy_396*Dummy_402);
       const walberla::float64 Dummy_411 = Dummy_374*(Dummy_382*Dummy_392 + Dummy_385*Dummy_395 + Dummy_388*Dummy_398);
       const walberla::float64 Dummy_412 = Dummy_374*(Dummy_382*Dummy_400 + Dummy_385*Dummy_401 + Dummy_388*Dummy_402);
       const walberla::float64 Dummy_413 = Dummy_374*(Dummy_392*Dummy_400 + Dummy_395*Dummy_401 + Dummy_398*Dummy_402);
       const walberla::float64 Dummy_414 = Dummy_374*((jac_affine_0_0_BLUE_DOWN*jac_affine_0_0_BLUE_DOWN)*4.0 + (jac_affine_1_0_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN)*4.0 + (jac_affine_2_0_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN)*4.0);
       const walberla::float64 Dummy_415 = Dummy_378;
       const walberla::float64 Dummy_416 = Dummy_379;
       const walberla::float64 Dummy_417 = Dummy_389;
       const walberla::float64 Dummy_418 = Dummy_399;
       const walberla::float64 Dummy_419 = Dummy_403;
       const walberla::float64 Dummy_420 = Dummy_378;
       const walberla::float64 Dummy_421 = Dummy_374*((jac_affine_0_1_BLUE_DOWN*jac_affine_0_1_BLUE_DOWN)*4.0 + (jac_affine_1_1_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN)*4.0 + (jac_affine_2_1_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN)*4.0);
       const walberla::float64 Dummy_422 = Dummy_404;
       const walberla::float64 Dummy_423 = Dummy_405;
       const walberla::float64 Dummy_424 = Dummy_406;
       const walberla::float64 Dummy_425 = Dummy_407;
       const walberla::float64 Dummy_426 = Dummy_379;
       const walberla::float64 Dummy_427 = Dummy_404;
       const walberla::float64 Dummy_428 = Dummy_374*((jac_affine_0_2_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN)*4.0 + (jac_affine_1_2_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN)*4.0 + (jac_affine_2_2_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN)*4.0);
       const walberla::float64 Dummy_429 = Dummy_408;
       const walberla::float64 Dummy_430 = Dummy_409;
       const walberla::float64 Dummy_431 = Dummy_410;
       const walberla::float64 Dummy_432 = Dummy_389;
       const walberla::float64 Dummy_433 = Dummy_405;
       const walberla::float64 Dummy_434 = Dummy_408;
       const walberla::float64 Dummy_435 = Dummy_374*((Dummy_382*Dummy_382) + (Dummy_385*Dummy_385) + (Dummy_388*Dummy_388));
       const walberla::float64 Dummy_436 = Dummy_411;
       const walberla::float64 Dummy_437 = Dummy_412;
       const walberla::float64 Dummy_438 = Dummy_399;
       const walberla::float64 Dummy_439 = Dummy_406;
       const walberla::float64 Dummy_440 = Dummy_409;
       const walberla::float64 Dummy_441 = Dummy_411;
       const walberla::float64 Dummy_442 = Dummy_374*((Dummy_392*Dummy_392) + (Dummy_395*Dummy_395) + (Dummy_398*Dummy_398));
       const walberla::float64 Dummy_443 = Dummy_413;
       const walberla::float64 Dummy_444 = Dummy_403;
       const walberla::float64 Dummy_445 = Dummy_407;
       const walberla::float64 Dummy_446 = Dummy_410;
       const walberla::float64 Dummy_447 = Dummy_412;
       const walberla::float64 Dummy_448 = Dummy_413;
       const walberla::float64 Dummy_449 = Dummy_374*((Dummy_400*Dummy_400) + (Dummy_401*Dummy_401) + (Dummy_402*Dummy_402));
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
         
             _data_mat[0] = ((walberla::float64)(Dummy_414*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_415*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_416*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_417*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_418*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_419*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_420*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_421*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_422*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_423*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_424*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_425*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_426*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_427*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_428*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_429*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_430*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_431*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_432*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_433*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_434*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_435*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_436*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_437*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_438*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_439*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_440*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_441*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_442*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_443*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_444*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_445*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_446*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_447*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_448*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_449*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_coords_jac_0_GREEN_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_2_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_3_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_coords_jac_4_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_coords_jac_5_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_coords_jac_6_GREEN_UP = tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_UP = tmp_coords_jac_1_GREEN_UP;
       const walberla::float64 p_affine_const_0_1_GREEN_UP = tmp_coords_jac_2_GREEN_UP;
       const walberla::float64 p_affine_const_0_2_GREEN_UP = tmp_coords_jac_3_GREEN_UP;
       const walberla::float64 p_affine_const_1_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_1_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_1_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_2_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_GREEN_UP;
       const walberla::float64 p_affine_const_2_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_GREEN_UP;
       const walberla::float64 p_affine_const_2_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_GREEN_UP;
       const walberla::float64 p_affine_const_3_0_GREEN_UP = tmp_coords_jac_1_GREEN_UP + tmp_coords_jac_4_GREEN_UP;
       const walberla::float64 p_affine_const_3_1_GREEN_UP = tmp_coords_jac_2_GREEN_UP + tmp_coords_jac_5_GREEN_UP;
       const walberla::float64 p_affine_const_3_2_GREEN_UP = tmp_coords_jac_3_GREEN_UP + tmp_coords_jac_6_GREEN_UP;
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
       const walberla::float64 Dummy_450 = 1.0 / (abs_det_jac_affine_GREEN_UP)*0.16666666666666663;
       const walberla::float64 Dummy_451 = jac_affine_0_0_GREEN_UP*4.0;
       const walberla::float64 Dummy_452 = jac_affine_1_0_GREEN_UP*4.0;
       const walberla::float64 Dummy_453 = jac_affine_2_0_GREEN_UP*4.0;
       const walberla::float64 Dummy_454 = Dummy_450*(-Dummy_451*jac_affine_0_1_GREEN_UP - Dummy_452*jac_affine_1_1_GREEN_UP - Dummy_453*jac_affine_2_1_GREEN_UP);
       const walberla::float64 Dummy_455 = Dummy_450*(Dummy_451*jac_affine_0_2_GREEN_UP + Dummy_452*jac_affine_1_2_GREEN_UP + Dummy_453*jac_affine_2_2_GREEN_UP);
       const walberla::float64 Dummy_456 = jac_affine_0_0_GREEN_UP*2.0;
       const walberla::float64 Dummy_457 = jac_affine_0_1_GREEN_UP*2.0;
       const walberla::float64 Dummy_458 = -Dummy_456 + Dummy_457;
       const walberla::float64 Dummy_459 = jac_affine_1_0_GREEN_UP*2.0;
       const walberla::float64 Dummy_460 = jac_affine_1_1_GREEN_UP*2.0;
       const walberla::float64 Dummy_461 = -Dummy_459 + Dummy_460;
       const walberla::float64 Dummy_462 = jac_affine_2_0_GREEN_UP*2.0;
       const walberla::float64 Dummy_463 = jac_affine_2_1_GREEN_UP*2.0;
       const walberla::float64 Dummy_464 = -Dummy_462 + Dummy_463;
       const walberla::float64 Dummy_465 = Dummy_450*(Dummy_456*Dummy_458 + Dummy_459*Dummy_461 + Dummy_462*Dummy_464);
       const walberla::float64 Dummy_466 = jac_affine_0_2_GREEN_UP*2.0;
       const walberla::float64 Dummy_467 = -Dummy_466;
       const walberla::float64 Dummy_468 = Dummy_456 + Dummy_467;
       const walberla::float64 Dummy_469 = jac_affine_1_2_GREEN_UP*2.0;
       const walberla::float64 Dummy_470 = -Dummy_469;
       const walberla::float64 Dummy_471 = Dummy_459 + Dummy_470;
       const walberla::float64 Dummy_472 = jac_affine_2_2_GREEN_UP*2.0;
       const walberla::float64 Dummy_473 = -Dummy_472;
       const walberla::float64 Dummy_474 = Dummy_462 + Dummy_473;
       const walberla::float64 Dummy_475 = Dummy_450*(Dummy_456*Dummy_468 + Dummy_459*Dummy_471 + Dummy_462*Dummy_474);
       const walberla::float64 Dummy_476 = -Dummy_457 - Dummy_467;
       const walberla::float64 Dummy_477 = -Dummy_460 - Dummy_470;
       const walberla::float64 Dummy_478 = -Dummy_463 - Dummy_473;
       const walberla::float64 Dummy_479 = Dummy_450*(Dummy_456*Dummy_476 + Dummy_459*Dummy_477 + Dummy_462*Dummy_478);
       const walberla::float64 Dummy_480 = Dummy_450*(jac_affine_0_1_GREEN_UP*jac_affine_0_2_GREEN_UP*-4.0 + jac_affine_1_1_GREEN_UP*jac_affine_1_2_GREEN_UP*-4.0 + jac_affine_2_1_GREEN_UP*jac_affine_2_2_GREEN_UP*-4.0);
       const walberla::float64 Dummy_481 = Dummy_450*(-Dummy_457*Dummy_458 - Dummy_460*Dummy_461 - Dummy_463*Dummy_464);
       const walberla::float64 Dummy_482 = Dummy_450*(-Dummy_457*Dummy_468 - Dummy_460*Dummy_471 - Dummy_463*Dummy_474);
       const walberla::float64 Dummy_483 = Dummy_450*(-Dummy_457*Dummy_476 - Dummy_460*Dummy_477 - Dummy_463*Dummy_478);
       const walberla::float64 Dummy_484 = Dummy_450*(Dummy_458*Dummy_466 + Dummy_461*Dummy_469 + Dummy_464*Dummy_472);
       const walberla::float64 Dummy_485 = Dummy_450*(Dummy_466*Dummy_468 + Dummy_469*Dummy_471 + Dummy_472*Dummy_474);
       const walberla::float64 Dummy_486 = Dummy_450*(Dummy_466*Dummy_476 + Dummy_469*Dummy_477 + Dummy_472*Dummy_478);
       const walberla::float64 Dummy_487 = Dummy_450*(Dummy_458*Dummy_468 + Dummy_461*Dummy_471 + Dummy_464*Dummy_474);
       const walberla::float64 Dummy_488 = Dummy_450*(Dummy_458*Dummy_476 + Dummy_461*Dummy_477 + Dummy_464*Dummy_478);
       const walberla::float64 Dummy_489 = Dummy_450*(Dummy_468*Dummy_476 + Dummy_471*Dummy_477 + Dummy_474*Dummy_478);
       const walberla::float64 Dummy_490 = Dummy_450*((jac_affine_0_0_GREEN_UP*jac_affine_0_0_GREEN_UP)*4.0 + (jac_affine_1_0_GREEN_UP*jac_affine_1_0_GREEN_UP)*4.0 + (jac_affine_2_0_GREEN_UP*jac_affine_2_0_GREEN_UP)*4.0);
       const walberla::float64 Dummy_491 = Dummy_454;
       const walberla::float64 Dummy_492 = Dummy_455;
       const walberla::float64 Dummy_493 = Dummy_465;
       const walberla::float64 Dummy_494 = Dummy_475;
       const walberla::float64 Dummy_495 = Dummy_479;
       const walberla::float64 Dummy_496 = Dummy_454;
       const walberla::float64 Dummy_497 = Dummy_450*((jac_affine_0_1_GREEN_UP*jac_affine_0_1_GREEN_UP)*4.0 + (jac_affine_1_1_GREEN_UP*jac_affine_1_1_GREEN_UP)*4.0 + (jac_affine_2_1_GREEN_UP*jac_affine_2_1_GREEN_UP)*4.0);
       const walberla::float64 Dummy_498 = Dummy_480;
       const walberla::float64 Dummy_499 = Dummy_481;
       const walberla::float64 Dummy_500 = Dummy_482;
       const walberla::float64 Dummy_501 = Dummy_483;
       const walberla::float64 Dummy_502 = Dummy_455;
       const walberla::float64 Dummy_503 = Dummy_480;
       const walberla::float64 Dummy_504 = Dummy_450*((jac_affine_0_2_GREEN_UP*jac_affine_0_2_GREEN_UP)*4.0 + (jac_affine_1_2_GREEN_UP*jac_affine_1_2_GREEN_UP)*4.0 + (jac_affine_2_2_GREEN_UP*jac_affine_2_2_GREEN_UP)*4.0);
       const walberla::float64 Dummy_505 = Dummy_484;
       const walberla::float64 Dummy_506 = Dummy_485;
       const walberla::float64 Dummy_507 = Dummy_486;
       const walberla::float64 Dummy_508 = Dummy_465;
       const walberla::float64 Dummy_509 = Dummy_481;
       const walberla::float64 Dummy_510 = Dummy_484;
       const walberla::float64 Dummy_511 = Dummy_450*((Dummy_458*Dummy_458) + (Dummy_461*Dummy_461) + (Dummy_464*Dummy_464));
       const walberla::float64 Dummy_512 = Dummy_487;
       const walberla::float64 Dummy_513 = Dummy_488;
       const walberla::float64 Dummy_514 = Dummy_475;
       const walberla::float64 Dummy_515 = Dummy_482;
       const walberla::float64 Dummy_516 = Dummy_485;
       const walberla::float64 Dummy_517 = Dummy_487;
       const walberla::float64 Dummy_518 = Dummy_450*((Dummy_468*Dummy_468) + (Dummy_471*Dummy_471) + (Dummy_474*Dummy_474));
       const walberla::float64 Dummy_519 = Dummy_489;
       const walberla::float64 Dummy_520 = Dummy_479;
       const walberla::float64 Dummy_521 = Dummy_483;
       const walberla::float64 Dummy_522 = Dummy_486;
       const walberla::float64 Dummy_523 = Dummy_488;
       const walberla::float64 Dummy_524 = Dummy_489;
       const walberla::float64 Dummy_525 = Dummy_450*((Dummy_476*Dummy_476) + (Dummy_477*Dummy_477) + (Dummy_478*Dummy_478));
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
         
             _data_mat[0] = ((walberla::float64)(Dummy_490*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_491*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_492*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_493*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_494*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_495*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_496*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_497*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_498*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_499*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_500*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_501*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_502*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_503*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_504*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_505*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_506*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_507*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_508*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_509*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_510*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_511*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_512*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_513*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_514*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_515*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_516*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_517*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_518*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_519*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_520*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_521*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_522*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_523*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_524*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_525*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
       const walberla::float64 tmp_coords_jac_0_GREEN_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_2_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_coords_jac_3_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_coords_jac_4_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_5_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_6_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_coords_jac_7_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_coords_jac_8_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_coords_jac_9_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_4_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN + tmp_coords_jac_5_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_6_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_0_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_1_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_2_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_1_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_2_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
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
       const walberla::float64 Dummy_526 = 1.0 / (abs_det_jac_affine_GREEN_DOWN)*0.16666666666666663;
       const walberla::float64 Dummy_527 = jac_affine_0_0_GREEN_DOWN*4.0;
       const walberla::float64 Dummy_528 = jac_affine_1_0_GREEN_DOWN*4.0;
       const walberla::float64 Dummy_529 = jac_affine_2_0_GREEN_DOWN*4.0;
       const walberla::float64 Dummy_530 = Dummy_526*(-Dummy_527*jac_affine_0_1_GREEN_DOWN - Dummy_528*jac_affine_1_1_GREEN_DOWN - Dummy_529*jac_affine_2_1_GREEN_DOWN);
       const walberla::float64 Dummy_531 = Dummy_526*(Dummy_527*jac_affine_0_2_GREEN_DOWN + Dummy_528*jac_affine_1_2_GREEN_DOWN + Dummy_529*jac_affine_2_2_GREEN_DOWN);
       const walberla::float64 Dummy_532 = jac_affine_0_0_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_533 = jac_affine_0_1_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_534 = -Dummy_532 + Dummy_533;
       const walberla::float64 Dummy_535 = jac_affine_1_0_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_536 = jac_affine_1_1_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_537 = -Dummy_535 + Dummy_536;
       const walberla::float64 Dummy_538 = jac_affine_2_0_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_539 = jac_affine_2_1_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_540 = -Dummy_538 + Dummy_539;
       const walberla::float64 Dummy_541 = Dummy_526*(Dummy_532*Dummy_534 + Dummy_535*Dummy_537 + Dummy_538*Dummy_540);
       const walberla::float64 Dummy_542 = jac_affine_0_2_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_543 = -Dummy_542;
       const walberla::float64 Dummy_544 = Dummy_532 + Dummy_543;
       const walberla::float64 Dummy_545 = jac_affine_1_2_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_546 = -Dummy_545;
       const walberla::float64 Dummy_547 = Dummy_535 + Dummy_546;
       const walberla::float64 Dummy_548 = jac_affine_2_2_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_549 = -Dummy_548;
       const walberla::float64 Dummy_550 = Dummy_538 + Dummy_549;
       const walberla::float64 Dummy_551 = Dummy_526*(Dummy_532*Dummy_544 + Dummy_535*Dummy_547 + Dummy_538*Dummy_550);
       const walberla::float64 Dummy_552 = -Dummy_533 - Dummy_543;
       const walberla::float64 Dummy_553 = -Dummy_536 - Dummy_546;
       const walberla::float64 Dummy_554 = -Dummy_539 - Dummy_549;
       const walberla::float64 Dummy_555 = Dummy_526*(Dummy_532*Dummy_552 + Dummy_535*Dummy_553 + Dummy_538*Dummy_554);
       const walberla::float64 Dummy_556 = Dummy_526*(jac_affine_0_1_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN*-4.0 + jac_affine_1_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*-4.0 + jac_affine_2_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN*-4.0);
       const walberla::float64 Dummy_557 = Dummy_526*(-Dummy_533*Dummy_534 - Dummy_536*Dummy_537 - Dummy_539*Dummy_540);
       const walberla::float64 Dummy_558 = Dummy_526*(-Dummy_533*Dummy_544 - Dummy_536*Dummy_547 - Dummy_539*Dummy_550);
       const walberla::float64 Dummy_559 = Dummy_526*(-Dummy_533*Dummy_552 - Dummy_536*Dummy_553 - Dummy_539*Dummy_554);
       const walberla::float64 Dummy_560 = Dummy_526*(Dummy_534*Dummy_542 + Dummy_537*Dummy_545 + Dummy_540*Dummy_548);
       const walberla::float64 Dummy_561 = Dummy_526*(Dummy_542*Dummy_544 + Dummy_545*Dummy_547 + Dummy_548*Dummy_550);
       const walberla::float64 Dummy_562 = Dummy_526*(Dummy_542*Dummy_552 + Dummy_545*Dummy_553 + Dummy_548*Dummy_554);
       const walberla::float64 Dummy_563 = Dummy_526*(Dummy_534*Dummy_544 + Dummy_537*Dummy_547 + Dummy_540*Dummy_550);
       const walberla::float64 Dummy_564 = Dummy_526*(Dummy_534*Dummy_552 + Dummy_537*Dummy_553 + Dummy_540*Dummy_554);
       const walberla::float64 Dummy_565 = Dummy_526*(Dummy_544*Dummy_552 + Dummy_547*Dummy_553 + Dummy_550*Dummy_554);
       const walberla::float64 Dummy_566 = Dummy_526*((jac_affine_0_0_GREEN_DOWN*jac_affine_0_0_GREEN_DOWN)*4.0 + (jac_affine_1_0_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN)*4.0 + (jac_affine_2_0_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN)*4.0);
       const walberla::float64 Dummy_567 = Dummy_530;
       const walberla::float64 Dummy_568 = Dummy_531;
       const walberla::float64 Dummy_569 = Dummy_541;
       const walberla::float64 Dummy_570 = Dummy_551;
       const walberla::float64 Dummy_571 = Dummy_555;
       const walberla::float64 Dummy_572 = Dummy_530;
       const walberla::float64 Dummy_573 = Dummy_526*((jac_affine_0_1_GREEN_DOWN*jac_affine_0_1_GREEN_DOWN)*4.0 + (jac_affine_1_1_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN)*4.0 + (jac_affine_2_1_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN)*4.0);
       const walberla::float64 Dummy_574 = Dummy_556;
       const walberla::float64 Dummy_575 = Dummy_557;
       const walberla::float64 Dummy_576 = Dummy_558;
       const walberla::float64 Dummy_577 = Dummy_559;
       const walberla::float64 Dummy_578 = Dummy_531;
       const walberla::float64 Dummy_579 = Dummy_556;
       const walberla::float64 Dummy_580 = Dummy_526*((jac_affine_0_2_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN)*4.0 + (jac_affine_1_2_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN)*4.0 + (jac_affine_2_2_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN)*4.0);
       const walberla::float64 Dummy_581 = Dummy_560;
       const walberla::float64 Dummy_582 = Dummy_561;
       const walberla::float64 Dummy_583 = Dummy_562;
       const walberla::float64 Dummy_584 = Dummy_541;
       const walberla::float64 Dummy_585 = Dummy_557;
       const walberla::float64 Dummy_586 = Dummy_560;
       const walberla::float64 Dummy_587 = Dummy_526*((Dummy_534*Dummy_534) + (Dummy_537*Dummy_537) + (Dummy_540*Dummy_540));
       const walberla::float64 Dummy_588 = Dummy_563;
       const walberla::float64 Dummy_589 = Dummy_564;
       const walberla::float64 Dummy_590 = Dummy_551;
       const walberla::float64 Dummy_591 = Dummy_558;
       const walberla::float64 Dummy_592 = Dummy_561;
       const walberla::float64 Dummy_593 = Dummy_563;
       const walberla::float64 Dummy_594 = Dummy_526*((Dummy_544*Dummy_544) + (Dummy_547*Dummy_547) + (Dummy_550*Dummy_550));
       const walberla::float64 Dummy_595 = Dummy_565;
       const walberla::float64 Dummy_596 = Dummy_555;
       const walberla::float64 Dummy_597 = Dummy_559;
       const walberla::float64 Dummy_598 = Dummy_562;
       const walberla::float64 Dummy_599 = Dummy_564;
       const walberla::float64 Dummy_600 = Dummy_565;
       const walberla::float64 Dummy_601 = Dummy_526*((Dummy_552*Dummy_552) + (Dummy_553*Dummy_553) + (Dummy_554*Dummy_554));
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
         
             _data_mat[0] = ((walberla::float64)(Dummy_566*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((walberla::float64)(Dummy_567*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((walberla::float64)(Dummy_568*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((walberla::float64)(Dummy_569*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((walberla::float64)(Dummy_570*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((walberla::float64)(Dummy_571*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((walberla::float64)(Dummy_572*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((walberla::float64)(Dummy_573*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((walberla::float64)(Dummy_574*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((walberla::float64)(Dummy_575*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((walberla::float64)(Dummy_576*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((walberla::float64)(Dummy_577*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((walberla::float64)(Dummy_578*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((walberla::float64)(Dummy_579*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((walberla::float64)(Dummy_580*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((walberla::float64)(Dummy_581*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((walberla::float64)(Dummy_582*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((walberla::float64)(Dummy_583*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((walberla::float64)(Dummy_584*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((walberla::float64)(Dummy_585*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((walberla::float64)(Dummy_586*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((walberla::float64)(Dummy_587*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((walberla::float64)(Dummy_588*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((walberla::float64)(Dummy_589*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((walberla::float64)(Dummy_590*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((walberla::float64)(Dummy_591*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((walberla::float64)(Dummy_592*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((walberla::float64)(Dummy_593*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((walberla::float64)(Dummy_594*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((walberla::float64)(Dummy_595*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((walberla::float64)(Dummy_596*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((walberla::float64)(Dummy_597*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((walberla::float64)(Dummy_598*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((walberla::float64)(Dummy_599*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((walberla::float64)(Dummy_600*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((walberla::float64)(Dummy_601*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
