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



























#include "../N1E1ElementwiseCurlCurl.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void N1E1ElementwiseCurlCurl::apply_macro_3D( walberla::float64 * RESTRICT  _data_dst, walberla::float64 * RESTRICT  _data_src, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_0comp2, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_1comp2, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, walberla::float64 macro_vertex_coord_id_2comp2, walberla::float64 macro_vertex_coord_id_3comp0, walberla::float64 macro_vertex_coord_id_3comp1, walberla::float64 macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 tmp_0_WHITE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_WHITE_UP = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_WHITE_UP = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_0_2_WHITE_UP = macro_vertex_coord_id_0comp2;
       const walberla::float64 p_affine_const_1_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_1_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 p_affine_const_2_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_2_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_3_0_WHITE_UP = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 p_affine_const_3_1_WHITE_UP = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 p_affine_const_3_2_WHITE_UP = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 jac_affine_0_0_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_1_0_WHITE_UP;
       const walberla::float64 jac_affine_0_1_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_2_0_WHITE_UP;
       const walberla::float64 jac_affine_0_2_WHITE_UP = -p_affine_const_0_0_WHITE_UP + p_affine_const_3_0_WHITE_UP;
       const walberla::float64 jac_affine_1_0_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_1_1_WHITE_UP;
       const walberla::float64 jac_affine_1_1_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_2_1_WHITE_UP;
       const walberla::float64 jac_affine_1_2_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_3_1_WHITE_UP;
       const walberla::float64 jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const walberla::float64 jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const walberla::float64 jac_affine_2_2_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_3_2_WHITE_UP;
       const walberla::float64 abs_det_jac_affine_WHITE_UP = abs(jac_affine_0_0_WHITE_UP*jac_affine_1_1_WHITE_UP*jac_affine_2_2_WHITE_UP - jac_affine_0_0_WHITE_UP*jac_affine_1_2_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_0_1_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_2_WHITE_UP + jac_affine_0_1_WHITE_UP*jac_affine_1_2_WHITE_UP*jac_affine_2_0_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_0_2_WHITE_UP*jac_affine_1_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 Dummy_22 = jac_affine_0_0_WHITE_UP*4.0;
       const walberla::float64 tmp_1 = jac_affine_1_0_WHITE_UP*4.0;
       const walberla::float64 tmp_2 = jac_affine_2_0_WHITE_UP*4.0;
       const walberla::float64 tmp_3 = -Dummy_22*jac_affine_0_1_WHITE_UP - jac_affine_1_1_WHITE_UP*tmp_1 - jac_affine_2_1_WHITE_UP*tmp_2;
       const walberla::float64 tmp_4 = 1.0 / (abs_det_jac_affine_WHITE_UP)*0.16666666666666666;
       const walberla::float64 tmp_6 = Dummy_22*jac_affine_0_2_WHITE_UP + jac_affine_1_2_WHITE_UP*tmp_1 + jac_affine_2_2_WHITE_UP*tmp_2;
       const walberla::float64 tmp_9 = jac_affine_0_0_WHITE_UP*2.0;
       const walberla::float64 tmp_10 = jac_affine_0_1_WHITE_UP*2.0;
       const walberla::float64 tmp_11 = tmp_10 - tmp_9;
       const walberla::float64 tmp_12 = jac_affine_1_0_WHITE_UP*2.0;
       const walberla::float64 tmp_13 = jac_affine_1_1_WHITE_UP*2.0;
       const walberla::float64 tmp_14 = -tmp_12 + tmp_13;
       const walberla::float64 tmp_15 = jac_affine_2_0_WHITE_UP*2.0;
       const walberla::float64 tmp_16 = jac_affine_2_1_WHITE_UP*2.0;
       const walberla::float64 tmp_17 = -tmp_15 + tmp_16;
       const walberla::float64 tmp_18 = tmp_11*tmp_9 + tmp_12*tmp_14 + tmp_15*tmp_17;
       const walberla::float64 tmp_20 = jac_affine_0_2_WHITE_UP*2.0;
       const walberla::float64 tmp_21 = -tmp_20;
       const walberla::float64 tmp_22 = tmp_21 + tmp_9;
       const walberla::float64 tmp_23 = jac_affine_1_2_WHITE_UP*2.0;
       const walberla::float64 tmp_24 = -tmp_23;
       const walberla::float64 tmp_25 = tmp_12 + tmp_24;
       const walberla::float64 tmp_26 = jac_affine_2_2_WHITE_UP*2.0;
       const walberla::float64 tmp_27 = -tmp_26;
       const walberla::float64 tmp_28 = tmp_15 + tmp_27;
       const walberla::float64 tmp_29 = tmp_12*tmp_25 + tmp_15*tmp_28 + tmp_22*tmp_9;
       const walberla::float64 tmp_31 = -tmp_10 - tmp_21;
       const walberla::float64 tmp_32 = -tmp_13 - tmp_24;
       const walberla::float64 tmp_33 = -tmp_16 - tmp_27;
       const walberla::float64 tmp_34 = tmp_12*tmp_32 + tmp_15*tmp_33 + tmp_31*tmp_9;
       const walberla::float64 tmp_36 = jac_affine_0_1_WHITE_UP*jac_affine_0_2_WHITE_UP*-4.0 + jac_affine_1_1_WHITE_UP*jac_affine_1_2_WHITE_UP*-4.0 + jac_affine_2_1_WHITE_UP*jac_affine_2_2_WHITE_UP*-4.0;
       const walberla::float64 tmp_37 = -tmp_10*tmp_11 - tmp_13*tmp_14 - tmp_16*tmp_17;
       const walberla::float64 tmp_38 = -tmp_10*tmp_22 - tmp_13*tmp_25 - tmp_16*tmp_28;
       const walberla::float64 tmp_39 = -tmp_10*tmp_31 - tmp_13*tmp_32 - tmp_16*tmp_33;
       const walberla::float64 tmp_40 = tmp_11*tmp_20 + tmp_14*tmp_23 + tmp_17*tmp_26;
       const walberla::float64 tmp_41 = tmp_20*tmp_22 + tmp_23*tmp_25 + tmp_26*tmp_28;
       const walberla::float64 tmp_42 = tmp_20*tmp_31 + tmp_23*tmp_32 + tmp_26*tmp_33;
       const walberla::float64 tmp_43 = tmp_11*tmp_22 + tmp_14*tmp_25 + tmp_17*tmp_28;
       const walberla::float64 tmp_44 = tmp_11*tmp_31 + tmp_14*tmp_32 + tmp_17*tmp_33;
       const walberla::float64 tmp_45 = tmp_22*tmp_31 + tmp_25*tmp_32 + tmp_28*tmp_33;
       {
          /* CellType.WHITE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 tmp_5 = src_dof_1*tmp_4;
             const walberla::float64 tmp_7 = src_dof_2*tmp_4;
             const walberla::float64 tmp_8 = src_dof_0*tmp_4;
             const walberla::float64 tmp_19 = src_dof_3*tmp_4;
             const walberla::float64 tmp_30 = src_dof_4*tmp_4;
             const walberla::float64 tmp_35 = src_dof_5*tmp_4;
             const walberla::float64 elMatVec_0 = tmp_18*tmp_19 + tmp_29*tmp_30 + tmp_3*tmp_5 + tmp_34*tmp_35 + tmp_6*tmp_7 + tmp_8*((jac_affine_0_0_WHITE_UP*jac_affine_0_0_WHITE_UP)*4.0 + (jac_affine_1_0_WHITE_UP*jac_affine_1_0_WHITE_UP)*4.0 + (jac_affine_2_0_WHITE_UP*jac_affine_2_0_WHITE_UP)*4.0);
             const walberla::float64 elMatVec_1 = tmp_19*tmp_37 + tmp_3*tmp_8 + tmp_30*tmp_38 + tmp_35*tmp_39 + tmp_36*tmp_7 + tmp_5*((jac_affine_0_1_WHITE_UP*jac_affine_0_1_WHITE_UP)*4.0 + (jac_affine_1_1_WHITE_UP*jac_affine_1_1_WHITE_UP)*4.0 + (jac_affine_2_1_WHITE_UP*jac_affine_2_1_WHITE_UP)*4.0);
             const walberla::float64 elMatVec_2 = tmp_19*tmp_40 + tmp_30*tmp_41 + tmp_35*tmp_42 + tmp_36*tmp_5 + tmp_6*tmp_8 + tmp_7*((jac_affine_0_2_WHITE_UP*jac_affine_0_2_WHITE_UP)*4.0 + (jac_affine_1_2_WHITE_UP*jac_affine_1_2_WHITE_UP)*4.0 + (jac_affine_2_2_WHITE_UP*jac_affine_2_2_WHITE_UP)*4.0);
             const walberla::float64 elMatVec_3 = tmp_18*tmp_8 + tmp_19*((tmp_11*tmp_11) + (tmp_14*tmp_14) + (tmp_17*tmp_17)) + tmp_30*tmp_43 + tmp_35*tmp_44 + tmp_37*tmp_5 + tmp_40*tmp_7;
             const walberla::float64 elMatVec_4 = tmp_19*tmp_43 + tmp_29*tmp_8 + tmp_30*((tmp_22*tmp_22) + (tmp_25*tmp_25) + (tmp_28*tmp_28)) + tmp_35*tmp_45 + tmp_38*tmp_5 + tmp_41*tmp_7;
             const walberla::float64 elMatVec_5 = tmp_19*tmp_44 + tmp_30*tmp_45 + tmp_34*tmp_8 + tmp_35*((tmp_31*tmp_31) + (tmp_32*tmp_32) + (tmp_33*tmp_33)) + tmp_39*tmp_5 + tmp_42*tmp_7;
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
       const walberla::float64 tmp_0_WHITE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_2_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_3_WHITE_DOWN = tmp_1_WHITE_DOWN + tmp_2_WHITE_DOWN;
       const walberla::float64 tmp_4_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_5_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_6_WHITE_DOWN = tmp_4_WHITE_DOWN + tmp_5_WHITE_DOWN;
       const walberla::float64 tmp_7_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_8_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_9_WHITE_DOWN = tmp_7_WHITE_DOWN + tmp_8_WHITE_DOWN;
       const walberla::float64 tmp_10_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_11_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_12_WHITE_DOWN = tmp_0_WHITE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_WHITE_DOWN = tmp_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_1_WHITE_DOWN = tmp_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_0_2_WHITE_DOWN = tmp_9_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_0_WHITE_DOWN = tmp_10_WHITE_DOWN + tmp_2_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_1_WHITE_DOWN = tmp_11_WHITE_DOWN + tmp_5_WHITE_DOWN;
       const walberla::float64 p_affine_const_1_2_WHITE_DOWN = tmp_12_WHITE_DOWN + tmp_8_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_0_WHITE_DOWN = macro_vertex_coord_id_0comp0 + tmp_10_WHITE_DOWN + tmp_1_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_1_WHITE_DOWN = macro_vertex_coord_id_0comp1 + tmp_11_WHITE_DOWN + tmp_4_WHITE_DOWN;
       const walberla::float64 p_affine_const_2_2_WHITE_DOWN = macro_vertex_coord_id_0comp2 + tmp_12_WHITE_DOWN + tmp_7_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_0_WHITE_DOWN = tmp_10_WHITE_DOWN + tmp_3_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_1_WHITE_DOWN = tmp_11_WHITE_DOWN + tmp_6_WHITE_DOWN;
       const walberla::float64 p_affine_const_3_2_WHITE_DOWN = tmp_12_WHITE_DOWN + tmp_9_WHITE_DOWN;
       const walberla::float64 jac_affine_0_0_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_1_0_WHITE_DOWN;
       const walberla::float64 jac_affine_0_1_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_2_0_WHITE_DOWN;
       const walberla::float64 jac_affine_0_2_WHITE_DOWN = -p_affine_const_0_0_WHITE_DOWN + p_affine_const_3_0_WHITE_DOWN;
       const walberla::float64 jac_affine_1_0_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_1_1_WHITE_DOWN;
       const walberla::float64 jac_affine_1_1_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_2_1_WHITE_DOWN;
       const walberla::float64 jac_affine_1_2_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_3_1_WHITE_DOWN;
       const walberla::float64 jac_affine_2_0_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_1_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_1_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_2_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_2_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_3_2_WHITE_DOWN;
       const walberla::float64 abs_det_jac_affine_WHITE_DOWN = abs(jac_affine_0_0_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN - jac_affine_0_0_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_0_1_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN + jac_affine_0_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_0_2_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 Dummy_23 = jac_affine_0_0_WHITE_DOWN*4.0;
       const walberla::float64 Dummy_24 = jac_affine_1_0_WHITE_DOWN*4.0;
       const walberla::float64 Dummy_25 = jac_affine_2_0_WHITE_DOWN*4.0;
       const walberla::float64 Dummy_26 = -Dummy_23*jac_affine_0_1_WHITE_DOWN - Dummy_24*jac_affine_1_1_WHITE_DOWN - Dummy_25*jac_affine_2_1_WHITE_DOWN;
       const walberla::float64 Dummy_27 = 1.0 / (abs_det_jac_affine_WHITE_DOWN)*0.16666666666666666;
       const walberla::float64 Dummy_28 = Dummy_23*jac_affine_0_2_WHITE_DOWN + Dummy_24*jac_affine_1_2_WHITE_DOWN + Dummy_25*jac_affine_2_2_WHITE_DOWN;
       const walberla::float64 Dummy_29 = jac_affine_0_0_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_30 = jac_affine_0_1_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_31 = -Dummy_29 + Dummy_30;
       const walberla::float64 Dummy_32 = jac_affine_1_0_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_33 = jac_affine_1_1_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_34 = -Dummy_32 + Dummy_33;
       const walberla::float64 Dummy_35 = jac_affine_2_0_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_36 = jac_affine_2_1_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_37 = -Dummy_35 + Dummy_36;
       const walberla::float64 Dummy_38 = Dummy_29*Dummy_31 + Dummy_32*Dummy_34 + Dummy_35*Dummy_37;
       const walberla::float64 Dummy_39 = jac_affine_0_2_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_40 = -Dummy_39;
       const walberla::float64 Dummy_41 = Dummy_29 + Dummy_40;
       const walberla::float64 Dummy_42 = jac_affine_1_2_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_43 = -Dummy_42;
       const walberla::float64 Dummy_44 = Dummy_32 + Dummy_43;
       const walberla::float64 Dummy_45 = jac_affine_2_2_WHITE_DOWN*2.0;
       const walberla::float64 Dummy_46 = -Dummy_45;
       const walberla::float64 Dummy_47 = Dummy_35 + Dummy_46;
       const walberla::float64 Dummy_48 = Dummy_29*Dummy_41 + Dummy_32*Dummy_44 + Dummy_35*Dummy_47;
       const walberla::float64 Dummy_49 = -Dummy_30 - Dummy_40;
       const walberla::float64 Dummy_50 = -Dummy_33 - Dummy_43;
       const walberla::float64 Dummy_51 = -Dummy_36 - Dummy_46;
       const walberla::float64 Dummy_52 = Dummy_29*Dummy_49 + Dummy_32*Dummy_50 + Dummy_35*Dummy_51;
       const walberla::float64 Dummy_53 = jac_affine_0_1_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN*-4.0 + jac_affine_1_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN*-4.0 + jac_affine_2_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN*-4.0;
       const walberla::float64 Dummy_54 = -Dummy_30*Dummy_31 - Dummy_33*Dummy_34 - Dummy_36*Dummy_37;
       const walberla::float64 Dummy_55 = -Dummy_30*Dummy_41 - Dummy_33*Dummy_44 - Dummy_36*Dummy_47;
       const walberla::float64 Dummy_56 = -Dummy_30*Dummy_49 - Dummy_33*Dummy_50 - Dummy_36*Dummy_51;
       const walberla::float64 Dummy_57 = Dummy_31*Dummy_39 + Dummy_34*Dummy_42 + Dummy_37*Dummy_45;
       const walberla::float64 Dummy_58 = Dummy_39*Dummy_41 + Dummy_42*Dummy_44 + Dummy_45*Dummy_47;
       const walberla::float64 Dummy_59 = Dummy_39*Dummy_49 + Dummy_42*Dummy_50 + Dummy_45*Dummy_51;
       const walberla::float64 Dummy_60 = Dummy_31*Dummy_41 + Dummy_34*Dummy_44 + Dummy_37*Dummy_47;
       const walberla::float64 Dummy_61 = Dummy_31*Dummy_49 + Dummy_34*Dummy_50 + Dummy_37*Dummy_51;
       const walberla::float64 Dummy_62 = Dummy_41*Dummy_49 + Dummy_44*Dummy_50 + Dummy_47*Dummy_51;
       {
          /* CellType.WHITE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             const walberla::float64 src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 src_dof_4 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 tmp_5_WHITE_DOWN = Dummy_27*src_dof_1;
             const walberla::float64 tmp_7_WHITE_DOWN = Dummy_27*src_dof_2;
             const walberla::float64 tmp_8_WHITE_DOWN = Dummy_27*src_dof_0;
             const walberla::float64 tmp_19 = Dummy_27*src_dof_3;
             const walberla::float64 tmp_30 = Dummy_27*src_dof_4;
             const walberla::float64 tmp_35 = Dummy_27*src_dof_5;
             const walberla::float64 elMatVec_0 = Dummy_26*tmp_5_WHITE_DOWN + Dummy_28*tmp_7_WHITE_DOWN + Dummy_38*tmp_19 + Dummy_48*tmp_30 + Dummy_52*tmp_35 + tmp_8_WHITE_DOWN*((jac_affine_0_0_WHITE_DOWN*jac_affine_0_0_WHITE_DOWN)*4.0 + (jac_affine_1_0_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN)*4.0 + (jac_affine_2_0_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN)*4.0);
             const walberla::float64 elMatVec_1 = Dummy_26*tmp_8_WHITE_DOWN + Dummy_53*tmp_7_WHITE_DOWN + Dummy_54*tmp_19 + Dummy_55*tmp_30 + Dummy_56*tmp_35 + tmp_5_WHITE_DOWN*((jac_affine_0_1_WHITE_DOWN*jac_affine_0_1_WHITE_DOWN)*4.0 + (jac_affine_1_1_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN)*4.0 + (jac_affine_2_1_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN)*4.0);
             const walberla::float64 elMatVec_2 = Dummy_28*tmp_8_WHITE_DOWN + Dummy_53*tmp_5_WHITE_DOWN + Dummy_57*tmp_19 + Dummy_58*tmp_30 + Dummy_59*tmp_35 + tmp_7_WHITE_DOWN*((jac_affine_0_2_WHITE_DOWN*jac_affine_0_2_WHITE_DOWN)*4.0 + (jac_affine_1_2_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN)*4.0 + (jac_affine_2_2_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN)*4.0);
             const walberla::float64 elMatVec_3 = Dummy_38*tmp_8_WHITE_DOWN + Dummy_54*tmp_5_WHITE_DOWN + Dummy_57*tmp_7_WHITE_DOWN + Dummy_60*tmp_30 + Dummy_61*tmp_35 + tmp_19*((Dummy_31*Dummy_31) + (Dummy_34*Dummy_34) + (Dummy_37*Dummy_37));
             const walberla::float64 elMatVec_4 = Dummy_48*tmp_8_WHITE_DOWN + Dummy_55*tmp_5_WHITE_DOWN + Dummy_58*tmp_7_WHITE_DOWN + Dummy_60*tmp_19 + Dummy_62*tmp_35 + tmp_30*((Dummy_41*Dummy_41) + (Dummy_44*Dummy_44) + (Dummy_47*Dummy_47));
             const walberla::float64 elMatVec_5 = Dummy_52*tmp_8_WHITE_DOWN + Dummy_56*tmp_5_WHITE_DOWN + Dummy_59*tmp_7_WHITE_DOWN + Dummy_61*tmp_19 + Dummy_62*tmp_30 + tmp_35*((Dummy_49*Dummy_49) + (Dummy_50*Dummy_50) + (Dummy_51*Dummy_51));
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
          }
       }
       const walberla::float64 tmp_0_BLUE_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_2_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_3_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_4_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_5_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_6_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_0_0_BLUE_UP = tmp_1_BLUE_UP;
       const walberla::float64 p_affine_const_0_1_BLUE_UP = tmp_2_BLUE_UP;
       const walberla::float64 p_affine_const_0_2_BLUE_UP = tmp_3_BLUE_UP;
       const walberla::float64 p_affine_const_1_0_BLUE_UP = macro_vertex_coord_id_0comp0 + tmp_4_BLUE_UP;
       const walberla::float64 p_affine_const_1_1_BLUE_UP = macro_vertex_coord_id_0comp1 + tmp_5_BLUE_UP;
       const walberla::float64 p_affine_const_1_2_BLUE_UP = macro_vertex_coord_id_0comp2 + tmp_6_BLUE_UP;
       const walberla::float64 p_affine_const_2_0_BLUE_UP = tmp_1_BLUE_UP + tmp_4_BLUE_UP;
       const walberla::float64 p_affine_const_2_1_BLUE_UP = tmp_2_BLUE_UP + tmp_5_BLUE_UP;
       const walberla::float64 p_affine_const_2_2_BLUE_UP = tmp_3_BLUE_UP + tmp_6_BLUE_UP;
       const walberla::float64 p_affine_const_3_0_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_1_BLUE_UP;
       const walberla::float64 p_affine_const_3_1_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_2_BLUE_UP;
       const walberla::float64 p_affine_const_3_2_BLUE_UP = tmp_0_BLUE_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_3_BLUE_UP;
       const walberla::float64 jac_affine_0_0_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_1_0_BLUE_UP;
       const walberla::float64 jac_affine_0_1_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_2_0_BLUE_UP;
       const walberla::float64 jac_affine_0_2_BLUE_UP = -p_affine_const_0_0_BLUE_UP + p_affine_const_3_0_BLUE_UP;
       const walberla::float64 jac_affine_1_0_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_1_1_BLUE_UP;
       const walberla::float64 jac_affine_1_1_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_2_1_BLUE_UP;
       const walberla::float64 jac_affine_1_2_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_3_1_BLUE_UP;
       const walberla::float64 jac_affine_2_0_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_1_2_BLUE_UP;
       const walberla::float64 jac_affine_2_1_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_2_2_BLUE_UP;
       const walberla::float64 jac_affine_2_2_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_3_2_BLUE_UP;
       const walberla::float64 abs_det_jac_affine_BLUE_UP = abs(jac_affine_0_0_BLUE_UP*jac_affine_1_1_BLUE_UP*jac_affine_2_2_BLUE_UP - jac_affine_0_0_BLUE_UP*jac_affine_1_2_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_0_1_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_2_BLUE_UP + jac_affine_0_1_BLUE_UP*jac_affine_1_2_BLUE_UP*jac_affine_2_0_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_0_2_BLUE_UP*jac_affine_1_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 Dummy_63 = jac_affine_0_0_BLUE_UP*4.0;
       const walberla::float64 Dummy_64 = jac_affine_1_0_BLUE_UP*4.0;
       const walberla::float64 Dummy_65 = jac_affine_2_0_BLUE_UP*4.0;
       const walberla::float64 Dummy_66 = -Dummy_63*jac_affine_0_1_BLUE_UP - Dummy_64*jac_affine_1_1_BLUE_UP - Dummy_65*jac_affine_2_1_BLUE_UP;
       const walberla::float64 Dummy_67 = 1.0 / (abs_det_jac_affine_BLUE_UP)*0.16666666666666666;
       const walberla::float64 Dummy_68 = Dummy_63*jac_affine_0_2_BLUE_UP + Dummy_64*jac_affine_1_2_BLUE_UP + Dummy_65*jac_affine_2_2_BLUE_UP;
       const walberla::float64 Dummy_69 = jac_affine_0_0_BLUE_UP*2.0;
       const walberla::float64 Dummy_70 = jac_affine_0_1_BLUE_UP*2.0;
       const walberla::float64 Dummy_71 = -Dummy_69 + Dummy_70;
       const walberla::float64 Dummy_72 = jac_affine_1_0_BLUE_UP*2.0;
       const walberla::float64 Dummy_73 = jac_affine_1_1_BLUE_UP*2.0;
       const walberla::float64 Dummy_74 = -Dummy_72 + Dummy_73;
       const walberla::float64 Dummy_75 = jac_affine_2_0_BLUE_UP*2.0;
       const walberla::float64 Dummy_76 = jac_affine_2_1_BLUE_UP*2.0;
       const walberla::float64 Dummy_77 = -Dummy_75 + Dummy_76;
       const walberla::float64 Dummy_78 = Dummy_69*Dummy_71 + Dummy_72*Dummy_74 + Dummy_75*Dummy_77;
       const walberla::float64 Dummy_79 = jac_affine_0_2_BLUE_UP*2.0;
       const walberla::float64 Dummy_80 = -Dummy_79;
       const walberla::float64 Dummy_81 = Dummy_69 + Dummy_80;
       const walberla::float64 Dummy_82 = jac_affine_1_2_BLUE_UP*2.0;
       const walberla::float64 Dummy_83 = -Dummy_82;
       const walberla::float64 Dummy_84 = Dummy_72 + Dummy_83;
       const walberla::float64 Dummy_85 = jac_affine_2_2_BLUE_UP*2.0;
       const walberla::float64 Dummy_86 = -Dummy_85;
       const walberla::float64 Dummy_87 = Dummy_75 + Dummy_86;
       const walberla::float64 Dummy_88 = Dummy_69*Dummy_81 + Dummy_72*Dummy_84 + Dummy_75*Dummy_87;
       const walberla::float64 Dummy_89 = -Dummy_70 - Dummy_80;
       const walberla::float64 Dummy_90 = -Dummy_73 - Dummy_83;
       const walberla::float64 Dummy_91 = -Dummy_76 - Dummy_86;
       const walberla::float64 Dummy_92 = Dummy_69*Dummy_89 + Dummy_72*Dummy_90 + Dummy_75*Dummy_91;
       const walberla::float64 Dummy_93 = jac_affine_0_1_BLUE_UP*jac_affine_0_2_BLUE_UP*-4.0 + jac_affine_1_1_BLUE_UP*jac_affine_1_2_BLUE_UP*-4.0 + jac_affine_2_1_BLUE_UP*jac_affine_2_2_BLUE_UP*-4.0;
       const walberla::float64 Dummy_94 = -Dummy_70*Dummy_71 - Dummy_73*Dummy_74 - Dummy_76*Dummy_77;
       const walberla::float64 Dummy_95 = -Dummy_70*Dummy_81 - Dummy_73*Dummy_84 - Dummy_76*Dummy_87;
       const walberla::float64 Dummy_96 = -Dummy_70*Dummy_89 - Dummy_73*Dummy_90 - Dummy_76*Dummy_91;
       const walberla::float64 Dummy_97 = Dummy_71*Dummy_79 + Dummy_74*Dummy_82 + Dummy_77*Dummy_85;
       const walberla::float64 Dummy_98 = Dummy_79*Dummy_81 + Dummy_82*Dummy_84 + Dummy_85*Dummy_87;
       const walberla::float64 Dummy_99 = Dummy_79*Dummy_89 + Dummy_82*Dummy_90 + Dummy_85*Dummy_91;
       const walberla::float64 Dummy_100 = Dummy_71*Dummy_81 + Dummy_74*Dummy_84 + Dummy_77*Dummy_87;
       const walberla::float64 Dummy_101 = Dummy_71*Dummy_89 + Dummy_74*Dummy_90 + Dummy_77*Dummy_91;
       const walberla::float64 Dummy_102 = Dummy_81*Dummy_89 + Dummy_84*Dummy_90 + Dummy_87*Dummy_91;
       {
          /* CellType.BLUE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 tmp_5_BLUE_UP = Dummy_67*src_dof_1;
             const walberla::float64 tmp_7 = Dummy_67*src_dof_2;
             const walberla::float64 tmp_8 = Dummy_67*src_dof_0;
             const walberla::float64 tmp_19 = Dummy_67*src_dof_3;
             const walberla::float64 tmp_30 = Dummy_67*src_dof_4;
             const walberla::float64 tmp_35 = Dummy_67*src_dof_5;
             const walberla::float64 elMatVec_0 = Dummy_66*tmp_5_BLUE_UP + Dummy_68*tmp_7 + Dummy_78*tmp_19 + Dummy_88*tmp_30 + Dummy_92*tmp_35 + tmp_8*((jac_affine_0_0_BLUE_UP*jac_affine_0_0_BLUE_UP)*4.0 + (jac_affine_1_0_BLUE_UP*jac_affine_1_0_BLUE_UP)*4.0 + (jac_affine_2_0_BLUE_UP*jac_affine_2_0_BLUE_UP)*4.0);
             const walberla::float64 elMatVec_1 = Dummy_66*tmp_8 + Dummy_93*tmp_7 + Dummy_94*tmp_19 + Dummy_95*tmp_30 + Dummy_96*tmp_35 + tmp_5_BLUE_UP*((jac_affine_0_1_BLUE_UP*jac_affine_0_1_BLUE_UP)*4.0 + (jac_affine_1_1_BLUE_UP*jac_affine_1_1_BLUE_UP)*4.0 + (jac_affine_2_1_BLUE_UP*jac_affine_2_1_BLUE_UP)*4.0);
             const walberla::float64 elMatVec_2 = Dummy_68*tmp_8 + Dummy_93*tmp_5_BLUE_UP + Dummy_97*tmp_19 + Dummy_98*tmp_30 + Dummy_99*tmp_35 + tmp_7*((jac_affine_0_2_BLUE_UP*jac_affine_0_2_BLUE_UP)*4.0 + (jac_affine_1_2_BLUE_UP*jac_affine_1_2_BLUE_UP)*4.0 + (jac_affine_2_2_BLUE_UP*jac_affine_2_2_BLUE_UP)*4.0);
             const walberla::float64 elMatVec_3 = Dummy_100*tmp_30 + Dummy_101*tmp_35 + Dummy_78*tmp_8 + Dummy_94*tmp_5_BLUE_UP + Dummy_97*tmp_7 + tmp_19*((Dummy_71*Dummy_71) + (Dummy_74*Dummy_74) + (Dummy_77*Dummy_77));
             const walberla::float64 elMatVec_4 = Dummy_100*tmp_19 + Dummy_102*tmp_35 + Dummy_88*tmp_8 + Dummy_95*tmp_5_BLUE_UP + Dummy_98*tmp_7 + tmp_30*((Dummy_81*Dummy_81) + (Dummy_84*Dummy_84) + (Dummy_87*Dummy_87));
             const walberla::float64 elMatVec_5 = Dummy_101*tmp_19 + Dummy_102*tmp_30 + Dummy_92*tmp_8 + Dummy_96*tmp_5_BLUE_UP + Dummy_99*tmp_7 + tmp_35*((Dummy_89*Dummy_89) + (Dummy_90*Dummy_90) + (Dummy_91*Dummy_91));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
       const walberla::float64 tmp_0_BLUE_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_2_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_3_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_4_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_5_BLUE_DOWN = macro_vertex_coord_id_0comp0 + tmp_4_BLUE_DOWN;
       const walberla::float64 tmp_6_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_7_BLUE_DOWN = macro_vertex_coord_id_0comp1 + tmp_6_BLUE_DOWN;
       const walberla::float64 tmp_8_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 tmp_9_BLUE_DOWN = macro_vertex_coord_id_0comp2 + tmp_8_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_0_BLUE_DOWN = tmp_1_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_1_BLUE_DOWN = tmp_2_BLUE_DOWN;
       const walberla::float64 p_affine_const_0_2_BLUE_DOWN = tmp_3_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_0_BLUE_DOWN = tmp_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_1_BLUE_DOWN = tmp_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_1_2_BLUE_DOWN = tmp_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_0_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_5_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_1_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_7_BLUE_DOWN;
       const walberla::float64 p_affine_const_2_2_BLUE_DOWN = tmp_0_BLUE_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_9_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_0_BLUE_DOWN = tmp_1_BLUE_DOWN + tmp_4_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_1_BLUE_DOWN = tmp_2_BLUE_DOWN + tmp_6_BLUE_DOWN;
       const walberla::float64 p_affine_const_3_2_BLUE_DOWN = tmp_3_BLUE_DOWN + tmp_8_BLUE_DOWN;
       const walberla::float64 jac_affine_0_0_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_1_0_BLUE_DOWN;
       const walberla::float64 jac_affine_0_1_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_2_0_BLUE_DOWN;
       const walberla::float64 jac_affine_0_2_BLUE_DOWN = -p_affine_const_0_0_BLUE_DOWN + p_affine_const_3_0_BLUE_DOWN;
       const walberla::float64 jac_affine_1_0_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_1_1_BLUE_DOWN;
       const walberla::float64 jac_affine_1_1_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_2_1_BLUE_DOWN;
       const walberla::float64 jac_affine_1_2_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_3_1_BLUE_DOWN;
       const walberla::float64 jac_affine_2_0_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_1_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_1_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_2_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_2_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_3_2_BLUE_DOWN;
       const walberla::float64 abs_det_jac_affine_BLUE_DOWN = abs(jac_affine_0_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN - jac_affine_0_0_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_0_1_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN + jac_affine_0_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_0_2_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 Dummy_103 = jac_affine_0_0_BLUE_DOWN*4.0;
       const walberla::float64 Dummy_104 = jac_affine_1_0_BLUE_DOWN*4.0;
       const walberla::float64 Dummy_105 = jac_affine_2_0_BLUE_DOWN*4.0;
       const walberla::float64 Dummy_106 = -Dummy_103*jac_affine_0_1_BLUE_DOWN - Dummy_104*jac_affine_1_1_BLUE_DOWN - Dummy_105*jac_affine_2_1_BLUE_DOWN;
       const walberla::float64 Dummy_107 = 1.0 / (abs_det_jac_affine_BLUE_DOWN)*0.16666666666666666;
       const walberla::float64 Dummy_108 = Dummy_103*jac_affine_0_2_BLUE_DOWN + Dummy_104*jac_affine_1_2_BLUE_DOWN + Dummy_105*jac_affine_2_2_BLUE_DOWN;
       const walberla::float64 Dummy_109 = jac_affine_0_0_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_110 = jac_affine_0_1_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_111 = -Dummy_109 + Dummy_110;
       const walberla::float64 Dummy_112 = jac_affine_1_0_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_113 = jac_affine_1_1_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_114 = -Dummy_112 + Dummy_113;
       const walberla::float64 Dummy_115 = jac_affine_2_0_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_116 = jac_affine_2_1_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_117 = -Dummy_115 + Dummy_116;
       const walberla::float64 Dummy_118 = Dummy_109*Dummy_111 + Dummy_112*Dummy_114 + Dummy_115*Dummy_117;
       const walberla::float64 Dummy_119 = jac_affine_0_2_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_120 = -Dummy_119;
       const walberla::float64 Dummy_121 = Dummy_109 + Dummy_120;
       const walberla::float64 Dummy_122 = jac_affine_1_2_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_123 = -Dummy_122;
       const walberla::float64 Dummy_124 = Dummy_112 + Dummy_123;
       const walberla::float64 Dummy_125 = jac_affine_2_2_BLUE_DOWN*2.0;
       const walberla::float64 Dummy_126 = -Dummy_125;
       const walberla::float64 Dummy_127 = Dummy_115 + Dummy_126;
       const walberla::float64 Dummy_128 = Dummy_109*Dummy_121 + Dummy_112*Dummy_124 + Dummy_115*Dummy_127;
       const walberla::float64 Dummy_129 = -Dummy_110 - Dummy_120;
       const walberla::float64 Dummy_130 = -Dummy_113 - Dummy_123;
       const walberla::float64 Dummy_131 = -Dummy_116 - Dummy_126;
       const walberla::float64 Dummy_132 = Dummy_109*Dummy_129 + Dummy_112*Dummy_130 + Dummy_115*Dummy_131;
       const walberla::float64 Dummy_133 = jac_affine_0_1_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN*-4.0 + jac_affine_1_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN*-4.0 + jac_affine_2_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN*-4.0;
       const walberla::float64 Dummy_134 = -Dummy_110*Dummy_111 - Dummy_113*Dummy_114 - Dummy_116*Dummy_117;
       const walberla::float64 Dummy_135 = -Dummy_110*Dummy_121 - Dummy_113*Dummy_124 - Dummy_116*Dummy_127;
       const walberla::float64 Dummy_136 = -Dummy_110*Dummy_129 - Dummy_113*Dummy_130 - Dummy_116*Dummy_131;
       const walberla::float64 Dummy_137 = Dummy_111*Dummy_119 + Dummy_114*Dummy_122 + Dummy_117*Dummy_125;
       const walberla::float64 Dummy_138 = Dummy_119*Dummy_121 + Dummy_122*Dummy_124 + Dummy_125*Dummy_127;
       const walberla::float64 Dummy_139 = Dummy_119*Dummy_129 + Dummy_122*Dummy_130 + Dummy_125*Dummy_131;
       const walberla::float64 Dummy_140 = Dummy_111*Dummy_121 + Dummy_114*Dummy_124 + Dummy_117*Dummy_127;
       const walberla::float64 Dummy_141 = Dummy_111*Dummy_129 + Dummy_114*Dummy_130 + Dummy_117*Dummy_131;
       const walberla::float64 Dummy_142 = Dummy_121*Dummy_129 + Dummy_124*Dummy_130 + Dummy_127*Dummy_131;
       {
          /* CellType.BLUE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 tmp_5_BLUE_DOWN = Dummy_107*src_dof_1;
             const walberla::float64 tmp_7_BLUE_DOWN = Dummy_107*src_dof_2;
             const walberla::float64 tmp_8_BLUE_DOWN = Dummy_107*src_dof_0;
             const walberla::float64 tmp_19 = Dummy_107*src_dof_3;
             const walberla::float64 tmp_30 = Dummy_107*src_dof_4;
             const walberla::float64 tmp_35 = Dummy_107*src_dof_5;
             const walberla::float64 elMatVec_0 = Dummy_106*tmp_5_BLUE_DOWN + Dummy_108*tmp_7_BLUE_DOWN + Dummy_118*tmp_19 + Dummy_128*tmp_30 + Dummy_132*tmp_35 + tmp_8_BLUE_DOWN*((jac_affine_0_0_BLUE_DOWN*jac_affine_0_0_BLUE_DOWN)*4.0 + (jac_affine_1_0_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN)*4.0 + (jac_affine_2_0_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN)*4.0);
             const walberla::float64 elMatVec_1 = Dummy_106*tmp_8_BLUE_DOWN + Dummy_133*tmp_7_BLUE_DOWN + Dummy_134*tmp_19 + Dummy_135*tmp_30 + Dummy_136*tmp_35 + tmp_5_BLUE_DOWN*((jac_affine_0_1_BLUE_DOWN*jac_affine_0_1_BLUE_DOWN)*4.0 + (jac_affine_1_1_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN)*4.0 + (jac_affine_2_1_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN)*4.0);
             const walberla::float64 elMatVec_2 = Dummy_108*tmp_8_BLUE_DOWN + Dummy_133*tmp_5_BLUE_DOWN + Dummy_137*tmp_19 + Dummy_138*tmp_30 + Dummy_139*tmp_35 + tmp_7_BLUE_DOWN*((jac_affine_0_2_BLUE_DOWN*jac_affine_0_2_BLUE_DOWN)*4.0 + (jac_affine_1_2_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN)*4.0 + (jac_affine_2_2_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN)*4.0);
             const walberla::float64 elMatVec_3 = Dummy_118*tmp_8_BLUE_DOWN + Dummy_134*tmp_5_BLUE_DOWN + Dummy_137*tmp_7_BLUE_DOWN + Dummy_140*tmp_30 + Dummy_141*tmp_35 + tmp_19*((Dummy_111*Dummy_111) + (Dummy_114*Dummy_114) + (Dummy_117*Dummy_117));
             const walberla::float64 elMatVec_4 = Dummy_128*tmp_8_BLUE_DOWN + Dummy_135*tmp_5_BLUE_DOWN + Dummy_138*tmp_7_BLUE_DOWN + Dummy_140*tmp_19 + Dummy_142*tmp_35 + tmp_30*((Dummy_121*Dummy_121) + (Dummy_124*Dummy_124) + (Dummy_127*Dummy_127));
             const walberla::float64 elMatVec_5 = Dummy_132*tmp_8_BLUE_DOWN + Dummy_136*tmp_5_BLUE_DOWN + Dummy_139*tmp_7_BLUE_DOWN + Dummy_141*tmp_19 + Dummy_142*tmp_30 + tmp_35*((Dummy_129*Dummy_129) + (Dummy_130*Dummy_130) + (Dummy_131*Dummy_131));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
       const walberla::float64 tmp_0_GREEN_UP = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_2_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_3_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_4_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_5_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_6_GREEN_UP = tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_UP = tmp_1_GREEN_UP;
       const walberla::float64 p_affine_const_0_1_GREEN_UP = tmp_2_GREEN_UP;
       const walberla::float64 p_affine_const_0_2_GREEN_UP = tmp_3_GREEN_UP;
       const walberla::float64 p_affine_const_1_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_1_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_1_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_UP*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 p_affine_const_2_0_GREEN_UP = macro_vertex_coord_id_0comp0 + tmp_4_GREEN_UP;
       const walberla::float64 p_affine_const_2_1_GREEN_UP = macro_vertex_coord_id_0comp1 + tmp_5_GREEN_UP;
       const walberla::float64 p_affine_const_2_2_GREEN_UP = macro_vertex_coord_id_0comp2 + tmp_6_GREEN_UP;
       const walberla::float64 p_affine_const_3_0_GREEN_UP = tmp_1_GREEN_UP + tmp_4_GREEN_UP;
       const walberla::float64 p_affine_const_3_1_GREEN_UP = tmp_2_GREEN_UP + tmp_5_GREEN_UP;
       const walberla::float64 p_affine_const_3_2_GREEN_UP = tmp_3_GREEN_UP + tmp_6_GREEN_UP;
       const walberla::float64 jac_affine_0_0_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_1_0_GREEN_UP;
       const walberla::float64 jac_affine_0_1_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_2_0_GREEN_UP;
       const walberla::float64 jac_affine_0_2_GREEN_UP = -p_affine_const_0_0_GREEN_UP + p_affine_const_3_0_GREEN_UP;
       const walberla::float64 jac_affine_1_0_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_1_1_GREEN_UP;
       const walberla::float64 jac_affine_1_1_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_2_1_GREEN_UP;
       const walberla::float64 jac_affine_1_2_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_3_1_GREEN_UP;
       const walberla::float64 jac_affine_2_0_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_1_2_GREEN_UP;
       const walberla::float64 jac_affine_2_1_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_2_2_GREEN_UP;
       const walberla::float64 jac_affine_2_2_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_3_2_GREEN_UP;
       const walberla::float64 abs_det_jac_affine_GREEN_UP = abs(jac_affine_0_0_GREEN_UP*jac_affine_1_1_GREEN_UP*jac_affine_2_2_GREEN_UP - jac_affine_0_0_GREEN_UP*jac_affine_1_2_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_0_1_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_2_GREEN_UP + jac_affine_0_1_GREEN_UP*jac_affine_1_2_GREEN_UP*jac_affine_2_0_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_0_2_GREEN_UP*jac_affine_1_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 Dummy_143 = jac_affine_0_0_GREEN_UP*4.0;
       const walberla::float64 Dummy_144 = jac_affine_1_0_GREEN_UP*4.0;
       const walberla::float64 Dummy_145 = jac_affine_2_0_GREEN_UP*4.0;
       const walberla::float64 Dummy_146 = -Dummy_143*jac_affine_0_1_GREEN_UP - Dummy_144*jac_affine_1_1_GREEN_UP - Dummy_145*jac_affine_2_1_GREEN_UP;
       const walberla::float64 Dummy_147 = 1.0 / (abs_det_jac_affine_GREEN_UP)*0.16666666666666666;
       const walberla::float64 Dummy_148 = Dummy_143*jac_affine_0_2_GREEN_UP + Dummy_144*jac_affine_1_2_GREEN_UP + Dummy_145*jac_affine_2_2_GREEN_UP;
       const walberla::float64 Dummy_149 = jac_affine_0_0_GREEN_UP*2.0;
       const walberla::float64 Dummy_150 = jac_affine_0_1_GREEN_UP*2.0;
       const walberla::float64 Dummy_151 = -Dummy_149 + Dummy_150;
       const walberla::float64 Dummy_152 = jac_affine_1_0_GREEN_UP*2.0;
       const walberla::float64 Dummy_153 = jac_affine_1_1_GREEN_UP*2.0;
       const walberla::float64 Dummy_154 = -Dummy_152 + Dummy_153;
       const walberla::float64 Dummy_155 = jac_affine_2_0_GREEN_UP*2.0;
       const walberla::float64 Dummy_156 = jac_affine_2_1_GREEN_UP*2.0;
       const walberla::float64 Dummy_157 = -Dummy_155 + Dummy_156;
       const walberla::float64 Dummy_158 = Dummy_149*Dummy_151 + Dummy_152*Dummy_154 + Dummy_155*Dummy_157;
       const walberla::float64 Dummy_159 = jac_affine_0_2_GREEN_UP*2.0;
       const walberla::float64 Dummy_160 = -Dummy_159;
       const walberla::float64 Dummy_161 = Dummy_149 + Dummy_160;
       const walberla::float64 Dummy_162 = jac_affine_1_2_GREEN_UP*2.0;
       const walberla::float64 Dummy_163 = -Dummy_162;
       const walberla::float64 Dummy_164 = Dummy_152 + Dummy_163;
       const walberla::float64 Dummy_165 = jac_affine_2_2_GREEN_UP*2.0;
       const walberla::float64 Dummy_166 = -Dummy_165;
       const walberla::float64 Dummy_167 = Dummy_155 + Dummy_166;
       const walberla::float64 Dummy_168 = Dummy_149*Dummy_161 + Dummy_152*Dummy_164 + Dummy_155*Dummy_167;
       const walberla::float64 Dummy_169 = -Dummy_150 - Dummy_160;
       const walberla::float64 Dummy_170 = -Dummy_153 - Dummy_163;
       const walberla::float64 Dummy_171 = -Dummy_156 - Dummy_166;
       const walberla::float64 Dummy_172 = Dummy_149*Dummy_169 + Dummy_152*Dummy_170 + Dummy_155*Dummy_171;
       const walberla::float64 Dummy_173 = jac_affine_0_1_GREEN_UP*jac_affine_0_2_GREEN_UP*-4.0 + jac_affine_1_1_GREEN_UP*jac_affine_1_2_GREEN_UP*-4.0 + jac_affine_2_1_GREEN_UP*jac_affine_2_2_GREEN_UP*-4.0;
       const walberla::float64 Dummy_174 = -Dummy_150*Dummy_151 - Dummy_153*Dummy_154 - Dummy_156*Dummy_157;
       const walberla::float64 Dummy_175 = -Dummy_150*Dummy_161 - Dummy_153*Dummy_164 - Dummy_156*Dummy_167;
       const walberla::float64 Dummy_176 = -Dummy_150*Dummy_169 - Dummy_153*Dummy_170 - Dummy_156*Dummy_171;
       const walberla::float64 Dummy_177 = Dummy_151*Dummy_159 + Dummy_154*Dummy_162 + Dummy_157*Dummy_165;
       const walberla::float64 Dummy_178 = Dummy_159*Dummy_161 + Dummy_162*Dummy_164 + Dummy_165*Dummy_167;
       const walberla::float64 Dummy_179 = Dummy_159*Dummy_169 + Dummy_162*Dummy_170 + Dummy_165*Dummy_171;
       const walberla::float64 Dummy_180 = Dummy_151*Dummy_161 + Dummy_154*Dummy_164 + Dummy_157*Dummy_167;
       const walberla::float64 Dummy_181 = Dummy_151*Dummy_169 + Dummy_154*Dummy_170 + Dummy_157*Dummy_171;
       const walberla::float64 Dummy_182 = Dummy_161*Dummy_169 + Dummy_164*Dummy_170 + Dummy_167*Dummy_171;
       {
          /* CellType.GREEN_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_5 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 tmp_5_GREEN_UP = Dummy_147*src_dof_1;
             const walberla::float64 tmp_7 = Dummy_147*src_dof_2;
             const walberla::float64 tmp_8 = Dummy_147*src_dof_0;
             const walberla::float64 tmp_19 = Dummy_147*src_dof_3;
             const walberla::float64 tmp_30 = Dummy_147*src_dof_4;
             const walberla::float64 tmp_35 = Dummy_147*src_dof_5;
             const walberla::float64 elMatVec_0 = Dummy_146*tmp_5_GREEN_UP + Dummy_148*tmp_7 + Dummy_158*tmp_19 + Dummy_168*tmp_30 + Dummy_172*tmp_35 + tmp_8*((jac_affine_0_0_GREEN_UP*jac_affine_0_0_GREEN_UP)*4.0 + (jac_affine_1_0_GREEN_UP*jac_affine_1_0_GREEN_UP)*4.0 + (jac_affine_2_0_GREEN_UP*jac_affine_2_0_GREEN_UP)*4.0);
             const walberla::float64 elMatVec_1 = Dummy_146*tmp_8 + Dummy_173*tmp_7 + Dummy_174*tmp_19 + Dummy_175*tmp_30 + Dummy_176*tmp_35 + tmp_5_GREEN_UP*((jac_affine_0_1_GREEN_UP*jac_affine_0_1_GREEN_UP)*4.0 + (jac_affine_1_1_GREEN_UP*jac_affine_1_1_GREEN_UP)*4.0 + (jac_affine_2_1_GREEN_UP*jac_affine_2_1_GREEN_UP)*4.0);
             const walberla::float64 elMatVec_2 = Dummy_148*tmp_8 + Dummy_173*tmp_5_GREEN_UP + Dummy_177*tmp_19 + Dummy_178*tmp_30 + Dummy_179*tmp_35 + tmp_7*((jac_affine_0_2_GREEN_UP*jac_affine_0_2_GREEN_UP)*4.0 + (jac_affine_1_2_GREEN_UP*jac_affine_1_2_GREEN_UP)*4.0 + (jac_affine_2_2_GREEN_UP*jac_affine_2_2_GREEN_UP)*4.0);
             const walberla::float64 elMatVec_3 = Dummy_158*tmp_8 + Dummy_174*tmp_5_GREEN_UP + Dummy_177*tmp_7 + Dummy_180*tmp_30 + Dummy_181*tmp_35 + tmp_19*((Dummy_151*Dummy_151) + (Dummy_154*Dummy_154) + (Dummy_157*Dummy_157));
             const walberla::float64 elMatVec_4 = Dummy_168*tmp_8 + Dummy_175*tmp_5_GREEN_UP + Dummy_178*tmp_7 + Dummy_180*tmp_19 + Dummy_182*tmp_35 + tmp_30*((Dummy_161*Dummy_161) + (Dummy_164*Dummy_164) + (Dummy_167*Dummy_167));
             const walberla::float64 elMatVec_5 = Dummy_172*tmp_8 + Dummy_176*tmp_5_GREEN_UP + Dummy_179*tmp_7 + Dummy_181*tmp_19 + Dummy_182*tmp_30 + tmp_35*((Dummy_169*Dummy_169) + (Dummy_170*Dummy_170) + (Dummy_171*Dummy_171));
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_4 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatVec_5 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
       const walberla::float64 tmp_0_GREEN_DOWN = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_2_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 tmp_3_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const walberla::float64 tmp_4_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_5_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_6_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const walberla::float64 tmp_7_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const walberla::float64 tmp_8_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const walberla::float64 tmp_9_GREEN_DOWN = tmp_0_GREEN_DOWN*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const walberla::float64 p_affine_const_0_0_GREEN_DOWN = tmp_1_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_1_GREEN_DOWN = tmp_2_GREEN_DOWN;
       const walberla::float64 p_affine_const_0_2_GREEN_DOWN = tmp_3_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_0_GREEN_DOWN = tmp_1_GREEN_DOWN + tmp_4_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_1_GREEN_DOWN = tmp_2_GREEN_DOWN + tmp_5_GREEN_DOWN;
       const walberla::float64 p_affine_const_1_2_GREEN_DOWN = tmp_3_GREEN_DOWN + tmp_6_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_0_GREEN_DOWN = macro_vertex_coord_id_0comp0 + tmp_4_GREEN_DOWN + tmp_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_1_GREEN_DOWN = macro_vertex_coord_id_0comp1 + tmp_5_GREEN_DOWN + tmp_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_2_2_GREEN_DOWN = macro_vertex_coord_id_0comp2 + tmp_6_GREEN_DOWN + tmp_9_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_0_GREEN_DOWN = tmp_1_GREEN_DOWN + tmp_7_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_1_GREEN_DOWN = tmp_2_GREEN_DOWN + tmp_8_GREEN_DOWN;
       const walberla::float64 p_affine_const_3_2_GREEN_DOWN = tmp_3_GREEN_DOWN + tmp_9_GREEN_DOWN;
       const walberla::float64 jac_affine_0_0_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_1_0_GREEN_DOWN;
       const walberla::float64 jac_affine_0_1_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_2_0_GREEN_DOWN;
       const walberla::float64 jac_affine_0_2_GREEN_DOWN = -p_affine_const_0_0_GREEN_DOWN + p_affine_const_3_0_GREEN_DOWN;
       const walberla::float64 jac_affine_1_0_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_1_1_GREEN_DOWN;
       const walberla::float64 jac_affine_1_1_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_2_1_GREEN_DOWN;
       const walberla::float64 jac_affine_1_2_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_3_1_GREEN_DOWN;
       const walberla::float64 jac_affine_2_0_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_1_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_1_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_2_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_2_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_3_2_GREEN_DOWN;
       const walberla::float64 abs_det_jac_affine_GREEN_DOWN = abs(jac_affine_0_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN - jac_affine_0_0_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_0_1_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN + jac_affine_0_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_0_2_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 Dummy_183 = jac_affine_0_0_GREEN_DOWN*4.0;
       const walberla::float64 Dummy_184 = jac_affine_1_0_GREEN_DOWN*4.0;
       const walberla::float64 Dummy_185 = jac_affine_2_0_GREEN_DOWN*4.0;
       const walberla::float64 Dummy_186 = -Dummy_183*jac_affine_0_1_GREEN_DOWN - Dummy_184*jac_affine_1_1_GREEN_DOWN - Dummy_185*jac_affine_2_1_GREEN_DOWN;
       const walberla::float64 Dummy_187 = 1.0 / (abs_det_jac_affine_GREEN_DOWN)*0.16666666666666666;
       const walberla::float64 Dummy_188 = Dummy_183*jac_affine_0_2_GREEN_DOWN + Dummy_184*jac_affine_1_2_GREEN_DOWN + Dummy_185*jac_affine_2_2_GREEN_DOWN;
       const walberla::float64 Dummy_189 = jac_affine_0_0_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_190 = jac_affine_0_1_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_191 = -Dummy_189 + Dummy_190;
       const walberla::float64 Dummy_192 = jac_affine_1_0_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_193 = jac_affine_1_1_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_194 = -Dummy_192 + Dummy_193;
       const walberla::float64 Dummy_195 = jac_affine_2_0_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_196 = jac_affine_2_1_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_197 = -Dummy_195 + Dummy_196;
       const walberla::float64 Dummy_198 = Dummy_189*Dummy_191 + Dummy_192*Dummy_194 + Dummy_195*Dummy_197;
       const walberla::float64 Dummy_199 = jac_affine_0_2_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_200 = -Dummy_199;
       const walberla::float64 Dummy_201 = Dummy_189 + Dummy_200;
       const walberla::float64 Dummy_202 = jac_affine_1_2_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_203 = -Dummy_202;
       const walberla::float64 Dummy_204 = Dummy_192 + Dummy_203;
       const walberla::float64 Dummy_205 = jac_affine_2_2_GREEN_DOWN*2.0;
       const walberla::float64 Dummy_206 = -Dummy_205;
       const walberla::float64 Dummy_207 = Dummy_195 + Dummy_206;
       const walberla::float64 Dummy_208 = Dummy_189*Dummy_201 + Dummy_192*Dummy_204 + Dummy_195*Dummy_207;
       const walberla::float64 Dummy_209 = -Dummy_190 - Dummy_200;
       const walberla::float64 Dummy_210 = -Dummy_193 - Dummy_203;
       const walberla::float64 Dummy_211 = -Dummy_196 - Dummy_206;
       const walberla::float64 Dummy_212 = Dummy_189*Dummy_209 + Dummy_192*Dummy_210 + Dummy_195*Dummy_211;
       const walberla::float64 Dummy_213 = jac_affine_0_1_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN*-4.0 + jac_affine_1_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN*-4.0 + jac_affine_2_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN*-4.0;
       const walberla::float64 Dummy_214 = -Dummy_190*Dummy_191 - Dummy_193*Dummy_194 - Dummy_196*Dummy_197;
       const walberla::float64 Dummy_215 = -Dummy_190*Dummy_201 - Dummy_193*Dummy_204 - Dummy_196*Dummy_207;
       const walberla::float64 Dummy_216 = -Dummy_190*Dummy_209 - Dummy_193*Dummy_210 - Dummy_196*Dummy_211;
       const walberla::float64 Dummy_217 = Dummy_191*Dummy_199 + Dummy_194*Dummy_202 + Dummy_197*Dummy_205;
       const walberla::float64 Dummy_218 = Dummy_199*Dummy_201 + Dummy_202*Dummy_204 + Dummy_205*Dummy_207;
       const walberla::float64 Dummy_219 = Dummy_199*Dummy_209 + Dummy_202*Dummy_210 + Dummy_205*Dummy_211;
       const walberla::float64 Dummy_220 = Dummy_191*Dummy_201 + Dummy_194*Dummy_204 + Dummy_197*Dummy_207;
       const walberla::float64 Dummy_221 = Dummy_191*Dummy_209 + Dummy_194*Dummy_210 + Dummy_197*Dummy_211;
       const walberla::float64 Dummy_222 = Dummy_201*Dummy_209 + Dummy_204*Dummy_210 + Dummy_207*Dummy_211;
       {
          /* CellType.GREEN_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 src_dof_4 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 src_dof_5 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 tmp_5_GREEN_DOWN = Dummy_187*src_dof_1;
             const walberla::float64 tmp_7_GREEN_DOWN = Dummy_187*src_dof_2;
             const walberla::float64 tmp_8_GREEN_DOWN = Dummy_187*src_dof_0;
             const walberla::float64 tmp_19 = Dummy_187*src_dof_3;
             const walberla::float64 tmp_30 = Dummy_187*src_dof_4;
             const walberla::float64 tmp_35 = Dummy_187*src_dof_5;
             const walberla::float64 elMatVec_0 = Dummy_186*tmp_5_GREEN_DOWN + Dummy_188*tmp_7_GREEN_DOWN + Dummy_198*tmp_19 + Dummy_208*tmp_30 + Dummy_212*tmp_35 + tmp_8_GREEN_DOWN*((jac_affine_0_0_GREEN_DOWN*jac_affine_0_0_GREEN_DOWN)*4.0 + (jac_affine_1_0_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN)*4.0 + (jac_affine_2_0_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN)*4.0);
             const walberla::float64 elMatVec_1 = Dummy_186*tmp_8_GREEN_DOWN + Dummy_213*tmp_7_GREEN_DOWN + Dummy_214*tmp_19 + Dummy_215*tmp_30 + Dummy_216*tmp_35 + tmp_5_GREEN_DOWN*((jac_affine_0_1_GREEN_DOWN*jac_affine_0_1_GREEN_DOWN)*4.0 + (jac_affine_1_1_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN)*4.0 + (jac_affine_2_1_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN)*4.0);
             const walberla::float64 elMatVec_2 = Dummy_188*tmp_8_GREEN_DOWN + Dummy_213*tmp_5_GREEN_DOWN + Dummy_217*tmp_19 + Dummy_218*tmp_30 + Dummy_219*tmp_35 + tmp_7_GREEN_DOWN*((jac_affine_0_2_GREEN_DOWN*jac_affine_0_2_GREEN_DOWN)*4.0 + (jac_affine_1_2_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN)*4.0 + (jac_affine_2_2_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN)*4.0);
             const walberla::float64 elMatVec_3 = Dummy_198*tmp_8_GREEN_DOWN + Dummy_214*tmp_5_GREEN_DOWN + Dummy_217*tmp_7_GREEN_DOWN + Dummy_220*tmp_30 + Dummy_221*tmp_35 + tmp_19*((Dummy_191*Dummy_191) + (Dummy_194*Dummy_194) + (Dummy_197*Dummy_197));
             const walberla::float64 elMatVec_4 = Dummy_208*tmp_8_GREEN_DOWN + Dummy_215*tmp_5_GREEN_DOWN + Dummy_218*tmp_7_GREEN_DOWN + Dummy_220*tmp_19 + Dummy_222*tmp_35 + tmp_30*((Dummy_201*Dummy_201) + (Dummy_204*Dummy_204) + (Dummy_207*Dummy_207));
             const walberla::float64 elMatVec_5 = Dummy_212*tmp_8_GREEN_DOWN + Dummy_216*tmp_5_GREEN_DOWN + Dummy_219*tmp_7_GREEN_DOWN + Dummy_221*tmp_19 + Dummy_222*tmp_30 + tmp_35*((Dummy_209*Dummy_209) + (Dummy_210*Dummy_210) + (Dummy_211*Dummy_211));
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
