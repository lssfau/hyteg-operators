/*
* Copyright (c) 2017-2023 Nils Kohl, Daniel Bauer, Fabian Böhm.
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

void P2ElementwiseDivKGrad::computeInverseDiagonalOperatorValues_macro_2D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t * RESTRICT  _data_kEdge, real_t * RESTRICT  _data_kVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.16666666666666674, 0.16666666666666674, 0.16666666666666674};
   
       const real_t _data_q_p_0 [] = {0.16666666666666674, 0.66666666666666674, 0.16666666666666663};
   
       const real_t _data_q_p_1 [] = {0.16666666666666663, 0.16666666666666663, 0.66666666666666685};
   
       const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const real_t jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const real_t jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const real_t jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const real_t jac_affine_inv_0_0 = jac_affine_1_1*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t jac_affine_inv_0_1 = -jac_affine_0_1*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t jac_affine_inv_1_0 = -jac_affine_1_0*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t jac_affine_inv_1_1 = jac_affine_0_0*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t abs_det_jac_affine = abs(jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t Dummy_4609 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t Dummy_4610 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t Dummy_4611 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_4612 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_4613 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_4614 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_4615 = -Dummy_4609 + Dummy_4611;
       const real_t Dummy_4616 = -Dummy_4609 + Dummy_4613;
       const real_t Dummy_4617 = -Dummy_4610 + Dummy_4612;
       const real_t Dummy_4618 = -Dummy_4610 + Dummy_4614;
       const real_t Dummy_4619 = Dummy_4618*1.0 / (Dummy_4615*Dummy_4618 - Dummy_4616*Dummy_4617);
       const real_t Dummy_4620 = -Dummy_4616*1.0 / (Dummy_4615*Dummy_4618 - Dummy_4616*Dummy_4617);
       const real_t Dummy_4621 = -Dummy_4617*1.0 / (Dummy_4615*Dummy_4618 - Dummy_4616*Dummy_4617);
       const real_t Dummy_4622 = Dummy_4615*1.0 / (Dummy_4615*Dummy_4618 - Dummy_4616*Dummy_4617);
       const real_t Dummy_4623 = abs(Dummy_4615*Dummy_4618 - Dummy_4616*Dummy_4617);
       {
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_5 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d k_dof_4 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const __m256d tmp_q_0 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_q_1 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_q_2 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_q_0),tmp_q_1);
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_2,_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0));
                   const __m256d tmp_q_4 = _mm256_mul_pd(tmp_q_2,_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0));
                   const __m256d tmp_q_5 = _mm256_mul_pd(tmp_q_0,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_q_6 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_q_7 = _mm256_mul_pd(tmp_q_6,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_q_8 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_q_9 = _mm256_mul_pd(tmp_q_8,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_q_10 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_1,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_q_7)),_mm256_mul_pd(k_dof_2,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_q_9))),_mm256_mul_pd(k_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_q_5,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_q_0))),_mm256_mul_pd(k_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_8,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_q_5,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_q_1))),_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_q_5),tmp_q_7),tmp_q_9))),_mm256_mul_pd(k_dof_3,tmp_q_5));
                   const __m256d tmp_q_11 = _mm256_mul_pd(tmp_q_2,_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1));
                   const __m256d tmp_q_12 = _mm256_mul_pd(tmp_q_2,_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1));
                   const real_t tmp_q_13 = abs_det_jac_affine*_data_q_w[q];
                   const __m256d tmp_q_14 = _mm256_mul_pd(tmp_q_10,_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_q_0),_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_q_0)));
                   const __m256d tmp_q_15 = _mm256_mul_pd(tmp_q_10,_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_q_1),_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_q_1)));
                   const __m256d tmp_q_16 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0));
                   const __m256d tmp_q_17 = _mm256_mul_pd(tmp_q_0,_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0));
                   const __m256d tmp_q_18 = _mm256_mul_pd(tmp_q_10,tmp_q_16);
                   const __m256d tmp_q_19 = _mm256_mul_pd(tmp_q_10,tmp_q_17);
                   const __m256d tmp_q_20 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1));
                   const __m256d tmp_q_21 = _mm256_mul_pd(tmp_q_0,_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1));
                   const __m256d tmp_q_22 = _mm256_mul_pd(tmp_q_10,tmp_q_20);
                   const __m256d tmp_q_23 = _mm256_mul_pd(tmp_q_10,tmp_q_21);
                   const __m256d tmp_q_24 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_q_25 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_q_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_q_26 = _mm256_mul_pd(tmp_q_25,_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0));
                   const __m256d tmp_q_27 = _mm256_mul_pd(tmp_q_25,_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1));
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(tmp_q_11,tmp_q_12),_mm256_add_pd(_mm256_mul_pd(tmp_q_10,tmp_q_11),_mm256_mul_pd(tmp_q_10,tmp_q_12))),_mm256_mul_pd(_mm256_add_pd(tmp_q_3,tmp_q_4),_mm256_add_pd(_mm256_mul_pd(tmp_q_10,tmp_q_3),_mm256_mul_pd(tmp_q_10,tmp_q_4)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_14,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0),_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0))),_mm256_mul_pd(tmp_q_14,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1),_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_15,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0),_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0))),_mm256_mul_pd(tmp_q_15,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1),_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_3_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(tmp_q_16,tmp_q_17),_mm256_add_pd(tmp_q_18,tmp_q_19)),_mm256_mul_pd(_mm256_add_pd(tmp_q_20,tmp_q_21),_mm256_add_pd(tmp_q_22,tmp_q_23))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_4_4 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_16,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_24,_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0))),_mm256_add_pd(_mm256_mul_pd(tmp_q_18,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_q_10,tmp_q_24),_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0)))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_24,_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1))),_mm256_add_pd(_mm256_mul_pd(tmp_q_22,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_q_10,tmp_q_24),_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1))))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_5_5 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_10,tmp_q_26)),_mm256_add_pd(_mm256_mul_pd(tmp_q_17,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_q_26)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_23,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_10,tmp_q_27)),_mm256_add_pd(_mm256_mul_pd(tmp_q_21,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_q_27))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,res_tmp_3_3);
                   q_acc_4_4 = _mm256_add_pd(q_acc_4_4,res_tmp_4_4);
                   q_acc_5_5 = _mm256_add_pd(q_acc_5_5,res_tmp_5_5);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                const __m256d elMatDiag_3 = q_acc_3_3;
                const __m256d elMatDiag_4 = q_acc_4_4;
                const __m256d elMatDiag_5 = q_acc_5_5;
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatDiag_3,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatDiag_4,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatDiag_5,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
             {
                const real_t k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const real_t k_dof_3 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_3_3 = 0.0;
                real_t q_acc_4_4 = 0.0;
                real_t q_acc_5_5 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const real_t tmp_q_0 = 4.0*_data_q_p_0[q];
                   const real_t tmp_q_1 = 4.0*_data_q_p_1[q];
                   const real_t tmp_q_2 = tmp_q_0 + tmp_q_1 - 3.0;
                   const real_t tmp_q_3 = jac_affine_inv_0_0*tmp_q_2;
                   const real_t tmp_q_4 = jac_affine_inv_1_0*tmp_q_2;
                   const real_t tmp_q_5 = tmp_q_0*_data_q_p_1[q];
                   const real_t tmp_q_6 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_q_7 = tmp_q_6*2.0;
                   const real_t tmp_q_8 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_q_9 = tmp_q_8*2.0;
                   const real_t tmp_q_10 = k_dof_0*(tmp_q_5 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_q_7 - _data_q_p_0[q]) + k_dof_2*(tmp_q_9 - _data_q_p_1[q]) + k_dof_3*tmp_q_5 + k_dof_4*(tmp_q_1 - tmp_q_5 + tmp_q_8*-4.0) + k_dof_5*(tmp_q_0 - tmp_q_5 + tmp_q_6*-4.0);
                   const real_t tmp_q_11 = jac_affine_inv_0_1*tmp_q_2;
                   const real_t tmp_q_12 = jac_affine_inv_1_1*tmp_q_2;
                   const real_t tmp_q_13 = abs_det_jac_affine*_data_q_w[q];
                   const real_t tmp_q_14 = tmp_q_10*((tmp_q_0 - 1.0)*(tmp_q_0 - 1.0));
                   const real_t tmp_q_15 = tmp_q_10*((tmp_q_1 - 1.0)*(tmp_q_1 - 1.0));
                   const real_t tmp_q_16 = jac_affine_inv_0_0*tmp_q_1;
                   const real_t tmp_q_17 = jac_affine_inv_1_0*tmp_q_0;
                   const real_t tmp_q_18 = tmp_q_10*tmp_q_16;
                   const real_t tmp_q_19 = tmp_q_10*tmp_q_17;
                   const real_t tmp_q_20 = jac_affine_inv_0_1*tmp_q_1;
                   const real_t tmp_q_21 = jac_affine_inv_1_1*tmp_q_0;
                   const real_t tmp_q_22 = tmp_q_10*tmp_q_20;
                   const real_t tmp_q_23 = tmp_q_10*tmp_q_21;
                   const real_t tmp_q_24 = -tmp_q_0 - 8.0*_data_q_p_1[q] + 4.0;
                   const real_t tmp_q_25 = -tmp_q_1 - 8.0*_data_q_p_0[q] + 4.0;
                   const real_t tmp_q_26 = jac_affine_inv_0_0*tmp_q_25;
                   const real_t tmp_q_27 = jac_affine_inv_0_1*tmp_q_25;
                   const real_t res_tmp_0_0 = tmp_q_13*((tmp_q_11 + tmp_q_12)*(tmp_q_10*tmp_q_11 + tmp_q_10*tmp_q_12) + (tmp_q_3 + tmp_q_4)*(tmp_q_10*tmp_q_3 + tmp_q_10*tmp_q_4));
                   const real_t res_tmp_1_1 = tmp_q_13*((jac_affine_inv_0_0*jac_affine_inv_0_0)*tmp_q_14 + (jac_affine_inv_0_1*jac_affine_inv_0_1)*tmp_q_14);
                   const real_t res_tmp_2_2 = tmp_q_13*((jac_affine_inv_1_0*jac_affine_inv_1_0)*tmp_q_15 + (jac_affine_inv_1_1*jac_affine_inv_1_1)*tmp_q_15);
                   const real_t res_tmp_3_3 = tmp_q_13*((tmp_q_16 + tmp_q_17)*(tmp_q_18 + tmp_q_19) + (tmp_q_20 + tmp_q_21)*(tmp_q_22 + tmp_q_23));
                   const real_t res_tmp_4_4 = tmp_q_13*((jac_affine_inv_1_0*tmp_q_24 - tmp_q_16)*(jac_affine_inv_1_0*tmp_q_10*tmp_q_24 - tmp_q_18) + (jac_affine_inv_1_1*tmp_q_24 - tmp_q_20)*(jac_affine_inv_1_1*tmp_q_10*tmp_q_24 - tmp_q_22));
                   const real_t res_tmp_5_5 = tmp_q_13*((-tmp_q_17 + tmp_q_26)*(tmp_q_10*tmp_q_26 - tmp_q_19) + (-tmp_q_21 + tmp_q_27)*(tmp_q_10*tmp_q_27 - tmp_q_23));
                   q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                   q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                   q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                   q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
                }
                const real_t elMatDiag_0 = q_acc_0_0;
                const real_t elMatDiag_1 = q_acc_1_1;
                const real_t elMatDiag_2 = q_acc_2_2;
                const real_t elMatDiag_3 = q_acc_3_3;
                const real_t elMatDiag_4 = q_acc_4_4;
                const real_t elMatDiag_5 = q_acc_5_5;
                _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             }
          }
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_5 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_4 = _mm256_loadu_pd(& _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_5_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const __m256d tmp_q_0 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_q_1 = _mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_q_2 = _mm256_add_pd(_mm256_add_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),tmp_q_0),tmp_q_1);
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_4619,Dummy_4619,Dummy_4619,Dummy_4619));
                   const __m256d tmp_q_4 = _mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_4621,Dummy_4621,Dummy_4621,Dummy_4621));
                   const __m256d tmp_q_5 = _mm256_mul_pd(tmp_q_0,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_q_6 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                   const __m256d tmp_q_7 = _mm256_mul_pd(tmp_q_6,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_q_8 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                   const __m256d tmp_q_9 = _mm256_mul_pd(tmp_q_8,_mm256_set_pd(2.0,2.0,2.0,2.0));
                   const __m256d tmp_q_10 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_1,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_q_7)),_mm256_mul_pd(k_dof_2,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_q_9))),_mm256_mul_pd(k_dof_5,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_q_5,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_q_0))),_mm256_mul_pd(k_dof_4,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_8,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(tmp_q_5,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_q_1))),_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_q_5),tmp_q_7),tmp_q_9))),_mm256_mul_pd(k_dof_3,tmp_q_5));
                   const __m256d tmp_q_11 = _mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_4620,Dummy_4620,Dummy_4620,Dummy_4620));
                   const __m256d tmp_q_12 = _mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_4622,Dummy_4622,Dummy_4622,Dummy_4622));
                   const real_t tmp_q_13 = Dummy_4623*_data_q_w[q];
                   const __m256d tmp_q_14 = _mm256_mul_pd(tmp_q_10,_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_q_0),_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_q_0)));
                   const __m256d tmp_q_15 = _mm256_mul_pd(tmp_q_10,_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_q_1),_mm256_add_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),tmp_q_1)));
                   const __m256d tmp_q_16 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_4619,Dummy_4619,Dummy_4619,Dummy_4619));
                   const __m256d tmp_q_17 = _mm256_mul_pd(tmp_q_0,_mm256_set_pd(Dummy_4621,Dummy_4621,Dummy_4621,Dummy_4621));
                   const __m256d tmp_q_18 = _mm256_mul_pd(tmp_q_10,tmp_q_16);
                   const __m256d tmp_q_19 = _mm256_mul_pd(tmp_q_10,tmp_q_17);
                   const __m256d tmp_q_20 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_4620,Dummy_4620,Dummy_4620,Dummy_4620));
                   const __m256d tmp_q_21 = _mm256_mul_pd(tmp_q_0,_mm256_set_pd(Dummy_4622,Dummy_4622,Dummy_4622,Dummy_4622));
                   const __m256d tmp_q_22 = _mm256_mul_pd(tmp_q_10,tmp_q_20);
                   const __m256d tmp_q_23 = _mm256_mul_pd(tmp_q_10,tmp_q_21);
                   const __m256d tmp_q_24 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_q_25 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-8.0,-8.0,-8.0,-8.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(tmp_q_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(4.0,4.0,4.0,4.0));
                   const __m256d tmp_q_26 = _mm256_mul_pd(tmp_q_25,_mm256_set_pd(Dummy_4619,Dummy_4619,Dummy_4619,Dummy_4619));
                   const __m256d tmp_q_27 = _mm256_mul_pd(tmp_q_25,_mm256_set_pd(Dummy_4620,Dummy_4620,Dummy_4620,Dummy_4620));
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(tmp_q_11,tmp_q_12),_mm256_add_pd(_mm256_mul_pd(tmp_q_10,tmp_q_11),_mm256_mul_pd(tmp_q_10,tmp_q_12))),_mm256_mul_pd(_mm256_add_pd(tmp_q_3,tmp_q_4),_mm256_add_pd(_mm256_mul_pd(tmp_q_10,tmp_q_3),_mm256_mul_pd(tmp_q_10,tmp_q_4)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_14,_mm256_mul_pd(_mm256_set_pd(Dummy_4619,Dummy_4619,Dummy_4619,Dummy_4619),_mm256_set_pd(Dummy_4619,Dummy_4619,Dummy_4619,Dummy_4619))),_mm256_mul_pd(tmp_q_14,_mm256_mul_pd(_mm256_set_pd(Dummy_4620,Dummy_4620,Dummy_4620,Dummy_4620),_mm256_set_pd(Dummy_4620,Dummy_4620,Dummy_4620,Dummy_4620)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_15,_mm256_mul_pd(_mm256_set_pd(Dummy_4621,Dummy_4621,Dummy_4621,Dummy_4621),_mm256_set_pd(Dummy_4621,Dummy_4621,Dummy_4621,Dummy_4621))),_mm256_mul_pd(tmp_q_15,_mm256_mul_pd(_mm256_set_pd(Dummy_4622,Dummy_4622,Dummy_4622,Dummy_4622),_mm256_set_pd(Dummy_4622,Dummy_4622,Dummy_4622,Dummy_4622)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_3_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(tmp_q_16,tmp_q_17),_mm256_add_pd(tmp_q_18,tmp_q_19)),_mm256_mul_pd(_mm256_add_pd(tmp_q_20,tmp_q_21),_mm256_add_pd(tmp_q_22,tmp_q_23))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_4_4 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_16,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_24,_mm256_set_pd(Dummy_4621,Dummy_4621,Dummy_4621,Dummy_4621))),_mm256_add_pd(_mm256_mul_pd(tmp_q_18,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_q_10,tmp_q_24),_mm256_set_pd(Dummy_4621,Dummy_4621,Dummy_4621,Dummy_4621)))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_20,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_24,_mm256_set_pd(Dummy_4622,Dummy_4622,Dummy_4622,Dummy_4622))),_mm256_add_pd(_mm256_mul_pd(tmp_q_22,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(tmp_q_10,tmp_q_24),_mm256_set_pd(Dummy_4622,Dummy_4622,Dummy_4622,Dummy_4622))))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_5_5 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_19,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_10,tmp_q_26)),_mm256_add_pd(_mm256_mul_pd(tmp_q_17,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_q_26)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_23,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_10,tmp_q_27)),_mm256_add_pd(_mm256_mul_pd(tmp_q_21,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_q_27))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,res_tmp_3_3);
                   q_acc_4_4 = _mm256_add_pd(q_acc_4_4,res_tmp_4_4);
                   q_acc_5_5 = _mm256_add_pd(q_acc_5_5,res_tmp_5_5);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                const __m256d elMatDiag_3 = q_acc_3_3;
                const __m256d elMatDiag_4 = q_acc_4_4;
                const __m256d elMatDiag_5 = q_acc_5_5;
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_3,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_4,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(elMatDiag_5,_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                const real_t k_dof_3 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_3_3 = 0.0;
                real_t q_acc_4_4 = 0.0;
                real_t q_acc_5_5 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const real_t tmp_q_0 = 4.0*_data_q_p_0[q];
                   const real_t tmp_q_1 = 4.0*_data_q_p_1[q];
                   const real_t tmp_q_2 = tmp_q_0 + tmp_q_1 - 3.0;
                   const real_t tmp_q_3 = Dummy_4619*tmp_q_2;
                   const real_t tmp_q_4 = Dummy_4621*tmp_q_2;
                   const real_t tmp_q_5 = tmp_q_0*_data_q_p_1[q];
                   const real_t tmp_q_6 = (_data_q_p_0[q]*_data_q_p_0[q]);
                   const real_t tmp_q_7 = tmp_q_6*2.0;
                   const real_t tmp_q_8 = (_data_q_p_1[q]*_data_q_p_1[q]);
                   const real_t tmp_q_9 = tmp_q_8*2.0;
                   const real_t tmp_q_10 = k_dof_0*(tmp_q_5 + tmp_q_7 + tmp_q_9 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0) + k_dof_1*(tmp_q_7 - _data_q_p_0[q]) + k_dof_2*(tmp_q_9 - _data_q_p_1[q]) + k_dof_3*tmp_q_5 + k_dof_4*(tmp_q_1 - tmp_q_5 + tmp_q_8*-4.0) + k_dof_5*(tmp_q_0 - tmp_q_5 + tmp_q_6*-4.0);
                   const real_t tmp_q_11 = Dummy_4620*tmp_q_2;
                   const real_t tmp_q_12 = Dummy_4622*tmp_q_2;
                   const real_t tmp_q_13 = Dummy_4623*_data_q_w[q];
                   const real_t tmp_q_14 = tmp_q_10*((tmp_q_0 - 1.0)*(tmp_q_0 - 1.0));
                   const real_t tmp_q_15 = tmp_q_10*((tmp_q_1 - 1.0)*(tmp_q_1 - 1.0));
                   const real_t tmp_q_16 = Dummy_4619*tmp_q_1;
                   const real_t tmp_q_17 = Dummy_4621*tmp_q_0;
                   const real_t tmp_q_18 = tmp_q_10*tmp_q_16;
                   const real_t tmp_q_19 = tmp_q_10*tmp_q_17;
                   const real_t tmp_q_20 = Dummy_4620*tmp_q_1;
                   const real_t tmp_q_21 = Dummy_4622*tmp_q_0;
                   const real_t tmp_q_22 = tmp_q_10*tmp_q_20;
                   const real_t tmp_q_23 = tmp_q_10*tmp_q_21;
                   const real_t tmp_q_24 = -tmp_q_0 - 8.0*_data_q_p_1[q] + 4.0;
                   const real_t tmp_q_25 = -tmp_q_1 - 8.0*_data_q_p_0[q] + 4.0;
                   const real_t tmp_q_26 = Dummy_4619*tmp_q_25;
                   const real_t tmp_q_27 = Dummy_4620*tmp_q_25;
                   const real_t res_tmp_0_0 = tmp_q_13*((tmp_q_11 + tmp_q_12)*(tmp_q_10*tmp_q_11 + tmp_q_10*tmp_q_12) + (tmp_q_3 + tmp_q_4)*(tmp_q_10*tmp_q_3 + tmp_q_10*tmp_q_4));
                   const real_t res_tmp_1_1 = tmp_q_13*((Dummy_4619*Dummy_4619)*tmp_q_14 + (Dummy_4620*Dummy_4620)*tmp_q_14);
                   const real_t res_tmp_2_2 = tmp_q_13*((Dummy_4621*Dummy_4621)*tmp_q_15 + (Dummy_4622*Dummy_4622)*tmp_q_15);
                   const real_t res_tmp_3_3 = tmp_q_13*((tmp_q_16 + tmp_q_17)*(tmp_q_18 + tmp_q_19) + (tmp_q_20 + tmp_q_21)*(tmp_q_22 + tmp_q_23));
                   const real_t res_tmp_4_4 = tmp_q_13*((Dummy_4621*tmp_q_24 - tmp_q_16)*(Dummy_4621*tmp_q_10*tmp_q_24 - tmp_q_18) + (Dummy_4622*tmp_q_24 - tmp_q_20)*(Dummy_4622*tmp_q_10*tmp_q_24 - tmp_q_22));
                   const real_t res_tmp_5_5 = tmp_q_13*((-tmp_q_17 + tmp_q_26)*(tmp_q_10*tmp_q_26 - tmp_q_19) + (-tmp_q_21 + tmp_q_27)*(tmp_q_10*tmp_q_27 - tmp_q_23));
                   q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                   q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                   q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                   q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
                }
                const real_t elMatDiag_0 = q_acc_0_0;
                const real_t elMatDiag_1 = q_acc_1_1;
                const real_t elMatDiag_2 = q_acc_2_2;
                const real_t elMatDiag_3 = q_acc_3_3;
                const real_t elMatDiag_4 = q_acc_4_4;
                const real_t elMatDiag_5 = q_acc_5_5;
                _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_3 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
