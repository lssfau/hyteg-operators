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

void N1E1ElementwiseCurlCurl::apply_macro_3D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t tmp_kernel_op_0 = jac_affine_0_0_WHITE_UP*4.0;
       const real_t tmp_kernel_op_1 = jac_affine_1_0_WHITE_UP*4.0;
       const real_t tmp_kernel_op_2 = jac_affine_2_0_WHITE_UP*4.0;
       const real_t tmp_kernel_op_3 = -jac_affine_0_1_WHITE_UP*tmp_kernel_op_0 - jac_affine_1_1_WHITE_UP*tmp_kernel_op_1 - jac_affine_2_1_WHITE_UP*tmp_kernel_op_2;
       const real_t tmp_kernel_op_4 = 1.0 / (abs_det_jac_affine_WHITE_UP)*0.16666666666666663;
       const real_t tmp_kernel_op_6 = jac_affine_0_2_WHITE_UP*tmp_kernel_op_0 + jac_affine_1_2_WHITE_UP*tmp_kernel_op_1 + jac_affine_2_2_WHITE_UP*tmp_kernel_op_2;
       const real_t tmp_kernel_op_9 = jac_affine_0_0_WHITE_UP*2.0;
       const real_t tmp_kernel_op_10 = jac_affine_0_1_WHITE_UP*2.0;
       const real_t tmp_kernel_op_11 = tmp_kernel_op_10 - tmp_kernel_op_9;
       const real_t tmp_kernel_op_12 = jac_affine_1_0_WHITE_UP*2.0;
       const real_t tmp_kernel_op_13 = jac_affine_1_1_WHITE_UP*2.0;
       const real_t tmp_kernel_op_14 = -tmp_kernel_op_12 + tmp_kernel_op_13;
       const real_t tmp_kernel_op_15 = jac_affine_2_0_WHITE_UP*2.0;
       const real_t tmp_kernel_op_16 = jac_affine_2_1_WHITE_UP*2.0;
       const real_t tmp_kernel_op_17 = -tmp_kernel_op_15 + tmp_kernel_op_16;
       const real_t tmp_kernel_op_18 = tmp_kernel_op_11*tmp_kernel_op_9 + tmp_kernel_op_12*tmp_kernel_op_14 + tmp_kernel_op_15*tmp_kernel_op_17;
       const real_t tmp_kernel_op_20 = jac_affine_0_2_WHITE_UP*2.0;
       const real_t tmp_kernel_op_21 = -tmp_kernel_op_20;
       const real_t tmp_kernel_op_22 = tmp_kernel_op_21 + tmp_kernel_op_9;
       const real_t tmp_kernel_op_23 = jac_affine_1_2_WHITE_UP*2.0;
       const real_t tmp_kernel_op_24 = -tmp_kernel_op_23;
       const real_t tmp_kernel_op_25 = tmp_kernel_op_12 + tmp_kernel_op_24;
       const real_t tmp_kernel_op_26 = jac_affine_2_2_WHITE_UP*2.0;
       const real_t tmp_kernel_op_27 = -tmp_kernel_op_26;
       const real_t tmp_kernel_op_28 = tmp_kernel_op_15 + tmp_kernel_op_27;
       const real_t tmp_kernel_op_29 = tmp_kernel_op_12*tmp_kernel_op_25 + tmp_kernel_op_15*tmp_kernel_op_28 + tmp_kernel_op_22*tmp_kernel_op_9;
       const real_t tmp_kernel_op_31 = -tmp_kernel_op_10 - tmp_kernel_op_21;
       const real_t tmp_kernel_op_32 = -tmp_kernel_op_13 - tmp_kernel_op_24;
       const real_t tmp_kernel_op_33 = -tmp_kernel_op_16 - tmp_kernel_op_27;
       const real_t tmp_kernel_op_34 = tmp_kernel_op_12*tmp_kernel_op_32 + tmp_kernel_op_15*tmp_kernel_op_33 + tmp_kernel_op_31*tmp_kernel_op_9;
       const real_t tmp_kernel_op_36 = jac_affine_0_1_WHITE_UP*jac_affine_0_2_WHITE_UP*-4.0 + jac_affine_1_1_WHITE_UP*jac_affine_1_2_WHITE_UP*-4.0 + jac_affine_2_1_WHITE_UP*jac_affine_2_2_WHITE_UP*-4.0;
       const real_t tmp_kernel_op_37 = -tmp_kernel_op_10*tmp_kernel_op_11 - tmp_kernel_op_13*tmp_kernel_op_14 - tmp_kernel_op_16*tmp_kernel_op_17;
       const real_t tmp_kernel_op_38 = -tmp_kernel_op_10*tmp_kernel_op_22 - tmp_kernel_op_13*tmp_kernel_op_25 - tmp_kernel_op_16*tmp_kernel_op_28;
       const real_t tmp_kernel_op_39 = -tmp_kernel_op_10*tmp_kernel_op_31 - tmp_kernel_op_13*tmp_kernel_op_32 - tmp_kernel_op_16*tmp_kernel_op_33;
       const real_t tmp_kernel_op_40 = tmp_kernel_op_11*tmp_kernel_op_20 + tmp_kernel_op_14*tmp_kernel_op_23 + tmp_kernel_op_17*tmp_kernel_op_26;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_20*tmp_kernel_op_22 + tmp_kernel_op_23*tmp_kernel_op_25 + tmp_kernel_op_26*tmp_kernel_op_28;
       const real_t tmp_kernel_op_42 = tmp_kernel_op_20*tmp_kernel_op_31 + tmp_kernel_op_23*tmp_kernel_op_32 + tmp_kernel_op_26*tmp_kernel_op_33;
       const real_t tmp_kernel_op_43 = tmp_kernel_op_11*tmp_kernel_op_22 + tmp_kernel_op_14*tmp_kernel_op_25 + tmp_kernel_op_17*tmp_kernel_op_28;
       const real_t tmp_kernel_op_44 = tmp_kernel_op_11*tmp_kernel_op_31 + tmp_kernel_op_14*tmp_kernel_op_32 + tmp_kernel_op_17*tmp_kernel_op_33;
       const real_t tmp_kernel_op_45 = tmp_kernel_op_22*tmp_kernel_op_31 + tmp_kernel_op_25*tmp_kernel_op_32 + tmp_kernel_op_28*tmp_kernel_op_33;
       {
          /* CellType.WHITE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_kernel_op_5 = src_dof_1*tmp_kernel_op_4;
             const real_t tmp_kernel_op_7 = src_dof_2*tmp_kernel_op_4;
             const real_t tmp_kernel_op_8 = src_dof_0*tmp_kernel_op_4;
             const real_t tmp_kernel_op_19 = src_dof_3*tmp_kernel_op_4;
             const real_t tmp_kernel_op_30 = src_dof_4*tmp_kernel_op_4;
             const real_t tmp_kernel_op_35 = src_dof_5*tmp_kernel_op_4;
             const real_t elMatVec_0 = tmp_kernel_op_18*tmp_kernel_op_19 + tmp_kernel_op_29*tmp_kernel_op_30 + tmp_kernel_op_3*tmp_kernel_op_5 + tmp_kernel_op_34*tmp_kernel_op_35 + tmp_kernel_op_6*tmp_kernel_op_7 + tmp_kernel_op_8*((jac_affine_0_0_WHITE_UP*jac_affine_0_0_WHITE_UP)*4.0 + (jac_affine_1_0_WHITE_UP*jac_affine_1_0_WHITE_UP)*4.0 + (jac_affine_2_0_WHITE_UP*jac_affine_2_0_WHITE_UP)*4.0);
             const real_t elMatVec_1 = tmp_kernel_op_19*tmp_kernel_op_37 + tmp_kernel_op_3*tmp_kernel_op_8 + tmp_kernel_op_30*tmp_kernel_op_38 + tmp_kernel_op_35*tmp_kernel_op_39 + tmp_kernel_op_36*tmp_kernel_op_7 + tmp_kernel_op_5*((jac_affine_0_1_WHITE_UP*jac_affine_0_1_WHITE_UP)*4.0 + (jac_affine_1_1_WHITE_UP*jac_affine_1_1_WHITE_UP)*4.0 + (jac_affine_2_1_WHITE_UP*jac_affine_2_1_WHITE_UP)*4.0);
             const real_t elMatVec_2 = tmp_kernel_op_19*tmp_kernel_op_40 + tmp_kernel_op_30*tmp_kernel_op_41 + tmp_kernel_op_35*tmp_kernel_op_42 + tmp_kernel_op_36*tmp_kernel_op_5 + tmp_kernel_op_6*tmp_kernel_op_8 + tmp_kernel_op_7*((jac_affine_0_2_WHITE_UP*jac_affine_0_2_WHITE_UP)*4.0 + (jac_affine_1_2_WHITE_UP*jac_affine_1_2_WHITE_UP)*4.0 + (jac_affine_2_2_WHITE_UP*jac_affine_2_2_WHITE_UP)*4.0);
             const real_t elMatVec_3 = tmp_kernel_op_18*tmp_kernel_op_8 + tmp_kernel_op_19*((tmp_kernel_op_11*tmp_kernel_op_11) + (tmp_kernel_op_14*tmp_kernel_op_14) + (tmp_kernel_op_17*tmp_kernel_op_17)) + tmp_kernel_op_30*tmp_kernel_op_43 + tmp_kernel_op_35*tmp_kernel_op_44 + tmp_kernel_op_37*tmp_kernel_op_5 + tmp_kernel_op_40*tmp_kernel_op_7;
             const real_t elMatVec_4 = tmp_kernel_op_19*tmp_kernel_op_43 + tmp_kernel_op_29*tmp_kernel_op_8 + tmp_kernel_op_30*((tmp_kernel_op_22*tmp_kernel_op_22) + (tmp_kernel_op_25*tmp_kernel_op_25) + (tmp_kernel_op_28*tmp_kernel_op_28)) + tmp_kernel_op_35*tmp_kernel_op_45 + tmp_kernel_op_38*tmp_kernel_op_5 + tmp_kernel_op_41*tmp_kernel_op_7;
             const real_t elMatVec_5 = tmp_kernel_op_19*tmp_kernel_op_44 + tmp_kernel_op_30*tmp_kernel_op_45 + tmp_kernel_op_34*tmp_kernel_op_8 + tmp_kernel_op_35*((tmp_kernel_op_31*tmp_kernel_op_31) + (tmp_kernel_op_32*tmp_kernel_op_32) + (tmp_kernel_op_33*tmp_kernel_op_33)) + tmp_kernel_op_39*tmp_kernel_op_5 + tmp_kernel_op_42*tmp_kernel_op_7;
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const real_t Dummy_22 = jac_affine_0_0_WHITE_DOWN*4.0;
       const real_t Dummy_23 = jac_affine_1_0_WHITE_DOWN*4.0;
       const real_t Dummy_24 = jac_affine_2_0_WHITE_DOWN*4.0;
       const real_t Dummy_25 = -Dummy_22*jac_affine_0_1_WHITE_DOWN - Dummy_23*jac_affine_1_1_WHITE_DOWN - Dummy_24*jac_affine_2_1_WHITE_DOWN;
       const real_t Dummy_26 = 1.0 / (abs_det_jac_affine_WHITE_DOWN)*0.16666666666666663;
       const real_t Dummy_27 = Dummy_22*jac_affine_0_2_WHITE_DOWN + Dummy_23*jac_affine_1_2_WHITE_DOWN + Dummy_24*jac_affine_2_2_WHITE_DOWN;
       const real_t Dummy_28 = jac_affine_0_0_WHITE_DOWN*2.0;
       const real_t Dummy_29 = jac_affine_0_1_WHITE_DOWN*2.0;
       const real_t Dummy_30 = -Dummy_28 + Dummy_29;
       const real_t Dummy_31 = jac_affine_1_0_WHITE_DOWN*2.0;
       const real_t Dummy_32 = jac_affine_1_1_WHITE_DOWN*2.0;
       const real_t Dummy_33 = -Dummy_31 + Dummy_32;
       const real_t Dummy_34 = jac_affine_2_0_WHITE_DOWN*2.0;
       const real_t Dummy_35 = jac_affine_2_1_WHITE_DOWN*2.0;
       const real_t Dummy_36 = -Dummy_34 + Dummy_35;
       const real_t Dummy_37 = Dummy_28*Dummy_30 + Dummy_31*Dummy_33 + Dummy_34*Dummy_36;
       const real_t Dummy_38 = jac_affine_0_2_WHITE_DOWN*2.0;
       const real_t Dummy_39 = -Dummy_38;
       const real_t Dummy_40 = Dummy_28 + Dummy_39;
       const real_t Dummy_41 = jac_affine_1_2_WHITE_DOWN*2.0;
       const real_t Dummy_42 = -Dummy_41;
       const real_t Dummy_43 = Dummy_31 + Dummy_42;
       const real_t Dummy_44 = jac_affine_2_2_WHITE_DOWN*2.0;
       const real_t Dummy_45 = -Dummy_44;
       const real_t Dummy_46 = Dummy_34 + Dummy_45;
       const real_t Dummy_47 = Dummy_28*Dummy_40 + Dummy_31*Dummy_43 + Dummy_34*Dummy_46;
       const real_t Dummy_48 = -Dummy_29 - Dummy_39;
       const real_t Dummy_49 = -Dummy_32 - Dummy_42;
       const real_t Dummy_50 = -Dummy_35 - Dummy_45;
       const real_t Dummy_51 = Dummy_28*Dummy_48 + Dummy_31*Dummy_49 + Dummy_34*Dummy_50;
       const real_t Dummy_52 = jac_affine_0_1_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN*-4.0 + jac_affine_1_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*-4.0 + jac_affine_2_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN*-4.0;
       const real_t Dummy_53 = -Dummy_29*Dummy_30 - Dummy_32*Dummy_33 - Dummy_35*Dummy_36;
       const real_t Dummy_54 = -Dummy_29*Dummy_40 - Dummy_32*Dummy_43 - Dummy_35*Dummy_46;
       const real_t Dummy_55 = -Dummy_29*Dummy_48 - Dummy_32*Dummy_49 - Dummy_35*Dummy_50;
       const real_t Dummy_56 = Dummy_30*Dummy_38 + Dummy_33*Dummy_41 + Dummy_36*Dummy_44;
       const real_t Dummy_57 = Dummy_38*Dummy_40 + Dummy_41*Dummy_43 + Dummy_44*Dummy_46;
       const real_t Dummy_58 = Dummy_38*Dummy_48 + Dummy_41*Dummy_49 + Dummy_44*Dummy_50;
       const real_t Dummy_59 = Dummy_30*Dummy_40 + Dummy_33*Dummy_43 + Dummy_36*Dummy_46;
       const real_t Dummy_60 = Dummy_30*Dummy_48 + Dummy_33*Dummy_49 + Dummy_36*Dummy_50;
       const real_t Dummy_61 = Dummy_40*Dummy_48 + Dummy_43*Dummy_49 + Dummy_46*Dummy_50;
       {
          /* CellType.WHITE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_4 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t tmp_kernel_op_5 = Dummy_26*src_dof_1;
             const real_t tmp_kernel_op_7 = Dummy_26*src_dof_2;
             const real_t tmp_kernel_op_8 = Dummy_26*src_dof_0;
             const real_t tmp_kernel_op_19 = Dummy_26*src_dof_3;
             const real_t tmp_kernel_op_30 = Dummy_26*src_dof_4;
             const real_t tmp_kernel_op_35 = Dummy_26*src_dof_5;
             const real_t elMatVec_0 = Dummy_25*tmp_kernel_op_5 + Dummy_27*tmp_kernel_op_7 + Dummy_37*tmp_kernel_op_19 + Dummy_47*tmp_kernel_op_30 + Dummy_51*tmp_kernel_op_35 + tmp_kernel_op_8*((jac_affine_0_0_WHITE_DOWN*jac_affine_0_0_WHITE_DOWN)*4.0 + (jac_affine_1_0_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN)*4.0 + (jac_affine_2_0_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN)*4.0);
             const real_t elMatVec_1 = Dummy_25*tmp_kernel_op_8 + Dummy_52*tmp_kernel_op_7 + Dummy_53*tmp_kernel_op_19 + Dummy_54*tmp_kernel_op_30 + Dummy_55*tmp_kernel_op_35 + tmp_kernel_op_5*((jac_affine_0_1_WHITE_DOWN*jac_affine_0_1_WHITE_DOWN)*4.0 + (jac_affine_1_1_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN)*4.0 + (jac_affine_2_1_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN)*4.0);
             const real_t elMatVec_2 = Dummy_27*tmp_kernel_op_8 + Dummy_52*tmp_kernel_op_5 + Dummy_56*tmp_kernel_op_19 + Dummy_57*tmp_kernel_op_30 + Dummy_58*tmp_kernel_op_35 + tmp_kernel_op_7*((jac_affine_0_2_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN)*4.0 + (jac_affine_1_2_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN)*4.0 + (jac_affine_2_2_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN)*4.0);
             const real_t elMatVec_3 = Dummy_37*tmp_kernel_op_8 + Dummy_53*tmp_kernel_op_5 + Dummy_56*tmp_kernel_op_7 + Dummy_59*tmp_kernel_op_30 + Dummy_60*tmp_kernel_op_35 + tmp_kernel_op_19*((Dummy_30*Dummy_30) + (Dummy_33*Dummy_33) + (Dummy_36*Dummy_36));
             const real_t elMatVec_4 = Dummy_47*tmp_kernel_op_8 + Dummy_54*tmp_kernel_op_5 + Dummy_57*tmp_kernel_op_7 + Dummy_59*tmp_kernel_op_19 + Dummy_61*tmp_kernel_op_35 + tmp_kernel_op_30*((Dummy_40*Dummy_40) + (Dummy_43*Dummy_43) + (Dummy_46*Dummy_46));
             const real_t elMatVec_5 = Dummy_51*tmp_kernel_op_8 + Dummy_55*tmp_kernel_op_5 + Dummy_58*tmp_kernel_op_7 + Dummy_60*tmp_kernel_op_19 + Dummy_61*tmp_kernel_op_30 + tmp_kernel_op_35*((Dummy_48*Dummy_48) + (Dummy_49*Dummy_49) + (Dummy_50*Dummy_50));
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
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
       const real_t Dummy_62 = jac_affine_0_0_BLUE_UP*4.0;
       const real_t Dummy_63 = jac_affine_1_0_BLUE_UP*4.0;
       const real_t Dummy_64 = jac_affine_2_0_BLUE_UP*4.0;
       const real_t Dummy_65 = -Dummy_62*jac_affine_0_1_BLUE_UP - Dummy_63*jac_affine_1_1_BLUE_UP - Dummy_64*jac_affine_2_1_BLUE_UP;
       const real_t Dummy_66 = 1.0 / (abs_det_jac_affine_BLUE_UP)*0.16666666666666663;
       const real_t Dummy_67 = Dummy_62*jac_affine_0_2_BLUE_UP + Dummy_63*jac_affine_1_2_BLUE_UP + Dummy_64*jac_affine_2_2_BLUE_UP;
       const real_t Dummy_68 = jac_affine_0_0_BLUE_UP*2.0;
       const real_t Dummy_69 = jac_affine_0_1_BLUE_UP*2.0;
       const real_t Dummy_70 = -Dummy_68 + Dummy_69;
       const real_t Dummy_71 = jac_affine_1_0_BLUE_UP*2.0;
       const real_t Dummy_72 = jac_affine_1_1_BLUE_UP*2.0;
       const real_t Dummy_73 = -Dummy_71 + Dummy_72;
       const real_t Dummy_74 = jac_affine_2_0_BLUE_UP*2.0;
       const real_t Dummy_75 = jac_affine_2_1_BLUE_UP*2.0;
       const real_t Dummy_76 = -Dummy_74 + Dummy_75;
       const real_t Dummy_77 = Dummy_68*Dummy_70 + Dummy_71*Dummy_73 + Dummy_74*Dummy_76;
       const real_t Dummy_78 = jac_affine_0_2_BLUE_UP*2.0;
       const real_t Dummy_79 = -Dummy_78;
       const real_t Dummy_80 = Dummy_68 + Dummy_79;
       const real_t Dummy_81 = jac_affine_1_2_BLUE_UP*2.0;
       const real_t Dummy_82 = -Dummy_81;
       const real_t Dummy_83 = Dummy_71 + Dummy_82;
       const real_t Dummy_84 = jac_affine_2_2_BLUE_UP*2.0;
       const real_t Dummy_85 = -Dummy_84;
       const real_t Dummy_86 = Dummy_74 + Dummy_85;
       const real_t Dummy_87 = Dummy_68*Dummy_80 + Dummy_71*Dummy_83 + Dummy_74*Dummy_86;
       const real_t Dummy_88 = -Dummy_69 - Dummy_79;
       const real_t Dummy_89 = -Dummy_72 - Dummy_82;
       const real_t Dummy_90 = -Dummy_75 - Dummy_85;
       const real_t Dummy_91 = Dummy_68*Dummy_88 + Dummy_71*Dummy_89 + Dummy_74*Dummy_90;
       const real_t Dummy_92 = jac_affine_0_1_BLUE_UP*jac_affine_0_2_BLUE_UP*-4.0 + jac_affine_1_1_BLUE_UP*jac_affine_1_2_BLUE_UP*-4.0 + jac_affine_2_1_BLUE_UP*jac_affine_2_2_BLUE_UP*-4.0;
       const real_t Dummy_93 = -Dummy_69*Dummy_70 - Dummy_72*Dummy_73 - Dummy_75*Dummy_76;
       const real_t Dummy_94 = -Dummy_69*Dummy_80 - Dummy_72*Dummy_83 - Dummy_75*Dummy_86;
       const real_t Dummy_95 = -Dummy_69*Dummy_88 - Dummy_72*Dummy_89 - Dummy_75*Dummy_90;
       const real_t Dummy_96 = Dummy_70*Dummy_78 + Dummy_73*Dummy_81 + Dummy_76*Dummy_84;
       const real_t Dummy_97 = Dummy_78*Dummy_80 + Dummy_81*Dummy_83 + Dummy_84*Dummy_86;
       const real_t Dummy_98 = Dummy_78*Dummy_88 + Dummy_81*Dummy_89 + Dummy_84*Dummy_90;
       const real_t Dummy_99 = Dummy_70*Dummy_80 + Dummy_73*Dummy_83 + Dummy_76*Dummy_86;
       const real_t Dummy_100 = Dummy_70*Dummy_88 + Dummy_73*Dummy_89 + Dummy_76*Dummy_90;
       const real_t Dummy_101 = Dummy_80*Dummy_88 + Dummy_83*Dummy_89 + Dummy_86*Dummy_90;
       {
          /* CellType.BLUE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_kernel_op_5 = Dummy_66*src_dof_1;
             const real_t tmp_kernel_op_7 = Dummy_66*src_dof_2;
             const real_t tmp_kernel_op_8 = Dummy_66*src_dof_0;
             const real_t tmp_kernel_op_19 = Dummy_66*src_dof_3;
             const real_t tmp_kernel_op_30 = Dummy_66*src_dof_4;
             const real_t tmp_kernel_op_35 = Dummy_66*src_dof_5;
             const real_t elMatVec_0 = Dummy_65*tmp_kernel_op_5 + Dummy_67*tmp_kernel_op_7 + Dummy_77*tmp_kernel_op_19 + Dummy_87*tmp_kernel_op_30 + Dummy_91*tmp_kernel_op_35 + tmp_kernel_op_8*((jac_affine_0_0_BLUE_UP*jac_affine_0_0_BLUE_UP)*4.0 + (jac_affine_1_0_BLUE_UP*jac_affine_1_0_BLUE_UP)*4.0 + (jac_affine_2_0_BLUE_UP*jac_affine_2_0_BLUE_UP)*4.0);
             const real_t elMatVec_1 = Dummy_65*tmp_kernel_op_8 + Dummy_92*tmp_kernel_op_7 + Dummy_93*tmp_kernel_op_19 + Dummy_94*tmp_kernel_op_30 + Dummy_95*tmp_kernel_op_35 + tmp_kernel_op_5*((jac_affine_0_1_BLUE_UP*jac_affine_0_1_BLUE_UP)*4.0 + (jac_affine_1_1_BLUE_UP*jac_affine_1_1_BLUE_UP)*4.0 + (jac_affine_2_1_BLUE_UP*jac_affine_2_1_BLUE_UP)*4.0);
             const real_t elMatVec_2 = Dummy_67*tmp_kernel_op_8 + Dummy_92*tmp_kernel_op_5 + Dummy_96*tmp_kernel_op_19 + Dummy_97*tmp_kernel_op_30 + Dummy_98*tmp_kernel_op_35 + tmp_kernel_op_7*((jac_affine_0_2_BLUE_UP*jac_affine_0_2_BLUE_UP)*4.0 + (jac_affine_1_2_BLUE_UP*jac_affine_1_2_BLUE_UP)*4.0 + (jac_affine_2_2_BLUE_UP*jac_affine_2_2_BLUE_UP)*4.0);
             const real_t elMatVec_3 = Dummy_100*tmp_kernel_op_35 + Dummy_77*tmp_kernel_op_8 + Dummy_93*tmp_kernel_op_5 + Dummy_96*tmp_kernel_op_7 + Dummy_99*tmp_kernel_op_30 + tmp_kernel_op_19*((Dummy_70*Dummy_70) + (Dummy_73*Dummy_73) + (Dummy_76*Dummy_76));
             const real_t elMatVec_4 = Dummy_101*tmp_kernel_op_35 + Dummy_87*tmp_kernel_op_8 + Dummy_94*tmp_kernel_op_5 + Dummy_97*tmp_kernel_op_7 + Dummy_99*tmp_kernel_op_19 + tmp_kernel_op_30*((Dummy_80*Dummy_80) + (Dummy_83*Dummy_83) + (Dummy_86*Dummy_86));
             const real_t elMatVec_5 = Dummy_100*tmp_kernel_op_19 + Dummy_101*tmp_kernel_op_30 + Dummy_91*tmp_kernel_op_8 + Dummy_95*tmp_kernel_op_5 + Dummy_98*tmp_kernel_op_7 + tmp_kernel_op_35*((Dummy_88*Dummy_88) + (Dummy_89*Dummy_89) + (Dummy_90*Dummy_90));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const real_t Dummy_102 = jac_affine_0_0_BLUE_DOWN*4.0;
       const real_t Dummy_103 = jac_affine_1_0_BLUE_DOWN*4.0;
       const real_t Dummy_104 = jac_affine_2_0_BLUE_DOWN*4.0;
       const real_t Dummy_105 = -Dummy_102*jac_affine_0_1_BLUE_DOWN - Dummy_103*jac_affine_1_1_BLUE_DOWN - Dummy_104*jac_affine_2_1_BLUE_DOWN;
       const real_t Dummy_106 = 1.0 / (abs_det_jac_affine_BLUE_DOWN)*0.16666666666666663;
       const real_t Dummy_107 = Dummy_102*jac_affine_0_2_BLUE_DOWN + Dummy_103*jac_affine_1_2_BLUE_DOWN + Dummy_104*jac_affine_2_2_BLUE_DOWN;
       const real_t Dummy_108 = jac_affine_0_0_BLUE_DOWN*2.0;
       const real_t Dummy_109 = jac_affine_0_1_BLUE_DOWN*2.0;
       const real_t Dummy_110 = -Dummy_108 + Dummy_109;
       const real_t Dummy_111 = jac_affine_1_0_BLUE_DOWN*2.0;
       const real_t Dummy_112 = jac_affine_1_1_BLUE_DOWN*2.0;
       const real_t Dummy_113 = -Dummy_111 + Dummy_112;
       const real_t Dummy_114 = jac_affine_2_0_BLUE_DOWN*2.0;
       const real_t Dummy_115 = jac_affine_2_1_BLUE_DOWN*2.0;
       const real_t Dummy_116 = -Dummy_114 + Dummy_115;
       const real_t Dummy_117 = Dummy_108*Dummy_110 + Dummy_111*Dummy_113 + Dummy_114*Dummy_116;
       const real_t Dummy_118 = jac_affine_0_2_BLUE_DOWN*2.0;
       const real_t Dummy_119 = -Dummy_118;
       const real_t Dummy_120 = Dummy_108 + Dummy_119;
       const real_t Dummy_121 = jac_affine_1_2_BLUE_DOWN*2.0;
       const real_t Dummy_122 = -Dummy_121;
       const real_t Dummy_123 = Dummy_111 + Dummy_122;
       const real_t Dummy_124 = jac_affine_2_2_BLUE_DOWN*2.0;
       const real_t Dummy_125 = -Dummy_124;
       const real_t Dummy_126 = Dummy_114 + Dummy_125;
       const real_t Dummy_127 = Dummy_108*Dummy_120 + Dummy_111*Dummy_123 + Dummy_114*Dummy_126;
       const real_t Dummy_128 = -Dummy_109 - Dummy_119;
       const real_t Dummy_129 = -Dummy_112 - Dummy_122;
       const real_t Dummy_130 = -Dummy_115 - Dummy_125;
       const real_t Dummy_131 = Dummy_108*Dummy_128 + Dummy_111*Dummy_129 + Dummy_114*Dummy_130;
       const real_t Dummy_132 = jac_affine_0_1_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN*-4.0 + jac_affine_1_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*-4.0 + jac_affine_2_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN*-4.0;
       const real_t Dummy_133 = -Dummy_109*Dummy_110 - Dummy_112*Dummy_113 - Dummy_115*Dummy_116;
       const real_t Dummy_134 = -Dummy_109*Dummy_120 - Dummy_112*Dummy_123 - Dummy_115*Dummy_126;
       const real_t Dummy_135 = -Dummy_109*Dummy_128 - Dummy_112*Dummy_129 - Dummy_115*Dummy_130;
       const real_t Dummy_136 = Dummy_110*Dummy_118 + Dummy_113*Dummy_121 + Dummy_116*Dummy_124;
       const real_t Dummy_137 = Dummy_118*Dummy_120 + Dummy_121*Dummy_123 + Dummy_124*Dummy_126;
       const real_t Dummy_138 = Dummy_118*Dummy_128 + Dummy_121*Dummy_129 + Dummy_124*Dummy_130;
       const real_t Dummy_139 = Dummy_110*Dummy_120 + Dummy_113*Dummy_123 + Dummy_116*Dummy_126;
       const real_t Dummy_140 = Dummy_110*Dummy_128 + Dummy_113*Dummy_129 + Dummy_116*Dummy_130;
       const real_t Dummy_141 = Dummy_120*Dummy_128 + Dummy_123*Dummy_129 + Dummy_126*Dummy_130;
       {
          /* CellType.BLUE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_kernel_op_5 = Dummy_106*src_dof_1;
             const real_t tmp_kernel_op_7 = Dummy_106*src_dof_2;
             const real_t tmp_kernel_op_8 = Dummy_106*src_dof_0;
             const real_t tmp_kernel_op_19 = Dummy_106*src_dof_3;
             const real_t tmp_kernel_op_30 = Dummy_106*src_dof_4;
             const real_t tmp_kernel_op_35 = Dummy_106*src_dof_5;
             const real_t elMatVec_0 = Dummy_105*tmp_kernel_op_5 + Dummy_107*tmp_kernel_op_7 + Dummy_117*tmp_kernel_op_19 + Dummy_127*tmp_kernel_op_30 + Dummy_131*tmp_kernel_op_35 + tmp_kernel_op_8*((jac_affine_0_0_BLUE_DOWN*jac_affine_0_0_BLUE_DOWN)*4.0 + (jac_affine_1_0_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN)*4.0 + (jac_affine_2_0_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN)*4.0);
             const real_t elMatVec_1 = Dummy_105*tmp_kernel_op_8 + Dummy_132*tmp_kernel_op_7 + Dummy_133*tmp_kernel_op_19 + Dummy_134*tmp_kernel_op_30 + Dummy_135*tmp_kernel_op_35 + tmp_kernel_op_5*((jac_affine_0_1_BLUE_DOWN*jac_affine_0_1_BLUE_DOWN)*4.0 + (jac_affine_1_1_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN)*4.0 + (jac_affine_2_1_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN)*4.0);
             const real_t elMatVec_2 = Dummy_107*tmp_kernel_op_8 + Dummy_132*tmp_kernel_op_5 + Dummy_136*tmp_kernel_op_19 + Dummy_137*tmp_kernel_op_30 + Dummy_138*tmp_kernel_op_35 + tmp_kernel_op_7*((jac_affine_0_2_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN)*4.0 + (jac_affine_1_2_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN)*4.0 + (jac_affine_2_2_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN)*4.0);
             const real_t elMatVec_3 = Dummy_117*tmp_kernel_op_8 + Dummy_133*tmp_kernel_op_5 + Dummy_136*tmp_kernel_op_7 + Dummy_139*tmp_kernel_op_30 + Dummy_140*tmp_kernel_op_35 + tmp_kernel_op_19*((Dummy_110*Dummy_110) + (Dummy_113*Dummy_113) + (Dummy_116*Dummy_116));
             const real_t elMatVec_4 = Dummy_127*tmp_kernel_op_8 + Dummy_134*tmp_kernel_op_5 + Dummy_137*tmp_kernel_op_7 + Dummy_139*tmp_kernel_op_19 + Dummy_141*tmp_kernel_op_35 + tmp_kernel_op_30*((Dummy_120*Dummy_120) + (Dummy_123*Dummy_123) + (Dummy_126*Dummy_126));
             const real_t elMatVec_5 = Dummy_131*tmp_kernel_op_8 + Dummy_135*tmp_kernel_op_5 + Dummy_138*tmp_kernel_op_7 + Dummy_140*tmp_kernel_op_19 + Dummy_141*tmp_kernel_op_30 + tmp_kernel_op_35*((Dummy_128*Dummy_128) + (Dummy_129*Dummy_129) + (Dummy_130*Dummy_130));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const real_t Dummy_142 = jac_affine_0_0_GREEN_UP*4.0;
       const real_t Dummy_143 = jac_affine_1_0_GREEN_UP*4.0;
       const real_t Dummy_144 = jac_affine_2_0_GREEN_UP*4.0;
       const real_t Dummy_145 = -Dummy_142*jac_affine_0_1_GREEN_UP - Dummy_143*jac_affine_1_1_GREEN_UP - Dummy_144*jac_affine_2_1_GREEN_UP;
       const real_t Dummy_146 = 1.0 / (abs_det_jac_affine_GREEN_UP)*0.16666666666666663;
       const real_t Dummy_147 = Dummy_142*jac_affine_0_2_GREEN_UP + Dummy_143*jac_affine_1_2_GREEN_UP + Dummy_144*jac_affine_2_2_GREEN_UP;
       const real_t Dummy_148 = jac_affine_0_0_GREEN_UP*2.0;
       const real_t Dummy_149 = jac_affine_0_1_GREEN_UP*2.0;
       const real_t Dummy_150 = -Dummy_148 + Dummy_149;
       const real_t Dummy_151 = jac_affine_1_0_GREEN_UP*2.0;
       const real_t Dummy_152 = jac_affine_1_1_GREEN_UP*2.0;
       const real_t Dummy_153 = -Dummy_151 + Dummy_152;
       const real_t Dummy_154 = jac_affine_2_0_GREEN_UP*2.0;
       const real_t Dummy_155 = jac_affine_2_1_GREEN_UP*2.0;
       const real_t Dummy_156 = -Dummy_154 + Dummy_155;
       const real_t Dummy_157 = Dummy_148*Dummy_150 + Dummy_151*Dummy_153 + Dummy_154*Dummy_156;
       const real_t Dummy_158 = jac_affine_0_2_GREEN_UP*2.0;
       const real_t Dummy_159 = -Dummy_158;
       const real_t Dummy_160 = Dummy_148 + Dummy_159;
       const real_t Dummy_161 = jac_affine_1_2_GREEN_UP*2.0;
       const real_t Dummy_162 = -Dummy_161;
       const real_t Dummy_163 = Dummy_151 + Dummy_162;
       const real_t Dummy_164 = jac_affine_2_2_GREEN_UP*2.0;
       const real_t Dummy_165 = -Dummy_164;
       const real_t Dummy_166 = Dummy_154 + Dummy_165;
       const real_t Dummy_167 = Dummy_148*Dummy_160 + Dummy_151*Dummy_163 + Dummy_154*Dummy_166;
       const real_t Dummy_168 = -Dummy_149 - Dummy_159;
       const real_t Dummy_169 = -Dummy_152 - Dummy_162;
       const real_t Dummy_170 = -Dummy_155 - Dummy_165;
       const real_t Dummy_171 = Dummy_148*Dummy_168 + Dummy_151*Dummy_169 + Dummy_154*Dummy_170;
       const real_t Dummy_172 = jac_affine_0_1_GREEN_UP*jac_affine_0_2_GREEN_UP*-4.0 + jac_affine_1_1_GREEN_UP*jac_affine_1_2_GREEN_UP*-4.0 + jac_affine_2_1_GREEN_UP*jac_affine_2_2_GREEN_UP*-4.0;
       const real_t Dummy_173 = -Dummy_149*Dummy_150 - Dummy_152*Dummy_153 - Dummy_155*Dummy_156;
       const real_t Dummy_174 = -Dummy_149*Dummy_160 - Dummy_152*Dummy_163 - Dummy_155*Dummy_166;
       const real_t Dummy_175 = -Dummy_149*Dummy_168 - Dummy_152*Dummy_169 - Dummy_155*Dummy_170;
       const real_t Dummy_176 = Dummy_150*Dummy_158 + Dummy_153*Dummy_161 + Dummy_156*Dummy_164;
       const real_t Dummy_177 = Dummy_158*Dummy_160 + Dummy_161*Dummy_163 + Dummy_164*Dummy_166;
       const real_t Dummy_178 = Dummy_158*Dummy_168 + Dummy_161*Dummy_169 + Dummy_164*Dummy_170;
       const real_t Dummy_179 = Dummy_150*Dummy_160 + Dummy_153*Dummy_163 + Dummy_156*Dummy_166;
       const real_t Dummy_180 = Dummy_150*Dummy_168 + Dummy_153*Dummy_169 + Dummy_156*Dummy_170;
       const real_t Dummy_181 = Dummy_160*Dummy_168 + Dummy_163*Dummy_169 + Dummy_166*Dummy_170;
       {
          /* CellType.GREEN_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_kernel_op_5 = Dummy_146*src_dof_1;
             const real_t tmp_kernel_op_7 = Dummy_146*src_dof_2;
             const real_t tmp_kernel_op_8 = Dummy_146*src_dof_0;
             const real_t tmp_kernel_op_19 = Dummy_146*src_dof_3;
             const real_t tmp_kernel_op_30 = Dummy_146*src_dof_4;
             const real_t tmp_kernel_op_35 = Dummy_146*src_dof_5;
             const real_t elMatVec_0 = Dummy_145*tmp_kernel_op_5 + Dummy_147*tmp_kernel_op_7 + Dummy_157*tmp_kernel_op_19 + Dummy_167*tmp_kernel_op_30 + Dummy_171*tmp_kernel_op_35 + tmp_kernel_op_8*((jac_affine_0_0_GREEN_UP*jac_affine_0_0_GREEN_UP)*4.0 + (jac_affine_1_0_GREEN_UP*jac_affine_1_0_GREEN_UP)*4.0 + (jac_affine_2_0_GREEN_UP*jac_affine_2_0_GREEN_UP)*4.0);
             const real_t elMatVec_1 = Dummy_145*tmp_kernel_op_8 + Dummy_172*tmp_kernel_op_7 + Dummy_173*tmp_kernel_op_19 + Dummy_174*tmp_kernel_op_30 + Dummy_175*tmp_kernel_op_35 + tmp_kernel_op_5*((jac_affine_0_1_GREEN_UP*jac_affine_0_1_GREEN_UP)*4.0 + (jac_affine_1_1_GREEN_UP*jac_affine_1_1_GREEN_UP)*4.0 + (jac_affine_2_1_GREEN_UP*jac_affine_2_1_GREEN_UP)*4.0);
             const real_t elMatVec_2 = Dummy_147*tmp_kernel_op_8 + Dummy_172*tmp_kernel_op_5 + Dummy_176*tmp_kernel_op_19 + Dummy_177*tmp_kernel_op_30 + Dummy_178*tmp_kernel_op_35 + tmp_kernel_op_7*((jac_affine_0_2_GREEN_UP*jac_affine_0_2_GREEN_UP)*4.0 + (jac_affine_1_2_GREEN_UP*jac_affine_1_2_GREEN_UP)*4.0 + (jac_affine_2_2_GREEN_UP*jac_affine_2_2_GREEN_UP)*4.0);
             const real_t elMatVec_3 = Dummy_157*tmp_kernel_op_8 + Dummy_173*tmp_kernel_op_5 + Dummy_176*tmp_kernel_op_7 + Dummy_179*tmp_kernel_op_30 + Dummy_180*tmp_kernel_op_35 + tmp_kernel_op_19*((Dummy_150*Dummy_150) + (Dummy_153*Dummy_153) + (Dummy_156*Dummy_156));
             const real_t elMatVec_4 = Dummy_167*tmp_kernel_op_8 + Dummy_174*tmp_kernel_op_5 + Dummy_177*tmp_kernel_op_7 + Dummy_179*tmp_kernel_op_19 + Dummy_181*tmp_kernel_op_35 + tmp_kernel_op_30*((Dummy_160*Dummy_160) + (Dummy_163*Dummy_163) + (Dummy_166*Dummy_166));
             const real_t elMatVec_5 = Dummy_171*tmp_kernel_op_8 + Dummy_175*tmp_kernel_op_5 + Dummy_178*tmp_kernel_op_7 + Dummy_180*tmp_kernel_op_19 + Dummy_181*tmp_kernel_op_30 + tmp_kernel_op_35*((Dummy_168*Dummy_168) + (Dummy_169*Dummy_169) + (Dummy_170*Dummy_170));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const real_t Dummy_182 = jac_affine_0_0_GREEN_DOWN*4.0;
       const real_t Dummy_183 = jac_affine_1_0_GREEN_DOWN*4.0;
       const real_t Dummy_184 = jac_affine_2_0_GREEN_DOWN*4.0;
       const real_t Dummy_185 = -Dummy_182*jac_affine_0_1_GREEN_DOWN - Dummy_183*jac_affine_1_1_GREEN_DOWN - Dummy_184*jac_affine_2_1_GREEN_DOWN;
       const real_t Dummy_186 = 1.0 / (abs_det_jac_affine_GREEN_DOWN)*0.16666666666666663;
       const real_t Dummy_187 = Dummy_182*jac_affine_0_2_GREEN_DOWN + Dummy_183*jac_affine_1_2_GREEN_DOWN + Dummy_184*jac_affine_2_2_GREEN_DOWN;
       const real_t Dummy_188 = jac_affine_0_0_GREEN_DOWN*2.0;
       const real_t Dummy_189 = jac_affine_0_1_GREEN_DOWN*2.0;
       const real_t Dummy_190 = -Dummy_188 + Dummy_189;
       const real_t Dummy_191 = jac_affine_1_0_GREEN_DOWN*2.0;
       const real_t Dummy_192 = jac_affine_1_1_GREEN_DOWN*2.0;
       const real_t Dummy_193 = -Dummy_191 + Dummy_192;
       const real_t Dummy_194 = jac_affine_2_0_GREEN_DOWN*2.0;
       const real_t Dummy_195 = jac_affine_2_1_GREEN_DOWN*2.0;
       const real_t Dummy_196 = -Dummy_194 + Dummy_195;
       const real_t Dummy_197 = Dummy_188*Dummy_190 + Dummy_191*Dummy_193 + Dummy_194*Dummy_196;
       const real_t Dummy_198 = jac_affine_0_2_GREEN_DOWN*2.0;
       const real_t Dummy_199 = -Dummy_198;
       const real_t Dummy_200 = Dummy_188 + Dummy_199;
       const real_t Dummy_201 = jac_affine_1_2_GREEN_DOWN*2.0;
       const real_t Dummy_202 = -Dummy_201;
       const real_t Dummy_203 = Dummy_191 + Dummy_202;
       const real_t Dummy_204 = jac_affine_2_2_GREEN_DOWN*2.0;
       const real_t Dummy_205 = -Dummy_204;
       const real_t Dummy_206 = Dummy_194 + Dummy_205;
       const real_t Dummy_207 = Dummy_188*Dummy_200 + Dummy_191*Dummy_203 + Dummy_194*Dummy_206;
       const real_t Dummy_208 = -Dummy_189 - Dummy_199;
       const real_t Dummy_209 = -Dummy_192 - Dummy_202;
       const real_t Dummy_210 = -Dummy_195 - Dummy_205;
       const real_t Dummy_211 = Dummy_188*Dummy_208 + Dummy_191*Dummy_209 + Dummy_194*Dummy_210;
       const real_t Dummy_212 = jac_affine_0_1_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN*-4.0 + jac_affine_1_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*-4.0 + jac_affine_2_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN*-4.0;
       const real_t Dummy_213 = -Dummy_189*Dummy_190 - Dummy_192*Dummy_193 - Dummy_195*Dummy_196;
       const real_t Dummy_214 = -Dummy_189*Dummy_200 - Dummy_192*Dummy_203 - Dummy_195*Dummy_206;
       const real_t Dummy_215 = -Dummy_189*Dummy_208 - Dummy_192*Dummy_209 - Dummy_195*Dummy_210;
       const real_t Dummy_216 = Dummy_190*Dummy_198 + Dummy_193*Dummy_201 + Dummy_196*Dummy_204;
       const real_t Dummy_217 = Dummy_198*Dummy_200 + Dummy_201*Dummy_203 + Dummy_204*Dummy_206;
       const real_t Dummy_218 = Dummy_198*Dummy_208 + Dummy_201*Dummy_209 + Dummy_204*Dummy_210;
       const real_t Dummy_219 = Dummy_190*Dummy_200 + Dummy_193*Dummy_203 + Dummy_196*Dummy_206;
       const real_t Dummy_220 = Dummy_190*Dummy_208 + Dummy_193*Dummy_209 + Dummy_196*Dummy_210;
       const real_t Dummy_221 = Dummy_200*Dummy_208 + Dummy_203*Dummy_209 + Dummy_206*Dummy_210;
       {
          /* CellType.GREEN_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_kernel_op_5 = Dummy_186*src_dof_1;
             const real_t tmp_kernel_op_7 = Dummy_186*src_dof_2;
             const real_t tmp_kernel_op_8 = Dummy_186*src_dof_0;
             const real_t tmp_kernel_op_19 = Dummy_186*src_dof_3;
             const real_t tmp_kernel_op_30 = Dummy_186*src_dof_4;
             const real_t tmp_kernel_op_35 = Dummy_186*src_dof_5;
             const real_t elMatVec_0 = Dummy_185*tmp_kernel_op_5 + Dummy_187*tmp_kernel_op_7 + Dummy_197*tmp_kernel_op_19 + Dummy_207*tmp_kernel_op_30 + Dummy_211*tmp_kernel_op_35 + tmp_kernel_op_8*((jac_affine_0_0_GREEN_DOWN*jac_affine_0_0_GREEN_DOWN)*4.0 + (jac_affine_1_0_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN)*4.0 + (jac_affine_2_0_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN)*4.0);
             const real_t elMatVec_1 = Dummy_185*tmp_kernel_op_8 + Dummy_212*tmp_kernel_op_7 + Dummy_213*tmp_kernel_op_19 + Dummy_214*tmp_kernel_op_30 + Dummy_215*tmp_kernel_op_35 + tmp_kernel_op_5*((jac_affine_0_1_GREEN_DOWN*jac_affine_0_1_GREEN_DOWN)*4.0 + (jac_affine_1_1_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN)*4.0 + (jac_affine_2_1_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN)*4.0);
             const real_t elMatVec_2 = Dummy_187*tmp_kernel_op_8 + Dummy_212*tmp_kernel_op_5 + Dummy_216*tmp_kernel_op_19 + Dummy_217*tmp_kernel_op_30 + Dummy_218*tmp_kernel_op_35 + tmp_kernel_op_7*((jac_affine_0_2_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN)*4.0 + (jac_affine_1_2_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN)*4.0 + (jac_affine_2_2_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN)*4.0);
             const real_t elMatVec_3 = Dummy_197*tmp_kernel_op_8 + Dummy_213*tmp_kernel_op_5 + Dummy_216*tmp_kernel_op_7 + Dummy_219*tmp_kernel_op_30 + Dummy_220*tmp_kernel_op_35 + tmp_kernel_op_19*((Dummy_190*Dummy_190) + (Dummy_193*Dummy_193) + (Dummy_196*Dummy_196));
             const real_t elMatVec_4 = Dummy_207*tmp_kernel_op_8 + Dummy_214*tmp_kernel_op_5 + Dummy_217*tmp_kernel_op_7 + Dummy_219*tmp_kernel_op_19 + Dummy_221*tmp_kernel_op_35 + tmp_kernel_op_30*((Dummy_200*Dummy_200) + (Dummy_203*Dummy_203) + (Dummy_206*Dummy_206));
             const real_t elMatVec_5 = Dummy_211*tmp_kernel_op_8 + Dummy_215*tmp_kernel_op_5 + Dummy_218*tmp_kernel_op_7 + Dummy_220*tmp_kernel_op_19 + Dummy_221*tmp_kernel_op_30 + tmp_kernel_op_35*((Dummy_208*Dummy_208) + (Dummy_209*Dummy_209) + (Dummy_210*Dummy_210));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
