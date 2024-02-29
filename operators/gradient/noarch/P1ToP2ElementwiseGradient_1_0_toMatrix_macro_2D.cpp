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

























#include "../P1ToP2ElementwiseGradient_1_0.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ToP2ElementwiseGradient_1_0::toMatrix_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, idx_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_coords_jac_0_BLUE = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_coords_jac_1_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_coords_jac_2_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_coords_jac_3_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_coords_jac_4_BLUE = tmp_coords_jac_0_BLUE*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_const_0_0_BLUE = tmp_coords_jac_1_BLUE;
       const real_t p_affine_const_0_1_BLUE = tmp_coords_jac_2_BLUE;
       const real_t p_affine_const_1_0_BLUE = macro_vertex_coord_id_0comp0 + tmp_coords_jac_3_BLUE;
       const real_t p_affine_const_1_1_BLUE = macro_vertex_coord_id_0comp1 + tmp_coords_jac_4_BLUE;
       const real_t p_affine_const_2_0_BLUE = tmp_coords_jac_1_BLUE + tmp_coords_jac_3_BLUE;
       const real_t p_affine_const_2_1_BLUE = tmp_coords_jac_2_BLUE + tmp_coords_jac_4_BLUE;
       const real_t jac_affine_0_0_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_1_0_BLUE;
       const real_t jac_affine_0_1_BLUE = -p_affine_const_0_0_BLUE + p_affine_const_2_0_BLUE;
       const real_t jac_affine_1_0_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_1_1_BLUE;
       const real_t jac_affine_1_1_BLUE = -p_affine_const_0_1_BLUE + p_affine_const_2_1_BLUE;
       const real_t tmp_coords_jac_5_BLUE = jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE;
       const real_t tmp_coords_jac_6_BLUE = 1.0 / (tmp_coords_jac_5_BLUE);
       const real_t jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t abs_det_jac_affine_BLUE = abs(tmp_coords_jac_5_BLUE);
       const real_t tmp_coords_jac_0_GRAY = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_const_0_0_GRAY = macro_vertex_coord_id_0comp0;
       const real_t p_affine_const_0_1_GRAY = macro_vertex_coord_id_0comp1;
       const real_t p_affine_const_1_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_const_1_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_const_2_0_GRAY = macro_vertex_coord_id_0comp0 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_const_2_1_GRAY = macro_vertex_coord_id_0comp1 + tmp_coords_jac_0_GRAY*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t jac_affine_0_0_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_1_0_GRAY;
       const real_t jac_affine_0_1_GRAY = -p_affine_const_0_0_GRAY + p_affine_const_2_0_GRAY;
       const real_t jac_affine_1_0_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_1_1_GRAY;
       const real_t jac_affine_1_1_GRAY = -p_affine_const_0_1_GRAY + p_affine_const_2_1_GRAY;
       const real_t tmp_coords_jac_1_GRAY = jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY;
       const real_t tmp_coords_jac_2_GRAY = 1.0 / (tmp_coords_jac_1_GRAY);
       const real_t jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const real_t tmp_kernel_op_0 = 0.16666666666666674;
       const real_t tmp_kernel_op_1 = 0.66666666666666663;
       const real_t tmp_kernel_op_2 = 2.6666666666666665;
       const real_t tmp_kernel_op_3 = tmp_kernel_op_1 + tmp_kernel_op_2 - 3.0;
       const real_t tmp_kernel_op_4 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_5 = tmp_kernel_op_4*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_3 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_3);
       const real_t tmp_kernel_op_6 = 0.16666666666666671;
       const real_t tmp_kernel_op_7 = 2.6666666666666665;
       const real_t tmp_kernel_op_8 = 0.66666666666666663;
       const real_t tmp_kernel_op_9 = tmp_kernel_op_7 + tmp_kernel_op_8 - 3.0;
       const real_t tmp_kernel_op_10 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_11 = tmp_kernel_op_10*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_9 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_9);
       const real_t tmp_kernel_op_12 = 0.66666666666666674;
       const real_t tmp_kernel_op_13 = 0.66666666666666663;
       const real_t tmp_kernel_op_14 = 0.66666666666666663;
       const real_t tmp_kernel_op_15 = tmp_kernel_op_13 + tmp_kernel_op_14 - 3.0;
       const real_t tmp_kernel_op_16 = abs_det_jac_affine_GRAY*0.16666666666666666;
       const real_t tmp_kernel_op_17 = tmp_kernel_op_16*(-jac_affine_inv_0_1_GRAY*tmp_kernel_op_15 - jac_affine_inv_1_1_GRAY*tmp_kernel_op_15);
       const real_t tmp_kernel_op_18 = tmp_kernel_op_0*tmp_kernel_op_4;
       const real_t tmp_kernel_op_19 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_1 - 1.0);
       const real_t tmp_kernel_op_20 = tmp_kernel_op_10*tmp_kernel_op_6;
       const real_t tmp_kernel_op_21 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_7 - 1.0);
       const real_t tmp_kernel_op_22 = tmp_kernel_op_12*tmp_kernel_op_16;
       const real_t tmp_kernel_op_23 = jac_affine_inv_0_1_GRAY*(tmp_kernel_op_13 - 1.0);
       const real_t tmp_kernel_op_24 = tmp_kernel_op_19*tmp_kernel_op_4;
       const real_t tmp_kernel_op_25 = tmp_kernel_op_10*tmp_kernel_op_21;
       const real_t tmp_kernel_op_26 = tmp_kernel_op_16*tmp_kernel_op_23;
       const real_t tmp_kernel_op_27 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_2 - 1.0);
       const real_t tmp_kernel_op_28 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_8 - 1.0);
       const real_t tmp_kernel_op_29 = jac_affine_inv_1_1_GRAY*(tmp_kernel_op_14 - 1.0);
       const real_t tmp_kernel_op_30 = tmp_kernel_op_27*tmp_kernel_op_4;
       const real_t tmp_kernel_op_31 = tmp_kernel_op_10*tmp_kernel_op_28;
       const real_t tmp_kernel_op_32 = tmp_kernel_op_16*tmp_kernel_op_29;
       const real_t tmp_kernel_op_33 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_2;
       const real_t tmp_kernel_op_34 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_1;
       const real_t tmp_kernel_op_35 = tmp_kernel_op_4*(-tmp_kernel_op_33 - tmp_kernel_op_34);
       const real_t tmp_kernel_op_36 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_8;
       const real_t tmp_kernel_op_37 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_7;
       const real_t tmp_kernel_op_38 = tmp_kernel_op_10*(-tmp_kernel_op_36 - tmp_kernel_op_37);
       const real_t tmp_kernel_op_39 = jac_affine_inv_0_1_GRAY*tmp_kernel_op_14;
       const real_t tmp_kernel_op_40 = jac_affine_inv_1_1_GRAY*tmp_kernel_op_13;
       const real_t tmp_kernel_op_41 = tmp_kernel_op_16*(-tmp_kernel_op_39 - tmp_kernel_op_40);
       const real_t tmp_kernel_op_42 = tmp_kernel_op_4*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_1 - 1.333333333333333) + tmp_kernel_op_33);
       const real_t tmp_kernel_op_43 = tmp_kernel_op_10*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_7 + 2.666666666666667) + tmp_kernel_op_36);
       const real_t tmp_kernel_op_44 = tmp_kernel_op_16*(-jac_affine_inv_1_1_GRAY*(-tmp_kernel_op_13 + 2.666666666666667) + tmp_kernel_op_39);
       const real_t tmp_kernel_op_45 = tmp_kernel_op_4*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_2 + 2.666666666666667) + tmp_kernel_op_34);
       const real_t tmp_kernel_op_46 = tmp_kernel_op_10*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_8 - 1.333333333333333) + tmp_kernel_op_37);
       const real_t tmp_kernel_op_47 = tmp_kernel_op_16*(-jac_affine_inv_0_1_GRAY*(-tmp_kernel_op_14 + 2.666666666666667) + tmp_kernel_op_40);
       const real_t elMat_0_0 = tmp_kernel_op_0*tmp_kernel_op_5 + tmp_kernel_op_11*tmp_kernel_op_6 + tmp_kernel_op_12*tmp_kernel_op_17;
       const real_t elMat_0_1 = tmp_kernel_op_11*0.66666666666666663 + tmp_kernel_op_17*0.16666666666666666 + tmp_kernel_op_5*0.16666666666666666;
       const real_t elMat_0_2 = tmp_kernel_op_11*0.16666666666666666 + tmp_kernel_op_17*0.16666666666666666 + tmp_kernel_op_5*0.66666666666666663;
       const real_t elMat_1_0 = -tmp_kernel_op_18*tmp_kernel_op_19 - tmp_kernel_op_20*tmp_kernel_op_21 - tmp_kernel_op_22*tmp_kernel_op_23;
       const real_t elMat_1_1 = tmp_kernel_op_24*-0.16666666666666666 + tmp_kernel_op_25*-0.66666666666666663 + tmp_kernel_op_26*-0.16666666666666666;
       const real_t elMat_1_2 = tmp_kernel_op_24*-0.66666666666666663 + tmp_kernel_op_25*-0.16666666666666666 + tmp_kernel_op_26*-0.16666666666666666;
       const real_t elMat_2_0 = -tmp_kernel_op_18*tmp_kernel_op_27 - tmp_kernel_op_20*tmp_kernel_op_28 - tmp_kernel_op_22*tmp_kernel_op_29;
       const real_t elMat_2_1 = tmp_kernel_op_30*-0.16666666666666666 + tmp_kernel_op_31*-0.66666666666666663 + tmp_kernel_op_32*-0.16666666666666666;
       const real_t elMat_2_2 = tmp_kernel_op_30*-0.66666666666666663 + tmp_kernel_op_31*-0.16666666666666666 + tmp_kernel_op_32*-0.16666666666666666;
       const real_t elMat_3_0 = tmp_kernel_op_0*tmp_kernel_op_35 + tmp_kernel_op_12*tmp_kernel_op_41 + tmp_kernel_op_38*tmp_kernel_op_6;
       const real_t elMat_3_1 = tmp_kernel_op_35*0.16666666666666666 + tmp_kernel_op_38*0.66666666666666663 + tmp_kernel_op_41*0.16666666666666666;
       const real_t elMat_3_2 = tmp_kernel_op_35*0.66666666666666663 + tmp_kernel_op_38*0.16666666666666666 + tmp_kernel_op_41*0.16666666666666666;
       const real_t elMat_4_0 = tmp_kernel_op_0*tmp_kernel_op_42 + tmp_kernel_op_12*tmp_kernel_op_44 + tmp_kernel_op_43*tmp_kernel_op_6;
       const real_t elMat_4_1 = tmp_kernel_op_42*0.16666666666666666 + tmp_kernel_op_43*0.66666666666666663 + tmp_kernel_op_44*0.16666666666666666;
       const real_t elMat_4_2 = tmp_kernel_op_42*0.66666666666666663 + tmp_kernel_op_43*0.16666666666666666 + tmp_kernel_op_44*0.16666666666666666;
       const real_t elMat_5_0 = tmp_kernel_op_0*tmp_kernel_op_45 + tmp_kernel_op_12*tmp_kernel_op_47 + tmp_kernel_op_46*tmp_kernel_op_6;
       const real_t elMat_5_1 = tmp_kernel_op_45*0.16666666666666666 + tmp_kernel_op_46*0.66666666666666663 + tmp_kernel_op_47*0.16666666666666666;
       const real_t elMat_5_2 = tmp_kernel_op_45*0.66666666666666663 + tmp_kernel_op_46*0.16666666666666666 + tmp_kernel_op_47*0.16666666666666666;
       const real_t Dummy_1593 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_1594 = Dummy_1593*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_3 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_3);
       const real_t Dummy_1595 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_1596 = Dummy_1595*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_9 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_9);
       const real_t Dummy_1597 = abs_det_jac_affine_BLUE*0.16666666666666666;
       const real_t Dummy_1598 = Dummy_1597*(-jac_affine_inv_0_1_BLUE*tmp_kernel_op_15 - jac_affine_inv_1_1_BLUE*tmp_kernel_op_15);
       const real_t Dummy_1599 = Dummy_1593*tmp_kernel_op_0;
       const real_t Dummy_1600 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_1 - 1.0);
       const real_t Dummy_1601 = Dummy_1595*tmp_kernel_op_6;
       const real_t Dummy_1602 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_7 - 1.0);
       const real_t Dummy_1603 = Dummy_1597*tmp_kernel_op_12;
       const real_t Dummy_1604 = jac_affine_inv_0_1_BLUE*(tmp_kernel_op_13 - 1.0);
       const real_t Dummy_1605 = Dummy_1593*Dummy_1600;
       const real_t Dummy_1606 = Dummy_1595*Dummy_1602;
       const real_t Dummy_1607 = Dummy_1597*Dummy_1604;
       const real_t Dummy_1608 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_2 - 1.0);
       const real_t Dummy_1609 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_8 - 1.0);
       const real_t Dummy_1610 = jac_affine_inv_1_1_BLUE*(tmp_kernel_op_14 - 1.0);
       const real_t Dummy_1611 = Dummy_1593*Dummy_1608;
       const real_t Dummy_1612 = Dummy_1595*Dummy_1609;
       const real_t Dummy_1613 = Dummy_1597*Dummy_1610;
       const real_t Dummy_1614 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_2;
       const real_t Dummy_1615 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_1;
       const real_t Dummy_1616 = Dummy_1593*(-Dummy_1614 - Dummy_1615);
       const real_t Dummy_1617 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_8;
       const real_t Dummy_1618 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_7;
       const real_t Dummy_1619 = Dummy_1595*(-Dummy_1617 - Dummy_1618);
       const real_t Dummy_1620 = jac_affine_inv_0_1_BLUE*tmp_kernel_op_14;
       const real_t Dummy_1621 = jac_affine_inv_1_1_BLUE*tmp_kernel_op_13;
       const real_t Dummy_1622 = Dummy_1597*(-Dummy_1620 - Dummy_1621);
       const real_t Dummy_1623 = Dummy_1593*(Dummy_1614 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_1 - 1.333333333333333));
       const real_t Dummy_1624 = Dummy_1595*(Dummy_1617 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_7 + 2.666666666666667));
       const real_t Dummy_1625 = Dummy_1597*(Dummy_1620 - jac_affine_inv_1_1_BLUE*(-tmp_kernel_op_13 + 2.666666666666667));
       const real_t Dummy_1626 = Dummy_1593*(Dummy_1615 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_2 + 2.666666666666667));
       const real_t Dummy_1627 = Dummy_1595*(Dummy_1618 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_8 - 1.333333333333333));
       const real_t Dummy_1628 = Dummy_1597*(Dummy_1621 - jac_affine_inv_0_1_BLUE*(-tmp_kernel_op_14 + 2.666666666666667));
       const real_t Dummy_1629 = Dummy_1594*tmp_kernel_op_0 + Dummy_1596*tmp_kernel_op_6 + Dummy_1598*tmp_kernel_op_12;
       const real_t Dummy_1630 = Dummy_1594*0.16666666666666666 + Dummy_1596*0.66666666666666663 + Dummy_1598*0.16666666666666666;
       const real_t Dummy_1631 = Dummy_1594*0.66666666666666663 + Dummy_1596*0.16666666666666666 + Dummy_1598*0.16666666666666666;
       const real_t Dummy_1632 = -Dummy_1599*Dummy_1600 - Dummy_1601*Dummy_1602 - Dummy_1603*Dummy_1604;
       const real_t Dummy_1633 = Dummy_1605*-0.16666666666666666 + Dummy_1606*-0.66666666666666663 + Dummy_1607*-0.16666666666666666;
       const real_t Dummy_1634 = Dummy_1605*-0.66666666666666663 + Dummy_1606*-0.16666666666666666 + Dummy_1607*-0.16666666666666666;
       const real_t Dummy_1635 = -Dummy_1599*Dummy_1608 - Dummy_1601*Dummy_1609 - Dummy_1603*Dummy_1610;
       const real_t Dummy_1636 = Dummy_1611*-0.16666666666666666 + Dummy_1612*-0.66666666666666663 + Dummy_1613*-0.16666666666666666;
       const real_t Dummy_1637 = Dummy_1611*-0.66666666666666663 + Dummy_1612*-0.16666666666666666 + Dummy_1613*-0.16666666666666666;
       const real_t Dummy_1638 = Dummy_1616*tmp_kernel_op_0 + Dummy_1619*tmp_kernel_op_6 + Dummy_1622*tmp_kernel_op_12;
       const real_t Dummy_1639 = Dummy_1616*0.16666666666666666 + Dummy_1619*0.66666666666666663 + Dummy_1622*0.16666666666666666;
       const real_t Dummy_1640 = Dummy_1616*0.66666666666666663 + Dummy_1619*0.16666666666666666 + Dummy_1622*0.16666666666666666;
       const real_t Dummy_1641 = Dummy_1623*tmp_kernel_op_0 + Dummy_1624*tmp_kernel_op_6 + Dummy_1625*tmp_kernel_op_12;
       const real_t Dummy_1642 = Dummy_1623*0.16666666666666666 + Dummy_1624*0.66666666666666663 + Dummy_1625*0.16666666666666666;
       const real_t Dummy_1643 = Dummy_1623*0.66666666666666663 + Dummy_1624*0.16666666666666666 + Dummy_1625*0.16666666666666666;
       const real_t Dummy_1644 = Dummy_1626*tmp_kernel_op_0 + Dummy_1627*tmp_kernel_op_6 + Dummy_1628*tmp_kernel_op_12;
       const real_t Dummy_1645 = Dummy_1626*0.16666666666666666 + Dummy_1627*0.66666666666666663 + Dummy_1628*0.16666666666666666;
       const real_t Dummy_1646 = Dummy_1626*0.66666666666666663 + Dummy_1627*0.16666666666666666 + Dummy_1628*0.16666666666666666;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 3 );
                   std::vector< real_t > _data_mat( 18 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]));
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
                   _data_mat[9] = ((real_t)(elMat_3_0));
                   _data_mat[10] = ((real_t)(elMat_3_1));
                   _data_mat[11] = ((real_t)(elMat_3_2));
                   _data_mat[12] = ((real_t)(elMat_4_0));
                   _data_mat[13] = ((real_t)(elMat_4_1));
                   _data_mat[14] = ((real_t)(elMat_4_2));
                   _data_mat[15] = ((real_t)(elMat_5_0));
                   _data_mat[16] = ((real_t)(elMat_5_1));
                   _data_mat[17] = ((real_t)(elMat_5_2));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 3 );
                   std::vector< real_t > _data_mat( 18 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
               
                   /* Apply basis transformation */
               
               
               
                   _data_mat[0] = ((real_t)(Dummy_1629));
                   _data_mat[1] = ((real_t)(Dummy_1630));
                   _data_mat[2] = ((real_t)(Dummy_1631));
                   _data_mat[3] = ((real_t)(Dummy_1632));
                   _data_mat[4] = ((real_t)(Dummy_1633));
                   _data_mat[5] = ((real_t)(Dummy_1634));
                   _data_mat[6] = ((real_t)(Dummy_1635));
                   _data_mat[7] = ((real_t)(Dummy_1636));
                   _data_mat[8] = ((real_t)(Dummy_1637));
                   _data_mat[9] = ((real_t)(Dummy_1638));
                   _data_mat[10] = ((real_t)(Dummy_1639));
                   _data_mat[11] = ((real_t)(Dummy_1640));
                   _data_mat[12] = ((real_t)(Dummy_1641));
                   _data_mat[13] = ((real_t)(Dummy_1642));
                   _data_mat[14] = ((real_t)(Dummy_1643));
                   _data_mat[15] = ((real_t)(Dummy_1644));
                   _data_mat[16] = ((real_t)(Dummy_1645));
                   _data_mat[17] = ((real_t)(Dummy_1646));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
          {
             {
                {
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 3 );
                   std::vector< real_t > _data_mat( 18 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) - 1]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_1*(micro_edges_per_macro_edge + 1) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1]));
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
                   _data_mat[9] = ((real_t)(elMat_3_0));
                   _data_mat[10] = ((real_t)(elMat_3_1));
                   _data_mat[11] = ((real_t)(elMat_3_2));
                   _data_mat[12] = ((real_t)(elMat_4_0));
                   _data_mat[13] = ((real_t)(elMat_4_1));
                   _data_mat[14] = ((real_t)(elMat_4_2));
                   _data_mat[15] = ((real_t)(elMat_5_0));
                   _data_mat[16] = ((real_t)(elMat_5_1));
                   _data_mat[17] = ((real_t)(elMat_5_2));
               
               
                   mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
