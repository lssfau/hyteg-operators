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































#include "../P2ElementwiseMassBoundaryAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseMassBoundaryAnnulusMap::applyScaled_P2ElementwiseMassBoundaryAnnulusMap_facet_id_0_macro_2D( real_t * RESTRICT  _data_dstEdge, real_t * RESTRICT  _data_dstVertex, real_t * RESTRICT  _data_srcEdge, real_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t operatorScaling, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
{
    {
       const real_t tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const real_t jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const real_t tmp_blending_op_0 = -rayVertex_0 + thrVertex_0;
       const real_t tmp_blending_op_10 = -rayVertex_1 + thrVertex_1;
       const real_t tmp_blending_op_11 = (-radRayVertex + radRefVertex)*1.0 / (-tmp_blending_op_0*(-rayVertex_1 + refVertex_1) + tmp_blending_op_10*(-rayVertex_0 + refVertex_0));
       const real_t tmp_blending_op_12 = tmp_blending_op_11*1.0;
       const real_t tmp_blending_op_16 = -rayVertex_1;
       const real_t tmp_blending_op_17 = -rayVertex_0;
       const real_t tmp_kernel_op_0 = 0.044658198738520456;
       const real_t tmp_kernel_op_1 = tmp_kernel_op_0*2.0;
       const int64_t tmp_kernel_op_2 = 0;
       const real_t tmp_kernel_op_3 = 0.21132486540518713*((real_t)(tmp_kernel_op_2));
       const int64_t tmp_kernel_op_4 = 0;
       const int64_t tmp_kernel_op_5 = tmp_kernel_op_4*2;
       const int64_t tmp_kernel_op_6 = tmp_kernel_op_5 + 1;
       const real_t tmp_kernel_op_7 = tmp_kernel_op_1 + tmp_kernel_op_3 - 0.6339745962155614 + ((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_11 = 0.62200846792814624;
       const real_t tmp_kernel_op_12 = tmp_kernel_op_11*2.0;
       const real_t tmp_kernel_op_13 = 0.78867513459481287*((real_t)(tmp_kernel_op_2));
       const real_t tmp_kernel_op_14 = tmp_kernel_op_12 + tmp_kernel_op_13 - 2.3660254037844384 + ((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_21 = tmp_kernel_op_1 - 0.21132486540518713;
       const real_t tmp_kernel_op_22 = tmp_kernel_op_12 - 0.78867513459481287;
       const int64_t tmp_kernel_op_24 = tmp_kernel_op_5;
       const int64_t tmp_kernel_op_26 = tmp_kernel_op_4*4;
       const real_t tmp_kernel_op_27 = -tmp_kernel_op_3 + ((real_t)(-tmp_kernel_op_26));
       const real_t tmp_kernel_op_28 = -tmp_kernel_op_13 + ((real_t)(-tmp_kernel_op_26));
       const real_t tmp_kernel_op_30 = tmp_kernel_op_0*-4.0 - tmp_kernel_op_3 + 0.84529946162074854;
       const real_t tmp_kernel_op_31 = tmp_kernel_op_11*-4.0 - tmp_kernel_op_13 + 3.1547005383792515;
       const int64_t tmp_kernel_op_39 = ((int64_t)((tmp_kernel_op_24*tmp_kernel_op_24)));
       const int64_t tmp_kernel_op_45 = tmp_kernel_op_4*16;
       {
          /* FaceType.GRAY */
          for (int64_t ctr_1 = 0; ctr_1 < 1; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1));
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1));
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1));
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0 + 1)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1));
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*((real_t)(ctr_1 + 1));
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*((real_t)(ctr_0)) + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*((real_t)(ctr_1 + 1));
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
             const real_t src_dof_0 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t src_dof_1 = _data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t src_dof_2 = _data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t src_dof_3 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_4 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t src_dof_5 = _data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t tmp_kernel_op_8 = jac_affine_0_0_GRAY*jac_blending_0_0_q_0 + jac_affine_1_0_GRAY*jac_blending_0_1_q_0;
             const real_t tmp_kernel_op_9 = jac_affine_0_0_GRAY*jac_blending_1_0_q_0 + jac_affine_1_0_GRAY*jac_blending_1_1_q_0;
             const real_t tmp_kernel_op_10 = 0.5*pow(abs(jac_affine_0_0_GRAY*(jac_blending_0_0_q_0*tmp_kernel_op_8 + jac_blending_1_0_q_0*tmp_kernel_op_9) + jac_affine_1_0_GRAY*(jac_blending_0_1_q_0*tmp_kernel_op_8 + jac_blending_1_1_q_0*tmp_kernel_op_9)), 0.5);
             const real_t tmp_kernel_op_15 = jac_affine_0_0_GRAY*jac_blending_0_0_q_1 + jac_affine_1_0_GRAY*jac_blending_0_1_q_1;
             const real_t tmp_kernel_op_16 = jac_affine_0_0_GRAY*jac_blending_1_0_q_1 + jac_affine_1_0_GRAY*jac_blending_1_1_q_1;
             const real_t tmp_kernel_op_17 = 0.5*pow(abs(jac_affine_0_0_GRAY*(jac_blending_0_0_q_1*tmp_kernel_op_15 + jac_blending_1_0_q_1*tmp_kernel_op_16) + jac_affine_1_0_GRAY*(jac_blending_0_1_q_1*tmp_kernel_op_15 + jac_blending_1_1_q_1*tmp_kernel_op_16)), 0.5);
             const real_t tmp_kernel_op_18 = tmp_kernel_op_10*tmp_kernel_op_7;
             const real_t tmp_kernel_op_19 = tmp_kernel_op_14*tmp_kernel_op_17;
             const real_t tmp_kernel_op_20 = tmp_kernel_op_13*tmp_kernel_op_19 + tmp_kernel_op_18*tmp_kernel_op_3;
             const real_t tmp_kernel_op_23 = tmp_kernel_op_18*tmp_kernel_op_21 + tmp_kernel_op_19*tmp_kernel_op_22;
             const real_t tmp_kernel_op_25 = tmp_kernel_op_18*((real_t)(tmp_kernel_op_24)) + tmp_kernel_op_19*((real_t)(tmp_kernel_op_24));
             const real_t tmp_kernel_op_29 = tmp_kernel_op_18*tmp_kernel_op_27 + tmp_kernel_op_19*tmp_kernel_op_28;
             const real_t tmp_kernel_op_32 = tmp_kernel_op_18*tmp_kernel_op_30 + tmp_kernel_op_19*tmp_kernel_op_31;
             const real_t tmp_kernel_op_33 = tmp_kernel_op_10*tmp_kernel_op_21;
             const real_t tmp_kernel_op_34 = tmp_kernel_op_17*tmp_kernel_op_22;
             const real_t tmp_kernel_op_35 = tmp_kernel_op_13*tmp_kernel_op_34 + tmp_kernel_op_3*tmp_kernel_op_33;
             const real_t tmp_kernel_op_36 = tmp_kernel_op_33*((real_t)(tmp_kernel_op_24)) + tmp_kernel_op_34*((real_t)(tmp_kernel_op_24));
             const real_t tmp_kernel_op_37 = tmp_kernel_op_27*tmp_kernel_op_33 + tmp_kernel_op_28*tmp_kernel_op_34;
             const real_t tmp_kernel_op_38 = tmp_kernel_op_30*tmp_kernel_op_33 + tmp_kernel_op_31*tmp_kernel_op_34;
             const real_t tmp_kernel_op_40 = tmp_kernel_op_10*((real_t)(tmp_kernel_op_24));
             const real_t tmp_kernel_op_41 = tmp_kernel_op_17*((real_t)(tmp_kernel_op_24));
             const real_t tmp_kernel_op_42 = tmp_kernel_op_13*tmp_kernel_op_41 + tmp_kernel_op_3*tmp_kernel_op_40;
             const real_t tmp_kernel_op_43 = tmp_kernel_op_27*tmp_kernel_op_40 + tmp_kernel_op_28*tmp_kernel_op_41;
             const real_t tmp_kernel_op_44 = tmp_kernel_op_30*tmp_kernel_op_40 + tmp_kernel_op_31*tmp_kernel_op_41;
             const real_t tmp_kernel_op_46 = tmp_kernel_op_10*tmp_kernel_op_27;
             const real_t tmp_kernel_op_47 = tmp_kernel_op_17*tmp_kernel_op_28;
             const real_t tmp_kernel_op_48 = tmp_kernel_op_13*tmp_kernel_op_47 + tmp_kernel_op_3*tmp_kernel_op_46;
             const real_t tmp_kernel_op_49 = tmp_kernel_op_10*tmp_kernel_op_3*tmp_kernel_op_30 + tmp_kernel_op_13*tmp_kernel_op_17*tmp_kernel_op_31;
             const real_t tmp_kernel_op_50 = tmp_kernel_op_30*tmp_kernel_op_46 + tmp_kernel_op_31*tmp_kernel_op_47;
             const real_t elMatVec_0 = src_dof_0*(tmp_kernel_op_10*(tmp_kernel_op_7*tmp_kernel_op_7) + (tmp_kernel_op_14*tmp_kernel_op_14)*tmp_kernel_op_17) + src_dof_1*tmp_kernel_op_23 + src_dof_2*tmp_kernel_op_25 + src_dof_3*tmp_kernel_op_20 + src_dof_4*tmp_kernel_op_29 + src_dof_5*tmp_kernel_op_32;
             const real_t elMatVec_1 = src_dof_0*tmp_kernel_op_23 + src_dof_1*(tmp_kernel_op_10*(tmp_kernel_op_21*tmp_kernel_op_21) + tmp_kernel_op_17*(tmp_kernel_op_22*tmp_kernel_op_22)) + src_dof_2*tmp_kernel_op_36 + src_dof_3*tmp_kernel_op_35 + src_dof_4*tmp_kernel_op_37 + src_dof_5*tmp_kernel_op_38;
             const real_t elMatVec_2 = src_dof_0*tmp_kernel_op_25 + src_dof_1*tmp_kernel_op_36 + src_dof_2*(tmp_kernel_op_10*((real_t)(tmp_kernel_op_39)) + tmp_kernel_op_17*((real_t)(tmp_kernel_op_39))) + src_dof_3*tmp_kernel_op_42 + src_dof_4*tmp_kernel_op_43 + src_dof_5*tmp_kernel_op_44;
             const real_t elMatVec_3 = src_dof_0*tmp_kernel_op_20 + src_dof_1*tmp_kernel_op_35 + src_dof_2*tmp_kernel_op_42 + src_dof_3*(tmp_kernel_op_0*tmp_kernel_op_10*((real_t)(tmp_kernel_op_45)) + tmp_kernel_op_11*tmp_kernel_op_17*((real_t)(tmp_kernel_op_45))) + src_dof_4*tmp_kernel_op_48 + src_dof_5*tmp_kernel_op_49;
             const real_t elMatVec_4 = src_dof_0*tmp_kernel_op_29 + src_dof_1*tmp_kernel_op_37 + src_dof_2*tmp_kernel_op_43 + src_dof_3*tmp_kernel_op_48 + src_dof_4*(tmp_kernel_op_10*(tmp_kernel_op_27*tmp_kernel_op_27) + tmp_kernel_op_17*(tmp_kernel_op_28*tmp_kernel_op_28)) + src_dof_5*tmp_kernel_op_50;
             const real_t elMatVec_5 = src_dof_0*tmp_kernel_op_32 + src_dof_1*tmp_kernel_op_38 + src_dof_2*tmp_kernel_op_44 + src_dof_3*tmp_kernel_op_49 + src_dof_4*tmp_kernel_op_50 + src_dof_5*(tmp_kernel_op_10*(tmp_kernel_op_30*tmp_kernel_op_30) + tmp_kernel_op_17*(tmp_kernel_op_31*tmp_kernel_op_31));
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1*operatorScaling + _data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2*operatorScaling + _data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_3*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = elMatVec_4*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_5*operatorScaling + _data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
