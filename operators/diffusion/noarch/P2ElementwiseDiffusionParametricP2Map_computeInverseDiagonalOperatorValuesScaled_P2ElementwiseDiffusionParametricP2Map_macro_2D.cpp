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

void P2ElementwiseDiffusionParametricP2Map::computeInverseDiagonalOperatorValuesScaled_P2ElementwiseDiffusionParametricP2Map_macro_2D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t * RESTRICT  _data_micromesh_edge_0, real_t * RESTRICT  _data_micromesh_edge_1, real_t * RESTRICT  _data_micromesh_vertex_0, real_t * RESTRICT  _data_micromesh_vertex_1, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t tmp_kernel_op_19 = 0.66666666666666663;
       const real_t tmp_kernel_op_20 = 2.6666666666666665;
       const real_t tmp_kernel_op_21 = tmp_kernel_op_20 - 1.0;
       const real_t tmp_kernel_op_22 = tmp_kernel_op_19 + tmp_kernel_op_20 - 3.0;
       const real_t tmp_kernel_op_24 = -tmp_kernel_op_19 - 1.333333333333333;
       const real_t tmp_kernel_op_26 = tmp_kernel_op_19 - 1.0;
       const real_t tmp_kernel_op_27 = -tmp_kernel_op_20 + 2.666666666666667;
       const real_t tmp_kernel_op_38 = 0.66666666666666663;
       const real_t tmp_kernel_op_39 = 0.66666666666666663;
       const real_t tmp_kernel_op_40 = tmp_kernel_op_39 - 1.0;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_38 + tmp_kernel_op_39 - 3.0;
       const real_t tmp_kernel_op_43 = -tmp_kernel_op_38 + 2.666666666666667;
       const real_t tmp_kernel_op_45 = tmp_kernel_op_38 - 1.0;
       const real_t tmp_kernel_op_46 = -tmp_kernel_op_39 + 2.666666666666667;
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
             const real_t tmp_kernel_op_17 = -tmp_kernel_op_12;
             const real_t tmp_kernel_op_18 = 0.16666666666666666*abs(tmp_kernel_op_13);
             const real_t tmp_kernel_op_23 = micromesh_dof_0*tmp_kernel_op_22;
             const real_t tmp_kernel_op_25 = micromesh_dof_1*tmp_kernel_op_21 + micromesh_dof_3*tmp_kernel_op_19 - micromesh_dof_4*tmp_kernel_op_19 + micromesh_dof_5*tmp_kernel_op_24 + tmp_kernel_op_23;
             const real_t tmp_kernel_op_28 = micromesh_dof_6*tmp_kernel_op_22;
             const real_t tmp_kernel_op_29 = micromesh_dof_10*tmp_kernel_op_27 - micromesh_dof_11*tmp_kernel_op_20 + micromesh_dof_8*tmp_kernel_op_26 + micromesh_dof_9*tmp_kernel_op_20 + tmp_kernel_op_28;
             const real_t tmp_kernel_op_30 = micromesh_dof_2*tmp_kernel_op_26 + micromesh_dof_3*tmp_kernel_op_20 + micromesh_dof_4*tmp_kernel_op_27 - micromesh_dof_5*tmp_kernel_op_20 + tmp_kernel_op_23;
             const real_t tmp_kernel_op_31 = -micromesh_dof_10*tmp_kernel_op_19 + micromesh_dof_11*tmp_kernel_op_24 + micromesh_dof_7*tmp_kernel_op_21 + micromesh_dof_9*tmp_kernel_op_19 + tmp_kernel_op_28;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_25*tmp_kernel_op_29 - tmp_kernel_op_30*tmp_kernel_op_31;
             const real_t tmp_kernel_op_33 = 1.0 / (tmp_kernel_op_32);
             const real_t tmp_kernel_op_34 = tmp_kernel_op_22*tmp_kernel_op_33;
             const real_t tmp_kernel_op_35 = -tmp_kernel_op_30;
             const real_t tmp_kernel_op_36 = -tmp_kernel_op_31;
             const real_t tmp_kernel_op_37 = 0.16666666666666666*abs(tmp_kernel_op_32);
             const real_t tmp_kernel_op_42 = micromesh_dof_0*tmp_kernel_op_41;
             const real_t tmp_kernel_op_44 = micromesh_dof_1*tmp_kernel_op_40 + micromesh_dof_3*tmp_kernel_op_38 - micromesh_dof_4*tmp_kernel_op_38 + micromesh_dof_5*tmp_kernel_op_43 + tmp_kernel_op_42;
             const real_t tmp_kernel_op_47 = micromesh_dof_6*tmp_kernel_op_41;
             const real_t tmp_kernel_op_48 = micromesh_dof_10*tmp_kernel_op_46 - micromesh_dof_11*tmp_kernel_op_39 + micromesh_dof_8*tmp_kernel_op_45 + micromesh_dof_9*tmp_kernel_op_39 + tmp_kernel_op_47;
             const real_t tmp_kernel_op_49 = micromesh_dof_2*tmp_kernel_op_45 + micromesh_dof_3*tmp_kernel_op_39 + micromesh_dof_4*tmp_kernel_op_46 - micromesh_dof_5*tmp_kernel_op_39 + tmp_kernel_op_42;
             const real_t tmp_kernel_op_50 = -micromesh_dof_10*tmp_kernel_op_38 + micromesh_dof_11*tmp_kernel_op_43 + micromesh_dof_7*tmp_kernel_op_40 + micromesh_dof_9*tmp_kernel_op_38 + tmp_kernel_op_47;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_44*tmp_kernel_op_48 - tmp_kernel_op_49*tmp_kernel_op_50;
             const real_t tmp_kernel_op_52 = 1.0 / (tmp_kernel_op_51);
             const real_t tmp_kernel_op_53 = tmp_kernel_op_41*tmp_kernel_op_52;
             const real_t tmp_kernel_op_54 = -tmp_kernel_op_49;
             const real_t tmp_kernel_op_55 = -tmp_kernel_op_50;
             const real_t tmp_kernel_op_56 = 0.16666666666666666*abs(tmp_kernel_op_51);
             const real_t tmp_kernel_op_57 = 1.0 / (tmp_kernel_op_13*tmp_kernel_op_13);
             const real_t tmp_kernel_op_58 = (tmp_kernel_op_2*tmp_kernel_op_2)*tmp_kernel_op_57;
             const real_t tmp_kernel_op_59 = 1.0 / (tmp_kernel_op_32*tmp_kernel_op_32);
             const real_t tmp_kernel_op_60 = (tmp_kernel_op_21*tmp_kernel_op_21)*tmp_kernel_op_59;
             const real_t tmp_kernel_op_61 = 1.0 / (tmp_kernel_op_51*tmp_kernel_op_51);
             const real_t tmp_kernel_op_62 = (tmp_kernel_op_40*tmp_kernel_op_40)*tmp_kernel_op_61;
             const real_t tmp_kernel_op_63 = tmp_kernel_op_57*(tmp_kernel_op_7*tmp_kernel_op_7);
             const real_t tmp_kernel_op_64 = (tmp_kernel_op_26*tmp_kernel_op_26)*tmp_kernel_op_59;
             const real_t tmp_kernel_op_65 = (tmp_kernel_op_45*tmp_kernel_op_45)*tmp_kernel_op_61;
             const real_t tmp_kernel_op_66 = tmp_kernel_op_1*tmp_kernel_op_14;
             const real_t tmp_kernel_op_67 = tmp_kernel_op_6*tmp_kernel_op_66;
             const real_t tmp_kernel_op_68 = tmp_kernel_op_0*tmp_kernel_op_14;
             const real_t tmp_kernel_op_69 = tmp_kernel_op_16*tmp_kernel_op_68;
             const real_t tmp_kernel_op_70 = tmp_kernel_op_10*tmp_kernel_op_68;
             const real_t tmp_kernel_op_71 = tmp_kernel_op_17*tmp_kernel_op_66;
             const real_t tmp_kernel_op_72 = tmp_kernel_op_20*tmp_kernel_op_33;
             const real_t tmp_kernel_op_73 = tmp_kernel_op_25*tmp_kernel_op_72;
             const real_t tmp_kernel_op_74 = tmp_kernel_op_19*tmp_kernel_op_33;
             const real_t tmp_kernel_op_75 = tmp_kernel_op_35*tmp_kernel_op_74;
             const real_t tmp_kernel_op_76 = tmp_kernel_op_29*tmp_kernel_op_74;
             const real_t tmp_kernel_op_77 = tmp_kernel_op_36*tmp_kernel_op_72;
             const real_t tmp_kernel_op_78 = tmp_kernel_op_39*tmp_kernel_op_52;
             const real_t tmp_kernel_op_79 = tmp_kernel_op_44*tmp_kernel_op_78;
             const real_t tmp_kernel_op_80 = tmp_kernel_op_38*tmp_kernel_op_52;
             const real_t tmp_kernel_op_81 = tmp_kernel_op_54*tmp_kernel_op_80;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_48*tmp_kernel_op_80;
             const real_t tmp_kernel_op_83 = tmp_kernel_op_55*tmp_kernel_op_78;
             const real_t elMatDiag_0 = tmp_kernel_op_18*(((tmp_kernel_op_10*tmp_kernel_op_15 + tmp_kernel_op_15*tmp_kernel_op_17)*(tmp_kernel_op_10*tmp_kernel_op_15 + tmp_kernel_op_15*tmp_kernel_op_17)) + ((tmp_kernel_op_15*tmp_kernel_op_16 + tmp_kernel_op_15*tmp_kernel_op_6)*(tmp_kernel_op_15*tmp_kernel_op_16 + tmp_kernel_op_15*tmp_kernel_op_6))) + tmp_kernel_op_37*(((tmp_kernel_op_25*tmp_kernel_op_34 + tmp_kernel_op_34*tmp_kernel_op_35)*(tmp_kernel_op_25*tmp_kernel_op_34 + tmp_kernel_op_34*tmp_kernel_op_35)) + ((tmp_kernel_op_29*tmp_kernel_op_34 + tmp_kernel_op_34*tmp_kernel_op_36)*(tmp_kernel_op_29*tmp_kernel_op_34 + tmp_kernel_op_34*tmp_kernel_op_36))) + tmp_kernel_op_56*(((tmp_kernel_op_44*tmp_kernel_op_53 + tmp_kernel_op_53*tmp_kernel_op_54)*(tmp_kernel_op_44*tmp_kernel_op_53 + tmp_kernel_op_53*tmp_kernel_op_54)) + ((tmp_kernel_op_48*tmp_kernel_op_53 + tmp_kernel_op_53*tmp_kernel_op_55)*(tmp_kernel_op_48*tmp_kernel_op_53 + tmp_kernel_op_53*tmp_kernel_op_55)));
             const real_t elMatDiag_1 = tmp_kernel_op_18*((tmp_kernel_op_10*tmp_kernel_op_10)*tmp_kernel_op_58 + (tmp_kernel_op_16*tmp_kernel_op_16)*tmp_kernel_op_58) + tmp_kernel_op_37*((tmp_kernel_op_29*tmp_kernel_op_29)*tmp_kernel_op_60 + (tmp_kernel_op_35*tmp_kernel_op_35)*tmp_kernel_op_60) + tmp_kernel_op_56*((tmp_kernel_op_48*tmp_kernel_op_48)*tmp_kernel_op_62 + (tmp_kernel_op_54*tmp_kernel_op_54)*tmp_kernel_op_62);
             const real_t elMatDiag_2 = tmp_kernel_op_18*((tmp_kernel_op_17*tmp_kernel_op_17)*tmp_kernel_op_63 + (tmp_kernel_op_6*tmp_kernel_op_6)*tmp_kernel_op_63) + tmp_kernel_op_37*((tmp_kernel_op_25*tmp_kernel_op_25)*tmp_kernel_op_64 + (tmp_kernel_op_36*tmp_kernel_op_36)*tmp_kernel_op_64) + tmp_kernel_op_56*((tmp_kernel_op_44*tmp_kernel_op_44)*tmp_kernel_op_65 + (tmp_kernel_op_55*tmp_kernel_op_55)*tmp_kernel_op_65);
             const real_t elMatDiag_3 = tmp_kernel_op_18*(((tmp_kernel_op_67 + tmp_kernel_op_69)*(tmp_kernel_op_67 + tmp_kernel_op_69)) + ((tmp_kernel_op_70 + tmp_kernel_op_71)*(tmp_kernel_op_70 + tmp_kernel_op_71))) + tmp_kernel_op_37*(((tmp_kernel_op_73 + tmp_kernel_op_75)*(tmp_kernel_op_73 + tmp_kernel_op_75)) + ((tmp_kernel_op_76 + tmp_kernel_op_77)*(tmp_kernel_op_76 + tmp_kernel_op_77))) + tmp_kernel_op_56*(((tmp_kernel_op_79 + tmp_kernel_op_81)*(tmp_kernel_op_79 + tmp_kernel_op_81)) + ((tmp_kernel_op_82 + tmp_kernel_op_83)*(tmp_kernel_op_82 + tmp_kernel_op_83)));
             const real_t elMatDiag_4 = tmp_kernel_op_18*(((tmp_kernel_op_14*tmp_kernel_op_17*tmp_kernel_op_8 - tmp_kernel_op_70)*(tmp_kernel_op_14*tmp_kernel_op_17*tmp_kernel_op_8 - tmp_kernel_op_70)) + ((tmp_kernel_op_14*tmp_kernel_op_6*tmp_kernel_op_8 - tmp_kernel_op_69)*(tmp_kernel_op_14*tmp_kernel_op_6*tmp_kernel_op_8 - tmp_kernel_op_69))) + tmp_kernel_op_37*(((tmp_kernel_op_25*tmp_kernel_op_27*tmp_kernel_op_33 - tmp_kernel_op_75)*(tmp_kernel_op_25*tmp_kernel_op_27*tmp_kernel_op_33 - tmp_kernel_op_75)) + ((tmp_kernel_op_27*tmp_kernel_op_33*tmp_kernel_op_36 - tmp_kernel_op_76)*(tmp_kernel_op_27*tmp_kernel_op_33*tmp_kernel_op_36 - tmp_kernel_op_76))) + tmp_kernel_op_56*(((tmp_kernel_op_44*tmp_kernel_op_46*tmp_kernel_op_52 - tmp_kernel_op_81)*(tmp_kernel_op_44*tmp_kernel_op_46*tmp_kernel_op_52 - tmp_kernel_op_81)) + ((tmp_kernel_op_46*tmp_kernel_op_52*tmp_kernel_op_55 - tmp_kernel_op_82)*(tmp_kernel_op_46*tmp_kernel_op_52*tmp_kernel_op_55 - tmp_kernel_op_82)));
             const real_t elMatDiag_5 = tmp_kernel_op_18*(((tmp_kernel_op_10*tmp_kernel_op_14*tmp_kernel_op_5 - tmp_kernel_op_71)*(tmp_kernel_op_10*tmp_kernel_op_14*tmp_kernel_op_5 - tmp_kernel_op_71)) + ((tmp_kernel_op_14*tmp_kernel_op_16*tmp_kernel_op_5 - tmp_kernel_op_67)*(tmp_kernel_op_14*tmp_kernel_op_16*tmp_kernel_op_5 - tmp_kernel_op_67))) + tmp_kernel_op_37*(((tmp_kernel_op_24*tmp_kernel_op_29*tmp_kernel_op_33 - tmp_kernel_op_77)*(tmp_kernel_op_24*tmp_kernel_op_29*tmp_kernel_op_33 - tmp_kernel_op_77)) + ((tmp_kernel_op_24*tmp_kernel_op_33*tmp_kernel_op_35 - tmp_kernel_op_73)*(tmp_kernel_op_24*tmp_kernel_op_33*tmp_kernel_op_35 - tmp_kernel_op_73))) + tmp_kernel_op_56*(((tmp_kernel_op_43*tmp_kernel_op_48*tmp_kernel_op_52 - tmp_kernel_op_83)*(tmp_kernel_op_43*tmp_kernel_op_48*tmp_kernel_op_52 - tmp_kernel_op_83)) + ((tmp_kernel_op_43*tmp_kernel_op_52*tmp_kernel_op_54 - tmp_kernel_op_79)*(tmp_kernel_op_43*tmp_kernel_op_52*tmp_kernel_op_54 - tmp_kernel_op_79)));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
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
             const real_t tmp_kernel_op_17 = -tmp_kernel_op_12;
             const real_t tmp_kernel_op_18 = 0.16666666666666666*abs(tmp_kernel_op_13);
             const real_t tmp_kernel_op_23 = micromesh_dof_0*tmp_kernel_op_22;
             const real_t tmp_kernel_op_25 = micromesh_dof_1*tmp_kernel_op_21 + micromesh_dof_3*tmp_kernel_op_19 - micromesh_dof_4*tmp_kernel_op_19 + micromesh_dof_5*tmp_kernel_op_24 + tmp_kernel_op_23;
             const real_t tmp_kernel_op_28 = micromesh_dof_6*tmp_kernel_op_22;
             const real_t tmp_kernel_op_29 = micromesh_dof_10*tmp_kernel_op_27 - micromesh_dof_11*tmp_kernel_op_20 + micromesh_dof_8*tmp_kernel_op_26 + micromesh_dof_9*tmp_kernel_op_20 + tmp_kernel_op_28;
             const real_t tmp_kernel_op_30 = micromesh_dof_2*tmp_kernel_op_26 + micromesh_dof_3*tmp_kernel_op_20 + micromesh_dof_4*tmp_kernel_op_27 - micromesh_dof_5*tmp_kernel_op_20 + tmp_kernel_op_23;
             const real_t tmp_kernel_op_31 = -micromesh_dof_10*tmp_kernel_op_19 + micromesh_dof_11*tmp_kernel_op_24 + micromesh_dof_7*tmp_kernel_op_21 + micromesh_dof_9*tmp_kernel_op_19 + tmp_kernel_op_28;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_25*tmp_kernel_op_29 - tmp_kernel_op_30*tmp_kernel_op_31;
             const real_t tmp_kernel_op_33 = 1.0 / (tmp_kernel_op_32);
             const real_t tmp_kernel_op_34 = tmp_kernel_op_22*tmp_kernel_op_33;
             const real_t tmp_kernel_op_35 = -tmp_kernel_op_30;
             const real_t tmp_kernel_op_36 = -tmp_kernel_op_31;
             const real_t tmp_kernel_op_37 = 0.16666666666666666*abs(tmp_kernel_op_32);
             const real_t tmp_kernel_op_42 = micromesh_dof_0*tmp_kernel_op_41;
             const real_t tmp_kernel_op_44 = micromesh_dof_1*tmp_kernel_op_40 + micromesh_dof_3*tmp_kernel_op_38 - micromesh_dof_4*tmp_kernel_op_38 + micromesh_dof_5*tmp_kernel_op_43 + tmp_kernel_op_42;
             const real_t tmp_kernel_op_47 = micromesh_dof_6*tmp_kernel_op_41;
             const real_t tmp_kernel_op_48 = micromesh_dof_10*tmp_kernel_op_46 - micromesh_dof_11*tmp_kernel_op_39 + micromesh_dof_8*tmp_kernel_op_45 + micromesh_dof_9*tmp_kernel_op_39 + tmp_kernel_op_47;
             const real_t tmp_kernel_op_49 = micromesh_dof_2*tmp_kernel_op_45 + micromesh_dof_3*tmp_kernel_op_39 + micromesh_dof_4*tmp_kernel_op_46 - micromesh_dof_5*tmp_kernel_op_39 + tmp_kernel_op_42;
             const real_t tmp_kernel_op_50 = -micromesh_dof_10*tmp_kernel_op_38 + micromesh_dof_11*tmp_kernel_op_43 + micromesh_dof_7*tmp_kernel_op_40 + micromesh_dof_9*tmp_kernel_op_38 + tmp_kernel_op_47;
             const real_t tmp_kernel_op_51 = tmp_kernel_op_44*tmp_kernel_op_48 - tmp_kernel_op_49*tmp_kernel_op_50;
             const real_t tmp_kernel_op_52 = 1.0 / (tmp_kernel_op_51);
             const real_t tmp_kernel_op_53 = tmp_kernel_op_41*tmp_kernel_op_52;
             const real_t tmp_kernel_op_54 = -tmp_kernel_op_49;
             const real_t tmp_kernel_op_55 = -tmp_kernel_op_50;
             const real_t tmp_kernel_op_56 = 0.16666666666666666*abs(tmp_kernel_op_51);
             const real_t tmp_kernel_op_57 = 1.0 / (tmp_kernel_op_13*tmp_kernel_op_13);
             const real_t tmp_kernel_op_58 = (tmp_kernel_op_2*tmp_kernel_op_2)*tmp_kernel_op_57;
             const real_t tmp_kernel_op_59 = 1.0 / (tmp_kernel_op_32*tmp_kernel_op_32);
             const real_t tmp_kernel_op_60 = (tmp_kernel_op_21*tmp_kernel_op_21)*tmp_kernel_op_59;
             const real_t tmp_kernel_op_61 = 1.0 / (tmp_kernel_op_51*tmp_kernel_op_51);
             const real_t tmp_kernel_op_62 = (tmp_kernel_op_40*tmp_kernel_op_40)*tmp_kernel_op_61;
             const real_t tmp_kernel_op_63 = tmp_kernel_op_57*(tmp_kernel_op_7*tmp_kernel_op_7);
             const real_t tmp_kernel_op_64 = (tmp_kernel_op_26*tmp_kernel_op_26)*tmp_kernel_op_59;
             const real_t tmp_kernel_op_65 = (tmp_kernel_op_45*tmp_kernel_op_45)*tmp_kernel_op_61;
             const real_t tmp_kernel_op_66 = tmp_kernel_op_1*tmp_kernel_op_14;
             const real_t tmp_kernel_op_67 = tmp_kernel_op_6*tmp_kernel_op_66;
             const real_t tmp_kernel_op_68 = tmp_kernel_op_0*tmp_kernel_op_14;
             const real_t tmp_kernel_op_69 = tmp_kernel_op_16*tmp_kernel_op_68;
             const real_t tmp_kernel_op_70 = tmp_kernel_op_10*tmp_kernel_op_68;
             const real_t tmp_kernel_op_71 = tmp_kernel_op_17*tmp_kernel_op_66;
             const real_t tmp_kernel_op_72 = tmp_kernel_op_20*tmp_kernel_op_33;
             const real_t tmp_kernel_op_73 = tmp_kernel_op_25*tmp_kernel_op_72;
             const real_t tmp_kernel_op_74 = tmp_kernel_op_19*tmp_kernel_op_33;
             const real_t tmp_kernel_op_75 = tmp_kernel_op_35*tmp_kernel_op_74;
             const real_t tmp_kernel_op_76 = tmp_kernel_op_29*tmp_kernel_op_74;
             const real_t tmp_kernel_op_77 = tmp_kernel_op_36*tmp_kernel_op_72;
             const real_t tmp_kernel_op_78 = tmp_kernel_op_39*tmp_kernel_op_52;
             const real_t tmp_kernel_op_79 = tmp_kernel_op_44*tmp_kernel_op_78;
             const real_t tmp_kernel_op_80 = tmp_kernel_op_38*tmp_kernel_op_52;
             const real_t tmp_kernel_op_81 = tmp_kernel_op_54*tmp_kernel_op_80;
             const real_t tmp_kernel_op_82 = tmp_kernel_op_48*tmp_kernel_op_80;
             const real_t tmp_kernel_op_83 = tmp_kernel_op_55*tmp_kernel_op_78;
             const real_t elMatDiag_0 = tmp_kernel_op_18*(((tmp_kernel_op_10*tmp_kernel_op_15 + tmp_kernel_op_15*tmp_kernel_op_17)*(tmp_kernel_op_10*tmp_kernel_op_15 + tmp_kernel_op_15*tmp_kernel_op_17)) + ((tmp_kernel_op_15*tmp_kernel_op_16 + tmp_kernel_op_15*tmp_kernel_op_6)*(tmp_kernel_op_15*tmp_kernel_op_16 + tmp_kernel_op_15*tmp_kernel_op_6))) + tmp_kernel_op_37*(((tmp_kernel_op_25*tmp_kernel_op_34 + tmp_kernel_op_34*tmp_kernel_op_35)*(tmp_kernel_op_25*tmp_kernel_op_34 + tmp_kernel_op_34*tmp_kernel_op_35)) + ((tmp_kernel_op_29*tmp_kernel_op_34 + tmp_kernel_op_34*tmp_kernel_op_36)*(tmp_kernel_op_29*tmp_kernel_op_34 + tmp_kernel_op_34*tmp_kernel_op_36))) + tmp_kernel_op_56*(((tmp_kernel_op_44*tmp_kernel_op_53 + tmp_kernel_op_53*tmp_kernel_op_54)*(tmp_kernel_op_44*tmp_kernel_op_53 + tmp_kernel_op_53*tmp_kernel_op_54)) + ((tmp_kernel_op_48*tmp_kernel_op_53 + tmp_kernel_op_53*tmp_kernel_op_55)*(tmp_kernel_op_48*tmp_kernel_op_53 + tmp_kernel_op_53*tmp_kernel_op_55)));
             const real_t elMatDiag_1 = tmp_kernel_op_18*((tmp_kernel_op_10*tmp_kernel_op_10)*tmp_kernel_op_58 + (tmp_kernel_op_16*tmp_kernel_op_16)*tmp_kernel_op_58) + tmp_kernel_op_37*((tmp_kernel_op_29*tmp_kernel_op_29)*tmp_kernel_op_60 + (tmp_kernel_op_35*tmp_kernel_op_35)*tmp_kernel_op_60) + tmp_kernel_op_56*((tmp_kernel_op_48*tmp_kernel_op_48)*tmp_kernel_op_62 + (tmp_kernel_op_54*tmp_kernel_op_54)*tmp_kernel_op_62);
             const real_t elMatDiag_2 = tmp_kernel_op_18*((tmp_kernel_op_17*tmp_kernel_op_17)*tmp_kernel_op_63 + (tmp_kernel_op_6*tmp_kernel_op_6)*tmp_kernel_op_63) + tmp_kernel_op_37*((tmp_kernel_op_25*tmp_kernel_op_25)*tmp_kernel_op_64 + (tmp_kernel_op_36*tmp_kernel_op_36)*tmp_kernel_op_64) + tmp_kernel_op_56*((tmp_kernel_op_44*tmp_kernel_op_44)*tmp_kernel_op_65 + (tmp_kernel_op_55*tmp_kernel_op_55)*tmp_kernel_op_65);
             const real_t elMatDiag_3 = tmp_kernel_op_18*(((tmp_kernel_op_67 + tmp_kernel_op_69)*(tmp_kernel_op_67 + tmp_kernel_op_69)) + ((tmp_kernel_op_70 + tmp_kernel_op_71)*(tmp_kernel_op_70 + tmp_kernel_op_71))) + tmp_kernel_op_37*(((tmp_kernel_op_73 + tmp_kernel_op_75)*(tmp_kernel_op_73 + tmp_kernel_op_75)) + ((tmp_kernel_op_76 + tmp_kernel_op_77)*(tmp_kernel_op_76 + tmp_kernel_op_77))) + tmp_kernel_op_56*(((tmp_kernel_op_79 + tmp_kernel_op_81)*(tmp_kernel_op_79 + tmp_kernel_op_81)) + ((tmp_kernel_op_82 + tmp_kernel_op_83)*(tmp_kernel_op_82 + tmp_kernel_op_83)));
             const real_t elMatDiag_4 = tmp_kernel_op_18*(((tmp_kernel_op_14*tmp_kernel_op_17*tmp_kernel_op_8 - tmp_kernel_op_70)*(tmp_kernel_op_14*tmp_kernel_op_17*tmp_kernel_op_8 - tmp_kernel_op_70)) + ((tmp_kernel_op_14*tmp_kernel_op_6*tmp_kernel_op_8 - tmp_kernel_op_69)*(tmp_kernel_op_14*tmp_kernel_op_6*tmp_kernel_op_8 - tmp_kernel_op_69))) + tmp_kernel_op_37*(((tmp_kernel_op_25*tmp_kernel_op_27*tmp_kernel_op_33 - tmp_kernel_op_75)*(tmp_kernel_op_25*tmp_kernel_op_27*tmp_kernel_op_33 - tmp_kernel_op_75)) + ((tmp_kernel_op_27*tmp_kernel_op_33*tmp_kernel_op_36 - tmp_kernel_op_76)*(tmp_kernel_op_27*tmp_kernel_op_33*tmp_kernel_op_36 - tmp_kernel_op_76))) + tmp_kernel_op_56*(((tmp_kernel_op_44*tmp_kernel_op_46*tmp_kernel_op_52 - tmp_kernel_op_81)*(tmp_kernel_op_44*tmp_kernel_op_46*tmp_kernel_op_52 - tmp_kernel_op_81)) + ((tmp_kernel_op_46*tmp_kernel_op_52*tmp_kernel_op_55 - tmp_kernel_op_82)*(tmp_kernel_op_46*tmp_kernel_op_52*tmp_kernel_op_55 - tmp_kernel_op_82)));
             const real_t elMatDiag_5 = tmp_kernel_op_18*(((tmp_kernel_op_10*tmp_kernel_op_14*tmp_kernel_op_5 - tmp_kernel_op_71)*(tmp_kernel_op_10*tmp_kernel_op_14*tmp_kernel_op_5 - tmp_kernel_op_71)) + ((tmp_kernel_op_14*tmp_kernel_op_16*tmp_kernel_op_5 - tmp_kernel_op_67)*(tmp_kernel_op_14*tmp_kernel_op_16*tmp_kernel_op_5 - tmp_kernel_op_67))) + tmp_kernel_op_37*(((tmp_kernel_op_24*tmp_kernel_op_29*tmp_kernel_op_33 - tmp_kernel_op_77)*(tmp_kernel_op_24*tmp_kernel_op_29*tmp_kernel_op_33 - tmp_kernel_op_77)) + ((tmp_kernel_op_24*tmp_kernel_op_33*tmp_kernel_op_35 - tmp_kernel_op_73)*(tmp_kernel_op_24*tmp_kernel_op_33*tmp_kernel_op_35 - tmp_kernel_op_73))) + tmp_kernel_op_56*(((tmp_kernel_op_43*tmp_kernel_op_48*tmp_kernel_op_52 - tmp_kernel_op_83)*(tmp_kernel_op_43*tmp_kernel_op_48*tmp_kernel_op_52 - tmp_kernel_op_83)) + ((tmp_kernel_op_43*tmp_kernel_op_52*tmp_kernel_op_54 - tmp_kernel_op_79)*(tmp_kernel_op_43*tmp_kernel_op_52*tmp_kernel_op_54 - tmp_kernel_op_79)));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
