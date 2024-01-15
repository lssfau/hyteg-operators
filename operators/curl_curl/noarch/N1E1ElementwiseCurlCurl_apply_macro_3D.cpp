/*
* Copyright (c) 2017-2023 Nils Kohl, Daniel Bauer, Fabian Böhm.
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



























#include "../N1E1ElementwiseCurlCurl.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void N1E1ElementwiseCurlCurl::apply_macro_3D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_WHITE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2;
       const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const real_t jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const real_t jac_affine_0_2 = -p_affine_0_0 + p_affine_3_0;
       const real_t jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const real_t jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const real_t jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
       const real_t jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
       const real_t jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
       const real_t jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
       const real_t abs_det_jac_affine = abs(jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t tmp_0 = jac_affine_0_0*4.0;
       const real_t tmp_1 = jac_affine_1_0*4.0;
       const real_t tmp_2 = jac_affine_2_0*4.0;
       const real_t tmp_3 = -jac_affine_0_1*tmp_0 - jac_affine_1_1*tmp_1 - jac_affine_2_1*tmp_2;
       const real_t tmp_4 = 1.0 / (abs_det_jac_affine)*0.16666666666666666;
       const real_t tmp_6 = jac_affine_0_2*tmp_0 + jac_affine_1_2*tmp_1 + jac_affine_2_2*tmp_2;
       const real_t tmp_9 = jac_affine_0_0*2.0;
       const real_t tmp_10 = jac_affine_0_1*2.0;
       const real_t tmp_11 = tmp_10 - tmp_9;
       const real_t tmp_12 = jac_affine_1_0*2.0;
       const real_t tmp_13 = jac_affine_1_1*2.0;
       const real_t tmp_14 = -tmp_12 + tmp_13;
       const real_t tmp_15 = jac_affine_2_0*2.0;
       const real_t tmp_16 = jac_affine_2_1*2.0;
       const real_t tmp_17 = -tmp_15 + tmp_16;
       const real_t tmp_18 = tmp_11*tmp_9 + tmp_12*tmp_14 + tmp_15*tmp_17;
       const real_t tmp_20 = jac_affine_0_2*2.0;
       const real_t tmp_21 = -tmp_20;
       const real_t tmp_22 = tmp_21 + tmp_9;
       const real_t tmp_23 = jac_affine_1_2*2.0;
       const real_t tmp_24 = -tmp_23;
       const real_t tmp_25 = tmp_12 + tmp_24;
       const real_t tmp_26 = jac_affine_2_2*2.0;
       const real_t tmp_27 = -tmp_26;
       const real_t tmp_28 = tmp_15 + tmp_27;
       const real_t tmp_29 = tmp_12*tmp_25 + tmp_15*tmp_28 + tmp_22*tmp_9;
       const real_t tmp_31 = -tmp_10 - tmp_21;
       const real_t tmp_32 = -tmp_13 - tmp_24;
       const real_t tmp_33 = -tmp_16 - tmp_27;
       const real_t tmp_34 = tmp_12*tmp_32 + tmp_15*tmp_33 + tmp_31*tmp_9;
       const real_t tmp_36 = jac_affine_0_1*jac_affine_0_2*-4.0 + jac_affine_1_1*jac_affine_1_2*-4.0 + jac_affine_2_1*jac_affine_2_2*-4.0;
       const real_t tmp_37 = -tmp_10*tmp_11 - tmp_13*tmp_14 - tmp_16*tmp_17;
       const real_t tmp_38 = -tmp_10*tmp_22 - tmp_13*tmp_25 - tmp_16*tmp_28;
       const real_t tmp_39 = -tmp_10*tmp_31 - tmp_13*tmp_32 - tmp_16*tmp_33;
       const real_t tmp_40 = tmp_11*tmp_20 + tmp_14*tmp_23 + tmp_17*tmp_26;
       const real_t tmp_41 = tmp_20*tmp_22 + tmp_23*tmp_25 + tmp_26*tmp_28;
       const real_t tmp_42 = tmp_20*tmp_31 + tmp_23*tmp_32 + tmp_26*tmp_33;
       const real_t tmp_43 = tmp_11*tmp_22 + tmp_14*tmp_25 + tmp_17*tmp_28;
       const real_t tmp_44 = tmp_11*tmp_31 + tmp_14*tmp_32 + tmp_17*tmp_33;
       const real_t tmp_45 = tmp_22*tmp_31 + tmp_25*tmp_32 + tmp_28*tmp_33;
       const real_t tmp_WHITE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_WHITE_DOWN_1 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_WHITE_DOWN_2 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_WHITE_DOWN_3 = tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_2;
       const real_t tmp_WHITE_DOWN_4 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_WHITE_DOWN_5 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_WHITE_DOWN_6 = tmp_WHITE_DOWN_4 + tmp_WHITE_DOWN_5;
       const real_t tmp_WHITE_DOWN_7 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_WHITE_DOWN_8 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_WHITE_DOWN_9 = tmp_WHITE_DOWN_7 + tmp_WHITE_DOWN_8;
       const real_t tmp_WHITE_DOWN_10 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_WHITE_DOWN_11 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_WHITE_DOWN_12 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t Dummy_22 = tmp_WHITE_DOWN_3;
       const real_t Dummy_23 = tmp_WHITE_DOWN_6;
       const real_t Dummy_24 = tmp_WHITE_DOWN_9;
       const real_t Dummy_25 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_2;
       const real_t Dummy_26 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_5;
       const real_t Dummy_27 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_8;
       const real_t Dummy_28 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_10;
       const real_t Dummy_29 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_4;
       const real_t Dummy_30 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_7;
       const real_t Dummy_31 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_3;
       const real_t Dummy_32 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_6;
       const real_t Dummy_33 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_9;
       const real_t Dummy_34 = -Dummy_22 + Dummy_25;
       const real_t Dummy_35 = -Dummy_22 + Dummy_28;
       const real_t Dummy_36 = -Dummy_22 + Dummy_31;
       const real_t Dummy_37 = -Dummy_23 + Dummy_26;
       const real_t Dummy_38 = -Dummy_23 + Dummy_29;
       const real_t Dummy_39 = -Dummy_23 + Dummy_32;
       const real_t Dummy_40 = -Dummy_24 + Dummy_27;
       const real_t Dummy_41 = -Dummy_24 + Dummy_30;
       const real_t Dummy_42 = -Dummy_24 + Dummy_33;
       const real_t Dummy_43 = abs(Dummy_34*Dummy_38*Dummy_42 - Dummy_34*Dummy_39*Dummy_41 - Dummy_35*Dummy_37*Dummy_42 + Dummy_35*Dummy_39*Dummy_40 + Dummy_36*Dummy_37*Dummy_41 - Dummy_36*Dummy_38*Dummy_40);
       const real_t Dummy_44 = Dummy_34*4.0;
       const real_t Dummy_45 = Dummy_37*4.0;
       const real_t Dummy_46 = Dummy_40*4.0;
       const real_t Dummy_47 = -Dummy_35*Dummy_44 - Dummy_38*Dummy_45 - Dummy_41*Dummy_46;
       const real_t Dummy_48 = 1.0 / (Dummy_43)*0.16666666666666666;
       const real_t Dummy_49 = Dummy_36*Dummy_44 + Dummy_39*Dummy_45 + Dummy_42*Dummy_46;
       const real_t Dummy_50 = Dummy_34*2.0;
       const real_t Dummy_51 = Dummy_35*2.0;
       const real_t Dummy_52 = -Dummy_50 + Dummy_51;
       const real_t Dummy_53 = Dummy_37*2.0;
       const real_t Dummy_54 = Dummy_38*2.0;
       const real_t Dummy_55 = -Dummy_53 + Dummy_54;
       const real_t Dummy_56 = Dummy_40*2.0;
       const real_t Dummy_57 = Dummy_41*2.0;
       const real_t Dummy_58 = -Dummy_56 + Dummy_57;
       const real_t Dummy_59 = Dummy_50*Dummy_52 + Dummy_53*Dummy_55 + Dummy_56*Dummy_58;
       const real_t Dummy_60 = Dummy_36*2.0;
       const real_t Dummy_61 = -Dummy_60;
       const real_t Dummy_62 = Dummy_50 + Dummy_61;
       const real_t Dummy_63 = Dummy_39*2.0;
       const real_t Dummy_64 = -Dummy_63;
       const real_t Dummy_65 = Dummy_53 + Dummy_64;
       const real_t Dummy_66 = Dummy_42*2.0;
       const real_t Dummy_67 = -Dummy_66;
       const real_t Dummy_68 = Dummy_56 + Dummy_67;
       const real_t Dummy_69 = Dummy_50*Dummy_62 + Dummy_53*Dummy_65 + Dummy_56*Dummy_68;
       const real_t Dummy_70 = -Dummy_51 - Dummy_61;
       const real_t Dummy_71 = -Dummy_54 - Dummy_64;
       const real_t Dummy_72 = -Dummy_57 - Dummy_67;
       const real_t Dummy_73 = Dummy_50*Dummy_70 + Dummy_53*Dummy_71 + Dummy_56*Dummy_72;
       const real_t Dummy_74 = Dummy_35*Dummy_36*-4.0 + Dummy_38*Dummy_39*-4.0 + Dummy_41*Dummy_42*-4.0;
       const real_t Dummy_75 = -Dummy_51*Dummy_52 - Dummy_54*Dummy_55 - Dummy_57*Dummy_58;
       const real_t Dummy_76 = -Dummy_51*Dummy_62 - Dummy_54*Dummy_65 - Dummy_57*Dummy_68;
       const real_t Dummy_77 = -Dummy_51*Dummy_70 - Dummy_54*Dummy_71 - Dummy_57*Dummy_72;
       const real_t Dummy_78 = Dummy_52*Dummy_60 + Dummy_55*Dummy_63 + Dummy_58*Dummy_66;
       const real_t Dummy_79 = Dummy_60*Dummy_62 + Dummy_63*Dummy_65 + Dummy_66*Dummy_68;
       const real_t Dummy_80 = Dummy_60*Dummy_70 + Dummy_63*Dummy_71 + Dummy_66*Dummy_72;
       const real_t Dummy_81 = Dummy_52*Dummy_62 + Dummy_55*Dummy_65 + Dummy_58*Dummy_68;
       const real_t Dummy_82 = Dummy_52*Dummy_70 + Dummy_55*Dummy_71 + Dummy_58*Dummy_72;
       const real_t Dummy_83 = Dummy_62*Dummy_70 + Dummy_65*Dummy_71 + Dummy_68*Dummy_72;
       const real_t tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t Dummy_84 = tmp_BLUE_UP_1;
       const real_t Dummy_85 = tmp_BLUE_UP_2;
       const real_t Dummy_86 = tmp_BLUE_UP_3;
       const real_t Dummy_87 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
       const real_t Dummy_88 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
       const real_t Dummy_89 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
       const real_t Dummy_90 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
       const real_t Dummy_91 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
       const real_t Dummy_92 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
       const real_t Dummy_93 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
       const real_t Dummy_94 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
       const real_t Dummy_95 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
       const real_t Dummy_96 = -Dummy_84 + Dummy_87;
       const real_t Dummy_97 = -Dummy_84 + Dummy_90;
       const real_t Dummy_98 = -Dummy_84 + Dummy_93;
       const real_t Dummy_99 = -Dummy_85 + Dummy_88;
       const real_t Dummy_100 = -Dummy_85 + Dummy_91;
       const real_t Dummy_101 = -Dummy_85 + Dummy_94;
       const real_t Dummy_102 = -Dummy_86 + Dummy_89;
       const real_t Dummy_103 = -Dummy_86 + Dummy_92;
       const real_t Dummy_104 = -Dummy_86 + Dummy_95;
       const real_t Dummy_105 = abs(Dummy_100*Dummy_102*Dummy_98 - Dummy_100*Dummy_104*Dummy_96 - Dummy_101*Dummy_102*Dummy_97 + Dummy_101*Dummy_103*Dummy_96 - Dummy_103*Dummy_98*Dummy_99 + Dummy_104*Dummy_97*Dummy_99);
       const real_t Dummy_106 = Dummy_96*4.0;
       const real_t Dummy_107 = Dummy_99*4.0;
       const real_t Dummy_108 = Dummy_102*4.0;
       const real_t Dummy_109 = -Dummy_100*Dummy_107 - Dummy_103*Dummy_108 - Dummy_106*Dummy_97;
       const real_t Dummy_110 = 1.0 / (Dummy_105)*0.16666666666666666;
       const real_t Dummy_111 = Dummy_101*Dummy_107 + Dummy_104*Dummy_108 + Dummy_106*Dummy_98;
       const real_t Dummy_112 = Dummy_96*2.0;
       const real_t Dummy_113 = Dummy_97*2.0;
       const real_t Dummy_114 = -Dummy_112 + Dummy_113;
       const real_t Dummy_115 = Dummy_99*2.0;
       const real_t Dummy_116 = Dummy_100*2.0;
       const real_t Dummy_117 = -Dummy_115 + Dummy_116;
       const real_t Dummy_118 = Dummy_102*2.0;
       const real_t Dummy_119 = Dummy_103*2.0;
       const real_t Dummy_120 = -Dummy_118 + Dummy_119;
       const real_t Dummy_121 = Dummy_112*Dummy_114 + Dummy_115*Dummy_117 + Dummy_118*Dummy_120;
       const real_t Dummy_122 = Dummy_98*2.0;
       const real_t Dummy_123 = -Dummy_122;
       const real_t Dummy_124 = Dummy_112 + Dummy_123;
       const real_t Dummy_125 = Dummy_101*2.0;
       const real_t Dummy_126 = -Dummy_125;
       const real_t Dummy_127 = Dummy_115 + Dummy_126;
       const real_t Dummy_128 = Dummy_104*2.0;
       const real_t Dummy_129 = -Dummy_128;
       const real_t Dummy_130 = Dummy_118 + Dummy_129;
       const real_t Dummy_131 = Dummy_112*Dummy_124 + Dummy_115*Dummy_127 + Dummy_118*Dummy_130;
       const real_t Dummy_132 = -Dummy_113 - Dummy_123;
       const real_t Dummy_133 = -Dummy_116 - Dummy_126;
       const real_t Dummy_134 = -Dummy_119 - Dummy_129;
       const real_t Dummy_135 = Dummy_112*Dummy_132 + Dummy_115*Dummy_133 + Dummy_118*Dummy_134;
       const real_t Dummy_136 = Dummy_100*Dummy_101*-4.0 + Dummy_103*Dummy_104*-4.0 + Dummy_97*Dummy_98*-4.0;
       const real_t Dummy_137 = -Dummy_113*Dummy_114 - Dummy_116*Dummy_117 - Dummy_119*Dummy_120;
       const real_t Dummy_138 = -Dummy_113*Dummy_124 - Dummy_116*Dummy_127 - Dummy_119*Dummy_130;
       const real_t Dummy_139 = -Dummy_113*Dummy_132 - Dummy_116*Dummy_133 - Dummy_119*Dummy_134;
       const real_t Dummy_140 = Dummy_114*Dummy_122 + Dummy_117*Dummy_125 + Dummy_120*Dummy_128;
       const real_t Dummy_141 = Dummy_122*Dummy_124 + Dummy_125*Dummy_127 + Dummy_128*Dummy_130;
       const real_t Dummy_142 = Dummy_122*Dummy_132 + Dummy_125*Dummy_133 + Dummy_128*Dummy_134;
       const real_t Dummy_143 = Dummy_114*Dummy_124 + Dummy_117*Dummy_127 + Dummy_120*Dummy_130;
       const real_t Dummy_144 = Dummy_114*Dummy_132 + Dummy_117*Dummy_133 + Dummy_120*Dummy_134;
       const real_t Dummy_145 = Dummy_124*Dummy_132 + Dummy_127*Dummy_133 + Dummy_130*Dummy_134;
       const real_t tmp_BLUE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_BLUE_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_BLUE_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_BLUE_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_BLUE_DOWN_4 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_BLUE_DOWN_5 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_4;
       const real_t tmp_BLUE_DOWN_6 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_BLUE_DOWN_7 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_6;
       const real_t tmp_BLUE_DOWN_8 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t tmp_BLUE_DOWN_9 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_8;
       const real_t Dummy_146 = tmp_BLUE_DOWN_1;
       const real_t Dummy_147 = tmp_BLUE_DOWN_2;
       const real_t Dummy_148 = tmp_BLUE_DOWN_3;
       const real_t Dummy_149 = tmp_BLUE_DOWN_5;
       const real_t Dummy_150 = tmp_BLUE_DOWN_7;
       const real_t Dummy_151 = tmp_BLUE_DOWN_9;
       const real_t Dummy_152 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
       const real_t Dummy_153 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
       const real_t Dummy_154 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
       const real_t Dummy_155 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
       const real_t Dummy_156 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
       const real_t Dummy_157 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
       const real_t Dummy_158 = -Dummy_146 + Dummy_149;
       const real_t Dummy_159 = -Dummy_146 + Dummy_152;
       const real_t Dummy_160 = -Dummy_146 + Dummy_155;
       const real_t Dummy_161 = -Dummy_147 + Dummy_150;
       const real_t Dummy_162 = -Dummy_147 + Dummy_153;
       const real_t Dummy_163 = -Dummy_147 + Dummy_156;
       const real_t Dummy_164 = -Dummy_148 + Dummy_151;
       const real_t Dummy_165 = -Dummy_148 + Dummy_154;
       const real_t Dummy_166 = -Dummy_148 + Dummy_157;
       const real_t Dummy_167 = abs(Dummy_158*Dummy_162*Dummy_166 - Dummy_158*Dummy_163*Dummy_165 - Dummy_159*Dummy_161*Dummy_166 + Dummy_159*Dummy_163*Dummy_164 + Dummy_160*Dummy_161*Dummy_165 - Dummy_160*Dummy_162*Dummy_164);
       const real_t Dummy_168 = Dummy_158*4.0;
       const real_t Dummy_169 = Dummy_161*4.0;
       const real_t Dummy_170 = Dummy_164*4.0;
       const real_t Dummy_171 = -Dummy_159*Dummy_168 - Dummy_162*Dummy_169 - Dummy_165*Dummy_170;
       const real_t Dummy_172 = 1.0 / (Dummy_167)*0.16666666666666666;
       const real_t Dummy_173 = Dummy_160*Dummy_168 + Dummy_163*Dummy_169 + Dummy_166*Dummy_170;
       const real_t Dummy_174 = Dummy_158*2.0;
       const real_t Dummy_175 = Dummy_159*2.0;
       const real_t Dummy_176 = -Dummy_174 + Dummy_175;
       const real_t Dummy_177 = Dummy_161*2.0;
       const real_t Dummy_178 = Dummy_162*2.0;
       const real_t Dummy_179 = -Dummy_177 + Dummy_178;
       const real_t Dummy_180 = Dummy_164*2.0;
       const real_t Dummy_181 = Dummy_165*2.0;
       const real_t Dummy_182 = -Dummy_180 + Dummy_181;
       const real_t Dummy_183 = Dummy_174*Dummy_176 + Dummy_177*Dummy_179 + Dummy_180*Dummy_182;
       const real_t Dummy_184 = Dummy_160*2.0;
       const real_t Dummy_185 = -Dummy_184;
       const real_t Dummy_186 = Dummy_174 + Dummy_185;
       const real_t Dummy_187 = Dummy_163*2.0;
       const real_t Dummy_188 = -Dummy_187;
       const real_t Dummy_189 = Dummy_177 + Dummy_188;
       const real_t Dummy_190 = Dummy_166*2.0;
       const real_t Dummy_191 = -Dummy_190;
       const real_t Dummy_192 = Dummy_180 + Dummy_191;
       const real_t Dummy_193 = Dummy_174*Dummy_186 + Dummy_177*Dummy_189 + Dummy_180*Dummy_192;
       const real_t Dummy_194 = -Dummy_175 - Dummy_185;
       const real_t Dummy_195 = -Dummy_178 - Dummy_188;
       const real_t Dummy_196 = -Dummy_181 - Dummy_191;
       const real_t Dummy_197 = Dummy_174*Dummy_194 + Dummy_177*Dummy_195 + Dummy_180*Dummy_196;
       const real_t Dummy_198 = Dummy_159*Dummy_160*-4.0 + Dummy_162*Dummy_163*-4.0 + Dummy_165*Dummy_166*-4.0;
       const real_t Dummy_199 = -Dummy_175*Dummy_176 - Dummy_178*Dummy_179 - Dummy_181*Dummy_182;
       const real_t Dummy_200 = -Dummy_175*Dummy_186 - Dummy_178*Dummy_189 - Dummy_181*Dummy_192;
       const real_t Dummy_201 = -Dummy_175*Dummy_194 - Dummy_178*Dummy_195 - Dummy_181*Dummy_196;
       const real_t Dummy_202 = Dummy_176*Dummy_184 + Dummy_179*Dummy_187 + Dummy_182*Dummy_190;
       const real_t Dummy_203 = Dummy_184*Dummy_186 + Dummy_187*Dummy_189 + Dummy_190*Dummy_192;
       const real_t Dummy_204 = Dummy_184*Dummy_194 + Dummy_187*Dummy_195 + Dummy_190*Dummy_196;
       const real_t Dummy_205 = Dummy_176*Dummy_186 + Dummy_179*Dummy_189 + Dummy_182*Dummy_192;
       const real_t Dummy_206 = Dummy_176*Dummy_194 + Dummy_179*Dummy_195 + Dummy_182*Dummy_196;
       const real_t Dummy_207 = Dummy_186*Dummy_194 + Dummy_189*Dummy_195 + Dummy_192*Dummy_196;
       const real_t tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t Dummy_208 = tmp_GREEN_UP_1;
       const real_t Dummy_209 = tmp_GREEN_UP_2;
       const real_t Dummy_210 = tmp_GREEN_UP_3;
       const real_t Dummy_211 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t Dummy_212 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t Dummy_213 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t Dummy_214 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
       const real_t Dummy_215 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
       const real_t Dummy_216 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
       const real_t Dummy_217 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
       const real_t Dummy_218 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
       const real_t Dummy_219 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
       const real_t Dummy_220 = -Dummy_208 + Dummy_211;
       const real_t Dummy_221 = -Dummy_208 + Dummy_214;
       const real_t Dummy_222 = -Dummy_208 + Dummy_217;
       const real_t Dummy_223 = -Dummy_209 + Dummy_212;
       const real_t Dummy_224 = -Dummy_209 + Dummy_215;
       const real_t Dummy_225 = -Dummy_209 + Dummy_218;
       const real_t Dummy_226 = -Dummy_210 + Dummy_213;
       const real_t Dummy_227 = -Dummy_210 + Dummy_216;
       const real_t Dummy_228 = -Dummy_210 + Dummy_219;
       const real_t Dummy_229 = abs(Dummy_220*Dummy_224*Dummy_228 - Dummy_220*Dummy_225*Dummy_227 - Dummy_221*Dummy_223*Dummy_228 + Dummy_221*Dummy_225*Dummy_226 + Dummy_222*Dummy_223*Dummy_227 - Dummy_222*Dummy_224*Dummy_226);
       const real_t Dummy_230 = Dummy_220*4.0;
       const real_t Dummy_231 = Dummy_223*4.0;
       const real_t Dummy_232 = Dummy_226*4.0;
       const real_t Dummy_233 = -Dummy_221*Dummy_230 - Dummy_224*Dummy_231 - Dummy_227*Dummy_232;
       const real_t Dummy_234 = 1.0 / (Dummy_229)*0.16666666666666666;
       const real_t Dummy_235 = Dummy_222*Dummy_230 + Dummy_225*Dummy_231 + Dummy_228*Dummy_232;
       const real_t Dummy_236 = Dummy_220*2.0;
       const real_t Dummy_237 = Dummy_221*2.0;
       const real_t Dummy_238 = -Dummy_236 + Dummy_237;
       const real_t Dummy_239 = Dummy_223*2.0;
       const real_t Dummy_240 = Dummy_224*2.0;
       const real_t Dummy_241 = -Dummy_239 + Dummy_240;
       const real_t Dummy_242 = Dummy_226*2.0;
       const real_t Dummy_243 = Dummy_227*2.0;
       const real_t Dummy_244 = -Dummy_242 + Dummy_243;
       const real_t Dummy_245 = Dummy_236*Dummy_238 + Dummy_239*Dummy_241 + Dummy_242*Dummy_244;
       const real_t Dummy_246 = Dummy_222*2.0;
       const real_t Dummy_247 = -Dummy_246;
       const real_t Dummy_248 = Dummy_236 + Dummy_247;
       const real_t Dummy_249 = Dummy_225*2.0;
       const real_t Dummy_250 = -Dummy_249;
       const real_t Dummy_251 = Dummy_239 + Dummy_250;
       const real_t Dummy_252 = Dummy_228*2.0;
       const real_t Dummy_253 = -Dummy_252;
       const real_t Dummy_254 = Dummy_242 + Dummy_253;
       const real_t Dummy_255 = Dummy_236*Dummy_248 + Dummy_239*Dummy_251 + Dummy_242*Dummy_254;
       const real_t Dummy_256 = -Dummy_237 - Dummy_247;
       const real_t Dummy_257 = -Dummy_240 - Dummy_250;
       const real_t Dummy_258 = -Dummy_243 - Dummy_253;
       const real_t Dummy_259 = Dummy_236*Dummy_256 + Dummy_239*Dummy_257 + Dummy_242*Dummy_258;
       const real_t Dummy_260 = Dummy_221*Dummy_222*-4.0 + Dummy_224*Dummy_225*-4.0 + Dummy_227*Dummy_228*-4.0;
       const real_t Dummy_261 = -Dummy_237*Dummy_238 - Dummy_240*Dummy_241 - Dummy_243*Dummy_244;
       const real_t Dummy_262 = -Dummy_237*Dummy_248 - Dummy_240*Dummy_251 - Dummy_243*Dummy_254;
       const real_t Dummy_263 = -Dummy_237*Dummy_256 - Dummy_240*Dummy_257 - Dummy_243*Dummy_258;
       const real_t Dummy_264 = Dummy_238*Dummy_246 + Dummy_241*Dummy_249 + Dummy_244*Dummy_252;
       const real_t Dummy_265 = Dummy_246*Dummy_248 + Dummy_249*Dummy_251 + Dummy_252*Dummy_254;
       const real_t Dummy_266 = Dummy_246*Dummy_256 + Dummy_249*Dummy_257 + Dummy_252*Dummy_258;
       const real_t Dummy_267 = Dummy_238*Dummy_248 + Dummy_241*Dummy_251 + Dummy_244*Dummy_254;
       const real_t Dummy_268 = Dummy_238*Dummy_256 + Dummy_241*Dummy_257 + Dummy_244*Dummy_258;
       const real_t Dummy_269 = Dummy_248*Dummy_256 + Dummy_251*Dummy_257 + Dummy_254*Dummy_258;
       const real_t tmp_GREEN_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_GREEN_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_GREEN_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_GREEN_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_GREEN_DOWN_4 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_GREEN_DOWN_5 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_GREEN_DOWN_6 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_GREEN_DOWN_7 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_GREEN_DOWN_8 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_GREEN_DOWN_9 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t Dummy_270 = tmp_GREEN_DOWN_1;
       const real_t Dummy_271 = tmp_GREEN_DOWN_2;
       const real_t Dummy_272 = tmp_GREEN_DOWN_3;
       const real_t Dummy_273 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
       const real_t Dummy_274 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
       const real_t Dummy_275 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
       const real_t Dummy_276 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
       const real_t Dummy_277 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
       const real_t Dummy_278 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
       const real_t Dummy_279 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
       const real_t Dummy_280 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
       const real_t Dummy_281 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
       const real_t Dummy_282 = -Dummy_270 + Dummy_273;
       const real_t Dummy_283 = -Dummy_270 + Dummy_276;
       const real_t Dummy_284 = -Dummy_270 + Dummy_279;
       const real_t Dummy_285 = -Dummy_271 + Dummy_274;
       const real_t Dummy_286 = -Dummy_271 + Dummy_277;
       const real_t Dummy_287 = -Dummy_271 + Dummy_280;
       const real_t Dummy_288 = -Dummy_272 + Dummy_275;
       const real_t Dummy_289 = -Dummy_272 + Dummy_278;
       const real_t Dummy_290 = -Dummy_272 + Dummy_281;
       const real_t Dummy_291 = abs(Dummy_282*Dummy_286*Dummy_290 - Dummy_282*Dummy_287*Dummy_289 - Dummy_283*Dummy_285*Dummy_290 + Dummy_283*Dummy_287*Dummy_288 + Dummy_284*Dummy_285*Dummy_289 - Dummy_284*Dummy_286*Dummy_288);
       const real_t Dummy_292 = Dummy_282*4.0;
       const real_t Dummy_293 = Dummy_285*4.0;
       const real_t Dummy_294 = Dummy_288*4.0;
       const real_t Dummy_295 = -Dummy_283*Dummy_292 - Dummy_286*Dummy_293 - Dummy_289*Dummy_294;
       const real_t Dummy_296 = 1.0 / (Dummy_291)*0.16666666666666666;
       const real_t Dummy_297 = Dummy_284*Dummy_292 + Dummy_287*Dummy_293 + Dummy_290*Dummy_294;
       const real_t Dummy_298 = Dummy_282*2.0;
       const real_t Dummy_299 = Dummy_283*2.0;
       const real_t Dummy_300 = -Dummy_298 + Dummy_299;
       const real_t Dummy_301 = Dummy_285*2.0;
       const real_t Dummy_302 = Dummy_286*2.0;
       const real_t Dummy_303 = -Dummy_301 + Dummy_302;
       const real_t Dummy_304 = Dummy_288*2.0;
       const real_t Dummy_305 = Dummy_289*2.0;
       const real_t Dummy_306 = -Dummy_304 + Dummy_305;
       const real_t Dummy_307 = Dummy_298*Dummy_300 + Dummy_301*Dummy_303 + Dummy_304*Dummy_306;
       const real_t Dummy_308 = Dummy_284*2.0;
       const real_t Dummy_309 = -Dummy_308;
       const real_t Dummy_310 = Dummy_298 + Dummy_309;
       const real_t Dummy_311 = Dummy_287*2.0;
       const real_t Dummy_312 = -Dummy_311;
       const real_t Dummy_313 = Dummy_301 + Dummy_312;
       const real_t Dummy_314 = Dummy_290*2.0;
       const real_t Dummy_315 = -Dummy_314;
       const real_t Dummy_316 = Dummy_304 + Dummy_315;
       const real_t Dummy_317 = Dummy_298*Dummy_310 + Dummy_301*Dummy_313 + Dummy_304*Dummy_316;
       const real_t Dummy_318 = -Dummy_299 - Dummy_309;
       const real_t Dummy_319 = -Dummy_302 - Dummy_312;
       const real_t Dummy_320 = -Dummy_305 - Dummy_315;
       const real_t Dummy_321 = Dummy_298*Dummy_318 + Dummy_301*Dummy_319 + Dummy_304*Dummy_320;
       const real_t Dummy_322 = Dummy_283*Dummy_284*-4.0 + Dummy_286*Dummy_287*-4.0 + Dummy_289*Dummy_290*-4.0;
       const real_t Dummy_323 = -Dummy_299*Dummy_300 - Dummy_302*Dummy_303 - Dummy_305*Dummy_306;
       const real_t Dummy_324 = -Dummy_299*Dummy_310 - Dummy_302*Dummy_313 - Dummy_305*Dummy_316;
       const real_t Dummy_325 = -Dummy_299*Dummy_318 - Dummy_302*Dummy_319 - Dummy_305*Dummy_320;
       const real_t Dummy_326 = Dummy_300*Dummy_308 + Dummy_303*Dummy_311 + Dummy_306*Dummy_314;
       const real_t Dummy_327 = Dummy_308*Dummy_310 + Dummy_311*Dummy_313 + Dummy_314*Dummy_316;
       const real_t Dummy_328 = Dummy_308*Dummy_318 + Dummy_311*Dummy_319 + Dummy_314*Dummy_320;
       const real_t Dummy_329 = Dummy_300*Dummy_310 + Dummy_303*Dummy_313 + Dummy_306*Dummy_316;
       const real_t Dummy_330 = Dummy_300*Dummy_318 + Dummy_303*Dummy_319 + Dummy_306*Dummy_320;
       const real_t Dummy_331 = Dummy_310*Dummy_318 + Dummy_313*Dummy_319 + Dummy_316*Dummy_320;
       {
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_5 = src_dof_1*tmp_4;
             const real_t tmp_7 = src_dof_2*tmp_4;
             const real_t tmp_8 = src_dof_0*tmp_4;
             const real_t tmp_19 = src_dof_3*tmp_4;
             const real_t tmp_30 = src_dof_4*tmp_4;
             const real_t tmp_35 = src_dof_5*tmp_4;
             const real_t elMatVec_0 = tmp_18*tmp_19 + tmp_29*tmp_30 + tmp_3*tmp_5 + tmp_34*tmp_35 + tmp_6*tmp_7 + tmp_8*((jac_affine_0_0*jac_affine_0_0)*4.0 + (jac_affine_1_0*jac_affine_1_0)*4.0 + (jac_affine_2_0*jac_affine_2_0)*4.0);
             const real_t elMatVec_1 = tmp_19*tmp_37 + tmp_3*tmp_8 + tmp_30*tmp_38 + tmp_35*tmp_39 + tmp_36*tmp_7 + tmp_5*((jac_affine_0_1*jac_affine_0_1)*4.0 + (jac_affine_1_1*jac_affine_1_1)*4.0 + (jac_affine_2_1*jac_affine_2_1)*4.0);
             const real_t elMatVec_2 = tmp_19*tmp_40 + tmp_30*tmp_41 + tmp_35*tmp_42 + tmp_36*tmp_5 + tmp_6*tmp_8 + tmp_7*((jac_affine_0_2*jac_affine_0_2)*4.0 + (jac_affine_1_2*jac_affine_1_2)*4.0 + (jac_affine_2_2*jac_affine_2_2)*4.0);
             const real_t elMatVec_3 = tmp_18*tmp_8 + tmp_19*((tmp_11*tmp_11) + (tmp_14*tmp_14) + (tmp_17*tmp_17)) + tmp_30*tmp_43 + tmp_35*tmp_44 + tmp_37*tmp_5 + tmp_40*tmp_7;
             const real_t elMatVec_4 = tmp_19*tmp_43 + tmp_29*tmp_8 + tmp_30*((tmp_22*tmp_22) + (tmp_25*tmp_25) + (tmp_28*tmp_28)) + tmp_35*tmp_45 + tmp_38*tmp_5 + tmp_41*tmp_7;
             const real_t elMatVec_5 = tmp_19*tmp_44 + tmp_30*tmp_45 + tmp_34*tmp_8 + tmp_35*((tmp_31*tmp_31) + (tmp_32*tmp_32) + (tmp_33*tmp_33)) + tmp_39*tmp_5 + tmp_42*tmp_7;
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_4 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t tmp_5 = Dummy_48*src_dof_1;
             const real_t tmp_7 = Dummy_48*src_dof_2;
             const real_t tmp_8 = Dummy_48*src_dof_0;
             const real_t tmp_19 = Dummy_48*src_dof_3;
             const real_t tmp_30 = Dummy_48*src_dof_4;
             const real_t tmp_35 = Dummy_48*src_dof_5;
             const real_t elMatVec_0 = Dummy_47*tmp_5 + Dummy_49*tmp_7 + Dummy_59*tmp_19 + Dummy_69*tmp_30 + Dummy_73*tmp_35 + tmp_8*((Dummy_34*Dummy_34)*4.0 + (Dummy_37*Dummy_37)*4.0 + (Dummy_40*Dummy_40)*4.0);
             const real_t elMatVec_1 = Dummy_47*tmp_8 + Dummy_74*tmp_7 + Dummy_75*tmp_19 + Dummy_76*tmp_30 + Dummy_77*tmp_35 + tmp_5*((Dummy_35*Dummy_35)*4.0 + (Dummy_38*Dummy_38)*4.0 + (Dummy_41*Dummy_41)*4.0);
             const real_t elMatVec_2 = Dummy_49*tmp_8 + Dummy_74*tmp_5 + Dummy_78*tmp_19 + Dummy_79*tmp_30 + Dummy_80*tmp_35 + tmp_7*((Dummy_36*Dummy_36)*4.0 + (Dummy_39*Dummy_39)*4.0 + (Dummy_42*Dummy_42)*4.0);
             const real_t elMatVec_3 = Dummy_59*tmp_8 + Dummy_75*tmp_5 + Dummy_78*tmp_7 + Dummy_81*tmp_30 + Dummy_82*tmp_35 + tmp_19*((Dummy_52*Dummy_52) + (Dummy_55*Dummy_55) + (Dummy_58*Dummy_58));
             const real_t elMatVec_4 = Dummy_69*tmp_8 + Dummy_76*tmp_5 + Dummy_79*tmp_7 + Dummy_81*tmp_19 + Dummy_83*tmp_35 + tmp_30*((Dummy_62*Dummy_62) + (Dummy_65*Dummy_65) + (Dummy_68*Dummy_68));
             const real_t elMatVec_5 = Dummy_73*tmp_8 + Dummy_77*tmp_5 + Dummy_80*tmp_7 + Dummy_82*tmp_19 + Dummy_83*tmp_30 + tmp_35*((Dummy_70*Dummy_70) + (Dummy_71*Dummy_71) + (Dummy_72*Dummy_72));
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_5 = Dummy_110*src_dof_1;
             const real_t tmp_7 = Dummy_110*src_dof_2;
             const real_t tmp_8 = Dummy_110*src_dof_0;
             const real_t tmp_19 = Dummy_110*src_dof_3;
             const real_t tmp_30 = Dummy_110*src_dof_4;
             const real_t tmp_35 = Dummy_110*src_dof_5;
             const real_t elMatVec_0 = Dummy_109*tmp_5 + Dummy_111*tmp_7 + Dummy_121*tmp_19 + Dummy_131*tmp_30 + Dummy_135*tmp_35 + tmp_8*((Dummy_102*Dummy_102)*4.0 + (Dummy_96*Dummy_96)*4.0 + (Dummy_99*Dummy_99)*4.0);
             const real_t elMatVec_1 = Dummy_109*tmp_8 + Dummy_136*tmp_7 + Dummy_137*tmp_19 + Dummy_138*tmp_30 + Dummy_139*tmp_35 + tmp_5*((Dummy_100*Dummy_100)*4.0 + (Dummy_103*Dummy_103)*4.0 + (Dummy_97*Dummy_97)*4.0);
             const real_t elMatVec_2 = Dummy_111*tmp_8 + Dummy_136*tmp_5 + Dummy_140*tmp_19 + Dummy_141*tmp_30 + Dummy_142*tmp_35 + tmp_7*((Dummy_101*Dummy_101)*4.0 + (Dummy_104*Dummy_104)*4.0 + (Dummy_98*Dummy_98)*4.0);
             const real_t elMatVec_3 = Dummy_121*tmp_8 + Dummy_137*tmp_5 + Dummy_140*tmp_7 + Dummy_143*tmp_30 + Dummy_144*tmp_35 + tmp_19*((Dummy_114*Dummy_114) + (Dummy_117*Dummy_117) + (Dummy_120*Dummy_120));
             const real_t elMatVec_4 = Dummy_131*tmp_8 + Dummy_138*tmp_5 + Dummy_141*tmp_7 + Dummy_143*tmp_19 + Dummy_145*tmp_35 + tmp_30*((Dummy_124*Dummy_124) + (Dummy_127*Dummy_127) + (Dummy_130*Dummy_130));
             const real_t elMatVec_5 = Dummy_135*tmp_8 + Dummy_139*tmp_5 + Dummy_142*tmp_7 + Dummy_144*tmp_19 + Dummy_145*tmp_30 + tmp_35*((Dummy_132*Dummy_132) + (Dummy_133*Dummy_133) + (Dummy_134*Dummy_134));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_5 = Dummy_172*src_dof_1;
             const real_t tmp_7 = Dummy_172*src_dof_2;
             const real_t tmp_8 = Dummy_172*src_dof_0;
             const real_t tmp_19 = Dummy_172*src_dof_3;
             const real_t tmp_30 = Dummy_172*src_dof_4;
             const real_t tmp_35 = Dummy_172*src_dof_5;
             const real_t elMatVec_0 = Dummy_171*tmp_5 + Dummy_173*tmp_7 + Dummy_183*tmp_19 + Dummy_193*tmp_30 + Dummy_197*tmp_35 + tmp_8*((Dummy_158*Dummy_158)*4.0 + (Dummy_161*Dummy_161)*4.0 + (Dummy_164*Dummy_164)*4.0);
             const real_t elMatVec_1 = Dummy_171*tmp_8 + Dummy_198*tmp_7 + Dummy_199*tmp_19 + Dummy_200*tmp_30 + Dummy_201*tmp_35 + tmp_5*((Dummy_159*Dummy_159)*4.0 + (Dummy_162*Dummy_162)*4.0 + (Dummy_165*Dummy_165)*4.0);
             const real_t elMatVec_2 = Dummy_173*tmp_8 + Dummy_198*tmp_5 + Dummy_202*tmp_19 + Dummy_203*tmp_30 + Dummy_204*tmp_35 + tmp_7*((Dummy_160*Dummy_160)*4.0 + (Dummy_163*Dummy_163)*4.0 + (Dummy_166*Dummy_166)*4.0);
             const real_t elMatVec_3 = Dummy_183*tmp_8 + Dummy_199*tmp_5 + Dummy_202*tmp_7 + Dummy_205*tmp_30 + Dummy_206*tmp_35 + tmp_19*((Dummy_176*Dummy_176) + (Dummy_179*Dummy_179) + (Dummy_182*Dummy_182));
             const real_t elMatVec_4 = Dummy_193*tmp_8 + Dummy_200*tmp_5 + Dummy_203*tmp_7 + Dummy_205*tmp_19 + Dummy_207*tmp_35 + tmp_30*((Dummy_186*Dummy_186) + (Dummy_189*Dummy_189) + (Dummy_192*Dummy_192));
             const real_t elMatVec_5 = Dummy_197*tmp_8 + Dummy_201*tmp_5 + Dummy_204*tmp_7 + Dummy_206*tmp_19 + Dummy_207*tmp_30 + tmp_35*((Dummy_194*Dummy_194) + (Dummy_195*Dummy_195) + (Dummy_196*Dummy_196));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_5 = Dummy_234*src_dof_1;
             const real_t tmp_7 = Dummy_234*src_dof_2;
             const real_t tmp_8 = Dummy_234*src_dof_0;
             const real_t tmp_19 = Dummy_234*src_dof_3;
             const real_t tmp_30 = Dummy_234*src_dof_4;
             const real_t tmp_35 = Dummy_234*src_dof_5;
             const real_t elMatVec_0 = Dummy_233*tmp_5 + Dummy_235*tmp_7 + Dummy_245*tmp_19 + Dummy_255*tmp_30 + Dummy_259*tmp_35 + tmp_8*((Dummy_220*Dummy_220)*4.0 + (Dummy_223*Dummy_223)*4.0 + (Dummy_226*Dummy_226)*4.0);
             const real_t elMatVec_1 = Dummy_233*tmp_8 + Dummy_260*tmp_7 + Dummy_261*tmp_19 + Dummy_262*tmp_30 + Dummy_263*tmp_35 + tmp_5*((Dummy_221*Dummy_221)*4.0 + (Dummy_224*Dummy_224)*4.0 + (Dummy_227*Dummy_227)*4.0);
             const real_t elMatVec_2 = Dummy_235*tmp_8 + Dummy_260*tmp_5 + Dummy_264*tmp_19 + Dummy_265*tmp_30 + Dummy_266*tmp_35 + tmp_7*((Dummy_222*Dummy_222)*4.0 + (Dummy_225*Dummy_225)*4.0 + (Dummy_228*Dummy_228)*4.0);
             const real_t elMatVec_3 = Dummy_245*tmp_8 + Dummy_261*tmp_5 + Dummy_264*tmp_7 + Dummy_267*tmp_30 + Dummy_268*tmp_35 + tmp_19*((Dummy_238*Dummy_238) + (Dummy_241*Dummy_241) + (Dummy_244*Dummy_244));
             const real_t elMatVec_4 = Dummy_255*tmp_8 + Dummy_262*tmp_5 + Dummy_265*tmp_7 + Dummy_267*tmp_19 + Dummy_269*tmp_35 + tmp_30*((Dummy_248*Dummy_248) + (Dummy_251*Dummy_251) + (Dummy_254*Dummy_254));
             const real_t elMatVec_5 = Dummy_259*tmp_8 + Dummy_263*tmp_5 + Dummy_266*tmp_7 + Dummy_268*tmp_19 + Dummy_269*tmp_30 + tmp_35*((Dummy_256*Dummy_256) + (Dummy_257*Dummy_257) + (Dummy_258*Dummy_258));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t src_dof_5 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t tmp_5 = Dummy_296*src_dof_1;
             const real_t tmp_7 = Dummy_296*src_dof_2;
             const real_t tmp_8 = Dummy_296*src_dof_0;
             const real_t tmp_19 = Dummy_296*src_dof_3;
             const real_t tmp_30 = Dummy_296*src_dof_4;
             const real_t tmp_35 = Dummy_296*src_dof_5;
             const real_t elMatVec_0 = Dummy_295*tmp_5 + Dummy_297*tmp_7 + Dummy_307*tmp_19 + Dummy_317*tmp_30 + Dummy_321*tmp_35 + tmp_8*((Dummy_282*Dummy_282)*4.0 + (Dummy_285*Dummy_285)*4.0 + (Dummy_288*Dummy_288)*4.0);
             const real_t elMatVec_1 = Dummy_295*tmp_8 + Dummy_322*tmp_7 + Dummy_323*tmp_19 + Dummy_324*tmp_30 + Dummy_325*tmp_35 + tmp_5*((Dummy_283*Dummy_283)*4.0 + (Dummy_286*Dummy_286)*4.0 + (Dummy_289*Dummy_289)*4.0);
             const real_t elMatVec_2 = Dummy_297*tmp_8 + Dummy_322*tmp_5 + Dummy_326*tmp_19 + Dummy_327*tmp_30 + Dummy_328*tmp_35 + tmp_7*((Dummy_284*Dummy_284)*4.0 + (Dummy_287*Dummy_287)*4.0 + (Dummy_290*Dummy_290)*4.0);
             const real_t elMatVec_3 = Dummy_307*tmp_8 + Dummy_323*tmp_5 + Dummy_326*tmp_7 + Dummy_329*tmp_30 + Dummy_330*tmp_35 + tmp_19*((Dummy_300*Dummy_300) + (Dummy_303*Dummy_303) + (Dummy_306*Dummy_306));
             const real_t elMatVec_4 = Dummy_317*tmp_8 + Dummy_324*tmp_5 + Dummy_327*tmp_7 + Dummy_329*tmp_19 + Dummy_331*tmp_35 + tmp_30*((Dummy_310*Dummy_310) + (Dummy_313*Dummy_313) + (Dummy_316*Dummy_316));
             const real_t elMatVec_5 = Dummy_321*tmp_8 + Dummy_325*tmp_5 + Dummy_328*tmp_7 + Dummy_330*tmp_19 + Dummy_331*tmp_30 + tmp_35*((Dummy_318*Dummy_318) + (Dummy_319*Dummy_319) + (Dummy_320*Dummy_320));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
