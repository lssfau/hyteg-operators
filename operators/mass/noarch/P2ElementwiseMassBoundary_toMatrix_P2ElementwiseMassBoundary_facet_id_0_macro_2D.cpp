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

void P2ElementwiseMassBoundary::toMatrix_P2ElementwiseMassBoundary_facet_id_0_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t tmp_kernel_op_0 = 0.044658198738520456;
       const real_t tmp_kernel_op_1 = tmp_kernel_op_0*2.0;
       const int64_t tmp_kernel_op_2 = 0;
       const real_t tmp_kernel_op_3 = 0.21132486540518713*((real_t)(tmp_kernel_op_2));
       const int64_t tmp_kernel_op_4 = 0;
       const int64_t tmp_kernel_op_5 = tmp_kernel_op_4*2;
       const int64_t tmp_kernel_op_6 = tmp_kernel_op_5 + 1;
       const real_t tmp_kernel_op_7 = tmp_kernel_op_1 + tmp_kernel_op_3 - 0.6339745962155614 + ((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_8 = pow(abs((jac_affine_0_0_GRAY*jac_affine_0_0_GRAY) + (jac_affine_1_0_GRAY*jac_affine_1_0_GRAY)), 0.5);
       const real_t tmp_kernel_op_9 = tmp_kernel_op_8*0.5;
       const real_t tmp_kernel_op_10 = 0.62200846792814624;
       const real_t tmp_kernel_op_11 = tmp_kernel_op_10*2.0;
       const real_t tmp_kernel_op_12 = 0.78867513459481287*((real_t)(tmp_kernel_op_2));
       const real_t tmp_kernel_op_13 = tmp_kernel_op_11 + tmp_kernel_op_12 - 2.3660254037844384 + ((real_t)(tmp_kernel_op_6));
       const real_t tmp_kernel_op_14 = tmp_kernel_op_8*0.5;
       const real_t tmp_kernel_op_15 = tmp_kernel_op_1 - 0.21132486540518713;
       const real_t tmp_kernel_op_16 = tmp_kernel_op_7*tmp_kernel_op_9;
       const real_t tmp_kernel_op_17 = tmp_kernel_op_11 - 0.78867513459481287;
       const real_t tmp_kernel_op_18 = tmp_kernel_op_13*tmp_kernel_op_14;
       const real_t tmp_kernel_op_19 = tmp_kernel_op_15*tmp_kernel_op_16 + tmp_kernel_op_17*tmp_kernel_op_18;
       const int64_t tmp_kernel_op_20 = tmp_kernel_op_5;
       const real_t tmp_kernel_op_21 = tmp_kernel_op_16*((real_t)(tmp_kernel_op_20)) + tmp_kernel_op_18*((real_t)(tmp_kernel_op_20));
       const real_t tmp_kernel_op_22 = tmp_kernel_op_12*tmp_kernel_op_18 + tmp_kernel_op_16*tmp_kernel_op_3;
       const int64_t tmp_kernel_op_23 = tmp_kernel_op_4*4;
       const real_t tmp_kernel_op_24 = -tmp_kernel_op_3 + ((real_t)(-tmp_kernel_op_23));
       const real_t tmp_kernel_op_25 = -tmp_kernel_op_12 + ((real_t)(-tmp_kernel_op_23));
       const real_t tmp_kernel_op_26 = tmp_kernel_op_16*tmp_kernel_op_24 + tmp_kernel_op_18*tmp_kernel_op_25;
       const real_t tmp_kernel_op_27 = tmp_kernel_op_0*-4.0 - tmp_kernel_op_3 + 0.84529946162074854;
       const real_t tmp_kernel_op_28 = tmp_kernel_op_10*-4.0 - tmp_kernel_op_12 + 3.1547005383792515;
       const real_t tmp_kernel_op_29 = tmp_kernel_op_16*tmp_kernel_op_27 + tmp_kernel_op_18*tmp_kernel_op_28;
       const real_t tmp_kernel_op_30 = tmp_kernel_op_15*tmp_kernel_op_9;
       const real_t tmp_kernel_op_31 = tmp_kernel_op_14*tmp_kernel_op_17;
       const real_t tmp_kernel_op_32 = tmp_kernel_op_30*((real_t)(tmp_kernel_op_20)) + tmp_kernel_op_31*((real_t)(tmp_kernel_op_20));
       const real_t tmp_kernel_op_33 = tmp_kernel_op_12*tmp_kernel_op_31 + tmp_kernel_op_3*tmp_kernel_op_30;
       const real_t tmp_kernel_op_34 = tmp_kernel_op_24*tmp_kernel_op_30 + tmp_kernel_op_25*tmp_kernel_op_31;
       const real_t tmp_kernel_op_35 = tmp_kernel_op_27*tmp_kernel_op_30 + tmp_kernel_op_28*tmp_kernel_op_31;
       const int64_t tmp_kernel_op_36 = ((int64_t)((tmp_kernel_op_20*tmp_kernel_op_20)));
       const real_t tmp_kernel_op_37 = tmp_kernel_op_9*((real_t)(tmp_kernel_op_20));
       const real_t tmp_kernel_op_38 = tmp_kernel_op_14*((real_t)(tmp_kernel_op_20));
       const real_t tmp_kernel_op_39 = tmp_kernel_op_12*tmp_kernel_op_38 + tmp_kernel_op_3*tmp_kernel_op_37;
       const real_t tmp_kernel_op_40 = tmp_kernel_op_24*tmp_kernel_op_37 + tmp_kernel_op_25*tmp_kernel_op_38;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_27*tmp_kernel_op_37 + tmp_kernel_op_28*tmp_kernel_op_38;
       const int64_t tmp_kernel_op_42 = tmp_kernel_op_4*16;
       const real_t tmp_kernel_op_43 = tmp_kernel_op_24*tmp_kernel_op_9;
       const real_t tmp_kernel_op_44 = tmp_kernel_op_14*tmp_kernel_op_25;
       const real_t tmp_kernel_op_45 = tmp_kernel_op_12*tmp_kernel_op_44 + tmp_kernel_op_3*tmp_kernel_op_43;
       const real_t tmp_kernel_op_46 = tmp_kernel_op_12*tmp_kernel_op_14*tmp_kernel_op_28 + tmp_kernel_op_27*tmp_kernel_op_3*tmp_kernel_op_9;
       const real_t tmp_kernel_op_47 = tmp_kernel_op_27*tmp_kernel_op_43 + tmp_kernel_op_28*tmp_kernel_op_44;
       const real_t elMat_0_0 = (tmp_kernel_op_13*tmp_kernel_op_13)*tmp_kernel_op_14 + (tmp_kernel_op_7*tmp_kernel_op_7)*tmp_kernel_op_9;
       const real_t elMat_0_1 = tmp_kernel_op_19;
       const real_t elMat_0_2 = tmp_kernel_op_21;
       const real_t elMat_0_3 = tmp_kernel_op_22;
       const real_t elMat_0_4 = tmp_kernel_op_26;
       const real_t elMat_0_5 = tmp_kernel_op_29;
       const real_t elMat_1_0 = tmp_kernel_op_19;
       const real_t elMat_1_1 = tmp_kernel_op_14*(tmp_kernel_op_17*tmp_kernel_op_17) + (tmp_kernel_op_15*tmp_kernel_op_15)*tmp_kernel_op_9;
       const real_t elMat_1_2 = tmp_kernel_op_32;
       const real_t elMat_1_3 = tmp_kernel_op_33;
       const real_t elMat_1_4 = tmp_kernel_op_34;
       const real_t elMat_1_5 = tmp_kernel_op_35;
       const real_t elMat_2_0 = tmp_kernel_op_21;
       const real_t elMat_2_1 = tmp_kernel_op_32;
       const real_t elMat_2_2 = tmp_kernel_op_14*((real_t)(tmp_kernel_op_36)) + tmp_kernel_op_9*((real_t)(tmp_kernel_op_36));
       const real_t elMat_2_3 = tmp_kernel_op_39;
       const real_t elMat_2_4 = tmp_kernel_op_40;
       const real_t elMat_2_5 = tmp_kernel_op_41;
       const real_t elMat_3_0 = tmp_kernel_op_22;
       const real_t elMat_3_1 = tmp_kernel_op_33;
       const real_t elMat_3_2 = tmp_kernel_op_39;
       const real_t elMat_3_3 = tmp_kernel_op_0*tmp_kernel_op_9*((real_t)(tmp_kernel_op_42)) + tmp_kernel_op_10*tmp_kernel_op_14*((real_t)(tmp_kernel_op_42));
       const real_t elMat_3_4 = tmp_kernel_op_45;
       const real_t elMat_3_5 = tmp_kernel_op_46;
       const real_t elMat_4_0 = tmp_kernel_op_26;
       const real_t elMat_4_1 = tmp_kernel_op_34;
       const real_t elMat_4_2 = tmp_kernel_op_40;
       const real_t elMat_4_3 = tmp_kernel_op_45;
       const real_t elMat_4_4 = tmp_kernel_op_14*(tmp_kernel_op_25*tmp_kernel_op_25) + (tmp_kernel_op_24*tmp_kernel_op_24)*tmp_kernel_op_9;
       const real_t elMat_4_5 = tmp_kernel_op_47;
       const real_t elMat_5_0 = tmp_kernel_op_29;
       const real_t elMat_5_1 = tmp_kernel_op_35;
       const real_t elMat_5_2 = tmp_kernel_op_41;
       const real_t elMat_5_3 = tmp_kernel_op_46;
       const real_t elMat_5_4 = tmp_kernel_op_47;
       const real_t elMat_5_5 = tmp_kernel_op_14*(tmp_kernel_op_28*tmp_kernel_op_28) + (tmp_kernel_op_27*tmp_kernel_op_27)*tmp_kernel_op_9;
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
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
             _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
             _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
             _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_0_4));
             _data_mat[5] = ((real_t)(elMat_0_5));
             _data_mat[6] = ((real_t)(elMat_1_0));
             _data_mat[7] = ((real_t)(elMat_1_1));
             _data_mat[8] = ((real_t)(elMat_1_2));
             _data_mat[9] = ((real_t)(elMat_1_3));
             _data_mat[10] = ((real_t)(elMat_1_4));
             _data_mat[11] = ((real_t)(elMat_1_5));
             _data_mat[12] = ((real_t)(elMat_2_0));
             _data_mat[13] = ((real_t)(elMat_2_1));
             _data_mat[14] = ((real_t)(elMat_2_2));
             _data_mat[15] = ((real_t)(elMat_2_3));
             _data_mat[16] = ((real_t)(elMat_2_4));
             _data_mat[17] = ((real_t)(elMat_2_5));
             _data_mat[18] = ((real_t)(elMat_3_0));
             _data_mat[19] = ((real_t)(elMat_3_1));
             _data_mat[20] = ((real_t)(elMat_3_2));
             _data_mat[21] = ((real_t)(elMat_3_3));
             _data_mat[22] = ((real_t)(elMat_3_4));
             _data_mat[23] = ((real_t)(elMat_3_5));
             _data_mat[24] = ((real_t)(elMat_4_0));
             _data_mat[25] = ((real_t)(elMat_4_1));
             _data_mat[26] = ((real_t)(elMat_4_2));
             _data_mat[27] = ((real_t)(elMat_4_3));
             _data_mat[28] = ((real_t)(elMat_4_4));
             _data_mat[29] = ((real_t)(elMat_4_5));
             _data_mat[30] = ((real_t)(elMat_5_0));
             _data_mat[31] = ((real_t)(elMat_5_1));
             _data_mat[32] = ((real_t)(elMat_5_2));
             _data_mat[33] = ((real_t)(elMat_5_3));
             _data_mat[34] = ((real_t)(elMat_5_4));
             _data_mat[35] = ((real_t)(elMat_5_5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
