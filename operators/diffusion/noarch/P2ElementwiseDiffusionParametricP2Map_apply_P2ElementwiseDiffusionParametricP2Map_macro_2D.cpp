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

































#include "../P2ElementwiseDiffusionParametricP2Map.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDiffusionParametricP2Map::apply_P2ElementwiseDiffusionParametricP2Map_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_kernel_op_0 = 2.6666666666666665;
       const real_t tmp_kernel_op_1 = 0.66666666666666663;
       const real_t tmp_kernel_op_2 = tmp_kernel_op_1 - 1.0;
       const real_t tmp_kernel_op_3 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const real_t tmp_kernel_op_5 = -tmp_kernel_op_0 + 2.666666666666667;
       const real_t tmp_kernel_op_7 = tmp_kernel_op_0 - 1.0;
       const real_t tmp_kernel_op_8 = -tmp_kernel_op_1 - 1.333333333333333;
       const real_t tmp_kernel_op_21 = 0.66666666666666663;
       const real_t tmp_kernel_op_22 = 2.6666666666666665;
       const real_t tmp_kernel_op_23 = tmp_kernel_op_22 - 1.0;
       const real_t tmp_kernel_op_24 = tmp_kernel_op_21 + tmp_kernel_op_22 - 3.0;
       const real_t tmp_kernel_op_26 = -tmp_kernel_op_21 - 1.333333333333333;
       const real_t tmp_kernel_op_28 = tmp_kernel_op_21 - 1.0;
       const real_t tmp_kernel_op_29 = -tmp_kernel_op_22 + 2.666666666666667;
       const real_t tmp_kernel_op_42 = 0.66666666666666663;
       const real_t tmp_kernel_op_43 = 0.66666666666666663;
       const real_t tmp_kernel_op_44 = tmp_kernel_op_43 - 1.0;
       const real_t tmp_kernel_op_45 = tmp_kernel_op_42 + tmp_kernel_op_43 - 3.0;
       const real_t tmp_kernel_op_47 = -tmp_kernel_op_42 + 2.666666666666667;
       const real_t tmp_kernel_op_49 = tmp_kernel_op_42 - 1.0;
       const real_t tmp_kernel_op_50 = -tmp_kernel_op_43 + 2.666666666666667;
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
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_0 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_1 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_10 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_11 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_2 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_3 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_4 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_5 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_6 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t micromesh_dof_7 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_8 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_9 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_kernel_op_4 = micromesh_dof_0*tmp_kernel_op_3;
             const real_t tmp_kernel_op_6 = micromesh_dof_1*tmp_kernel_op_2 + micromesh_dof_3*tmp_kernel_op_0 - micromesh_dof_4*tmp_kernel_op_0 + micromesh_dof_5*tmp_kernel_op_5 + tmp_kernel_op_4;
             const real_t tmp_kernel_op_9 = micromesh_dof_6*tmp_kernel_op_3;
             const real_t tmp_kernel_op_10 = micromesh_dof_10*tmp_kernel_op_8 - micromesh_dof_11*tmp_kernel_op_1 + micromesh_dof_8*tmp_kernel_op_7 + micromesh_dof_9*tmp_kernel_op_1 + tmp_kernel_op_9;
             const real_t tmp_kernel_op_11 = micromesh_dof_2*tmp_kernel_op_7 + micromesh_dof_3*tmp_kernel_op_1 + micromesh_dof_4*tmp_kernel_op_8 - micromesh_dof_5*tmp_kernel_op_1 + tmp_kernel_op_4;
             const real_t tmp_kernel_op_12 = -micromesh_dof_10*tmp_kernel_op_0 + micromesh_dof_11*tmp_kernel_op_5 + micromesh_dof_7*tmp_kernel_op_2 + micromesh_dof_9*tmp_kernel_op_0 + tmp_kernel_op_9;
             const real_t tmp_kernel_op_13 = tmp_kernel_op_10*tmp_kernel_op_6 - tmp_kernel_op_11*tmp_kernel_op_12;
             const real_t tmp_kernel_op_14 = 1.0 / (tmp_kernel_op_13);
             const real_t tmp_kernel_op_15 = tmp_kernel_op_14*tmp_kernel_op_3;
             const real_t tmp_kernel_op_16 = -tmp_kernel_op_11;
             const real_t tmp_kernel_op_17 = tmp_kernel_op_15*tmp_kernel_op_16 + tmp_kernel_op_15*tmp_kernel_op_6;
             const real_t tmp_kernel_op_18 = -tmp_kernel_op_12;
             const real_t tmp_kernel_op_19 = tmp_kernel_op_10*tmp_kernel_op_15 + tmp_kernel_op_15*tmp_kernel_op_18;
             const real_t tmp_kernel_op_20 = 0.16666666666666666*abs(tmp_kernel_op_13);
             const real_t tmp_kernel_op_25 = micromesh_dof_0*tmp_kernel_op_24;
             const real_t tmp_kernel_op_27 = micromesh_dof_1*tmp_kernel_op_23 + micromesh_dof_3*tmp_kernel_op_21 - micromesh_dof_4*tmp_kernel_op_21 + micromesh_dof_5*tmp_kernel_op_26 + tmp_kernel_op_25;
             const real_t tmp_kernel_op_30 = micromesh_dof_6*tmp_kernel_op_24;
             const real_t tmp_kernel_op_31 = micromesh_dof_10*tmp_kernel_op_29 - micromesh_dof_11*tmp_kernel_op_22 + micromesh_dof_8*tmp_kernel_op_28 + micromesh_dof_9*tmp_kernel_op_22 + tmp_kernel_op_30;
             const real_t tmp_kernel_op_32 = micromesh_dof_2*tmp_kernel_op_28 + micromesh_dof_3*tmp_kernel_op_22 + micromesh_dof_4*tmp_kernel_op_29 - micromesh_dof_5*tmp_kernel_op_22 + tmp_kernel_op_25;
             const real_t tmp_kernel_op_33 = -micromesh_dof_10*tmp_kernel_op_21 + micromesh_dof_11*tmp_kernel_op_26 + micromesh_dof_7*tmp_kernel_op_23 + micromesh_dof_9*tmp_kernel_op_21 + tmp_kernel_op_30;
             const real_t tmp_kernel_op_34 = tmp_kernel_op_27*tmp_kernel_op_31 - tmp_kernel_op_32*tmp_kernel_op_33;
             const real_t tmp_kernel_op_35 = 1.0 / (tmp_kernel_op_34);
             const real_t tmp_kernel_op_36 = tmp_kernel_op_24*tmp_kernel_op_35;
             const real_t tmp_kernel_op_37 = -tmp_kernel_op_32;
             const real_t tmp_kernel_op_38 = tmp_kernel_op_27*tmp_kernel_op_36 + tmp_kernel_op_36*tmp_kernel_op_37;
             const real_t tmp_kernel_op_39 = -tmp_kernel_op_33;
             const real_t tmp_kernel_op_40 = tmp_kernel_op_31*tmp_kernel_op_36 + tmp_kernel_op_36*tmp_kernel_op_39;
             const real_t tmp_kernel_op_41 = 0.16666666666666666*abs(tmp_kernel_op_34);
             const real_t tmp_kernel_op_46 = micromesh_dof_0*tmp_kernel_op_45;
             const real_t tmp_kernel_op_48 = micromesh_dof_1*tmp_kernel_op_44 + micromesh_dof_3*tmp_kernel_op_42 - micromesh_dof_4*tmp_kernel_op_42 + micromesh_dof_5*tmp_kernel_op_47 + tmp_kernel_op_46;
             const real_t tmp_kernel_op_51 = micromesh_dof_6*tmp_kernel_op_45;
             const real_t tmp_kernel_op_52 = micromesh_dof_10*tmp_kernel_op_50 - micromesh_dof_11*tmp_kernel_op_43 + micromesh_dof_8*tmp_kernel_op_49 + micromesh_dof_9*tmp_kernel_op_43 + tmp_kernel_op_51;
             const real_t tmp_kernel_op_53 = micromesh_dof_2*tmp_kernel_op_49 + micromesh_dof_3*tmp_kernel_op_43 + micromesh_dof_4*tmp_kernel_op_50 - micromesh_dof_5*tmp_kernel_op_43 + tmp_kernel_op_46;
             const real_t tmp_kernel_op_54 = -micromesh_dof_10*tmp_kernel_op_42 + micromesh_dof_11*tmp_kernel_op_47 + micromesh_dof_7*tmp_kernel_op_44 + micromesh_dof_9*tmp_kernel_op_42 + tmp_kernel_op_51;
             const real_t tmp_kernel_op_55 = tmp_kernel_op_48*tmp_kernel_op_52 - tmp_kernel_op_53*tmp_kernel_op_54;
             const real_t tmp_kernel_op_56 = 1.0 / (tmp_kernel_op_55);
             const real_t tmp_kernel_op_57 = tmp_kernel_op_45*tmp_kernel_op_56;
             const real_t tmp_kernel_op_58 = -tmp_kernel_op_53;
             const real_t tmp_kernel_op_59 = tmp_kernel_op_48*tmp_kernel_op_57 + tmp_kernel_op_57*tmp_kernel_op_58;
             const real_t tmp_kernel_op_60 = -tmp_kernel_op_54;
             const real_t tmp_kernel_op_61 = tmp_kernel_op_52*tmp_kernel_op_57 + tmp_kernel_op_57*tmp_kernel_op_60;
             const real_t tmp_kernel_op_62 = 0.16666666666666666*abs(tmp_kernel_op_55);
             const real_t tmp_kernel_op_63 = tmp_kernel_op_14*tmp_kernel_op_2;
             const real_t tmp_kernel_op_64 = tmp_kernel_op_10*tmp_kernel_op_63;
             const real_t tmp_kernel_op_65 = tmp_kernel_op_16*tmp_kernel_op_63;
             const real_t tmp_kernel_op_66 = tmp_kernel_op_23*tmp_kernel_op_35;
             const real_t tmp_kernel_op_67 = tmp_kernel_op_31*tmp_kernel_op_66;
             const real_t tmp_kernel_op_68 = tmp_kernel_op_37*tmp_kernel_op_66;
             const real_t tmp_kernel_op_69 = tmp_kernel_op_44*tmp_kernel_op_56;
             const real_t tmp_kernel_op_70 = tmp_kernel_op_52*tmp_kernel_op_69;
             const real_t tmp_kernel_op_71 = tmp_kernel_op_58*tmp_kernel_op_69;
             const real_t tmp_kernel_op_72 = tmp_kernel_op_20*(tmp_kernel_op_17*tmp_kernel_op_65 + tmp_kernel_op_19*tmp_kernel_op_64) + tmp_kernel_op_41*(tmp_kernel_op_38*tmp_kernel_op_68 + tmp_kernel_op_40*tmp_kernel_op_67) + tmp_kernel_op_62*(tmp_kernel_op_59*tmp_kernel_op_71 + tmp_kernel_op_61*tmp_kernel_op_70);
             const real_t tmp_kernel_op_73 = tmp_kernel_op_14*tmp_kernel_op_7;
             const real_t tmp_kernel_op_74 = tmp_kernel_op_6*tmp_kernel_op_73;
             const real_t tmp_kernel_op_75 = tmp_kernel_op_18*tmp_kernel_op_73;
             const real_t tmp_kernel_op_76 = tmp_kernel_op_28*tmp_kernel_op_35;
             const real_t tmp_kernel_op_77 = tmp_kernel_op_27*tmp_kernel_op_76;
             const real_t tmp_kernel_op_78 = tmp_kernel_op_39*tmp_kernel_op_76;
             const real_t tmp_kernel_op_79 = tmp_kernel_op_49*tmp_kernel_op_56;
             const real_t tmp_kernel_op_80 = tmp_kernel_op_48*tmp_kernel_op_79;
             const real_t tmp_kernel_op_81 = tmp_kernel_op_60*tmp_kernel_op_79;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_20*(tmp_kernel_op_17*tmp_kernel_op_74 + tmp_kernel_op_19*tmp_kernel_op_75) + tmp_kernel_op_41*(tmp_kernel_op_38*tmp_kernel_op_77 + tmp_kernel_op_40*tmp_kernel_op_78) + tmp_kernel_op_62*(tmp_kernel_op_59*tmp_kernel_op_80 + tmp_kernel_op_61*tmp_kernel_op_81);
             const real_t tmp_kernel_op_83 = tmp_kernel_op_1*tmp_kernel_op_14;
             const real_t tmp_kernel_op_84 = tmp_kernel_op_6*tmp_kernel_op_83;
             const real_t tmp_kernel_op_85 = tmp_kernel_op_0*tmp_kernel_op_14;
             const real_t tmp_kernel_op_86 = tmp_kernel_op_16*tmp_kernel_op_85;
             const real_t tmp_kernel_op_87 = tmp_kernel_op_84 + tmp_kernel_op_86;
             const real_t tmp_kernel_op_88 = tmp_kernel_op_10*tmp_kernel_op_85;
             const real_t tmp_kernel_op_89 = tmp_kernel_op_18*tmp_kernel_op_83;
             const real_t tmp_kernel_op_90 = tmp_kernel_op_88 + tmp_kernel_op_89;
             const real_t tmp_kernel_op_91 = tmp_kernel_op_22*tmp_kernel_op_35;
             const real_t tmp_kernel_op_92 = tmp_kernel_op_27*tmp_kernel_op_91;
             const real_t tmp_kernel_op_93 = tmp_kernel_op_21*tmp_kernel_op_35;
             const real_t tmp_kernel_op_94 = tmp_kernel_op_37*tmp_kernel_op_93;
             const real_t tmp_kernel_op_95 = tmp_kernel_op_92 + tmp_kernel_op_94;
             const real_t tmp_kernel_op_96 = tmp_kernel_op_31*tmp_kernel_op_93;
             const real_t tmp_kernel_op_97 = tmp_kernel_op_39*tmp_kernel_op_91;
             const real_t tmp_kernel_op_98 = tmp_kernel_op_96 + tmp_kernel_op_97;
             const real_t tmp_kernel_op_99 = tmp_kernel_op_43*tmp_kernel_op_56;
             const real_t tmp_kernel_op_100 = tmp_kernel_op_48*tmp_kernel_op_99;
             const real_t tmp_kernel_op_101 = tmp_kernel_op_42*tmp_kernel_op_56;
             const real_t tmp_kernel_op_102 = tmp_kernel_op_101*tmp_kernel_op_58;
             const real_t tmp_kernel_op_103 = tmp_kernel_op_100 + tmp_kernel_op_102;
             const real_t tmp_kernel_op_104 = tmp_kernel_op_101*tmp_kernel_op_52;
             const real_t tmp_kernel_op_105 = tmp_kernel_op_60*tmp_kernel_op_99;
             const real_t tmp_kernel_op_106 = tmp_kernel_op_104 + tmp_kernel_op_105;
             const real_t tmp_kernel_op_107 = tmp_kernel_op_20*(tmp_kernel_op_17*tmp_kernel_op_87 + tmp_kernel_op_19*tmp_kernel_op_90) + tmp_kernel_op_41*(tmp_kernel_op_38*tmp_kernel_op_95 + tmp_kernel_op_40*tmp_kernel_op_98) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_59 + tmp_kernel_op_106*tmp_kernel_op_61);
             const real_t tmp_kernel_op_108 = tmp_kernel_op_14*tmp_kernel_op_6*tmp_kernel_op_8 - tmp_kernel_op_86;
             const real_t tmp_kernel_op_109 = tmp_kernel_op_14*tmp_kernel_op_18*tmp_kernel_op_8 - tmp_kernel_op_88;
             const real_t tmp_kernel_op_110 = tmp_kernel_op_27*tmp_kernel_op_29*tmp_kernel_op_35 - tmp_kernel_op_94;
             const real_t tmp_kernel_op_111 = tmp_kernel_op_29*tmp_kernel_op_35*tmp_kernel_op_39 - tmp_kernel_op_96;
             const real_t tmp_kernel_op_112 = -tmp_kernel_op_102 + tmp_kernel_op_48*tmp_kernel_op_50*tmp_kernel_op_56;
             const real_t tmp_kernel_op_113 = -tmp_kernel_op_104 + tmp_kernel_op_50*tmp_kernel_op_56*tmp_kernel_op_60;
             const real_t tmp_kernel_op_114 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_17 + tmp_kernel_op_109*tmp_kernel_op_19) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_38 + tmp_kernel_op_111*tmp_kernel_op_40) + tmp_kernel_op_62*(tmp_kernel_op_112*tmp_kernel_op_59 + tmp_kernel_op_113*tmp_kernel_op_61);
             const real_t tmp_kernel_op_115 = tmp_kernel_op_14*tmp_kernel_op_16*tmp_kernel_op_5 - tmp_kernel_op_84;
             const real_t tmp_kernel_op_116 = tmp_kernel_op_10*tmp_kernel_op_14*tmp_kernel_op_5 - tmp_kernel_op_89;
             const real_t tmp_kernel_op_117 = tmp_kernel_op_26*tmp_kernel_op_35*tmp_kernel_op_37 - tmp_kernel_op_92;
             const real_t tmp_kernel_op_118 = tmp_kernel_op_26*tmp_kernel_op_31*tmp_kernel_op_35 - tmp_kernel_op_97;
             const real_t tmp_kernel_op_119 = -tmp_kernel_op_100 + tmp_kernel_op_47*tmp_kernel_op_56*tmp_kernel_op_58;
             const real_t tmp_kernel_op_120 = -tmp_kernel_op_105 + tmp_kernel_op_47*tmp_kernel_op_52*tmp_kernel_op_56;
             const real_t tmp_kernel_op_121 = tmp_kernel_op_20*(tmp_kernel_op_115*tmp_kernel_op_17 + tmp_kernel_op_116*tmp_kernel_op_19) + tmp_kernel_op_41*(tmp_kernel_op_117*tmp_kernel_op_38 + tmp_kernel_op_118*tmp_kernel_op_40) + tmp_kernel_op_62*(tmp_kernel_op_119*tmp_kernel_op_59 + tmp_kernel_op_120*tmp_kernel_op_61);
             const real_t tmp_kernel_op_122 = 1.0 / (tmp_kernel_op_13*tmp_kernel_op_13);
             const real_t tmp_kernel_op_123 = tmp_kernel_op_122*(tmp_kernel_op_2*tmp_kernel_op_2);
             const real_t tmp_kernel_op_124 = 1.0 / (tmp_kernel_op_34*tmp_kernel_op_34);
             const real_t tmp_kernel_op_125 = tmp_kernel_op_124*(tmp_kernel_op_23*tmp_kernel_op_23);
             const real_t tmp_kernel_op_126 = 1.0 / (tmp_kernel_op_55*tmp_kernel_op_55);
             const real_t tmp_kernel_op_127 = tmp_kernel_op_126*(tmp_kernel_op_44*tmp_kernel_op_44);
             const real_t tmp_kernel_op_128 = tmp_kernel_op_122*tmp_kernel_op_2*tmp_kernel_op_7;
             const real_t tmp_kernel_op_129 = tmp_kernel_op_124*tmp_kernel_op_23*tmp_kernel_op_28;
             const real_t tmp_kernel_op_130 = tmp_kernel_op_126*tmp_kernel_op_44*tmp_kernel_op_49;
             const real_t tmp_kernel_op_131 = tmp_kernel_op_20*(tmp_kernel_op_10*tmp_kernel_op_128*tmp_kernel_op_18 + tmp_kernel_op_128*tmp_kernel_op_16*tmp_kernel_op_6) + tmp_kernel_op_41*(tmp_kernel_op_129*tmp_kernel_op_27*tmp_kernel_op_37 + tmp_kernel_op_129*tmp_kernel_op_31*tmp_kernel_op_39) + tmp_kernel_op_62*(tmp_kernel_op_130*tmp_kernel_op_48*tmp_kernel_op_58 + tmp_kernel_op_130*tmp_kernel_op_52*tmp_kernel_op_60);
             const real_t tmp_kernel_op_132 = tmp_kernel_op_20*(tmp_kernel_op_64*tmp_kernel_op_90 + tmp_kernel_op_65*tmp_kernel_op_87) + tmp_kernel_op_41*(tmp_kernel_op_67*tmp_kernel_op_98 + tmp_kernel_op_68*tmp_kernel_op_95) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_71 + tmp_kernel_op_106*tmp_kernel_op_70);
             const real_t tmp_kernel_op_133 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_65 + tmp_kernel_op_109*tmp_kernel_op_64) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_68 + tmp_kernel_op_111*tmp_kernel_op_67) + tmp_kernel_op_62*(tmp_kernel_op_112*tmp_kernel_op_71 + tmp_kernel_op_113*tmp_kernel_op_70);
             const real_t tmp_kernel_op_134 = tmp_kernel_op_20*(tmp_kernel_op_115*tmp_kernel_op_65 + tmp_kernel_op_116*tmp_kernel_op_64) + tmp_kernel_op_41*(tmp_kernel_op_117*tmp_kernel_op_68 + tmp_kernel_op_118*tmp_kernel_op_67) + tmp_kernel_op_62*(tmp_kernel_op_119*tmp_kernel_op_71 + tmp_kernel_op_120*tmp_kernel_op_70);
             const real_t tmp_kernel_op_135 = tmp_kernel_op_122*(tmp_kernel_op_7*tmp_kernel_op_7);
             const real_t tmp_kernel_op_136 = tmp_kernel_op_124*(tmp_kernel_op_28*tmp_kernel_op_28);
             const real_t tmp_kernel_op_137 = tmp_kernel_op_126*(tmp_kernel_op_49*tmp_kernel_op_49);
             const real_t tmp_kernel_op_138 = tmp_kernel_op_20*(tmp_kernel_op_74*tmp_kernel_op_87 + tmp_kernel_op_75*tmp_kernel_op_90) + tmp_kernel_op_41*(tmp_kernel_op_77*tmp_kernel_op_95 + tmp_kernel_op_78*tmp_kernel_op_98) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_80 + tmp_kernel_op_106*tmp_kernel_op_81);
             const real_t tmp_kernel_op_139 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_74 + tmp_kernel_op_109*tmp_kernel_op_75) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_77 + tmp_kernel_op_111*tmp_kernel_op_78) + tmp_kernel_op_62*(tmp_kernel_op_112*tmp_kernel_op_80 + tmp_kernel_op_113*tmp_kernel_op_81);
             const real_t tmp_kernel_op_140 = tmp_kernel_op_20*(tmp_kernel_op_115*tmp_kernel_op_74 + tmp_kernel_op_116*tmp_kernel_op_75) + tmp_kernel_op_41*(tmp_kernel_op_117*tmp_kernel_op_77 + tmp_kernel_op_118*tmp_kernel_op_78) + tmp_kernel_op_62*(tmp_kernel_op_119*tmp_kernel_op_80 + tmp_kernel_op_120*tmp_kernel_op_81);
             const real_t tmp_kernel_op_141 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_87 + tmp_kernel_op_109*tmp_kernel_op_90) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_95 + tmp_kernel_op_111*tmp_kernel_op_98) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_112 + tmp_kernel_op_106*tmp_kernel_op_113);
             const real_t tmp_kernel_op_142 = tmp_kernel_op_20*(tmp_kernel_op_115*tmp_kernel_op_87 + tmp_kernel_op_116*tmp_kernel_op_90) + tmp_kernel_op_41*(tmp_kernel_op_117*tmp_kernel_op_95 + tmp_kernel_op_118*tmp_kernel_op_98) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_119 + tmp_kernel_op_106*tmp_kernel_op_120);
             const real_t tmp_kernel_op_143 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_115 + tmp_kernel_op_109*tmp_kernel_op_116) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_117 + tmp_kernel_op_111*tmp_kernel_op_118) + tmp_kernel_op_62*(tmp_kernel_op_112*tmp_kernel_op_119 + tmp_kernel_op_113*tmp_kernel_op_120);
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_20*((tmp_kernel_op_17*tmp_kernel_op_17) + (tmp_kernel_op_19*tmp_kernel_op_19)) + tmp_kernel_op_41*((tmp_kernel_op_38*tmp_kernel_op_38) + (tmp_kernel_op_40*tmp_kernel_op_40)) + tmp_kernel_op_62*((tmp_kernel_op_59*tmp_kernel_op_59) + (tmp_kernel_op_61*tmp_kernel_op_61))) + src_dof_1*tmp_kernel_op_72 + src_dof_2*tmp_kernel_op_82 + src_dof_3*tmp_kernel_op_107 + src_dof_4*tmp_kernel_op_114 + src_dof_5*tmp_kernel_op_121;
             const real_t elMatVec_1 = src_dof_0*tmp_kernel_op_72 + src_dof_1*(tmp_kernel_op_20*((tmp_kernel_op_10*tmp_kernel_op_10)*tmp_kernel_op_123 + tmp_kernel_op_123*(tmp_kernel_op_16*tmp_kernel_op_16)) + tmp_kernel_op_41*(tmp_kernel_op_125*(tmp_kernel_op_31*tmp_kernel_op_31) + tmp_kernel_op_125*(tmp_kernel_op_37*tmp_kernel_op_37)) + tmp_kernel_op_62*(tmp_kernel_op_127*(tmp_kernel_op_52*tmp_kernel_op_52) + tmp_kernel_op_127*(tmp_kernel_op_58*tmp_kernel_op_58))) + src_dof_2*tmp_kernel_op_131 + src_dof_3*tmp_kernel_op_132 + src_dof_4*tmp_kernel_op_133 + src_dof_5*tmp_kernel_op_134;
             const real_t elMatVec_2 = src_dof_0*tmp_kernel_op_82 + src_dof_1*tmp_kernel_op_131 + src_dof_2*(tmp_kernel_op_20*(tmp_kernel_op_135*(tmp_kernel_op_18*tmp_kernel_op_18) + tmp_kernel_op_135*(tmp_kernel_op_6*tmp_kernel_op_6)) + tmp_kernel_op_41*(tmp_kernel_op_136*(tmp_kernel_op_27*tmp_kernel_op_27) + tmp_kernel_op_136*(tmp_kernel_op_39*tmp_kernel_op_39)) + tmp_kernel_op_62*(tmp_kernel_op_137*(tmp_kernel_op_48*tmp_kernel_op_48) + tmp_kernel_op_137*(tmp_kernel_op_60*tmp_kernel_op_60))) + src_dof_3*tmp_kernel_op_138 + src_dof_4*tmp_kernel_op_139 + src_dof_5*tmp_kernel_op_140;
             const real_t elMatVec_3 = src_dof_0*tmp_kernel_op_107 + src_dof_1*tmp_kernel_op_132 + src_dof_2*tmp_kernel_op_138 + src_dof_3*(tmp_kernel_op_20*((tmp_kernel_op_87*tmp_kernel_op_87) + (tmp_kernel_op_90*tmp_kernel_op_90)) + tmp_kernel_op_41*((tmp_kernel_op_95*tmp_kernel_op_95) + (tmp_kernel_op_98*tmp_kernel_op_98)) + tmp_kernel_op_62*((tmp_kernel_op_103*tmp_kernel_op_103) + (tmp_kernel_op_106*tmp_kernel_op_106))) + src_dof_4*tmp_kernel_op_141 + src_dof_5*tmp_kernel_op_142;
             const real_t elMatVec_4 = src_dof_0*tmp_kernel_op_114 + src_dof_1*tmp_kernel_op_133 + src_dof_2*tmp_kernel_op_139 + src_dof_3*tmp_kernel_op_141 + src_dof_4*(tmp_kernel_op_20*((tmp_kernel_op_108*tmp_kernel_op_108) + (tmp_kernel_op_109*tmp_kernel_op_109)) + tmp_kernel_op_41*((tmp_kernel_op_110*tmp_kernel_op_110) + (tmp_kernel_op_111*tmp_kernel_op_111)) + tmp_kernel_op_62*((tmp_kernel_op_112*tmp_kernel_op_112) + (tmp_kernel_op_113*tmp_kernel_op_113))) + src_dof_5*tmp_kernel_op_143;
             const real_t elMatVec_5 = src_dof_0*tmp_kernel_op_121 + src_dof_1*tmp_kernel_op_134 + src_dof_2*tmp_kernel_op_140 + src_dof_3*tmp_kernel_op_142 + src_dof_4*tmp_kernel_op_143 + src_dof_5*(tmp_kernel_op_20*((tmp_kernel_op_115*tmp_kernel_op_115) + (tmp_kernel_op_116*tmp_kernel_op_116)) + tmp_kernel_op_41*((tmp_kernel_op_117*tmp_kernel_op_117) + (tmp_kernel_op_118*tmp_kernel_op_118)) + tmp_kernel_op_62*((tmp_kernel_op_119*tmp_kernel_op_119) + (tmp_kernel_op_120*tmp_kernel_op_120)));
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t src_dof_3 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_0 = _data_micromesh_vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_1 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_10 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t micromesh_dof_11 = _data_micromesh_edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_2 = _data_micromesh_vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t micromesh_dof_3 = _data_micromesh_edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_4 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t micromesh_dof_5 = _data_micromesh_edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t micromesh_dof_6 = _data_micromesh_vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t micromesh_dof_7 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t micromesh_dof_8 = _data_micromesh_vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t micromesh_dof_9 = _data_micromesh_edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_kernel_op_4 = micromesh_dof_0*tmp_kernel_op_3;
             const real_t tmp_kernel_op_6 = micromesh_dof_1*tmp_kernel_op_2 + micromesh_dof_3*tmp_kernel_op_0 - micromesh_dof_4*tmp_kernel_op_0 + micromesh_dof_5*tmp_kernel_op_5 + tmp_kernel_op_4;
             const real_t tmp_kernel_op_9 = micromesh_dof_6*tmp_kernel_op_3;
             const real_t tmp_kernel_op_10 = micromesh_dof_10*tmp_kernel_op_8 - micromesh_dof_11*tmp_kernel_op_1 + micromesh_dof_8*tmp_kernel_op_7 + micromesh_dof_9*tmp_kernel_op_1 + tmp_kernel_op_9;
             const real_t tmp_kernel_op_11 = micromesh_dof_2*tmp_kernel_op_7 + micromesh_dof_3*tmp_kernel_op_1 + micromesh_dof_4*tmp_kernel_op_8 - micromesh_dof_5*tmp_kernel_op_1 + tmp_kernel_op_4;
             const real_t tmp_kernel_op_12 = -micromesh_dof_10*tmp_kernel_op_0 + micromesh_dof_11*tmp_kernel_op_5 + micromesh_dof_7*tmp_kernel_op_2 + micromesh_dof_9*tmp_kernel_op_0 + tmp_kernel_op_9;
             const real_t tmp_kernel_op_13 = tmp_kernel_op_10*tmp_kernel_op_6 - tmp_kernel_op_11*tmp_kernel_op_12;
             const real_t tmp_kernel_op_14 = 1.0 / (tmp_kernel_op_13);
             const real_t tmp_kernel_op_15 = tmp_kernel_op_14*tmp_kernel_op_3;
             const real_t tmp_kernel_op_16 = -tmp_kernel_op_11;
             const real_t tmp_kernel_op_17 = tmp_kernel_op_15*tmp_kernel_op_16 + tmp_kernel_op_15*tmp_kernel_op_6;
             const real_t tmp_kernel_op_18 = -tmp_kernel_op_12;
             const real_t tmp_kernel_op_19 = tmp_kernel_op_10*tmp_kernel_op_15 + tmp_kernel_op_15*tmp_kernel_op_18;
             const real_t tmp_kernel_op_20 = 0.16666666666666666*abs(tmp_kernel_op_13);
             const real_t tmp_kernel_op_25 = micromesh_dof_0*tmp_kernel_op_24;
             const real_t tmp_kernel_op_27 = micromesh_dof_1*tmp_kernel_op_23 + micromesh_dof_3*tmp_kernel_op_21 - micromesh_dof_4*tmp_kernel_op_21 + micromesh_dof_5*tmp_kernel_op_26 + tmp_kernel_op_25;
             const real_t tmp_kernel_op_30 = micromesh_dof_6*tmp_kernel_op_24;
             const real_t tmp_kernel_op_31 = micromesh_dof_10*tmp_kernel_op_29 - micromesh_dof_11*tmp_kernel_op_22 + micromesh_dof_8*tmp_kernel_op_28 + micromesh_dof_9*tmp_kernel_op_22 + tmp_kernel_op_30;
             const real_t tmp_kernel_op_32 = micromesh_dof_2*tmp_kernel_op_28 + micromesh_dof_3*tmp_kernel_op_22 + micromesh_dof_4*tmp_kernel_op_29 - micromesh_dof_5*tmp_kernel_op_22 + tmp_kernel_op_25;
             const real_t tmp_kernel_op_33 = -micromesh_dof_10*tmp_kernel_op_21 + micromesh_dof_11*tmp_kernel_op_26 + micromesh_dof_7*tmp_kernel_op_23 + micromesh_dof_9*tmp_kernel_op_21 + tmp_kernel_op_30;
             const real_t tmp_kernel_op_34 = tmp_kernel_op_27*tmp_kernel_op_31 - tmp_kernel_op_32*tmp_kernel_op_33;
             const real_t tmp_kernel_op_35 = 1.0 / (tmp_kernel_op_34);
             const real_t tmp_kernel_op_36 = tmp_kernel_op_24*tmp_kernel_op_35;
             const real_t tmp_kernel_op_37 = -tmp_kernel_op_32;
             const real_t tmp_kernel_op_38 = tmp_kernel_op_27*tmp_kernel_op_36 + tmp_kernel_op_36*tmp_kernel_op_37;
             const real_t tmp_kernel_op_39 = -tmp_kernel_op_33;
             const real_t tmp_kernel_op_40 = tmp_kernel_op_31*tmp_kernel_op_36 + tmp_kernel_op_36*tmp_kernel_op_39;
             const real_t tmp_kernel_op_41 = 0.16666666666666666*abs(tmp_kernel_op_34);
             const real_t tmp_kernel_op_46 = micromesh_dof_0*tmp_kernel_op_45;
             const real_t tmp_kernel_op_48 = micromesh_dof_1*tmp_kernel_op_44 + micromesh_dof_3*tmp_kernel_op_42 - micromesh_dof_4*tmp_kernel_op_42 + micromesh_dof_5*tmp_kernel_op_47 + tmp_kernel_op_46;
             const real_t tmp_kernel_op_51 = micromesh_dof_6*tmp_kernel_op_45;
             const real_t tmp_kernel_op_52 = micromesh_dof_10*tmp_kernel_op_50 - micromesh_dof_11*tmp_kernel_op_43 + micromesh_dof_8*tmp_kernel_op_49 + micromesh_dof_9*tmp_kernel_op_43 + tmp_kernel_op_51;
             const real_t tmp_kernel_op_53 = micromesh_dof_2*tmp_kernel_op_49 + micromesh_dof_3*tmp_kernel_op_43 + micromesh_dof_4*tmp_kernel_op_50 - micromesh_dof_5*tmp_kernel_op_43 + tmp_kernel_op_46;
             const real_t tmp_kernel_op_54 = -micromesh_dof_10*tmp_kernel_op_42 + micromesh_dof_11*tmp_kernel_op_47 + micromesh_dof_7*tmp_kernel_op_44 + micromesh_dof_9*tmp_kernel_op_42 + tmp_kernel_op_51;
             const real_t tmp_kernel_op_55 = tmp_kernel_op_48*tmp_kernel_op_52 - tmp_kernel_op_53*tmp_kernel_op_54;
             const real_t tmp_kernel_op_56 = 1.0 / (tmp_kernel_op_55);
             const real_t tmp_kernel_op_57 = tmp_kernel_op_45*tmp_kernel_op_56;
             const real_t tmp_kernel_op_58 = -tmp_kernel_op_53;
             const real_t tmp_kernel_op_59 = tmp_kernel_op_48*tmp_kernel_op_57 + tmp_kernel_op_57*tmp_kernel_op_58;
             const real_t tmp_kernel_op_60 = -tmp_kernel_op_54;
             const real_t tmp_kernel_op_61 = tmp_kernel_op_52*tmp_kernel_op_57 + tmp_kernel_op_57*tmp_kernel_op_60;
             const real_t tmp_kernel_op_62 = 0.16666666666666666*abs(tmp_kernel_op_55);
             const real_t tmp_kernel_op_63 = tmp_kernel_op_14*tmp_kernel_op_2;
             const real_t tmp_kernel_op_64 = tmp_kernel_op_10*tmp_kernel_op_63;
             const real_t tmp_kernel_op_65 = tmp_kernel_op_16*tmp_kernel_op_63;
             const real_t tmp_kernel_op_66 = tmp_kernel_op_23*tmp_kernel_op_35;
             const real_t tmp_kernel_op_67 = tmp_kernel_op_31*tmp_kernel_op_66;
             const real_t tmp_kernel_op_68 = tmp_kernel_op_37*tmp_kernel_op_66;
             const real_t tmp_kernel_op_69 = tmp_kernel_op_44*tmp_kernel_op_56;
             const real_t tmp_kernel_op_70 = tmp_kernel_op_52*tmp_kernel_op_69;
             const real_t tmp_kernel_op_71 = tmp_kernel_op_58*tmp_kernel_op_69;
             const real_t tmp_kernel_op_72 = tmp_kernel_op_20*(tmp_kernel_op_17*tmp_kernel_op_65 + tmp_kernel_op_19*tmp_kernel_op_64) + tmp_kernel_op_41*(tmp_kernel_op_38*tmp_kernel_op_68 + tmp_kernel_op_40*tmp_kernel_op_67) + tmp_kernel_op_62*(tmp_kernel_op_59*tmp_kernel_op_71 + tmp_kernel_op_61*tmp_kernel_op_70);
             const real_t tmp_kernel_op_73 = tmp_kernel_op_14*tmp_kernel_op_7;
             const real_t tmp_kernel_op_74 = tmp_kernel_op_6*tmp_kernel_op_73;
             const real_t tmp_kernel_op_75 = tmp_kernel_op_18*tmp_kernel_op_73;
             const real_t tmp_kernel_op_76 = tmp_kernel_op_28*tmp_kernel_op_35;
             const real_t tmp_kernel_op_77 = tmp_kernel_op_27*tmp_kernel_op_76;
             const real_t tmp_kernel_op_78 = tmp_kernel_op_39*tmp_kernel_op_76;
             const real_t tmp_kernel_op_79 = tmp_kernel_op_49*tmp_kernel_op_56;
             const real_t tmp_kernel_op_80 = tmp_kernel_op_48*tmp_kernel_op_79;
             const real_t tmp_kernel_op_81 = tmp_kernel_op_60*tmp_kernel_op_79;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_20*(tmp_kernel_op_17*tmp_kernel_op_74 + tmp_kernel_op_19*tmp_kernel_op_75) + tmp_kernel_op_41*(tmp_kernel_op_38*tmp_kernel_op_77 + tmp_kernel_op_40*tmp_kernel_op_78) + tmp_kernel_op_62*(tmp_kernel_op_59*tmp_kernel_op_80 + tmp_kernel_op_61*tmp_kernel_op_81);
             const real_t tmp_kernel_op_83 = tmp_kernel_op_1*tmp_kernel_op_14;
             const real_t tmp_kernel_op_84 = tmp_kernel_op_6*tmp_kernel_op_83;
             const real_t tmp_kernel_op_85 = tmp_kernel_op_0*tmp_kernel_op_14;
             const real_t tmp_kernel_op_86 = tmp_kernel_op_16*tmp_kernel_op_85;
             const real_t tmp_kernel_op_87 = tmp_kernel_op_84 + tmp_kernel_op_86;
             const real_t tmp_kernel_op_88 = tmp_kernel_op_10*tmp_kernel_op_85;
             const real_t tmp_kernel_op_89 = tmp_kernel_op_18*tmp_kernel_op_83;
             const real_t tmp_kernel_op_90 = tmp_kernel_op_88 + tmp_kernel_op_89;
             const real_t tmp_kernel_op_91 = tmp_kernel_op_22*tmp_kernel_op_35;
             const real_t tmp_kernel_op_92 = tmp_kernel_op_27*tmp_kernel_op_91;
             const real_t tmp_kernel_op_93 = tmp_kernel_op_21*tmp_kernel_op_35;
             const real_t tmp_kernel_op_94 = tmp_kernel_op_37*tmp_kernel_op_93;
             const real_t tmp_kernel_op_95 = tmp_kernel_op_92 + tmp_kernel_op_94;
             const real_t tmp_kernel_op_96 = tmp_kernel_op_31*tmp_kernel_op_93;
             const real_t tmp_kernel_op_97 = tmp_kernel_op_39*tmp_kernel_op_91;
             const real_t tmp_kernel_op_98 = tmp_kernel_op_96 + tmp_kernel_op_97;
             const real_t tmp_kernel_op_99 = tmp_kernel_op_43*tmp_kernel_op_56;
             const real_t tmp_kernel_op_100 = tmp_kernel_op_48*tmp_kernel_op_99;
             const real_t tmp_kernel_op_101 = tmp_kernel_op_42*tmp_kernel_op_56;
             const real_t tmp_kernel_op_102 = tmp_kernel_op_101*tmp_kernel_op_58;
             const real_t tmp_kernel_op_103 = tmp_kernel_op_100 + tmp_kernel_op_102;
             const real_t tmp_kernel_op_104 = tmp_kernel_op_101*tmp_kernel_op_52;
             const real_t tmp_kernel_op_105 = tmp_kernel_op_60*tmp_kernel_op_99;
             const real_t tmp_kernel_op_106 = tmp_kernel_op_104 + tmp_kernel_op_105;
             const real_t tmp_kernel_op_107 = tmp_kernel_op_20*(tmp_kernel_op_17*tmp_kernel_op_87 + tmp_kernel_op_19*tmp_kernel_op_90) + tmp_kernel_op_41*(tmp_kernel_op_38*tmp_kernel_op_95 + tmp_kernel_op_40*tmp_kernel_op_98) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_59 + tmp_kernel_op_106*tmp_kernel_op_61);
             const real_t tmp_kernel_op_108 = tmp_kernel_op_14*tmp_kernel_op_6*tmp_kernel_op_8 - tmp_kernel_op_86;
             const real_t tmp_kernel_op_109 = tmp_kernel_op_14*tmp_kernel_op_18*tmp_kernel_op_8 - tmp_kernel_op_88;
             const real_t tmp_kernel_op_110 = tmp_kernel_op_27*tmp_kernel_op_29*tmp_kernel_op_35 - tmp_kernel_op_94;
             const real_t tmp_kernel_op_111 = tmp_kernel_op_29*tmp_kernel_op_35*tmp_kernel_op_39 - tmp_kernel_op_96;
             const real_t tmp_kernel_op_112 = -tmp_kernel_op_102 + tmp_kernel_op_48*tmp_kernel_op_50*tmp_kernel_op_56;
             const real_t tmp_kernel_op_113 = -tmp_kernel_op_104 + tmp_kernel_op_50*tmp_kernel_op_56*tmp_kernel_op_60;
             const real_t tmp_kernel_op_114 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_17 + tmp_kernel_op_109*tmp_kernel_op_19) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_38 + tmp_kernel_op_111*tmp_kernel_op_40) + tmp_kernel_op_62*(tmp_kernel_op_112*tmp_kernel_op_59 + tmp_kernel_op_113*tmp_kernel_op_61);
             const real_t tmp_kernel_op_115 = tmp_kernel_op_14*tmp_kernel_op_16*tmp_kernel_op_5 - tmp_kernel_op_84;
             const real_t tmp_kernel_op_116 = tmp_kernel_op_10*tmp_kernel_op_14*tmp_kernel_op_5 - tmp_kernel_op_89;
             const real_t tmp_kernel_op_117 = tmp_kernel_op_26*tmp_kernel_op_35*tmp_kernel_op_37 - tmp_kernel_op_92;
             const real_t tmp_kernel_op_118 = tmp_kernel_op_26*tmp_kernel_op_31*tmp_kernel_op_35 - tmp_kernel_op_97;
             const real_t tmp_kernel_op_119 = -tmp_kernel_op_100 + tmp_kernel_op_47*tmp_kernel_op_56*tmp_kernel_op_58;
             const real_t tmp_kernel_op_120 = -tmp_kernel_op_105 + tmp_kernel_op_47*tmp_kernel_op_52*tmp_kernel_op_56;
             const real_t tmp_kernel_op_121 = tmp_kernel_op_20*(tmp_kernel_op_115*tmp_kernel_op_17 + tmp_kernel_op_116*tmp_kernel_op_19) + tmp_kernel_op_41*(tmp_kernel_op_117*tmp_kernel_op_38 + tmp_kernel_op_118*tmp_kernel_op_40) + tmp_kernel_op_62*(tmp_kernel_op_119*tmp_kernel_op_59 + tmp_kernel_op_120*tmp_kernel_op_61);
             const real_t tmp_kernel_op_122 = 1.0 / (tmp_kernel_op_13*tmp_kernel_op_13);
             const real_t tmp_kernel_op_123 = tmp_kernel_op_122*(tmp_kernel_op_2*tmp_kernel_op_2);
             const real_t tmp_kernel_op_124 = 1.0 / (tmp_kernel_op_34*tmp_kernel_op_34);
             const real_t tmp_kernel_op_125 = tmp_kernel_op_124*(tmp_kernel_op_23*tmp_kernel_op_23);
             const real_t tmp_kernel_op_126 = 1.0 / (tmp_kernel_op_55*tmp_kernel_op_55);
             const real_t tmp_kernel_op_127 = tmp_kernel_op_126*(tmp_kernel_op_44*tmp_kernel_op_44);
             const real_t tmp_kernel_op_128 = tmp_kernel_op_122*tmp_kernel_op_2*tmp_kernel_op_7;
             const real_t tmp_kernel_op_129 = tmp_kernel_op_124*tmp_kernel_op_23*tmp_kernel_op_28;
             const real_t tmp_kernel_op_130 = tmp_kernel_op_126*tmp_kernel_op_44*tmp_kernel_op_49;
             const real_t tmp_kernel_op_131 = tmp_kernel_op_20*(tmp_kernel_op_10*tmp_kernel_op_128*tmp_kernel_op_18 + tmp_kernel_op_128*tmp_kernel_op_16*tmp_kernel_op_6) + tmp_kernel_op_41*(tmp_kernel_op_129*tmp_kernel_op_27*tmp_kernel_op_37 + tmp_kernel_op_129*tmp_kernel_op_31*tmp_kernel_op_39) + tmp_kernel_op_62*(tmp_kernel_op_130*tmp_kernel_op_48*tmp_kernel_op_58 + tmp_kernel_op_130*tmp_kernel_op_52*tmp_kernel_op_60);
             const real_t tmp_kernel_op_132 = tmp_kernel_op_20*(tmp_kernel_op_64*tmp_kernel_op_90 + tmp_kernel_op_65*tmp_kernel_op_87) + tmp_kernel_op_41*(tmp_kernel_op_67*tmp_kernel_op_98 + tmp_kernel_op_68*tmp_kernel_op_95) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_71 + tmp_kernel_op_106*tmp_kernel_op_70);
             const real_t tmp_kernel_op_133 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_65 + tmp_kernel_op_109*tmp_kernel_op_64) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_68 + tmp_kernel_op_111*tmp_kernel_op_67) + tmp_kernel_op_62*(tmp_kernel_op_112*tmp_kernel_op_71 + tmp_kernel_op_113*tmp_kernel_op_70);
             const real_t tmp_kernel_op_134 = tmp_kernel_op_20*(tmp_kernel_op_115*tmp_kernel_op_65 + tmp_kernel_op_116*tmp_kernel_op_64) + tmp_kernel_op_41*(tmp_kernel_op_117*tmp_kernel_op_68 + tmp_kernel_op_118*tmp_kernel_op_67) + tmp_kernel_op_62*(tmp_kernel_op_119*tmp_kernel_op_71 + tmp_kernel_op_120*tmp_kernel_op_70);
             const real_t tmp_kernel_op_135 = tmp_kernel_op_122*(tmp_kernel_op_7*tmp_kernel_op_7);
             const real_t tmp_kernel_op_136 = tmp_kernel_op_124*(tmp_kernel_op_28*tmp_kernel_op_28);
             const real_t tmp_kernel_op_137 = tmp_kernel_op_126*(tmp_kernel_op_49*tmp_kernel_op_49);
             const real_t tmp_kernel_op_138 = tmp_kernel_op_20*(tmp_kernel_op_74*tmp_kernel_op_87 + tmp_kernel_op_75*tmp_kernel_op_90) + tmp_kernel_op_41*(tmp_kernel_op_77*tmp_kernel_op_95 + tmp_kernel_op_78*tmp_kernel_op_98) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_80 + tmp_kernel_op_106*tmp_kernel_op_81);
             const real_t tmp_kernel_op_139 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_74 + tmp_kernel_op_109*tmp_kernel_op_75) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_77 + tmp_kernel_op_111*tmp_kernel_op_78) + tmp_kernel_op_62*(tmp_kernel_op_112*tmp_kernel_op_80 + tmp_kernel_op_113*tmp_kernel_op_81);
             const real_t tmp_kernel_op_140 = tmp_kernel_op_20*(tmp_kernel_op_115*tmp_kernel_op_74 + tmp_kernel_op_116*tmp_kernel_op_75) + tmp_kernel_op_41*(tmp_kernel_op_117*tmp_kernel_op_77 + tmp_kernel_op_118*tmp_kernel_op_78) + tmp_kernel_op_62*(tmp_kernel_op_119*tmp_kernel_op_80 + tmp_kernel_op_120*tmp_kernel_op_81);
             const real_t tmp_kernel_op_141 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_87 + tmp_kernel_op_109*tmp_kernel_op_90) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_95 + tmp_kernel_op_111*tmp_kernel_op_98) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_112 + tmp_kernel_op_106*tmp_kernel_op_113);
             const real_t tmp_kernel_op_142 = tmp_kernel_op_20*(tmp_kernel_op_115*tmp_kernel_op_87 + tmp_kernel_op_116*tmp_kernel_op_90) + tmp_kernel_op_41*(tmp_kernel_op_117*tmp_kernel_op_95 + tmp_kernel_op_118*tmp_kernel_op_98) + tmp_kernel_op_62*(tmp_kernel_op_103*tmp_kernel_op_119 + tmp_kernel_op_106*tmp_kernel_op_120);
             const real_t tmp_kernel_op_143 = tmp_kernel_op_20*(tmp_kernel_op_108*tmp_kernel_op_115 + tmp_kernel_op_109*tmp_kernel_op_116) + tmp_kernel_op_41*(tmp_kernel_op_110*tmp_kernel_op_117 + tmp_kernel_op_111*tmp_kernel_op_118) + tmp_kernel_op_62*(tmp_kernel_op_112*tmp_kernel_op_119 + tmp_kernel_op_113*tmp_kernel_op_120);
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_20*((tmp_kernel_op_17*tmp_kernel_op_17) + (tmp_kernel_op_19*tmp_kernel_op_19)) + tmp_kernel_op_41*((tmp_kernel_op_38*tmp_kernel_op_38) + (tmp_kernel_op_40*tmp_kernel_op_40)) + tmp_kernel_op_62*((tmp_kernel_op_59*tmp_kernel_op_59) + (tmp_kernel_op_61*tmp_kernel_op_61))) + src_dof_1*tmp_kernel_op_72 + src_dof_2*tmp_kernel_op_82 + src_dof_3*tmp_kernel_op_107 + src_dof_4*tmp_kernel_op_114 + src_dof_5*tmp_kernel_op_121;
             const real_t elMatVec_1 = src_dof_0*tmp_kernel_op_72 + src_dof_1*(tmp_kernel_op_20*((tmp_kernel_op_10*tmp_kernel_op_10)*tmp_kernel_op_123 + tmp_kernel_op_123*(tmp_kernel_op_16*tmp_kernel_op_16)) + tmp_kernel_op_41*(tmp_kernel_op_125*(tmp_kernel_op_31*tmp_kernel_op_31) + tmp_kernel_op_125*(tmp_kernel_op_37*tmp_kernel_op_37)) + tmp_kernel_op_62*(tmp_kernel_op_127*(tmp_kernel_op_52*tmp_kernel_op_52) + tmp_kernel_op_127*(tmp_kernel_op_58*tmp_kernel_op_58))) + src_dof_2*tmp_kernel_op_131 + src_dof_3*tmp_kernel_op_132 + src_dof_4*tmp_kernel_op_133 + src_dof_5*tmp_kernel_op_134;
             const real_t elMatVec_2 = src_dof_0*tmp_kernel_op_82 + src_dof_1*tmp_kernel_op_131 + src_dof_2*(tmp_kernel_op_20*(tmp_kernel_op_135*(tmp_kernel_op_18*tmp_kernel_op_18) + tmp_kernel_op_135*(tmp_kernel_op_6*tmp_kernel_op_6)) + tmp_kernel_op_41*(tmp_kernel_op_136*(tmp_kernel_op_27*tmp_kernel_op_27) + tmp_kernel_op_136*(tmp_kernel_op_39*tmp_kernel_op_39)) + tmp_kernel_op_62*(tmp_kernel_op_137*(tmp_kernel_op_48*tmp_kernel_op_48) + tmp_kernel_op_137*(tmp_kernel_op_60*tmp_kernel_op_60))) + src_dof_3*tmp_kernel_op_138 + src_dof_4*tmp_kernel_op_139 + src_dof_5*tmp_kernel_op_140;
             const real_t elMatVec_3 = src_dof_0*tmp_kernel_op_107 + src_dof_1*tmp_kernel_op_132 + src_dof_2*tmp_kernel_op_138 + src_dof_3*(tmp_kernel_op_20*((tmp_kernel_op_87*tmp_kernel_op_87) + (tmp_kernel_op_90*tmp_kernel_op_90)) + tmp_kernel_op_41*((tmp_kernel_op_95*tmp_kernel_op_95) + (tmp_kernel_op_98*tmp_kernel_op_98)) + tmp_kernel_op_62*((tmp_kernel_op_103*tmp_kernel_op_103) + (tmp_kernel_op_106*tmp_kernel_op_106))) + src_dof_4*tmp_kernel_op_141 + src_dof_5*tmp_kernel_op_142;
             const real_t elMatVec_4 = src_dof_0*tmp_kernel_op_114 + src_dof_1*tmp_kernel_op_133 + src_dof_2*tmp_kernel_op_139 + src_dof_3*tmp_kernel_op_141 + src_dof_4*(tmp_kernel_op_20*((tmp_kernel_op_108*tmp_kernel_op_108) + (tmp_kernel_op_109*tmp_kernel_op_109)) + tmp_kernel_op_41*((tmp_kernel_op_110*tmp_kernel_op_110) + (tmp_kernel_op_111*tmp_kernel_op_111)) + tmp_kernel_op_62*((tmp_kernel_op_112*tmp_kernel_op_112) + (tmp_kernel_op_113*tmp_kernel_op_113))) + src_dof_5*tmp_kernel_op_143;
             const real_t elMatVec_5 = src_dof_0*tmp_kernel_op_121 + src_dof_1*tmp_kernel_op_134 + src_dof_2*tmp_kernel_op_140 + src_dof_3*tmp_kernel_op_142 + src_dof_4*tmp_kernel_op_143 + src_dof_5*(tmp_kernel_op_20*((tmp_kernel_op_115*tmp_kernel_op_115) + (tmp_kernel_op_116*tmp_kernel_op_116)) + tmp_kernel_op_41*((tmp_kernel_op_117*tmp_kernel_op_117) + (tmp_kernel_op_118*tmp_kernel_op_118)) + tmp_kernel_op_62*((tmp_kernel_op_119*tmp_kernel_op_119) + (tmp_kernel_op_120*tmp_kernel_op_120)));
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
