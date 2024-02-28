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
       const walberla::float64 jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
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
       const walberla::float64 jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_coords_jac_2_GRAY;
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
       const walberla::float64 Dummy_8563 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_8564 = Dummy_8563*(-jac_affine_inv_0_0_BLUE*tmp_kernel_op_3 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_3);
       const walberla::float64 Dummy_8565 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_8566 = Dummy_8565*(-jac_affine_inv_0_0_BLUE*tmp_kernel_op_9 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_9);
       const walberla::float64 Dummy_8567 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_8568 = Dummy_8567*(-jac_affine_inv_0_0_BLUE*tmp_kernel_op_15 - jac_affine_inv_1_0_BLUE*tmp_kernel_op_15);
       const walberla::float64 Dummy_8569 = Dummy_8563*tmp_kernel_op_0;
       const walberla::float64 Dummy_8570 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 Dummy_8571 = Dummy_8565*tmp_kernel_op_6;
       const walberla::float64 Dummy_8572 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_7 - 1.0);
       const walberla::float64 Dummy_8573 = Dummy_8567*tmp_kernel_op_12;
       const walberla::float64 Dummy_8574 = jac_affine_inv_0_0_BLUE*(tmp_kernel_op_13 - 1.0);
       const walberla::float64 Dummy_8575 = Dummy_8563*Dummy_8570;
       const walberla::float64 Dummy_8576 = Dummy_8565*Dummy_8572;
       const walberla::float64 Dummy_8577 = Dummy_8567*Dummy_8574;
       const walberla::float64 Dummy_8578 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_2 - 1.0);
       const walberla::float64 Dummy_8579 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_8 - 1.0);
       const walberla::float64 Dummy_8580 = jac_affine_inv_1_0_BLUE*(tmp_kernel_op_14 - 1.0);
       const walberla::float64 Dummy_8581 = Dummy_8563*Dummy_8578;
       const walberla::float64 Dummy_8582 = Dummy_8565*Dummy_8579;
       const walberla::float64 Dummy_8583 = Dummy_8567*Dummy_8580;
       const walberla::float64 Dummy_8584 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_2;
       const walberla::float64 Dummy_8585 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_8586 = Dummy_8563*(-Dummy_8584 - Dummy_8585);
       const walberla::float64 Dummy_8587 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_8;
       const walberla::float64 Dummy_8588 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_7;
       const walberla::float64 Dummy_8589 = Dummy_8565*(-Dummy_8587 - Dummy_8588);
       const walberla::float64 Dummy_8590 = jac_affine_inv_0_0_BLUE*tmp_kernel_op_14;
       const walberla::float64 Dummy_8591 = jac_affine_inv_1_0_BLUE*tmp_kernel_op_13;
       const walberla::float64 Dummy_8592 = Dummy_8567*(-Dummy_8590 - Dummy_8591);
       const walberla::float64 Dummy_8593 = Dummy_8563*(Dummy_8584 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_1 - 1.333333333333333));
       const walberla::float64 Dummy_8594 = Dummy_8565*(Dummy_8587 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_7 + 2.666666666666667));
       const walberla::float64 Dummy_8595 = Dummy_8567*(Dummy_8590 - jac_affine_inv_1_0_BLUE*(-tmp_kernel_op_13 + 2.666666666666667));
       const walberla::float64 Dummy_8596 = Dummy_8563*(Dummy_8585 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_2 + 2.666666666666667));
       const walberla::float64 Dummy_8597 = Dummy_8565*(Dummy_8588 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_8 - 1.333333333333333));
       const walberla::float64 Dummy_8598 = Dummy_8567*(Dummy_8591 - jac_affine_inv_0_0_BLUE*(-tmp_kernel_op_14 + 2.666666666666667));
       const walberla::float64 Dummy_8599 = Dummy_8564*tmp_kernel_op_0 + Dummy_8566*tmp_kernel_op_6 + Dummy_8568*tmp_kernel_op_12;
       const walberla::float64 Dummy_8600 = Dummy_8564*0.16666666666666666 + Dummy_8566*0.66666666666666663 + Dummy_8568*0.16666666666666666;
       const walberla::float64 Dummy_8601 = Dummy_8564*0.66666666666666663 + Dummy_8566*0.16666666666666666 + Dummy_8568*0.16666666666666666;
       const walberla::float64 Dummy_8602 = -Dummy_8569*Dummy_8570 - Dummy_8571*Dummy_8572 - Dummy_8573*Dummy_8574;
       const walberla::float64 Dummy_8603 = Dummy_8575*-0.16666666666666666 + Dummy_8576*-0.66666666666666663 + Dummy_8577*-0.16666666666666666;
       const walberla::float64 Dummy_8604 = Dummy_8575*-0.66666666666666663 + Dummy_8576*-0.16666666666666666 + Dummy_8577*-0.16666666666666666;
       const walberla::float64 Dummy_8605 = -Dummy_8569*Dummy_8578 - Dummy_8571*Dummy_8579 - Dummy_8573*Dummy_8580;
       const walberla::float64 Dummy_8606 = Dummy_8581*-0.16666666666666666 + Dummy_8582*-0.66666666666666663 + Dummy_8583*-0.16666666666666666;
       const walberla::float64 Dummy_8607 = Dummy_8581*-0.66666666666666663 + Dummy_8582*-0.16666666666666666 + Dummy_8583*-0.16666666666666666;
       const walberla::float64 Dummy_8608 = Dummy_8586*tmp_kernel_op_0 + Dummy_8589*tmp_kernel_op_6 + Dummy_8592*tmp_kernel_op_12;
       const walberla::float64 Dummy_8609 = Dummy_8586*0.16666666666666666 + Dummy_8589*0.66666666666666663 + Dummy_8592*0.16666666666666666;
       const walberla::float64 Dummy_8610 = Dummy_8586*0.66666666666666663 + Dummy_8589*0.16666666666666666 + Dummy_8592*0.16666666666666666;
       const walberla::float64 Dummy_8611 = Dummy_8593*tmp_kernel_op_0 + Dummy_8594*tmp_kernel_op_6 + Dummy_8595*tmp_kernel_op_12;
       const walberla::float64 Dummy_8612 = Dummy_8593*0.16666666666666666 + Dummy_8594*0.66666666666666663 + Dummy_8595*0.16666666666666666;
       const walberla::float64 Dummy_8613 = Dummy_8593*0.66666666666666663 + Dummy_8594*0.16666666666666666 + Dummy_8595*0.16666666666666666;
       const walberla::float64 Dummy_8614 = Dummy_8596*tmp_kernel_op_0 + Dummy_8597*tmp_kernel_op_6 + Dummy_8598*tmp_kernel_op_12;
       const walberla::float64 Dummy_8615 = Dummy_8596*0.16666666666666666 + Dummy_8597*0.66666666666666663 + Dummy_8598*0.16666666666666666;
       const walberla::float64 Dummy_8616 = Dummy_8596*0.66666666666666663 + Dummy_8597*0.16666666666666666 + Dummy_8598*0.16666666666666666;
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_8599));
                   _data_mat[1] = ((walberla::float64)(Dummy_8600));
                   _data_mat[2] = ((walberla::float64)(Dummy_8601));
                   _data_mat[3] = ((walberla::float64)(Dummy_8602));
                   _data_mat[4] = ((walberla::float64)(Dummy_8603));
                   _data_mat[5] = ((walberla::float64)(Dummy_8604));
                   _data_mat[6] = ((walberla::float64)(Dummy_8605));
                   _data_mat[7] = ((walberla::float64)(Dummy_8606));
                   _data_mat[8] = ((walberla::float64)(Dummy_8607));
                   _data_mat[9] = ((walberla::float64)(Dummy_8608));
                   _data_mat[10] = ((walberla::float64)(Dummy_8609));
                   _data_mat[11] = ((walberla::float64)(Dummy_8610));
                   _data_mat[12] = ((walberla::float64)(Dummy_8611));
                   _data_mat[13] = ((walberla::float64)(Dummy_8612));
                   _data_mat[14] = ((walberla::float64)(Dummy_8613));
                   _data_mat[15] = ((walberla::float64)(Dummy_8614));
                   _data_mat[16] = ((walberla::float64)(Dummy_8615));
                   _data_mat[17] = ((walberla::float64)(Dummy_8616));
               
               
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
