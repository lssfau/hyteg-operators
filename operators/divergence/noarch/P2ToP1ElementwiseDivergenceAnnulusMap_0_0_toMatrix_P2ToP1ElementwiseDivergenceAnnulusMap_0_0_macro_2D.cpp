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































#include "../P2ToP1ElementwiseDivergenceAnnulusMap_0_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ToP1ElementwiseDivergenceAnnulusMap_0_0::toMatrix_P2ToP1ElementwiseDivergenceAnnulusMap_0_0_macro_2D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
{
    {
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
       const real_t tmp_kernel_op_3 = rayVertex_0 - thrVertex_0;
       const real_t tmp_kernel_op_4 = -tmp_kernel_op_3;
       const real_t tmp_kernel_op_18 = rayVertex_0 - refVertex_0;
       const real_t tmp_kernel_op_19 = rayVertex_1 - thrVertex_1;
       const real_t tmp_kernel_op_20 = -tmp_kernel_op_19;
       const real_t tmp_kernel_op_21 = rayVertex_1 - refVertex_1;
       const real_t tmp_kernel_op_22 = radRayVertex - radRefVertex;
       const real_t tmp_kernel_op_23 = -tmp_kernel_op_22*1.0 / (-tmp_kernel_op_18*tmp_kernel_op_20 + tmp_kernel_op_21*tmp_kernel_op_4);
       const real_t tmp_kernel_op_24 = tmp_kernel_op_23*1.0;
       const real_t tmp_kernel_op_28 = -rayVertex_1;
       const real_t tmp_kernel_op_29 = -rayVertex_0;
       const real_t tmp_kernel_op_48 = tmp_kernel_op_22*1.0 / (tmp_kernel_op_18*tmp_kernel_op_19 - tmp_kernel_op_21*tmp_kernel_op_3);
       const real_t tmp_kernel_op_49 = tmp_kernel_op_48*1.0;
       const real_t tmp_kernel_op_60 = 2.6666666666666665;
       const real_t tmp_kernel_op_61 = 0.66666666666666663;
       const real_t tmp_kernel_op_62 = tmp_kernel_op_60 + tmp_kernel_op_61 - 3.0;
       const real_t tmp_kernel_op_97 = 0.66666666666666663;
       const real_t tmp_kernel_op_98 = 0.66666666666666663;
       const real_t tmp_kernel_op_99 = tmp_kernel_op_97 + tmp_kernel_op_98 - 3.0;
       {
          /* FaceType.GRAY */
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
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
             const real_t tmp_kernel_op_5 = p_affine_0_1 - p_affine_1_1;
             const real_t tmp_kernel_op_6 = -tmp_kernel_op_5;
             const real_t tmp_kernel_op_7 = p_affine_0_1 - p_affine_2_1;
             const real_t tmp_kernel_op_8 = -tmp_kernel_op_7;
             const real_t tmp_kernel_op_9 = p_affine_0_1 + tmp_kernel_op_6*0.16666666666666666 + tmp_kernel_op_8*0.66666666666666663;
             const real_t tmp_kernel_op_10 = p_affine_0_0 - p_affine_1_0;
             const real_t tmp_kernel_op_11 = -tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = p_affine_0_0 - p_affine_2_0;
             const real_t tmp_kernel_op_13 = -tmp_kernel_op_12;
             const real_t tmp_kernel_op_14 = p_affine_0_0 + tmp_kernel_op_11*0.16666666666666666 + tmp_kernel_op_13*0.66666666666666663;
             const real_t tmp_kernel_op_15 = (tmp_kernel_op_14*tmp_kernel_op_14);
             const real_t tmp_kernel_op_16 = (tmp_kernel_op_9*tmp_kernel_op_9);
             const real_t tmp_kernel_op_17 = tmp_kernel_op_15 + tmp_kernel_op_16;
             const real_t tmp_kernel_op_25 = pow(tmp_kernel_op_17, -0.50000000000000000)*tmp_kernel_op_24;
             const real_t tmp_kernel_op_26 = tmp_kernel_op_25*tmp_kernel_op_9;
             const real_t tmp_kernel_op_27 = pow(tmp_kernel_op_17, -1.5000000000000000);
             const real_t tmp_kernel_op_30 = radRayVertex + tmp_kernel_op_23*(tmp_kernel_op_20*(tmp_kernel_op_14 + tmp_kernel_op_29) - tmp_kernel_op_4*(tmp_kernel_op_28 + tmp_kernel_op_9));
             const real_t tmp_kernel_op_31 = tmp_kernel_op_15*tmp_kernel_op_27*tmp_kernel_op_30*1.0 - tmp_kernel_op_26*tmp_kernel_op_4;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_14*tmp_kernel_op_25;
             const real_t tmp_kernel_op_33 = tmp_kernel_op_27*tmp_kernel_op_30*1.0;
             const real_t tmp_kernel_op_34 = -tmp_kernel_op_14*tmp_kernel_op_33*tmp_kernel_op_9 + tmp_kernel_op_20*tmp_kernel_op_26;
             const real_t tmp_kernel_op_35 = 1.0 / (tmp_kernel_op_31*(tmp_kernel_op_16*tmp_kernel_op_33 + tmp_kernel_op_20*tmp_kernel_op_32) - tmp_kernel_op_34*(-tmp_kernel_op_14*tmp_kernel_op_27*tmp_kernel_op_30*tmp_kernel_op_9 - tmp_kernel_op_32*tmp_kernel_op_4));
             const real_t tmp_kernel_op_36 = tmp_kernel_op_31*tmp_kernel_op_35;
             const real_t tmp_kernel_op_37 = -tmp_kernel_op_34*tmp_kernel_op_35;
             const real_t tmp_kernel_op_38 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_36 + jac_affine_inv_0_1_GRAY*tmp_kernel_op_37;
             const real_t tmp_kernel_op_39 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_36 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_37;
             const real_t tmp_kernel_op_40 = -tmp_kernel_op_2*tmp_kernel_op_38 - tmp_kernel_op_2*tmp_kernel_op_39;
             const real_t tmp_kernel_op_41 = -p_affine_0_0;
             const real_t tmp_kernel_op_42 = tmp_kernel_op_10*0.16666666666666666 + tmp_kernel_op_12*0.66666666666666663 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_43 = (tmp_kernel_op_42*tmp_kernel_op_42);
             const real_t tmp_kernel_op_44 = -p_affine_0_1;
             const real_t tmp_kernel_op_45 = tmp_kernel_op_44 + tmp_kernel_op_5*0.16666666666666666 + tmp_kernel_op_7*0.66666666666666663;
             const real_t tmp_kernel_op_46 = (tmp_kernel_op_45*tmp_kernel_op_45);
             const real_t tmp_kernel_op_47 = tmp_kernel_op_43 + tmp_kernel_op_46;
             const real_t tmp_kernel_op_50 = pow(tmp_kernel_op_47, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_42*tmp_kernel_op_50;
             const real_t tmp_kernel_op_52 = -tmp_kernel_op_19*(rayVertex_0 + tmp_kernel_op_42) + tmp_kernel_op_3*(rayVertex_1 + tmp_kernel_op_45);
             const real_t tmp_kernel_op_53 = pow(tmp_kernel_op_47, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_54 = tmp_kernel_op_53*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_52);
             const real_t tmp_kernel_op_55 = tmp_kernel_op_45*tmp_kernel_op_50;
             const real_t tmp_kernel_op_56 = tmp_kernel_op_53*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_52);
             const real_t tmp_kernel_op_57 = tmp_kernel_op_42*tmp_kernel_op_45;
             const real_t tmp_kernel_op_58 = abs_det_jac_affine_GRAY*0.16666666666666666*abs((tmp_kernel_op_19*tmp_kernel_op_51 - tmp_kernel_op_46*tmp_kernel_op_54)*(tmp_kernel_op_3*tmp_kernel_op_55 + tmp_kernel_op_43*tmp_kernel_op_56) - (tmp_kernel_op_19*tmp_kernel_op_55 + tmp_kernel_op_54*tmp_kernel_op_57)*(tmp_kernel_op_3*tmp_kernel_op_51 - tmp_kernel_op_56*tmp_kernel_op_57));
             const real_t tmp_kernel_op_59 = tmp_kernel_op_58*0.16666666666666674;
             const real_t tmp_kernel_op_63 = p_affine_0_1 + tmp_kernel_op_6*0.66666666666666663 + tmp_kernel_op_8*0.16666666666666666;
             const real_t tmp_kernel_op_64 = p_affine_0_0 + tmp_kernel_op_11*0.66666666666666663 + tmp_kernel_op_13*0.16666666666666666;
             const real_t tmp_kernel_op_65 = (tmp_kernel_op_64*tmp_kernel_op_64);
             const real_t tmp_kernel_op_66 = (tmp_kernel_op_63*tmp_kernel_op_63);
             const real_t tmp_kernel_op_67 = tmp_kernel_op_65 + tmp_kernel_op_66;
             const real_t tmp_kernel_op_68 = tmp_kernel_op_24*pow(tmp_kernel_op_67, -0.50000000000000000);
             const real_t tmp_kernel_op_69 = tmp_kernel_op_63*tmp_kernel_op_68;
             const real_t tmp_kernel_op_70 = pow(tmp_kernel_op_67, -1.5000000000000000);
             const real_t tmp_kernel_op_71 = radRayVertex + tmp_kernel_op_23*(tmp_kernel_op_20*(tmp_kernel_op_29 + tmp_kernel_op_64) - tmp_kernel_op_4*(tmp_kernel_op_28 + tmp_kernel_op_63));
             const real_t tmp_kernel_op_72 = -tmp_kernel_op_4*tmp_kernel_op_69 + tmp_kernel_op_65*tmp_kernel_op_70*tmp_kernel_op_71*1.0;
             const real_t tmp_kernel_op_73 = tmp_kernel_op_64*tmp_kernel_op_68;
             const real_t tmp_kernel_op_74 = tmp_kernel_op_70*tmp_kernel_op_71*1.0;
             const real_t tmp_kernel_op_75 = tmp_kernel_op_20*tmp_kernel_op_69 - tmp_kernel_op_63*tmp_kernel_op_64*tmp_kernel_op_74;
             const real_t tmp_kernel_op_76 = 1.0 / (tmp_kernel_op_72*(tmp_kernel_op_20*tmp_kernel_op_73 + tmp_kernel_op_66*tmp_kernel_op_74) - tmp_kernel_op_75*(-tmp_kernel_op_4*tmp_kernel_op_73 - tmp_kernel_op_63*tmp_kernel_op_64*tmp_kernel_op_70*tmp_kernel_op_71));
             const real_t tmp_kernel_op_77 = tmp_kernel_op_72*tmp_kernel_op_76;
             const real_t tmp_kernel_op_78 = -tmp_kernel_op_75*tmp_kernel_op_76;
             const real_t tmp_kernel_op_79 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_77 + jac_affine_inv_0_1_GRAY*tmp_kernel_op_78;
             const real_t tmp_kernel_op_80 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_77 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_78;
             const real_t tmp_kernel_op_81 = -tmp_kernel_op_62*tmp_kernel_op_79 - tmp_kernel_op_62*tmp_kernel_op_80;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_10*0.66666666666666663 + tmp_kernel_op_12*0.16666666666666666 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_83 = (tmp_kernel_op_82*tmp_kernel_op_82);
             const real_t tmp_kernel_op_84 = tmp_kernel_op_44 + tmp_kernel_op_5*0.66666666666666663 + tmp_kernel_op_7*0.16666666666666666;
             const real_t tmp_kernel_op_85 = (tmp_kernel_op_84*tmp_kernel_op_84);
             const real_t tmp_kernel_op_86 = tmp_kernel_op_83 + tmp_kernel_op_85;
             const real_t tmp_kernel_op_87 = tmp_kernel_op_49*pow(tmp_kernel_op_86, -0.50000000000000000);
             const real_t tmp_kernel_op_88 = tmp_kernel_op_82*tmp_kernel_op_87;
             const real_t tmp_kernel_op_89 = -tmp_kernel_op_19*(rayVertex_0 + tmp_kernel_op_82) + tmp_kernel_op_3*(rayVertex_1 + tmp_kernel_op_84);
             const real_t tmp_kernel_op_90 = pow(tmp_kernel_op_86, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_91 = tmp_kernel_op_90*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_89);
             const real_t tmp_kernel_op_92 = tmp_kernel_op_84*tmp_kernel_op_87;
             const real_t tmp_kernel_op_93 = tmp_kernel_op_90*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_89);
             const real_t tmp_kernel_op_94 = tmp_kernel_op_82*tmp_kernel_op_84;
             const real_t tmp_kernel_op_95 = abs_det_jac_affine_GRAY*0.16666666666666666*abs((tmp_kernel_op_19*tmp_kernel_op_88 - tmp_kernel_op_85*tmp_kernel_op_91)*(tmp_kernel_op_3*tmp_kernel_op_92 + tmp_kernel_op_83*tmp_kernel_op_93) - (tmp_kernel_op_19*tmp_kernel_op_92 + tmp_kernel_op_91*tmp_kernel_op_94)*(tmp_kernel_op_3*tmp_kernel_op_88 - tmp_kernel_op_93*tmp_kernel_op_94));
             const real_t tmp_kernel_op_96 = tmp_kernel_op_95*0.16666666666666671;
             const real_t tmp_kernel_op_100 = p_affine_0_1 + tmp_kernel_op_6*0.16666666666666666 + tmp_kernel_op_8*0.16666666666666666;
             const real_t tmp_kernel_op_101 = p_affine_0_0 + tmp_kernel_op_11*0.16666666666666666 + tmp_kernel_op_13*0.16666666666666666;
             const real_t tmp_kernel_op_102 = (tmp_kernel_op_101*tmp_kernel_op_101);
             const real_t tmp_kernel_op_103 = (tmp_kernel_op_100*tmp_kernel_op_100);
             const real_t tmp_kernel_op_104 = tmp_kernel_op_102 + tmp_kernel_op_103;
             const real_t tmp_kernel_op_105 = pow(tmp_kernel_op_104, -0.50000000000000000)*tmp_kernel_op_24;
             const real_t tmp_kernel_op_106 = tmp_kernel_op_100*tmp_kernel_op_105;
             const real_t tmp_kernel_op_107 = pow(tmp_kernel_op_104, -1.5000000000000000);
             const real_t tmp_kernel_op_108 = radRayVertex + tmp_kernel_op_23*(tmp_kernel_op_20*(tmp_kernel_op_101 + tmp_kernel_op_29) - tmp_kernel_op_4*(tmp_kernel_op_100 + tmp_kernel_op_28));
             const real_t tmp_kernel_op_109 = tmp_kernel_op_102*tmp_kernel_op_107*tmp_kernel_op_108*1.0 - tmp_kernel_op_106*tmp_kernel_op_4;
             const real_t tmp_kernel_op_110 = tmp_kernel_op_101*tmp_kernel_op_105;
             const real_t tmp_kernel_op_111 = tmp_kernel_op_107*tmp_kernel_op_108*1.0;
             const real_t tmp_kernel_op_112 = -tmp_kernel_op_100*tmp_kernel_op_101*tmp_kernel_op_111 + tmp_kernel_op_106*tmp_kernel_op_20;
             const real_t tmp_kernel_op_113 = 1.0 / (tmp_kernel_op_109*(tmp_kernel_op_103*tmp_kernel_op_111 + tmp_kernel_op_110*tmp_kernel_op_20) - tmp_kernel_op_112*(-tmp_kernel_op_100*tmp_kernel_op_101*tmp_kernel_op_107*tmp_kernel_op_108 - tmp_kernel_op_110*tmp_kernel_op_4));
             const real_t tmp_kernel_op_114 = tmp_kernel_op_109*tmp_kernel_op_113;
             const real_t tmp_kernel_op_115 = -tmp_kernel_op_112*tmp_kernel_op_113;
             const real_t tmp_kernel_op_116 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_114 + jac_affine_inv_0_1_GRAY*tmp_kernel_op_115;
             const real_t tmp_kernel_op_117 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_114 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_115;
             const real_t tmp_kernel_op_118 = -tmp_kernel_op_116*tmp_kernel_op_99 - tmp_kernel_op_117*tmp_kernel_op_99;
             const real_t tmp_kernel_op_119 = tmp_kernel_op_10*0.16666666666666666 + tmp_kernel_op_12*0.16666666666666666 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_120 = (tmp_kernel_op_119*tmp_kernel_op_119);
             const real_t tmp_kernel_op_121 = tmp_kernel_op_44 + tmp_kernel_op_5*0.16666666666666666 + tmp_kernel_op_7*0.16666666666666666;
             const real_t tmp_kernel_op_122 = (tmp_kernel_op_121*tmp_kernel_op_121);
             const real_t tmp_kernel_op_123 = tmp_kernel_op_120 + tmp_kernel_op_122;
             const real_t tmp_kernel_op_124 = pow(tmp_kernel_op_123, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_125 = tmp_kernel_op_119*tmp_kernel_op_124;
             const real_t tmp_kernel_op_126 = -tmp_kernel_op_19*(rayVertex_0 + tmp_kernel_op_119) + tmp_kernel_op_3*(rayVertex_1 + tmp_kernel_op_121);
             const real_t tmp_kernel_op_127 = pow(tmp_kernel_op_123, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_128 = tmp_kernel_op_127*(radRayVertex + tmp_kernel_op_126*tmp_kernel_op_48);
             const real_t tmp_kernel_op_129 = tmp_kernel_op_121*tmp_kernel_op_124;
             const real_t tmp_kernel_op_130 = tmp_kernel_op_127*(radRayVertex + tmp_kernel_op_126*tmp_kernel_op_48);
             const real_t tmp_kernel_op_131 = tmp_kernel_op_119*tmp_kernel_op_121;
             const real_t tmp_kernel_op_132 = abs_det_jac_affine_GRAY*0.16666666666666666*abs(-(tmp_kernel_op_120*tmp_kernel_op_130 + tmp_kernel_op_129*tmp_kernel_op_3)*(-tmp_kernel_op_122*tmp_kernel_op_128 + tmp_kernel_op_125*tmp_kernel_op_19) + (tmp_kernel_op_125*tmp_kernel_op_3 - tmp_kernel_op_130*tmp_kernel_op_131)*(tmp_kernel_op_128*tmp_kernel_op_131 + tmp_kernel_op_129*tmp_kernel_op_19));
             const real_t tmp_kernel_op_133 = tmp_kernel_op_132*0.66666666666666674;
             const real_t tmp_kernel_op_134 = tmp_kernel_op_38*(tmp_kernel_op_0 - 1.0);
             const real_t tmp_kernel_op_135 = tmp_kernel_op_79*(tmp_kernel_op_60 - 1.0);
             const real_t tmp_kernel_op_136 = tmp_kernel_op_116*(tmp_kernel_op_97 - 1.0);
             const real_t tmp_kernel_op_137 = tmp_kernel_op_39*(tmp_kernel_op_1 - 1.0);
             const real_t tmp_kernel_op_138 = tmp_kernel_op_80*(tmp_kernel_op_61 - 1.0);
             const real_t tmp_kernel_op_139 = tmp_kernel_op_117*(tmp_kernel_op_98 - 1.0);
             const real_t tmp_kernel_op_140 = tmp_kernel_op_0*tmp_kernel_op_39;
             const real_t tmp_kernel_op_141 = tmp_kernel_op_1*tmp_kernel_op_38;
             const real_t tmp_kernel_op_142 = -tmp_kernel_op_140 - tmp_kernel_op_141;
             const real_t tmp_kernel_op_143 = tmp_kernel_op_60*tmp_kernel_op_80;
             const real_t tmp_kernel_op_144 = tmp_kernel_op_61*tmp_kernel_op_79;
             const real_t tmp_kernel_op_145 = -tmp_kernel_op_143 - tmp_kernel_op_144;
             const real_t tmp_kernel_op_146 = tmp_kernel_op_117*tmp_kernel_op_97;
             const real_t tmp_kernel_op_147 = tmp_kernel_op_116*tmp_kernel_op_98;
             const real_t tmp_kernel_op_148 = -tmp_kernel_op_146 - tmp_kernel_op_147;
             const real_t tmp_kernel_op_149 = tmp_kernel_op_141 - tmp_kernel_op_39*(-tmp_kernel_op_0 - 1.333333333333333);
             const real_t tmp_kernel_op_150 = tmp_kernel_op_144 - tmp_kernel_op_80*(-tmp_kernel_op_60 + 2.666666666666667);
             const real_t tmp_kernel_op_151 = -tmp_kernel_op_117*(-tmp_kernel_op_97 + 2.666666666666667) + tmp_kernel_op_147;
             const real_t tmp_kernel_op_152 = tmp_kernel_op_140 - tmp_kernel_op_38*(-tmp_kernel_op_1 + 2.666666666666667);
             const real_t tmp_kernel_op_153 = tmp_kernel_op_143 - tmp_kernel_op_79*(-tmp_kernel_op_61 - 1.333333333333333);
             const real_t tmp_kernel_op_154 = -tmp_kernel_op_116*(-tmp_kernel_op_98 + 2.666666666666667) + tmp_kernel_op_146;
             const real_t tmp_kernel_op_155 = tmp_kernel_op_58*0.16666666666666666;
             const real_t tmp_kernel_op_156 = tmp_kernel_op_95*0.66666666666666663;
             const real_t tmp_kernel_op_157 = tmp_kernel_op_132*0.16666666666666666;
             const real_t tmp_kernel_op_158 = tmp_kernel_op_58*0.66666666666666663;
             const real_t tmp_kernel_op_159 = tmp_kernel_op_95*0.16666666666666666;
             const real_t tmp_kernel_op_160 = tmp_kernel_op_132*0.16666666666666666;
             const real_t elMat_0_0 = tmp_kernel_op_118*tmp_kernel_op_133 + tmp_kernel_op_40*tmp_kernel_op_59 + tmp_kernel_op_81*tmp_kernel_op_96;
             const real_t elMat_0_1 = -tmp_kernel_op_133*tmp_kernel_op_136 - tmp_kernel_op_134*tmp_kernel_op_59 - tmp_kernel_op_135*tmp_kernel_op_96;
             const real_t elMat_0_2 = -tmp_kernel_op_133*tmp_kernel_op_139 - tmp_kernel_op_137*tmp_kernel_op_59 - tmp_kernel_op_138*tmp_kernel_op_96;
             const real_t elMat_0_3 = tmp_kernel_op_133*tmp_kernel_op_148 + tmp_kernel_op_142*tmp_kernel_op_59 + tmp_kernel_op_145*tmp_kernel_op_96;
             const real_t elMat_0_4 = tmp_kernel_op_133*tmp_kernel_op_151 + tmp_kernel_op_149*tmp_kernel_op_59 + tmp_kernel_op_150*tmp_kernel_op_96;
             const real_t elMat_0_5 = tmp_kernel_op_133*tmp_kernel_op_154 + tmp_kernel_op_152*tmp_kernel_op_59 + tmp_kernel_op_153*tmp_kernel_op_96;
             const real_t elMat_1_0 = tmp_kernel_op_118*tmp_kernel_op_157 + tmp_kernel_op_155*tmp_kernel_op_40 + tmp_kernel_op_156*tmp_kernel_op_81;
             const real_t elMat_1_1 = -tmp_kernel_op_134*tmp_kernel_op_155 - tmp_kernel_op_135*tmp_kernel_op_156 - tmp_kernel_op_136*tmp_kernel_op_157;
             const real_t elMat_1_2 = -tmp_kernel_op_137*tmp_kernel_op_155 - tmp_kernel_op_138*tmp_kernel_op_156 - tmp_kernel_op_139*tmp_kernel_op_157;
             const real_t elMat_1_3 = tmp_kernel_op_142*tmp_kernel_op_155 + tmp_kernel_op_145*tmp_kernel_op_156 + tmp_kernel_op_148*tmp_kernel_op_157;
             const real_t elMat_1_4 = tmp_kernel_op_149*tmp_kernel_op_155 + tmp_kernel_op_150*tmp_kernel_op_156 + tmp_kernel_op_151*tmp_kernel_op_157;
             const real_t elMat_1_5 = tmp_kernel_op_152*tmp_kernel_op_155 + tmp_kernel_op_153*tmp_kernel_op_156 + tmp_kernel_op_154*tmp_kernel_op_157;
             const real_t elMat_2_0 = tmp_kernel_op_118*tmp_kernel_op_160 + tmp_kernel_op_158*tmp_kernel_op_40 + tmp_kernel_op_159*tmp_kernel_op_81;
             const real_t elMat_2_1 = -tmp_kernel_op_134*tmp_kernel_op_158 - tmp_kernel_op_135*tmp_kernel_op_159 - tmp_kernel_op_136*tmp_kernel_op_160;
             const real_t elMat_2_2 = -tmp_kernel_op_137*tmp_kernel_op_158 - tmp_kernel_op_138*tmp_kernel_op_159 - tmp_kernel_op_139*tmp_kernel_op_160;
             const real_t elMat_2_3 = tmp_kernel_op_142*tmp_kernel_op_158 + tmp_kernel_op_145*tmp_kernel_op_159 + tmp_kernel_op_148*tmp_kernel_op_160;
             const real_t elMat_2_4 = tmp_kernel_op_149*tmp_kernel_op_158 + tmp_kernel_op_150*tmp_kernel_op_159 + tmp_kernel_op_151*tmp_kernel_op_160;
             const real_t elMat_2_5 = tmp_kernel_op_152*tmp_kernel_op_158 + tmp_kernel_op_153*tmp_kernel_op_159 + tmp_kernel_op_154*tmp_kernel_op_160;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 18 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_1_0));
             _data_mat[7] = ((real_t)(elMat_1_1));
             _data_mat[8] = ((real_t)(elMat_1_2));
             _data_mat[9] = ((real_t)(elMat_1_3));
             _data_mat[10] = ((real_t)(elMat_1_4));
             _data_mat[11] = ((real_t)(elMat_1_5));
             _data_mat[12] = ((real_t)(elMat_2_0));
             _data_mat[13] = ((real_t)(elMat_2_1));
             _data_mat[14] = ((real_t)(elMat_2_2));
             _data_mat[15] = ((real_t)(elMat_2_3));
             _data_mat[16] = ((real_t)(elMat_2_4));
             _data_mat[17] = ((real_t)(elMat_2_5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
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
       {
          /* FaceType.BLUE */
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
             const real_t tmp_kernel_op_5 = p_affine_0_1 - p_affine_1_1;
             const real_t tmp_kernel_op_6 = -tmp_kernel_op_5;
             const real_t tmp_kernel_op_7 = p_affine_0_1 - p_affine_2_1;
             const real_t tmp_kernel_op_8 = -tmp_kernel_op_7;
             const real_t tmp_kernel_op_9 = p_affine_0_1 + tmp_kernel_op_6*0.16666666666666666 + tmp_kernel_op_8*0.66666666666666663;
             const real_t tmp_kernel_op_10 = p_affine_0_0 - p_affine_1_0;
             const real_t tmp_kernel_op_11 = -tmp_kernel_op_10;
             const real_t tmp_kernel_op_12 = p_affine_0_0 - p_affine_2_0;
             const real_t tmp_kernel_op_13 = -tmp_kernel_op_12;
             const real_t tmp_kernel_op_14 = p_affine_0_0 + tmp_kernel_op_11*0.16666666666666666 + tmp_kernel_op_13*0.66666666666666663;
             const real_t tmp_kernel_op_15 = (tmp_kernel_op_14*tmp_kernel_op_14);
             const real_t tmp_kernel_op_16 = (tmp_kernel_op_9*tmp_kernel_op_9);
             const real_t tmp_kernel_op_17 = tmp_kernel_op_15 + tmp_kernel_op_16;
             const real_t tmp_kernel_op_25 = pow(tmp_kernel_op_17, -0.50000000000000000)*tmp_kernel_op_24;
             const real_t tmp_kernel_op_26 = tmp_kernel_op_25*tmp_kernel_op_9;
             const real_t tmp_kernel_op_27 = pow(tmp_kernel_op_17, -1.5000000000000000);
             const real_t tmp_kernel_op_30 = radRayVertex + tmp_kernel_op_23*(tmp_kernel_op_20*(tmp_kernel_op_14 + tmp_kernel_op_29) - tmp_kernel_op_4*(tmp_kernel_op_28 + tmp_kernel_op_9));
             const real_t tmp_kernel_op_31 = tmp_kernel_op_15*tmp_kernel_op_27*tmp_kernel_op_30*1.0 - tmp_kernel_op_26*tmp_kernel_op_4;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_14*tmp_kernel_op_25;
             const real_t tmp_kernel_op_33 = tmp_kernel_op_27*tmp_kernel_op_30*1.0;
             const real_t tmp_kernel_op_34 = -tmp_kernel_op_14*tmp_kernel_op_33*tmp_kernel_op_9 + tmp_kernel_op_20*tmp_kernel_op_26;
             const real_t tmp_kernel_op_35 = 1.0 / (tmp_kernel_op_31*(tmp_kernel_op_16*tmp_kernel_op_33 + tmp_kernel_op_20*tmp_kernel_op_32) - tmp_kernel_op_34*(-tmp_kernel_op_14*tmp_kernel_op_27*tmp_kernel_op_30*tmp_kernel_op_9 - tmp_kernel_op_32*tmp_kernel_op_4));
             const real_t tmp_kernel_op_36 = tmp_kernel_op_31*tmp_kernel_op_35;
             const real_t tmp_kernel_op_37 = -tmp_kernel_op_34*tmp_kernel_op_35;
             const real_t tmp_kernel_op_38 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_36 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_37;
             const real_t tmp_kernel_op_39 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_36 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_37;
             const real_t tmp_kernel_op_40 = -tmp_kernel_op_2*tmp_kernel_op_38 - tmp_kernel_op_2*tmp_kernel_op_39;
             const real_t tmp_kernel_op_41 = -p_affine_0_0;
             const real_t tmp_kernel_op_42 = tmp_kernel_op_10*0.16666666666666666 + tmp_kernel_op_12*0.66666666666666663 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_43 = (tmp_kernel_op_42*tmp_kernel_op_42);
             const real_t tmp_kernel_op_44 = -p_affine_0_1;
             const real_t tmp_kernel_op_45 = tmp_kernel_op_44 + tmp_kernel_op_5*0.16666666666666666 + tmp_kernel_op_7*0.66666666666666663;
             const real_t tmp_kernel_op_46 = (tmp_kernel_op_45*tmp_kernel_op_45);
             const real_t tmp_kernel_op_47 = tmp_kernel_op_43 + tmp_kernel_op_46;
             const real_t tmp_kernel_op_50 = pow(tmp_kernel_op_47, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_42*tmp_kernel_op_50;
             const real_t tmp_kernel_op_52 = -tmp_kernel_op_19*(rayVertex_0 + tmp_kernel_op_42) + tmp_kernel_op_3*(rayVertex_1 + tmp_kernel_op_45);
             const real_t tmp_kernel_op_53 = pow(tmp_kernel_op_47, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_54 = tmp_kernel_op_53*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_52);
             const real_t tmp_kernel_op_55 = tmp_kernel_op_45*tmp_kernel_op_50;
             const real_t tmp_kernel_op_56 = tmp_kernel_op_53*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_52);
             const real_t tmp_kernel_op_57 = tmp_kernel_op_42*tmp_kernel_op_45;
             const real_t tmp_kernel_op_58 = abs_det_jac_affine_BLUE*0.16666666666666666*abs((tmp_kernel_op_19*tmp_kernel_op_51 - tmp_kernel_op_46*tmp_kernel_op_54)*(tmp_kernel_op_3*tmp_kernel_op_55 + tmp_kernel_op_43*tmp_kernel_op_56) - (tmp_kernel_op_19*tmp_kernel_op_55 + tmp_kernel_op_54*tmp_kernel_op_57)*(tmp_kernel_op_3*tmp_kernel_op_51 - tmp_kernel_op_56*tmp_kernel_op_57));
             const real_t tmp_kernel_op_59 = tmp_kernel_op_58*0.16666666666666674;
             const real_t tmp_kernel_op_63 = p_affine_0_1 + tmp_kernel_op_6*0.66666666666666663 + tmp_kernel_op_8*0.16666666666666666;
             const real_t tmp_kernel_op_64 = p_affine_0_0 + tmp_kernel_op_11*0.66666666666666663 + tmp_kernel_op_13*0.16666666666666666;
             const real_t tmp_kernel_op_65 = (tmp_kernel_op_64*tmp_kernel_op_64);
             const real_t tmp_kernel_op_66 = (tmp_kernel_op_63*tmp_kernel_op_63);
             const real_t tmp_kernel_op_67 = tmp_kernel_op_65 + tmp_kernel_op_66;
             const real_t tmp_kernel_op_68 = tmp_kernel_op_24*pow(tmp_kernel_op_67, -0.50000000000000000);
             const real_t tmp_kernel_op_69 = tmp_kernel_op_63*tmp_kernel_op_68;
             const real_t tmp_kernel_op_70 = pow(tmp_kernel_op_67, -1.5000000000000000);
             const real_t tmp_kernel_op_71 = radRayVertex + tmp_kernel_op_23*(tmp_kernel_op_20*(tmp_kernel_op_29 + tmp_kernel_op_64) - tmp_kernel_op_4*(tmp_kernel_op_28 + tmp_kernel_op_63));
             const real_t tmp_kernel_op_72 = -tmp_kernel_op_4*tmp_kernel_op_69 + tmp_kernel_op_65*tmp_kernel_op_70*tmp_kernel_op_71*1.0;
             const real_t tmp_kernel_op_73 = tmp_kernel_op_64*tmp_kernel_op_68;
             const real_t tmp_kernel_op_74 = tmp_kernel_op_70*tmp_kernel_op_71*1.0;
             const real_t tmp_kernel_op_75 = tmp_kernel_op_20*tmp_kernel_op_69 - tmp_kernel_op_63*tmp_kernel_op_64*tmp_kernel_op_74;
             const real_t tmp_kernel_op_76 = 1.0 / (tmp_kernel_op_72*(tmp_kernel_op_20*tmp_kernel_op_73 + tmp_kernel_op_66*tmp_kernel_op_74) - tmp_kernel_op_75*(-tmp_kernel_op_4*tmp_kernel_op_73 - tmp_kernel_op_63*tmp_kernel_op_64*tmp_kernel_op_70*tmp_kernel_op_71));
             const real_t tmp_kernel_op_77 = tmp_kernel_op_72*tmp_kernel_op_76;
             const real_t tmp_kernel_op_78 = -tmp_kernel_op_75*tmp_kernel_op_76;
             const real_t tmp_kernel_op_79 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_77 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_78;
             const real_t tmp_kernel_op_80 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_77 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_78;
             const real_t tmp_kernel_op_81 = -tmp_kernel_op_62*tmp_kernel_op_79 - tmp_kernel_op_62*tmp_kernel_op_80;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_10*0.66666666666666663 + tmp_kernel_op_12*0.16666666666666666 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_83 = (tmp_kernel_op_82*tmp_kernel_op_82);
             const real_t tmp_kernel_op_84 = tmp_kernel_op_44 + tmp_kernel_op_5*0.66666666666666663 + tmp_kernel_op_7*0.16666666666666666;
             const real_t tmp_kernel_op_85 = (tmp_kernel_op_84*tmp_kernel_op_84);
             const real_t tmp_kernel_op_86 = tmp_kernel_op_83 + tmp_kernel_op_85;
             const real_t tmp_kernel_op_87 = tmp_kernel_op_49*pow(tmp_kernel_op_86, -0.50000000000000000);
             const real_t tmp_kernel_op_88 = tmp_kernel_op_82*tmp_kernel_op_87;
             const real_t tmp_kernel_op_89 = -tmp_kernel_op_19*(rayVertex_0 + tmp_kernel_op_82) + tmp_kernel_op_3*(rayVertex_1 + tmp_kernel_op_84);
             const real_t tmp_kernel_op_90 = pow(tmp_kernel_op_86, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_91 = tmp_kernel_op_90*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_89);
             const real_t tmp_kernel_op_92 = tmp_kernel_op_84*tmp_kernel_op_87;
             const real_t tmp_kernel_op_93 = tmp_kernel_op_90*(radRayVertex + tmp_kernel_op_48*tmp_kernel_op_89);
             const real_t tmp_kernel_op_94 = tmp_kernel_op_82*tmp_kernel_op_84;
             const real_t tmp_kernel_op_95 = abs_det_jac_affine_BLUE*0.16666666666666666*abs((tmp_kernel_op_19*tmp_kernel_op_88 - tmp_kernel_op_85*tmp_kernel_op_91)*(tmp_kernel_op_3*tmp_kernel_op_92 + tmp_kernel_op_83*tmp_kernel_op_93) - (tmp_kernel_op_19*tmp_kernel_op_92 + tmp_kernel_op_91*tmp_kernel_op_94)*(tmp_kernel_op_3*tmp_kernel_op_88 - tmp_kernel_op_93*tmp_kernel_op_94));
             const real_t tmp_kernel_op_96 = tmp_kernel_op_95*0.16666666666666671;
             const real_t tmp_kernel_op_100 = p_affine_0_1 + tmp_kernel_op_6*0.16666666666666666 + tmp_kernel_op_8*0.16666666666666666;
             const real_t tmp_kernel_op_101 = p_affine_0_0 + tmp_kernel_op_11*0.16666666666666666 + tmp_kernel_op_13*0.16666666666666666;
             const real_t tmp_kernel_op_102 = (tmp_kernel_op_101*tmp_kernel_op_101);
             const real_t tmp_kernel_op_103 = (tmp_kernel_op_100*tmp_kernel_op_100);
             const real_t tmp_kernel_op_104 = tmp_kernel_op_102 + tmp_kernel_op_103;
             const real_t tmp_kernel_op_105 = pow(tmp_kernel_op_104, -0.50000000000000000)*tmp_kernel_op_24;
             const real_t tmp_kernel_op_106 = tmp_kernel_op_100*tmp_kernel_op_105;
             const real_t tmp_kernel_op_107 = pow(tmp_kernel_op_104, -1.5000000000000000);
             const real_t tmp_kernel_op_108 = radRayVertex + tmp_kernel_op_23*(tmp_kernel_op_20*(tmp_kernel_op_101 + tmp_kernel_op_29) - tmp_kernel_op_4*(tmp_kernel_op_100 + tmp_kernel_op_28));
             const real_t tmp_kernel_op_109 = tmp_kernel_op_102*tmp_kernel_op_107*tmp_kernel_op_108*1.0 - tmp_kernel_op_106*tmp_kernel_op_4;
             const real_t tmp_kernel_op_110 = tmp_kernel_op_101*tmp_kernel_op_105;
             const real_t tmp_kernel_op_111 = tmp_kernel_op_107*tmp_kernel_op_108*1.0;
             const real_t tmp_kernel_op_112 = -tmp_kernel_op_100*tmp_kernel_op_101*tmp_kernel_op_111 + tmp_kernel_op_106*tmp_kernel_op_20;
             const real_t tmp_kernel_op_113 = 1.0 / (tmp_kernel_op_109*(tmp_kernel_op_103*tmp_kernel_op_111 + tmp_kernel_op_110*tmp_kernel_op_20) - tmp_kernel_op_112*(-tmp_kernel_op_100*tmp_kernel_op_101*tmp_kernel_op_107*tmp_kernel_op_108 - tmp_kernel_op_110*tmp_kernel_op_4));
             const real_t tmp_kernel_op_114 = tmp_kernel_op_109*tmp_kernel_op_113;
             const real_t tmp_kernel_op_115 = -tmp_kernel_op_112*tmp_kernel_op_113;
             const real_t tmp_kernel_op_116 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_114 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_115;
             const real_t tmp_kernel_op_117 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_114 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_115;
             const real_t tmp_kernel_op_118 = -tmp_kernel_op_116*tmp_kernel_op_99 - tmp_kernel_op_117*tmp_kernel_op_99;
             const real_t tmp_kernel_op_119 = tmp_kernel_op_10*0.16666666666666666 + tmp_kernel_op_12*0.16666666666666666 + tmp_kernel_op_41;
             const real_t tmp_kernel_op_120 = (tmp_kernel_op_119*tmp_kernel_op_119);
             const real_t tmp_kernel_op_121 = tmp_kernel_op_44 + tmp_kernel_op_5*0.16666666666666666 + tmp_kernel_op_7*0.16666666666666666;
             const real_t tmp_kernel_op_122 = (tmp_kernel_op_121*tmp_kernel_op_121);
             const real_t tmp_kernel_op_123 = tmp_kernel_op_120 + tmp_kernel_op_122;
             const real_t tmp_kernel_op_124 = pow(tmp_kernel_op_123, -0.50000000000000000)*tmp_kernel_op_49;
             const real_t tmp_kernel_op_125 = tmp_kernel_op_119*tmp_kernel_op_124;
             const real_t tmp_kernel_op_126 = -tmp_kernel_op_19*(rayVertex_0 + tmp_kernel_op_119) + tmp_kernel_op_3*(rayVertex_1 + tmp_kernel_op_121);
             const real_t tmp_kernel_op_127 = pow(tmp_kernel_op_123, -1.5000000000000000)*1.0;
             const real_t tmp_kernel_op_128 = tmp_kernel_op_127*(radRayVertex + tmp_kernel_op_126*tmp_kernel_op_48);
             const real_t tmp_kernel_op_129 = tmp_kernel_op_121*tmp_kernel_op_124;
             const real_t tmp_kernel_op_130 = tmp_kernel_op_127*(radRayVertex + tmp_kernel_op_126*tmp_kernel_op_48);
             const real_t tmp_kernel_op_131 = tmp_kernel_op_119*tmp_kernel_op_121;
             const real_t tmp_kernel_op_132 = abs_det_jac_affine_BLUE*0.16666666666666666*abs(-(tmp_kernel_op_120*tmp_kernel_op_130 + tmp_kernel_op_129*tmp_kernel_op_3)*(-tmp_kernel_op_122*tmp_kernel_op_128 + tmp_kernel_op_125*tmp_kernel_op_19) + (tmp_kernel_op_125*tmp_kernel_op_3 - tmp_kernel_op_130*tmp_kernel_op_131)*(tmp_kernel_op_128*tmp_kernel_op_131 + tmp_kernel_op_129*tmp_kernel_op_19));
             const real_t tmp_kernel_op_133 = tmp_kernel_op_132*0.66666666666666674;
             const real_t tmp_kernel_op_134 = tmp_kernel_op_38*(tmp_kernel_op_0 - 1.0);
             const real_t tmp_kernel_op_135 = tmp_kernel_op_79*(tmp_kernel_op_60 - 1.0);
             const real_t tmp_kernel_op_136 = tmp_kernel_op_116*(tmp_kernel_op_97 - 1.0);
             const real_t tmp_kernel_op_137 = tmp_kernel_op_39*(tmp_kernel_op_1 - 1.0);
             const real_t tmp_kernel_op_138 = tmp_kernel_op_80*(tmp_kernel_op_61 - 1.0);
             const real_t tmp_kernel_op_139 = tmp_kernel_op_117*(tmp_kernel_op_98 - 1.0);
             const real_t tmp_kernel_op_140 = tmp_kernel_op_0*tmp_kernel_op_39;
             const real_t tmp_kernel_op_141 = tmp_kernel_op_1*tmp_kernel_op_38;
             const real_t tmp_kernel_op_142 = -tmp_kernel_op_140 - tmp_kernel_op_141;
             const real_t tmp_kernel_op_143 = tmp_kernel_op_60*tmp_kernel_op_80;
             const real_t tmp_kernel_op_144 = tmp_kernel_op_61*tmp_kernel_op_79;
             const real_t tmp_kernel_op_145 = -tmp_kernel_op_143 - tmp_kernel_op_144;
             const real_t tmp_kernel_op_146 = tmp_kernel_op_117*tmp_kernel_op_97;
             const real_t tmp_kernel_op_147 = tmp_kernel_op_116*tmp_kernel_op_98;
             const real_t tmp_kernel_op_148 = -tmp_kernel_op_146 - tmp_kernel_op_147;
             const real_t tmp_kernel_op_149 = tmp_kernel_op_141 - tmp_kernel_op_39*(-tmp_kernel_op_0 - 1.333333333333333);
             const real_t tmp_kernel_op_150 = tmp_kernel_op_144 - tmp_kernel_op_80*(-tmp_kernel_op_60 + 2.666666666666667);
             const real_t tmp_kernel_op_151 = -tmp_kernel_op_117*(-tmp_kernel_op_97 + 2.666666666666667) + tmp_kernel_op_147;
             const real_t tmp_kernel_op_152 = tmp_kernel_op_140 - tmp_kernel_op_38*(-tmp_kernel_op_1 + 2.666666666666667);
             const real_t tmp_kernel_op_153 = tmp_kernel_op_143 - tmp_kernel_op_79*(-tmp_kernel_op_61 - 1.333333333333333);
             const real_t tmp_kernel_op_154 = -tmp_kernel_op_116*(-tmp_kernel_op_98 + 2.666666666666667) + tmp_kernel_op_146;
             const real_t tmp_kernel_op_155 = tmp_kernel_op_58*0.16666666666666666;
             const real_t tmp_kernel_op_156 = tmp_kernel_op_95*0.66666666666666663;
             const real_t tmp_kernel_op_157 = tmp_kernel_op_132*0.16666666666666666;
             const real_t tmp_kernel_op_158 = tmp_kernel_op_58*0.66666666666666663;
             const real_t tmp_kernel_op_159 = tmp_kernel_op_95*0.16666666666666666;
             const real_t tmp_kernel_op_160 = tmp_kernel_op_132*0.16666666666666666;
             const real_t elMat_0_0 = tmp_kernel_op_118*tmp_kernel_op_133 + tmp_kernel_op_40*tmp_kernel_op_59 + tmp_kernel_op_81*tmp_kernel_op_96;
             const real_t elMat_0_1 = -tmp_kernel_op_133*tmp_kernel_op_136 - tmp_kernel_op_134*tmp_kernel_op_59 - tmp_kernel_op_135*tmp_kernel_op_96;
             const real_t elMat_0_2 = -tmp_kernel_op_133*tmp_kernel_op_139 - tmp_kernel_op_137*tmp_kernel_op_59 - tmp_kernel_op_138*tmp_kernel_op_96;
             const real_t elMat_0_3 = tmp_kernel_op_133*tmp_kernel_op_148 + tmp_kernel_op_142*tmp_kernel_op_59 + tmp_kernel_op_145*tmp_kernel_op_96;
             const real_t elMat_0_4 = tmp_kernel_op_133*tmp_kernel_op_151 + tmp_kernel_op_149*tmp_kernel_op_59 + tmp_kernel_op_150*tmp_kernel_op_96;
             const real_t elMat_0_5 = tmp_kernel_op_133*tmp_kernel_op_154 + tmp_kernel_op_152*tmp_kernel_op_59 + tmp_kernel_op_153*tmp_kernel_op_96;
             const real_t elMat_1_0 = tmp_kernel_op_118*tmp_kernel_op_157 + tmp_kernel_op_155*tmp_kernel_op_40 + tmp_kernel_op_156*tmp_kernel_op_81;
             const real_t elMat_1_1 = -tmp_kernel_op_134*tmp_kernel_op_155 - tmp_kernel_op_135*tmp_kernel_op_156 - tmp_kernel_op_136*tmp_kernel_op_157;
             const real_t elMat_1_2 = -tmp_kernel_op_137*tmp_kernel_op_155 - tmp_kernel_op_138*tmp_kernel_op_156 - tmp_kernel_op_139*tmp_kernel_op_157;
             const real_t elMat_1_3 = tmp_kernel_op_142*tmp_kernel_op_155 + tmp_kernel_op_145*tmp_kernel_op_156 + tmp_kernel_op_148*tmp_kernel_op_157;
             const real_t elMat_1_4 = tmp_kernel_op_149*tmp_kernel_op_155 + tmp_kernel_op_150*tmp_kernel_op_156 + tmp_kernel_op_151*tmp_kernel_op_157;
             const real_t elMat_1_5 = tmp_kernel_op_152*tmp_kernel_op_155 + tmp_kernel_op_153*tmp_kernel_op_156 + tmp_kernel_op_154*tmp_kernel_op_157;
             const real_t elMat_2_0 = tmp_kernel_op_118*tmp_kernel_op_160 + tmp_kernel_op_158*tmp_kernel_op_40 + tmp_kernel_op_159*tmp_kernel_op_81;
             const real_t elMat_2_1 = -tmp_kernel_op_134*tmp_kernel_op_158 - tmp_kernel_op_135*tmp_kernel_op_159 - tmp_kernel_op_136*tmp_kernel_op_160;
             const real_t elMat_2_2 = -tmp_kernel_op_137*tmp_kernel_op_158 - tmp_kernel_op_138*tmp_kernel_op_159 - tmp_kernel_op_139*tmp_kernel_op_160;
             const real_t elMat_2_3 = tmp_kernel_op_142*tmp_kernel_op_158 + tmp_kernel_op_145*tmp_kernel_op_159 + tmp_kernel_op_148*tmp_kernel_op_160;
             const real_t elMat_2_4 = tmp_kernel_op_149*tmp_kernel_op_158 + tmp_kernel_op_150*tmp_kernel_op_159 + tmp_kernel_op_151*tmp_kernel_op_160;
             const real_t elMat_2_5 = tmp_kernel_op_152*tmp_kernel_op_158 + tmp_kernel_op_153*tmp_kernel_op_159 + tmp_kernel_op_154*tmp_kernel_op_160;
         
             std::vector< uint_t > _data_rowIdx( 3 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 18 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_1_0));
             _data_mat[7] = ((real_t)(elMat_1_1));
             _data_mat[8] = ((real_t)(elMat_1_2));
             _data_mat[9] = ((real_t)(elMat_1_3));
             _data_mat[10] = ((real_t)(elMat_1_4));
             _data_mat[11] = ((real_t)(elMat_1_5));
             _data_mat[12] = ((real_t)(elMat_2_0));
             _data_mat[13] = ((real_t)(elMat_2_1));
             _data_mat[14] = ((real_t)(elMat_2_2));
             _data_mat[15] = ((real_t)(elMat_2_3));
             _data_mat[16] = ((real_t)(elMat_2_4));
             _data_mat[17] = ((real_t)(elMat_2_5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
