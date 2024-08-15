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































#include "../P2VectorToP1ElementwiseDivergence.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorToP1ElementwiseDivergence::toMatrix_P2VectorToP1ElementwiseDivergence_macro_2D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_src_edge_0, idx_t * RESTRICT  _data_src_edge_1, idx_t * RESTRICT  _data_src_vertex_0, idx_t * RESTRICT  _data_src_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t tmp_kernel_op_3 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_2 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_4 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_5 = tmp_kernel_op_4*0.16666666666666674;
       const real_t tmp_kernel_op_6 = 2.6666666666666665;
       const real_t tmp_kernel_op_7 = 0.66666666666666663;
       const real_t tmp_kernel_op_8 = tmp_kernel_op_6 + tmp_kernel_op_7 - 3.0;
       const real_t tmp_kernel_op_9 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_8 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_10 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_11 = tmp_kernel_op_10*0.16666666666666671;
       const real_t tmp_kernel_op_12 = 0.66666666666666663;
       const real_t tmp_kernel_op_13 = 0.66666666666666663;
       const real_t tmp_kernel_op_14 = tmp_kernel_op_12 + tmp_kernel_op_13 - 3.0;
       const real_t tmp_kernel_op_15 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_14 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_16 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_17 = tmp_kernel_op_16*0.66666666666666674;
       const real_t tmp_kernel_op_18 = tmp_kernel_op_0 - 1.0;
       const real_t tmp_kernel_op_19 = tmp_kernel_op_18*tmp_kernel_op_5;
       const real_t tmp_kernel_op_20 = tmp_kernel_op_6 - 1.0;
       const real_t tmp_kernel_op_21 = tmp_kernel_op_11*tmp_kernel_op_20;
       const real_t tmp_kernel_op_22 = tmp_kernel_op_12 - 1.0;
       const real_t tmp_kernel_op_23 = tmp_kernel_op_17*tmp_kernel_op_22;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_1 - 1.0;
       const real_t tmp_kernel_op_25 = tmp_kernel_op_24*tmp_kernel_op_5;
       const real_t tmp_kernel_op_26 = tmp_kernel_op_7 - 1.0;
       const real_t tmp_kernel_op_27 = tmp_kernel_op_11*tmp_kernel_op_26;
       const real_t tmp_kernel_op_28 = tmp_kernel_op_13 - 1.0;
       const real_t tmp_kernel_op_29 = tmp_kernel_op_17*tmp_kernel_op_28;
       const real_t tmp_kernel_op_30 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_31 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_32 = -tmp_kernel_op_30 - tmp_kernel_op_31;
       const real_t tmp_kernel_op_33 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_34 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_6;
       const real_t tmp_kernel_op_35 = -tmp_kernel_op_33 - tmp_kernel_op_34;
       const real_t tmp_kernel_op_36 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_37 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_12;
       const real_t tmp_kernel_op_38 = -tmp_kernel_op_36 - tmp_kernel_op_37;
       const real_t tmp_kernel_op_39 = -tmp_kernel_op_0 - 1.333333333333333;
       const real_t tmp_kernel_op_40 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_39 + tmp_kernel_op_30;
       const real_t tmp_kernel_op_41 = -tmp_kernel_op_6 + 2.666666666666667;
       const real_t tmp_kernel_op_42 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_41 + tmp_kernel_op_33;
       const real_t tmp_kernel_op_43 = -tmp_kernel_op_12 + 2.666666666666667;
       const real_t tmp_kernel_op_44 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_43 + tmp_kernel_op_36;
       const real_t tmp_kernel_op_45 = -tmp_kernel_op_1 + 2.666666666666667;
       const real_t tmp_kernel_op_46 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_45 + tmp_kernel_op_31;
       const real_t tmp_kernel_op_47 = -tmp_kernel_op_7 - 1.333333333333333;
       const real_t tmp_kernel_op_48 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_47 + tmp_kernel_op_34;
       const real_t tmp_kernel_op_49 = -tmp_kernel_op_13 + 2.666666666666667;
       const real_t tmp_kernel_op_50 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_49 + tmp_kernel_op_37;
       const real_t tmp_kernel_op_51 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_52 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_8 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_53 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_14 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_54 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_55 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_56 = -tmp_kernel_op_54 - tmp_kernel_op_55;
       const real_t tmp_kernel_op_57 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_58 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_6;
       const real_t tmp_kernel_op_59 = -tmp_kernel_op_57 - tmp_kernel_op_58;
       const real_t tmp_kernel_op_60 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_61 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_12;
       const real_t tmp_kernel_op_62 = -tmp_kernel_op_60 - tmp_kernel_op_61;
       const real_t tmp_kernel_op_63 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_39 + tmp_kernel_op_54;
       const real_t tmp_kernel_op_64 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_41 + tmp_kernel_op_57;
       const real_t tmp_kernel_op_65 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_43 + tmp_kernel_op_60;
       const real_t tmp_kernel_op_66 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_45 + tmp_kernel_op_55;
       const real_t tmp_kernel_op_67 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_47 + tmp_kernel_op_58;
       const real_t tmp_kernel_op_68 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_49 + tmp_kernel_op_61;
       const real_t tmp_kernel_op_69 = tmp_kernel_op_4*0.16666666666666666;
       const real_t tmp_kernel_op_70 = tmp_kernel_op_10*0.66666666666666663;
       const real_t tmp_kernel_op_71 = tmp_kernel_op_16*0.16666666666666666;
       const real_t tmp_kernel_op_72 = tmp_kernel_op_18*tmp_kernel_op_69;
       const real_t tmp_kernel_op_73 = tmp_kernel_op_20*tmp_kernel_op_70;
       const real_t tmp_kernel_op_74 = tmp_kernel_op_22*tmp_kernel_op_71;
       const real_t tmp_kernel_op_75 = tmp_kernel_op_24*tmp_kernel_op_69;
       const real_t tmp_kernel_op_76 = tmp_kernel_op_26*tmp_kernel_op_70;
       const real_t tmp_kernel_op_77 = tmp_kernel_op_28*tmp_kernel_op_71;
       const real_t tmp_kernel_op_78 = tmp_kernel_op_4*0.66666666666666663;
       const real_t tmp_kernel_op_79 = tmp_kernel_op_10*0.16666666666666666;
       const real_t tmp_kernel_op_80 = tmp_kernel_op_16*0.16666666666666666;
       const real_t tmp_kernel_op_81 = tmp_kernel_op_18*tmp_kernel_op_78;
       const real_t tmp_kernel_op_82 = tmp_kernel_op_20*tmp_kernel_op_79;
       const real_t tmp_kernel_op_83 = tmp_kernel_op_22*tmp_kernel_op_80;
       const real_t tmp_kernel_op_84 = tmp_kernel_op_24*tmp_kernel_op_78;
       const real_t tmp_kernel_op_85 = tmp_kernel_op_26*tmp_kernel_op_79;
       const real_t tmp_kernel_op_86 = tmp_kernel_op_28*tmp_kernel_op_80;
       const real_t elMat_0_0 = tmp_kernel_op_11*tmp_kernel_op_9 + tmp_kernel_op_15*tmp_kernel_op_17 + tmp_kernel_op_3*tmp_kernel_op_5;
       const real_t elMat_0_1 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_19 - jac_affine_inv_0_0_GRAY*tmp_kernel_op_21 - jac_affine_inv_0_0_GRAY*tmp_kernel_op_23;
       const real_t elMat_0_2 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_25 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_27 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_29;
       const real_t elMat_0_3 = tmp_kernel_op_11*tmp_kernel_op_35 + tmp_kernel_op_17*tmp_kernel_op_38 + tmp_kernel_op_32*tmp_kernel_op_5;
       const real_t elMat_0_4 = tmp_kernel_op_11*tmp_kernel_op_42 + tmp_kernel_op_17*tmp_kernel_op_44 + tmp_kernel_op_40*tmp_kernel_op_5;
       const real_t elMat_0_5 = tmp_kernel_op_11*tmp_kernel_op_48 + tmp_kernel_op_17*tmp_kernel_op_50 + tmp_kernel_op_46*tmp_kernel_op_5;
       const real_t elMat_0_6 = tmp_kernel_op_11*tmp_kernel_op_52 + tmp_kernel_op_17*tmp_kernel_op_53 + tmp_kernel_op_5*tmp_kernel_op_51;
       const real_t elMat_0_7 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_19 - jac_affine_inv_0_1_GRAY*tmp_kernel_op_21 - jac_affine_inv_0_1_GRAY*tmp_kernel_op_23;
       const real_t elMat_0_8 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_25 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_27 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_29;
       const real_t elMat_0_9 = tmp_kernel_op_11*tmp_kernel_op_59 + tmp_kernel_op_17*tmp_kernel_op_62 + tmp_kernel_op_5*tmp_kernel_op_56;
       const real_t elMat_0_10 = tmp_kernel_op_11*tmp_kernel_op_64 + tmp_kernel_op_17*tmp_kernel_op_65 + tmp_kernel_op_5*tmp_kernel_op_63;
       const real_t elMat_0_11 = tmp_kernel_op_11*tmp_kernel_op_67 + tmp_kernel_op_17*tmp_kernel_op_68 + tmp_kernel_op_5*tmp_kernel_op_66;
       const real_t elMat_1_0 = tmp_kernel_op_15*tmp_kernel_op_71 + tmp_kernel_op_3*tmp_kernel_op_69 + tmp_kernel_op_70*tmp_kernel_op_9;
       const real_t elMat_1_1 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_72 - jac_affine_inv_0_0_GRAY*tmp_kernel_op_73 - jac_affine_inv_0_0_GRAY*tmp_kernel_op_74;
       const real_t elMat_1_2 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_75 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_76 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_77;
       const real_t elMat_1_3 = tmp_kernel_op_32*tmp_kernel_op_69 + tmp_kernel_op_35*tmp_kernel_op_70 + tmp_kernel_op_38*tmp_kernel_op_71;
       const real_t elMat_1_4 = tmp_kernel_op_40*tmp_kernel_op_69 + tmp_kernel_op_42*tmp_kernel_op_70 + tmp_kernel_op_44*tmp_kernel_op_71;
       const real_t elMat_1_5 = tmp_kernel_op_46*tmp_kernel_op_69 + tmp_kernel_op_48*tmp_kernel_op_70 + tmp_kernel_op_50*tmp_kernel_op_71;
       const real_t elMat_1_6 = tmp_kernel_op_51*tmp_kernel_op_69 + tmp_kernel_op_52*tmp_kernel_op_70 + tmp_kernel_op_53*tmp_kernel_op_71;
       const real_t elMat_1_7 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_72 - jac_affine_inv_0_1_GRAY*tmp_kernel_op_73 - jac_affine_inv_0_1_GRAY*tmp_kernel_op_74;
       const real_t elMat_1_8 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_75 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_76 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_77;
       const real_t elMat_1_9 = tmp_kernel_op_56*tmp_kernel_op_69 + tmp_kernel_op_59*tmp_kernel_op_70 + tmp_kernel_op_62*tmp_kernel_op_71;
       const real_t elMat_1_10 = tmp_kernel_op_63*tmp_kernel_op_69 + tmp_kernel_op_64*tmp_kernel_op_70 + tmp_kernel_op_65*tmp_kernel_op_71;
       const real_t elMat_1_11 = tmp_kernel_op_66*tmp_kernel_op_69 + tmp_kernel_op_67*tmp_kernel_op_70 + tmp_kernel_op_68*tmp_kernel_op_71;
       const real_t elMat_2_0 = tmp_kernel_op_15*tmp_kernel_op_80 + tmp_kernel_op_3*tmp_kernel_op_78 + tmp_kernel_op_79*tmp_kernel_op_9;
       const real_t elMat_2_1 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_81 - jac_affine_inv_0_0_GRAY*tmp_kernel_op_82 - jac_affine_inv_0_0_GRAY*tmp_kernel_op_83;
       const real_t elMat_2_2 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_84 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_85 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_86;
       const real_t elMat_2_3 = tmp_kernel_op_32*tmp_kernel_op_78 + tmp_kernel_op_35*tmp_kernel_op_79 + tmp_kernel_op_38*tmp_kernel_op_80;
       const real_t elMat_2_4 = tmp_kernel_op_40*tmp_kernel_op_78 + tmp_kernel_op_42*tmp_kernel_op_79 + tmp_kernel_op_44*tmp_kernel_op_80;
       const real_t elMat_2_5 = tmp_kernel_op_46*tmp_kernel_op_78 + tmp_kernel_op_48*tmp_kernel_op_79 + tmp_kernel_op_50*tmp_kernel_op_80;
       const real_t elMat_2_6 = tmp_kernel_op_51*tmp_kernel_op_78 + tmp_kernel_op_52*tmp_kernel_op_79 + tmp_kernel_op_53*tmp_kernel_op_80;
       const real_t elMat_2_7 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_81 - jac_affine_inv_0_1_GRAY*tmp_kernel_op_82 - jac_affine_inv_0_1_GRAY*tmp_kernel_op_83;
       const real_t elMat_2_8 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_84 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_85 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_86;
       const real_t elMat_2_9 = tmp_kernel_op_56*tmp_kernel_op_78 + tmp_kernel_op_59*tmp_kernel_op_79 + tmp_kernel_op_62*tmp_kernel_op_80;
       const real_t elMat_2_10 = tmp_kernel_op_63*tmp_kernel_op_78 + tmp_kernel_op_64*tmp_kernel_op_79 + tmp_kernel_op_65*tmp_kernel_op_80;
       const real_t elMat_2_11 = tmp_kernel_op_66*tmp_kernel_op_78 + tmp_kernel_op_67*tmp_kernel_op_79 + tmp_kernel_op_68*tmp_kernel_op_80;
       const real_t tmp_moved_constant_0 = -jac_affine_inv_0_0_BLUE*tmp_kernel_op_2 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_1 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t tmp_moved_constant_2 = tmp_moved_constant_1*0.16666666666666674;
       const real_t tmp_moved_constant_3 = -jac_affine_inv_0_0_BLUE*tmp_kernel_op_8 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_8;
       const real_t tmp_moved_constant_4 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t tmp_moved_constant_5 = tmp_moved_constant_4*0.16666666666666671;
       const real_t tmp_moved_constant_6 = -jac_affine_inv_0_0_BLUE*tmp_kernel_op_14 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_7 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t tmp_moved_constant_8 = tmp_moved_constant_7*0.66666666666666674;
       const real_t tmp_moved_constant_9 = tmp_kernel_op_18*tmp_moved_constant_2;
       const real_t tmp_moved_constant_10 = tmp_kernel_op_20*tmp_moved_constant_5;
       const real_t tmp_moved_constant_11 = tmp_kernel_op_22*tmp_moved_constant_8;
       const real_t tmp_moved_constant_12 = tmp_kernel_op_24*tmp_moved_constant_2;
       const real_t tmp_moved_constant_13 = tmp_kernel_op_26*tmp_moved_constant_5;
       const real_t tmp_moved_constant_14 = tmp_kernel_op_28*tmp_moved_constant_8;
       const real_t tmp_moved_constant_15 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_1;
       const real_t tmp_moved_constant_16 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_17 = -tmp_moved_constant_15 - tmp_moved_constant_16;
       const real_t tmp_moved_constant_18 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_19 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_6;
       const real_t tmp_moved_constant_20 = -tmp_moved_constant_18 - tmp_moved_constant_19;
       const real_t tmp_moved_constant_21 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_13;
       const real_t tmp_moved_constant_22 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_12;
       const real_t tmp_moved_constant_23 = -tmp_moved_constant_21 - tmp_moved_constant_22;
       const real_t tmp_moved_constant_24 = -jac_affine_inv_1_0_BLUE*tmp_kernel_op_39 + tmp_moved_constant_15;
       const real_t tmp_moved_constant_25 = -jac_affine_inv_1_0_BLUE*tmp_kernel_op_41 + tmp_moved_constant_18;
       const real_t tmp_moved_constant_26 = -jac_affine_inv_1_0_BLUE*tmp_kernel_op_43 + tmp_moved_constant_21;
       const real_t tmp_moved_constant_27 = -jac_affine_inv_0_0_BLUE*tmp_kernel_op_45 + tmp_moved_constant_16;
       const real_t tmp_moved_constant_28 = -jac_affine_inv_0_0_BLUE*tmp_kernel_op_47 + tmp_moved_constant_19;
       const real_t tmp_moved_constant_29 = -jac_affine_inv_0_0_BLUE*tmp_kernel_op_49 + tmp_moved_constant_22;
       const real_t tmp_moved_constant_30 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const real_t tmp_moved_constant_31 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_8 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_8;
       const real_t tmp_moved_constant_32 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_14 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_14;
       const real_t tmp_moved_constant_33 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const real_t tmp_moved_constant_34 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_35 = -tmp_moved_constant_33 - tmp_moved_constant_34;
       const real_t tmp_moved_constant_36 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_37 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_6;
       const real_t tmp_moved_constant_38 = -tmp_moved_constant_36 - tmp_moved_constant_37;
       const real_t tmp_moved_constant_39 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_13;
       const real_t tmp_moved_constant_40 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_12;
       const real_t tmp_moved_constant_41 = -tmp_moved_constant_39 - tmp_moved_constant_40;
       const real_t tmp_moved_constant_42 = -jac_affine_inv_1_1_BLUE*tmp_kernel_op_39 + tmp_moved_constant_33;
       const real_t tmp_moved_constant_43 = -jac_affine_inv_1_1_BLUE*tmp_kernel_op_41 + tmp_moved_constant_36;
       const real_t tmp_moved_constant_44 = -jac_affine_inv_1_1_BLUE*tmp_kernel_op_43 + tmp_moved_constant_39;
       const real_t tmp_moved_constant_45 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_45 + tmp_moved_constant_34;
       const real_t tmp_moved_constant_46 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_47 + tmp_moved_constant_37;
       const real_t tmp_moved_constant_47 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_49 + tmp_moved_constant_40;
       const real_t tmp_moved_constant_48 = tmp_moved_constant_1*0.16666666666666666;
       const real_t tmp_moved_constant_49 = tmp_moved_constant_4*0.66666666666666663;
       const real_t tmp_moved_constant_50 = tmp_moved_constant_7*0.16666666666666666;
       const real_t tmp_moved_constant_51 = tmp_kernel_op_18*tmp_moved_constant_48;
       const real_t tmp_moved_constant_52 = tmp_kernel_op_20*tmp_moved_constant_49;
       const real_t tmp_moved_constant_53 = tmp_kernel_op_22*tmp_moved_constant_50;
       const real_t tmp_moved_constant_54 = tmp_kernel_op_24*tmp_moved_constant_48;
       const real_t tmp_moved_constant_55 = tmp_kernel_op_26*tmp_moved_constant_49;
       const real_t tmp_moved_constant_56 = tmp_kernel_op_28*tmp_moved_constant_50;
       const real_t tmp_moved_constant_57 = tmp_moved_constant_1*0.66666666666666663;
       const real_t tmp_moved_constant_58 = tmp_moved_constant_4*0.16666666666666666;
       const real_t tmp_moved_constant_59 = tmp_moved_constant_7*0.16666666666666666;
       const real_t tmp_moved_constant_60 = tmp_kernel_op_18*tmp_moved_constant_57;
       const real_t tmp_moved_constant_61 = tmp_kernel_op_20*tmp_moved_constant_58;
       const real_t tmp_moved_constant_62 = tmp_kernel_op_22*tmp_moved_constant_59;
       const real_t tmp_moved_constant_63 = tmp_kernel_op_24*tmp_moved_constant_57;
       const real_t tmp_moved_constant_64 = tmp_kernel_op_26*tmp_moved_constant_58;
       const real_t tmp_moved_constant_65 = tmp_kernel_op_28*tmp_moved_constant_59;
       const real_t tmp_moved_constant_66 = tmp_moved_constant_0*tmp_moved_constant_2 + tmp_moved_constant_3*tmp_moved_constant_5 + tmp_moved_constant_6*tmp_moved_constant_8;
       const real_t tmp_moved_constant_67 = -jac_affine_inv_0_0_BLUE*tmp_moved_constant_10 - jac_affine_inv_0_0_BLUE*tmp_moved_constant_11 - jac_affine_inv_0_0_BLUE*tmp_moved_constant_9;
       const real_t tmp_moved_constant_68 = -jac_affine_inv_1_0_BLUE*tmp_moved_constant_12 - jac_affine_inv_1_0_BLUE*tmp_moved_constant_13 - jac_affine_inv_1_0_BLUE*tmp_moved_constant_14;
       const real_t tmp_moved_constant_69 = tmp_moved_constant_17*tmp_moved_constant_2 + tmp_moved_constant_20*tmp_moved_constant_5 + tmp_moved_constant_23*tmp_moved_constant_8;
       const real_t tmp_moved_constant_70 = tmp_moved_constant_2*tmp_moved_constant_24 + tmp_moved_constant_25*tmp_moved_constant_5 + tmp_moved_constant_26*tmp_moved_constant_8;
       const real_t tmp_moved_constant_71 = tmp_moved_constant_2*tmp_moved_constant_27 + tmp_moved_constant_28*tmp_moved_constant_5 + tmp_moved_constant_29*tmp_moved_constant_8;
       const real_t tmp_moved_constant_72 = tmp_moved_constant_2*tmp_moved_constant_30 + tmp_moved_constant_31*tmp_moved_constant_5 + tmp_moved_constant_32*tmp_moved_constant_8;
       const real_t tmp_moved_constant_73 = -jac_affine_inv_0_1_BLUE*tmp_moved_constant_10 - jac_affine_inv_0_1_BLUE*tmp_moved_constant_11 - jac_affine_inv_0_1_BLUE*tmp_moved_constant_9;
       const real_t tmp_moved_constant_74 = -jac_affine_inv_1_1_BLUE*tmp_moved_constant_12 - jac_affine_inv_1_1_BLUE*tmp_moved_constant_13 - jac_affine_inv_1_1_BLUE*tmp_moved_constant_14;
       const real_t tmp_moved_constant_75 = tmp_moved_constant_2*tmp_moved_constant_35 + tmp_moved_constant_38*tmp_moved_constant_5 + tmp_moved_constant_41*tmp_moved_constant_8;
       const real_t tmp_moved_constant_76 = tmp_moved_constant_2*tmp_moved_constant_42 + tmp_moved_constant_43*tmp_moved_constant_5 + tmp_moved_constant_44*tmp_moved_constant_8;
       const real_t tmp_moved_constant_77 = tmp_moved_constant_2*tmp_moved_constant_45 + tmp_moved_constant_46*tmp_moved_constant_5 + tmp_moved_constant_47*tmp_moved_constant_8;
       const real_t tmp_moved_constant_78 = tmp_moved_constant_0*tmp_moved_constant_48 + tmp_moved_constant_3*tmp_moved_constant_49 + tmp_moved_constant_50*tmp_moved_constant_6;
       const real_t tmp_moved_constant_79 = -jac_affine_inv_0_0_BLUE*tmp_moved_constant_51 - jac_affine_inv_0_0_BLUE*tmp_moved_constant_52 - jac_affine_inv_0_0_BLUE*tmp_moved_constant_53;
       const real_t tmp_moved_constant_80 = -jac_affine_inv_1_0_BLUE*tmp_moved_constant_54 - jac_affine_inv_1_0_BLUE*tmp_moved_constant_55 - jac_affine_inv_1_0_BLUE*tmp_moved_constant_56;
       const real_t tmp_moved_constant_81 = tmp_moved_constant_17*tmp_moved_constant_48 + tmp_moved_constant_20*tmp_moved_constant_49 + tmp_moved_constant_23*tmp_moved_constant_50;
       const real_t tmp_moved_constant_82 = tmp_moved_constant_24*tmp_moved_constant_48 + tmp_moved_constant_25*tmp_moved_constant_49 + tmp_moved_constant_26*tmp_moved_constant_50;
       const real_t tmp_moved_constant_83 = tmp_moved_constant_27*tmp_moved_constant_48 + tmp_moved_constant_28*tmp_moved_constant_49 + tmp_moved_constant_29*tmp_moved_constant_50;
       const real_t tmp_moved_constant_84 = tmp_moved_constant_30*tmp_moved_constant_48 + tmp_moved_constant_31*tmp_moved_constant_49 + tmp_moved_constant_32*tmp_moved_constant_50;
       const real_t tmp_moved_constant_85 = -jac_affine_inv_0_1_BLUE*tmp_moved_constant_51 - jac_affine_inv_0_1_BLUE*tmp_moved_constant_52 - jac_affine_inv_0_1_BLUE*tmp_moved_constant_53;
       const real_t tmp_moved_constant_86 = -jac_affine_inv_1_1_BLUE*tmp_moved_constant_54 - jac_affine_inv_1_1_BLUE*tmp_moved_constant_55 - jac_affine_inv_1_1_BLUE*tmp_moved_constant_56;
       const real_t tmp_moved_constant_87 = tmp_moved_constant_35*tmp_moved_constant_48 + tmp_moved_constant_38*tmp_moved_constant_49 + tmp_moved_constant_41*tmp_moved_constant_50;
       const real_t tmp_moved_constant_88 = tmp_moved_constant_42*tmp_moved_constant_48 + tmp_moved_constant_43*tmp_moved_constant_49 + tmp_moved_constant_44*tmp_moved_constant_50;
       const real_t tmp_moved_constant_89 = tmp_moved_constant_45*tmp_moved_constant_48 + tmp_moved_constant_46*tmp_moved_constant_49 + tmp_moved_constant_47*tmp_moved_constant_50;
       const real_t tmp_moved_constant_90 = tmp_moved_constant_0*tmp_moved_constant_57 + tmp_moved_constant_3*tmp_moved_constant_58 + tmp_moved_constant_59*tmp_moved_constant_6;
       const real_t tmp_moved_constant_91 = -jac_affine_inv_0_0_BLUE*tmp_moved_constant_60 - jac_affine_inv_0_0_BLUE*tmp_moved_constant_61 - jac_affine_inv_0_0_BLUE*tmp_moved_constant_62;
       const real_t tmp_moved_constant_92 = -jac_affine_inv_1_0_BLUE*tmp_moved_constant_63 - jac_affine_inv_1_0_BLUE*tmp_moved_constant_64 - jac_affine_inv_1_0_BLUE*tmp_moved_constant_65;
       const real_t tmp_moved_constant_93 = tmp_moved_constant_17*tmp_moved_constant_57 + tmp_moved_constant_20*tmp_moved_constant_58 + tmp_moved_constant_23*tmp_moved_constant_59;
       const real_t tmp_moved_constant_94 = tmp_moved_constant_24*tmp_moved_constant_57 + tmp_moved_constant_25*tmp_moved_constant_58 + tmp_moved_constant_26*tmp_moved_constant_59;
       const real_t tmp_moved_constant_95 = tmp_moved_constant_27*tmp_moved_constant_57 + tmp_moved_constant_28*tmp_moved_constant_58 + tmp_moved_constant_29*tmp_moved_constant_59;
       const real_t tmp_moved_constant_96 = tmp_moved_constant_30*tmp_moved_constant_57 + tmp_moved_constant_31*tmp_moved_constant_58 + tmp_moved_constant_32*tmp_moved_constant_59;
       const real_t tmp_moved_constant_97 = -jac_affine_inv_0_1_BLUE*tmp_moved_constant_60 - jac_affine_inv_0_1_BLUE*tmp_moved_constant_61 - jac_affine_inv_0_1_BLUE*tmp_moved_constant_62;
       const real_t tmp_moved_constant_98 = -jac_affine_inv_1_1_BLUE*tmp_moved_constant_63 - jac_affine_inv_1_1_BLUE*tmp_moved_constant_64 - jac_affine_inv_1_1_BLUE*tmp_moved_constant_65;
       const real_t tmp_moved_constant_99 = tmp_moved_constant_35*tmp_moved_constant_57 + tmp_moved_constant_38*tmp_moved_constant_58 + tmp_moved_constant_41*tmp_moved_constant_59;
       const real_t tmp_moved_constant_100 = tmp_moved_constant_42*tmp_moved_constant_57 + tmp_moved_constant_43*tmp_moved_constant_58 + tmp_moved_constant_44*tmp_moved_constant_59;
       const real_t tmp_moved_constant_101 = tmp_moved_constant_45*tmp_moved_constant_57 + tmp_moved_constant_46*tmp_moved_constant_58 + tmp_moved_constant_47*tmp_moved_constant_59;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             {
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
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 12 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[5] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[6] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[7] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[8] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[9] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[10] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[11] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_0_4));
                   _data_mat[5] = ((real_t)(elMat_0_5));
                   _data_mat[6] = ((real_t)(elMat_0_6));
                   _data_mat[7] = ((real_t)(elMat_0_7));
                   _data_mat[8] = ((real_t)(elMat_0_8));
                   _data_mat[9] = ((real_t)(elMat_0_9));
                   _data_mat[10] = ((real_t)(elMat_0_10));
                   _data_mat[11] = ((real_t)(elMat_0_11));
                   _data_mat[12] = ((real_t)(elMat_1_0));
                   _data_mat[13] = ((real_t)(elMat_1_1));
                   _data_mat[14] = ((real_t)(elMat_1_2));
                   _data_mat[15] = ((real_t)(elMat_1_3));
                   _data_mat[16] = ((real_t)(elMat_1_4));
                   _data_mat[17] = ((real_t)(elMat_1_5));
                   _data_mat[18] = ((real_t)(elMat_1_6));
                   _data_mat[19] = ((real_t)(elMat_1_7));
                   _data_mat[20] = ((real_t)(elMat_1_8));
                   _data_mat[21] = ((real_t)(elMat_1_9));
                   _data_mat[22] = ((real_t)(elMat_1_10));
                   _data_mat[23] = ((real_t)(elMat_1_11));
                   _data_mat[24] = ((real_t)(elMat_2_0));
                   _data_mat[25] = ((real_t)(elMat_2_1));
                   _data_mat[26] = ((real_t)(elMat_2_2));
                   _data_mat[27] = ((real_t)(elMat_2_3));
                   _data_mat[28] = ((real_t)(elMat_2_4));
                   _data_mat[29] = ((real_t)(elMat_2_5));
                   _data_mat[30] = ((real_t)(elMat_2_6));
                   _data_mat[31] = ((real_t)(elMat_2_7));
                   _data_mat[32] = ((real_t)(elMat_2_8));
                   _data_mat[33] = ((real_t)(elMat_2_9));
                   _data_mat[34] = ((real_t)(elMat_2_10));
                   _data_mat[35] = ((real_t)(elMat_2_11));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
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
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 12 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_src_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_colIdx[5] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[6] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[7] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[8] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_colIdx[9] = ((uint64_t)(_data_src_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[10] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_colIdx[11] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(tmp_moved_constant_66));
                   _data_mat[1] = ((real_t)(tmp_moved_constant_67));
                   _data_mat[2] = ((real_t)(tmp_moved_constant_68));
                   _data_mat[3] = ((real_t)(tmp_moved_constant_69));
                   _data_mat[4] = ((real_t)(tmp_moved_constant_70));
                   _data_mat[5] = ((real_t)(tmp_moved_constant_71));
                   _data_mat[6] = ((real_t)(tmp_moved_constant_72));
                   _data_mat[7] = ((real_t)(tmp_moved_constant_73));
                   _data_mat[8] = ((real_t)(tmp_moved_constant_74));
                   _data_mat[9] = ((real_t)(tmp_moved_constant_75));
                   _data_mat[10] = ((real_t)(tmp_moved_constant_76));
                   _data_mat[11] = ((real_t)(tmp_moved_constant_77));
                   _data_mat[12] = ((real_t)(tmp_moved_constant_78));
                   _data_mat[13] = ((real_t)(tmp_moved_constant_79));
                   _data_mat[14] = ((real_t)(tmp_moved_constant_80));
                   _data_mat[15] = ((real_t)(tmp_moved_constant_81));
                   _data_mat[16] = ((real_t)(tmp_moved_constant_82));
                   _data_mat[17] = ((real_t)(tmp_moved_constant_83));
                   _data_mat[18] = ((real_t)(tmp_moved_constant_84));
                   _data_mat[19] = ((real_t)(tmp_moved_constant_85));
                   _data_mat[20] = ((real_t)(tmp_moved_constant_86));
                   _data_mat[21] = ((real_t)(tmp_moved_constant_87));
                   _data_mat[22] = ((real_t)(tmp_moved_constant_88));
                   _data_mat[23] = ((real_t)(tmp_moved_constant_89));
                   _data_mat[24] = ((real_t)(tmp_moved_constant_90));
                   _data_mat[25] = ((real_t)(tmp_moved_constant_91));
                   _data_mat[26] = ((real_t)(tmp_moved_constant_92));
                   _data_mat[27] = ((real_t)(tmp_moved_constant_93));
                   _data_mat[28] = ((real_t)(tmp_moved_constant_94));
                   _data_mat[29] = ((real_t)(tmp_moved_constant_95));
                   _data_mat[30] = ((real_t)(tmp_moved_constant_96));
                   _data_mat[31] = ((real_t)(tmp_moved_constant_97));
                   _data_mat[32] = ((real_t)(tmp_moved_constant_98));
                   _data_mat[33] = ((real_t)(tmp_moved_constant_99));
                   _data_mat[34] = ((real_t)(tmp_moved_constant_100));
                   _data_mat[35] = ((real_t)(tmp_moved_constant_101));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             {
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
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 12 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[3] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[5] = ((uint64_t)(_data_src_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[6] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[7] = ((uint64_t)(_data_src_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[8] = ((uint64_t)(_data_src_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[9] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[10] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[11] = ((uint64_t)(_data_src_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_0_3));
                   _data_mat[4] = ((real_t)(elMat_0_4));
                   _data_mat[5] = ((real_t)(elMat_0_5));
                   _data_mat[6] = ((real_t)(elMat_0_6));
                   _data_mat[7] = ((real_t)(elMat_0_7));
                   _data_mat[8] = ((real_t)(elMat_0_8));
                   _data_mat[9] = ((real_t)(elMat_0_9));
                   _data_mat[10] = ((real_t)(elMat_0_10));
                   _data_mat[11] = ((real_t)(elMat_0_11));
                   _data_mat[12] = ((real_t)(elMat_1_0));
                   _data_mat[13] = ((real_t)(elMat_1_1));
                   _data_mat[14] = ((real_t)(elMat_1_2));
                   _data_mat[15] = ((real_t)(elMat_1_3));
                   _data_mat[16] = ((real_t)(elMat_1_4));
                   _data_mat[17] = ((real_t)(elMat_1_5));
                   _data_mat[18] = ((real_t)(elMat_1_6));
                   _data_mat[19] = ((real_t)(elMat_1_7));
                   _data_mat[20] = ((real_t)(elMat_1_8));
                   _data_mat[21] = ((real_t)(elMat_1_9));
                   _data_mat[22] = ((real_t)(elMat_1_10));
                   _data_mat[23] = ((real_t)(elMat_1_11));
                   _data_mat[24] = ((real_t)(elMat_2_0));
                   _data_mat[25] = ((real_t)(elMat_2_1));
                   _data_mat[26] = ((real_t)(elMat_2_2));
                   _data_mat[27] = ((real_t)(elMat_2_3));
                   _data_mat[28] = ((real_t)(elMat_2_4));
                   _data_mat[29] = ((real_t)(elMat_2_5));
                   _data_mat[30] = ((real_t)(elMat_2_6));
                   _data_mat[31] = ((real_t)(elMat_2_7));
                   _data_mat[32] = ((real_t)(elMat_2_8));
                   _data_mat[33] = ((real_t)(elMat_2_9));
                   _data_mat[34] = ((real_t)(elMat_2_10));
                   _data_mat[35] = ((real_t)(elMat_2_11));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
