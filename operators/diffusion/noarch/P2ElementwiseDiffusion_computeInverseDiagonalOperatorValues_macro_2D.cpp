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

























#include "../P2ElementwiseDiffusion.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDiffusion::computeInverseDiagonalOperatorValues_macro_2D( walberla::float64 * RESTRICT  _data_invDiag_Edge, walberla::float64 * RESTRICT  _data_invDiag_Vertex, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
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
       const walberla::float64 tmp_kernel_op_0 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_1 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_2 = tmp_kernel_op_0 + tmp_kernel_op_1 - 3.0;
       const walberla::float64 tmp_kernel_op_3 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_4 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_5 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_6 = tmp_kernel_op_4 + tmp_kernel_op_5 - 3.0;
       const walberla::float64 tmp_kernel_op_7 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_8 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_9 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_10 = tmp_kernel_op_8 + tmp_kernel_op_9 - 3.0;
       const walberla::float64 tmp_kernel_op_11 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_12 = (jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY);
       const walberla::float64 tmp_kernel_op_13 = ((tmp_kernel_op_0 - 1.0)*(tmp_kernel_op_0 - 1.0));
       const walberla::float64 tmp_kernel_op_14 = (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY);
       const walberla::float64 tmp_kernel_op_15 = ((tmp_kernel_op_4 - 1.0)*(tmp_kernel_op_4 - 1.0));
       const walberla::float64 tmp_kernel_op_16 = ((tmp_kernel_op_8 - 1.0)*(tmp_kernel_op_8 - 1.0));
       const walberla::float64 tmp_kernel_op_17 = (jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY);
       const walberla::float64 tmp_kernel_op_18 = ((tmp_kernel_op_1 - 1.0)*(tmp_kernel_op_1 - 1.0));
       const walberla::float64 tmp_kernel_op_19 = (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY);
       const walberla::float64 tmp_kernel_op_20 = ((tmp_kernel_op_5 - 1.0)*(tmp_kernel_op_5 - 1.0));
       const walberla::float64 tmp_kernel_op_21 = ((tmp_kernel_op_9 - 1.0)*(tmp_kernel_op_9 - 1.0));
       const walberla::float64 tmp_kernel_op_22 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_1;
       const walberla::float64 tmp_kernel_op_23 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_0;
       const walberla::float64 tmp_kernel_op_24 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const walberla::float64 tmp_kernel_op_25 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const walberla::float64 tmp_kernel_op_26 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_5;
       const walberla::float64 tmp_kernel_op_27 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_4;
       const walberla::float64 tmp_kernel_op_28 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_5;
       const walberla::float64 tmp_kernel_op_29 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_4;
       const walberla::float64 tmp_kernel_op_30 = jac_affine_inv_0_0_GRAY*tmp_kernel_op_9;
       const walberla::float64 tmp_kernel_op_31 = jac_affine_inv_1_0_GRAY*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_32 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_9;
       const walberla::float64 tmp_kernel_op_33 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_34 = -tmp_kernel_op_0 - 1.333333333333333;
       const walberla::float64 tmp_kernel_op_35 = -tmp_kernel_op_4 + 2.666666666666667;
       const walberla::float64 tmp_kernel_op_36 = -tmp_kernel_op_8 + 2.666666666666667;
       const walberla::float64 tmp_kernel_op_37 = -tmp_kernel_op_1 + 2.666666666666667;
       const walberla::float64 tmp_kernel_op_38 = -tmp_kernel_op_5 - 1.333333333333333;
       const walberla::float64 tmp_kernel_op_39 = -tmp_kernel_op_9 + 2.666666666666667;
       const walberla::float64 elMatDiag_0 = tmp_kernel_op_11*(((jac_affine_inv_0_0_GRAY*tmp_kernel_op_10 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_10)*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_10 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_10)) + ((jac_affine_inv_0_1_GRAY*tmp_kernel_op_10 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_10)*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_10 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_10))) + tmp_kernel_op_3*(((jac_affine_inv_0_0_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_2)*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_2)) + ((jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_2)*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_2))) + tmp_kernel_op_7*(((jac_affine_inv_0_0_GRAY*tmp_kernel_op_6 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_6)*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_6 + jac_affine_inv_1_0_GRAY*tmp_kernel_op_6)) + ((jac_affine_inv_0_1_GRAY*tmp_kernel_op_6 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_6)*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_6 + jac_affine_inv_1_1_GRAY*tmp_kernel_op_6)));
       const walberla::float64 elMatDiag_1 = tmp_kernel_op_11*(tmp_kernel_op_12*tmp_kernel_op_16 + tmp_kernel_op_14*tmp_kernel_op_16) + tmp_kernel_op_3*(tmp_kernel_op_12*tmp_kernel_op_13 + tmp_kernel_op_13*tmp_kernel_op_14) + tmp_kernel_op_7*(tmp_kernel_op_12*tmp_kernel_op_15 + tmp_kernel_op_14*tmp_kernel_op_15);
       const walberla::float64 elMatDiag_2 = tmp_kernel_op_11*(tmp_kernel_op_17*tmp_kernel_op_21 + tmp_kernel_op_19*tmp_kernel_op_21) + tmp_kernel_op_3*(tmp_kernel_op_17*tmp_kernel_op_18 + tmp_kernel_op_18*tmp_kernel_op_19) + tmp_kernel_op_7*(tmp_kernel_op_17*tmp_kernel_op_20 + tmp_kernel_op_19*tmp_kernel_op_20);
       const walberla::float64 elMatDiag_3 = tmp_kernel_op_11*(((tmp_kernel_op_30 + tmp_kernel_op_31)*(tmp_kernel_op_30 + tmp_kernel_op_31)) + ((tmp_kernel_op_32 + tmp_kernel_op_33)*(tmp_kernel_op_32 + tmp_kernel_op_33))) + tmp_kernel_op_3*(((tmp_kernel_op_22 + tmp_kernel_op_23)*(tmp_kernel_op_22 + tmp_kernel_op_23)) + ((tmp_kernel_op_24 + tmp_kernel_op_25)*(tmp_kernel_op_24 + tmp_kernel_op_25))) + tmp_kernel_op_7*(((tmp_kernel_op_26 + tmp_kernel_op_27)*(tmp_kernel_op_26 + tmp_kernel_op_27)) + ((tmp_kernel_op_28 + tmp_kernel_op_29)*(tmp_kernel_op_28 + tmp_kernel_op_29)));
       const walberla::float64 elMatDiag_4 = tmp_kernel_op_11*(((jac_affine_inv_1_0_GRAY*tmp_kernel_op_36 - tmp_kernel_op_30)*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_36 - tmp_kernel_op_30)) + ((jac_affine_inv_1_1_GRAY*tmp_kernel_op_36 - tmp_kernel_op_32)*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_36 - tmp_kernel_op_32))) + tmp_kernel_op_3*(((jac_affine_inv_1_0_GRAY*tmp_kernel_op_34 - tmp_kernel_op_22)*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_34 - tmp_kernel_op_22)) + ((jac_affine_inv_1_1_GRAY*tmp_kernel_op_34 - tmp_kernel_op_24)*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_34 - tmp_kernel_op_24))) + tmp_kernel_op_7*(((jac_affine_inv_1_0_GRAY*tmp_kernel_op_35 - tmp_kernel_op_26)*(jac_affine_inv_1_0_GRAY*tmp_kernel_op_35 - tmp_kernel_op_26)) + ((jac_affine_inv_1_1_GRAY*tmp_kernel_op_35 - tmp_kernel_op_28)*(jac_affine_inv_1_1_GRAY*tmp_kernel_op_35 - tmp_kernel_op_28)));
       const walberla::float64 elMatDiag_5 = tmp_kernel_op_11*(((jac_affine_inv_0_0_GRAY*tmp_kernel_op_39 - tmp_kernel_op_31)*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_39 - tmp_kernel_op_31)) + ((jac_affine_inv_0_1_GRAY*tmp_kernel_op_39 - tmp_kernel_op_33)*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_39 - tmp_kernel_op_33))) + tmp_kernel_op_3*(((jac_affine_inv_0_0_GRAY*tmp_kernel_op_37 - tmp_kernel_op_23)*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_37 - tmp_kernel_op_23)) + ((jac_affine_inv_0_1_GRAY*tmp_kernel_op_37 - tmp_kernel_op_25)*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_37 - tmp_kernel_op_25))) + tmp_kernel_op_7*(((jac_affine_inv_0_0_GRAY*tmp_kernel_op_38 - tmp_kernel_op_27)*(jac_affine_inv_0_0_GRAY*tmp_kernel_op_38 - tmp_kernel_op_27)) + ((jac_affine_inv_0_1_GRAY*tmp_kernel_op_38 - tmp_kernel_op_29)*(jac_affine_inv_0_1_GRAY*tmp_kernel_op_38 - tmp_kernel_op_29)));
       const walberla::float64 Dummy_7536 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_7537 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_7538 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_7539 = (jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE);
       const walberla::float64 Dummy_7540 = (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE);
       const walberla::float64 Dummy_7541 = (jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE);
       const walberla::float64 Dummy_7542 = (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE);
       const walberla::float64 Dummy_7543 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_7544 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_7545 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_7546 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_7547 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_5;
       const walberla::float64 Dummy_7548 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_4;
       const walberla::float64 Dummy_7549 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_5;
       const walberla::float64 Dummy_7550 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_4;
       const walberla::float64 Dummy_7551 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_9;
       const walberla::float64 Dummy_7552 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_8;
       const walberla::float64 Dummy_7553 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_9;
       const walberla::float64 Dummy_7554 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_8;
       const walberla::float64 Dummy_7555 = Dummy_7536*(((jac_affine_inv_0_0_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_2)*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_2)) + ((jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_2)*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_2))) + Dummy_7537*(((jac_affine_inv_0_0_BLUE*tmp_kernel_op_6 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_6)*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_6 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_6)) + ((jac_affine_inv_0_1_BLUE*tmp_kernel_op_6 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_6)*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_6 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_6))) + Dummy_7538*(((jac_affine_inv_0_0_BLUE*tmp_kernel_op_10 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_10)*(jac_affine_inv_0_0_BLUE*tmp_kernel_op_10 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_10)) + ((jac_affine_inv_0_1_BLUE*tmp_kernel_op_10 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_10)*(jac_affine_inv_0_1_BLUE*tmp_kernel_op_10 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_10)));
       const walberla::float64 Dummy_7556 = Dummy_7536*(Dummy_7539*tmp_kernel_op_13 + Dummy_7540*tmp_kernel_op_13) + Dummy_7537*(Dummy_7539*tmp_kernel_op_15 + Dummy_7540*tmp_kernel_op_15) + Dummy_7538*(Dummy_7539*tmp_kernel_op_16 + Dummy_7540*tmp_kernel_op_16);
       const walberla::float64 Dummy_7557 = Dummy_7536*(Dummy_7541*tmp_kernel_op_18 + Dummy_7542*tmp_kernel_op_18) + Dummy_7537*(Dummy_7541*tmp_kernel_op_20 + Dummy_7542*tmp_kernel_op_20) + Dummy_7538*(Dummy_7541*tmp_kernel_op_21 + Dummy_7542*tmp_kernel_op_21);
       const walberla::float64 Dummy_7558 = Dummy_7536*(((Dummy_7543 + Dummy_7544)*(Dummy_7543 + Dummy_7544)) + ((Dummy_7545 + Dummy_7546)*(Dummy_7545 + Dummy_7546))) + Dummy_7537*(((Dummy_7547 + Dummy_7548)*(Dummy_7547 + Dummy_7548)) + ((Dummy_7549 + Dummy_7550)*(Dummy_7549 + Dummy_7550))) + Dummy_7538*(((Dummy_7551 + Dummy_7552)*(Dummy_7551 + Dummy_7552)) + ((Dummy_7553 + Dummy_7554)*(Dummy_7553 + Dummy_7554)));
       const walberla::float64 Dummy_7559 = Dummy_7536*(((-Dummy_7543 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_34)*(-Dummy_7543 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_34)) + ((-Dummy_7545 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_34)*(-Dummy_7545 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_34))) + Dummy_7537*(((-Dummy_7547 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_35)*(-Dummy_7547 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_35)) + ((-Dummy_7549 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_35)*(-Dummy_7549 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_35))) + Dummy_7538*(((-Dummy_7551 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_36)*(-Dummy_7551 + jac_affine_inv_1_0_BLUE*tmp_kernel_op_36)) + ((-Dummy_7553 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_36)*(-Dummy_7553 + jac_affine_inv_1_1_BLUE*tmp_kernel_op_36)));
       const walberla::float64 Dummy_7560 = Dummy_7536*(((-Dummy_7544 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_37)*(-Dummy_7544 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_37)) + ((-Dummy_7546 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_37)*(-Dummy_7546 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_37))) + Dummy_7537*(((-Dummy_7548 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_38)*(-Dummy_7548 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_38)) + ((-Dummy_7550 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_38)*(-Dummy_7550 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_38))) + Dummy_7538*(((-Dummy_7552 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_39)*(-Dummy_7552 + jac_affine_inv_0_0_BLUE*tmp_kernel_op_39)) + ((-Dummy_7554 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_39)*(-Dummy_7554 + jac_affine_inv_0_1_BLUE*tmp_kernel_op_39)));
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             {
                {
                   _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                }
             }
             {
                {
                   _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_7555 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_7556 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_7557 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_7558 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = Dummy_7559 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = Dummy_7560 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                }
             }
          }
          {
             {
                {
                   _data_invDiag_Vertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                   _data_invDiag_Vertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_invDiag_Vertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1] = elMatDiag_2 + _data_invDiag_Vertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
                   _data_invDiag_Edge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1] = elMatDiag_3 + _data_invDiag_Edge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
                   _data_invDiag_Edge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1] = elMatDiag_4 + _data_invDiag_Edge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
                   _data_invDiag_Edge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatDiag_5 + _data_invDiag_Edge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
