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

void P1ElementwiseDivKGrad::apply_macro_2D( double * RESTRICT  _data_dst, double * RESTRICT  _data_k, double * RESTRICT  _data_src, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float ) const
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
       const double tmp_q_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0;
       const double tmp_q_4 = -jac_affine_inv_0_1 - jac_affine_inv_1_1;
       const double Dummy_3055 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const double Dummy_3056 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const double Dummy_3057 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3058 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3059 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3060 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3061 = -Dummy_3055 + Dummy_3057;
       const double Dummy_3062 = -Dummy_3055 + Dummy_3059;
       const double Dummy_3063 = -Dummy_3056 + Dummy_3058;
       const double Dummy_3064 = -Dummy_3056 + Dummy_3060;
       const double Dummy_3065 = Dummy_3064*1.0 / (Dummy_3061*Dummy_3064 - Dummy_3062*Dummy_3063);
       const double Dummy_3066 = -Dummy_3062*1.0 / (Dummy_3061*Dummy_3064 - Dummy_3062*Dummy_3063);
       const double Dummy_3067 = -Dummy_3063*1.0 / (Dummy_3061*Dummy_3064 - Dummy_3062*Dummy_3063);
       const double Dummy_3068 = Dummy_3061*1.0 / (Dummy_3061*Dummy_3064 - Dummy_3062*Dummy_3063);
       const double Dummy_3069 = fabs(Dummy_3061*Dummy_3064 - Dummy_3062*Dummy_3063);
       const double Dummy_3070 = -Dummy_3065 - Dummy_3067;
       const double Dummy_3071 = -Dummy_3066 - Dummy_3068;
       {
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const __m256d tmp_q_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_q_2 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0));
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0));
                   const __m256d tmp_q_5 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1));
                   const __m256d tmp_q_6 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1));
                   const double tmp_q_7 = abs_det_jac_affine*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(tmp_q_0,tmp_q_0,tmp_q_0,tmp_q_0)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_5,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(tmp_q_4,tmp_q_4,tmp_q_4,tmp_q_4))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_0_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(tmp_q_0,tmp_q_0,tmp_q_0,tmp_q_0)),_mm256_mul_pd(tmp_q_5,_mm256_set_pd(tmp_q_4,tmp_q_4,tmp_q_4,tmp_q_4))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_0_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(tmp_q_0,tmp_q_0,tmp_q_0,tmp_q_0)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(tmp_q_4,tmp_q_4,tmp_q_4,tmp_q_4))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0),_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1),_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1)))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_1_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0)),_mm256_mul_pd(tmp_q_5,_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0),_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1),_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1)))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,res_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,res_tmp_0_2);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,res_tmp_1_2);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                }
                __m256d q_acc_1_0 = q_acc_0_1;
                __m256d q_acc_2_0 = q_acc_0_2;
                __m256d q_acc_2_1 = q_acc_1_2;
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
             {
                const double src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const double src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const double src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const double k_dof_1 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const double k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const double k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                double q_acc_0_0 = 0.0;
                double q_acc_0_1 = 0.0;
                double q_acc_0_2 = 0.0;
                double q_acc_1_1 = 0.0;
                double q_acc_1_2 = 0.0;
                double q_acc_2_2 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const double tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q];
                   const double tmp_q_2 = jac_affine_inv_0_0*tmp_q_1;
                   const double tmp_q_3 = jac_affine_inv_1_0*tmp_q_1;
                   const double tmp_q_5 = jac_affine_inv_0_1*tmp_q_1;
                   const double tmp_q_6 = jac_affine_inv_1_1*tmp_q_1;
                   const double tmp_q_7 = abs_det_jac_affine*_data_q_w[q];
                   const double res_tmp_0_0 = tmp_q_7*(tmp_q_0*(-tmp_q_2 - tmp_q_3) + tmp_q_4*(-tmp_q_5 - tmp_q_6));
                   const double res_tmp_0_1 = tmp_q_7*(tmp_q_0*tmp_q_2 + tmp_q_4*tmp_q_5);
                   const double res_tmp_0_2 = tmp_q_7*(tmp_q_0*tmp_q_3 + tmp_q_4*tmp_q_6);
                   const double res_tmp_1_1 = tmp_q_7*((jac_affine_inv_0_0*jac_affine_inv_0_0)*tmp_q_1 + (jac_affine_inv_0_1*jac_affine_inv_0_1)*tmp_q_1);
                   const double res_tmp_1_2 = tmp_q_7*(jac_affine_inv_1_0*tmp_q_2 + jac_affine_inv_1_1*tmp_q_5);
                   const double res_tmp_2_2 = tmp_q_7*((jac_affine_inv_1_0*jac_affine_inv_1_0)*tmp_q_1 + (jac_affine_inv_1_1*jac_affine_inv_1_1)*tmp_q_1);
                   q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                   q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                   q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                }
                double q_acc_1_0 = q_acc_0_1;
                double q_acc_2_0 = q_acc_0_2;
                double q_acc_2_1 = q_acc_1_2;
                const double elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2;
                const double elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2;
                const double elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2;
                _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             }
          }
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const __m256d tmp_q_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                   const __m256d tmp_q_2 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3065,Dummy_3065,Dummy_3065,Dummy_3065));
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3067,Dummy_3067,Dummy_3067,Dummy_3067));
                   const __m256d tmp_q_5 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3066,Dummy_3066,Dummy_3066,Dummy_3066));
                   const __m256d tmp_q_6 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3068,Dummy_3068,Dummy_3068,Dummy_3068));
                   const double tmp_q_7 = Dummy_3069*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3070,Dummy_3070,Dummy_3070,Dummy_3070)),_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_5,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3071,Dummy_3071,Dummy_3071,Dummy_3071))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_0_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3070,Dummy_3070,Dummy_3070,Dummy_3070)),_mm256_mul_pd(tmp_q_5,_mm256_set_pd(Dummy_3071,Dummy_3071,Dummy_3071,Dummy_3071))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_0_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3070,Dummy_3070,Dummy_3070,Dummy_3070)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3071,Dummy_3071,Dummy_3071,Dummy_3071))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3065,Dummy_3065,Dummy_3065,Dummy_3065),_mm256_set_pd(Dummy_3065,Dummy_3065,Dummy_3065,Dummy_3065))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3066,Dummy_3066,Dummy_3066,Dummy_3066),_mm256_set_pd(Dummy_3066,Dummy_3066,Dummy_3066,Dummy_3066)))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_1_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3067,Dummy_3067,Dummy_3067,Dummy_3067)),_mm256_mul_pd(tmp_q_5,_mm256_set_pd(Dummy_3068,Dummy_3068,Dummy_3068,Dummy_3068))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3067,Dummy_3067,Dummy_3067,Dummy_3067),_mm256_set_pd(Dummy_3067,Dummy_3067,Dummy_3067,Dummy_3067))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3068,Dummy_3068,Dummy_3068,Dummy_3068),_mm256_set_pd(Dummy_3068,Dummy_3068,Dummy_3068,Dummy_3068)))),_mm256_set_pd(tmp_q_7,tmp_q_7,tmp_q_7,tmp_q_7));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,res_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,res_tmp_0_2);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,res_tmp_1_2);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                }
                __m256d q_acc_1_0 = q_acc_0_1;
                __m256d q_acc_2_0 = q_acc_0_2;
                __m256d q_acc_2_1 = q_acc_1_2;
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const double src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const double src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const double src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const double k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const double k_dof_0 = _data_k[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const double k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                double q_acc_0_0 = 0.0;
                double q_acc_0_1 = 0.0;
                double q_acc_0_2 = 0.0;
                double q_acc_1_1 = 0.0;
                double q_acc_1_2 = 0.0;
                double q_acc_2_2 = 0.0;
                for (int64_t q = 0; q < 3; q += 1)
                {
                   const double tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q];
                   const double tmp_q_2 = Dummy_3065*tmp_q_1;
                   const double tmp_q_3 = Dummy_3067*tmp_q_1;
                   const double tmp_q_5 = Dummy_3066*tmp_q_1;
                   const double tmp_q_6 = Dummy_3068*tmp_q_1;
                   const double tmp_q_7 = Dummy_3069*_data_q_w[q];
                   const double res_tmp_0_0 = tmp_q_7*(Dummy_3070*(-tmp_q_2 - tmp_q_3) + Dummy_3071*(-tmp_q_5 - tmp_q_6));
                   const double res_tmp_0_1 = tmp_q_7*(Dummy_3070*tmp_q_2 + Dummy_3071*tmp_q_5);
                   const double res_tmp_0_2 = tmp_q_7*(Dummy_3070*tmp_q_3 + Dummy_3071*tmp_q_6);
                   const double res_tmp_1_1 = tmp_q_7*((Dummy_3065*Dummy_3065)*tmp_q_1 + (Dummy_3066*Dummy_3066)*tmp_q_1);
                   const double res_tmp_1_2 = tmp_q_7*(Dummy_3067*tmp_q_2 + Dummy_3068*tmp_q_5);
                   const double res_tmp_2_2 = tmp_q_7*((Dummy_3067*Dummy_3067)*tmp_q_1 + (Dummy_3068*Dummy_3068)*tmp_q_1);
                   q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                   q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                   q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                   q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                   q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                   q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                }
                double q_acc_1_0 = q_acc_0_1;
                double q_acc_2_0 = q_acc_0_2;
                double q_acc_2_1 = q_acc_1_2;
                const double elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2;
                const double elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2;
                const double elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2;
                _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
