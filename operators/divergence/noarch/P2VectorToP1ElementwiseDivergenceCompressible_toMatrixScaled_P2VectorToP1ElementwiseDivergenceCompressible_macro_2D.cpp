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































#include "../P2VectorToP1ElementwiseDivergenceCompressible.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorToP1ElementwiseDivergenceCompressible::toMatrixScaled_P2VectorToP1ElementwiseDivergenceCompressible_macro_2D( idx_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_rhoEdge, real_t * RESTRICT  _data_rhoVertex, idx_t * RESTRICT  _data_src_edge_0, idx_t * RESTRICT  _data_src_edge_1, idx_t * RESTRICT  _data_src_vertex_0, idx_t * RESTRICT  _data_src_vertex_1, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t toMatrixScaling ) const
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
       const real_t tmp_kernel_op_1 = tmp_kernel_op_0*0.66666666666666663;
       const real_t tmp_kernel_op_2 = 0.027777777777777776;
       const real_t tmp_kernel_op_3 = tmp_kernel_op_2*2.0;
       const real_t tmp_kernel_op_4 = 0.44444444444444442;
       const real_t tmp_kernel_op_5 = tmp_kernel_op_4*2.0;
       const real_t tmp_kernel_op_6 = tmp_kernel_op_1 + tmp_kernel_op_3 + tmp_kernel_op_5 - 1.5;
       const real_t tmp_kernel_op_7 = 2.6666666666666665;
       const real_t tmp_kernel_op_8 = tmp_kernel_op_0 - 1.0;
       const real_t tmp_kernel_op_9 = tmp_kernel_op_0 + tmp_kernel_op_7 - 3.0;
       const real_t tmp_kernel_op_11 = -tmp_kernel_op_7 + 2.666666666666667;
       const real_t tmp_kernel_op_13 = tmp_kernel_op_7 - 1.0;
       const real_t tmp_kernel_op_14 = -tmp_kernel_op_0 - 1.333333333333333;
       const real_t tmp_kernel_op_17 = tmp_kernel_op_3 - 0.16666666666666666;
       const real_t tmp_kernel_op_18 = tmp_kernel_op_5 - 0.66666666666666663;
       const real_t tmp_kernel_op_19 = -tmp_kernel_op_1 + tmp_kernel_op_4*-4.0 + tmp_kernel_op_7;
       const real_t tmp_kernel_op_20 = tmp_kernel_op_0 - tmp_kernel_op_1 + tmp_kernel_op_2*-4.0;
       const real_t tmp_kernel_op_23 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_23*0.16666666666666674;
       const real_t tmp_kernel_op_25 = 2.6666666666666665;
       const real_t tmp_kernel_op_26 = tmp_kernel_op_25*0.16666666666666666;
       const real_t tmp_kernel_op_27 = 0.44444444444444442;
       const real_t tmp_kernel_op_28 = tmp_kernel_op_27*2.0;
       const real_t tmp_kernel_op_29 = 0.027777777777777776;
       const real_t tmp_kernel_op_30 = tmp_kernel_op_29*2.0;
       const real_t tmp_kernel_op_31 = tmp_kernel_op_26 + tmp_kernel_op_28 + tmp_kernel_op_30 - 1.5;
       const real_t tmp_kernel_op_32 = 0.66666666666666663;
       const real_t tmp_kernel_op_33 = tmp_kernel_op_25 - 1.0;
       const real_t tmp_kernel_op_34 = tmp_kernel_op_25 + tmp_kernel_op_32 - 3.0;
       const real_t tmp_kernel_op_36 = -tmp_kernel_op_32 - 1.333333333333333;
       const real_t tmp_kernel_op_38 = tmp_kernel_op_32 - 1.0;
       const real_t tmp_kernel_op_39 = -tmp_kernel_op_25 + 2.666666666666667;
       const real_t tmp_kernel_op_42 = tmp_kernel_op_28 - 0.66666666666666663;
       const real_t tmp_kernel_op_43 = tmp_kernel_op_30 - 0.16666666666666666;
       const real_t tmp_kernel_op_44 = -tmp_kernel_op_26 + tmp_kernel_op_29*-4.0 + tmp_kernel_op_32;
       const real_t tmp_kernel_op_45 = tmp_kernel_op_25 - tmp_kernel_op_26 + tmp_kernel_op_27*-4.0;
       const real_t tmp_kernel_op_48 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_49 = tmp_kernel_op_48*0.16666666666666671;
       const real_t tmp_kernel_op_50 = 0.66666666666666663;
       const real_t tmp_kernel_op_51 = tmp_kernel_op_50*0.16666666666666666;
       const real_t tmp_kernel_op_52 = 0.027777777777777776;
       const real_t tmp_kernel_op_53 = tmp_kernel_op_52*2.0;
       const real_t tmp_kernel_op_54 = 0.027777777777777776;
       const real_t tmp_kernel_op_55 = tmp_kernel_op_54*2.0;
       const real_t tmp_kernel_op_56 = tmp_kernel_op_51 + tmp_kernel_op_53 + tmp_kernel_op_55;
       const real_t tmp_kernel_op_57 = 0.66666666666666663;
       const real_t tmp_kernel_op_58 = tmp_kernel_op_50 - 1.0;
       const real_t tmp_kernel_op_59 = tmp_kernel_op_50 + tmp_kernel_op_57 - 3.0;
       const real_t tmp_kernel_op_61 = -tmp_kernel_op_57 + 2.666666666666667;
       const real_t tmp_kernel_op_63 = tmp_kernel_op_57 - 1.0;
       const real_t tmp_kernel_op_64 = -tmp_kernel_op_50 + 2.666666666666667;
       const real_t tmp_kernel_op_67 = tmp_kernel_op_53 - 0.16666666666666666;
       const real_t tmp_kernel_op_68 = tmp_kernel_op_55 - 0.16666666666666666;
       const real_t tmp_kernel_op_69 = -tmp_kernel_op_51 + tmp_kernel_op_54*-4.0 + tmp_kernel_op_57;
       const real_t tmp_kernel_op_70 = tmp_kernel_op_50 - tmp_kernel_op_51 + tmp_kernel_op_52*-4.0;
       const real_t tmp_kernel_op_73 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_74 = tmp_kernel_op_73*0.66666666666666674;
       const real_t tmp_kernel_op_87 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_88 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_90 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_32;
       const real_t tmp_kernel_op_91 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_25;
       const real_t tmp_kernel_op_93 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_57;
       const real_t tmp_kernel_op_94 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_50;
       const real_t tmp_kernel_op_114 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_115 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_117 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_32;
       const real_t tmp_kernel_op_118 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_25;
       const real_t tmp_kernel_op_120 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_57;
       const real_t tmp_kernel_op_121 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_50;
       const real_t tmp_kernel_op_129 = tmp_kernel_op_23*0.16666666666666666;
       const real_t tmp_kernel_op_130 = tmp_kernel_op_48*0.66666666666666663;
       const real_t tmp_kernel_op_131 = tmp_kernel_op_73*0.16666666666666666;
       const real_t tmp_kernel_op_132 = tmp_kernel_op_23*0.66666666666666663;
       const real_t tmp_kernel_op_133 = tmp_kernel_op_48*0.16666666666666666;
       const real_t tmp_kernel_op_134 = tmp_kernel_op_73*0.16666666666666666;
       const real_t tmp_moved_constant_12 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t tmp_moved_constant_13 = tmp_moved_constant_12*0.16666666666666674;
       const real_t tmp_moved_constant_20 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t tmp_moved_constant_21 = tmp_moved_constant_20*0.16666666666666671;
       const real_t tmp_moved_constant_28 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t tmp_moved_constant_29 = tmp_moved_constant_28*0.66666666666666674;
       const real_t tmp_moved_constant_42 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_43 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_45 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_32;
       const real_t tmp_moved_constant_46 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_25;
       const real_t tmp_moved_constant_48 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_57;
       const real_t tmp_moved_constant_49 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_50;
       const real_t tmp_moved_constant_69 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_7;
       const real_t tmp_moved_constant_70 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const real_t tmp_moved_constant_72 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_32;
       const real_t tmp_moved_constant_73 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_25;
       const real_t tmp_moved_constant_75 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_57;
       const real_t tmp_moved_constant_76 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_50;
       const real_t tmp_moved_constant_84 = tmp_moved_constant_12*0.16666666666666666;
       const real_t tmp_moved_constant_85 = tmp_moved_constant_20*0.66666666666666663;
       const real_t tmp_moved_constant_86 = tmp_moved_constant_28*0.16666666666666666;
       const real_t tmp_moved_constant_87 = tmp_moved_constant_12*0.66666666666666663;
       const real_t tmp_moved_constant_88 = tmp_moved_constant_20*0.16666666666666666;
       const real_t tmp_moved_constant_89 = tmp_moved_constant_28*0.16666666666666666;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t rho_dof_0 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_3 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t rho_dof_4 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t rho_dof_5 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t tmp_kernel_op_10 = rho_dof_0*tmp_kernel_op_9;
             const real_t tmp_kernel_op_12 = rho_dof_1*tmp_kernel_op_8 + rho_dof_3*tmp_kernel_op_7 - rho_dof_4*tmp_kernel_op_7 + rho_dof_5*tmp_kernel_op_11 + tmp_kernel_op_10;
             const real_t tmp_kernel_op_15 = rho_dof_2*tmp_kernel_op_13 + rho_dof_3*tmp_kernel_op_0 + rho_dof_4*tmp_kernel_op_14 - rho_dof_5*tmp_kernel_op_0 + tmp_kernel_op_10;
             const real_t tmp_kernel_op_16 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_12 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_15;
             const real_t tmp_kernel_op_21 = rho_dof_0*tmp_kernel_op_6 + rho_dof_1*tmp_kernel_op_17 + rho_dof_2*tmp_kernel_op_18 + rho_dof_3*tmp_kernel_op_1 + rho_dof_4*tmp_kernel_op_19 + rho_dof_5*tmp_kernel_op_20;
             const real_t tmp_kernel_op_22 = -tmp_kernel_op_16*tmp_kernel_op_6 - tmp_kernel_op_21*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_9);
             const real_t tmp_kernel_op_35 = rho_dof_0*tmp_kernel_op_34;
             const real_t tmp_kernel_op_37 = rho_dof_1*tmp_kernel_op_33 + rho_dof_3*tmp_kernel_op_32 - rho_dof_4*tmp_kernel_op_32 + rho_dof_5*tmp_kernel_op_36 + tmp_kernel_op_35;
             const real_t tmp_kernel_op_40 = rho_dof_2*tmp_kernel_op_38 + rho_dof_3*tmp_kernel_op_25 + rho_dof_4*tmp_kernel_op_39 - rho_dof_5*tmp_kernel_op_25 + tmp_kernel_op_35;
             const real_t tmp_kernel_op_41 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_37 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_40;
             const real_t tmp_kernel_op_46 = rho_dof_0*tmp_kernel_op_31 + rho_dof_1*tmp_kernel_op_42 + rho_dof_2*tmp_kernel_op_43 + rho_dof_3*tmp_kernel_op_26 + rho_dof_4*tmp_kernel_op_44 + rho_dof_5*tmp_kernel_op_45;
             const real_t tmp_kernel_op_47 = -tmp_kernel_op_31*tmp_kernel_op_41 - tmp_kernel_op_46*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_34 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_34);
             const real_t tmp_kernel_op_60 = rho_dof_0*tmp_kernel_op_59;
             const real_t tmp_kernel_op_62 = rho_dof_1*tmp_kernel_op_58 + rho_dof_3*tmp_kernel_op_57 - rho_dof_4*tmp_kernel_op_57 + rho_dof_5*tmp_kernel_op_61 + tmp_kernel_op_60;
             const real_t tmp_kernel_op_65 = rho_dof_2*tmp_kernel_op_63 + rho_dof_3*tmp_kernel_op_50 + rho_dof_4*tmp_kernel_op_64 - rho_dof_5*tmp_kernel_op_50 + tmp_kernel_op_60;
             const real_t tmp_kernel_op_66 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_62 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_65;
             const real_t tmp_kernel_op_71 = rho_dof_0*tmp_kernel_op_56 + rho_dof_1*tmp_kernel_op_67 + rho_dof_2*tmp_kernel_op_68 + rho_dof_3*tmp_kernel_op_51 + rho_dof_4*tmp_kernel_op_69 + rho_dof_5*tmp_kernel_op_70;
             const real_t tmp_kernel_op_72 = -tmp_kernel_op_56*tmp_kernel_op_66 - tmp_kernel_op_71*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_59 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_59);
             const real_t tmp_kernel_op_75 = tmp_kernel_op_21*tmp_kernel_op_8;
             const real_t tmp_kernel_op_76 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_75 - tmp_kernel_op_16*tmp_kernel_op_17;
             const real_t tmp_kernel_op_77 = tmp_kernel_op_33*tmp_kernel_op_46;
             const real_t tmp_kernel_op_78 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_77 - tmp_kernel_op_41*tmp_kernel_op_42;
             const real_t tmp_kernel_op_79 = tmp_kernel_op_58*tmp_kernel_op_71;
             const real_t tmp_kernel_op_80 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_79 - tmp_kernel_op_66*tmp_kernel_op_67;
             const real_t tmp_kernel_op_81 = tmp_kernel_op_13*tmp_kernel_op_21;
             const real_t tmp_kernel_op_82 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_81 - tmp_kernel_op_16*tmp_kernel_op_18;
             const real_t tmp_kernel_op_83 = tmp_kernel_op_38*tmp_kernel_op_46;
             const real_t tmp_kernel_op_84 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_83 - tmp_kernel_op_41*tmp_kernel_op_43;
             const real_t tmp_kernel_op_85 = tmp_kernel_op_63*tmp_kernel_op_71;
             const real_t tmp_kernel_op_86 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_85 - tmp_kernel_op_66*tmp_kernel_op_68;
             const real_t tmp_kernel_op_89 = -tmp_kernel_op_1*tmp_kernel_op_16 - tmp_kernel_op_21*(tmp_kernel_op_87 + tmp_kernel_op_88);
             const real_t tmp_kernel_op_92 = -tmp_kernel_op_26*tmp_kernel_op_41 - tmp_kernel_op_46*(tmp_kernel_op_90 + tmp_kernel_op_91);
             const real_t tmp_kernel_op_95 = -tmp_kernel_op_51*tmp_kernel_op_66 - tmp_kernel_op_71*(tmp_kernel_op_93 + tmp_kernel_op_94);
             const real_t tmp_kernel_op_96 = -tmp_kernel_op_16*tmp_kernel_op_19 - tmp_kernel_op_21*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_14 - tmp_kernel_op_87);
             const real_t tmp_kernel_op_97 = -tmp_kernel_op_41*tmp_kernel_op_44 - tmp_kernel_op_46*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_39 - tmp_kernel_op_90);
             const real_t tmp_kernel_op_98 = -tmp_kernel_op_66*tmp_kernel_op_69 - tmp_kernel_op_71*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_64 - tmp_kernel_op_93);
             const real_t tmp_kernel_op_99 = -tmp_kernel_op_16*tmp_kernel_op_20 - tmp_kernel_op_21*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_11 - tmp_kernel_op_88);
             const real_t tmp_kernel_op_100 = -tmp_kernel_op_41*tmp_kernel_op_45 - tmp_kernel_op_46*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_36 - tmp_kernel_op_91);
             const real_t tmp_kernel_op_101 = -tmp_kernel_op_66*tmp_kernel_op_70 - tmp_kernel_op_71*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_61 - tmp_kernel_op_94);
             const real_t tmp_kernel_op_102 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_12 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_15;
             const real_t tmp_kernel_op_103 = -tmp_kernel_op_102*tmp_kernel_op_6 - tmp_kernel_op_21*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_9);
             const real_t tmp_kernel_op_104 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_37 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_40;
             const real_t tmp_kernel_op_105 = -tmp_kernel_op_104*tmp_kernel_op_31 - tmp_kernel_op_46*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_34 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_34);
             const real_t tmp_kernel_op_106 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_62 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_65;
             const real_t tmp_kernel_op_107 = -tmp_kernel_op_106*tmp_kernel_op_56 - tmp_kernel_op_71*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_59 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_59);
             const real_t tmp_kernel_op_108 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_75 - tmp_kernel_op_102*tmp_kernel_op_17;
             const real_t tmp_kernel_op_109 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_77 - tmp_kernel_op_104*tmp_kernel_op_42;
             const real_t tmp_kernel_op_110 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_79 - tmp_kernel_op_106*tmp_kernel_op_67;
             const real_t tmp_kernel_op_111 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_81 - tmp_kernel_op_102*tmp_kernel_op_18;
             const real_t tmp_kernel_op_112 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_83 - tmp_kernel_op_104*tmp_kernel_op_43;
             const real_t tmp_kernel_op_113 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_85 - tmp_kernel_op_106*tmp_kernel_op_68;
             const real_t tmp_kernel_op_116 = -tmp_kernel_op_1*tmp_kernel_op_102 - tmp_kernel_op_21*(tmp_kernel_op_114 + tmp_kernel_op_115);
             const real_t tmp_kernel_op_119 = -tmp_kernel_op_104*tmp_kernel_op_26 - tmp_kernel_op_46*(tmp_kernel_op_117 + tmp_kernel_op_118);
             const real_t tmp_kernel_op_122 = -tmp_kernel_op_106*tmp_kernel_op_51 - tmp_kernel_op_71*(tmp_kernel_op_120 + tmp_kernel_op_121);
             const real_t tmp_kernel_op_123 = -tmp_kernel_op_102*tmp_kernel_op_19 - tmp_kernel_op_21*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_14 - tmp_kernel_op_114);
             const real_t tmp_kernel_op_124 = -tmp_kernel_op_104*tmp_kernel_op_44 - tmp_kernel_op_46*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_39 - tmp_kernel_op_117);
             const real_t tmp_kernel_op_125 = -tmp_kernel_op_106*tmp_kernel_op_69 - tmp_kernel_op_71*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_64 - tmp_kernel_op_120);
             const real_t tmp_kernel_op_126 = -tmp_kernel_op_102*tmp_kernel_op_20 - tmp_kernel_op_21*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_11 - tmp_kernel_op_115);
             const real_t tmp_kernel_op_127 = -tmp_kernel_op_104*tmp_kernel_op_45 - tmp_kernel_op_46*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_36 - tmp_kernel_op_118);
             const real_t tmp_kernel_op_128 = -tmp_kernel_op_106*tmp_kernel_op_70 - tmp_kernel_op_71*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_61 - tmp_kernel_op_121);
             const real_t elMat_0_0 = toMatrixScaling*(tmp_kernel_op_22*tmp_kernel_op_24 + tmp_kernel_op_47*tmp_kernel_op_49 + tmp_kernel_op_72*tmp_kernel_op_74);
             const real_t elMat_0_1 = toMatrixScaling*(tmp_kernel_op_24*tmp_kernel_op_76 + tmp_kernel_op_49*tmp_kernel_op_78 + tmp_kernel_op_74*tmp_kernel_op_80);
             const real_t elMat_0_2 = toMatrixScaling*(tmp_kernel_op_24*tmp_kernel_op_82 + tmp_kernel_op_49*tmp_kernel_op_84 + tmp_kernel_op_74*tmp_kernel_op_86);
             const real_t elMat_0_3 = toMatrixScaling*(tmp_kernel_op_24*tmp_kernel_op_89 + tmp_kernel_op_49*tmp_kernel_op_92 + tmp_kernel_op_74*tmp_kernel_op_95);
             const real_t elMat_0_4 = toMatrixScaling*(tmp_kernel_op_24*tmp_kernel_op_96 + tmp_kernel_op_49*tmp_kernel_op_97 + tmp_kernel_op_74*tmp_kernel_op_98);
             const real_t elMat_0_5 = toMatrixScaling*(tmp_kernel_op_100*tmp_kernel_op_49 + tmp_kernel_op_101*tmp_kernel_op_74 + tmp_kernel_op_24*tmp_kernel_op_99);
             const real_t elMat_0_6 = toMatrixScaling*(tmp_kernel_op_103*tmp_kernel_op_24 + tmp_kernel_op_105*tmp_kernel_op_49 + tmp_kernel_op_107*tmp_kernel_op_74);
             const real_t elMat_0_7 = toMatrixScaling*(tmp_kernel_op_108*tmp_kernel_op_24 + tmp_kernel_op_109*tmp_kernel_op_49 + tmp_kernel_op_110*tmp_kernel_op_74);
             const real_t elMat_0_8 = toMatrixScaling*(tmp_kernel_op_111*tmp_kernel_op_24 + tmp_kernel_op_112*tmp_kernel_op_49 + tmp_kernel_op_113*tmp_kernel_op_74);
             const real_t elMat_0_9 = toMatrixScaling*(tmp_kernel_op_116*tmp_kernel_op_24 + tmp_kernel_op_119*tmp_kernel_op_49 + tmp_kernel_op_122*tmp_kernel_op_74);
             const real_t elMat_0_10 = toMatrixScaling*(tmp_kernel_op_123*tmp_kernel_op_24 + tmp_kernel_op_124*tmp_kernel_op_49 + tmp_kernel_op_125*tmp_kernel_op_74);
             const real_t elMat_0_11 = toMatrixScaling*(tmp_kernel_op_126*tmp_kernel_op_24 + tmp_kernel_op_127*tmp_kernel_op_49 + tmp_kernel_op_128*tmp_kernel_op_74);
             const real_t elMat_1_0 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_22 + tmp_kernel_op_130*tmp_kernel_op_47 + tmp_kernel_op_131*tmp_kernel_op_72);
             const real_t elMat_1_1 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_76 + tmp_kernel_op_130*tmp_kernel_op_78 + tmp_kernel_op_131*tmp_kernel_op_80);
             const real_t elMat_1_2 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_82 + tmp_kernel_op_130*tmp_kernel_op_84 + tmp_kernel_op_131*tmp_kernel_op_86);
             const real_t elMat_1_3 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_89 + tmp_kernel_op_130*tmp_kernel_op_92 + tmp_kernel_op_131*tmp_kernel_op_95);
             const real_t elMat_1_4 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_96 + tmp_kernel_op_130*tmp_kernel_op_97 + tmp_kernel_op_131*tmp_kernel_op_98);
             const real_t elMat_1_5 = toMatrixScaling*(tmp_kernel_op_100*tmp_kernel_op_130 + tmp_kernel_op_101*tmp_kernel_op_131 + tmp_kernel_op_129*tmp_kernel_op_99);
             const real_t elMat_1_6 = toMatrixScaling*(tmp_kernel_op_103*tmp_kernel_op_129 + tmp_kernel_op_105*tmp_kernel_op_130 + tmp_kernel_op_107*tmp_kernel_op_131);
             const real_t elMat_1_7 = toMatrixScaling*(tmp_kernel_op_108*tmp_kernel_op_129 + tmp_kernel_op_109*tmp_kernel_op_130 + tmp_kernel_op_110*tmp_kernel_op_131);
             const real_t elMat_1_8 = toMatrixScaling*(tmp_kernel_op_111*tmp_kernel_op_129 + tmp_kernel_op_112*tmp_kernel_op_130 + tmp_kernel_op_113*tmp_kernel_op_131);
             const real_t elMat_1_9 = toMatrixScaling*(tmp_kernel_op_116*tmp_kernel_op_129 + tmp_kernel_op_119*tmp_kernel_op_130 + tmp_kernel_op_122*tmp_kernel_op_131);
             const real_t elMat_1_10 = toMatrixScaling*(tmp_kernel_op_123*tmp_kernel_op_129 + tmp_kernel_op_124*tmp_kernel_op_130 + tmp_kernel_op_125*tmp_kernel_op_131);
             const real_t elMat_1_11 = toMatrixScaling*(tmp_kernel_op_126*tmp_kernel_op_129 + tmp_kernel_op_127*tmp_kernel_op_130 + tmp_kernel_op_128*tmp_kernel_op_131);
             const real_t elMat_2_0 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_22 + tmp_kernel_op_133*tmp_kernel_op_47 + tmp_kernel_op_134*tmp_kernel_op_72);
             const real_t elMat_2_1 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_76 + tmp_kernel_op_133*tmp_kernel_op_78 + tmp_kernel_op_134*tmp_kernel_op_80);
             const real_t elMat_2_2 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_82 + tmp_kernel_op_133*tmp_kernel_op_84 + tmp_kernel_op_134*tmp_kernel_op_86);
             const real_t elMat_2_3 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_89 + tmp_kernel_op_133*tmp_kernel_op_92 + tmp_kernel_op_134*tmp_kernel_op_95);
             const real_t elMat_2_4 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_96 + tmp_kernel_op_133*tmp_kernel_op_97 + tmp_kernel_op_134*tmp_kernel_op_98);
             const real_t elMat_2_5 = toMatrixScaling*(tmp_kernel_op_100*tmp_kernel_op_133 + tmp_kernel_op_101*tmp_kernel_op_134 + tmp_kernel_op_132*tmp_kernel_op_99);
             const real_t elMat_2_6 = toMatrixScaling*(tmp_kernel_op_103*tmp_kernel_op_132 + tmp_kernel_op_105*tmp_kernel_op_133 + tmp_kernel_op_107*tmp_kernel_op_134);
             const real_t elMat_2_7 = toMatrixScaling*(tmp_kernel_op_108*tmp_kernel_op_132 + tmp_kernel_op_109*tmp_kernel_op_133 + tmp_kernel_op_110*tmp_kernel_op_134);
             const real_t elMat_2_8 = toMatrixScaling*(tmp_kernel_op_111*tmp_kernel_op_132 + tmp_kernel_op_112*tmp_kernel_op_133 + tmp_kernel_op_113*tmp_kernel_op_134);
             const real_t elMat_2_9 = toMatrixScaling*(tmp_kernel_op_116*tmp_kernel_op_132 + tmp_kernel_op_119*tmp_kernel_op_133 + tmp_kernel_op_122*tmp_kernel_op_134);
             const real_t elMat_2_10 = toMatrixScaling*(tmp_kernel_op_123*tmp_kernel_op_132 + tmp_kernel_op_124*tmp_kernel_op_133 + tmp_kernel_op_125*tmp_kernel_op_134);
             const real_t elMat_2_11 = toMatrixScaling*(tmp_kernel_op_126*tmp_kernel_op_132 + tmp_kernel_op_127*tmp_kernel_op_133 + tmp_kernel_op_128*tmp_kernel_op_134);
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
             const real_t tmp_moved_constant_0 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_1 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_2 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_3 = _data_rhoEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_4 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_5 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_6 = tmp_kernel_op_9*tmp_moved_constant_0;
             const real_t tmp_moved_constant_7 = tmp_kernel_op_11*tmp_moved_constant_5 + tmp_kernel_op_7*tmp_moved_constant_3 - tmp_kernel_op_7*tmp_moved_constant_4 + tmp_kernel_op_8*tmp_moved_constant_1 + tmp_moved_constant_6;
             const real_t tmp_moved_constant_8 = tmp_kernel_op_0*tmp_moved_constant_3 - tmp_kernel_op_0*tmp_moved_constant_5 + tmp_kernel_op_13*tmp_moved_constant_2 + tmp_kernel_op_14*tmp_moved_constant_4 + tmp_moved_constant_6;
             const real_t tmp_moved_constant_9 = jac_affine_inv_0_0_BLUE*tmp_moved_constant_7 + jac_affine_inv_1_0_BLUE*tmp_moved_constant_8;
             const real_t tmp_moved_constant_10 = tmp_kernel_op_1*tmp_moved_constant_3 + tmp_kernel_op_17*tmp_moved_constant_1 + tmp_kernel_op_18*tmp_moved_constant_2 + tmp_kernel_op_19*tmp_moved_constant_4 + tmp_kernel_op_20*tmp_moved_constant_5 + tmp_kernel_op_6*tmp_moved_constant_0;
             const real_t tmp_moved_constant_11 = -tmp_kernel_op_6*tmp_moved_constant_9 - tmp_moved_constant_10*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_9 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_9);
             const real_t tmp_moved_constant_14 = tmp_kernel_op_34*tmp_moved_constant_0;
             const real_t tmp_moved_constant_15 = tmp_kernel_op_32*tmp_moved_constant_3 - tmp_kernel_op_32*tmp_moved_constant_4 + tmp_kernel_op_33*tmp_moved_constant_1 + tmp_kernel_op_36*tmp_moved_constant_5 + tmp_moved_constant_14;
             const real_t tmp_moved_constant_16 = tmp_kernel_op_25*tmp_moved_constant_3 - tmp_kernel_op_25*tmp_moved_constant_5 + tmp_kernel_op_38*tmp_moved_constant_2 + tmp_kernel_op_39*tmp_moved_constant_4 + tmp_moved_constant_14;
             const real_t tmp_moved_constant_17 = jac_affine_inv_0_0_BLUE*tmp_moved_constant_15 + jac_affine_inv_1_0_BLUE*tmp_moved_constant_16;
             const real_t tmp_moved_constant_18 = tmp_kernel_op_26*tmp_moved_constant_3 + tmp_kernel_op_31*tmp_moved_constant_0 + tmp_kernel_op_42*tmp_moved_constant_1 + tmp_kernel_op_43*tmp_moved_constant_2 + tmp_kernel_op_44*tmp_moved_constant_4 + tmp_kernel_op_45*tmp_moved_constant_5;
             const real_t tmp_moved_constant_19 = -tmp_kernel_op_31*tmp_moved_constant_17 - tmp_moved_constant_18*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_34 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_34);
             const real_t tmp_moved_constant_22 = tmp_kernel_op_59*tmp_moved_constant_0;
             const real_t tmp_moved_constant_23 = tmp_kernel_op_57*tmp_moved_constant_3 - tmp_kernel_op_57*tmp_moved_constant_4 + tmp_kernel_op_58*tmp_moved_constant_1 + tmp_kernel_op_61*tmp_moved_constant_5 + tmp_moved_constant_22;
             const real_t tmp_moved_constant_24 = tmp_kernel_op_50*tmp_moved_constant_3 - tmp_kernel_op_50*tmp_moved_constant_5 + tmp_kernel_op_63*tmp_moved_constant_2 + tmp_kernel_op_64*tmp_moved_constant_4 + tmp_moved_constant_22;
             const real_t tmp_moved_constant_25 = jac_affine_inv_0_0_BLUE*tmp_moved_constant_23 + jac_affine_inv_1_0_BLUE*tmp_moved_constant_24;
             const real_t tmp_moved_constant_26 = tmp_kernel_op_51*tmp_moved_constant_3 + tmp_kernel_op_56*tmp_moved_constant_0 + tmp_kernel_op_67*tmp_moved_constant_1 + tmp_kernel_op_68*tmp_moved_constant_2 + tmp_kernel_op_69*tmp_moved_constant_4 + tmp_kernel_op_70*tmp_moved_constant_5;
             const real_t tmp_moved_constant_27 = -tmp_kernel_op_56*tmp_moved_constant_25 - tmp_moved_constant_26*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_59 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_59);
             const real_t tmp_moved_constant_30 = tmp_kernel_op_8*tmp_moved_constant_10;
             const real_t tmp_moved_constant_31 = -jac_affine_inv_0_0_BLUE*tmp_moved_constant_30 - tmp_kernel_op_17*tmp_moved_constant_9;
             const real_t tmp_moved_constant_32 = tmp_kernel_op_33*tmp_moved_constant_18;
             const real_t tmp_moved_constant_33 = -jac_affine_inv_0_0_BLUE*tmp_moved_constant_32 - tmp_kernel_op_42*tmp_moved_constant_17;
             const real_t tmp_moved_constant_34 = tmp_kernel_op_58*tmp_moved_constant_26;
             const real_t tmp_moved_constant_35 = -jac_affine_inv_0_0_BLUE*tmp_moved_constant_34 - tmp_kernel_op_67*tmp_moved_constant_25;
             const real_t tmp_moved_constant_36 = tmp_kernel_op_13*tmp_moved_constant_10;
             const real_t tmp_moved_constant_37 = -jac_affine_inv_1_0_BLUE*tmp_moved_constant_36 - tmp_kernel_op_18*tmp_moved_constant_9;
             const real_t tmp_moved_constant_38 = tmp_kernel_op_38*tmp_moved_constant_18;
             const real_t tmp_moved_constant_39 = -jac_affine_inv_1_0_BLUE*tmp_moved_constant_38 - tmp_kernel_op_43*tmp_moved_constant_17;
             const real_t tmp_moved_constant_40 = tmp_kernel_op_63*tmp_moved_constant_26;
             const real_t tmp_moved_constant_41 = -jac_affine_inv_1_0_BLUE*tmp_moved_constant_40 - tmp_kernel_op_68*tmp_moved_constant_25;
             const real_t tmp_moved_constant_44 = -tmp_kernel_op_1*tmp_moved_constant_9 - tmp_moved_constant_10*(tmp_moved_constant_42 + tmp_moved_constant_43);
             const real_t tmp_moved_constant_47 = -tmp_kernel_op_26*tmp_moved_constant_17 - tmp_moved_constant_18*(tmp_moved_constant_45 + tmp_moved_constant_46);
             const real_t tmp_moved_constant_50 = -tmp_kernel_op_51*tmp_moved_constant_25 - tmp_moved_constant_26*(tmp_moved_constant_48 + tmp_moved_constant_49);
             const real_t tmp_moved_constant_51 = -tmp_kernel_op_19*tmp_moved_constant_9 - tmp_moved_constant_10*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_14 - tmp_moved_constant_42);
             const real_t tmp_moved_constant_52 = -tmp_kernel_op_44*tmp_moved_constant_17 - tmp_moved_constant_18*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_39 - tmp_moved_constant_45);
             const real_t tmp_moved_constant_53 = -tmp_kernel_op_69*tmp_moved_constant_25 - tmp_moved_constant_26*(jac_affine_inv_1_0_BLUE*tmp_kernel_op_64 - tmp_moved_constant_48);
             const real_t tmp_moved_constant_54 = -tmp_kernel_op_20*tmp_moved_constant_9 - tmp_moved_constant_10*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_11 - tmp_moved_constant_43);
             const real_t tmp_moved_constant_55 = -tmp_kernel_op_45*tmp_moved_constant_17 - tmp_moved_constant_18*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_36 - tmp_moved_constant_46);
             const real_t tmp_moved_constant_56 = -tmp_kernel_op_70*tmp_moved_constant_25 - tmp_moved_constant_26*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_61 - tmp_moved_constant_49);
             const real_t tmp_moved_constant_57 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_7 + jac_affine_inv_1_1_BLUE*tmp_moved_constant_8;
             const real_t tmp_moved_constant_58 = -tmp_kernel_op_6*tmp_moved_constant_57 - tmp_moved_constant_10*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_9 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_9);
             const real_t tmp_moved_constant_59 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_15 + jac_affine_inv_1_1_BLUE*tmp_moved_constant_16;
             const real_t tmp_moved_constant_60 = -tmp_kernel_op_31*tmp_moved_constant_59 - tmp_moved_constant_18*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_34 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_34);
             const real_t tmp_moved_constant_61 = jac_affine_inv_0_1_BLUE*tmp_moved_constant_23 + jac_affine_inv_1_1_BLUE*tmp_moved_constant_24;
             const real_t tmp_moved_constant_62 = -tmp_kernel_op_56*tmp_moved_constant_61 - tmp_moved_constant_26*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_59 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_59);
             const real_t tmp_moved_constant_63 = -jac_affine_inv_0_1_BLUE*tmp_moved_constant_30 - tmp_kernel_op_17*tmp_moved_constant_57;
             const real_t tmp_moved_constant_64 = -jac_affine_inv_0_1_BLUE*tmp_moved_constant_32 - tmp_kernel_op_42*tmp_moved_constant_59;
             const real_t tmp_moved_constant_65 = -jac_affine_inv_0_1_BLUE*tmp_moved_constant_34 - tmp_kernel_op_67*tmp_moved_constant_61;
             const real_t tmp_moved_constant_66 = -jac_affine_inv_1_1_BLUE*tmp_moved_constant_36 - tmp_kernel_op_18*tmp_moved_constant_57;
             const real_t tmp_moved_constant_67 = -jac_affine_inv_1_1_BLUE*tmp_moved_constant_38 - tmp_kernel_op_43*tmp_moved_constant_59;
             const real_t tmp_moved_constant_68 = -jac_affine_inv_1_1_BLUE*tmp_moved_constant_40 - tmp_kernel_op_68*tmp_moved_constant_61;
             const real_t tmp_moved_constant_71 = -tmp_kernel_op_1*tmp_moved_constant_57 - tmp_moved_constant_10*(tmp_moved_constant_69 + tmp_moved_constant_70);
             const real_t tmp_moved_constant_74 = -tmp_kernel_op_26*tmp_moved_constant_59 - tmp_moved_constant_18*(tmp_moved_constant_72 + tmp_moved_constant_73);
             const real_t tmp_moved_constant_77 = -tmp_kernel_op_51*tmp_moved_constant_61 - tmp_moved_constant_26*(tmp_moved_constant_75 + tmp_moved_constant_76);
             const real_t tmp_moved_constant_78 = -tmp_kernel_op_19*tmp_moved_constant_57 - tmp_moved_constant_10*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_14 - tmp_moved_constant_69);
             const real_t tmp_moved_constant_79 = -tmp_kernel_op_44*tmp_moved_constant_59 - tmp_moved_constant_18*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_39 - tmp_moved_constant_72);
             const real_t tmp_moved_constant_80 = -tmp_kernel_op_69*tmp_moved_constant_61 - tmp_moved_constant_26*(jac_affine_inv_1_1_BLUE*tmp_kernel_op_64 - tmp_moved_constant_75);
             const real_t tmp_moved_constant_81 = -tmp_kernel_op_20*tmp_moved_constant_57 - tmp_moved_constant_10*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_11 - tmp_moved_constant_70);
             const real_t tmp_moved_constant_82 = -tmp_kernel_op_45*tmp_moved_constant_59 - tmp_moved_constant_18*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_36 - tmp_moved_constant_73);
             const real_t tmp_moved_constant_83 = -tmp_kernel_op_70*tmp_moved_constant_61 - tmp_moved_constant_26*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_61 - tmp_moved_constant_76);
             const real_t tmp_moved_constant_90 = toMatrixScaling*(tmp_moved_constant_11*tmp_moved_constant_13 + tmp_moved_constant_19*tmp_moved_constant_21 + tmp_moved_constant_27*tmp_moved_constant_29);
             const real_t tmp_moved_constant_91 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_31 + tmp_moved_constant_21*tmp_moved_constant_33 + tmp_moved_constant_29*tmp_moved_constant_35);
             const real_t tmp_moved_constant_92 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_37 + tmp_moved_constant_21*tmp_moved_constant_39 + tmp_moved_constant_29*tmp_moved_constant_41);
             const real_t tmp_moved_constant_93 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_44 + tmp_moved_constant_21*tmp_moved_constant_47 + tmp_moved_constant_29*tmp_moved_constant_50);
             const real_t tmp_moved_constant_94 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_51 + tmp_moved_constant_21*tmp_moved_constant_52 + tmp_moved_constant_29*tmp_moved_constant_53);
             const real_t tmp_moved_constant_95 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_54 + tmp_moved_constant_21*tmp_moved_constant_55 + tmp_moved_constant_29*tmp_moved_constant_56);
             const real_t tmp_moved_constant_96 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_58 + tmp_moved_constant_21*tmp_moved_constant_60 + tmp_moved_constant_29*tmp_moved_constant_62);
             const real_t tmp_moved_constant_97 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_63 + tmp_moved_constant_21*tmp_moved_constant_64 + tmp_moved_constant_29*tmp_moved_constant_65);
             const real_t tmp_moved_constant_98 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_66 + tmp_moved_constant_21*tmp_moved_constant_67 + tmp_moved_constant_29*tmp_moved_constant_68);
             const real_t tmp_moved_constant_99 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_71 + tmp_moved_constant_21*tmp_moved_constant_74 + tmp_moved_constant_29*tmp_moved_constant_77);
             const real_t tmp_moved_constant_100 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_78 + tmp_moved_constant_21*tmp_moved_constant_79 + tmp_moved_constant_29*tmp_moved_constant_80);
             const real_t tmp_moved_constant_101 = toMatrixScaling*(tmp_moved_constant_13*tmp_moved_constant_81 + tmp_moved_constant_21*tmp_moved_constant_82 + tmp_moved_constant_29*tmp_moved_constant_83);
             const real_t tmp_moved_constant_102 = toMatrixScaling*(tmp_moved_constant_11*tmp_moved_constant_84 + tmp_moved_constant_19*tmp_moved_constant_85 + tmp_moved_constant_27*tmp_moved_constant_86);
             const real_t tmp_moved_constant_103 = toMatrixScaling*(tmp_moved_constant_31*tmp_moved_constant_84 + tmp_moved_constant_33*tmp_moved_constant_85 + tmp_moved_constant_35*tmp_moved_constant_86);
             const real_t tmp_moved_constant_104 = toMatrixScaling*(tmp_moved_constant_37*tmp_moved_constant_84 + tmp_moved_constant_39*tmp_moved_constant_85 + tmp_moved_constant_41*tmp_moved_constant_86);
             const real_t tmp_moved_constant_105 = toMatrixScaling*(tmp_moved_constant_44*tmp_moved_constant_84 + tmp_moved_constant_47*tmp_moved_constant_85 + tmp_moved_constant_50*tmp_moved_constant_86);
             const real_t tmp_moved_constant_106 = toMatrixScaling*(tmp_moved_constant_51*tmp_moved_constant_84 + tmp_moved_constant_52*tmp_moved_constant_85 + tmp_moved_constant_53*tmp_moved_constant_86);
             const real_t tmp_moved_constant_107 = toMatrixScaling*(tmp_moved_constant_54*tmp_moved_constant_84 + tmp_moved_constant_55*tmp_moved_constant_85 + tmp_moved_constant_56*tmp_moved_constant_86);
             const real_t tmp_moved_constant_108 = toMatrixScaling*(tmp_moved_constant_58*tmp_moved_constant_84 + tmp_moved_constant_60*tmp_moved_constant_85 + tmp_moved_constant_62*tmp_moved_constant_86);
             const real_t tmp_moved_constant_109 = toMatrixScaling*(tmp_moved_constant_63*tmp_moved_constant_84 + tmp_moved_constant_64*tmp_moved_constant_85 + tmp_moved_constant_65*tmp_moved_constant_86);
             const real_t tmp_moved_constant_110 = toMatrixScaling*(tmp_moved_constant_66*tmp_moved_constant_84 + tmp_moved_constant_67*tmp_moved_constant_85 + tmp_moved_constant_68*tmp_moved_constant_86);
             const real_t tmp_moved_constant_111 = toMatrixScaling*(tmp_moved_constant_71*tmp_moved_constant_84 + tmp_moved_constant_74*tmp_moved_constant_85 + tmp_moved_constant_77*tmp_moved_constant_86);
             const real_t tmp_moved_constant_112 = toMatrixScaling*(tmp_moved_constant_78*tmp_moved_constant_84 + tmp_moved_constant_79*tmp_moved_constant_85 + tmp_moved_constant_80*tmp_moved_constant_86);
             const real_t tmp_moved_constant_113 = toMatrixScaling*(tmp_moved_constant_81*tmp_moved_constant_84 + tmp_moved_constant_82*tmp_moved_constant_85 + tmp_moved_constant_83*tmp_moved_constant_86);
             const real_t tmp_moved_constant_114 = toMatrixScaling*(tmp_moved_constant_11*tmp_moved_constant_87 + tmp_moved_constant_19*tmp_moved_constant_88 + tmp_moved_constant_27*tmp_moved_constant_89);
             const real_t tmp_moved_constant_115 = toMatrixScaling*(tmp_moved_constant_31*tmp_moved_constant_87 + tmp_moved_constant_33*tmp_moved_constant_88 + tmp_moved_constant_35*tmp_moved_constant_89);
             const real_t tmp_moved_constant_116 = toMatrixScaling*(tmp_moved_constant_37*tmp_moved_constant_87 + tmp_moved_constant_39*tmp_moved_constant_88 + tmp_moved_constant_41*tmp_moved_constant_89);
             const real_t tmp_moved_constant_117 = toMatrixScaling*(tmp_moved_constant_44*tmp_moved_constant_87 + tmp_moved_constant_47*tmp_moved_constant_88 + tmp_moved_constant_50*tmp_moved_constant_89);
             const real_t tmp_moved_constant_118 = toMatrixScaling*(tmp_moved_constant_51*tmp_moved_constant_87 + tmp_moved_constant_52*tmp_moved_constant_88 + tmp_moved_constant_53*tmp_moved_constant_89);
             const real_t tmp_moved_constant_119 = toMatrixScaling*(tmp_moved_constant_54*tmp_moved_constant_87 + tmp_moved_constant_55*tmp_moved_constant_88 + tmp_moved_constant_56*tmp_moved_constant_89);
             const real_t tmp_moved_constant_120 = toMatrixScaling*(tmp_moved_constant_58*tmp_moved_constant_87 + tmp_moved_constant_60*tmp_moved_constant_88 + tmp_moved_constant_62*tmp_moved_constant_89);
             const real_t tmp_moved_constant_121 = toMatrixScaling*(tmp_moved_constant_63*tmp_moved_constant_87 + tmp_moved_constant_64*tmp_moved_constant_88 + tmp_moved_constant_65*tmp_moved_constant_89);
             const real_t tmp_moved_constant_122 = toMatrixScaling*(tmp_moved_constant_66*tmp_moved_constant_87 + tmp_moved_constant_67*tmp_moved_constant_88 + tmp_moved_constant_68*tmp_moved_constant_89);
             const real_t tmp_moved_constant_123 = toMatrixScaling*(tmp_moved_constant_71*tmp_moved_constant_87 + tmp_moved_constant_74*tmp_moved_constant_88 + tmp_moved_constant_77*tmp_moved_constant_89);
             const real_t tmp_moved_constant_124 = toMatrixScaling*(tmp_moved_constant_78*tmp_moved_constant_87 + tmp_moved_constant_79*tmp_moved_constant_88 + tmp_moved_constant_80*tmp_moved_constant_89);
             const real_t tmp_moved_constant_125 = toMatrixScaling*(tmp_moved_constant_81*tmp_moved_constant_87 + tmp_moved_constant_82*tmp_moved_constant_88 + tmp_moved_constant_83*tmp_moved_constant_89);
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
               
               
               
                   _data_mat[0] = ((real_t)(tmp_moved_constant_90));
                   _data_mat[1] = ((real_t)(tmp_moved_constant_91));
                   _data_mat[2] = ((real_t)(tmp_moved_constant_92));
                   _data_mat[3] = ((real_t)(tmp_moved_constant_93));
                   _data_mat[4] = ((real_t)(tmp_moved_constant_94));
                   _data_mat[5] = ((real_t)(tmp_moved_constant_95));
                   _data_mat[6] = ((real_t)(tmp_moved_constant_96));
                   _data_mat[7] = ((real_t)(tmp_moved_constant_97));
                   _data_mat[8] = ((real_t)(tmp_moved_constant_98));
                   _data_mat[9] = ((real_t)(tmp_moved_constant_99));
                   _data_mat[10] = ((real_t)(tmp_moved_constant_100));
                   _data_mat[11] = ((real_t)(tmp_moved_constant_101));
                   _data_mat[12] = ((real_t)(tmp_moved_constant_102));
                   _data_mat[13] = ((real_t)(tmp_moved_constant_103));
                   _data_mat[14] = ((real_t)(tmp_moved_constant_104));
                   _data_mat[15] = ((real_t)(tmp_moved_constant_105));
                   _data_mat[16] = ((real_t)(tmp_moved_constant_106));
                   _data_mat[17] = ((real_t)(tmp_moved_constant_107));
                   _data_mat[18] = ((real_t)(tmp_moved_constant_108));
                   _data_mat[19] = ((real_t)(tmp_moved_constant_109));
                   _data_mat[20] = ((real_t)(tmp_moved_constant_110));
                   _data_mat[21] = ((real_t)(tmp_moved_constant_111));
                   _data_mat[22] = ((real_t)(tmp_moved_constant_112));
                   _data_mat[23] = ((real_t)(tmp_moved_constant_113));
                   _data_mat[24] = ((real_t)(tmp_moved_constant_114));
                   _data_mat[25] = ((real_t)(tmp_moved_constant_115));
                   _data_mat[26] = ((real_t)(tmp_moved_constant_116));
                   _data_mat[27] = ((real_t)(tmp_moved_constant_117));
                   _data_mat[28] = ((real_t)(tmp_moved_constant_118));
                   _data_mat[29] = ((real_t)(tmp_moved_constant_119));
                   _data_mat[30] = ((real_t)(tmp_moved_constant_120));
                   _data_mat[31] = ((real_t)(tmp_moved_constant_121));
                   _data_mat[32] = ((real_t)(tmp_moved_constant_122));
                   _data_mat[33] = ((real_t)(tmp_moved_constant_123));
                   _data_mat[34] = ((real_t)(tmp_moved_constant_124));
                   _data_mat[35] = ((real_t)(tmp_moved_constant_125));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t rho_dof_0 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rhoVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rhoVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_3 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t rho_dof_4 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t rho_dof_5 = _data_rhoEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t tmp_kernel_op_10 = rho_dof_0*tmp_kernel_op_9;
             const real_t tmp_kernel_op_12 = rho_dof_1*tmp_kernel_op_8 + rho_dof_3*tmp_kernel_op_7 - rho_dof_4*tmp_kernel_op_7 + rho_dof_5*tmp_kernel_op_11 + tmp_kernel_op_10;
             const real_t tmp_kernel_op_15 = rho_dof_2*tmp_kernel_op_13 + rho_dof_3*tmp_kernel_op_0 + rho_dof_4*tmp_kernel_op_14 - rho_dof_5*tmp_kernel_op_0 + tmp_kernel_op_10;
             const real_t tmp_kernel_op_16 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_12 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_15;
             const real_t tmp_kernel_op_21 = rho_dof_0*tmp_kernel_op_6 + rho_dof_1*tmp_kernel_op_17 + rho_dof_2*tmp_kernel_op_18 + rho_dof_3*tmp_kernel_op_1 + rho_dof_4*tmp_kernel_op_19 + rho_dof_5*tmp_kernel_op_20;
             const real_t tmp_kernel_op_22 = -tmp_kernel_op_16*tmp_kernel_op_6 - tmp_kernel_op_21*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_9);
             const real_t tmp_kernel_op_35 = rho_dof_0*tmp_kernel_op_34;
             const real_t tmp_kernel_op_37 = rho_dof_1*tmp_kernel_op_33 + rho_dof_3*tmp_kernel_op_32 - rho_dof_4*tmp_kernel_op_32 + rho_dof_5*tmp_kernel_op_36 + tmp_kernel_op_35;
             const real_t tmp_kernel_op_40 = rho_dof_2*tmp_kernel_op_38 + rho_dof_3*tmp_kernel_op_25 + rho_dof_4*tmp_kernel_op_39 - rho_dof_5*tmp_kernel_op_25 + tmp_kernel_op_35;
             const real_t tmp_kernel_op_41 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_37 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_40;
             const real_t tmp_kernel_op_46 = rho_dof_0*tmp_kernel_op_31 + rho_dof_1*tmp_kernel_op_42 + rho_dof_2*tmp_kernel_op_43 + rho_dof_3*tmp_kernel_op_26 + rho_dof_4*tmp_kernel_op_44 + rho_dof_5*tmp_kernel_op_45;
             const real_t tmp_kernel_op_47 = -tmp_kernel_op_31*tmp_kernel_op_41 - tmp_kernel_op_46*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_34 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_34);
             const real_t tmp_kernel_op_60 = rho_dof_0*tmp_kernel_op_59;
             const real_t tmp_kernel_op_62 = rho_dof_1*tmp_kernel_op_58 + rho_dof_3*tmp_kernel_op_57 - rho_dof_4*tmp_kernel_op_57 + rho_dof_5*tmp_kernel_op_61 + tmp_kernel_op_60;
             const real_t tmp_kernel_op_65 = rho_dof_2*tmp_kernel_op_63 + rho_dof_3*tmp_kernel_op_50 + rho_dof_4*tmp_kernel_op_64 - rho_dof_5*tmp_kernel_op_50 + tmp_kernel_op_60;
             const real_t tmp_kernel_op_66 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_62 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_65;
             const real_t tmp_kernel_op_71 = rho_dof_0*tmp_kernel_op_56 + rho_dof_1*tmp_kernel_op_67 + rho_dof_2*tmp_kernel_op_68 + rho_dof_3*tmp_kernel_op_51 + rho_dof_4*tmp_kernel_op_69 + rho_dof_5*tmp_kernel_op_70;
             const real_t tmp_kernel_op_72 = -tmp_kernel_op_56*tmp_kernel_op_66 - tmp_kernel_op_71*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_59 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_59);
             const real_t tmp_kernel_op_75 = tmp_kernel_op_21*tmp_kernel_op_8;
             const real_t tmp_kernel_op_76 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_75 - tmp_kernel_op_16*tmp_kernel_op_17;
             const real_t tmp_kernel_op_77 = tmp_kernel_op_33*tmp_kernel_op_46;
             const real_t tmp_kernel_op_78 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_77 - tmp_kernel_op_41*tmp_kernel_op_42;
             const real_t tmp_kernel_op_79 = tmp_kernel_op_58*tmp_kernel_op_71;
             const real_t tmp_kernel_op_80 = -jac_affine_inv_0_0_GRAY*tmp_kernel_op_79 - tmp_kernel_op_66*tmp_kernel_op_67;
             const real_t tmp_kernel_op_81 = tmp_kernel_op_13*tmp_kernel_op_21;
             const real_t tmp_kernel_op_82 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_81 - tmp_kernel_op_16*tmp_kernel_op_18;
             const real_t tmp_kernel_op_83 = tmp_kernel_op_38*tmp_kernel_op_46;
             const real_t tmp_kernel_op_84 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_83 - tmp_kernel_op_41*tmp_kernel_op_43;
             const real_t tmp_kernel_op_85 = tmp_kernel_op_63*tmp_kernel_op_71;
             const real_t tmp_kernel_op_86 = -jac_affine_inv_1_0_GRAY*tmp_kernel_op_85 - tmp_kernel_op_66*tmp_kernel_op_68;
             const real_t tmp_kernel_op_89 = -tmp_kernel_op_1*tmp_kernel_op_16 - tmp_kernel_op_21*(tmp_kernel_op_87 + tmp_kernel_op_88);
             const real_t tmp_kernel_op_92 = -tmp_kernel_op_26*tmp_kernel_op_41 - tmp_kernel_op_46*(tmp_kernel_op_90 + tmp_kernel_op_91);
             const real_t tmp_kernel_op_95 = -tmp_kernel_op_51*tmp_kernel_op_66 - tmp_kernel_op_71*(tmp_kernel_op_93 + tmp_kernel_op_94);
             const real_t tmp_kernel_op_96 = -tmp_kernel_op_16*tmp_kernel_op_19 - tmp_kernel_op_21*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_14 - tmp_kernel_op_87);
             const real_t tmp_kernel_op_97 = -tmp_kernel_op_41*tmp_kernel_op_44 - tmp_kernel_op_46*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_39 - tmp_kernel_op_90);
             const real_t tmp_kernel_op_98 = -tmp_kernel_op_66*tmp_kernel_op_69 - tmp_kernel_op_71*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_64 - tmp_kernel_op_93);
             const real_t tmp_kernel_op_99 = -tmp_kernel_op_16*tmp_kernel_op_20 - tmp_kernel_op_21*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_11 - tmp_kernel_op_88);
             const real_t tmp_kernel_op_100 = -tmp_kernel_op_41*tmp_kernel_op_45 - tmp_kernel_op_46*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_36 - tmp_kernel_op_91);
             const real_t tmp_kernel_op_101 = -tmp_kernel_op_66*tmp_kernel_op_70 - tmp_kernel_op_71*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_61 - tmp_kernel_op_94);
             const real_t tmp_kernel_op_102 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_12 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_15;
             const real_t tmp_kernel_op_103 = -tmp_kernel_op_102*tmp_kernel_op_6 - tmp_kernel_op_21*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_9 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_9);
             const real_t tmp_kernel_op_104 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_37 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_40;
             const real_t tmp_kernel_op_105 = -tmp_kernel_op_104*tmp_kernel_op_31 - tmp_kernel_op_46*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_34 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_34);
             const real_t tmp_kernel_op_106 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_62 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_65;
             const real_t tmp_kernel_op_107 = -tmp_kernel_op_106*tmp_kernel_op_56 - tmp_kernel_op_71*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_59 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_59);
             const real_t tmp_kernel_op_108 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_75 - tmp_kernel_op_102*tmp_kernel_op_17;
             const real_t tmp_kernel_op_109 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_77 - tmp_kernel_op_104*tmp_kernel_op_42;
             const real_t tmp_kernel_op_110 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_79 - tmp_kernel_op_106*tmp_kernel_op_67;
             const real_t tmp_kernel_op_111 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_81 - tmp_kernel_op_102*tmp_kernel_op_18;
             const real_t tmp_kernel_op_112 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_83 - tmp_kernel_op_104*tmp_kernel_op_43;
             const real_t tmp_kernel_op_113 = -jac_affine_inv_1_1_GRAY*tmp_kernel_op_85 - tmp_kernel_op_106*tmp_kernel_op_68;
             const real_t tmp_kernel_op_116 = -tmp_kernel_op_1*tmp_kernel_op_102 - tmp_kernel_op_21*(tmp_kernel_op_114 + tmp_kernel_op_115);
             const real_t tmp_kernel_op_119 = -tmp_kernel_op_104*tmp_kernel_op_26 - tmp_kernel_op_46*(tmp_kernel_op_117 + tmp_kernel_op_118);
             const real_t tmp_kernel_op_122 = -tmp_kernel_op_106*tmp_kernel_op_51 - tmp_kernel_op_71*(tmp_kernel_op_120 + tmp_kernel_op_121);
             const real_t tmp_kernel_op_123 = -tmp_kernel_op_102*tmp_kernel_op_19 - tmp_kernel_op_21*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_14 - tmp_kernel_op_114);
             const real_t tmp_kernel_op_124 = -tmp_kernel_op_104*tmp_kernel_op_44 - tmp_kernel_op_46*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_39 - tmp_kernel_op_117);
             const real_t tmp_kernel_op_125 = -tmp_kernel_op_106*tmp_kernel_op_69 - tmp_kernel_op_71*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_64 - tmp_kernel_op_120);
             const real_t tmp_kernel_op_126 = -tmp_kernel_op_102*tmp_kernel_op_20 - tmp_kernel_op_21*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_11 - tmp_kernel_op_115);
             const real_t tmp_kernel_op_127 = -tmp_kernel_op_104*tmp_kernel_op_45 - tmp_kernel_op_46*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_36 - tmp_kernel_op_118);
             const real_t tmp_kernel_op_128 = -tmp_kernel_op_106*tmp_kernel_op_70 - tmp_kernel_op_71*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_61 - tmp_kernel_op_121);
             const real_t elMat_0_0 = toMatrixScaling*(tmp_kernel_op_22*tmp_kernel_op_24 + tmp_kernel_op_47*tmp_kernel_op_49 + tmp_kernel_op_72*tmp_kernel_op_74);
             const real_t elMat_0_1 = toMatrixScaling*(tmp_kernel_op_24*tmp_kernel_op_76 + tmp_kernel_op_49*tmp_kernel_op_78 + tmp_kernel_op_74*tmp_kernel_op_80);
             const real_t elMat_0_2 = toMatrixScaling*(tmp_kernel_op_24*tmp_kernel_op_82 + tmp_kernel_op_49*tmp_kernel_op_84 + tmp_kernel_op_74*tmp_kernel_op_86);
             const real_t elMat_0_3 = toMatrixScaling*(tmp_kernel_op_24*tmp_kernel_op_89 + tmp_kernel_op_49*tmp_kernel_op_92 + tmp_kernel_op_74*tmp_kernel_op_95);
             const real_t elMat_0_4 = toMatrixScaling*(tmp_kernel_op_24*tmp_kernel_op_96 + tmp_kernel_op_49*tmp_kernel_op_97 + tmp_kernel_op_74*tmp_kernel_op_98);
             const real_t elMat_0_5 = toMatrixScaling*(tmp_kernel_op_100*tmp_kernel_op_49 + tmp_kernel_op_101*tmp_kernel_op_74 + tmp_kernel_op_24*tmp_kernel_op_99);
             const real_t elMat_0_6 = toMatrixScaling*(tmp_kernel_op_103*tmp_kernel_op_24 + tmp_kernel_op_105*tmp_kernel_op_49 + tmp_kernel_op_107*tmp_kernel_op_74);
             const real_t elMat_0_7 = toMatrixScaling*(tmp_kernel_op_108*tmp_kernel_op_24 + tmp_kernel_op_109*tmp_kernel_op_49 + tmp_kernel_op_110*tmp_kernel_op_74);
             const real_t elMat_0_8 = toMatrixScaling*(tmp_kernel_op_111*tmp_kernel_op_24 + tmp_kernel_op_112*tmp_kernel_op_49 + tmp_kernel_op_113*tmp_kernel_op_74);
             const real_t elMat_0_9 = toMatrixScaling*(tmp_kernel_op_116*tmp_kernel_op_24 + tmp_kernel_op_119*tmp_kernel_op_49 + tmp_kernel_op_122*tmp_kernel_op_74);
             const real_t elMat_0_10 = toMatrixScaling*(tmp_kernel_op_123*tmp_kernel_op_24 + tmp_kernel_op_124*tmp_kernel_op_49 + tmp_kernel_op_125*tmp_kernel_op_74);
             const real_t elMat_0_11 = toMatrixScaling*(tmp_kernel_op_126*tmp_kernel_op_24 + tmp_kernel_op_127*tmp_kernel_op_49 + tmp_kernel_op_128*tmp_kernel_op_74);
             const real_t elMat_1_0 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_22 + tmp_kernel_op_130*tmp_kernel_op_47 + tmp_kernel_op_131*tmp_kernel_op_72);
             const real_t elMat_1_1 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_76 + tmp_kernel_op_130*tmp_kernel_op_78 + tmp_kernel_op_131*tmp_kernel_op_80);
             const real_t elMat_1_2 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_82 + tmp_kernel_op_130*tmp_kernel_op_84 + tmp_kernel_op_131*tmp_kernel_op_86);
             const real_t elMat_1_3 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_89 + tmp_kernel_op_130*tmp_kernel_op_92 + tmp_kernel_op_131*tmp_kernel_op_95);
             const real_t elMat_1_4 = toMatrixScaling*(tmp_kernel_op_129*tmp_kernel_op_96 + tmp_kernel_op_130*tmp_kernel_op_97 + tmp_kernel_op_131*tmp_kernel_op_98);
             const real_t elMat_1_5 = toMatrixScaling*(tmp_kernel_op_100*tmp_kernel_op_130 + tmp_kernel_op_101*tmp_kernel_op_131 + tmp_kernel_op_129*tmp_kernel_op_99);
             const real_t elMat_1_6 = toMatrixScaling*(tmp_kernel_op_103*tmp_kernel_op_129 + tmp_kernel_op_105*tmp_kernel_op_130 + tmp_kernel_op_107*tmp_kernel_op_131);
             const real_t elMat_1_7 = toMatrixScaling*(tmp_kernel_op_108*tmp_kernel_op_129 + tmp_kernel_op_109*tmp_kernel_op_130 + tmp_kernel_op_110*tmp_kernel_op_131);
             const real_t elMat_1_8 = toMatrixScaling*(tmp_kernel_op_111*tmp_kernel_op_129 + tmp_kernel_op_112*tmp_kernel_op_130 + tmp_kernel_op_113*tmp_kernel_op_131);
             const real_t elMat_1_9 = toMatrixScaling*(tmp_kernel_op_116*tmp_kernel_op_129 + tmp_kernel_op_119*tmp_kernel_op_130 + tmp_kernel_op_122*tmp_kernel_op_131);
             const real_t elMat_1_10 = toMatrixScaling*(tmp_kernel_op_123*tmp_kernel_op_129 + tmp_kernel_op_124*tmp_kernel_op_130 + tmp_kernel_op_125*tmp_kernel_op_131);
             const real_t elMat_1_11 = toMatrixScaling*(tmp_kernel_op_126*tmp_kernel_op_129 + tmp_kernel_op_127*tmp_kernel_op_130 + tmp_kernel_op_128*tmp_kernel_op_131);
             const real_t elMat_2_0 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_22 + tmp_kernel_op_133*tmp_kernel_op_47 + tmp_kernel_op_134*tmp_kernel_op_72);
             const real_t elMat_2_1 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_76 + tmp_kernel_op_133*tmp_kernel_op_78 + tmp_kernel_op_134*tmp_kernel_op_80);
             const real_t elMat_2_2 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_82 + tmp_kernel_op_133*tmp_kernel_op_84 + tmp_kernel_op_134*tmp_kernel_op_86);
             const real_t elMat_2_3 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_89 + tmp_kernel_op_133*tmp_kernel_op_92 + tmp_kernel_op_134*tmp_kernel_op_95);
             const real_t elMat_2_4 = toMatrixScaling*(tmp_kernel_op_132*tmp_kernel_op_96 + tmp_kernel_op_133*tmp_kernel_op_97 + tmp_kernel_op_134*tmp_kernel_op_98);
             const real_t elMat_2_5 = toMatrixScaling*(tmp_kernel_op_100*tmp_kernel_op_133 + tmp_kernel_op_101*tmp_kernel_op_134 + tmp_kernel_op_132*tmp_kernel_op_99);
             const real_t elMat_2_6 = toMatrixScaling*(tmp_kernel_op_103*tmp_kernel_op_132 + tmp_kernel_op_105*tmp_kernel_op_133 + tmp_kernel_op_107*tmp_kernel_op_134);
             const real_t elMat_2_7 = toMatrixScaling*(tmp_kernel_op_108*tmp_kernel_op_132 + tmp_kernel_op_109*tmp_kernel_op_133 + tmp_kernel_op_110*tmp_kernel_op_134);
             const real_t elMat_2_8 = toMatrixScaling*(tmp_kernel_op_111*tmp_kernel_op_132 + tmp_kernel_op_112*tmp_kernel_op_133 + tmp_kernel_op_113*tmp_kernel_op_134);
             const real_t elMat_2_9 = toMatrixScaling*(tmp_kernel_op_116*tmp_kernel_op_132 + tmp_kernel_op_119*tmp_kernel_op_133 + tmp_kernel_op_122*tmp_kernel_op_134);
             const real_t elMat_2_10 = toMatrixScaling*(tmp_kernel_op_123*tmp_kernel_op_132 + tmp_kernel_op_124*tmp_kernel_op_133 + tmp_kernel_op_125*tmp_kernel_op_134);
             const real_t elMat_2_11 = toMatrixScaling*(tmp_kernel_op_126*tmp_kernel_op_132 + tmp_kernel_op_127*tmp_kernel_op_133 + tmp_kernel_op_128*tmp_kernel_op_134);
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
