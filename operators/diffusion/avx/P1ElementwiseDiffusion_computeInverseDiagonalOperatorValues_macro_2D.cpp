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

























#include "../P1ElementwiseDiffusion.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseDiffusion::computeInverseDiagonalOperatorValues_macro_2D( real_t * RESTRICT  _data_invDiag_, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_GRAY_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + tmp_GRAY_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + tmp_GRAY_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + tmp_GRAY_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + tmp_GRAY_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const real_t jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const real_t jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const real_t jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const real_t tmp_GRAY_1 = jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0;
       const real_t tmp_GRAY_2 = 1.0 / (tmp_GRAY_1);
       const real_t jac_affine_inv_0_0 = jac_affine_1_1*tmp_GRAY_2;
       const real_t jac_affine_inv_0_1 = -jac_affine_0_1*tmp_GRAY_2;
       const real_t jac_affine_inv_1_0 = -jac_affine_1_0*tmp_GRAY_2;
       const real_t jac_affine_inv_1_1 = jac_affine_0_0*tmp_GRAY_2;
       const real_t abs_det_jac_affine = abs(tmp_GRAY_1);
       const real_t tmp_0 = abs_det_jac_affine*0.50000000000000089;
       const real_t elMatDiag_0 = tmp_0*(((-jac_affine_inv_0_0 - jac_affine_inv_1_0)*(-jac_affine_inv_0_0 - jac_affine_inv_1_0)) + ((-jac_affine_inv_0_1 - jac_affine_inv_1_1)*(-jac_affine_inv_0_1 - jac_affine_inv_1_1)));
       const real_t elMatDiag_1 = tmp_0*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1));
       const real_t elMatDiag_2 = tmp_0*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1));
       const real_t tmp_BLUE_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_BLUE_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_BLUE_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_BLUE_3 = tmp_BLUE_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_BLUE_4 = tmp_BLUE_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t Dummy_2512 = tmp_BLUE_1;
       const real_t Dummy_2513 = tmp_BLUE_2;
       const real_t Dummy_2514 = macro_vertex_coord_id_0comp0 + tmp_BLUE_3;
       const real_t Dummy_2515 = macro_vertex_coord_id_0comp1 + tmp_BLUE_4;
       const real_t Dummy_2516 = tmp_BLUE_1 + tmp_BLUE_3;
       const real_t Dummy_2517 = tmp_BLUE_2 + tmp_BLUE_4;
       const real_t Dummy_2518 = -Dummy_2512 + Dummy_2514;
       const real_t Dummy_2519 = -Dummy_2512 + Dummy_2516;
       const real_t Dummy_2520 = -Dummy_2513 + Dummy_2515;
       const real_t Dummy_2521 = -Dummy_2513 + Dummy_2517;
       const real_t tmp_BLUE_5 = Dummy_2518*Dummy_2521 - Dummy_2519*Dummy_2520;
       const real_t tmp_BLUE_6 = 1.0 / (tmp_BLUE_5);
       const real_t Dummy_2522 = Dummy_2521*tmp_BLUE_6;
       const real_t Dummy_2523 = -Dummy_2519*tmp_BLUE_6;
       const real_t Dummy_2524 = -Dummy_2520*tmp_BLUE_6;
       const real_t Dummy_2525 = Dummy_2518*tmp_BLUE_6;
       const real_t Dummy_2526 = abs(tmp_BLUE_5);
       const real_t Dummy_2527 = Dummy_2526*0.50000000000000089;
       const real_t Dummy_2528 = Dummy_2527*(((-Dummy_2522 - Dummy_2524)*(-Dummy_2522 - Dummy_2524)) + ((-Dummy_2523 - Dummy_2525)*(-Dummy_2523 - Dummy_2525)));
       const real_t Dummy_2529 = Dummy_2527*((Dummy_2522*Dummy_2522) + (Dummy_2523*Dummy_2523));
       const real_t Dummy_2530 = Dummy_2527*((Dummy_2524*Dummy_2524) + (Dummy_2525*Dummy_2525));
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                {
                   {
                      _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_set_pd(elMatDiag_0,elMatDiag_0,elMatDiag_0,elMatDiag_0),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_set_pd(elMatDiag_1,elMatDiag_1,elMatDiag_1,elMatDiag_1),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_set_pd(elMatDiag_2,elMatDiag_2,elMatDiag_2,elMatDiag_2),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                   }
                }
                {
                   {
                      _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_2528,Dummy_2528,Dummy_2528,Dummy_2528),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_set_pd(Dummy_2529,Dummy_2529,Dummy_2529,Dummy_2529),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_2530,Dummy_2530,Dummy_2530,Dummy_2530),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                {
                   {
                      _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                      _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   }
                }
                {
                   {
                      _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_2528 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_2529 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_2530 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   }
                }
             }
          }
          {
             {
                {
                   _data_invDiag_[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = elMatDiag_0 + _data_invDiag_[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                   _data_invDiag_[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatDiag_1 + _data_invDiag_[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_invDiag_[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1] = elMatDiag_2 + _data_invDiag_[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
