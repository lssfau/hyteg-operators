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

void P1ElementwiseDiffusion::toMatrix_macro_2D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t tmp_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0;
       const real_t tmp_1 = -jac_affine_inv_0_1 - jac_affine_inv_1_1;
       const real_t tmp_2 = abs_det_jac_affine*0.50000000000000089;
       const real_t tmp_3 = tmp_2*(jac_affine_inv_0_0*tmp_0 + jac_affine_inv_0_1*tmp_1);
       const real_t tmp_4 = tmp_2*(jac_affine_inv_1_0*tmp_0 + jac_affine_inv_1_1*tmp_1);
       const real_t tmp_5 = tmp_2*(jac_affine_inv_0_0*jac_affine_inv_1_0 + jac_affine_inv_0_1*jac_affine_inv_1_1);
       const real_t elMat_0_0 = tmp_2*((tmp_0*tmp_0) + (tmp_1*tmp_1));
       const real_t elMat_0_1 = tmp_3;
       const real_t elMat_0_2 = tmp_4;
       const real_t elMat_1_0 = tmp_3;
       const real_t elMat_1_1 = tmp_2*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1));
       const real_t elMat_1_2 = tmp_5;
       const real_t elMat_2_0 = tmp_4;
       const real_t elMat_2_1 = tmp_5;
       const real_t elMat_2_2 = tmp_2*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1));
       const real_t tmp_BLUE_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_BLUE_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_BLUE_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_BLUE_3 = tmp_BLUE_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_BLUE_4 = tmp_BLUE_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t Dummy_1761 = tmp_BLUE_1;
       const real_t Dummy_1762 = tmp_BLUE_2;
       const real_t Dummy_1763 = macro_vertex_coord_id_0comp0 + tmp_BLUE_3;
       const real_t Dummy_1764 = macro_vertex_coord_id_0comp1 + tmp_BLUE_4;
       const real_t Dummy_1765 = tmp_BLUE_1 + tmp_BLUE_3;
       const real_t Dummy_1766 = tmp_BLUE_2 + tmp_BLUE_4;
       const real_t Dummy_1767 = -Dummy_1761 + Dummy_1763;
       const real_t Dummy_1768 = -Dummy_1761 + Dummy_1765;
       const real_t Dummy_1769 = -Dummy_1762 + Dummy_1764;
       const real_t Dummy_1770 = -Dummy_1762 + Dummy_1766;
       const real_t tmp_BLUE_5 = Dummy_1767*Dummy_1770 - Dummy_1768*Dummy_1769;
       const real_t tmp_BLUE_6 = 1.0 / (tmp_BLUE_5);
       const real_t Dummy_1771 = Dummy_1770*tmp_BLUE_6;
       const real_t Dummy_1772 = -Dummy_1768*tmp_BLUE_6;
       const real_t Dummy_1773 = -Dummy_1769*tmp_BLUE_6;
       const real_t Dummy_1774 = Dummy_1767*tmp_BLUE_6;
       const real_t Dummy_1775 = abs(tmp_BLUE_5);
       const real_t Dummy_1776 = -Dummy_1771 - Dummy_1773;
       const real_t Dummy_1777 = -Dummy_1772 - Dummy_1774;
       const real_t Dummy_1778 = Dummy_1775*0.50000000000000089;
       const real_t Dummy_1779 = Dummy_1778*(Dummy_1771*Dummy_1776 + Dummy_1772*Dummy_1777);
       const real_t Dummy_1780 = Dummy_1778*(Dummy_1773*Dummy_1776 + Dummy_1774*Dummy_1777);
       const real_t Dummy_1781 = Dummy_1778*(Dummy_1771*Dummy_1773 + Dummy_1772*Dummy_1774);
       const real_t Dummy_1782 = Dummy_1778*((Dummy_1776*Dummy_1776) + (Dummy_1777*Dummy_1777));
       const real_t Dummy_1783 = Dummy_1779;
       const real_t Dummy_1784 = Dummy_1780;
       const real_t Dummy_1785 = Dummy_1779;
       const real_t Dummy_1786 = Dummy_1778*((Dummy_1771*Dummy_1771) + (Dummy_1772*Dummy_1772));
       const real_t Dummy_1787 = Dummy_1781;
       const real_t Dummy_1788 = Dummy_1780;
       const real_t Dummy_1789 = Dummy_1781;
       const real_t Dummy_1790 = Dummy_1778*((Dummy_1773*Dummy_1773) + (Dummy_1774*Dummy_1774));
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
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_1782));
                   _data_mat[1] = ((real_t)(Dummy_1783));
                   _data_mat[2] = ((real_t)(Dummy_1784));
                   _data_mat[3] = ((real_t)(Dummy_1785));
                   _data_mat[4] = ((real_t)(Dummy_1786));
                   _data_mat[5] = ((real_t)(Dummy_1787));
                   _data_mat[6] = ((real_t)(Dummy_1788));
                   _data_mat[7] = ((real_t)(Dummy_1789));
                   _data_mat[8] = ((real_t)(Dummy_1790));
               
               
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
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
