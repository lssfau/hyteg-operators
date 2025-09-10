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































#include "../P1ElementwiseMassBoundaryAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseMassBoundaryAnnulusMap::computeInverseDiagonalOperatorValuesScaled_P1ElementwiseMassBoundaryAnnulusMap_facet_id_1_macro_2D( real_t * RESTRICT  _data_invDiag_, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
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
       const real_t tmp_blending_op_0 = -rayVertex_0 + thrVertex_0;
       const real_t tmp_blending_op_10 = -rayVertex_1 + thrVertex_1;
       const real_t tmp_blending_op_11 = (-radRayVertex + radRefVertex)*1.0 / (-tmp_blending_op_0*(-rayVertex_1 + refVertex_1) + tmp_blending_op_10*(-rayVertex_0 + refVertex_0));
       const real_t tmp_blending_op_12 = tmp_blending_op_11*1.0;
       const real_t tmp_blending_op_16 = -rayVertex_1;
       const real_t tmp_blending_op_17 = -rayVertex_0;
       const int64_t tmp_kernel_op_0 = -1;
       const int64_t tmp_kernel_op_7 = 0;
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
             const real_t tmp_blending_op_1 = -p_affine_0_1 + p_affine_1_1;
             const real_t tmp_blending_op_2 = p_affine_0_1;
             const real_t tmp_blending_op_3 = tmp_blending_op_1*0.78867513459481287 + tmp_blending_op_2;
             const real_t tmp_blending_op_4 = -p_affine_0_0 + p_affine_1_0;
             const real_t tmp_blending_op_5 = p_affine_0_0;
             const real_t tmp_blending_op_6 = tmp_blending_op_4*0.78867513459481287 + tmp_blending_op_5;
             const real_t tmp_blending_op_7 = (tmp_blending_op_6*tmp_blending_op_6);
             const real_t tmp_blending_op_8 = (tmp_blending_op_3*tmp_blending_op_3);
             const real_t tmp_blending_op_9 = tmp_blending_op_7 + tmp_blending_op_8;
             const real_t tmp_blending_op_13 = tmp_blending_op_12*pow(tmp_blending_op_9, -0.50000000000000000);
             const real_t tmp_blending_op_14 = tmp_blending_op_13*tmp_blending_op_3;
             const real_t tmp_blending_op_15 = pow(tmp_blending_op_9, -1.5000000000000000);
             const real_t tmp_blending_op_18 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_3) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_6));
             const real_t tmp_blending_op_19 = tmp_blending_op_15*tmp_blending_op_18*1.0;
             const real_t tmp_blending_op_20 = tmp_blending_op_13*tmp_blending_op_6;
             const real_t tmp_blending_op_21 = tmp_blending_op_1*0.21132486540518713 + tmp_blending_op_2;
             const real_t tmp_blending_op_22 = tmp_blending_op_4*0.21132486540518713 + tmp_blending_op_5;
             const real_t tmp_blending_op_23 = (tmp_blending_op_22*tmp_blending_op_22);
             const real_t tmp_blending_op_24 = (tmp_blending_op_21*tmp_blending_op_21);
             const real_t tmp_blending_op_25 = tmp_blending_op_23 + tmp_blending_op_24;
             const real_t tmp_blending_op_26 = tmp_blending_op_12*pow(tmp_blending_op_25, -0.50000000000000000);
             const real_t tmp_blending_op_27 = tmp_blending_op_21*tmp_blending_op_26;
             const real_t tmp_blending_op_28 = pow(tmp_blending_op_25, -1.5000000000000000);
             const real_t tmp_blending_op_29 = radRayVertex + tmp_blending_op_11*(-tmp_blending_op_0*(tmp_blending_op_16 + tmp_blending_op_21) + tmp_blending_op_10*(tmp_blending_op_17 + tmp_blending_op_22));
             const real_t tmp_blending_op_30 = tmp_blending_op_28*tmp_blending_op_29*1.0;
             const real_t tmp_blending_op_31 = tmp_blending_op_22*tmp_blending_op_26;
             const real_t jac_blending_1_1_q_1 = -tmp_blending_op_0*tmp_blending_op_14 + tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_7*1.0;
             const real_t jac_blending_1_0_q_1 = tmp_blending_op_10*tmp_blending_op_14 - tmp_blending_op_19*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_1_q_1 = -tmp_blending_op_0*tmp_blending_op_20 - tmp_blending_op_15*tmp_blending_op_18*tmp_blending_op_3*tmp_blending_op_6;
             const real_t jac_blending_0_0_q_1 = tmp_blending_op_10*tmp_blending_op_20 + tmp_blending_op_19*tmp_blending_op_8;
             const real_t jac_blending_1_1_q_0 = -tmp_blending_op_0*tmp_blending_op_27 + tmp_blending_op_23*tmp_blending_op_28*tmp_blending_op_29*1.0;
             const real_t jac_blending_1_0_q_0 = tmp_blending_op_10*tmp_blending_op_27 - tmp_blending_op_21*tmp_blending_op_22*tmp_blending_op_30;
             const real_t jac_blending_0_1_q_0 = -tmp_blending_op_0*tmp_blending_op_31 - tmp_blending_op_21*tmp_blending_op_22*tmp_blending_op_28*tmp_blending_op_29;
             const real_t jac_blending_0_0_q_0 = tmp_blending_op_10*tmp_blending_op_31 + tmp_blending_op_24*tmp_blending_op_30;
             const real_t tmp_kernel_op_1 = jac_affine_0_0_GRAY*jac_blending_0_0_q_0 + jac_affine_1_0_GRAY*jac_blending_0_1_q_0;
             const real_t tmp_kernel_op_2 = jac_affine_0_0_GRAY*jac_blending_1_0_q_0 + jac_affine_1_0_GRAY*jac_blending_1_1_q_0;
             const real_t tmp_kernel_op_3 = 0.5*pow(abs(jac_affine_0_0_GRAY*(jac_blending_0_0_q_0*tmp_kernel_op_1 + jac_blending_1_0_q_0*tmp_kernel_op_2) + jac_affine_1_0_GRAY*(jac_blending_0_1_q_0*tmp_kernel_op_1 + jac_blending_1_1_q_0*tmp_kernel_op_2)), 0.5);
             const real_t tmp_kernel_op_4 = jac_affine_0_0_GRAY*jac_blending_0_0_q_1 + jac_affine_1_0_GRAY*jac_blending_0_1_q_1;
             const real_t tmp_kernel_op_5 = jac_affine_0_0_GRAY*jac_blending_1_0_q_1 + jac_affine_1_0_GRAY*jac_blending_1_1_q_1;
             const real_t tmp_kernel_op_6 = 0.5*pow(abs(jac_affine_0_0_GRAY*(jac_blending_0_0_q_1*tmp_kernel_op_4 + jac_blending_1_0_q_1*tmp_kernel_op_5) + jac_affine_1_0_GRAY*(jac_blending_0_1_q_1*tmp_kernel_op_4 + jac_blending_1_1_q_1*tmp_kernel_op_5)), 0.5);
             const real_t elMatDiag_0 = tmp_kernel_op_3*((-0.21132486540518713 + ((real_t)(-tmp_kernel_op_0)))*(-0.21132486540518713 + ((real_t)(-tmp_kernel_op_0)))) + tmp_kernel_op_6*((-0.78867513459481287 + ((real_t)(-tmp_kernel_op_0)))*(-0.78867513459481287 + ((real_t)(-tmp_kernel_op_0))));
             const real_t elMatDiag_1 = tmp_kernel_op_3*0.044658198738520456 + tmp_kernel_op_6*0.62200846792814624;
             const real_t elMatDiag_2 = tmp_kernel_op_3*((real_t)(tmp_kernel_op_7)) + tmp_kernel_op_6*((real_t)(tmp_kernel_op_7));
             _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_1 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag_[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
