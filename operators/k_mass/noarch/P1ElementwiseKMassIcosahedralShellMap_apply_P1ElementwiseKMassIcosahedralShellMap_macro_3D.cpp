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































#include "../P1ElementwiseKMassIcosahedralShellMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseKMassIcosahedralShellMap::apply_P1ElementwiseKMassIcosahedralShellMap_macro_3D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_k, real_t * RESTRICT  _data_src, real_t forVertex_0, real_t forVertex_1, real_t forVertex_2, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t rayVertex_2, real_t refVertex_0, real_t refVertex_1, real_t refVertex_2, real_t thrVertex_0, real_t thrVertex_1, real_t thrVertex_2 ) const
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
       const real_t tmp_qloop_0 = rayVertex_1 - refVertex_1;
       const real_t tmp_qloop_1 = -rayVertex_0;
       const real_t tmp_qloop_2 = -forVertex_0 - tmp_qloop_1;
       const real_t tmp_qloop_3 = rayVertex_2 - thrVertex_2;
       const real_t tmp_qloop_4 = tmp_qloop_2*tmp_qloop_3;
       const real_t tmp_qloop_5 = rayVertex_2 - refVertex_2;
       const real_t tmp_qloop_6 = rayVertex_1 - thrVertex_1;
       const real_t tmp_qloop_7 = tmp_qloop_2*tmp_qloop_6;
       const real_t tmp_qloop_8 = -rayVertex_1;
       const real_t tmp_qloop_9 = -forVertex_1 - tmp_qloop_8;
       const real_t tmp_qloop_10 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_11 = rayVertex_0 - refVertex_0;
       const real_t tmp_qloop_12 = -rayVertex_2;
       const real_t tmp_qloop_13 = -forVertex_2 - tmp_qloop_12;
       const real_t tmp_qloop_14 = tmp_qloop_3*tmp_qloop_9;
       const real_t tmp_qloop_15 = tmp_qloop_10*tmp_qloop_13;
       const real_t tmp_qloop_16 = -tmp_qloop_0*tmp_qloop_15 + tmp_qloop_0*tmp_qloop_4 + tmp_qloop_10*tmp_qloop_5*tmp_qloop_9 + tmp_qloop_11*tmp_qloop_13*tmp_qloop_6 - tmp_qloop_11*tmp_qloop_14 - tmp_qloop_5*tmp_qloop_7;
       const real_t tmp_qloop_17 = 1.0 / (tmp_qloop_16);
       const real_t tmp_qloop_20 = radRayVertex*tmp_qloop_16;
       const real_t tmp_qloop_21 = radRayVertex - radRefVertex;
       const real_t tmp_qloop_32 = -tmp_qloop_13*tmp_qloop_6 + tmp_qloop_14;
       const real_t tmp_qloop_33 = -tmp_qloop_21*tmp_qloop_32;
       const real_t tmp_qloop_39 = tmp_qloop_10*tmp_qloop_13 - tmp_qloop_4;
       const real_t tmp_qloop_40 = tmp_qloop_21*tmp_qloop_39;
       const real_t tmp_qloop_45 = -tmp_qloop_10*tmp_qloop_9 + tmp_qloop_7;
       const real_t tmp_qloop_46 = -tmp_qloop_21*tmp_qloop_45;
       const real_t tmp_qloop_53 = -tmp_qloop_21*tmp_qloop_39;
       const real_t tmp_qloop_68 = tmp_qloop_21*tmp_qloop_32;
       const real_t tmp_qloop_72 = tmp_qloop_21*tmp_qloop_45;
       {
          /* CellType.WHITE_UP */
          const real_t _data_phi_0_0_WHITE_UP [] = {0.25, 0.25, 0.25, 0.25, 0.16666666666666674, 0.16666666666666666, 0.16666666666666666, 0.5, 0.16666666666666671, 0.16666666666666666, 0.5, 0.16666666666666666, 0.16666666666666671, 0.5, 0.16666666666666666, 0.16666666666666666, 0.50000000000000011, 0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
      
          const real_t _data_tabulated_and_untitled_0_0_WHITE_UP [] = {((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777804)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.08333333333333337)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.25)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.25)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.25)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.25000000000000011)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_UP*0.027777777777777776))};
      
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
                const real_t tmp_qloop_18 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q] + (-p_affine_0_0 + p_affine_3_0)*_data_q_p_2[q];
                const real_t tmp_qloop_19 = (tmp_qloop_18*tmp_qloop_18);
                const real_t tmp_qloop_22 = p_affine_0_2 + (-p_affine_0_2 + p_affine_1_2)*_data_q_p_0[q] + (-p_affine_0_2 + p_affine_2_2)*_data_q_p_1[q] + (-p_affine_0_2 + p_affine_3_2)*_data_q_p_2[q];
                const real_t tmp_qloop_23 = -tmp_qloop_12 - tmp_qloop_22;
                const real_t tmp_qloop_24 = -tmp_qloop_1 - tmp_qloop_18;
                const real_t tmp_qloop_25 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q] + (-p_affine_0_1 + p_affine_3_1)*_data_q_p_2[q];
                const real_t tmp_qloop_26 = -tmp_qloop_25 - tmp_qloop_8;
                const real_t tmp_qloop_27 = tmp_qloop_21*(tmp_qloop_10*tmp_qloop_23*tmp_qloop_9 + tmp_qloop_13*tmp_qloop_24*tmp_qloop_6 - tmp_qloop_14*tmp_qloop_24 - tmp_qloop_15*tmp_qloop_26 + tmp_qloop_2*tmp_qloop_26*tmp_qloop_3 - tmp_qloop_23*tmp_qloop_7);
                const real_t tmp_qloop_28 = tmp_qloop_20 - tmp_qloop_27;
                const real_t tmp_qloop_29 = (tmp_qloop_25*tmp_qloop_25);
                const real_t tmp_qloop_30 = (tmp_qloop_22*tmp_qloop_22);
                const real_t tmp_qloop_31 = tmp_qloop_19 + tmp_qloop_29 + tmp_qloop_30;
                const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_33;
                const real_t tmp_qloop_35 = tmp_qloop_28 + tmp_qloop_34;
                const real_t tmp_qloop_36 = tmp_qloop_17*(-tmp_qloop_19*tmp_qloop_28 + tmp_qloop_31*tmp_qloop_35);
                const real_t tmp_qloop_37 = pow(tmp_qloop_31, -1.5000000000000000);
                const real_t tmp_qloop_38 = tmp_qloop_37*1.0;
                const real_t tmp_qloop_41 = tmp_qloop_31*tmp_qloop_40;
                const real_t tmp_qloop_42 = -tmp_qloop_25*tmp_qloop_28 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_17*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_42*tmp_qloop_43;
                const real_t tmp_qloop_47 = -tmp_qloop_28;
                const real_t tmp_qloop_48 = tmp_qloop_22*tmp_qloop_47;
                const real_t tmp_qloop_49 = tmp_qloop_31*tmp_qloop_46 + tmp_qloop_48;
                const real_t tmp_qloop_50 = tmp_qloop_43*tmp_qloop_49;
                const real_t tmp_qloop_51 = tmp_qloop_18*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_33;
                const real_t tmp_qloop_52 = tmp_qloop_43*tmp_qloop_51;
                const real_t tmp_qloop_54 = tmp_qloop_25*tmp_qloop_53 + tmp_qloop_28;
                const real_t tmp_qloop_55 = tmp_qloop_29*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_54;
                const real_t tmp_qloop_56 = tmp_qloop_22*tmp_qloop_46;
                const real_t tmp_qloop_57 = tmp_qloop_28 + tmp_qloop_56;
                const real_t tmp_qloop_58 = tmp_qloop_30*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_57;
                const real_t tmp_qloop_66 = pow(tmp_qloop_31, -2.5000000000000000)*3.0;
                const real_t tmp_qloop_67 = tmp_qloop_36*tmp_qloop_66;
                const real_t tmp_qloop_69 = tmp_qloop_18*2.0;
                const real_t tmp_qloop_70 = -tmp_qloop_41;
                const real_t tmp_qloop_71 = tmp_qloop_35*2.0;
                const real_t tmp_qloop_73 = -tmp_qloop_31*tmp_qloop_72;
                const real_t tmp_qloop_74 = -tmp_qloop_20 + tmp_qloop_27;
                const real_t tmp_qloop_75 = tmp_qloop_18*tmp_qloop_68 + tmp_qloop_34*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_76 = tmp_qloop_17*tmp_qloop_66;
                const real_t tmp_qloop_77 = tmp_qloop_51*tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_25*tmp_qloop_77;
                const real_t tmp_qloop_79 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_80 = tmp_qloop_18*tmp_qloop_40 + tmp_qloop_33*tmp_qloop_79;
                const real_t tmp_qloop_81 = tmp_qloop_25*tmp_qloop_43;
                const real_t tmp_qloop_82 = tmp_qloop_22*2.0;
                const real_t tmp_qloop_83 = tmp_qloop_18*tmp_qloop_72 + tmp_qloop_33*tmp_qloop_82;
                const real_t tmp_qloop_84 = -tmp_qloop_22*tmp_qloop_78;
                const real_t tmp_qloop_85 = tmp_qloop_18*tmp_qloop_22;
                const real_t tmp_qloop_86 = tmp_qloop_22*tmp_qloop_43;
                const real_t tmp_qloop_87 = tmp_qloop_21*tmp_qloop_25*tmp_qloop_32 - tmp_qloop_40*tmp_qloop_69;
                const real_t tmp_qloop_88 = tmp_qloop_18*tmp_qloop_43;
                const real_t tmp_qloop_89 = tmp_qloop_42*tmp_qloop_76;
                const real_t tmp_qloop_90 = -tmp_qloop_25*tmp_qloop_40 - tmp_qloop_28;
                const real_t tmp_qloop_91 = tmp_qloop_25*tmp_qloop_89;
                const real_t tmp_qloop_92 = tmp_qloop_25*tmp_qloop_72 - tmp_qloop_40*tmp_qloop_82;
                const real_t tmp_qloop_93 = tmp_qloop_85*tmp_qloop_89;
                const real_t tmp_qloop_94 = -tmp_qloop_31*tmp_qloop_68;
                const real_t tmp_qloop_95 = tmp_qloop_55*tmp_qloop_76;
                const real_t tmp_qloop_96 = tmp_qloop_22*tmp_qloop_68 + tmp_qloop_46*tmp_qloop_69;
                const real_t tmp_qloop_97 = tmp_qloop_49*tmp_qloop_76;
                const real_t tmp_qloop_98 = tmp_qloop_22*tmp_qloop_40 + tmp_qloop_46*tmp_qloop_79;
                const real_t tmp_qloop_99 = tmp_qloop_25*tmp_qloop_97;
                const real_t tmp_qloop_100 = tmp_qloop_18*tmp_qloop_99;
                const real_t tmp_qloop_101 = tmp_qloop_22*tmp_qloop_72 + tmp_qloop_56*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_102 = tmp_qloop_58*tmp_qloop_76;
                const real_t jac_blending_0_0 = tmp_qloop_36*tmp_qloop_38;
                const real_t jac_blending_0_1 = tmp_qloop_18*tmp_qloop_44;
                const real_t jac_blending_0_2 = tmp_qloop_18*tmp_qloop_50;
                const real_t jac_blending_1_0 = tmp_qloop_25*tmp_qloop_52;
                const real_t jac_blending_1_1 = tmp_qloop_43*tmp_qloop_55;
                const real_t tmp_qloop_63 = jac_blending_0_2*jac_blending_1_1;
                const real_t jac_blending_1_2 = tmp_qloop_25*tmp_qloop_50;
                const real_t tmp_qloop_60 = jac_blending_0_1*jac_blending_1_2;
                const real_t jac_blending_2_0 = tmp_qloop_22*tmp_qloop_52;
                const real_t jac_blending_2_1 = tmp_qloop_22*tmp_qloop_44;
                const real_t tmp_qloop_61 = jac_blending_1_2*jac_blending_2_1;
                const real_t jac_blending_2_2 = tmp_qloop_43*tmp_qloop_58;
                const real_t tmp_qloop_59 = jac_blending_1_1*jac_blending_2_2;
                const real_t tmp_qloop_62 = jac_blending_0_1*jac_blending_2_2;
                const real_t tmp_qloop_64 = jac_blending_0_0*tmp_qloop_59 - jac_blending_0_0*tmp_qloop_61 + jac_blending_0_2*jac_blending_1_0*jac_blending_2_1 - jac_blending_1_0*tmp_qloop_62 + jac_blending_2_0*tmp_qloop_60 - jac_blending_2_0*tmp_qloop_63;
                const real_t tmp_qloop_65 = 1.0 / (tmp_qloop_64);
                const real_t abs_det_jac_blending = tmp_qloop_64;
                const real_t tmp_qloop_103 = abs_det_jac_blending*(k_dof_0*_data_phi_0_0_WHITE_UP[4*q] + k_dof_1*_data_phi_0_0_WHITE_UP[4*q + 1] + k_dof_2*_data_phi_0_0_WHITE_UP[4*q + 2] + k_dof_3*_data_phi_0_0_WHITE_UP[4*q + 3])*_data_q_w[q];
                const real_t jac_blending_inv_0_0 = tmp_qloop_65*(tmp_qloop_59 - tmp_qloop_61);
                const real_t jac_blending_inv_0_1 = tmp_qloop_65*(jac_blending_0_2*jac_blending_2_1 - tmp_qloop_62);
                const real_t jac_blending_inv_0_2 = tmp_qloop_65*(tmp_qloop_60 - tmp_qloop_63);
                const real_t jac_blending_inv_1_0 = tmp_qloop_65*(-jac_blending_1_0*jac_blending_2_2 + jac_blending_1_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_1 = tmp_qloop_65*(jac_blending_0_0*jac_blending_2_2 - jac_blending_0_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_2 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_1_2 + jac_blending_0_2*jac_blending_1_0);
                const real_t jac_blending_inv_2_0 = tmp_qloop_65*(jac_blending_1_0*jac_blending_2_1 - jac_blending_1_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_1 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_2_1 + jac_blending_0_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_2 = tmp_qloop_65*(jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0);
                const real_t hessian_blending_0_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_68 - tmp_qloop_28*tmp_qloop_69 + tmp_qloop_31*(tmp_qloop_33 - tmp_qloop_68) + tmp_qloop_35*tmp_qloop_69)*1.0 - tmp_qloop_18*tmp_qloop_67;
                const real_t hessian_blending_1_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_40 + tmp_qloop_25*tmp_qloop_71 + tmp_qloop_70)*1.0 - tmp_qloop_25*tmp_qloop_67;
                const real_t hessian_blending_2_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_72 + tmp_qloop_22*tmp_qloop_71 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_67;
                const real_t hessian_blending_0_0_1 = tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_18*tmp_qloop_78;
                const real_t hessian_blending_1_0_1 = -tmp_qloop_29*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_80*tmp_qloop_81;
                const real_t hessian_blending_2_0_1 = tmp_qloop_81*tmp_qloop_83 + tmp_qloop_84;
                const real_t hessian_blending_0_0_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_77*tmp_qloop_85;
                const real_t hessian_blending_1_0_2 = tmp_qloop_80*tmp_qloop_86 + tmp_qloop_84;
                const real_t hessian_blending_2_0_2 = -tmp_qloop_30*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_83*tmp_qloop_86;
                const real_t hessian_blending_0_1_0 = -tmp_qloop_19*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_87*tmp_qloop_88;
                const real_t hessian_blending_1_1_0 = tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_18*tmp_qloop_91;
                const real_t hessian_blending_2_1_0 = tmp_qloop_88*tmp_qloop_92 - tmp_qloop_93;
                const real_t hessian_blending_0_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_68 + tmp_qloop_54*tmp_qloop_69 + tmp_qloop_94)*1.0 - tmp_qloop_18*tmp_qloop_95;
                const real_t hessian_blending_1_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_40 + tmp_qloop_31*(-tmp_qloop_40 + tmp_qloop_53) + tmp_qloop_47*tmp_qloop_79 + tmp_qloop_54*tmp_qloop_79)*1.0 - tmp_qloop_25*tmp_qloop_95;
                const real_t hessian_blending_2_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_72 + tmp_qloop_54*tmp_qloop_82 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_95;
                const real_t hessian_blending_0_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_87*1.0 - tmp_qloop_93;
                const real_t hessian_blending_1_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_22*tmp_qloop_91;
                const real_t hessian_blending_2_1_2 = -tmp_qloop_30*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_86*tmp_qloop_92;
                const real_t hessian_blending_0_2_0 = -tmp_qloop_19*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_88*tmp_qloop_96;
                const real_t hessian_blending_1_2_0 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_98*1.0;
                const real_t hessian_blending_2_2_0 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*1.0 - tmp_qloop_85*tmp_qloop_97;
                const real_t hessian_blending_0_2_1 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_96*1.0;
                const real_t hessian_blending_1_2_1 = -tmp_qloop_29*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_81*tmp_qloop_98;
                const real_t hessian_blending_2_2_1 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*1.0 - tmp_qloop_22*tmp_qloop_99;
                const real_t hessian_blending_0_2_2 = -tmp_qloop_102*tmp_qloop_18 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_68 + tmp_qloop_57*tmp_qloop_69 + tmp_qloop_94)*1.0;
                const real_t hessian_blending_1_2_2 = -tmp_qloop_102*tmp_qloop_25 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_40 + tmp_qloop_57*tmp_qloop_79 + tmp_qloop_70)*1.0;
                const real_t hessian_blending_2_2_2 = -tmp_qloop_102*tmp_qloop_22 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_72 + tmp_qloop_31*(tmp_qloop_46 - tmp_qloop_72) + tmp_qloop_48*2.0 + tmp_qloop_57*tmp_qloop_82)*1.0;
                const real_t q_tmp_0_0 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_UP[10*q + 9];
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
          const real_t _data_phi_0_0_WHITE_DOWN [] = {0.25, 0.25, 0.25, 0.25, 0.16666666666666674, 0.16666666666666666, 0.16666666666666666, 0.5, 0.16666666666666671, 0.16666666666666666, 0.5, 0.16666666666666666, 0.16666666666666671, 0.5, 0.16666666666666666, 0.16666666666666666, 0.50000000000000011, 0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
      
          const real_t _data_tabulated_and_untitled_0_0_WHITE_DOWN [] = {((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777804)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.08333333333333337)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.25000000000000011)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_WHITE_DOWN*0.027777777777777776))};
      
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
                const real_t tmp_qloop_18 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q] + (-p_affine_0_0 + p_affine_3_0)*_data_q_p_2[q];
                const real_t tmp_qloop_19 = (tmp_qloop_18*tmp_qloop_18);
                const real_t tmp_qloop_22 = p_affine_0_2 + (-p_affine_0_2 + p_affine_1_2)*_data_q_p_0[q] + (-p_affine_0_2 + p_affine_2_2)*_data_q_p_1[q] + (-p_affine_0_2 + p_affine_3_2)*_data_q_p_2[q];
                const real_t tmp_qloop_23 = -tmp_qloop_12 - tmp_qloop_22;
                const real_t tmp_qloop_24 = -tmp_qloop_1 - tmp_qloop_18;
                const real_t tmp_qloop_25 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q] + (-p_affine_0_1 + p_affine_3_1)*_data_q_p_2[q];
                const real_t tmp_qloop_26 = -tmp_qloop_25 - tmp_qloop_8;
                const real_t tmp_qloop_27 = tmp_qloop_21*(tmp_qloop_10*tmp_qloop_23*tmp_qloop_9 + tmp_qloop_13*tmp_qloop_24*tmp_qloop_6 - tmp_qloop_14*tmp_qloop_24 - tmp_qloop_15*tmp_qloop_26 + tmp_qloop_2*tmp_qloop_26*tmp_qloop_3 - tmp_qloop_23*tmp_qloop_7);
                const real_t tmp_qloop_28 = tmp_qloop_20 - tmp_qloop_27;
                const real_t tmp_qloop_29 = (tmp_qloop_25*tmp_qloop_25);
                const real_t tmp_qloop_30 = (tmp_qloop_22*tmp_qloop_22);
                const real_t tmp_qloop_31 = tmp_qloop_19 + tmp_qloop_29 + tmp_qloop_30;
                const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_33;
                const real_t tmp_qloop_35 = tmp_qloop_28 + tmp_qloop_34;
                const real_t tmp_qloop_36 = tmp_qloop_17*(-tmp_qloop_19*tmp_qloop_28 + tmp_qloop_31*tmp_qloop_35);
                const real_t tmp_qloop_37 = pow(tmp_qloop_31, -1.5000000000000000);
                const real_t tmp_qloop_38 = tmp_qloop_37*1.0;
                const real_t tmp_qloop_41 = tmp_qloop_31*tmp_qloop_40;
                const real_t tmp_qloop_42 = -tmp_qloop_25*tmp_qloop_28 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_17*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_42*tmp_qloop_43;
                const real_t tmp_qloop_47 = -tmp_qloop_28;
                const real_t tmp_qloop_48 = tmp_qloop_22*tmp_qloop_47;
                const real_t tmp_qloop_49 = tmp_qloop_31*tmp_qloop_46 + tmp_qloop_48;
                const real_t tmp_qloop_50 = tmp_qloop_43*tmp_qloop_49;
                const real_t tmp_qloop_51 = tmp_qloop_18*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_33;
                const real_t tmp_qloop_52 = tmp_qloop_43*tmp_qloop_51;
                const real_t tmp_qloop_54 = tmp_qloop_25*tmp_qloop_53 + tmp_qloop_28;
                const real_t tmp_qloop_55 = tmp_qloop_29*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_54;
                const real_t tmp_qloop_56 = tmp_qloop_22*tmp_qloop_46;
                const real_t tmp_qloop_57 = tmp_qloop_28 + tmp_qloop_56;
                const real_t tmp_qloop_58 = tmp_qloop_30*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_57;
                const real_t tmp_qloop_66 = pow(tmp_qloop_31, -2.5000000000000000)*3.0;
                const real_t tmp_qloop_67 = tmp_qloop_36*tmp_qloop_66;
                const real_t tmp_qloop_69 = tmp_qloop_18*2.0;
                const real_t tmp_qloop_70 = -tmp_qloop_41;
                const real_t tmp_qloop_71 = tmp_qloop_35*2.0;
                const real_t tmp_qloop_73 = -tmp_qloop_31*tmp_qloop_72;
                const real_t tmp_qloop_74 = -tmp_qloop_20 + tmp_qloop_27;
                const real_t tmp_qloop_75 = tmp_qloop_18*tmp_qloop_68 + tmp_qloop_34*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_76 = tmp_qloop_17*tmp_qloop_66;
                const real_t tmp_qloop_77 = tmp_qloop_51*tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_25*tmp_qloop_77;
                const real_t tmp_qloop_79 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_80 = tmp_qloop_18*tmp_qloop_40 + tmp_qloop_33*tmp_qloop_79;
                const real_t tmp_qloop_81 = tmp_qloop_25*tmp_qloop_43;
                const real_t tmp_qloop_82 = tmp_qloop_22*2.0;
                const real_t tmp_qloop_83 = tmp_qloop_18*tmp_qloop_72 + tmp_qloop_33*tmp_qloop_82;
                const real_t tmp_qloop_84 = -tmp_qloop_22*tmp_qloop_78;
                const real_t tmp_qloop_85 = tmp_qloop_18*tmp_qloop_22;
                const real_t tmp_qloop_86 = tmp_qloop_22*tmp_qloop_43;
                const real_t tmp_qloop_87 = tmp_qloop_21*tmp_qloop_25*tmp_qloop_32 - tmp_qloop_40*tmp_qloop_69;
                const real_t tmp_qloop_88 = tmp_qloop_18*tmp_qloop_43;
                const real_t tmp_qloop_89 = tmp_qloop_42*tmp_qloop_76;
                const real_t tmp_qloop_90 = -tmp_qloop_25*tmp_qloop_40 - tmp_qloop_28;
                const real_t tmp_qloop_91 = tmp_qloop_25*tmp_qloop_89;
                const real_t tmp_qloop_92 = tmp_qloop_25*tmp_qloop_72 - tmp_qloop_40*tmp_qloop_82;
                const real_t tmp_qloop_93 = tmp_qloop_85*tmp_qloop_89;
                const real_t tmp_qloop_94 = -tmp_qloop_31*tmp_qloop_68;
                const real_t tmp_qloop_95 = tmp_qloop_55*tmp_qloop_76;
                const real_t tmp_qloop_96 = tmp_qloop_22*tmp_qloop_68 + tmp_qloop_46*tmp_qloop_69;
                const real_t tmp_qloop_97 = tmp_qloop_49*tmp_qloop_76;
                const real_t tmp_qloop_98 = tmp_qloop_22*tmp_qloop_40 + tmp_qloop_46*tmp_qloop_79;
                const real_t tmp_qloop_99 = tmp_qloop_25*tmp_qloop_97;
                const real_t tmp_qloop_100 = tmp_qloop_18*tmp_qloop_99;
                const real_t tmp_qloop_101 = tmp_qloop_22*tmp_qloop_72 + tmp_qloop_56*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_102 = tmp_qloop_58*tmp_qloop_76;
                const real_t jac_blending_0_0 = tmp_qloop_36*tmp_qloop_38;
                const real_t jac_blending_0_1 = tmp_qloop_18*tmp_qloop_44;
                const real_t jac_blending_0_2 = tmp_qloop_18*tmp_qloop_50;
                const real_t jac_blending_1_0 = tmp_qloop_25*tmp_qloop_52;
                const real_t jac_blending_1_1 = tmp_qloop_43*tmp_qloop_55;
                const real_t tmp_qloop_63 = jac_blending_0_2*jac_blending_1_1;
                const real_t jac_blending_1_2 = tmp_qloop_25*tmp_qloop_50;
                const real_t tmp_qloop_60 = jac_blending_0_1*jac_blending_1_2;
                const real_t jac_blending_2_0 = tmp_qloop_22*tmp_qloop_52;
                const real_t jac_blending_2_1 = tmp_qloop_22*tmp_qloop_44;
                const real_t tmp_qloop_61 = jac_blending_1_2*jac_blending_2_1;
                const real_t jac_blending_2_2 = tmp_qloop_43*tmp_qloop_58;
                const real_t tmp_qloop_59 = jac_blending_1_1*jac_blending_2_2;
                const real_t tmp_qloop_62 = jac_blending_0_1*jac_blending_2_2;
                const real_t tmp_qloop_64 = jac_blending_0_0*tmp_qloop_59 - jac_blending_0_0*tmp_qloop_61 + jac_blending_0_2*jac_blending_1_0*jac_blending_2_1 - jac_blending_1_0*tmp_qloop_62 + jac_blending_2_0*tmp_qloop_60 - jac_blending_2_0*tmp_qloop_63;
                const real_t tmp_qloop_65 = 1.0 / (tmp_qloop_64);
                const real_t abs_det_jac_blending = tmp_qloop_64;
                const real_t tmp_qloop_103 = abs_det_jac_blending*(k_dof_0*_data_phi_0_0_WHITE_DOWN[4*q] + k_dof_1*_data_phi_0_0_WHITE_DOWN[4*q + 1] + k_dof_2*_data_phi_0_0_WHITE_DOWN[4*q + 2] + k_dof_3*_data_phi_0_0_WHITE_DOWN[4*q + 3])*_data_q_w[q];
                const real_t jac_blending_inv_0_0 = tmp_qloop_65*(tmp_qloop_59 - tmp_qloop_61);
                const real_t jac_blending_inv_0_1 = tmp_qloop_65*(jac_blending_0_2*jac_blending_2_1 - tmp_qloop_62);
                const real_t jac_blending_inv_0_2 = tmp_qloop_65*(tmp_qloop_60 - tmp_qloop_63);
                const real_t jac_blending_inv_1_0 = tmp_qloop_65*(-jac_blending_1_0*jac_blending_2_2 + jac_blending_1_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_1 = tmp_qloop_65*(jac_blending_0_0*jac_blending_2_2 - jac_blending_0_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_2 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_1_2 + jac_blending_0_2*jac_blending_1_0);
                const real_t jac_blending_inv_2_0 = tmp_qloop_65*(jac_blending_1_0*jac_blending_2_1 - jac_blending_1_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_1 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_2_1 + jac_blending_0_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_2 = tmp_qloop_65*(jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0);
                const real_t hessian_blending_0_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_68 - tmp_qloop_28*tmp_qloop_69 + tmp_qloop_31*(tmp_qloop_33 - tmp_qloop_68) + tmp_qloop_35*tmp_qloop_69)*1.0 - tmp_qloop_18*tmp_qloop_67;
                const real_t hessian_blending_1_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_40 + tmp_qloop_25*tmp_qloop_71 + tmp_qloop_70)*1.0 - tmp_qloop_25*tmp_qloop_67;
                const real_t hessian_blending_2_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_72 + tmp_qloop_22*tmp_qloop_71 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_67;
                const real_t hessian_blending_0_0_1 = tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_18*tmp_qloop_78;
                const real_t hessian_blending_1_0_1 = -tmp_qloop_29*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_80*tmp_qloop_81;
                const real_t hessian_blending_2_0_1 = tmp_qloop_81*tmp_qloop_83 + tmp_qloop_84;
                const real_t hessian_blending_0_0_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_77*tmp_qloop_85;
                const real_t hessian_blending_1_0_2 = tmp_qloop_80*tmp_qloop_86 + tmp_qloop_84;
                const real_t hessian_blending_2_0_2 = -tmp_qloop_30*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_83*tmp_qloop_86;
                const real_t hessian_blending_0_1_0 = -tmp_qloop_19*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_87*tmp_qloop_88;
                const real_t hessian_blending_1_1_0 = tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_18*tmp_qloop_91;
                const real_t hessian_blending_2_1_0 = tmp_qloop_88*tmp_qloop_92 - tmp_qloop_93;
                const real_t hessian_blending_0_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_68 + tmp_qloop_54*tmp_qloop_69 + tmp_qloop_94)*1.0 - tmp_qloop_18*tmp_qloop_95;
                const real_t hessian_blending_1_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_40 + tmp_qloop_31*(-tmp_qloop_40 + tmp_qloop_53) + tmp_qloop_47*tmp_qloop_79 + tmp_qloop_54*tmp_qloop_79)*1.0 - tmp_qloop_25*tmp_qloop_95;
                const real_t hessian_blending_2_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_72 + tmp_qloop_54*tmp_qloop_82 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_95;
                const real_t hessian_blending_0_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_87*1.0 - tmp_qloop_93;
                const real_t hessian_blending_1_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_22*tmp_qloop_91;
                const real_t hessian_blending_2_1_2 = -tmp_qloop_30*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_86*tmp_qloop_92;
                const real_t hessian_blending_0_2_0 = -tmp_qloop_19*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_88*tmp_qloop_96;
                const real_t hessian_blending_1_2_0 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_98*1.0;
                const real_t hessian_blending_2_2_0 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*1.0 - tmp_qloop_85*tmp_qloop_97;
                const real_t hessian_blending_0_2_1 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_96*1.0;
                const real_t hessian_blending_1_2_1 = -tmp_qloop_29*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_81*tmp_qloop_98;
                const real_t hessian_blending_2_2_1 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*1.0 - tmp_qloop_22*tmp_qloop_99;
                const real_t hessian_blending_0_2_2 = -tmp_qloop_102*tmp_qloop_18 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_68 + tmp_qloop_57*tmp_qloop_69 + tmp_qloop_94)*1.0;
                const real_t hessian_blending_1_2_2 = -tmp_qloop_102*tmp_qloop_25 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_40 + tmp_qloop_57*tmp_qloop_79 + tmp_qloop_70)*1.0;
                const real_t hessian_blending_2_2_2 = -tmp_qloop_102*tmp_qloop_22 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_72 + tmp_qloop_31*(tmp_qloop_46 - tmp_qloop_72) + tmp_qloop_48*2.0 + tmp_qloop_57*tmp_qloop_82)*1.0;
                const real_t q_tmp_0_0 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_WHITE_DOWN[10*q + 9];
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
          const real_t _data_phi_0_0_BLUE_UP [] = {0.25, 0.25, 0.25, 0.25, 0.16666666666666674, 0.16666666666666666, 0.16666666666666666, 0.5, 0.16666666666666671, 0.16666666666666666, 0.5, 0.16666666666666666, 0.16666666666666671, 0.5, 0.16666666666666666, 0.16666666666666666, 0.50000000000000011, 0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE_UP [] = {((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777804)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.08333333333333337)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.25)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.25)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.25)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.25000000000000011)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_UP*0.027777777777777776))};
      
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
                const real_t tmp_qloop_18 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q] + (-p_affine_0_0 + p_affine_3_0)*_data_q_p_2[q];
                const real_t tmp_qloop_19 = (tmp_qloop_18*tmp_qloop_18);
                const real_t tmp_qloop_22 = p_affine_0_2 + (-p_affine_0_2 + p_affine_1_2)*_data_q_p_0[q] + (-p_affine_0_2 + p_affine_2_2)*_data_q_p_1[q] + (-p_affine_0_2 + p_affine_3_2)*_data_q_p_2[q];
                const real_t tmp_qloop_23 = -tmp_qloop_12 - tmp_qloop_22;
                const real_t tmp_qloop_24 = -tmp_qloop_1 - tmp_qloop_18;
                const real_t tmp_qloop_25 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q] + (-p_affine_0_1 + p_affine_3_1)*_data_q_p_2[q];
                const real_t tmp_qloop_26 = -tmp_qloop_25 - tmp_qloop_8;
                const real_t tmp_qloop_27 = tmp_qloop_21*(tmp_qloop_10*tmp_qloop_23*tmp_qloop_9 + tmp_qloop_13*tmp_qloop_24*tmp_qloop_6 - tmp_qloop_14*tmp_qloop_24 - tmp_qloop_15*tmp_qloop_26 + tmp_qloop_2*tmp_qloop_26*tmp_qloop_3 - tmp_qloop_23*tmp_qloop_7);
                const real_t tmp_qloop_28 = tmp_qloop_20 - tmp_qloop_27;
                const real_t tmp_qloop_29 = (tmp_qloop_25*tmp_qloop_25);
                const real_t tmp_qloop_30 = (tmp_qloop_22*tmp_qloop_22);
                const real_t tmp_qloop_31 = tmp_qloop_19 + tmp_qloop_29 + tmp_qloop_30;
                const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_33;
                const real_t tmp_qloop_35 = tmp_qloop_28 + tmp_qloop_34;
                const real_t tmp_qloop_36 = tmp_qloop_17*(-tmp_qloop_19*tmp_qloop_28 + tmp_qloop_31*tmp_qloop_35);
                const real_t tmp_qloop_37 = pow(tmp_qloop_31, -1.5000000000000000);
                const real_t tmp_qloop_38 = tmp_qloop_37*1.0;
                const real_t tmp_qloop_41 = tmp_qloop_31*tmp_qloop_40;
                const real_t tmp_qloop_42 = -tmp_qloop_25*tmp_qloop_28 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_17*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_42*tmp_qloop_43;
                const real_t tmp_qloop_47 = -tmp_qloop_28;
                const real_t tmp_qloop_48 = tmp_qloop_22*tmp_qloop_47;
                const real_t tmp_qloop_49 = tmp_qloop_31*tmp_qloop_46 + tmp_qloop_48;
                const real_t tmp_qloop_50 = tmp_qloop_43*tmp_qloop_49;
                const real_t tmp_qloop_51 = tmp_qloop_18*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_33;
                const real_t tmp_qloop_52 = tmp_qloop_43*tmp_qloop_51;
                const real_t tmp_qloop_54 = tmp_qloop_25*tmp_qloop_53 + tmp_qloop_28;
                const real_t tmp_qloop_55 = tmp_qloop_29*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_54;
                const real_t tmp_qloop_56 = tmp_qloop_22*tmp_qloop_46;
                const real_t tmp_qloop_57 = tmp_qloop_28 + tmp_qloop_56;
                const real_t tmp_qloop_58 = tmp_qloop_30*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_57;
                const real_t tmp_qloop_66 = pow(tmp_qloop_31, -2.5000000000000000)*3.0;
                const real_t tmp_qloop_67 = tmp_qloop_36*tmp_qloop_66;
                const real_t tmp_qloop_69 = tmp_qloop_18*2.0;
                const real_t tmp_qloop_70 = -tmp_qloop_41;
                const real_t tmp_qloop_71 = tmp_qloop_35*2.0;
                const real_t tmp_qloop_73 = -tmp_qloop_31*tmp_qloop_72;
                const real_t tmp_qloop_74 = -tmp_qloop_20 + tmp_qloop_27;
                const real_t tmp_qloop_75 = tmp_qloop_18*tmp_qloop_68 + tmp_qloop_34*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_76 = tmp_qloop_17*tmp_qloop_66;
                const real_t tmp_qloop_77 = tmp_qloop_51*tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_25*tmp_qloop_77;
                const real_t tmp_qloop_79 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_80 = tmp_qloop_18*tmp_qloop_40 + tmp_qloop_33*tmp_qloop_79;
                const real_t tmp_qloop_81 = tmp_qloop_25*tmp_qloop_43;
                const real_t tmp_qloop_82 = tmp_qloop_22*2.0;
                const real_t tmp_qloop_83 = tmp_qloop_18*tmp_qloop_72 + tmp_qloop_33*tmp_qloop_82;
                const real_t tmp_qloop_84 = -tmp_qloop_22*tmp_qloop_78;
                const real_t tmp_qloop_85 = tmp_qloop_18*tmp_qloop_22;
                const real_t tmp_qloop_86 = tmp_qloop_22*tmp_qloop_43;
                const real_t tmp_qloop_87 = tmp_qloop_21*tmp_qloop_25*tmp_qloop_32 - tmp_qloop_40*tmp_qloop_69;
                const real_t tmp_qloop_88 = tmp_qloop_18*tmp_qloop_43;
                const real_t tmp_qloop_89 = tmp_qloop_42*tmp_qloop_76;
                const real_t tmp_qloop_90 = -tmp_qloop_25*tmp_qloop_40 - tmp_qloop_28;
                const real_t tmp_qloop_91 = tmp_qloop_25*tmp_qloop_89;
                const real_t tmp_qloop_92 = tmp_qloop_25*tmp_qloop_72 - tmp_qloop_40*tmp_qloop_82;
                const real_t tmp_qloop_93 = tmp_qloop_85*tmp_qloop_89;
                const real_t tmp_qloop_94 = -tmp_qloop_31*tmp_qloop_68;
                const real_t tmp_qloop_95 = tmp_qloop_55*tmp_qloop_76;
                const real_t tmp_qloop_96 = tmp_qloop_22*tmp_qloop_68 + tmp_qloop_46*tmp_qloop_69;
                const real_t tmp_qloop_97 = tmp_qloop_49*tmp_qloop_76;
                const real_t tmp_qloop_98 = tmp_qloop_22*tmp_qloop_40 + tmp_qloop_46*tmp_qloop_79;
                const real_t tmp_qloop_99 = tmp_qloop_25*tmp_qloop_97;
                const real_t tmp_qloop_100 = tmp_qloop_18*tmp_qloop_99;
                const real_t tmp_qloop_101 = tmp_qloop_22*tmp_qloop_72 + tmp_qloop_56*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_102 = tmp_qloop_58*tmp_qloop_76;
                const real_t jac_blending_0_0 = tmp_qloop_36*tmp_qloop_38;
                const real_t jac_blending_0_1 = tmp_qloop_18*tmp_qloop_44;
                const real_t jac_blending_0_2 = tmp_qloop_18*tmp_qloop_50;
                const real_t jac_blending_1_0 = tmp_qloop_25*tmp_qloop_52;
                const real_t jac_blending_1_1 = tmp_qloop_43*tmp_qloop_55;
                const real_t tmp_qloop_63 = jac_blending_0_2*jac_blending_1_1;
                const real_t jac_blending_1_2 = tmp_qloop_25*tmp_qloop_50;
                const real_t tmp_qloop_60 = jac_blending_0_1*jac_blending_1_2;
                const real_t jac_blending_2_0 = tmp_qloop_22*tmp_qloop_52;
                const real_t jac_blending_2_1 = tmp_qloop_22*tmp_qloop_44;
                const real_t tmp_qloop_61 = jac_blending_1_2*jac_blending_2_1;
                const real_t jac_blending_2_2 = tmp_qloop_43*tmp_qloop_58;
                const real_t tmp_qloop_59 = jac_blending_1_1*jac_blending_2_2;
                const real_t tmp_qloop_62 = jac_blending_0_1*jac_blending_2_2;
                const real_t tmp_qloop_64 = jac_blending_0_0*tmp_qloop_59 - jac_blending_0_0*tmp_qloop_61 + jac_blending_0_2*jac_blending_1_0*jac_blending_2_1 - jac_blending_1_0*tmp_qloop_62 + jac_blending_2_0*tmp_qloop_60 - jac_blending_2_0*tmp_qloop_63;
                const real_t tmp_qloop_65 = 1.0 / (tmp_qloop_64);
                const real_t abs_det_jac_blending = tmp_qloop_64;
                const real_t tmp_qloop_103 = abs_det_jac_blending*(k_dof_0*_data_phi_0_0_BLUE_UP[4*q] + k_dof_1*_data_phi_0_0_BLUE_UP[4*q + 1] + k_dof_2*_data_phi_0_0_BLUE_UP[4*q + 2] + k_dof_3*_data_phi_0_0_BLUE_UP[4*q + 3])*_data_q_w[q];
                const real_t jac_blending_inv_0_0 = tmp_qloop_65*(tmp_qloop_59 - tmp_qloop_61);
                const real_t jac_blending_inv_0_1 = tmp_qloop_65*(jac_blending_0_2*jac_blending_2_1 - tmp_qloop_62);
                const real_t jac_blending_inv_0_2 = tmp_qloop_65*(tmp_qloop_60 - tmp_qloop_63);
                const real_t jac_blending_inv_1_0 = tmp_qloop_65*(-jac_blending_1_0*jac_blending_2_2 + jac_blending_1_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_1 = tmp_qloop_65*(jac_blending_0_0*jac_blending_2_2 - jac_blending_0_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_2 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_1_2 + jac_blending_0_2*jac_blending_1_0);
                const real_t jac_blending_inv_2_0 = tmp_qloop_65*(jac_blending_1_0*jac_blending_2_1 - jac_blending_1_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_1 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_2_1 + jac_blending_0_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_2 = tmp_qloop_65*(jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0);
                const real_t hessian_blending_0_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_68 - tmp_qloop_28*tmp_qloop_69 + tmp_qloop_31*(tmp_qloop_33 - tmp_qloop_68) + tmp_qloop_35*tmp_qloop_69)*1.0 - tmp_qloop_18*tmp_qloop_67;
                const real_t hessian_blending_1_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_40 + tmp_qloop_25*tmp_qloop_71 + tmp_qloop_70)*1.0 - tmp_qloop_25*tmp_qloop_67;
                const real_t hessian_blending_2_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_72 + tmp_qloop_22*tmp_qloop_71 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_67;
                const real_t hessian_blending_0_0_1 = tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_18*tmp_qloop_78;
                const real_t hessian_blending_1_0_1 = -tmp_qloop_29*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_80*tmp_qloop_81;
                const real_t hessian_blending_2_0_1 = tmp_qloop_81*tmp_qloop_83 + tmp_qloop_84;
                const real_t hessian_blending_0_0_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_77*tmp_qloop_85;
                const real_t hessian_blending_1_0_2 = tmp_qloop_80*tmp_qloop_86 + tmp_qloop_84;
                const real_t hessian_blending_2_0_2 = -tmp_qloop_30*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_83*tmp_qloop_86;
                const real_t hessian_blending_0_1_0 = -tmp_qloop_19*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_87*tmp_qloop_88;
                const real_t hessian_blending_1_1_0 = tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_18*tmp_qloop_91;
                const real_t hessian_blending_2_1_0 = tmp_qloop_88*tmp_qloop_92 - tmp_qloop_93;
                const real_t hessian_blending_0_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_68 + tmp_qloop_54*tmp_qloop_69 + tmp_qloop_94)*1.0 - tmp_qloop_18*tmp_qloop_95;
                const real_t hessian_blending_1_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_40 + tmp_qloop_31*(-tmp_qloop_40 + tmp_qloop_53) + tmp_qloop_47*tmp_qloop_79 + tmp_qloop_54*tmp_qloop_79)*1.0 - tmp_qloop_25*tmp_qloop_95;
                const real_t hessian_blending_2_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_72 + tmp_qloop_54*tmp_qloop_82 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_95;
                const real_t hessian_blending_0_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_87*1.0 - tmp_qloop_93;
                const real_t hessian_blending_1_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_22*tmp_qloop_91;
                const real_t hessian_blending_2_1_2 = -tmp_qloop_30*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_86*tmp_qloop_92;
                const real_t hessian_blending_0_2_0 = -tmp_qloop_19*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_88*tmp_qloop_96;
                const real_t hessian_blending_1_2_0 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_98*1.0;
                const real_t hessian_blending_2_2_0 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*1.0 - tmp_qloop_85*tmp_qloop_97;
                const real_t hessian_blending_0_2_1 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_96*1.0;
                const real_t hessian_blending_1_2_1 = -tmp_qloop_29*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_81*tmp_qloop_98;
                const real_t hessian_blending_2_2_1 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*1.0 - tmp_qloop_22*tmp_qloop_99;
                const real_t hessian_blending_0_2_2 = -tmp_qloop_102*tmp_qloop_18 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_68 + tmp_qloop_57*tmp_qloop_69 + tmp_qloop_94)*1.0;
                const real_t hessian_blending_1_2_2 = -tmp_qloop_102*tmp_qloop_25 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_40 + tmp_qloop_57*tmp_qloop_79 + tmp_qloop_70)*1.0;
                const real_t hessian_blending_2_2_2 = -tmp_qloop_102*tmp_qloop_22 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_72 + tmp_qloop_31*(tmp_qloop_46 - tmp_qloop_72) + tmp_qloop_48*2.0 + tmp_qloop_57*tmp_qloop_82)*1.0;
                const real_t q_tmp_0_0 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_UP[10*q + 9];
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
          const real_t _data_phi_0_0_BLUE_DOWN [] = {0.25, 0.25, 0.25, 0.25, 0.16666666666666674, 0.16666666666666666, 0.16666666666666666, 0.5, 0.16666666666666671, 0.16666666666666666, 0.5, 0.16666666666666666, 0.16666666666666671, 0.5, 0.16666666666666666, 0.16666666666666666, 0.50000000000000011, 0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE_DOWN [] = {((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777804)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.08333333333333337)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.25)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.25000000000000011)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_BLUE_DOWN*0.027777777777777776))};
      
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
                const real_t tmp_qloop_18 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q] + (-p_affine_0_0 + p_affine_3_0)*_data_q_p_2[q];
                const real_t tmp_qloop_19 = (tmp_qloop_18*tmp_qloop_18);
                const real_t tmp_qloop_22 = p_affine_0_2 + (-p_affine_0_2 + p_affine_1_2)*_data_q_p_0[q] + (-p_affine_0_2 + p_affine_2_2)*_data_q_p_1[q] + (-p_affine_0_2 + p_affine_3_2)*_data_q_p_2[q];
                const real_t tmp_qloop_23 = -tmp_qloop_12 - tmp_qloop_22;
                const real_t tmp_qloop_24 = -tmp_qloop_1 - tmp_qloop_18;
                const real_t tmp_qloop_25 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q] + (-p_affine_0_1 + p_affine_3_1)*_data_q_p_2[q];
                const real_t tmp_qloop_26 = -tmp_qloop_25 - tmp_qloop_8;
                const real_t tmp_qloop_27 = tmp_qloop_21*(tmp_qloop_10*tmp_qloop_23*tmp_qloop_9 + tmp_qloop_13*tmp_qloop_24*tmp_qloop_6 - tmp_qloop_14*tmp_qloop_24 - tmp_qloop_15*tmp_qloop_26 + tmp_qloop_2*tmp_qloop_26*tmp_qloop_3 - tmp_qloop_23*tmp_qloop_7);
                const real_t tmp_qloop_28 = tmp_qloop_20 - tmp_qloop_27;
                const real_t tmp_qloop_29 = (tmp_qloop_25*tmp_qloop_25);
                const real_t tmp_qloop_30 = (tmp_qloop_22*tmp_qloop_22);
                const real_t tmp_qloop_31 = tmp_qloop_19 + tmp_qloop_29 + tmp_qloop_30;
                const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_33;
                const real_t tmp_qloop_35 = tmp_qloop_28 + tmp_qloop_34;
                const real_t tmp_qloop_36 = tmp_qloop_17*(-tmp_qloop_19*tmp_qloop_28 + tmp_qloop_31*tmp_qloop_35);
                const real_t tmp_qloop_37 = pow(tmp_qloop_31, -1.5000000000000000);
                const real_t tmp_qloop_38 = tmp_qloop_37*1.0;
                const real_t tmp_qloop_41 = tmp_qloop_31*tmp_qloop_40;
                const real_t tmp_qloop_42 = -tmp_qloop_25*tmp_qloop_28 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_17*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_42*tmp_qloop_43;
                const real_t tmp_qloop_47 = -tmp_qloop_28;
                const real_t tmp_qloop_48 = tmp_qloop_22*tmp_qloop_47;
                const real_t tmp_qloop_49 = tmp_qloop_31*tmp_qloop_46 + tmp_qloop_48;
                const real_t tmp_qloop_50 = tmp_qloop_43*tmp_qloop_49;
                const real_t tmp_qloop_51 = tmp_qloop_18*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_33;
                const real_t tmp_qloop_52 = tmp_qloop_43*tmp_qloop_51;
                const real_t tmp_qloop_54 = tmp_qloop_25*tmp_qloop_53 + tmp_qloop_28;
                const real_t tmp_qloop_55 = tmp_qloop_29*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_54;
                const real_t tmp_qloop_56 = tmp_qloop_22*tmp_qloop_46;
                const real_t tmp_qloop_57 = tmp_qloop_28 + tmp_qloop_56;
                const real_t tmp_qloop_58 = tmp_qloop_30*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_57;
                const real_t tmp_qloop_66 = pow(tmp_qloop_31, -2.5000000000000000)*3.0;
                const real_t tmp_qloop_67 = tmp_qloop_36*tmp_qloop_66;
                const real_t tmp_qloop_69 = tmp_qloop_18*2.0;
                const real_t tmp_qloop_70 = -tmp_qloop_41;
                const real_t tmp_qloop_71 = tmp_qloop_35*2.0;
                const real_t tmp_qloop_73 = -tmp_qloop_31*tmp_qloop_72;
                const real_t tmp_qloop_74 = -tmp_qloop_20 + tmp_qloop_27;
                const real_t tmp_qloop_75 = tmp_qloop_18*tmp_qloop_68 + tmp_qloop_34*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_76 = tmp_qloop_17*tmp_qloop_66;
                const real_t tmp_qloop_77 = tmp_qloop_51*tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_25*tmp_qloop_77;
                const real_t tmp_qloop_79 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_80 = tmp_qloop_18*tmp_qloop_40 + tmp_qloop_33*tmp_qloop_79;
                const real_t tmp_qloop_81 = tmp_qloop_25*tmp_qloop_43;
                const real_t tmp_qloop_82 = tmp_qloop_22*2.0;
                const real_t tmp_qloop_83 = tmp_qloop_18*tmp_qloop_72 + tmp_qloop_33*tmp_qloop_82;
                const real_t tmp_qloop_84 = -tmp_qloop_22*tmp_qloop_78;
                const real_t tmp_qloop_85 = tmp_qloop_18*tmp_qloop_22;
                const real_t tmp_qloop_86 = tmp_qloop_22*tmp_qloop_43;
                const real_t tmp_qloop_87 = tmp_qloop_21*tmp_qloop_25*tmp_qloop_32 - tmp_qloop_40*tmp_qloop_69;
                const real_t tmp_qloop_88 = tmp_qloop_18*tmp_qloop_43;
                const real_t tmp_qloop_89 = tmp_qloop_42*tmp_qloop_76;
                const real_t tmp_qloop_90 = -tmp_qloop_25*tmp_qloop_40 - tmp_qloop_28;
                const real_t tmp_qloop_91 = tmp_qloop_25*tmp_qloop_89;
                const real_t tmp_qloop_92 = tmp_qloop_25*tmp_qloop_72 - tmp_qloop_40*tmp_qloop_82;
                const real_t tmp_qloop_93 = tmp_qloop_85*tmp_qloop_89;
                const real_t tmp_qloop_94 = -tmp_qloop_31*tmp_qloop_68;
                const real_t tmp_qloop_95 = tmp_qloop_55*tmp_qloop_76;
                const real_t tmp_qloop_96 = tmp_qloop_22*tmp_qloop_68 + tmp_qloop_46*tmp_qloop_69;
                const real_t tmp_qloop_97 = tmp_qloop_49*tmp_qloop_76;
                const real_t tmp_qloop_98 = tmp_qloop_22*tmp_qloop_40 + tmp_qloop_46*tmp_qloop_79;
                const real_t tmp_qloop_99 = tmp_qloop_25*tmp_qloop_97;
                const real_t tmp_qloop_100 = tmp_qloop_18*tmp_qloop_99;
                const real_t tmp_qloop_101 = tmp_qloop_22*tmp_qloop_72 + tmp_qloop_56*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_102 = tmp_qloop_58*tmp_qloop_76;
                const real_t jac_blending_0_0 = tmp_qloop_36*tmp_qloop_38;
                const real_t jac_blending_0_1 = tmp_qloop_18*tmp_qloop_44;
                const real_t jac_blending_0_2 = tmp_qloop_18*tmp_qloop_50;
                const real_t jac_blending_1_0 = tmp_qloop_25*tmp_qloop_52;
                const real_t jac_blending_1_1 = tmp_qloop_43*tmp_qloop_55;
                const real_t tmp_qloop_63 = jac_blending_0_2*jac_blending_1_1;
                const real_t jac_blending_1_2 = tmp_qloop_25*tmp_qloop_50;
                const real_t tmp_qloop_60 = jac_blending_0_1*jac_blending_1_2;
                const real_t jac_blending_2_0 = tmp_qloop_22*tmp_qloop_52;
                const real_t jac_blending_2_1 = tmp_qloop_22*tmp_qloop_44;
                const real_t tmp_qloop_61 = jac_blending_1_2*jac_blending_2_1;
                const real_t jac_blending_2_2 = tmp_qloop_43*tmp_qloop_58;
                const real_t tmp_qloop_59 = jac_blending_1_1*jac_blending_2_2;
                const real_t tmp_qloop_62 = jac_blending_0_1*jac_blending_2_2;
                const real_t tmp_qloop_64 = jac_blending_0_0*tmp_qloop_59 - jac_blending_0_0*tmp_qloop_61 + jac_blending_0_2*jac_blending_1_0*jac_blending_2_1 - jac_blending_1_0*tmp_qloop_62 + jac_blending_2_0*tmp_qloop_60 - jac_blending_2_0*tmp_qloop_63;
                const real_t tmp_qloop_65 = 1.0 / (tmp_qloop_64);
                const real_t abs_det_jac_blending = tmp_qloop_64;
                const real_t tmp_qloop_103 = abs_det_jac_blending*(k_dof_0*_data_phi_0_0_BLUE_DOWN[4*q] + k_dof_1*_data_phi_0_0_BLUE_DOWN[4*q + 1] + k_dof_2*_data_phi_0_0_BLUE_DOWN[4*q + 2] + k_dof_3*_data_phi_0_0_BLUE_DOWN[4*q + 3])*_data_q_w[q];
                const real_t jac_blending_inv_0_0 = tmp_qloop_65*(tmp_qloop_59 - tmp_qloop_61);
                const real_t jac_blending_inv_0_1 = tmp_qloop_65*(jac_blending_0_2*jac_blending_2_1 - tmp_qloop_62);
                const real_t jac_blending_inv_0_2 = tmp_qloop_65*(tmp_qloop_60 - tmp_qloop_63);
                const real_t jac_blending_inv_1_0 = tmp_qloop_65*(-jac_blending_1_0*jac_blending_2_2 + jac_blending_1_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_1 = tmp_qloop_65*(jac_blending_0_0*jac_blending_2_2 - jac_blending_0_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_2 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_1_2 + jac_blending_0_2*jac_blending_1_0);
                const real_t jac_blending_inv_2_0 = tmp_qloop_65*(jac_blending_1_0*jac_blending_2_1 - jac_blending_1_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_1 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_2_1 + jac_blending_0_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_2 = tmp_qloop_65*(jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0);
                const real_t hessian_blending_0_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_68 - tmp_qloop_28*tmp_qloop_69 + tmp_qloop_31*(tmp_qloop_33 - tmp_qloop_68) + tmp_qloop_35*tmp_qloop_69)*1.0 - tmp_qloop_18*tmp_qloop_67;
                const real_t hessian_blending_1_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_40 + tmp_qloop_25*tmp_qloop_71 + tmp_qloop_70)*1.0 - tmp_qloop_25*tmp_qloop_67;
                const real_t hessian_blending_2_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_72 + tmp_qloop_22*tmp_qloop_71 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_67;
                const real_t hessian_blending_0_0_1 = tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_18*tmp_qloop_78;
                const real_t hessian_blending_1_0_1 = -tmp_qloop_29*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_80*tmp_qloop_81;
                const real_t hessian_blending_2_0_1 = tmp_qloop_81*tmp_qloop_83 + tmp_qloop_84;
                const real_t hessian_blending_0_0_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_77*tmp_qloop_85;
                const real_t hessian_blending_1_0_2 = tmp_qloop_80*tmp_qloop_86 + tmp_qloop_84;
                const real_t hessian_blending_2_0_2 = -tmp_qloop_30*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_83*tmp_qloop_86;
                const real_t hessian_blending_0_1_0 = -tmp_qloop_19*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_87*tmp_qloop_88;
                const real_t hessian_blending_1_1_0 = tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_18*tmp_qloop_91;
                const real_t hessian_blending_2_1_0 = tmp_qloop_88*tmp_qloop_92 - tmp_qloop_93;
                const real_t hessian_blending_0_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_68 + tmp_qloop_54*tmp_qloop_69 + tmp_qloop_94)*1.0 - tmp_qloop_18*tmp_qloop_95;
                const real_t hessian_blending_1_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_40 + tmp_qloop_31*(-tmp_qloop_40 + tmp_qloop_53) + tmp_qloop_47*tmp_qloop_79 + tmp_qloop_54*tmp_qloop_79)*1.0 - tmp_qloop_25*tmp_qloop_95;
                const real_t hessian_blending_2_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_72 + tmp_qloop_54*tmp_qloop_82 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_95;
                const real_t hessian_blending_0_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_87*1.0 - tmp_qloop_93;
                const real_t hessian_blending_1_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_22*tmp_qloop_91;
                const real_t hessian_blending_2_1_2 = -tmp_qloop_30*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_86*tmp_qloop_92;
                const real_t hessian_blending_0_2_0 = -tmp_qloop_19*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_88*tmp_qloop_96;
                const real_t hessian_blending_1_2_0 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_98*1.0;
                const real_t hessian_blending_2_2_0 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*1.0 - tmp_qloop_85*tmp_qloop_97;
                const real_t hessian_blending_0_2_1 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_96*1.0;
                const real_t hessian_blending_1_2_1 = -tmp_qloop_29*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_81*tmp_qloop_98;
                const real_t hessian_blending_2_2_1 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*1.0 - tmp_qloop_22*tmp_qloop_99;
                const real_t hessian_blending_0_2_2 = -tmp_qloop_102*tmp_qloop_18 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_68 + tmp_qloop_57*tmp_qloop_69 + tmp_qloop_94)*1.0;
                const real_t hessian_blending_1_2_2 = -tmp_qloop_102*tmp_qloop_25 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_40 + tmp_qloop_57*tmp_qloop_79 + tmp_qloop_70)*1.0;
                const real_t hessian_blending_2_2_2 = -tmp_qloop_102*tmp_qloop_22 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_72 + tmp_qloop_31*(tmp_qloop_46 - tmp_qloop_72) + tmp_qloop_48*2.0 + tmp_qloop_57*tmp_qloop_82)*1.0;
                const real_t q_tmp_0_0 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_BLUE_DOWN[10*q + 9];
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
          const real_t _data_phi_0_0_GREEN_UP [] = {0.25, 0.25, 0.25, 0.25, 0.16666666666666674, 0.16666666666666666, 0.16666666666666666, 0.5, 0.16666666666666671, 0.16666666666666666, 0.5, 0.16666666666666666, 0.16666666666666671, 0.5, 0.16666666666666666, 0.16666666666666666, 0.50000000000000011, 0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
      
          const real_t _data_tabulated_and_untitled_0_0_GREEN_UP [] = {((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777804)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.02777777777777779)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.08333333333333337)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.25)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.25)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777794)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333356)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.25)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.25000000000000011)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_UP*0.027777777777777776))};
      
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
                const real_t tmp_qloop_18 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q] + (-p_affine_0_0 + p_affine_3_0)*_data_q_p_2[q];
                const real_t tmp_qloop_19 = (tmp_qloop_18*tmp_qloop_18);
                const real_t tmp_qloop_22 = p_affine_0_2 + (-p_affine_0_2 + p_affine_1_2)*_data_q_p_0[q] + (-p_affine_0_2 + p_affine_2_2)*_data_q_p_1[q] + (-p_affine_0_2 + p_affine_3_2)*_data_q_p_2[q];
                const real_t tmp_qloop_23 = -tmp_qloop_12 - tmp_qloop_22;
                const real_t tmp_qloop_24 = -tmp_qloop_1 - tmp_qloop_18;
                const real_t tmp_qloop_25 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q] + (-p_affine_0_1 + p_affine_3_1)*_data_q_p_2[q];
                const real_t tmp_qloop_26 = -tmp_qloop_25 - tmp_qloop_8;
                const real_t tmp_qloop_27 = tmp_qloop_21*(tmp_qloop_10*tmp_qloop_23*tmp_qloop_9 + tmp_qloop_13*tmp_qloop_24*tmp_qloop_6 - tmp_qloop_14*tmp_qloop_24 - tmp_qloop_15*tmp_qloop_26 + tmp_qloop_2*tmp_qloop_26*tmp_qloop_3 - tmp_qloop_23*tmp_qloop_7);
                const real_t tmp_qloop_28 = tmp_qloop_20 - tmp_qloop_27;
                const real_t tmp_qloop_29 = (tmp_qloop_25*tmp_qloop_25);
                const real_t tmp_qloop_30 = (tmp_qloop_22*tmp_qloop_22);
                const real_t tmp_qloop_31 = tmp_qloop_19 + tmp_qloop_29 + tmp_qloop_30;
                const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_33;
                const real_t tmp_qloop_35 = tmp_qloop_28 + tmp_qloop_34;
                const real_t tmp_qloop_36 = tmp_qloop_17*(-tmp_qloop_19*tmp_qloop_28 + tmp_qloop_31*tmp_qloop_35);
                const real_t tmp_qloop_37 = pow(tmp_qloop_31, -1.5000000000000000);
                const real_t tmp_qloop_38 = tmp_qloop_37*1.0;
                const real_t tmp_qloop_41 = tmp_qloop_31*tmp_qloop_40;
                const real_t tmp_qloop_42 = -tmp_qloop_25*tmp_qloop_28 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_17*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_42*tmp_qloop_43;
                const real_t tmp_qloop_47 = -tmp_qloop_28;
                const real_t tmp_qloop_48 = tmp_qloop_22*tmp_qloop_47;
                const real_t tmp_qloop_49 = tmp_qloop_31*tmp_qloop_46 + tmp_qloop_48;
                const real_t tmp_qloop_50 = tmp_qloop_43*tmp_qloop_49;
                const real_t tmp_qloop_51 = tmp_qloop_18*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_33;
                const real_t tmp_qloop_52 = tmp_qloop_43*tmp_qloop_51;
                const real_t tmp_qloop_54 = tmp_qloop_25*tmp_qloop_53 + tmp_qloop_28;
                const real_t tmp_qloop_55 = tmp_qloop_29*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_54;
                const real_t tmp_qloop_56 = tmp_qloop_22*tmp_qloop_46;
                const real_t tmp_qloop_57 = tmp_qloop_28 + tmp_qloop_56;
                const real_t tmp_qloop_58 = tmp_qloop_30*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_57;
                const real_t tmp_qloop_66 = pow(tmp_qloop_31, -2.5000000000000000)*3.0;
                const real_t tmp_qloop_67 = tmp_qloop_36*tmp_qloop_66;
                const real_t tmp_qloop_69 = tmp_qloop_18*2.0;
                const real_t tmp_qloop_70 = -tmp_qloop_41;
                const real_t tmp_qloop_71 = tmp_qloop_35*2.0;
                const real_t tmp_qloop_73 = -tmp_qloop_31*tmp_qloop_72;
                const real_t tmp_qloop_74 = -tmp_qloop_20 + tmp_qloop_27;
                const real_t tmp_qloop_75 = tmp_qloop_18*tmp_qloop_68 + tmp_qloop_34*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_76 = tmp_qloop_17*tmp_qloop_66;
                const real_t tmp_qloop_77 = tmp_qloop_51*tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_25*tmp_qloop_77;
                const real_t tmp_qloop_79 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_80 = tmp_qloop_18*tmp_qloop_40 + tmp_qloop_33*tmp_qloop_79;
                const real_t tmp_qloop_81 = tmp_qloop_25*tmp_qloop_43;
                const real_t tmp_qloop_82 = tmp_qloop_22*2.0;
                const real_t tmp_qloop_83 = tmp_qloop_18*tmp_qloop_72 + tmp_qloop_33*tmp_qloop_82;
                const real_t tmp_qloop_84 = -tmp_qloop_22*tmp_qloop_78;
                const real_t tmp_qloop_85 = tmp_qloop_18*tmp_qloop_22;
                const real_t tmp_qloop_86 = tmp_qloop_22*tmp_qloop_43;
                const real_t tmp_qloop_87 = tmp_qloop_21*tmp_qloop_25*tmp_qloop_32 - tmp_qloop_40*tmp_qloop_69;
                const real_t tmp_qloop_88 = tmp_qloop_18*tmp_qloop_43;
                const real_t tmp_qloop_89 = tmp_qloop_42*tmp_qloop_76;
                const real_t tmp_qloop_90 = -tmp_qloop_25*tmp_qloop_40 - tmp_qloop_28;
                const real_t tmp_qloop_91 = tmp_qloop_25*tmp_qloop_89;
                const real_t tmp_qloop_92 = tmp_qloop_25*tmp_qloop_72 - tmp_qloop_40*tmp_qloop_82;
                const real_t tmp_qloop_93 = tmp_qloop_85*tmp_qloop_89;
                const real_t tmp_qloop_94 = -tmp_qloop_31*tmp_qloop_68;
                const real_t tmp_qloop_95 = tmp_qloop_55*tmp_qloop_76;
                const real_t tmp_qloop_96 = tmp_qloop_22*tmp_qloop_68 + tmp_qloop_46*tmp_qloop_69;
                const real_t tmp_qloop_97 = tmp_qloop_49*tmp_qloop_76;
                const real_t tmp_qloop_98 = tmp_qloop_22*tmp_qloop_40 + tmp_qloop_46*tmp_qloop_79;
                const real_t tmp_qloop_99 = tmp_qloop_25*tmp_qloop_97;
                const real_t tmp_qloop_100 = tmp_qloop_18*tmp_qloop_99;
                const real_t tmp_qloop_101 = tmp_qloop_22*tmp_qloop_72 + tmp_qloop_56*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_102 = tmp_qloop_58*tmp_qloop_76;
                const real_t jac_blending_0_0 = tmp_qloop_36*tmp_qloop_38;
                const real_t jac_blending_0_1 = tmp_qloop_18*tmp_qloop_44;
                const real_t jac_blending_0_2 = tmp_qloop_18*tmp_qloop_50;
                const real_t jac_blending_1_0 = tmp_qloop_25*tmp_qloop_52;
                const real_t jac_blending_1_1 = tmp_qloop_43*tmp_qloop_55;
                const real_t tmp_qloop_63 = jac_blending_0_2*jac_blending_1_1;
                const real_t jac_blending_1_2 = tmp_qloop_25*tmp_qloop_50;
                const real_t tmp_qloop_60 = jac_blending_0_1*jac_blending_1_2;
                const real_t jac_blending_2_0 = tmp_qloop_22*tmp_qloop_52;
                const real_t jac_blending_2_1 = tmp_qloop_22*tmp_qloop_44;
                const real_t tmp_qloop_61 = jac_blending_1_2*jac_blending_2_1;
                const real_t jac_blending_2_2 = tmp_qloop_43*tmp_qloop_58;
                const real_t tmp_qloop_59 = jac_blending_1_1*jac_blending_2_2;
                const real_t tmp_qloop_62 = jac_blending_0_1*jac_blending_2_2;
                const real_t tmp_qloop_64 = jac_blending_0_0*tmp_qloop_59 - jac_blending_0_0*tmp_qloop_61 + jac_blending_0_2*jac_blending_1_0*jac_blending_2_1 - jac_blending_1_0*tmp_qloop_62 + jac_blending_2_0*tmp_qloop_60 - jac_blending_2_0*tmp_qloop_63;
                const real_t tmp_qloop_65 = 1.0 / (tmp_qloop_64);
                const real_t abs_det_jac_blending = tmp_qloop_64;
                const real_t tmp_qloop_103 = abs_det_jac_blending*(k_dof_0*_data_phi_0_0_GREEN_UP[4*q] + k_dof_1*_data_phi_0_0_GREEN_UP[4*q + 1] + k_dof_2*_data_phi_0_0_GREEN_UP[4*q + 2] + k_dof_3*_data_phi_0_0_GREEN_UP[4*q + 3])*_data_q_w[q];
                const real_t jac_blending_inv_0_0 = tmp_qloop_65*(tmp_qloop_59 - tmp_qloop_61);
                const real_t jac_blending_inv_0_1 = tmp_qloop_65*(jac_blending_0_2*jac_blending_2_1 - tmp_qloop_62);
                const real_t jac_blending_inv_0_2 = tmp_qloop_65*(tmp_qloop_60 - tmp_qloop_63);
                const real_t jac_blending_inv_1_0 = tmp_qloop_65*(-jac_blending_1_0*jac_blending_2_2 + jac_blending_1_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_1 = tmp_qloop_65*(jac_blending_0_0*jac_blending_2_2 - jac_blending_0_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_2 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_1_2 + jac_blending_0_2*jac_blending_1_0);
                const real_t jac_blending_inv_2_0 = tmp_qloop_65*(jac_blending_1_0*jac_blending_2_1 - jac_blending_1_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_1 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_2_1 + jac_blending_0_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_2 = tmp_qloop_65*(jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0);
                const real_t hessian_blending_0_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_68 - tmp_qloop_28*tmp_qloop_69 + tmp_qloop_31*(tmp_qloop_33 - tmp_qloop_68) + tmp_qloop_35*tmp_qloop_69)*1.0 - tmp_qloop_18*tmp_qloop_67;
                const real_t hessian_blending_1_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_40 + tmp_qloop_25*tmp_qloop_71 + tmp_qloop_70)*1.0 - tmp_qloop_25*tmp_qloop_67;
                const real_t hessian_blending_2_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_72 + tmp_qloop_22*tmp_qloop_71 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_67;
                const real_t hessian_blending_0_0_1 = tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_18*tmp_qloop_78;
                const real_t hessian_blending_1_0_1 = -tmp_qloop_29*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_80*tmp_qloop_81;
                const real_t hessian_blending_2_0_1 = tmp_qloop_81*tmp_qloop_83 + tmp_qloop_84;
                const real_t hessian_blending_0_0_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_77*tmp_qloop_85;
                const real_t hessian_blending_1_0_2 = tmp_qloop_80*tmp_qloop_86 + tmp_qloop_84;
                const real_t hessian_blending_2_0_2 = -tmp_qloop_30*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_83*tmp_qloop_86;
                const real_t hessian_blending_0_1_0 = -tmp_qloop_19*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_87*tmp_qloop_88;
                const real_t hessian_blending_1_1_0 = tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_18*tmp_qloop_91;
                const real_t hessian_blending_2_1_0 = tmp_qloop_88*tmp_qloop_92 - tmp_qloop_93;
                const real_t hessian_blending_0_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_68 + tmp_qloop_54*tmp_qloop_69 + tmp_qloop_94)*1.0 - tmp_qloop_18*tmp_qloop_95;
                const real_t hessian_blending_1_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_40 + tmp_qloop_31*(-tmp_qloop_40 + tmp_qloop_53) + tmp_qloop_47*tmp_qloop_79 + tmp_qloop_54*tmp_qloop_79)*1.0 - tmp_qloop_25*tmp_qloop_95;
                const real_t hessian_blending_2_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_72 + tmp_qloop_54*tmp_qloop_82 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_95;
                const real_t hessian_blending_0_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_87*1.0 - tmp_qloop_93;
                const real_t hessian_blending_1_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_22*tmp_qloop_91;
                const real_t hessian_blending_2_1_2 = -tmp_qloop_30*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_86*tmp_qloop_92;
                const real_t hessian_blending_0_2_0 = -tmp_qloop_19*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_88*tmp_qloop_96;
                const real_t hessian_blending_1_2_0 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_98*1.0;
                const real_t hessian_blending_2_2_0 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*1.0 - tmp_qloop_85*tmp_qloop_97;
                const real_t hessian_blending_0_2_1 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_96*1.0;
                const real_t hessian_blending_1_2_1 = -tmp_qloop_29*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_81*tmp_qloop_98;
                const real_t hessian_blending_2_2_1 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*1.0 - tmp_qloop_22*tmp_qloop_99;
                const real_t hessian_blending_0_2_2 = -tmp_qloop_102*tmp_qloop_18 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_68 + tmp_qloop_57*tmp_qloop_69 + tmp_qloop_94)*1.0;
                const real_t hessian_blending_1_2_2 = -tmp_qloop_102*tmp_qloop_25 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_40 + tmp_qloop_57*tmp_qloop_79 + tmp_qloop_70)*1.0;
                const real_t hessian_blending_2_2_2 = -tmp_qloop_102*tmp_qloop_22 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_72 + tmp_qloop_31*(tmp_qloop_46 - tmp_qloop_72) + tmp_qloop_48*2.0 + tmp_qloop_57*tmp_qloop_82)*1.0;
                const real_t q_tmp_0_0 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_UP[10*q + 9];
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
          const real_t _data_phi_0_0_GREEN_DOWN [] = {0.25, 0.25, 0.25, 0.25, 0.16666666666666674, 0.16666666666666666, 0.16666666666666666, 0.5, 0.16666666666666671, 0.16666666666666666, 0.5, 0.16666666666666666, 0.16666666666666671, 0.5, 0.16666666666666666, 0.16666666666666666, 0.50000000000000011, 0.16666666666666666, 0.16666666666666666, 0.16666666666666666};
      
          const real_t _data_tabulated_and_untitled_0_0_GREEN_DOWN [] = {((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.0625)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777804)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.02777777777777779)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.08333333333333337)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.25)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.25)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777794)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333356)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777783)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.25)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333329)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.25000000000000011)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.083333333333333343)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776)), ((real_t)(abs_det_jac_affine_GREEN_DOWN*0.027777777777777776))};
      
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
                const real_t tmp_qloop_18 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q] + (-p_affine_0_0 + p_affine_3_0)*_data_q_p_2[q];
                const real_t tmp_qloop_19 = (tmp_qloop_18*tmp_qloop_18);
                const real_t tmp_qloop_22 = p_affine_0_2 + (-p_affine_0_2 + p_affine_1_2)*_data_q_p_0[q] + (-p_affine_0_2 + p_affine_2_2)*_data_q_p_1[q] + (-p_affine_0_2 + p_affine_3_2)*_data_q_p_2[q];
                const real_t tmp_qloop_23 = -tmp_qloop_12 - tmp_qloop_22;
                const real_t tmp_qloop_24 = -tmp_qloop_1 - tmp_qloop_18;
                const real_t tmp_qloop_25 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q] + (-p_affine_0_1 + p_affine_3_1)*_data_q_p_2[q];
                const real_t tmp_qloop_26 = -tmp_qloop_25 - tmp_qloop_8;
                const real_t tmp_qloop_27 = tmp_qloop_21*(tmp_qloop_10*tmp_qloop_23*tmp_qloop_9 + tmp_qloop_13*tmp_qloop_24*tmp_qloop_6 - tmp_qloop_14*tmp_qloop_24 - tmp_qloop_15*tmp_qloop_26 + tmp_qloop_2*tmp_qloop_26*tmp_qloop_3 - tmp_qloop_23*tmp_qloop_7);
                const real_t tmp_qloop_28 = tmp_qloop_20 - tmp_qloop_27;
                const real_t tmp_qloop_29 = (tmp_qloop_25*tmp_qloop_25);
                const real_t tmp_qloop_30 = (tmp_qloop_22*tmp_qloop_22);
                const real_t tmp_qloop_31 = tmp_qloop_19 + tmp_qloop_29 + tmp_qloop_30;
                const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_33;
                const real_t tmp_qloop_35 = tmp_qloop_28 + tmp_qloop_34;
                const real_t tmp_qloop_36 = tmp_qloop_17*(-tmp_qloop_19*tmp_qloop_28 + tmp_qloop_31*tmp_qloop_35);
                const real_t tmp_qloop_37 = pow(tmp_qloop_31, -1.5000000000000000);
                const real_t tmp_qloop_38 = tmp_qloop_37*1.0;
                const real_t tmp_qloop_41 = tmp_qloop_31*tmp_qloop_40;
                const real_t tmp_qloop_42 = -tmp_qloop_25*tmp_qloop_28 - tmp_qloop_41;
                const real_t tmp_qloop_43 = tmp_qloop_17*tmp_qloop_38;
                const real_t tmp_qloop_44 = tmp_qloop_42*tmp_qloop_43;
                const real_t tmp_qloop_47 = -tmp_qloop_28;
                const real_t tmp_qloop_48 = tmp_qloop_22*tmp_qloop_47;
                const real_t tmp_qloop_49 = tmp_qloop_31*tmp_qloop_46 + tmp_qloop_48;
                const real_t tmp_qloop_50 = tmp_qloop_43*tmp_qloop_49;
                const real_t tmp_qloop_51 = tmp_qloop_18*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_33;
                const real_t tmp_qloop_52 = tmp_qloop_43*tmp_qloop_51;
                const real_t tmp_qloop_54 = tmp_qloop_25*tmp_qloop_53 + tmp_qloop_28;
                const real_t tmp_qloop_55 = tmp_qloop_29*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_54;
                const real_t tmp_qloop_56 = tmp_qloop_22*tmp_qloop_46;
                const real_t tmp_qloop_57 = tmp_qloop_28 + tmp_qloop_56;
                const real_t tmp_qloop_58 = tmp_qloop_30*tmp_qloop_47 + tmp_qloop_31*tmp_qloop_57;
                const real_t tmp_qloop_66 = pow(tmp_qloop_31, -2.5000000000000000)*3.0;
                const real_t tmp_qloop_67 = tmp_qloop_36*tmp_qloop_66;
                const real_t tmp_qloop_69 = tmp_qloop_18*2.0;
                const real_t tmp_qloop_70 = -tmp_qloop_41;
                const real_t tmp_qloop_71 = tmp_qloop_35*2.0;
                const real_t tmp_qloop_73 = -tmp_qloop_31*tmp_qloop_72;
                const real_t tmp_qloop_74 = -tmp_qloop_20 + tmp_qloop_27;
                const real_t tmp_qloop_75 = tmp_qloop_18*tmp_qloop_68 + tmp_qloop_34*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_76 = tmp_qloop_17*tmp_qloop_66;
                const real_t tmp_qloop_77 = tmp_qloop_51*tmp_qloop_76;
                const real_t tmp_qloop_78 = tmp_qloop_25*tmp_qloop_77;
                const real_t tmp_qloop_79 = tmp_qloop_25*2.0;
                const real_t tmp_qloop_80 = tmp_qloop_18*tmp_qloop_40 + tmp_qloop_33*tmp_qloop_79;
                const real_t tmp_qloop_81 = tmp_qloop_25*tmp_qloop_43;
                const real_t tmp_qloop_82 = tmp_qloop_22*2.0;
                const real_t tmp_qloop_83 = tmp_qloop_18*tmp_qloop_72 + tmp_qloop_33*tmp_qloop_82;
                const real_t tmp_qloop_84 = -tmp_qloop_22*tmp_qloop_78;
                const real_t tmp_qloop_85 = tmp_qloop_18*tmp_qloop_22;
                const real_t tmp_qloop_86 = tmp_qloop_22*tmp_qloop_43;
                const real_t tmp_qloop_87 = tmp_qloop_21*tmp_qloop_25*tmp_qloop_32 - tmp_qloop_40*tmp_qloop_69;
                const real_t tmp_qloop_88 = tmp_qloop_18*tmp_qloop_43;
                const real_t tmp_qloop_89 = tmp_qloop_42*tmp_qloop_76;
                const real_t tmp_qloop_90 = -tmp_qloop_25*tmp_qloop_40 - tmp_qloop_28;
                const real_t tmp_qloop_91 = tmp_qloop_25*tmp_qloop_89;
                const real_t tmp_qloop_92 = tmp_qloop_25*tmp_qloop_72 - tmp_qloop_40*tmp_qloop_82;
                const real_t tmp_qloop_93 = tmp_qloop_85*tmp_qloop_89;
                const real_t tmp_qloop_94 = -tmp_qloop_31*tmp_qloop_68;
                const real_t tmp_qloop_95 = tmp_qloop_55*tmp_qloop_76;
                const real_t tmp_qloop_96 = tmp_qloop_22*tmp_qloop_68 + tmp_qloop_46*tmp_qloop_69;
                const real_t tmp_qloop_97 = tmp_qloop_49*tmp_qloop_76;
                const real_t tmp_qloop_98 = tmp_qloop_22*tmp_qloop_40 + tmp_qloop_46*tmp_qloop_79;
                const real_t tmp_qloop_99 = tmp_qloop_25*tmp_qloop_97;
                const real_t tmp_qloop_100 = tmp_qloop_18*tmp_qloop_99;
                const real_t tmp_qloop_101 = tmp_qloop_22*tmp_qloop_72 + tmp_qloop_56*2.0 + tmp_qloop_74;
                const real_t tmp_qloop_102 = tmp_qloop_58*tmp_qloop_76;
                const real_t jac_blending_0_0 = tmp_qloop_36*tmp_qloop_38;
                const real_t jac_blending_0_1 = tmp_qloop_18*tmp_qloop_44;
                const real_t jac_blending_0_2 = tmp_qloop_18*tmp_qloop_50;
                const real_t jac_blending_1_0 = tmp_qloop_25*tmp_qloop_52;
                const real_t jac_blending_1_1 = tmp_qloop_43*tmp_qloop_55;
                const real_t tmp_qloop_63 = jac_blending_0_2*jac_blending_1_1;
                const real_t jac_blending_1_2 = tmp_qloop_25*tmp_qloop_50;
                const real_t tmp_qloop_60 = jac_blending_0_1*jac_blending_1_2;
                const real_t jac_blending_2_0 = tmp_qloop_22*tmp_qloop_52;
                const real_t jac_blending_2_1 = tmp_qloop_22*tmp_qloop_44;
                const real_t tmp_qloop_61 = jac_blending_1_2*jac_blending_2_1;
                const real_t jac_blending_2_2 = tmp_qloop_43*tmp_qloop_58;
                const real_t tmp_qloop_59 = jac_blending_1_1*jac_blending_2_2;
                const real_t tmp_qloop_62 = jac_blending_0_1*jac_blending_2_2;
                const real_t tmp_qloop_64 = jac_blending_0_0*tmp_qloop_59 - jac_blending_0_0*tmp_qloop_61 + jac_blending_0_2*jac_blending_1_0*jac_blending_2_1 - jac_blending_1_0*tmp_qloop_62 + jac_blending_2_0*tmp_qloop_60 - jac_blending_2_0*tmp_qloop_63;
                const real_t tmp_qloop_65 = 1.0 / (tmp_qloop_64);
                const real_t abs_det_jac_blending = tmp_qloop_64;
                const real_t tmp_qloop_103 = abs_det_jac_blending*(k_dof_0*_data_phi_0_0_GREEN_DOWN[4*q] + k_dof_1*_data_phi_0_0_GREEN_DOWN[4*q + 1] + k_dof_2*_data_phi_0_0_GREEN_DOWN[4*q + 2] + k_dof_3*_data_phi_0_0_GREEN_DOWN[4*q + 3])*_data_q_w[q];
                const real_t jac_blending_inv_0_0 = tmp_qloop_65*(tmp_qloop_59 - tmp_qloop_61);
                const real_t jac_blending_inv_0_1 = tmp_qloop_65*(jac_blending_0_2*jac_blending_2_1 - tmp_qloop_62);
                const real_t jac_blending_inv_0_2 = tmp_qloop_65*(tmp_qloop_60 - tmp_qloop_63);
                const real_t jac_blending_inv_1_0 = tmp_qloop_65*(-jac_blending_1_0*jac_blending_2_2 + jac_blending_1_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_1 = tmp_qloop_65*(jac_blending_0_0*jac_blending_2_2 - jac_blending_0_2*jac_blending_2_0);
                const real_t jac_blending_inv_1_2 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_1_2 + jac_blending_0_2*jac_blending_1_0);
                const real_t jac_blending_inv_2_0 = tmp_qloop_65*(jac_blending_1_0*jac_blending_2_1 - jac_blending_1_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_1 = tmp_qloop_65*(-jac_blending_0_0*jac_blending_2_1 + jac_blending_0_1*jac_blending_2_0);
                const real_t jac_blending_inv_2_2 = tmp_qloop_65*(jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0);
                const real_t hessian_blending_0_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_68 - tmp_qloop_28*tmp_qloop_69 + tmp_qloop_31*(tmp_qloop_33 - tmp_qloop_68) + tmp_qloop_35*tmp_qloop_69)*1.0 - tmp_qloop_18*tmp_qloop_67;
                const real_t hessian_blending_1_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_40 + tmp_qloop_25*tmp_qloop_71 + tmp_qloop_70)*1.0 - tmp_qloop_25*tmp_qloop_67;
                const real_t hessian_blending_2_0_0 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_19*tmp_qloop_72 + tmp_qloop_22*tmp_qloop_71 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_67;
                const real_t hessian_blending_0_0_1 = tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_18*tmp_qloop_78;
                const real_t hessian_blending_1_0_1 = -tmp_qloop_29*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_80*tmp_qloop_81;
                const real_t hessian_blending_2_0_1 = tmp_qloop_81*tmp_qloop_83 + tmp_qloop_84;
                const real_t hessian_blending_0_0_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_75*1.0 - tmp_qloop_77*tmp_qloop_85;
                const real_t hessian_blending_1_0_2 = tmp_qloop_80*tmp_qloop_86 + tmp_qloop_84;
                const real_t hessian_blending_2_0_2 = -tmp_qloop_30*tmp_qloop_77 + tmp_qloop_52 + tmp_qloop_83*tmp_qloop_86;
                const real_t hessian_blending_0_1_0 = -tmp_qloop_19*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_87*tmp_qloop_88;
                const real_t hessian_blending_1_1_0 = tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_18*tmp_qloop_91;
                const real_t hessian_blending_2_1_0 = tmp_qloop_88*tmp_qloop_92 - tmp_qloop_93;
                const real_t hessian_blending_0_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_68 + tmp_qloop_54*tmp_qloop_69 + tmp_qloop_94)*1.0 - tmp_qloop_18*tmp_qloop_95;
                const real_t hessian_blending_1_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_40 + tmp_qloop_31*(-tmp_qloop_40 + tmp_qloop_53) + tmp_qloop_47*tmp_qloop_79 + tmp_qloop_54*tmp_qloop_79)*1.0 - tmp_qloop_25*tmp_qloop_95;
                const real_t hessian_blending_2_1_1 = tmp_qloop_17*tmp_qloop_37*(tmp_qloop_29*tmp_qloop_72 + tmp_qloop_54*tmp_qloop_82 + tmp_qloop_73)*1.0 - tmp_qloop_22*tmp_qloop_95;
                const real_t hessian_blending_0_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_87*1.0 - tmp_qloop_93;
                const real_t hessian_blending_1_1_2 = tmp_qloop_17*tmp_qloop_22*tmp_qloop_37*tmp_qloop_90*1.0 - tmp_qloop_22*tmp_qloop_91;
                const real_t hessian_blending_2_1_2 = -tmp_qloop_30*tmp_qloop_89 + tmp_qloop_44 + tmp_qloop_86*tmp_qloop_92;
                const real_t hessian_blending_0_2_0 = -tmp_qloop_19*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_88*tmp_qloop_96;
                const real_t hessian_blending_1_2_0 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*tmp_qloop_98*1.0;
                const real_t hessian_blending_2_2_0 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_18*tmp_qloop_37*1.0 - tmp_qloop_85*tmp_qloop_97;
                const real_t hessian_blending_0_2_1 = -tmp_qloop_100 + tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*tmp_qloop_96*1.0;
                const real_t hessian_blending_1_2_1 = -tmp_qloop_29*tmp_qloop_97 + tmp_qloop_50 + tmp_qloop_81*tmp_qloop_98;
                const real_t hessian_blending_2_2_1 = tmp_qloop_101*tmp_qloop_17*tmp_qloop_25*tmp_qloop_37*1.0 - tmp_qloop_22*tmp_qloop_99;
                const real_t hessian_blending_0_2_2 = -tmp_qloop_102*tmp_qloop_18 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_68 + tmp_qloop_57*tmp_qloop_69 + tmp_qloop_94)*1.0;
                const real_t hessian_blending_1_2_2 = -tmp_qloop_102*tmp_qloop_25 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_40 + tmp_qloop_57*tmp_qloop_79 + tmp_qloop_70)*1.0;
                const real_t hessian_blending_2_2_2 = -tmp_qloop_102*tmp_qloop_22 + tmp_qloop_17*tmp_qloop_37*(tmp_qloop_30*tmp_qloop_72 + tmp_qloop_31*(tmp_qloop_46 - tmp_qloop_72) + tmp_qloop_48*2.0 + tmp_qloop_57*tmp_qloop_82)*1.0;
                const real_t q_tmp_0_0 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q];
                const real_t q_tmp_0_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q + 1];
                const real_t q_tmp_0_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q + 2];
                const real_t q_tmp_0_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q + 3];
                const real_t q_tmp_1_1 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q + 4];
                const real_t q_tmp_1_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q + 5];
                const real_t q_tmp_1_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q + 6];
                const real_t q_tmp_2_2 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q + 7];
                const real_t q_tmp_2_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q + 8];
                const real_t q_tmp_3_3 = tmp_qloop_103*_data_tabulated_and_untitled_0_0_GREEN_DOWN[10*q + 9];
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
