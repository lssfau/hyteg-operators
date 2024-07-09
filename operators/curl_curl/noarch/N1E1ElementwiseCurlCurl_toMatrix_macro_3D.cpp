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
* The entire file was generated with the HyTeG Operator Generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/



























#include "../N1E1ElementwiseCurlCurl.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void N1E1ElementwiseCurlCurl::toMatrix_macro_3D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_src, const Cell& cell, const uint_t level, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
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
       const real_t tmp_kernel_op_0 = 1.0 / (abs_det_jac_affine_WHITE_UP)*0.16666666666666663;
       const real_t tmp_kernel_op_1 = jac_affine_0_0_WHITE_UP*4.0;
       const real_t tmp_kernel_op_2 = jac_affine_1_0_WHITE_UP*4.0;
       const real_t tmp_kernel_op_3 = jac_affine_2_0_WHITE_UP*4.0;
       const real_t tmp_kernel_op_4 = tmp_kernel_op_0*(-jac_affine_0_1_WHITE_UP*tmp_kernel_op_1 - jac_affine_1_1_WHITE_UP*tmp_kernel_op_2 - jac_affine_2_1_WHITE_UP*tmp_kernel_op_3);
       const real_t tmp_kernel_op_5 = tmp_kernel_op_0*(jac_affine_0_2_WHITE_UP*tmp_kernel_op_1 + jac_affine_1_2_WHITE_UP*tmp_kernel_op_2 + jac_affine_2_2_WHITE_UP*tmp_kernel_op_3);
       const real_t tmp_kernel_op_6 = jac_affine_0_0_WHITE_UP*2.0;
       const real_t tmp_kernel_op_7 = jac_affine_0_1_WHITE_UP*2.0;
       const real_t tmp_kernel_op_8 = -tmp_kernel_op_6 + tmp_kernel_op_7;
       const real_t tmp_kernel_op_9 = jac_affine_1_0_WHITE_UP*2.0;
       const real_t tmp_kernel_op_10 = jac_affine_1_1_WHITE_UP*2.0;
       const real_t tmp_kernel_op_11 = tmp_kernel_op_10 - tmp_kernel_op_9;
       const real_t tmp_kernel_op_12 = jac_affine_2_0_WHITE_UP*2.0;
       const real_t tmp_kernel_op_13 = jac_affine_2_1_WHITE_UP*2.0;
       const real_t tmp_kernel_op_14 = -tmp_kernel_op_12 + tmp_kernel_op_13;
       const real_t tmp_kernel_op_15 = tmp_kernel_op_0*(tmp_kernel_op_11*tmp_kernel_op_9 + tmp_kernel_op_12*tmp_kernel_op_14 + tmp_kernel_op_6*tmp_kernel_op_8);
       const real_t tmp_kernel_op_16 = jac_affine_0_2_WHITE_UP*2.0;
       const real_t tmp_kernel_op_17 = -tmp_kernel_op_16;
       const real_t tmp_kernel_op_18 = tmp_kernel_op_17 + tmp_kernel_op_6;
       const real_t tmp_kernel_op_19 = jac_affine_1_2_WHITE_UP*2.0;
       const real_t tmp_kernel_op_20 = -tmp_kernel_op_19;
       const real_t tmp_kernel_op_21 = tmp_kernel_op_20 + tmp_kernel_op_9;
       const real_t tmp_kernel_op_22 = jac_affine_2_2_WHITE_UP*2.0;
       const real_t tmp_kernel_op_23 = -tmp_kernel_op_22;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_12 + tmp_kernel_op_23;
       const real_t tmp_kernel_op_25 = tmp_kernel_op_0*(tmp_kernel_op_12*tmp_kernel_op_24 + tmp_kernel_op_18*tmp_kernel_op_6 + tmp_kernel_op_21*tmp_kernel_op_9);
       const real_t tmp_kernel_op_26 = -tmp_kernel_op_17 - tmp_kernel_op_7;
       const real_t tmp_kernel_op_27 = -tmp_kernel_op_10 - tmp_kernel_op_20;
       const real_t tmp_kernel_op_28 = -tmp_kernel_op_13 - tmp_kernel_op_23;
       const real_t tmp_kernel_op_29 = tmp_kernel_op_0*(tmp_kernel_op_12*tmp_kernel_op_28 + tmp_kernel_op_26*tmp_kernel_op_6 + tmp_kernel_op_27*tmp_kernel_op_9);
       const real_t tmp_kernel_op_30 = tmp_kernel_op_0*(jac_affine_0_1_WHITE_UP*jac_affine_0_2_WHITE_UP*-4.0 + jac_affine_1_1_WHITE_UP*jac_affine_1_2_WHITE_UP*-4.0 + jac_affine_2_1_WHITE_UP*jac_affine_2_2_WHITE_UP*-4.0);
       const real_t tmp_kernel_op_31 = tmp_kernel_op_0*(-tmp_kernel_op_10*tmp_kernel_op_11 - tmp_kernel_op_13*tmp_kernel_op_14 - tmp_kernel_op_7*tmp_kernel_op_8);
       const real_t tmp_kernel_op_32 = tmp_kernel_op_0*(-tmp_kernel_op_10*tmp_kernel_op_21 - tmp_kernel_op_13*tmp_kernel_op_24 - tmp_kernel_op_18*tmp_kernel_op_7);
       const real_t tmp_kernel_op_33 = tmp_kernel_op_0*(-tmp_kernel_op_10*tmp_kernel_op_27 - tmp_kernel_op_13*tmp_kernel_op_28 - tmp_kernel_op_26*tmp_kernel_op_7);
       const real_t tmp_kernel_op_34 = tmp_kernel_op_0*(tmp_kernel_op_11*tmp_kernel_op_19 + tmp_kernel_op_14*tmp_kernel_op_22 + tmp_kernel_op_16*tmp_kernel_op_8);
       const real_t tmp_kernel_op_35 = tmp_kernel_op_0*(tmp_kernel_op_16*tmp_kernel_op_18 + tmp_kernel_op_19*tmp_kernel_op_21 + tmp_kernel_op_22*tmp_kernel_op_24);
       const real_t tmp_kernel_op_36 = tmp_kernel_op_0*(tmp_kernel_op_16*tmp_kernel_op_26 + tmp_kernel_op_19*tmp_kernel_op_27 + tmp_kernel_op_22*tmp_kernel_op_28);
       const real_t tmp_kernel_op_37 = tmp_kernel_op_0*(tmp_kernel_op_11*tmp_kernel_op_21 + tmp_kernel_op_14*tmp_kernel_op_24 + tmp_kernel_op_18*tmp_kernel_op_8);
       const real_t tmp_kernel_op_38 = tmp_kernel_op_0*(tmp_kernel_op_11*tmp_kernel_op_27 + tmp_kernel_op_14*tmp_kernel_op_28 + tmp_kernel_op_26*tmp_kernel_op_8);
       const real_t tmp_kernel_op_39 = tmp_kernel_op_0*(tmp_kernel_op_18*tmp_kernel_op_26 + tmp_kernel_op_21*tmp_kernel_op_27 + tmp_kernel_op_24*tmp_kernel_op_28);
       const real_t elMat_0_0 = tmp_kernel_op_0*((jac_affine_0_0_WHITE_UP*jac_affine_0_0_WHITE_UP)*4.0 + (jac_affine_1_0_WHITE_UP*jac_affine_1_0_WHITE_UP)*4.0 + (jac_affine_2_0_WHITE_UP*jac_affine_2_0_WHITE_UP)*4.0);
       const real_t elMat_0_1 = tmp_kernel_op_4;
       const real_t elMat_0_2 = tmp_kernel_op_5;
       const real_t elMat_0_3 = tmp_kernel_op_15;
       const real_t elMat_0_4 = tmp_kernel_op_25;
       const real_t elMat_0_5 = tmp_kernel_op_29;
       const real_t elMat_1_0 = tmp_kernel_op_4;
       const real_t elMat_1_1 = tmp_kernel_op_0*((jac_affine_0_1_WHITE_UP*jac_affine_0_1_WHITE_UP)*4.0 + (jac_affine_1_1_WHITE_UP*jac_affine_1_1_WHITE_UP)*4.0 + (jac_affine_2_1_WHITE_UP*jac_affine_2_1_WHITE_UP)*4.0);
       const real_t elMat_1_2 = tmp_kernel_op_30;
       const real_t elMat_1_3 = tmp_kernel_op_31;
       const real_t elMat_1_4 = tmp_kernel_op_32;
       const real_t elMat_1_5 = tmp_kernel_op_33;
       const real_t elMat_2_0 = tmp_kernel_op_5;
       const real_t elMat_2_1 = tmp_kernel_op_30;
       const real_t elMat_2_2 = tmp_kernel_op_0*((jac_affine_0_2_WHITE_UP*jac_affine_0_2_WHITE_UP)*4.0 + (jac_affine_1_2_WHITE_UP*jac_affine_1_2_WHITE_UP)*4.0 + (jac_affine_2_2_WHITE_UP*jac_affine_2_2_WHITE_UP)*4.0);
       const real_t elMat_2_3 = tmp_kernel_op_34;
       const real_t elMat_2_4 = tmp_kernel_op_35;
       const real_t elMat_2_5 = tmp_kernel_op_36;
       const real_t elMat_3_0 = tmp_kernel_op_15;
       const real_t elMat_3_1 = tmp_kernel_op_31;
       const real_t elMat_3_2 = tmp_kernel_op_34;
       const real_t elMat_3_3 = tmp_kernel_op_0*((tmp_kernel_op_11*tmp_kernel_op_11) + (tmp_kernel_op_14*tmp_kernel_op_14) + (tmp_kernel_op_8*tmp_kernel_op_8));
       const real_t elMat_3_4 = tmp_kernel_op_37;
       const real_t elMat_3_5 = tmp_kernel_op_38;
       const real_t elMat_4_0 = tmp_kernel_op_25;
       const real_t elMat_4_1 = tmp_kernel_op_32;
       const real_t elMat_4_2 = tmp_kernel_op_35;
       const real_t elMat_4_3 = tmp_kernel_op_37;
       const real_t elMat_4_4 = tmp_kernel_op_0*((tmp_kernel_op_18*tmp_kernel_op_18) + (tmp_kernel_op_21*tmp_kernel_op_21) + (tmp_kernel_op_24*tmp_kernel_op_24));
       const real_t elMat_4_5 = tmp_kernel_op_39;
       const real_t elMat_5_0 = tmp_kernel_op_29;
       const real_t elMat_5_1 = tmp_kernel_op_33;
       const real_t elMat_5_2 = tmp_kernel_op_36;
       const real_t elMat_5_3 = tmp_kernel_op_38;
       const real_t elMat_5_4 = tmp_kernel_op_39;
       const real_t elMat_5_5 = tmp_kernel_op_0*((tmp_kernel_op_26*tmp_kernel_op_26) + (tmp_kernel_op_27*tmp_kernel_op_27) + (tmp_kernel_op_28*tmp_kernel_op_28));
       {
          /* CellType.WHITE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
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
             real_t _data_float_loop_ctr_array_dim_2[4];
             _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
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
         
             _data_mat[0] = ((real_t)((basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))*elMat_0_0));
             _data_mat[1] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*elMat_0_1));
             _data_mat[2] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*elMat_0_2));
             _data_mat[3] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*elMat_0_3));
             _data_mat[4] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*elMat_0_4));
             _data_mat[5] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*elMat_0_5));
             _data_mat[6] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*elMat_1_0));
             _data_mat[7] = ((real_t)((basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))*elMat_1_1));
             _data_mat[8] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*elMat_1_2));
             _data_mat[9] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*elMat_1_3));
             _data_mat[10] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*elMat_1_4));
             _data_mat[11] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*elMat_1_5));
             _data_mat[12] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*elMat_2_0));
             _data_mat[13] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*elMat_2_1));
             _data_mat[14] = ((real_t)((basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))*elMat_2_2));
             _data_mat[15] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*elMat_2_3));
             _data_mat[16] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*elMat_2_4));
             _data_mat[17] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*elMat_2_5));
             _data_mat[18] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*elMat_3_0));
             _data_mat[19] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*elMat_3_1));
             _data_mat[20] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*elMat_3_2));
             _data_mat[21] = ((real_t)((basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))*elMat_3_3));
             _data_mat[22] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*elMat_3_4));
             _data_mat[23] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*elMat_3_5));
             _data_mat[24] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*elMat_4_0));
             _data_mat[25] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*elMat_4_1));
             _data_mat[26] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*elMat_4_2));
             _data_mat[27] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*elMat_4_3));
             _data_mat[28] = ((real_t)((basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))*elMat_4_4));
             _data_mat[29] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*elMat_4_5));
             _data_mat[30] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*elMat_5_0));
             _data_mat[31] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*elMat_5_1));
             _data_mat[32] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*elMat_5_2));
             _data_mat[33] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*elMat_5_3));
             _data_mat[34] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*elMat_5_4));
             _data_mat[35] = ((real_t)((basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))*elMat_5_5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
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
       const real_t tmp_moved_constant_0 = 1.0 / (abs_det_jac_affine_WHITE_DOWN)*0.16666666666666663;
       const real_t tmp_moved_constant_1 = jac_affine_0_0_WHITE_DOWN*4.0;
       const real_t tmp_moved_constant_2 = jac_affine_1_0_WHITE_DOWN*4.0;
       const real_t tmp_moved_constant_3 = jac_affine_2_0_WHITE_DOWN*4.0;
       const real_t tmp_moved_constant_4 = tmp_moved_constant_0*(-jac_affine_0_1_WHITE_DOWN*tmp_moved_constant_1 - jac_affine_1_1_WHITE_DOWN*tmp_moved_constant_2 - jac_affine_2_1_WHITE_DOWN*tmp_moved_constant_3);
       const real_t tmp_moved_constant_5 = tmp_moved_constant_0*(jac_affine_0_2_WHITE_DOWN*tmp_moved_constant_1 + jac_affine_1_2_WHITE_DOWN*tmp_moved_constant_2 + jac_affine_2_2_WHITE_DOWN*tmp_moved_constant_3);
       const real_t tmp_moved_constant_6 = jac_affine_0_0_WHITE_DOWN*2.0;
       const real_t tmp_moved_constant_7 = jac_affine_0_1_WHITE_DOWN*2.0;
       const real_t tmp_moved_constant_8 = -tmp_moved_constant_6 + tmp_moved_constant_7;
       const real_t tmp_moved_constant_9 = jac_affine_1_0_WHITE_DOWN*2.0;
       const real_t tmp_moved_constant_10 = jac_affine_1_1_WHITE_DOWN*2.0;
       const real_t tmp_moved_constant_11 = tmp_moved_constant_10 - tmp_moved_constant_9;
       const real_t tmp_moved_constant_12 = jac_affine_2_0_WHITE_DOWN*2.0;
       const real_t tmp_moved_constant_13 = jac_affine_2_1_WHITE_DOWN*2.0;
       const real_t tmp_moved_constant_14 = -tmp_moved_constant_12 + tmp_moved_constant_13;
       const real_t tmp_moved_constant_15 = tmp_moved_constant_0*(tmp_moved_constant_11*tmp_moved_constant_9 + tmp_moved_constant_12*tmp_moved_constant_14 + tmp_moved_constant_6*tmp_moved_constant_8);
       const real_t tmp_moved_constant_16 = jac_affine_0_2_WHITE_DOWN*2.0;
       const real_t tmp_moved_constant_17 = -tmp_moved_constant_16;
       const real_t tmp_moved_constant_18 = tmp_moved_constant_17 + tmp_moved_constant_6;
       const real_t tmp_moved_constant_19 = jac_affine_1_2_WHITE_DOWN*2.0;
       const real_t tmp_moved_constant_20 = -tmp_moved_constant_19;
       const real_t tmp_moved_constant_21 = tmp_moved_constant_20 + tmp_moved_constant_9;
       const real_t tmp_moved_constant_22 = jac_affine_2_2_WHITE_DOWN*2.0;
       const real_t tmp_moved_constant_23 = -tmp_moved_constant_22;
       const real_t tmp_moved_constant_24 = tmp_moved_constant_12 + tmp_moved_constant_23;
       const real_t tmp_moved_constant_25 = tmp_moved_constant_0*(tmp_moved_constant_12*tmp_moved_constant_24 + tmp_moved_constant_18*tmp_moved_constant_6 + tmp_moved_constant_21*tmp_moved_constant_9);
       const real_t tmp_moved_constant_26 = -tmp_moved_constant_17 - tmp_moved_constant_7;
       const real_t tmp_moved_constant_27 = -tmp_moved_constant_10 - tmp_moved_constant_20;
       const real_t tmp_moved_constant_28 = -tmp_moved_constant_13 - tmp_moved_constant_23;
       const real_t tmp_moved_constant_29 = tmp_moved_constant_0*(tmp_moved_constant_12*tmp_moved_constant_28 + tmp_moved_constant_26*tmp_moved_constant_6 + tmp_moved_constant_27*tmp_moved_constant_9);
       const real_t tmp_moved_constant_30 = tmp_moved_constant_0*(jac_affine_0_1_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN*-4.0 + jac_affine_1_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*-4.0 + jac_affine_2_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN*-4.0);
       const real_t tmp_moved_constant_31 = tmp_moved_constant_0*(-tmp_moved_constant_10*tmp_moved_constant_11 - tmp_moved_constant_13*tmp_moved_constant_14 - tmp_moved_constant_7*tmp_moved_constant_8);
       const real_t tmp_moved_constant_32 = tmp_moved_constant_0*(-tmp_moved_constant_10*tmp_moved_constant_21 - tmp_moved_constant_13*tmp_moved_constant_24 - tmp_moved_constant_18*tmp_moved_constant_7);
       const real_t tmp_moved_constant_33 = tmp_moved_constant_0*(-tmp_moved_constant_10*tmp_moved_constant_27 - tmp_moved_constant_13*tmp_moved_constant_28 - tmp_moved_constant_26*tmp_moved_constant_7);
       const real_t tmp_moved_constant_34 = tmp_moved_constant_0*(tmp_moved_constant_11*tmp_moved_constant_19 + tmp_moved_constant_14*tmp_moved_constant_22 + tmp_moved_constant_16*tmp_moved_constant_8);
       const real_t tmp_moved_constant_35 = tmp_moved_constant_0*(tmp_moved_constant_16*tmp_moved_constant_18 + tmp_moved_constant_19*tmp_moved_constant_21 + tmp_moved_constant_22*tmp_moved_constant_24);
       const real_t tmp_moved_constant_36 = tmp_moved_constant_0*(tmp_moved_constant_16*tmp_moved_constant_26 + tmp_moved_constant_19*tmp_moved_constant_27 + tmp_moved_constant_22*tmp_moved_constant_28);
       const real_t tmp_moved_constant_37 = tmp_moved_constant_0*(tmp_moved_constant_11*tmp_moved_constant_21 + tmp_moved_constant_14*tmp_moved_constant_24 + tmp_moved_constant_18*tmp_moved_constant_8);
       const real_t tmp_moved_constant_38 = tmp_moved_constant_0*(tmp_moved_constant_11*tmp_moved_constant_27 + tmp_moved_constant_14*tmp_moved_constant_28 + tmp_moved_constant_26*tmp_moved_constant_8);
       const real_t tmp_moved_constant_39 = tmp_moved_constant_0*(tmp_moved_constant_18*tmp_moved_constant_26 + tmp_moved_constant_21*tmp_moved_constant_27 + tmp_moved_constant_24*tmp_moved_constant_28);
       const real_t tmp_moved_constant_40 = tmp_moved_constant_0*((jac_affine_0_0_WHITE_DOWN*jac_affine_0_0_WHITE_DOWN)*4.0 + (jac_affine_1_0_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN)*4.0 + (jac_affine_2_0_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN)*4.0);
       const real_t tmp_moved_constant_41 = tmp_moved_constant_4;
       const real_t tmp_moved_constant_42 = tmp_moved_constant_5;
       const real_t tmp_moved_constant_43 = tmp_moved_constant_15;
       const real_t tmp_moved_constant_44 = tmp_moved_constant_25;
       const real_t tmp_moved_constant_45 = tmp_moved_constant_29;
       const real_t tmp_moved_constant_46 = tmp_moved_constant_4;
       const real_t tmp_moved_constant_47 = tmp_moved_constant_0*((jac_affine_0_1_WHITE_DOWN*jac_affine_0_1_WHITE_DOWN)*4.0 + (jac_affine_1_1_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN)*4.0 + (jac_affine_2_1_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN)*4.0);
       const real_t tmp_moved_constant_48 = tmp_moved_constant_30;
       const real_t tmp_moved_constant_49 = tmp_moved_constant_31;
       const real_t tmp_moved_constant_50 = tmp_moved_constant_32;
       const real_t tmp_moved_constant_51 = tmp_moved_constant_33;
       const real_t tmp_moved_constant_52 = tmp_moved_constant_5;
       const real_t tmp_moved_constant_53 = tmp_moved_constant_30;
       const real_t tmp_moved_constant_54 = tmp_moved_constant_0*((jac_affine_0_2_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN)*4.0 + (jac_affine_1_2_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN)*4.0 + (jac_affine_2_2_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN)*4.0);
       const real_t tmp_moved_constant_55 = tmp_moved_constant_34;
       const real_t tmp_moved_constant_56 = tmp_moved_constant_35;
       const real_t tmp_moved_constant_57 = tmp_moved_constant_36;
       const real_t tmp_moved_constant_58 = tmp_moved_constant_15;
       const real_t tmp_moved_constant_59 = tmp_moved_constant_31;
       const real_t tmp_moved_constant_60 = tmp_moved_constant_34;
       const real_t tmp_moved_constant_61 = tmp_moved_constant_0*((tmp_moved_constant_11*tmp_moved_constant_11) + (tmp_moved_constant_14*tmp_moved_constant_14) + (tmp_moved_constant_8*tmp_moved_constant_8));
       const real_t tmp_moved_constant_62 = tmp_moved_constant_37;
       const real_t tmp_moved_constant_63 = tmp_moved_constant_38;
       const real_t tmp_moved_constant_64 = tmp_moved_constant_25;
       const real_t tmp_moved_constant_65 = tmp_moved_constant_32;
       const real_t tmp_moved_constant_66 = tmp_moved_constant_35;
       const real_t tmp_moved_constant_67 = tmp_moved_constant_37;
       const real_t tmp_moved_constant_68 = tmp_moved_constant_0*((tmp_moved_constant_18*tmp_moved_constant_18) + (tmp_moved_constant_21*tmp_moved_constant_21) + (tmp_moved_constant_24*tmp_moved_constant_24));
       const real_t tmp_moved_constant_69 = tmp_moved_constant_39;
       const real_t tmp_moved_constant_70 = tmp_moved_constant_29;
       const real_t tmp_moved_constant_71 = tmp_moved_constant_33;
       const real_t tmp_moved_constant_72 = tmp_moved_constant_36;
       const real_t tmp_moved_constant_73 = tmp_moved_constant_38;
       const real_t tmp_moved_constant_74 = tmp_moved_constant_39;
       const real_t tmp_moved_constant_75 = tmp_moved_constant_0*((tmp_moved_constant_26*tmp_moved_constant_26) + (tmp_moved_constant_27*tmp_moved_constant_27) + (tmp_moved_constant_28*tmp_moved_constant_28));
       {
          /* CellType.WHITE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
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
             real_t _data_float_loop_ctr_array_dim_2[4];
             _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
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
         
             _data_mat[0] = ((real_t)((basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))*tmp_moved_constant_40));
             _data_mat[1] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_41));
             _data_mat[2] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_42));
             _data_mat[3] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_43));
             _data_mat[4] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_44));
             _data_mat[5] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_45));
             _data_mat[6] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_46));
             _data_mat[7] = ((real_t)((basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))*tmp_moved_constant_47));
             _data_mat[8] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_48));
             _data_mat[9] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_49));
             _data_mat[10] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_50));
             _data_mat[11] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_51));
             _data_mat[12] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_52));
             _data_mat[13] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_53));
             _data_mat[14] = ((real_t)((basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))*tmp_moved_constant_54));
             _data_mat[15] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_55));
             _data_mat[16] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_56));
             _data_mat[17] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_57));
             _data_mat[18] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_58));
             _data_mat[19] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_59));
             _data_mat[20] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_60));
             _data_mat[21] = ((real_t)((basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))*tmp_moved_constant_61));
             _data_mat[22] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_62));
             _data_mat[23] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_63));
             _data_mat[24] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_64));
             _data_mat[25] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_65));
             _data_mat[26] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_66));
             _data_mat[27] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_67));
             _data_mat[28] = ((real_t)((basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))*tmp_moved_constant_68));
             _data_mat[29] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_69));
             _data_mat[30] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_70));
             _data_mat[31] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_71));
             _data_mat[32] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_72));
             _data_mat[33] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_73));
             _data_mat[34] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_74));
             _data_mat[35] = ((real_t)((basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))*tmp_moved_constant_75));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
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
       const real_t tmp_moved_constant_76 = 1.0 / (abs_det_jac_affine_BLUE_UP)*0.16666666666666663;
       const real_t tmp_moved_constant_77 = jac_affine_0_0_BLUE_UP*4.0;
       const real_t tmp_moved_constant_78 = jac_affine_1_0_BLUE_UP*4.0;
       const real_t tmp_moved_constant_79 = jac_affine_2_0_BLUE_UP*4.0;
       const real_t tmp_moved_constant_80 = tmp_moved_constant_76*(-jac_affine_0_1_BLUE_UP*tmp_moved_constant_77 - jac_affine_1_1_BLUE_UP*tmp_moved_constant_78 - jac_affine_2_1_BLUE_UP*tmp_moved_constant_79);
       const real_t tmp_moved_constant_81 = tmp_moved_constant_76*(jac_affine_0_2_BLUE_UP*tmp_moved_constant_77 + jac_affine_1_2_BLUE_UP*tmp_moved_constant_78 + jac_affine_2_2_BLUE_UP*tmp_moved_constant_79);
       const real_t tmp_moved_constant_82 = jac_affine_0_0_BLUE_UP*2.0;
       const real_t tmp_moved_constant_83 = jac_affine_0_1_BLUE_UP*2.0;
       const real_t tmp_moved_constant_84 = -tmp_moved_constant_82 + tmp_moved_constant_83;
       const real_t tmp_moved_constant_85 = jac_affine_1_0_BLUE_UP*2.0;
       const real_t tmp_moved_constant_86 = jac_affine_1_1_BLUE_UP*2.0;
       const real_t tmp_moved_constant_87 = -tmp_moved_constant_85 + tmp_moved_constant_86;
       const real_t tmp_moved_constant_88 = jac_affine_2_0_BLUE_UP*2.0;
       const real_t tmp_moved_constant_89 = jac_affine_2_1_BLUE_UP*2.0;
       const real_t tmp_moved_constant_90 = -tmp_moved_constant_88 + tmp_moved_constant_89;
       const real_t tmp_moved_constant_91 = tmp_moved_constant_76*(tmp_moved_constant_82*tmp_moved_constant_84 + tmp_moved_constant_85*tmp_moved_constant_87 + tmp_moved_constant_88*tmp_moved_constant_90);
       const real_t tmp_moved_constant_92 = jac_affine_0_2_BLUE_UP*2.0;
       const real_t tmp_moved_constant_93 = -tmp_moved_constant_92;
       const real_t tmp_moved_constant_94 = tmp_moved_constant_82 + tmp_moved_constant_93;
       const real_t tmp_moved_constant_95 = jac_affine_1_2_BLUE_UP*2.0;
       const real_t tmp_moved_constant_96 = -tmp_moved_constant_95;
       const real_t tmp_moved_constant_97 = tmp_moved_constant_85 + tmp_moved_constant_96;
       const real_t tmp_moved_constant_98 = jac_affine_2_2_BLUE_UP*2.0;
       const real_t tmp_moved_constant_99 = -tmp_moved_constant_98;
       const real_t tmp_moved_constant_100 = tmp_moved_constant_88 + tmp_moved_constant_99;
       const real_t tmp_moved_constant_101 = tmp_moved_constant_76*(tmp_moved_constant_100*tmp_moved_constant_88 + tmp_moved_constant_82*tmp_moved_constant_94 + tmp_moved_constant_85*tmp_moved_constant_97);
       const real_t tmp_moved_constant_102 = -tmp_moved_constant_83 - tmp_moved_constant_93;
       const real_t tmp_moved_constant_103 = -tmp_moved_constant_86 - tmp_moved_constant_96;
       const real_t tmp_moved_constant_104 = -tmp_moved_constant_89 - tmp_moved_constant_99;
       const real_t tmp_moved_constant_105 = tmp_moved_constant_76*(tmp_moved_constant_102*tmp_moved_constant_82 + tmp_moved_constant_103*tmp_moved_constant_85 + tmp_moved_constant_104*tmp_moved_constant_88);
       const real_t tmp_moved_constant_106 = tmp_moved_constant_76*(jac_affine_0_1_BLUE_UP*jac_affine_0_2_BLUE_UP*-4.0 + jac_affine_1_1_BLUE_UP*jac_affine_1_2_BLUE_UP*-4.0 + jac_affine_2_1_BLUE_UP*jac_affine_2_2_BLUE_UP*-4.0);
       const real_t tmp_moved_constant_107 = tmp_moved_constant_76*(-tmp_moved_constant_83*tmp_moved_constant_84 - tmp_moved_constant_86*tmp_moved_constant_87 - tmp_moved_constant_89*tmp_moved_constant_90);
       const real_t tmp_moved_constant_108 = tmp_moved_constant_76*(-tmp_moved_constant_100*tmp_moved_constant_89 - tmp_moved_constant_83*tmp_moved_constant_94 - tmp_moved_constant_86*tmp_moved_constant_97);
       const real_t tmp_moved_constant_109 = tmp_moved_constant_76*(-tmp_moved_constant_102*tmp_moved_constant_83 - tmp_moved_constant_103*tmp_moved_constant_86 - tmp_moved_constant_104*tmp_moved_constant_89);
       const real_t tmp_moved_constant_110 = tmp_moved_constant_76*(tmp_moved_constant_84*tmp_moved_constant_92 + tmp_moved_constant_87*tmp_moved_constant_95 + tmp_moved_constant_90*tmp_moved_constant_98);
       const real_t tmp_moved_constant_111 = tmp_moved_constant_76*(tmp_moved_constant_100*tmp_moved_constant_98 + tmp_moved_constant_92*tmp_moved_constant_94 + tmp_moved_constant_95*tmp_moved_constant_97);
       const real_t tmp_moved_constant_112 = tmp_moved_constant_76*(tmp_moved_constant_102*tmp_moved_constant_92 + tmp_moved_constant_103*tmp_moved_constant_95 + tmp_moved_constant_104*tmp_moved_constant_98);
       const real_t tmp_moved_constant_113 = tmp_moved_constant_76*(tmp_moved_constant_100*tmp_moved_constant_90 + tmp_moved_constant_84*tmp_moved_constant_94 + tmp_moved_constant_87*tmp_moved_constant_97);
       const real_t tmp_moved_constant_114 = tmp_moved_constant_76*(tmp_moved_constant_102*tmp_moved_constant_84 + tmp_moved_constant_103*tmp_moved_constant_87 + tmp_moved_constant_104*tmp_moved_constant_90);
       const real_t tmp_moved_constant_115 = tmp_moved_constant_76*(tmp_moved_constant_100*tmp_moved_constant_104 + tmp_moved_constant_102*tmp_moved_constant_94 + tmp_moved_constant_103*tmp_moved_constant_97);
       const real_t tmp_moved_constant_116 = tmp_moved_constant_76*((jac_affine_0_0_BLUE_UP*jac_affine_0_0_BLUE_UP)*4.0 + (jac_affine_1_0_BLUE_UP*jac_affine_1_0_BLUE_UP)*4.0 + (jac_affine_2_0_BLUE_UP*jac_affine_2_0_BLUE_UP)*4.0);
       const real_t tmp_moved_constant_117 = tmp_moved_constant_80;
       const real_t tmp_moved_constant_118 = tmp_moved_constant_81;
       const real_t tmp_moved_constant_119 = tmp_moved_constant_91;
       const real_t tmp_moved_constant_120 = tmp_moved_constant_101;
       const real_t tmp_moved_constant_121 = tmp_moved_constant_105;
       const real_t tmp_moved_constant_122 = tmp_moved_constant_80;
       const real_t tmp_moved_constant_123 = tmp_moved_constant_76*((jac_affine_0_1_BLUE_UP*jac_affine_0_1_BLUE_UP)*4.0 + (jac_affine_1_1_BLUE_UP*jac_affine_1_1_BLUE_UP)*4.0 + (jac_affine_2_1_BLUE_UP*jac_affine_2_1_BLUE_UP)*4.0);
       const real_t tmp_moved_constant_124 = tmp_moved_constant_106;
       const real_t tmp_moved_constant_125 = tmp_moved_constant_107;
       const real_t tmp_moved_constant_126 = tmp_moved_constant_108;
       const real_t tmp_moved_constant_127 = tmp_moved_constant_109;
       const real_t tmp_moved_constant_128 = tmp_moved_constant_81;
       const real_t tmp_moved_constant_129 = tmp_moved_constant_106;
       const real_t tmp_moved_constant_130 = tmp_moved_constant_76*((jac_affine_0_2_BLUE_UP*jac_affine_0_2_BLUE_UP)*4.0 + (jac_affine_1_2_BLUE_UP*jac_affine_1_2_BLUE_UP)*4.0 + (jac_affine_2_2_BLUE_UP*jac_affine_2_2_BLUE_UP)*4.0);
       const real_t tmp_moved_constant_131 = tmp_moved_constant_110;
       const real_t tmp_moved_constant_132 = tmp_moved_constant_111;
       const real_t tmp_moved_constant_133 = tmp_moved_constant_112;
       const real_t tmp_moved_constant_134 = tmp_moved_constant_91;
       const real_t tmp_moved_constant_135 = tmp_moved_constant_107;
       const real_t tmp_moved_constant_136 = tmp_moved_constant_110;
       const real_t tmp_moved_constant_137 = tmp_moved_constant_76*((tmp_moved_constant_84*tmp_moved_constant_84) + (tmp_moved_constant_87*tmp_moved_constant_87) + (tmp_moved_constant_90*tmp_moved_constant_90));
       const real_t tmp_moved_constant_138 = tmp_moved_constant_113;
       const real_t tmp_moved_constant_139 = tmp_moved_constant_114;
       const real_t tmp_moved_constant_140 = tmp_moved_constant_101;
       const real_t tmp_moved_constant_141 = tmp_moved_constant_108;
       const real_t tmp_moved_constant_142 = tmp_moved_constant_111;
       const real_t tmp_moved_constant_143 = tmp_moved_constant_113;
       const real_t tmp_moved_constant_144 = tmp_moved_constant_76*((tmp_moved_constant_100*tmp_moved_constant_100) + (tmp_moved_constant_94*tmp_moved_constant_94) + (tmp_moved_constant_97*tmp_moved_constant_97));
       const real_t tmp_moved_constant_145 = tmp_moved_constant_115;
       const real_t tmp_moved_constant_146 = tmp_moved_constant_105;
       const real_t tmp_moved_constant_147 = tmp_moved_constant_109;
       const real_t tmp_moved_constant_148 = tmp_moved_constant_112;
       const real_t tmp_moved_constant_149 = tmp_moved_constant_114;
       const real_t tmp_moved_constant_150 = tmp_moved_constant_115;
       const real_t tmp_moved_constant_151 = tmp_moved_constant_76*((tmp_moved_constant_102*tmp_moved_constant_102) + (tmp_moved_constant_103*tmp_moved_constant_103) + (tmp_moved_constant_104*tmp_moved_constant_104));
       {
          /* CellType.BLUE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
             real_t _data_float_loop_ctr_array_dim_2[4];
             _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
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
         
             _data_mat[0] = ((real_t)((basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))*tmp_moved_constant_116));
             _data_mat[1] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_117));
             _data_mat[2] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_118));
             _data_mat[3] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_119));
             _data_mat[4] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_120));
             _data_mat[5] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_121));
             _data_mat[6] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_122));
             _data_mat[7] = ((real_t)((basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))*tmp_moved_constant_123));
             _data_mat[8] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_124));
             _data_mat[9] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_125));
             _data_mat[10] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_126));
             _data_mat[11] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_127));
             _data_mat[12] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_128));
             _data_mat[13] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_129));
             _data_mat[14] = ((real_t)((basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))*tmp_moved_constant_130));
             _data_mat[15] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_131));
             _data_mat[16] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_132));
             _data_mat[17] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_133));
             _data_mat[18] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_134));
             _data_mat[19] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_135));
             _data_mat[20] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_136));
             _data_mat[21] = ((real_t)((basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))*tmp_moved_constant_137));
             _data_mat[22] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_138));
             _data_mat[23] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_139));
             _data_mat[24] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_140));
             _data_mat[25] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_141));
             _data_mat[26] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_142));
             _data_mat[27] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_143));
             _data_mat[28] = ((real_t)((basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))*tmp_moved_constant_144));
             _data_mat[29] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_145));
             _data_mat[30] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_146));
             _data_mat[31] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_147));
             _data_mat[32] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_148));
             _data_mat[33] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_149));
             _data_mat[34] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_150));
             _data_mat[35] = ((real_t)((basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))*tmp_moved_constant_151));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
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
       const real_t tmp_moved_constant_152 = 1.0 / (abs_det_jac_affine_BLUE_DOWN)*0.16666666666666663;
       const real_t tmp_moved_constant_153 = jac_affine_0_0_BLUE_DOWN*4.0;
       const real_t tmp_moved_constant_154 = jac_affine_1_0_BLUE_DOWN*4.0;
       const real_t tmp_moved_constant_155 = jac_affine_2_0_BLUE_DOWN*4.0;
       const real_t tmp_moved_constant_156 = tmp_moved_constant_152*(-jac_affine_0_1_BLUE_DOWN*tmp_moved_constant_153 - jac_affine_1_1_BLUE_DOWN*tmp_moved_constant_154 - jac_affine_2_1_BLUE_DOWN*tmp_moved_constant_155);
       const real_t tmp_moved_constant_157 = tmp_moved_constant_152*(jac_affine_0_2_BLUE_DOWN*tmp_moved_constant_153 + jac_affine_1_2_BLUE_DOWN*tmp_moved_constant_154 + jac_affine_2_2_BLUE_DOWN*tmp_moved_constant_155);
       const real_t tmp_moved_constant_158 = jac_affine_0_0_BLUE_DOWN*2.0;
       const real_t tmp_moved_constant_159 = jac_affine_0_1_BLUE_DOWN*2.0;
       const real_t tmp_moved_constant_160 = -tmp_moved_constant_158 + tmp_moved_constant_159;
       const real_t tmp_moved_constant_161 = jac_affine_1_0_BLUE_DOWN*2.0;
       const real_t tmp_moved_constant_162 = jac_affine_1_1_BLUE_DOWN*2.0;
       const real_t tmp_moved_constant_163 = -tmp_moved_constant_161 + tmp_moved_constant_162;
       const real_t tmp_moved_constant_164 = jac_affine_2_0_BLUE_DOWN*2.0;
       const real_t tmp_moved_constant_165 = jac_affine_2_1_BLUE_DOWN*2.0;
       const real_t tmp_moved_constant_166 = -tmp_moved_constant_164 + tmp_moved_constant_165;
       const real_t tmp_moved_constant_167 = tmp_moved_constant_152*(tmp_moved_constant_158*tmp_moved_constant_160 + tmp_moved_constant_161*tmp_moved_constant_163 + tmp_moved_constant_164*tmp_moved_constant_166);
       const real_t tmp_moved_constant_168 = jac_affine_0_2_BLUE_DOWN*2.0;
       const real_t tmp_moved_constant_169 = -tmp_moved_constant_168;
       const real_t tmp_moved_constant_170 = tmp_moved_constant_158 + tmp_moved_constant_169;
       const real_t tmp_moved_constant_171 = jac_affine_1_2_BLUE_DOWN*2.0;
       const real_t tmp_moved_constant_172 = -tmp_moved_constant_171;
       const real_t tmp_moved_constant_173 = tmp_moved_constant_161 + tmp_moved_constant_172;
       const real_t tmp_moved_constant_174 = jac_affine_2_2_BLUE_DOWN*2.0;
       const real_t tmp_moved_constant_175 = -tmp_moved_constant_174;
       const real_t tmp_moved_constant_176 = tmp_moved_constant_164 + tmp_moved_constant_175;
       const real_t tmp_moved_constant_177 = tmp_moved_constant_152*(tmp_moved_constant_158*tmp_moved_constant_170 + tmp_moved_constant_161*tmp_moved_constant_173 + tmp_moved_constant_164*tmp_moved_constant_176);
       const real_t tmp_moved_constant_178 = -tmp_moved_constant_159 - tmp_moved_constant_169;
       const real_t tmp_moved_constant_179 = -tmp_moved_constant_162 - tmp_moved_constant_172;
       const real_t tmp_moved_constant_180 = -tmp_moved_constant_165 - tmp_moved_constant_175;
       const real_t tmp_moved_constant_181 = tmp_moved_constant_152*(tmp_moved_constant_158*tmp_moved_constant_178 + tmp_moved_constant_161*tmp_moved_constant_179 + tmp_moved_constant_164*tmp_moved_constant_180);
       const real_t tmp_moved_constant_182 = tmp_moved_constant_152*(jac_affine_0_1_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN*-4.0 + jac_affine_1_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*-4.0 + jac_affine_2_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN*-4.0);
       const real_t tmp_moved_constant_183 = tmp_moved_constant_152*(-tmp_moved_constant_159*tmp_moved_constant_160 - tmp_moved_constant_162*tmp_moved_constant_163 - tmp_moved_constant_165*tmp_moved_constant_166);
       const real_t tmp_moved_constant_184 = tmp_moved_constant_152*(-tmp_moved_constant_159*tmp_moved_constant_170 - tmp_moved_constant_162*tmp_moved_constant_173 - tmp_moved_constant_165*tmp_moved_constant_176);
       const real_t tmp_moved_constant_185 = tmp_moved_constant_152*(-tmp_moved_constant_159*tmp_moved_constant_178 - tmp_moved_constant_162*tmp_moved_constant_179 - tmp_moved_constant_165*tmp_moved_constant_180);
       const real_t tmp_moved_constant_186 = tmp_moved_constant_152*(tmp_moved_constant_160*tmp_moved_constant_168 + tmp_moved_constant_163*tmp_moved_constant_171 + tmp_moved_constant_166*tmp_moved_constant_174);
       const real_t tmp_moved_constant_187 = tmp_moved_constant_152*(tmp_moved_constant_168*tmp_moved_constant_170 + tmp_moved_constant_171*tmp_moved_constant_173 + tmp_moved_constant_174*tmp_moved_constant_176);
       const real_t tmp_moved_constant_188 = tmp_moved_constant_152*(tmp_moved_constant_168*tmp_moved_constant_178 + tmp_moved_constant_171*tmp_moved_constant_179 + tmp_moved_constant_174*tmp_moved_constant_180);
       const real_t tmp_moved_constant_189 = tmp_moved_constant_152*(tmp_moved_constant_160*tmp_moved_constant_170 + tmp_moved_constant_163*tmp_moved_constant_173 + tmp_moved_constant_166*tmp_moved_constant_176);
       const real_t tmp_moved_constant_190 = tmp_moved_constant_152*(tmp_moved_constant_160*tmp_moved_constant_178 + tmp_moved_constant_163*tmp_moved_constant_179 + tmp_moved_constant_166*tmp_moved_constant_180);
       const real_t tmp_moved_constant_191 = tmp_moved_constant_152*(tmp_moved_constant_170*tmp_moved_constant_178 + tmp_moved_constant_173*tmp_moved_constant_179 + tmp_moved_constant_176*tmp_moved_constant_180);
       const real_t tmp_moved_constant_192 = tmp_moved_constant_152*((jac_affine_0_0_BLUE_DOWN*jac_affine_0_0_BLUE_DOWN)*4.0 + (jac_affine_1_0_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN)*4.0 + (jac_affine_2_0_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN)*4.0);
       const real_t tmp_moved_constant_193 = tmp_moved_constant_156;
       const real_t tmp_moved_constant_194 = tmp_moved_constant_157;
       const real_t tmp_moved_constant_195 = tmp_moved_constant_167;
       const real_t tmp_moved_constant_196 = tmp_moved_constant_177;
       const real_t tmp_moved_constant_197 = tmp_moved_constant_181;
       const real_t tmp_moved_constant_198 = tmp_moved_constant_156;
       const real_t tmp_moved_constant_199 = tmp_moved_constant_152*((jac_affine_0_1_BLUE_DOWN*jac_affine_0_1_BLUE_DOWN)*4.0 + (jac_affine_1_1_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN)*4.0 + (jac_affine_2_1_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN)*4.0);
       const real_t tmp_moved_constant_200 = tmp_moved_constant_182;
       const real_t tmp_moved_constant_201 = tmp_moved_constant_183;
       const real_t tmp_moved_constant_202 = tmp_moved_constant_184;
       const real_t tmp_moved_constant_203 = tmp_moved_constant_185;
       const real_t tmp_moved_constant_204 = tmp_moved_constant_157;
       const real_t tmp_moved_constant_205 = tmp_moved_constant_182;
       const real_t tmp_moved_constant_206 = tmp_moved_constant_152*((jac_affine_0_2_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN)*4.0 + (jac_affine_1_2_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN)*4.0 + (jac_affine_2_2_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN)*4.0);
       const real_t tmp_moved_constant_207 = tmp_moved_constant_186;
       const real_t tmp_moved_constant_208 = tmp_moved_constant_187;
       const real_t tmp_moved_constant_209 = tmp_moved_constant_188;
       const real_t tmp_moved_constant_210 = tmp_moved_constant_167;
       const real_t tmp_moved_constant_211 = tmp_moved_constant_183;
       const real_t tmp_moved_constant_212 = tmp_moved_constant_186;
       const real_t tmp_moved_constant_213 = tmp_moved_constant_152*((tmp_moved_constant_160*tmp_moved_constant_160) + (tmp_moved_constant_163*tmp_moved_constant_163) + (tmp_moved_constant_166*tmp_moved_constant_166));
       const real_t tmp_moved_constant_214 = tmp_moved_constant_189;
       const real_t tmp_moved_constant_215 = tmp_moved_constant_190;
       const real_t tmp_moved_constant_216 = tmp_moved_constant_177;
       const real_t tmp_moved_constant_217 = tmp_moved_constant_184;
       const real_t tmp_moved_constant_218 = tmp_moved_constant_187;
       const real_t tmp_moved_constant_219 = tmp_moved_constant_189;
       const real_t tmp_moved_constant_220 = tmp_moved_constant_152*((tmp_moved_constant_170*tmp_moved_constant_170) + (tmp_moved_constant_173*tmp_moved_constant_173) + (tmp_moved_constant_176*tmp_moved_constant_176));
       const real_t tmp_moved_constant_221 = tmp_moved_constant_191;
       const real_t tmp_moved_constant_222 = tmp_moved_constant_181;
       const real_t tmp_moved_constant_223 = tmp_moved_constant_185;
       const real_t tmp_moved_constant_224 = tmp_moved_constant_188;
       const real_t tmp_moved_constant_225 = tmp_moved_constant_190;
       const real_t tmp_moved_constant_226 = tmp_moved_constant_191;
       const real_t tmp_moved_constant_227 = tmp_moved_constant_152*((tmp_moved_constant_178*tmp_moved_constant_178) + (tmp_moved_constant_179*tmp_moved_constant_179) + (tmp_moved_constant_180*tmp_moved_constant_180));
       {
          /* CellType.BLUE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
             real_t _data_float_loop_ctr_array_dim_2[4];
             _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
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
         
             _data_mat[0] = ((real_t)((basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))*tmp_moved_constant_192));
             _data_mat[1] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_193));
             _data_mat[2] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_194));
             _data_mat[3] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_195));
             _data_mat[4] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_196));
             _data_mat[5] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_197));
             _data_mat[6] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_198));
             _data_mat[7] = ((real_t)((basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))*tmp_moved_constant_199));
             _data_mat[8] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_200));
             _data_mat[9] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_201));
             _data_mat[10] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_202));
             _data_mat[11] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_203));
             _data_mat[12] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_204));
             _data_mat[13] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_205));
             _data_mat[14] = ((real_t)((basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))*tmp_moved_constant_206));
             _data_mat[15] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_207));
             _data_mat[16] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_208));
             _data_mat[17] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_209));
             _data_mat[18] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_210));
             _data_mat[19] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_211));
             _data_mat[20] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_212));
             _data_mat[21] = ((real_t)((basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))*tmp_moved_constant_213));
             _data_mat[22] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_214));
             _data_mat[23] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_215));
             _data_mat[24] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_216));
             _data_mat[25] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_217));
             _data_mat[26] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_218));
             _data_mat[27] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_219));
             _data_mat[28] = ((real_t)((basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))*tmp_moved_constant_220));
             _data_mat[29] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_221));
             _data_mat[30] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_222));
             _data_mat[31] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_223));
             _data_mat[32] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_224));
             _data_mat[33] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_225));
             _data_mat[34] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_226));
             _data_mat[35] = ((real_t)((basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))*tmp_moved_constant_227));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
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
       const real_t tmp_moved_constant_228 = 1.0 / (abs_det_jac_affine_GREEN_UP)*0.16666666666666663;
       const real_t tmp_moved_constant_229 = jac_affine_0_0_GREEN_UP*4.0;
       const real_t tmp_moved_constant_230 = jac_affine_1_0_GREEN_UP*4.0;
       const real_t tmp_moved_constant_231 = jac_affine_2_0_GREEN_UP*4.0;
       const real_t tmp_moved_constant_232 = tmp_moved_constant_228*(-jac_affine_0_1_GREEN_UP*tmp_moved_constant_229 - jac_affine_1_1_GREEN_UP*tmp_moved_constant_230 - jac_affine_2_1_GREEN_UP*tmp_moved_constant_231);
       const real_t tmp_moved_constant_233 = tmp_moved_constant_228*(jac_affine_0_2_GREEN_UP*tmp_moved_constant_229 + jac_affine_1_2_GREEN_UP*tmp_moved_constant_230 + jac_affine_2_2_GREEN_UP*tmp_moved_constant_231);
       const real_t tmp_moved_constant_234 = jac_affine_0_0_GREEN_UP*2.0;
       const real_t tmp_moved_constant_235 = jac_affine_0_1_GREEN_UP*2.0;
       const real_t tmp_moved_constant_236 = -tmp_moved_constant_234 + tmp_moved_constant_235;
       const real_t tmp_moved_constant_237 = jac_affine_1_0_GREEN_UP*2.0;
       const real_t tmp_moved_constant_238 = jac_affine_1_1_GREEN_UP*2.0;
       const real_t tmp_moved_constant_239 = -tmp_moved_constant_237 + tmp_moved_constant_238;
       const real_t tmp_moved_constant_240 = jac_affine_2_0_GREEN_UP*2.0;
       const real_t tmp_moved_constant_241 = jac_affine_2_1_GREEN_UP*2.0;
       const real_t tmp_moved_constant_242 = -tmp_moved_constant_240 + tmp_moved_constant_241;
       const real_t tmp_moved_constant_243 = tmp_moved_constant_228*(tmp_moved_constant_234*tmp_moved_constant_236 + tmp_moved_constant_237*tmp_moved_constant_239 + tmp_moved_constant_240*tmp_moved_constant_242);
       const real_t tmp_moved_constant_244 = jac_affine_0_2_GREEN_UP*2.0;
       const real_t tmp_moved_constant_245 = -tmp_moved_constant_244;
       const real_t tmp_moved_constant_246 = tmp_moved_constant_234 + tmp_moved_constant_245;
       const real_t tmp_moved_constant_247 = jac_affine_1_2_GREEN_UP*2.0;
       const real_t tmp_moved_constant_248 = -tmp_moved_constant_247;
       const real_t tmp_moved_constant_249 = tmp_moved_constant_237 + tmp_moved_constant_248;
       const real_t tmp_moved_constant_250 = jac_affine_2_2_GREEN_UP*2.0;
       const real_t tmp_moved_constant_251 = -tmp_moved_constant_250;
       const real_t tmp_moved_constant_252 = tmp_moved_constant_240 + tmp_moved_constant_251;
       const real_t tmp_moved_constant_253 = tmp_moved_constant_228*(tmp_moved_constant_234*tmp_moved_constant_246 + tmp_moved_constant_237*tmp_moved_constant_249 + tmp_moved_constant_240*tmp_moved_constant_252);
       const real_t tmp_moved_constant_254 = -tmp_moved_constant_235 - tmp_moved_constant_245;
       const real_t tmp_moved_constant_255 = -tmp_moved_constant_238 - tmp_moved_constant_248;
       const real_t tmp_moved_constant_256 = -tmp_moved_constant_241 - tmp_moved_constant_251;
       const real_t tmp_moved_constant_257 = tmp_moved_constant_228*(tmp_moved_constant_234*tmp_moved_constant_254 + tmp_moved_constant_237*tmp_moved_constant_255 + tmp_moved_constant_240*tmp_moved_constant_256);
       const real_t tmp_moved_constant_258 = tmp_moved_constant_228*(jac_affine_0_1_GREEN_UP*jac_affine_0_2_GREEN_UP*-4.0 + jac_affine_1_1_GREEN_UP*jac_affine_1_2_GREEN_UP*-4.0 + jac_affine_2_1_GREEN_UP*jac_affine_2_2_GREEN_UP*-4.0);
       const real_t tmp_moved_constant_259 = tmp_moved_constant_228*(-tmp_moved_constant_235*tmp_moved_constant_236 - tmp_moved_constant_238*tmp_moved_constant_239 - tmp_moved_constant_241*tmp_moved_constant_242);
       const real_t tmp_moved_constant_260 = tmp_moved_constant_228*(-tmp_moved_constant_235*tmp_moved_constant_246 - tmp_moved_constant_238*tmp_moved_constant_249 - tmp_moved_constant_241*tmp_moved_constant_252);
       const real_t tmp_moved_constant_261 = tmp_moved_constant_228*(-tmp_moved_constant_235*tmp_moved_constant_254 - tmp_moved_constant_238*tmp_moved_constant_255 - tmp_moved_constant_241*tmp_moved_constant_256);
       const real_t tmp_moved_constant_262 = tmp_moved_constant_228*(tmp_moved_constant_236*tmp_moved_constant_244 + tmp_moved_constant_239*tmp_moved_constant_247 + tmp_moved_constant_242*tmp_moved_constant_250);
       const real_t tmp_moved_constant_263 = tmp_moved_constant_228*(tmp_moved_constant_244*tmp_moved_constant_246 + tmp_moved_constant_247*tmp_moved_constant_249 + tmp_moved_constant_250*tmp_moved_constant_252);
       const real_t tmp_moved_constant_264 = tmp_moved_constant_228*(tmp_moved_constant_244*tmp_moved_constant_254 + tmp_moved_constant_247*tmp_moved_constant_255 + tmp_moved_constant_250*tmp_moved_constant_256);
       const real_t tmp_moved_constant_265 = tmp_moved_constant_228*(tmp_moved_constant_236*tmp_moved_constant_246 + tmp_moved_constant_239*tmp_moved_constant_249 + tmp_moved_constant_242*tmp_moved_constant_252);
       const real_t tmp_moved_constant_266 = tmp_moved_constant_228*(tmp_moved_constant_236*tmp_moved_constant_254 + tmp_moved_constant_239*tmp_moved_constant_255 + tmp_moved_constant_242*tmp_moved_constant_256);
       const real_t tmp_moved_constant_267 = tmp_moved_constant_228*(tmp_moved_constant_246*tmp_moved_constant_254 + tmp_moved_constant_249*tmp_moved_constant_255 + tmp_moved_constant_252*tmp_moved_constant_256);
       const real_t tmp_moved_constant_268 = tmp_moved_constant_228*((jac_affine_0_0_GREEN_UP*jac_affine_0_0_GREEN_UP)*4.0 + (jac_affine_1_0_GREEN_UP*jac_affine_1_0_GREEN_UP)*4.0 + (jac_affine_2_0_GREEN_UP*jac_affine_2_0_GREEN_UP)*4.0);
       const real_t tmp_moved_constant_269 = tmp_moved_constant_232;
       const real_t tmp_moved_constant_270 = tmp_moved_constant_233;
       const real_t tmp_moved_constant_271 = tmp_moved_constant_243;
       const real_t tmp_moved_constant_272 = tmp_moved_constant_253;
       const real_t tmp_moved_constant_273 = tmp_moved_constant_257;
       const real_t tmp_moved_constant_274 = tmp_moved_constant_232;
       const real_t tmp_moved_constant_275 = tmp_moved_constant_228*((jac_affine_0_1_GREEN_UP*jac_affine_0_1_GREEN_UP)*4.0 + (jac_affine_1_1_GREEN_UP*jac_affine_1_1_GREEN_UP)*4.0 + (jac_affine_2_1_GREEN_UP*jac_affine_2_1_GREEN_UP)*4.0);
       const real_t tmp_moved_constant_276 = tmp_moved_constant_258;
       const real_t tmp_moved_constant_277 = tmp_moved_constant_259;
       const real_t tmp_moved_constant_278 = tmp_moved_constant_260;
       const real_t tmp_moved_constant_279 = tmp_moved_constant_261;
       const real_t tmp_moved_constant_280 = tmp_moved_constant_233;
       const real_t tmp_moved_constant_281 = tmp_moved_constant_258;
       const real_t tmp_moved_constant_282 = tmp_moved_constant_228*((jac_affine_0_2_GREEN_UP*jac_affine_0_2_GREEN_UP)*4.0 + (jac_affine_1_2_GREEN_UP*jac_affine_1_2_GREEN_UP)*4.0 + (jac_affine_2_2_GREEN_UP*jac_affine_2_2_GREEN_UP)*4.0);
       const real_t tmp_moved_constant_283 = tmp_moved_constant_262;
       const real_t tmp_moved_constant_284 = tmp_moved_constant_263;
       const real_t tmp_moved_constant_285 = tmp_moved_constant_264;
       const real_t tmp_moved_constant_286 = tmp_moved_constant_243;
       const real_t tmp_moved_constant_287 = tmp_moved_constant_259;
       const real_t tmp_moved_constant_288 = tmp_moved_constant_262;
       const real_t tmp_moved_constant_289 = tmp_moved_constant_228*((tmp_moved_constant_236*tmp_moved_constant_236) + (tmp_moved_constant_239*tmp_moved_constant_239) + (tmp_moved_constant_242*tmp_moved_constant_242));
       const real_t tmp_moved_constant_290 = tmp_moved_constant_265;
       const real_t tmp_moved_constant_291 = tmp_moved_constant_266;
       const real_t tmp_moved_constant_292 = tmp_moved_constant_253;
       const real_t tmp_moved_constant_293 = tmp_moved_constant_260;
       const real_t tmp_moved_constant_294 = tmp_moved_constant_263;
       const real_t tmp_moved_constant_295 = tmp_moved_constant_265;
       const real_t tmp_moved_constant_296 = tmp_moved_constant_228*((tmp_moved_constant_246*tmp_moved_constant_246) + (tmp_moved_constant_249*tmp_moved_constant_249) + (tmp_moved_constant_252*tmp_moved_constant_252));
       const real_t tmp_moved_constant_297 = tmp_moved_constant_267;
       const real_t tmp_moved_constant_298 = tmp_moved_constant_257;
       const real_t tmp_moved_constant_299 = tmp_moved_constant_261;
       const real_t tmp_moved_constant_300 = tmp_moved_constant_264;
       const real_t tmp_moved_constant_301 = tmp_moved_constant_266;
       const real_t tmp_moved_constant_302 = tmp_moved_constant_267;
       const real_t tmp_moved_constant_303 = tmp_moved_constant_228*((tmp_moved_constant_254*tmp_moved_constant_254) + (tmp_moved_constant_255*tmp_moved_constant_255) + (tmp_moved_constant_256*tmp_moved_constant_256));
       {
          /* CellType.GREEN_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
             real_t _data_float_loop_ctr_array_dim_2[4];
             _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
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
         
             _data_mat[0] = ((real_t)((basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))*tmp_moved_constant_268));
             _data_mat[1] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_269));
             _data_mat[2] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_270));
             _data_mat[3] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_271));
             _data_mat[4] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_272));
             _data_mat[5] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_273));
             _data_mat[6] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_274));
             _data_mat[7] = ((real_t)((basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))*tmp_moved_constant_275));
             _data_mat[8] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_276));
             _data_mat[9] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_277));
             _data_mat[10] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_278));
             _data_mat[11] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_279));
             _data_mat[12] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_280));
             _data_mat[13] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_281));
             _data_mat[14] = ((real_t)((basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))*tmp_moved_constant_282));
             _data_mat[15] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_283));
             _data_mat[16] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_284));
             _data_mat[17] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_285));
             _data_mat[18] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_286));
             _data_mat[19] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_287));
             _data_mat[20] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_288));
             _data_mat[21] = ((real_t)((basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))*tmp_moved_constant_289));
             _data_mat[22] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_290));
             _data_mat[23] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_291));
             _data_mat[24] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_292));
             _data_mat[25] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_293));
             _data_mat[26] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_294));
             _data_mat[27] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_295));
             _data_mat[28] = ((real_t)((basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))*tmp_moved_constant_296));
             _data_mat[29] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_297));
             _data_mat[30] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_298));
             _data_mat[31] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_299));
             _data_mat[32] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_300));
             _data_mat[33] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_301));
             _data_mat[34] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_302));
             _data_mat[35] = ((real_t)((basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))*tmp_moved_constant_303));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
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
       const real_t tmp_moved_constant_304 = 1.0 / (abs_det_jac_affine_GREEN_DOWN)*0.16666666666666663;
       const real_t tmp_moved_constant_305 = jac_affine_0_0_GREEN_DOWN*4.0;
       const real_t tmp_moved_constant_306 = jac_affine_1_0_GREEN_DOWN*4.0;
       const real_t tmp_moved_constant_307 = jac_affine_2_0_GREEN_DOWN*4.0;
       const real_t tmp_moved_constant_308 = tmp_moved_constant_304*(-jac_affine_0_1_GREEN_DOWN*tmp_moved_constant_305 - jac_affine_1_1_GREEN_DOWN*tmp_moved_constant_306 - jac_affine_2_1_GREEN_DOWN*tmp_moved_constant_307);
       const real_t tmp_moved_constant_309 = tmp_moved_constant_304*(jac_affine_0_2_GREEN_DOWN*tmp_moved_constant_305 + jac_affine_1_2_GREEN_DOWN*tmp_moved_constant_306 + jac_affine_2_2_GREEN_DOWN*tmp_moved_constant_307);
       const real_t tmp_moved_constant_310 = jac_affine_0_0_GREEN_DOWN*2.0;
       const real_t tmp_moved_constant_311 = jac_affine_0_1_GREEN_DOWN*2.0;
       const real_t tmp_moved_constant_312 = -tmp_moved_constant_310 + tmp_moved_constant_311;
       const real_t tmp_moved_constant_313 = jac_affine_1_0_GREEN_DOWN*2.0;
       const real_t tmp_moved_constant_314 = jac_affine_1_1_GREEN_DOWN*2.0;
       const real_t tmp_moved_constant_315 = -tmp_moved_constant_313 + tmp_moved_constant_314;
       const real_t tmp_moved_constant_316 = jac_affine_2_0_GREEN_DOWN*2.0;
       const real_t tmp_moved_constant_317 = jac_affine_2_1_GREEN_DOWN*2.0;
       const real_t tmp_moved_constant_318 = -tmp_moved_constant_316 + tmp_moved_constant_317;
       const real_t tmp_moved_constant_319 = tmp_moved_constant_304*(tmp_moved_constant_310*tmp_moved_constant_312 + tmp_moved_constant_313*tmp_moved_constant_315 + tmp_moved_constant_316*tmp_moved_constant_318);
       const real_t tmp_moved_constant_320 = jac_affine_0_2_GREEN_DOWN*2.0;
       const real_t tmp_moved_constant_321 = -tmp_moved_constant_320;
       const real_t tmp_moved_constant_322 = tmp_moved_constant_310 + tmp_moved_constant_321;
       const real_t tmp_moved_constant_323 = jac_affine_1_2_GREEN_DOWN*2.0;
       const real_t tmp_moved_constant_324 = -tmp_moved_constant_323;
       const real_t tmp_moved_constant_325 = tmp_moved_constant_313 + tmp_moved_constant_324;
       const real_t tmp_moved_constant_326 = jac_affine_2_2_GREEN_DOWN*2.0;
       const real_t tmp_moved_constant_327 = -tmp_moved_constant_326;
       const real_t tmp_moved_constant_328 = tmp_moved_constant_316 + tmp_moved_constant_327;
       const real_t tmp_moved_constant_329 = tmp_moved_constant_304*(tmp_moved_constant_310*tmp_moved_constant_322 + tmp_moved_constant_313*tmp_moved_constant_325 + tmp_moved_constant_316*tmp_moved_constant_328);
       const real_t tmp_moved_constant_330 = -tmp_moved_constant_311 - tmp_moved_constant_321;
       const real_t tmp_moved_constant_331 = -tmp_moved_constant_314 - tmp_moved_constant_324;
       const real_t tmp_moved_constant_332 = -tmp_moved_constant_317 - tmp_moved_constant_327;
       const real_t tmp_moved_constant_333 = tmp_moved_constant_304*(tmp_moved_constant_310*tmp_moved_constant_330 + tmp_moved_constant_313*tmp_moved_constant_331 + tmp_moved_constant_316*tmp_moved_constant_332);
       const real_t tmp_moved_constant_334 = tmp_moved_constant_304*(jac_affine_0_1_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN*-4.0 + jac_affine_1_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*-4.0 + jac_affine_2_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN*-4.0);
       const real_t tmp_moved_constant_335 = tmp_moved_constant_304*(-tmp_moved_constant_311*tmp_moved_constant_312 - tmp_moved_constant_314*tmp_moved_constant_315 - tmp_moved_constant_317*tmp_moved_constant_318);
       const real_t tmp_moved_constant_336 = tmp_moved_constant_304*(-tmp_moved_constant_311*tmp_moved_constant_322 - tmp_moved_constant_314*tmp_moved_constant_325 - tmp_moved_constant_317*tmp_moved_constant_328);
       const real_t tmp_moved_constant_337 = tmp_moved_constant_304*(-tmp_moved_constant_311*tmp_moved_constant_330 - tmp_moved_constant_314*tmp_moved_constant_331 - tmp_moved_constant_317*tmp_moved_constant_332);
       const real_t tmp_moved_constant_338 = tmp_moved_constant_304*(tmp_moved_constant_312*tmp_moved_constant_320 + tmp_moved_constant_315*tmp_moved_constant_323 + tmp_moved_constant_318*tmp_moved_constant_326);
       const real_t tmp_moved_constant_339 = tmp_moved_constant_304*(tmp_moved_constant_320*tmp_moved_constant_322 + tmp_moved_constant_323*tmp_moved_constant_325 + tmp_moved_constant_326*tmp_moved_constant_328);
       const real_t tmp_moved_constant_340 = tmp_moved_constant_304*(tmp_moved_constant_320*tmp_moved_constant_330 + tmp_moved_constant_323*tmp_moved_constant_331 + tmp_moved_constant_326*tmp_moved_constant_332);
       const real_t tmp_moved_constant_341 = tmp_moved_constant_304*(tmp_moved_constant_312*tmp_moved_constant_322 + tmp_moved_constant_315*tmp_moved_constant_325 + tmp_moved_constant_318*tmp_moved_constant_328);
       const real_t tmp_moved_constant_342 = tmp_moved_constant_304*(tmp_moved_constant_312*tmp_moved_constant_330 + tmp_moved_constant_315*tmp_moved_constant_331 + tmp_moved_constant_318*tmp_moved_constant_332);
       const real_t tmp_moved_constant_343 = tmp_moved_constant_304*(tmp_moved_constant_322*tmp_moved_constant_330 + tmp_moved_constant_325*tmp_moved_constant_331 + tmp_moved_constant_328*tmp_moved_constant_332);
       const real_t tmp_moved_constant_344 = tmp_moved_constant_304*((jac_affine_0_0_GREEN_DOWN*jac_affine_0_0_GREEN_DOWN)*4.0 + (jac_affine_1_0_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN)*4.0 + (jac_affine_2_0_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN)*4.0);
       const real_t tmp_moved_constant_345 = tmp_moved_constant_308;
       const real_t tmp_moved_constant_346 = tmp_moved_constant_309;
       const real_t tmp_moved_constant_347 = tmp_moved_constant_319;
       const real_t tmp_moved_constant_348 = tmp_moved_constant_329;
       const real_t tmp_moved_constant_349 = tmp_moved_constant_333;
       const real_t tmp_moved_constant_350 = tmp_moved_constant_308;
       const real_t tmp_moved_constant_351 = tmp_moved_constant_304*((jac_affine_0_1_GREEN_DOWN*jac_affine_0_1_GREEN_DOWN)*4.0 + (jac_affine_1_1_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN)*4.0 + (jac_affine_2_1_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN)*4.0);
       const real_t tmp_moved_constant_352 = tmp_moved_constant_334;
       const real_t tmp_moved_constant_353 = tmp_moved_constant_335;
       const real_t tmp_moved_constant_354 = tmp_moved_constant_336;
       const real_t tmp_moved_constant_355 = tmp_moved_constant_337;
       const real_t tmp_moved_constant_356 = tmp_moved_constant_309;
       const real_t tmp_moved_constant_357 = tmp_moved_constant_334;
       const real_t tmp_moved_constant_358 = tmp_moved_constant_304*((jac_affine_0_2_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN)*4.0 + (jac_affine_1_2_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN)*4.0 + (jac_affine_2_2_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN)*4.0);
       const real_t tmp_moved_constant_359 = tmp_moved_constant_338;
       const real_t tmp_moved_constant_360 = tmp_moved_constant_339;
       const real_t tmp_moved_constant_361 = tmp_moved_constant_340;
       const real_t tmp_moved_constant_362 = tmp_moved_constant_319;
       const real_t tmp_moved_constant_363 = tmp_moved_constant_335;
       const real_t tmp_moved_constant_364 = tmp_moved_constant_338;
       const real_t tmp_moved_constant_365 = tmp_moved_constant_304*((tmp_moved_constant_312*tmp_moved_constant_312) + (tmp_moved_constant_315*tmp_moved_constant_315) + (tmp_moved_constant_318*tmp_moved_constant_318));
       const real_t tmp_moved_constant_366 = tmp_moved_constant_341;
       const real_t tmp_moved_constant_367 = tmp_moved_constant_342;
       const real_t tmp_moved_constant_368 = tmp_moved_constant_329;
       const real_t tmp_moved_constant_369 = tmp_moved_constant_336;
       const real_t tmp_moved_constant_370 = tmp_moved_constant_339;
       const real_t tmp_moved_constant_371 = tmp_moved_constant_341;
       const real_t tmp_moved_constant_372 = tmp_moved_constant_304*((tmp_moved_constant_322*tmp_moved_constant_322) + (tmp_moved_constant_325*tmp_moved_constant_325) + (tmp_moved_constant_328*tmp_moved_constant_328));
       const real_t tmp_moved_constant_373 = tmp_moved_constant_343;
       const real_t tmp_moved_constant_374 = tmp_moved_constant_333;
       const real_t tmp_moved_constant_375 = tmp_moved_constant_337;
       const real_t tmp_moved_constant_376 = tmp_moved_constant_340;
       const real_t tmp_moved_constant_377 = tmp_moved_constant_342;
       const real_t tmp_moved_constant_378 = tmp_moved_constant_343;
       const real_t tmp_moved_constant_379 = tmp_moved_constant_304*((tmp_moved_constant_330*tmp_moved_constant_330) + (tmp_moved_constant_331*tmp_moved_constant_331) + (tmp_moved_constant_332*tmp_moved_constant_332));
       {
          /* CellType.GREEN_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
             real_t _data_float_loop_ctr_array_dim_2[4];
             _data_float_loop_ctr_array_dim_2[0] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[1] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[2] = (real_t) ctr_2;
             _data_float_loop_ctr_array_dim_2[3] = (real_t) ctr_2;
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*_data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*(1.0 + _data_float_loop_ctr_array_dim_2[ctr_0 - phantom_ctr_0])*1.0;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
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
         
             _data_mat[0] = ((real_t)((basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))*tmp_moved_constant_344));
             _data_mat[1] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_345));
             _data_mat[2] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_346));
             _data_mat[3] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_347));
             _data_mat[4] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_348));
             _data_mat[5] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_349));
             _data_mat[6] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*tmp_moved_constant_350));
             _data_mat[7] = ((real_t)((basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))*tmp_moved_constant_351));
             _data_mat[8] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_352));
             _data_mat[9] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_353));
             _data_mat[10] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_354));
             _data_mat[11] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_355));
             _data_mat[12] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*tmp_moved_constant_356));
             _data_mat[13] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*tmp_moved_constant_357));
             _data_mat[14] = ((real_t)((basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))*tmp_moved_constant_358));
             _data_mat[15] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_359));
             _data_mat[16] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_360));
             _data_mat[17] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_361));
             _data_mat[18] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*tmp_moved_constant_362));
             _data_mat[19] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*tmp_moved_constant_363));
             _data_mat[20] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*tmp_moved_constant_364));
             _data_mat[21] = ((real_t)((basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))*tmp_moved_constant_365));
             _data_mat[22] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_366));
             _data_mat[23] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_367));
             _data_mat[24] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*tmp_moved_constant_368));
             _data_mat[25] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*tmp_moved_constant_369));
             _data_mat[26] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*tmp_moved_constant_370));
             _data_mat[27] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*tmp_moved_constant_371));
             _data_mat[28] = ((real_t)((basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))*tmp_moved_constant_372));
             _data_mat[29] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_373));
             _data_mat[30] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*tmp_moved_constant_374));
             _data_mat[31] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*tmp_moved_constant_375));
             _data_mat[32] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*tmp_moved_constant_376));
             _data_mat[33] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*tmp_moved_constant_377));
             _data_mat[34] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*tmp_moved_constant_378));
             _data_mat[35] = ((real_t)((basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))*tmp_moved_constant_379));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
