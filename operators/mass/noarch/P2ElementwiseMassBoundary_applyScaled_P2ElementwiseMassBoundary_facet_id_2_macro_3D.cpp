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

void P2ElementwiseMassBoundary::applyScaled_P2ElementwiseMassBoundary_facet_id_2_macro_3D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling ) const
{
    {
       const real_t tmp_coords_jac_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const real_t p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_coords_jac_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
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
       const real_t tmp_kernel_op_32 = 4.0*((real_t)(tmp_kernel_op_4));
       const real_t tmp_kernel_op_33 = tmp_kernel_op_1*2.0;
       const real_t tmp_kernel_op_34 = tmp_kernel_op_2*2.0;
       const real_t tmp_kernel_op_35 = tmp_kernel_op_0*4.0;
       const real_t tmp_kernel_op_36 = 4.0*((real_t)(tmp_kernel_op_3));
       const real_t tmp_kernel_op_37 = tmp_kernel_op_32 + tmp_kernel_op_36;
       const real_t tmp_kernel_op_38 = 2.0*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_39 = tmp_kernel_op_38 + 1.0;
       const real_t tmp_kernel_op_40 = tmp_kernel_op_8*-0.28125;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_40*(tmp_kernel_op_33 + tmp_kernel_op_34 + tmp_kernel_op_35 + tmp_kernel_op_37 + tmp_kernel_op_39 - 2.0);
       const real_t tmp_kernel_op_42 = 4.0*((real_t)(tmp_kernel_op_15));
       const real_t tmp_kernel_op_43 = tmp_kernel_op_12*2.0;
       const real_t tmp_kernel_op_44 = tmp_kernel_op_13*2.0;
       const real_t tmp_kernel_op_45 = tmp_kernel_op_11*4.0;
       const real_t tmp_kernel_op_46 = 4.0*((real_t)(tmp_kernel_op_14));
       const real_t tmp_kernel_op_47 = tmp_kernel_op_42 + tmp_kernel_op_46;
       const real_t tmp_kernel_op_48 = tmp_kernel_op_8*0.26041666666666669;
       const real_t tmp_kernel_op_49 = tmp_kernel_op_48*(tmp_kernel_op_39 + tmp_kernel_op_43 + tmp_kernel_op_44 + tmp_kernel_op_45 + tmp_kernel_op_47 - 2.3999999999999999);
       const real_t tmp_kernel_op_50 = 4.0*((real_t)(tmp_kernel_op_22));
       const real_t tmp_kernel_op_51 = tmp_kernel_op_19*2.0;
       const real_t tmp_kernel_op_52 = tmp_kernel_op_20*2.0;
       const real_t tmp_kernel_op_53 = tmp_kernel_op_18*4.0;
       const real_t tmp_kernel_op_54 = 4.0*((real_t)(tmp_kernel_op_21));
       const real_t tmp_kernel_op_55 = tmp_kernel_op_50 + tmp_kernel_op_54;
       const real_t tmp_kernel_op_56 = tmp_kernel_op_8*0.26041666666666669;
       const real_t tmp_kernel_op_57 = tmp_kernel_op_56*(tmp_kernel_op_39 + tmp_kernel_op_51 + tmp_kernel_op_52 + tmp_kernel_op_53 + tmp_kernel_op_55 - 2.3999999999999999);
       const real_t tmp_kernel_op_58 = 4.0*((real_t)(tmp_kernel_op_29));
       const real_t tmp_kernel_op_59 = tmp_kernel_op_26*2.0;
       const real_t tmp_kernel_op_60 = tmp_kernel_op_27*2.0;
       const real_t tmp_kernel_op_61 = tmp_kernel_op_25*4.0;
       const real_t tmp_kernel_op_62 = 4.0*((real_t)(tmp_kernel_op_28));
       const real_t tmp_kernel_op_63 = tmp_kernel_op_58 + tmp_kernel_op_62;
       const real_t tmp_kernel_op_64 = tmp_kernel_op_8*0.26041666666666669;
       const real_t tmp_kernel_op_65 = tmp_kernel_op_64*(tmp_kernel_op_39 + tmp_kernel_op_59 + tmp_kernel_op_60 + tmp_kernel_op_61 + tmp_kernel_op_63 - 1.2000000000000002);
       const real_t tmp_kernel_op_66 = tmp_kernel_op_32*tmp_kernel_op_41 + tmp_kernel_op_42*tmp_kernel_op_49 + tmp_kernel_op_50*tmp_kernel_op_57 + tmp_kernel_op_58*tmp_kernel_op_65;
       const real_t tmp_kernel_op_67 = tmp_kernel_op_36*tmp_kernel_op_41 + tmp_kernel_op_46*tmp_kernel_op_49 + tmp_kernel_op_54*tmp_kernel_op_57 + tmp_kernel_op_62*tmp_kernel_op_65;
       const real_t tmp_kernel_op_68 = tmp_kernel_op_35*tmp_kernel_op_41 + tmp_kernel_op_45*tmp_kernel_op_49 + tmp_kernel_op_53*tmp_kernel_op_57 + tmp_kernel_op_61*tmp_kernel_op_65;
       const real_t tmp_kernel_op_69 = tmp_kernel_op_33 - 0.33333333333333331;
       const real_t tmp_kernel_op_70 = tmp_kernel_op_43 - 0.20000000000000001;
       const real_t tmp_kernel_op_71 = tmp_kernel_op_51 - 0.59999999999999998;
       const real_t tmp_kernel_op_72 = tmp_kernel_op_59 - 0.20000000000000001;
       const real_t tmp_kernel_op_73 = tmp_kernel_op_41*tmp_kernel_op_69 + tmp_kernel_op_49*tmp_kernel_op_70 + tmp_kernel_op_57*tmp_kernel_op_71 + tmp_kernel_op_65*tmp_kernel_op_72;
       const real_t tmp_kernel_op_74 = tmp_kernel_op_34 - 0.33333333333333331;
       const real_t tmp_kernel_op_75 = tmp_kernel_op_44 - 0.59999999999999998;
       const real_t tmp_kernel_op_76 = tmp_kernel_op_52 - 0.20000000000000001;
       const real_t tmp_kernel_op_77 = tmp_kernel_op_60 - 0.20000000000000001;
       const real_t tmp_kernel_op_78 = tmp_kernel_op_41*tmp_kernel_op_74 + tmp_kernel_op_49*tmp_kernel_op_75 + tmp_kernel_op_57*tmp_kernel_op_76 + tmp_kernel_op_65*tmp_kernel_op_77;
       const real_t tmp_kernel_op_79 = tmp_kernel_op_38;
       const real_t tmp_kernel_op_80 = tmp_kernel_op_41*tmp_kernel_op_79 + tmp_kernel_op_49*tmp_kernel_op_79 + tmp_kernel_op_57*tmp_kernel_op_79 + tmp_kernel_op_65*tmp_kernel_op_79;
       const real_t tmp_kernel_op_81 = 4.0*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_82 = -tmp_kernel_op_37 - tmp_kernel_op_81;
       const real_t tmp_kernel_op_83 = -tmp_kernel_op_47 - tmp_kernel_op_81;
       const real_t tmp_kernel_op_84 = -tmp_kernel_op_55 - tmp_kernel_op_81;
       const real_t tmp_kernel_op_85 = -tmp_kernel_op_63 - tmp_kernel_op_81;
       const real_t tmp_kernel_op_86 = tmp_kernel_op_41*tmp_kernel_op_82 + tmp_kernel_op_49*tmp_kernel_op_83 + tmp_kernel_op_57*tmp_kernel_op_84 + tmp_kernel_op_65*tmp_kernel_op_85;
       const real_t tmp_kernel_op_87 = tmp_kernel_op_2*-4.0 - tmp_kernel_op_32 - tmp_kernel_op_35 + 1.3333333333333333;
       const real_t tmp_kernel_op_88 = tmp_kernel_op_13*-4.0 - tmp_kernel_op_42 - tmp_kernel_op_45 + 2.3999999999999999;
       const real_t tmp_kernel_op_89 = tmp_kernel_op_20*-4.0 - tmp_kernel_op_50 - tmp_kernel_op_53 + 0.80000000000000004;
       const real_t tmp_kernel_op_90 = tmp_kernel_op_27*-4.0 - tmp_kernel_op_58 - tmp_kernel_op_61 + 0.80000000000000004;
       const real_t tmp_kernel_op_91 = tmp_kernel_op_41*tmp_kernel_op_87 + tmp_kernel_op_49*tmp_kernel_op_88 + tmp_kernel_op_57*tmp_kernel_op_89 + tmp_kernel_op_65*tmp_kernel_op_90;
       const real_t tmp_kernel_op_92 = tmp_kernel_op_1*-4.0 - tmp_kernel_op_35 - tmp_kernel_op_36 + 1.3333333333333333;
       const real_t tmp_kernel_op_93 = tmp_kernel_op_12*-4.0 - tmp_kernel_op_45 - tmp_kernel_op_46 + 0.80000000000000004;
       const real_t tmp_kernel_op_94 = tmp_kernel_op_19*-4.0 - tmp_kernel_op_53 - tmp_kernel_op_54 + 2.3999999999999999;
       const real_t tmp_kernel_op_95 = tmp_kernel_op_26*-4.0 - tmp_kernel_op_61 - tmp_kernel_op_62 + 0.80000000000000004;
       const real_t tmp_kernel_op_96 = tmp_kernel_op_41*tmp_kernel_op_92 + tmp_kernel_op_49*tmp_kernel_op_93 + tmp_kernel_op_57*tmp_kernel_op_94 + tmp_kernel_op_65*tmp_kernel_op_95;
       const real_t tmp_kernel_op_97 = tmp_kernel_op_40*4.0;
       const real_t tmp_kernel_op_98 = tmp_kernel_op_48*4.0;
       const real_t tmp_kernel_op_99 = tmp_kernel_op_56*4.0;
       const real_t tmp_kernel_op_100 = tmp_kernel_op_64*4.0;
       const real_t tmp_kernel_op_101 = tmp_kernel_op_40*tmp_kernel_op_69;
       const real_t tmp_kernel_op_102 = tmp_kernel_op_48*tmp_kernel_op_70;
       const real_t tmp_kernel_op_103 = tmp_kernel_op_56*tmp_kernel_op_71;
       const real_t tmp_kernel_op_104 = tmp_kernel_op_64*tmp_kernel_op_72;
       const real_t tmp_kernel_op_105 = tmp_kernel_op_101*tmp_kernel_op_32 + tmp_kernel_op_102*tmp_kernel_op_42 + tmp_kernel_op_103*tmp_kernel_op_50 + tmp_kernel_op_104*tmp_kernel_op_58;
       const real_t tmp_kernel_op_106 = tmp_kernel_op_101*tmp_kernel_op_36 + tmp_kernel_op_102*tmp_kernel_op_46 + tmp_kernel_op_103*tmp_kernel_op_54 + tmp_kernel_op_104*tmp_kernel_op_62;
       const real_t tmp_kernel_op_107 = tmp_kernel_op_101*tmp_kernel_op_35 + tmp_kernel_op_102*tmp_kernel_op_45 + tmp_kernel_op_103*tmp_kernel_op_53 + tmp_kernel_op_104*tmp_kernel_op_61;
       const real_t tmp_kernel_op_108 = tmp_kernel_op_101*tmp_kernel_op_74 + tmp_kernel_op_102*tmp_kernel_op_75 + tmp_kernel_op_103*tmp_kernel_op_76 + tmp_kernel_op_104*tmp_kernel_op_77;
       const real_t tmp_kernel_op_109 = tmp_kernel_op_101*tmp_kernel_op_79 + tmp_kernel_op_102*tmp_kernel_op_79 + tmp_kernel_op_103*tmp_kernel_op_79 + tmp_kernel_op_104*tmp_kernel_op_79;
       const real_t tmp_kernel_op_110 = tmp_kernel_op_101*tmp_kernel_op_82 + tmp_kernel_op_102*tmp_kernel_op_83 + tmp_kernel_op_103*tmp_kernel_op_84 + tmp_kernel_op_104*tmp_kernel_op_85;
       const real_t tmp_kernel_op_111 = tmp_kernel_op_101*tmp_kernel_op_87 + tmp_kernel_op_102*tmp_kernel_op_88 + tmp_kernel_op_103*tmp_kernel_op_89 + tmp_kernel_op_104*tmp_kernel_op_90;
       const real_t tmp_kernel_op_112 = tmp_kernel_op_101*tmp_kernel_op_92 + tmp_kernel_op_102*tmp_kernel_op_93 + tmp_kernel_op_103*tmp_kernel_op_94 + tmp_kernel_op_104*tmp_kernel_op_95;
       const real_t tmp_kernel_op_113 = tmp_kernel_op_40*tmp_kernel_op_74;
       const real_t tmp_kernel_op_114 = tmp_kernel_op_48*tmp_kernel_op_75;
       const real_t tmp_kernel_op_115 = tmp_kernel_op_56*tmp_kernel_op_76;
       const real_t tmp_kernel_op_116 = tmp_kernel_op_64*tmp_kernel_op_77;
       const real_t tmp_kernel_op_117 = tmp_kernel_op_113*tmp_kernel_op_32 + tmp_kernel_op_114*tmp_kernel_op_42 + tmp_kernel_op_115*tmp_kernel_op_50 + tmp_kernel_op_116*tmp_kernel_op_58;
       const real_t tmp_kernel_op_118 = tmp_kernel_op_113*tmp_kernel_op_36 + tmp_kernel_op_114*tmp_kernel_op_46 + tmp_kernel_op_115*tmp_kernel_op_54 + tmp_kernel_op_116*tmp_kernel_op_62;
       const real_t tmp_kernel_op_119 = tmp_kernel_op_113*tmp_kernel_op_35 + tmp_kernel_op_114*tmp_kernel_op_45 + tmp_kernel_op_115*tmp_kernel_op_53 + tmp_kernel_op_116*tmp_kernel_op_61;
       const real_t tmp_kernel_op_120 = tmp_kernel_op_113*tmp_kernel_op_79 + tmp_kernel_op_114*tmp_kernel_op_79 + tmp_kernel_op_115*tmp_kernel_op_79 + tmp_kernel_op_116*tmp_kernel_op_79;
       const real_t tmp_kernel_op_121 = tmp_kernel_op_113*tmp_kernel_op_82 + tmp_kernel_op_114*tmp_kernel_op_83 + tmp_kernel_op_115*tmp_kernel_op_84 + tmp_kernel_op_116*tmp_kernel_op_85;
       const real_t tmp_kernel_op_122 = tmp_kernel_op_113*tmp_kernel_op_87 + tmp_kernel_op_114*tmp_kernel_op_88 + tmp_kernel_op_115*tmp_kernel_op_89 + tmp_kernel_op_116*tmp_kernel_op_90;
       const real_t tmp_kernel_op_123 = tmp_kernel_op_113*tmp_kernel_op_92 + tmp_kernel_op_114*tmp_kernel_op_93 + tmp_kernel_op_115*tmp_kernel_op_94 + tmp_kernel_op_116*tmp_kernel_op_95;
       const int64_t tmp_kernel_op_124 = ((int64_t)((tmp_kernel_op_6*tmp_kernel_op_6)));
       const real_t tmp_kernel_op_125 = tmp_kernel_op_40*tmp_kernel_op_79;
       const real_t tmp_kernel_op_126 = tmp_kernel_op_48*tmp_kernel_op_79;
       const real_t tmp_kernel_op_127 = tmp_kernel_op_56*tmp_kernel_op_79;
       const real_t tmp_kernel_op_128 = tmp_kernel_op_64*tmp_kernel_op_79;
       const real_t tmp_kernel_op_129 = tmp_kernel_op_125*tmp_kernel_op_32 + tmp_kernel_op_126*tmp_kernel_op_42 + tmp_kernel_op_127*tmp_kernel_op_50 + tmp_kernel_op_128*tmp_kernel_op_58;
       const real_t tmp_kernel_op_130 = tmp_kernel_op_125*tmp_kernel_op_36 + tmp_kernel_op_126*tmp_kernel_op_46 + tmp_kernel_op_127*tmp_kernel_op_54 + tmp_kernel_op_128*tmp_kernel_op_62;
       const real_t tmp_kernel_op_131 = tmp_kernel_op_125*tmp_kernel_op_35 + tmp_kernel_op_126*tmp_kernel_op_45 + tmp_kernel_op_127*tmp_kernel_op_53 + tmp_kernel_op_128*tmp_kernel_op_61;
       const real_t tmp_kernel_op_132 = tmp_kernel_op_125*tmp_kernel_op_82 + tmp_kernel_op_126*tmp_kernel_op_83 + tmp_kernel_op_127*tmp_kernel_op_84 + tmp_kernel_op_128*tmp_kernel_op_85;
       const real_t tmp_kernel_op_133 = tmp_kernel_op_125*tmp_kernel_op_87 + tmp_kernel_op_126*tmp_kernel_op_88 + tmp_kernel_op_127*tmp_kernel_op_89 + tmp_kernel_op_128*tmp_kernel_op_90;
       const real_t tmp_kernel_op_134 = tmp_kernel_op_125*tmp_kernel_op_92 + tmp_kernel_op_126*tmp_kernel_op_93 + tmp_kernel_op_127*tmp_kernel_op_94 + tmp_kernel_op_128*tmp_kernel_op_95;
       const real_t tmp_kernel_op_135 = tmp_kernel_op_10*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_136 = tmp_kernel_op_17*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_137 = tmp_kernel_op_24*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_138 = tmp_kernel_op_31*((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_139 = tmp_kernel_op_0*tmp_kernel_op_135 + tmp_kernel_op_11*tmp_kernel_op_136 + tmp_kernel_op_137*tmp_kernel_op_18 + tmp_kernel_op_138*tmp_kernel_op_25;
       const real_t tmp_kernel_op_140 = tmp_kernel_op_10*tmp_kernel_op_2;
       const real_t tmp_kernel_op_141 = tmp_kernel_op_13*tmp_kernel_op_17;
       const real_t tmp_kernel_op_142 = tmp_kernel_op_20*tmp_kernel_op_24;
       const real_t tmp_kernel_op_143 = tmp_kernel_op_27*tmp_kernel_op_31;
       const real_t tmp_kernel_op_144 = tmp_kernel_op_140*((real_t)(tmp_kernel_op_3)) + tmp_kernel_op_141*((real_t)(tmp_kernel_op_14)) + tmp_kernel_op_142*((real_t)(tmp_kernel_op_21)) + tmp_kernel_op_143*((real_t)(tmp_kernel_op_28));
       const real_t tmp_kernel_op_145 = tmp_kernel_op_40*tmp_kernel_op_82;
       const real_t tmp_kernel_op_146 = tmp_kernel_op_48*tmp_kernel_op_83;
       const real_t tmp_kernel_op_147 = tmp_kernel_op_56*tmp_kernel_op_84;
       const real_t tmp_kernel_op_148 = tmp_kernel_op_64*tmp_kernel_op_85;
       const real_t tmp_kernel_op_149 = tmp_kernel_op_145*tmp_kernel_op_32 + tmp_kernel_op_146*tmp_kernel_op_42 + tmp_kernel_op_147*tmp_kernel_op_50 + tmp_kernel_op_148*tmp_kernel_op_58;
       const real_t tmp_kernel_op_150 = tmp_kernel_op_40*tmp_kernel_op_87;
       const real_t tmp_kernel_op_151 = tmp_kernel_op_48*tmp_kernel_op_88;
       const real_t tmp_kernel_op_152 = tmp_kernel_op_56*tmp_kernel_op_89;
       const real_t tmp_kernel_op_153 = tmp_kernel_op_64*tmp_kernel_op_90;
       const real_t tmp_kernel_op_154 = tmp_kernel_op_150*tmp_kernel_op_32 + tmp_kernel_op_151*tmp_kernel_op_42 + tmp_kernel_op_152*tmp_kernel_op_50 + tmp_kernel_op_153*tmp_kernel_op_58;
       const real_t tmp_kernel_op_155 = tmp_kernel_op_40*tmp_kernel_op_92;
       const real_t tmp_kernel_op_156 = tmp_kernel_op_48*tmp_kernel_op_93;
       const real_t tmp_kernel_op_157 = tmp_kernel_op_56*tmp_kernel_op_94;
       const real_t tmp_kernel_op_158 = tmp_kernel_op_64*tmp_kernel_op_95;
       const real_t tmp_kernel_op_159 = tmp_kernel_op_155*tmp_kernel_op_32 + tmp_kernel_op_156*tmp_kernel_op_42 + tmp_kernel_op_157*tmp_kernel_op_50 + tmp_kernel_op_158*tmp_kernel_op_58;
       const real_t tmp_kernel_op_160 = tmp_kernel_op_1*tmp_kernel_op_10*((real_t)(tmp_kernel_op_4)) + tmp_kernel_op_12*tmp_kernel_op_17*((real_t)(tmp_kernel_op_15)) + tmp_kernel_op_19*tmp_kernel_op_24*((real_t)(tmp_kernel_op_22)) + tmp_kernel_op_26*tmp_kernel_op_31*((real_t)(tmp_kernel_op_29));
       const real_t tmp_kernel_op_161 = tmp_kernel_op_145*tmp_kernel_op_36 + tmp_kernel_op_146*tmp_kernel_op_46 + tmp_kernel_op_147*tmp_kernel_op_54 + tmp_kernel_op_148*tmp_kernel_op_62;
       const real_t tmp_kernel_op_162 = tmp_kernel_op_150*tmp_kernel_op_36 + tmp_kernel_op_151*tmp_kernel_op_46 + tmp_kernel_op_152*tmp_kernel_op_54 + tmp_kernel_op_153*tmp_kernel_op_62;
       const real_t tmp_kernel_op_163 = tmp_kernel_op_155*tmp_kernel_op_36 + tmp_kernel_op_156*tmp_kernel_op_46 + tmp_kernel_op_157*tmp_kernel_op_54 + tmp_kernel_op_158*tmp_kernel_op_62;
       const real_t tmp_kernel_op_164 = tmp_kernel_op_145*tmp_kernel_op_35 + tmp_kernel_op_146*tmp_kernel_op_45 + tmp_kernel_op_147*tmp_kernel_op_53 + tmp_kernel_op_148*tmp_kernel_op_61;
       const real_t tmp_kernel_op_165 = tmp_kernel_op_150*tmp_kernel_op_35 + tmp_kernel_op_151*tmp_kernel_op_45 + tmp_kernel_op_152*tmp_kernel_op_53 + tmp_kernel_op_153*tmp_kernel_op_61;
       const real_t tmp_kernel_op_166 = tmp_kernel_op_155*tmp_kernel_op_35 + tmp_kernel_op_156*tmp_kernel_op_45 + tmp_kernel_op_157*tmp_kernel_op_53 + tmp_kernel_op_158*tmp_kernel_op_61;
       const int64_t tmp_kernel_op_167 = tmp_kernel_op_6;
       const real_t tmp_kernel_op_168 = tmp_kernel_op_145*tmp_kernel_op_87 + tmp_kernel_op_146*tmp_kernel_op_88 + tmp_kernel_op_147*tmp_kernel_op_89 + tmp_kernel_op_148*tmp_kernel_op_90;
       const real_t tmp_kernel_op_169 = tmp_kernel_op_145*tmp_kernel_op_92 + tmp_kernel_op_146*tmp_kernel_op_93 + tmp_kernel_op_147*tmp_kernel_op_94 + tmp_kernel_op_148*tmp_kernel_op_95;
       const real_t tmp_kernel_op_170 = tmp_kernel_op_150*tmp_kernel_op_92 + tmp_kernel_op_151*tmp_kernel_op_93 + tmp_kernel_op_152*tmp_kernel_op_94 + tmp_kernel_op_153*tmp_kernel_op_95;
       {
          /* CellType.WHITE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < 1; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_3 = _data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_6 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_7 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_8 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_9 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_10*((tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))*(tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))) + tmp_kernel_op_17*((tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))*(tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))) + tmp_kernel_op_24*((tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))*(tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))) + tmp_kernel_op_31*((tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30)))*(tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30))))) + src_dof_1*tmp_kernel_op_73 + src_dof_2*tmp_kernel_op_78 + src_dof_3*tmp_kernel_op_80 + src_dof_4*tmp_kernel_op_66 + src_dof_5*tmp_kernel_op_67 + src_dof_6*tmp_kernel_op_68 + src_dof_7*tmp_kernel_op_86 + src_dof_8*tmp_kernel_op_91 + src_dof_9*tmp_kernel_op_96;
             const real_t elMatVec_1 = src_dof_0*tmp_kernel_op_73 + src_dof_1*(tmp_kernel_op_100*((tmp_kernel_op_26 - 0.10000000000000001)*(tmp_kernel_op_26 - 0.10000000000000001)) + tmp_kernel_op_97*((tmp_kernel_op_1 - 0.16666666666666666)*(tmp_kernel_op_1 - 0.16666666666666666)) + tmp_kernel_op_98*((tmp_kernel_op_12 - 0.10000000000000001)*(tmp_kernel_op_12 - 0.10000000000000001)) + tmp_kernel_op_99*((tmp_kernel_op_19 - 0.29999999999999999)*(tmp_kernel_op_19 - 0.29999999999999999))) + src_dof_2*tmp_kernel_op_108 + src_dof_3*tmp_kernel_op_109 + src_dof_4*tmp_kernel_op_105 + src_dof_5*tmp_kernel_op_106 + src_dof_6*tmp_kernel_op_107 + src_dof_7*tmp_kernel_op_110 + src_dof_8*tmp_kernel_op_111 + src_dof_9*tmp_kernel_op_112;
             const real_t elMatVec_2 = src_dof_0*tmp_kernel_op_78 + src_dof_1*tmp_kernel_op_108 + src_dof_2*(tmp_kernel_op_100*((tmp_kernel_op_27 - 0.10000000000000001)*(tmp_kernel_op_27 - 0.10000000000000001)) + tmp_kernel_op_97*((tmp_kernel_op_2 - 0.16666666666666666)*(tmp_kernel_op_2 - 0.16666666666666666)) + tmp_kernel_op_98*((tmp_kernel_op_13 - 0.29999999999999999)*(tmp_kernel_op_13 - 0.29999999999999999)) + tmp_kernel_op_99*((tmp_kernel_op_20 - 0.10000000000000001)*(tmp_kernel_op_20 - 0.10000000000000001))) + src_dof_3*tmp_kernel_op_120 + src_dof_4*tmp_kernel_op_117 + src_dof_5*tmp_kernel_op_118 + src_dof_6*tmp_kernel_op_119 + src_dof_7*tmp_kernel_op_121 + src_dof_8*tmp_kernel_op_122 + src_dof_9*tmp_kernel_op_123;
             const real_t elMatVec_3 = src_dof_0*tmp_kernel_op_80 + src_dof_1*tmp_kernel_op_109 + src_dof_2*tmp_kernel_op_120 + src_dof_3*(tmp_kernel_op_100*((real_t)(tmp_kernel_op_124)) + tmp_kernel_op_97*((real_t)(tmp_kernel_op_124)) + tmp_kernel_op_98*((real_t)(tmp_kernel_op_124)) + tmp_kernel_op_99*((real_t)(tmp_kernel_op_124))) + src_dof_4*tmp_kernel_op_129 + src_dof_5*tmp_kernel_op_130 + src_dof_6*tmp_kernel_op_131 + src_dof_7*tmp_kernel_op_132 + src_dof_8*tmp_kernel_op_133 + src_dof_9*tmp_kernel_op_134;
             const real_t elMatVec_4 = src_dof_0*tmp_kernel_op_66 + src_dof_1*tmp_kernel_op_105 + src_dof_2*tmp_kernel_op_117 + src_dof_3*tmp_kernel_op_129 + src_dof_4*(tmp_kernel_op_13*tmp_kernel_op_136 + tmp_kernel_op_135*tmp_kernel_op_2 + tmp_kernel_op_137*tmp_kernel_op_20 + tmp_kernel_op_138*tmp_kernel_op_27) + src_dof_5*tmp_kernel_op_139 + src_dof_6*tmp_kernel_op_144 + src_dof_7*tmp_kernel_op_149 + src_dof_8*tmp_kernel_op_154 + src_dof_9*tmp_kernel_op_159;
             const real_t elMatVec_5 = src_dof_0*tmp_kernel_op_67 + src_dof_1*tmp_kernel_op_106 + src_dof_2*tmp_kernel_op_118 + src_dof_3*tmp_kernel_op_130 + src_dof_4*tmp_kernel_op_139 + src_dof_5*(tmp_kernel_op_1*tmp_kernel_op_135 + tmp_kernel_op_12*tmp_kernel_op_136 + tmp_kernel_op_137*tmp_kernel_op_19 + tmp_kernel_op_138*tmp_kernel_op_26) + src_dof_6*tmp_kernel_op_160 + src_dof_7*tmp_kernel_op_161 + src_dof_8*tmp_kernel_op_162 + src_dof_9*tmp_kernel_op_163;
             const real_t elMatVec_6 = src_dof_0*tmp_kernel_op_68 + src_dof_1*tmp_kernel_op_107 + src_dof_2*tmp_kernel_op_119 + src_dof_3*tmp_kernel_op_131 + src_dof_4*tmp_kernel_op_144 + src_dof_5*tmp_kernel_op_160 + src_dof_6*(tmp_kernel_op_1*tmp_kernel_op_140 + tmp_kernel_op_12*tmp_kernel_op_141 + tmp_kernel_op_142*tmp_kernel_op_19 + tmp_kernel_op_143*tmp_kernel_op_26) + src_dof_7*tmp_kernel_op_164 + src_dof_8*tmp_kernel_op_165 + src_dof_9*tmp_kernel_op_166;
             const real_t elMatVec_7 = src_dof_0*tmp_kernel_op_86 + src_dof_1*tmp_kernel_op_110 + src_dof_2*tmp_kernel_op_121 + src_dof_3*tmp_kernel_op_132 + src_dof_4*tmp_kernel_op_149 + src_dof_5*tmp_kernel_op_161 + src_dof_6*tmp_kernel_op_164 + src_dof_7*(tmp_kernel_op_10*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_5)*(-tmp_kernel_op_167 - tmp_kernel_op_5)))) + tmp_kernel_op_17*((real_t)(((-tmp_kernel_op_16 - tmp_kernel_op_167)*(-tmp_kernel_op_16 - tmp_kernel_op_167)))) + tmp_kernel_op_24*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_23)*(-tmp_kernel_op_167 - tmp_kernel_op_23)))) + tmp_kernel_op_31*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_30)*(-tmp_kernel_op_167 - tmp_kernel_op_30))))) + src_dof_8*tmp_kernel_op_168 + src_dof_9*tmp_kernel_op_169;
             const real_t elMatVec_8 = src_dof_0*tmp_kernel_op_91 + src_dof_1*tmp_kernel_op_111 + src_dof_2*tmp_kernel_op_122 + src_dof_3*tmp_kernel_op_133 + src_dof_4*tmp_kernel_op_154 + src_dof_5*tmp_kernel_op_162 + src_dof_6*tmp_kernel_op_165 + src_dof_7*tmp_kernel_op_168 + src_dof_8*(tmp_kernel_op_10*((-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)) + tmp_kernel_op_17*((-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)*(-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)) + tmp_kernel_op_24*((-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)*(-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)) + tmp_kernel_op_31*((-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001))) + src_dof_9*tmp_kernel_op_170;
             const real_t elMatVec_9 = src_dof_0*tmp_kernel_op_96 + src_dof_1*tmp_kernel_op_112 + src_dof_2*tmp_kernel_op_123 + src_dof_3*tmp_kernel_op_134 + src_dof_4*tmp_kernel_op_159 + src_dof_5*tmp_kernel_op_163 + src_dof_6*tmp_kernel_op_166 + src_dof_7*tmp_kernel_op_169 + src_dof_8*tmp_kernel_op_170 + src_dof_9*(tmp_kernel_op_10*((-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)) + tmp_kernel_op_17*((-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)*(-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)) + tmp_kernel_op_24*((-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)*(-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)) + tmp_kernel_op_31*((-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)));
             _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_3*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_6*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_7*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_8*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_9*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const real_t p_affine_const_2_0_BLUE_DOWN = tmp_coords_jac_1_BLUE_DOWN + tmp_coords_jac_4_BLUE_DOWN;
       const real_t p_affine_const_2_1_BLUE_DOWN = tmp_coords_jac_2_BLUE_DOWN + tmp_coords_jac_6_BLUE_DOWN;
       const real_t p_affine_const_2_2_BLUE_DOWN = tmp_coords_jac_3_BLUE_DOWN + tmp_coords_jac_8_BLUE_DOWN;
       const real_t p_affine_const_3_0_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_coords_jac_5_BLUE_DOWN;
       const real_t p_affine_const_3_1_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_coords_jac_7_BLUE_DOWN;
       const real_t p_affine_const_3_2_BLUE_DOWN = tmp_coords_jac_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_coords_jac_9_BLUE_DOWN;
       const real_t jac_affine_0_0_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_1_0_BLUE_DOWN;
       const real_t jac_affine_0_1_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_2_0_BLUE_DOWN;
       const real_t jac_affine_1_0_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_1_1_BLUE_DOWN;
       const real_t jac_affine_1_1_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_2_1_BLUE_DOWN;
       const real_t jac_affine_2_0_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_1_2_BLUE_DOWN;
       const real_t jac_affine_2_1_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_2_2_BLUE_DOWN;
       const real_t tmp_moved_constant_0 = pow(abs(((jac_affine_0_0_BLUE_DOWN*jac_affine_0_0_BLUE_DOWN) + (jac_affine_1_0_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN) + (jac_affine_2_0_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN))*((jac_affine_0_1_BLUE_DOWN*jac_affine_0_1_BLUE_DOWN) + (jac_affine_1_1_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN) + (jac_affine_2_1_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN)) - ((jac_affine_0_0_BLUE_DOWN*jac_affine_0_1_BLUE_DOWN + jac_affine_1_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN + jac_affine_2_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN)*(jac_affine_0_0_BLUE_DOWN*jac_affine_0_1_BLUE_DOWN + jac_affine_1_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN + jac_affine_2_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN))), 0.5);
       const real_t tmp_moved_constant_1 = tmp_moved_constant_0*16.0;
       const real_t tmp_moved_constant_2 = tmp_moved_constant_1*-0.28125;
       const real_t tmp_moved_constant_3 = tmp_moved_constant_1*0.26041666666666669;
       const real_t tmp_moved_constant_4 = tmp_moved_constant_1*0.26041666666666669;
       const real_t tmp_moved_constant_5 = tmp_moved_constant_1*0.26041666666666669;
       const real_t tmp_moved_constant_6 = tmp_moved_constant_0*-0.28125;
       const real_t tmp_moved_constant_7 = tmp_moved_constant_6*(tmp_kernel_op_33 + tmp_kernel_op_34 + tmp_kernel_op_35 + tmp_kernel_op_37 + tmp_kernel_op_39 - 2.0);
       const real_t tmp_moved_constant_8 = tmp_moved_constant_0*0.26041666666666669;
       const real_t tmp_moved_constant_9 = tmp_moved_constant_8*(tmp_kernel_op_39 + tmp_kernel_op_43 + tmp_kernel_op_44 + tmp_kernel_op_45 + tmp_kernel_op_47 - 2.3999999999999999);
       const real_t tmp_moved_constant_10 = tmp_moved_constant_0*0.26041666666666669;
       const real_t tmp_moved_constant_11 = tmp_moved_constant_10*(tmp_kernel_op_39 + tmp_kernel_op_51 + tmp_kernel_op_52 + tmp_kernel_op_53 + tmp_kernel_op_55 - 2.3999999999999999);
       const real_t tmp_moved_constant_12 = tmp_moved_constant_0*0.26041666666666669;
       const real_t tmp_moved_constant_13 = tmp_moved_constant_12*(tmp_kernel_op_39 + tmp_kernel_op_59 + tmp_kernel_op_60 + tmp_kernel_op_61 + tmp_kernel_op_63 - 1.2000000000000002);
       const real_t tmp_moved_constant_14 = tmp_kernel_op_32*tmp_moved_constant_7 + tmp_kernel_op_42*tmp_moved_constant_9 + tmp_kernel_op_50*tmp_moved_constant_11 + tmp_kernel_op_58*tmp_moved_constant_13;
       const real_t tmp_moved_constant_15 = tmp_kernel_op_36*tmp_moved_constant_7 + tmp_kernel_op_46*tmp_moved_constant_9 + tmp_kernel_op_54*tmp_moved_constant_11 + tmp_kernel_op_62*tmp_moved_constant_13;
       const real_t tmp_moved_constant_16 = tmp_kernel_op_35*tmp_moved_constant_7 + tmp_kernel_op_45*tmp_moved_constant_9 + tmp_kernel_op_53*tmp_moved_constant_11 + tmp_kernel_op_61*tmp_moved_constant_13;
       const real_t tmp_moved_constant_17 = tmp_kernel_op_69*tmp_moved_constant_7 + tmp_kernel_op_70*tmp_moved_constant_9 + tmp_kernel_op_71*tmp_moved_constant_11 + tmp_kernel_op_72*tmp_moved_constant_13;
       const real_t tmp_moved_constant_18 = tmp_kernel_op_74*tmp_moved_constant_7 + tmp_kernel_op_75*tmp_moved_constant_9 + tmp_kernel_op_76*tmp_moved_constant_11 + tmp_kernel_op_77*tmp_moved_constant_13;
       const real_t tmp_moved_constant_19 = tmp_kernel_op_79*tmp_moved_constant_11 + tmp_kernel_op_79*tmp_moved_constant_13 + tmp_kernel_op_79*tmp_moved_constant_7 + tmp_kernel_op_79*tmp_moved_constant_9;
       const real_t tmp_moved_constant_20 = tmp_kernel_op_82*tmp_moved_constant_7 + tmp_kernel_op_83*tmp_moved_constant_9 + tmp_kernel_op_84*tmp_moved_constant_11 + tmp_kernel_op_85*tmp_moved_constant_13;
       const real_t tmp_moved_constant_21 = tmp_kernel_op_87*tmp_moved_constant_7 + tmp_kernel_op_88*tmp_moved_constant_9 + tmp_kernel_op_89*tmp_moved_constant_11 + tmp_kernel_op_90*tmp_moved_constant_13;
       const real_t tmp_moved_constant_22 = tmp_kernel_op_92*tmp_moved_constant_7 + tmp_kernel_op_93*tmp_moved_constant_9 + tmp_kernel_op_94*tmp_moved_constant_11 + tmp_kernel_op_95*tmp_moved_constant_13;
       const real_t tmp_moved_constant_23 = tmp_moved_constant_6*4.0;
       const real_t tmp_moved_constant_24 = tmp_moved_constant_8*4.0;
       const real_t tmp_moved_constant_25 = tmp_moved_constant_10*4.0;
       const real_t tmp_moved_constant_26 = tmp_moved_constant_12*4.0;
       const real_t tmp_moved_constant_27 = tmp_kernel_op_69*tmp_moved_constant_6;
       const real_t tmp_moved_constant_28 = tmp_kernel_op_70*tmp_moved_constant_8;
       const real_t tmp_moved_constant_29 = tmp_kernel_op_71*tmp_moved_constant_10;
       const real_t tmp_moved_constant_30 = tmp_kernel_op_72*tmp_moved_constant_12;
       const real_t tmp_moved_constant_31 = tmp_kernel_op_32*tmp_moved_constant_27 + tmp_kernel_op_42*tmp_moved_constant_28 + tmp_kernel_op_50*tmp_moved_constant_29 + tmp_kernel_op_58*tmp_moved_constant_30;
       const real_t tmp_moved_constant_32 = tmp_kernel_op_36*tmp_moved_constant_27 + tmp_kernel_op_46*tmp_moved_constant_28 + tmp_kernel_op_54*tmp_moved_constant_29 + tmp_kernel_op_62*tmp_moved_constant_30;
       const real_t tmp_moved_constant_33 = tmp_kernel_op_35*tmp_moved_constant_27 + tmp_kernel_op_45*tmp_moved_constant_28 + tmp_kernel_op_53*tmp_moved_constant_29 + tmp_kernel_op_61*tmp_moved_constant_30;
       const real_t tmp_moved_constant_34 = tmp_kernel_op_74*tmp_moved_constant_27 + tmp_kernel_op_75*tmp_moved_constant_28 + tmp_kernel_op_76*tmp_moved_constant_29 + tmp_kernel_op_77*tmp_moved_constant_30;
       const real_t tmp_moved_constant_35 = tmp_kernel_op_79*tmp_moved_constant_27 + tmp_kernel_op_79*tmp_moved_constant_28 + tmp_kernel_op_79*tmp_moved_constant_29 + tmp_kernel_op_79*tmp_moved_constant_30;
       const real_t tmp_moved_constant_36 = tmp_kernel_op_82*tmp_moved_constant_27 + tmp_kernel_op_83*tmp_moved_constant_28 + tmp_kernel_op_84*tmp_moved_constant_29 + tmp_kernel_op_85*tmp_moved_constant_30;
       const real_t tmp_moved_constant_37 = tmp_kernel_op_87*tmp_moved_constant_27 + tmp_kernel_op_88*tmp_moved_constant_28 + tmp_kernel_op_89*tmp_moved_constant_29 + tmp_kernel_op_90*tmp_moved_constant_30;
       const real_t tmp_moved_constant_38 = tmp_kernel_op_92*tmp_moved_constant_27 + tmp_kernel_op_93*tmp_moved_constant_28 + tmp_kernel_op_94*tmp_moved_constant_29 + tmp_kernel_op_95*tmp_moved_constant_30;
       const real_t tmp_moved_constant_39 = tmp_kernel_op_74*tmp_moved_constant_6;
       const real_t tmp_moved_constant_40 = tmp_kernel_op_75*tmp_moved_constant_8;
       const real_t tmp_moved_constant_41 = tmp_kernel_op_76*tmp_moved_constant_10;
       const real_t tmp_moved_constant_42 = tmp_kernel_op_77*tmp_moved_constant_12;
       const real_t tmp_moved_constant_43 = tmp_kernel_op_32*tmp_moved_constant_39 + tmp_kernel_op_42*tmp_moved_constant_40 + tmp_kernel_op_50*tmp_moved_constant_41 + tmp_kernel_op_58*tmp_moved_constant_42;
       const real_t tmp_moved_constant_44 = tmp_kernel_op_36*tmp_moved_constant_39 + tmp_kernel_op_46*tmp_moved_constant_40 + tmp_kernel_op_54*tmp_moved_constant_41 + tmp_kernel_op_62*tmp_moved_constant_42;
       const real_t tmp_moved_constant_45 = tmp_kernel_op_35*tmp_moved_constant_39 + tmp_kernel_op_45*tmp_moved_constant_40 + tmp_kernel_op_53*tmp_moved_constant_41 + tmp_kernel_op_61*tmp_moved_constant_42;
       const real_t tmp_moved_constant_46 = tmp_kernel_op_79*tmp_moved_constant_39 + tmp_kernel_op_79*tmp_moved_constant_40 + tmp_kernel_op_79*tmp_moved_constant_41 + tmp_kernel_op_79*tmp_moved_constant_42;
       const real_t tmp_moved_constant_47 = tmp_kernel_op_82*tmp_moved_constant_39 + tmp_kernel_op_83*tmp_moved_constant_40 + tmp_kernel_op_84*tmp_moved_constant_41 + tmp_kernel_op_85*tmp_moved_constant_42;
       const real_t tmp_moved_constant_48 = tmp_kernel_op_87*tmp_moved_constant_39 + tmp_kernel_op_88*tmp_moved_constant_40 + tmp_kernel_op_89*tmp_moved_constant_41 + tmp_kernel_op_90*tmp_moved_constant_42;
       const real_t tmp_moved_constant_49 = tmp_kernel_op_92*tmp_moved_constant_39 + tmp_kernel_op_93*tmp_moved_constant_40 + tmp_kernel_op_94*tmp_moved_constant_41 + tmp_kernel_op_95*tmp_moved_constant_42;
       const real_t tmp_moved_constant_50 = tmp_kernel_op_79*tmp_moved_constant_6;
       const real_t tmp_moved_constant_51 = tmp_kernel_op_79*tmp_moved_constant_8;
       const real_t tmp_moved_constant_52 = tmp_kernel_op_79*tmp_moved_constant_10;
       const real_t tmp_moved_constant_53 = tmp_kernel_op_79*tmp_moved_constant_12;
       const real_t tmp_moved_constant_54 = tmp_kernel_op_32*tmp_moved_constant_50 + tmp_kernel_op_42*tmp_moved_constant_51 + tmp_kernel_op_50*tmp_moved_constant_52 + tmp_kernel_op_58*tmp_moved_constant_53;
       const real_t tmp_moved_constant_55 = tmp_kernel_op_36*tmp_moved_constant_50 + tmp_kernel_op_46*tmp_moved_constant_51 + tmp_kernel_op_54*tmp_moved_constant_52 + tmp_kernel_op_62*tmp_moved_constant_53;
       const real_t tmp_moved_constant_56 = tmp_kernel_op_35*tmp_moved_constant_50 + tmp_kernel_op_45*tmp_moved_constant_51 + tmp_kernel_op_53*tmp_moved_constant_52 + tmp_kernel_op_61*tmp_moved_constant_53;
       const real_t tmp_moved_constant_57 = tmp_kernel_op_82*tmp_moved_constant_50 + tmp_kernel_op_83*tmp_moved_constant_51 + tmp_kernel_op_84*tmp_moved_constant_52 + tmp_kernel_op_85*tmp_moved_constant_53;
       const real_t tmp_moved_constant_58 = tmp_kernel_op_87*tmp_moved_constant_50 + tmp_kernel_op_88*tmp_moved_constant_51 + tmp_kernel_op_89*tmp_moved_constant_52 + tmp_kernel_op_90*tmp_moved_constant_53;
       const real_t tmp_moved_constant_59 = tmp_kernel_op_92*tmp_moved_constant_50 + tmp_kernel_op_93*tmp_moved_constant_51 + tmp_kernel_op_94*tmp_moved_constant_52 + tmp_kernel_op_95*tmp_moved_constant_53;
       const real_t tmp_moved_constant_60 = tmp_moved_constant_2*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_61 = tmp_moved_constant_3*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_62 = tmp_moved_constant_4*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_63 = tmp_moved_constant_5*((real_t)(tmp_kernel_op_6));
       const real_t tmp_moved_constant_64 = tmp_kernel_op_0*tmp_moved_constant_60 + tmp_kernel_op_11*tmp_moved_constant_61 + tmp_kernel_op_18*tmp_moved_constant_62 + tmp_kernel_op_25*tmp_moved_constant_63;
       const real_t tmp_moved_constant_65 = tmp_kernel_op_2*tmp_moved_constant_2;
       const real_t tmp_moved_constant_66 = tmp_kernel_op_13*tmp_moved_constant_3;
       const real_t tmp_moved_constant_67 = tmp_kernel_op_20*tmp_moved_constant_4;
       const real_t tmp_moved_constant_68 = tmp_kernel_op_27*tmp_moved_constant_5;
       const real_t tmp_moved_constant_69 = tmp_moved_constant_65*((real_t)(tmp_kernel_op_3)) + tmp_moved_constant_66*((real_t)(tmp_kernel_op_14)) + tmp_moved_constant_67*((real_t)(tmp_kernel_op_21)) + tmp_moved_constant_68*((real_t)(tmp_kernel_op_28));
       const real_t tmp_moved_constant_70 = tmp_kernel_op_82*tmp_moved_constant_6;
       const real_t tmp_moved_constant_71 = tmp_kernel_op_83*tmp_moved_constant_8;
       const real_t tmp_moved_constant_72 = tmp_kernel_op_84*tmp_moved_constant_10;
       const real_t tmp_moved_constant_73 = tmp_kernel_op_85*tmp_moved_constant_12;
       const real_t tmp_moved_constant_74 = tmp_kernel_op_32*tmp_moved_constant_70 + tmp_kernel_op_42*tmp_moved_constant_71 + tmp_kernel_op_50*tmp_moved_constant_72 + tmp_kernel_op_58*tmp_moved_constant_73;
       const real_t tmp_moved_constant_75 = tmp_kernel_op_87*tmp_moved_constant_6;
       const real_t tmp_moved_constant_76 = tmp_kernel_op_88*tmp_moved_constant_8;
       const real_t tmp_moved_constant_77 = tmp_kernel_op_89*tmp_moved_constant_10;
       const real_t tmp_moved_constant_78 = tmp_kernel_op_90*tmp_moved_constant_12;
       const real_t tmp_moved_constant_79 = tmp_kernel_op_32*tmp_moved_constant_75 + tmp_kernel_op_42*tmp_moved_constant_76 + tmp_kernel_op_50*tmp_moved_constant_77 + tmp_kernel_op_58*tmp_moved_constant_78;
       const real_t tmp_moved_constant_80 = tmp_kernel_op_92*tmp_moved_constant_6;
       const real_t tmp_moved_constant_81 = tmp_kernel_op_93*tmp_moved_constant_8;
       const real_t tmp_moved_constant_82 = tmp_kernel_op_94*tmp_moved_constant_10;
       const real_t tmp_moved_constant_83 = tmp_kernel_op_95*tmp_moved_constant_12;
       const real_t tmp_moved_constant_84 = tmp_kernel_op_32*tmp_moved_constant_80 + tmp_kernel_op_42*tmp_moved_constant_81 + tmp_kernel_op_50*tmp_moved_constant_82 + tmp_kernel_op_58*tmp_moved_constant_83;
       const real_t tmp_moved_constant_85 = tmp_kernel_op_1*tmp_moved_constant_2*((real_t)(tmp_kernel_op_4)) + tmp_kernel_op_12*tmp_moved_constant_3*((real_t)(tmp_kernel_op_15)) + tmp_kernel_op_19*tmp_moved_constant_4*((real_t)(tmp_kernel_op_22)) + tmp_kernel_op_26*tmp_moved_constant_5*((real_t)(tmp_kernel_op_29));
       const real_t tmp_moved_constant_86 = tmp_kernel_op_36*tmp_moved_constant_70 + tmp_kernel_op_46*tmp_moved_constant_71 + tmp_kernel_op_54*tmp_moved_constant_72 + tmp_kernel_op_62*tmp_moved_constant_73;
       const real_t tmp_moved_constant_87 = tmp_kernel_op_36*tmp_moved_constant_75 + tmp_kernel_op_46*tmp_moved_constant_76 + tmp_kernel_op_54*tmp_moved_constant_77 + tmp_kernel_op_62*tmp_moved_constant_78;
       const real_t tmp_moved_constant_88 = tmp_kernel_op_36*tmp_moved_constant_80 + tmp_kernel_op_46*tmp_moved_constant_81 + tmp_kernel_op_54*tmp_moved_constant_82 + tmp_kernel_op_62*tmp_moved_constant_83;
       const real_t tmp_moved_constant_89 = tmp_kernel_op_35*tmp_moved_constant_70 + tmp_kernel_op_45*tmp_moved_constant_71 + tmp_kernel_op_53*tmp_moved_constant_72 + tmp_kernel_op_61*tmp_moved_constant_73;
       const real_t tmp_moved_constant_90 = tmp_kernel_op_35*tmp_moved_constant_75 + tmp_kernel_op_45*tmp_moved_constant_76 + tmp_kernel_op_53*tmp_moved_constant_77 + tmp_kernel_op_61*tmp_moved_constant_78;
       const real_t tmp_moved_constant_91 = tmp_kernel_op_35*tmp_moved_constant_80 + tmp_kernel_op_45*tmp_moved_constant_81 + tmp_kernel_op_53*tmp_moved_constant_82 + tmp_kernel_op_61*tmp_moved_constant_83;
       const real_t tmp_moved_constant_92 = tmp_kernel_op_87*tmp_moved_constant_70 + tmp_kernel_op_88*tmp_moved_constant_71 + tmp_kernel_op_89*tmp_moved_constant_72 + tmp_kernel_op_90*tmp_moved_constant_73;
       const real_t tmp_moved_constant_93 = tmp_kernel_op_92*tmp_moved_constant_70 + tmp_kernel_op_93*tmp_moved_constant_71 + tmp_kernel_op_94*tmp_moved_constant_72 + tmp_kernel_op_95*tmp_moved_constant_73;
       const real_t tmp_moved_constant_94 = tmp_kernel_op_92*tmp_moved_constant_75 + tmp_kernel_op_93*tmp_moved_constant_76 + tmp_kernel_op_94*tmp_moved_constant_77 + tmp_kernel_op_95*tmp_moved_constant_78;
       {
          /* CellType.BLUE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge - 1; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge - 1; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < 1; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2));
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0*((real_t)(ctr_2 + 1));
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0*((real_t)(ctr_1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0*((real_t)(ctr_2 + 1));
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_3 = _data_srcVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_6 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_7 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_8 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_9 = _data_srcEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t elMatVec_0 = src_dof_0*(tmp_moved_constant_2*((tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))*(tmp_kernel_op_0 + tmp_kernel_op_1*0.5 + tmp_kernel_op_2*0.5 + tmp_kernel_op_7 - 0.5 + ((real_t)(tmp_kernel_op_5)))) + tmp_moved_constant_3*((tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))*(tmp_kernel_op_11 + tmp_kernel_op_12*0.5 + tmp_kernel_op_13*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_16)))) + tmp_moved_constant_4*((tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))*(tmp_kernel_op_18 + tmp_kernel_op_19*0.5 + tmp_kernel_op_20*0.5 + tmp_kernel_op_7 - 0.59999999999999998 + ((real_t)(tmp_kernel_op_23)))) + tmp_moved_constant_5*((tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30)))*(tmp_kernel_op_25 + tmp_kernel_op_26*0.5 + tmp_kernel_op_27*0.5 + tmp_kernel_op_7 - 0.30000000000000004 + ((real_t)(tmp_kernel_op_30))))) + src_dof_1*tmp_moved_constant_17 + src_dof_2*tmp_moved_constant_18 + src_dof_3*tmp_moved_constant_19 + src_dof_4*tmp_moved_constant_14 + src_dof_5*tmp_moved_constant_15 + src_dof_6*tmp_moved_constant_16 + src_dof_7*tmp_moved_constant_20 + src_dof_8*tmp_moved_constant_21 + src_dof_9*tmp_moved_constant_22;
             const real_t elMatVec_1 = src_dof_0*tmp_moved_constant_17 + src_dof_1*(tmp_moved_constant_23*((tmp_kernel_op_1 - 0.16666666666666666)*(tmp_kernel_op_1 - 0.16666666666666666)) + tmp_moved_constant_24*((tmp_kernel_op_12 - 0.10000000000000001)*(tmp_kernel_op_12 - 0.10000000000000001)) + tmp_moved_constant_25*((tmp_kernel_op_19 - 0.29999999999999999)*(tmp_kernel_op_19 - 0.29999999999999999)) + tmp_moved_constant_26*((tmp_kernel_op_26 - 0.10000000000000001)*(tmp_kernel_op_26 - 0.10000000000000001))) + src_dof_2*tmp_moved_constant_34 + src_dof_3*tmp_moved_constant_35 + src_dof_4*tmp_moved_constant_31 + src_dof_5*tmp_moved_constant_32 + src_dof_6*tmp_moved_constant_33 + src_dof_7*tmp_moved_constant_36 + src_dof_8*tmp_moved_constant_37 + src_dof_9*tmp_moved_constant_38;
             const real_t elMatVec_2 = src_dof_0*tmp_moved_constant_18 + src_dof_1*tmp_moved_constant_34 + src_dof_2*(tmp_moved_constant_23*((tmp_kernel_op_2 - 0.16666666666666666)*(tmp_kernel_op_2 - 0.16666666666666666)) + tmp_moved_constant_24*((tmp_kernel_op_13 - 0.29999999999999999)*(tmp_kernel_op_13 - 0.29999999999999999)) + tmp_moved_constant_25*((tmp_kernel_op_20 - 0.10000000000000001)*(tmp_kernel_op_20 - 0.10000000000000001)) + tmp_moved_constant_26*((tmp_kernel_op_27 - 0.10000000000000001)*(tmp_kernel_op_27 - 0.10000000000000001))) + src_dof_3*tmp_moved_constant_46 + src_dof_4*tmp_moved_constant_43 + src_dof_5*tmp_moved_constant_44 + src_dof_6*tmp_moved_constant_45 + src_dof_7*tmp_moved_constant_47 + src_dof_8*tmp_moved_constant_48 + src_dof_9*tmp_moved_constant_49;
             const real_t elMatVec_3 = src_dof_0*tmp_moved_constant_19 + src_dof_1*tmp_moved_constant_35 + src_dof_2*tmp_moved_constant_46 + src_dof_3*(tmp_moved_constant_23*((real_t)(tmp_kernel_op_124)) + tmp_moved_constant_24*((real_t)(tmp_kernel_op_124)) + tmp_moved_constant_25*((real_t)(tmp_kernel_op_124)) + tmp_moved_constant_26*((real_t)(tmp_kernel_op_124))) + src_dof_4*tmp_moved_constant_54 + src_dof_5*tmp_moved_constant_55 + src_dof_6*tmp_moved_constant_56 + src_dof_7*tmp_moved_constant_57 + src_dof_8*tmp_moved_constant_58 + src_dof_9*tmp_moved_constant_59;
             const real_t elMatVec_4 = src_dof_0*tmp_moved_constant_14 + src_dof_1*tmp_moved_constant_31 + src_dof_2*tmp_moved_constant_43 + src_dof_3*tmp_moved_constant_54 + src_dof_4*(tmp_kernel_op_13*tmp_moved_constant_61 + tmp_kernel_op_2*tmp_moved_constant_60 + tmp_kernel_op_20*tmp_moved_constant_62 + tmp_kernel_op_27*tmp_moved_constant_63) + src_dof_5*tmp_moved_constant_64 + src_dof_6*tmp_moved_constant_69 + src_dof_7*tmp_moved_constant_74 + src_dof_8*tmp_moved_constant_79 + src_dof_9*tmp_moved_constant_84;
             const real_t elMatVec_5 = src_dof_0*tmp_moved_constant_15 + src_dof_1*tmp_moved_constant_32 + src_dof_2*tmp_moved_constant_44 + src_dof_3*tmp_moved_constant_55 + src_dof_4*tmp_moved_constant_64 + src_dof_5*(tmp_kernel_op_1*tmp_moved_constant_60 + tmp_kernel_op_12*tmp_moved_constant_61 + tmp_kernel_op_19*tmp_moved_constant_62 + tmp_kernel_op_26*tmp_moved_constant_63) + src_dof_6*tmp_moved_constant_85 + src_dof_7*tmp_moved_constant_86 + src_dof_8*tmp_moved_constant_87 + src_dof_9*tmp_moved_constant_88;
             const real_t elMatVec_6 = src_dof_0*tmp_moved_constant_16 + src_dof_1*tmp_moved_constant_33 + src_dof_2*tmp_moved_constant_45 + src_dof_3*tmp_moved_constant_56 + src_dof_4*tmp_moved_constant_69 + src_dof_5*tmp_moved_constant_85 + src_dof_6*(tmp_kernel_op_1*tmp_moved_constant_65 + tmp_kernel_op_12*tmp_moved_constant_66 + tmp_kernel_op_19*tmp_moved_constant_67 + tmp_kernel_op_26*tmp_moved_constant_68) + src_dof_7*tmp_moved_constant_89 + src_dof_8*tmp_moved_constant_90 + src_dof_9*tmp_moved_constant_91;
             const real_t elMatVec_7 = src_dof_0*tmp_moved_constant_20 + src_dof_1*tmp_moved_constant_36 + src_dof_2*tmp_moved_constant_47 + src_dof_3*tmp_moved_constant_57 + src_dof_4*tmp_moved_constant_74 + src_dof_5*tmp_moved_constant_86 + src_dof_6*tmp_moved_constant_89 + src_dof_7*(tmp_moved_constant_2*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_5)*(-tmp_kernel_op_167 - tmp_kernel_op_5)))) + tmp_moved_constant_3*((real_t)(((-tmp_kernel_op_16 - tmp_kernel_op_167)*(-tmp_kernel_op_16 - tmp_kernel_op_167)))) + tmp_moved_constant_4*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_23)*(-tmp_kernel_op_167 - tmp_kernel_op_23)))) + tmp_moved_constant_5*((real_t)(((-tmp_kernel_op_167 - tmp_kernel_op_30)*(-tmp_kernel_op_167 - tmp_kernel_op_30))))) + src_dof_8*tmp_moved_constant_92 + src_dof_9*tmp_moved_constant_93;
             const real_t elMatVec_8 = src_dof_0*tmp_moved_constant_21 + src_dof_1*tmp_moved_constant_37 + src_dof_2*tmp_moved_constant_48 + src_dof_3*tmp_moved_constant_58 + src_dof_4*tmp_moved_constant_79 + src_dof_5*tmp_moved_constant_87 + src_dof_6*tmp_moved_constant_90 + src_dof_7*tmp_moved_constant_92 + src_dof_8*(tmp_moved_constant_2*((-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_2 + ((real_t)(-tmp_kernel_op_4)) + 0.33333333333333331)) + tmp_moved_constant_3*((-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)*(-tmp_kernel_op_11 - tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_15)) + 0.59999999999999998)) + tmp_moved_constant_4*((-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)*(-tmp_kernel_op_18 - tmp_kernel_op_20 + ((real_t)(-tmp_kernel_op_22)) + 0.20000000000000001)) + tmp_moved_constant_5*((-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_27 + ((real_t)(-tmp_kernel_op_29)) + 0.20000000000000001))) + src_dof_9*tmp_moved_constant_94;
             const real_t elMatVec_9 = src_dof_0*tmp_moved_constant_22 + src_dof_1*tmp_moved_constant_38 + src_dof_2*tmp_moved_constant_49 + src_dof_3*tmp_moved_constant_59 + src_dof_4*tmp_moved_constant_84 + src_dof_5*tmp_moved_constant_88 + src_dof_6*tmp_moved_constant_91 + src_dof_7*tmp_moved_constant_93 + src_dof_8*tmp_moved_constant_94 + src_dof_9*(tmp_moved_constant_2*((-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)*(-tmp_kernel_op_0 - tmp_kernel_op_1 + ((real_t)(-tmp_kernel_op_3)) + 0.33333333333333331)) + tmp_moved_constant_3*((-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)*(-tmp_kernel_op_11 - tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_14)) + 0.20000000000000001)) + tmp_moved_constant_4*((-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)*(-tmp_kernel_op_18 - tmp_kernel_op_19 + ((real_t)(-tmp_kernel_op_21)) + 0.59999999999999998)) + tmp_moved_constant_5*((-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)*(-tmp_kernel_op_25 - tmp_kernel_op_26 + ((real_t)(-tmp_kernel_op_28)) + 0.20000000000000001)));
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_3*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_4*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_5*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_6*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_7*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dstEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_8*operatorScaling + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_9*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
