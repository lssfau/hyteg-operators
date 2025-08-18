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





























#include "../P2ElementwiseMassBoundary.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseMassBoundary::computeInverseDiagonalOperatorValues_P2ElementwiseMassBoundary_facet_id_3_macro_3D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_coords_jac_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const real_t jac_affine_0_0_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_1_0_WHITE_UP;
       const real_t jac_affine_0_1_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_2_0_WHITE_UP;
       const real_t jac_affine_1_0_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_1_1_WHITE_UP;
       const real_t jac_affine_1_1_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_2_1_WHITE_UP;
       const real_t jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const real_t jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const real_t tmp_kernel_op_0 = 0.1111111111111111;
       const real_t tmp_kernel_op_1 = 0.1111111111111111;
       const real_t tmp_kernel_op_2 = 0.1111111111111111;
       const int64_t tmp_kernel_op_3 = 0;
       const int64_t tmp_kernel_op_4 = 0;
       const int64_t tmp_kernel_op_5 = tmp_kernel_op_3 + tmp_kernel_op_4;
       const int64_t tmp_kernel_op_6 = 0;
       const real_t tmp_kernel_op_7 = 0.25 + 0.5*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_8 = pow(abs(((jac_affine_0_0_WHITE_UP*jac_affine_0_0_WHITE_UP) + (jac_affine_1_0_WHITE_UP*jac_affine_1_0_WHITE_UP) + (jac_affine_2_0_WHITE_UP*jac_affine_2_0_WHITE_UP))*((jac_affine_0_1_WHITE_UP*jac_affine_0_1_WHITE_UP) + (jac_affine_1_1_WHITE_UP*jac_affine_1_1_WHITE_UP) + (jac_affine_2_1_WHITE_UP*jac_affine_2_1_WHITE_UP)) - ((jac_affine_0_0_WHITE_UP*jac_affine_0_1_WHITE_UP + jac_affine_1_0_WHITE_UP*jac_affine_1_1_WHITE_UP + jac_affine_2_0_WHITE_UP*jac_affine_2_1_WHITE_UP)*(jac_affine_0_0_WHITE_UP*jac_affine_0_1_WHITE_UP + jac_affine_1_0_WHITE_UP*jac_affine_1_1_WHITE_UP + jac_affine_2_0_WHITE_UP*jac_affine_2_1_WHITE_UP))), 0.5);
       const real_t tmp_kernel_op_9 = tmp_kernel_op_8*16.0;
       const real_t tmp_kernel_op_10 = tmp_kernel_op_9*-0.28125;
       const real_t tmp_kernel_op_11 = 0.12;
       const real_t tmp_kernel_op_12 = 0.040000000000000008;
       const real_t tmp_kernel_op_13 = 0.35999999999999999;
       const int64_t tmp_kernel_op_14 = 0;
       const int64_t tmp_kernel_op_15 = 0;
       const int64_t tmp_kernel_op_16 = tmp_kernel_op_14 + tmp_kernel_op_15;
       const real_t tmp_kernel_op_17 = tmp_kernel_op_9*0.26041666666666669;
       const real_t tmp_kernel_op_18 = 0.12;
       const real_t tmp_kernel_op_19 = 0.35999999999999999;
       const real_t tmp_kernel_op_20 = 0.040000000000000008;
       const int64_t tmp_kernel_op_21 = 0;
       const int64_t tmp_kernel_op_22 = 0;
       const int64_t tmp_kernel_op_23 = tmp_kernel_op_21 + tmp_kernel_op_22;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_9*0.26041666666666669;
       const real_t tmp_kernel_op_25 = 0.040000000000000008;
       const real_t tmp_kernel_op_26 = 0.040000000000000008;
       const real_t tmp_kernel_op_27 = 0.040000000000000008;
       const int64_t tmp_kernel_op_28 = 0;
       const int64_t tmp_kernel_op_29 = 0;
       const int64_t tmp_kernel_op_30 = tmp_kernel_op_28 + tmp_kernel_op_29;
       const real_t tmp_kernel_op_31 = tmp_kernel_op_9*0.26041666666666669;
       const real_t tmp_kernel_op_32 = tmp_kernel_op_8*4.0;
       const real_t tmp_kernel_op_33 = tmp_kernel_op_32*-0.28125;
       const real_t tmp_kernel_op_34 = tmp_kernel_op_32*0.26041666666666669;
       const real_t tmp_kernel_op_35 = tmp_kernel_op_32*0.26041666666666669;
       const real_t tmp_kernel_op_36 = tmp_kernel_op_32*0.26041666666666669;
       const int64_t tmp_kernel_op_37 = ((int64_t)((tmp_kernel_op_6*tmp_kernel_op_6)));
       const real_t tmp_kernel_op_38 = tmp_kernel_op_10*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_39 = tmp_kernel_op_17*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_40 = tmp_kernel_op_24*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_41 = tmp_kernel_op_31*((real_t)(tmp_kernel_op_6));
       const int64_t tmp_kernel_op_42 = tmp_kernel_op_6;
       const real_t elMatDiag_0 = tmp_kernel_op_10*((tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))*(tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))) + tmp_kernel_op_17*((tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))*(tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))) + tmp_kernel_op_24*((tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))*(tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))) + tmp_kernel_op_31*((tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30)))*(tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30))));
       const real_t elMatDiag_1 = tmp_kernel_op_33*((tmp_kernel_op_1 - 0.16666666666666666)*(tmp_kernel_op_1 - 0.16666666666666666)) + tmp_kernel_op_34*((tmp_kernel_op_12 - 0.10000000000000001)*(tmp_kernel_op_12 - 0.10000000000000001)) + tmp_kernel_op_35*((tmp_kernel_op_19 - 0.29999999999999999)*(tmp_kernel_op_19 - 0.29999999999999999)) + tmp_kernel_op_36*((tmp_kernel_op_26 - 0.10000000000000001)*(tmp_kernel_op_26 - 0.10000000000000001));
       const real_t elMatDiag_2 = tmp_kernel_op_33*((tmp_kernel_op_2 - 0.16666666666666666)*(tmp_kernel_op_2 - 0.16666666666666666)) + tmp_kernel_op_34*((tmp_kernel_op_13 - 0.29999999999999999)*(tmp_kernel_op_13 - 0.29999999999999999)) + tmp_kernel_op_35*((tmp_kernel_op_20 - 0.10000000000000001)*(tmp_kernel_op_20 - 0.10000000000000001)) + tmp_kernel_op_36*((tmp_kernel_op_27 - 0.10000000000000001)*(tmp_kernel_op_27 - 0.10000000000000001));
       const real_t elMatDiag_3 = tmp_kernel_op_33*((real_t)(tmp_kernel_op_37)) + tmp_kernel_op_34*((real_t)(tmp_kernel_op_37)) + tmp_kernel_op_35*((real_t)(tmp_kernel_op_37)) + tmp_kernel_op_36*((real_t)(tmp_kernel_op_37));
       const real_t elMatDiag_4 = tmp_kernel_op_13*tmp_kernel_op_39 + tmp_kernel_op_2*tmp_kernel_op_38 + tmp_kernel_op_20*tmp_kernel_op_40 + tmp_kernel_op_27*tmp_kernel_op_41;
       const real_t elMatDiag_5 = tmp_kernel_op_1*tmp_kernel_op_38 + tmp_kernel_op_12*tmp_kernel_op_39 + tmp_kernel_op_19*tmp_kernel_op_40 + tmp_kernel_op_26*tmp_kernel_op_41;
       const real_t elMatDiag_6 = tmp_kernel_op_1*tmp_kernel_op_10*tmp_kernel_op_2 + tmp_kernel_op_12*tmp_kernel_op_13*tmp_kernel_op_17 + tmp_kernel_op_19*tmp_kernel_op_20*tmp_kernel_op_24 + tmp_kernel_op_26*tmp_kernel_op_27*tmp_kernel_op_31;
       const real_t elMatDiag_7 = tmp_kernel_op_10*((real_t)(((-tmp_kernel_op_42 - tmp_kernel_op_5)*(-tmp_kernel_op_42 - tmp_kernel_op_5)))) + tmp_kernel_op_17*((real_t)(((-tmp_kernel_op_16 - tmp_kernel_op_42)*(-tmp_kernel_op_16 - tmp_kernel_op_42)))) + tmp_kernel_op_24*((real_t)(((-tmp_kernel_op_23 - tmp_kernel_op_42)*(-tmp_kernel_op_23 - tmp_kernel_op_42)))) + tmp_kernel_op_31*((real_t)(((-tmp_kernel_op_30 - tmp_kernel_op_42)*(-tmp_kernel_op_30 - tmp_kernel_op_42))));
       const real_t elMatDiag_8 = tmp_kernel_op_10*((-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)) + tmp_kernel_op_17*((-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)*(-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)) + tmp_kernel_op_24*((-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)*(-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)) + tmp_kernel_op_31*((-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001));
       const real_t elMatDiag_9 = tmp_kernel_op_10*((-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)) + tmp_kernel_op_17*((-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)*(-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)) + tmp_kernel_op_24*((-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)*(-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)) + tmp_kernel_op_31*((-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001));
       {
          /* CellType.WHITE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
       const real_t tmp_coords_jac_0_GREEN_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_2_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_3_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_4_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_coords_jac_5_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_coords_jac_6_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_coords_jac_7_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_coords_jac_8_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_coords_jac_9_GREEN_DOWN = tmp_coords_jac_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_0_0_GREEN_DOWN = tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_2_GREEN_DOWN;
       const real_t p_affine_const_0_1_GREEN_DOWN = tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_4_GREEN_DOWN;
       const real_t p_affine_const_0_2_GREEN_DOWN = tmp_coords_jac_5_GREEN_DOWN + tmp_coords_jac_6_GREEN_DOWN;
       const real_t p_affine_const_1_0_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_coords_jac_1_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const real_t p_affine_const_1_1_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_coords_jac_3_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const real_t p_affine_const_1_2_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_coords_jac_5_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
       const real_t p_affine_const_2_0_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN + tmp_coords_jac_7_GREEN_DOWN;
       const real_t p_affine_const_2_1_GREEN_DOWN = tmp_coords_jac_4_GREEN_DOWN + tmp_coords_jac_8_GREEN_DOWN;
       const real_t p_affine_const_2_2_GREEN_DOWN = tmp_coords_jac_6_GREEN_DOWN + tmp_coords_jac_9_GREEN_DOWN;
       const real_t p_affine_const_3_0_GREEN_DOWN = tmp_coords_jac_2_GREEN_DOWN;
       const real_t p_affine_const_3_1_GREEN_DOWN = tmp_coords_jac_4_GREEN_DOWN;
       const real_t p_affine_const_3_2_GREEN_DOWN = tmp_coords_jac_6_GREEN_DOWN;
       const real_t jac_affine_0_0_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_1_0_GREEN_DOWN;
       const real_t jac_affine_0_1_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_2_0_GREEN_DOWN;
       const real_t jac_affine_1_0_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_1_1_GREEN_DOWN;
       const real_t jac_affine_1_1_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_2_1_GREEN_DOWN;
       const real_t jac_affine_2_0_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_1_2_GREEN_DOWN;
       const real_t jac_affine_2_1_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_2_2_GREEN_DOWN;
       const real_t tmp_moved_constant_0 = pow(abs(((jac_affine_0_0_GREEN_DOWN*jac_affine_0_0_GREEN_DOWN) + (jac_affine_1_0_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN) + (jac_affine_2_0_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN))*((jac_affine_0_1_GREEN_DOWN*jac_affine_0_1_GREEN_DOWN) + (jac_affine_1_1_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN) + (jac_affine_2_1_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN)) - ((jac_affine_0_0_GREEN_DOWN*jac_affine_0_1_GREEN_DOWN + jac_affine_1_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN + jac_affine_2_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN)*(jac_affine_0_0_GREEN_DOWN*jac_affine_0_1_GREEN_DOWN + jac_affine_1_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN + jac_affine_2_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN))), 0.5);
       const real_t tmp_moved_constant_1 = tmp_moved_constant_0*16.0;
       const real_t tmp_moved_constant_2 = tmp_moved_constant_1*-0.28125;
       const real_t tmp_moved_constant_3 = tmp_moved_constant_1*0.26041666666666669;
       const real_t tmp_moved_constant_4 = tmp_moved_constant_1*0.26041666666666669;
       const real_t tmp_moved_constant_5 = tmp_moved_constant_1*0.26041666666666669;
       const real_t tmp_moved_constant_6 = tmp_moved_constant_0*4.0;
       const real_t tmp_moved_constant_7 = tmp_moved_constant_6*-0.28125;
       const real_t tmp_moved_constant_8 = tmp_moved_constant_6*0.26041666666666669;
       const real_t tmp_moved_constant_9 = tmp_moved_constant_6*0.26041666666666669;
       const real_t tmp_moved_constant_10 = tmp_moved_constant_6*0.26041666666666669;
       const real_t tmp_moved_constant_11 = tmp_moved_constant_2*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_12 = tmp_moved_constant_3*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_13 = tmp_moved_constant_4*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_14 = tmp_moved_constant_5*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_15 = tmp_moved_constant_2*((tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))*(tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))) + tmp_moved_constant_3*((tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))*(tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))) + tmp_moved_constant_4*((tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))*(tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))) + tmp_moved_constant_5*((tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30)))*(tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30))));
       const real_t tmp_moved_constant_16 = tmp_moved_constant_10*((tmp_kernel_op_26 - 0.10000000000000001)*(tmp_kernel_op_26 - 0.10000000000000001)) + tmp_moved_constant_7*((tmp_kernel_op_1 - 0.16666666666666666)*(tmp_kernel_op_1 - 0.16666666666666666)) + tmp_moved_constant_8*((tmp_kernel_op_12 - 0.10000000000000001)*(tmp_kernel_op_12 - 0.10000000000000001)) + tmp_moved_constant_9*((tmp_kernel_op_19 - 0.29999999999999999)*(tmp_kernel_op_19 - 0.29999999999999999));
       const real_t tmp_moved_constant_17 = tmp_moved_constant_10*((tmp_kernel_op_27 - 0.10000000000000001)*(tmp_kernel_op_27 - 0.10000000000000001)) + tmp_moved_constant_7*((tmp_kernel_op_2 - 0.16666666666666666)*(tmp_kernel_op_2 - 0.16666666666666666)) + tmp_moved_constant_8*((tmp_kernel_op_13 - 0.29999999999999999)*(tmp_kernel_op_13 - 0.29999999999999999)) + tmp_moved_constant_9*((tmp_kernel_op_20 - 0.10000000000000001)*(tmp_kernel_op_20 - 0.10000000000000001));
       const real_t tmp_moved_constant_18 = tmp_moved_constant_10*((real_t)(tmp_kernel_op_37)) + tmp_moved_constant_7*((real_t)(tmp_kernel_op_37)) + tmp_moved_constant_8*((real_t)(tmp_kernel_op_37)) + tmp_moved_constant_9*((real_t)(tmp_kernel_op_37));
       const real_t tmp_moved_constant_19 = tmp_kernel_op_13*tmp_moved_constant_12 + tmp_kernel_op_2*tmp_moved_constant_11 + tmp_kernel_op_20*tmp_moved_constant_13 + tmp_kernel_op_27*tmp_moved_constant_14;
       const real_t tmp_moved_constant_20 = tmp_kernel_op_1*tmp_moved_constant_11 + tmp_kernel_op_12*tmp_moved_constant_12 + tmp_kernel_op_19*tmp_moved_constant_13 + tmp_kernel_op_26*tmp_moved_constant_14;
       const real_t tmp_moved_constant_21 = tmp_kernel_op_1*tmp_kernel_op_2*tmp_moved_constant_2 + tmp_kernel_op_12*tmp_kernel_op_13*tmp_moved_constant_3 + tmp_kernel_op_19*tmp_kernel_op_20*tmp_moved_constant_4 + tmp_kernel_op_26*tmp_kernel_op_27*tmp_moved_constant_5;
       const real_t tmp_moved_constant_22 = tmp_moved_constant_2*((real_t)(((-tmp_kernel_op_42 - tmp_kernel_op_5)*(-tmp_kernel_op_42 - tmp_kernel_op_5)))) + tmp_moved_constant_3*((real_t)(((-tmp_kernel_op_16 - tmp_kernel_op_42)*(-tmp_kernel_op_16 - tmp_kernel_op_42)))) + tmp_moved_constant_4*((real_t)(((-tmp_kernel_op_23 - tmp_kernel_op_42)*(-tmp_kernel_op_23 - tmp_kernel_op_42)))) + tmp_moved_constant_5*((real_t)(((-tmp_kernel_op_30 - tmp_kernel_op_42)*(-tmp_kernel_op_30 - tmp_kernel_op_42))));
       const real_t tmp_moved_constant_23 = tmp_moved_constant_2*((-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)) + tmp_moved_constant_3*((-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)*(-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)) + tmp_moved_constant_4*((-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)*(-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)) + tmp_moved_constant_5*((-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001));
       const real_t tmp_moved_constant_24 = tmp_moved_constant_2*((-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)) + tmp_moved_constant_3*((-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)*(-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)) + tmp_moved_constant_4*((-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)*(-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)) + tmp_moved_constant_5*((-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001));
       {
          /* CellType.GREEN_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge - 1; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge - 1; ctr_1 += 1)
          for (int64_t ctr_0 = -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = tmp_moved_constant_15 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = tmp_moved_constant_16 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = tmp_moved_constant_17 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = tmp_moved_constant_18 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = tmp_moved_constant_19 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = tmp_moved_constant_20 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = tmp_moved_constant_21 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = tmp_moved_constant_22 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = tmp_moved_constant_23 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = tmp_moved_constant_24 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
