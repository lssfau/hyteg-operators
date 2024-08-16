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































#include "../P1ToP2ElementwiseGradientAnnulusMap_1_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ToP2ElementwiseGradientAnnulusMap_1_0::toMatrix_P1ToP2ElementwiseGradientAnnulusMap_1_0_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, idx_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
{
    {
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
       const real_t tmp_coords_jac_1_GRAY = jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY;
       const real_t tmp_coords_jac_2_GRAY = 1.0 / (tmp_coords_jac_1_GRAY);
       const real_t jac_affine_inv_0_0_GRAY = jac_affine_1_1_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const real_t tmp_blending_op_0 = -rayVertex_0 + thrVertex_0;
       const real_t tmp_blending_op_10 = -rayVertex_1 + thrVertex_1;
       const real_t tmp_blending_op_11 = (-radRayVertex + radRefVertex)*1.0 / (-tmp_blending_op_0*(-rayVertex_1 + refVertex_1) + tmp_blending_op_10*(-rayVertex_0 + refVertex_0));
       const real_t tmp_blending_op_12 = tmp_blending_op_11*1.0;
       const real_t tmp_blending_op_16 = -rayVertex_1;
       const real_t tmp_blending_op_17 = -rayVertex_0;
       const real_t tmp_kernel_op_0 = 0.16666666666666674;
       const real_t tmp_kernel_op_1 = 0.66666666666666663;
       const real_t tmp_kernel_op_2 = 2.6666666666666665;
       const real_t tmp_kernel_op_3 = tmp_kernel_op_1 + tmp_kernel_op_2 - 3.0;
       const real_t tmp_kernel_op_6 = 0.16666666666666671;
       const real_t tmp_kernel_op_7 = 2.6666666666666665;
       const real_t tmp_kernel_op_8 = 0.66666666666666663;
       const real_t tmp_kernel_op_9 = tmp_kernel_op_7 + tmp_kernel_op_8 - 3.0;
       const real_t tmp_kernel_op_12 = 0.66666666666666674;
       const real_t tmp_kernel_op_13 = 0.66666666666666663;
       const real_t tmp_kernel_op_14 = 0.66666666666666663;
       const real_t tmp_kernel_op_15 = tmp_kernel_op_13 + tmp_kernel_op_14 - 3.0;
       const real_t tmp_kernel_op_18 = tmp_kernel_op_1 - 1.0;
       const real_t tmp_kernel_op_20 = tmp_kernel_op_7 - 1.0;
       const real_t tmp_kernel_op_22 = tmp_kernel_op_13 - 1.0;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_2 - 1.0;
       const real_t tmp_kernel_op_26 = tmp_kernel_op_8 - 1.0;
       const real_t tmp_kernel_op_28 = tmp_kernel_op_14 - 1.0;
       const real_t tmp_kernel_op_30 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_31 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_32 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_33 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_35 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_36 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_37 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_38 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_40 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_41 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_42 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_43 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_45 = -tmp_kernel_op_1 - 1.333333333333333;
       const real_t tmp_kernel_op_47 = -tmp_kernel_op_7 + 2.666666666666667;
       const real_t tmp_kernel_op_49 = -tmp_kernel_op_13 + 2.666666666666667;
       const real_t tmp_kernel_op_51 = -tmp_kernel_op_2 + 2.666666666666667;
       const real_t tmp_kernel_op_53 = -tmp_kernel_op_8 - 1.333333333333333;
       const real_t tmp_kernel_op_55 = -tmp_kernel_op_14 + 2.666666666666667;
       {
          /* FaceType.GRAY */
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
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
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t tmp_blending_op_1 = -p_affine_0_1 + p_affine_1_1;
             const real_t tmp_blending_op_2 = -p_affine_0_1 + p_affine_2_1;
             const real_t tmp_blending_op_3 = p_affine_0_1 + tmp_blending_op_1*0.16666666666666666 + tmp_blending_op_2*0.16666666666666666;
             const real_t tmp_blending_op_4 = -p_affine_0_0 + p_affine_1_0;
             const real_t tmp_blending_op_5 = -p_affine_0_0 + p_affine_2_0;
             const real_t tmp_blending_op_6 = p_affine_0_0 + tmp_blending_op_4*0.16666666666666666 + tmp_blending_op_5*0.16666666666666666;
             const real_t tmp_blending_op_7 = (tmp_blending_op_6*tmp_blending_op_6);
             const real_t tmp_blending_op_8 = (tmp_blending_op_3*tmp_blending_op_3);
             const real_t tmp_blending_op_9 = tmp_blending_op_7 + tmp_blending_op_8;
             const real_t tmp_blending_op_13 = tmp_blending_op_12*pow(tmp_blending_op_9, -0.50000000000000000);
             const real_t tmp_blending_op_14 = tmp_blending_op_13*tmp_blending_op_3;
             const real_t tmp_blending_op_15 = pow(tmp_blending_op_9, -1.5000000000000000);
             const real_t tmp_blending_op_18 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_3) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_6));
             const real_t tmp_blending_op_19 = tmp_blending_op_15*tmp_blending_op_18*1.0;
             const real_t tmp_blending_op_20 = tmp_blending_op_13*tmp_blending_op_6;
             const real_t tmp_blending_op_23 = p_affine_0_1 + tmp_blending_op_1*0.66666666666666663 + tmp_blending_op_2*0.16666666666666666;
             const real_t tmp_blending_op_24 = p_affine_0_0 + tmp_blending_op_4*0.66666666666666663 + tmp_blending_op_5*0.16666666666666666;
             const real_t tmp_blending_op_25 = (tmp_blending_op_24*tmp_blending_op_24);
             const real_t tmp_blending_op_26 = (tmp_blending_op_23*tmp_blending_op_23);
             const real_t tmp_blending_op_27 = tmp_blending_op_25 + tmp_blending_op_26;
             const real_t tmp_blending_op_28 = tmp_blending_op_12*pow(tmp_blending_op_27, -0.50000000000000000);
             const real_t tmp_blending_op_29 = tmp_blending_op_23*tmp_blending_op_28;
             const real_t tmp_blending_op_30 = pow(tmp_blending_op_27, -1.5000000000000000);
             const real_t tmp_blending_op_31 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_23) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_24));
             const real_t tmp_blending_op_32 = tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t tmp_blending_op_33 = tmp_blending_op_24*tmp_blending_op_28;
             const real_t tmp_blending_op_36 = p_affine_0_1 + tmp_blending_op_1*0.16666666666666666 + tmp_blending_op_2*0.66666666666666663;
             const real_t tmp_blending_op_37 = p_affine_0_0 + tmp_blending_op_4*0.16666666666666666 + tmp_blending_op_5*0.66666666666666663;
             const real_t tmp_blending_op_38 = (tmp_blending_op_37*tmp_blending_op_37);
             const real_t tmp_blending_op_39 = (tmp_blending_op_36*tmp_blending_op_36);
             const real_t tmp_blending_op_40 = tmp_blending_op_38 + tmp_blending_op_39;
             const real_t tmp_blending_op_41 = tmp_blending_op_12*pow(tmp_blending_op_40, -0.50000000000000000);
             const real_t tmp_blending_op_42 = tmp_blending_op_36*tmp_blending_op_41;
             const real_t tmp_blending_op_43 = pow(tmp_blending_op_40, -1.5000000000000000);
             const real_t tmp_blending_op_44 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_36) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_37));
             const real_t tmp_blending_op_45 = tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t tmp_blending_op_46 = tmp_blending_op_37*tmp_blending_op_41;
             const real_t jac_blending_1_1_q_2 = -tmp_blending_op_0*tmp_blending_op_14 + tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_7*1.0;
             const real_t jac_blending_1_0_q_2 = tmp_blending_op_10*tmp_blending_op_14 - tmp_blending_op_19*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_1_q_2 = -tmp_blending_op_0*tmp_blending_op_20 - tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_0_q_2 = tmp_blending_op_10*tmp_blending_op_20 + tmp_blending_op_19*tmp_blending_op_8;
             const real_t tmp_blending_op_21 = jac_blending_0_0_q_2*jac_blending_1_1_q_2 - jac_blending_0_1_q_2*jac_blending_1_0_q_2;
             const real_t tmp_blending_op_22 = 1.0 / (tmp_blending_op_21);
             const real_t abs_det_jac_blending_q_2 = tmp_blending_op_21;
             const real_t jac_blending_inv_1_1_q_2 = jac_blending_0_0_q_2*tmp_blending_op_22;
             const real_t jac_blending_inv_0_1_q_2 = -jac_blending_0_1_q_2*tmp_blending_op_22;
             const real_t jac_blending_1_1_q_1 = -tmp_blending_op_0*tmp_blending_op_29 + tmp_blending_op_25*tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t jac_blending_1_0_q_1 = tmp_blending_op_10*tmp_blending_op_29 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_32;
             const real_t jac_blending_0_1_q_1 = -tmp_blending_op_0*tmp_blending_op_33 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_30*tmp_blending_op_31;
             const real_t jac_blending_0_0_q_1 = tmp_blending_op_10*tmp_blending_op_33 + tmp_blending_op_26*tmp_blending_op_32;
             const real_t tmp_blending_op_34 = jac_blending_0_0_q_1*jac_blending_1_1_q_1 - jac_blending_0_1_q_1*jac_blending_1_0_q_1;
             const real_t tmp_blending_op_35 = 1.0 / (tmp_blending_op_34);
             const real_t abs_det_jac_blending_q_1 = tmp_blending_op_34;
             const real_t jac_blending_inv_1_1_q_1 = jac_blending_0_0_q_1*tmp_blending_op_35;
             const real_t jac_blending_inv_0_1_q_1 = -jac_blending_0_1_q_1*tmp_blending_op_35;
             const real_t jac_blending_1_1_q_0 = -tmp_blending_op_0*tmp_blending_op_42 + tmp_blending_op_38*tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t jac_blending_1_0_q_0 = tmp_blending_op_10*tmp_blending_op_42 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_45;
             const real_t jac_blending_0_1_q_0 = -tmp_blending_op_0*tmp_blending_op_46 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_43*tmp_blending_op_44;
             const real_t jac_blending_0_0_q_0 = tmp_blending_op_10*tmp_blending_op_46 + tmp_blending_op_39*tmp_blending_op_45;
             const real_t tmp_blending_op_47 = jac_blending_0_0_q_0*jac_blending_1_1_q_0 - jac_blending_0_1_q_0*jac_blending_1_0_q_0;
             const real_t tmp_blending_op_48 = 1.0 / (tmp_blending_op_47);
             const real_t abs_det_jac_blending_q_0 = tmp_blending_op_47;
             const real_t jac_blending_inv_1_1_q_0 = jac_blending_0_0_q_0*tmp_blending_op_48;
             const real_t jac_blending_inv_0_1_q_0 = -jac_blending_0_1_q_0*tmp_blending_op_48;
             const real_t tmp_kernel_op_4 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_5 = tmp_kernel_op_4*(-jac_blending_inv_0_1_q_0*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_3 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_3) - jac_blending_inv_1_1_q_0*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_3 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_3));
             const real_t tmp_kernel_op_10 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_11 = tmp_kernel_op_10*(-jac_blending_inv_0_1_q_1*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_9) - jac_blending_inv_1_1_q_1*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_9));
             const real_t tmp_kernel_op_16 = abs_det_jac_affine_GRAY*abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_17 = tmp_kernel_op_16*(-jac_blending_inv_0_1_q_2*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_15 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_15) - jac_blending_inv_1_1_q_2*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_15 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_15));
             const real_t tmp_kernel_op_19 = tmp_kernel_op_4*(-jac_affine_inv_0_0_GRAY*jac_blending_inv_0_1_q_0*tmp_kernel_op_18 - jac_affine_inv_0_1_GRAY*jac_blending_inv_1_1_q_0*tmp_kernel_op_18);
             const real_t tmp_kernel_op_21 = tmp_kernel_op_10*(-jac_affine_inv_0_0_GRAY*jac_blending_inv_0_1_q_1*tmp_kernel_op_20 - jac_affine_inv_0_1_GRAY*jac_blending_inv_1_1_q_1*tmp_kernel_op_20);
             const real_t tmp_kernel_op_23 = tmp_kernel_op_16*(-jac_affine_inv_0_0_GRAY*jac_blending_inv_0_1_q_2*tmp_kernel_op_22 - jac_affine_inv_0_1_GRAY*jac_blending_inv_1_1_q_2*tmp_kernel_op_22);
             const real_t tmp_kernel_op_25 = tmp_kernel_op_4*(-jac_affine_inv_1_0_GRAY*jac_blending_inv_0_1_q_0*tmp_kernel_op_24 - jac_affine_inv_1_1_GRAY*jac_blending_inv_1_1_q_0*tmp_kernel_op_24);
             const real_t tmp_kernel_op_27 = tmp_kernel_op_10*(-jac_affine_inv_1_0_GRAY*jac_blending_inv_0_1_q_1*tmp_kernel_op_26 - jac_affine_inv_1_1_GRAY*jac_blending_inv_1_1_q_1*tmp_kernel_op_26);
             const real_t tmp_kernel_op_29 = tmp_kernel_op_16*(-jac_affine_inv_1_0_GRAY*jac_blending_inv_0_1_q_2*tmp_kernel_op_28 - jac_affine_inv_1_1_GRAY*jac_blending_inv_1_1_q_2*tmp_kernel_op_28);
             const real_t tmp_kernel_op_34 = tmp_kernel_op_4*(-jac_blending_inv_0_1_q_0*(tmp_kernel_op_30 + tmp_kernel_op_31) - jac_blending_inv_1_1_q_0*(tmp_kernel_op_32 + tmp_kernel_op_33));
             const real_t tmp_kernel_op_39 = tmp_kernel_op_10*(-jac_blending_inv_0_1_q_1*(tmp_kernel_op_35 + tmp_kernel_op_36) - jac_blending_inv_1_1_q_1*(tmp_kernel_op_37 + tmp_kernel_op_38));
             const real_t tmp_kernel_op_44 = tmp_kernel_op_16*(-jac_blending_inv_0_1_q_2*(tmp_kernel_op_40 + tmp_kernel_op_41) - jac_blending_inv_1_1_q_2*(tmp_kernel_op_42 + tmp_kernel_op_43));
             const real_t tmp_kernel_op_46 = tmp_kernel_op_4*(-jac_blending_inv_0_1_q_0*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_45 - tmp_kernel_op_30) - jac_blending_inv_1_1_q_0*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_45 - tmp_kernel_op_32));
             const real_t tmp_kernel_op_48 = tmp_kernel_op_10*(-jac_blending_inv_0_1_q_1*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_47 - tmp_kernel_op_35) - jac_blending_inv_1_1_q_1*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_47 - tmp_kernel_op_37));
             const real_t tmp_kernel_op_50 = tmp_kernel_op_16*(-jac_blending_inv_0_1_q_2*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_49 - tmp_kernel_op_40) - jac_blending_inv_1_1_q_2*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_49 - tmp_kernel_op_42));
             const real_t tmp_kernel_op_52 = tmp_kernel_op_4*(-jac_blending_inv_0_1_q_0*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_51 - tmp_kernel_op_31) - jac_blending_inv_1_1_q_0*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_51 - tmp_kernel_op_33));
             const real_t tmp_kernel_op_54 = tmp_kernel_op_10*(-jac_blending_inv_0_1_q_1*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_53 - tmp_kernel_op_36) - jac_blending_inv_1_1_q_1*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_53 - tmp_kernel_op_38));
             const real_t tmp_kernel_op_56 = tmp_kernel_op_16*(-jac_blending_inv_0_1_q_2*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_55 - tmp_kernel_op_41) - jac_blending_inv_1_1_q_2*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_55 - tmp_kernel_op_43));
             const real_t elMat_0_0 = tmp_kernel_op_0*tmp_kernel_op_5 + tmp_kernel_op_11*tmp_kernel_op_6 + tmp_kernel_op_12*tmp_kernel_op_17;
             const real_t elMat_0_1 = tmp_kernel_op_11*0.66666666666666663 + tmp_kernel_op_17*0.16666666666666666 + tmp_kernel_op_5*0.16666666666666666;
             const real_t elMat_0_2 = tmp_kernel_op_11*0.16666666666666666 + tmp_kernel_op_17*0.16666666666666666 + tmp_kernel_op_5*0.66666666666666663;
             const real_t elMat_1_0 = tmp_kernel_op_0*tmp_kernel_op_19 + tmp_kernel_op_12*tmp_kernel_op_23 + tmp_kernel_op_21*tmp_kernel_op_6;
             const real_t elMat_1_1 = tmp_kernel_op_19*0.16666666666666666 + tmp_kernel_op_21*0.66666666666666663 + tmp_kernel_op_23*0.16666666666666666;
             const real_t elMat_1_2 = tmp_kernel_op_19*0.66666666666666663 + tmp_kernel_op_21*0.16666666666666666 + tmp_kernel_op_23*0.16666666666666666;
             const real_t elMat_2_0 = tmp_kernel_op_0*tmp_kernel_op_25 + tmp_kernel_op_12*tmp_kernel_op_29 + tmp_kernel_op_27*tmp_kernel_op_6;
             const real_t elMat_2_1 = tmp_kernel_op_25*0.16666666666666666 + tmp_kernel_op_27*0.66666666666666663 + tmp_kernel_op_29*0.16666666666666666;
             const real_t elMat_2_2 = tmp_kernel_op_25*0.66666666666666663 + tmp_kernel_op_27*0.16666666666666666 + tmp_kernel_op_29*0.16666666666666666;
             const real_t elMat_3_0 = tmp_kernel_op_0*tmp_kernel_op_34 + tmp_kernel_op_12*tmp_kernel_op_44 + tmp_kernel_op_39*tmp_kernel_op_6;
             const real_t elMat_3_1 = tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_39*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666;
             const real_t elMat_3_2 = tmp_kernel_op_34*0.66666666666666663 + tmp_kernel_op_39*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666;
             const real_t elMat_4_0 = tmp_kernel_op_0*tmp_kernel_op_46 + tmp_kernel_op_12*tmp_kernel_op_50 + tmp_kernel_op_48*tmp_kernel_op_6;
             const real_t elMat_4_1 = tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_48*0.66666666666666663 + tmp_kernel_op_50*0.16666666666666666;
             const real_t elMat_4_2 = tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_48*0.16666666666666666 + tmp_kernel_op_50*0.16666666666666666;
             const real_t elMat_5_0 = tmp_kernel_op_0*tmp_kernel_op_52 + tmp_kernel_op_12*tmp_kernel_op_56 + tmp_kernel_op_54*tmp_kernel_op_6;
             const real_t elMat_5_1 = tmp_kernel_op_52*0.16666666666666666 + tmp_kernel_op_54*0.66666666666666663 + tmp_kernel_op_56*0.16666666666666666;
             const real_t elMat_5_2 = tmp_kernel_op_52*0.66666666666666663 + tmp_kernel_op_54*0.16666666666666666 + tmp_kernel_op_56*0.16666666666666666;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 3 );
             std::vector< real_t > _data_mat( 18 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
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
             _data_mat[9] = ((real_t)(elMat_3_0));
             _data_mat[10] = ((real_t)(elMat_3_1));
             _data_mat[11] = ((real_t)(elMat_3_2));
             _data_mat[12] = ((real_t)(elMat_4_0));
             _data_mat[13] = ((real_t)(elMat_4_1));
             _data_mat[14] = ((real_t)(elMat_4_2));
             _data_mat[15] = ((real_t)(elMat_5_0));
             _data_mat[16] = ((real_t)(elMat_5_1));
             _data_mat[17] = ((real_t)(elMat_5_2));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
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
       const real_t tmp_coords_jac_5_BLUE = jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE;
       const real_t tmp_coords_jac_6_BLUE = 1.0 / (tmp_coords_jac_5_BLUE);
       const real_t jac_affine_inv_0_0_BLUE = jac_affine_1_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t abs_det_jac_affine_BLUE = abs(tmp_coords_jac_5_BLUE);
       const real_t tmp_moved_constant_0 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_1 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_1;
       const real_t tmp_moved_constant_2 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_3 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_1;
       const real_t tmp_moved_constant_4 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_8;
       const real_t tmp_moved_constant_5 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_6 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_8;
       const real_t tmp_moved_constant_7 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_8 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_9 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_13;
       const real_t tmp_moved_constant_10 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_11 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_13;
       {
          /* FaceType.BLUE */
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
         
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
             const real_t tmp_blending_op_1 = -p_affine_0_1 + p_affine_1_1;
             const real_t tmp_blending_op_2 = -p_affine_0_1 + p_affine_2_1;
             const real_t tmp_blending_op_3 = p_affine_0_1 + tmp_blending_op_1*0.16666666666666666 + tmp_blending_op_2*0.16666666666666666;
             const real_t tmp_blending_op_4 = -p_affine_0_0 + p_affine_1_0;
             const real_t tmp_blending_op_5 = -p_affine_0_0 + p_affine_2_0;
             const real_t tmp_blending_op_6 = p_affine_0_0 + tmp_blending_op_4*0.16666666666666666 + tmp_blending_op_5*0.16666666666666666;
             const real_t tmp_blending_op_7 = (tmp_blending_op_6*tmp_blending_op_6);
             const real_t tmp_blending_op_8 = (tmp_blending_op_3*tmp_blending_op_3);
             const real_t tmp_blending_op_9 = tmp_blending_op_7 + tmp_blending_op_8;
             const real_t tmp_blending_op_13 = tmp_blending_op_12*pow(tmp_blending_op_9, -0.50000000000000000);
             const real_t tmp_blending_op_14 = tmp_blending_op_13*tmp_blending_op_3;
             const real_t tmp_blending_op_15 = pow(tmp_blending_op_9, -1.5000000000000000);
             const real_t tmp_blending_op_18 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_3) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_6));
             const real_t tmp_blending_op_19 = tmp_blending_op_15*tmp_blending_op_18*1.0;
             const real_t tmp_blending_op_20 = tmp_blending_op_13*tmp_blending_op_6;
             const real_t tmp_blending_op_23 = p_affine_0_1 + tmp_blending_op_1*0.66666666666666663 + tmp_blending_op_2*0.16666666666666666;
             const real_t tmp_blending_op_24 = p_affine_0_0 + tmp_blending_op_4*0.66666666666666663 + tmp_blending_op_5*0.16666666666666666;
             const real_t tmp_blending_op_25 = (tmp_blending_op_24*tmp_blending_op_24);
             const real_t tmp_blending_op_26 = (tmp_blending_op_23*tmp_blending_op_23);
             const real_t tmp_blending_op_27 = tmp_blending_op_25 + tmp_blending_op_26;
             const real_t tmp_blending_op_28 = tmp_blending_op_12*pow(tmp_blending_op_27, -0.50000000000000000);
             const real_t tmp_blending_op_29 = tmp_blending_op_23*tmp_blending_op_28;
             const real_t tmp_blending_op_30 = pow(tmp_blending_op_27, -1.5000000000000000);
             const real_t tmp_blending_op_31 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_23) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_24));
             const real_t tmp_blending_op_32 = tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t tmp_blending_op_33 = tmp_blending_op_24*tmp_blending_op_28;
             const real_t tmp_blending_op_36 = p_affine_0_1 + tmp_blending_op_1*0.16666666666666666 + tmp_blending_op_2*0.66666666666666663;
             const real_t tmp_blending_op_37 = p_affine_0_0 + tmp_blending_op_4*0.16666666666666666 + tmp_blending_op_5*0.66666666666666663;
             const real_t tmp_blending_op_38 = (tmp_blending_op_37*tmp_blending_op_37);
             const real_t tmp_blending_op_39 = (tmp_blending_op_36*tmp_blending_op_36);
             const real_t tmp_blending_op_40 = tmp_blending_op_38 + tmp_blending_op_39;
             const real_t tmp_blending_op_41 = tmp_blending_op_12*pow(tmp_blending_op_40, -0.50000000000000000);
             const real_t tmp_blending_op_42 = tmp_blending_op_36*tmp_blending_op_41;
             const real_t tmp_blending_op_43 = pow(tmp_blending_op_40, -1.5000000000000000);
             const real_t tmp_blending_op_44 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_36) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_37));
             const real_t tmp_blending_op_45 = tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t tmp_blending_op_46 = tmp_blending_op_37*tmp_blending_op_41;
             const real_t jac_blending_1_1_q_2 = -tmp_blending_op_0*tmp_blending_op_14 + tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_7*1.0;
             const real_t jac_blending_1_0_q_2 = tmp_blending_op_10*tmp_blending_op_14 - tmp_blending_op_19*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_1_q_2 = -tmp_blending_op_0*tmp_blending_op_20 - tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_0_q_2 = tmp_blending_op_10*tmp_blending_op_20 + tmp_blending_op_19*tmp_blending_op_8;
             const real_t tmp_blending_op_21 = jac_blending_0_0_q_2*jac_blending_1_1_q_2 - jac_blending_0_1_q_2*jac_blending_1_0_q_2;
             const real_t tmp_blending_op_22 = 1.0 / (tmp_blending_op_21);
             const real_t abs_det_jac_blending_q_2 = tmp_blending_op_21;
             const real_t jac_blending_inv_1_1_q_2 = jac_blending_0_0_q_2*tmp_blending_op_22;
             const real_t jac_blending_inv_0_1_q_2 = -jac_blending_0_1_q_2*tmp_blending_op_22;
             const real_t jac_blending_1_1_q_1 = -tmp_blending_op_0*tmp_blending_op_29 + tmp_blending_op_25*tmp_blending_op_30*tmp_blending_op_31*1.0;
             const real_t jac_blending_1_0_q_1 = tmp_blending_op_10*tmp_blending_op_29 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_32;
             const real_t jac_blending_0_1_q_1 = -tmp_blending_op_0*tmp_blending_op_33 - tmp_blending_op_23*tmp_blending_op_24*tmp_blending_op_30*tmp_blending_op_31;
             const real_t jac_blending_0_0_q_1 = tmp_blending_op_10*tmp_blending_op_33 + tmp_blending_op_26*tmp_blending_op_32;
             const real_t tmp_blending_op_34 = jac_blending_0_0_q_1*jac_blending_1_1_q_1 - jac_blending_0_1_q_1*jac_blending_1_0_q_1;
             const real_t tmp_blending_op_35 = 1.0 / (tmp_blending_op_34);
             const real_t abs_det_jac_blending_q_1 = tmp_blending_op_34;
             const real_t jac_blending_inv_1_1_q_1 = jac_blending_0_0_q_1*tmp_blending_op_35;
             const real_t jac_blending_inv_0_1_q_1 = -jac_blending_0_1_q_1*tmp_blending_op_35;
             const real_t jac_blending_1_1_q_0 = -tmp_blending_op_0*tmp_blending_op_42 + tmp_blending_op_38*tmp_blending_op_43*tmp_blending_op_44*1.0;
             const real_t jac_blending_1_0_q_0 = tmp_blending_op_10*tmp_blending_op_42 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_45;
             const real_t jac_blending_0_1_q_0 = -tmp_blending_op_0*tmp_blending_op_46 - tmp_blending_op_36*tmp_blending_op_37*tmp_blending_op_43*tmp_blending_op_44;
             const real_t jac_blending_0_0_q_0 = tmp_blending_op_10*tmp_blending_op_46 + tmp_blending_op_39*tmp_blending_op_45;
             const real_t tmp_blending_op_47 = jac_blending_0_0_q_0*jac_blending_1_1_q_0 - jac_blending_0_1_q_0*jac_blending_1_0_q_0;
             const real_t tmp_blending_op_48 = 1.0 / (tmp_blending_op_47);
             const real_t abs_det_jac_blending_q_0 = tmp_blending_op_47;
             const real_t jac_blending_inv_1_1_q_0 = jac_blending_0_0_q_0*tmp_blending_op_48;
             const real_t jac_blending_inv_0_1_q_0 = -jac_blending_0_1_q_0*tmp_blending_op_48;
             const real_t tmp_kernel_op_4 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_0*0.16666666666666666;
             const real_t tmp_kernel_op_5 = tmp_kernel_op_4*(-jac_blending_inv_0_1_q_0*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_3 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_3) - jac_blending_inv_1_1_q_0*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_3 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_3));
             const real_t tmp_kernel_op_10 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_1*0.16666666666666666;
             const real_t tmp_kernel_op_11 = tmp_kernel_op_10*(-jac_blending_inv_0_1_q_1*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_9 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_9) - jac_blending_inv_1_1_q_1*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_9 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_9));
             const real_t tmp_kernel_op_16 = abs_det_jac_affine_BLUE*abs_det_jac_blending_q_2*0.16666666666666666;
             const real_t tmp_kernel_op_17 = tmp_kernel_op_16*(-jac_blending_inv_0_1_q_2*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_15 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_15) - jac_blending_inv_1_1_q_2*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_15 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_15));
             const real_t tmp_kernel_op_19 = tmp_kernel_op_4*(-jac_affine_inv_0_0_BLUE*jac_blending_inv_0_1_q_0*tmp_kernel_op_18 - jac_affine_inv_0_1_BLUE*jac_blending_inv_1_1_q_0*tmp_kernel_op_18);
             const real_t tmp_kernel_op_21 = tmp_kernel_op_10*(-jac_affine_inv_0_0_BLUE*jac_blending_inv_0_1_q_1*tmp_kernel_op_20 - jac_affine_inv_0_1_BLUE*jac_blending_inv_1_1_q_1*tmp_kernel_op_20);
             const real_t tmp_kernel_op_23 = tmp_kernel_op_16*(-jac_affine_inv_0_0_BLUE*jac_blending_inv_0_1_q_2*tmp_kernel_op_22 - jac_affine_inv_0_1_BLUE*jac_blending_inv_1_1_q_2*tmp_kernel_op_22);
             const real_t tmp_kernel_op_25 = tmp_kernel_op_4*(-jac_affine_inv_1_0_BLUE*jac_blending_inv_0_1_q_0*tmp_kernel_op_24 - jac_affine_inv_1_1_BLUE*jac_blending_inv_1_1_q_0*tmp_kernel_op_24);
             const real_t tmp_kernel_op_27 = tmp_kernel_op_10*(-jac_affine_inv_1_0_BLUE*jac_blending_inv_0_1_q_1*tmp_kernel_op_26 - jac_affine_inv_1_1_BLUE*jac_blending_inv_1_1_q_1*tmp_kernel_op_26);
             const real_t tmp_kernel_op_29 = tmp_kernel_op_16*(-jac_affine_inv_1_0_BLUE*jac_blending_inv_0_1_q_2*tmp_kernel_op_28 - jac_affine_inv_1_1_BLUE*jac_blending_inv_1_1_q_2*tmp_kernel_op_28);
             const real_t tmp_kernel_op_34 = tmp_kernel_op_4*(-jac_blending_inv_0_1_q_0*(tmp_moved_constant_0 + tmp_moved_constant_1) - jac_blending_inv_1_1_q_0*(tmp_moved_constant_2 + tmp_moved_constant_3));
             const real_t tmp_kernel_op_39 = tmp_kernel_op_10*(-jac_blending_inv_0_1_q_1*(tmp_moved_constant_4 + tmp_moved_constant_5) - jac_blending_inv_1_1_q_1*(tmp_moved_constant_6 + tmp_moved_constant_7));
             const real_t tmp_kernel_op_44 = tmp_kernel_op_16*(-jac_blending_inv_0_1_q_2*(tmp_moved_constant_8 + tmp_moved_constant_9) - jac_blending_inv_1_1_q_2*(tmp_moved_constant_10 + tmp_moved_constant_11));
             const real_t tmp_kernel_op_46 = tmp_kernel_op_4*(-jac_blending_inv_0_1_q_0*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_45 - tmp_moved_constant_0) - jac_blending_inv_1_1_q_0*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_45 - tmp_moved_constant_2));
             const real_t tmp_kernel_op_48 = tmp_kernel_op_10*(-jac_blending_inv_0_1_q_1*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_47 - tmp_moved_constant_4) - jac_blending_inv_1_1_q_1*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_47 - tmp_moved_constant_6));
             const real_t tmp_kernel_op_50 = tmp_kernel_op_16*(-jac_blending_inv_0_1_q_2*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_49 - tmp_moved_constant_8) - jac_blending_inv_1_1_q_2*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_49 - tmp_moved_constant_10));
             const real_t tmp_kernel_op_52 = tmp_kernel_op_4*(-jac_blending_inv_0_1_q_0*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_51 - tmp_moved_constant_1) - jac_blending_inv_1_1_q_0*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_51 - tmp_moved_constant_3));
             const real_t tmp_kernel_op_54 = tmp_kernel_op_10*(-jac_blending_inv_0_1_q_1*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_53 - tmp_moved_constant_5) - jac_blending_inv_1_1_q_1*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_53 - tmp_moved_constant_7));
             const real_t tmp_kernel_op_56 = tmp_kernel_op_16*(-jac_blending_inv_0_1_q_2*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_55 - tmp_moved_constant_9) - jac_blending_inv_1_1_q_2*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_55 - tmp_moved_constant_11));
             const real_t elMat_0_0 = tmp_kernel_op_0*tmp_kernel_op_5 + tmp_kernel_op_11*tmp_kernel_op_6 + tmp_kernel_op_12*tmp_kernel_op_17;
             const real_t elMat_0_1 = tmp_kernel_op_11*0.66666666666666663 + tmp_kernel_op_17*0.16666666666666666 + tmp_kernel_op_5*0.16666666666666666;
             const real_t elMat_0_2 = tmp_kernel_op_11*0.16666666666666666 + tmp_kernel_op_17*0.16666666666666666 + tmp_kernel_op_5*0.66666666666666663;
             const real_t elMat_1_0 = tmp_kernel_op_0*tmp_kernel_op_19 + tmp_kernel_op_12*tmp_kernel_op_23 + tmp_kernel_op_21*tmp_kernel_op_6;
             const real_t elMat_1_1 = tmp_kernel_op_19*0.16666666666666666 + tmp_kernel_op_21*0.66666666666666663 + tmp_kernel_op_23*0.16666666666666666;
             const real_t elMat_1_2 = tmp_kernel_op_19*0.66666666666666663 + tmp_kernel_op_21*0.16666666666666666 + tmp_kernel_op_23*0.16666666666666666;
             const real_t elMat_2_0 = tmp_kernel_op_0*tmp_kernel_op_25 + tmp_kernel_op_12*tmp_kernel_op_29 + tmp_kernel_op_27*tmp_kernel_op_6;
             const real_t elMat_2_1 = tmp_kernel_op_25*0.16666666666666666 + tmp_kernel_op_27*0.66666666666666663 + tmp_kernel_op_29*0.16666666666666666;
             const real_t elMat_2_2 = tmp_kernel_op_25*0.66666666666666663 + tmp_kernel_op_27*0.16666666666666666 + tmp_kernel_op_29*0.16666666666666666;
             const real_t elMat_3_0 = tmp_kernel_op_0*tmp_kernel_op_34 + tmp_kernel_op_12*tmp_kernel_op_44 + tmp_kernel_op_39*tmp_kernel_op_6;
             const real_t elMat_3_1 = tmp_kernel_op_34*0.16666666666666666 + tmp_kernel_op_39*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666;
             const real_t elMat_3_2 = tmp_kernel_op_34*0.66666666666666663 + tmp_kernel_op_39*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666;
             const real_t elMat_4_0 = tmp_kernel_op_0*tmp_kernel_op_46 + tmp_kernel_op_12*tmp_kernel_op_50 + tmp_kernel_op_48*tmp_kernel_op_6;
             const real_t elMat_4_1 = tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_48*0.66666666666666663 + tmp_kernel_op_50*0.16666666666666666;
             const real_t elMat_4_2 = tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_48*0.16666666666666666 + tmp_kernel_op_50*0.16666666666666666;
             const real_t elMat_5_0 = tmp_kernel_op_0*tmp_kernel_op_52 + tmp_kernel_op_12*tmp_kernel_op_56 + tmp_kernel_op_54*tmp_kernel_op_6;
             const real_t elMat_5_1 = tmp_kernel_op_52*0.16666666666666666 + tmp_kernel_op_54*0.66666666666666663 + tmp_kernel_op_56*0.16666666666666666;
             const real_t elMat_5_2 = tmp_kernel_op_52*0.66666666666666663 + tmp_kernel_op_54*0.16666666666666666 + tmp_kernel_op_56*0.16666666666666666;
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 3 );
             std::vector< real_t > _data_mat( 18 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
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
             _data_mat[9] = ((real_t)(elMat_3_0));
             _data_mat[10] = ((real_t)(elMat_3_1));
             _data_mat[11] = ((real_t)(elMat_3_2));
             _data_mat[12] = ((real_t)(elMat_4_0));
             _data_mat[13] = ((real_t)(elMat_4_1));
             _data_mat[14] = ((real_t)(elMat_4_2));
             _data_mat[15] = ((real_t)(elMat_5_0));
             _data_mat[16] = ((real_t)(elMat_5_1));
             _data_mat[17] = ((real_t)(elMat_5_2));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
