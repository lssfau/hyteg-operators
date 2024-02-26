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

void P2ElementwiseDiffusion::toMatrix_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
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
       const walberla::float64 elMat_0_0 = tmp_kernel_op_11*((tmp_kernel_op_10*tmp_kernel_op_10) + (tmp_kernel_op_9*tmp_kernel_op_9)) + tmp_kernel_op_17*((tmp_kernel_op_15*tmp_kernel_op_15) + (tmp_kernel_op_16*tmp_kernel_op_16)) + tmp_kernel_op_5*((tmp_kernel_op_3*tmp_kernel_op_3) + (tmp_kernel_op_4*tmp_kernel_op_4));
       const walberla::float64 elMat_0_1 = tmp_kernel_op_27;
       const walberla::float64 elMat_0_2 = tmp_kernel_op_37;
       const walberla::float64 elMat_0_3 = tmp_kernel_op_56;
       const walberla::float64 elMat_0_4 = tmp_kernel_op_66;
       const walberla::float64 elMat_0_5 = tmp_kernel_op_76;
       const walberla::float64 elMat_1_0 = tmp_kernel_op_27;
       const walberla::float64 elMat_1_1 = tmp_kernel_op_11*(tmp_kernel_op_77*tmp_kernel_op_80 + tmp_kernel_op_79*tmp_kernel_op_80) + tmp_kernel_op_17*(tmp_kernel_op_77*tmp_kernel_op_81 + tmp_kernel_op_79*tmp_kernel_op_81) + tmp_kernel_op_5*(tmp_kernel_op_77*tmp_kernel_op_78 + tmp_kernel_op_78*tmp_kernel_op_79);
       const walberla::float64 elMat_1_2 = tmp_kernel_op_82;
       const walberla::float64 elMat_1_3 = tmp_kernel_op_83;
       const walberla::float64 elMat_1_4 = tmp_kernel_op_84;
       const walberla::float64 elMat_1_5 = tmp_kernel_op_85;
       const walberla::float64 elMat_2_0 = tmp_kernel_op_37;
       const walberla::float64 elMat_2_1 = tmp_kernel_op_82;
       const walberla::float64 elMat_2_2 = tmp_kernel_op_11*(tmp_kernel_op_86*tmp_kernel_op_89 + tmp_kernel_op_88*tmp_kernel_op_89) + tmp_kernel_op_17*(tmp_kernel_op_86*tmp_kernel_op_90 + tmp_kernel_op_88*tmp_kernel_op_90) + tmp_kernel_op_5*(tmp_kernel_op_86*tmp_kernel_op_87 + tmp_kernel_op_87*tmp_kernel_op_88);
       const walberla::float64 elMat_2_3 = tmp_kernel_op_91;
       const walberla::float64 elMat_2_4 = tmp_kernel_op_92;
       const walberla::float64 elMat_2_5 = tmp_kernel_op_93;
       const walberla::float64 elMat_3_0 = tmp_kernel_op_56;
       const walberla::float64 elMat_3_1 = tmp_kernel_op_83;
       const walberla::float64 elMat_3_2 = tmp_kernel_op_91;
       const walberla::float64 elMat_3_3 = tmp_kernel_op_11*((tmp_kernel_op_46*tmp_kernel_op_46) + (tmp_kernel_op_49*tmp_kernel_op_49)) + tmp_kernel_op_17*((tmp_kernel_op_52*tmp_kernel_op_52) + (tmp_kernel_op_55*tmp_kernel_op_55)) + tmp_kernel_op_5*((tmp_kernel_op_40*tmp_kernel_op_40) + (tmp_kernel_op_43*tmp_kernel_op_43));
       const walberla::float64 elMat_3_4 = tmp_kernel_op_94;
       const walberla::float64 elMat_3_5 = tmp_kernel_op_95;
       const walberla::float64 elMat_4_0 = tmp_kernel_op_66;
       const walberla::float64 elMat_4_1 = tmp_kernel_op_84;
       const walberla::float64 elMat_4_2 = tmp_kernel_op_92;
       const walberla::float64 elMat_4_3 = tmp_kernel_op_94;
       const walberla::float64 elMat_4_4 = tmp_kernel_op_11*((tmp_kernel_op_61*tmp_kernel_op_61) + (tmp_kernel_op_62*tmp_kernel_op_62)) + tmp_kernel_op_17*((tmp_kernel_op_64*tmp_kernel_op_64) + (tmp_kernel_op_65*tmp_kernel_op_65)) + tmp_kernel_op_5*((tmp_kernel_op_58*tmp_kernel_op_58) + (tmp_kernel_op_59*tmp_kernel_op_59));
       const walberla::float64 elMat_4_5 = tmp_kernel_op_96;
       const walberla::float64 elMat_5_0 = tmp_kernel_op_76;
       const walberla::float64 elMat_5_1 = tmp_kernel_op_85;
       const walberla::float64 elMat_5_2 = tmp_kernel_op_93;
       const walberla::float64 elMat_5_3 = tmp_kernel_op_95;
       const walberla::float64 elMat_5_4 = tmp_kernel_op_96;
       const walberla::float64 elMat_5_5 = tmp_kernel_op_11*((tmp_kernel_op_71*tmp_kernel_op_71) + (tmp_kernel_op_72*tmp_kernel_op_72)) + tmp_kernel_op_17*((tmp_kernel_op_74*tmp_kernel_op_74) + (tmp_kernel_op_75*tmp_kernel_op_75)) + tmp_kernel_op_5*((tmp_kernel_op_68*tmp_kernel_op_68) + (tmp_kernel_op_69*tmp_kernel_op_69));
       const walberla::float64 Dummy_3424 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_2;
       const walberla::float64 Dummy_3425 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const walberla::float64 Dummy_3426 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_3427 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_8 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_8;
       const walberla::float64 Dummy_3428 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_8 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_8;
       const walberla::float64 Dummy_3429 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_3430 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_14 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_14;
       const walberla::float64 Dummy_3431 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_14 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_14;
       const walberla::float64 Dummy_3432 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_3433 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_18;
       const walberla::float64 Dummy_3434 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_18;
       const walberla::float64 Dummy_3435 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_21;
       const walberla::float64 Dummy_3436 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_21;
       const walberla::float64 Dummy_3437 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_24;
       const walberla::float64 Dummy_3438 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_24;
       const walberla::float64 Dummy_3439 = Dummy_3426*(Dummy_3424*Dummy_3433 + Dummy_3425*Dummy_3434) + Dummy_3429*(Dummy_3427*Dummy_3435 + Dummy_3428*Dummy_3436) + Dummy_3432*(Dummy_3430*Dummy_3437 + Dummy_3431*Dummy_3438);
       const walberla::float64 Dummy_3440 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_28;
       const walberla::float64 Dummy_3441 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_28;
       const walberla::float64 Dummy_3442 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_31;
       const walberla::float64 Dummy_3443 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_31;
       const walberla::float64 Dummy_3444 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_34;
       const walberla::float64 Dummy_3445 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_34;
       const walberla::float64 Dummy_3446 = Dummy_3426*(Dummy_3424*Dummy_3440 + Dummy_3425*Dummy_3441) + Dummy_3429*(Dummy_3427*Dummy_3442 + Dummy_3428*Dummy_3443) + Dummy_3432*(Dummy_3430*Dummy_3444 + Dummy_3431*Dummy_3445);
       const walberla::float64 Dummy_3447 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_3448 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_3449 = Dummy_3447 + Dummy_3448;
       const walberla::float64 Dummy_3450 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_3451 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_3452 = Dummy_3450 + Dummy_3451;
       const walberla::float64 Dummy_3453 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_7;
       const walberla::float64 Dummy_3454 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_6;
       const walberla::float64 Dummy_3455 = Dummy_3453 + Dummy_3454;
       const walberla::float64 Dummy_3456 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_7;
       const walberla::float64 Dummy_3457 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_6;
       const walberla::float64 Dummy_3458 = Dummy_3456 + Dummy_3457;
       const walberla::float64 Dummy_3459 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_13;
       const walberla::float64 Dummy_3460 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_12;
       const walberla::float64 Dummy_3461 = Dummy_3459 + Dummy_3460;
       const walberla::float64 Dummy_3462 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_13;
       const walberla::float64 Dummy_3463 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_12;
       const walberla::float64 Dummy_3464 = Dummy_3462 + Dummy_3463;
       const walberla::float64 Dummy_3465 = Dummy_3426*(Dummy_3424*Dummy_3449 + Dummy_3425*Dummy_3452) + Dummy_3429*(Dummy_3427*Dummy_3455 + Dummy_3428*Dummy_3458) + Dummy_3432*(Dummy_3430*Dummy_3461 + Dummy_3431*Dummy_3464);
       const walberla::float64 Dummy_3466 = -Dummy_3447 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_57;
       const walberla::float64 Dummy_3467 = -Dummy_3450 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_57;
       const walberla::float64 Dummy_3468 = -Dummy_3453 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_60;
       const walberla::float64 Dummy_3469 = -Dummy_3456 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_60;
       const walberla::float64 Dummy_3470 = -Dummy_3459 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_63;
       const walberla::float64 Dummy_3471 = -Dummy_3462 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_63;
       const walberla::float64 Dummy_3472 = Dummy_3426*(Dummy_3424*Dummy_3466 + Dummy_3425*Dummy_3467) + Dummy_3429*(Dummy_3427*Dummy_3468 + Dummy_3428*Dummy_3469) + Dummy_3432*(Dummy_3430*Dummy_3470 + Dummy_3431*Dummy_3471);
       const walberla::float64 Dummy_3473 = -Dummy_3448 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_67;
       const walberla::float64 Dummy_3474 = -Dummy_3451 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_67;
       const walberla::float64 Dummy_3475 = -Dummy_3454 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_70;
       const walberla::float64 Dummy_3476 = -Dummy_3457 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_70;
       const walberla::float64 Dummy_3477 = -Dummy_3460 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_73;
       const walberla::float64 Dummy_3478 = -Dummy_3463 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_73;
       const walberla::float64 Dummy_3479 = Dummy_3426*(Dummy_3424*Dummy_3473 + Dummy_3425*Dummy_3474) + Dummy_3429*(Dummy_3427*Dummy_3475 + Dummy_3428*Dummy_3476) + Dummy_3432*(Dummy_3430*Dummy_3477 + Dummy_3431*Dummy_3478);
       const walberla::float64 Dummy_3480 = (jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE);
       const walberla::float64 Dummy_3481 = (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE);
       const walberla::float64 Dummy_3482 = Dummy_3426*(Dummy_3433*Dummy_3440 + Dummy_3434*Dummy_3441) + Dummy_3429*(Dummy_3435*Dummy_3442 + Dummy_3436*Dummy_3443) + Dummy_3432*(Dummy_3437*Dummy_3444 + Dummy_3438*Dummy_3445);
       const walberla::float64 Dummy_3483 = Dummy_3426*(Dummy_3433*Dummy_3449 + Dummy_3434*Dummy_3452) + Dummy_3429*(Dummy_3435*Dummy_3455 + Dummy_3436*Dummy_3458) + Dummy_3432*(Dummy_3437*Dummy_3461 + Dummy_3438*Dummy_3464);
       const walberla::float64 Dummy_3484 = Dummy_3426*(Dummy_3433*Dummy_3466 + Dummy_3434*Dummy_3467) + Dummy_3429*(Dummy_3435*Dummy_3468 + Dummy_3436*Dummy_3469) + Dummy_3432*(Dummy_3437*Dummy_3470 + Dummy_3438*Dummy_3471);
       const walberla::float64 Dummy_3485 = Dummy_3426*(Dummy_3433*Dummy_3473 + Dummy_3434*Dummy_3474) + Dummy_3429*(Dummy_3435*Dummy_3475 + Dummy_3436*Dummy_3476) + Dummy_3432*(Dummy_3437*Dummy_3477 + Dummy_3438*Dummy_3478);
       const walberla::float64 Dummy_3486 = (jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE);
       const walberla::float64 Dummy_3487 = (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE);
       const walberla::float64 Dummy_3488 = Dummy_3426*(Dummy_3440*Dummy_3449 + Dummy_3441*Dummy_3452) + Dummy_3429*(Dummy_3442*Dummy_3455 + Dummy_3443*Dummy_3458) + Dummy_3432*(Dummy_3444*Dummy_3461 + Dummy_3445*Dummy_3464);
       const walberla::float64 Dummy_3489 = Dummy_3426*(Dummy_3440*Dummy_3466 + Dummy_3441*Dummy_3467) + Dummy_3429*(Dummy_3442*Dummy_3468 + Dummy_3443*Dummy_3469) + Dummy_3432*(Dummy_3444*Dummy_3470 + Dummy_3445*Dummy_3471);
       const walberla::float64 Dummy_3490 = Dummy_3426*(Dummy_3440*Dummy_3473 + Dummy_3441*Dummy_3474) + Dummy_3429*(Dummy_3442*Dummy_3475 + Dummy_3443*Dummy_3476) + Dummy_3432*(Dummy_3444*Dummy_3477 + Dummy_3445*Dummy_3478);
       const walberla::float64 Dummy_3491 = Dummy_3426*(Dummy_3449*Dummy_3466 + Dummy_3452*Dummy_3467) + Dummy_3429*(Dummy_3455*Dummy_3468 + Dummy_3458*Dummy_3469) + Dummy_3432*(Dummy_3461*Dummy_3470 + Dummy_3464*Dummy_3471);
       const walberla::float64 Dummy_3492 = Dummy_3426*(Dummy_3449*Dummy_3473 + Dummy_3452*Dummy_3474) + Dummy_3429*(Dummy_3455*Dummy_3475 + Dummy_3458*Dummy_3476) + Dummy_3432*(Dummy_3461*Dummy_3477 + Dummy_3464*Dummy_3478);
       const walberla::float64 Dummy_3493 = Dummy_3426*(Dummy_3466*Dummy_3473 + Dummy_3467*Dummy_3474) + Dummy_3429*(Dummy_3468*Dummy_3475 + Dummy_3469*Dummy_3476) + Dummy_3432*(Dummy_3470*Dummy_3477 + Dummy_3471*Dummy_3478);
       const walberla::float64 Dummy_3494 = Dummy_3426*((Dummy_3424*Dummy_3424) + (Dummy_3425*Dummy_3425)) + Dummy_3429*((Dummy_3427*Dummy_3427) + (Dummy_3428*Dummy_3428)) + Dummy_3432*((Dummy_3430*Dummy_3430) + (Dummy_3431*Dummy_3431));
       const walberla::float64 Dummy_3495 = Dummy_3439;
       const walberla::float64 Dummy_3496 = Dummy_3446;
       const walberla::float64 Dummy_3497 = Dummy_3465;
       const walberla::float64 Dummy_3498 = Dummy_3472;
       const walberla::float64 Dummy_3499 = Dummy_3479;
       const walberla::float64 Dummy_3500 = Dummy_3439;
       const walberla::float64 Dummy_3501 = Dummy_3426*(Dummy_3480*tmp_kernel_op_78 + Dummy_3481*tmp_kernel_op_78) + Dummy_3429*(Dummy_3480*tmp_kernel_op_80 + Dummy_3481*tmp_kernel_op_80) + Dummy_3432*(Dummy_3480*tmp_kernel_op_81 + Dummy_3481*tmp_kernel_op_81);
       const walberla::float64 Dummy_3502 = Dummy_3482;
       const walberla::float64 Dummy_3503 = Dummy_3483;
       const walberla::float64 Dummy_3504 = Dummy_3484;
       const walberla::float64 Dummy_3505 = Dummy_3485;
       const walberla::float64 Dummy_3506 = Dummy_3446;
       const walberla::float64 Dummy_3507 = Dummy_3482;
       const walberla::float64 Dummy_3508 = Dummy_3426*(Dummy_3486*tmp_kernel_op_87 + Dummy_3487*tmp_kernel_op_87) + Dummy_3429*(Dummy_3486*tmp_kernel_op_89 + Dummy_3487*tmp_kernel_op_89) + Dummy_3432*(Dummy_3486*tmp_kernel_op_90 + Dummy_3487*tmp_kernel_op_90);
       const walberla::float64 Dummy_3509 = Dummy_3488;
       const walberla::float64 Dummy_3510 = Dummy_3489;
       const walberla::float64 Dummy_3511 = Dummy_3490;
       const walberla::float64 Dummy_3512 = Dummy_3465;
       const walberla::float64 Dummy_3513 = Dummy_3483;
       const walberla::float64 Dummy_3514 = Dummy_3488;
       const walberla::float64 Dummy_3515 = Dummy_3426*((Dummy_3449*Dummy_3449) + (Dummy_3452*Dummy_3452)) + Dummy_3429*((Dummy_3455*Dummy_3455) + (Dummy_3458*Dummy_3458)) + Dummy_3432*((Dummy_3461*Dummy_3461) + (Dummy_3464*Dummy_3464));
       const walberla::float64 Dummy_3516 = Dummy_3491;
       const walberla::float64 Dummy_3517 = Dummy_3492;
       const walberla::float64 Dummy_3518 = Dummy_3472;
       const walberla::float64 Dummy_3519 = Dummy_3484;
       const walberla::float64 Dummy_3520 = Dummy_3489;
       const walberla::float64 Dummy_3521 = Dummy_3491;
       const walberla::float64 Dummy_3522 = Dummy_3426*((Dummy_3466*Dummy_3466) + (Dummy_3467*Dummy_3467)) + Dummy_3429*((Dummy_3468*Dummy_3468) + (Dummy_3469*Dummy_3469)) + Dummy_3432*((Dummy_3470*Dummy_3470) + (Dummy_3471*Dummy_3471));
       const walberla::float64 Dummy_3523 = Dummy_3493;
       const walberla::float64 Dummy_3524 = Dummy_3479;
       const walberla::float64 Dummy_3525 = Dummy_3485;
       const walberla::float64 Dummy_3526 = Dummy_3490;
       const walberla::float64 Dummy_3527 = Dummy_3492;
       const walberla::float64 Dummy_3528 = Dummy_3493;
       const walberla::float64 Dummy_3529 = Dummy_3426*((Dummy_3473*Dummy_3473) + (Dummy_3474*Dummy_3474)) + Dummy_3429*((Dummy_3475*Dummy_3475) + (Dummy_3476*Dummy_3476)) + Dummy_3432*((Dummy_3477*Dummy_3477) + (Dummy_3478*Dummy_3478));
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< walberla::float64 > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(elMat_0_0));
                   _data_mat[1] = ((walberla::float64)(elMat_0_1));
                   _data_mat[2] = ((walberla::float64)(elMat_0_2));
                   _data_mat[3] = ((walberla::float64)(elMat_0_3));
                   _data_mat[4] = ((walberla::float64)(elMat_0_4));
                   _data_mat[5] = ((walberla::float64)(elMat_0_5));
                   _data_mat[6] = ((walberla::float64)(elMat_1_0));
                   _data_mat[7] = ((walberla::float64)(elMat_1_1));
                   _data_mat[8] = ((walberla::float64)(elMat_1_2));
                   _data_mat[9] = ((walberla::float64)(elMat_1_3));
                   _data_mat[10] = ((walberla::float64)(elMat_1_4));
                   _data_mat[11] = ((walberla::float64)(elMat_1_5));
                   _data_mat[12] = ((walberla::float64)(elMat_2_0));
                   _data_mat[13] = ((walberla::float64)(elMat_2_1));
                   _data_mat[14] = ((walberla::float64)(elMat_2_2));
                   _data_mat[15] = ((walberla::float64)(elMat_2_3));
                   _data_mat[16] = ((walberla::float64)(elMat_2_4));
                   _data_mat[17] = ((walberla::float64)(elMat_2_5));
                   _data_mat[18] = ((walberla::float64)(elMat_3_0));
                   _data_mat[19] = ((walberla::float64)(elMat_3_1));
                   _data_mat[20] = ((walberla::float64)(elMat_3_2));
                   _data_mat[21] = ((walberla::float64)(elMat_3_3));
                   _data_mat[22] = ((walberla::float64)(elMat_3_4));
                   _data_mat[23] = ((walberla::float64)(elMat_3_5));
                   _data_mat[24] = ((walberla::float64)(elMat_4_0));
                   _data_mat[25] = ((walberla::float64)(elMat_4_1));
                   _data_mat[26] = ((walberla::float64)(elMat_4_2));
                   _data_mat[27] = ((walberla::float64)(elMat_4_3));
                   _data_mat[28] = ((walberla::float64)(elMat_4_4));
                   _data_mat[29] = ((walberla::float64)(elMat_4_5));
                   _data_mat[30] = ((walberla::float64)(elMat_5_0));
                   _data_mat[31] = ((walberla::float64)(elMat_5_1));
                   _data_mat[32] = ((walberla::float64)(elMat_5_2));
                   _data_mat[33] = ((walberla::float64)(elMat_5_3));
                   _data_mat[34] = ((walberla::float64)(elMat_5_4));
                   _data_mat[35] = ((walberla::float64)(elMat_5_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< walberla::float64 > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_3494));
                   _data_mat[1] = ((walberla::float64)(Dummy_3495));
                   _data_mat[2] = ((walberla::float64)(Dummy_3496));
                   _data_mat[3] = ((walberla::float64)(Dummy_3497));
                   _data_mat[4] = ((walberla::float64)(Dummy_3498));
                   _data_mat[5] = ((walberla::float64)(Dummy_3499));
                   _data_mat[6] = ((walberla::float64)(Dummy_3500));
                   _data_mat[7] = ((walberla::float64)(Dummy_3501));
                   _data_mat[8] = ((walberla::float64)(Dummy_3502));
                   _data_mat[9] = ((walberla::float64)(Dummy_3503));
                   _data_mat[10] = ((walberla::float64)(Dummy_3504));
                   _data_mat[11] = ((walberla::float64)(Dummy_3505));
                   _data_mat[12] = ((walberla::float64)(Dummy_3506));
                   _data_mat[13] = ((walberla::float64)(Dummy_3507));
                   _data_mat[14] = ((walberla::float64)(Dummy_3508));
                   _data_mat[15] = ((walberla::float64)(Dummy_3509));
                   _data_mat[16] = ((walberla::float64)(Dummy_3510));
                   _data_mat[17] = ((walberla::float64)(Dummy_3511));
                   _data_mat[18] = ((walberla::float64)(Dummy_3512));
                   _data_mat[19] = ((walberla::float64)(Dummy_3513));
                   _data_mat[20] = ((walberla::float64)(Dummy_3514));
                   _data_mat[21] = ((walberla::float64)(Dummy_3515));
                   _data_mat[22] = ((walberla::float64)(Dummy_3516));
                   _data_mat[23] = ((walberla::float64)(Dummy_3517));
                   _data_mat[24] = ((walberla::float64)(Dummy_3518));
                   _data_mat[25] = ((walberla::float64)(Dummy_3519));
                   _data_mat[26] = ((walberla::float64)(Dummy_3520));
                   _data_mat[27] = ((walberla::float64)(Dummy_3521));
                   _data_mat[28] = ((walberla::float64)(Dummy_3522));
                   _data_mat[29] = ((walberla::float64)(Dummy_3523));
                   _data_mat[30] = ((walberla::float64)(Dummy_3524));
                   _data_mat[31] = ((walberla::float64)(Dummy_3525));
                   _data_mat[32] = ((walberla::float64)(Dummy_3526));
                   _data_mat[33] = ((walberla::float64)(Dummy_3527));
                   _data_mat[34] = ((walberla::float64)(Dummy_3528));
                   _data_mat[35] = ((walberla::float64)(Dummy_3529));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< walberla::float64 > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(elMat_0_0));
                   _data_mat[1] = ((walberla::float64)(elMat_0_1));
                   _data_mat[2] = ((walberla::float64)(elMat_0_2));
                   _data_mat[3] = ((walberla::float64)(elMat_0_3));
                   _data_mat[4] = ((walberla::float64)(elMat_0_4));
                   _data_mat[5] = ((walberla::float64)(elMat_0_5));
                   _data_mat[6] = ((walberla::float64)(elMat_1_0));
                   _data_mat[7] = ((walberla::float64)(elMat_1_1));
                   _data_mat[8] = ((walberla::float64)(elMat_1_2));
                   _data_mat[9] = ((walberla::float64)(elMat_1_3));
                   _data_mat[10] = ((walberla::float64)(elMat_1_4));
                   _data_mat[11] = ((walberla::float64)(elMat_1_5));
                   _data_mat[12] = ((walberla::float64)(elMat_2_0));
                   _data_mat[13] = ((walberla::float64)(elMat_2_1));
                   _data_mat[14] = ((walberla::float64)(elMat_2_2));
                   _data_mat[15] = ((walberla::float64)(elMat_2_3));
                   _data_mat[16] = ((walberla::float64)(elMat_2_4));
                   _data_mat[17] = ((walberla::float64)(elMat_2_5));
                   _data_mat[18] = ((walberla::float64)(elMat_3_0));
                   _data_mat[19] = ((walberla::float64)(elMat_3_1));
                   _data_mat[20] = ((walberla::float64)(elMat_3_2));
                   _data_mat[21] = ((walberla::float64)(elMat_3_3));
                   _data_mat[22] = ((walberla::float64)(elMat_3_4));
                   _data_mat[23] = ((walberla::float64)(elMat_3_5));
                   _data_mat[24] = ((walberla::float64)(elMat_4_0));
                   _data_mat[25] = ((walberla::float64)(elMat_4_1));
                   _data_mat[26] = ((walberla::float64)(elMat_4_2));
                   _data_mat[27] = ((walberla::float64)(elMat_4_3));
                   _data_mat[28] = ((walberla::float64)(elMat_4_4));
                   _data_mat[29] = ((walberla::float64)(elMat_4_5));
                   _data_mat[30] = ((walberla::float64)(elMat_5_0));
                   _data_mat[31] = ((walberla::float64)(elMat_5_1));
                   _data_mat[32] = ((walberla::float64)(elMat_5_2));
                   _data_mat[33] = ((walberla::float64)(elMat_5_3));
                   _data_mat[34] = ((walberla::float64)(elMat_5_4));
                   _data_mat[35] = ((walberla::float64)(elMat_5_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
