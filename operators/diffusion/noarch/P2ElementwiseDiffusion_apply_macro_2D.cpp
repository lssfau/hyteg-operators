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

























#include "../P2ElementwiseDiffusion.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDiffusion::apply_macro_2D( walberla::float64 * RESTRICT  _data_dstEdge, walberla::float64 * RESTRICT  _data_dstVertex, walberla::float64 * RESTRICT  _data_srcEdge, walberla::float64 * RESTRICT  _data_srcVertex, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 tmp_coords_jac_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_3_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_4_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_0_0_BLUE = tmp_coords_jac_1_BLUE;
       const walberla::float64 p_affine_const_0_1_BLUE = tmp_coords_jac_2_BLUE;
       const walberla::float64 p_affine_const_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_3_BLUE;
       const walberla::float64 p_affine_const_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_4_BLUE;
       const walberla::float64 p_affine_const_2_0_BLUE = tmp_coords_jac_1_BLUE + tmp_coords_jac_3_BLUE;
       const walberla::float64 p_affine_const_2_1_BLUE = tmp_coords_jac_2_BLUE + tmp_coords_jac_4_BLUE;
       const walberla::float64 jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const walberla::float64 jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const walberla::float64 jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const walberla::float64 jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const walberla::float64 tmp_coords_jac_5_BLUE = jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE;
       const walberla::float64 tmp_coords_jac_6_BLUE = 1.0 / (tmp_coords_jac_5_BLUE);
       const walberla::float64 jac_affine_inv_0_0_BLUE = jac_affine_1_1_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 abs_det_jac_affine_BLUE = abs(tmp_coords_jac_5_BLUE);
       const walberla::float64 tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const walberla::float64 jac_affine_0_1_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_2_0_GRAY;
       const walberla::float64 jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const walberla::float64 jac_affine_1_1_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_2_1_GRAY;
       const walberla::float64 tmp_coords_jac_1_GRAY = jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY;
       const walberla::float64 tmp_coords_jac_2_GRAY = 1.0 / (tmp_coords_jac_1_GRAY);
       const walberla::float64 jac_affine_inv_0_0_GRAY = jac_affine_1_1_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const walberla::float64 tmp_kernel_op_0 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_1 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_2 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const walberla::float64 tmp_kernel_op_3 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_2;
       const walberla::float64 tmp_kernel_op_4 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const walberla::float64 tmp_kernel_op_5 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_6 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_7 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_8 = tmp_kernel_op_6 + tmp_kernel_op_7 - 3.0;
       const walberla::float64 tmp_kernel_op_9 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_8 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_10 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_8 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_11 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_12 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_13 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_14 = tmp_kernel_op_12 + tmp_kernel_op_13 - 3.0;
       const walberla::float64 tmp_kernel_op_15 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_14 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_14;
       const walberla::float64 tmp_kernel_op_16 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_14 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_14;
       const walberla::float64 tmp_kernel_op_17 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_18 = tmp_kernel_op_0 - 1.0;
       const walberla::float64 tmp_kernel_op_19 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_18;
       const walberla::float64 tmp_kernel_op_20 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_18;
       const walberla::float64 tmp_kernel_op_21 = tmp_kernel_op_6 - 1.0;
       const walberla::float64 tmp_kernel_op_22 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_21;
       const walberla::float64 tmp_kernel_op_23 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_21;
       const walberla::float64 tmp_kernel_op_24 = tmp_kernel_op_12 - 1.0;
       const walberla::float64 tmp_kernel_op_25 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_24;
       const walberla::float64 tmp_kernel_op_26 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_24;
       const walberla::float64 tmp_kernel_op_27 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_23 + tmp_kernel_op_22*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_25 + tmp_kernel_op_16*tmp_kernel_op_26) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_3 + tmp_kernel_op_20*tmp_kernel_op_4);
       const walberla::float64 tmp_kernel_op_28 = tmp_kernel_op_1 - 1.0;
       const walberla::float64 tmp_kernel_op_29 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_28;
       const walberla::float64 tmp_kernel_op_30 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_28;
       const walberla::float64 tmp_kernel_op_31 = tmp_kernel_op_7 - 1.0;
       const walberla::float64 tmp_kernel_op_32 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_31;
       const walberla::float64 tmp_kernel_op_33 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_31;
       const walberla::float64 tmp_kernel_op_34 = tmp_kernel_op_13 - 1.0;
       const walberla::float64 tmp_kernel_op_35 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_34;
       const walberla::float64 tmp_kernel_op_36 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_34;
       const walberla::float64 tmp_kernel_op_37 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_33 + tmp_kernel_op_32*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_35 + tmp_kernel_op_16*tmp_kernel_op_36) + tmp_kernel_op_5*(tmp_kernel_op_29*tmp_kernel_op_3 + tmp_kernel_op_30*tmp_kernel_op_4);
       const walberla::float64 tmp_kernel_op_38 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_1;
       const walberla::float64 tmp_kernel_op_39 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_0;
       const walberla::float64 tmp_kernel_op_40 = tmp_kernel_op_38 + tmp_kernel_op_39;
       const walberla::float64 tmp_kernel_op_41 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const walberla::float64 tmp_kernel_op_42 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const walberla::float64 tmp_kernel_op_43 = tmp_kernel_op_41 + tmp_kernel_op_42;
       const walberla::float64 tmp_kernel_op_44 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_7;
       const walberla::float64 tmp_kernel_op_45 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_6;
       const walberla::float64 tmp_kernel_op_46 = tmp_kernel_op_44 + tmp_kernel_op_45;
       const walberla::float64 tmp_kernel_op_47 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_7;
       const walberla::float64 tmp_kernel_op_48 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_6;
       const walberla::float64 tmp_kernel_op_49 = tmp_kernel_op_47 + tmp_kernel_op_48;
       const walberla::float64 tmp_kernel_op_50 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_13;
       const walberla::float64 tmp_kernel_op_51 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_12;
       const walberla::float64 tmp_kernel_op_52 = tmp_kernel_op_50 + tmp_kernel_op_51;
       const walberla::float64 tmp_kernel_op_53 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_13;
       const walberla::float64 tmp_kernel_op_54 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_12;
       const walberla::float64 tmp_kernel_op_55 = tmp_kernel_op_53 + tmp_kernel_op_54;
       const walberla::float64 tmp_kernel_op_56 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_49 + tmp_kernel_op_46*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_52 + tmp_kernel_op_16*tmp_kernel_op_55) + tmp_kernel_op_5*(tmp_kernel_op_3*tmp_kernel_op_40 + tmp_kernel_op_4*tmp_kernel_op_43);
       const walberla::float64 tmp_kernel_op_57 = -tmp_kernel_op_0 - 1.333333333333333;
       const walberla::float64 tmp_kernel_op_58 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_57 - tmp_kernel_op_38;
       const walberla::float64 tmp_kernel_op_59 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_57 - tmp_kernel_op_41;
       const walberla::float64 tmp_kernel_op_60 = -tmp_kernel_op_6 + 2.666666666666667;
       const walberla::float64 tmp_kernel_op_61 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_60 - tmp_kernel_op_44;
       const walberla::float64 tmp_kernel_op_62 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_60 - tmp_kernel_op_47;
       const walberla::float64 tmp_kernel_op_63 = -tmp_kernel_op_12 + 2.666666666666667;
       const walberla::float64 tmp_kernel_op_64 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_63 - tmp_kernel_op_50;
       const walberla::float64 tmp_kernel_op_65 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_63 - tmp_kernel_op_53;
       const walberla::float64 tmp_kernel_op_66 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_62 + tmp_kernel_op_61*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_64 + tmp_kernel_op_16*tmp_kernel_op_65) + tmp_kernel_op_5*(tmp_kernel_op_3*tmp_kernel_op_58 + tmp_kernel_op_4*tmp_kernel_op_59);
       const walberla::float64 tmp_kernel_op_67 = -tmp_kernel_op_1 + 2.666666666666667;
       const walberla::float64 tmp_kernel_op_68 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_67 - tmp_kernel_op_39;
       const walberla::float64 tmp_kernel_op_69 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_67 - tmp_kernel_op_42;
       const walberla::float64 tmp_kernel_op_70 = -tmp_kernel_op_7 - 1.333333333333333;
       const walberla::float64 tmp_kernel_op_71 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_70 - tmp_kernel_op_45;
       const walberla::float64 tmp_kernel_op_72 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_70 - tmp_kernel_op_48;
       const walberla::float64 tmp_kernel_op_73 = -tmp_kernel_op_13 + 2.666666666666667;
       const walberla::float64 tmp_kernel_op_74 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_73 - tmp_kernel_op_51;
       const walberla::float64 tmp_kernel_op_75 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_73 - tmp_kernel_op_54;
       const walberla::float64 tmp_kernel_op_76 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_72 + tmp_kernel_op_71*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_74 + tmp_kernel_op_16*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_3*tmp_kernel_op_68 + tmp_kernel_op_4*tmp_kernel_op_69);
       const walberla::float64 tmp_kernel_op_77 = (jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY);
       const walberla::float64 tmp_kernel_op_78 = (tmp_kernel_op_18*tmp_kernel_op_18);
       const walberla::float64 tmp_kernel_op_79 = (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY);
       const walberla::float64 tmp_kernel_op_80 = (tmp_kernel_op_21*tmp_kernel_op_21);
       const walberla::float64 tmp_kernel_op_81 = (tmp_kernel_op_24*tmp_kernel_op_24);
       const walberla::float64 tmp_kernel_op_82 = tmp_kernel_op_11*(tmp_kernel_op_22*tmp_kernel_op_32 + tmp_kernel_op_23*tmp_kernel_op_33) + tmp_kernel_op_17*(tmp_kernel_op_25*tmp_kernel_op_35 + tmp_kernel_op_26*tmp_kernel_op_36) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_29 + tmp_kernel_op_20*tmp_kernel_op_30);
       const walberla::float64 tmp_kernel_op_83 = tmp_kernel_op_11*(tmp_kernel_op_22*tmp_kernel_op_46 + tmp_kernel_op_23*tmp_kernel_op_49) + tmp_kernel_op_17*(tmp_kernel_op_25*tmp_kernel_op_52 + tmp_kernel_op_26*tmp_kernel_op_55) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_40 + tmp_kernel_op_20*tmp_kernel_op_43);
       const walberla::float64 tmp_kernel_op_84 = tmp_kernel_op_11*(tmp_kernel_op_22*tmp_kernel_op_61 + tmp_kernel_op_23*tmp_kernel_op_62) + tmp_kernel_op_17*(tmp_kernel_op_25*tmp_kernel_op_64 + tmp_kernel_op_26*tmp_kernel_op_65) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_58 + tmp_kernel_op_20*tmp_kernel_op_59);
       const walberla::float64 tmp_kernel_op_85 = tmp_kernel_op_11*(tmp_kernel_op_22*tmp_kernel_op_71 + tmp_kernel_op_23*tmp_kernel_op_72) + tmp_kernel_op_17*(tmp_kernel_op_25*tmp_kernel_op_74 + tmp_kernel_op_26*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_68 + tmp_kernel_op_20*tmp_kernel_op_69);
       const walberla::float64 tmp_kernel_op_86 = (jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY);
       const walberla::float64 tmp_kernel_op_87 = (tmp_kernel_op_28*tmp_kernel_op_28);
       const walberla::float64 tmp_kernel_op_88 = (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY);
       const walberla::float64 tmp_kernel_op_89 = (tmp_kernel_op_31*tmp_kernel_op_31);
       const walberla::float64 tmp_kernel_op_90 = (tmp_kernel_op_34*tmp_kernel_op_34);
       const walberla::float64 tmp_kernel_op_91 = tmp_kernel_op_11*(tmp_kernel_op_32*tmp_kernel_op_46 + tmp_kernel_op_33*tmp_kernel_op_49) + tmp_kernel_op_17*(tmp_kernel_op_35*tmp_kernel_op_52 + tmp_kernel_op_36*tmp_kernel_op_55) + tmp_kernel_op_5*(tmp_kernel_op_29*tmp_kernel_op_40 + tmp_kernel_op_30*tmp_kernel_op_43);
       const walberla::float64 tmp_kernel_op_92 = tmp_kernel_op_11*(tmp_kernel_op_32*tmp_kernel_op_61 + tmp_kernel_op_33*tmp_kernel_op_62) + tmp_kernel_op_17*(tmp_kernel_op_35*tmp_kernel_op_64 + tmp_kernel_op_36*tmp_kernel_op_65) + tmp_kernel_op_5*(tmp_kernel_op_29*tmp_kernel_op_58 + tmp_kernel_op_30*tmp_kernel_op_59);
       const walberla::float64 tmp_kernel_op_93 = tmp_kernel_op_11*(tmp_kernel_op_32*tmp_kernel_op_71 + tmp_kernel_op_33*tmp_kernel_op_72) + tmp_kernel_op_17*(tmp_kernel_op_35*tmp_kernel_op_74 + tmp_kernel_op_36*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_29*tmp_kernel_op_68 + tmp_kernel_op_30*tmp_kernel_op_69);
       const walberla::float64 tmp_kernel_op_94 = tmp_kernel_op_11*(tmp_kernel_op_46*tmp_kernel_op_61 + tmp_kernel_op_49*tmp_kernel_op_62) + tmp_kernel_op_17*(tmp_kernel_op_52*tmp_kernel_op_64 + tmp_kernel_op_55*tmp_kernel_op_65) + tmp_kernel_op_5*(tmp_kernel_op_40*tmp_kernel_op_58 + tmp_kernel_op_43*tmp_kernel_op_59);
       const walberla::float64 tmp_kernel_op_95 = tmp_kernel_op_11*(tmp_kernel_op_46*tmp_kernel_op_71 + tmp_kernel_op_49*tmp_kernel_op_72) + tmp_kernel_op_17*(tmp_kernel_op_52*tmp_kernel_op_74 + tmp_kernel_op_55*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_40*tmp_kernel_op_68 + tmp_kernel_op_43*tmp_kernel_op_69);
       const walberla::float64 tmp_kernel_op_96 = tmp_kernel_op_11*(tmp_kernel_op_61*tmp_kernel_op_71 + tmp_kernel_op_62*tmp_kernel_op_72) + tmp_kernel_op_17*(tmp_kernel_op_64*tmp_kernel_op_74 + tmp_kernel_op_65*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_58*tmp_kernel_op_68 + tmp_kernel_op_59*tmp_kernel_op_69);
       const walberla::float64 Dummy_62 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_2;
       const walberla::float64 Dummy_63 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const walberla::float64 Dummy_64 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_65 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_8 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_8;
       const walberla::float64 Dummy_66 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_8 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_8;
       const walberla::float64 Dummy_67 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_68 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_14 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_14;
       const walberla::float64 Dummy_69 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_14 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_14;
       const walberla::float64 Dummy_70 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_71 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_18;
       const walberla::float64 Dummy_72 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_18;
       const walberla::float64 Dummy_73 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_21;
       const walberla::float64 Dummy_74 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_21;
       const walberla::float64 Dummy_75 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_24;
       const walberla::float64 Dummy_76 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_24;
       const walberla::float64 Dummy_77 = Dummy_64*(Dummy_62*Dummy_71 + Dummy_63*Dummy_72) + Dummy_67*(Dummy_65*Dummy_73 + Dummy_66*Dummy_74) + Dummy_70*(Dummy_68*Dummy_75 + Dummy_69*Dummy_76);
       const walberla::float64 Dummy_78 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_28;
       const walberla::float64 Dummy_79 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_28;
       const walberla::float64 Dummy_80 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_31;
       const walberla::float64 Dummy_81 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_31;
       const walberla::float64 Dummy_82 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_34;
       const walberla::float64 Dummy_83 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_34;
       const walberla::float64 Dummy_84 = Dummy_64*(Dummy_62*Dummy_78 + Dummy_63*Dummy_79) + Dummy_67*(Dummy_65*Dummy_80 + Dummy_66*Dummy_81) + Dummy_70*(Dummy_68*Dummy_82 + Dummy_69*Dummy_83);
       const walberla::float64 Dummy_85 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_86 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_87 = Dummy_85 + Dummy_86;
       const walberla::float64 Dummy_88 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_89 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_90 = Dummy_88 + Dummy_89;
       const walberla::float64 Dummy_91 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_7;
       const walberla::float64 Dummy_92 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_6;
       const walberla::float64 Dummy_93 = Dummy_91 + Dummy_92;
       const walberla::float64 Dummy_94 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_7;
       const walberla::float64 Dummy_95 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_6;
       const walberla::float64 Dummy_96 = Dummy_94 + Dummy_95;
       const walberla::float64 Dummy_97 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_13;
       const walberla::float64 Dummy_98 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_12;
       const walberla::float64 Dummy_99 = Dummy_97 + Dummy_98;
       const walberla::float64 Dummy_100 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_13;
       const walberla::float64 Dummy_101 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_12;
       const walberla::float64 Dummy_102 = Dummy_100 + Dummy_101;
       const walberla::float64 Dummy_103 = Dummy_64*(Dummy_62*Dummy_87 + Dummy_63*Dummy_90) + Dummy_67*(Dummy_65*Dummy_93 + Dummy_66*Dummy_96) + Dummy_70*(Dummy_102*Dummy_69 + Dummy_68*Dummy_99);
       const walberla::float64 Dummy_104 = -Dummy_85 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_57;
       const walberla::float64 Dummy_105 = -Dummy_88 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_57;
       const walberla::float64 Dummy_106 = -Dummy_91 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_60;
       const walberla::float64 Dummy_107 = -Dummy_94 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_60;
       const walberla::float64 Dummy_108 = -Dummy_97 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_63;
       const walberla::float64 Dummy_109 = -Dummy_100 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_63;
       const walberla::float64 Dummy_110 = Dummy_64*(Dummy_104*Dummy_62 + Dummy_105*Dummy_63) + Dummy_67*(Dummy_106*Dummy_65 + Dummy_107*Dummy_66) + Dummy_70*(Dummy_108*Dummy_68 + Dummy_109*Dummy_69);
       const walberla::float64 Dummy_111 = -Dummy_86 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_67;
       const walberla::float64 Dummy_112 = -Dummy_89 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_67;
       const walberla::float64 Dummy_113 = -Dummy_92 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_70;
       const walberla::float64 Dummy_114 = -Dummy_95 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_70;
       const walberla::float64 Dummy_115 = -Dummy_98 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_73;
       const walberla::float64 Dummy_116 = -Dummy_101 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_73;
       const walberla::float64 Dummy_117 = Dummy_64*(Dummy_111*Dummy_62 + Dummy_112*Dummy_63) + Dummy_67*(Dummy_113*Dummy_65 + Dummy_114*Dummy_66) + Dummy_70*(Dummy_115*Dummy_68 + Dummy_116*Dummy_69);
       const walberla::float64 Dummy_118 = (jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE);
       const walberla::float64 Dummy_119 = (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE);
       const walberla::float64 Dummy_120 = Dummy_64*(Dummy_71*Dummy_78 + Dummy_72*Dummy_79) + Dummy_67*(Dummy_73*Dummy_80 + Dummy_74*Dummy_81) + Dummy_70*(Dummy_75*Dummy_82 + Dummy_76*Dummy_83);
       const walberla::float64 Dummy_121 = Dummy_64*(Dummy_71*Dummy_87 + Dummy_72*Dummy_90) + Dummy_67*(Dummy_73*Dummy_93 + Dummy_74*Dummy_96) + Dummy_70*(Dummy_102*Dummy_76 + Dummy_75*Dummy_99);
       const walberla::float64 Dummy_122 = Dummy_64*(Dummy_104*Dummy_71 + Dummy_105*Dummy_72) + Dummy_67*(Dummy_106*Dummy_73 + Dummy_107*Dummy_74) + Dummy_70*(Dummy_108*Dummy_75 + Dummy_109*Dummy_76);
       const walberla::float64 Dummy_123 = Dummy_64*(Dummy_111*Dummy_71 + Dummy_112*Dummy_72) + Dummy_67*(Dummy_113*Dummy_73 + Dummy_114*Dummy_74) + Dummy_70*(Dummy_115*Dummy_75 + Dummy_116*Dummy_76);
       const walberla::float64 Dummy_124 = (jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE);
       const walberla::float64 Dummy_125 = (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE);
       const walberla::float64 Dummy_126 = Dummy_64*(Dummy_78*Dummy_87 + Dummy_79*Dummy_90) + Dummy_67*(Dummy_80*Dummy_93 + Dummy_81*Dummy_96) + Dummy_70*(Dummy_102*Dummy_83 + Dummy_82*Dummy_99);
       const walberla::float64 Dummy_127 = Dummy_64*(Dummy_104*Dummy_78 + Dummy_105*Dummy_79) + Dummy_67*(Dummy_106*Dummy_80 + Dummy_107*Dummy_81) + Dummy_70*(Dummy_108*Dummy_82 + Dummy_109*Dummy_83);
       const walberla::float64 Dummy_128 = Dummy_64*(Dummy_111*Dummy_78 + Dummy_112*Dummy_79) + Dummy_67*(Dummy_113*Dummy_80 + Dummy_114*Dummy_81) + Dummy_70*(Dummy_115*Dummy_82 + Dummy_116*Dummy_83);
       const walberla::float64 Dummy_129 = Dummy_64*(Dummy_104*Dummy_87 + Dummy_105*Dummy_90) + Dummy_67*(Dummy_106*Dummy_93 + Dummy_107*Dummy_96) + Dummy_70*(Dummy_102*Dummy_109 + Dummy_108*Dummy_99);
       const walberla::float64 Dummy_130 = Dummy_64*(Dummy_111*Dummy_87 + Dummy_112*Dummy_90) + Dummy_67*(Dummy_113*Dummy_93 + Dummy_114*Dummy_96) + Dummy_70*(Dummy_102*Dummy_116 + Dummy_115*Dummy_99);
       const walberla::float64 Dummy_131 = Dummy_64*(Dummy_104*Dummy_111 + Dummy_105*Dummy_112) + Dummy_67*(Dummy_106*Dummy_113 + Dummy_107*Dummy_114) + Dummy_70*(Dummy_108*Dummy_115 + Dummy_109*Dummy_116);
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const walberla::float64 src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const walberla::float64 src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const walberla::float64 src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const walberla::float64 src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const walberla::float64 elMatVec_0 = src_dof_0*(tmp_kernel_op_11*((tmp_kernel_op_10*tmp_kernel_op_10) + (tmp_kernel_op_9*tmp_kernel_op_9)) + tmp_kernel_op_17*((tmp_kernel_op_15*tmp_kernel_op_15) + (tmp_kernel_op_16*tmp_kernel_op_16)) + tmp_kernel_op_5*((tmp_kernel_op_3*tmp_kernel_op_3) + (tmp_kernel_op_4*tmp_kernel_op_4))) + src_dof_1*tmp_kernel_op_27 + src_dof_2*tmp_kernel_op_37 + src_dof_3*tmp_kernel_op_56 + src_dof_4*tmp_kernel_op_66 + src_dof_5*tmp_kernel_op_76;
             const walberla::float64 elMatVec_1 = src_dof_0*tmp_kernel_op_27 + src_dof_1*(tmp_kernel_op_11*(tmp_kernel_op_77*tmp_kernel_op_80 + tmp_kernel_op_79*tmp_kernel_op_80) + tmp_kernel_op_17*(tmp_kernel_op_77*tmp_kernel_op_81 + tmp_kernel_op_79*tmp_kernel_op_81) + tmp_kernel_op_5*(tmp_kernel_op_77*tmp_kernel_op_78 + tmp_kernel_op_78*tmp_kernel_op_79)) + src_dof_2*tmp_kernel_op_82 + src_dof_3*tmp_kernel_op_83 + src_dof_4*tmp_kernel_op_84 + src_dof_5*tmp_kernel_op_85;
             const walberla::float64 elMatVec_2 = src_dof_0*tmp_kernel_op_37 + src_dof_1*tmp_kernel_op_82 + src_dof_2*(tmp_kernel_op_11*(tmp_kernel_op_86*tmp_kernel_op_89 + tmp_kernel_op_88*tmp_kernel_op_89) + tmp_kernel_op_17*(tmp_kernel_op_86*tmp_kernel_op_90 + tmp_kernel_op_88*tmp_kernel_op_90) + tmp_kernel_op_5*(tmp_kernel_op_86*tmp_kernel_op_87 + tmp_kernel_op_87*tmp_kernel_op_88)) + src_dof_3*tmp_kernel_op_91 + src_dof_4*tmp_kernel_op_92 + src_dof_5*tmp_kernel_op_93;
             const walberla::float64 elMatVec_3 = src_dof_0*tmp_kernel_op_56 + src_dof_1*tmp_kernel_op_83 + src_dof_2*tmp_kernel_op_91 + src_dof_3*(tmp_kernel_op_11*((tmp_kernel_op_46*tmp_kernel_op_46) + (tmp_kernel_op_49*tmp_kernel_op_49)) + tmp_kernel_op_17*((tmp_kernel_op_52*tmp_kernel_op_52) + (tmp_kernel_op_55*tmp_kernel_op_55)) + tmp_kernel_op_5*((tmp_kernel_op_40*tmp_kernel_op_40) + (tmp_kernel_op_43*tmp_kernel_op_43))) + src_dof_4*tmp_kernel_op_94 + src_dof_5*tmp_kernel_op_95;
             const walberla::float64 elMatVec_4 = src_dof_0*tmp_kernel_op_66 + src_dof_1*tmp_kernel_op_84 + src_dof_2*tmp_kernel_op_92 + src_dof_3*tmp_kernel_op_94 + src_dof_4*(tmp_kernel_op_11*((tmp_kernel_op_61*tmp_kernel_op_61) + (tmp_kernel_op_62*tmp_kernel_op_62)) + tmp_kernel_op_17*((tmp_kernel_op_64*tmp_kernel_op_64) + (tmp_kernel_op_65*tmp_kernel_op_65)) + tmp_kernel_op_5*((tmp_kernel_op_58*tmp_kernel_op_58) + (tmp_kernel_op_59*tmp_kernel_op_59))) + src_dof_5*tmp_kernel_op_96;
             const walberla::float64 elMatVec_5 = src_dof_0*tmp_kernel_op_76 + src_dof_1*tmp_kernel_op_85 + src_dof_2*tmp_kernel_op_93 + src_dof_3*tmp_kernel_op_95 + src_dof_4*tmp_kernel_op_96 + src_dof_5*(tmp_kernel_op_11*((tmp_kernel_op_71*tmp_kernel_op_71) + (tmp_kernel_op_72*tmp_kernel_op_72)) + tmp_kernel_op_17*((tmp_kernel_op_74*tmp_kernel_op_74) + (tmp_kernel_op_75*tmp_kernel_op_75)) + tmp_kernel_op_5*((tmp_kernel_op_68*tmp_kernel_op_68) + (tmp_kernel_op_69*tmp_kernel_op_69)));
             {
                {
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                }
             }
             const walberla::float64 Dummy_56 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const walberla::float64 Dummy_57 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 Dummy_58 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const walberla::float64 Dummy_59 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 Dummy_60 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const walberla::float64 Dummy_61 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const walberla::float64 Dummy_132 = Dummy_103*Dummy_59 + Dummy_110*Dummy_60 + Dummy_117*Dummy_61 + Dummy_56*(Dummy_64*((Dummy_62*Dummy_62) + (Dummy_63*Dummy_63)) + Dummy_67*((Dummy_65*Dummy_65) + (Dummy_66*Dummy_66)) + Dummy_70*((Dummy_68*Dummy_68) + (Dummy_69*Dummy_69))) + Dummy_57*Dummy_77 + Dummy_58*Dummy_84;
             const walberla::float64 Dummy_133 = Dummy_120*Dummy_58 + Dummy_121*Dummy_59 + Dummy_122*Dummy_60 + Dummy_123*Dummy_61 + Dummy_56*Dummy_77 + Dummy_57*(Dummy_64*(Dummy_118*tmp_kernel_op_78 + Dummy_119*tmp_kernel_op_78) + Dummy_67*(Dummy_118*tmp_kernel_op_80 + Dummy_119*tmp_kernel_op_80) + Dummy_70*(Dummy_118*tmp_kernel_op_81 + Dummy_119*tmp_kernel_op_81));
             const walberla::float64 Dummy_134 = Dummy_120*Dummy_57 + Dummy_126*Dummy_59 + Dummy_127*Dummy_60 + Dummy_128*Dummy_61 + Dummy_56*Dummy_84 + Dummy_58*(Dummy_64*(Dummy_124*tmp_kernel_op_87 + Dummy_125*tmp_kernel_op_87) + Dummy_67*(Dummy_124*tmp_kernel_op_89 + Dummy_125*tmp_kernel_op_89) + Dummy_70*(Dummy_124*tmp_kernel_op_90 + Dummy_125*tmp_kernel_op_90));
             const walberla::float64 Dummy_135 = Dummy_103*Dummy_56 + Dummy_121*Dummy_57 + Dummy_126*Dummy_58 + Dummy_129*Dummy_60 + Dummy_130*Dummy_61 + Dummy_59*(Dummy_64*((Dummy_87*Dummy_87) + (Dummy_90*Dummy_90)) + Dummy_67*((Dummy_93*Dummy_93) + (Dummy_96*Dummy_96)) + Dummy_70*((Dummy_102*Dummy_102) + (Dummy_99*Dummy_99)));
             const walberla::float64 Dummy_136 = Dummy_110*Dummy_56 + Dummy_122*Dummy_57 + Dummy_127*Dummy_58 + Dummy_129*Dummy_59 + Dummy_131*Dummy_61 + Dummy_60*(Dummy_64*((Dummy_104*Dummy_104) + (Dummy_105*Dummy_105)) + Dummy_67*((Dummy_106*Dummy_106) + (Dummy_107*Dummy_107)) + Dummy_70*((Dummy_108*Dummy_108) + (Dummy_109*Dummy_109)));
             const walberla::float64 Dummy_137 = Dummy_117*Dummy_56 + Dummy_123*Dummy_57 + Dummy_128*Dummy_58 + Dummy_130*Dummy_59 + Dummy_131*Dummy_60 + Dummy_61*(Dummy_64*((Dummy_111*Dummy_111) + (Dummy_112*Dummy_112)) + Dummy_67*((Dummy_113*Dummy_113) + (Dummy_114*Dummy_114)) + Dummy_70*((Dummy_115*Dummy_115) + (Dummy_116*Dummy_116)));
             {
                {
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_132 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_133 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_134 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_135 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = Dummy_136 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = Dummy_137 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                }
             }
          }
          const walberla::float64 src_dof_0 = _data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const walberla::float64 src_dof_1 = _data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
          const walberla::float64 src_dof_2 = _data_srcVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
          const walberla::float64 src_dof_3 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
          const walberla::float64 src_dof_4 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
          const walberla::float64 src_dof_5 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const walberla::float64 elMatVec_0 = src_dof_0*(tmp_kernel_op_11*((tmp_kernel_op_10*tmp_kernel_op_10) + (tmp_kernel_op_9*tmp_kernel_op_9)) + tmp_kernel_op_17*((tmp_kernel_op_15*tmp_kernel_op_15) + (tmp_kernel_op_16*tmp_kernel_op_16)) + tmp_kernel_op_5*((tmp_kernel_op_3*tmp_kernel_op_3) + (tmp_kernel_op_4*tmp_kernel_op_4))) + src_dof_1*tmp_kernel_op_27 + src_dof_2*tmp_kernel_op_37 + src_dof_3*tmp_kernel_op_56 + src_dof_4*tmp_kernel_op_66 + src_dof_5*tmp_kernel_op_76;
          const walberla::float64 elMatVec_1 = src_dof_0*tmp_kernel_op_27 + src_dof_1*(tmp_kernel_op_11*(tmp_kernel_op_77*tmp_kernel_op_80 + tmp_kernel_op_79*tmp_kernel_op_80) + tmp_kernel_op_17*(tmp_kernel_op_77*tmp_kernel_op_81 + tmp_kernel_op_79*tmp_kernel_op_81) + tmp_kernel_op_5*(tmp_kernel_op_77*tmp_kernel_op_78 + tmp_kernel_op_78*tmp_kernel_op_79)) + src_dof_2*tmp_kernel_op_82 + src_dof_3*tmp_kernel_op_83 + src_dof_4*tmp_kernel_op_84 + src_dof_5*tmp_kernel_op_85;
          const walberla::float64 elMatVec_2 = src_dof_0*tmp_kernel_op_37 + src_dof_1*tmp_kernel_op_82 + src_dof_2*(tmp_kernel_op_11*(tmp_kernel_op_86*tmp_kernel_op_89 + tmp_kernel_op_88*tmp_kernel_op_89) + tmp_kernel_op_17*(tmp_kernel_op_86*tmp_kernel_op_90 + tmp_kernel_op_88*tmp_kernel_op_90) + tmp_kernel_op_5*(tmp_kernel_op_86*tmp_kernel_op_87 + tmp_kernel_op_87*tmp_kernel_op_88)) + src_dof_3*tmp_kernel_op_91 + src_dof_4*tmp_kernel_op_92 + src_dof_5*tmp_kernel_op_93;
          const walberla::float64 elMatVec_3 = src_dof_0*tmp_kernel_op_56 + src_dof_1*tmp_kernel_op_83 + src_dof_2*tmp_kernel_op_91 + src_dof_3*(tmp_kernel_op_11*((tmp_kernel_op_46*tmp_kernel_op_46) + (tmp_kernel_op_49*tmp_kernel_op_49)) + tmp_kernel_op_17*((tmp_kernel_op_52*tmp_kernel_op_52) + (tmp_kernel_op_55*tmp_kernel_op_55)) + tmp_kernel_op_5*((tmp_kernel_op_40*tmp_kernel_op_40) + (tmp_kernel_op_43*tmp_kernel_op_43))) + src_dof_4*tmp_kernel_op_94 + src_dof_5*tmp_kernel_op_95;
          const walberla::float64 elMatVec_4 = src_dof_0*tmp_kernel_op_66 + src_dof_1*tmp_kernel_op_84 + src_dof_2*tmp_kernel_op_92 + src_dof_3*tmp_kernel_op_94 + src_dof_4*(tmp_kernel_op_11*((tmp_kernel_op_61*tmp_kernel_op_61) + (tmp_kernel_op_62*tmp_kernel_op_62)) + tmp_kernel_op_17*((tmp_kernel_op_64*tmp_kernel_op_64) + (tmp_kernel_op_65*tmp_kernel_op_65)) + tmp_kernel_op_5*((tmp_kernel_op_58*tmp_kernel_op_58) + (tmp_kernel_op_59*tmp_kernel_op_59))) + src_dof_5*tmp_kernel_op_96;
          const walberla::float64 elMatVec_5 = src_dof_0*tmp_kernel_op_76 + src_dof_1*tmp_kernel_op_85 + src_dof_2*tmp_kernel_op_93 + src_dof_3*tmp_kernel_op_95 + src_dof_4*tmp_kernel_op_96 + src_dof_5*(tmp_kernel_op_11*((tmp_kernel_op_71*tmp_kernel_op_71) + (tmp_kernel_op_72*tmp_kernel_op_72)) + tmp_kernel_op_17*((tmp_kernel_op_74*tmp_kernel_op_74) + (tmp_kernel_op_75*tmp_kernel_op_75)) + tmp_kernel_op_5*((tmp_kernel_op_68*tmp_kernel_op_68) + (tmp_kernel_op_69*tmp_kernel_op_69)));
          {
             {
                {
                   _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatVec_0 + _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                   _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_1 + _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dstVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1] = elMatVec_2 + _data_dstVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
                   _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1] = elMatVec_3 + _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
                   _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1] = elMatVec_4 + _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
                   _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatVec_5 + _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
