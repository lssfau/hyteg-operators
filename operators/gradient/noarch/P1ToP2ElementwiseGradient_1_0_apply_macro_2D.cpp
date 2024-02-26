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

























#include "../P1ToP2ElementwiseGradient_1_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ToP2ElementwiseGradient_1_0::apply_macro_2D( walberla::float64 * RESTRICT  _data_dstEdge, walberla::float64 * RESTRICT  _data_dstVertex, walberla::float64 * RESTRICT  _data_src, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
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
       const walberla::float64 tmp_kernel_op_4 = tmp_kernel_op_3*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_2 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_2);
       const walberla::float64 tmp_kernel_op_5 = 2.6666666666666665;
       const walberla::float64 tmp_kernel_op_6 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_7 = tmp_kernel_op_5 + tmp_kernel_op_6 - 3.0;
       const walberla::float64 tmp_kernel_op_8 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_9 = tmp_kernel_op_8*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_7 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_7);
       const walberla::float64 tmp_kernel_op_10 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_11 = 0.66666666666666663;
       const walberla::float64 tmp_kernel_op_12 = tmp_kernel_op_10 + tmp_kernel_op_11 - 3.0;
       const walberla::float64 tmp_kernel_op_13 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const walberla::float64 tmp_kernel_op_14 = tmp_kernel_op_13*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_12 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_12);
       const walberla::float64 tmp_kernel_op_15 = 0.16666666666666674;
       const walberla::float64 tmp_kernel_op_16 = 0.16666666666666671;
       const walberla::float64 tmp_kernel_op_17 = 0.66666666666666674;
       const walberla::float64 tmp_kernel_op_18 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_0 - 1.0);
       const walberla::float64 tmp_kernel_op_19 = tmp_kernel_op_18*tmp_kernel_op_3;
       const walberla::float64 tmp_kernel_op_20 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_5 - 1.0);
       const walberla::float64 tmp_kernel_op_21 = tmp_kernel_op_20*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_22 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_10 - 1.0);
       const walberla::float64 tmp_kernel_op_23 = tmp_kernel_op_13*tmp_kernel_op_22;
       const walberla::float64 tmp_kernel_op_24 = tmp_kernel_op_15*tmp_kernel_op_3;
       const walberla::float64 tmp_kernel_op_25 = tmp_kernel_op_16*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_26 = tmp_kernel_op_13*tmp_kernel_op_17;
       const walberla::float64 tmp_kernel_op_27 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 tmp_kernel_op_28 = tmp_kernel_op_27*tmp_kernel_op_3;
       const walberla::float64 tmp_kernel_op_29 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 tmp_kernel_op_30 = tmp_kernel_op_29*tmp_kernel_op_8;
       const walberla::float64 tmp_kernel_op_31 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_11 - 1.0);
       const walberla::float64 tmp_kernel_op_32 = tmp_kernel_op_13*tmp_kernel_op_31;
       const walberla::float64 tmp_kernel_op_33 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_1;
       const walberla::float64 tmp_kernel_op_34 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_0;
       const walberla::float64 tmp_kernel_op_35 = tmp_kernel_op_3*(-tmp_kernel_op_33 - tmp_kernel_op_34);
       const walberla::float64 tmp_kernel_op_36 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_6;
       const walberla::float64 tmp_kernel_op_37 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_5;
       const walberla::float64 tmp_kernel_op_38 = tmp_kernel_op_8*(-tmp_kernel_op_36 - tmp_kernel_op_37);
       const walberla::float64 tmp_kernel_op_39 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_11;
       const walberla::float64 tmp_kernel_op_40 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_10;
       const walberla::float64 tmp_kernel_op_41 = tmp_kernel_op_13*(-tmp_kernel_op_39 - tmp_kernel_op_40);
       const walberla::float64 tmp_kernel_op_42 = tmp_kernel_op_3*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_0 - 1.333333333333333) + tmp_kernel_op_33);
       const walberla::float64 tmp_kernel_op_43 = tmp_kernel_op_8*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_5 + 2.666666666666667) + tmp_kernel_op_36);
       const walberla::float64 tmp_kernel_op_44 = tmp_kernel_op_13*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_10 + 2.666666666666667) + tmp_kernel_op_39);
       const walberla::float64 tmp_kernel_op_45 = tmp_kernel_op_3*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_1 + 2.666666666666667) + tmp_kernel_op_34);
       const walberla::float64 tmp_kernel_op_46 = tmp_kernel_op_8*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_6 - 1.333333333333333) + tmp_kernel_op_37);
       const walberla::float64 tmp_kernel_op_47 = tmp_kernel_op_13*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_11 + 2.666666666666667) + tmp_kernel_op_40);
       const walberla::float64 Dummy_2572 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_2573 = Dummy_2572*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_2 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_2);
       const walberla::float64 Dummy_2574 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_2575 = Dummy_2574*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_7 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_7);
       const walberla::float64 Dummy_2576 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const walberla::float64 Dummy_2577 = Dummy_2576*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_12 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_12);
       const walberla::float64 Dummy_2578 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_0 - 1.0);
       const walberla::float64 Dummy_2579 = Dummy_2572*Dummy_2578;
       const walberla::float64 Dummy_2580 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_5 - 1.0);
       const walberla::float64 Dummy_2581 = Dummy_2574*Dummy_2580;
       const walberla::float64 Dummy_2582 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_10 - 1.0);
       const walberla::float64 Dummy_2583 = Dummy_2576*Dummy_2582;
       const walberla::float64 Dummy_2584 = Dummy_2572*tmp_kernel_op_15;
       const walberla::float64 Dummy_2585 = Dummy_2574*tmp_kernel_op_16;
       const walberla::float64 Dummy_2586 = Dummy_2576*tmp_kernel_op_17;
       const walberla::float64 Dummy_2587 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_1 - 1.0);
       const walberla::float64 Dummy_2588 = Dummy_2572*Dummy_2587;
       const walberla::float64 Dummy_2589 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_6 - 1.0);
       const walberla::float64 Dummy_2590 = Dummy_2574*Dummy_2589;
       const walberla::float64 Dummy_2591 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_11 - 1.0);
       const walberla::float64 Dummy_2592 = Dummy_2576*Dummy_2591;
       const walberla::float64 Dummy_2593 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_1;
       const walberla::float64 Dummy_2594 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_0;
       const walberla::float64 Dummy_2595 = Dummy_2572*(-Dummy_2593 - Dummy_2594);
       const walberla::float64 Dummy_2596 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_6;
       const walberla::float64 Dummy_2597 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_5;
       const walberla::float64 Dummy_2598 = Dummy_2574*(-Dummy_2596 - Dummy_2597);
       const walberla::float64 Dummy_2599 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_11;
       const walberla::float64 Dummy_2600 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_10;
       const walberla::float64 Dummy_2601 = Dummy_2576*(-Dummy_2599 - Dummy_2600);
       const walberla::float64 Dummy_2602 = Dummy_2572*(Dummy_2593 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_0 - 1.333333333333333));
       const walberla::float64 Dummy_2603 = Dummy_2574*(Dummy_2596 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_5 + 2.666666666666667));
       const walberla::float64 Dummy_2604 = Dummy_2576*(Dummy_2599 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_10 + 2.666666666666667));
       const walberla::float64 Dummy_2605 = Dummy_2572*(Dummy_2594 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_1 + 2.666666666666667));
       const walberla::float64 Dummy_2606 = Dummy_2574*(Dummy_2597 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_6 - 1.333333333333333));
       const walberla::float64 Dummy_2607 = Dummy_2576*(Dummy_2600 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_11 + 2.666666666666667));
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const walberla::float64 src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const walberla::float64 src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 elMatVec_0 = src_dof_0*(tmp_kernel_op_14*tmp_kernel_op_17 + tmp_kernel_op_15*tmp_kernel_op_4 + tmp_kernel_op_16*tmp_kernel_op_9) + src_dof_1*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.16666666666666666 + tmp_kernel_op_9*0.66666666666666663) + src_dof_2*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.66666666666666663 + tmp_kernel_op_9*0.16666666666666666);
             const walberla::float64 elMatVec_1 = src_dof_0*(-tmp_kernel_op_18*tmp_kernel_op_24 - tmp_kernel_op_20*tmp_kernel_op_25 - tmp_kernel_op_22*tmp_kernel_op_26) + src_dof_1*(tmp_kernel_op_19*-0.16666666666666666 + tmp_kernel_op_21*-0.66666666666666663 + tmp_kernel_op_23*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_19*-0.66666666666666663 + tmp_kernel_op_21*-0.16666666666666666 + tmp_kernel_op_23*-0.16666666666666666);
             const walberla::float64 elMatVec_2 = src_dof_0*(-tmp_kernel_op_24*tmp_kernel_op_27 - tmp_kernel_op_25*tmp_kernel_op_29 - tmp_kernel_op_26*tmp_kernel_op_31) + src_dof_1*(tmp_kernel_op_28*-0.16666666666666666 + tmp_kernel_op_30*-0.66666666666666663 + tmp_kernel_op_32*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_28*-0.66666666666666663 + tmp_kernel_op_30*-0.16666666666666666 + tmp_kernel_op_32*-0.16666666666666666);
             const walberla::float64 elMatVec_3 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_35 + tmp_kernel_op_16*tmp_kernel_op_38 + tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_1*(tmp_kernel_op_35*0.16666666666666666 + tmp_kernel_op_38*0.66666666666666663 + tmp_kernel_op_41*0.16666666666666666) + src_dof_2*(tmp_kernel_op_35*0.66666666666666663 + tmp_kernel_op_38*0.16666666666666666 + tmp_kernel_op_41*0.16666666666666666);
             const walberla::float64 elMatVec_4 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_42 + tmp_kernel_op_16*tmp_kernel_op_43 + tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_1*(tmp_kernel_op_42*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666) + src_dof_2*(tmp_kernel_op_42*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666);
             const walberla::float64 elMatVec_5 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_45 + tmp_kernel_op_16*tmp_kernel_op_46 + tmp_kernel_op_17*tmp_kernel_op_47) + src_dof_1*(tmp_kernel_op_45*0.16666666666666666 + tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666) + src_dof_2*(tmp_kernel_op_45*0.66666666666666663 + tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666);
             {
                {
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                }
             }
             const walberla::float64 Dummy_2569 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const walberla::float64 Dummy_2570 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 Dummy_2571 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const walberla::float64 Dummy_2608 = Dummy_2569*(Dummy_2573*tmp_kernel_op_15 + Dummy_2575*tmp_kernel_op_16 + Dummy_2577*tmp_kernel_op_17) + Dummy_2570*(Dummy_2573*0.16666666666666666 + Dummy_2575*0.66666666666666663 + Dummy_2577*0.16666666666666666) + Dummy_2571*(Dummy_2573*0.66666666666666663 + Dummy_2575*0.16666666666666666 + Dummy_2577*0.16666666666666666);
             const walberla::float64 Dummy_2609 = Dummy_2569*(-Dummy_2578*Dummy_2584 - Dummy_2580*Dummy_2585 - Dummy_2582*Dummy_2586) + Dummy_2570*(Dummy_2579*-0.16666666666666666 + Dummy_2581*-0.66666666666666663 + Dummy_2583*-0.16666666666666666) + Dummy_2571*(Dummy_2579*-0.66666666666666663 + Dummy_2581*-0.16666666666666666 + Dummy_2583*-0.16666666666666666);
             const walberla::float64 Dummy_2610 = Dummy_2569*(-Dummy_2584*Dummy_2587 - Dummy_2585*Dummy_2589 - Dummy_2586*Dummy_2591) + Dummy_2570*(Dummy_2588*-0.16666666666666666 + Dummy_2590*-0.66666666666666663 + Dummy_2592*-0.16666666666666666) + Dummy_2571*(Dummy_2588*-0.66666666666666663 + Dummy_2590*-0.16666666666666666 + Dummy_2592*-0.16666666666666666);
             const walberla::float64 Dummy_2611 = Dummy_2569*(Dummy_2595*tmp_kernel_op_15 + Dummy_2598*tmp_kernel_op_16 + Dummy_2601*tmp_kernel_op_17) + Dummy_2570*(Dummy_2595*0.16666666666666666 + Dummy_2598*0.66666666666666663 + Dummy_2601*0.16666666666666666) + Dummy_2571*(Dummy_2595*0.66666666666666663 + Dummy_2598*0.16666666666666666 + Dummy_2601*0.16666666666666666);
             const walberla::float64 Dummy_2612 = Dummy_2569*(Dummy_2602*tmp_kernel_op_15 + Dummy_2603*tmp_kernel_op_16 + Dummy_2604*tmp_kernel_op_17) + Dummy_2570*(Dummy_2602*0.16666666666666666 + Dummy_2603*0.66666666666666663 + Dummy_2604*0.16666666666666666) + Dummy_2571*(Dummy_2602*0.66666666666666663 + Dummy_2603*0.16666666666666666 + Dummy_2604*0.16666666666666666);
             const walberla::float64 Dummy_2613 = Dummy_2569*(Dummy_2605*tmp_kernel_op_15 + Dummy_2606*tmp_kernel_op_16 + Dummy_2607*tmp_kernel_op_17) + Dummy_2570*(Dummy_2605*0.16666666666666666 + Dummy_2606*0.66666666666666663 + Dummy_2607*0.16666666666666666) + Dummy_2571*(Dummy_2605*0.66666666666666663 + Dummy_2606*0.16666666666666666 + Dummy_2607*0.16666666666666666);
             {
                {
                   _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_2608 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_2609 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_2610 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_2611 + _data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = Dummy_2612 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                   _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = Dummy_2613 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                }
             }
          }
          const walberla::float64 src_dof_0 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const walberla::float64 src_dof_1 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
          const walberla::float64 src_dof_2 = _data_src[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
          const walberla::float64 elMatVec_0 = src_dof_0*(tmp_kernel_op_14*tmp_kernel_op_17 + tmp_kernel_op_15*tmp_kernel_op_4 + tmp_kernel_op_16*tmp_kernel_op_9) + src_dof_1*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.16666666666666666 + tmp_kernel_op_9*0.66666666666666663) + src_dof_2*(tmp_kernel_op_14*0.16666666666666666 + tmp_kernel_op_4*0.66666666666666663 + tmp_kernel_op_9*0.16666666666666666);
          const walberla::float64 elMatVec_1 = src_dof_0*(-tmp_kernel_op_18*tmp_kernel_op_24 - tmp_kernel_op_20*tmp_kernel_op_25 - tmp_kernel_op_22*tmp_kernel_op_26) + src_dof_1*(tmp_kernel_op_19*-0.16666666666666666 + tmp_kernel_op_21*-0.66666666666666663 + tmp_kernel_op_23*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_19*-0.66666666666666663 + tmp_kernel_op_21*-0.16666666666666666 + tmp_kernel_op_23*-0.16666666666666666);
          const walberla::float64 elMatVec_2 = src_dof_0*(-tmp_kernel_op_24*tmp_kernel_op_27 - tmp_kernel_op_25*tmp_kernel_op_29 - tmp_kernel_op_26*tmp_kernel_op_31) + src_dof_1*(tmp_kernel_op_28*-0.16666666666666666 + tmp_kernel_op_30*-0.66666666666666663 + tmp_kernel_op_32*-0.16666666666666666) + src_dof_2*(tmp_kernel_op_28*-0.66666666666666663 + tmp_kernel_op_30*-0.16666666666666666 + tmp_kernel_op_32*-0.16666666666666666);
          const walberla::float64 elMatVec_3 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_35 + tmp_kernel_op_16*tmp_kernel_op_38 + tmp_kernel_op_17*tmp_kernel_op_41) + src_dof_1*(tmp_kernel_op_35*0.16666666666666666 + tmp_kernel_op_38*0.66666666666666663 + tmp_kernel_op_41*0.16666666666666666) + src_dof_2*(tmp_kernel_op_35*0.66666666666666663 + tmp_kernel_op_38*0.16666666666666666 + tmp_kernel_op_41*0.16666666666666666);
          const walberla::float64 elMatVec_4 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_42 + tmp_kernel_op_16*tmp_kernel_op_43 + tmp_kernel_op_17*tmp_kernel_op_44) + src_dof_1*(tmp_kernel_op_42*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666) + src_dof_2*(tmp_kernel_op_42*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666);
          const walberla::float64 elMatVec_5 = src_dof_0*(tmp_kernel_op_15*tmp_kernel_op_45 + tmp_kernel_op_16*tmp_kernel_op_46 + tmp_kernel_op_17*tmp_kernel_op_47) + src_dof_1*(tmp_kernel_op_45*0.16666666666666666 + tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666) + src_dof_2*(tmp_kernel_op_45*0.66666666666666663 + tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666);
          {
             {
                {
                   _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatVec_0 + _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                   _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_1 + _data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dstVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1] = elMatVec_2 + _data_dstVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
                   _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1] = elMatVec_3 + _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
                   _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1] = elMatVec_4 + _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1];
                   _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatVec_5 + _data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
