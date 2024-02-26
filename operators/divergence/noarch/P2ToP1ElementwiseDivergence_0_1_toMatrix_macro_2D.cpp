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

void P2ToP1ElementwiseDivergence_0_1::toMatrix_macro_2D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
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
       const walberla::float64 tmp_kernel_op_3 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_2;
       const walberla::float64 tmp_kernel_op_4 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_5 = tmp_kernel_op_4*0.16666666666666674;
       const walberla::float64 tmp_kernel_op_6 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_7 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_8 = tmp_kernel_op_6 + tmp_kernel_op_7 - 3.0;
       const walberla::float64 tmp_kernel_op_9 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_8 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_10 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_11 = tmp_kernel_op_10*0.16666666666666671;
       const walberla::float64 tmp_kernel_op_12 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_13 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_14 = tmp_kernel_op_12 + tmp_kernel_op_13 - 3.0;
       const walberla::float64 tmp_kernel_op_15 = -jac_affine_inv_0_1_GRAY*tmp_kernel_op_14 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_14;
       const walberla::float64 tmp_kernel_op_16 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_17 = tmp_kernel_op_16*0.66666666666666674;
       const walberla::float64 tmp_kernel_op_18 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_0 - 1.0);
       const walberla::float64 tmp_kernel_op_19 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 tmp_kernel_op_20 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_12 - 1.0);
       const walberla::float64 tmp_kernel_op_21 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 tmp_kernel_op_22 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_7 - 1.0);
       const walberla::float64 tmp_kernel_op_23 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_13 - 1.0);
       const walberla::float64 tmp_kernel_op_24 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const walberla::float64 tmp_kernel_op_25 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const walberla::float64 tmp_kernel_op_26 = -tmp_kernel_op_24 - tmp_kernel_op_25;
       const walberla::float64 tmp_kernel_op_27 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_7;
       const walberla::float64 tmp_kernel_op_28 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_6;
       const walberla::float64 tmp_kernel_op_29 = -tmp_kernel_op_27 - tmp_kernel_op_28;
       const walberla::float64 tmp_kernel_op_30 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_13;
       const walberla::float64 tmp_kernel_op_31 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_12;
       const walberla::float64 tmp_kernel_op_32 = -tmp_kernel_op_30 - tmp_kernel_op_31;
       const walberla::float64 tmp_kernel_op_33 = -jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_0 - 1.333333333333333) + tmp_kernel_op_24;
       const walberla::float64 tmp_kernel_op_34 = -jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_6 + 2.666666666666667) + tmp_kernel_op_27;
       const walberla::float64 tmp_kernel_op_35 = -jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_12 + 2.666666666666667) + tmp_kernel_op_30;
       const walberla::float64 tmp_kernel_op_36 = -jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_1 + 2.666666666666667) + tmp_kernel_op_25;
       const walberla::float64 tmp_kernel_op_37 = -jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_7 - 1.333333333333333) + tmp_kernel_op_28;
       const walberla::float64 tmp_kernel_op_38 = -jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_13 + 2.666666666666667) + tmp_kernel_op_31;
       const walberla::float64 tmp_kernel_op_39 = tmp_kernel_op_4*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_40 = tmp_kernel_op_10*0.66666666666666663;
       const walberla::float64 tmp_kernel_op_41 = tmp_kernel_op_16*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_42 = tmp_kernel_op_4*0.66666666666666663;
       const walberla::float64 tmp_kernel_op_43 = tmp_kernel_op_10*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_44 = tmp_kernel_op_16*0.16666666666666666;
       const walberla::float64 elMat_0_0 = tmp_kernel_op_11*tmp_kernel_op_9 + tmp_kernel_op_15*tmp_kernel_op_17 + tmp_kernel_op_3*tmp_kernel_op_5;
       const walberla::float64 elMat_0_1 = -tmp_kernel_op_11*tmp_kernel_op_19 - tmp_kernel_op_17*tmp_kernel_op_20 - tmp_kernel_op_18*tmp_kernel_op_5;
       const walberla::float64 elMat_0_2 = -tmp_kernel_op_11*tmp_kernel_op_22 - tmp_kernel_op_17*tmp_kernel_op_23 - tmp_kernel_op_21*tmp_kernel_op_5;
       const walberla::float64 elMat_0_3 = tmp_kernel_op_11*tmp_kernel_op_29 + tmp_kernel_op_17*tmp_kernel_op_32 + tmp_kernel_op_26*tmp_kernel_op_5;
       const walberla::float64 elMat_0_4 = tmp_kernel_op_11*tmp_kernel_op_34 + tmp_kernel_op_17*tmp_kernel_op_35 + tmp_kernel_op_33*tmp_kernel_op_5;
       const walberla::float64 elMat_0_5 = tmp_kernel_op_11*tmp_kernel_op_37 + tmp_kernel_op_17*tmp_kernel_op_38 + tmp_kernel_op_36*tmp_kernel_op_5;
       const walberla::float64 elMat_1_0 = tmp_kernel_op_15*tmp_kernel_op_41 + tmp_kernel_op_3*tmp_kernel_op_39 + tmp_kernel_op_40*tmp_kernel_op_9;
       const walberla::float64 elMat_1_1 = -tmp_kernel_op_18*tmp_kernel_op_39 - tmp_kernel_op_19*tmp_kernel_op_40 - tmp_kernel_op_20*tmp_kernel_op_41;
       const walberla::float64 elMat_1_2 = -tmp_kernel_op_21*tmp_kernel_op_39 - tmp_kernel_op_22*tmp_kernel_op_40 - tmp_kernel_op_23*tmp_kernel_op_41;
       const walberla::float64 elMat_1_3 = tmp_kernel_op_26*tmp_kernel_op_39 + tmp_kernel_op_29*tmp_kernel_op_40 + tmp_kernel_op_32*tmp_kernel_op_41;
       const walberla::float64 elMat_1_4 = tmp_kernel_op_33*tmp_kernel_op_39 + tmp_kernel_op_34*tmp_kernel_op_40 + tmp_kernel_op_35*tmp_kernel_op_41;
       const walberla::float64 elMat_1_5 = tmp_kernel_op_36*tmp_kernel_op_39 + tmp_kernel_op_37*tmp_kernel_op_40 + tmp_kernel_op_38*tmp_kernel_op_41;
       const walberla::float64 elMat_2_0 = tmp_kernel_op_15*tmp_kernel_op_44 + tmp_kernel_op_3*tmp_kernel_op_42 + tmp_kernel_op_43*tmp_kernel_op_9;
       const walberla::float64 elMat_2_1 = -tmp_kernel_op_18*tmp_kernel_op_42 - tmp_kernel_op_19*tmp_kernel_op_43 - tmp_kernel_op_20*tmp_kernel_op_44;
       const walberla::float64 elMat_2_2 = -tmp_kernel_op_21*tmp_kernel_op_42 - tmp_kernel_op_22*tmp_kernel_op_43 - tmp_kernel_op_23*tmp_kernel_op_44;
       const walberla::float64 elMat_2_3 = tmp_kernel_op_26*tmp_kernel_op_42 + tmp_kernel_op_29*tmp_kernel_op_43 + tmp_kernel_op_32*tmp_kernel_op_44;
       const walberla::float64 elMat_2_4 = tmp_kernel_op_33*tmp_kernel_op_42 + tmp_kernel_op_34*tmp_kernel_op_43 + tmp_kernel_op_35*tmp_kernel_op_44;
       const walberla::float64 elMat_2_5 = tmp_kernel_op_36*tmp_kernel_op_42 + tmp_kernel_op_37*tmp_kernel_op_43 + tmp_kernel_op_38*tmp_kernel_op_44;
       const walberla::float64 Dummy_3704 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_2;
       const walberla::float64 Dummy_3705 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_3706 = Dummy_3705*0.16666666666666674;
       const walberla::float64 Dummy_3707 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_8 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_8;
       const walberla::float64 Dummy_3708 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_3709 = Dummy_3708*0.16666666666666671;
       const walberla::float64 Dummy_3710 = -jac_affine_inv_0_1_BLUE*tmp_kernel_op_14 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_14;
       const walberla::float64 Dummy_3711 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_3712 = Dummy_3711*0.66666666666666674;
       const walberla::float64 Dummy_3713 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_0 - 1.0);
       const walberla::float64 Dummy_3714 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 Dummy_3715 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_12 - 1.0);
       const walberla::float64 Dummy_3716 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 Dummy_3717 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_7 - 1.0);
       const walberla::float64 Dummy_3718 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_13 - 1.0);
       const walberla::float64 Dummy_3719 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_3720 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_3721 = -Dummy_3719 - Dummy_3720;
       const walberla::float64 Dummy_3722 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_7;
       const walberla::float64 Dummy_3723 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_6;
       const walberla::float64 Dummy_3724 = -Dummy_3722 - Dummy_3723;
       const walberla::float64 Dummy_3725 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_13;
       const walberla::float64 Dummy_3726 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_12;
       const walberla::float64 Dummy_3727 = -Dummy_3725 - Dummy_3726;
       const walberla::float64 Dummy_3728 = Dummy_3719 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_0 - 1.333333333333333);
       const walberla::float64 Dummy_3729 = Dummy_3722 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_6 + 2.666666666666667);
       const walberla::float64 Dummy_3730 = Dummy_3725 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_12 + 2.666666666666667);
       const walberla::float64 Dummy_3731 = Dummy_3720 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_1 + 2.666666666666667);
       const walberla::float64 Dummy_3732 = Dummy_3723 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_7 - 1.333333333333333);
       const walberla::float64 Dummy_3733 = Dummy_3726 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_13 + 2.666666666666667);
       const walberla::float64 Dummy_3734 = Dummy_3705*0.16666666666666666;
       const walberla::float64 Dummy_3735 = Dummy_3708*0.66666666666666663;
       const walberla::float64 Dummy_3736 = Dummy_3711*0.16666666666666666;
       const walberla::float64 Dummy_3737 = Dummy_3705*0.66666666666666663;
       const walberla::float64 Dummy_3738 = Dummy_3708*0.16666666666666666;
       const walberla::float64 Dummy_3739 = Dummy_3711*0.16666666666666666;
       const walberla::float64 Dummy_3740 = Dummy_3704*Dummy_3706 + Dummy_3707*Dummy_3709 + Dummy_3710*Dummy_3712;
       const walberla::float64 Dummy_3741 = -Dummy_3706*Dummy_3713 - Dummy_3709*Dummy_3714 - Dummy_3712*Dummy_3715;
       const walberla::float64 Dummy_3742 = -Dummy_3706*Dummy_3716 - Dummy_3709*Dummy_3717 - Dummy_3712*Dummy_3718;
       const walberla::float64 Dummy_3743 = Dummy_3706*Dummy_3721 + Dummy_3709*Dummy_3724 + Dummy_3712*Dummy_3727;
       const walberla::float64 Dummy_3744 = Dummy_3706*Dummy_3728 + Dummy_3709*Dummy_3729 + Dummy_3712*Dummy_3730;
       const walberla::float64 Dummy_3745 = Dummy_3706*Dummy_3731 + Dummy_3709*Dummy_3732 + Dummy_3712*Dummy_3733;
       const walberla::float64 Dummy_3746 = Dummy_3704*Dummy_3734 + Dummy_3707*Dummy_3735 + Dummy_3710*Dummy_3736;
       const walberla::float64 Dummy_3747 = -Dummy_3713*Dummy_3734 - Dummy_3714*Dummy_3735 - Dummy_3715*Dummy_3736;
       const walberla::float64 Dummy_3748 = -Dummy_3716*Dummy_3734 - Dummy_3717*Dummy_3735 - Dummy_3718*Dummy_3736;
       const walberla::float64 Dummy_3749 = Dummy_3721*Dummy_3734 + Dummy_3724*Dummy_3735 + Dummy_3727*Dummy_3736;
       const walberla::float64 Dummy_3750 = Dummy_3728*Dummy_3734 + Dummy_3729*Dummy_3735 + Dummy_3730*Dummy_3736;
       const walberla::float64 Dummy_3751 = Dummy_3731*Dummy_3734 + Dummy_3732*Dummy_3735 + Dummy_3733*Dummy_3736;
       const walberla::float64 Dummy_3752 = Dummy_3704*Dummy_3737 + Dummy_3707*Dummy_3738 + Dummy_3710*Dummy_3739;
       const walberla::float64 Dummy_3753 = -Dummy_3713*Dummy_3737 - Dummy_3714*Dummy_3738 - Dummy_3715*Dummy_3739;
       const walberla::float64 Dummy_3754 = -Dummy_3716*Dummy_3737 - Dummy_3717*Dummy_3738 - Dummy_3718*Dummy_3739;
       const walberla::float64 Dummy_3755 = Dummy_3721*Dummy_3737 + Dummy_3724*Dummy_3738 + Dummy_3727*Dummy_3739;
       const walberla::float64 Dummy_3756 = Dummy_3728*Dummy_3737 + Dummy_3729*Dummy_3738 + Dummy_3730*Dummy_3739;
       const walberla::float64 Dummy_3757 = Dummy_3731*Dummy_3737 + Dummy_3732*Dummy_3738 + Dummy_3733*Dummy_3739;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< walberla::float64 > _data_mat( 18 );
               
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(elMat_0_0));
                   _data_mat[1] = ((walberla::float64)(elMat_0_1));
                   _data_mat[2] = ((walberla::float64)(elMat_0_2));
                   _data_mat[3] = ((walberla::float64)(elMat_0_3));
                   _data_mat[4] = ((walberla::float64)(elMat_0_4));
                   _data_mat[5] = ((walberla::float64)(elMat_0_5));
                   _data_mat[6] = ((walberla::float64)(elMat_1_0));
                   _data_mat[7] = ((walberla::float64)(elMat_1_1));
                   _data_mat[8] = ((walberla::float64)(elMat_1_2));
                   _data_mat[9] = ((walberla::float64)(elMat_1_3));
                   _data_mat[10] = ((walberla::float64)(elMat_1_4));
                   _data_mat[11] = ((walberla::float64)(elMat_1_5));
                   _data_mat[12] = ((walberla::float64)(elMat_2_0));
                   _data_mat[13] = ((walberla::float64)(elMat_2_1));
                   _data_mat[14] = ((walberla::float64)(elMat_2_2));
                   _data_mat[15] = ((walberla::float64)(elMat_2_3));
                   _data_mat[16] = ((walberla::float64)(elMat_2_4));
                   _data_mat[17] = ((walberla::float64)(elMat_2_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< walberla::float64 > _data_mat( 18 );
               
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(Dummy_3740));
                   _data_mat[1] = ((walberla::float64)(Dummy_3741));
                   _data_mat[2] = ((walberla::float64)(Dummy_3742));
                   _data_mat[3] = ((walberla::float64)(Dummy_3743));
                   _data_mat[4] = ((walberla::float64)(Dummy_3744));
                   _data_mat[5] = ((walberla::float64)(Dummy_3745));
                   _data_mat[6] = ((walberla::float64)(Dummy_3746));
                   _data_mat[7] = ((walberla::float64)(Dummy_3747));
                   _data_mat[8] = ((walberla::float64)(Dummy_3748));
                   _data_mat[9] = ((walberla::float64)(Dummy_3749));
                   _data_mat[10] = ((walberla::float64)(Dummy_3750));
                   _data_mat[11] = ((walberla::float64)(Dummy_3751));
                   _data_mat[12] = ((walberla::float64)(Dummy_3752));
                   _data_mat[13] = ((walberla::float64)(Dummy_3753));
                   _data_mat[14] = ((walberla::float64)(Dummy_3754));
                   _data_mat[15] = ((walberla::float64)(Dummy_3755));
                   _data_mat[16] = ((walberla::float64)(Dummy_3756));
                   _data_mat[17] = ((walberla::float64)(Dummy_3757));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< walberla::float64 > _data_mat( 18 );
               
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
               
               
               
                   _data_mat[0] = ((walberla::float64)(elMat_0_0));
                   _data_mat[1] = ((walberla::float64)(elMat_0_1));
                   _data_mat[2] = ((walberla::float64)(elMat_0_2));
                   _data_mat[3] = ((walberla::float64)(elMat_0_3));
                   _data_mat[4] = ((walberla::float64)(elMat_0_4));
                   _data_mat[5] = ((walberla::float64)(elMat_0_5));
                   _data_mat[6] = ((walberla::float64)(elMat_1_0));
                   _data_mat[7] = ((walberla::float64)(elMat_1_1));
                   _data_mat[8] = ((walberla::float64)(elMat_1_2));
                   _data_mat[9] = ((walberla::float64)(elMat_1_3));
                   _data_mat[10] = ((walberla::float64)(elMat_1_4));
                   _data_mat[11] = ((walberla::float64)(elMat_1_5));
                   _data_mat[12] = ((walberla::float64)(elMat_2_0));
                   _data_mat[13] = ((walberla::float64)(elMat_2_1));
                   _data_mat[14] = ((walberla::float64)(elMat_2_2));
                   _data_mat[15] = ((walberla::float64)(elMat_2_3));
                   _data_mat[16] = ((walberla::float64)(elMat_2_4));
                   _data_mat[17] = ((walberla::float64)(elMat_2_5));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
