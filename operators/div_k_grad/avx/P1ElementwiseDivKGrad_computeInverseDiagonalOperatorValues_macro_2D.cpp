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

























#include "../P1ElementwiseDivKGrad.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseDivKGrad::computeInverseDiagonalOperatorValues_macro_2D( double * RESTRICT  _data_invDiag_, double * RESTRICT  _data_k, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float ) const
{
    {
       const double _data_q_w [] = {0.166666666666667, 0.166666666666667, 0.166666666666667};
   
       const double _data_q_p_0 [] = {0.166666666666667, 0.666666666666667, 0.166666666666667};
   
       const double _data_q_p_1 [] = {0.166666666666667, 0.166666666666667, 0.666666666666667};
   
       const double p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const double p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const double p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const double p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const double p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const double jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const double jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const double jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const double jac_affine_inv_0_0 = jac_affine_1_1*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double jac_affine_inv_0_1 = -jac_affine_0_1*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double jac_affine_inv_1_0 = -jac_affine_1_0*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double jac_affine_inv_1_1 = jac_affine_0_0*1.0 / (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double abs_det_jac_affine = fabs(jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const double Dummy_3697 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const double Dummy_3698 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const double Dummy_3699 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3700 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3701 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3702 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3703 = -Dummy_3697 + Dummy_3699;
       const double Dummy_3704 = -Dummy_3697 + Dummy_3701;
       const double Dummy_3705 = -Dummy_3698 + Dummy_3700;
       const double Dummy_3706 = -Dummy_3698 + Dummy_3702;
       const double Dummy_3707 = Dummy_3706*1.0 / (Dummy_3703*Dummy_3706 - Dummy_3704*Dummy_3705);
       const double Dummy_3708 = -Dummy_3704*1.0 / (Dummy_3703*Dummy_3706 - Dummy_3704*Dummy_3705);
       const double Dummy_3709 = -Dummy_3705*1.0 / (Dummy_3703*Dummy_3706 - Dummy_3704*Dummy_3705);
       const double Dummy_3710 = Dummy_3703*1.0 / (Dummy_3703*Dummy_3706 - Dummy_3704*Dummy_3705);
       const double Dummy_3711 = fabs(Dummy_3703*Dummy_3706 - Dummy_3704*Dummy_3705);
       {
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const __m256d tmp_q_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const double tmp_q_1 = abs_det_jac_affine*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0)),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0))),_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0)),_mm256_mul_pd(_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0)))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1)),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1))),_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1)),_mm256_mul_pd(_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1))))),_mm256_set_pd(tmp_q_1,tmp_q_1,tmp_q_1,tmp_q_1));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_0,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0),_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0))),_mm256_mul_pd(tmp_q_0,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1),_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1)))),_mm256_set_pd(tmp_q_1,tmp_q_1,tmp_q_1,tmp_q_1));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_0,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0),_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0))),_mm256_mul_pd(tmp_q_0,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1),_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1)))),_mm256_set_pd(tmp_q_1,tmp_q_1,tmp_q_1,tmp_q_1));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
             {
                const double k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const double k_dof_1 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const double k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                double q_acc_0_0 = 0.0;
                double q_acc_1_1 = 0.0;
                double q_acc_2_2 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const double tmp_q_0 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q];
                   const double tmp_q_1 = abs_det_jac_affine*_data_q_w[q];
                   const double res_tmp_0_0 = tmp_q_1*((-jac_affine_inv_0_0 - jac_affine_inv_1_0)*(-jac_affine_inv_0_0*tmp_q_0 - jac_affine_inv_1_0*tmp_q_0) + (-jac_affine_inv_0_1 - jac_affine_inv_1_1)*(-jac_affine_inv_0_1*tmp_q_0 - jac_affine_inv_1_1*tmp_q_0));
                   const double res_tmp_1_1 = tmp_q_1*((jac_affine_inv_0_0*jac_affine_inv_0_0)*tmp_q_0 + (jac_affine_inv_0_1*jac_affine_inv_0_1)*tmp_q_0);
                   const double res_tmp_2_2 = tmp_q_1*((jac_affine_inv_1_0*jac_affine_inv_1_0)*tmp_q_0 + (jac_affine_inv_1_1*jac_affine_inv_1_1)*tmp_q_0);
                   q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                }
                const double elMatDiag_0 = q_acc_0_0;
                const double elMatDiag_1 = q_acc_1_1;
                const double elMatDiag_2 = q_acc_2_2;
                _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             }
          }
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const __m256d tmp_q_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const double tmp_q_1 = Dummy_3711*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_3707,Dummy_3707,Dummy_3707,Dummy_3707)),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_3709,Dummy_3709,Dummy_3709,Dummy_3709))),_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(Dummy_3707,Dummy_3707,Dummy_3707,Dummy_3707)),_mm256_mul_pd(_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(Dummy_3709,Dummy_3709,Dummy_3709,Dummy_3709)))),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_3708,Dummy_3708,Dummy_3708,Dummy_3708)),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(Dummy_3710,Dummy_3710,Dummy_3710,Dummy_3710))),_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(Dummy_3708,Dummy_3708,Dummy_3708,Dummy_3708)),_mm256_mul_pd(_mm256_mul_pd(tmp_q_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(Dummy_3710,Dummy_3710,Dummy_3710,Dummy_3710))))),_mm256_set_pd(tmp_q_1,tmp_q_1,tmp_q_1,tmp_q_1));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_0,_mm256_mul_pd(_mm256_set_pd(Dummy_3707,Dummy_3707,Dummy_3707,Dummy_3707),_mm256_set_pd(Dummy_3707,Dummy_3707,Dummy_3707,Dummy_3707))),_mm256_mul_pd(tmp_q_0,_mm256_mul_pd(_mm256_set_pd(Dummy_3708,Dummy_3708,Dummy_3708,Dummy_3708),_mm256_set_pd(Dummy_3708,Dummy_3708,Dummy_3708,Dummy_3708)))),_mm256_set_pd(tmp_q_1,tmp_q_1,tmp_q_1,tmp_q_1));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_0,_mm256_mul_pd(_mm256_set_pd(Dummy_3709,Dummy_3709,Dummy_3709,Dummy_3709),_mm256_set_pd(Dummy_3709,Dummy_3709,Dummy_3709,Dummy_3709))),_mm256_mul_pd(tmp_q_0,_mm256_mul_pd(_mm256_set_pd(Dummy_3710,Dummy_3710,Dummy_3710,Dummy_3710),_mm256_set_pd(Dummy_3710,Dummy_3710,Dummy_3710,Dummy_3710)))),_mm256_set_pd(tmp_q_1,tmp_q_1,tmp_q_1,tmp_q_1));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                }
                const __m256d elMatDiag_0 = q_acc_0_0;
                const __m256d elMatDiag_1 = q_acc_1_1;
                const __m256d elMatDiag_2 = q_acc_2_2;
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatDiag_0,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatDiag_1,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(elMatDiag_2,_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const double k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const double k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const double k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                double q_acc_0_0 = 0.0;
                double q_acc_1_1 = 0.0;
                double q_acc_2_2 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const double tmp_q_0 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q];
                   const double tmp_q_1 = Dummy_3711*_data_q_w[q];
                   const double res_tmp_0_0 = tmp_q_1*((-Dummy_3707 - Dummy_3709)*(-Dummy_3707*tmp_q_0 - Dummy_3709*tmp_q_0) + (-Dummy_3708 - Dummy_3710)*(-Dummy_3708*tmp_q_0 - Dummy_3710*tmp_q_0));
                   const double res_tmp_1_1 = tmp_q_1*((Dummy_3707*Dummy_3707)*tmp_q_0 + (Dummy_3708*Dummy_3708)*tmp_q_0);
                   const double res_tmp_2_2 = tmp_q_1*((Dummy_3709*Dummy_3709)*tmp_q_0 + (Dummy_3710*Dummy_3710)*tmp_q_0);
                   q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                   q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                   q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                }
                const double elMatDiag_0 = q_acc_0_0;
                const double elMatDiag_1 = q_acc_1_1;
                const double elMatDiag_2 = q_acc_2_2;
                _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_1 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
