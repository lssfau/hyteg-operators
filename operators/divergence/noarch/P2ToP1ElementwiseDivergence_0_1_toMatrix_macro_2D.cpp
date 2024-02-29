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

























#include "../P2ToP1ElementwiseDivergence_0_1.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ToP1ElementwiseDivergence_0_1::toMatrix_macro_2D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
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
       const real_t jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const real_t tmp_kernel_op_0 = 0.66666666666666663;
       const real_t tmp_kernel_op_1 = 2.6666666666666665;
       const real_t tmp_kernel_op_2 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const real_t tmp_kernel_op_3 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_4 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_5 = tmp_kernel_op_4*0.16666666666666674;
       const real_t tmp_kernel_op_6 = 2.6666666666666665;
       const real_t tmp_kernel_op_7 = 0.66666666666666663;
       const real_t tmp_kernel_op_8 = tmp_kernel_op_6 + tmp_kernel_op_7 - 3.0;
       const real_t tmp_kernel_op_9 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_8 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_10 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_11 = tmp_kernel_op_10*0.16666666666666671;
       const real_t tmp_kernel_op_12 = 0.66666666666666663;
       const real_t tmp_kernel_op_13 = 0.66666666666666663;
       const real_t tmp_kernel_op_14 = tmp_kernel_op_12 + tmp_kernel_op_13 - 3.0;
       const real_t tmp_kernel_op_15 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_14 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_16 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_17 = tmp_kernel_op_16*0.66666666666666674;
       const real_t tmp_kernel_op_18 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_0 - 1.0);
       const real_t tmp_kernel_op_19 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_6 - 1.0);
       const real_t tmp_kernel_op_20 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_12 - 1.0);
       const real_t tmp_kernel_op_21 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_1 - 1.0);
       const real_t tmp_kernel_op_22 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_7 - 1.0);
       const real_t tmp_kernel_op_23 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_13 - 1.0);
       const real_t tmp_kernel_op_24 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_25 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const real_t tmp_kernel_op_26 = -tmp_kernel_op_24 - tmp_kernel_op_25;
       const real_t tmp_kernel_op_27 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_28 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_6;
       const real_t tmp_kernel_op_29 = -tmp_kernel_op_27 - tmp_kernel_op_28;
       const real_t tmp_kernel_op_30 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_31 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_12;
       const real_t tmp_kernel_op_32 = -tmp_kernel_op_30 - tmp_kernel_op_31;
       const real_t tmp_kernel_op_33 = -jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_0 - 1.333333333333333) + tmp_kernel_op_24;
       const real_t tmp_kernel_op_34 = -jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_6 + 2.666666666666667) + tmp_kernel_op_27;
       const real_t tmp_kernel_op_35 = -jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_12 + 2.666666666666667) + tmp_kernel_op_30;
       const real_t tmp_kernel_op_36 = -jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_1 + 2.666666666666667) + tmp_kernel_op_25;
       const real_t tmp_kernel_op_37 = -jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_7 - 1.333333333333333) + tmp_kernel_op_28;
       const real_t tmp_kernel_op_38 = -jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_13 + 2.666666666666667) + tmp_kernel_op_31;
       const real_t tmp_kernel_op_39 = tmp_kernel_op_4*0.16666666666666666;
       const real_t tmp_kernel_op_40 = tmp_kernel_op_10*0.66666666666666663;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_16*0.16666666666666666;
       const real_t tmp_kernel_op_42 = tmp_kernel_op_4*0.66666666666666663;
       const real_t tmp_kernel_op_43 = tmp_kernel_op_10*0.16666666666666666;
       const real_t tmp_kernel_op_44 = tmp_kernel_op_16*0.16666666666666666;
       const real_t elMat_0_0 = tmp_kernel_op_11*tmp_kernel_op_9 + tmp_kernel_op_15*tmp_kernel_op_17 + tmp_kernel_op_3*tmp_kernel_op_5;
       const real_t elMat_0_1 = -tmp_kernel_op_11*tmp_kernel_op_19 - tmp_kernel_op_17*tmp_kernel_op_20 - tmp_kernel_op_18*tmp_kernel_op_5;
       const real_t elMat_0_2 = -tmp_kernel_op_11*tmp_kernel_op_22 - tmp_kernel_op_17*tmp_kernel_op_23 - tmp_kernel_op_21*tmp_kernel_op_5;
       const real_t elMat_0_3 = tmp_kernel_op_11*tmp_kernel_op_29 + tmp_kernel_op_17*tmp_kernel_op_32 + tmp_kernel_op_26*tmp_kernel_op_5;
       const real_t elMat_0_4 = tmp_kernel_op_11*tmp_kernel_op_34 + tmp_kernel_op_17*tmp_kernel_op_35 + tmp_kernel_op_33*tmp_kernel_op_5;
       const real_t elMat_0_5 = tmp_kernel_op_11*tmp_kernel_op_37 + tmp_kernel_op_17*tmp_kernel_op_38 + tmp_kernel_op_36*tmp_kernel_op_5;
       const real_t elMat_1_0 = tmp_kernel_op_15*tmp_kernel_op_41 + tmp_kernel_op_3*tmp_kernel_op_39 + tmp_kernel_op_40*tmp_kernel_op_9;
       const real_t elMat_1_1 = -tmp_kernel_op_18*tmp_kernel_op_39 - tmp_kernel_op_19*tmp_kernel_op_40 - tmp_kernel_op_20*tmp_kernel_op_41;
       const real_t elMat_1_2 = -tmp_kernel_op_21*tmp_kernel_op_39 - tmp_kernel_op_22*tmp_kernel_op_40 - tmp_kernel_op_23*tmp_kernel_op_41;
       const real_t elMat_1_3 = tmp_kernel_op_26*tmp_kernel_op_39 + tmp_kernel_op_29*tmp_kernel_op_40 + tmp_kernel_op_32*tmp_kernel_op_41;
       const real_t elMat_1_4 = tmp_kernel_op_33*tmp_kernel_op_39 + tmp_kernel_op_34*tmp_kernel_op_40 + tmp_kernel_op_35*tmp_kernel_op_41;
       const real_t elMat_1_5 = tmp_kernel_op_36*tmp_kernel_op_39 + tmp_kernel_op_37*tmp_kernel_op_40 + tmp_kernel_op_38*tmp_kernel_op_41;
       const real_t elMat_2_0 = tmp_kernel_op_15*tmp_kernel_op_44 + tmp_kernel_op_3*tmp_kernel_op_42 + tmp_kernel_op_43*tmp_kernel_op_9;
       const real_t elMat_2_1 = -tmp_kernel_op_18*tmp_kernel_op_42 - tmp_kernel_op_19*tmp_kernel_op_43 - tmp_kernel_op_20*tmp_kernel_op_44;
       const real_t elMat_2_2 = -tmp_kernel_op_21*tmp_kernel_op_42 - tmp_kernel_op_22*tmp_kernel_op_43 - tmp_kernel_op_23*tmp_kernel_op_44;
       const real_t elMat_2_3 = tmp_kernel_op_26*tmp_kernel_op_42 + tmp_kernel_op_29*tmp_kernel_op_43 + tmp_kernel_op_32*tmp_kernel_op_44;
       const real_t elMat_2_4 = tmp_kernel_op_33*tmp_kernel_op_42 + tmp_kernel_op_34*tmp_kernel_op_43 + tmp_kernel_op_35*tmp_kernel_op_44;
       const real_t elMat_2_5 = tmp_kernel_op_36*tmp_kernel_op_42 + tmp_kernel_op_37*tmp_kernel_op_43 + tmp_kernel_op_38*tmp_kernel_op_44;
       const real_t Dummy_1191 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const real_t Dummy_1192 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_1193 = Dummy_1192*0.16666666666666674;
       const real_t Dummy_1194 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_8 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_8;
       const real_t Dummy_1195 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_1196 = Dummy_1195*0.16666666666666671;
       const real_t Dummy_1197 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_14 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_14;
       const real_t Dummy_1198 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_1199 = Dummy_1198*0.66666666666666674;
       const real_t Dummy_1200 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_0 - 1.0);
       const real_t Dummy_1201 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_6 - 1.0);
       const real_t Dummy_1202 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_12 - 1.0);
       const real_t Dummy_1203 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_1 - 1.0);
       const real_t Dummy_1204 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_7 - 1.0);
       const real_t Dummy_1205 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_13 - 1.0);
       const real_t Dummy_1206 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const real_t Dummy_1207 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const real_t Dummy_1208 = -Dummy_1206 - Dummy_1207;
       const real_t Dummy_1209 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_7;
       const real_t Dummy_1210 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_6;
       const real_t Dummy_1211 = -Dummy_1209 - Dummy_1210;
       const real_t Dummy_1212 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_13;
       const real_t Dummy_1213 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_12;
       const real_t Dummy_1214 = -Dummy_1212 - Dummy_1213;
       const real_t Dummy_1215 = Dummy_1206 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_0 - 1.333333333333333);
       const real_t Dummy_1216 = Dummy_1209 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_6 + 2.666666666666667);
       const real_t Dummy_1217 = Dummy_1212 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_12 + 2.666666666666667);
       const real_t Dummy_1218 = Dummy_1207 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_1 + 2.666666666666667);
       const real_t Dummy_1219 = Dummy_1210 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_7 - 1.333333333333333);
       const real_t Dummy_1220 = Dummy_1213 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_13 + 2.666666666666667);
       const real_t Dummy_1221 = Dummy_1192*0.16666666666666666;
       const real_t Dummy_1222 = Dummy_1195*0.66666666666666663;
       const real_t Dummy_1223 = Dummy_1198*0.16666666666666666;
       const real_t Dummy_1224 = Dummy_1192*0.66666666666666663;
       const real_t Dummy_1225 = Dummy_1195*0.16666666666666666;
       const real_t Dummy_1226 = Dummy_1198*0.16666666666666666;
       const real_t Dummy_1227 = Dummy_1191*Dummy_1193 + Dummy_1194*Dummy_1196 + Dummy_1197*Dummy_1199;
       const real_t Dummy_1228 = -Dummy_1193*Dummy_1200 - Dummy_1196*Dummy_1201 - Dummy_1199*Dummy_1202;
       const real_t Dummy_1229 = -Dummy_1193*Dummy_1203 - Dummy_1196*Dummy_1204 - Dummy_1199*Dummy_1205;
       const real_t Dummy_1230 = Dummy_1193*Dummy_1208 + Dummy_1196*Dummy_1211 + Dummy_1199*Dummy_1214;
       const real_t Dummy_1231 = Dummy_1193*Dummy_1215 + Dummy_1196*Dummy_1216 + Dummy_1199*Dummy_1217;
       const real_t Dummy_1232 = Dummy_1193*Dummy_1218 + Dummy_1196*Dummy_1219 + Dummy_1199*Dummy_1220;
       const real_t Dummy_1233 = Dummy_1191*Dummy_1221 + Dummy_1194*Dummy_1222 + Dummy_1197*Dummy_1223;
       const real_t Dummy_1234 = -Dummy_1200*Dummy_1221 - Dummy_1201*Dummy_1222 - Dummy_1202*Dummy_1223;
       const real_t Dummy_1235 = -Dummy_1203*Dummy_1221 - Dummy_1204*Dummy_1222 - Dummy_1205*Dummy_1223;
       const real_t Dummy_1236 = Dummy_1208*Dummy_1221 + Dummy_1211*Dummy_1222 + Dummy_1214*Dummy_1223;
       const real_t Dummy_1237 = Dummy_1215*Dummy_1221 + Dummy_1216*Dummy_1222 + Dummy_1217*Dummy_1223;
       const real_t Dummy_1238 = Dummy_1218*Dummy_1221 + Dummy_1219*Dummy_1222 + Dummy_1220*Dummy_1223;
       const real_t Dummy_1239 = Dummy_1191*Dummy_1224 + Dummy_1194*Dummy_1225 + Dummy_1197*Dummy_1226;
       const real_t Dummy_1240 = -Dummy_1200*Dummy_1224 - Dummy_1201*Dummy_1225 - Dummy_1202*Dummy_1226;
       const real_t Dummy_1241 = -Dummy_1203*Dummy_1224 - Dummy_1204*Dummy_1225 - Dummy_1205*Dummy_1226;
       const real_t Dummy_1242 = Dummy_1208*Dummy_1224 + Dummy_1211*Dummy_1225 + Dummy_1214*Dummy_1226;
       const real_t Dummy_1243 = Dummy_1215*Dummy_1224 + Dummy_1216*Dummy_1225 + Dummy_1217*Dummy_1226;
       const real_t Dummy_1244 = Dummy_1218*Dummy_1224 + Dummy_1219*Dummy_1225 + Dummy_1220*Dummy_1226;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             {
                {
               
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
             {
                {
               
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
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_1227));
                   _data_mat[1] = ((real_t)(Dummy_1228));
                   _data_mat[2] = ((real_t)(Dummy_1229));
                   _data_mat[3] = ((real_t)(Dummy_1230));
                   _data_mat[4] = ((real_t)(Dummy_1231));
                   _data_mat[5] = ((real_t)(Dummy_1232));
                   _data_mat[6] = ((real_t)(Dummy_1233));
                   _data_mat[7] = ((real_t)(Dummy_1234));
                   _data_mat[8] = ((real_t)(Dummy_1235));
                   _data_mat[9] = ((real_t)(Dummy_1236));
                   _data_mat[10] = ((real_t)(Dummy_1237));
                   _data_mat[11] = ((real_t)(Dummy_1238));
                   _data_mat[12] = ((real_t)(Dummy_1239));
                   _data_mat[13] = ((real_t)(Dummy_1240));
                   _data_mat[14] = ((real_t)(Dummy_1241));
                   _data_mat[15] = ((real_t)(Dummy_1242));
                   _data_mat[16] = ((real_t)(Dummy_1243));
                   _data_mat[17] = ((real_t)(Dummy_1244));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< real_t > _data_mat( 18 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
               
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
    }
}
} // namespace operatorgeneration

} // namespace hyteg
