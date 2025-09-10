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































#include "../P2ElementwiseMassBoundaryIcosahedralShellMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseMassBoundaryIcosahedralShellMap::computeInverseDiagonalOperatorValuesScaled_P2ElementwiseMassBoundaryIcosahedralShellMap_facet_id_1_macro_3D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t diagScaling, real_t forVertex_0, real_t forVertex_1, real_t forVertex_2, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t rayVertex_2, real_t refVertex_0, real_t refVertex_1, real_t refVertex_2, real_t thrVertex_0, real_t thrVertex_1, real_t thrVertex_2 ) const
{
    {
       const real_t tmp_coords_jac_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const real_t p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t jac_affine_0_0_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_1_0_WHITE_UP;
       const real_t jac_affine_0_1_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_2_0_WHITE_UP;
       const real_t jac_affine_1_0_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_1_1_WHITE_UP;
       const real_t jac_affine_1_1_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_2_1_WHITE_UP;
       const real_t jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const real_t jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const real_t tmp_blending_op_5 = rayVertex_1 - refVertex_1;
       const real_t tmp_blending_op_6 = -rayVertex_0;
       const real_t tmp_blending_op_7 = -forVertex_0 - tmp_blending_op_6;
       const real_t tmp_blending_op_8 = rayVertex_2 - thrVertex_2;
       const real_t tmp_blending_op_9 = tmp_blending_op_7*tmp_blending_op_8;
       const real_t tmp_blending_op_10 = rayVertex_2 - refVertex_2;
       const real_t tmp_blending_op_11 = rayVertex_1 - thrVertex_1;
       const real_t tmp_blending_op_12 = tmp_blending_op_11*tmp_blending_op_7;
       const real_t tmp_blending_op_13 = -rayVertex_1;
       const real_t tmp_blending_op_14 = -forVertex_1 - tmp_blending_op_13;
       const real_t tmp_blending_op_15 = rayVertex_0 - thrVertex_0;
       const real_t tmp_blending_op_16 = rayVertex_0 - refVertex_0;
       const real_t tmp_blending_op_17 = -rayVertex_2;
       const real_t tmp_blending_op_18 = -forVertex_2 - tmp_blending_op_17;
       const real_t tmp_blending_op_19 = tmp_blending_op_14*tmp_blending_op_8;
       const real_t tmp_blending_op_20 = tmp_blending_op_15*tmp_blending_op_18;
       const real_t tmp_blending_op_21 = -tmp_blending_op_10*tmp_blending_op_12 + tmp_blending_op_10*tmp_blending_op_14*tmp_blending_op_15 + tmp_blending_op_11*tmp_blending_op_16*tmp_blending_op_18 - tmp_blending_op_16*tmp_blending_op_19 - tmp_blending_op_20*tmp_blending_op_5 + tmp_blending_op_5*tmp_blending_op_9;
       const real_t tmp_blending_op_22 = radRayVertex*tmp_blending_op_21;
       const real_t tmp_blending_op_23 = radRayVertex - radRefVertex;
       const real_t tmp_blending_op_40 = tmp_blending_op_23*(-tmp_blending_op_12 + tmp_blending_op_14*tmp_blending_op_15);
       const real_t tmp_blending_op_41 = 1.0 / (tmp_blending_op_21)*1.0;
       const real_t tmp_blending_op_43 = tmp_blending_op_15*tmp_blending_op_18 - tmp_blending_op_9;
       const real_t tmp_blending_op_47 = tmp_blending_op_11*tmp_blending_op_18 - tmp_blending_op_19;
       const real_t tmp_blending_op_51 = -tmp_blending_op_23*tmp_blending_op_43;
       const real_t tmp_blending_op_53 = tmp_blending_op_23*tmp_blending_op_47;
       const real_t tmp_blending_op_67 = tmp_blending_op_23*tmp_blending_op_43;
       const real_t tmp_kernel_op_0 = 0.1111111111111111;
       const real_t tmp_kernel_op_1 = 0.1111111111111111;
       const real_t tmp_kernel_op_2 = 0.1111111111111111;
       const int64_t tmp_kernel_op_3 = 0;
       const int64_t tmp_kernel_op_4 = 0;
       const int64_t tmp_kernel_op_5 = tmp_kernel_op_3 + tmp_kernel_op_4;
       const int64_t tmp_kernel_op_6 = 0;
       const real_t tmp_kernel_op_7 = 0.25 + 0.5*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_22 = 0.12;
       const real_t tmp_kernel_op_23 = 0.040000000000000008;
       const real_t tmp_kernel_op_24 = 0.35999999999999999;
       const int64_t tmp_kernel_op_25 = 0;
       const int64_t tmp_kernel_op_26 = 0;
       const int64_t tmp_kernel_op_27 = tmp_kernel_op_25 + tmp_kernel_op_26;
       const real_t tmp_kernel_op_42 = 0.12;
       const real_t tmp_kernel_op_43 = 0.35999999999999999;
       const real_t tmp_kernel_op_44 = 0.040000000000000008;
       const int64_t tmp_kernel_op_45 = 0;
       const int64_t tmp_kernel_op_46 = 0;
       const int64_t tmp_kernel_op_47 = tmp_kernel_op_45 + tmp_kernel_op_46;
       const real_t tmp_kernel_op_62 = 0.040000000000000008;
       const real_t tmp_kernel_op_63 = 0.040000000000000008;
       const real_t tmp_kernel_op_64 = 0.040000000000000008;
       const int64_t tmp_kernel_op_65 = 0;
       const int64_t tmp_kernel_op_66 = 0;
       const int64_t tmp_kernel_op_67 = tmp_kernel_op_65 + tmp_kernel_op_66;
       const int64_t tmp_kernel_op_86 = ((int64_t)((tmp_kernel_op_6*tmp_kernel_op_6)));
       const int64_t tmp_kernel_op_91 = tmp_kernel_op_6;
       {
          /* CellType.WHITE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < 1; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t tmp_blending_op_0 = -p_affine_0_2 + p_affine_1_2;
             const real_t tmp_blending_op_1 = -p_affine_0_2 + p_affine_2_2;
             const real_t tmp_blending_op_2 = p_affine_0_2;
             const real_t tmp_blending_op_3 = tmp_blending_op_0*0.20000000000000001 + tmp_blending_op_1*0.20000000000000001 + tmp_blending_op_2;
             const real_t tmp_blending_op_4 = (tmp_blending_op_3*tmp_blending_op_3);
             const real_t tmp_blending_op_24 = -tmp_blending_op_17 - tmp_blending_op_3;
             const real_t tmp_blending_op_25 = -p_affine_0_0 + p_affine_1_0;
             const real_t tmp_blending_op_26 = -p_affine_0_0 + p_affine_2_0;
             const real_t tmp_blending_op_27 = p_affine_0_0;
             const real_t tmp_blending_op_28 = tmp_blending_op_25*0.20000000000000001 + tmp_blending_op_26*0.20000000000000001 + tmp_blending_op_27;
             const real_t tmp_blending_op_29 = -tmp_blending_op_28 - tmp_blending_op_6;
             const real_t tmp_blending_op_30 = -p_affine_0_1 + p_affine_1_1;
             const real_t tmp_blending_op_31 = -p_affine_0_1 + p_affine_2_1;
             const real_t tmp_blending_op_32 = p_affine_0_1;
             const real_t tmp_blending_op_33 = tmp_blending_op_30*0.20000000000000001 + tmp_blending_op_31*0.20000000000000001 + tmp_blending_op_32;
             const real_t tmp_blending_op_34 = -tmp_blending_op_13 - tmp_blending_op_33;
             const real_t tmp_blending_op_35 = tmp_blending_op_22 - tmp_blending_op_23*(tmp_blending_op_11*tmp_blending_op_18*tmp_blending_op_29 - tmp_blending_op_12*tmp_blending_op_24 + tmp_blending_op_14*tmp_blending_op_15*tmp_blending_op_24 - tmp_blending_op_19*tmp_blending_op_29 - tmp_blending_op_20*tmp_blending_op_34 + tmp_blending_op_34*tmp_blending_op_7*tmp_blending_op_8);
             const real_t tmp_blending_op_36 = -tmp_blending_op_35;
             const real_t tmp_blending_op_37 = (tmp_blending_op_28*tmp_blending_op_28);
             const real_t tmp_blending_op_38 = (tmp_blending_op_33*tmp_blending_op_33);
             const real_t tmp_blending_op_39 = tmp_blending_op_37 + tmp_blending_op_38 + tmp_blending_op_4;
             const real_t tmp_blending_op_42 = pow(tmp_blending_op_39, -1.5000000000000000)*tmp_blending_op_41;
             const real_t tmp_blending_op_44 = tmp_blending_op_23*tmp_blending_op_39;
             const real_t tmp_blending_op_45 = -tmp_blending_op_33*tmp_blending_op_35 - tmp_blending_op_43*tmp_blending_op_44;
             const real_t tmp_blending_op_46 = tmp_blending_op_3*tmp_blending_op_42;
             const real_t tmp_blending_op_48 = tmp_blending_op_28*tmp_blending_op_36 + tmp_blending_op_44*tmp_blending_op_47;
             const real_t tmp_blending_op_49 = tmp_blending_op_3*tmp_blending_op_36 + tmp_blending_op_39*tmp_blending_op_40;
             const real_t tmp_blending_op_50 = tmp_blending_op_33*tmp_blending_op_42;
             const real_t tmp_blending_op_52 = tmp_blending_op_28*tmp_blending_op_42;
             const real_t tmp_blending_op_54 = tmp_blending_op_0*0.59999999999999998 + tmp_blending_op_1*0.20000000000000001 + tmp_blending_op_2;
             const real_t tmp_blending_op_55 = (tmp_blending_op_54*tmp_blending_op_54);
             const real_t tmp_blending_op_56 = -tmp_blending_op_17 - tmp_blending_op_54;
             const real_t tmp_blending_op_57 = tmp_blending_op_25*0.59999999999999998 + tmp_blending_op_26*0.20000000000000001 + tmp_blending_op_27;
             const real_t tmp_blending_op_58 = -tmp_blending_op_57 - tmp_blending_op_6;
             const real_t tmp_blending_op_59 = tmp_blending_op_30*0.59999999999999998 + tmp_blending_op_31*0.20000000000000001 + tmp_blending_op_32;
             const real_t tmp_blending_op_60 = -tmp_blending_op_13 - tmp_blending_op_59;
             const real_t tmp_blending_op_61 = tmp_blending_op_22 - tmp_blending_op_23*(tmp_blending_op_11*tmp_blending_op_18*tmp_blending_op_58 - tmp_blending_op_12*tmp_blending_op_56 + tmp_blending_op_14*tmp_blending_op_15*tmp_blending_op_56 - tmp_blending_op_19*tmp_blending_op_58 - tmp_blending_op_20*tmp_blending_op_60 + tmp_blending_op_60*tmp_blending_op_7*tmp_blending_op_8);
             const real_t tmp_blending_op_62 = -tmp_blending_op_61;
             const real_t tmp_blending_op_63 = (tmp_blending_op_57*tmp_blending_op_57);
             const real_t tmp_blending_op_64 = (tmp_blending_op_59*tmp_blending_op_59);
             const real_t tmp_blending_op_65 = tmp_blending_op_55 + tmp_blending_op_63 + tmp_blending_op_64;
             const real_t tmp_blending_op_66 = tmp_blending_op_41*pow(tmp_blending_op_65, -1.5000000000000000);
             const real_t tmp_blending_op_68 = -tmp_blending_op_59*tmp_blending_op_61 - tmp_blending_op_65*tmp_blending_op_67;
             const real_t tmp_blending_op_69 = tmp_blending_op_54*tmp_blending_op_66;
             const real_t tmp_blending_op_70 = tmp_blending_op_53*tmp_blending_op_65 + tmp_blending_op_57*tmp_blending_op_62;
             const real_t tmp_blending_op_71 = tmp_blending_op_40*tmp_blending_op_65 + tmp_blending_op_54*tmp_blending_op_62;
             const real_t tmp_blending_op_72 = tmp_blending_op_59*tmp_blending_op_66;
             const real_t tmp_blending_op_73 = tmp_blending_op_57*tmp_blending_op_66;
             const real_t tmp_blending_op_74 = tmp_blending_op_0*0.20000000000000001 + tmp_blending_op_1*0.59999999999999998 + tmp_blending_op_2;
             const real_t tmp_blending_op_75 = (tmp_blending_op_74*tmp_blending_op_74);
             const real_t tmp_blending_op_76 = -tmp_blending_op_17 - tmp_blending_op_74;
             const real_t tmp_blending_op_77 = tmp_blending_op_25*0.20000000000000001 + tmp_blending_op_26*0.59999999999999998 + tmp_blending_op_27;
             const real_t tmp_blending_op_78 = -tmp_blending_op_6 - tmp_blending_op_77;
             const real_t tmp_blending_op_79 = tmp_blending_op_30*0.20000000000000001 + tmp_blending_op_31*0.59999999999999998 + tmp_blending_op_32;
             const real_t tmp_blending_op_80 = -tmp_blending_op_13 - tmp_blending_op_79;
             const real_t tmp_blending_op_81 = tmp_blending_op_22 - tmp_blending_op_23*(tmp_blending_op_11*tmp_blending_op_18*tmp_blending_op_78 - tmp_blending_op_12*tmp_blending_op_76 + tmp_blending_op_14*tmp_blending_op_15*tmp_blending_op_76 - tmp_blending_op_19*tmp_blending_op_78 - tmp_blending_op_20*tmp_blending_op_80 + tmp_blending_op_7*tmp_blending_op_8*tmp_blending_op_80);
             const real_t tmp_blending_op_82 = -tmp_blending_op_81;
             const real_t tmp_blending_op_83 = (tmp_blending_op_77*tmp_blending_op_77);
             const real_t tmp_blending_op_84 = (tmp_blending_op_79*tmp_blending_op_79);
             const real_t tmp_blending_op_85 = tmp_blending_op_75 + tmp_blending_op_83 + tmp_blending_op_84;
             const real_t tmp_blending_op_86 = tmp_blending_op_41*pow(tmp_blending_op_85, -1.5000000000000000);
             const real_t tmp_blending_op_87 = -tmp_blending_op_67*tmp_blending_op_85 - tmp_blending_op_79*tmp_blending_op_81;
             const real_t tmp_blending_op_88 = tmp_blending_op_74*tmp_blending_op_86;
             const real_t tmp_blending_op_89 = tmp_blending_op_53*tmp_blending_op_85 + tmp_blending_op_77*tmp_blending_op_82;
             const real_t tmp_blending_op_90 = tmp_blending_op_40*tmp_blending_op_85 + tmp_blending_op_74*tmp_blending_op_82;
             const real_t tmp_blending_op_91 = tmp_blending_op_79*tmp_blending_op_86;
             const real_t tmp_blending_op_92 = tmp_blending_op_77*tmp_blending_op_86;
             const real_t tmp_blending_op_93 = tmp_blending_op_0*0.33333333333333331 + tmp_blending_op_1*0.33333333333333331 + tmp_blending_op_2;
             const real_t tmp_blending_op_94 = (tmp_blending_op_93*tmp_blending_op_93);
             const real_t tmp_blending_op_95 = -tmp_blending_op_17 - tmp_blending_op_93;
             const real_t tmp_blending_op_96 = tmp_blending_op_25*0.33333333333333331 + tmp_blending_op_26*0.33333333333333331 + tmp_blending_op_27;
             const real_t tmp_blending_op_97 = -tmp_blending_op_6 - tmp_blending_op_96;
             const real_t tmp_blending_op_98 = tmp_blending_op_30*0.33333333333333331 + tmp_blending_op_31*0.33333333333333331 + tmp_blending_op_32;
             const real_t tmp_blending_op_99 = -tmp_blending_op_13 - tmp_blending_op_98;
             const real_t tmp_blending_op_100 = tmp_blending_op_22 - tmp_blending_op_23*(tmp_blending_op_11*tmp_blending_op_18*tmp_blending_op_97 - tmp_blending_op_12*tmp_blending_op_95 + tmp_blending_op_14*tmp_blending_op_15*tmp_blending_op_95 - tmp_blending_op_19*tmp_blending_op_97 - tmp_blending_op_20*tmp_blending_op_99 + tmp_blending_op_7*tmp_blending_op_8*tmp_blending_op_99);
             const real_t tmp_blending_op_101 = -tmp_blending_op_100;
             const real_t tmp_blending_op_102 = (tmp_blending_op_96*tmp_blending_op_96);
             const real_t tmp_blending_op_103 = (tmp_blending_op_98*tmp_blending_op_98);
             const real_t tmp_blending_op_104 = tmp_blending_op_102 + tmp_blending_op_103 + tmp_blending_op_94;
             const real_t tmp_blending_op_105 = pow(tmp_blending_op_104, -1.5000000000000000)*tmp_blending_op_41;
             const real_t tmp_blending_op_106 = -tmp_blending_op_100*tmp_blending_op_98 - tmp_blending_op_104*tmp_blending_op_67;
             const real_t tmp_blending_op_107 = tmp_blending_op_105*tmp_blending_op_93;
             const real_t tmp_blending_op_108 = tmp_blending_op_101*tmp_blending_op_96 + tmp_blending_op_104*tmp_blending_op_53;
             const real_t tmp_blending_op_109 = tmp_blending_op_101*tmp_blending_op_93 + tmp_blending_op_104*tmp_blending_op_40;
             const real_t tmp_blending_op_110 = tmp_blending_op_105*tmp_blending_op_98;
             const real_t tmp_blending_op_111 = tmp_blending_op_105*tmp_blending_op_96;
             const real_t jac_blending_2_2_q_3 = tmp_blending_op_42*(tmp_blending_op_36*tmp_blending_op_4 + tmp_blending_op_39*(tmp_blending_op_3*tmp_blending_op_40 + tmp_blending_op_35));
             const real_t jac_blending_2_1_q_3 = tmp_blending_op_45*tmp_blending_op_46;
             const real_t jac_blending_2_0_q_3 = tmp_blending_op_46*tmp_blending_op_48;
             const real_t jac_blending_1_2_q_3 = tmp_blending_op_49*tmp_blending_op_50;
             const real_t jac_blending_1_1_q_3 = tmp_blending_op_42*(tmp_blending_op_36*tmp_blending_op_38 + tmp_blending_op_39*(tmp_blending_op_33*tmp_blending_op_51 + tmp_blending_op_35));
             const real_t jac_blending_1_0_q_3 = tmp_blending_op_48*tmp_blending_op_50;
             const real_t jac_blending_0_2_q_3 = tmp_blending_op_49*tmp_blending_op_52;
             const real_t jac_blending_0_1_q_3 = tmp_blending_op_45*tmp_blending_op_52;
             const real_t jac_blending_0_0_q_3 = tmp_blending_op_42*(-tmp_blending_op_35*tmp_blending_op_37 + tmp_blending_op_39*(tmp_blending_op_28*tmp_blending_op_53 + tmp_blending_op_35));
             const real_t jac_blending_2_2_q_2 = tmp_blending_op_66*(tmp_blending_op_55*tmp_blending_op_62 + tmp_blending_op_65*(tmp_blending_op_40*tmp_blending_op_54 + tmp_blending_op_61));
             const real_t jac_blending_2_1_q_2 = tmp_blending_op_68*tmp_blending_op_69;
             const real_t jac_blending_2_0_q_2 = tmp_blending_op_69*tmp_blending_op_70;
             const real_t jac_blending_1_2_q_2 = tmp_blending_op_71*tmp_blending_op_72;
             const real_t jac_blending_1_1_q_2 = tmp_blending_op_66*(tmp_blending_op_62*tmp_blending_op_64 + tmp_blending_op_65*(tmp_blending_op_51*tmp_blending_op_59 + tmp_blending_op_61));
             const real_t jac_blending_1_0_q_2 = tmp_blending_op_70*tmp_blending_op_72;
             const real_t jac_blending_0_2_q_2 = tmp_blending_op_71*tmp_blending_op_73;
             const real_t jac_blending_0_1_q_2 = tmp_blending_op_68*tmp_blending_op_73;
             const real_t jac_blending_0_0_q_2 = tmp_blending_op_66*(-tmp_blending_op_61*tmp_blending_op_63 + tmp_blending_op_65*(tmp_blending_op_53*tmp_blending_op_57 + tmp_blending_op_61));
             const real_t jac_blending_2_2_q_1 = tmp_blending_op_86*(tmp_blending_op_75*tmp_blending_op_82 + tmp_blending_op_85*(tmp_blending_op_40*tmp_blending_op_74 + tmp_blending_op_81));
             const real_t jac_blending_2_1_q_1 = tmp_blending_op_87*tmp_blending_op_88;
             const real_t jac_blending_2_0_q_1 = tmp_blending_op_88*tmp_blending_op_89;
             const real_t jac_blending_1_2_q_1 = tmp_blending_op_90*tmp_blending_op_91;
             const real_t jac_blending_1_1_q_1 = tmp_blending_op_86*(tmp_blending_op_82*tmp_blending_op_84 + tmp_blending_op_85*(tmp_blending_op_51*tmp_blending_op_79 + tmp_blending_op_81));
             const real_t jac_blending_1_0_q_1 = tmp_blending_op_89*tmp_blending_op_91;
             const real_t jac_blending_0_2_q_1 = tmp_blending_op_90*tmp_blending_op_92;
             const real_t jac_blending_0_1_q_1 = tmp_blending_op_87*tmp_blending_op_92;
             const real_t jac_blending_0_0_q_1 = tmp_blending_op_86*(-tmp_blending_op_81*tmp_blending_op_83 + tmp_blending_op_85*(tmp_blending_op_53*tmp_blending_op_77 + tmp_blending_op_81));
             const real_t jac_blending_2_2_q_0 = tmp_blending_op_105*(tmp_blending_op_101*tmp_blending_op_94 + tmp_blending_op_104*(tmp_blending_op_100 + tmp_blending_op_40*tmp_blending_op_93));
             const real_t jac_blending_2_1_q_0 = tmp_blending_op_106*tmp_blending_op_107;
             const real_t jac_blending_2_0_q_0 = tmp_blending_op_107*tmp_blending_op_108;
             const real_t jac_blending_1_2_q_0 = tmp_blending_op_109*tmp_blending_op_110;
             const real_t jac_blending_1_1_q_0 = tmp_blending_op_105*(tmp_blending_op_101*tmp_blending_op_103 + tmp_blending_op_104*(tmp_blending_op_100 + tmp_blending_op_51*tmp_blending_op_98));
             const real_t jac_blending_1_0_q_0 = tmp_blending_op_108*tmp_blending_op_110;
             const real_t jac_blending_0_2_q_0 = tmp_blending_op_109*tmp_blending_op_111;
             const real_t jac_blending_0_1_q_0 = tmp_blending_op_106*tmp_blending_op_111;
             const real_t jac_blending_0_0_q_0 = tmp_blending_op_105*(-tmp_blending_op_100*tmp_blending_op_102 + tmp_blending_op_104*(tmp_blending_op_100 + tmp_blending_op_53*tmp_blending_op_96));
             const real_t tmp_kernel_op_8 = jac_affine_0_0_WHITE_UP*jac_blending_0_0_q_0 + jac_affine_1_0_WHITE_UP*jac_blending_0_1_q_0 + jac_affine_2_0_WHITE_UP*jac_blending_0_2_q_0;
             const real_t tmp_kernel_op_9 = jac_affine_0_0_WHITE_UP*jac_blending_1_0_q_0 + jac_affine_1_0_WHITE_UP*jac_blending_1_1_q_0 + jac_affine_2_0_WHITE_UP*jac_blending_1_2_q_0;
             const real_t tmp_kernel_op_10 = jac_affine_0_0_WHITE_UP*jac_blending_2_0_q_0 + jac_affine_1_0_WHITE_UP*jac_blending_2_1_q_0 + jac_affine_2_0_WHITE_UP*jac_blending_2_2_q_0;
             const real_t tmp_kernel_op_11 = jac_blending_0_0_q_0*tmp_kernel_op_8 + jac_blending_1_0_q_0*tmp_kernel_op_9 + jac_blending_2_0_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = jac_blending_0_1_q_0*tmp_kernel_op_8 + jac_blending_1_1_q_0*tmp_kernel_op_9 + jac_blending_2_1_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_13 = jac_blending_0_2_q_0*tmp_kernel_op_8 + jac_blending_1_2_q_0*tmp_kernel_op_9 + jac_blending_2_2_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_14 = jac_affine_0_1_WHITE_UP*jac_blending_0_0_q_0 + jac_affine_1_1_WHITE_UP*jac_blending_0_1_q_0 + jac_affine_2_1_WHITE_UP*jac_blending_0_2_q_0;
             const real_t tmp_kernel_op_15 = jac_affine_0_1_WHITE_UP*jac_blending_1_0_q_0 + jac_affine_1_1_WHITE_UP*jac_blending_1_1_q_0 + jac_affine_2_1_WHITE_UP*jac_blending_1_2_q_0;
             const real_t tmp_kernel_op_16 = jac_affine_0_1_WHITE_UP*jac_blending_2_0_q_0 + jac_affine_1_1_WHITE_UP*jac_blending_2_1_q_0 + jac_affine_2_1_WHITE_UP*jac_blending_2_2_q_0;
             const real_t tmp_kernel_op_17 = jac_blending_0_0_q_0*tmp_kernel_op_14 + jac_blending_1_0_q_0*tmp_kernel_op_15 + jac_blending_2_0_q_0*tmp_kernel_op_16;
             const real_t tmp_kernel_op_18 = jac_blending_0_1_q_0*tmp_kernel_op_14 + jac_blending_1_1_q_0*tmp_kernel_op_15 + jac_blending_2_1_q_0*tmp_kernel_op_16;
             const real_t tmp_kernel_op_19 = jac_blending_0_2_q_0*tmp_kernel_op_14 + jac_blending_1_2_q_0*tmp_kernel_op_15 + jac_blending_2_2_q_0*tmp_kernel_op_16;
             const real_t tmp_kernel_op_20 = -0.28125*pow(abs((jac_affine_0_0_WHITE_UP*tmp_kernel_op_11 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_12 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_13)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_17 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_18 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_19) - (jac_affine_0_0_WHITE_UP*tmp_kernel_op_17 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_18 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_19)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_11 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_12 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_13)), 0.5);
             const real_t tmp_kernel_op_21 = tmp_kernel_op_20*16.0;
             const real_t tmp_kernel_op_28 = jac_affine_0_0_WHITE_UP*jac_blending_0_0_q_1 + jac_affine_1_0_WHITE_UP*jac_blending_0_1_q_1 + jac_affine_2_0_WHITE_UP*jac_blending_0_2_q_1;
             const real_t tmp_kernel_op_29 = jac_affine_0_0_WHITE_UP*jac_blending_1_0_q_1 + jac_affine_1_0_WHITE_UP*jac_blending_1_1_q_1 + jac_affine_2_0_WHITE_UP*jac_blending_1_2_q_1;
             const real_t tmp_kernel_op_30 = jac_affine_0_0_WHITE_UP*jac_blending_2_0_q_1 + jac_affine_1_0_WHITE_UP*jac_blending_2_1_q_1 + jac_affine_2_0_WHITE_UP*jac_blending_2_2_q_1;
             const real_t tmp_kernel_op_31 = jac_blending_0_0_q_1*tmp_kernel_op_28 + jac_blending_1_0_q_1*tmp_kernel_op_29 + jac_blending_2_0_q_1*tmp_kernel_op_30;
             const real_t tmp_kernel_op_32 = jac_blending_0_1_q_1*tmp_kernel_op_28 + jac_blending_1_1_q_1*tmp_kernel_op_29 + jac_blending_2_1_q_1*tmp_kernel_op_30;
             const real_t tmp_kernel_op_33 = jac_blending_0_2_q_1*tmp_kernel_op_28 + jac_blending_1_2_q_1*tmp_kernel_op_29 + jac_blending_2_2_q_1*tmp_kernel_op_30;
             const real_t tmp_kernel_op_34 = jac_affine_0_1_WHITE_UP*jac_blending_0_0_q_1 + jac_affine_1_1_WHITE_UP*jac_blending_0_1_q_1 + jac_affine_2_1_WHITE_UP*jac_blending_0_2_q_1;
             const real_t tmp_kernel_op_35 = jac_affine_0_1_WHITE_UP*jac_blending_1_0_q_1 + jac_affine_1_1_WHITE_UP*jac_blending_1_1_q_1 + jac_affine_2_1_WHITE_UP*jac_blending_1_2_q_1;
             const real_t tmp_kernel_op_36 = jac_affine_0_1_WHITE_UP*jac_blending_2_0_q_1 + jac_affine_1_1_WHITE_UP*jac_blending_2_1_q_1 + jac_affine_2_1_WHITE_UP*jac_blending_2_2_q_1;
             const real_t tmp_kernel_op_37 = jac_blending_0_0_q_1*tmp_kernel_op_34 + jac_blending_1_0_q_1*tmp_kernel_op_35 + jac_blending_2_0_q_1*tmp_kernel_op_36;
             const real_t tmp_kernel_op_38 = jac_blending_0_1_q_1*tmp_kernel_op_34 + jac_blending_1_1_q_1*tmp_kernel_op_35 + jac_blending_2_1_q_1*tmp_kernel_op_36;
             const real_t tmp_kernel_op_39 = jac_blending_0_2_q_1*tmp_kernel_op_34 + jac_blending_1_2_q_1*tmp_kernel_op_35 + jac_blending_2_2_q_1*tmp_kernel_op_36;
             const real_t tmp_kernel_op_40 = 0.26041666666666669*pow(abs((jac_affine_0_0_WHITE_UP*tmp_kernel_op_31 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_32 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_33)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_37 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_38 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_39) - (jac_affine_0_0_WHITE_UP*tmp_kernel_op_37 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_38 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_39)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_31 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_32 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_33)), 0.5);
             const real_t tmp_kernel_op_41 = tmp_kernel_op_40*16.0;
             const real_t tmp_kernel_op_48 = jac_affine_0_0_WHITE_UP*jac_blending_0_0_q_2 + jac_affine_1_0_WHITE_UP*jac_blending_0_1_q_2 + jac_affine_2_0_WHITE_UP*jac_blending_0_2_q_2;
             const real_t tmp_kernel_op_49 = jac_affine_0_0_WHITE_UP*jac_blending_1_0_q_2 + jac_affine_1_0_WHITE_UP*jac_blending_1_1_q_2 + jac_affine_2_0_WHITE_UP*jac_blending_1_2_q_2;
             const real_t tmp_kernel_op_50 = jac_affine_0_0_WHITE_UP*jac_blending_2_0_q_2 + jac_affine_1_0_WHITE_UP*jac_blending_2_1_q_2 + jac_affine_2_0_WHITE_UP*jac_blending_2_2_q_2;
             const real_t tmp_kernel_op_51 = jac_blending_0_0_q_2*tmp_kernel_op_48 + jac_blending_1_0_q_2*tmp_kernel_op_49 + jac_blending_2_0_q_2*tmp_kernel_op_50;
             const real_t tmp_kernel_op_52 = jac_blending_0_1_q_2*tmp_kernel_op_48 + jac_blending_1_1_q_2*tmp_kernel_op_49 + jac_blending_2_1_q_2*tmp_kernel_op_50;
             const real_t tmp_kernel_op_53 = jac_blending_0_2_q_2*tmp_kernel_op_48 + jac_blending_1_2_q_2*tmp_kernel_op_49 + jac_blending_2_2_q_2*tmp_kernel_op_50;
             const real_t tmp_kernel_op_54 = jac_affine_0_1_WHITE_UP*jac_blending_0_0_q_2 + jac_affine_1_1_WHITE_UP*jac_blending_0_1_q_2 + jac_affine_2_1_WHITE_UP*jac_blending_0_2_q_2;
             const real_t tmp_kernel_op_55 = jac_affine_0_1_WHITE_UP*jac_blending_1_0_q_2 + jac_affine_1_1_WHITE_UP*jac_blending_1_1_q_2 + jac_affine_2_1_WHITE_UP*jac_blending_1_2_q_2;
             const real_t tmp_kernel_op_56 = jac_affine_0_1_WHITE_UP*jac_blending_2_0_q_2 + jac_affine_1_1_WHITE_UP*jac_blending_2_1_q_2 + jac_affine_2_1_WHITE_UP*jac_blending_2_2_q_2;
             const real_t tmp_kernel_op_57 = jac_blending_0_0_q_2*tmp_kernel_op_54 + jac_blending_1_0_q_2*tmp_kernel_op_55 + jac_blending_2_0_q_2*tmp_kernel_op_56;
             const real_t tmp_kernel_op_58 = jac_blending_0_1_q_2*tmp_kernel_op_54 + jac_blending_1_1_q_2*tmp_kernel_op_55 + jac_blending_2_1_q_2*tmp_kernel_op_56;
             const real_t tmp_kernel_op_59 = jac_blending_0_2_q_2*tmp_kernel_op_54 + jac_blending_1_2_q_2*tmp_kernel_op_55 + jac_blending_2_2_q_2*tmp_kernel_op_56;
             const real_t tmp_kernel_op_60 = 0.26041666666666669*pow(abs((jac_affine_0_0_WHITE_UP*tmp_kernel_op_51 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_52 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_53)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_57 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_58 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_59) - (jac_affine_0_0_WHITE_UP*tmp_kernel_op_57 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_58 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_59)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_51 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_52 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_53)), 0.5);
             const real_t tmp_kernel_op_61 = tmp_kernel_op_60*16.0;
             const real_t tmp_kernel_op_68 = jac_affine_0_0_WHITE_UP*jac_blending_0_0_q_3 + jac_affine_1_0_WHITE_UP*jac_blending_0_1_q_3 + jac_affine_2_0_WHITE_UP*jac_blending_0_2_q_3;
             const real_t tmp_kernel_op_69 = jac_affine_0_0_WHITE_UP*jac_blending_1_0_q_3 + jac_affine_1_0_WHITE_UP*jac_blending_1_1_q_3 + jac_affine_2_0_WHITE_UP*jac_blending_1_2_q_3;
             const real_t tmp_kernel_op_70 = jac_affine_0_0_WHITE_UP*jac_blending_2_0_q_3 + jac_affine_1_0_WHITE_UP*jac_blending_2_1_q_3 + jac_affine_2_0_WHITE_UP*jac_blending_2_2_q_3;
             const real_t tmp_kernel_op_71 = jac_blending_0_0_q_3*tmp_kernel_op_68 + jac_blending_1_0_q_3*tmp_kernel_op_69 + jac_blending_2_0_q_3*tmp_kernel_op_70;
             const real_t tmp_kernel_op_72 = jac_blending_0_1_q_3*tmp_kernel_op_68 + jac_blending_1_1_q_3*tmp_kernel_op_69 + jac_blending_2_1_q_3*tmp_kernel_op_70;
             const real_t tmp_kernel_op_73 = jac_blending_0_2_q_3*tmp_kernel_op_68 + jac_blending_1_2_q_3*tmp_kernel_op_69 + jac_blending_2_2_q_3*tmp_kernel_op_70;
             const real_t tmp_kernel_op_74 = jac_affine_0_1_WHITE_UP*jac_blending_0_0_q_3 + jac_affine_1_1_WHITE_UP*jac_blending_0_1_q_3 + jac_affine_2_1_WHITE_UP*jac_blending_0_2_q_3;
             const real_t tmp_kernel_op_75 = jac_affine_0_1_WHITE_UP*jac_blending_1_0_q_3 + jac_affine_1_1_WHITE_UP*jac_blending_1_1_q_3 + jac_affine_2_1_WHITE_UP*jac_blending_1_2_q_3;
             const real_t tmp_kernel_op_76 = jac_affine_0_1_WHITE_UP*jac_blending_2_0_q_3 + jac_affine_1_1_WHITE_UP*jac_blending_2_1_q_3 + jac_affine_2_1_WHITE_UP*jac_blending_2_2_q_3;
             const real_t tmp_kernel_op_77 = jac_blending_0_0_q_3*tmp_kernel_op_74 + jac_blending_1_0_q_3*tmp_kernel_op_75 + jac_blending_2_0_q_3*tmp_kernel_op_76;
             const real_t tmp_kernel_op_78 = jac_blending_0_1_q_3*tmp_kernel_op_74 + jac_blending_1_1_q_3*tmp_kernel_op_75 + jac_blending_2_1_q_3*tmp_kernel_op_76;
             const real_t tmp_kernel_op_79 = jac_blending_0_2_q_3*tmp_kernel_op_74 + jac_blending_1_2_q_3*tmp_kernel_op_75 + jac_blending_2_2_q_3*tmp_kernel_op_76;
             const real_t tmp_kernel_op_80 = 0.26041666666666669*pow(abs((jac_affine_0_0_WHITE_UP*tmp_kernel_op_71 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_72 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_73)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_77 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_78 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_79) - (jac_affine_0_0_WHITE_UP*tmp_kernel_op_77 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_78 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_79)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_71 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_72 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_73)), 0.5);
             const real_t tmp_kernel_op_81 = tmp_kernel_op_80*16.0;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_20*4.0;
             const real_t tmp_kernel_op_83 = tmp_kernel_op_40*4.0;
             const real_t tmp_kernel_op_84 = tmp_kernel_op_60*4.0;
             const real_t tmp_kernel_op_85 = tmp_kernel_op_80*4.0;
             const real_t tmp_kernel_op_87 = tmp_kernel_op_21*((real_t)(tmp_kernel_op_6));
             const real_t tmp_kernel_op_88 = tmp_kernel_op_41*((real_t)(tmp_kernel_op_6));
             const real_t tmp_kernel_op_89 = tmp_kernel_op_61*((real_t)(tmp_kernel_op_6));
             const real_t tmp_kernel_op_90 = tmp_kernel_op_81*((real_t)(tmp_kernel_op_6));
             const real_t elMatDiag_0 = tmp_kernel_op_21*((tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))*(tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))) + tmp_kernel_op_41*((tmp_kernel_op_22 + tmp_kernel_op_23*0.5 + tmp_kernel_op_24*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_27)))*(tmp_kernel_op_22 + tmp_kernel_op_23*0.5 + tmp_kernel_op_24*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_27)))) + tmp_kernel_op_61*((tmp_kernel_op_42 + tmp_kernel_op_43*0.5 + tmp_kernel_op_44*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_47)))*(tmp_kernel_op_42 + tmp_kernel_op_43*0.5 + tmp_kernel_op_44*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_47)))) + tmp_kernel_op_81*((tmp_kernel_op_62 + tmp_kernel_op_63*0.5 + tmp_kernel_op_64*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_67)))*(tmp_kernel_op_62 + tmp_kernel_op_63*0.5 + tmp_kernel_op_64*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_67))));
             const real_t elMatDiag_1 = tmp_kernel_op_82*((tmp_kernel_op_1 - 0.16666666666666666)*(tmp_kernel_op_1 - 0.16666666666666666)) + tmp_kernel_op_83*((tmp_kernel_op_23 - 0.10000000000000001)*(tmp_kernel_op_23 - 0.10000000000000001)) + tmp_kernel_op_84*((tmp_kernel_op_43 - 0.29999999999999999)*(tmp_kernel_op_43 - 0.29999999999999999)) + tmp_kernel_op_85*((tmp_kernel_op_63 - 0.10000000000000001)*(tmp_kernel_op_63 - 0.10000000000000001));
             const real_t elMatDiag_2 = tmp_kernel_op_82*((tmp_kernel_op_2 - 0.16666666666666666)*(tmp_kernel_op_2 - 0.16666666666666666)) + tmp_kernel_op_83*((tmp_kernel_op_24 - 0.29999999999999999)*(tmp_kernel_op_24 - 0.29999999999999999)) + tmp_kernel_op_84*((tmp_kernel_op_44 - 0.10000000000000001)*(tmp_kernel_op_44 - 0.10000000000000001)) + tmp_kernel_op_85*((tmp_kernel_op_64 - 0.10000000000000001)*(tmp_kernel_op_64 - 0.10000000000000001));
             const real_t elMatDiag_3 = tmp_kernel_op_82*((real_t)(tmp_kernel_op_86)) + tmp_kernel_op_83*((real_t)(tmp_kernel_op_86)) + tmp_kernel_op_84*((real_t)(tmp_kernel_op_86)) + tmp_kernel_op_85*((real_t)(tmp_kernel_op_86));
             const real_t elMatDiag_4 = tmp_kernel_op_2*tmp_kernel_op_87 + tmp_kernel_op_24*tmp_kernel_op_88 + tmp_kernel_op_44*tmp_kernel_op_89 + tmp_kernel_op_64*tmp_kernel_op_90;
             const real_t elMatDiag_5 = tmp_kernel_op_1*tmp_kernel_op_87 + tmp_kernel_op_23*tmp_kernel_op_88 + tmp_kernel_op_43*tmp_kernel_op_89 + tmp_kernel_op_63*tmp_kernel_op_90;
             const real_t elMatDiag_6 = tmp_kernel_op_1*tmp_kernel_op_2*tmp_kernel_op_21 + tmp_kernel_op_23*tmp_kernel_op_24*tmp_kernel_op_41 + tmp_kernel_op_43*tmp_kernel_op_44*tmp_kernel_op_61 + tmp_kernel_op_63*tmp_kernel_op_64*tmp_kernel_op_81;
             const real_t elMatDiag_7 = tmp_kernel_op_21*((real_t)(((-tmp_kernel_op_5 - tmp_kernel_op_91)*(-tmp_kernel_op_5 - tmp_kernel_op_91)))) + tmp_kernel_op_41*((real_t)(((-tmp_kernel_op_27 - tmp_kernel_op_91)*(-tmp_kernel_op_27 - tmp_kernel_op_91)))) + tmp_kernel_op_61*((real_t)(((-tmp_kernel_op_47 - tmp_kernel_op_91)*(-tmp_kernel_op_47 - tmp_kernel_op_91)))) + tmp_kernel_op_81*((real_t)(((-tmp_kernel_op_67 - tmp_kernel_op_91)*(-tmp_kernel_op_67 - tmp_kernel_op_91))));
             const real_t elMatDiag_8 = tmp_kernel_op_21*((-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)) + tmp_kernel_op_41*((-tmp_kernel_op_22 - tmp_kernel_op_24 + ((real_t)(-tmp_kernel_op_26)) + 0.59999999999999998)*(-tmp_kernel_op_22 - tmp_kernel_op_24 + ((real_t)(-tmp_kernel_op_26)) + 0.59999999999999998)) + tmp_kernel_op_61*((-tmp_kernel_op_42 - tmp_kernel_op_44 + ((real_t)(-tmp_kernel_op_46)) + 0.20000000000000001)*(-tmp_kernel_op_42 - tmp_kernel_op_44 + ((real_t)(-tmp_kernel_op_46)) + 0.20000000000000001)) + tmp_kernel_op_81*((-tmp_kernel_op_62 - tmp_kernel_op_64 + ((real_t)(-tmp_kernel_op_66)) + 0.20000000000000001)*(-tmp_kernel_op_62 - tmp_kernel_op_64 + ((real_t)(-tmp_kernel_op_66)) + 0.20000000000000001));
             const real_t elMatDiag_9 = tmp_kernel_op_21*((-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)) + tmp_kernel_op_41*((-tmp_kernel_op_22 - tmp_kernel_op_23 + ((real_t)(-tmp_kernel_op_25)) + 0.20000000000000001)*(-tmp_kernel_op_22 - tmp_kernel_op_23 + ((real_t)(-tmp_kernel_op_25)) + 0.20000000000000001)) + tmp_kernel_op_61*((-tmp_kernel_op_42 - tmp_kernel_op_43 + ((real_t)(-tmp_kernel_op_45)) + 0.59999999999999998)*(-tmp_kernel_op_42 - tmp_kernel_op_43 + ((real_t)(-tmp_kernel_op_45)) + 0.59999999999999998)) + tmp_kernel_op_81*((-tmp_kernel_op_62 - tmp_kernel_op_63 + ((real_t)(-tmp_kernel_op_65)) + 0.20000000000000001)*(-tmp_kernel_op_62 - tmp_kernel_op_63 + ((real_t)(-tmp_kernel_op_65)) + 0.20000000000000001));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = diagScaling*elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = diagScaling*elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = diagScaling*elMatDiag_7 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = diagScaling*elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = diagScaling*elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const real_t p_affine_const_1_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_4_GREEN_UP;
       const real_t p_affine_const_1_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_5_GREEN_UP;
       const real_t p_affine_const_1_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_6_GREEN_UP;
       const real_t p_affine_const_2_0_GREEN_UP = tmp_coords_jac_1_GREEN_UP + tmp_coords_jac_4_GREEN_UP;
       const real_t p_affine_const_2_1_GREEN_UP = tmp_coords_jac_2_GREEN_UP + tmp_coords_jac_5_GREEN_UP;
       const real_t p_affine_const_2_2_GREEN_UP = tmp_coords_jac_3_GREEN_UP + tmp_coords_jac_6_GREEN_UP;
       const real_t p_affine_const_3_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_3_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_3_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t jac_affine_0_0_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_1_0_GREEN_UP;
       const real_t jac_affine_0_1_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_2_0_GREEN_UP;
       const real_t jac_affine_1_0_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_1_1_GREEN_UP;
       const real_t jac_affine_1_1_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_2_1_GREEN_UP;
       const real_t jac_affine_2_0_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_1_2_GREEN_UP;
       const real_t jac_affine_2_1_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_2_2_GREEN_UP;
       {
          /* CellType.GREEN_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge - 1; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < 1; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t tmp_blending_op_0 = -p_affine_0_2 + p_affine_1_2;
             const real_t tmp_blending_op_1 = -p_affine_0_2 + p_affine_2_2;
             const real_t tmp_blending_op_2 = p_affine_0_2;
             const real_t tmp_blending_op_3 = tmp_blending_op_0*0.20000000000000001 + tmp_blending_op_1*0.20000000000000001 + tmp_blending_op_2;
             const real_t tmp_blending_op_4 = (tmp_blending_op_3*tmp_blending_op_3);
             const real_t tmp_blending_op_24 = -tmp_blending_op_17 - tmp_blending_op_3;
             const real_t tmp_blending_op_25 = -p_affine_0_0 + p_affine_1_0;
             const real_t tmp_blending_op_26 = -p_affine_0_0 + p_affine_2_0;
             const real_t tmp_blending_op_27 = p_affine_0_0;
             const real_t tmp_blending_op_28 = tmp_blending_op_25*0.20000000000000001 + tmp_blending_op_26*0.20000000000000001 + tmp_blending_op_27;
             const real_t tmp_blending_op_29 = -tmp_blending_op_28 - tmp_blending_op_6;
             const real_t tmp_blending_op_30 = -p_affine_0_1 + p_affine_1_1;
             const real_t tmp_blending_op_31 = -p_affine_0_1 + p_affine_2_1;
             const real_t tmp_blending_op_32 = p_affine_0_1;
             const real_t tmp_blending_op_33 = tmp_blending_op_30*0.20000000000000001 + tmp_blending_op_31*0.20000000000000001 + tmp_blending_op_32;
             const real_t tmp_blending_op_34 = -tmp_blending_op_13 - tmp_blending_op_33;
             const real_t tmp_blending_op_35 = tmp_blending_op_22 - tmp_blending_op_23*(tmp_blending_op_11*tmp_blending_op_18*tmp_blending_op_29 - tmp_blending_op_12*tmp_blending_op_24 + tmp_blending_op_14*tmp_blending_op_15*tmp_blending_op_24 - tmp_blending_op_19*tmp_blending_op_29 - tmp_blending_op_20*tmp_blending_op_34 + tmp_blending_op_34*tmp_blending_op_7*tmp_blending_op_8);
             const real_t tmp_blending_op_36 = -tmp_blending_op_35;
             const real_t tmp_blending_op_37 = (tmp_blending_op_28*tmp_blending_op_28);
             const real_t tmp_blending_op_38 = (tmp_blending_op_33*tmp_blending_op_33);
             const real_t tmp_blending_op_39 = tmp_blending_op_37 + tmp_blending_op_38 + tmp_blending_op_4;
             const real_t tmp_blending_op_42 = pow(tmp_blending_op_39, -1.5000000000000000)*tmp_blending_op_41;
             const real_t tmp_blending_op_44 = tmp_blending_op_23*tmp_blending_op_39;
             const real_t tmp_blending_op_45 = -tmp_blending_op_33*tmp_blending_op_35 - tmp_blending_op_43*tmp_blending_op_44;
             const real_t tmp_blending_op_46 = tmp_blending_op_3*tmp_blending_op_42;
             const real_t tmp_blending_op_48 = tmp_blending_op_28*tmp_blending_op_36 + tmp_blending_op_44*tmp_blending_op_47;
             const real_t tmp_blending_op_49 = tmp_blending_op_3*tmp_blending_op_36 + tmp_blending_op_39*tmp_blending_op_40;
             const real_t tmp_blending_op_50 = tmp_blending_op_33*tmp_blending_op_42;
             const real_t tmp_blending_op_52 = tmp_blending_op_28*tmp_blending_op_42;
             const real_t tmp_blending_op_54 = tmp_blending_op_0*0.59999999999999998 + tmp_blending_op_1*0.20000000000000001 + tmp_blending_op_2;
             const real_t tmp_blending_op_55 = (tmp_blending_op_54*tmp_blending_op_54);
             const real_t tmp_blending_op_56 = -tmp_blending_op_17 - tmp_blending_op_54;
             const real_t tmp_blending_op_57 = tmp_blending_op_25*0.59999999999999998 + tmp_blending_op_26*0.20000000000000001 + tmp_blending_op_27;
             const real_t tmp_blending_op_58 = -tmp_blending_op_57 - tmp_blending_op_6;
             const real_t tmp_blending_op_59 = tmp_blending_op_30*0.59999999999999998 + tmp_blending_op_31*0.20000000000000001 + tmp_blending_op_32;
             const real_t tmp_blending_op_60 = -tmp_blending_op_13 - tmp_blending_op_59;
             const real_t tmp_blending_op_61 = tmp_blending_op_22 - tmp_blending_op_23*(tmp_blending_op_11*tmp_blending_op_18*tmp_blending_op_58 - tmp_blending_op_12*tmp_blending_op_56 + tmp_blending_op_14*tmp_blending_op_15*tmp_blending_op_56 - tmp_blending_op_19*tmp_blending_op_58 - tmp_blending_op_20*tmp_blending_op_60 + tmp_blending_op_60*tmp_blending_op_7*tmp_blending_op_8);
             const real_t tmp_blending_op_62 = -tmp_blending_op_61;
             const real_t tmp_blending_op_63 = (tmp_blending_op_57*tmp_blending_op_57);
             const real_t tmp_blending_op_64 = (tmp_blending_op_59*tmp_blending_op_59);
             const real_t tmp_blending_op_65 = tmp_blending_op_55 + tmp_blending_op_63 + tmp_blending_op_64;
             const real_t tmp_blending_op_66 = tmp_blending_op_41*pow(tmp_blending_op_65, -1.5000000000000000);
             const real_t tmp_blending_op_68 = -tmp_blending_op_59*tmp_blending_op_61 - tmp_blending_op_65*tmp_blending_op_67;
             const real_t tmp_blending_op_69 = tmp_blending_op_54*tmp_blending_op_66;
             const real_t tmp_blending_op_70 = tmp_blending_op_53*tmp_blending_op_65 + tmp_blending_op_57*tmp_blending_op_62;
             const real_t tmp_blending_op_71 = tmp_blending_op_40*tmp_blending_op_65 + tmp_blending_op_54*tmp_blending_op_62;
             const real_t tmp_blending_op_72 = tmp_blending_op_59*tmp_blending_op_66;
             const real_t tmp_blending_op_73 = tmp_blending_op_57*tmp_blending_op_66;
             const real_t tmp_blending_op_74 = tmp_blending_op_0*0.20000000000000001 + tmp_blending_op_1*0.59999999999999998 + tmp_blending_op_2;
             const real_t tmp_blending_op_75 = (tmp_blending_op_74*tmp_blending_op_74);
             const real_t tmp_blending_op_76 = -tmp_blending_op_17 - tmp_blending_op_74;
             const real_t tmp_blending_op_77 = tmp_blending_op_25*0.20000000000000001 + tmp_blending_op_26*0.59999999999999998 + tmp_blending_op_27;
             const real_t tmp_blending_op_78 = -tmp_blending_op_6 - tmp_blending_op_77;
             const real_t tmp_blending_op_79 = tmp_blending_op_30*0.20000000000000001 + tmp_blending_op_31*0.59999999999999998 + tmp_blending_op_32;
             const real_t tmp_blending_op_80 = -tmp_blending_op_13 - tmp_blending_op_79;
             const real_t tmp_blending_op_81 = tmp_blending_op_22 - tmp_blending_op_23*(tmp_blending_op_11*tmp_blending_op_18*tmp_blending_op_78 - tmp_blending_op_12*tmp_blending_op_76 + tmp_blending_op_14*tmp_blending_op_15*tmp_blending_op_76 - tmp_blending_op_19*tmp_blending_op_78 - tmp_blending_op_20*tmp_blending_op_80 + tmp_blending_op_7*tmp_blending_op_8*tmp_blending_op_80);
             const real_t tmp_blending_op_82 = -tmp_blending_op_81;
             const real_t tmp_blending_op_83 = (tmp_blending_op_77*tmp_blending_op_77);
             const real_t tmp_blending_op_84 = (tmp_blending_op_79*tmp_blending_op_79);
             const real_t tmp_blending_op_85 = tmp_blending_op_75 + tmp_blending_op_83 + tmp_blending_op_84;
             const real_t tmp_blending_op_86 = tmp_blending_op_41*pow(tmp_blending_op_85, -1.5000000000000000);
             const real_t tmp_blending_op_87 = -tmp_blending_op_67*tmp_blending_op_85 - tmp_blending_op_79*tmp_blending_op_81;
             const real_t tmp_blending_op_88 = tmp_blending_op_74*tmp_blending_op_86;
             const real_t tmp_blending_op_89 = tmp_blending_op_53*tmp_blending_op_85 + tmp_blending_op_77*tmp_blending_op_82;
             const real_t tmp_blending_op_90 = tmp_blending_op_40*tmp_blending_op_85 + tmp_blending_op_74*tmp_blending_op_82;
             const real_t tmp_blending_op_91 = tmp_blending_op_79*tmp_blending_op_86;
             const real_t tmp_blending_op_92 = tmp_blending_op_77*tmp_blending_op_86;
             const real_t tmp_blending_op_93 = tmp_blending_op_0*0.33333333333333331 + tmp_blending_op_1*0.33333333333333331 + tmp_blending_op_2;
             const real_t tmp_blending_op_94 = (tmp_blending_op_93*tmp_blending_op_93);
             const real_t tmp_blending_op_95 = -tmp_blending_op_17 - tmp_blending_op_93;
             const real_t tmp_blending_op_96 = tmp_blending_op_25*0.33333333333333331 + tmp_blending_op_26*0.33333333333333331 + tmp_blending_op_27;
             const real_t tmp_blending_op_97 = -tmp_blending_op_6 - tmp_blending_op_96;
             const real_t tmp_blending_op_98 = tmp_blending_op_30*0.33333333333333331 + tmp_blending_op_31*0.33333333333333331 + tmp_blending_op_32;
             const real_t tmp_blending_op_99 = -tmp_blending_op_13 - tmp_blending_op_98;
             const real_t tmp_blending_op_100 = tmp_blending_op_22 - tmp_blending_op_23*(tmp_blending_op_11*tmp_blending_op_18*tmp_blending_op_97 - tmp_blending_op_12*tmp_blending_op_95 + tmp_blending_op_14*tmp_blending_op_15*tmp_blending_op_95 - tmp_blending_op_19*tmp_blending_op_97 - tmp_blending_op_20*tmp_blending_op_99 + tmp_blending_op_7*tmp_blending_op_8*tmp_blending_op_99);
             const real_t tmp_blending_op_101 = -tmp_blending_op_100;
             const real_t tmp_blending_op_102 = (tmp_blending_op_96*tmp_blending_op_96);
             const real_t tmp_blending_op_103 = (tmp_blending_op_98*tmp_blending_op_98);
             const real_t tmp_blending_op_104 = tmp_blending_op_102 + tmp_blending_op_103 + tmp_blending_op_94;
             const real_t tmp_blending_op_105 = pow(tmp_blending_op_104, -1.5000000000000000)*tmp_blending_op_41;
             const real_t tmp_blending_op_106 = -tmp_blending_op_100*tmp_blending_op_98 - tmp_blending_op_104*tmp_blending_op_67;
             const real_t tmp_blending_op_107 = tmp_blending_op_105*tmp_blending_op_93;
             const real_t tmp_blending_op_108 = tmp_blending_op_101*tmp_blending_op_96 + tmp_blending_op_104*tmp_blending_op_53;
             const real_t tmp_blending_op_109 = tmp_blending_op_101*tmp_blending_op_93 + tmp_blending_op_104*tmp_blending_op_40;
             const real_t tmp_blending_op_110 = tmp_blending_op_105*tmp_blending_op_98;
             const real_t tmp_blending_op_111 = tmp_blending_op_105*tmp_blending_op_96;
             const real_t jac_blending_2_2_q_3 = tmp_blending_op_42*(tmp_blending_op_36*tmp_blending_op_4 + tmp_blending_op_39*(tmp_blending_op_3*tmp_blending_op_40 + tmp_blending_op_35));
             const real_t jac_blending_2_1_q_3 = tmp_blending_op_45*tmp_blending_op_46;
             const real_t jac_blending_2_0_q_3 = tmp_blending_op_46*tmp_blending_op_48;
             const real_t jac_blending_1_2_q_3 = tmp_blending_op_49*tmp_blending_op_50;
             const real_t jac_blending_1_1_q_3 = tmp_blending_op_42*(tmp_blending_op_36*tmp_blending_op_38 + tmp_blending_op_39*(tmp_blending_op_33*tmp_blending_op_51 + tmp_blending_op_35));
             const real_t jac_blending_1_0_q_3 = tmp_blending_op_48*tmp_blending_op_50;
             const real_t jac_blending_0_2_q_3 = tmp_blending_op_49*tmp_blending_op_52;
             const real_t jac_blending_0_1_q_3 = tmp_blending_op_45*tmp_blending_op_52;
             const real_t jac_blending_0_0_q_3 = tmp_blending_op_42*(-tmp_blending_op_35*tmp_blending_op_37 + tmp_blending_op_39*(tmp_blending_op_28*tmp_blending_op_53 + tmp_blending_op_35));
             const real_t jac_blending_2_2_q_2 = tmp_blending_op_66*(tmp_blending_op_55*tmp_blending_op_62 + tmp_blending_op_65*(tmp_blending_op_40*tmp_blending_op_54 + tmp_blending_op_61));
             const real_t jac_blending_2_1_q_2 = tmp_blending_op_68*tmp_blending_op_69;
             const real_t jac_blending_2_0_q_2 = tmp_blending_op_69*tmp_blending_op_70;
             const real_t jac_blending_1_2_q_2 = tmp_blending_op_71*tmp_blending_op_72;
             const real_t jac_blending_1_1_q_2 = tmp_blending_op_66*(tmp_blending_op_62*tmp_blending_op_64 + tmp_blending_op_65*(tmp_blending_op_51*tmp_blending_op_59 + tmp_blending_op_61));
             const real_t jac_blending_1_0_q_2 = tmp_blending_op_70*tmp_blending_op_72;
             const real_t jac_blending_0_2_q_2 = tmp_blending_op_71*tmp_blending_op_73;
             const real_t jac_blending_0_1_q_2 = tmp_blending_op_68*tmp_blending_op_73;
             const real_t jac_blending_0_0_q_2 = tmp_blending_op_66*(-tmp_blending_op_61*tmp_blending_op_63 + tmp_blending_op_65*(tmp_blending_op_53*tmp_blending_op_57 + tmp_blending_op_61));
             const real_t jac_blending_2_2_q_1 = tmp_blending_op_86*(tmp_blending_op_75*tmp_blending_op_82 + tmp_blending_op_85*(tmp_blending_op_40*tmp_blending_op_74 + tmp_blending_op_81));
             const real_t jac_blending_2_1_q_1 = tmp_blending_op_87*tmp_blending_op_88;
             const real_t jac_blending_2_0_q_1 = tmp_blending_op_88*tmp_blending_op_89;
             const real_t jac_blending_1_2_q_1 = tmp_blending_op_90*tmp_blending_op_91;
             const real_t jac_blending_1_1_q_1 = tmp_blending_op_86*(tmp_blending_op_82*tmp_blending_op_84 + tmp_blending_op_85*(tmp_blending_op_51*tmp_blending_op_79 + tmp_blending_op_81));
             const real_t jac_blending_1_0_q_1 = tmp_blending_op_89*tmp_blending_op_91;
             const real_t jac_blending_0_2_q_1 = tmp_blending_op_90*tmp_blending_op_92;
             const real_t jac_blending_0_1_q_1 = tmp_blending_op_87*tmp_blending_op_92;
             const real_t jac_blending_0_0_q_1 = tmp_blending_op_86*(-tmp_blending_op_81*tmp_blending_op_83 + tmp_blending_op_85*(tmp_blending_op_53*tmp_blending_op_77 + tmp_blending_op_81));
             const real_t jac_blending_2_2_q_0 = tmp_blending_op_105*(tmp_blending_op_101*tmp_blending_op_94 + tmp_blending_op_104*(tmp_blending_op_100 + tmp_blending_op_40*tmp_blending_op_93));
             const real_t jac_blending_2_1_q_0 = tmp_blending_op_106*tmp_blending_op_107;
             const real_t jac_blending_2_0_q_0 = tmp_blending_op_107*tmp_blending_op_108;
             const real_t jac_blending_1_2_q_0 = tmp_blending_op_109*tmp_blending_op_110;
             const real_t jac_blending_1_1_q_0 = tmp_blending_op_105*(tmp_blending_op_101*tmp_blending_op_103 + tmp_blending_op_104*(tmp_blending_op_100 + tmp_blending_op_51*tmp_blending_op_98));
             const real_t jac_blending_1_0_q_0 = tmp_blending_op_108*tmp_blending_op_110;
             const real_t jac_blending_0_2_q_0 = tmp_blending_op_109*tmp_blending_op_111;
             const real_t jac_blending_0_1_q_0 = tmp_blending_op_106*tmp_blending_op_111;
             const real_t jac_blending_0_0_q_0 = tmp_blending_op_105*(-tmp_blending_op_100*tmp_blending_op_102 + tmp_blending_op_104*(tmp_blending_op_100 + tmp_blending_op_53*tmp_blending_op_96));
             const real_t tmp_kernel_op_8 = jac_affine_0_0_GREEN_UP*jac_blending_0_0_q_0 + jac_affine_1_0_GREEN_UP*jac_blending_0_1_q_0 + jac_affine_2_0_GREEN_UP*jac_blending_0_2_q_0;
             const real_t tmp_kernel_op_9 = jac_affine_0_0_GREEN_UP*jac_blending_1_0_q_0 + jac_affine_1_0_GREEN_UP*jac_blending_1_1_q_0 + jac_affine_2_0_GREEN_UP*jac_blending_1_2_q_0;
             const real_t tmp_kernel_op_10 = jac_affine_0_0_GREEN_UP*jac_blending_2_0_q_0 + jac_affine_1_0_GREEN_UP*jac_blending_2_1_q_0 + jac_affine_2_0_GREEN_UP*jac_blending_2_2_q_0;
             const real_t tmp_kernel_op_11 = jac_blending_0_0_q_0*tmp_kernel_op_8 + jac_blending_1_0_q_0*tmp_kernel_op_9 + jac_blending_2_0_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = jac_blending_0_1_q_0*tmp_kernel_op_8 + jac_blending_1_1_q_0*tmp_kernel_op_9 + jac_blending_2_1_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_13 = jac_blending_0_2_q_0*tmp_kernel_op_8 + jac_blending_1_2_q_0*tmp_kernel_op_9 + jac_blending_2_2_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_14 = jac_affine_0_1_GREEN_UP*jac_blending_0_0_q_0 + jac_affine_1_1_GREEN_UP*jac_blending_0_1_q_0 + jac_affine_2_1_GREEN_UP*jac_blending_0_2_q_0;
             const real_t tmp_kernel_op_15 = jac_affine_0_1_GREEN_UP*jac_blending_1_0_q_0 + jac_affine_1_1_GREEN_UP*jac_blending_1_1_q_0 + jac_affine_2_1_GREEN_UP*jac_blending_1_2_q_0;
             const real_t tmp_kernel_op_16 = jac_affine_0_1_GREEN_UP*jac_blending_2_0_q_0 + jac_affine_1_1_GREEN_UP*jac_blending_2_1_q_0 + jac_affine_2_1_GREEN_UP*jac_blending_2_2_q_0;
             const real_t tmp_kernel_op_17 = jac_blending_0_0_q_0*tmp_kernel_op_14 + jac_blending_1_0_q_0*tmp_kernel_op_15 + jac_blending_2_0_q_0*tmp_kernel_op_16;
             const real_t tmp_kernel_op_18 = jac_blending_0_1_q_0*tmp_kernel_op_14 + jac_blending_1_1_q_0*tmp_kernel_op_15 + jac_blending_2_1_q_0*tmp_kernel_op_16;
             const real_t tmp_kernel_op_19 = jac_blending_0_2_q_0*tmp_kernel_op_14 + jac_blending_1_2_q_0*tmp_kernel_op_15 + jac_blending_2_2_q_0*tmp_kernel_op_16;
             const real_t tmp_kernel_op_20 = -0.28125*pow(abs((jac_affine_0_0_GREEN_UP*tmp_kernel_op_11 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_12 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_13)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_17 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_18 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_19) - (jac_affine_0_0_GREEN_UP*tmp_kernel_op_17 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_18 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_19)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_11 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_12 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_13)), 0.5);
             const real_t tmp_kernel_op_21 = tmp_kernel_op_20*16.0;
             const real_t tmp_kernel_op_28 = jac_affine_0_0_GREEN_UP*jac_blending_0_0_q_1 + jac_affine_1_0_GREEN_UP*jac_blending_0_1_q_1 + jac_affine_2_0_GREEN_UP*jac_blending_0_2_q_1;
             const real_t tmp_kernel_op_29 = jac_affine_0_0_GREEN_UP*jac_blending_1_0_q_1 + jac_affine_1_0_GREEN_UP*jac_blending_1_1_q_1 + jac_affine_2_0_GREEN_UP*jac_blending_1_2_q_1;
             const real_t tmp_kernel_op_30 = jac_affine_0_0_GREEN_UP*jac_blending_2_0_q_1 + jac_affine_1_0_GREEN_UP*jac_blending_2_1_q_1 + jac_affine_2_0_GREEN_UP*jac_blending_2_2_q_1;
             const real_t tmp_kernel_op_31 = jac_blending_0_0_q_1*tmp_kernel_op_28 + jac_blending_1_0_q_1*tmp_kernel_op_29 + jac_blending_2_0_q_1*tmp_kernel_op_30;
             const real_t tmp_kernel_op_32 = jac_blending_0_1_q_1*tmp_kernel_op_28 + jac_blending_1_1_q_1*tmp_kernel_op_29 + jac_blending_2_1_q_1*tmp_kernel_op_30;
             const real_t tmp_kernel_op_33 = jac_blending_0_2_q_1*tmp_kernel_op_28 + jac_blending_1_2_q_1*tmp_kernel_op_29 + jac_blending_2_2_q_1*tmp_kernel_op_30;
             const real_t tmp_kernel_op_34 = jac_affine_0_1_GREEN_UP*jac_blending_0_0_q_1 + jac_affine_1_1_GREEN_UP*jac_blending_0_1_q_1 + jac_affine_2_1_GREEN_UP*jac_blending_0_2_q_1;
             const real_t tmp_kernel_op_35 = jac_affine_0_1_GREEN_UP*jac_blending_1_0_q_1 + jac_affine_1_1_GREEN_UP*jac_blending_1_1_q_1 + jac_affine_2_1_GREEN_UP*jac_blending_1_2_q_1;
             const real_t tmp_kernel_op_36 = jac_affine_0_1_GREEN_UP*jac_blending_2_0_q_1 + jac_affine_1_1_GREEN_UP*jac_blending_2_1_q_1 + jac_affine_2_1_GREEN_UP*jac_blending_2_2_q_1;
             const real_t tmp_kernel_op_37 = jac_blending_0_0_q_1*tmp_kernel_op_34 + jac_blending_1_0_q_1*tmp_kernel_op_35 + jac_blending_2_0_q_1*tmp_kernel_op_36;
             const real_t tmp_kernel_op_38 = jac_blending_0_1_q_1*tmp_kernel_op_34 + jac_blending_1_1_q_1*tmp_kernel_op_35 + jac_blending_2_1_q_1*tmp_kernel_op_36;
             const real_t tmp_kernel_op_39 = jac_blending_0_2_q_1*tmp_kernel_op_34 + jac_blending_1_2_q_1*tmp_kernel_op_35 + jac_blending_2_2_q_1*tmp_kernel_op_36;
             const real_t tmp_kernel_op_40 = 0.26041666666666669*pow(abs((jac_affine_0_0_GREEN_UP*tmp_kernel_op_31 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_32 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_33)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_37 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_38 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_39) - (jac_affine_0_0_GREEN_UP*tmp_kernel_op_37 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_38 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_39)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_31 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_32 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_33)), 0.5);
             const real_t tmp_kernel_op_41 = tmp_kernel_op_40*16.0;
             const real_t tmp_kernel_op_48 = jac_affine_0_0_GREEN_UP*jac_blending_0_0_q_2 + jac_affine_1_0_GREEN_UP*jac_blending_0_1_q_2 + jac_affine_2_0_GREEN_UP*jac_blending_0_2_q_2;
             const real_t tmp_kernel_op_49 = jac_affine_0_0_GREEN_UP*jac_blending_1_0_q_2 + jac_affine_1_0_GREEN_UP*jac_blending_1_1_q_2 + jac_affine_2_0_GREEN_UP*jac_blending_1_2_q_2;
             const real_t tmp_kernel_op_50 = jac_affine_0_0_GREEN_UP*jac_blending_2_0_q_2 + jac_affine_1_0_GREEN_UP*jac_blending_2_1_q_2 + jac_affine_2_0_GREEN_UP*jac_blending_2_2_q_2;
             const real_t tmp_kernel_op_51 = jac_blending_0_0_q_2*tmp_kernel_op_48 + jac_blending_1_0_q_2*tmp_kernel_op_49 + jac_blending_2_0_q_2*tmp_kernel_op_50;
             const real_t tmp_kernel_op_52 = jac_blending_0_1_q_2*tmp_kernel_op_48 + jac_blending_1_1_q_2*tmp_kernel_op_49 + jac_blending_2_1_q_2*tmp_kernel_op_50;
             const real_t tmp_kernel_op_53 = jac_blending_0_2_q_2*tmp_kernel_op_48 + jac_blending_1_2_q_2*tmp_kernel_op_49 + jac_blending_2_2_q_2*tmp_kernel_op_50;
             const real_t tmp_kernel_op_54 = jac_affine_0_1_GREEN_UP*jac_blending_0_0_q_2 + jac_affine_1_1_GREEN_UP*jac_blending_0_1_q_2 + jac_affine_2_1_GREEN_UP*jac_blending_0_2_q_2;
             const real_t tmp_kernel_op_55 = jac_affine_0_1_GREEN_UP*jac_blending_1_0_q_2 + jac_affine_1_1_GREEN_UP*jac_blending_1_1_q_2 + jac_affine_2_1_GREEN_UP*jac_blending_1_2_q_2;
             const real_t tmp_kernel_op_56 = jac_affine_0_1_GREEN_UP*jac_blending_2_0_q_2 + jac_affine_1_1_GREEN_UP*jac_blending_2_1_q_2 + jac_affine_2_1_GREEN_UP*jac_blending_2_2_q_2;
             const real_t tmp_kernel_op_57 = jac_blending_0_0_q_2*tmp_kernel_op_54 + jac_blending_1_0_q_2*tmp_kernel_op_55 + jac_blending_2_0_q_2*tmp_kernel_op_56;
             const real_t tmp_kernel_op_58 = jac_blending_0_1_q_2*tmp_kernel_op_54 + jac_blending_1_1_q_2*tmp_kernel_op_55 + jac_blending_2_1_q_2*tmp_kernel_op_56;
             const real_t tmp_kernel_op_59 = jac_blending_0_2_q_2*tmp_kernel_op_54 + jac_blending_1_2_q_2*tmp_kernel_op_55 + jac_blending_2_2_q_2*tmp_kernel_op_56;
             const real_t tmp_kernel_op_60 = 0.26041666666666669*pow(abs((jac_affine_0_0_GREEN_UP*tmp_kernel_op_51 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_52 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_53)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_57 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_58 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_59) - (jac_affine_0_0_GREEN_UP*tmp_kernel_op_57 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_58 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_59)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_51 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_52 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_53)), 0.5);
             const real_t tmp_kernel_op_61 = tmp_kernel_op_60*16.0;
             const real_t tmp_kernel_op_68 = jac_affine_0_0_GREEN_UP*jac_blending_0_0_q_3 + jac_affine_1_0_GREEN_UP*jac_blending_0_1_q_3 + jac_affine_2_0_GREEN_UP*jac_blending_0_2_q_3;
             const real_t tmp_kernel_op_69 = jac_affine_0_0_GREEN_UP*jac_blending_1_0_q_3 + jac_affine_1_0_GREEN_UP*jac_blending_1_1_q_3 + jac_affine_2_0_GREEN_UP*jac_blending_1_2_q_3;
             const real_t tmp_kernel_op_70 = jac_affine_0_0_GREEN_UP*jac_blending_2_0_q_3 + jac_affine_1_0_GREEN_UP*jac_blending_2_1_q_3 + jac_affine_2_0_GREEN_UP*jac_blending_2_2_q_3;
             const real_t tmp_kernel_op_71 = jac_blending_0_0_q_3*tmp_kernel_op_68 + jac_blending_1_0_q_3*tmp_kernel_op_69 + jac_blending_2_0_q_3*tmp_kernel_op_70;
             const real_t tmp_kernel_op_72 = jac_blending_0_1_q_3*tmp_kernel_op_68 + jac_blending_1_1_q_3*tmp_kernel_op_69 + jac_blending_2_1_q_3*tmp_kernel_op_70;
             const real_t tmp_kernel_op_73 = jac_blending_0_2_q_3*tmp_kernel_op_68 + jac_blending_1_2_q_3*tmp_kernel_op_69 + jac_blending_2_2_q_3*tmp_kernel_op_70;
             const real_t tmp_kernel_op_74 = jac_affine_0_1_GREEN_UP*jac_blending_0_0_q_3 + jac_affine_1_1_GREEN_UP*jac_blending_0_1_q_3 + jac_affine_2_1_GREEN_UP*jac_blending_0_2_q_3;
             const real_t tmp_kernel_op_75 = jac_affine_0_1_GREEN_UP*jac_blending_1_0_q_3 + jac_affine_1_1_GREEN_UP*jac_blending_1_1_q_3 + jac_affine_2_1_GREEN_UP*jac_blending_1_2_q_3;
             const real_t tmp_kernel_op_76 = jac_affine_0_1_GREEN_UP*jac_blending_2_0_q_3 + jac_affine_1_1_GREEN_UP*jac_blending_2_1_q_3 + jac_affine_2_1_GREEN_UP*jac_blending_2_2_q_3;
             const real_t tmp_kernel_op_77 = jac_blending_0_0_q_3*tmp_kernel_op_74 + jac_blending_1_0_q_3*tmp_kernel_op_75 + jac_blending_2_0_q_3*tmp_kernel_op_76;
             const real_t tmp_kernel_op_78 = jac_blending_0_1_q_3*tmp_kernel_op_74 + jac_blending_1_1_q_3*tmp_kernel_op_75 + jac_blending_2_1_q_3*tmp_kernel_op_76;
             const real_t tmp_kernel_op_79 = jac_blending_0_2_q_3*tmp_kernel_op_74 + jac_blending_1_2_q_3*tmp_kernel_op_75 + jac_blending_2_2_q_3*tmp_kernel_op_76;
             const real_t tmp_kernel_op_80 = 0.26041666666666669*pow(abs((jac_affine_0_0_GREEN_UP*tmp_kernel_op_71 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_72 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_73)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_77 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_78 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_79) - (jac_affine_0_0_GREEN_UP*tmp_kernel_op_77 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_78 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_79)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_71 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_72 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_73)), 0.5);
             const real_t tmp_kernel_op_81 = tmp_kernel_op_80*16.0;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_20*4.0;
             const real_t tmp_kernel_op_83 = tmp_kernel_op_40*4.0;
             const real_t tmp_kernel_op_84 = tmp_kernel_op_60*4.0;
             const real_t tmp_kernel_op_85 = tmp_kernel_op_80*4.0;
             const real_t tmp_kernel_op_87 = tmp_kernel_op_21*((real_t)(tmp_kernel_op_6));
             const real_t tmp_kernel_op_88 = tmp_kernel_op_41*((real_t)(tmp_kernel_op_6));
             const real_t tmp_kernel_op_89 = tmp_kernel_op_61*((real_t)(tmp_kernel_op_6));
             const real_t tmp_kernel_op_90 = tmp_kernel_op_81*((real_t)(tmp_kernel_op_6));
             const real_t elMatDiag_0 = tmp_kernel_op_21*((tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))*(tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))) + tmp_kernel_op_41*((tmp_kernel_op_22 + tmp_kernel_op_23*0.5 + tmp_kernel_op_24*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_27)))*(tmp_kernel_op_22 + tmp_kernel_op_23*0.5 + tmp_kernel_op_24*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_27)))) + tmp_kernel_op_61*((tmp_kernel_op_42 + tmp_kernel_op_43*0.5 + tmp_kernel_op_44*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_47)))*(tmp_kernel_op_42 + tmp_kernel_op_43*0.5 + tmp_kernel_op_44*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_47)))) + tmp_kernel_op_81*((tmp_kernel_op_62 + tmp_kernel_op_63*0.5 + tmp_kernel_op_64*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_67)))*(tmp_kernel_op_62 + tmp_kernel_op_63*0.5 + tmp_kernel_op_64*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_67))));
             const real_t elMatDiag_1 = tmp_kernel_op_82*((tmp_kernel_op_1 - 0.16666666666666666)*(tmp_kernel_op_1 - 0.16666666666666666)) + tmp_kernel_op_83*((tmp_kernel_op_23 - 0.10000000000000001)*(tmp_kernel_op_23 - 0.10000000000000001)) + tmp_kernel_op_84*((tmp_kernel_op_43 - 0.29999999999999999)*(tmp_kernel_op_43 - 0.29999999999999999)) + tmp_kernel_op_85*((tmp_kernel_op_63 - 0.10000000000000001)*(tmp_kernel_op_63 - 0.10000000000000001));
             const real_t elMatDiag_2 = tmp_kernel_op_82*((tmp_kernel_op_2 - 0.16666666666666666)*(tmp_kernel_op_2 - 0.16666666666666666)) + tmp_kernel_op_83*((tmp_kernel_op_24 - 0.29999999999999999)*(tmp_kernel_op_24 - 0.29999999999999999)) + tmp_kernel_op_84*((tmp_kernel_op_44 - 0.10000000000000001)*(tmp_kernel_op_44 - 0.10000000000000001)) + tmp_kernel_op_85*((tmp_kernel_op_64 - 0.10000000000000001)*(tmp_kernel_op_64 - 0.10000000000000001));
             const real_t elMatDiag_3 = tmp_kernel_op_82*((real_t)(tmp_kernel_op_86)) + tmp_kernel_op_83*((real_t)(tmp_kernel_op_86)) + tmp_kernel_op_84*((real_t)(tmp_kernel_op_86)) + tmp_kernel_op_85*((real_t)(tmp_kernel_op_86));
             const real_t elMatDiag_4 = tmp_kernel_op_2*tmp_kernel_op_87 + tmp_kernel_op_24*tmp_kernel_op_88 + tmp_kernel_op_44*tmp_kernel_op_89 + tmp_kernel_op_64*tmp_kernel_op_90;
             const real_t elMatDiag_5 = tmp_kernel_op_1*tmp_kernel_op_87 + tmp_kernel_op_23*tmp_kernel_op_88 + tmp_kernel_op_43*tmp_kernel_op_89 + tmp_kernel_op_63*tmp_kernel_op_90;
             const real_t elMatDiag_6 = tmp_kernel_op_1*tmp_kernel_op_2*tmp_kernel_op_21 + tmp_kernel_op_23*tmp_kernel_op_24*tmp_kernel_op_41 + tmp_kernel_op_43*tmp_kernel_op_44*tmp_kernel_op_61 + tmp_kernel_op_63*tmp_kernel_op_64*tmp_kernel_op_81;
             const real_t elMatDiag_7 = tmp_kernel_op_21*((real_t)(((-tmp_kernel_op_5 - tmp_kernel_op_91)*(-tmp_kernel_op_5 - tmp_kernel_op_91)))) + tmp_kernel_op_41*((real_t)(((-tmp_kernel_op_27 - tmp_kernel_op_91)*(-tmp_kernel_op_27 - tmp_kernel_op_91)))) + tmp_kernel_op_61*((real_t)(((-tmp_kernel_op_47 - tmp_kernel_op_91)*(-tmp_kernel_op_47 - tmp_kernel_op_91)))) + tmp_kernel_op_81*((real_t)(((-tmp_kernel_op_67 - tmp_kernel_op_91)*(-tmp_kernel_op_67 - tmp_kernel_op_91))));
             const real_t elMatDiag_8 = tmp_kernel_op_21*((-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)) + tmp_kernel_op_41*((-tmp_kernel_op_22 - tmp_kernel_op_24 + ((real_t)(-tmp_kernel_op_26)) + 0.59999999999999998)*(-tmp_kernel_op_22 - tmp_kernel_op_24 + ((real_t)(-tmp_kernel_op_26)) + 0.59999999999999998)) + tmp_kernel_op_61*((-tmp_kernel_op_42 - tmp_kernel_op_44 + ((real_t)(-tmp_kernel_op_46)) + 0.20000000000000001)*(-tmp_kernel_op_42 - tmp_kernel_op_44 + ((real_t)(-tmp_kernel_op_46)) + 0.20000000000000001)) + tmp_kernel_op_81*((-tmp_kernel_op_62 - tmp_kernel_op_64 + ((real_t)(-tmp_kernel_op_66)) + 0.20000000000000001)*(-tmp_kernel_op_62 - tmp_kernel_op_64 + ((real_t)(-tmp_kernel_op_66)) + 0.20000000000000001));
             const real_t elMatDiag_9 = tmp_kernel_op_21*((-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)) + tmp_kernel_op_41*((-tmp_kernel_op_22 - tmp_kernel_op_23 + ((real_t)(-tmp_kernel_op_25)) + 0.20000000000000001)*(-tmp_kernel_op_22 - tmp_kernel_op_23 + ((real_t)(-tmp_kernel_op_25)) + 0.20000000000000001)) + tmp_kernel_op_61*((-tmp_kernel_op_42 - tmp_kernel_op_43 + ((real_t)(-tmp_kernel_op_45)) + 0.59999999999999998)*(-tmp_kernel_op_42 - tmp_kernel_op_43 + ((real_t)(-tmp_kernel_op_45)) + 0.59999999999999998)) + tmp_kernel_op_81*((-tmp_kernel_op_62 - tmp_kernel_op_63 + ((real_t)(-tmp_kernel_op_65)) + 0.20000000000000001)*(-tmp_kernel_op_62 - tmp_kernel_op_63 + ((real_t)(-tmp_kernel_op_65)) + 0.20000000000000001));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = diagScaling*elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = diagScaling*elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = diagScaling*elMatDiag_7 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = diagScaling*elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = diagScaling*elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
