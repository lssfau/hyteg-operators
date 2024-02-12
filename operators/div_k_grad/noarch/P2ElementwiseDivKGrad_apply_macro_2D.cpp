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

























#include "../P2ElementwiseDivKGrad.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDivKGrad::apply_macro_2D( walberla::float64 * RESTRICT  _data_dstEdge, walberla::float64 * RESTRICT  _data_dstVertex, walberla::float64 * RESTRICT  _data_kEdge, walberla::float64 * RESTRICT  _data_kVertex, walberla::float64 * RESTRICT  _data_srcEdge, walberla::float64 * RESTRICT  _data_srcVertex, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 _data_q_w [] = {0.16666666666666674, 0.16666666666666674, 0.16666666666666674};
   
       const walberla::float64 _data_q_p_0 [] = {0.16666666666666674, 0.66666666666666674, 0.16666666666666663};
   
       const walberla::float64 _data_q_p_1 [] = {0.16666666666666663, 0.16666666666666663, 0.66666666666666685};
   
       const walberla::float64 tmp_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const walberla::float64 p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const walberla::float64 p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const walberla::float64 jac_affine_0_1_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_2_0_GRAY;
       const walberla::float64 jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const walberla::float64 jac_affine_1_1_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_2_1_GRAY;
       const walberla::float64 tmp_1_GRAY = jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY;
       const walberla::float64 tmp_2_GRAY = 1.0 / (tmp_1_GRAY);
       const walberla::float64 jac_affine_inv_0_0_GRAY = jac_affine_1_1_GRAY*tmp_2_GRAY;
       const walberla::float64 jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_2_GRAY;
       const walberla::float64 jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_2_GRAY;
       const walberla::float64 jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_2_GRAY;
       const walberla::float64 abs_det_jac_affine_GRAY = abs(tmp_1_GRAY);
       {
          /* FaceType.GRAY */
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const walberla::float64 src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const walberla::float64 src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const walberla::float64 src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const walberla::float64 src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const walberla::float64 k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const walberla::float64 k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const walberla::float64 k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 k_dof_3 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const walberla::float64 k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const walberla::float64 k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_0_1 = 0.0;
             walberla::float64 q_acc_0_2 = 0.0;
             walberla::float64 q_acc_0_3 = 0.0;
             walberla::float64 q_acc_0_4 = 0.0;
             walberla::float64 q_acc_0_5 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_1_2 = 0.0;
             walberla::float64 q_acc_1_3 = 0.0;
             walberla::float64 q_acc_1_4 = 0.0;
             walberla::float64 q_acc_1_5 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             walberla::float64 q_acc_2_3 = 0.0;
             walberla::float64 q_acc_2_4 = 0.0;
             walberla::float64 q_acc_2_5 = 0.0;
             walberla::float64 q_acc_3_3 = 0.0;
             walberla::float64 q_acc_3_4 = 0.0;
             walberla::float64 q_acc_3_5 = 0.0;
             walberla::float64 q_acc_4_4 = 0.0;
             walberla::float64 q_acc_4_5 = 0.0;
             walberla::float64 q_acc_5_5 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const walberla::float64 tmp_q_0 = 4.0*_data_q_p_0[q];
                const walberla::float64 tmp_q_1 = 4.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_2 = tmp_q_0 + tmp_q_1 - 3.0;
                const walberla::float64 tmp_q_3 = jac_affine_inv_0_0_GRAY*tmp_q_2 + jac_affine_inv_1_0_GRAY*tmp_q_2;
                const walberla::float64 tmp_q_4 = jac_affine_inv_0_1_GRAY*tmp_q_2 + jac_affine_inv_1_1_GRAY*tmp_q_2;
                const walberla::float64 tmp_q_5 = tmp_q_0*_data_q_p_1[q];
                const walberla::float64 tmp_q_6 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const walberla::float64 tmp_q_7 = tmp_q_6*2.0;
                const walberla::float64 tmp_q_8 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const walberla::float64 tmp_q_9 = tmp_q_8*2.0;
                const walberla::float64 tmp_q_10 = abs_det_jac_affine_GRAY*(k_dof_0*(tmp_q_5 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_q_7 - _data_q_p_0[q]) + k_dof_2*(tmp_q_9 - _data_q_p_1[q]) + k_dof_3*tmp_q_5 + k_dof_4*(tmp_q_1 - tmp_q_5 + tmp_q_8*-4.0) + k_dof_5*(tmp_q_0 - tmp_q_5 + tmp_q_6*-4.0))*_data_q_w[q];
                const walberla::float64 tmp_q_11 = tmp_q_0 - 1.0;
                const walberla::float64 tmp_q_12 = jac_affine_inv_0_0_GRAY*tmp_q_11;
                const walberla::float64 tmp_q_13 = jac_affine_inv_0_1_GRAY*tmp_q_11;
                const walberla::float64 tmp_q_14 = tmp_q_1 - 1.0;
                const walberla::float64 tmp_q_15 = jac_affine_inv_1_0_GRAY*tmp_q_14;
                const walberla::float64 tmp_q_16 = jac_affine_inv_1_1_GRAY*tmp_q_14;
                const walberla::float64 tmp_q_17 = jac_affine_inv_1_0_GRAY*tmp_q_0;
                const walberla::float64 tmp_q_18 = jac_affine_inv_0_0_GRAY*tmp_q_1;
                const walberla::float64 tmp_q_19 = tmp_q_17 + tmp_q_18;
                const walberla::float64 tmp_q_20 = jac_affine_inv_1_1_GRAY*tmp_q_0;
                const walberla::float64 tmp_q_21 = jac_affine_inv_0_1_GRAY*tmp_q_1;
                const walberla::float64 tmp_q_22 = tmp_q_20 + tmp_q_21;
                const walberla::float64 tmp_q_23 = -tmp_q_0 - 8.0*_data_q_p_1[q] + 4.0;
                const walberla::float64 tmp_q_24 = jac_affine_inv_1_0_GRAY*tmp_q_23 - tmp_q_18;
                const walberla::float64 tmp_q_25 = jac_affine_inv_1_1_GRAY*tmp_q_23 - tmp_q_21;
                const walberla::float64 tmp_q_26 = -tmp_q_1 - 8.0*_data_q_p_0[q] + 4.0;
                const walberla::float64 tmp_q_27 = jac_affine_inv_0_0_GRAY*tmp_q_26 - tmp_q_17;
                const walberla::float64 tmp_q_28 = jac_affine_inv_0_1_GRAY*tmp_q_26 - tmp_q_20;
                const walberla::float64 tmp_q_29 = (tmp_q_11*tmp_q_11);
                const walberla::float64 tmp_q_30 = (tmp_q_14*tmp_q_14);
                const walberla::float64 q_tmp_0_0 = tmp_q_10*((tmp_q_3*tmp_q_3) + (tmp_q_4*tmp_q_4));
                const walberla::float64 q_tmp_0_1 = tmp_q_10*(tmp_q_12*tmp_q_3 + tmp_q_13*tmp_q_4);
                const walberla::float64 q_tmp_0_2 = tmp_q_10*(tmp_q_15*tmp_q_3 + tmp_q_16*tmp_q_4);
                const walberla::float64 q_tmp_0_3 = tmp_q_10*(tmp_q_19*tmp_q_3 + tmp_q_22*tmp_q_4);
                const walberla::float64 q_tmp_0_4 = tmp_q_10*(tmp_q_24*tmp_q_3 + tmp_q_25*tmp_q_4);
                const walberla::float64 q_tmp_0_5 = tmp_q_10*(tmp_q_27*tmp_q_3 + tmp_q_28*tmp_q_4);
                const walberla::float64 q_tmp_1_1 = tmp_q_10*((jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY)*tmp_q_29 + (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY)*tmp_q_29);
                const walberla::float64 q_tmp_1_2 = tmp_q_10*(tmp_q_12*tmp_q_15 + tmp_q_13*tmp_q_16);
                const walberla::float64 q_tmp_1_3 = tmp_q_10*(tmp_q_12*tmp_q_19 + tmp_q_13*tmp_q_22);
                const walberla::float64 q_tmp_1_4 = tmp_q_10*(tmp_q_12*tmp_q_24 + tmp_q_13*tmp_q_25);
                const walberla::float64 q_tmp_1_5 = tmp_q_10*(tmp_q_12*tmp_q_27 + tmp_q_13*tmp_q_28);
                const walberla::float64 q_tmp_2_2 = tmp_q_10*((jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY)*tmp_q_30 + (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY)*tmp_q_30);
                const walberla::float64 q_tmp_2_3 = tmp_q_10*(tmp_q_15*tmp_q_19 + tmp_q_16*tmp_q_22);
                const walberla::float64 q_tmp_2_4 = tmp_q_10*(tmp_q_15*tmp_q_24 + tmp_q_16*tmp_q_25);
                const walberla::float64 q_tmp_2_5 = tmp_q_10*(tmp_q_15*tmp_q_27 + tmp_q_16*tmp_q_28);
                const walberla::float64 q_tmp_3_3 = tmp_q_10*((tmp_q_19*tmp_q_19) + (tmp_q_22*tmp_q_22));
                const walberla::float64 q_tmp_3_4 = tmp_q_10*(tmp_q_19*tmp_q_24 + tmp_q_22*tmp_q_25);
                const walberla::float64 q_tmp_3_5 = tmp_q_10*(tmp_q_19*tmp_q_27 + tmp_q_22*tmp_q_28);
                const walberla::float64 q_tmp_4_4 = tmp_q_10*((tmp_q_24*tmp_q_24) + (tmp_q_25*tmp_q_25));
                const walberla::float64 q_tmp_4_5 = tmp_q_10*(tmp_q_24*tmp_q_27 + tmp_q_25*tmp_q_28);
                const walberla::float64 q_tmp_5_5 = tmp_q_10*((tmp_q_27*tmp_q_27) + (tmp_q_28*tmp_q_28));
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
             }
             const walberla::float64 elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
             const walberla::float64 elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
             const walberla::float64 elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
             const walberla::float64 elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
             const walberla::float64 elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
             const walberla::float64 elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_5*src_dof_5;
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5 + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
          }
       }
       const walberla::float64 tmp_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const walberla::float64 tmp_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const walberla::float64 tmp_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const walberla::float64 tmp_3_BLUE = tmp_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const walberla::float64 tmp_4_BLUE = tmp_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const walberla::float64 p_affine_const_0_0_BLUE = tmp_1_BLUE;
       const walberla::float64 p_affine_const_0_1_BLUE = tmp_2_BLUE;
       const walberla::float64 p_affine_const_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_3_BLUE;
       const walberla::float64 p_affine_const_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_4_BLUE;
       const walberla::float64 p_affine_const_2_0_BLUE = tmp_1_BLUE + tmp_3_BLUE;
       const walberla::float64 p_affine_const_2_1_BLUE = tmp_2_BLUE + tmp_4_BLUE;
       const walberla::float64 jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const walberla::float64 jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const walberla::float64 jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const walberla::float64 jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const walberla::float64 tmp_5_BLUE = jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE;
       const walberla::float64 tmp_6_BLUE = 1.0 / (tmp_5_BLUE);
       const walberla::float64 jac_affine_inv_0_0_BLUE = jac_affine_1_1_BLUE*tmp_6_BLUE;
       const walberla::float64 jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_6_BLUE;
       const walberla::float64 jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_6_BLUE;
       const walberla::float64 jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_6_BLUE;
       const walberla::float64 abs_det_jac_affine_BLUE = abs(tmp_5_BLUE);
       {
          /* FaceType.BLUE */
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const walberla::float64 src_dof_1 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const walberla::float64 src_dof_3 = _data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const walberla::float64 src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const walberla::float64 k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const walberla::float64 k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const walberla::float64 k_dof_3 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const walberla::float64 k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const walberla::float64 k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_0_1 = 0.0;
             walberla::float64 q_acc_0_2 = 0.0;
             walberla::float64 q_acc_0_3 = 0.0;
             walberla::float64 q_acc_0_4 = 0.0;
             walberla::float64 q_acc_0_5 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_1_2 = 0.0;
             walberla::float64 q_acc_1_3 = 0.0;
             walberla::float64 q_acc_1_4 = 0.0;
             walberla::float64 q_acc_1_5 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             walberla::float64 q_acc_2_3 = 0.0;
             walberla::float64 q_acc_2_4 = 0.0;
             walberla::float64 q_acc_2_5 = 0.0;
             walberla::float64 q_acc_3_3 = 0.0;
             walberla::float64 q_acc_3_4 = 0.0;
             walberla::float64 q_acc_3_5 = 0.0;
             walberla::float64 q_acc_4_4 = 0.0;
             walberla::float64 q_acc_4_5 = 0.0;
             walberla::float64 q_acc_5_5 = 0.0;
             for (int64_t q = 0; q < 3; q += 1)
             {
                const walberla::float64 tmp_q_0 = 4.0*_data_q_p_0[q];
                const walberla::float64 tmp_q_1 = 4.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_2 = tmp_q_0 + tmp_q_1 - 3.0;
                const walberla::float64 tmp_q_3 = jac_affine_inv_0_0_BLUE*tmp_q_2 + jac_affine_inv_1_0_BLUE*tmp_q_2;
                const walberla::float64 tmp_q_4 = jac_affine_inv_0_1_BLUE*tmp_q_2 + jac_affine_inv_1_1_BLUE*tmp_q_2;
                const walberla::float64 tmp_q_5 = tmp_q_0*_data_q_p_1[q];
                const walberla::float64 tmp_q_6 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const walberla::float64 tmp_q_7 = tmp_q_6*2.0;
                const walberla::float64 tmp_q_8 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const walberla::float64 tmp_q_9 = tmp_q_8*2.0;
                const walberla::float64 tmp_q_10 = abs_det_jac_affine_BLUE*(k_dof_0*(tmp_q_5 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_q_7 - _data_q_p_0[q]) + k_dof_2*(tmp_q_9 - _data_q_p_1[q]) + k_dof_3*tmp_q_5 + k_dof_4*(tmp_q_1 - tmp_q_5 + tmp_q_8*-4.0) + k_dof_5*(tmp_q_0 - tmp_q_5 + tmp_q_6*-4.0))*_data_q_w[q];
                const walberla::float64 tmp_q_11 = tmp_q_0 - 1.0;
                const walberla::float64 tmp_q_12 = jac_affine_inv_0_0_BLUE*tmp_q_11;
                const walberla::float64 tmp_q_13 = jac_affine_inv_0_1_BLUE*tmp_q_11;
                const walberla::float64 tmp_q_14 = tmp_q_1 - 1.0;
                const walberla::float64 tmp_q_15 = jac_affine_inv_1_0_BLUE*tmp_q_14;
                const walberla::float64 tmp_q_16 = jac_affine_inv_1_1_BLUE*tmp_q_14;
                const walberla::float64 tmp_q_17 = jac_affine_inv_1_0_BLUE*tmp_q_0;
                const walberla::float64 tmp_q_18 = jac_affine_inv_0_0_BLUE*tmp_q_1;
                const walberla::float64 tmp_q_19 = tmp_q_17 + tmp_q_18;
                const walberla::float64 tmp_q_20 = jac_affine_inv_1_1_BLUE*tmp_q_0;
                const walberla::float64 tmp_q_21 = jac_affine_inv_0_1_BLUE*tmp_q_1;
                const walberla::float64 tmp_q_22 = tmp_q_20 + tmp_q_21;
                const walberla::float64 tmp_q_23 = -tmp_q_0 - 8.0*_data_q_p_1[q] + 4.0;
                const walberla::float64 tmp_q_24 = jac_affine_inv_1_0_BLUE*tmp_q_23 - tmp_q_18;
                const walberla::float64 tmp_q_25 = jac_affine_inv_1_1_BLUE*tmp_q_23 - tmp_q_21;
                const walberla::float64 tmp_q_26 = -tmp_q_1 - 8.0*_data_q_p_0[q] + 4.0;
                const walberla::float64 tmp_q_27 = jac_affine_inv_0_0_BLUE*tmp_q_26 - tmp_q_17;
                const walberla::float64 tmp_q_28 = jac_affine_inv_0_1_BLUE*tmp_q_26 - tmp_q_20;
                const walberla::float64 tmp_q_29 = (tmp_q_11*tmp_q_11);
                const walberla::float64 tmp_q_30 = (tmp_q_14*tmp_q_14);
                const walberla::float64 q_tmp_0_0 = tmp_q_10*((tmp_q_3*tmp_q_3) + (tmp_q_4*tmp_q_4));
                const walberla::float64 q_tmp_0_1 = tmp_q_10*(tmp_q_12*tmp_q_3 + tmp_q_13*tmp_q_4);
                const walberla::float64 q_tmp_0_2 = tmp_q_10*(tmp_q_15*tmp_q_3 + tmp_q_16*tmp_q_4);
                const walberla::float64 q_tmp_0_3 = tmp_q_10*(tmp_q_19*tmp_q_3 + tmp_q_22*tmp_q_4);
                const walberla::float64 q_tmp_0_4 = tmp_q_10*(tmp_q_24*tmp_q_3 + tmp_q_25*tmp_q_4);
                const walberla::float64 q_tmp_0_5 = tmp_q_10*(tmp_q_27*tmp_q_3 + tmp_q_28*tmp_q_4);
                const walberla::float64 q_tmp_1_1 = tmp_q_10*((jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE)*tmp_q_29 + (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE)*tmp_q_29);
                const walberla::float64 q_tmp_1_2 = tmp_q_10*(tmp_q_12*tmp_q_15 + tmp_q_13*tmp_q_16);
                const walberla::float64 q_tmp_1_3 = tmp_q_10*(tmp_q_12*tmp_q_19 + tmp_q_13*tmp_q_22);
                const walberla::float64 q_tmp_1_4 = tmp_q_10*(tmp_q_12*tmp_q_24 + tmp_q_13*tmp_q_25);
                const walberla::float64 q_tmp_1_5 = tmp_q_10*(tmp_q_12*tmp_q_27 + tmp_q_13*tmp_q_28);
                const walberla::float64 q_tmp_2_2 = tmp_q_10*((jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE)*tmp_q_30 + (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE)*tmp_q_30);
                const walberla::float64 q_tmp_2_3 = tmp_q_10*(tmp_q_15*tmp_q_19 + tmp_q_16*tmp_q_22);
                const walberla::float64 q_tmp_2_4 = tmp_q_10*(tmp_q_15*tmp_q_24 + tmp_q_16*tmp_q_25);
                const walberla::float64 q_tmp_2_5 = tmp_q_10*(tmp_q_15*tmp_q_27 + tmp_q_16*tmp_q_28);
                const walberla::float64 q_tmp_3_3 = tmp_q_10*((tmp_q_19*tmp_q_19) + (tmp_q_22*tmp_q_22));
                const walberla::float64 q_tmp_3_4 = tmp_q_10*(tmp_q_19*tmp_q_24 + tmp_q_22*tmp_q_25);
                const walberla::float64 q_tmp_3_5 = tmp_q_10*(tmp_q_19*tmp_q_27 + tmp_q_22*tmp_q_28);
                const walberla::float64 q_tmp_4_4 = tmp_q_10*((tmp_q_24*tmp_q_24) + (tmp_q_25*tmp_q_25));
                const walberla::float64 q_tmp_4_5 = tmp_q_10*(tmp_q_24*tmp_q_27 + tmp_q_25*tmp_q_28);
                const walberla::float64 q_tmp_5_5 = tmp_q_10*((tmp_q_27*tmp_q_27) + (tmp_q_28*tmp_q_28));
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
             }
             const walberla::float64 elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3 + q_acc_0_4*src_dof_4 + q_acc_0_5*src_dof_5;
             const walberla::float64 elMatVec_1 = q_acc_0_1*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3 + q_acc_1_4*src_dof_4 + q_acc_1_5*src_dof_5;
             const walberla::float64 elMatVec_2 = q_acc_0_2*src_dof_0 + q_acc_1_2*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3 + q_acc_2_4*src_dof_4 + q_acc_2_5*src_dof_5;
             const walberla::float64 elMatVec_3 = q_acc_0_3*src_dof_0 + q_acc_1_3*src_dof_1 + q_acc_2_3*src_dof_2 + q_acc_3_3*src_dof_3 + q_acc_3_4*src_dof_4 + q_acc_3_5*src_dof_5;
             const walberla::float64 elMatVec_4 = q_acc_0_4*src_dof_0 + q_acc_1_4*src_dof_1 + q_acc_2_4*src_dof_2 + q_acc_3_4*src_dof_3 + q_acc_4_4*src_dof_4 + q_acc_4_5*src_dof_5;
             const walberla::float64 elMatVec_5 = q_acc_0_5*src_dof_0 + q_acc_1_5*src_dof_1 + q_acc_2_5*src_dof_2 + q_acc_3_5*src_dof_3 + q_acc_4_5*src_dof_4 + q_acc_5_5*src_dof_5;
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
