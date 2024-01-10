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























#include "../P1ElementwiseDivKGrad.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P1ElementwiseDivKGrad::computeInverseDiagonalOperatorValues_macro_3D( double * RESTRICT  _data_invDiag_, double * RESTRICT  _data_k, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_0comp2, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_1comp2, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, double macro_vertex_coord_id_2comp2, double macro_vertex_coord_id_3comp0, double macro_vertex_coord_id_3comp1, double macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float ) const
{
    {
       const double _data_q_w [] = {0.050086823222829389, 0.046462929447761279, 0.05318232258357912, 0.016934591412496786};
   
       const double _data_q_p_0 [] = {0.18002969351036546, 0.15593312049918584, 0.21607642918484793, 0.82157254096761967};
   
       const double _data_q_p_1 [] = {0.36531451881463461, 0.45746158708559559, 0.00037551502872928966, 0.12366680032845823};
   
       const double _data_q_p_2 [] = {0.0069232355736274509, 0.3817653560693467, 0.43070170707783589, 0.039933048641498381};
   
       const double p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const double p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const double p_affine_0_2 = macro_vertex_coord_id_0comp2;
       const double p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const double p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const double p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const double p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const double p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const double jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const double jac_affine_0_2 = -p_affine_0_0 + p_affine_3_0;
       const double jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const double jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const double jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
       const double jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
       const double jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
       const double jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
       const double jac_affine_inv_0_0 = (jac_affine_1_1*jac_affine_2_2 - jac_affine_1_2*jac_affine_2_1)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double jac_affine_inv_0_1 = (-jac_affine_0_1*jac_affine_2_2 + jac_affine_0_2*jac_affine_2_1)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double jac_affine_inv_0_2 = (jac_affine_0_1*jac_affine_1_2 - jac_affine_0_2*jac_affine_1_1)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double jac_affine_inv_1_0 = (-jac_affine_1_0*jac_affine_2_2 + jac_affine_1_2*jac_affine_2_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double jac_affine_inv_1_1 = (jac_affine_0_0*jac_affine_2_2 - jac_affine_0_2*jac_affine_2_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double jac_affine_inv_1_2 = (-jac_affine_0_0*jac_affine_1_2 + jac_affine_0_2*jac_affine_1_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double jac_affine_inv_2_0 = (jac_affine_1_0*jac_affine_2_1 - jac_affine_1_1*jac_affine_2_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double jac_affine_inv_2_1 = (-jac_affine_0_0*jac_affine_2_1 + jac_affine_0_1*jac_affine_2_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double jac_affine_inv_2_2 = (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double abs_det_jac_affine = fabs(jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double tmp_q_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0;
       const double tmp_q_5 = -jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1;
       const double tmp_q_9 = -jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2;
       const double Dummy_3822 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3823 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3824 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const double Dummy_3825 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3826 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3827 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3828 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3829 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3830 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3831 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3832 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3833 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3834 = -Dummy_3822 + Dummy_3825;
       const double Dummy_3835 = -Dummy_3822 + Dummy_3828;
       const double Dummy_3836 = -Dummy_3822 + Dummy_3831;
       const double Dummy_3837 = -Dummy_3823 + Dummy_3826;
       const double Dummy_3838 = -Dummy_3823 + Dummy_3829;
       const double Dummy_3839 = -Dummy_3823 + Dummy_3832;
       const double Dummy_3840 = -Dummy_3824 + Dummy_3827;
       const double Dummy_3841 = -Dummy_3824 + Dummy_3830;
       const double Dummy_3842 = -Dummy_3824 + Dummy_3833;
       const double Dummy_3843 = (Dummy_3838*Dummy_3842 - Dummy_3839*Dummy_3841)*1.0 / (Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3844 = (-Dummy_3835*Dummy_3842 + Dummy_3836*Dummy_3841)*1.0 / (Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3845 = (Dummy_3835*Dummy_3839 - Dummy_3836*Dummy_3838)*1.0 / (Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3846 = (-Dummy_3837*Dummy_3842 + Dummy_3839*Dummy_3840)*1.0 / (Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3847 = (Dummy_3834*Dummy_3842 - Dummy_3836*Dummy_3840)*1.0 / (Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3848 = (-Dummy_3834*Dummy_3839 + Dummy_3836*Dummy_3837)*1.0 / (Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3849 = (Dummy_3837*Dummy_3841 - Dummy_3838*Dummy_3840)*1.0 / (Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3850 = (-Dummy_3834*Dummy_3841 + Dummy_3835*Dummy_3840)*1.0 / (Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3851 = (Dummy_3834*Dummy_3838 - Dummy_3835*Dummy_3837)*1.0 / (Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3852 = fabs(Dummy_3834*Dummy_3838*Dummy_3842 - Dummy_3834*Dummy_3839*Dummy_3841 - Dummy_3835*Dummy_3837*Dummy_3842 + Dummy_3835*Dummy_3839*Dummy_3840 + Dummy_3836*Dummy_3837*Dummy_3841 - Dummy_3836*Dummy_3838*Dummy_3840);
       const double Dummy_3853 = -Dummy_3843 - Dummy_3846 - Dummy_3849;
       const double Dummy_3854 = -Dummy_3844 - Dummy_3847 - Dummy_3850;
       const double Dummy_3855 = -Dummy_3845 - Dummy_3848 - Dummy_3851;
       const double Dummy_3856 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const double Dummy_3857 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const double Dummy_3858 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const double Dummy_3859 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3860 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3861 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const double Dummy_3862 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3863 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3864 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const double Dummy_3865 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3866 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3867 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3868 = -Dummy_3856 + Dummy_3859;
       const double Dummy_3869 = -Dummy_3856 + Dummy_3862;
       const double Dummy_3870 = -Dummy_3856 + Dummy_3865;
       const double Dummy_3871 = -Dummy_3857 + Dummy_3860;
       const double Dummy_3872 = -Dummy_3857 + Dummy_3863;
       const double Dummy_3873 = -Dummy_3857 + Dummy_3866;
       const double Dummy_3874 = -Dummy_3858 + Dummy_3861;
       const double Dummy_3875 = -Dummy_3858 + Dummy_3864;
       const double Dummy_3876 = -Dummy_3858 + Dummy_3867;
       const double Dummy_3877 = (Dummy_3872*Dummy_3876 - Dummy_3873*Dummy_3875)*1.0 / (Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3878 = (-Dummy_3869*Dummy_3876 + Dummy_3870*Dummy_3875)*1.0 / (Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3879 = (Dummy_3869*Dummy_3873 - Dummy_3870*Dummy_3872)*1.0 / (Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3880 = (-Dummy_3871*Dummy_3876 + Dummy_3873*Dummy_3874)*1.0 / (Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3881 = (Dummy_3868*Dummy_3876 - Dummy_3870*Dummy_3874)*1.0 / (Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3882 = (-Dummy_3868*Dummy_3873 + Dummy_3870*Dummy_3871)*1.0 / (Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3883 = (Dummy_3871*Dummy_3875 - Dummy_3872*Dummy_3874)*1.0 / (Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3884 = (-Dummy_3868*Dummy_3875 + Dummy_3869*Dummy_3874)*1.0 / (Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3885 = (Dummy_3868*Dummy_3872 - Dummy_3869*Dummy_3871)*1.0 / (Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3886 = fabs(Dummy_3868*Dummy_3872*Dummy_3876 - Dummy_3868*Dummy_3873*Dummy_3875 - Dummy_3869*Dummy_3871*Dummy_3876 + Dummy_3869*Dummy_3873*Dummy_3874 + Dummy_3870*Dummy_3871*Dummy_3875 - Dummy_3870*Dummy_3872*Dummy_3874);
       const double Dummy_3887 = -Dummy_3877 - Dummy_3880 - Dummy_3883;
       const double Dummy_3888 = -Dummy_3878 - Dummy_3881 - Dummy_3884;
       const double Dummy_3889 = -Dummy_3879 - Dummy_3882 - Dummy_3885;
       const double Dummy_3890 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3891 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3892 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const double Dummy_3893 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3894 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3895 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3896 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3897 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3898 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3899 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3900 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3901 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3902 = -Dummy_3890 + Dummy_3893;
       const double Dummy_3903 = -Dummy_3890 + Dummy_3896;
       const double Dummy_3904 = -Dummy_3890 + Dummy_3899;
       const double Dummy_3905 = -Dummy_3891 + Dummy_3894;
       const double Dummy_3906 = -Dummy_3891 + Dummy_3897;
       const double Dummy_3907 = -Dummy_3891 + Dummy_3900;
       const double Dummy_3908 = -Dummy_3892 + Dummy_3895;
       const double Dummy_3909 = -Dummy_3892 + Dummy_3898;
       const double Dummy_3910 = -Dummy_3892 + Dummy_3901;
       const double Dummy_3911 = (Dummy_3906*Dummy_3910 - Dummy_3907*Dummy_3909)*1.0 / (Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3912 = (-Dummy_3903*Dummy_3910 + Dummy_3904*Dummy_3909)*1.0 / (Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3913 = (Dummy_3903*Dummy_3907 - Dummy_3904*Dummy_3906)*1.0 / (Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3914 = (-Dummy_3905*Dummy_3910 + Dummy_3907*Dummy_3908)*1.0 / (Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3915 = (Dummy_3902*Dummy_3910 - Dummy_3904*Dummy_3908)*1.0 / (Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3916 = (-Dummy_3902*Dummy_3907 + Dummy_3904*Dummy_3905)*1.0 / (Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3917 = (Dummy_3905*Dummy_3909 - Dummy_3906*Dummy_3908)*1.0 / (Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3918 = (-Dummy_3902*Dummy_3909 + Dummy_3903*Dummy_3908)*1.0 / (Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3919 = (Dummy_3902*Dummy_3906 - Dummy_3903*Dummy_3905)*1.0 / (Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3920 = fabs(Dummy_3902*Dummy_3906*Dummy_3910 - Dummy_3902*Dummy_3907*Dummy_3909 - Dummy_3903*Dummy_3905*Dummy_3910 + Dummy_3903*Dummy_3907*Dummy_3908 + Dummy_3904*Dummy_3905*Dummy_3909 - Dummy_3904*Dummy_3906*Dummy_3908);
       const double Dummy_3921 = -Dummy_3911 - Dummy_3914 - Dummy_3917;
       const double Dummy_3922 = -Dummy_3912 - Dummy_3915 - Dummy_3918;
       const double Dummy_3923 = -Dummy_3913 - Dummy_3916 - Dummy_3919;
       const double Dummy_3924 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const double Dummy_3925 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const double Dummy_3926 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const double Dummy_3927 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3928 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3929 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const double Dummy_3930 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3931 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3932 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3933 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3934 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3935 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3936 = -Dummy_3924 + Dummy_3927;
       const double Dummy_3937 = -Dummy_3924 + Dummy_3930;
       const double Dummy_3938 = -Dummy_3924 + Dummy_3933;
       const double Dummy_3939 = -Dummy_3925 + Dummy_3928;
       const double Dummy_3940 = -Dummy_3925 + Dummy_3931;
       const double Dummy_3941 = -Dummy_3925 + Dummy_3934;
       const double Dummy_3942 = -Dummy_3926 + Dummy_3929;
       const double Dummy_3943 = -Dummy_3926 + Dummy_3932;
       const double Dummy_3944 = -Dummy_3926 + Dummy_3935;
       const double Dummy_3945 = (Dummy_3940*Dummy_3944 - Dummy_3941*Dummy_3943)*1.0 / (Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3946 = (-Dummy_3937*Dummy_3944 + Dummy_3938*Dummy_3943)*1.0 / (Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3947 = (Dummy_3937*Dummy_3941 - Dummy_3938*Dummy_3940)*1.0 / (Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3948 = (-Dummy_3939*Dummy_3944 + Dummy_3941*Dummy_3942)*1.0 / (Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3949 = (Dummy_3936*Dummy_3944 - Dummy_3938*Dummy_3942)*1.0 / (Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3950 = (-Dummy_3936*Dummy_3941 + Dummy_3938*Dummy_3939)*1.0 / (Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3951 = (Dummy_3939*Dummy_3943 - Dummy_3940*Dummy_3942)*1.0 / (Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3952 = (-Dummy_3936*Dummy_3943 + Dummy_3937*Dummy_3942)*1.0 / (Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3953 = (Dummy_3936*Dummy_3940 - Dummy_3937*Dummy_3939)*1.0 / (Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3954 = fabs(Dummy_3936*Dummy_3940*Dummy_3944 - Dummy_3936*Dummy_3941*Dummy_3943 - Dummy_3937*Dummy_3939*Dummy_3944 + Dummy_3937*Dummy_3941*Dummy_3942 + Dummy_3938*Dummy_3939*Dummy_3943 - Dummy_3938*Dummy_3940*Dummy_3942);
       const double Dummy_3955 = -Dummy_3945 - Dummy_3948 - Dummy_3951;
       const double Dummy_3956 = -Dummy_3946 - Dummy_3949 - Dummy_3952;
       const double Dummy_3957 = -Dummy_3947 - Dummy_3950 - Dummy_3953;
       const double Dummy_3958 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3959 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3960 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const double Dummy_3961 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const double Dummy_3962 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const double Dummy_3963 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const double Dummy_3964 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3965 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3966 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3967 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const double Dummy_3968 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const double Dummy_3969 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const double Dummy_3970 = -Dummy_3958 + Dummy_3961;
       const double Dummy_3971 = -Dummy_3958 + Dummy_3964;
       const double Dummy_3972 = -Dummy_3958 + Dummy_3967;
       const double Dummy_3973 = -Dummy_3959 + Dummy_3962;
       const double Dummy_3974 = -Dummy_3959 + Dummy_3965;
       const double Dummy_3975 = -Dummy_3959 + Dummy_3968;
       const double Dummy_3976 = -Dummy_3960 + Dummy_3963;
       const double Dummy_3977 = -Dummy_3960 + Dummy_3966;
       const double Dummy_3978 = -Dummy_3960 + Dummy_3969;
       const double Dummy_3979 = (Dummy_3974*Dummy_3978 - Dummy_3975*Dummy_3977)*1.0 / (Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3980 = (-Dummy_3971*Dummy_3978 + Dummy_3972*Dummy_3977)*1.0 / (Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3981 = (Dummy_3971*Dummy_3975 - Dummy_3972*Dummy_3974)*1.0 / (Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3982 = (-Dummy_3973*Dummy_3978 + Dummy_3975*Dummy_3976)*1.0 / (Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3983 = (Dummy_3970*Dummy_3978 - Dummy_3972*Dummy_3976)*1.0 / (Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3984 = (-Dummy_3970*Dummy_3975 + Dummy_3972*Dummy_3973)*1.0 / (Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3985 = (Dummy_3973*Dummy_3977 - Dummy_3974*Dummy_3976)*1.0 / (Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3986 = (-Dummy_3970*Dummy_3977 + Dummy_3971*Dummy_3976)*1.0 / (Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3987 = (Dummy_3970*Dummy_3974 - Dummy_3971*Dummy_3973)*1.0 / (Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3988 = fabs(Dummy_3970*Dummy_3974*Dummy_3978 - Dummy_3970*Dummy_3975*Dummy_3977 - Dummy_3971*Dummy_3973*Dummy_3978 + Dummy_3971*Dummy_3975*Dummy_3976 + Dummy_3972*Dummy_3973*Dummy_3977 - Dummy_3972*Dummy_3974*Dummy_3976);
       const double Dummy_3989 = -Dummy_3979 - Dummy_3982 - Dummy_3985;
       const double Dummy_3990 = -Dummy_3980 - Dummy_3983 - Dummy_3986;
       const double Dummy_3991 = -Dummy_3981 - Dummy_3984 - Dummy_3987;
       {
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const double k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const double k_dof_1 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const double k_dof_0 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const double k_dof_3 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             double q_acc_0_0 = 0.0;
             double q_acc_0_1 = 0.0;
             double q_acc_0_2 = 0.0;
             double q_acc_0_3 = 0.0;
             double q_acc_1_1 = 0.0;
             double q_acc_1_2 = 0.0;
             double q_acc_1_3 = 0.0;
             double q_acc_2_2 = 0.0;
             double q_acc_2_3 = 0.0;
             double q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const double tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                const double tmp_q_2 = jac_affine_inv_0_0*tmp_q_1;
                const double tmp_q_3 = jac_affine_inv_1_0*tmp_q_1;
                const double tmp_q_4 = jac_affine_inv_2_0*tmp_q_1;
                const double tmp_q_6 = jac_affine_inv_0_1*tmp_q_1;
                const double tmp_q_7 = jac_affine_inv_1_1*tmp_q_1;
                const double tmp_q_8 = jac_affine_inv_2_1*tmp_q_1;
                const double tmp_q_10 = jac_affine_inv_0_2*tmp_q_1;
                const double tmp_q_11 = jac_affine_inv_1_2*tmp_q_1;
                const double tmp_q_12 = jac_affine_inv_2_2*tmp_q_1;
                const double tmp_q_13 = abs_det_jac_affine*_data_q_w[q];
                const double res_tmp_0_0 = tmp_q_13*(tmp_q_0*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + tmp_q_5*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + tmp_q_9*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const double res_tmp_0_1 = tmp_q_13*(tmp_q_0*tmp_q_2 + tmp_q_10*tmp_q_9 + tmp_q_5*tmp_q_6);
                const double res_tmp_0_2 = tmp_q_13*(tmp_q_0*tmp_q_3 + tmp_q_11*tmp_q_9 + tmp_q_5*tmp_q_7);
                const double res_tmp_0_3 = tmp_q_13*(tmp_q_0*tmp_q_4 + tmp_q_12*tmp_q_9 + tmp_q_5*tmp_q_8);
                const double res_tmp_1_1 = tmp_q_13*((jac_affine_inv_0_0*jac_affine_inv_0_0)*tmp_q_1 + (jac_affine_inv_0_1*jac_affine_inv_0_1)*tmp_q_1 + (jac_affine_inv_0_2*jac_affine_inv_0_2)*tmp_q_1);
                const double res_tmp_1_2 = tmp_q_13*(jac_affine_inv_1_0*tmp_q_2 + jac_affine_inv_1_1*tmp_q_6 + jac_affine_inv_1_2*tmp_q_10);
                const double res_tmp_1_3 = tmp_q_13*(jac_affine_inv_2_0*tmp_q_2 + jac_affine_inv_2_1*tmp_q_6 + jac_affine_inv_2_2*tmp_q_10);
                const double res_tmp_2_2 = tmp_q_13*((jac_affine_inv_1_0*jac_affine_inv_1_0)*tmp_q_1 + (jac_affine_inv_1_1*jac_affine_inv_1_1)*tmp_q_1 + (jac_affine_inv_1_2*jac_affine_inv_1_2)*tmp_q_1);
                const double res_tmp_2_3 = tmp_q_13*(jac_affine_inv_2_0*tmp_q_3 + jac_affine_inv_2_1*tmp_q_7 + jac_affine_inv_2_2*tmp_q_11);
                const double res_tmp_3_3 = tmp_q_13*((jac_affine_inv_2_0*jac_affine_inv_2_0)*tmp_q_1 + (jac_affine_inv_2_1*jac_affine_inv_2_1)*tmp_q_1 + (jac_affine_inv_2_2*jac_affine_inv_2_2)*tmp_q_1);
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + res_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + res_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + res_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
             }
             double q_acc_1_0 = q_acc_0_1;
             double q_acc_2_0 = q_acc_0_2;
             double q_acc_2_1 = q_acc_1_2;
             double q_acc_3_0 = q_acc_0_3;
             double q_acc_3_1 = q_acc_1_3;
             double q_acc_3_2 = q_acc_2_3;
             const double elMatDiag_0 = q_acc_0_0;
             const double elMatDiag_1 = q_acc_1_1;
             const double elMatDiag_2 = q_acc_2_2;
             const double elMatDiag_3 = q_acc_3_3;
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const double k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const double k_dof_1 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const double k_dof_0 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const double k_dof_3 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             double q_acc_0_0 = 0.0;
             double q_acc_0_1 = 0.0;
             double q_acc_0_2 = 0.0;
             double q_acc_0_3 = 0.0;
             double q_acc_1_1 = 0.0;
             double q_acc_1_2 = 0.0;
             double q_acc_1_3 = 0.0;
             double q_acc_2_2 = 0.0;
             double q_acc_2_3 = 0.0;
             double q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const double tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                const double tmp_q_2 = Dummy_3843*tmp_q_1;
                const double tmp_q_3 = Dummy_3846*tmp_q_1;
                const double tmp_q_4 = Dummy_3849*tmp_q_1;
                const double tmp_q_6 = Dummy_3844*tmp_q_1;
                const double tmp_q_7 = Dummy_3847*tmp_q_1;
                const double tmp_q_8 = Dummy_3850*tmp_q_1;
                const double tmp_q_10 = Dummy_3845*tmp_q_1;
                const double tmp_q_11 = Dummy_3848*tmp_q_1;
                const double tmp_q_12 = Dummy_3851*tmp_q_1;
                const double tmp_q_13 = Dummy_3852*_data_q_w[q];
                const double res_tmp_0_0 = tmp_q_13*(Dummy_3853*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3854*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3855*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const double res_tmp_0_1 = tmp_q_13*(Dummy_3853*tmp_q_2 + Dummy_3854*tmp_q_6 + Dummy_3855*tmp_q_10);
                const double res_tmp_0_2 = tmp_q_13*(Dummy_3853*tmp_q_3 + Dummy_3854*tmp_q_7 + Dummy_3855*tmp_q_11);
                const double res_tmp_0_3 = tmp_q_13*(Dummy_3853*tmp_q_4 + Dummy_3854*tmp_q_8 + Dummy_3855*tmp_q_12);
                const double res_tmp_1_1 = tmp_q_13*((Dummy_3843*Dummy_3843)*tmp_q_1 + (Dummy_3844*Dummy_3844)*tmp_q_1 + (Dummy_3845*Dummy_3845)*tmp_q_1);
                const double res_tmp_1_2 = tmp_q_13*(Dummy_3846*tmp_q_2 + Dummy_3847*tmp_q_6 + Dummy_3848*tmp_q_10);
                const double res_tmp_1_3 = tmp_q_13*(Dummy_3849*tmp_q_2 + Dummy_3850*tmp_q_6 + Dummy_3851*tmp_q_10);
                const double res_tmp_2_2 = tmp_q_13*((Dummy_3846*Dummy_3846)*tmp_q_1 + (Dummy_3847*Dummy_3847)*tmp_q_1 + (Dummy_3848*Dummy_3848)*tmp_q_1);
                const double res_tmp_2_3 = tmp_q_13*(Dummy_3849*tmp_q_3 + Dummy_3850*tmp_q_7 + Dummy_3851*tmp_q_11);
                const double res_tmp_3_3 = tmp_q_13*((Dummy_3849*Dummy_3849)*tmp_q_1 + (Dummy_3850*Dummy_3850)*tmp_q_1 + (Dummy_3851*Dummy_3851)*tmp_q_1);
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + res_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + res_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + res_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
             }
             double q_acc_1_0 = q_acc_0_1;
             double q_acc_2_0 = q_acc_0_2;
             double q_acc_2_1 = q_acc_1_2;
             double q_acc_3_0 = q_acc_0_3;
             double q_acc_3_1 = q_acc_1_3;
             double q_acc_3_2 = q_acc_2_3;
             const double elMatDiag_0 = q_acc_0_0;
             const double elMatDiag_1 = q_acc_1_1;
             const double elMatDiag_2 = q_acc_2_2;
             const double elMatDiag_3 = q_acc_3_3;
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_3 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const double k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const double k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const double k_dof_0 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const double k_dof_3 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             double q_acc_0_0 = 0.0;
             double q_acc_0_1 = 0.0;
             double q_acc_0_2 = 0.0;
             double q_acc_0_3 = 0.0;
             double q_acc_1_1 = 0.0;
             double q_acc_1_2 = 0.0;
             double q_acc_1_3 = 0.0;
             double q_acc_2_2 = 0.0;
             double q_acc_2_3 = 0.0;
             double q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const double tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                const double tmp_q_2 = Dummy_3877*tmp_q_1;
                const double tmp_q_3 = Dummy_3880*tmp_q_1;
                const double tmp_q_4 = Dummy_3883*tmp_q_1;
                const double tmp_q_6 = Dummy_3878*tmp_q_1;
                const double tmp_q_7 = Dummy_3881*tmp_q_1;
                const double tmp_q_8 = Dummy_3884*tmp_q_1;
                const double tmp_q_10 = Dummy_3879*tmp_q_1;
                const double tmp_q_11 = Dummy_3882*tmp_q_1;
                const double tmp_q_12 = Dummy_3885*tmp_q_1;
                const double tmp_q_13 = Dummy_3886*_data_q_w[q];
                const double res_tmp_0_0 = tmp_q_13*(Dummy_3887*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3888*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3889*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const double res_tmp_0_1 = tmp_q_13*(Dummy_3887*tmp_q_2 + Dummy_3888*tmp_q_6 + Dummy_3889*tmp_q_10);
                const double res_tmp_0_2 = tmp_q_13*(Dummy_3887*tmp_q_3 + Dummy_3888*tmp_q_7 + Dummy_3889*tmp_q_11);
                const double res_tmp_0_3 = tmp_q_13*(Dummy_3887*tmp_q_4 + Dummy_3888*tmp_q_8 + Dummy_3889*tmp_q_12);
                const double res_tmp_1_1 = tmp_q_13*((Dummy_3877*Dummy_3877)*tmp_q_1 + (Dummy_3878*Dummy_3878)*tmp_q_1 + (Dummy_3879*Dummy_3879)*tmp_q_1);
                const double res_tmp_1_2 = tmp_q_13*(Dummy_3880*tmp_q_2 + Dummy_3881*tmp_q_6 + Dummy_3882*tmp_q_10);
                const double res_tmp_1_3 = tmp_q_13*(Dummy_3883*tmp_q_2 + Dummy_3884*tmp_q_6 + Dummy_3885*tmp_q_10);
                const double res_tmp_2_2 = tmp_q_13*((Dummy_3880*Dummy_3880)*tmp_q_1 + (Dummy_3881*Dummy_3881)*tmp_q_1 + (Dummy_3882*Dummy_3882)*tmp_q_1);
                const double res_tmp_2_3 = tmp_q_13*(Dummy_3883*tmp_q_3 + Dummy_3884*tmp_q_7 + Dummy_3885*tmp_q_11);
                const double res_tmp_3_3 = tmp_q_13*((Dummy_3883*Dummy_3883)*tmp_q_1 + (Dummy_3884*Dummy_3884)*tmp_q_1 + (Dummy_3885*Dummy_3885)*tmp_q_1);
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + res_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + res_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + res_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
             }
             double q_acc_1_0 = q_acc_0_1;
             double q_acc_2_0 = q_acc_0_2;
             double q_acc_2_1 = q_acc_1_2;
             double q_acc_3_0 = q_acc_0_3;
             double q_acc_3_1 = q_acc_1_3;
             double q_acc_3_2 = q_acc_2_3;
             const double elMatDiag_0 = q_acc_0_0;
             const double elMatDiag_1 = q_acc_1_1;
             const double elMatDiag_2 = q_acc_2_2;
             const double elMatDiag_3 = q_acc_3_3;
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_2 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_3 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const double k_dof_2 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const double k_dof_1 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const double k_dof_0 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const double k_dof_3 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             double q_acc_0_0 = 0.0;
             double q_acc_0_1 = 0.0;
             double q_acc_0_2 = 0.0;
             double q_acc_0_3 = 0.0;
             double q_acc_1_1 = 0.0;
             double q_acc_1_2 = 0.0;
             double q_acc_1_3 = 0.0;
             double q_acc_2_2 = 0.0;
             double q_acc_2_3 = 0.0;
             double q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const double tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                const double tmp_q_2 = Dummy_3911*tmp_q_1;
                const double tmp_q_3 = Dummy_3914*tmp_q_1;
                const double tmp_q_4 = Dummy_3917*tmp_q_1;
                const double tmp_q_6 = Dummy_3912*tmp_q_1;
                const double tmp_q_7 = Dummy_3915*tmp_q_1;
                const double tmp_q_8 = Dummy_3918*tmp_q_1;
                const double tmp_q_10 = Dummy_3913*tmp_q_1;
                const double tmp_q_11 = Dummy_3916*tmp_q_1;
                const double tmp_q_12 = Dummy_3919*tmp_q_1;
                const double tmp_q_13 = Dummy_3920*_data_q_w[q];
                const double res_tmp_0_0 = tmp_q_13*(Dummy_3921*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3922*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3923*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const double res_tmp_0_1 = tmp_q_13*(Dummy_3921*tmp_q_2 + Dummy_3922*tmp_q_6 + Dummy_3923*tmp_q_10);
                const double res_tmp_0_2 = tmp_q_13*(Dummy_3921*tmp_q_3 + Dummy_3922*tmp_q_7 + Dummy_3923*tmp_q_11);
                const double res_tmp_0_3 = tmp_q_13*(Dummy_3921*tmp_q_4 + Dummy_3922*tmp_q_8 + Dummy_3923*tmp_q_12);
                const double res_tmp_1_1 = tmp_q_13*((Dummy_3911*Dummy_3911)*tmp_q_1 + (Dummy_3912*Dummy_3912)*tmp_q_1 + (Dummy_3913*Dummy_3913)*tmp_q_1);
                const double res_tmp_1_2 = tmp_q_13*(Dummy_3914*tmp_q_2 + Dummy_3915*tmp_q_6 + Dummy_3916*tmp_q_10);
                const double res_tmp_1_3 = tmp_q_13*(Dummy_3917*tmp_q_2 + Dummy_3918*tmp_q_6 + Dummy_3919*tmp_q_10);
                const double res_tmp_2_2 = tmp_q_13*((Dummy_3914*Dummy_3914)*tmp_q_1 + (Dummy_3915*Dummy_3915)*tmp_q_1 + (Dummy_3916*Dummy_3916)*tmp_q_1);
                const double res_tmp_2_3 = tmp_q_13*(Dummy_3917*tmp_q_3 + Dummy_3918*tmp_q_7 + Dummy_3919*tmp_q_11);
                const double res_tmp_3_3 = tmp_q_13*((Dummy_3917*Dummy_3917)*tmp_q_1 + (Dummy_3918*Dummy_3918)*tmp_q_1 + (Dummy_3919*Dummy_3919)*tmp_q_1);
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + res_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + res_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + res_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
             }
             double q_acc_1_0 = q_acc_0_1;
             double q_acc_2_0 = q_acc_0_2;
             double q_acc_2_1 = q_acc_1_2;
             double q_acc_3_0 = q_acc_0_3;
             double q_acc_3_1 = q_acc_1_3;
             double q_acc_3_2 = q_acc_2_3;
             const double elMatDiag_0 = q_acc_0_0;
             const double elMatDiag_1 = q_acc_1_1;
             const double elMatDiag_2 = q_acc_2_2;
             const double elMatDiag_3 = q_acc_3_3;
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_2 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const double k_dof_2 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const double k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const double k_dof_0 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const double k_dof_3 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             double q_acc_0_0 = 0.0;
             double q_acc_0_1 = 0.0;
             double q_acc_0_2 = 0.0;
             double q_acc_0_3 = 0.0;
             double q_acc_1_1 = 0.0;
             double q_acc_1_2 = 0.0;
             double q_acc_1_3 = 0.0;
             double q_acc_2_2 = 0.0;
             double q_acc_2_3 = 0.0;
             double q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const double tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                const double tmp_q_2 = Dummy_3945*tmp_q_1;
                const double tmp_q_3 = Dummy_3948*tmp_q_1;
                const double tmp_q_4 = Dummy_3951*tmp_q_1;
                const double tmp_q_6 = Dummy_3946*tmp_q_1;
                const double tmp_q_7 = Dummy_3949*tmp_q_1;
                const double tmp_q_8 = Dummy_3952*tmp_q_1;
                const double tmp_q_10 = Dummy_3947*tmp_q_1;
                const double tmp_q_11 = Dummy_3950*tmp_q_1;
                const double tmp_q_12 = Dummy_3953*tmp_q_1;
                const double tmp_q_13 = Dummy_3954*_data_q_w[q];
                const double res_tmp_0_0 = tmp_q_13*(Dummy_3955*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3956*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3957*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const double res_tmp_0_1 = tmp_q_13*(Dummy_3955*tmp_q_2 + Dummy_3956*tmp_q_6 + Dummy_3957*tmp_q_10);
                const double res_tmp_0_2 = tmp_q_13*(Dummy_3955*tmp_q_3 + Dummy_3956*tmp_q_7 + Dummy_3957*tmp_q_11);
                const double res_tmp_0_3 = tmp_q_13*(Dummy_3955*tmp_q_4 + Dummy_3956*tmp_q_8 + Dummy_3957*tmp_q_12);
                const double res_tmp_1_1 = tmp_q_13*((Dummy_3945*Dummy_3945)*tmp_q_1 + (Dummy_3946*Dummy_3946)*tmp_q_1 + (Dummy_3947*Dummy_3947)*tmp_q_1);
                const double res_tmp_1_2 = tmp_q_13*(Dummy_3948*tmp_q_2 + Dummy_3949*tmp_q_6 + Dummy_3950*tmp_q_10);
                const double res_tmp_1_3 = tmp_q_13*(Dummy_3951*tmp_q_2 + Dummy_3952*tmp_q_6 + Dummy_3953*tmp_q_10);
                const double res_tmp_2_2 = tmp_q_13*((Dummy_3948*Dummy_3948)*tmp_q_1 + (Dummy_3949*Dummy_3949)*tmp_q_1 + (Dummy_3950*Dummy_3950)*tmp_q_1);
                const double res_tmp_2_3 = tmp_q_13*(Dummy_3951*tmp_q_3 + Dummy_3952*tmp_q_7 + Dummy_3953*tmp_q_11);
                const double res_tmp_3_3 = tmp_q_13*((Dummy_3951*Dummy_3951)*tmp_q_1 + (Dummy_3952*Dummy_3952)*tmp_q_1 + (Dummy_3953*Dummy_3953)*tmp_q_1);
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + res_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + res_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + res_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
             }
             double q_acc_1_0 = q_acc_0_1;
             double q_acc_2_0 = q_acc_0_2;
             double q_acc_2_1 = q_acc_1_2;
             double q_acc_3_0 = q_acc_0_3;
             double q_acc_3_1 = q_acc_1_3;
             double q_acc_3_2 = q_acc_2_3;
             const double elMatDiag_0 = q_acc_0_0;
             const double elMatDiag_1 = q_acc_1_1;
             const double elMatDiag_2 = q_acc_2_2;
             const double elMatDiag_3 = q_acc_3_3;
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_3 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const double k_dof_2 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const double k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const double k_dof_0 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const double k_dof_3 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             double q_acc_0_0 = 0.0;
             double q_acc_0_1 = 0.0;
             double q_acc_0_2 = 0.0;
             double q_acc_0_3 = 0.0;
             double q_acc_1_1 = 0.0;
             double q_acc_1_2 = 0.0;
             double q_acc_1_3 = 0.0;
             double q_acc_2_2 = 0.0;
             double q_acc_2_3 = 0.0;
             double q_acc_3_3 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const double tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                const double tmp_q_2 = Dummy_3979*tmp_q_1;
                const double tmp_q_3 = Dummy_3982*tmp_q_1;
                const double tmp_q_4 = Dummy_3985*tmp_q_1;
                const double tmp_q_6 = Dummy_3980*tmp_q_1;
                const double tmp_q_7 = Dummy_3983*tmp_q_1;
                const double tmp_q_8 = Dummy_3986*tmp_q_1;
                const double tmp_q_10 = Dummy_3981*tmp_q_1;
                const double tmp_q_11 = Dummy_3984*tmp_q_1;
                const double tmp_q_12 = Dummy_3987*tmp_q_1;
                const double tmp_q_13 = Dummy_3988*_data_q_w[q];
                const double res_tmp_0_0 = tmp_q_13*(Dummy_3989*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3990*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3991*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const double res_tmp_0_1 = tmp_q_13*(Dummy_3989*tmp_q_2 + Dummy_3990*tmp_q_6 + Dummy_3991*tmp_q_10);
                const double res_tmp_0_2 = tmp_q_13*(Dummy_3989*tmp_q_3 + Dummy_3990*tmp_q_7 + Dummy_3991*tmp_q_11);
                const double res_tmp_0_3 = tmp_q_13*(Dummy_3989*tmp_q_4 + Dummy_3990*tmp_q_8 + Dummy_3991*tmp_q_12);
                const double res_tmp_1_1 = tmp_q_13*((Dummy_3979*Dummy_3979)*tmp_q_1 + (Dummy_3980*Dummy_3980)*tmp_q_1 + (Dummy_3981*Dummy_3981)*tmp_q_1);
                const double res_tmp_1_2 = tmp_q_13*(Dummy_3982*tmp_q_2 + Dummy_3983*tmp_q_6 + Dummy_3984*tmp_q_10);
                const double res_tmp_1_3 = tmp_q_13*(Dummy_3985*tmp_q_2 + Dummy_3986*tmp_q_6 + Dummy_3987*tmp_q_10);
                const double res_tmp_2_2 = tmp_q_13*((Dummy_3982*Dummy_3982)*tmp_q_1 + (Dummy_3983*Dummy_3983)*tmp_q_1 + (Dummy_3984*Dummy_3984)*tmp_q_1);
                const double res_tmp_2_3 = tmp_q_13*(Dummy_3985*tmp_q_3 + Dummy_3986*tmp_q_7 + Dummy_3987*tmp_q_11);
                const double res_tmp_3_3 = tmp_q_13*((Dummy_3985*Dummy_3985)*tmp_q_1 + (Dummy_3986*Dummy_3986)*tmp_q_1 + (Dummy_3987*Dummy_3987)*tmp_q_1);
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_0_1 = q_acc_0_1 + res_tmp_0_1;
                q_acc_0_2 = q_acc_0_2 + res_tmp_0_2;
                q_acc_0_3 = q_acc_0_3 + res_tmp_0_3;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_1_2 = q_acc_1_2 + res_tmp_1_2;
                q_acc_1_3 = q_acc_1_3 + res_tmp_1_3;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_2_3 = q_acc_2_3 + res_tmp_2_3;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
             }
             double q_acc_1_0 = q_acc_0_1;
             double q_acc_2_0 = q_acc_0_2;
             double q_acc_2_1 = q_acc_1_2;
             double q_acc_3_0 = q_acc_0_3;
             double q_acc_3_1 = q_acc_1_3;
             double q_acc_3_2 = q_acc_2_3;
             const double elMatDiag_0 = q_acc_0_0;
             const double elMatDiag_1 = q_acc_1_1;
             const double elMatDiag_2 = q_acc_2_2;
             const double elMatDiag_3 = q_acc_3_3;
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_2 + _data_invDiag_[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
