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

void P1ElementwiseDiffusion::toMatrix_macro_2D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t Dummy_1083 = -jac_affine_inv_0_0_GRAY - jac_affine_inv_1_0_GRAY;
       const real_t Dummy_1084 = -jac_affine_inv_0_1_GRAY - jac_affine_inv_1_1_GRAY;
       const real_t Dummy_1085 = abs_det_jac_affine_GRAY*0.50000000000000089;
       const real_t tmp_3 = Dummy_1085*(Dummy_1083*jac_affine_inv_0_0_GRAY + Dummy_1084*jac_affine_inv_0_1_GRAY);
       const real_t tmp_4 = Dummy_1085*(Dummy_1083*jac_affine_inv_1_0_GRAY + Dummy_1084*jac_affine_inv_1_1_GRAY);
       const real_t tmp_5 = Dummy_1085*(jac_affine_inv_0_0_GRAY*jac_affine_inv_1_0_GRAY + jac_affine_inv_0_1_GRAY*jac_affine_inv_1_1_GRAY);
       const real_t elMat_0_0 = Dummy_1085*((Dummy_1083*Dummy_1083) + (Dummy_1084*Dummy_1084));
       const real_t elMat_0_1 = tmp_3;
       const real_t elMat_0_2 = tmp_4;
       const real_t elMat_1_0 = tmp_3;
       const real_t elMat_1_1 = Dummy_1085*((jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY) + (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY));
       const real_t elMat_1_2 = tmp_5;
       const real_t elMat_2_0 = tmp_4;
       const real_t elMat_2_1 = tmp_5;
       const real_t elMat_2_2 = Dummy_1085*((jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY) + (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY));
       const real_t Dummy_1086 = -jac_affine_inv_0_0_BLUE - jac_affine_inv_1_0_BLUE;
       const real_t Dummy_1087 = -jac_affine_inv_0_1_BLUE - jac_affine_inv_1_1_BLUE;
       const real_t Dummy_1088 = abs_det_jac_affine_BLUE*0.50000000000000089;
       const real_t Dummy_1089 = Dummy_1088*(Dummy_1086*jac_affine_inv_0_0_BLUE + Dummy_1087*jac_affine_inv_0_1_BLUE);
       const real_t Dummy_1090 = Dummy_1088*(Dummy_1086*jac_affine_inv_1_0_BLUE + Dummy_1087*jac_affine_inv_1_1_BLUE);
       const real_t Dummy_1091 = Dummy_1088*(jac_affine_inv_0_0_BLUE*jac_affine_inv_1_0_BLUE + jac_affine_inv_0_1_BLUE*jac_affine_inv_1_1_BLUE);
       const real_t Dummy_1092 = Dummy_1088*((Dummy_1086*Dummy_1086) + (Dummy_1087*Dummy_1087));
       const real_t Dummy_1093 = Dummy_1089;
       const real_t Dummy_1094 = Dummy_1090;
       const real_t Dummy_1095 = Dummy_1089;
       const real_t Dummy_1096 = Dummy_1088*((jac_affine_inv_0_0_BLUE*jac_affine_inv_0_0_BLUE) + (jac_affine_inv_0_1_BLUE*jac_affine_inv_0_1_BLUE));
       const real_t Dummy_1097 = Dummy_1091;
       const real_t Dummy_1098 = Dummy_1090;
       const real_t Dummy_1099 = Dummy_1091;
       const real_t Dummy_1100 = Dummy_1088*((jac_affine_inv_1_0_BLUE*jac_affine_inv_1_0_BLUE) + (jac_affine_inv_1_1_BLUE*jac_affine_inv_1_1_BLUE));
       const real_t Dummy_1101 = -jac_affine_inv_0_0_GRAY - jac_affine_inv_1_0_GRAY;
       const real_t Dummy_1102 = -jac_affine_inv_0_1_GRAY - jac_affine_inv_1_1_GRAY;
       const real_t Dummy_1103 = abs_det_jac_affine_GRAY*0.50000000000000089;
       const real_t Dummy_1104 = Dummy_1103*(Dummy_1101*jac_affine_inv_0_0_GRAY + Dummy_1102*jac_affine_inv_0_1_GRAY);
       const real_t Dummy_1105 = Dummy_1103*(Dummy_1101*jac_affine_inv_1_0_GRAY + Dummy_1102*jac_affine_inv_1_1_GRAY);
       const real_t Dummy_1106 = Dummy_1103*(jac_affine_inv_0_0_GRAY*jac_affine_inv_1_0_GRAY + jac_affine_inv_0_1_GRAY*jac_affine_inv_1_1_GRAY);
       const real_t Dummy_1107 = Dummy_1103*((Dummy_1101*Dummy_1101) + (Dummy_1102*Dummy_1102));
       const real_t Dummy_1108 = Dummy_1104;
       const real_t Dummy_1109 = Dummy_1105;
       const real_t Dummy_1110 = Dummy_1104;
       const real_t Dummy_1111 = Dummy_1103*((jac_affine_inv_0_0_GRAY*jac_affine_inv_0_0_GRAY) + (jac_affine_inv_0_1_GRAY*jac_affine_inv_0_1_GRAY));
       const real_t Dummy_1112 = Dummy_1106;
       const real_t Dummy_1113 = Dummy_1105;
       const real_t Dummy_1114 = Dummy_1106;
       const real_t Dummy_1115 = Dummy_1103*((jac_affine_inv_1_0_GRAY*jac_affine_inv_1_0_GRAY) + (jac_affine_inv_1_1_GRAY*jac_affine_inv_1_1_GRAY));
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 3 );
                   std::vector< real_t > _data_mat( 9 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(elMat_0_0));
                   _data_mat[1] = ((real_t)(elMat_0_1));
                   _data_mat[2] = ((real_t)(elMat_0_2));
                   _data_mat[3] = ((real_t)(elMat_1_0));
                   _data_mat[4] = ((real_t)(elMat_1_1));
                   _data_mat[5] = ((real_t)(elMat_1_2));
                   _data_mat[6] = ((real_t)(elMat_2_0));
                   _data_mat[7] = ((real_t)(elMat_2_1));
                   _data_mat[8] = ((real_t)(elMat_2_2));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 3 );
                   std::vector< real_t > _data_mat( 9 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_1092));
                   _data_mat[1] = ((real_t)(Dummy_1093));
                   _data_mat[2] = ((real_t)(Dummy_1094));
                   _data_mat[3] = ((real_t)(Dummy_1095));
                   _data_mat[4] = ((real_t)(Dummy_1096));
                   _data_mat[5] = ((real_t)(Dummy_1097));
                   _data_mat[6] = ((real_t)(Dummy_1098));
                   _data_mat[7] = ((real_t)(Dummy_1099));
                   _data_mat[8] = ((real_t)(Dummy_1100));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 3 );
                   std::vector< uint_t > _data_colIdx( 3 );
                   std::vector< real_t > _data_mat( 9 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dst[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_1107));
                   _data_mat[1] = ((real_t)(Dummy_1108));
                   _data_mat[2] = ((real_t)(Dummy_1109));
                   _data_mat[3] = ((real_t)(Dummy_1110));
                   _data_mat[4] = ((real_t)(Dummy_1111));
                   _data_mat[5] = ((real_t)(Dummy_1112));
                   _data_mat[6] = ((real_t)(Dummy_1113));
                   _data_mat[7] = ((real_t)(Dummy_1114));
                   _data_mat[8] = ((real_t)(Dummy_1115));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
