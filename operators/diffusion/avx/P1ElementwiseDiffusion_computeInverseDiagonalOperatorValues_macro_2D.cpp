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

void P1ElementwiseDiffusion::computeInverseDiagonalOperatorValues_macro_2D( real_t * RESTRICT  _data_invDiag_, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_3_BLUE = tmp_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_4_BLUE = tmp_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_0_0_BLUE = tmp_1_BLUE;
       const real_t p_affine_const_0_1_BLUE = tmp_2_BLUE;
       const real_t p_affine_const_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_3_BLUE;
       const real_t p_affine_const_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_4_BLUE;
       const real_t p_affine_const_2_0_BLUE = tmp_1_BLUE + tmp_3_BLUE;
       const real_t p_affine_const_2_1_BLUE = tmp_2_BLUE + tmp_4_BLUE;
       const real_t jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const real_t jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const real_t jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const real_t jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const real_t tmp_5_BLUE = jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE;
       const real_t tmp_6_BLUE = 1.0 / (tmp_5_BLUE);
       const real_t jac_affine_inv_0_0_BLUE = jac_affine_1_1_BLUE*tmp_6_BLUE;
       const real_t jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_6_BLUE;
       const real_t jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_6_BLUE;
       const real_t jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_6_BLUE;
       const real_t abs_det_jac_affine_BLUE = abs(tmp_5_BLUE);
       const real_t tmp_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const real_t jac_affine_0_1_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_2_0_GRAY;
       const real_t jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const real_t jac_affine_1_1_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_2_1_GRAY;
       const real_t tmp_1_GRAY = jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY;
       const real_t tmp_2_GRAY = 1.0 / (tmp_1_GRAY);
       const real_t jac_affine_inv_0_0_GRAY = jac_affine_1_1_GRAY*tmp_2_GRAY;
       const real_t jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_2_GRAY;
       const real_t jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_2_GRAY;
       const real_t jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_2_GRAY;
       const real_t abs_det_jac_affine_GRAY = abs(tmp_1_GRAY);
       const real_t Dummy_1552 = abs_det_jac_affine_GRAY*0.50000000000000089;
       const real_t elMatDiag_0 = Dummy_1552*(((-jac_affine_inv_0_0_GRAY - jac_affine_inv_1_0_GRAY)*(-jac_affine_inv_0_0_GRAY - jac_affine_inv_1_0_GRAY)) + ((-jac_affine_inv_0_1_GRAY - jac_affine_inv_1_1_GRAY)*(-jac_affine_inv_0_1_GRAY - jac_affine_inv_1_1_GRAY)));
       const real_t elMatDiag_1 = Dummy_1552*((jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY) + (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY));
       const real_t elMatDiag_2 = Dummy_1552*((jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY) + (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY));
       const real_t Dummy_1553 = abs_det_jac_affine_BLUE*0.50000000000000089;
       const real_t Dummy_1554 = Dummy_1553*(((-jac_affine_inv_0_0_BLUE - jac_affine_inv_1_0_BLUE)*(-jac_affine_inv_0_0_BLUE - jac_affine_inv_1_0_BLUE)) + ((-jac_affine_inv_0_1_BLUE - jac_affine_inv_1_1_BLUE)*(-jac_affine_inv_0_1_BLUE - jac_affine_inv_1_1_BLUE)));
       const real_t Dummy_1555 = Dummy_1553*((jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE) + (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE));
       const real_t Dummy_1556 = Dummy_1553*((jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE) + (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE));
       const real_t Dummy_1557 = abs_det_jac_affine_GRAY*0.50000000000000089;
       const real_t Dummy_1558 = Dummy_1557*(((-jac_affine_inv_0_0_GRAY - jac_affine_inv_1_0_GRAY)*(-jac_affine_inv_0_0_GRAY - jac_affine_inv_1_0_GRAY)) + ((-jac_affine_inv_0_1_GRAY - jac_affine_inv_1_1_GRAY)*(-jac_affine_inv_0_1_GRAY - jac_affine_inv_1_1_GRAY)));
       const real_t Dummy_1559 = Dummy_1557*((jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY) + (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY));
       const real_t Dummy_1560 = Dummy_1557*((jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY) + (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY));
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
                      _mm256_storeu_pd(&_data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_1554,Dummy_1554,Dummy_1554,Dummy_1554),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_set_pd(Dummy_1555,Dummy_1555,Dummy_1555,Dummy_1555),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(_mm256_set_pd(Dummy_1556,Dummy_1556,Dummy_1556,Dummy_1556),_mm256_loadu_pd(& _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
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
                      _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_1554 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                      _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_1555 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                      _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_1556 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   }
                }
             }
          }
          {
             {
                {
                   _data_invDiag_[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1] = Dummy_1558 + _data_invDiag_[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
                   _data_invDiag_[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))] = Dummy_1559 + _data_invDiag_[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_invDiag_[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1] = Dummy_1560 + _data_invDiag_[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
