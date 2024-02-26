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

























#include "../P1ToP2ElementwiseGradient_0_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ToP2ElementwiseGradient_0_0::toMatrix_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, idx_t * RESTRICT  _data_src, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 tmp_coords_jac_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_coords_jac_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_coords_jac_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_coords_jac_3_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_coords_jac_4_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_0_0_BLUE = tmp_coords_jac_1_BLUE;
       const walberla::float64 p_affine_const_0_1_BLUE = tmp_coords_jac_2_BLUE;
       const walberla::float64 p_affine_const_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_3_BLUE;
       const walberla::float64 p_affine_const_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_4_BLUE;
       const walberla::float64 p_affine_const_2_0_BLUE = tmp_coords_jac_1_BLUE + tmp_coords_jac_3_BLUE;
       const walberla::float64 p_affine_const_2_1_BLUE = tmp_coords_jac_2_BLUE + tmp_coords_jac_4_BLUE;
       const walberla::float64 jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const walberla::float64 jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const walberla::float64 jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const walberla::float64 jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const walberla::float64 tmp_coords_jac_5_BLUE = jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE;
       const walberla::float64 tmp_coords_jac_6_BLUE = 1.0 / (tmp_coords_jac_5_BLUE);
       const walberla::float64 jac_affine_inv_0_0_BLUE = jac_affine_1_1_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_coords_jac_6_BLUE;
       const walberla::float64 abs_det_jac_affine_BLUE = abs(tmp_coords_jac_5_BLUE);
       const walberla::float64 tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const walberla::float64 jac_affine_0_1_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_2_0_GRAY;
       const walberla::float64 jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const walberla::float64 jac_affine_1_1_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_2_1_GRAY;
       const walberla::float64 tmp_coords_jac_1_GRAY = jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY;
       const walberla::float64 tmp_coords_jac_2_GRAY = 1.0 / (tmp_coords_jac_1_GRAY);
       const walberla::float64 jac_affine_inv_0_0_GRAY = jac_affine_1_1_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const walberla::float64 abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const walberla::float64 tmp_kernel_op_0 = 0.16666666666666674;
       const walberla::float64 tmp_kernel_op_1 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_2 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_3 = tmp_kernel_op_1 + tmp_kernel_op_2 - 3.0;
       const walberla::float64 tmp_kernel_op_4 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_5 = tmp_kernel_op_4*(-jac_affine_inv_0_0_GRAY*tmp_kernel_op_3 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_3);
       const walberla::float64 tmp_kernel_op_6 = 0.16666666666666671;
       const walberla::float64 tmp_kernel_op_7 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_8 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_9 = tmp_kernel_op_7 + tmp_kernel_op_8 - 3.0;
       const walberla::float64 tmp_kernel_op_10 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_11 = tmp_kernel_op_10*(-jac_affine_inv_0_0_GRAY*tmp_kernel_op_9 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_9);
       const walberla::float64 tmp_kernel_op_12 = 0.66666666666666674;
       const walberla::float64 tmp_kernel_op_13 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_14 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_15 = tmp_kernel_op_13 + tmp_kernel_op_14 - 3.0;
       const walberla::float64 tmp_kernel_op_16 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_17 = tmp_kernel_op_16*(-jac_affine_inv_0_0_GRAY*tmp_kernel_op_15 - jac_affine_inv_1_0_GRAY*tmp_kernel_op_15);
       const walberla::float64 tmp_kernel_op_18 = tmp_kernel_op_0*tmp_kernel_op_4;
       const walberla::float64 tmp_kernel_op_19 = jac_affine_inv_0_0_GRAY*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 tmp_kernel_op_20 = tmp_kernel_op_10*tmp_kernel_op_6;
       const walberla::float64 tmp_kernel_op_21 = jac_affine_inv_0_0_GRAY*(tmp_kernel_op_7 - 1.0);
       const walberla::float64 tmp_kernel_op_22 = tmp_kernel_op_12*tmp_kernel_op_16;
       const walberla::float64 tmp_kernel_op_23 = jac_affine_inv_0_0_GRAY*(tmp_kernel_op_13 - 1.0);
       const walberla::float64 tmp_kernel_op_24 = tmp_kernel_op_19*tmp_kernel_op_4;
       const walberla::float64 tmp_kernel_op_25 = tmp_kernel_op_10*tmp_kernel_op_21;
       const walberla::float64 tmp_kernel_op_26 = tmp_kernel_op_16*tmp_kernel_op_23;
       const walberla::float64 tmp_kernel_op_27 = jac_affine_inv_1_0_GRAY*(tmp_kernel_op_2 - 1.0);
       const walberla::float64 tmp_kernel_op_28 = jac_affine_inv_1_0_GRAY*(tmp_kernel_op_8 - 1.0);
       const walberla::float64 tmp_kernel_op_29 = jac_affine_inv_1_0_GRAY*(tmp_kernel_op_14 - 1.0);
       const walberla::float64 tmp_kernel_op_30 = tmp_kernel_op_27*tmp_kernel_op_4;
       const walberla::float64 tmp_kernel_op_31 = tmp_kernel_op_10*tmp_kernel_op_28;
       const walberla::float64 tmp_kernel_op_32 = tmp_kernel_op_16*tmp_kernel_op_29;
       const walberla::float64 tmp_kernel_op_33 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_2;
       const walberla::float64 tmp_kernel_op_34 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_1;
       const walberla::float64 tmp_kernel_op_35 = tmp_kernel_op_4*(-tmp_kernel_op_33 - tmp_kernel_op_34);
       const walberla::float64 tmp_kernel_op_36 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_37 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_7;
       const walberla::float64 tmp_kernel_op_38 = tmp_kernel_op_10*(-tmp_kernel_op_36 - tmp_kernel_op_37);
       const walberla::float64 tmp_kernel_op_39 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_14;
       const walberla::float64 tmp_kernel_op_40 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_13;
       const walberla::float64 tmp_kernel_op_41 = tmp_kernel_op_16*(-tmp_kernel_op_39 - tmp_kernel_op_40);
       const walberla::float64 tmp_kernel_op_42 = tmp_kernel_op_4*(-jac_affine_inv_1_0_GRAY*(-tmp_kernel_op_1 - 1.333333333333333) + tmp_kernel_op_33);
       const walberla::float64 tmp_kernel_op_43 = tmp_kernel_op_10*(-jac_affine_inv_1_0_GRAY*(-tmp_kernel_op_7 + 2.666666666666667) + tmp_kernel_op_36);
       const walberla::float64 tmp_kernel_op_44 = tmp_kernel_op_16*(-jac_affine_inv_1_0_GRAY*(-tmp_kernel_op_13 + 2.666666666666667) + tmp_kernel_op_39);
       const walberla::float64 tmp_kernel_op_45 = tmp_kernel_op_4*(-jac_affine_inv_0_0_GRAY*(-tmp_kernel_op_2 + 2.666666666666667) + tmp_kernel_op_34);
       const walberla::float64 tmp_kernel_op_46 = tmp_kernel_op_10*(-jac_affine_inv_0_0_GRAY*(-tmp_kernel_op_8 - 1.333333333333333) + tmp_kernel_op_37);
       const walberla::float64 tmp_kernel_op_47 = tmp_kernel_op_16*(-jac_affine_inv_0_0_GRAY*(-tmp_kernel_op_14 + 2.666666666666667) + tmp_kernel_op_40);
       const walberla::float64 elMat_0_0 = tmp_kernel_op_0*tmp_kernel_op_5 + tmp_kernel_op_11*tmp_kernel_op_6 + tmp_kernel_op_12*tmp_kernel_op_17;
       const walberla::float64 elMat_0_1 = tmp_kernel_op_11*0.66666666666666663 + tmp_kernel_op_17*0.16666666666666666 + tmp_kernel_op_5*0.16666666666666666;
       const walberla::float64 elMat_0_2 = tmp_kernel_op_11*0.16666666666666666 + tmp_kernel_op_17*0.16666666666666666 + tmp_kernel_op_5*0.66666666666666663;
       const walberla::float64 elMat_1_0 = -tmp_kernel_op_18*tmp_kernel_op_19 - tmp_kernel_op_20*tmp_kernel_op_21 - tmp_kernel_op_22*tmp_kernel_op_23;
       const walberla::float64 elMat_1_1 = tmp_kernel_op_24*-0.16666666666666666 + tmp_kernel_op_25*-0.66666666666666663 + tmp_kernel_op_26*-0.16666666666666666;
       const walberla::float64 elMat_1_2 = tmp_kernel_op_24*-0.66666666666666663 + tmp_kernel_op_25*-0.16666666666666666 + tmp_kernel_op_26*-0.16666666666666666;
       const walberla::float64 elMat_2_0 = -tmp_kernel_op_18*tmp_kernel_op_27 - tmp_kernel_op_20*tmp_kernel_op_28 - tmp_kernel_op_22*tmp_kernel_op_29;
       const walberla::float64 elMat_2_1 = tmp_kernel_op_30*-0.16666666666666666 + tmp_kernel_op_31*-0.66666666666666663 + tmp_kernel_op_32*-0.16666666666666666;
       const walberla::float64 elMat_2_2 = tmp_kernel_op_30*-0.66666666666666663 + tmp_kernel_op_31*-0.16666666666666666 + tmp_kernel_op_32*-0.16666666666666666;
       const walberla::float64 elMat_3_0 = tmp_kernel_op_0*tmp_kernel_op_35 + tmp_kernel_op_12*tmp_kernel_op_41 + tmp_kernel_op_38*tmp_kernel_op_6;
       const walberla::float64 elMat_3_1 = tmp_kernel_op_35*0.16666666666666666 + tmp_kernel_op_38*0.66666666666666663 + tmp_kernel_op_41*0.16666666666666666;
       const walberla::float64 elMat_3_2 = tmp_kernel_op_35*0.66666666666666663 + tmp_kernel_op_38*0.16666666666666666 + tmp_kernel_op_41*0.16666666666666666;
       const walberla::float64 elMat_4_0 = tmp_kernel_op_0*tmp_kernel_op_42 + tmp_kernel_op_12*tmp_kernel_op_44 + tmp_kernel_op_43*tmp_kernel_op_6;
       const walberla::float64 elMat_4_1 = tmp_kernel_op_42*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666;
       const walberla::float64 elMat_4_2 = tmp_kernel_op_42*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666;
       const walberla::float64 elMat_5_0 = tmp_kernel_op_0*tmp_kernel_op_45 + tmp_kernel_op_12*tmp_kernel_op_47 + tmp_kernel_op_46*tmp_kernel_op_6;
       const walberla::float64 elMat_5_1 = tmp_kernel_op_45*0.16666666666666666 + tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666;
       const walberla::float64 elMat_5_2 = tmp_kernel_op_45*0.66666666666666663 + tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666;
       const walberla::float64 Dummy_1191 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_1192 = Dummy_1191*(-jac_affine_inv_0_0_BLUE*tmp_kernel_op_3 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_3);
       const walberla::float64 Dummy_1193 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_1194 = Dummy_1193*(-jac_affine_inv_0_0_BLUE*tmp_kernel_op_9 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_9);
       const walberla::float64 Dummy_1195 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_1196 = Dummy_1195*(-jac_affine_inv_0_0_BLUE*tmp_kernel_op_15 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_15);
       const walberla::float64 Dummy_1197 = Dummy_1191*tmp_kernel_op_0;
       const walberla::float64 Dummy_1198 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 Dummy_1199 = Dummy_1193*tmp_kernel_op_6;
       const walberla::float64 Dummy_1200 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_7 - 1.0);
       const walberla::float64 Dummy_1201 = Dummy_1195*tmp_kernel_op_12;
       const walberla::float64 Dummy_1202 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_13 - 1.0);
       const walberla::float64 Dummy_1203 = Dummy_1191*Dummy_1198;
       const walberla::float64 Dummy_1204 = Dummy_1193*Dummy_1200;
       const walberla::float64 Dummy_1205 = Dummy_1195*Dummy_1202;
       const walberla::float64 Dummy_1206 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_2 - 1.0);
       const walberla::float64 Dummy_1207 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_8 - 1.0);
       const walberla::float64 Dummy_1208 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_14 - 1.0);
       const walberla::float64 Dummy_1209 = Dummy_1191*Dummy_1206;
       const walberla::float64 Dummy_1210 = Dummy_1193*Dummy_1207;
       const walberla::float64 Dummy_1211 = Dummy_1195*Dummy_1208;
       const walberla::float64 Dummy_1212 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_2;
       const walberla::float64 Dummy_1213 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_1214 = Dummy_1191*(-Dummy_1212 - Dummy_1213);
       const walberla::float64 Dummy_1215 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_8;
       const walberla::float64 Dummy_1216 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_7;
       const walberla::float64 Dummy_1217 = Dummy_1193*(-Dummy_1215 - Dummy_1216);
       const walberla::float64 Dummy_1218 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_14;
       const walberla::float64 Dummy_1219 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_13;
       const walberla::float64 Dummy_1220 = Dummy_1195*(-Dummy_1218 - Dummy_1219);
       const walberla::float64 Dummy_1221 = Dummy_1191*(Dummy_1212 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_1 - 1.333333333333333));
       const walberla::float64 Dummy_1222 = Dummy_1193*(Dummy_1215 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_7 + 2.666666666666667));
       const walberla::float64 Dummy_1223 = Dummy_1195*(Dummy_1218 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_13 + 2.666666666666667));
       const walberla::float64 Dummy_1224 = Dummy_1191*(Dummy_1213 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_2 + 2.666666666666667));
       const walberla::float64 Dummy_1225 = Dummy_1193*(Dummy_1216 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_8 - 1.333333333333333));
       const walberla::float64 Dummy_1226 = Dummy_1195*(Dummy_1219 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_14 + 2.666666666666667));
       const walberla::float64 Dummy_1227 = Dummy_1192*tmp_kernel_op_0 + Dummy_1194*tmp_kernel_op_6 + Dummy_1196*tmp_kernel_op_12;
       const walberla::float64 Dummy_1228 = Dummy_1192*0.16666666666666666 + Dummy_1194*0.66666666666666663 + Dummy_1196*0.16666666666666666;
       const walberla::float64 Dummy_1229 = Dummy_1192*0.66666666666666663 + Dummy_1194*0.16666666666666666 + Dummy_1196*0.16666666666666666;
       const walberla::float64 Dummy_1230 = -Dummy_1197*Dummy_1198 - Dummy_1199*Dummy_1200 - Dummy_1201*Dummy_1202;
       const walberla::float64 Dummy_1231 = Dummy_1203*-0.16666666666666666 + Dummy_1204*-0.66666666666666663 + Dummy_1205*-0.16666666666666666;
       const walberla::float64 Dummy_1232 = Dummy_1203*-0.66666666666666663 + Dummy_1204*-0.16666666666666666 + Dummy_1205*-0.16666666666666666;
       const walberla::float64 Dummy_1233 = -Dummy_1197*Dummy_1206 - Dummy_1199*Dummy_1207 - Dummy_1201*Dummy_1208;
       const walberla::float64 Dummy_1234 = Dummy_1209*-0.16666666666666666 + Dummy_1210*-0.66666666666666663 + Dummy_1211*-0.16666666666666666;
       const walberla::float64 Dummy_1235 = Dummy_1209*-0.66666666666666663 + Dummy_1210*-0.16666666666666666 + Dummy_1211*-0.16666666666666666;
       const walberla::float64 Dummy_1236 = Dummy_1214*tmp_kernel_op_0 + Dummy_1217*tmp_kernel_op_6 + Dummy_1220*tmp_kernel_op_12;
       const walberla::float64 Dummy_1237 = Dummy_1214*0.16666666666666666 + Dummy_1217*0.66666666666666663 + Dummy_1220*0.16666666666666666;
       const walberla::float64 Dummy_1238 = Dummy_1214*0.66666666666666663 + Dummy_1217*0.16666666666666666 + Dummy_1220*0.16666666666666666;
       const walberla::float64 Dummy_1239 = Dummy_1221*tmp_kernel_op_0 + Dummy_1222*tmp_kernel_op_6 + Dummy_1223*tmp_kernel_op_12;
       const walberla::float64 Dummy_1240 = Dummy_1221*0.16666666666666666 + Dummy_1222*0.66666666666666663 + Dummy_1223*0.16666666666666666;
       const walberla::float64 Dummy_1241 = Dummy_1221*0.66666666666666663 + Dummy_1222*0.16666666666666666 + Dummy_1223*0.16666666666666666;
       const walberla::float64 Dummy_1242 = Dummy_1224*tmp_kernel_op_0 + Dummy_1225*tmp_kernel_op_6 + Dummy_1226*tmp_kernel_op_12;
       const walberla::float64 Dummy_1243 = Dummy_1224*0.16666666666666666 + Dummy_1225*0.66666666666666663 + Dummy_1226*0.16666666666666666;
       const walberla::float64 Dummy_1244 = Dummy_1224*0.66666666666666663 + Dummy_1225*0.16666666666666666 + Dummy_1226*0.16666666666666666;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 3 );
                   std::vector< walberla::float64 > _data_mat( 18 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(elMat_0_0));
                   _data_mat[1] = ((walberla::float64)(elMat_0_1));
                   _data_mat[2] = ((walberla::float64)(elMat_0_2));
                   _data_mat[3] = ((walberla::float64)(elMat_1_0));
                   _data_mat[4] = ((walberla::float64)(elMat_1_1));
                   _data_mat[5] = ((walberla::float64)(elMat_1_2));
                   _data_mat[6] = ((walberla::float64)(elMat_2_0));
                   _data_mat[7] = ((walberla::float64)(elMat_2_1));
                   _data_mat[8] = ((walberla::float64)(elMat_2_2));
                   _data_mat[9] = ((walberla::float64)(elMat_3_0));
                   _data_mat[10] = ((walberla::float64)(elMat_3_1));
                   _data_mat[11] = ((walberla::float64)(elMat_3_2));
                   _data_mat[12] = ((walberla::float64)(elMat_4_0));
                   _data_mat[13] = ((walberla::float64)(elMat_4_1));
                   _data_mat[14] = ((walberla::float64)(elMat_4_2));
                   _data_mat[15] = ((walberla::float64)(elMat_5_0));
                   _data_mat[16] = ((walberla::float64)(elMat_5_1));
                   _data_mat[17] = ((walberla::float64)(elMat_5_2));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 3 );
                   std::vector< walberla::float64 > _data_mat( 18 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_1227));
                   _data_mat[1] = ((walberla::float64)(Dummy_1228));
                   _data_mat[2] = ((walberla::float64)(Dummy_1229));
                   _data_mat[3] = ((walberla::float64)(Dummy_1230));
                   _data_mat[4] = ((walberla::float64)(Dummy_1231));
                   _data_mat[5] = ((walberla::float64)(Dummy_1232));
                   _data_mat[6] = ((walberla::float64)(Dummy_1233));
                   _data_mat[7] = ((walberla::float64)(Dummy_1234));
                   _data_mat[8] = ((walberla::float64)(Dummy_1235));
                   _data_mat[9] = ((walberla::float64)(Dummy_1236));
                   _data_mat[10] = ((walberla::float64)(Dummy_1237));
                   _data_mat[11] = ((walberla::float64)(Dummy_1238));
                   _data_mat[12] = ((walberla::float64)(Dummy_1239));
                   _data_mat[13] = ((walberla::float64)(Dummy_1240));
                   _data_mat[14] = ((walberla::float64)(Dummy_1241));
                   _data_mat[15] = ((walberla::float64)(Dummy_1242));
                   _data_mat[16] = ((walberla::float64)(Dummy_1243));
                   _data_mat[17] = ((walberla::float64)(Dummy_1244));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 3 );
                   std::vector< walberla::float64 > _data_mat( 18 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((walberla::float64)(elMat_0_0));
                   _data_mat[1] = ((walberla::float64)(elMat_0_1));
                   _data_mat[2] = ((walberla::float64)(elMat_0_2));
                   _data_mat[3] = ((walberla::float64)(elMat_1_0));
                   _data_mat[4] = ((walberla::float64)(elMat_1_1));
                   _data_mat[5] = ((walberla::float64)(elMat_1_2));
                   _data_mat[6] = ((walberla::float64)(elMat_2_0));
                   _data_mat[7] = ((walberla::float64)(elMat_2_1));
                   _data_mat[8] = ((walberla::float64)(elMat_2_2));
                   _data_mat[9] = ((walberla::float64)(elMat_3_0));
                   _data_mat[10] = ((walberla::float64)(elMat_3_1));
                   _data_mat[11] = ((walberla::float64)(elMat_3_2));
                   _data_mat[12] = ((walberla::float64)(elMat_4_0));
                   _data_mat[13] = ((walberla::float64)(elMat_4_1));
                   _data_mat[14] = ((walberla::float64)(elMat_4_2));
                   _data_mat[15] = ((walberla::float64)(elMat_5_0));
                   _data_mat[16] = ((walberla::float64)(elMat_5_1));
                   _data_mat[17] = ((walberla::float64)(elMat_5_2));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
