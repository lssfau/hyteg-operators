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
* The entire file was generated with the HyTeG Operator Generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/





























#include "../P2ElementwiseMassBoundary.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseMassBoundary::computeInverseDiagonalOperatorValuesScaled_P2ElementwiseMassBoundary_facet_id_1_macro_2D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const real_t jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const real_t tmp_kernel_op_0 = 0.044658198738520456;
       const real_t tmp_kernel_op_1 = tmp_kernel_op_0*2.0;
       const int64_t tmp_kernel_op_2 = 0;
       const real_t tmp_kernel_op_3 = 0.21132486540518713*((real_t)(tmp_kernel_op_2));
       const int64_t tmp_kernel_op_4 = 0;
       const int64_t tmp_kernel_op_5 = tmp_kernel_op_4*2;
       const int64_t tmp_kernel_op_6 = tmp_kernel_op_5 + 1;
       const real_t tmp_kernel_op_7 = pow(abs((jac_affine_0_0_GRAY*jac_affine_0_0_GRAY) + (jac_affine_1_0_GRAY*jac_affine_1_0_GRAY)), 0.5);
       const real_t tmp_kernel_op_8 = tmp_kernel_op_7*0.5;
       const real_t tmp_kernel_op_9 = 0.62200846792814624;
       const real_t tmp_kernel_op_10 = tmp_kernel_op_9*2.0;
       const real_t tmp_kernel_op_11 = 0.78867513459481287*((real_t)(tmp_kernel_op_2));
       const real_t tmp_kernel_op_12 = tmp_kernel_op_7*0.5;
       const int64_t tmp_kernel_op_13 = ((int64_t)((tmp_kernel_op_5*tmp_kernel_op_5)));
       const int64_t tmp_kernel_op_14 = tmp_kernel_op_4*16;
       const int64_t tmp_kernel_op_15 = tmp_kernel_op_4*4;
       const real_t elMatDiag_0 = tmp_kernel_op_12*((tmp_kernel_op_10*0.42264973081037427 + tmp_kernel_op_11*0.42264973081037427 - 1.0 + 0.42264973081037427*((real_t)(tmp_kernel_op_6)))*(tmp_kernel_op_10*0.42264973081037427 + tmp_kernel_op_11*0.42264973081037427 - 1.0 + 0.42264973081037427*((real_t)(tmp_kernel_op_6))))*5.5980762113533142 + tmp_kernel_op_8*((tmp_kernel_op_1 + tmp_kernel_op_3 - 0.6339745962155614 + ((real_t)(tmp_kernel_op_6)))*(tmp_kernel_op_1 + tmp_kernel_op_3 - 0.6339745962155614 + ((real_t)(tmp_kernel_op_6))));
       const real_t elMatDiag_1 = tmp_kernel_op_12*((tmp_kernel_op_10 - 0.78867513459481287)*(tmp_kernel_op_10 - 0.78867513459481287)) + tmp_kernel_op_8*((tmp_kernel_op_1 - 0.21132486540518713)*(tmp_kernel_op_1 - 0.21132486540518713));
       const real_t elMatDiag_2 = tmp_kernel_op_12*((real_t)(tmp_kernel_op_13)) + tmp_kernel_op_8*((real_t)(tmp_kernel_op_13));
       const real_t elMatDiag_3 = tmp_kernel_op_0*tmp_kernel_op_8*((real_t)(tmp_kernel_op_14)) + tmp_kernel_op_12*tmp_kernel_op_9*((real_t)(tmp_kernel_op_14));
       const real_t elMatDiag_4 = tmp_kernel_op_12*((-tmp_kernel_op_11 + ((real_t)(-tmp_kernel_op_15)))*(-tmp_kernel_op_11 + ((real_t)(-tmp_kernel_op_15)))) + tmp_kernel_op_8*((-tmp_kernel_op_3 + ((real_t)(-tmp_kernel_op_15)))*(-tmp_kernel_op_3 + ((real_t)(-tmp_kernel_op_15))));
       const real_t elMatDiag_5 = tmp_kernel_op_12*((tmp_kernel_op_11*-0.25000000000000000 - tmp_kernel_op_9 + 0.78867513459481287)*(tmp_kernel_op_11*-0.25000000000000000 - tmp_kernel_op_9 + 0.78867513459481287))*16.0 + tmp_kernel_op_8*((-tmp_kernel_op_0 + tmp_kernel_op_3*-0.25000000000000000 + 0.21132486540518713)*(-tmp_kernel_op_0 + tmp_kernel_op_3*-0.25000000000000000 + 0.21132486540518713))*16.0;
       {
          /* FaceType.GRAY */
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < 1; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1));
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
