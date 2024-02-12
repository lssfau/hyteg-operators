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

void P2ElementwiseDivKGrad::computeInverseDiagonalOperatorValues_macro_3D( walberla::float64 * RESTRICT  _data_invDiag_Edge, walberla::float64 * RESTRICT  _data_invDiag_Vertex, walberla::float64 * RESTRICT  _data_kEdge, walberla::float64 * RESTRICT  _data_kVertex, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_0comp2, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_1comp2, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, walberla::float64 macro_vertex_coord_id_2comp2, walberla::float64 macro_vertex_coord_id_3comp0, walberla::float64 macro_vertex_coord_id_3comp1, walberla::float64 macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
       const walberla::float64 _data_q_w [] = {0.050086823222829389, 0.046462929447761279, 0.05318232258357912, 0.016934591412496786};
   
       const walberla::float64 _data_q_p_0 [] = {0.18002969351036546, 0.15593312049918584, 0.21607642918484793, 0.82157254096761967};
   
       const walberla::float64 _data_q_p_1 [] = {0.36531451881463461, 0.45746158708559559, 0.00037551502872928966, 0.12366680032845823};
   
       const walberla::float64 _data_q_p_2 [] = {0.0069232355736274509, 0.3817653560693467, 0.43070170707783589, 0.039933048641498381};
   
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
       const walberla::float64 tmp_5_WHITE_UP = jac_affine_0_2_WHITE_UP*jac_affine_1_1_WHITE_UP;
       const walberla::float64 jac_affine_1_2_WHITE_UP = -p_affine_const_0_1_WHITE_UP + p_affine_const_3_1_WHITE_UP;
       const walberla::float64 tmp_3_WHITE_UP = jac_affine_0_1_WHITE_UP*jac_affine_1_2_WHITE_UP;
       const walberla::float64 jac_affine_2_0_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_1_2_WHITE_UP;
       const walberla::float64 jac_affine_2_1_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_2_2_WHITE_UP;
       const walberla::float64 tmp_2_WHITE_UP = jac_affine_1_2_WHITE_UP*jac_affine_2_1_WHITE_UP;
       const walberla::float64 jac_affine_2_2_WHITE_UP = -p_affine_const_0_2_WHITE_UP + p_affine_const_3_2_WHITE_UP;
       const walberla::float64 tmp_1_WHITE_UP = jac_affine_1_1_WHITE_UP*jac_affine_2_2_WHITE_UP;
       const walberla::float64 tmp_4_WHITE_UP = jac_affine_0_1_WHITE_UP*jac_affine_2_2_WHITE_UP;
       const walberla::float64 tmp_6_WHITE_UP = jac_affine_0_0_WHITE_UP*tmp_1_WHITE_UP - jac_affine_0_0_WHITE_UP*tmp_2_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_1_0_WHITE_UP*tmp_4_WHITE_UP + jac_affine_2_0_WHITE_UP*tmp_3_WHITE_UP - jac_affine_2_0_WHITE_UP*tmp_5_WHITE_UP;
       const walberla::float64 tmp_7_WHITE_UP = 1.0 / (tmp_6_WHITE_UP);
       const walberla::float64 jac_affine_inv_0_0_WHITE_UP = tmp_7_WHITE_UP*(tmp_1_WHITE_UP - tmp_2_WHITE_UP);
       const walberla::float64 jac_affine_inv_0_1_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_0_2_WHITE_UP*jac_affine_2_1_WHITE_UP - tmp_4_WHITE_UP);
       const walberla::float64 jac_affine_inv_0_2_WHITE_UP = tmp_7_WHITE_UP*(tmp_3_WHITE_UP - tmp_5_WHITE_UP);
       const walberla::float64 jac_affine_inv_1_0_WHITE_UP = tmp_7_WHITE_UP*(-jac_affine_1_0_WHITE_UP*jac_affine_2_2_WHITE_UP + jac_affine_1_2_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_1_1_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_0_0_WHITE_UP*jac_affine_2_2_WHITE_UP - jac_affine_0_2_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_1_2_WHITE_UP = tmp_7_WHITE_UP*(-jac_affine_0_0_WHITE_UP*jac_affine_1_2_WHITE_UP + jac_affine_0_2_WHITE_UP*jac_affine_1_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_2_0_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_1_0_WHITE_UP*jac_affine_2_1_WHITE_UP - jac_affine_1_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_2_1_WHITE_UP = tmp_7_WHITE_UP*(-jac_affine_0_0_WHITE_UP*jac_affine_2_1_WHITE_UP + jac_affine_0_1_WHITE_UP*jac_affine_2_0_WHITE_UP);
       const walberla::float64 jac_affine_inv_2_2_WHITE_UP = tmp_7_WHITE_UP*(jac_affine_0_0_WHITE_UP*jac_affine_1_1_WHITE_UP - jac_affine_0_1_WHITE_UP*jac_affine_1_0_WHITE_UP);
       const walberla::float64 abs_det_jac_affine_WHITE_UP = abs(tmp_6_WHITE_UP);
       {
          /* CellType.WHITE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const walberla::float64 k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_3 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_7 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             walberla::float64 q_acc_3_3 = 0.0;
             walberla::float64 q_acc_4_4 = 0.0;
             walberla::float64 q_acc_5_5 = 0.0;
             walberla::float64 q_acc_6_6 = 0.0;
             walberla::float64 q_acc_7_7 = 0.0;
             walberla::float64 q_acc_8_8 = 0.0;
             walberla::float64 q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const walberla::float64 tmp_q_0 = 4.0*_data_q_p_2[q];
                const walberla::float64 tmp_q_1 = 4.0*_data_q_p_0[q];
                const walberla::float64 tmp_q_2 = 4.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_3 = tmp_q_1 + tmp_q_2;
                const walberla::float64 tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const walberla::float64 tmp_q_5 = tmp_q_1*_data_q_p_1[q];
                const walberla::float64 tmp_q_6 = tmp_q_1*_data_q_p_2[q];
                const walberla::float64 tmp_q_7 = tmp_q_2*_data_q_p_2[q];
                const walberla::float64 tmp_q_8 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const walberla::float64 tmp_q_9 = tmp_q_8*2.0;
                const walberla::float64 tmp_q_10 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const walberla::float64 tmp_q_11 = tmp_q_10*2.0;
                const walberla::float64 tmp_q_12 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const walberla::float64 tmp_q_13 = tmp_q_12*2.0;
                const walberla::float64 tmp_q_14 = tmp_q_5 + tmp_q_6;
                const walberla::float64 tmp_q_15 = abs_det_jac_affine_WHITE_UP*(k_dof_0*(tmp_q_11 + tmp_q_13 + tmp_q_14 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_9 - _data_q_p_0[q]) + k_dof_2*(tmp_q_11 - _data_q_p_1[q]) + k_dof_3*(tmp_q_13 - _data_q_p_2[q]) + k_dof_4*tmp_q_7 + k_dof_5*tmp_q_6 + k_dof_6*tmp_q_5 + k_dof_7*(tmp_q_0 + tmp_q_12*-4.0 - tmp_q_6 - tmp_q_7) + k_dof_8*(tmp_q_10*-4.0 + tmp_q_2 - tmp_q_5 - tmp_q_7) + k_dof_9*(tmp_q_1 - tmp_q_14 + tmp_q_8*-4.0))*_data_q_w[q];
                const walberla::float64 tmp_q_16 = ((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]))*16.0;
                const walberla::float64 tmp_q_17 = ((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]))*16.0;
                const walberla::float64 tmp_q_18 = ((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]))*16.0;
                const walberla::float64 tmp_q_19 = jac_affine_inv_2_0_WHITE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_20 = jac_affine_inv_1_0_WHITE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_21 = jac_affine_inv_2_1_WHITE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_22 = jac_affine_inv_1_1_WHITE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_23 = jac_affine_inv_2_2_WHITE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_24 = jac_affine_inv_1_2_WHITE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_25 = jac_affine_inv_2_0_WHITE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_26 = jac_affine_inv_0_0_WHITE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_27 = jac_affine_inv_2_1_WHITE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_28 = jac_affine_inv_0_1_WHITE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_29 = jac_affine_inv_2_2_WHITE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_30 = jac_affine_inv_0_2_WHITE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_31 = jac_affine_inv_1_0_WHITE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_32 = jac_affine_inv_0_0_WHITE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_33 = jac_affine_inv_1_1_WHITE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_34 = jac_affine_inv_0_1_WHITE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_35 = jac_affine_inv_1_2_WHITE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_36 = jac_affine_inv_0_2_WHITE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_37 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const walberla::float64 tmp_q_38 = tmp_q_0 - 4.0;
                const walberla::float64 tmp_q_39 = -tmp_q_1 - tmp_q_38 - 8.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_40 = -tmp_q_2 - tmp_q_38 - 8.0*_data_q_p_0[q];
                const walberla::float64 q_tmp_0_0 = tmp_q_15*(((jac_affine_inv_0_0_WHITE_UP*tmp_q_4 + jac_affine_inv_1_0_WHITE_UP*tmp_q_4 + jac_affine_inv_2_0_WHITE_UP*tmp_q_4)*(jac_affine_inv_0_0_WHITE_UP*tmp_q_4 + jac_affine_inv_1_0_WHITE_UP*tmp_q_4 + jac_affine_inv_2_0_WHITE_UP*tmp_q_4)) + ((jac_affine_inv_0_1_WHITE_UP*tmp_q_4 + jac_affine_inv_1_1_WHITE_UP*tmp_q_4 + jac_affine_inv_2_1_WHITE_UP*tmp_q_4)*(jac_affine_inv_0_1_WHITE_UP*tmp_q_4 + jac_affine_inv_1_1_WHITE_UP*tmp_q_4 + jac_affine_inv_2_1_WHITE_UP*tmp_q_4)) + ((jac_affine_inv_0_2_WHITE_UP*tmp_q_4 + jac_affine_inv_1_2_WHITE_UP*tmp_q_4 + jac_affine_inv_2_2_WHITE_UP*tmp_q_4)*(jac_affine_inv_0_2_WHITE_UP*tmp_q_4 + jac_affine_inv_1_2_WHITE_UP*tmp_q_4 + jac_affine_inv_2_2_WHITE_UP*tmp_q_4)));
                const walberla::float64 q_tmp_1_1 = tmp_q_15*((jac_affine_inv_0_0_WHITE_UP*jac_affine_inv_0_0_WHITE_UP)*tmp_q_16 + (jac_affine_inv_0_1_WHITE_UP*jac_affine_inv_0_1_WHITE_UP)*tmp_q_16 + (jac_affine_inv_0_2_WHITE_UP*jac_affine_inv_0_2_WHITE_UP)*tmp_q_16);
                const walberla::float64 q_tmp_2_2 = tmp_q_15*((jac_affine_inv_1_0_WHITE_UP*jac_affine_inv_1_0_WHITE_UP)*tmp_q_17 + (jac_affine_inv_1_1_WHITE_UP*jac_affine_inv_1_1_WHITE_UP)*tmp_q_17 + (jac_affine_inv_1_2_WHITE_UP*jac_affine_inv_1_2_WHITE_UP)*tmp_q_17);
                const walberla::float64 q_tmp_3_3 = tmp_q_15*((jac_affine_inv_2_0_WHITE_UP*jac_affine_inv_2_0_WHITE_UP)*tmp_q_18 + (jac_affine_inv_2_1_WHITE_UP*jac_affine_inv_2_1_WHITE_UP)*tmp_q_18 + (jac_affine_inv_2_2_WHITE_UP*jac_affine_inv_2_2_WHITE_UP)*tmp_q_18);
                const walberla::float64 q_tmp_4_4 = tmp_q_15*(((tmp_q_19 + tmp_q_20)*(tmp_q_19 + tmp_q_20))*16.0 + ((tmp_q_21 + tmp_q_22)*(tmp_q_21 + tmp_q_22))*16.0 + ((tmp_q_23 + tmp_q_24)*(tmp_q_23 + tmp_q_24))*16.0);
                const walberla::float64 q_tmp_5_5 = tmp_q_15*(((tmp_q_25 + tmp_q_26)*(tmp_q_25 + tmp_q_26))*16.0 + ((tmp_q_27 + tmp_q_28)*(tmp_q_27 + tmp_q_28))*16.0 + ((tmp_q_29 + tmp_q_30)*(tmp_q_29 + tmp_q_30))*16.0);
                const walberla::float64 q_tmp_6_6 = tmp_q_15*(((tmp_q_31 + tmp_q_32)*(tmp_q_31 + tmp_q_32))*16.0 + ((tmp_q_33 + tmp_q_34)*(tmp_q_33 + tmp_q_34))*16.0 + ((tmp_q_35 + tmp_q_36)*(tmp_q_35 + tmp_q_36))*16.0);
                const walberla::float64 q_tmp_7_7 = tmp_q_15*(((jac_affine_inv_2_0_WHITE_UP*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26)*(jac_affine_inv_2_0_WHITE_UP*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26))*16.0 + ((jac_affine_inv_2_1_WHITE_UP*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28)*(jac_affine_inv_2_1_WHITE_UP*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28))*16.0 + ((jac_affine_inv_2_2_WHITE_UP*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30)*(jac_affine_inv_2_2_WHITE_UP*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30))*16.0);
                const walberla::float64 q_tmp_8_8 = tmp_q_15*(((jac_affine_inv_1_0_WHITE_UP*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32)*(jac_affine_inv_1_0_WHITE_UP*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32))*16.0 + ((jac_affine_inv_1_1_WHITE_UP*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34)*(jac_affine_inv_1_1_WHITE_UP*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34))*16.0 + ((jac_affine_inv_1_2_WHITE_UP*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36)*(jac_affine_inv_1_2_WHITE_UP*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36))*16.0);
                const walberla::float64 q_tmp_9_9 = tmp_q_15*(((jac_affine_inv_0_0_WHITE_UP*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31)*(jac_affine_inv_0_0_WHITE_UP*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31))*16.0 + ((jac_affine_inv_0_1_WHITE_UP*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33)*(jac_affine_inv_0_1_WHITE_UP*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33))*16.0 + ((jac_affine_inv_0_2_WHITE_UP*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35)*(jac_affine_inv_0_2_WHITE_UP*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35))*16.0);
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
             }
             const walberla::float64 elMatDiag_0 = q_acc_0_0;
             const walberla::float64 elMatDiag_1 = q_acc_1_1;
             const walberla::float64 elMatDiag_2 = q_acc_2_2;
             const walberla::float64 elMatDiag_3 = q_acc_3_3;
             const walberla::float64 elMatDiag_4 = q_acc_4_4;
             const walberla::float64 elMatDiag_5 = q_acc_5_5;
             const walberla::float64 elMatDiag_6 = q_acc_6_6;
             const walberla::float64 elMatDiag_7 = q_acc_7_7;
             const walberla::float64 elMatDiag_8 = q_acc_8_8;
             const walberla::float64 elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const walberla::float64 tmp_17_WHITE_DOWN = jac_affine_0_2_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN;
       const walberla::float64 jac_affine_1_2_WHITE_DOWN = -p_affine_const_0_1_WHITE_DOWN + p_affine_const_3_1_WHITE_DOWN;
       const walberla::float64 tmp_15_WHITE_DOWN = jac_affine_0_1_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_0_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_1_2_WHITE_DOWN;
       const walberla::float64 jac_affine_2_1_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_2_2_WHITE_DOWN;
       const walberla::float64 tmp_14_WHITE_DOWN = jac_affine_1_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN;
       const walberla::float64 jac_affine_2_2_WHITE_DOWN = -p_affine_const_0_2_WHITE_DOWN + p_affine_const_3_2_WHITE_DOWN;
       const walberla::float64 tmp_13_WHITE_DOWN = jac_affine_1_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN;
       const walberla::float64 tmp_16_WHITE_DOWN = jac_affine_0_1_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN;
       const walberla::float64 tmp_18_WHITE_DOWN = jac_affine_0_0_WHITE_DOWN*tmp_13_WHITE_DOWN - jac_affine_0_0_WHITE_DOWN*tmp_14_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_1_0_WHITE_DOWN*tmp_16_WHITE_DOWN + jac_affine_2_0_WHITE_DOWN*tmp_15_WHITE_DOWN - jac_affine_2_0_WHITE_DOWN*tmp_17_WHITE_DOWN;
       const walberla::float64 tmp_19_WHITE_DOWN = 1.0 / (tmp_18_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_0_0_WHITE_DOWN = tmp_19_WHITE_DOWN*(tmp_13_WHITE_DOWN - tmp_14_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_0_1_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_0_2_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - tmp_16_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_0_2_WHITE_DOWN = tmp_19_WHITE_DOWN*(tmp_15_WHITE_DOWN - tmp_17_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_1_0_WHITE_DOWN = tmp_19_WHITE_DOWN*(-jac_affine_1_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN + jac_affine_1_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_1_1_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_0_0_WHITE_DOWN*jac_affine_2_2_WHITE_DOWN - jac_affine_0_2_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_1_2_WHITE_DOWN = tmp_19_WHITE_DOWN*(-jac_affine_0_0_WHITE_DOWN*jac_affine_1_2_WHITE_DOWN + jac_affine_0_2_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_2_0_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_1_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN - jac_affine_1_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_2_1_WHITE_DOWN = tmp_19_WHITE_DOWN*(-jac_affine_0_0_WHITE_DOWN*jac_affine_2_1_WHITE_DOWN + jac_affine_0_1_WHITE_DOWN*jac_affine_2_0_WHITE_DOWN);
       const walberla::float64 jac_affine_inv_2_2_WHITE_DOWN = tmp_19_WHITE_DOWN*(jac_affine_0_0_WHITE_DOWN*jac_affine_1_1_WHITE_DOWN - jac_affine_0_1_WHITE_DOWN*jac_affine_1_0_WHITE_DOWN);
       const walberla::float64 abs_det_jac_affine_WHITE_DOWN = abs(tmp_18_WHITE_DOWN);
       {
          /* CellType.WHITE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const walberla::float64 k_dof_0 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_3 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_4 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             const walberla::float64 k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_7 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 k_dof_8 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             walberla::float64 q_acc_3_3 = 0.0;
             walberla::float64 q_acc_4_4 = 0.0;
             walberla::float64 q_acc_5_5 = 0.0;
             walberla::float64 q_acc_6_6 = 0.0;
             walberla::float64 q_acc_7_7 = 0.0;
             walberla::float64 q_acc_8_8 = 0.0;
             walberla::float64 q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const walberla::float64 tmp_q_0 = 4.0*_data_q_p_2[q];
                const walberla::float64 tmp_q_1 = 4.0*_data_q_p_0[q];
                const walberla::float64 tmp_q_2 = 4.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_3 = tmp_q_1 + tmp_q_2;
                const walberla::float64 tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const walberla::float64 tmp_q_5 = tmp_q_1*_data_q_p_1[q];
                const walberla::float64 tmp_q_6 = tmp_q_1*_data_q_p_2[q];
                const walberla::float64 tmp_q_7 = tmp_q_2*_data_q_p_2[q];
                const walberla::float64 tmp_q_8 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const walberla::float64 tmp_q_9 = tmp_q_8*2.0;
                const walberla::float64 tmp_q_10 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const walberla::float64 tmp_q_11 = tmp_q_10*2.0;
                const walberla::float64 tmp_q_12 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const walberla::float64 tmp_q_13 = tmp_q_12*2.0;
                const walberla::float64 tmp_q_14 = tmp_q_5 + tmp_q_6;
                const walberla::float64 tmp_q_15 = abs_det_jac_affine_WHITE_DOWN*(k_dof_0*(tmp_q_11 + tmp_q_13 + tmp_q_14 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_9 - _data_q_p_0[q]) + k_dof_2*(tmp_q_11 - _data_q_p_1[q]) + k_dof_3*(tmp_q_13 - _data_q_p_2[q]) + k_dof_4*tmp_q_7 + k_dof_5*tmp_q_6 + k_dof_6*tmp_q_5 + k_dof_7*(tmp_q_0 + tmp_q_12*-4.0 - tmp_q_6 - tmp_q_7) + k_dof_8*(tmp_q_10*-4.0 + tmp_q_2 - tmp_q_5 - tmp_q_7) + k_dof_9*(tmp_q_1 - tmp_q_14 + tmp_q_8*-4.0))*_data_q_w[q];
                const walberla::float64 tmp_q_16 = ((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]))*16.0;
                const walberla::float64 tmp_q_17 = ((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]))*16.0;
                const walberla::float64 tmp_q_18 = ((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]))*16.0;
                const walberla::float64 tmp_q_19 = jac_affine_inv_2_0_WHITE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_20 = jac_affine_inv_1_0_WHITE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_21 = jac_affine_inv_2_1_WHITE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_22 = jac_affine_inv_1_1_WHITE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_23 = jac_affine_inv_2_2_WHITE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_24 = jac_affine_inv_1_2_WHITE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_25 = jac_affine_inv_2_0_WHITE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_26 = jac_affine_inv_0_0_WHITE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_27 = jac_affine_inv_2_1_WHITE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_28 = jac_affine_inv_0_1_WHITE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_29 = jac_affine_inv_2_2_WHITE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_30 = jac_affine_inv_0_2_WHITE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_31 = jac_affine_inv_1_0_WHITE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_32 = jac_affine_inv_0_0_WHITE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_33 = jac_affine_inv_1_1_WHITE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_34 = jac_affine_inv_0_1_WHITE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_35 = jac_affine_inv_1_2_WHITE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_36 = jac_affine_inv_0_2_WHITE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_37 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const walberla::float64 tmp_q_38 = tmp_q_0 - 4.0;
                const walberla::float64 tmp_q_39 = -tmp_q_1 - tmp_q_38 - 8.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_40 = -tmp_q_2 - tmp_q_38 - 8.0*_data_q_p_0[q];
                const walberla::float64 q_tmp_0_0 = tmp_q_15*(((jac_affine_inv_0_0_WHITE_DOWN*tmp_q_4 + jac_affine_inv_1_0_WHITE_DOWN*tmp_q_4 + jac_affine_inv_2_0_WHITE_DOWN*tmp_q_4)*(jac_affine_inv_0_0_WHITE_DOWN*tmp_q_4 + jac_affine_inv_1_0_WHITE_DOWN*tmp_q_4 + jac_affine_inv_2_0_WHITE_DOWN*tmp_q_4)) + ((jac_affine_inv_0_1_WHITE_DOWN*tmp_q_4 + jac_affine_inv_1_1_WHITE_DOWN*tmp_q_4 + jac_affine_inv_2_1_WHITE_DOWN*tmp_q_4)*(jac_affine_inv_0_1_WHITE_DOWN*tmp_q_4 + jac_affine_inv_1_1_WHITE_DOWN*tmp_q_4 + jac_affine_inv_2_1_WHITE_DOWN*tmp_q_4)) + ((jac_affine_inv_0_2_WHITE_DOWN*tmp_q_4 + jac_affine_inv_1_2_WHITE_DOWN*tmp_q_4 + jac_affine_inv_2_2_WHITE_DOWN*tmp_q_4)*(jac_affine_inv_0_2_WHITE_DOWN*tmp_q_4 + jac_affine_inv_1_2_WHITE_DOWN*tmp_q_4 + jac_affine_inv_2_2_WHITE_DOWN*tmp_q_4)));
                const walberla::float64 q_tmp_1_1 = tmp_q_15*((jac_affine_inv_0_0_WHITE_DOWN*jac_affine_inv_0_0_WHITE_DOWN)*tmp_q_16 + (jac_affine_inv_0_1_WHITE_DOWN*jac_affine_inv_0_1_WHITE_DOWN)*tmp_q_16 + (jac_affine_inv_0_2_WHITE_DOWN*jac_affine_inv_0_2_WHITE_DOWN)*tmp_q_16);
                const walberla::float64 q_tmp_2_2 = tmp_q_15*((jac_affine_inv_1_0_WHITE_DOWN*jac_affine_inv_1_0_WHITE_DOWN)*tmp_q_17 + (jac_affine_inv_1_1_WHITE_DOWN*jac_affine_inv_1_1_WHITE_DOWN)*tmp_q_17 + (jac_affine_inv_1_2_WHITE_DOWN*jac_affine_inv_1_2_WHITE_DOWN)*tmp_q_17);
                const walberla::float64 q_tmp_3_3 = tmp_q_15*((jac_affine_inv_2_0_WHITE_DOWN*jac_affine_inv_2_0_WHITE_DOWN)*tmp_q_18 + (jac_affine_inv_2_1_WHITE_DOWN*jac_affine_inv_2_1_WHITE_DOWN)*tmp_q_18 + (jac_affine_inv_2_2_WHITE_DOWN*jac_affine_inv_2_2_WHITE_DOWN)*tmp_q_18);
                const walberla::float64 q_tmp_4_4 = tmp_q_15*(((tmp_q_19 + tmp_q_20)*(tmp_q_19 + tmp_q_20))*16.0 + ((tmp_q_21 + tmp_q_22)*(tmp_q_21 + tmp_q_22))*16.0 + ((tmp_q_23 + tmp_q_24)*(tmp_q_23 + tmp_q_24))*16.0);
                const walberla::float64 q_tmp_5_5 = tmp_q_15*(((tmp_q_25 + tmp_q_26)*(tmp_q_25 + tmp_q_26))*16.0 + ((tmp_q_27 + tmp_q_28)*(tmp_q_27 + tmp_q_28))*16.0 + ((tmp_q_29 + tmp_q_30)*(tmp_q_29 + tmp_q_30))*16.0);
                const walberla::float64 q_tmp_6_6 = tmp_q_15*(((tmp_q_31 + tmp_q_32)*(tmp_q_31 + tmp_q_32))*16.0 + ((tmp_q_33 + tmp_q_34)*(tmp_q_33 + tmp_q_34))*16.0 + ((tmp_q_35 + tmp_q_36)*(tmp_q_35 + tmp_q_36))*16.0);
                const walberla::float64 q_tmp_7_7 = tmp_q_15*(((jac_affine_inv_2_0_WHITE_DOWN*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26)*(jac_affine_inv_2_0_WHITE_DOWN*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26))*16.0 + ((jac_affine_inv_2_1_WHITE_DOWN*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28)*(jac_affine_inv_2_1_WHITE_DOWN*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28))*16.0 + ((jac_affine_inv_2_2_WHITE_DOWN*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30)*(jac_affine_inv_2_2_WHITE_DOWN*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30))*16.0);
                const walberla::float64 q_tmp_8_8 = tmp_q_15*(((jac_affine_inv_1_0_WHITE_DOWN*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32)*(jac_affine_inv_1_0_WHITE_DOWN*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32))*16.0 + ((jac_affine_inv_1_1_WHITE_DOWN*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34)*(jac_affine_inv_1_1_WHITE_DOWN*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34))*16.0 + ((jac_affine_inv_1_2_WHITE_DOWN*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36)*(jac_affine_inv_1_2_WHITE_DOWN*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36))*16.0);
                const walberla::float64 q_tmp_9_9 = tmp_q_15*(((jac_affine_inv_0_0_WHITE_DOWN*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31)*(jac_affine_inv_0_0_WHITE_DOWN*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31))*16.0 + ((jac_affine_inv_0_1_WHITE_DOWN*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33)*(jac_affine_inv_0_1_WHITE_DOWN*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33))*16.0 + ((jac_affine_inv_0_2_WHITE_DOWN*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35)*(jac_affine_inv_0_2_WHITE_DOWN*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35))*16.0);
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
             }
             const walberla::float64 elMatDiag_0 = q_acc_0_0;
             const walberla::float64 elMatDiag_1 = q_acc_1_1;
             const walberla::float64 elMatDiag_2 = q_acc_2_2;
             const walberla::float64 elMatDiag_3 = q_acc_3_3;
             const walberla::float64 elMatDiag_4 = q_acc_4_4;
             const walberla::float64 elMatDiag_5 = q_acc_5_5;
             const walberla::float64 elMatDiag_6 = q_acc_6_6;
             const walberla::float64 elMatDiag_7 = q_acc_7_7;
             const walberla::float64 elMatDiag_8 = q_acc_8_8;
             const walberla::float64 elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
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
       const walberla::float64 tmp_11_BLUE_UP = jac_affine_0_2_BLUE_UP*jac_affine_1_1_BLUE_UP;
       const walberla::float64 jac_affine_1_2_BLUE_UP = -p_affine_const_0_1_BLUE_UP + p_affine_const_3_1_BLUE_UP;
       const walberla::float64 tmp_9_BLUE_UP = jac_affine_0_1_BLUE_UP*jac_affine_1_2_BLUE_UP;
       const walberla::float64 jac_affine_2_0_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_1_2_BLUE_UP;
       const walberla::float64 jac_affine_2_1_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_2_2_BLUE_UP;
       const walberla::float64 tmp_8_BLUE_UP = jac_affine_1_2_BLUE_UP*jac_affine_2_1_BLUE_UP;
       const walberla::float64 jac_affine_2_2_BLUE_UP = -p_affine_const_0_2_BLUE_UP + p_affine_const_3_2_BLUE_UP;
       const walberla::float64 tmp_7_BLUE_UP = jac_affine_1_1_BLUE_UP*jac_affine_2_2_BLUE_UP;
       const walberla::float64 tmp_10_BLUE_UP = jac_affine_0_1_BLUE_UP*jac_affine_2_2_BLUE_UP;
       const walberla::float64 tmp_12_BLUE_UP = jac_affine_0_0_BLUE_UP*tmp_7_BLUE_UP - jac_affine_0_0_BLUE_UP*tmp_8_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_1_0_BLUE_UP*tmp_10_BLUE_UP - jac_affine_2_0_BLUE_UP*tmp_11_BLUE_UP + jac_affine_2_0_BLUE_UP*tmp_9_BLUE_UP;
       const walberla::float64 tmp_13_BLUE_UP = 1.0 / (tmp_12_BLUE_UP);
       const walberla::float64 jac_affine_inv_0_0_BLUE_UP = tmp_13_BLUE_UP*(tmp_7_BLUE_UP - tmp_8_BLUE_UP);
       const walberla::float64 jac_affine_inv_0_1_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_0_2_BLUE_UP*jac_affine_2_1_BLUE_UP - tmp_10_BLUE_UP);
       const walberla::float64 jac_affine_inv_0_2_BLUE_UP = tmp_13_BLUE_UP*(-tmp_11_BLUE_UP + tmp_9_BLUE_UP);
       const walberla::float64 jac_affine_inv_1_0_BLUE_UP = tmp_13_BLUE_UP*(-jac_affine_1_0_BLUE_UP*jac_affine_2_2_BLUE_UP + jac_affine_1_2_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_1_1_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_0_0_BLUE_UP*jac_affine_2_2_BLUE_UP - jac_affine_0_2_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_1_2_BLUE_UP = tmp_13_BLUE_UP*(-jac_affine_0_0_BLUE_UP*jac_affine_1_2_BLUE_UP + jac_affine_0_2_BLUE_UP*jac_affine_1_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_2_0_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_1_0_BLUE_UP*jac_affine_2_1_BLUE_UP - jac_affine_1_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_2_1_BLUE_UP = tmp_13_BLUE_UP*(-jac_affine_0_0_BLUE_UP*jac_affine_2_1_BLUE_UP + jac_affine_0_1_BLUE_UP*jac_affine_2_0_BLUE_UP);
       const walberla::float64 jac_affine_inv_2_2_BLUE_UP = tmp_13_BLUE_UP*(jac_affine_0_0_BLUE_UP*jac_affine_1_1_BLUE_UP - jac_affine_0_1_BLUE_UP*jac_affine_1_0_BLUE_UP);
       const walberla::float64 abs_det_jac_affine_BLUE_UP = abs(tmp_12_BLUE_UP);
       {
          /* CellType.BLUE_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_3 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_6 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_7 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             walberla::float64 q_acc_3_3 = 0.0;
             walberla::float64 q_acc_4_4 = 0.0;
             walberla::float64 q_acc_5_5 = 0.0;
             walberla::float64 q_acc_6_6 = 0.0;
             walberla::float64 q_acc_7_7 = 0.0;
             walberla::float64 q_acc_8_8 = 0.0;
             walberla::float64 q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const walberla::float64 tmp_q_0 = 4.0*_data_q_p_2[q];
                const walberla::float64 tmp_q_1 = 4.0*_data_q_p_0[q];
                const walberla::float64 tmp_q_2 = 4.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_3 = tmp_q_1 + tmp_q_2;
                const walberla::float64 tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const walberla::float64 tmp_q_5 = tmp_q_1*_data_q_p_1[q];
                const walberla::float64 tmp_q_6 = tmp_q_1*_data_q_p_2[q];
                const walberla::float64 tmp_q_7 = tmp_q_2*_data_q_p_2[q];
                const walberla::float64 tmp_q_8 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const walberla::float64 tmp_q_9 = tmp_q_8*2.0;
                const walberla::float64 tmp_q_10 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const walberla::float64 tmp_q_11 = tmp_q_10*2.0;
                const walberla::float64 tmp_q_12 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const walberla::float64 tmp_q_13 = tmp_q_12*2.0;
                const walberla::float64 tmp_q_14 = tmp_q_5 + tmp_q_6;
                const walberla::float64 tmp_q_15 = abs_det_jac_affine_BLUE_UP*(k_dof_0*(tmp_q_11 + tmp_q_13 + tmp_q_14 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_9 - _data_q_p_0[q]) + k_dof_2*(tmp_q_11 - _data_q_p_1[q]) + k_dof_3*(tmp_q_13 - _data_q_p_2[q]) + k_dof_4*tmp_q_7 + k_dof_5*tmp_q_6 + k_dof_6*tmp_q_5 + k_dof_7*(tmp_q_0 + tmp_q_12*-4.0 - tmp_q_6 - tmp_q_7) + k_dof_8*(tmp_q_10*-4.0 + tmp_q_2 - tmp_q_5 - tmp_q_7) + k_dof_9*(tmp_q_1 - tmp_q_14 + tmp_q_8*-4.0))*_data_q_w[q];
                const walberla::float64 tmp_q_16 = ((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]))*16.0;
                const walberla::float64 tmp_q_17 = ((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]))*16.0;
                const walberla::float64 tmp_q_18 = ((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]))*16.0;
                const walberla::float64 tmp_q_19 = jac_affine_inv_2_0_BLUE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_20 = jac_affine_inv_1_0_BLUE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_21 = jac_affine_inv_2_1_BLUE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_22 = jac_affine_inv_1_1_BLUE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_23 = jac_affine_inv_2_2_BLUE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_24 = jac_affine_inv_1_2_BLUE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_25 = jac_affine_inv_2_0_BLUE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_26 = jac_affine_inv_0_0_BLUE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_27 = jac_affine_inv_2_1_BLUE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_28 = jac_affine_inv_0_1_BLUE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_29 = jac_affine_inv_2_2_BLUE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_30 = jac_affine_inv_0_2_BLUE_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_31 = jac_affine_inv_1_0_BLUE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_32 = jac_affine_inv_0_0_BLUE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_33 = jac_affine_inv_1_1_BLUE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_34 = jac_affine_inv_0_1_BLUE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_35 = jac_affine_inv_1_2_BLUE_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_36 = jac_affine_inv_0_2_BLUE_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_37 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const walberla::float64 tmp_q_38 = tmp_q_0 - 4.0;
                const walberla::float64 tmp_q_39 = -tmp_q_1 - tmp_q_38 - 8.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_40 = -tmp_q_2 - tmp_q_38 - 8.0*_data_q_p_0[q];
                const walberla::float64 q_tmp_0_0 = tmp_q_15*(((jac_affine_inv_0_0_BLUE_UP*tmp_q_4 + jac_affine_inv_1_0_BLUE_UP*tmp_q_4 + jac_affine_inv_2_0_BLUE_UP*tmp_q_4)*(jac_affine_inv_0_0_BLUE_UP*tmp_q_4 + jac_affine_inv_1_0_BLUE_UP*tmp_q_4 + jac_affine_inv_2_0_BLUE_UP*tmp_q_4)) + ((jac_affine_inv_0_1_BLUE_UP*tmp_q_4 + jac_affine_inv_1_1_BLUE_UP*tmp_q_4 + jac_affine_inv_2_1_BLUE_UP*tmp_q_4)*(jac_affine_inv_0_1_BLUE_UP*tmp_q_4 + jac_affine_inv_1_1_BLUE_UP*tmp_q_4 + jac_affine_inv_2_1_BLUE_UP*tmp_q_4)) + ((jac_affine_inv_0_2_BLUE_UP*tmp_q_4 + jac_affine_inv_1_2_BLUE_UP*tmp_q_4 + jac_affine_inv_2_2_BLUE_UP*tmp_q_4)*(jac_affine_inv_0_2_BLUE_UP*tmp_q_4 + jac_affine_inv_1_2_BLUE_UP*tmp_q_4 + jac_affine_inv_2_2_BLUE_UP*tmp_q_4)));
                const walberla::float64 q_tmp_1_1 = tmp_q_15*((jac_affine_inv_0_0_BLUE_UP*jac_affine_inv_0_0_BLUE_UP)*tmp_q_16 + (jac_affine_inv_0_1_BLUE_UP*jac_affine_inv_0_1_BLUE_UP)*tmp_q_16 + (jac_affine_inv_0_2_BLUE_UP*jac_affine_inv_0_2_BLUE_UP)*tmp_q_16);
                const walberla::float64 q_tmp_2_2 = tmp_q_15*((jac_affine_inv_1_0_BLUE_UP*jac_affine_inv_1_0_BLUE_UP)*tmp_q_17 + (jac_affine_inv_1_1_BLUE_UP*jac_affine_inv_1_1_BLUE_UP)*tmp_q_17 + (jac_affine_inv_1_2_BLUE_UP*jac_affine_inv_1_2_BLUE_UP)*tmp_q_17);
                const walberla::float64 q_tmp_3_3 = tmp_q_15*((jac_affine_inv_2_0_BLUE_UP*jac_affine_inv_2_0_BLUE_UP)*tmp_q_18 + (jac_affine_inv_2_1_BLUE_UP*jac_affine_inv_2_1_BLUE_UP)*tmp_q_18 + (jac_affine_inv_2_2_BLUE_UP*jac_affine_inv_2_2_BLUE_UP)*tmp_q_18);
                const walberla::float64 q_tmp_4_4 = tmp_q_15*(((tmp_q_19 + tmp_q_20)*(tmp_q_19 + tmp_q_20))*16.0 + ((tmp_q_21 + tmp_q_22)*(tmp_q_21 + tmp_q_22))*16.0 + ((tmp_q_23 + tmp_q_24)*(tmp_q_23 + tmp_q_24))*16.0);
                const walberla::float64 q_tmp_5_5 = tmp_q_15*(((tmp_q_25 + tmp_q_26)*(tmp_q_25 + tmp_q_26))*16.0 + ((tmp_q_27 + tmp_q_28)*(tmp_q_27 + tmp_q_28))*16.0 + ((tmp_q_29 + tmp_q_30)*(tmp_q_29 + tmp_q_30))*16.0);
                const walberla::float64 q_tmp_6_6 = tmp_q_15*(((tmp_q_31 + tmp_q_32)*(tmp_q_31 + tmp_q_32))*16.0 + ((tmp_q_33 + tmp_q_34)*(tmp_q_33 + tmp_q_34))*16.0 + ((tmp_q_35 + tmp_q_36)*(tmp_q_35 + tmp_q_36))*16.0);
                const walberla::float64 q_tmp_7_7 = tmp_q_15*(((jac_affine_inv_2_0_BLUE_UP*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26)*(jac_affine_inv_2_0_BLUE_UP*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26))*16.0 + ((jac_affine_inv_2_1_BLUE_UP*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28)*(jac_affine_inv_2_1_BLUE_UP*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28))*16.0 + ((jac_affine_inv_2_2_BLUE_UP*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30)*(jac_affine_inv_2_2_BLUE_UP*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30))*16.0);
                const walberla::float64 q_tmp_8_8 = tmp_q_15*(((jac_affine_inv_1_0_BLUE_UP*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32)*(jac_affine_inv_1_0_BLUE_UP*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32))*16.0 + ((jac_affine_inv_1_1_BLUE_UP*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34)*(jac_affine_inv_1_1_BLUE_UP*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34))*16.0 + ((jac_affine_inv_1_2_BLUE_UP*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36)*(jac_affine_inv_1_2_BLUE_UP*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36))*16.0);
                const walberla::float64 q_tmp_9_9 = tmp_q_15*(((jac_affine_inv_0_0_BLUE_UP*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31)*(jac_affine_inv_0_0_BLUE_UP*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31))*16.0 + ((jac_affine_inv_0_1_BLUE_UP*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33)*(jac_affine_inv_0_1_BLUE_UP*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33))*16.0 + ((jac_affine_inv_0_2_BLUE_UP*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35)*(jac_affine_inv_0_2_BLUE_UP*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35))*16.0);
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
             }
             const walberla::float64 elMatDiag_0 = q_acc_0_0;
             const walberla::float64 elMatDiag_1 = q_acc_1_1;
             const walberla::float64 elMatDiag_2 = q_acc_2_2;
             const walberla::float64 elMatDiag_3 = q_acc_3_3;
             const walberla::float64 elMatDiag_4 = q_acc_4_4;
             const walberla::float64 elMatDiag_5 = q_acc_5_5;
             const walberla::float64 elMatDiag_6 = q_acc_6_6;
             const walberla::float64 elMatDiag_7 = q_acc_7_7;
             const walberla::float64 elMatDiag_8 = q_acc_8_8;
             const walberla::float64 elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const walberla::float64 tmp_14_BLUE_DOWN = jac_affine_0_2_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN;
       const walberla::float64 jac_affine_1_2_BLUE_DOWN = -p_affine_const_0_1_BLUE_DOWN + p_affine_const_3_1_BLUE_DOWN;
       const walberla::float64 tmp_12_BLUE_DOWN = jac_affine_0_1_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_0_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_1_2_BLUE_DOWN;
       const walberla::float64 jac_affine_2_1_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_2_2_BLUE_DOWN;
       const walberla::float64 tmp_11_BLUE_DOWN = jac_affine_1_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN;
       const walberla::float64 jac_affine_2_2_BLUE_DOWN = -p_affine_const_0_2_BLUE_DOWN + p_affine_const_3_2_BLUE_DOWN;
       const walberla::float64 tmp_10_BLUE_DOWN = jac_affine_1_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN;
       const walberla::float64 tmp_13_BLUE_DOWN = jac_affine_0_1_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN;
       const walberla::float64 tmp_15_BLUE_DOWN = jac_affine_0_0_BLUE_DOWN*tmp_10_BLUE_DOWN - jac_affine_0_0_BLUE_DOWN*tmp_11_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_1_0_BLUE_DOWN*tmp_13_BLUE_DOWN + jac_affine_2_0_BLUE_DOWN*tmp_12_BLUE_DOWN - jac_affine_2_0_BLUE_DOWN*tmp_14_BLUE_DOWN;
       const walberla::float64 tmp_16_BLUE_DOWN = 1.0 / (tmp_15_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_0_0_BLUE_DOWN = tmp_16_BLUE_DOWN*(tmp_10_BLUE_DOWN - tmp_11_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_0_1_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_0_2_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - tmp_13_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_0_2_BLUE_DOWN = tmp_16_BLUE_DOWN*(tmp_12_BLUE_DOWN - tmp_14_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_1_0_BLUE_DOWN = tmp_16_BLUE_DOWN*(-jac_affine_1_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN + jac_affine_1_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_1_1_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_0_0_BLUE_DOWN*jac_affine_2_2_BLUE_DOWN - jac_affine_0_2_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_1_2_BLUE_DOWN = tmp_16_BLUE_DOWN*(-jac_affine_0_0_BLUE_DOWN*jac_affine_1_2_BLUE_DOWN + jac_affine_0_2_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_2_0_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_1_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN - jac_affine_1_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_2_1_BLUE_DOWN = tmp_16_BLUE_DOWN*(-jac_affine_0_0_BLUE_DOWN*jac_affine_2_1_BLUE_DOWN + jac_affine_0_1_BLUE_DOWN*jac_affine_2_0_BLUE_DOWN);
       const walberla::float64 jac_affine_inv_2_2_BLUE_DOWN = tmp_16_BLUE_DOWN*(jac_affine_0_0_BLUE_DOWN*jac_affine_1_1_BLUE_DOWN - jac_affine_0_1_BLUE_DOWN*jac_affine_1_0_BLUE_DOWN);
       const walberla::float64 abs_det_jac_affine_BLUE_DOWN = abs(tmp_15_BLUE_DOWN);
       {
          /* CellType.BLUE_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 k_dof_0 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_2 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_3 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_7 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             walberla::float64 q_acc_3_3 = 0.0;
             walberla::float64 q_acc_4_4 = 0.0;
             walberla::float64 q_acc_5_5 = 0.0;
             walberla::float64 q_acc_6_6 = 0.0;
             walberla::float64 q_acc_7_7 = 0.0;
             walberla::float64 q_acc_8_8 = 0.0;
             walberla::float64 q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const walberla::float64 tmp_q_0 = 4.0*_data_q_p_2[q];
                const walberla::float64 tmp_q_1 = 4.0*_data_q_p_0[q];
                const walberla::float64 tmp_q_2 = 4.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_3 = tmp_q_1 + tmp_q_2;
                const walberla::float64 tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const walberla::float64 tmp_q_5 = tmp_q_1*_data_q_p_1[q];
                const walberla::float64 tmp_q_6 = tmp_q_1*_data_q_p_2[q];
                const walberla::float64 tmp_q_7 = tmp_q_2*_data_q_p_2[q];
                const walberla::float64 tmp_q_8 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const walberla::float64 tmp_q_9 = tmp_q_8*2.0;
                const walberla::float64 tmp_q_10 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const walberla::float64 tmp_q_11 = tmp_q_10*2.0;
                const walberla::float64 tmp_q_12 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const walberla::float64 tmp_q_13 = tmp_q_12*2.0;
                const walberla::float64 tmp_q_14 = tmp_q_5 + tmp_q_6;
                const walberla::float64 tmp_q_15 = abs_det_jac_affine_BLUE_DOWN*(k_dof_0*(tmp_q_11 + tmp_q_13 + tmp_q_14 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_9 - _data_q_p_0[q]) + k_dof_2*(tmp_q_11 - _data_q_p_1[q]) + k_dof_3*(tmp_q_13 - _data_q_p_2[q]) + k_dof_4*tmp_q_7 + k_dof_5*tmp_q_6 + k_dof_6*tmp_q_5 + k_dof_7*(tmp_q_0 + tmp_q_12*-4.0 - tmp_q_6 - tmp_q_7) + k_dof_8*(tmp_q_10*-4.0 + tmp_q_2 - tmp_q_5 - tmp_q_7) + k_dof_9*(tmp_q_1 - tmp_q_14 + tmp_q_8*-4.0))*_data_q_w[q];
                const walberla::float64 tmp_q_16 = ((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]))*16.0;
                const walberla::float64 tmp_q_17 = ((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]))*16.0;
                const walberla::float64 tmp_q_18 = ((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]))*16.0;
                const walberla::float64 tmp_q_19 = jac_affine_inv_2_0_BLUE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_20 = jac_affine_inv_1_0_BLUE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_21 = jac_affine_inv_2_1_BLUE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_22 = jac_affine_inv_1_1_BLUE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_23 = jac_affine_inv_2_2_BLUE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_24 = jac_affine_inv_1_2_BLUE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_25 = jac_affine_inv_2_0_BLUE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_26 = jac_affine_inv_0_0_BLUE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_27 = jac_affine_inv_2_1_BLUE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_28 = jac_affine_inv_0_1_BLUE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_29 = jac_affine_inv_2_2_BLUE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_30 = jac_affine_inv_0_2_BLUE_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_31 = jac_affine_inv_1_0_BLUE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_32 = jac_affine_inv_0_0_BLUE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_33 = jac_affine_inv_1_1_BLUE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_34 = jac_affine_inv_0_1_BLUE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_35 = jac_affine_inv_1_2_BLUE_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_36 = jac_affine_inv_0_2_BLUE_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_37 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const walberla::float64 tmp_q_38 = tmp_q_0 - 4.0;
                const walberla::float64 tmp_q_39 = -tmp_q_1 - tmp_q_38 - 8.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_40 = -tmp_q_2 - tmp_q_38 - 8.0*_data_q_p_0[q];
                const walberla::float64 q_tmp_0_0 = tmp_q_15*(((jac_affine_inv_0_0_BLUE_DOWN*tmp_q_4 + jac_affine_inv_1_0_BLUE_DOWN*tmp_q_4 + jac_affine_inv_2_0_BLUE_DOWN*tmp_q_4)*(jac_affine_inv_0_0_BLUE_DOWN*tmp_q_4 + jac_affine_inv_1_0_BLUE_DOWN*tmp_q_4 + jac_affine_inv_2_0_BLUE_DOWN*tmp_q_4)) + ((jac_affine_inv_0_1_BLUE_DOWN*tmp_q_4 + jac_affine_inv_1_1_BLUE_DOWN*tmp_q_4 + jac_affine_inv_2_1_BLUE_DOWN*tmp_q_4)*(jac_affine_inv_0_1_BLUE_DOWN*tmp_q_4 + jac_affine_inv_1_1_BLUE_DOWN*tmp_q_4 + jac_affine_inv_2_1_BLUE_DOWN*tmp_q_4)) + ((jac_affine_inv_0_2_BLUE_DOWN*tmp_q_4 + jac_affine_inv_1_2_BLUE_DOWN*tmp_q_4 + jac_affine_inv_2_2_BLUE_DOWN*tmp_q_4)*(jac_affine_inv_0_2_BLUE_DOWN*tmp_q_4 + jac_affine_inv_1_2_BLUE_DOWN*tmp_q_4 + jac_affine_inv_2_2_BLUE_DOWN*tmp_q_4)));
                const walberla::float64 q_tmp_1_1 = tmp_q_15*((jac_affine_inv_0_0_BLUE_DOWN*jac_affine_inv_0_0_BLUE_DOWN)*tmp_q_16 + (jac_affine_inv_0_1_BLUE_DOWN*jac_affine_inv_0_1_BLUE_DOWN)*tmp_q_16 + (jac_affine_inv_0_2_BLUE_DOWN*jac_affine_inv_0_2_BLUE_DOWN)*tmp_q_16);
                const walberla::float64 q_tmp_2_2 = tmp_q_15*((jac_affine_inv_1_0_BLUE_DOWN*jac_affine_inv_1_0_BLUE_DOWN)*tmp_q_17 + (jac_affine_inv_1_1_BLUE_DOWN*jac_affine_inv_1_1_BLUE_DOWN)*tmp_q_17 + (jac_affine_inv_1_2_BLUE_DOWN*jac_affine_inv_1_2_BLUE_DOWN)*tmp_q_17);
                const walberla::float64 q_tmp_3_3 = tmp_q_15*((jac_affine_inv_2_0_BLUE_DOWN*jac_affine_inv_2_0_BLUE_DOWN)*tmp_q_18 + (jac_affine_inv_2_1_BLUE_DOWN*jac_affine_inv_2_1_BLUE_DOWN)*tmp_q_18 + (jac_affine_inv_2_2_BLUE_DOWN*jac_affine_inv_2_2_BLUE_DOWN)*tmp_q_18);
                const walberla::float64 q_tmp_4_4 = tmp_q_15*(((tmp_q_19 + tmp_q_20)*(tmp_q_19 + tmp_q_20))*16.0 + ((tmp_q_21 + tmp_q_22)*(tmp_q_21 + tmp_q_22))*16.0 + ((tmp_q_23 + tmp_q_24)*(tmp_q_23 + tmp_q_24))*16.0);
                const walberla::float64 q_tmp_5_5 = tmp_q_15*(((tmp_q_25 + tmp_q_26)*(tmp_q_25 + tmp_q_26))*16.0 + ((tmp_q_27 + tmp_q_28)*(tmp_q_27 + tmp_q_28))*16.0 + ((tmp_q_29 + tmp_q_30)*(tmp_q_29 + tmp_q_30))*16.0);
                const walberla::float64 q_tmp_6_6 = tmp_q_15*(((tmp_q_31 + tmp_q_32)*(tmp_q_31 + tmp_q_32))*16.0 + ((tmp_q_33 + tmp_q_34)*(tmp_q_33 + tmp_q_34))*16.0 + ((tmp_q_35 + tmp_q_36)*(tmp_q_35 + tmp_q_36))*16.0);
                const walberla::float64 q_tmp_7_7 = tmp_q_15*(((jac_affine_inv_2_0_BLUE_DOWN*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26)*(jac_affine_inv_2_0_BLUE_DOWN*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26))*16.0 + ((jac_affine_inv_2_1_BLUE_DOWN*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28)*(jac_affine_inv_2_1_BLUE_DOWN*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28))*16.0 + ((jac_affine_inv_2_2_BLUE_DOWN*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30)*(jac_affine_inv_2_2_BLUE_DOWN*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30))*16.0);
                const walberla::float64 q_tmp_8_8 = tmp_q_15*(((jac_affine_inv_1_0_BLUE_DOWN*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32)*(jac_affine_inv_1_0_BLUE_DOWN*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32))*16.0 + ((jac_affine_inv_1_1_BLUE_DOWN*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34)*(jac_affine_inv_1_1_BLUE_DOWN*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34))*16.0 + ((jac_affine_inv_1_2_BLUE_DOWN*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36)*(jac_affine_inv_1_2_BLUE_DOWN*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36))*16.0);
                const walberla::float64 q_tmp_9_9 = tmp_q_15*(((jac_affine_inv_0_0_BLUE_DOWN*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31)*(jac_affine_inv_0_0_BLUE_DOWN*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31))*16.0 + ((jac_affine_inv_0_1_BLUE_DOWN*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33)*(jac_affine_inv_0_1_BLUE_DOWN*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33))*16.0 + ((jac_affine_inv_0_2_BLUE_DOWN*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35)*(jac_affine_inv_0_2_BLUE_DOWN*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35))*16.0);
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
             }
             const walberla::float64 elMatDiag_0 = q_acc_0_0;
             const walberla::float64 elMatDiag_1 = q_acc_1_1;
             const walberla::float64 elMatDiag_2 = q_acc_2_2;
             const walberla::float64 elMatDiag_3 = q_acc_3_3;
             const walberla::float64 elMatDiag_4 = q_acc_4_4;
             const walberla::float64 elMatDiag_5 = q_acc_5_5;
             const walberla::float64 elMatDiag_6 = q_acc_6_6;
             const walberla::float64 elMatDiag_7 = q_acc_7_7;
             const walberla::float64 elMatDiag_8 = q_acc_8_8;
             const walberla::float64 elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const walberla::float64 tmp_11_GREEN_UP = jac_affine_0_2_GREEN_UP*jac_affine_1_1_GREEN_UP;
       const walberla::float64 jac_affine_1_2_GREEN_UP = -p_affine_const_0_1_GREEN_UP + p_affine_const_3_1_GREEN_UP;
       const walberla::float64 tmp_9_GREEN_UP = jac_affine_0_1_GREEN_UP*jac_affine_1_2_GREEN_UP;
       const walberla::float64 jac_affine_2_0_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_1_2_GREEN_UP;
       const walberla::float64 jac_affine_2_1_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_2_2_GREEN_UP;
       const walberla::float64 tmp_8_GREEN_UP = jac_affine_1_2_GREEN_UP*jac_affine_2_1_GREEN_UP;
       const walberla::float64 jac_affine_2_2_GREEN_UP = -p_affine_const_0_2_GREEN_UP + p_affine_const_3_2_GREEN_UP;
       const walberla::float64 tmp_7_GREEN_UP = jac_affine_1_1_GREEN_UP*jac_affine_2_2_GREEN_UP;
       const walberla::float64 tmp_10_GREEN_UP = jac_affine_0_1_GREEN_UP*jac_affine_2_2_GREEN_UP;
       const walberla::float64 tmp_12_GREEN_UP = jac_affine_0_0_GREEN_UP*tmp_7_GREEN_UP - jac_affine_0_0_GREEN_UP*tmp_8_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_1_0_GREEN_UP*tmp_10_GREEN_UP - jac_affine_2_0_GREEN_UP*tmp_11_GREEN_UP + jac_affine_2_0_GREEN_UP*tmp_9_GREEN_UP;
       const walberla::float64 tmp_13_GREEN_UP = 1.0 / (tmp_12_GREEN_UP);
       const walberla::float64 jac_affine_inv_0_0_GREEN_UP = tmp_13_GREEN_UP*(tmp_7_GREEN_UP - tmp_8_GREEN_UP);
       const walberla::float64 jac_affine_inv_0_1_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_0_2_GREEN_UP*jac_affine_2_1_GREEN_UP - tmp_10_GREEN_UP);
       const walberla::float64 jac_affine_inv_0_2_GREEN_UP = tmp_13_GREEN_UP*(-tmp_11_GREEN_UP + tmp_9_GREEN_UP);
       const walberla::float64 jac_affine_inv_1_0_GREEN_UP = tmp_13_GREEN_UP*(-jac_affine_1_0_GREEN_UP*jac_affine_2_2_GREEN_UP + jac_affine_1_2_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_1_1_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_0_0_GREEN_UP*jac_affine_2_2_GREEN_UP - jac_affine_0_2_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_1_2_GREEN_UP = tmp_13_GREEN_UP*(-jac_affine_0_0_GREEN_UP*jac_affine_1_2_GREEN_UP + jac_affine_0_2_GREEN_UP*jac_affine_1_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_2_0_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_1_0_GREEN_UP*jac_affine_2_1_GREEN_UP - jac_affine_1_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_2_1_GREEN_UP = tmp_13_GREEN_UP*(-jac_affine_0_0_GREEN_UP*jac_affine_2_1_GREEN_UP + jac_affine_0_1_GREEN_UP*jac_affine_2_0_GREEN_UP);
       const walberla::float64 jac_affine_inv_2_2_GREEN_UP = tmp_13_GREEN_UP*(jac_affine_0_0_GREEN_UP*jac_affine_1_1_GREEN_UP - jac_affine_0_1_GREEN_UP*jac_affine_1_0_GREEN_UP);
       const walberla::float64 abs_det_jac_affine_GREEN_UP = abs(tmp_12_GREEN_UP);
       {
          /* CellType.GREEN_UP */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_2 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_3 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_7 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             walberla::float64 q_acc_3_3 = 0.0;
             walberla::float64 q_acc_4_4 = 0.0;
             walberla::float64 q_acc_5_5 = 0.0;
             walberla::float64 q_acc_6_6 = 0.0;
             walberla::float64 q_acc_7_7 = 0.0;
             walberla::float64 q_acc_8_8 = 0.0;
             walberla::float64 q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const walberla::float64 tmp_q_0 = 4.0*_data_q_p_2[q];
                const walberla::float64 tmp_q_1 = 4.0*_data_q_p_0[q];
                const walberla::float64 tmp_q_2 = 4.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_3 = tmp_q_1 + tmp_q_2;
                const walberla::float64 tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const walberla::float64 tmp_q_5 = tmp_q_1*_data_q_p_1[q];
                const walberla::float64 tmp_q_6 = tmp_q_1*_data_q_p_2[q];
                const walberla::float64 tmp_q_7 = tmp_q_2*_data_q_p_2[q];
                const walberla::float64 tmp_q_8 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const walberla::float64 tmp_q_9 = tmp_q_8*2.0;
                const walberla::float64 tmp_q_10 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const walberla::float64 tmp_q_11 = tmp_q_10*2.0;
                const walberla::float64 tmp_q_12 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const walberla::float64 tmp_q_13 = tmp_q_12*2.0;
                const walberla::float64 tmp_q_14 = tmp_q_5 + tmp_q_6;
                const walberla::float64 tmp_q_15 = abs_det_jac_affine_GREEN_UP*(k_dof_0*(tmp_q_11 + tmp_q_13 + tmp_q_14 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_9 - _data_q_p_0[q]) + k_dof_2*(tmp_q_11 - _data_q_p_1[q]) + k_dof_3*(tmp_q_13 - _data_q_p_2[q]) + k_dof_4*tmp_q_7 + k_dof_5*tmp_q_6 + k_dof_6*tmp_q_5 + k_dof_7*(tmp_q_0 + tmp_q_12*-4.0 - tmp_q_6 - tmp_q_7) + k_dof_8*(tmp_q_10*-4.0 + tmp_q_2 - tmp_q_5 - tmp_q_7) + k_dof_9*(tmp_q_1 - tmp_q_14 + tmp_q_8*-4.0))*_data_q_w[q];
                const walberla::float64 tmp_q_16 = ((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]))*16.0;
                const walberla::float64 tmp_q_17 = ((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]))*16.0;
                const walberla::float64 tmp_q_18 = ((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]))*16.0;
                const walberla::float64 tmp_q_19 = jac_affine_inv_2_0_GREEN_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_20 = jac_affine_inv_1_0_GREEN_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_21 = jac_affine_inv_2_1_GREEN_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_22 = jac_affine_inv_1_1_GREEN_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_23 = jac_affine_inv_2_2_GREEN_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_24 = jac_affine_inv_1_2_GREEN_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_25 = jac_affine_inv_2_0_GREEN_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_26 = jac_affine_inv_0_0_GREEN_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_27 = jac_affine_inv_2_1_GREEN_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_28 = jac_affine_inv_0_1_GREEN_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_29 = jac_affine_inv_2_2_GREEN_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_30 = jac_affine_inv_0_2_GREEN_UP*_data_q_p_2[q];
                const walberla::float64 tmp_q_31 = jac_affine_inv_1_0_GREEN_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_32 = jac_affine_inv_0_0_GREEN_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_33 = jac_affine_inv_1_1_GREEN_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_34 = jac_affine_inv_0_1_GREEN_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_35 = jac_affine_inv_1_2_GREEN_UP*_data_q_p_0[q];
                const walberla::float64 tmp_q_36 = jac_affine_inv_0_2_GREEN_UP*_data_q_p_1[q];
                const walberla::float64 tmp_q_37 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const walberla::float64 tmp_q_38 = tmp_q_0 - 4.0;
                const walberla::float64 tmp_q_39 = -tmp_q_1 - tmp_q_38 - 8.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_40 = -tmp_q_2 - tmp_q_38 - 8.0*_data_q_p_0[q];
                const walberla::float64 q_tmp_0_0 = tmp_q_15*(((jac_affine_inv_0_0_GREEN_UP*tmp_q_4 + jac_affine_inv_1_0_GREEN_UP*tmp_q_4 + jac_affine_inv_2_0_GREEN_UP*tmp_q_4)*(jac_affine_inv_0_0_GREEN_UP*tmp_q_4 + jac_affine_inv_1_0_GREEN_UP*tmp_q_4 + jac_affine_inv_2_0_GREEN_UP*tmp_q_4)) + ((jac_affine_inv_0_1_GREEN_UP*tmp_q_4 + jac_affine_inv_1_1_GREEN_UP*tmp_q_4 + jac_affine_inv_2_1_GREEN_UP*tmp_q_4)*(jac_affine_inv_0_1_GREEN_UP*tmp_q_4 + jac_affine_inv_1_1_GREEN_UP*tmp_q_4 + jac_affine_inv_2_1_GREEN_UP*tmp_q_4)) + ((jac_affine_inv_0_2_GREEN_UP*tmp_q_4 + jac_affine_inv_1_2_GREEN_UP*tmp_q_4 + jac_affine_inv_2_2_GREEN_UP*tmp_q_4)*(jac_affine_inv_0_2_GREEN_UP*tmp_q_4 + jac_affine_inv_1_2_GREEN_UP*tmp_q_4 + jac_affine_inv_2_2_GREEN_UP*tmp_q_4)));
                const walberla::float64 q_tmp_1_1 = tmp_q_15*((jac_affine_inv_0_0_GREEN_UP*jac_affine_inv_0_0_GREEN_UP)*tmp_q_16 + (jac_affine_inv_0_1_GREEN_UP*jac_affine_inv_0_1_GREEN_UP)*tmp_q_16 + (jac_affine_inv_0_2_GREEN_UP*jac_affine_inv_0_2_GREEN_UP)*tmp_q_16);
                const walberla::float64 q_tmp_2_2 = tmp_q_15*((jac_affine_inv_1_0_GREEN_UP*jac_affine_inv_1_0_GREEN_UP)*tmp_q_17 + (jac_affine_inv_1_1_GREEN_UP*jac_affine_inv_1_1_GREEN_UP)*tmp_q_17 + (jac_affine_inv_1_2_GREEN_UP*jac_affine_inv_1_2_GREEN_UP)*tmp_q_17);
                const walberla::float64 q_tmp_3_3 = tmp_q_15*((jac_affine_inv_2_0_GREEN_UP*jac_affine_inv_2_0_GREEN_UP)*tmp_q_18 + (jac_affine_inv_2_1_GREEN_UP*jac_affine_inv_2_1_GREEN_UP)*tmp_q_18 + (jac_affine_inv_2_2_GREEN_UP*jac_affine_inv_2_2_GREEN_UP)*tmp_q_18);
                const walberla::float64 q_tmp_4_4 = tmp_q_15*(((tmp_q_19 + tmp_q_20)*(tmp_q_19 + tmp_q_20))*16.0 + ((tmp_q_21 + tmp_q_22)*(tmp_q_21 + tmp_q_22))*16.0 + ((tmp_q_23 + tmp_q_24)*(tmp_q_23 + tmp_q_24))*16.0);
                const walberla::float64 q_tmp_5_5 = tmp_q_15*(((tmp_q_25 + tmp_q_26)*(tmp_q_25 + tmp_q_26))*16.0 + ((tmp_q_27 + tmp_q_28)*(tmp_q_27 + tmp_q_28))*16.0 + ((tmp_q_29 + tmp_q_30)*(tmp_q_29 + tmp_q_30))*16.0);
                const walberla::float64 q_tmp_6_6 = tmp_q_15*(((tmp_q_31 + tmp_q_32)*(tmp_q_31 + tmp_q_32))*16.0 + ((tmp_q_33 + tmp_q_34)*(tmp_q_33 + tmp_q_34))*16.0 + ((tmp_q_35 + tmp_q_36)*(tmp_q_35 + tmp_q_36))*16.0);
                const walberla::float64 q_tmp_7_7 = tmp_q_15*(((jac_affine_inv_2_0_GREEN_UP*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26)*(jac_affine_inv_2_0_GREEN_UP*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26))*16.0 + ((jac_affine_inv_2_1_GREEN_UP*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28)*(jac_affine_inv_2_1_GREEN_UP*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28))*16.0 + ((jac_affine_inv_2_2_GREEN_UP*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30)*(jac_affine_inv_2_2_GREEN_UP*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30))*16.0);
                const walberla::float64 q_tmp_8_8 = tmp_q_15*(((jac_affine_inv_1_0_GREEN_UP*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32)*(jac_affine_inv_1_0_GREEN_UP*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32))*16.0 + ((jac_affine_inv_1_1_GREEN_UP*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34)*(jac_affine_inv_1_1_GREEN_UP*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34))*16.0 + ((jac_affine_inv_1_2_GREEN_UP*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36)*(jac_affine_inv_1_2_GREEN_UP*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36))*16.0);
                const walberla::float64 q_tmp_9_9 = tmp_q_15*(((jac_affine_inv_0_0_GREEN_UP*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31)*(jac_affine_inv_0_0_GREEN_UP*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31))*16.0 + ((jac_affine_inv_0_1_GREEN_UP*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33)*(jac_affine_inv_0_1_GREEN_UP*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33))*16.0 + ((jac_affine_inv_0_2_GREEN_UP*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35)*(jac_affine_inv_0_2_GREEN_UP*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35))*16.0);
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
             }
             const walberla::float64 elMatDiag_0 = q_acc_0_0;
             const walberla::float64 elMatDiag_1 = q_acc_1_1;
             const walberla::float64 elMatDiag_2 = q_acc_2_2;
             const walberla::float64 elMatDiag_3 = q_acc_3_3;
             const walberla::float64 elMatDiag_4 = q_acc_4_4;
             const walberla::float64 elMatDiag_5 = q_acc_5_5;
             const walberla::float64 elMatDiag_6 = q_acc_6_6;
             const walberla::float64 elMatDiag_7 = q_acc_7_7;
             const walberla::float64 elMatDiag_8 = q_acc_8_8;
             const walberla::float64 elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
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
       const walberla::float64 tmp_14_GREEN_DOWN = jac_affine_0_2_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN;
       const walberla::float64 jac_affine_1_2_GREEN_DOWN = -p_affine_const_0_1_GREEN_DOWN + p_affine_const_3_1_GREEN_DOWN;
       const walberla::float64 tmp_12_GREEN_DOWN = jac_affine_0_1_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_0_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_1_2_GREEN_DOWN;
       const walberla::float64 jac_affine_2_1_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_2_2_GREEN_DOWN;
       const walberla::float64 tmp_11_GREEN_DOWN = jac_affine_1_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN;
       const walberla::float64 jac_affine_2_2_GREEN_DOWN = -p_affine_const_0_2_GREEN_DOWN + p_affine_const_3_2_GREEN_DOWN;
       const walberla::float64 tmp_10_GREEN_DOWN = jac_affine_1_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN;
       const walberla::float64 tmp_13_GREEN_DOWN = jac_affine_0_1_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN;
       const walberla::float64 tmp_15_GREEN_DOWN = jac_affine_0_0_GREEN_DOWN*tmp_10_GREEN_DOWN - jac_affine_0_0_GREEN_DOWN*tmp_11_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_1_0_GREEN_DOWN*tmp_13_GREEN_DOWN + jac_affine_2_0_GREEN_DOWN*tmp_12_GREEN_DOWN - jac_affine_2_0_GREEN_DOWN*tmp_14_GREEN_DOWN;
       const walberla::float64 tmp_16_GREEN_DOWN = 1.0 / (tmp_15_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_0_0_GREEN_DOWN = tmp_16_GREEN_DOWN*(tmp_10_GREEN_DOWN - tmp_11_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_0_1_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_0_2_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - tmp_13_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_0_2_GREEN_DOWN = tmp_16_GREEN_DOWN*(tmp_12_GREEN_DOWN - tmp_14_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_1_0_GREEN_DOWN = tmp_16_GREEN_DOWN*(-jac_affine_1_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN + jac_affine_1_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_1_1_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_0_0_GREEN_DOWN*jac_affine_2_2_GREEN_DOWN - jac_affine_0_2_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_1_2_GREEN_DOWN = tmp_16_GREEN_DOWN*(-jac_affine_0_0_GREEN_DOWN*jac_affine_1_2_GREEN_DOWN + jac_affine_0_2_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_2_0_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_1_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN - jac_affine_1_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_2_1_GREEN_DOWN = tmp_16_GREEN_DOWN*(-jac_affine_0_0_GREEN_DOWN*jac_affine_2_1_GREEN_DOWN + jac_affine_0_1_GREEN_DOWN*jac_affine_2_0_GREEN_DOWN);
       const walberla::float64 jac_affine_inv_2_2_GREEN_DOWN = tmp_16_GREEN_DOWN*(jac_affine_0_0_GREEN_DOWN*jac_affine_1_1_GREEN_DOWN - jac_affine_0_1_GREEN_DOWN*jac_affine_1_0_GREEN_DOWN);
       const walberla::float64 abs_det_jac_affine_GREEN_DOWN = abs(tmp_15_GREEN_DOWN);
       {
          /* CellType.GREEN_DOWN */
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const walberla::float64 k_dof_0 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_2 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const walberla::float64 k_dof_3 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const walberla::float64 k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_5 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const walberla::float64 k_dof_7 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const walberla::float64 k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const walberla::float64 k_dof_9 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             walberla::float64 q_acc_0_0 = 0.0;
             walberla::float64 q_acc_1_1 = 0.0;
             walberla::float64 q_acc_2_2 = 0.0;
             walberla::float64 q_acc_3_3 = 0.0;
             walberla::float64 q_acc_4_4 = 0.0;
             walberla::float64 q_acc_5_5 = 0.0;
             walberla::float64 q_acc_6_6 = 0.0;
             walberla::float64 q_acc_7_7 = 0.0;
             walberla::float64 q_acc_8_8 = 0.0;
             walberla::float64 q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const walberla::float64 tmp_q_0 = 4.0*_data_q_p_2[q];
                const walberla::float64 tmp_q_1 = 4.0*_data_q_p_0[q];
                const walberla::float64 tmp_q_2 = 4.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_3 = tmp_q_1 + tmp_q_2;
                const walberla::float64 tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const walberla::float64 tmp_q_5 = tmp_q_1*_data_q_p_1[q];
                const walberla::float64 tmp_q_6 = tmp_q_1*_data_q_p_2[q];
                const walberla::float64 tmp_q_7 = tmp_q_2*_data_q_p_2[q];
                const walberla::float64 tmp_q_8 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const walberla::float64 tmp_q_9 = tmp_q_8*2.0;
                const walberla::float64 tmp_q_10 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const walberla::float64 tmp_q_11 = tmp_q_10*2.0;
                const walberla::float64 tmp_q_12 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const walberla::float64 tmp_q_13 = tmp_q_12*2.0;
                const walberla::float64 tmp_q_14 = tmp_q_5 + tmp_q_6;
                const walberla::float64 tmp_q_15 = abs_det_jac_affine_GREEN_DOWN*(k_dof_0*(tmp_q_11 + tmp_q_13 + tmp_q_14 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_9 - _data_q_p_0[q]) + k_dof_2*(tmp_q_11 - _data_q_p_1[q]) + k_dof_3*(tmp_q_13 - _data_q_p_2[q]) + k_dof_4*tmp_q_7 + k_dof_5*tmp_q_6 + k_dof_6*tmp_q_5 + k_dof_7*(tmp_q_0 + tmp_q_12*-4.0 - tmp_q_6 - tmp_q_7) + k_dof_8*(tmp_q_10*-4.0 + tmp_q_2 - tmp_q_5 - tmp_q_7) + k_dof_9*(tmp_q_1 - tmp_q_14 + tmp_q_8*-4.0))*_data_q_w[q];
                const walberla::float64 tmp_q_16 = ((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]))*16.0;
                const walberla::float64 tmp_q_17 = ((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]))*16.0;
                const walberla::float64 tmp_q_18 = ((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]))*16.0;
                const walberla::float64 tmp_q_19 = jac_affine_inv_2_0_GREEN_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_20 = jac_affine_inv_1_0_GREEN_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_21 = jac_affine_inv_2_1_GREEN_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_22 = jac_affine_inv_1_1_GREEN_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_23 = jac_affine_inv_2_2_GREEN_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_24 = jac_affine_inv_1_2_GREEN_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_25 = jac_affine_inv_2_0_GREEN_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_26 = jac_affine_inv_0_0_GREEN_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_27 = jac_affine_inv_2_1_GREEN_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_28 = jac_affine_inv_0_1_GREEN_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_29 = jac_affine_inv_2_2_GREEN_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_30 = jac_affine_inv_0_2_GREEN_DOWN*_data_q_p_2[q];
                const walberla::float64 tmp_q_31 = jac_affine_inv_1_0_GREEN_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_32 = jac_affine_inv_0_0_GREEN_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_33 = jac_affine_inv_1_1_GREEN_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_34 = jac_affine_inv_0_1_GREEN_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_35 = jac_affine_inv_1_2_GREEN_DOWN*_data_q_p_0[q];
                const walberla::float64 tmp_q_36 = jac_affine_inv_0_2_GREEN_DOWN*_data_q_p_1[q];
                const walberla::float64 tmp_q_37 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const walberla::float64 tmp_q_38 = tmp_q_0 - 4.0;
                const walberla::float64 tmp_q_39 = -tmp_q_1 - tmp_q_38 - 8.0*_data_q_p_1[q];
                const walberla::float64 tmp_q_40 = -tmp_q_2 - tmp_q_38 - 8.0*_data_q_p_0[q];
                const walberla::float64 q_tmp_0_0 = tmp_q_15*(((jac_affine_inv_0_0_GREEN_DOWN*tmp_q_4 + jac_affine_inv_1_0_GREEN_DOWN*tmp_q_4 + jac_affine_inv_2_0_GREEN_DOWN*tmp_q_4)*(jac_affine_inv_0_0_GREEN_DOWN*tmp_q_4 + jac_affine_inv_1_0_GREEN_DOWN*tmp_q_4 + jac_affine_inv_2_0_GREEN_DOWN*tmp_q_4)) + ((jac_affine_inv_0_1_GREEN_DOWN*tmp_q_4 + jac_affine_inv_1_1_GREEN_DOWN*tmp_q_4 + jac_affine_inv_2_1_GREEN_DOWN*tmp_q_4)*(jac_affine_inv_0_1_GREEN_DOWN*tmp_q_4 + jac_affine_inv_1_1_GREEN_DOWN*tmp_q_4 + jac_affine_inv_2_1_GREEN_DOWN*tmp_q_4)) + ((jac_affine_inv_0_2_GREEN_DOWN*tmp_q_4 + jac_affine_inv_1_2_GREEN_DOWN*tmp_q_4 + jac_affine_inv_2_2_GREEN_DOWN*tmp_q_4)*(jac_affine_inv_0_2_GREEN_DOWN*tmp_q_4 + jac_affine_inv_1_2_GREEN_DOWN*tmp_q_4 + jac_affine_inv_2_2_GREEN_DOWN*tmp_q_4)));
                const walberla::float64 q_tmp_1_1 = tmp_q_15*((jac_affine_inv_0_0_GREEN_DOWN*jac_affine_inv_0_0_GREEN_DOWN)*tmp_q_16 + (jac_affine_inv_0_1_GREEN_DOWN*jac_affine_inv_0_1_GREEN_DOWN)*tmp_q_16 + (jac_affine_inv_0_2_GREEN_DOWN*jac_affine_inv_0_2_GREEN_DOWN)*tmp_q_16);
                const walberla::float64 q_tmp_2_2 = tmp_q_15*((jac_affine_inv_1_0_GREEN_DOWN*jac_affine_inv_1_0_GREEN_DOWN)*tmp_q_17 + (jac_affine_inv_1_1_GREEN_DOWN*jac_affine_inv_1_1_GREEN_DOWN)*tmp_q_17 + (jac_affine_inv_1_2_GREEN_DOWN*jac_affine_inv_1_2_GREEN_DOWN)*tmp_q_17);
                const walberla::float64 q_tmp_3_3 = tmp_q_15*((jac_affine_inv_2_0_GREEN_DOWN*jac_affine_inv_2_0_GREEN_DOWN)*tmp_q_18 + (jac_affine_inv_2_1_GREEN_DOWN*jac_affine_inv_2_1_GREEN_DOWN)*tmp_q_18 + (jac_affine_inv_2_2_GREEN_DOWN*jac_affine_inv_2_2_GREEN_DOWN)*tmp_q_18);
                const walberla::float64 q_tmp_4_4 = tmp_q_15*(((tmp_q_19 + tmp_q_20)*(tmp_q_19 + tmp_q_20))*16.0 + ((tmp_q_21 + tmp_q_22)*(tmp_q_21 + tmp_q_22))*16.0 + ((tmp_q_23 + tmp_q_24)*(tmp_q_23 + tmp_q_24))*16.0);
                const walberla::float64 q_tmp_5_5 = tmp_q_15*(((tmp_q_25 + tmp_q_26)*(tmp_q_25 + tmp_q_26))*16.0 + ((tmp_q_27 + tmp_q_28)*(tmp_q_27 + tmp_q_28))*16.0 + ((tmp_q_29 + tmp_q_30)*(tmp_q_29 + tmp_q_30))*16.0);
                const walberla::float64 q_tmp_6_6 = tmp_q_15*(((tmp_q_31 + tmp_q_32)*(tmp_q_31 + tmp_q_32))*16.0 + ((tmp_q_33 + tmp_q_34)*(tmp_q_33 + tmp_q_34))*16.0 + ((tmp_q_35 + tmp_q_36)*(tmp_q_35 + tmp_q_36))*16.0);
                const walberla::float64 q_tmp_7_7 = tmp_q_15*(((jac_affine_inv_2_0_GREEN_DOWN*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26)*(jac_affine_inv_2_0_GREEN_DOWN*tmp_q_37*0.25 - tmp_q_20 - tmp_q_26))*16.0 + ((jac_affine_inv_2_1_GREEN_DOWN*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28)*(jac_affine_inv_2_1_GREEN_DOWN*tmp_q_37*0.25 - tmp_q_22 - tmp_q_28))*16.0 + ((jac_affine_inv_2_2_GREEN_DOWN*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30)*(jac_affine_inv_2_2_GREEN_DOWN*tmp_q_37*0.25 - tmp_q_24 - tmp_q_30))*16.0);
                const walberla::float64 q_tmp_8_8 = tmp_q_15*(((jac_affine_inv_1_0_GREEN_DOWN*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32)*(jac_affine_inv_1_0_GREEN_DOWN*tmp_q_39*0.25 - tmp_q_19 - tmp_q_32))*16.0 + ((jac_affine_inv_1_1_GREEN_DOWN*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34)*(jac_affine_inv_1_1_GREEN_DOWN*tmp_q_39*0.25 - tmp_q_21 - tmp_q_34))*16.0 + ((jac_affine_inv_1_2_GREEN_DOWN*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36)*(jac_affine_inv_1_2_GREEN_DOWN*tmp_q_39*0.25 - tmp_q_23 - tmp_q_36))*16.0);
                const walberla::float64 q_tmp_9_9 = tmp_q_15*(((jac_affine_inv_0_0_GREEN_DOWN*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31)*(jac_affine_inv_0_0_GREEN_DOWN*tmp_q_40*0.25 - tmp_q_25 - tmp_q_31))*16.0 + ((jac_affine_inv_0_1_GREEN_DOWN*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33)*(jac_affine_inv_0_1_GREEN_DOWN*tmp_q_40*0.25 - tmp_q_27 - tmp_q_33))*16.0 + ((jac_affine_inv_0_2_GREEN_DOWN*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35)*(jac_affine_inv_0_2_GREEN_DOWN*tmp_q_40*0.25 - tmp_q_29 - tmp_q_35))*16.0);
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
             }
             const walberla::float64 elMatDiag_0 = q_acc_0_0;
             const walberla::float64 elMatDiag_1 = q_acc_1_1;
             const walberla::float64 elMatDiag_2 = q_acc_2_2;
             const walberla::float64 elMatDiag_3 = q_acc_3_3;
             const walberla::float64 elMatDiag_4 = q_acc_4_4;
             const walberla::float64 elMatDiag_5 = q_acc_5_5;
             const walberla::float64 elMatDiag_6 = q_acc_6_6;
             const walberla::float64 elMatDiag_7 = q_acc_7_7;
             const walberla::float64 elMatDiag_8 = q_acc_8_8;
             const walberla::float64 elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
