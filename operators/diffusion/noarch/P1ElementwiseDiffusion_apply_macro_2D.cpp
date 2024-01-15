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

void P1ElementwiseDiffusion::apply_macro_2D( double * RESTRICT  _data_dst, double * RESTRICT  _data_src, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float ) const
{
    {
       const double tmp_GRAY_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const double p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const double p_affine_1_0 = macro_vertex_coord_id_0comp0 + tmp_GRAY_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double p_affine_1_1 = macro_vertex_coord_id_0comp1 + tmp_GRAY_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double p_affine_2_0 = macro_vertex_coord_id_0comp0 + tmp_GRAY_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double p_affine_2_1 = macro_vertex_coord_id_0comp1 + tmp_GRAY_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const double jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const double jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const double jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const double tmp_GRAY_1 = jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0;
       const double tmp_GRAY_2 = 1.0 / (tmp_GRAY_1);
       const double jac_affine_inv_0_0 = jac_affine_1_1*tmp_GRAY_2;
       const double jac_affine_inv_0_1 = -jac_affine_0_1*tmp_GRAY_2;
       const double jac_affine_inv_1_0 = -jac_affine_1_0*tmp_GRAY_2;
       const double jac_affine_inv_1_1 = jac_affine_0_0*tmp_GRAY_2;
       const double abs_det_jac_affine = fabs(tmp_GRAY_1);
       const double tmp_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0;
       const double tmp_1 = -jac_affine_inv_0_1 - jac_affine_inv_1_1;
       const double tmp_2 = abs_det_jac_affine*0.50000000000000089;
       const double tmp_4 = jac_affine_inv_0_0*tmp_0 + jac_affine_inv_0_1*tmp_1;
       const double tmp_6 = jac_affine_inv_1_0*tmp_0 + jac_affine_inv_1_1*tmp_1;
       const double tmp_8 = jac_affine_inv_0_0*jac_affine_inv_1_0 + jac_affine_inv_0_1*jac_affine_inv_1_1;
       const double tmp_BLUE_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_BLUE_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_BLUE_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_BLUE_3 = tmp_BLUE_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_BLUE_4 = tmp_BLUE_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double Dummy_1049 = tmp_BLUE_1;
       const double Dummy_1050 = tmp_BLUE_2;
       const double Dummy_1051 = macro_vertex_coord_id_0comp0 + tmp_BLUE_3;
       const double Dummy_1052 = macro_vertex_coord_id_0comp1 + tmp_BLUE_4;
       const double Dummy_1053 = tmp_BLUE_1 + tmp_BLUE_3;
       const double Dummy_1054 = tmp_BLUE_2 + tmp_BLUE_4;
       const double Dummy_1055 = -Dummy_1049 + Dummy_1051;
       const double Dummy_1056 = -Dummy_1049 + Dummy_1053;
       const double Dummy_1057 = -Dummy_1050 + Dummy_1052;
       const double Dummy_1058 = -Dummy_1050 + Dummy_1054;
       const double tmp_BLUE_5 = Dummy_1055*Dummy_1058 - Dummy_1056*Dummy_1057;
       const double tmp_BLUE_6 = 1.0 / (tmp_BLUE_5);
       const double Dummy_1059 = Dummy_1058*tmp_BLUE_6;
       const double Dummy_1060 = -Dummy_1056*tmp_BLUE_6;
       const double Dummy_1061 = -Dummy_1057*tmp_BLUE_6;
       const double Dummy_1062 = Dummy_1055*tmp_BLUE_6;
       const double Dummy_1063 = fabs(tmp_BLUE_5);
       const double Dummy_1064 = -Dummy_1059 - Dummy_1061;
       const double Dummy_1065 = -Dummy_1060 - Dummy_1062;
       const double Dummy_1066 = Dummy_1063*0.50000000000000089;
       const double Dummy_1068 = Dummy_1059*Dummy_1064 + Dummy_1060*Dummy_1065;
       const double Dummy_1070 = Dummy_1061*Dummy_1064 + Dummy_1062*Dummy_1065;
       const double Dummy_1072 = Dummy_1059*Dummy_1061 + Dummy_1060*Dummy_1062;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const double src_dof_0 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const double src_dof_1 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const double src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const double tmp_3 = src_dof_0*tmp_2;
             const double tmp_5 = src_dof_1*tmp_2;
             const double tmp_7 = src_dof_2*tmp_2;
             const double elMatVec_0 = tmp_3*((tmp_0*tmp_0) + (tmp_1*tmp_1)) + tmp_4*tmp_5 + tmp_6*tmp_7;
             const double elMatVec_1 = tmp_3*tmp_4 + tmp_5*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1)) + tmp_7*tmp_8;
             const double elMatVec_2 = tmp_3*tmp_6 + tmp_5*tmp_8 + tmp_7*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1));
             {
                {
                   _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                }
             }
             const double Dummy_1046 = _data_src[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const double Dummy_1047 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const double Dummy_1048 = _data_src[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const double Dummy_1067 = Dummy_1046*Dummy_1066;
             const double Dummy_1069 = Dummy_1047*Dummy_1066;
             const double Dummy_1071 = Dummy_1048*Dummy_1066;
             const double Dummy_1073 = Dummy_1067*((Dummy_1064*Dummy_1064) + (Dummy_1065*Dummy_1065)) + Dummy_1068*Dummy_1069 + Dummy_1070*Dummy_1071;
             const double Dummy_1074 = Dummy_1067*Dummy_1068 + Dummy_1069*((Dummy_1059*Dummy_1059) + (Dummy_1060*Dummy_1060)) + Dummy_1071*Dummy_1072;
             const double Dummy_1075 = Dummy_1067*Dummy_1070 + Dummy_1069*Dummy_1072 + Dummy_1071*((Dummy_1061*Dummy_1061) + (Dummy_1062*Dummy_1062));
             {
                {
                   _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = Dummy_1073 + _data_dst[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = Dummy_1074 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = Dummy_1075 + _data_dst[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                }
             }
          }
          const double src_dof_0 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - 1];
          const double src_dof_1 = _data_src[ctr_1*(micro_edges_per_macro_edge + 2) - ctr_1 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2))];
          const double src_dof_2 = _data_src[-ctr_1 + micro_edges_per_macro_edge + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - 1];
          const double tmp_3 = src_dof_0*tmp_2;
          const double tmp_5 = src_dof_1*tmp_2;
          const double tmp_7 = src_dof_2*tmp_2;
          const double elMatVec_0 = tmp_3*((tmp_0*tmp_0) + (tmp_1*tmp_1)) + tmp_4*tmp_5 + tmp_6*tmp_7;
          const double elMatVec_1 = tmp_3*tmp_4 + tmp_5*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1)) + tmp_7*tmp_8;
          const double elMatVec_2 = tmp_3*tmp_6 + tmp_5*tmp_8 + tmp_7*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1));
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
