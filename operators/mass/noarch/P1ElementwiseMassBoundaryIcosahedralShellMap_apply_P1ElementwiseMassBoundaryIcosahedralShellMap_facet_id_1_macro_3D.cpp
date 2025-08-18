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































#include "../P1ElementwiseMassBoundaryIcosahedralShellMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseMassBoundaryIcosahedralShellMap::apply_P1ElementwiseMassBoundaryIcosahedralShellMap_facet_id_1_macro_3D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_src, real_t forVertex_0, real_t forVertex_1, real_t forVertex_2, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t rayVertex_2, real_t refVertex_0, real_t refVertex_1, real_t refVertex_2, real_t thrVertex_0, real_t thrVertex_1, real_t thrVertex_2 ) const
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
       const int64_t tmp_kernel_op_0 = -1;
       const real_t tmp_kernel_op_1 = -0.66666666666666663 + ((real_t)(-tmp_kernel_op_0));
       const real_t tmp_kernel_op_16 = -0.80000000000000004 + ((real_t)(-tmp_kernel_op_0));
       const real_t tmp_kernel_op_31 = -0.80000000000000004 + ((real_t)(-tmp_kernel_op_0));
       const real_t tmp_kernel_op_46 = -0.40000000000000002 + ((real_t)(-tmp_kernel_op_0));
       const int64_t tmp_kernel_op_63 = 0;
       const int64_t tmp_kernel_op_69 = 0;
       const int64_t tmp_kernel_op_70 = 0;
       const int64_t tmp_kernel_op_71 = 0;
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
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_kernel_op_2 = jac_affine_0_0_WHITE_UP*jac_blending_0_0_q_0 + jac_affine_1_0_WHITE_UP*jac_blending_0_1_q_0 + jac_affine_2_0_WHITE_UP*jac_blending_0_2_q_0;
             const real_t tmp_kernel_op_3 = jac_affine_0_0_WHITE_UP*jac_blending_1_0_q_0 + jac_affine_1_0_WHITE_UP*jac_blending_1_1_q_0 + jac_affine_2_0_WHITE_UP*jac_blending_1_2_q_0;
             const real_t tmp_kernel_op_4 = jac_affine_0_0_WHITE_UP*jac_blending_2_0_q_0 + jac_affine_1_0_WHITE_UP*jac_blending_2_1_q_0 + jac_affine_2_0_WHITE_UP*jac_blending_2_2_q_0;
             const real_t tmp_kernel_op_5 = jac_blending_0_0_q_0*tmp_kernel_op_2 + jac_blending_1_0_q_0*tmp_kernel_op_3 + jac_blending_2_0_q_0*tmp_kernel_op_4;
             const real_t tmp_kernel_op_6 = jac_blending_0_1_q_0*tmp_kernel_op_2 + jac_blending_1_1_q_0*tmp_kernel_op_3 + jac_blending_2_1_q_0*tmp_kernel_op_4;
             const real_t tmp_kernel_op_7 = jac_blending_0_2_q_0*tmp_kernel_op_2 + jac_blending_1_2_q_0*tmp_kernel_op_3 + jac_blending_2_2_q_0*tmp_kernel_op_4;
             const real_t tmp_kernel_op_8 = jac_affine_0_1_WHITE_UP*jac_blending_0_0_q_0 + jac_affine_1_1_WHITE_UP*jac_blending_0_1_q_0 + jac_affine_2_1_WHITE_UP*jac_blending_0_2_q_0;
             const real_t tmp_kernel_op_9 = jac_affine_0_1_WHITE_UP*jac_blending_1_0_q_0 + jac_affine_1_1_WHITE_UP*jac_blending_1_1_q_0 + jac_affine_2_1_WHITE_UP*jac_blending_1_2_q_0;
             const real_t tmp_kernel_op_10 = jac_affine_0_1_WHITE_UP*jac_blending_2_0_q_0 + jac_affine_1_1_WHITE_UP*jac_blending_2_1_q_0 + jac_affine_2_1_WHITE_UP*jac_blending_2_2_q_0;
             const real_t tmp_kernel_op_11 = jac_blending_0_0_q_0*tmp_kernel_op_8 + jac_blending_1_0_q_0*tmp_kernel_op_9 + jac_blending_2_0_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = jac_blending_0_1_q_0*tmp_kernel_op_8 + jac_blending_1_1_q_0*tmp_kernel_op_9 + jac_blending_2_1_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_13 = jac_blending_0_2_q_0*tmp_kernel_op_8 + jac_blending_1_2_q_0*tmp_kernel_op_9 + jac_blending_2_2_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_14 = -0.28125*pow(abs((jac_affine_0_0_WHITE_UP*tmp_kernel_op_11 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_12 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_13)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_5 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_6 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_7) - (jac_affine_0_0_WHITE_UP*tmp_kernel_op_5 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_6 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_7)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_11 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_12 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_13)), 0.5);
             const real_t tmp_kernel_op_15 = tmp_kernel_op_1*tmp_kernel_op_14;
             const real_t tmp_kernel_op_17 = jac_affine_0_0_WHITE_UP*jac_blending_0_0_q_1 + jac_affine_1_0_WHITE_UP*jac_blending_0_1_q_1 + jac_affine_2_0_WHITE_UP*jac_blending_0_2_q_1;
             const real_t tmp_kernel_op_18 = jac_affine_0_0_WHITE_UP*jac_blending_1_0_q_1 + jac_affine_1_0_WHITE_UP*jac_blending_1_1_q_1 + jac_affine_2_0_WHITE_UP*jac_blending_1_2_q_1;
             const real_t tmp_kernel_op_19 = jac_affine_0_0_WHITE_UP*jac_blending_2_0_q_1 + jac_affine_1_0_WHITE_UP*jac_blending_2_1_q_1 + jac_affine_2_0_WHITE_UP*jac_blending_2_2_q_1;
             const real_t tmp_kernel_op_20 = jac_blending_0_0_q_1*tmp_kernel_op_17 + jac_blending_1_0_q_1*tmp_kernel_op_18 + jac_blending_2_0_q_1*tmp_kernel_op_19;
             const real_t tmp_kernel_op_21 = jac_blending_0_1_q_1*tmp_kernel_op_17 + jac_blending_1_1_q_1*tmp_kernel_op_18 + jac_blending_2_1_q_1*tmp_kernel_op_19;
             const real_t tmp_kernel_op_22 = jac_blending_0_2_q_1*tmp_kernel_op_17 + jac_blending_1_2_q_1*tmp_kernel_op_18 + jac_blending_2_2_q_1*tmp_kernel_op_19;
             const real_t tmp_kernel_op_23 = jac_affine_0_1_WHITE_UP*jac_blending_0_0_q_1 + jac_affine_1_1_WHITE_UP*jac_blending_0_1_q_1 + jac_affine_2_1_WHITE_UP*jac_blending_0_2_q_1;
             const real_t tmp_kernel_op_24 = jac_affine_0_1_WHITE_UP*jac_blending_1_0_q_1 + jac_affine_1_1_WHITE_UP*jac_blending_1_1_q_1 + jac_affine_2_1_WHITE_UP*jac_blending_1_2_q_1;
             const real_t tmp_kernel_op_25 = jac_affine_0_1_WHITE_UP*jac_blending_2_0_q_1 + jac_affine_1_1_WHITE_UP*jac_blending_2_1_q_1 + jac_affine_2_1_WHITE_UP*jac_blending_2_2_q_1;
             const real_t tmp_kernel_op_26 = jac_blending_0_0_q_1*tmp_kernel_op_23 + jac_blending_1_0_q_1*tmp_kernel_op_24 + jac_blending_2_0_q_1*tmp_kernel_op_25;
             const real_t tmp_kernel_op_27 = jac_blending_0_1_q_1*tmp_kernel_op_23 + jac_blending_1_1_q_1*tmp_kernel_op_24 + jac_blending_2_1_q_1*tmp_kernel_op_25;
             const real_t tmp_kernel_op_28 = jac_blending_0_2_q_1*tmp_kernel_op_23 + jac_blending_1_2_q_1*tmp_kernel_op_24 + jac_blending_2_2_q_1*tmp_kernel_op_25;
             const real_t tmp_kernel_op_29 = 0.26041666666666669*pow(abs((jac_affine_0_0_WHITE_UP*tmp_kernel_op_20 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_21 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_22)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_26 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_27 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_28) - (jac_affine_0_0_WHITE_UP*tmp_kernel_op_26 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_27 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_28)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_20 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_21 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_22)), 0.5);
             const real_t tmp_kernel_op_30 = tmp_kernel_op_16*tmp_kernel_op_29;
             const real_t tmp_kernel_op_32 = jac_affine_0_0_WHITE_UP*jac_blending_0_0_q_2 + jac_affine_1_0_WHITE_UP*jac_blending_0_1_q_2 + jac_affine_2_0_WHITE_UP*jac_blending_0_2_q_2;
             const real_t tmp_kernel_op_33 = jac_affine_0_0_WHITE_UP*jac_blending_1_0_q_2 + jac_affine_1_0_WHITE_UP*jac_blending_1_1_q_2 + jac_affine_2_0_WHITE_UP*jac_blending_1_2_q_2;
             const real_t tmp_kernel_op_34 = jac_affine_0_0_WHITE_UP*jac_blending_2_0_q_2 + jac_affine_1_0_WHITE_UP*jac_blending_2_1_q_2 + jac_affine_2_0_WHITE_UP*jac_blending_2_2_q_2;
             const real_t tmp_kernel_op_35 = jac_blending_0_0_q_2*tmp_kernel_op_32 + jac_blending_1_0_q_2*tmp_kernel_op_33 + jac_blending_2_0_q_2*tmp_kernel_op_34;
             const real_t tmp_kernel_op_36 = jac_blending_0_1_q_2*tmp_kernel_op_32 + jac_blending_1_1_q_2*tmp_kernel_op_33 + jac_blending_2_1_q_2*tmp_kernel_op_34;
             const real_t tmp_kernel_op_37 = jac_blending_0_2_q_2*tmp_kernel_op_32 + jac_blending_1_2_q_2*tmp_kernel_op_33 + jac_blending_2_2_q_2*tmp_kernel_op_34;
             const real_t tmp_kernel_op_38 = jac_affine_0_1_WHITE_UP*jac_blending_0_0_q_2 + jac_affine_1_1_WHITE_UP*jac_blending_0_1_q_2 + jac_affine_2_1_WHITE_UP*jac_blending_0_2_q_2;
             const real_t tmp_kernel_op_39 = jac_affine_0_1_WHITE_UP*jac_blending_1_0_q_2 + jac_affine_1_1_WHITE_UP*jac_blending_1_1_q_2 + jac_affine_2_1_WHITE_UP*jac_blending_1_2_q_2;
             const real_t tmp_kernel_op_40 = jac_affine_0_1_WHITE_UP*jac_blending_2_0_q_2 + jac_affine_1_1_WHITE_UP*jac_blending_2_1_q_2 + jac_affine_2_1_WHITE_UP*jac_blending_2_2_q_2;
             const real_t tmp_kernel_op_41 = jac_blending_0_0_q_2*tmp_kernel_op_38 + jac_blending_1_0_q_2*tmp_kernel_op_39 + jac_blending_2_0_q_2*tmp_kernel_op_40;
             const real_t tmp_kernel_op_42 = jac_blending_0_1_q_2*tmp_kernel_op_38 + jac_blending_1_1_q_2*tmp_kernel_op_39 + jac_blending_2_1_q_2*tmp_kernel_op_40;
             const real_t tmp_kernel_op_43 = jac_blending_0_2_q_2*tmp_kernel_op_38 + jac_blending_1_2_q_2*tmp_kernel_op_39 + jac_blending_2_2_q_2*tmp_kernel_op_40;
             const real_t tmp_kernel_op_44 = 0.26041666666666669*pow(abs((jac_affine_0_0_WHITE_UP*tmp_kernel_op_35 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_36 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_37)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_41 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_42 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_43) - (jac_affine_0_0_WHITE_UP*tmp_kernel_op_41 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_42 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_43)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_35 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_36 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_37)), 0.5);
             const real_t tmp_kernel_op_45 = tmp_kernel_op_31*tmp_kernel_op_44;
             const real_t tmp_kernel_op_47 = jac_affine_0_0_WHITE_UP*jac_blending_0_0_q_3 + jac_affine_1_0_WHITE_UP*jac_blending_0_1_q_3 + jac_affine_2_0_WHITE_UP*jac_blending_0_2_q_3;
             const real_t tmp_kernel_op_48 = jac_affine_0_0_WHITE_UP*jac_blending_1_0_q_3 + jac_affine_1_0_WHITE_UP*jac_blending_1_1_q_3 + jac_affine_2_0_WHITE_UP*jac_blending_1_2_q_3;
             const real_t tmp_kernel_op_49 = jac_affine_0_0_WHITE_UP*jac_blending_2_0_q_3 + jac_affine_1_0_WHITE_UP*jac_blending_2_1_q_3 + jac_affine_2_0_WHITE_UP*jac_blending_2_2_q_3;
             const real_t tmp_kernel_op_50 = jac_blending_0_0_q_3*tmp_kernel_op_47 + jac_blending_1_0_q_3*tmp_kernel_op_48 + jac_blending_2_0_q_3*tmp_kernel_op_49;
             const real_t tmp_kernel_op_51 = jac_blending_0_1_q_3*tmp_kernel_op_47 + jac_blending_1_1_q_3*tmp_kernel_op_48 + jac_blending_2_1_q_3*tmp_kernel_op_49;
             const real_t tmp_kernel_op_52 = jac_blending_0_2_q_3*tmp_kernel_op_47 + jac_blending_1_2_q_3*tmp_kernel_op_48 + jac_blending_2_2_q_3*tmp_kernel_op_49;
             const real_t tmp_kernel_op_53 = jac_affine_0_1_WHITE_UP*jac_blending_0_0_q_3 + jac_affine_1_1_WHITE_UP*jac_blending_0_1_q_3 + jac_affine_2_1_WHITE_UP*jac_blending_0_2_q_3;
             const real_t tmp_kernel_op_54 = jac_affine_0_1_WHITE_UP*jac_blending_1_0_q_3 + jac_affine_1_1_WHITE_UP*jac_blending_1_1_q_3 + jac_affine_2_1_WHITE_UP*jac_blending_1_2_q_3;
             const real_t tmp_kernel_op_55 = jac_affine_0_1_WHITE_UP*jac_blending_2_0_q_3 + jac_affine_1_1_WHITE_UP*jac_blending_2_1_q_3 + jac_affine_2_1_WHITE_UP*jac_blending_2_2_q_3;
             const real_t tmp_kernel_op_56 = jac_blending_0_0_q_3*tmp_kernel_op_53 + jac_blending_1_0_q_3*tmp_kernel_op_54 + jac_blending_2_0_q_3*tmp_kernel_op_55;
             const real_t tmp_kernel_op_57 = jac_blending_0_1_q_3*tmp_kernel_op_53 + jac_blending_1_1_q_3*tmp_kernel_op_54 + jac_blending_2_1_q_3*tmp_kernel_op_55;
             const real_t tmp_kernel_op_58 = jac_blending_0_2_q_3*tmp_kernel_op_53 + jac_blending_1_2_q_3*tmp_kernel_op_54 + jac_blending_2_2_q_3*tmp_kernel_op_55;
             const real_t tmp_kernel_op_59 = 0.26041666666666669*pow(abs((jac_affine_0_0_WHITE_UP*tmp_kernel_op_50 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_51 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_52)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_56 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_57 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_58) - (jac_affine_0_0_WHITE_UP*tmp_kernel_op_56 + jac_affine_1_0_WHITE_UP*tmp_kernel_op_57 + jac_affine_2_0_WHITE_UP*tmp_kernel_op_58)*(jac_affine_0_1_WHITE_UP*tmp_kernel_op_50 + jac_affine_1_1_WHITE_UP*tmp_kernel_op_51 + jac_affine_2_1_WHITE_UP*tmp_kernel_op_52)), 0.5);
             const real_t tmp_kernel_op_60 = tmp_kernel_op_46*tmp_kernel_op_59;
             const real_t tmp_kernel_op_61 = tmp_kernel_op_15*0.33333333333333331 + tmp_kernel_op_30*0.20000000000000001 + tmp_kernel_op_45*0.59999999999999998 + tmp_kernel_op_60*0.20000000000000001;
             const real_t tmp_kernel_op_62 = tmp_kernel_op_15*0.33333333333333331 + tmp_kernel_op_30*0.59999999999999998 + tmp_kernel_op_45*0.20000000000000001 + tmp_kernel_op_60*0.20000000000000001;
             const real_t tmp_kernel_op_64 = tmp_kernel_op_14*0.33333333333333331;
             const real_t tmp_kernel_op_65 = tmp_kernel_op_29*0.20000000000000001;
             const real_t tmp_kernel_op_66 = tmp_kernel_op_44*0.59999999999999998;
             const real_t tmp_kernel_op_67 = tmp_kernel_op_59*0.20000000000000001;
             const real_t tmp_kernel_op_68 = tmp_kernel_op_64*0.33333333333333331 + tmp_kernel_op_65*0.59999999999999998 + tmp_kernel_op_66*0.20000000000000001 + tmp_kernel_op_67*0.20000000000000001;
             const real_t elMatVec_0 = src_dof_0*((tmp_kernel_op_1*tmp_kernel_op_1)*tmp_kernel_op_14 + (tmp_kernel_op_16*tmp_kernel_op_16)*tmp_kernel_op_29 + (tmp_kernel_op_31*tmp_kernel_op_31)*tmp_kernel_op_44 + (tmp_kernel_op_46*tmp_kernel_op_46)*tmp_kernel_op_59) + src_dof_1*tmp_kernel_op_61 + src_dof_2*tmp_kernel_op_62 + src_dof_3*((real_t)(tmp_kernel_op_63));
             const real_t elMatVec_1 = src_dof_0*tmp_kernel_op_61 + src_dof_1*(tmp_kernel_op_14*0.1111111111111111 + tmp_kernel_op_29*0.040000000000000008 + tmp_kernel_op_44*0.35999999999999999 + tmp_kernel_op_59*0.040000000000000008) + src_dof_2*tmp_kernel_op_68 + src_dof_3*((real_t)(tmp_kernel_op_69));
             const real_t elMatVec_2 = src_dof_0*tmp_kernel_op_62 + src_dof_1*tmp_kernel_op_68 + src_dof_2*(tmp_kernel_op_14*0.1111111111111111 + tmp_kernel_op_29*0.35999999999999999 + tmp_kernel_op_44*0.040000000000000008 + tmp_kernel_op_59*0.040000000000000008) + src_dof_3*((real_t)(tmp_kernel_op_70));
             const real_t elMatVec_3 = src_dof_0*((real_t)(tmp_kernel_op_63)) + src_dof_1*((real_t)(tmp_kernel_op_69)) + src_dof_2*((real_t)(tmp_kernel_op_70)) + src_dof_3*(tmp_kernel_op_14*((real_t)(tmp_kernel_op_71)) + tmp_kernel_op_29*((real_t)(tmp_kernel_op_71)) + tmp_kernel_op_44*((real_t)(tmp_kernel_op_71)) + tmp_kernel_op_59*((real_t)(tmp_kernel_op_71)));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
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
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_kernel_op_2 = jac_affine_0_0_GREEN_UP*jac_blending_0_0_q_0 + jac_affine_1_0_GREEN_UP*jac_blending_0_1_q_0 + jac_affine_2_0_GREEN_UP*jac_blending_0_2_q_0;
             const real_t tmp_kernel_op_3 = jac_affine_0_0_GREEN_UP*jac_blending_1_0_q_0 + jac_affine_1_0_GREEN_UP*jac_blending_1_1_q_0 + jac_affine_2_0_GREEN_UP*jac_blending_1_2_q_0;
             const real_t tmp_kernel_op_4 = jac_affine_0_0_GREEN_UP*jac_blending_2_0_q_0 + jac_affine_1_0_GREEN_UP*jac_blending_2_1_q_0 + jac_affine_2_0_GREEN_UP*jac_blending_2_2_q_0;
             const real_t tmp_kernel_op_5 = jac_blending_0_0_q_0*tmp_kernel_op_2 + jac_blending_1_0_q_0*tmp_kernel_op_3 + jac_blending_2_0_q_0*tmp_kernel_op_4;
             const real_t tmp_kernel_op_6 = jac_blending_0_1_q_0*tmp_kernel_op_2 + jac_blending_1_1_q_0*tmp_kernel_op_3 + jac_blending_2_1_q_0*tmp_kernel_op_4;
             const real_t tmp_kernel_op_7 = jac_blending_0_2_q_0*tmp_kernel_op_2 + jac_blending_1_2_q_0*tmp_kernel_op_3 + jac_blending_2_2_q_0*tmp_kernel_op_4;
             const real_t tmp_kernel_op_8 = jac_affine_0_1_GREEN_UP*jac_blending_0_0_q_0 + jac_affine_1_1_GREEN_UP*jac_blending_0_1_q_0 + jac_affine_2_1_GREEN_UP*jac_blending_0_2_q_0;
             const real_t tmp_kernel_op_9 = jac_affine_0_1_GREEN_UP*jac_blending_1_0_q_0 + jac_affine_1_1_GREEN_UP*jac_blending_1_1_q_0 + jac_affine_2_1_GREEN_UP*jac_blending_1_2_q_0;
             const real_t tmp_kernel_op_10 = jac_affine_0_1_GREEN_UP*jac_blending_2_0_q_0 + jac_affine_1_1_GREEN_UP*jac_blending_2_1_q_0 + jac_affine_2_1_GREEN_UP*jac_blending_2_2_q_0;
             const real_t tmp_kernel_op_11 = jac_blending_0_0_q_0*tmp_kernel_op_8 + jac_blending_1_0_q_0*tmp_kernel_op_9 + jac_blending_2_0_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = jac_blending_0_1_q_0*tmp_kernel_op_8 + jac_blending_1_1_q_0*tmp_kernel_op_9 + jac_blending_2_1_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_13 = jac_blending_0_2_q_0*tmp_kernel_op_8 + jac_blending_1_2_q_0*tmp_kernel_op_9 + jac_blending_2_2_q_0*tmp_kernel_op_10;
             const real_t tmp_kernel_op_14 = -0.28125*pow(abs((jac_affine_0_0_GREEN_UP*tmp_kernel_op_11 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_12 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_13)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_5 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_6 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_7) - (jac_affine_0_0_GREEN_UP*tmp_kernel_op_5 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_6 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_7)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_11 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_12 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_13)), 0.5);
             const real_t tmp_kernel_op_15 = tmp_kernel_op_1*tmp_kernel_op_14;
             const real_t tmp_kernel_op_17 = jac_affine_0_0_GREEN_UP*jac_blending_0_0_q_1 + jac_affine_1_0_GREEN_UP*jac_blending_0_1_q_1 + jac_affine_2_0_GREEN_UP*jac_blending_0_2_q_1;
             const real_t tmp_kernel_op_18 = jac_affine_0_0_GREEN_UP*jac_blending_1_0_q_1 + jac_affine_1_0_GREEN_UP*jac_blending_1_1_q_1 + jac_affine_2_0_GREEN_UP*jac_blending_1_2_q_1;
             const real_t tmp_kernel_op_19 = jac_affine_0_0_GREEN_UP*jac_blending_2_0_q_1 + jac_affine_1_0_GREEN_UP*jac_blending_2_1_q_1 + jac_affine_2_0_GREEN_UP*jac_blending_2_2_q_1;
             const real_t tmp_kernel_op_20 = jac_blending_0_0_q_1*tmp_kernel_op_17 + jac_blending_1_0_q_1*tmp_kernel_op_18 + jac_blending_2_0_q_1*tmp_kernel_op_19;
             const real_t tmp_kernel_op_21 = jac_blending_0_1_q_1*tmp_kernel_op_17 + jac_blending_1_1_q_1*tmp_kernel_op_18 + jac_blending_2_1_q_1*tmp_kernel_op_19;
             const real_t tmp_kernel_op_22 = jac_blending_0_2_q_1*tmp_kernel_op_17 + jac_blending_1_2_q_1*tmp_kernel_op_18 + jac_blending_2_2_q_1*tmp_kernel_op_19;
             const real_t tmp_kernel_op_23 = jac_affine_0_1_GREEN_UP*jac_blending_0_0_q_1 + jac_affine_1_1_GREEN_UP*jac_blending_0_1_q_1 + jac_affine_2_1_GREEN_UP*jac_blending_0_2_q_1;
             const real_t tmp_kernel_op_24 = jac_affine_0_1_GREEN_UP*jac_blending_1_0_q_1 + jac_affine_1_1_GREEN_UP*jac_blending_1_1_q_1 + jac_affine_2_1_GREEN_UP*jac_blending_1_2_q_1;
             const real_t tmp_kernel_op_25 = jac_affine_0_1_GREEN_UP*jac_blending_2_0_q_1 + jac_affine_1_1_GREEN_UP*jac_blending_2_1_q_1 + jac_affine_2_1_GREEN_UP*jac_blending_2_2_q_1;
             const real_t tmp_kernel_op_26 = jac_blending_0_0_q_1*tmp_kernel_op_23 + jac_blending_1_0_q_1*tmp_kernel_op_24 + jac_blending_2_0_q_1*tmp_kernel_op_25;
             const real_t tmp_kernel_op_27 = jac_blending_0_1_q_1*tmp_kernel_op_23 + jac_blending_1_1_q_1*tmp_kernel_op_24 + jac_blending_2_1_q_1*tmp_kernel_op_25;
             const real_t tmp_kernel_op_28 = jac_blending_0_2_q_1*tmp_kernel_op_23 + jac_blending_1_2_q_1*tmp_kernel_op_24 + jac_blending_2_2_q_1*tmp_kernel_op_25;
             const real_t tmp_kernel_op_29 = 0.26041666666666669*pow(abs((jac_affine_0_0_GREEN_UP*tmp_kernel_op_20 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_21 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_22)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_26 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_27 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_28) - (jac_affine_0_0_GREEN_UP*tmp_kernel_op_26 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_27 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_28)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_20 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_21 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_22)), 0.5);
             const real_t tmp_kernel_op_30 = tmp_kernel_op_16*tmp_kernel_op_29;
             const real_t tmp_kernel_op_32 = jac_affine_0_0_GREEN_UP*jac_blending_0_0_q_2 + jac_affine_1_0_GREEN_UP*jac_blending_0_1_q_2 + jac_affine_2_0_GREEN_UP*jac_blending_0_2_q_2;
             const real_t tmp_kernel_op_33 = jac_affine_0_0_GREEN_UP*jac_blending_1_0_q_2 + jac_affine_1_0_GREEN_UP*jac_blending_1_1_q_2 + jac_affine_2_0_GREEN_UP*jac_blending_1_2_q_2;
             const real_t tmp_kernel_op_34 = jac_affine_0_0_GREEN_UP*jac_blending_2_0_q_2 + jac_affine_1_0_GREEN_UP*jac_blending_2_1_q_2 + jac_affine_2_0_GREEN_UP*jac_blending_2_2_q_2;
             const real_t tmp_kernel_op_35 = jac_blending_0_0_q_2*tmp_kernel_op_32 + jac_blending_1_0_q_2*tmp_kernel_op_33 + jac_blending_2_0_q_2*tmp_kernel_op_34;
             const real_t tmp_kernel_op_36 = jac_blending_0_1_q_2*tmp_kernel_op_32 + jac_blending_1_1_q_2*tmp_kernel_op_33 + jac_blending_2_1_q_2*tmp_kernel_op_34;
             const real_t tmp_kernel_op_37 = jac_blending_0_2_q_2*tmp_kernel_op_32 + jac_blending_1_2_q_2*tmp_kernel_op_33 + jac_blending_2_2_q_2*tmp_kernel_op_34;
             const real_t tmp_kernel_op_38 = jac_affine_0_1_GREEN_UP*jac_blending_0_0_q_2 + jac_affine_1_1_GREEN_UP*jac_blending_0_1_q_2 + jac_affine_2_1_GREEN_UP*jac_blending_0_2_q_2;
             const real_t tmp_kernel_op_39 = jac_affine_0_1_GREEN_UP*jac_blending_1_0_q_2 + jac_affine_1_1_GREEN_UP*jac_blending_1_1_q_2 + jac_affine_2_1_GREEN_UP*jac_blending_1_2_q_2;
             const real_t tmp_kernel_op_40 = jac_affine_0_1_GREEN_UP*jac_blending_2_0_q_2 + jac_affine_1_1_GREEN_UP*jac_blending_2_1_q_2 + jac_affine_2_1_GREEN_UP*jac_blending_2_2_q_2;
             const real_t tmp_kernel_op_41 = jac_blending_0_0_q_2*tmp_kernel_op_38 + jac_blending_1_0_q_2*tmp_kernel_op_39 + jac_blending_2_0_q_2*tmp_kernel_op_40;
             const real_t tmp_kernel_op_42 = jac_blending_0_1_q_2*tmp_kernel_op_38 + jac_blending_1_1_q_2*tmp_kernel_op_39 + jac_blending_2_1_q_2*tmp_kernel_op_40;
             const real_t tmp_kernel_op_43 = jac_blending_0_2_q_2*tmp_kernel_op_38 + jac_blending_1_2_q_2*tmp_kernel_op_39 + jac_blending_2_2_q_2*tmp_kernel_op_40;
             const real_t tmp_kernel_op_44 = 0.26041666666666669*pow(abs((jac_affine_0_0_GREEN_UP*tmp_kernel_op_35 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_36 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_37)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_41 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_42 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_43) - (jac_affine_0_0_GREEN_UP*tmp_kernel_op_41 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_42 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_43)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_35 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_36 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_37)), 0.5);
             const real_t tmp_kernel_op_45 = tmp_kernel_op_31*tmp_kernel_op_44;
             const real_t tmp_kernel_op_47 = jac_affine_0_0_GREEN_UP*jac_blending_0_0_q_3 + jac_affine_1_0_GREEN_UP*jac_blending_0_1_q_3 + jac_affine_2_0_GREEN_UP*jac_blending_0_2_q_3;
             const real_t tmp_kernel_op_48 = jac_affine_0_0_GREEN_UP*jac_blending_1_0_q_3 + jac_affine_1_0_GREEN_UP*jac_blending_1_1_q_3 + jac_affine_2_0_GREEN_UP*jac_blending_1_2_q_3;
             const real_t tmp_kernel_op_49 = jac_affine_0_0_GREEN_UP*jac_blending_2_0_q_3 + jac_affine_1_0_GREEN_UP*jac_blending_2_1_q_3 + jac_affine_2_0_GREEN_UP*jac_blending_2_2_q_3;
             const real_t tmp_kernel_op_50 = jac_blending_0_0_q_3*tmp_kernel_op_47 + jac_blending_1_0_q_3*tmp_kernel_op_48 + jac_blending_2_0_q_3*tmp_kernel_op_49;
             const real_t tmp_kernel_op_51 = jac_blending_0_1_q_3*tmp_kernel_op_47 + jac_blending_1_1_q_3*tmp_kernel_op_48 + jac_blending_2_1_q_3*tmp_kernel_op_49;
             const real_t tmp_kernel_op_52 = jac_blending_0_2_q_3*tmp_kernel_op_47 + jac_blending_1_2_q_3*tmp_kernel_op_48 + jac_blending_2_2_q_3*tmp_kernel_op_49;
             const real_t tmp_kernel_op_53 = jac_affine_0_1_GREEN_UP*jac_blending_0_0_q_3 + jac_affine_1_1_GREEN_UP*jac_blending_0_1_q_3 + jac_affine_2_1_GREEN_UP*jac_blending_0_2_q_3;
             const real_t tmp_kernel_op_54 = jac_affine_0_1_GREEN_UP*jac_blending_1_0_q_3 + jac_affine_1_1_GREEN_UP*jac_blending_1_1_q_3 + jac_affine_2_1_GREEN_UP*jac_blending_1_2_q_3;
             const real_t tmp_kernel_op_55 = jac_affine_0_1_GREEN_UP*jac_blending_2_0_q_3 + jac_affine_1_1_GREEN_UP*jac_blending_2_1_q_3 + jac_affine_2_1_GREEN_UP*jac_blending_2_2_q_3;
             const real_t tmp_kernel_op_56 = jac_blending_0_0_q_3*tmp_kernel_op_53 + jac_blending_1_0_q_3*tmp_kernel_op_54 + jac_blending_2_0_q_3*tmp_kernel_op_55;
             const real_t tmp_kernel_op_57 = jac_blending_0_1_q_3*tmp_kernel_op_53 + jac_blending_1_1_q_3*tmp_kernel_op_54 + jac_blending_2_1_q_3*tmp_kernel_op_55;
             const real_t tmp_kernel_op_58 = jac_blending_0_2_q_3*tmp_kernel_op_53 + jac_blending_1_2_q_3*tmp_kernel_op_54 + jac_blending_2_2_q_3*tmp_kernel_op_55;
             const real_t tmp_kernel_op_59 = 0.26041666666666669*pow(abs((jac_affine_0_0_GREEN_UP*tmp_kernel_op_50 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_51 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_52)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_56 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_57 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_58) - (jac_affine_0_0_GREEN_UP*tmp_kernel_op_56 + jac_affine_1_0_GREEN_UP*tmp_kernel_op_57 + jac_affine_2_0_GREEN_UP*tmp_kernel_op_58)*(jac_affine_0_1_GREEN_UP*tmp_kernel_op_50 + jac_affine_1_1_GREEN_UP*tmp_kernel_op_51 + jac_affine_2_1_GREEN_UP*tmp_kernel_op_52)), 0.5);
             const real_t tmp_kernel_op_60 = tmp_kernel_op_46*tmp_kernel_op_59;
             const real_t tmp_kernel_op_61 = tmp_kernel_op_15*0.33333333333333331 + tmp_kernel_op_30*0.20000000000000001 + tmp_kernel_op_45*0.59999999999999998 + tmp_kernel_op_60*0.20000000000000001;
             const real_t tmp_kernel_op_62 = tmp_kernel_op_15*0.33333333333333331 + tmp_kernel_op_30*0.59999999999999998 + tmp_kernel_op_45*0.20000000000000001 + tmp_kernel_op_60*0.20000000000000001;
             const real_t tmp_kernel_op_64 = tmp_kernel_op_14*0.33333333333333331;
             const real_t tmp_kernel_op_65 = tmp_kernel_op_29*0.20000000000000001;
             const real_t tmp_kernel_op_66 = tmp_kernel_op_44*0.59999999999999998;
             const real_t tmp_kernel_op_67 = tmp_kernel_op_59*0.20000000000000001;
             const real_t tmp_kernel_op_68 = tmp_kernel_op_64*0.33333333333333331 + tmp_kernel_op_65*0.59999999999999998 + tmp_kernel_op_66*0.20000000000000001 + tmp_kernel_op_67*0.20000000000000001;
             const real_t elMatVec_0 = src_dof_0*((tmp_kernel_op_1*tmp_kernel_op_1)*tmp_kernel_op_14 + (tmp_kernel_op_16*tmp_kernel_op_16)*tmp_kernel_op_29 + (tmp_kernel_op_31*tmp_kernel_op_31)*tmp_kernel_op_44 + (tmp_kernel_op_46*tmp_kernel_op_46)*tmp_kernel_op_59) + src_dof_1*tmp_kernel_op_61 + src_dof_2*tmp_kernel_op_62 + src_dof_3*((real_t)(tmp_kernel_op_63));
             const real_t elMatVec_1 = src_dof_0*tmp_kernel_op_61 + src_dof_1*(tmp_kernel_op_14*0.1111111111111111 + tmp_kernel_op_29*0.040000000000000008 + tmp_kernel_op_44*0.35999999999999999 + tmp_kernel_op_59*0.040000000000000008) + src_dof_2*tmp_kernel_op_68 + src_dof_3*((real_t)(tmp_kernel_op_69));
             const real_t elMatVec_2 = src_dof_0*tmp_kernel_op_62 + src_dof_1*tmp_kernel_op_68 + src_dof_2*(tmp_kernel_op_14*0.1111111111111111 + tmp_kernel_op_29*0.35999999999999999 + tmp_kernel_op_44*0.040000000000000008 + tmp_kernel_op_59*0.040000000000000008) + src_dof_3*((real_t)(tmp_kernel_op_70));
             const real_t elMatVec_3 = src_dof_0*((real_t)(tmp_kernel_op_63)) + src_dof_1*((real_t)(tmp_kernel_op_69)) + src_dof_2*((real_t)(tmp_kernel_op_70)) + src_dof_3*(tmp_kernel_op_14*((real_t)(tmp_kernel_op_71)) + tmp_kernel_op_29*((real_t)(tmp_kernel_op_71)) + tmp_kernel_op_44*((real_t)(tmp_kernel_op_71)) + tmp_kernel_op_59*((real_t)(tmp_kernel_op_71)));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
