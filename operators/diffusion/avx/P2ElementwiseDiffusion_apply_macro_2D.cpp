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

void P2ElementwiseDiffusion::apply_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
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
       const real_t tmp_kernel_op_0 = 0.66666666666666663;
       const real_t tmp_kernel_op_1 = 2.6666666666666665;
       const real_t tmp_kernel_op_2 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const real_t tmp_kernel_op_3 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_4 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_5 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_6 = 2.6666666666666665;
       const real_t tmp_kernel_op_7 = 0.66666666666666663;
       const real_t tmp_kernel_op_8 = tmp_kernel_op_6 + tmp_kernel_op_7 - 3.0;
       const real_t tmp_kernel_op_9 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_8 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_10 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_8 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_11 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_12 = 0.66666666666666663;
       const real_t tmp_kernel_op_13 = 0.66666666666666663;
       const real_t tmp_kernel_op_14 = tmp_kernel_op_12 + tmp_kernel_op_13 - 3.0;
       const real_t tmp_kernel_op_15 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_14 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_16 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_14 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_17 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_18 = tmp_kernel_op_0 - 1.0;
       const real_t tmp_kernel_op_19 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_18;
       const real_t tmp_kernel_op_20 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_18;
       const real_t tmp_kernel_op_21 = tmp_kernel_op_6 - 1.0;
       const real_t tmp_kernel_op_22 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_21;
       const real_t tmp_kernel_op_23 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_21;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_12 - 1.0;
       const real_t tmp_kernel_op_25 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_26 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_24;
       const real_t tmp_kernel_op_27 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_23 + tmp_kernel_op_22*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_25 + tmp_kernel_op_16*tmp_kernel_op_26) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_3 + tmp_kernel_op_20*tmp_kernel_op_4);
       const real_t tmp_kernel_op_28 = tmp_kernel_op_1 - 1.0;
       const real_t tmp_kernel_op_29 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_28;
       const real_t tmp_kernel_op_30 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_28;
       const real_t tmp_kernel_op_31 = tmp_kernel_op_7 - 1.0;
       const real_t tmp_kernel_op_32 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_31;
       const real_t tmp_kernel_op_33 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_31;
       const real_t tmp_kernel_op_34 = tmp_kernel_op_13 - 1.0;
       const real_t tmp_kernel_op_35 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_34;
       const real_t tmp_kernel_op_36 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_34;
       const real_t tmp_kernel_op_37 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_33 + tmp_kernel_op_32*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_35 + tmp_kernel_op_16*tmp_kernel_op_36) + tmp_kernel_op_5*(tmp_kernel_op_29*tmp_kernel_op_3 + tmp_kernel_op_30*tmp_kernel_op_4);
       const real_t tmp_kernel_op_38 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_39 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_40 = tmp_kernel_op_38 + tmp_kernel_op_39;
       const real_t tmp_kernel_op_41 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_42 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_43 = tmp_kernel_op_41 + tmp_kernel_op_42;
       const real_t tmp_kernel_op_44 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_45 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_6;
       const real_t tmp_kernel_op_46 = tmp_kernel_op_44 + tmp_kernel_op_45;
       const real_t tmp_kernel_op_47 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_48 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_6;
       const real_t tmp_kernel_op_49 = tmp_kernel_op_47 + tmp_kernel_op_48;
       const real_t tmp_kernel_op_50 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_51 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_12;
       const real_t tmp_kernel_op_52 = tmp_kernel_op_50 + tmp_kernel_op_51;
       const real_t tmp_kernel_op_53 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_54 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_12;
       const real_t tmp_kernel_op_55 = tmp_kernel_op_53 + tmp_kernel_op_54;
       const real_t tmp_kernel_op_56 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_49 + tmp_kernel_op_46*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_52 + tmp_kernel_op_16*tmp_kernel_op_55) + tmp_kernel_op_5*(tmp_kernel_op_3*tmp_kernel_op_40 + tmp_kernel_op_4*tmp_kernel_op_43);
       const real_t tmp_kernel_op_57 = -tmp_kernel_op_0 - 1.333333333333333;
       const real_t tmp_kernel_op_58 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_57 - tmp_kernel_op_38;
       const real_t tmp_kernel_op_59 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_57 - tmp_kernel_op_41;
       const real_t tmp_kernel_op_60 = -tmp_kernel_op_6 + 2.666666666666667;
       const real_t tmp_kernel_op_61 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_60 - tmp_kernel_op_44;
       const real_t tmp_kernel_op_62 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_60 - tmp_kernel_op_47;
       const real_t tmp_kernel_op_63 = -tmp_kernel_op_12 + 2.666666666666667;
       const real_t tmp_kernel_op_64 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_63 - tmp_kernel_op_50;
       const real_t tmp_kernel_op_65 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_63 - tmp_kernel_op_53;
       const real_t tmp_kernel_op_66 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_62 + tmp_kernel_op_61*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_64 + tmp_kernel_op_16*tmp_kernel_op_65) + tmp_kernel_op_5*(tmp_kernel_op_3*tmp_kernel_op_58 + tmp_kernel_op_4*tmp_kernel_op_59);
       const real_t tmp_kernel_op_67 = -tmp_kernel_op_1 + 2.666666666666667;
       const real_t tmp_kernel_op_68 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_67 - tmp_kernel_op_39;
       const real_t tmp_kernel_op_69 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_67 - tmp_kernel_op_42;
       const real_t tmp_kernel_op_70 = -tmp_kernel_op_7 - 1.333333333333333;
       const real_t tmp_kernel_op_71 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_70 - tmp_kernel_op_45;
       const real_t tmp_kernel_op_72 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_70 - tmp_kernel_op_48;
       const real_t tmp_kernel_op_73 = -tmp_kernel_op_13 + 2.666666666666667;
       const real_t tmp_kernel_op_74 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_73 - tmp_kernel_op_51;
       const real_t tmp_kernel_op_75 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_73 - tmp_kernel_op_54;
       const real_t tmp_kernel_op_76 = tmp_kernel_op_11*(tmp_kernel_op_10*tmp_kernel_op_72 + tmp_kernel_op_71*tmp_kernel_op_9) + tmp_kernel_op_17*(tmp_kernel_op_15*tmp_kernel_op_74 + tmp_kernel_op_16*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_3*tmp_kernel_op_68 + tmp_kernel_op_4*tmp_kernel_op_69);
       const real_t tmp_kernel_op_77 = (jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY);
       const real_t tmp_kernel_op_78 = (tmp_kernel_op_18*tmp_kernel_op_18);
       const real_t tmp_kernel_op_79 = (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY);
       const real_t tmp_kernel_op_80 = (tmp_kernel_op_21*tmp_kernel_op_21);
       const real_t tmp_kernel_op_81 = (tmp_kernel_op_24*tmp_kernel_op_24);
       const real_t tmp_kernel_op_82 = tmp_kernel_op_11*(tmp_kernel_op_22*tmp_kernel_op_32 + tmp_kernel_op_23*tmp_kernel_op_33) + tmp_kernel_op_17*(tmp_kernel_op_25*tmp_kernel_op_35 + tmp_kernel_op_26*tmp_kernel_op_36) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_29 + tmp_kernel_op_20*tmp_kernel_op_30);
       const real_t tmp_kernel_op_83 = tmp_kernel_op_11*(tmp_kernel_op_22*tmp_kernel_op_46 + tmp_kernel_op_23*tmp_kernel_op_49) + tmp_kernel_op_17*(tmp_kernel_op_25*tmp_kernel_op_52 + tmp_kernel_op_26*tmp_kernel_op_55) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_40 + tmp_kernel_op_20*tmp_kernel_op_43);
       const real_t tmp_kernel_op_84 = tmp_kernel_op_11*(tmp_kernel_op_22*tmp_kernel_op_61 + tmp_kernel_op_23*tmp_kernel_op_62) + tmp_kernel_op_17*(tmp_kernel_op_25*tmp_kernel_op_64 + tmp_kernel_op_26*tmp_kernel_op_65) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_58 + tmp_kernel_op_20*tmp_kernel_op_59);
       const real_t tmp_kernel_op_85 = tmp_kernel_op_11*(tmp_kernel_op_22*tmp_kernel_op_71 + tmp_kernel_op_23*tmp_kernel_op_72) + tmp_kernel_op_17*(tmp_kernel_op_25*tmp_kernel_op_74 + tmp_kernel_op_26*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_19*tmp_kernel_op_68 + tmp_kernel_op_20*tmp_kernel_op_69);
       const real_t tmp_kernel_op_86 = (jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY);
       const real_t tmp_kernel_op_87 = (tmp_kernel_op_28*tmp_kernel_op_28);
       const real_t tmp_kernel_op_88 = (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY);
       const real_t tmp_kernel_op_89 = (tmp_kernel_op_31*tmp_kernel_op_31);
       const real_t tmp_kernel_op_90 = (tmp_kernel_op_34*tmp_kernel_op_34);
       const real_t tmp_kernel_op_91 = tmp_kernel_op_11*(tmp_kernel_op_32*tmp_kernel_op_46 + tmp_kernel_op_33*tmp_kernel_op_49) + tmp_kernel_op_17*(tmp_kernel_op_35*tmp_kernel_op_52 + tmp_kernel_op_36*tmp_kernel_op_55) + tmp_kernel_op_5*(tmp_kernel_op_29*tmp_kernel_op_40 + tmp_kernel_op_30*tmp_kernel_op_43);
       const real_t tmp_kernel_op_92 = tmp_kernel_op_11*(tmp_kernel_op_32*tmp_kernel_op_61 + tmp_kernel_op_33*tmp_kernel_op_62) + tmp_kernel_op_17*(tmp_kernel_op_35*tmp_kernel_op_64 + tmp_kernel_op_36*tmp_kernel_op_65) + tmp_kernel_op_5*(tmp_kernel_op_29*tmp_kernel_op_58 + tmp_kernel_op_30*tmp_kernel_op_59);
       const real_t tmp_kernel_op_93 = tmp_kernel_op_11*(tmp_kernel_op_32*tmp_kernel_op_71 + tmp_kernel_op_33*tmp_kernel_op_72) + tmp_kernel_op_17*(tmp_kernel_op_35*tmp_kernel_op_74 + tmp_kernel_op_36*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_29*tmp_kernel_op_68 + tmp_kernel_op_30*tmp_kernel_op_69);
       const real_t tmp_kernel_op_94 = tmp_kernel_op_11*(tmp_kernel_op_46*tmp_kernel_op_61 + tmp_kernel_op_49*tmp_kernel_op_62) + tmp_kernel_op_17*(tmp_kernel_op_52*tmp_kernel_op_64 + tmp_kernel_op_55*tmp_kernel_op_65) + tmp_kernel_op_5*(tmp_kernel_op_40*tmp_kernel_op_58 + tmp_kernel_op_43*tmp_kernel_op_59);
       const real_t tmp_kernel_op_95 = tmp_kernel_op_11*(tmp_kernel_op_46*tmp_kernel_op_71 + tmp_kernel_op_49*tmp_kernel_op_72) + tmp_kernel_op_17*(tmp_kernel_op_52*tmp_kernel_op_74 + tmp_kernel_op_55*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_40*tmp_kernel_op_68 + tmp_kernel_op_43*tmp_kernel_op_69);
       const real_t tmp_kernel_op_96 = tmp_kernel_op_11*(tmp_kernel_op_61*tmp_kernel_op_71 + tmp_kernel_op_62*tmp_kernel_op_72) + tmp_kernel_op_17*(tmp_kernel_op_64*tmp_kernel_op_74 + tmp_kernel_op_65*tmp_kernel_op_75) + tmp_kernel_op_5*(tmp_kernel_op_58*tmp_kernel_op_68 + tmp_kernel_op_59*tmp_kernel_op_69);
       const real_t Dummy_62 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_2;
       const real_t Dummy_63 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const real_t Dummy_64 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_65 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_8 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_8;
       const real_t Dummy_66 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_8 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_8;
       const real_t Dummy_67 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_68 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_14 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_14;
       const real_t Dummy_69 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_14 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_14;
       const real_t Dummy_70 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_71 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_18;
       const real_t Dummy_72 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_18;
       const real_t Dummy_73 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_21;
       const real_t Dummy_74 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_21;
       const real_t Dummy_75 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_24;
       const real_t Dummy_76 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_24;
       const real_t Dummy_77 = Dummy_64*(Dummy_62*Dummy_71 + Dummy_63*Dummy_72) + Dummy_67*(Dummy_65*Dummy_73 + Dummy_66*Dummy_74) + Dummy_70*(Dummy_68*Dummy_75 + Dummy_69*Dummy_76);
       const real_t Dummy_78 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_28;
       const real_t Dummy_79 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_28;
       const real_t Dummy_80 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_31;
       const real_t Dummy_81 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_31;
       const real_t Dummy_82 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_34;
       const real_t Dummy_83 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_34;
       const real_t Dummy_84 = Dummy_64*(Dummy_62*Dummy_78 + Dummy_63*Dummy_79) + Dummy_67*(Dummy_65*Dummy_80 + Dummy_66*Dummy_81) + Dummy_70*(Dummy_68*Dummy_82 + Dummy_69*Dummy_83);
       const real_t Dummy_85 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_1;
       const real_t Dummy_86 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_0;
       const real_t Dummy_87 = Dummy_85 + Dummy_86;
       const real_t Dummy_88 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const real_t Dummy_89 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const real_t Dummy_90 = Dummy_88 + Dummy_89;
       const real_t Dummy_91 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_7;
       const real_t Dummy_92 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_6;
       const real_t Dummy_93 = Dummy_91 + Dummy_92;
       const real_t Dummy_94 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_7;
       const real_t Dummy_95 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_6;
       const real_t Dummy_96 = Dummy_94 + Dummy_95;
       const real_t Dummy_97 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_13;
       const real_t Dummy_98 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_12;
       const real_t Dummy_99 = Dummy_97 + Dummy_98;
       const real_t Dummy_100 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_13;
       const real_t Dummy_101 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_12;
       const real_t Dummy_102 = Dummy_100 + Dummy_101;
       const real_t Dummy_103 = Dummy_64*(Dummy_62*Dummy_87 + Dummy_63*Dummy_90) + Dummy_67*(Dummy_65*Dummy_93 + Dummy_66*Dummy_96) + Dummy_70*(Dummy_102*Dummy_69 + Dummy_68*Dummy_99);
       const real_t Dummy_104 = -Dummy_85 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_57;
       const real_t Dummy_105 = -Dummy_88 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_57;
       const real_t Dummy_106 = -Dummy_91 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_60;
       const real_t Dummy_107 = -Dummy_94 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_60;
       const real_t Dummy_108 = -Dummy_97 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_63;
       const real_t Dummy_109 = -Dummy_100 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_63;
       const real_t Dummy_110 = Dummy_64*(Dummy_104*Dummy_62 + Dummy_105*Dummy_63) + Dummy_67*(Dummy_106*Dummy_65 + Dummy_107*Dummy_66) + Dummy_70*(Dummy_108*Dummy_68 + Dummy_109*Dummy_69);
       const real_t Dummy_111 = -Dummy_86 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_67;
       const real_t Dummy_112 = -Dummy_89 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_67;
       const real_t Dummy_113 = -Dummy_92 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_70;
       const real_t Dummy_114 = -Dummy_95 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_70;
       const real_t Dummy_115 = -Dummy_98 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_73;
       const real_t Dummy_116 = -Dummy_101 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_73;
       const real_t Dummy_117 = Dummy_64*(Dummy_111*Dummy_62 + Dummy_112*Dummy_63) + Dummy_67*(Dummy_113*Dummy_65 + Dummy_114*Dummy_66) + Dummy_70*(Dummy_115*Dummy_68 + Dummy_116*Dummy_69);
       const real_t Dummy_118 = (jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE);
       const real_t Dummy_119 = (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE);
       const real_t Dummy_120 = Dummy_64*(Dummy_71*Dummy_78 + Dummy_72*Dummy_79) + Dummy_67*(Dummy_73*Dummy_80 + Dummy_74*Dummy_81) + Dummy_70*(Dummy_75*Dummy_82 + Dummy_76*Dummy_83);
       const real_t Dummy_121 = Dummy_64*(Dummy_71*Dummy_87 + Dummy_72*Dummy_90) + Dummy_67*(Dummy_73*Dummy_93 + Dummy_74*Dummy_96) + Dummy_70*(Dummy_102*Dummy_76 + Dummy_75*Dummy_99);
       const real_t Dummy_122 = Dummy_64*(Dummy_104*Dummy_71 + Dummy_105*Dummy_72) + Dummy_67*(Dummy_106*Dummy_73 + Dummy_107*Dummy_74) + Dummy_70*(Dummy_108*Dummy_75 + Dummy_109*Dummy_76);
       const real_t Dummy_123 = Dummy_64*(Dummy_111*Dummy_71 + Dummy_112*Dummy_72) + Dummy_67*(Dummy_113*Dummy_73 + Dummy_114*Dummy_74) + Dummy_70*(Dummy_115*Dummy_75 + Dummy_116*Dummy_76);
       const real_t Dummy_124 = (jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE);
       const real_t Dummy_125 = (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE);
       const real_t Dummy_126 = Dummy_64*(Dummy_78*Dummy_87 + Dummy_79*Dummy_90) + Dummy_67*(Dummy_80*Dummy_93 + Dummy_81*Dummy_96) + Dummy_70*(Dummy_102*Dummy_83 + Dummy_82*Dummy_99);
       const real_t Dummy_127 = Dummy_64*(Dummy_104*Dummy_78 + Dummy_105*Dummy_79) + Dummy_67*(Dummy_106*Dummy_80 + Dummy_107*Dummy_81) + Dummy_70*(Dummy_108*Dummy_82 + Dummy_109*Dummy_83);
       const real_t Dummy_128 = Dummy_64*(Dummy_111*Dummy_78 + Dummy_112*Dummy_79) + Dummy_67*(Dummy_113*Dummy_80 + Dummy_114*Dummy_81) + Dummy_70*(Dummy_115*Dummy_82 + Dummy_116*Dummy_83);
       const real_t Dummy_129 = Dummy_64*(Dummy_104*Dummy_87 + Dummy_105*Dummy_90) + Dummy_67*(Dummy_106*Dummy_93 + Dummy_107*Dummy_96) + Dummy_70*(Dummy_102*Dummy_109 + Dummy_108*Dummy_99);
       const real_t Dummy_130 = Dummy_64*(Dummy_111*Dummy_87 + Dummy_112*Dummy_90) + Dummy_67*(Dummy_113*Dummy_93 + Dummy_114*Dummy_96) + Dummy_70*(Dummy_102*Dummy_116 + Dummy_115*Dummy_99);
       const real_t Dummy_131 = Dummy_64*(Dummy_104*Dummy_111 + Dummy_105*Dummy_112) + Dummy_67*(Dummy_106*Dummy_113 + Dummy_107*Dummy_114) + Dummy_70*(Dummy_108*Dummy_115 + Dummy_109*Dummy_116);
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_4 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d src_dof_5 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_10,tmp_kernel_op_10,tmp_kernel_op_10,tmp_kernel_op_10),_mm256_set_pd(tmp_kernel_op_10,tmp_kernel_op_10,tmp_kernel_op_10,tmp_kernel_op_10)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9),_mm256_set_pd(tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9,tmp_kernel_op_9))),_mm256_set_pd(tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15),_mm256_set_pd(tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15,tmp_kernel_op_15)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16),_mm256_set_pd(tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16,tmp_kernel_op_16))),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3),_mm256_set_pd(tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3,tmp_kernel_op_3)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4),_mm256_set_pd(tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4,tmp_kernel_op_4))),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5)))),_mm256_mul_pd(src_dof_1,_mm256_set_pd(tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27))),_mm256_mul_pd(src_dof_2,_mm256_set_pd(tmp_kernel_op_37,tmp_kernel_op_37,tmp_kernel_op_37,tmp_kernel_op_37))),_mm256_mul_pd(src_dof_3,_mm256_set_pd(tmp_kernel_op_56,tmp_kernel_op_56,tmp_kernel_op_56,tmp_kernel_op_56))),_mm256_mul_pd(src_dof_4,_mm256_set_pd(tmp_kernel_op_66,tmp_kernel_op_66,tmp_kernel_op_66,tmp_kernel_op_66))),_mm256_mul_pd(src_dof_5,_mm256_set_pd(tmp_kernel_op_76,tmp_kernel_op_76,tmp_kernel_op_76,tmp_kernel_op_76)));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_1,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_77,tmp_kernel_op_77,tmp_kernel_op_77,tmp_kernel_op_77),_mm256_set_pd(tmp_kernel_op_78,tmp_kernel_op_78,tmp_kernel_op_78,tmp_kernel_op_78)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_78,tmp_kernel_op_78,tmp_kernel_op_78,tmp_kernel_op_78),_mm256_set_pd(tmp_kernel_op_79,tmp_kernel_op_79,tmp_kernel_op_79,tmp_kernel_op_79))),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_77,tmp_kernel_op_77,tmp_kernel_op_77,tmp_kernel_op_77),_mm256_set_pd(tmp_kernel_op_80,tmp_kernel_op_80,tmp_kernel_op_80,tmp_kernel_op_80)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_79,tmp_kernel_op_79,tmp_kernel_op_79,tmp_kernel_op_79),_mm256_set_pd(tmp_kernel_op_80,tmp_kernel_op_80,tmp_kernel_op_80,tmp_kernel_op_80))),_mm256_set_pd(tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_77,tmp_kernel_op_77,tmp_kernel_op_77,tmp_kernel_op_77),_mm256_set_pd(tmp_kernel_op_81,tmp_kernel_op_81,tmp_kernel_op_81,tmp_kernel_op_81)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_79,tmp_kernel_op_79,tmp_kernel_op_79,tmp_kernel_op_79),_mm256_set_pd(tmp_kernel_op_81,tmp_kernel_op_81,tmp_kernel_op_81,tmp_kernel_op_81))),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))),_mm256_mul_pd(src_dof_0,_mm256_set_pd(tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27,tmp_kernel_op_27))),_mm256_mul_pd(src_dof_2,_mm256_set_pd(tmp_kernel_op_82,tmp_kernel_op_82,tmp_kernel_op_82,tmp_kernel_op_82))),_mm256_mul_pd(src_dof_3,_mm256_set_pd(tmp_kernel_op_83,tmp_kernel_op_83,tmp_kernel_op_83,tmp_kernel_op_83))),_mm256_mul_pd(src_dof_4,_mm256_set_pd(tmp_kernel_op_84,tmp_kernel_op_84,tmp_kernel_op_84,tmp_kernel_op_84))),_mm256_mul_pd(src_dof_5,_mm256_set_pd(tmp_kernel_op_85,tmp_kernel_op_85,tmp_kernel_op_85,tmp_kernel_op_85)));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_2,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_86,tmp_kernel_op_86,tmp_kernel_op_86,tmp_kernel_op_86),_mm256_set_pd(tmp_kernel_op_87,tmp_kernel_op_87,tmp_kernel_op_87,tmp_kernel_op_87)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_87,tmp_kernel_op_87,tmp_kernel_op_87,tmp_kernel_op_87),_mm256_set_pd(tmp_kernel_op_88,tmp_kernel_op_88,tmp_kernel_op_88,tmp_kernel_op_88))),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_86,tmp_kernel_op_86,tmp_kernel_op_86,tmp_kernel_op_86),_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_88,tmp_kernel_op_88,tmp_kernel_op_88,tmp_kernel_op_88),_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89))),_mm256_set_pd(tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_86,tmp_kernel_op_86,tmp_kernel_op_86,tmp_kernel_op_86),_mm256_set_pd(tmp_kernel_op_90,tmp_kernel_op_90,tmp_kernel_op_90,tmp_kernel_op_90)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_88,tmp_kernel_op_88,tmp_kernel_op_88,tmp_kernel_op_88),_mm256_set_pd(tmp_kernel_op_90,tmp_kernel_op_90,tmp_kernel_op_90,tmp_kernel_op_90))),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))),_mm256_mul_pd(src_dof_0,_mm256_set_pd(tmp_kernel_op_37,tmp_kernel_op_37,tmp_kernel_op_37,tmp_kernel_op_37))),_mm256_mul_pd(src_dof_1,_mm256_set_pd(tmp_kernel_op_82,tmp_kernel_op_82,tmp_kernel_op_82,tmp_kernel_op_82))),_mm256_mul_pd(src_dof_3,_mm256_set_pd(tmp_kernel_op_91,tmp_kernel_op_91,tmp_kernel_op_91,tmp_kernel_op_91))),_mm256_mul_pd(src_dof_4,_mm256_set_pd(tmp_kernel_op_92,tmp_kernel_op_92,tmp_kernel_op_92,tmp_kernel_op_92))),_mm256_mul_pd(src_dof_5,_mm256_set_pd(tmp_kernel_op_93,tmp_kernel_op_93,tmp_kernel_op_93,tmp_kernel_op_93)));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_3,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40),_mm256_set_pd(tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40,tmp_kernel_op_40)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43),_mm256_set_pd(tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43,tmp_kernel_op_43))),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46),_mm256_set_pd(tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46,tmp_kernel_op_46)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_49,tmp_kernel_op_49,tmp_kernel_op_49,tmp_kernel_op_49),_mm256_set_pd(tmp_kernel_op_49,tmp_kernel_op_49,tmp_kernel_op_49,tmp_kernel_op_49))),_mm256_set_pd(tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_52,tmp_kernel_op_52,tmp_kernel_op_52,tmp_kernel_op_52),_mm256_set_pd(tmp_kernel_op_52,tmp_kernel_op_52,tmp_kernel_op_52,tmp_kernel_op_52)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55),_mm256_set_pd(tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55,tmp_kernel_op_55))),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))),_mm256_mul_pd(src_dof_0,_mm256_set_pd(tmp_kernel_op_56,tmp_kernel_op_56,tmp_kernel_op_56,tmp_kernel_op_56))),_mm256_mul_pd(src_dof_1,_mm256_set_pd(tmp_kernel_op_83,tmp_kernel_op_83,tmp_kernel_op_83,tmp_kernel_op_83))),_mm256_mul_pd(src_dof_2,_mm256_set_pd(tmp_kernel_op_91,tmp_kernel_op_91,tmp_kernel_op_91,tmp_kernel_op_91))),_mm256_mul_pd(src_dof_4,_mm256_set_pd(tmp_kernel_op_94,tmp_kernel_op_94,tmp_kernel_op_94,tmp_kernel_op_94))),_mm256_mul_pd(src_dof_5,_mm256_set_pd(tmp_kernel_op_95,tmp_kernel_op_95,tmp_kernel_op_95,tmp_kernel_op_95)));
                const __m256d elMatVec_4 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_58,tmp_kernel_op_58,tmp_kernel_op_58,tmp_kernel_op_58),_mm256_set_pd(tmp_kernel_op_58,tmp_kernel_op_58,tmp_kernel_op_58,tmp_kernel_op_58)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_59,tmp_kernel_op_59,tmp_kernel_op_59,tmp_kernel_op_59),_mm256_set_pd(tmp_kernel_op_59,tmp_kernel_op_59,tmp_kernel_op_59,tmp_kernel_op_59))),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_61,tmp_kernel_op_61,tmp_kernel_op_61,tmp_kernel_op_61),_mm256_set_pd(tmp_kernel_op_61,tmp_kernel_op_61,tmp_kernel_op_61,tmp_kernel_op_61)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_62,tmp_kernel_op_62,tmp_kernel_op_62,tmp_kernel_op_62),_mm256_set_pd(tmp_kernel_op_62,tmp_kernel_op_62,tmp_kernel_op_62,tmp_kernel_op_62))),_mm256_set_pd(tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_64,tmp_kernel_op_64,tmp_kernel_op_64,tmp_kernel_op_64),_mm256_set_pd(tmp_kernel_op_64,tmp_kernel_op_64,tmp_kernel_op_64,tmp_kernel_op_64)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_65,tmp_kernel_op_65,tmp_kernel_op_65,tmp_kernel_op_65),_mm256_set_pd(tmp_kernel_op_65,tmp_kernel_op_65,tmp_kernel_op_65,tmp_kernel_op_65))),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))),_mm256_mul_pd(src_dof_0,_mm256_set_pd(tmp_kernel_op_66,tmp_kernel_op_66,tmp_kernel_op_66,tmp_kernel_op_66))),_mm256_mul_pd(src_dof_1,_mm256_set_pd(tmp_kernel_op_84,tmp_kernel_op_84,tmp_kernel_op_84,tmp_kernel_op_84))),_mm256_mul_pd(src_dof_2,_mm256_set_pd(tmp_kernel_op_92,tmp_kernel_op_92,tmp_kernel_op_92,tmp_kernel_op_92))),_mm256_mul_pd(src_dof_3,_mm256_set_pd(tmp_kernel_op_94,tmp_kernel_op_94,tmp_kernel_op_94,tmp_kernel_op_94))),_mm256_mul_pd(src_dof_5,_mm256_set_pd(tmp_kernel_op_96,tmp_kernel_op_96,tmp_kernel_op_96,tmp_kernel_op_96)));
                const __m256d elMatVec_5 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(src_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_68,tmp_kernel_op_68,tmp_kernel_op_68,tmp_kernel_op_68),_mm256_set_pd(tmp_kernel_op_68,tmp_kernel_op_68,tmp_kernel_op_68,tmp_kernel_op_68)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_69,tmp_kernel_op_69,tmp_kernel_op_69,tmp_kernel_op_69),_mm256_set_pd(tmp_kernel_op_69,tmp_kernel_op_69,tmp_kernel_op_69,tmp_kernel_op_69))),_mm256_set_pd(tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5,tmp_kernel_op_5)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_71,tmp_kernel_op_71,tmp_kernel_op_71,tmp_kernel_op_71),_mm256_set_pd(tmp_kernel_op_71,tmp_kernel_op_71,tmp_kernel_op_71,tmp_kernel_op_71)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_72,tmp_kernel_op_72,tmp_kernel_op_72,tmp_kernel_op_72),_mm256_set_pd(tmp_kernel_op_72,tmp_kernel_op_72,tmp_kernel_op_72,tmp_kernel_op_72))),_mm256_set_pd(tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11,tmp_kernel_op_11))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_74,tmp_kernel_op_74,tmp_kernel_op_74,tmp_kernel_op_74),_mm256_set_pd(tmp_kernel_op_74,tmp_kernel_op_74,tmp_kernel_op_74,tmp_kernel_op_74)),_mm256_mul_pd(_mm256_set_pd(tmp_kernel_op_75,tmp_kernel_op_75,tmp_kernel_op_75,tmp_kernel_op_75),_mm256_set_pd(tmp_kernel_op_75,tmp_kernel_op_75,tmp_kernel_op_75,tmp_kernel_op_75))),_mm256_set_pd(tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17,tmp_kernel_op_17)))),_mm256_mul_pd(src_dof_0,_mm256_set_pd(tmp_kernel_op_76,tmp_kernel_op_76,tmp_kernel_op_76,tmp_kernel_op_76))),_mm256_mul_pd(src_dof_1,_mm256_set_pd(tmp_kernel_op_85,tmp_kernel_op_85,tmp_kernel_op_85,tmp_kernel_op_85))),_mm256_mul_pd(src_dof_2,_mm256_set_pd(tmp_kernel_op_93,tmp_kernel_op_93,tmp_kernel_op_93,tmp_kernel_op_93))),_mm256_mul_pd(src_dof_3,_mm256_set_pd(tmp_kernel_op_95,tmp_kernel_op_95,tmp_kernel_op_95,tmp_kernel_op_95))),_mm256_mul_pd(src_dof_4,_mm256_set_pd(tmp_kernel_op_96,tmp_kernel_op_96,tmp_kernel_op_96,tmp_kernel_op_96)));
                {
                   {
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatVec_4,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_5,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                   }
                }
                const __m256d Dummy_56 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d Dummy_57 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_58 = _mm256_loadu_pd(& _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d Dummy_59 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_60 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d Dummy_61 = _mm256_loadu_pd(& _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d Dummy_132 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_56,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_62,Dummy_62,Dummy_62,Dummy_62),_mm256_set_pd(Dummy_62,Dummy_62,Dummy_62,Dummy_62)),_mm256_mul_pd(_mm256_set_pd(Dummy_63,Dummy_63,Dummy_63,Dummy_63),_mm256_set_pd(Dummy_63,Dummy_63,Dummy_63,Dummy_63))),_mm256_set_pd(Dummy_64,Dummy_64,Dummy_64,Dummy_64)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_65,Dummy_65,Dummy_65,Dummy_65),_mm256_set_pd(Dummy_65,Dummy_65,Dummy_65,Dummy_65)),_mm256_mul_pd(_mm256_set_pd(Dummy_66,Dummy_66,Dummy_66,Dummy_66),_mm256_set_pd(Dummy_66,Dummy_66,Dummy_66,Dummy_66))),_mm256_set_pd(Dummy_67,Dummy_67,Dummy_67,Dummy_67))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_68,Dummy_68,Dummy_68,Dummy_68),_mm256_set_pd(Dummy_68,Dummy_68,Dummy_68,Dummy_68)),_mm256_mul_pd(_mm256_set_pd(Dummy_69,Dummy_69,Dummy_69,Dummy_69),_mm256_set_pd(Dummy_69,Dummy_69,Dummy_69,Dummy_69))),_mm256_set_pd(Dummy_70,Dummy_70,Dummy_70,Dummy_70)))),_mm256_mul_pd(Dummy_59,_mm256_set_pd(Dummy_103,Dummy_103,Dummy_103,Dummy_103))),_mm256_mul_pd(Dummy_60,_mm256_set_pd(Dummy_110,Dummy_110,Dummy_110,Dummy_110))),_mm256_mul_pd(Dummy_61,_mm256_set_pd(Dummy_117,Dummy_117,Dummy_117,Dummy_117))),_mm256_mul_pd(Dummy_57,_mm256_set_pd(Dummy_77,Dummy_77,Dummy_77,Dummy_77))),_mm256_mul_pd(Dummy_58,_mm256_set_pd(Dummy_84,Dummy_84,Dummy_84,Dummy_84)));
                const __m256d Dummy_133 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_57,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_118,Dummy_118,Dummy_118,Dummy_118),_mm256_set_pd(tmp_kernel_op_78,tmp_kernel_op_78,tmp_kernel_op_78,tmp_kernel_op_78)),_mm256_mul_pd(_mm256_set_pd(Dummy_119,Dummy_119,Dummy_119,Dummy_119),_mm256_set_pd(tmp_kernel_op_78,tmp_kernel_op_78,tmp_kernel_op_78,tmp_kernel_op_78))),_mm256_set_pd(Dummy_64,Dummy_64,Dummy_64,Dummy_64)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_118,Dummy_118,Dummy_118,Dummy_118),_mm256_set_pd(tmp_kernel_op_80,tmp_kernel_op_80,tmp_kernel_op_80,tmp_kernel_op_80)),_mm256_mul_pd(_mm256_set_pd(Dummy_119,Dummy_119,Dummy_119,Dummy_119),_mm256_set_pd(tmp_kernel_op_80,tmp_kernel_op_80,tmp_kernel_op_80,tmp_kernel_op_80))),_mm256_set_pd(Dummy_67,Dummy_67,Dummy_67,Dummy_67))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_118,Dummy_118,Dummy_118,Dummy_118),_mm256_set_pd(tmp_kernel_op_81,tmp_kernel_op_81,tmp_kernel_op_81,tmp_kernel_op_81)),_mm256_mul_pd(_mm256_set_pd(Dummy_119,Dummy_119,Dummy_119,Dummy_119),_mm256_set_pd(tmp_kernel_op_81,tmp_kernel_op_81,tmp_kernel_op_81,tmp_kernel_op_81))),_mm256_set_pd(Dummy_70,Dummy_70,Dummy_70,Dummy_70)))),_mm256_mul_pd(Dummy_58,_mm256_set_pd(Dummy_120,Dummy_120,Dummy_120,Dummy_120))),_mm256_mul_pd(Dummy_59,_mm256_set_pd(Dummy_121,Dummy_121,Dummy_121,Dummy_121))),_mm256_mul_pd(Dummy_60,_mm256_set_pd(Dummy_122,Dummy_122,Dummy_122,Dummy_122))),_mm256_mul_pd(Dummy_61,_mm256_set_pd(Dummy_123,Dummy_123,Dummy_123,Dummy_123))),_mm256_mul_pd(Dummy_56,_mm256_set_pd(Dummy_77,Dummy_77,Dummy_77,Dummy_77)));
                const __m256d Dummy_134 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_58,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_124,Dummy_124,Dummy_124,Dummy_124),_mm256_set_pd(tmp_kernel_op_87,tmp_kernel_op_87,tmp_kernel_op_87,tmp_kernel_op_87)),_mm256_mul_pd(_mm256_set_pd(Dummy_125,Dummy_125,Dummy_125,Dummy_125),_mm256_set_pd(tmp_kernel_op_87,tmp_kernel_op_87,tmp_kernel_op_87,tmp_kernel_op_87))),_mm256_set_pd(Dummy_64,Dummy_64,Dummy_64,Dummy_64)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_124,Dummy_124,Dummy_124,Dummy_124),_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89)),_mm256_mul_pd(_mm256_set_pd(Dummy_125,Dummy_125,Dummy_125,Dummy_125),_mm256_set_pd(tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89,tmp_kernel_op_89))),_mm256_set_pd(Dummy_67,Dummy_67,Dummy_67,Dummy_67))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_124,Dummy_124,Dummy_124,Dummy_124),_mm256_set_pd(tmp_kernel_op_90,tmp_kernel_op_90,tmp_kernel_op_90,tmp_kernel_op_90)),_mm256_mul_pd(_mm256_set_pd(Dummy_125,Dummy_125,Dummy_125,Dummy_125),_mm256_set_pd(tmp_kernel_op_90,tmp_kernel_op_90,tmp_kernel_op_90,tmp_kernel_op_90))),_mm256_set_pd(Dummy_70,Dummy_70,Dummy_70,Dummy_70)))),_mm256_mul_pd(Dummy_57,_mm256_set_pd(Dummy_120,Dummy_120,Dummy_120,Dummy_120))),_mm256_mul_pd(Dummy_59,_mm256_set_pd(Dummy_126,Dummy_126,Dummy_126,Dummy_126))),_mm256_mul_pd(Dummy_60,_mm256_set_pd(Dummy_127,Dummy_127,Dummy_127,Dummy_127))),_mm256_mul_pd(Dummy_61,_mm256_set_pd(Dummy_128,Dummy_128,Dummy_128,Dummy_128))),_mm256_mul_pd(Dummy_56,_mm256_set_pd(Dummy_84,Dummy_84,Dummy_84,Dummy_84)));
                const __m256d Dummy_135 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_59,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_102,Dummy_102,Dummy_102,Dummy_102),_mm256_set_pd(Dummy_102,Dummy_102,Dummy_102,Dummy_102)),_mm256_mul_pd(_mm256_set_pd(Dummy_99,Dummy_99,Dummy_99,Dummy_99),_mm256_set_pd(Dummy_99,Dummy_99,Dummy_99,Dummy_99))),_mm256_set_pd(Dummy_70,Dummy_70,Dummy_70,Dummy_70)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_87,Dummy_87,Dummy_87,Dummy_87),_mm256_set_pd(Dummy_87,Dummy_87,Dummy_87,Dummy_87)),_mm256_mul_pd(_mm256_set_pd(Dummy_90,Dummy_90,Dummy_90,Dummy_90),_mm256_set_pd(Dummy_90,Dummy_90,Dummy_90,Dummy_90))),_mm256_set_pd(Dummy_64,Dummy_64,Dummy_64,Dummy_64))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_93,Dummy_93,Dummy_93,Dummy_93),_mm256_set_pd(Dummy_93,Dummy_93,Dummy_93,Dummy_93)),_mm256_mul_pd(_mm256_set_pd(Dummy_96,Dummy_96,Dummy_96,Dummy_96),_mm256_set_pd(Dummy_96,Dummy_96,Dummy_96,Dummy_96))),_mm256_set_pd(Dummy_67,Dummy_67,Dummy_67,Dummy_67)))),_mm256_mul_pd(Dummy_56,_mm256_set_pd(Dummy_103,Dummy_103,Dummy_103,Dummy_103))),_mm256_mul_pd(Dummy_57,_mm256_set_pd(Dummy_121,Dummy_121,Dummy_121,Dummy_121))),_mm256_mul_pd(Dummy_58,_mm256_set_pd(Dummy_126,Dummy_126,Dummy_126,Dummy_126))),_mm256_mul_pd(Dummy_60,_mm256_set_pd(Dummy_129,Dummy_129,Dummy_129,Dummy_129))),_mm256_mul_pd(Dummy_61,_mm256_set_pd(Dummy_130,Dummy_130,Dummy_130,Dummy_130)));
                const __m256d Dummy_136 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_60,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_104,Dummy_104,Dummy_104,Dummy_104),_mm256_set_pd(Dummy_104,Dummy_104,Dummy_104,Dummy_104)),_mm256_mul_pd(_mm256_set_pd(Dummy_105,Dummy_105,Dummy_105,Dummy_105),_mm256_set_pd(Dummy_105,Dummy_105,Dummy_105,Dummy_105))),_mm256_set_pd(Dummy_64,Dummy_64,Dummy_64,Dummy_64)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_106,Dummy_106,Dummy_106,Dummy_106),_mm256_set_pd(Dummy_106,Dummy_106,Dummy_106,Dummy_106)),_mm256_mul_pd(_mm256_set_pd(Dummy_107,Dummy_107,Dummy_107,Dummy_107),_mm256_set_pd(Dummy_107,Dummy_107,Dummy_107,Dummy_107))),_mm256_set_pd(Dummy_67,Dummy_67,Dummy_67,Dummy_67))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_108,Dummy_108,Dummy_108,Dummy_108),_mm256_set_pd(Dummy_108,Dummy_108,Dummy_108,Dummy_108)),_mm256_mul_pd(_mm256_set_pd(Dummy_109,Dummy_109,Dummy_109,Dummy_109),_mm256_set_pd(Dummy_109,Dummy_109,Dummy_109,Dummy_109))),_mm256_set_pd(Dummy_70,Dummy_70,Dummy_70,Dummy_70)))),_mm256_mul_pd(Dummy_56,_mm256_set_pd(Dummy_110,Dummy_110,Dummy_110,Dummy_110))),_mm256_mul_pd(Dummy_57,_mm256_set_pd(Dummy_122,Dummy_122,Dummy_122,Dummy_122))),_mm256_mul_pd(Dummy_58,_mm256_set_pd(Dummy_127,Dummy_127,Dummy_127,Dummy_127))),_mm256_mul_pd(Dummy_59,_mm256_set_pd(Dummy_129,Dummy_129,Dummy_129,Dummy_129))),_mm256_mul_pd(Dummy_61,_mm256_set_pd(Dummy_131,Dummy_131,Dummy_131,Dummy_131)));
                const __m256d Dummy_137 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_61,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_111,Dummy_111,Dummy_111,Dummy_111),_mm256_set_pd(Dummy_111,Dummy_111,Dummy_111,Dummy_111)),_mm256_mul_pd(_mm256_set_pd(Dummy_112,Dummy_112,Dummy_112,Dummy_112),_mm256_set_pd(Dummy_112,Dummy_112,Dummy_112,Dummy_112))),_mm256_set_pd(Dummy_64,Dummy_64,Dummy_64,Dummy_64)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_113,Dummy_113,Dummy_113,Dummy_113),_mm256_set_pd(Dummy_113,Dummy_113,Dummy_113,Dummy_113)),_mm256_mul_pd(_mm256_set_pd(Dummy_114,Dummy_114,Dummy_114,Dummy_114),_mm256_set_pd(Dummy_114,Dummy_114,Dummy_114,Dummy_114))),_mm256_set_pd(Dummy_67,Dummy_67,Dummy_67,Dummy_67))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_115,Dummy_115,Dummy_115,Dummy_115),_mm256_set_pd(Dummy_115,Dummy_115,Dummy_115,Dummy_115)),_mm256_mul_pd(_mm256_set_pd(Dummy_116,Dummy_116,Dummy_116,Dummy_116),_mm256_set_pd(Dummy_116,Dummy_116,Dummy_116,Dummy_116))),_mm256_set_pd(Dummy_70,Dummy_70,Dummy_70,Dummy_70)))),_mm256_mul_pd(Dummy_56,_mm256_set_pd(Dummy_117,Dummy_117,Dummy_117,Dummy_117))),_mm256_mul_pd(Dummy_57,_mm256_set_pd(Dummy_123,Dummy_123,Dummy_123,Dummy_123))),_mm256_mul_pd(Dummy_58,_mm256_set_pd(Dummy_128,Dummy_128,Dummy_128,Dummy_128))),_mm256_mul_pd(Dummy_59,_mm256_set_pd(Dummy_130,Dummy_130,Dummy_130,Dummy_130))),_mm256_mul_pd(Dummy_60,_mm256_set_pd(Dummy_131,Dummy_131,Dummy_131,Dummy_131)));
                {
                   {
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(Dummy_132,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_133,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(Dummy_134,_mm256_loadu_pd(& _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_135,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(Dummy_136,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(Dummy_137,_mm256_loadu_pd(& _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_11*((tmp_kernel_op_10*tmp_kernel_op_10) + (tmp_kernel_op_9*tmp_kernel_op_9)) + tmp_kernel_op_17*((tmp_kernel_op_15*tmp_kernel_op_15) + (tmp_kernel_op_16*tmp_kernel_op_16)) + tmp_kernel_op_5*((tmp_kernel_op_3*tmp_kernel_op_3) + (tmp_kernel_op_4*tmp_kernel_op_4))) + src_dof_1*tmp_kernel_op_27 + src_dof_2*tmp_kernel_op_37 + src_dof_3*tmp_kernel_op_56 + src_dof_4*tmp_kernel_op_66 + src_dof_5*tmp_kernel_op_76;
                const real_t elMatVec_1 = src_dof_0*tmp_kernel_op_27 + src_dof_1*(tmp_kernel_op_11*(tmp_kernel_op_77*tmp_kernel_op_80 + tmp_kernel_op_79*tmp_kernel_op_80) + tmp_kernel_op_17*(tmp_kernel_op_77*tmp_kernel_op_81 + tmp_kernel_op_79*tmp_kernel_op_81) + tmp_kernel_op_5*(tmp_kernel_op_77*tmp_kernel_op_78 + tmp_kernel_op_78*tmp_kernel_op_79)) + src_dof_2*tmp_kernel_op_82 + src_dof_3*tmp_kernel_op_83 + src_dof_4*tmp_kernel_op_84 + src_dof_5*tmp_kernel_op_85;
                const real_t elMatVec_2 = src_dof_0*tmp_kernel_op_37 + src_dof_1*tmp_kernel_op_82 + src_dof_2*(tmp_kernel_op_11*(tmp_kernel_op_86*tmp_kernel_op_89 + tmp_kernel_op_88*tmp_kernel_op_89) + tmp_kernel_op_17*(tmp_kernel_op_86*tmp_kernel_op_90 + tmp_kernel_op_88*tmp_kernel_op_90) + tmp_kernel_op_5*(tmp_kernel_op_86*tmp_kernel_op_87 + tmp_kernel_op_87*tmp_kernel_op_88)) + src_dof_3*tmp_kernel_op_91 + src_dof_4*tmp_kernel_op_92 + src_dof_5*tmp_kernel_op_93;
                const real_t elMatVec_3 = src_dof_0*tmp_kernel_op_56 + src_dof_1*tmp_kernel_op_83 + src_dof_2*tmp_kernel_op_91 + src_dof_3*(tmp_kernel_op_11*((tmp_kernel_op_46*tmp_kernel_op_46) + (tmp_kernel_op_49*tmp_kernel_op_49)) + tmp_kernel_op_17*((tmp_kernel_op_52*tmp_kernel_op_52) + (tmp_kernel_op_55*tmp_kernel_op_55)) + tmp_kernel_op_5*((tmp_kernel_op_40*tmp_kernel_op_40) + (tmp_kernel_op_43*tmp_kernel_op_43))) + src_dof_4*tmp_kernel_op_94 + src_dof_5*tmp_kernel_op_95;
                const real_t elMatVec_4 = src_dof_0*tmp_kernel_op_66 + src_dof_1*tmp_kernel_op_84 + src_dof_2*tmp_kernel_op_92 + src_dof_3*tmp_kernel_op_94 + src_dof_4*(tmp_kernel_op_11*((tmp_kernel_op_61*tmp_kernel_op_61) + (tmp_kernel_op_62*tmp_kernel_op_62)) + tmp_kernel_op_17*((tmp_kernel_op_64*tmp_kernel_op_64) + (tmp_kernel_op_65*tmp_kernel_op_65)) + tmp_kernel_op_5*((tmp_kernel_op_58*tmp_kernel_op_58) + (tmp_kernel_op_59*tmp_kernel_op_59))) + src_dof_5*tmp_kernel_op_96;
                const real_t elMatVec_5 = src_dof_0*tmp_kernel_op_76 + src_dof_1*tmp_kernel_op_85 + src_dof_2*tmp_kernel_op_93 + src_dof_3*tmp_kernel_op_95 + src_dof_4*tmp_kernel_op_96 + src_dof_5*(tmp_kernel_op_11*((tmp_kernel_op_71*tmp_kernel_op_71) + (tmp_kernel_op_72*tmp_kernel_op_72)) + tmp_kernel_op_17*((tmp_kernel_op_74*tmp_kernel_op_74) + (tmp_kernel_op_75*tmp_kernel_op_75)) + tmp_kernel_op_5*((tmp_kernel_op_68*tmp_kernel_op_68) + (tmp_kernel_op_69*tmp_kernel_op_69)));
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
                const real_t Dummy_56 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t Dummy_57 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t Dummy_58 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t Dummy_59 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t Dummy_60 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t Dummy_61 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t Dummy_132 = Dummy_103*Dummy_59 + Dummy_110*Dummy_60 + Dummy_117*Dummy_61 + Dummy_56*(Dummy_64*((Dummy_62*Dummy_62) + (Dummy_63*Dummy_63)) + Dummy_67*((Dummy_65*Dummy_65) + (Dummy_66*Dummy_66)) + Dummy_70*((Dummy_68*Dummy_68) + (Dummy_69*Dummy_69))) + Dummy_57*Dummy_77 + Dummy_58*Dummy_84;
                const real_t Dummy_133 = Dummy_120*Dummy_58 + Dummy_121*Dummy_59 + Dummy_122*Dummy_60 + Dummy_123*Dummy_61 + Dummy_56*Dummy_77 + Dummy_57*(Dummy_64*(Dummy_118*tmp_kernel_op_78 + Dummy_119*tmp_kernel_op_78) + Dummy_67*(Dummy_118*tmp_kernel_op_80 + Dummy_119*tmp_kernel_op_80) + Dummy_70*(Dummy_118*tmp_kernel_op_81 + Dummy_119*tmp_kernel_op_81));
                const real_t Dummy_134 = Dummy_120*Dummy_57 + Dummy_126*Dummy_59 + Dummy_127*Dummy_60 + Dummy_128*Dummy_61 + Dummy_56*Dummy_84 + Dummy_58*(Dummy_64*(Dummy_124*tmp_kernel_op_87 + Dummy_125*tmp_kernel_op_87) + Dummy_67*(Dummy_124*tmp_kernel_op_89 + Dummy_125*tmp_kernel_op_89) + Dummy_70*(Dummy_124*tmp_kernel_op_90 + Dummy_125*tmp_kernel_op_90));
                const real_t Dummy_135 = Dummy_103*Dummy_56 + Dummy_121*Dummy_57 + Dummy_126*Dummy_58 + Dummy_129*Dummy_60 + Dummy_130*Dummy_61 + Dummy_59*(Dummy_64*((Dummy_87*Dummy_87) + (Dummy_90*Dummy_90)) + Dummy_67*((Dummy_93*Dummy_93) + (Dummy_96*Dummy_96)) + Dummy_70*((Dummy_102*Dummy_102) + (Dummy_99*Dummy_99)));
                const real_t Dummy_136 = Dummy_110*Dummy_56 + Dummy_122*Dummy_57 + Dummy_127*Dummy_58 + Dummy_129*Dummy_59 + Dummy_131*Dummy_61 + Dummy_60*(Dummy_64*((Dummy_104*Dummy_104) + (Dummy_105*Dummy_105)) + Dummy_67*((Dummy_106*Dummy_106) + (Dummy_107*Dummy_107)) + Dummy_70*((Dummy_108*Dummy_108) + (Dummy_109*Dummy_109)));
                const real_t Dummy_137 = Dummy_117*Dummy_56 + Dummy_123*Dummy_57 + Dummy_128*Dummy_58 + Dummy_130*Dummy_59 + Dummy_131*Dummy_60 + Dummy_61*(Dummy_64*((Dummy_111*Dummy_111) + (Dummy_112*Dummy_112)) + Dummy_67*((Dummy_113*Dummy_113) + (Dummy_114*Dummy_114)) + Dummy_70*((Dummy_115*Dummy_115) + (Dummy_116*Dummy_116)));
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
          }
          const real_t src_dof_0 = _data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const real_t src_dof_1 = _data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
          const real_t src_dof_2 = _data_srcVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
          const real_t src_dof_3 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
          const real_t src_dof_4 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
          const real_t src_dof_5 = _data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_11*((tmp_kernel_op_10*tmp_kernel_op_10) + (tmp_kernel_op_9*tmp_kernel_op_9)) + tmp_kernel_op_17*((tmp_kernel_op_15*tmp_kernel_op_15) + (tmp_kernel_op_16*tmp_kernel_op_16)) + tmp_kernel_op_5*((tmp_kernel_op_3*tmp_kernel_op_3) + (tmp_kernel_op_4*tmp_kernel_op_4))) + src_dof_1*tmp_kernel_op_27 + src_dof_2*tmp_kernel_op_37 + src_dof_3*tmp_kernel_op_56 + src_dof_4*tmp_kernel_op_66 + src_dof_5*tmp_kernel_op_76;
          const real_t elMatVec_1 = src_dof_0*tmp_kernel_op_27 + src_dof_1*(tmp_kernel_op_11*(tmp_kernel_op_77*tmp_kernel_op_80 + tmp_kernel_op_79*tmp_kernel_op_80) + tmp_kernel_op_17*(tmp_kernel_op_77*tmp_kernel_op_81 + tmp_kernel_op_79*tmp_kernel_op_81) + tmp_kernel_op_5*(tmp_kernel_op_77*tmp_kernel_op_78 + tmp_kernel_op_78*tmp_kernel_op_79)) + src_dof_2*tmp_kernel_op_82 + src_dof_3*tmp_kernel_op_83 + src_dof_4*tmp_kernel_op_84 + src_dof_5*tmp_kernel_op_85;
          const real_t elMatVec_2 = src_dof_0*tmp_kernel_op_37 + src_dof_1*tmp_kernel_op_82 + src_dof_2*(tmp_kernel_op_11*(tmp_kernel_op_86*tmp_kernel_op_89 + tmp_kernel_op_88*tmp_kernel_op_89) + tmp_kernel_op_17*(tmp_kernel_op_86*tmp_kernel_op_90 + tmp_kernel_op_88*tmp_kernel_op_90) + tmp_kernel_op_5*(tmp_kernel_op_86*tmp_kernel_op_87 + tmp_kernel_op_87*tmp_kernel_op_88)) + src_dof_3*tmp_kernel_op_91 + src_dof_4*tmp_kernel_op_92 + src_dof_5*tmp_kernel_op_93;
          const real_t elMatVec_3 = src_dof_0*tmp_kernel_op_56 + src_dof_1*tmp_kernel_op_83 + src_dof_2*tmp_kernel_op_91 + src_dof_3*(tmp_kernel_op_11*((tmp_kernel_op_46*tmp_kernel_op_46) + (tmp_kernel_op_49*tmp_kernel_op_49)) + tmp_kernel_op_17*((tmp_kernel_op_52*tmp_kernel_op_52) + (tmp_kernel_op_55*tmp_kernel_op_55)) + tmp_kernel_op_5*((tmp_kernel_op_40*tmp_kernel_op_40) + (tmp_kernel_op_43*tmp_kernel_op_43))) + src_dof_4*tmp_kernel_op_94 + src_dof_5*tmp_kernel_op_95;
          const real_t elMatVec_4 = src_dof_0*tmp_kernel_op_66 + src_dof_1*tmp_kernel_op_84 + src_dof_2*tmp_kernel_op_92 + src_dof_3*tmp_kernel_op_94 + src_dof_4*(tmp_kernel_op_11*((tmp_kernel_op_61*tmp_kernel_op_61) + (tmp_kernel_op_62*tmp_kernel_op_62)) + tmp_kernel_op_17*((tmp_kernel_op_64*tmp_kernel_op_64) + (tmp_kernel_op_65*tmp_kernel_op_65)) + tmp_kernel_op_5*((tmp_kernel_op_58*tmp_kernel_op_58) + (tmp_kernel_op_59*tmp_kernel_op_59))) + src_dof_5*tmp_kernel_op_96;
          const real_t elMatVec_5 = src_dof_0*tmp_kernel_op_76 + src_dof_1*tmp_kernel_op_85 + src_dof_2*tmp_kernel_op_93 + src_dof_3*tmp_kernel_op_95 + src_dof_4*tmp_kernel_op_96 + src_dof_5*(tmp_kernel_op_11*((tmp_kernel_op_71*tmp_kernel_op_71) + (tmp_kernel_op_72*tmp_kernel_op_72)) + tmp_kernel_op_17*((tmp_kernel_op_74*tmp_kernel_op_74) + (tmp_kernel_op_75*tmp_kernel_op_75)) + tmp_kernel_op_5*((tmp_kernel_op_68*tmp_kernel_op_68) + (tmp_kernel_op_69*tmp_kernel_op_69)));
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
