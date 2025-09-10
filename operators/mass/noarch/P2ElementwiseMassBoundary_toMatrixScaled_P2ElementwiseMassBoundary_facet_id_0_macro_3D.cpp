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

void P2ElementwiseMassBoundary::toMatrixScaled_P2ElementwiseMassBoundary_facet_id_0_macro_3D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t toMatrixScaling ) const
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
       const real_t tmp_kernel_op_32 = tmp_kernel_op_1*2.0;
       const real_t tmp_kernel_op_33 = tmp_kernel_op_32 - 0.33333333333333331;
       const real_t tmp_kernel_op_34 = tmp_kernel_op_2*2.0;
       const real_t tmp_kernel_op_35 = tmp_kernel_op_0*4.0;
       const real_t tmp_kernel_op_36 = 4.0*((real_t)(tmp_kernel_op_3));
       const real_t tmp_kernel_op_37 = 4.0*((real_t)(tmp_kernel_op_4));
       const real_t tmp_kernel_op_38 = tmp_kernel_op_36 + tmp_kernel_op_37;
       const real_t tmp_kernel_op_39 = 2.0*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_40 = tmp_kernel_op_39 + 1.0;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_8*-0.28125;
       const real_t tmp_kernel_op_42 = tmp_kernel_op_41*(tmp_kernel_op_32 + tmp_kernel_op_34 + tmp_kernel_op_35 + tmp_kernel_op_38 + tmp_kernel_op_40 - 2.0);
       const real_t tmp_kernel_op_43 = tmp_kernel_op_12*2.0;
       const real_t tmp_kernel_op_44 = tmp_kernel_op_43 - 0.20000000000000001;
       const real_t tmp_kernel_op_45 = tmp_kernel_op_13*2.0;
       const real_t tmp_kernel_op_46 = tmp_kernel_op_11*4.0;
       const real_t tmp_kernel_op_47 = 4.0*((real_t)(tmp_kernel_op_14));
       const real_t tmp_kernel_op_48 = 4.0*((real_t)(tmp_kernel_op_15));
       const real_t tmp_kernel_op_49 = tmp_kernel_op_47 + tmp_kernel_op_48;
       const real_t tmp_kernel_op_50 = tmp_kernel_op_8*0.26041666666666669;
       const real_t tmp_kernel_op_51 = tmp_kernel_op_50*(tmp_kernel_op_40 + tmp_kernel_op_43 + tmp_kernel_op_45 + tmp_kernel_op_46 + tmp_kernel_op_49 - 2.3999999999999999);
       const real_t tmp_kernel_op_52 = tmp_kernel_op_19*2.0;
       const real_t tmp_kernel_op_53 = tmp_kernel_op_52 - 0.59999999999999998;
       const real_t tmp_kernel_op_54 = tmp_kernel_op_20*2.0;
       const real_t tmp_kernel_op_55 = tmp_kernel_op_18*4.0;
       const real_t tmp_kernel_op_56 = 4.0*((real_t)(tmp_kernel_op_21));
       const real_t tmp_kernel_op_57 = 4.0*((real_t)(tmp_kernel_op_22));
       const real_t tmp_kernel_op_58 = tmp_kernel_op_56 + tmp_kernel_op_57;
       const real_t tmp_kernel_op_59 = tmp_kernel_op_8*0.26041666666666669;
       const real_t tmp_kernel_op_60 = tmp_kernel_op_59*(tmp_kernel_op_40 + tmp_kernel_op_52 + tmp_kernel_op_54 + tmp_kernel_op_55 + tmp_kernel_op_58 - 2.3999999999999999);
       const real_t tmp_kernel_op_61 = tmp_kernel_op_26*2.0;
       const real_t tmp_kernel_op_62 = tmp_kernel_op_61 - 0.20000000000000001;
       const real_t tmp_kernel_op_63 = tmp_kernel_op_27*2.0;
       const real_t tmp_kernel_op_64 = tmp_kernel_op_25*4.0;
       const real_t tmp_kernel_op_65 = 4.0*((real_t)(tmp_kernel_op_28));
       const real_t tmp_kernel_op_66 = 4.0*((real_t)(tmp_kernel_op_29));
       const real_t tmp_kernel_op_67 = tmp_kernel_op_65 + tmp_kernel_op_66;
       const real_t tmp_kernel_op_68 = tmp_kernel_op_8*0.26041666666666669;
       const real_t tmp_kernel_op_69 = tmp_kernel_op_68*(tmp_kernel_op_40 + tmp_kernel_op_61 + tmp_kernel_op_63 + tmp_kernel_op_64 + tmp_kernel_op_67 - 1.2000000000000002);
       const real_t tmp_kernel_op_70 = toMatrixScaling*(tmp_kernel_op_33*tmp_kernel_op_42 + tmp_kernel_op_44*tmp_kernel_op_51 + tmp_kernel_op_53*tmp_kernel_op_60 + tmp_kernel_op_62*tmp_kernel_op_69);
       const real_t tmp_kernel_op_71 = tmp_kernel_op_34 - 0.33333333333333331;
       const real_t tmp_kernel_op_72 = tmp_kernel_op_45 - 0.59999999999999998;
       const real_t tmp_kernel_op_73 = tmp_kernel_op_54 - 0.20000000000000001;
       const real_t tmp_kernel_op_74 = tmp_kernel_op_63 - 0.20000000000000001;
       const real_t tmp_kernel_op_75 = toMatrixScaling*(tmp_kernel_op_42*tmp_kernel_op_71 + tmp_kernel_op_51*tmp_kernel_op_72 + tmp_kernel_op_60*tmp_kernel_op_73 + tmp_kernel_op_69*tmp_kernel_op_74);
       const real_t tmp_kernel_op_76 = tmp_kernel_op_39;
       const real_t tmp_kernel_op_77 = toMatrixScaling*(tmp_kernel_op_42*tmp_kernel_op_76 + tmp_kernel_op_51*tmp_kernel_op_76 + tmp_kernel_op_60*tmp_kernel_op_76 + tmp_kernel_op_69*tmp_kernel_op_76);
       const real_t tmp_kernel_op_78 = toMatrixScaling*(tmp_kernel_op_37*tmp_kernel_op_42 + tmp_kernel_op_48*tmp_kernel_op_51 + tmp_kernel_op_57*tmp_kernel_op_60 + tmp_kernel_op_66*tmp_kernel_op_69);
       const real_t tmp_kernel_op_79 = toMatrixScaling*(tmp_kernel_op_36*tmp_kernel_op_42 + tmp_kernel_op_47*tmp_kernel_op_51 + tmp_kernel_op_56*tmp_kernel_op_60 + tmp_kernel_op_65*tmp_kernel_op_69);
       const real_t tmp_kernel_op_80 = toMatrixScaling*(tmp_kernel_op_35*tmp_kernel_op_42 + tmp_kernel_op_46*tmp_kernel_op_51 + tmp_kernel_op_55*tmp_kernel_op_60 + tmp_kernel_op_64*tmp_kernel_op_69);
       const real_t tmp_kernel_op_81 = 4.0*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_82 = -tmp_kernel_op_38 - tmp_kernel_op_81;
       const real_t tmp_kernel_op_83 = -tmp_kernel_op_49 - tmp_kernel_op_81;
       const real_t tmp_kernel_op_84 = -tmp_kernel_op_58 - tmp_kernel_op_81;
       const real_t tmp_kernel_op_85 = -tmp_kernel_op_67 - tmp_kernel_op_81;
       const real_t tmp_kernel_op_86 = toMatrixScaling*(tmp_kernel_op_42*tmp_kernel_op_82 + tmp_kernel_op_51*tmp_kernel_op_83 + tmp_kernel_op_60*tmp_kernel_op_84 + tmp_kernel_op_69*tmp_kernel_op_85);
       const real_t tmp_kernel_op_87 = tmp_kernel_op_2*-4.0 - tmp_kernel_op_35 - tmp_kernel_op_37 + 1.3333333333333333;
       const real_t tmp_kernel_op_88 = tmp_kernel_op_13*-4.0 - tmp_kernel_op_46 - tmp_kernel_op_48 + 2.3999999999999999;
       const real_t tmp_kernel_op_89 = tmp_kernel_op_20*-4.0 - tmp_kernel_op_55 - tmp_kernel_op_57 + 0.80000000000000004;
       const real_t tmp_kernel_op_90 = tmp_kernel_op_27*-4.0 - tmp_kernel_op_64 - tmp_kernel_op_66 + 0.80000000000000004;
       const real_t tmp_kernel_op_91 = toMatrixScaling*(tmp_kernel_op_42*tmp_kernel_op_87 + tmp_kernel_op_51*tmp_kernel_op_88 + tmp_kernel_op_60*tmp_kernel_op_89 + tmp_kernel_op_69*tmp_kernel_op_90);
       const real_t tmp_kernel_op_92 = tmp_kernel_op_1*-4.0 - tmp_kernel_op_35 - tmp_kernel_op_36 + 1.3333333333333333;
       const real_t tmp_kernel_op_93 = tmp_kernel_op_12*-4.0 - tmp_kernel_op_46 - tmp_kernel_op_47 + 0.80000000000000004;
       const real_t tmp_kernel_op_94 = tmp_kernel_op_19*-4.0 - tmp_kernel_op_55 - tmp_kernel_op_56 + 2.3999999999999999;
       const real_t tmp_kernel_op_95 = tmp_kernel_op_26*-4.0 - tmp_kernel_op_64 - tmp_kernel_op_65 + 0.80000000000000004;
       const real_t tmp_kernel_op_96 = toMatrixScaling*(tmp_kernel_op_42*tmp_kernel_op_92 + tmp_kernel_op_51*tmp_kernel_op_93 + tmp_kernel_op_60*tmp_kernel_op_94 + tmp_kernel_op_69*tmp_kernel_op_95);
       const real_t tmp_kernel_op_97 = tmp_kernel_op_41*4.0;
       const real_t tmp_kernel_op_98 = tmp_kernel_op_50*4.0;
       const real_t tmp_kernel_op_99 = tmp_kernel_op_59*4.0;
       const real_t tmp_kernel_op_100 = tmp_kernel_op_68*4.0;
       const real_t tmp_kernel_op_101 = tmp_kernel_op_33*tmp_kernel_op_41;
       const real_t tmp_kernel_op_102 = tmp_kernel_op_44*tmp_kernel_op_50;
       const real_t tmp_kernel_op_103 = tmp_kernel_op_53*tmp_kernel_op_59;
       const real_t tmp_kernel_op_104 = tmp_kernel_op_62*tmp_kernel_op_68;
       const real_t tmp_kernel_op_105 = toMatrixScaling*(tmp_kernel_op_101*tmp_kernel_op_71 + tmp_kernel_op_102*tmp_kernel_op_72 + tmp_kernel_op_103*tmp_kernel_op_73 + tmp_kernel_op_104*tmp_kernel_op_74);
       const real_t tmp_kernel_op_106 = toMatrixScaling*(tmp_kernel_op_101*tmp_kernel_op_76 + tmp_kernel_op_102*tmp_kernel_op_76 + tmp_kernel_op_103*tmp_kernel_op_76 + tmp_kernel_op_104*tmp_kernel_op_76);
       const real_t tmp_kernel_op_107 = toMatrixScaling*(tmp_kernel_op_101*tmp_kernel_op_37 + tmp_kernel_op_102*tmp_kernel_op_48 + tmp_kernel_op_103*tmp_kernel_op_57 + tmp_kernel_op_104*tmp_kernel_op_66);
       const real_t tmp_kernel_op_108 = toMatrixScaling*(tmp_kernel_op_101*tmp_kernel_op_36 + tmp_kernel_op_102*tmp_kernel_op_47 + tmp_kernel_op_103*tmp_kernel_op_56 + tmp_kernel_op_104*tmp_kernel_op_65);
       const real_t tmp_kernel_op_109 = toMatrixScaling*(tmp_kernel_op_101*tmp_kernel_op_35 + tmp_kernel_op_102*tmp_kernel_op_46 + tmp_kernel_op_103*tmp_kernel_op_55 + tmp_kernel_op_104*tmp_kernel_op_64);
       const real_t tmp_kernel_op_110 = toMatrixScaling*(tmp_kernel_op_101*tmp_kernel_op_82 + tmp_kernel_op_102*tmp_kernel_op_83 + tmp_kernel_op_103*tmp_kernel_op_84 + tmp_kernel_op_104*tmp_kernel_op_85);
       const real_t tmp_kernel_op_111 = toMatrixScaling*(tmp_kernel_op_101*tmp_kernel_op_87 + tmp_kernel_op_102*tmp_kernel_op_88 + tmp_kernel_op_103*tmp_kernel_op_89 + tmp_kernel_op_104*tmp_kernel_op_90);
       const real_t tmp_kernel_op_112 = toMatrixScaling*(tmp_kernel_op_101*tmp_kernel_op_92 + tmp_kernel_op_102*tmp_kernel_op_93 + tmp_kernel_op_103*tmp_kernel_op_94 + tmp_kernel_op_104*tmp_kernel_op_95);
       const real_t tmp_kernel_op_113 = tmp_kernel_op_41*tmp_kernel_op_71;
       const real_t tmp_kernel_op_114 = tmp_kernel_op_50*tmp_kernel_op_72;
       const real_t tmp_kernel_op_115 = tmp_kernel_op_59*tmp_kernel_op_73;
       const real_t tmp_kernel_op_116 = tmp_kernel_op_68*tmp_kernel_op_74;
       const real_t tmp_kernel_op_117 = toMatrixScaling*(tmp_kernel_op_113*tmp_kernel_op_76 + tmp_kernel_op_114*tmp_kernel_op_76 + tmp_kernel_op_115*tmp_kernel_op_76 + tmp_kernel_op_116*tmp_kernel_op_76);
       const real_t tmp_kernel_op_118 = toMatrixScaling*(tmp_kernel_op_113*tmp_kernel_op_37 + tmp_kernel_op_114*tmp_kernel_op_48 + tmp_kernel_op_115*tmp_kernel_op_57 + tmp_kernel_op_116*tmp_kernel_op_66);
       const real_t tmp_kernel_op_119 = toMatrixScaling*(tmp_kernel_op_113*tmp_kernel_op_36 + tmp_kernel_op_114*tmp_kernel_op_47 + tmp_kernel_op_115*tmp_kernel_op_56 + tmp_kernel_op_116*tmp_kernel_op_65);
       const real_t tmp_kernel_op_120 = toMatrixScaling*(tmp_kernel_op_113*tmp_kernel_op_35 + tmp_kernel_op_114*tmp_kernel_op_46 + tmp_kernel_op_115*tmp_kernel_op_55 + tmp_kernel_op_116*tmp_kernel_op_64);
       const real_t tmp_kernel_op_121 = toMatrixScaling*(tmp_kernel_op_113*tmp_kernel_op_82 + tmp_kernel_op_114*tmp_kernel_op_83 + tmp_kernel_op_115*tmp_kernel_op_84 + tmp_kernel_op_116*tmp_kernel_op_85);
       const real_t tmp_kernel_op_122 = toMatrixScaling*(tmp_kernel_op_113*tmp_kernel_op_87 + tmp_kernel_op_114*tmp_kernel_op_88 + tmp_kernel_op_115*tmp_kernel_op_89 + tmp_kernel_op_116*tmp_kernel_op_90);
       const real_t tmp_kernel_op_123 = toMatrixScaling*(tmp_kernel_op_113*tmp_kernel_op_92 + tmp_kernel_op_114*tmp_kernel_op_93 + tmp_kernel_op_115*tmp_kernel_op_94 + tmp_kernel_op_116*tmp_kernel_op_95);
       const int64_t tmp_kernel_op_124 = ((int64_t)((tmp_kernel_op_6*tmp_kernel_op_6)));
       const real_t tmp_kernel_op_125 = tmp_kernel_op_41*tmp_kernel_op_76;
       const real_t tmp_kernel_op_126 = tmp_kernel_op_50*tmp_kernel_op_76;
       const real_t tmp_kernel_op_127 = tmp_kernel_op_59*tmp_kernel_op_76;
       const real_t tmp_kernel_op_128 = tmp_kernel_op_68*tmp_kernel_op_76;
       const real_t tmp_kernel_op_129 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_37 + tmp_kernel_op_126*tmp_kernel_op_48 + tmp_kernel_op_127*tmp_kernel_op_57 + tmp_kernel_op_128*tmp_kernel_op_66);
       const real_t tmp_kernel_op_130 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_36 + tmp_kernel_op_126*tmp_kernel_op_47 + tmp_kernel_op_127*tmp_kernel_op_56 + tmp_kernel_op_128*tmp_kernel_op_65);
       const real_t tmp_kernel_op_131 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_35 + tmp_kernel_op_126*tmp_kernel_op_46 + tmp_kernel_op_127*tmp_kernel_op_55 + tmp_kernel_op_128*tmp_kernel_op_64);
       const real_t tmp_kernel_op_132 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_82 + tmp_kernel_op_126*tmp_kernel_op_83 + tmp_kernel_op_127*tmp_kernel_op_84 + tmp_kernel_op_128*tmp_kernel_op_85);
       const real_t tmp_kernel_op_133 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_87 + tmp_kernel_op_126*tmp_kernel_op_88 + tmp_kernel_op_127*tmp_kernel_op_89 + tmp_kernel_op_128*tmp_kernel_op_90);
       const real_t tmp_kernel_op_134 = toMatrixScaling*(tmp_kernel_op_125*tmp_kernel_op_92 + tmp_kernel_op_126*tmp_kernel_op_93 + tmp_kernel_op_127*tmp_kernel_op_94 + tmp_kernel_op_128*tmp_kernel_op_95);
       const real_t tmp_kernel_op_135 = tmp_kernel_op_10*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_136 = tmp_kernel_op_17*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_137 = tmp_kernel_op_24*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_138 = tmp_kernel_op_31*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_139 = toMatrixScaling*(tmp_kernel_op_0*tmp_kernel_op_135 + tmp_kernel_op_11*tmp_kernel_op_136 + tmp_kernel_op_137*tmp_kernel_op_18 + tmp_kernel_op_138*tmp_kernel_op_25);
       const real_t tmp_kernel_op_140 = tmp_kernel_op_10*tmp_kernel_op_2;
       const real_t tmp_kernel_op_141 = tmp_kernel_op_13*tmp_kernel_op_17;
       const real_t tmp_kernel_op_142 = tmp_kernel_op_20*tmp_kernel_op_24;
       const real_t tmp_kernel_op_143 = tmp_kernel_op_27*tmp_kernel_op_31;
       const real_t tmp_kernel_op_144 = toMatrixScaling*(tmp_kernel_op_140*((real_t)(tmp_kernel_op_3)) + tmp_kernel_op_141*((real_t)(tmp_kernel_op_14)) + tmp_kernel_op_142*((real_t)(tmp_kernel_op_21)) + tmp_kernel_op_143*((real_t)(tmp_kernel_op_28)));
       const real_t tmp_kernel_op_145 = tmp_kernel_op_41*tmp_kernel_op_82;
       const real_t tmp_kernel_op_146 = tmp_kernel_op_50*tmp_kernel_op_83;
       const real_t tmp_kernel_op_147 = tmp_kernel_op_59*tmp_kernel_op_84;
       const real_t tmp_kernel_op_148 = tmp_kernel_op_68*tmp_kernel_op_85;
       const real_t tmp_kernel_op_149 = toMatrixScaling*(tmp_kernel_op_145*tmp_kernel_op_37 + tmp_kernel_op_146*tmp_kernel_op_48 + tmp_kernel_op_147*tmp_kernel_op_57 + tmp_kernel_op_148*tmp_kernel_op_66);
       const real_t tmp_kernel_op_150 = tmp_kernel_op_41*tmp_kernel_op_87;
       const real_t tmp_kernel_op_151 = tmp_kernel_op_50*tmp_kernel_op_88;
       const real_t tmp_kernel_op_152 = tmp_kernel_op_59*tmp_kernel_op_89;
       const real_t tmp_kernel_op_153 = tmp_kernel_op_68*tmp_kernel_op_90;
       const real_t tmp_kernel_op_154 = toMatrixScaling*(tmp_kernel_op_150*tmp_kernel_op_37 + tmp_kernel_op_151*tmp_kernel_op_48 + tmp_kernel_op_152*tmp_kernel_op_57 + tmp_kernel_op_153*tmp_kernel_op_66);
       const real_t tmp_kernel_op_155 = tmp_kernel_op_41*tmp_kernel_op_92;
       const real_t tmp_kernel_op_156 = tmp_kernel_op_50*tmp_kernel_op_93;
       const real_t tmp_kernel_op_157 = tmp_kernel_op_59*tmp_kernel_op_94;
       const real_t tmp_kernel_op_158 = tmp_kernel_op_68*tmp_kernel_op_95;
       const real_t tmp_kernel_op_159 = toMatrixScaling*(tmp_kernel_op_155*tmp_kernel_op_37 + tmp_kernel_op_156*tmp_kernel_op_48 + tmp_kernel_op_157*tmp_kernel_op_57 + tmp_kernel_op_158*tmp_kernel_op_66);
       const real_t tmp_kernel_op_160 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_10*((real_t)(tmp_kernel_op_4)) + tmp_kernel_op_12*tmp_kernel_op_17*((real_t)(tmp_kernel_op_15)) + tmp_kernel_op_19*tmp_kernel_op_24*((real_t)(tmp_kernel_op_22)) + tmp_kernel_op_26*tmp_kernel_op_31*((real_t)(tmp_kernel_op_29)));
       const real_t tmp_kernel_op_161 = toMatrixScaling*(tmp_kernel_op_145*tmp_kernel_op_36 + tmp_kernel_op_146*tmp_kernel_op_47 + tmp_kernel_op_147*tmp_kernel_op_56 + tmp_kernel_op_148*tmp_kernel_op_65);
       const real_t tmp_kernel_op_162 = toMatrixScaling*(tmp_kernel_op_150*tmp_kernel_op_36 + tmp_kernel_op_151*tmp_kernel_op_47 + tmp_kernel_op_152*tmp_kernel_op_56 + tmp_kernel_op_153*tmp_kernel_op_65);
       const real_t tmp_kernel_op_163 = toMatrixScaling*(tmp_kernel_op_155*tmp_kernel_op_36 + tmp_kernel_op_156*tmp_kernel_op_47 + tmp_kernel_op_157*tmp_kernel_op_56 + tmp_kernel_op_158*tmp_kernel_op_65);
       const real_t tmp_kernel_op_164 = toMatrixScaling*(tmp_kernel_op_145*tmp_kernel_op_35 + tmp_kernel_op_146*tmp_kernel_op_46 + tmp_kernel_op_147*tmp_kernel_op_55 + tmp_kernel_op_148*tmp_kernel_op_64);
       const real_t tmp_kernel_op_165 = toMatrixScaling*(tmp_kernel_op_150*tmp_kernel_op_35 + tmp_kernel_op_151*tmp_kernel_op_46 + tmp_kernel_op_152*tmp_kernel_op_55 + tmp_kernel_op_153*tmp_kernel_op_64);
       const real_t tmp_kernel_op_166 = toMatrixScaling*(tmp_kernel_op_155*tmp_kernel_op_35 + tmp_kernel_op_156*tmp_kernel_op_46 + tmp_kernel_op_157*tmp_kernel_op_55 + tmp_kernel_op_158*tmp_kernel_op_64);
       const int64_t tmp_kernel_op_167 = tmp_kernel_op_6;
       const real_t tmp_kernel_op_168 = toMatrixScaling*(tmp_kernel_op_145*tmp_kernel_op_87 + tmp_kernel_op_146*tmp_kernel_op_88 + tmp_kernel_op_147*tmp_kernel_op_89 + tmp_kernel_op_148*tmp_kernel_op_90);
       const real_t tmp_kernel_op_169 = toMatrixScaling*(tmp_kernel_op_145*tmp_kernel_op_92 + tmp_kernel_op_146*tmp_kernel_op_93 + tmp_kernel_op_147*tmp_kernel_op_94 + tmp_kernel_op_148*tmp_kernel_op_95);
       const real_t tmp_kernel_op_170 = toMatrixScaling*(tmp_kernel_op_150*tmp_kernel_op_92 + tmp_kernel_op_151*tmp_kernel_op_93 + tmp_kernel_op_152*tmp_kernel_op_94 + tmp_kernel_op_153*tmp_kernel_op_95);
       const real_t elMat_0_0 = toMatrixScaling*(tmp_kernel_op_10*((tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))*(tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))) + tmp_kernel_op_17*((tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))*(tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))) + tmp_kernel_op_24*((tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))*(tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))) + tmp_kernel_op_31*((tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30)))*(tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30)))));
       const real_t elMat_0_1 = tmp_kernel_op_70;
       const real_t elMat_0_2 = tmp_kernel_op_75;
       const real_t elMat_0_3 = tmp_kernel_op_77;
       const real_t elMat_0_4 = tmp_kernel_op_78;
       const real_t elMat_0_5 = tmp_kernel_op_79;
       const real_t elMat_0_6 = tmp_kernel_op_80;
       const real_t elMat_0_7 = tmp_kernel_op_86;
       const real_t elMat_0_8 = tmp_kernel_op_91;
       const real_t elMat_0_9 = tmp_kernel_op_96;
       const real_t elMat_1_0 = tmp_kernel_op_70;
       const real_t elMat_1_1 = toMatrixScaling*(tmp_kernel_op_100*((tmp_kernel_op_26 - 0.10000000000000001)*(tmp_kernel_op_26 - 0.10000000000000001)) + tmp_kernel_op_97*((tmp_kernel_op_1 - 0.16666666666666666)*(tmp_kernel_op_1 - 0.16666666666666666)) + tmp_kernel_op_98*((tmp_kernel_op_12 - 0.10000000000000001)*(tmp_kernel_op_12 - 0.10000000000000001)) + tmp_kernel_op_99*((tmp_kernel_op_19 - 0.29999999999999999)*(tmp_kernel_op_19 - 0.29999999999999999)));
       const real_t elMat_1_2 = tmp_kernel_op_105;
       const real_t elMat_1_3 = tmp_kernel_op_106;
       const real_t elMat_1_4 = tmp_kernel_op_107;
       const real_t elMat_1_5 = tmp_kernel_op_108;
       const real_t elMat_1_6 = tmp_kernel_op_109;
       const real_t elMat_1_7 = tmp_kernel_op_110;
       const real_t elMat_1_8 = tmp_kernel_op_111;
       const real_t elMat_1_9 = tmp_kernel_op_112;
       const real_t elMat_2_0 = tmp_kernel_op_75;
       const real_t elMat_2_1 = tmp_kernel_op_105;
       const real_t elMat_2_2 = toMatrixScaling*(tmp_kernel_op_100*((tmp_kernel_op_27 - 0.10000000000000001)*(tmp_kernel_op_27 - 0.10000000000000001)) + tmp_kernel_op_97*((tmp_kernel_op_2 - 0.16666666666666666)*(tmp_kernel_op_2 - 0.16666666666666666)) + tmp_kernel_op_98*((tmp_kernel_op_13 - 0.29999999999999999)*(tmp_kernel_op_13 - 0.29999999999999999)) + tmp_kernel_op_99*((tmp_kernel_op_20 - 0.10000000000000001)*(tmp_kernel_op_20 - 0.10000000000000001)));
       const real_t elMat_2_3 = tmp_kernel_op_117;
       const real_t elMat_2_4 = tmp_kernel_op_118;
       const real_t elMat_2_5 = tmp_kernel_op_119;
       const real_t elMat_2_6 = tmp_kernel_op_120;
       const real_t elMat_2_7 = tmp_kernel_op_121;
       const real_t elMat_2_8 = tmp_kernel_op_122;
       const real_t elMat_2_9 = tmp_kernel_op_123;
       const real_t elMat_3_0 = tmp_kernel_op_77;
       const real_t elMat_3_1 = tmp_kernel_op_106;
       const real_t elMat_3_2 = tmp_kernel_op_117;
       const real_t elMat_3_3 = toMatrixScaling*(tmp_kernel_op_100*((real_t)(tmp_kernel_op_124)) + tmp_kernel_op_97*((real_t)(tmp_kernel_op_124)) + tmp_kernel_op_98*((real_t)(tmp_kernel_op_124)) + tmp_kernel_op_99*((real_t)(tmp_kernel_op_124)));
       const real_t elMat_3_4 = tmp_kernel_op_129;
       const real_t elMat_3_5 = tmp_kernel_op_130;
       const real_t elMat_3_6 = tmp_kernel_op_131;
       const real_t elMat_3_7 = tmp_kernel_op_132;
       const real_t elMat_3_8 = tmp_kernel_op_133;
       const real_t elMat_3_9 = tmp_kernel_op_134;
       const real_t elMat_4_0 = tmp_kernel_op_78;
       const real_t elMat_4_1 = tmp_kernel_op_107;
       const real_t elMat_4_2 = tmp_kernel_op_118;
       const real_t elMat_4_3 = tmp_kernel_op_129;
       const real_t elMat_4_4 = toMatrixScaling*(tmp_kernel_op_13*tmp_kernel_op_136 + tmp_kernel_op_135*tmp_kernel_op_2 + tmp_kernel_op_137*tmp_kernel_op_20 + tmp_kernel_op_138*tmp_kernel_op_27);
       const real_t elMat_4_5 = tmp_kernel_op_139;
       const real_t elMat_4_6 = tmp_kernel_op_144;
       const real_t elMat_4_7 = tmp_kernel_op_149;
       const real_t elMat_4_8 = tmp_kernel_op_154;
       const real_t elMat_4_9 = tmp_kernel_op_159;
       const real_t elMat_5_0 = tmp_kernel_op_79;
       const real_t elMat_5_1 = tmp_kernel_op_108;
       const real_t elMat_5_2 = tmp_kernel_op_119;
       const real_t elMat_5_3 = tmp_kernel_op_130;
       const real_t elMat_5_4 = tmp_kernel_op_139;
       const real_t elMat_5_5 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_135 + tmp_kernel_op_12*tmp_kernel_op_136 + tmp_kernel_op_137*tmp_kernel_op_19 + tmp_kernel_op_138*tmp_kernel_op_26);
       const real_t elMat_5_6 = tmp_kernel_op_160;
       const real_t elMat_5_7 = tmp_kernel_op_161;
       const real_t elMat_5_8 = tmp_kernel_op_162;
       const real_t elMat_5_9 = tmp_kernel_op_163;
       const real_t elMat_6_0 = tmp_kernel_op_80;
       const real_t elMat_6_1 = tmp_kernel_op_109;
       const real_t elMat_6_2 = tmp_kernel_op_120;
       const real_t elMat_6_3 = tmp_kernel_op_131;
       const real_t elMat_6_4 = tmp_kernel_op_144;
       const real_t elMat_6_5 = tmp_kernel_op_160;
       const real_t elMat_6_6 = toMatrixScaling*(tmp_kernel_op_1*tmp_kernel_op_140 + tmp_kernel_op_12*tmp_kernel_op_141 + tmp_kernel_op_142*tmp_kernel_op_19 + tmp_kernel_op_143*tmp_kernel_op_26);
       const real_t elMat_6_7 = tmp_kernel_op_164;
       const real_t elMat_6_8 = tmp_kernel_op_165;
       const real_t elMat_6_9 = tmp_kernel_op_166;
       const real_t elMat_7_0 = tmp_kernel_op_86;
       const real_t elMat_7_1 = tmp_kernel_op_110;
       const real_t elMat_7_2 = tmp_kernel_op_121;
       const real_t elMat_7_3 = tmp_kernel_op_132;
       const real_t elMat_7_4 = tmp_kernel_op_149;
       const real_t elMat_7_5 = tmp_kernel_op_161;
       const real_t elMat_7_6 = tmp_kernel_op_164;
       const real_t elMat_7_7 = toMatrixScaling*(tmp_kernel_op_10*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_5)*(-tmp_kernel_op_167 - tmp_kernel_op_5)))) + tmp_kernel_op_17*((real_t)(((-tmp_kernel_op_16 - tmp_kernel_op_167)*(-tmp_kernel_op_16 - tmp_kernel_op_167)))) + tmp_kernel_op_24*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_23)*(-tmp_kernel_op_167 - tmp_kernel_op_23)))) + tmp_kernel_op_31*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_30)*(-tmp_kernel_op_167 - tmp_kernel_op_30)))));
       const real_t elMat_7_8 = tmp_kernel_op_168;
       const real_t elMat_7_9 = tmp_kernel_op_169;
       const real_t elMat_8_0 = tmp_kernel_op_91;
       const real_t elMat_8_1 = tmp_kernel_op_111;
       const real_t elMat_8_2 = tmp_kernel_op_122;
       const real_t elMat_8_3 = tmp_kernel_op_133;
       const real_t elMat_8_4 = tmp_kernel_op_154;
       const real_t elMat_8_5 = tmp_kernel_op_162;
       const real_t elMat_8_6 = tmp_kernel_op_165;
       const real_t elMat_8_7 = tmp_kernel_op_168;
       const real_t elMat_8_8 = toMatrixScaling*(tmp_kernel_op_10*((-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)) + tmp_kernel_op_17*((-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)*(-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)) + tmp_kernel_op_24*((-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)*(-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)) + tmp_kernel_op_31*((-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001)));
       const real_t elMat_8_9 = tmp_kernel_op_170;
       const real_t elMat_9_0 = tmp_kernel_op_96;
       const real_t elMat_9_1 = tmp_kernel_op_112;
       const real_t elMat_9_2 = tmp_kernel_op_123;
       const real_t elMat_9_3 = tmp_kernel_op_134;
       const real_t elMat_9_4 = tmp_kernel_op_159;
       const real_t elMat_9_5 = tmp_kernel_op_163;
       const real_t elMat_9_6 = tmp_kernel_op_166;
       const real_t elMat_9_7 = tmp_kernel_op_169;
       const real_t elMat_9_8 = tmp_kernel_op_170;
       const real_t elMat_9_9 = toMatrixScaling*(tmp_kernel_op_10*((-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)) + tmp_kernel_op_17*((-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)*(-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)) + tmp_kernel_op_24*((-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)*(-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)) + tmp_kernel_op_31*((-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)));
       {
          /* CellType.WHITE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < 1; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
         
             std::vector< uint_t > _data_rowIdx( 10 );
             std::vector< uint_t > _data_colIdx( 10 );
             std::vector< real_t > _data_mat( 100 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[6] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[7] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[8] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[9] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[6] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[7] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[8] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[9] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
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
             _data_mat[10] = ((real_t)(elMat_1_0));
             _data_mat[11] = ((real_t)(elMat_1_1));
             _data_mat[12] = ((real_t)(elMat_1_2));
             _data_mat[13] = ((real_t)(elMat_1_3));
             _data_mat[14] = ((real_t)(elMat_1_4));
             _data_mat[15] = ((real_t)(elMat_1_5));
             _data_mat[16] = ((real_t)(elMat_1_6));
             _data_mat[17] = ((real_t)(elMat_1_7));
             _data_mat[18] = ((real_t)(elMat_1_8));
             _data_mat[19] = ((real_t)(elMat_1_9));
             _data_mat[20] = ((real_t)(elMat_2_0));
             _data_mat[21] = ((real_t)(elMat_2_1));
             _data_mat[22] = ((real_t)(elMat_2_2));
             _data_mat[23] = ((real_t)(elMat_2_3));
             _data_mat[24] = ((real_t)(elMat_2_4));
             _data_mat[25] = ((real_t)(elMat_2_5));
             _data_mat[26] = ((real_t)(elMat_2_6));
             _data_mat[27] = ((real_t)(elMat_2_7));
             _data_mat[28] = ((real_t)(elMat_2_8));
             _data_mat[29] = ((real_t)(elMat_2_9));
             _data_mat[30] = ((real_t)(elMat_3_0));
             _data_mat[31] = ((real_t)(elMat_3_1));
             _data_mat[32] = ((real_t)(elMat_3_2));
             _data_mat[33] = ((real_t)(elMat_3_3));
             _data_mat[34] = ((real_t)(elMat_3_4));
             _data_mat[35] = ((real_t)(elMat_3_5));
             _data_mat[36] = ((real_t)(elMat_3_6));
             _data_mat[37] = ((real_t)(elMat_3_7));
             _data_mat[38] = ((real_t)(elMat_3_8));
             _data_mat[39] = ((real_t)(elMat_3_9));
             _data_mat[40] = ((real_t)(elMat_4_0));
             _data_mat[41] = ((real_t)(elMat_4_1));
             _data_mat[42] = ((real_t)(elMat_4_2));
             _data_mat[43] = ((real_t)(elMat_4_3));
             _data_mat[44] = ((real_t)(elMat_4_4));
             _data_mat[45] = ((real_t)(elMat_4_5));
             _data_mat[46] = ((real_t)(elMat_4_6));
             _data_mat[47] = ((real_t)(elMat_4_7));
             _data_mat[48] = ((real_t)(elMat_4_8));
             _data_mat[49] = ((real_t)(elMat_4_9));
             _data_mat[50] = ((real_t)(elMat_5_0));
             _data_mat[51] = ((real_t)(elMat_5_1));
             _data_mat[52] = ((real_t)(elMat_5_2));
             _data_mat[53] = ((real_t)(elMat_5_3));
             _data_mat[54] = ((real_t)(elMat_5_4));
             _data_mat[55] = ((real_t)(elMat_5_5));
             _data_mat[56] = ((real_t)(elMat_5_6));
             _data_mat[57] = ((real_t)(elMat_5_7));
             _data_mat[58] = ((real_t)(elMat_5_8));
             _data_mat[59] = ((real_t)(elMat_5_9));
             _data_mat[60] = ((real_t)(elMat_6_0));
             _data_mat[61] = ((real_t)(elMat_6_1));
             _data_mat[62] = ((real_t)(elMat_6_2));
             _data_mat[63] = ((real_t)(elMat_6_3));
             _data_mat[64] = ((real_t)(elMat_6_4));
             _data_mat[65] = ((real_t)(elMat_6_5));
             _data_mat[66] = ((real_t)(elMat_6_6));
             _data_mat[67] = ((real_t)(elMat_6_7));
             _data_mat[68] = ((real_t)(elMat_6_8));
             _data_mat[69] = ((real_t)(elMat_6_9));
             _data_mat[70] = ((real_t)(elMat_7_0));
             _data_mat[71] = ((real_t)(elMat_7_1));
             _data_mat[72] = ((real_t)(elMat_7_2));
             _data_mat[73] = ((real_t)(elMat_7_3));
             _data_mat[74] = ((real_t)(elMat_7_4));
             _data_mat[75] = ((real_t)(elMat_7_5));
             _data_mat[76] = ((real_t)(elMat_7_6));
             _data_mat[77] = ((real_t)(elMat_7_7));
             _data_mat[78] = ((real_t)(elMat_7_8));
             _data_mat[79] = ((real_t)(elMat_7_9));
             _data_mat[80] = ((real_t)(elMat_8_0));
             _data_mat[81] = ((real_t)(elMat_8_1));
             _data_mat[82] = ((real_t)(elMat_8_2));
             _data_mat[83] = ((real_t)(elMat_8_3));
             _data_mat[84] = ((real_t)(elMat_8_4));
             _data_mat[85] = ((real_t)(elMat_8_5));
             _data_mat[86] = ((real_t)(elMat_8_6));
             _data_mat[87] = ((real_t)(elMat_8_7));
             _data_mat[88] = ((real_t)(elMat_8_8));
             _data_mat[89] = ((real_t)(elMat_8_9));
             _data_mat[90] = ((real_t)(elMat_9_0));
             _data_mat[91] = ((real_t)(elMat_9_1));
             _data_mat[92] = ((real_t)(elMat_9_2));
             _data_mat[93] = ((real_t)(elMat_9_3));
             _data_mat[94] = ((real_t)(elMat_9_4));
             _data_mat[95] = ((real_t)(elMat_9_5));
             _data_mat[96] = ((real_t)(elMat_9_6));
             _data_mat[97] = ((real_t)(elMat_9_7));
             _data_mat[98] = ((real_t)(elMat_9_8));
             _data_mat[99] = ((real_t)(elMat_9_9));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
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
       const real_t jac_affine_1_0_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_1_1_BLUE_UP;
       const real_t jac_affine_1_1_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_2_1_BLUE_UP;
       const real_t jac_affine_2_0_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_1_2_BLUE_UP;
       const real_t jac_affine_2_1_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_2_2_BLUE_UP;
       const real_t tmp_moved_constant_0 = pow(abs(((jac_affine_0_0_BLUE_UP*jac_affine_0_0_BLUE_UP) + (jac_affine_1_0_BLUE_UP*jac_affine_1_0_BLUE_UP) + (jac_affine_2_0_BLUE_UP*jac_affine_2_0_BLUE_UP))*((jac_affine_0_1_BLUE_UP*jac_affine_0_1_BLUE_UP) + (jac_affine_1_1_BLUE_UP*jac_affine_1_1_BLUE_UP) + (jac_affine_2_1_BLUE_UP*jac_affine_2_1_BLUE_UP)) - ((jac_affine_0_0_BLUE_UP*jac_affine_0_1_BLUE_UP + jac_affine_1_0_BLUE_UP*jac_affine_1_1_BLUE_UP + jac_affine_2_0_BLUE_UP*jac_affine_2_1_BLUE_UP)*(jac_affine_0_0_BLUE_UP*jac_affine_0_1_BLUE_UP + jac_affine_1_0_BLUE_UP*jac_affine_1_1_BLUE_UP + jac_affine_2_0_BLUE_UP*jac_affine_2_1_BLUE_UP))), 0.5);
       const real_t tmp_moved_constant_1 = tmp_moved_constant_0*16.0;
       const real_t tmp_moved_constant_2 = tmp_moved_constant_1*-0.28125;
       const real_t tmp_moved_constant_3 = tmp_moved_constant_1*0.26041666666666669;
       const real_t tmp_moved_constant_4 = tmp_moved_constant_1*0.26041666666666669;
       const real_t tmp_moved_constant_5 = tmp_moved_constant_1*0.26041666666666669;
       const real_t tmp_moved_constant_6 = tmp_moved_constant_0*-0.28125;
       const real_t tmp_moved_constant_7 = tmp_moved_constant_6*(tmp_kernel_op_32 + tmp_kernel_op_34 + tmp_kernel_op_35 + tmp_kernel_op_38 + tmp_kernel_op_40 - 2.0);
       const real_t tmp_moved_constant_8 = tmp_moved_constant_0*0.26041666666666669;
       const real_t tmp_moved_constant_9 = tmp_moved_constant_8*(tmp_kernel_op_40 + tmp_kernel_op_43 + tmp_kernel_op_45 + tmp_kernel_op_46 + tmp_kernel_op_49 - 2.3999999999999999);
       const real_t tmp_moved_constant_10 = tmp_moved_constant_0*0.26041666666666669;
       const real_t tmp_moved_constant_11 = tmp_moved_constant_10*(tmp_kernel_op_40 + tmp_kernel_op_52 + tmp_kernel_op_54 + tmp_kernel_op_55 + tmp_kernel_op_58 - 2.3999999999999999);
       const real_t tmp_moved_constant_12 = tmp_moved_constant_0*0.26041666666666669;
       const real_t tmp_moved_constant_13 = tmp_moved_constant_12*(tmp_kernel_op_40 + tmp_kernel_op_61 + tmp_kernel_op_63 + tmp_kernel_op_64 + tmp_kernel_op_67 - 1.2000000000000002);
       const real_t tmp_moved_constant_14 = toMatrixScaling*(tmp_kernel_op_33*tmp_moved_constant_7 + tmp_kernel_op_44*tmp_moved_constant_9 + tmp_kernel_op_53*tmp_moved_constant_11 + tmp_kernel_op_62*tmp_moved_constant_13);
       const real_t tmp_moved_constant_15 = toMatrixScaling*(tmp_kernel_op_71*tmp_moved_constant_7 + tmp_kernel_op_72*tmp_moved_constant_9 + tmp_kernel_op_73*tmp_moved_constant_11 + tmp_kernel_op_74*tmp_moved_constant_13);
       const real_t tmp_moved_constant_16 = toMatrixScaling*(tmp_kernel_op_76*tmp_moved_constant_11 + tmp_kernel_op_76*tmp_moved_constant_13 + tmp_kernel_op_76*tmp_moved_constant_7 + tmp_kernel_op_76*tmp_moved_constant_9);
       const real_t tmp_moved_constant_17 = toMatrixScaling*(tmp_kernel_op_37*tmp_moved_constant_7 + tmp_kernel_op_48*tmp_moved_constant_9 + tmp_kernel_op_57*tmp_moved_constant_11 + tmp_kernel_op_66*tmp_moved_constant_13);
       const real_t tmp_moved_constant_18 = toMatrixScaling*(tmp_kernel_op_36*tmp_moved_constant_7 + tmp_kernel_op_47*tmp_moved_constant_9 + tmp_kernel_op_56*tmp_moved_constant_11 + tmp_kernel_op_65*tmp_moved_constant_13);
       const real_t tmp_moved_constant_19 = toMatrixScaling*(tmp_kernel_op_35*tmp_moved_constant_7 + tmp_kernel_op_46*tmp_moved_constant_9 + tmp_kernel_op_55*tmp_moved_constant_11 + tmp_kernel_op_64*tmp_moved_constant_13);
       const real_t tmp_moved_constant_20 = toMatrixScaling*(tmp_kernel_op_82*tmp_moved_constant_7 + tmp_kernel_op_83*tmp_moved_constant_9 + tmp_kernel_op_84*tmp_moved_constant_11 + tmp_kernel_op_85*tmp_moved_constant_13);
       const real_t tmp_moved_constant_21 = toMatrixScaling*(tmp_kernel_op_87*tmp_moved_constant_7 + tmp_kernel_op_88*tmp_moved_constant_9 + tmp_kernel_op_89*tmp_moved_constant_11 + tmp_kernel_op_90*tmp_moved_constant_13);
       const real_t tmp_moved_constant_22 = toMatrixScaling*(tmp_kernel_op_92*tmp_moved_constant_7 + tmp_kernel_op_93*tmp_moved_constant_9 + tmp_kernel_op_94*tmp_moved_constant_11 + tmp_kernel_op_95*tmp_moved_constant_13);
       const real_t tmp_moved_constant_23 = tmp_moved_constant_6*4.0;
       const real_t tmp_moved_constant_24 = tmp_moved_constant_8*4.0;
       const real_t tmp_moved_constant_25 = tmp_moved_constant_10*4.0;
       const real_t tmp_moved_constant_26 = tmp_moved_constant_12*4.0;
       const real_t tmp_moved_constant_27 = tmp_kernel_op_33*tmp_moved_constant_6;
       const real_t tmp_moved_constant_28 = tmp_kernel_op_44*tmp_moved_constant_8;
       const real_t tmp_moved_constant_29 = tmp_kernel_op_53*tmp_moved_constant_10;
       const real_t tmp_moved_constant_30 = tmp_kernel_op_62*tmp_moved_constant_12;
       const real_t tmp_moved_constant_31 = toMatrixScaling*(tmp_kernel_op_71*tmp_moved_constant_27 + tmp_kernel_op_72*tmp_moved_constant_28 + tmp_kernel_op_73*tmp_moved_constant_29 + tmp_kernel_op_74*tmp_moved_constant_30);
       const real_t tmp_moved_constant_32 = toMatrixScaling*(tmp_kernel_op_76*tmp_moved_constant_27 + tmp_kernel_op_76*tmp_moved_constant_28 + tmp_kernel_op_76*tmp_moved_constant_29 + tmp_kernel_op_76*tmp_moved_constant_30);
       const real_t tmp_moved_constant_33 = toMatrixScaling*(tmp_kernel_op_37*tmp_moved_constant_27 + tmp_kernel_op_48*tmp_moved_constant_28 + tmp_kernel_op_57*tmp_moved_constant_29 + tmp_kernel_op_66*tmp_moved_constant_30);
       const real_t tmp_moved_constant_34 = toMatrixScaling*(tmp_kernel_op_36*tmp_moved_constant_27 + tmp_kernel_op_47*tmp_moved_constant_28 + tmp_kernel_op_56*tmp_moved_constant_29 + tmp_kernel_op_65*tmp_moved_constant_30);
       const real_t tmp_moved_constant_35 = toMatrixScaling*(tmp_kernel_op_35*tmp_moved_constant_27 + tmp_kernel_op_46*tmp_moved_constant_28 + tmp_kernel_op_55*tmp_moved_constant_29 + tmp_kernel_op_64*tmp_moved_constant_30);
       const real_t tmp_moved_constant_36 = toMatrixScaling*(tmp_kernel_op_82*tmp_moved_constant_27 + tmp_kernel_op_83*tmp_moved_constant_28 + tmp_kernel_op_84*tmp_moved_constant_29 + tmp_kernel_op_85*tmp_moved_constant_30);
       const real_t tmp_moved_constant_37 = toMatrixScaling*(tmp_kernel_op_87*tmp_moved_constant_27 + tmp_kernel_op_88*tmp_moved_constant_28 + tmp_kernel_op_89*tmp_moved_constant_29 + tmp_kernel_op_90*tmp_moved_constant_30);
       const real_t tmp_moved_constant_38 = toMatrixScaling*(tmp_kernel_op_92*tmp_moved_constant_27 + tmp_kernel_op_93*tmp_moved_constant_28 + tmp_kernel_op_94*tmp_moved_constant_29 + tmp_kernel_op_95*tmp_moved_constant_30);
       const real_t tmp_moved_constant_39 = tmp_kernel_op_71*tmp_moved_constant_6;
       const real_t tmp_moved_constant_40 = tmp_kernel_op_72*tmp_moved_constant_8;
       const real_t tmp_moved_constant_41 = tmp_kernel_op_73*tmp_moved_constant_10;
       const real_t tmp_moved_constant_42 = tmp_kernel_op_74*tmp_moved_constant_12;
       const real_t tmp_moved_constant_43 = toMatrixScaling*(tmp_kernel_op_76*tmp_moved_constant_39 + tmp_kernel_op_76*tmp_moved_constant_40 + tmp_kernel_op_76*tmp_moved_constant_41 + tmp_kernel_op_76*tmp_moved_constant_42);
       const real_t tmp_moved_constant_44 = toMatrixScaling*(tmp_kernel_op_37*tmp_moved_constant_39 + tmp_kernel_op_48*tmp_moved_constant_40 + tmp_kernel_op_57*tmp_moved_constant_41 + tmp_kernel_op_66*tmp_moved_constant_42);
       const real_t tmp_moved_constant_45 = toMatrixScaling*(tmp_kernel_op_36*tmp_moved_constant_39 + tmp_kernel_op_47*tmp_moved_constant_40 + tmp_kernel_op_56*tmp_moved_constant_41 + tmp_kernel_op_65*tmp_moved_constant_42);
       const real_t tmp_moved_constant_46 = toMatrixScaling*(tmp_kernel_op_35*tmp_moved_constant_39 + tmp_kernel_op_46*tmp_moved_constant_40 + tmp_kernel_op_55*tmp_moved_constant_41 + tmp_kernel_op_64*tmp_moved_constant_42);
       const real_t tmp_moved_constant_47 = toMatrixScaling*(tmp_kernel_op_82*tmp_moved_constant_39 + tmp_kernel_op_83*tmp_moved_constant_40 + tmp_kernel_op_84*tmp_moved_constant_41 + tmp_kernel_op_85*tmp_moved_constant_42);
       const real_t tmp_moved_constant_48 = toMatrixScaling*(tmp_kernel_op_87*tmp_moved_constant_39 + tmp_kernel_op_88*tmp_moved_constant_40 + tmp_kernel_op_89*tmp_moved_constant_41 + tmp_kernel_op_90*tmp_moved_constant_42);
       const real_t tmp_moved_constant_49 = toMatrixScaling*(tmp_kernel_op_92*tmp_moved_constant_39 + tmp_kernel_op_93*tmp_moved_constant_40 + tmp_kernel_op_94*tmp_moved_constant_41 + tmp_kernel_op_95*tmp_moved_constant_42);
       const real_t tmp_moved_constant_50 = tmp_kernel_op_76*tmp_moved_constant_6;
       const real_t tmp_moved_constant_51 = tmp_kernel_op_76*tmp_moved_constant_8;
       const real_t tmp_moved_constant_52 = tmp_kernel_op_76*tmp_moved_constant_10;
       const real_t tmp_moved_constant_53 = tmp_kernel_op_76*tmp_moved_constant_12;
       const real_t tmp_moved_constant_54 = toMatrixScaling*(tmp_kernel_op_37*tmp_moved_constant_50 + tmp_kernel_op_48*tmp_moved_constant_51 + tmp_kernel_op_57*tmp_moved_constant_52 + tmp_kernel_op_66*tmp_moved_constant_53);
       const real_t tmp_moved_constant_55 = toMatrixScaling*(tmp_kernel_op_36*tmp_moved_constant_50 + tmp_kernel_op_47*tmp_moved_constant_51 + tmp_kernel_op_56*tmp_moved_constant_52 + tmp_kernel_op_65*tmp_moved_constant_53);
       const real_t tmp_moved_constant_56 = toMatrixScaling*(tmp_kernel_op_35*tmp_moved_constant_50 + tmp_kernel_op_46*tmp_moved_constant_51 + tmp_kernel_op_55*tmp_moved_constant_52 + tmp_kernel_op_64*tmp_moved_constant_53);
       const real_t tmp_moved_constant_57 = toMatrixScaling*(tmp_kernel_op_82*tmp_moved_constant_50 + tmp_kernel_op_83*tmp_moved_constant_51 + tmp_kernel_op_84*tmp_moved_constant_52 + tmp_kernel_op_85*tmp_moved_constant_53);
       const real_t tmp_moved_constant_58 = toMatrixScaling*(tmp_kernel_op_87*tmp_moved_constant_50 + tmp_kernel_op_88*tmp_moved_constant_51 + tmp_kernel_op_89*tmp_moved_constant_52 + tmp_kernel_op_90*tmp_moved_constant_53);
       const real_t tmp_moved_constant_59 = toMatrixScaling*(tmp_kernel_op_92*tmp_moved_constant_50 + tmp_kernel_op_93*tmp_moved_constant_51 + tmp_kernel_op_94*tmp_moved_constant_52 + tmp_kernel_op_95*tmp_moved_constant_53);
       const real_t tmp_moved_constant_60 = tmp_moved_constant_2*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_61 = tmp_moved_constant_3*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_62 = tmp_moved_constant_4*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_63 = tmp_moved_constant_5*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_64 = toMatrixScaling*(tmp_kernel_op_0*tmp_moved_constant_60 + tmp_kernel_op_11*tmp_moved_constant_61 + tmp_kernel_op_18*tmp_moved_constant_62 + tmp_kernel_op_25*tmp_moved_constant_63);
       const real_t tmp_moved_constant_65 = tmp_kernel_op_2*tmp_moved_constant_2;
       const real_t tmp_moved_constant_66 = tmp_kernel_op_13*tmp_moved_constant_3;
       const real_t tmp_moved_constant_67 = tmp_kernel_op_20*tmp_moved_constant_4;
       const real_t tmp_moved_constant_68 = tmp_kernel_op_27*tmp_moved_constant_5;
       const real_t tmp_moved_constant_69 = toMatrixScaling*(tmp_moved_constant_65*((real_t)(tmp_kernel_op_3)) + tmp_moved_constant_66*((real_t)(tmp_kernel_op_14)) + tmp_moved_constant_67*((real_t)(tmp_kernel_op_21)) + tmp_moved_constant_68*((real_t)(tmp_kernel_op_28)));
       const real_t tmp_moved_constant_70 = tmp_kernel_op_82*tmp_moved_constant_6;
       const real_t tmp_moved_constant_71 = tmp_kernel_op_83*tmp_moved_constant_8;
       const real_t tmp_moved_constant_72 = tmp_kernel_op_84*tmp_moved_constant_10;
       const real_t tmp_moved_constant_73 = tmp_kernel_op_85*tmp_moved_constant_12;
       const real_t tmp_moved_constant_74 = toMatrixScaling*(tmp_kernel_op_37*tmp_moved_constant_70 + tmp_kernel_op_48*tmp_moved_constant_71 + tmp_kernel_op_57*tmp_moved_constant_72 + tmp_kernel_op_66*tmp_moved_constant_73);
       const real_t tmp_moved_constant_75 = tmp_kernel_op_87*tmp_moved_constant_6;
       const real_t tmp_moved_constant_76 = tmp_kernel_op_88*tmp_moved_constant_8;
       const real_t tmp_moved_constant_77 = tmp_kernel_op_89*tmp_moved_constant_10;
       const real_t tmp_moved_constant_78 = tmp_kernel_op_90*tmp_moved_constant_12;
       const real_t tmp_moved_constant_79 = toMatrixScaling*(tmp_kernel_op_37*tmp_moved_constant_75 + tmp_kernel_op_48*tmp_moved_constant_76 + tmp_kernel_op_57*tmp_moved_constant_77 + tmp_kernel_op_66*tmp_moved_constant_78);
       const real_t tmp_moved_constant_80 = tmp_kernel_op_92*tmp_moved_constant_6;
       const real_t tmp_moved_constant_81 = tmp_kernel_op_93*tmp_moved_constant_8;
       const real_t tmp_moved_constant_82 = tmp_kernel_op_94*tmp_moved_constant_10;
       const real_t tmp_moved_constant_83 = tmp_kernel_op_95*tmp_moved_constant_12;
       const real_t tmp_moved_constant_84 = toMatrixScaling*(tmp_kernel_op_37*tmp_moved_constant_80 + tmp_kernel_op_48*tmp_moved_constant_81 + tmp_kernel_op_57*tmp_moved_constant_82 + tmp_kernel_op_66*tmp_moved_constant_83);
       const real_t tmp_moved_constant_85 = toMatrixScaling*(tmp_kernel_op_1*tmp_moved_constant_2*((real_t)(tmp_kernel_op_4)) + tmp_kernel_op_12*tmp_moved_constant_3*((real_t)(tmp_kernel_op_15)) + tmp_kernel_op_19*tmp_moved_constant_4*((real_t)(tmp_kernel_op_22)) + tmp_kernel_op_26*tmp_moved_constant_5*((real_t)(tmp_kernel_op_29)));
       const real_t tmp_moved_constant_86 = toMatrixScaling*(tmp_kernel_op_36*tmp_moved_constant_70 + tmp_kernel_op_47*tmp_moved_constant_71 + tmp_kernel_op_56*tmp_moved_constant_72 + tmp_kernel_op_65*tmp_moved_constant_73);
       const real_t tmp_moved_constant_87 = toMatrixScaling*(tmp_kernel_op_36*tmp_moved_constant_75 + tmp_kernel_op_47*tmp_moved_constant_76 + tmp_kernel_op_56*tmp_moved_constant_77 + tmp_kernel_op_65*tmp_moved_constant_78);
       const real_t tmp_moved_constant_88 = toMatrixScaling*(tmp_kernel_op_36*tmp_moved_constant_80 + tmp_kernel_op_47*tmp_moved_constant_81 + tmp_kernel_op_56*tmp_moved_constant_82 + tmp_kernel_op_65*tmp_moved_constant_83);
       const real_t tmp_moved_constant_89 = toMatrixScaling*(tmp_kernel_op_35*tmp_moved_constant_70 + tmp_kernel_op_46*tmp_moved_constant_71 + tmp_kernel_op_55*tmp_moved_constant_72 + tmp_kernel_op_64*tmp_moved_constant_73);
       const real_t tmp_moved_constant_90 = toMatrixScaling*(tmp_kernel_op_35*tmp_moved_constant_75 + tmp_kernel_op_46*tmp_moved_constant_76 + tmp_kernel_op_55*tmp_moved_constant_77 + tmp_kernel_op_64*tmp_moved_constant_78);
       const real_t tmp_moved_constant_91 = toMatrixScaling*(tmp_kernel_op_35*tmp_moved_constant_80 + tmp_kernel_op_46*tmp_moved_constant_81 + tmp_kernel_op_55*tmp_moved_constant_82 + tmp_kernel_op_64*tmp_moved_constant_83);
       const real_t tmp_moved_constant_92 = toMatrixScaling*(tmp_kernel_op_87*tmp_moved_constant_70 + tmp_kernel_op_88*tmp_moved_constant_71 + tmp_kernel_op_89*tmp_moved_constant_72 + tmp_kernel_op_90*tmp_moved_constant_73);
       const real_t tmp_moved_constant_93 = toMatrixScaling*(tmp_kernel_op_92*tmp_moved_constant_70 + tmp_kernel_op_93*tmp_moved_constant_71 + tmp_kernel_op_94*tmp_moved_constant_72 + tmp_kernel_op_95*tmp_moved_constant_73);
       const real_t tmp_moved_constant_94 = toMatrixScaling*(tmp_kernel_op_92*tmp_moved_constant_75 + tmp_kernel_op_93*tmp_moved_constant_76 + tmp_kernel_op_94*tmp_moved_constant_77 + tmp_kernel_op_95*tmp_moved_constant_78);
       const real_t tmp_moved_constant_95 = toMatrixScaling*(tmp_moved_constant_2*((tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))*(tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))) + tmp_moved_constant_3*((tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))*(tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))) + tmp_moved_constant_4*((tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))*(tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))) + tmp_moved_constant_5*((tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30)))*(tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30)))));
       const real_t tmp_moved_constant_96 = tmp_moved_constant_14;
       const real_t tmp_moved_constant_97 = tmp_moved_constant_15;
       const real_t tmp_moved_constant_98 = tmp_moved_constant_16;
       const real_t tmp_moved_constant_99 = tmp_moved_constant_17;
       const real_t tmp_moved_constant_100 = tmp_moved_constant_18;
       const real_t tmp_moved_constant_101 = tmp_moved_constant_19;
       const real_t tmp_moved_constant_102 = tmp_moved_constant_20;
       const real_t tmp_moved_constant_103 = tmp_moved_constant_21;
       const real_t tmp_moved_constant_104 = tmp_moved_constant_22;
       const real_t tmp_moved_constant_105 = tmp_moved_constant_14;
       const real_t tmp_moved_constant_106 = toMatrixScaling*(tmp_moved_constant_23*((tmp_kernel_op_1 - 0.16666666666666666)*(tmp_kernel_op_1 - 0.16666666666666666)) + tmp_moved_constant_24*((tmp_kernel_op_12 - 0.10000000000000001)*(tmp_kernel_op_12 - 0.10000000000000001)) + tmp_moved_constant_25*((tmp_kernel_op_19 - 0.29999999999999999)*(tmp_kernel_op_19 - 0.29999999999999999)) + tmp_moved_constant_26*((tmp_kernel_op_26 - 0.10000000000000001)*(tmp_kernel_op_26 - 0.10000000000000001)));
       const real_t tmp_moved_constant_107 = tmp_moved_constant_31;
       const real_t tmp_moved_constant_108 = tmp_moved_constant_32;
       const real_t tmp_moved_constant_109 = tmp_moved_constant_33;
       const real_t tmp_moved_constant_110 = tmp_moved_constant_34;
       const real_t tmp_moved_constant_111 = tmp_moved_constant_35;
       const real_t tmp_moved_constant_112 = tmp_moved_constant_36;
       const real_t tmp_moved_constant_113 = tmp_moved_constant_37;
       const real_t tmp_moved_constant_114 = tmp_moved_constant_38;
       const real_t tmp_moved_constant_115 = tmp_moved_constant_15;
       const real_t tmp_moved_constant_116 = tmp_moved_constant_31;
       const real_t tmp_moved_constant_117 = toMatrixScaling*(tmp_moved_constant_23*((tmp_kernel_op_2 - 0.16666666666666666)*(tmp_kernel_op_2 - 0.16666666666666666)) + tmp_moved_constant_24*((tmp_kernel_op_13 - 0.29999999999999999)*(tmp_kernel_op_13 - 0.29999999999999999)) + tmp_moved_constant_25*((tmp_kernel_op_20 - 0.10000000000000001)*(tmp_kernel_op_20 - 0.10000000000000001)) + tmp_moved_constant_26*((tmp_kernel_op_27 - 0.10000000000000001)*(tmp_kernel_op_27 - 0.10000000000000001)));
       const real_t tmp_moved_constant_118 = tmp_moved_constant_43;
       const real_t tmp_moved_constant_119 = tmp_moved_constant_44;
       const real_t tmp_moved_constant_120 = tmp_moved_constant_45;
       const real_t tmp_moved_constant_121 = tmp_moved_constant_46;
       const real_t tmp_moved_constant_122 = tmp_moved_constant_47;
       const real_t tmp_moved_constant_123 = tmp_moved_constant_48;
       const real_t tmp_moved_constant_124 = tmp_moved_constant_49;
       const real_t tmp_moved_constant_125 = tmp_moved_constant_16;
       const real_t tmp_moved_constant_126 = tmp_moved_constant_32;
       const real_t tmp_moved_constant_127 = tmp_moved_constant_43;
       const real_t tmp_moved_constant_128 = toMatrixScaling*(tmp_moved_constant_23*((real_t)(tmp_kernel_op_124)) + tmp_moved_constant_24*((real_t)(tmp_kernel_op_124)) + tmp_moved_constant_25*((real_t)(tmp_kernel_op_124)) + tmp_moved_constant_26*((real_t)(tmp_kernel_op_124)));
       const real_t tmp_moved_constant_129 = tmp_moved_constant_54;
       const real_t tmp_moved_constant_130 = tmp_moved_constant_55;
       const real_t tmp_moved_constant_131 = tmp_moved_constant_56;
       const real_t tmp_moved_constant_132 = tmp_moved_constant_57;
       const real_t tmp_moved_constant_133 = tmp_moved_constant_58;
       const real_t tmp_moved_constant_134 = tmp_moved_constant_59;
       const real_t tmp_moved_constant_135 = tmp_moved_constant_17;
       const real_t tmp_moved_constant_136 = tmp_moved_constant_33;
       const real_t tmp_moved_constant_137 = tmp_moved_constant_44;
       const real_t tmp_moved_constant_138 = tmp_moved_constant_54;
       const real_t tmp_moved_constant_139 = toMatrixScaling*(tmp_kernel_op_13*tmp_moved_constant_61 + tmp_kernel_op_2*tmp_moved_constant_60 + tmp_kernel_op_20*tmp_moved_constant_62 + tmp_kernel_op_27*tmp_moved_constant_63);
       const real_t tmp_moved_constant_140 = tmp_moved_constant_64;
       const real_t tmp_moved_constant_141 = tmp_moved_constant_69;
       const real_t tmp_moved_constant_142 = tmp_moved_constant_74;
       const real_t tmp_moved_constant_143 = tmp_moved_constant_79;
       const real_t tmp_moved_constant_144 = tmp_moved_constant_84;
       const real_t tmp_moved_constant_145 = tmp_moved_constant_18;
       const real_t tmp_moved_constant_146 = tmp_moved_constant_34;
       const real_t tmp_moved_constant_147 = tmp_moved_constant_45;
       const real_t tmp_moved_constant_148 = tmp_moved_constant_55;
       const real_t tmp_moved_constant_149 = tmp_moved_constant_64;
       const real_t tmp_moved_constant_150 = toMatrixScaling*(tmp_kernel_op_1*tmp_moved_constant_60 + tmp_kernel_op_12*tmp_moved_constant_61 + tmp_kernel_op_19*tmp_moved_constant_62 + tmp_kernel_op_26*tmp_moved_constant_63);
       const real_t tmp_moved_constant_151 = tmp_moved_constant_85;
       const real_t tmp_moved_constant_152 = tmp_moved_constant_86;
       const real_t tmp_moved_constant_153 = tmp_moved_constant_87;
       const real_t tmp_moved_constant_154 = tmp_moved_constant_88;
       const real_t tmp_moved_constant_155 = tmp_moved_constant_19;
       const real_t tmp_moved_constant_156 = tmp_moved_constant_35;
       const real_t tmp_moved_constant_157 = tmp_moved_constant_46;
       const real_t tmp_moved_constant_158 = tmp_moved_constant_56;
       const real_t tmp_moved_constant_159 = tmp_moved_constant_69;
       const real_t tmp_moved_constant_160 = tmp_moved_constant_85;
       const real_t tmp_moved_constant_161 = toMatrixScaling*(tmp_kernel_op_1*tmp_moved_constant_65 + tmp_kernel_op_12*tmp_moved_constant_66 + tmp_kernel_op_19*tmp_moved_constant_67 + tmp_kernel_op_26*tmp_moved_constant_68);
       const real_t tmp_moved_constant_162 = tmp_moved_constant_89;
       const real_t tmp_moved_constant_163 = tmp_moved_constant_90;
       const real_t tmp_moved_constant_164 = tmp_moved_constant_91;
       const real_t tmp_moved_constant_165 = tmp_moved_constant_20;
       const real_t tmp_moved_constant_166 = tmp_moved_constant_36;
       const real_t tmp_moved_constant_167 = tmp_moved_constant_47;
       const real_t tmp_moved_constant_168 = tmp_moved_constant_57;
       const real_t tmp_moved_constant_169 = tmp_moved_constant_74;
       const real_t tmp_moved_constant_170 = tmp_moved_constant_86;
       const real_t tmp_moved_constant_171 = tmp_moved_constant_89;
       const real_t tmp_moved_constant_172 = toMatrixScaling*(tmp_moved_constant_2*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_5)*(-tmp_kernel_op_167 - tmp_kernel_op_5)))) + tmp_moved_constant_3*((real_t)(((-tmp_kernel_op_16 - tmp_kernel_op_167)*(-tmp_kernel_op_16 - tmp_kernel_op_167)))) + tmp_moved_constant_4*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_23)*(-tmp_kernel_op_167 - tmp_kernel_op_23)))) + tmp_moved_constant_5*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_30)*(-tmp_kernel_op_167 - tmp_kernel_op_30)))));
       const real_t tmp_moved_constant_173 = tmp_moved_constant_92;
       const real_t tmp_moved_constant_174 = tmp_moved_constant_93;
       const real_t tmp_moved_constant_175 = tmp_moved_constant_21;
       const real_t tmp_moved_constant_176 = tmp_moved_constant_37;
       const real_t tmp_moved_constant_177 = tmp_moved_constant_48;
       const real_t tmp_moved_constant_178 = tmp_moved_constant_58;
       const real_t tmp_moved_constant_179 = tmp_moved_constant_79;
       const real_t tmp_moved_constant_180 = tmp_moved_constant_87;
       const real_t tmp_moved_constant_181 = tmp_moved_constant_90;
       const real_t tmp_moved_constant_182 = tmp_moved_constant_92;
       const real_t tmp_moved_constant_183 = toMatrixScaling*(tmp_moved_constant_2*((-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)) + tmp_moved_constant_3*((-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)*(-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)) + tmp_moved_constant_4*((-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)*(-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)) + tmp_moved_constant_5*((-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001)));
       const real_t tmp_moved_constant_184 = tmp_moved_constant_94;
       const real_t tmp_moved_constant_185 = tmp_moved_constant_22;
       const real_t tmp_moved_constant_186 = tmp_moved_constant_38;
       const real_t tmp_moved_constant_187 = tmp_moved_constant_49;
       const real_t tmp_moved_constant_188 = tmp_moved_constant_59;
       const real_t tmp_moved_constant_189 = tmp_moved_constant_84;
       const real_t tmp_moved_constant_190 = tmp_moved_constant_88;
       const real_t tmp_moved_constant_191 = tmp_moved_constant_91;
       const real_t tmp_moved_constant_192 = tmp_moved_constant_93;
       const real_t tmp_moved_constant_193 = tmp_moved_constant_94;
       const real_t tmp_moved_constant_194 = toMatrixScaling*(tmp_moved_constant_2*((-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)) + tmp_moved_constant_3*((-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)*(-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)) + tmp_moved_constant_4*((-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)*(-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)) + tmp_moved_constant_5*((-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)));
       {
          /* CellType.BLUE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < 1; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge - 1; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
         
             std::vector< uint_t > _data_rowIdx( 10 );
             std::vector< uint_t > _data_colIdx( 10 );
             std::vector< real_t > _data_mat( 100 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[6] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[7] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[8] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[9] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[6] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[7] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[8] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[9] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(tmp_moved_constant_95));
             _data_mat[1] = ((real_t)(tmp_moved_constant_96));
             _data_mat[2] = ((real_t)(tmp_moved_constant_97));
             _data_mat[3] = ((real_t)(tmp_moved_constant_98));
             _data_mat[4] = ((real_t)(tmp_moved_constant_99));
             _data_mat[5] = ((real_t)(tmp_moved_constant_100));
             _data_mat[6] = ((real_t)(tmp_moved_constant_101));
             _data_mat[7] = ((real_t)(tmp_moved_constant_102));
             _data_mat[8] = ((real_t)(tmp_moved_constant_103));
             _data_mat[9] = ((real_t)(tmp_moved_constant_104));
             _data_mat[10] = ((real_t)(tmp_moved_constant_105));
             _data_mat[11] = ((real_t)(tmp_moved_constant_106));
             _data_mat[12] = ((real_t)(tmp_moved_constant_107));
             _data_mat[13] = ((real_t)(tmp_moved_constant_108));
             _data_mat[14] = ((real_t)(tmp_moved_constant_109));
             _data_mat[15] = ((real_t)(tmp_moved_constant_110));
             _data_mat[16] = ((real_t)(tmp_moved_constant_111));
             _data_mat[17] = ((real_t)(tmp_moved_constant_112));
             _data_mat[18] = ((real_t)(tmp_moved_constant_113));
             _data_mat[19] = ((real_t)(tmp_moved_constant_114));
             _data_mat[20] = ((real_t)(tmp_moved_constant_115));
             _data_mat[21] = ((real_t)(tmp_moved_constant_116));
             _data_mat[22] = ((real_t)(tmp_moved_constant_117));
             _data_mat[23] = ((real_t)(tmp_moved_constant_118));
             _data_mat[24] = ((real_t)(tmp_moved_constant_119));
             _data_mat[25] = ((real_t)(tmp_moved_constant_120));
             _data_mat[26] = ((real_t)(tmp_moved_constant_121));
             _data_mat[27] = ((real_t)(tmp_moved_constant_122));
             _data_mat[28] = ((real_t)(tmp_moved_constant_123));
             _data_mat[29] = ((real_t)(tmp_moved_constant_124));
             _data_mat[30] = ((real_t)(tmp_moved_constant_125));
             _data_mat[31] = ((real_t)(tmp_moved_constant_126));
             _data_mat[32] = ((real_t)(tmp_moved_constant_127));
             _data_mat[33] = ((real_t)(tmp_moved_constant_128));
             _data_mat[34] = ((real_t)(tmp_moved_constant_129));
             _data_mat[35] = ((real_t)(tmp_moved_constant_130));
             _data_mat[36] = ((real_t)(tmp_moved_constant_131));
             _data_mat[37] = ((real_t)(tmp_moved_constant_132));
             _data_mat[38] = ((real_t)(tmp_moved_constant_133));
             _data_mat[39] = ((real_t)(tmp_moved_constant_134));
             _data_mat[40] = ((real_t)(tmp_moved_constant_135));
             _data_mat[41] = ((real_t)(tmp_moved_constant_136));
             _data_mat[42] = ((real_t)(tmp_moved_constant_137));
             _data_mat[43] = ((real_t)(tmp_moved_constant_138));
             _data_mat[44] = ((real_t)(tmp_moved_constant_139));
             _data_mat[45] = ((real_t)(tmp_moved_constant_140));
             _data_mat[46] = ((real_t)(tmp_moved_constant_141));
             _data_mat[47] = ((real_t)(tmp_moved_constant_142));
             _data_mat[48] = ((real_t)(tmp_moved_constant_143));
             _data_mat[49] = ((real_t)(tmp_moved_constant_144));
             _data_mat[50] = ((real_t)(tmp_moved_constant_145));
             _data_mat[51] = ((real_t)(tmp_moved_constant_146));
             _data_mat[52] = ((real_t)(tmp_moved_constant_147));
             _data_mat[53] = ((real_t)(tmp_moved_constant_148));
             _data_mat[54] = ((real_t)(tmp_moved_constant_149));
             _data_mat[55] = ((real_t)(tmp_moved_constant_150));
             _data_mat[56] = ((real_t)(tmp_moved_constant_151));
             _data_mat[57] = ((real_t)(tmp_moved_constant_152));
             _data_mat[58] = ((real_t)(tmp_moved_constant_153));
             _data_mat[59] = ((real_t)(tmp_moved_constant_154));
             _data_mat[60] = ((real_t)(tmp_moved_constant_155));
             _data_mat[61] = ((real_t)(tmp_moved_constant_156));
             _data_mat[62] = ((real_t)(tmp_moved_constant_157));
             _data_mat[63] = ((real_t)(tmp_moved_constant_158));
             _data_mat[64] = ((real_t)(tmp_moved_constant_159));
             _data_mat[65] = ((real_t)(tmp_moved_constant_160));
             _data_mat[66] = ((real_t)(tmp_moved_constant_161));
             _data_mat[67] = ((real_t)(tmp_moved_constant_162));
             _data_mat[68] = ((real_t)(tmp_moved_constant_163));
             _data_mat[69] = ((real_t)(tmp_moved_constant_164));
             _data_mat[70] = ((real_t)(tmp_moved_constant_165));
             _data_mat[71] = ((real_t)(tmp_moved_constant_166));
             _data_mat[72] = ((real_t)(tmp_moved_constant_167));
             _data_mat[73] = ((real_t)(tmp_moved_constant_168));
             _data_mat[74] = ((real_t)(tmp_moved_constant_169));
             _data_mat[75] = ((real_t)(tmp_moved_constant_170));
             _data_mat[76] = ((real_t)(tmp_moved_constant_171));
             _data_mat[77] = ((real_t)(tmp_moved_constant_172));
             _data_mat[78] = ((real_t)(tmp_moved_constant_173));
             _data_mat[79] = ((real_t)(tmp_moved_constant_174));
             _data_mat[80] = ((real_t)(tmp_moved_constant_175));
             _data_mat[81] = ((real_t)(tmp_moved_constant_176));
             _data_mat[82] = ((real_t)(tmp_moved_constant_177));
             _data_mat[83] = ((real_t)(tmp_moved_constant_178));
             _data_mat[84] = ((real_t)(tmp_moved_constant_179));
             _data_mat[85] = ((real_t)(tmp_moved_constant_180));
             _data_mat[86] = ((real_t)(tmp_moved_constant_181));
             _data_mat[87] = ((real_t)(tmp_moved_constant_182));
             _data_mat[88] = ((real_t)(tmp_moved_constant_183));
             _data_mat[89] = ((real_t)(tmp_moved_constant_184));
             _data_mat[90] = ((real_t)(tmp_moved_constant_185));
             _data_mat[91] = ((real_t)(tmp_moved_constant_186));
             _data_mat[92] = ((real_t)(tmp_moved_constant_187));
             _data_mat[93] = ((real_t)(tmp_moved_constant_188));
             _data_mat[94] = ((real_t)(tmp_moved_constant_189));
             _data_mat[95] = ((real_t)(tmp_moved_constant_190));
             _data_mat[96] = ((real_t)(tmp_moved_constant_191));
             _data_mat[97] = ((real_t)(tmp_moved_constant_192));
             _data_mat[98] = ((real_t)(tmp_moved_constant_193));
             _data_mat[99] = ((real_t)(tmp_moved_constant_194));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
