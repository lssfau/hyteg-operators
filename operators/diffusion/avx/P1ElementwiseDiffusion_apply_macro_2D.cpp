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

























#include "../P1ElementwiseDiffusion.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseDiffusion::apply_macro_2D( walberla::float64 * RESTRICT  _data_dst, walberla::float64 * RESTRICT  _data_src, walberla::float64 macro_vertex_coord_id_0comp0, walberla::float64 macro_vertex_coord_id_0comp1, walberla::float64 macro_vertex_coord_id_1comp0, walberla::float64 macro_vertex_coord_id_1comp1, walberla::float64 macro_vertex_coord_id_2comp0, walberla::float64 macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, walberla::float64 micro_edges_per_macro_edge_float ) const
{
    {
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
       const walberla::float64 Dummy_719 = -jac_affine_inv_0_0_GRAY - jac_affine_inv_1_0_GRAY;
       const walberla::float64 Dummy_720 = -jac_affine_inv_0_1_GRAY - jac_affine_inv_1_1_GRAY;
       const walberla::float64 Dummy_721 = abs_det_jac_affine_GRAY*0.50000000000000089;
       const walberla::float64 tmp_4 = Dummy_719*jac_affine_inv_0_0_GRAY + Dummy_720*jac_affine_inv_0_1_GRAY;
       const walberla::float64 tmp_6 = Dummy_719*jac_affine_inv_1_0_GRAY + Dummy_720*jac_affine_inv_1_1_GRAY;
       const walberla::float64 tmp_8 = jac_affine_inv_0_0_GRAY*jac_affine_inv_1_0_GRAY + jac_affine_inv_0_1_GRAY*jac_affine_inv_1_1_GRAY;
       const walberla::float64 Dummy_725 = -jac_affine_inv_0_0_BLUE - jac_affine_inv_1_0_BLUE;
       const walberla::float64 Dummy_726 = -jac_affine_inv_0_1_BLUE - jac_affine_inv_1_1_BLUE;
       const walberla::float64 Dummy_727 = abs_det_jac_affine_BLUE*0.50000000000000089;
       const walberla::float64 Dummy_728 = Dummy_725*jac_affine_inv_0_0_BLUE + Dummy_726*jac_affine_inv_0_1_BLUE;
       const walberla::float64 Dummy_729 = Dummy_725*jac_affine_inv_1_0_BLUE + Dummy_726*jac_affine_inv_1_1_BLUE;
       const walberla::float64 Dummy_731 = jac_affine_inv_0_0_BLUE*jac_affine_inv_1_0_BLUE + jac_affine_inv_0_1_BLUE*jac_affine_inv_1_1_BLUE;
       const walberla::float64 Dummy_735 = -jac_affine_inv_0_0_GRAY - jac_affine_inv_1_0_GRAY;
       const walberla::float64 Dummy_736 = -jac_affine_inv_0_1_GRAY - jac_affine_inv_1_1_GRAY;
       const walberla::float64 Dummy_737 = abs_det_jac_affine_GRAY*0.50000000000000089;
       const walberla::float64 Dummy_738 = Dummy_735*jac_affine_inv_0_0_GRAY + Dummy_736*jac_affine_inv_0_1_GRAY;
       const walberla::float64 Dummy_739 = Dummy_735*jac_affine_inv_1_0_GRAY + Dummy_736*jac_affine_inv_1_1_GRAY;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_3 = _mm256_mul_pd(src_dof_0,_mm256_set_pd(Dummy_721,Dummy_721,Dummy_721,Dummy_721));
                const __m256d tmp_5 = _mm256_mul_pd(src_dof_1,_mm256_set_pd(Dummy_721,Dummy_721,Dummy_721,Dummy_721));
                const __m256d tmp_7 = _mm256_mul_pd(src_dof_2,_mm256_set_pd(Dummy_721,Dummy_721,Dummy_721,Dummy_721));
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_3,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_719,Dummy_719,Dummy_719,Dummy_719),_mm256_set_pd(Dummy_719,Dummy_719,Dummy_719,Dummy_719)),_mm256_mul_pd(_mm256_set_pd(Dummy_720,Dummy_720,Dummy_720,Dummy_720),_mm256_set_pd(Dummy_720,Dummy_720,Dummy_720,Dummy_720)))),_mm256_mul_pd(tmp_5,_mm256_set_pd(tmp_4,tmp_4,tmp_4,tmp_4))),_mm256_mul_pd(tmp_7,_mm256_set_pd(tmp_6,tmp_6,tmp_6,tmp_6)));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_5,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY),_mm256_set_pd(jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY,jac_affine_inv_0_0_GRAY)),_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY),_mm256_set_pd(jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY,jac_affine_inv_0_1_GRAY)))),_mm256_mul_pd(tmp_3,_mm256_set_pd(tmp_4,tmp_4,tmp_4,tmp_4))),_mm256_mul_pd(tmp_7,_mm256_set_pd(tmp_8,tmp_8,tmp_8,tmp_8)));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_7,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY),_mm256_set_pd(jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY,jac_affine_inv_1_0_GRAY)),_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY),_mm256_set_pd(jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY,jac_affine_inv_1_1_GRAY)))),_mm256_mul_pd(tmp_3,_mm256_set_pd(tmp_6,tmp_6,tmp_6,tmp_6))),_mm256_mul_pd(tmp_5,_mm256_set_pd(tmp_8,tmp_8,tmp_8,tmp_8)));
                {
                   {
                      _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                   }
                }
                const __m256d Dummy_722 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d Dummy_723 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d Dummy_724 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_3_BLUE = _mm256_mul_pd(Dummy_722,_mm256_set_pd(Dummy_727,Dummy_727,Dummy_727,Dummy_727));
                const __m256d tmp_5_BLUE = _mm256_mul_pd(Dummy_723,_mm256_set_pd(Dummy_727,Dummy_727,Dummy_727,Dummy_727));
                const __m256d Dummy_730 = _mm256_mul_pd(Dummy_724,_mm256_set_pd(Dummy_727,Dummy_727,Dummy_727,Dummy_727));
                const __m256d Dummy_732 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_3_BLUE,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(Dummy_725,Dummy_725,Dummy_725,Dummy_725),_mm256_set_pd(Dummy_725,Dummy_725,Dummy_725,Dummy_725)),_mm256_mul_pd(_mm256_set_pd(Dummy_726,Dummy_726,Dummy_726,Dummy_726),_mm256_set_pd(Dummy_726,Dummy_726,Dummy_726,Dummy_726)))),_mm256_mul_pd(tmp_5_BLUE,_mm256_set_pd(Dummy_728,Dummy_728,Dummy_728,Dummy_728))),_mm256_mul_pd(Dummy_730,_mm256_set_pd(Dummy_729,Dummy_729,Dummy_729,Dummy_729)));
                const __m256d Dummy_733 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_5_BLUE,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE),_mm256_set_pd(jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE,jac_affine_inv_0_0_BLUE)),_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE),_mm256_set_pd(jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE,jac_affine_inv_0_1_BLUE)))),_mm256_mul_pd(tmp_3_BLUE,_mm256_set_pd(Dummy_728,Dummy_728,Dummy_728,Dummy_728))),_mm256_mul_pd(Dummy_730,_mm256_set_pd(Dummy_731,Dummy_731,Dummy_731,Dummy_731)));
                const __m256d Dummy_734 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(Dummy_730,_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE),_mm256_set_pd(jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE,jac_affine_inv_1_0_BLUE)),_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE),_mm256_set_pd(jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE,jac_affine_inv_1_1_BLUE)))),_mm256_mul_pd(tmp_3_BLUE,_mm256_set_pd(Dummy_729,Dummy_729,Dummy_729,Dummy_729))),_mm256_mul_pd(tmp_5_BLUE,_mm256_set_pd(Dummy_731,Dummy_731,Dummy_731,Dummy_731)));
                {
                   {
                      _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(Dummy_732,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(Dummy_733,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(Dummy_734,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const walberla::float64 src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                const walberla::float64 src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const walberla::float64 src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const walberla::float64 tmp_3 = Dummy_721*src_dof_0;
                const walberla::float64 tmp_5 = Dummy_721*src_dof_1;
                const walberla::float64 tmp_7 = Dummy_721*src_dof_2;
                const walberla::float64 elMatVec_0 = tmp_3*((Dummy_719*Dummy_719) + (Dummy_720*Dummy_720)) + tmp_4*tmp_5 + tmp_6*tmp_7;
                const walberla::float64 elMatVec_1 = tmp_3*tmp_4 + tmp_5*((jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY) + (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY)) + tmp_7*tmp_8;
                const walberla::float64 elMatVec_2 = tmp_3*tmp_6 + tmp_5*tmp_8 + tmp_7*((jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY) + (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY));
                {
                   {
                      _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                      _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   }
                }
                const walberla::float64 Dummy_722 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                const walberla::float64 Dummy_723 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                const walberla::float64 Dummy_724 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                const walberla::float64 tmp_3_BLUE = Dummy_722*Dummy_727;
                const walberla::float64 tmp_5_BLUE = Dummy_723*Dummy_727;
                const walberla::float64 Dummy_730 = Dummy_724*Dummy_727;
                const walberla::float64 Dummy_732 = Dummy_728*tmp_5_BLUE + Dummy_729*Dummy_730 + tmp_3_BLUE*((Dummy_725*Dummy_725) + (Dummy_726*Dummy_726));
                const walberla::float64 Dummy_733 = Dummy_728*tmp_3_BLUE + Dummy_730*Dummy_731 + tmp_5_BLUE*((jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE) + (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE));
                const walberla::float64 Dummy_734 = Dummy_729*tmp_3_BLUE + Dummy_730*((jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE) + (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE)) + Dummy_731*tmp_5_BLUE;
                {
                   {
                      _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_732 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_733 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_734 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   }
                }
             }
          }
          const walberla::float64 src_dof_0 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const walberla::float64 src_dof_1 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
          const walberla::float64 src_dof_2 = _data_src[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
          const walberla::float64 tmp_3 = Dummy_737*src_dof_0;
          const walberla::float64 tmp_5 = Dummy_737*src_dof_1;
          const walberla::float64 tmp_7 = Dummy_737*src_dof_2;
          const walberla::float64 elMatVec_0 = Dummy_738*tmp_5 + Dummy_739*tmp_7 + tmp_3*((Dummy_735*Dummy_735) + (Dummy_736*Dummy_736));
          const walberla::float64 elMatVec_1 = Dummy_738*tmp_3 + tmp_5*((jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY) + (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY)) + tmp_7*tmp_8;
          const walberla::float64 elMatVec_2 = Dummy_739*tmp_3 + tmp_5*tmp_8 + tmp_7*((jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY) + (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY));
          {
             {
                {
                   _data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatVec_0 + _data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                   _data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_1 + _data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dst[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1] = elMatVec_2 + _data_dst[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
