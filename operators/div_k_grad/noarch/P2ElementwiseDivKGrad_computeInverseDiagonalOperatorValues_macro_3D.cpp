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

























#include "../P2ElementwiseDivKGrad.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseDivKGrad::computeInverseDiagonalOperatorValues_macro_3D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t * RESTRICT  _data_kEdge, real_t * RESTRICT  _data_kVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.050086823222829389, 0.046462929447761279, 0.05318232258357912, 0.016934591412496786};
   
       const real_t _data_q_p_0 [] = {0.18002969351036546, 0.15593312049918584, 0.21607642918484793, 0.82157254096761967};
   
       const real_t _data_q_p_1 [] = {0.36531451881463461, 0.45746158708559559, 0.00037551502872928966, 0.12366680032845823};
   
       const real_t _data_q_p_2 [] = {0.0069232355736274509, 0.3817653560693467, 0.43070170707783589, 0.039933048641498381};
   
       const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2;
       const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const real_t jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const real_t jac_affine_0_2 = -p_affine_0_0 + p_affine_3_0;
       const real_t jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const real_t jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const real_t jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
       const real_t jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
       const real_t jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
       const real_t jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
       const real_t jac_affine_inv_0_0 = (jac_affine_1_1*jac_affine_2_2 - jac_affine_1_2*jac_affine_2_1)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t jac_affine_inv_0_1 = (-jac_affine_0_1*jac_affine_2_2 + jac_affine_0_2*jac_affine_2_1)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t jac_affine_inv_0_2 = (jac_affine_0_1*jac_affine_1_2 - jac_affine_0_2*jac_affine_1_1)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t jac_affine_inv_1_0 = (-jac_affine_1_0*jac_affine_2_2 + jac_affine_1_2*jac_affine_2_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t jac_affine_inv_1_1 = (jac_affine_0_0*jac_affine_2_2 - jac_affine_0_2*jac_affine_2_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t jac_affine_inv_1_2 = (-jac_affine_0_0*jac_affine_1_2 + jac_affine_0_2*jac_affine_1_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t jac_affine_inv_2_0 = (jac_affine_1_0*jac_affine_2_1 - jac_affine_1_1*jac_affine_2_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t jac_affine_inv_2_1 = (-jac_affine_0_0*jac_affine_2_1 + jac_affine_0_1*jac_affine_2_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t jac_affine_inv_2_2 = (jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0)*1.0 / (jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t abs_det_jac_affine = abs(jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t Dummy_4732 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_4733 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_4734 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_4735 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4736 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4737 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4738 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4739 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4740 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4741 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4742 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4743 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4744 = -Dummy_4732 + Dummy_4735;
       const real_t Dummy_4745 = -Dummy_4732 + Dummy_4738;
       const real_t Dummy_4746 = -Dummy_4732 + Dummy_4741;
       const real_t Dummy_4747 = -Dummy_4733 + Dummy_4736;
       const real_t Dummy_4748 = -Dummy_4733 + Dummy_4739;
       const real_t Dummy_4749 = -Dummy_4733 + Dummy_4742;
       const real_t Dummy_4750 = -Dummy_4734 + Dummy_4737;
       const real_t Dummy_4751 = -Dummy_4734 + Dummy_4740;
       const real_t Dummy_4752 = -Dummy_4734 + Dummy_4743;
       const real_t Dummy_4753 = (Dummy_4748*Dummy_4752 - Dummy_4749*Dummy_4751)*1.0 / (Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4754 = (-Dummy_4745*Dummy_4752 + Dummy_4746*Dummy_4751)*1.0 / (Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4755 = (Dummy_4745*Dummy_4749 - Dummy_4746*Dummy_4748)*1.0 / (Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4756 = (-Dummy_4747*Dummy_4752 + Dummy_4749*Dummy_4750)*1.0 / (Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4757 = (Dummy_4744*Dummy_4752 - Dummy_4746*Dummy_4750)*1.0 / (Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4758 = (-Dummy_4744*Dummy_4749 + Dummy_4746*Dummy_4747)*1.0 / (Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4759 = (Dummy_4747*Dummy_4751 - Dummy_4748*Dummy_4750)*1.0 / (Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4760 = (-Dummy_4744*Dummy_4751 + Dummy_4745*Dummy_4750)*1.0 / (Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4761 = (Dummy_4744*Dummy_4748 - Dummy_4745*Dummy_4747)*1.0 / (Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4762 = abs(Dummy_4744*Dummy_4748*Dummy_4752 - Dummy_4744*Dummy_4749*Dummy_4751 - Dummy_4745*Dummy_4747*Dummy_4752 + Dummy_4745*Dummy_4749*Dummy_4750 + Dummy_4746*Dummy_4747*Dummy_4751 - Dummy_4746*Dummy_4748*Dummy_4750);
       const real_t Dummy_4763 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t Dummy_4764 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t Dummy_4765 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const real_t Dummy_4766 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_4767 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_4768 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_4769 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_4770 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_4771 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_4772 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4773 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4774 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4775 = -Dummy_4763 + Dummy_4766;
       const real_t Dummy_4776 = -Dummy_4763 + Dummy_4769;
       const real_t Dummy_4777 = -Dummy_4763 + Dummy_4772;
       const real_t Dummy_4778 = -Dummy_4764 + Dummy_4767;
       const real_t Dummy_4779 = -Dummy_4764 + Dummy_4770;
       const real_t Dummy_4780 = -Dummy_4764 + Dummy_4773;
       const real_t Dummy_4781 = -Dummy_4765 + Dummy_4768;
       const real_t Dummy_4782 = -Dummy_4765 + Dummy_4771;
       const real_t Dummy_4783 = -Dummy_4765 + Dummy_4774;
       const real_t Dummy_4784 = (Dummy_4779*Dummy_4783 - Dummy_4780*Dummy_4782)*1.0 / (Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4785 = (-Dummy_4776*Dummy_4783 + Dummy_4777*Dummy_4782)*1.0 / (Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4786 = (Dummy_4776*Dummy_4780 - Dummy_4777*Dummy_4779)*1.0 / (Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4787 = (-Dummy_4778*Dummy_4783 + Dummy_4780*Dummy_4781)*1.0 / (Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4788 = (Dummy_4775*Dummy_4783 - Dummy_4777*Dummy_4781)*1.0 / (Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4789 = (-Dummy_4775*Dummy_4780 + Dummy_4777*Dummy_4778)*1.0 / (Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4790 = (Dummy_4778*Dummy_4782 - Dummy_4779*Dummy_4781)*1.0 / (Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4791 = (-Dummy_4775*Dummy_4782 + Dummy_4776*Dummy_4781)*1.0 / (Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4792 = (Dummy_4775*Dummy_4779 - Dummy_4776*Dummy_4778)*1.0 / (Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4793 = abs(Dummy_4775*Dummy_4779*Dummy_4783 - Dummy_4775*Dummy_4780*Dummy_4782 - Dummy_4776*Dummy_4778*Dummy_4783 + Dummy_4776*Dummy_4780*Dummy_4781 + Dummy_4777*Dummy_4778*Dummy_4782 - Dummy_4777*Dummy_4779*Dummy_4781);
       const real_t Dummy_4794 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_4795 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_4796 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_4797 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4798 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4799 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4800 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4801 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4802 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4803 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4804 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4805 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4806 = -Dummy_4794 + Dummy_4797;
       const real_t Dummy_4807 = -Dummy_4794 + Dummy_4800;
       const real_t Dummy_4808 = -Dummy_4794 + Dummy_4803;
       const real_t Dummy_4809 = -Dummy_4795 + Dummy_4798;
       const real_t Dummy_4810 = -Dummy_4795 + Dummy_4801;
       const real_t Dummy_4811 = -Dummy_4795 + Dummy_4804;
       const real_t Dummy_4812 = -Dummy_4796 + Dummy_4799;
       const real_t Dummy_4813 = -Dummy_4796 + Dummy_4802;
       const real_t Dummy_4814 = -Dummy_4796 + Dummy_4805;
       const real_t Dummy_4815 = (Dummy_4810*Dummy_4814 - Dummy_4811*Dummy_4813)*1.0 / (Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4816 = (-Dummy_4807*Dummy_4814 + Dummy_4808*Dummy_4813)*1.0 / (Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4817 = (Dummy_4807*Dummy_4811 - Dummy_4808*Dummy_4810)*1.0 / (Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4818 = (-Dummy_4809*Dummy_4814 + Dummy_4811*Dummy_4812)*1.0 / (Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4819 = (Dummy_4806*Dummy_4814 - Dummy_4808*Dummy_4812)*1.0 / (Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4820 = (-Dummy_4806*Dummy_4811 + Dummy_4808*Dummy_4809)*1.0 / (Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4821 = (Dummy_4809*Dummy_4813 - Dummy_4810*Dummy_4812)*1.0 / (Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4822 = (-Dummy_4806*Dummy_4813 + Dummy_4807*Dummy_4812)*1.0 / (Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4823 = (Dummy_4806*Dummy_4810 - Dummy_4807*Dummy_4809)*1.0 / (Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4824 = abs(Dummy_4806*Dummy_4810*Dummy_4814 - Dummy_4806*Dummy_4811*Dummy_4813 - Dummy_4807*Dummy_4809*Dummy_4814 + Dummy_4807*Dummy_4811*Dummy_4812 + Dummy_4808*Dummy_4809*Dummy_4813 - Dummy_4808*Dummy_4810*Dummy_4812);
       const real_t Dummy_4825 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t Dummy_4826 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t Dummy_4827 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const real_t Dummy_4828 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_4829 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_4830 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_4831 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4832 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4833 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4834 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4835 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4836 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4837 = -Dummy_4825 + Dummy_4828;
       const real_t Dummy_4838 = -Dummy_4825 + Dummy_4831;
       const real_t Dummy_4839 = -Dummy_4825 + Dummy_4834;
       const real_t Dummy_4840 = -Dummy_4826 + Dummy_4829;
       const real_t Dummy_4841 = -Dummy_4826 + Dummy_4832;
       const real_t Dummy_4842 = -Dummy_4826 + Dummy_4835;
       const real_t Dummy_4843 = -Dummy_4827 + Dummy_4830;
       const real_t Dummy_4844 = -Dummy_4827 + Dummy_4833;
       const real_t Dummy_4845 = -Dummy_4827 + Dummy_4836;
       const real_t Dummy_4846 = (Dummy_4841*Dummy_4845 - Dummy_4842*Dummy_4844)*1.0 / (Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4847 = (-Dummy_4838*Dummy_4845 + Dummy_4839*Dummy_4844)*1.0 / (Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4848 = (Dummy_4838*Dummy_4842 - Dummy_4839*Dummy_4841)*1.0 / (Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4849 = (-Dummy_4840*Dummy_4845 + Dummy_4842*Dummy_4843)*1.0 / (Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4850 = (Dummy_4837*Dummy_4845 - Dummy_4839*Dummy_4843)*1.0 / (Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4851 = (-Dummy_4837*Dummy_4842 + Dummy_4839*Dummy_4840)*1.0 / (Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4852 = (Dummy_4840*Dummy_4844 - Dummy_4841*Dummy_4843)*1.0 / (Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4853 = (-Dummy_4837*Dummy_4844 + Dummy_4838*Dummy_4843)*1.0 / (Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4854 = (Dummy_4837*Dummy_4841 - Dummy_4838*Dummy_4840)*1.0 / (Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4855 = abs(Dummy_4837*Dummy_4841*Dummy_4845 - Dummy_4837*Dummy_4842*Dummy_4844 - Dummy_4838*Dummy_4840*Dummy_4845 + Dummy_4838*Dummy_4842*Dummy_4843 + Dummy_4839*Dummy_4840*Dummy_4844 - Dummy_4839*Dummy_4841*Dummy_4843);
       const real_t Dummy_4856 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_4857 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_4858 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_4859 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_4860 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_4861 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_4862 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4863 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4864 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4865 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_4866 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_4867 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_4868 = -Dummy_4856 + Dummy_4859;
       const real_t Dummy_4869 = -Dummy_4856 + Dummy_4862;
       const real_t Dummy_4870 = -Dummy_4856 + Dummy_4865;
       const real_t Dummy_4871 = -Dummy_4857 + Dummy_4860;
       const real_t Dummy_4872 = -Dummy_4857 + Dummy_4863;
       const real_t Dummy_4873 = -Dummy_4857 + Dummy_4866;
       const real_t Dummy_4874 = -Dummy_4858 + Dummy_4861;
       const real_t Dummy_4875 = -Dummy_4858 + Dummy_4864;
       const real_t Dummy_4876 = -Dummy_4858 + Dummy_4867;
       const real_t Dummy_4877 = (Dummy_4872*Dummy_4876 - Dummy_4873*Dummy_4875)*1.0 / (Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       const real_t Dummy_4878 = (-Dummy_4869*Dummy_4876 + Dummy_4870*Dummy_4875)*1.0 / (Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       const real_t Dummy_4879 = (Dummy_4869*Dummy_4873 - Dummy_4870*Dummy_4872)*1.0 / (Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       const real_t Dummy_4880 = (-Dummy_4871*Dummy_4876 + Dummy_4873*Dummy_4874)*1.0 / (Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       const real_t Dummy_4881 = (Dummy_4868*Dummy_4876 - Dummy_4870*Dummy_4874)*1.0 / (Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       const real_t Dummy_4882 = (-Dummy_4868*Dummy_4873 + Dummy_4870*Dummy_4871)*1.0 / (Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       const real_t Dummy_4883 = (Dummy_4871*Dummy_4875 - Dummy_4872*Dummy_4874)*1.0 / (Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       const real_t Dummy_4884 = (-Dummy_4868*Dummy_4875 + Dummy_4869*Dummy_4874)*1.0 / (Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       const real_t Dummy_4885 = (Dummy_4868*Dummy_4872 - Dummy_4869*Dummy_4871)*1.0 / (Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       const real_t Dummy_4886 = abs(Dummy_4868*Dummy_4872*Dummy_4876 - Dummy_4868*Dummy_4873*Dummy_4875 - Dummy_4869*Dummy_4871*Dummy_4876 + Dummy_4869*Dummy_4873*Dummy_4874 + Dummy_4870*Dummy_4871*Dummy_4875 - Dummy_4870*Dummy_4872*Dummy_4874);
       {
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_q_0 = 4.0*_data_q_p_2[q];
                const real_t tmp_q_1 = 4.0*_data_q_p_0[q];
                const real_t tmp_q_2 = 4.0*_data_q_p_1[q];
                const real_t tmp_q_3 = tmp_q_1 + tmp_q_2;
                const real_t tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const real_t tmp_q_5 = jac_affine_inv_0_0*tmp_q_4;
                const real_t tmp_q_6 = jac_affine_inv_1_0*tmp_q_4;
                const real_t tmp_q_7 = jac_affine_inv_2_0*tmp_q_4;
                const real_t tmp_q_8 = tmp_q_2*_data_q_p_2[q];
                const real_t tmp_q_9 = tmp_q_1*_data_q_p_2[q];
                const real_t tmp_q_10 = tmp_q_1*_data_q_p_1[q];
                const real_t tmp_q_11 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_q_12 = tmp_q_11*2.0;
                const real_t tmp_q_13 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_q_14 = tmp_q_13*2.0;
                const real_t tmp_q_15 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_q_16 = tmp_q_15*2.0;
                const real_t tmp_q_17 = tmp_q_10 + tmp_q_9;
                const real_t tmp_q_18 = k_dof_0*(tmp_q_12 + tmp_q_14 + tmp_q_16 + tmp_q_17 + tmp_q_8 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_12 - _data_q_p_0[q]) + k_dof_2*(tmp_q_14 - _data_q_p_1[q]) + k_dof_3*(tmp_q_16 - _data_q_p_2[q]) + k_dof_4*tmp_q_8 + k_dof_5*tmp_q_9 + k_dof_6*tmp_q_10 + k_dof_7*(tmp_q_0 + tmp_q_15*-4.0 - tmp_q_8 - tmp_q_9) + k_dof_8*(-tmp_q_10 + tmp_q_13*-4.0 + tmp_q_2 - tmp_q_8) + k_dof_9*(tmp_q_1 + tmp_q_11*-4.0 - tmp_q_17);
                const real_t tmp_q_19 = jac_affine_inv_0_1*tmp_q_4;
                const real_t tmp_q_20 = jac_affine_inv_1_1*tmp_q_4;
                const real_t tmp_q_21 = jac_affine_inv_2_1*tmp_q_4;
                const real_t tmp_q_22 = jac_affine_inv_0_2*tmp_q_4;
                const real_t tmp_q_23 = jac_affine_inv_1_2*tmp_q_4;
                const real_t tmp_q_24 = jac_affine_inv_2_2*tmp_q_4;
                const real_t tmp_q_25 = abs_det_jac_affine*_data_q_w[q];
                const real_t tmp_q_26 = tmp_q_18*16.0;
                const real_t tmp_q_27 = tmp_q_26*((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]));
                const real_t tmp_q_28 = tmp_q_26*((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]));
                const real_t tmp_q_29 = tmp_q_26*((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]));
                const real_t tmp_q_30 = jac_affine_inv_1_0*tmp_q_0;
                const real_t tmp_q_31 = jac_affine_inv_2_0*tmp_q_2;
                const real_t tmp_q_32 = tmp_q_18*tmp_q_30;
                const real_t tmp_q_33 = tmp_q_18*tmp_q_31;
                const real_t tmp_q_34 = jac_affine_inv_1_1*tmp_q_0;
                const real_t tmp_q_35 = jac_affine_inv_2_1*tmp_q_2;
                const real_t tmp_q_36 = tmp_q_18*tmp_q_34;
                const real_t tmp_q_37 = tmp_q_18*tmp_q_35;
                const real_t tmp_q_38 = jac_affine_inv_1_2*tmp_q_0;
                const real_t tmp_q_39 = jac_affine_inv_2_2*tmp_q_2;
                const real_t tmp_q_40 = tmp_q_18*tmp_q_38;
                const real_t tmp_q_41 = tmp_q_18*tmp_q_39;
                const real_t tmp_q_42 = jac_affine_inv_0_0*tmp_q_0;
                const real_t tmp_q_43 = jac_affine_inv_2_0*tmp_q_1;
                const real_t tmp_q_44 = tmp_q_18*tmp_q_42;
                const real_t tmp_q_45 = tmp_q_18*tmp_q_43;
                const real_t tmp_q_46 = jac_affine_inv_0_1*tmp_q_0;
                const real_t tmp_q_47 = jac_affine_inv_2_1*tmp_q_1;
                const real_t tmp_q_48 = tmp_q_18*tmp_q_46;
                const real_t tmp_q_49 = tmp_q_18*tmp_q_47;
                const real_t tmp_q_50 = jac_affine_inv_0_2*tmp_q_0;
                const real_t tmp_q_51 = jac_affine_inv_2_2*tmp_q_1;
                const real_t tmp_q_52 = tmp_q_18*tmp_q_50;
                const real_t tmp_q_53 = tmp_q_18*tmp_q_51;
                const real_t tmp_q_54 = jac_affine_inv_0_0*tmp_q_2;
                const real_t tmp_q_55 = jac_affine_inv_1_0*tmp_q_1;
                const real_t tmp_q_56 = tmp_q_18*tmp_q_54;
                const real_t tmp_q_57 = tmp_q_18*tmp_q_55;
                const real_t tmp_q_58 = jac_affine_inv_0_1*tmp_q_2;
                const real_t tmp_q_59 = jac_affine_inv_1_1*tmp_q_1;
                const real_t tmp_q_60 = tmp_q_18*tmp_q_58;
                const real_t tmp_q_61 = tmp_q_18*tmp_q_59;
                const real_t tmp_q_62 = jac_affine_inv_0_2*tmp_q_2;
                const real_t tmp_q_63 = jac_affine_inv_1_2*tmp_q_1;
                const real_t tmp_q_64 = tmp_q_18*tmp_q_62;
                const real_t tmp_q_65 = tmp_q_18*tmp_q_63;
                const real_t tmp_q_66 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const real_t tmp_q_67 = tmp_q_0 - 4.0;
                const real_t tmp_q_68 = -tmp_q_1 - tmp_q_67 - 8.0*_data_q_p_1[q];
                const real_t tmp_q_69 = -tmp_q_2 - tmp_q_67 - 8.0*_data_q_p_0[q];
                const real_t res_tmp_0_0 = tmp_q_25*((tmp_q_19 + tmp_q_20 + tmp_q_21)*(tmp_q_18*tmp_q_19 + tmp_q_18*tmp_q_20 + tmp_q_18*tmp_q_21) + (tmp_q_22 + tmp_q_23 + tmp_q_24)*(tmp_q_18*tmp_q_22 + tmp_q_18*tmp_q_23 + tmp_q_18*tmp_q_24) + (tmp_q_5 + tmp_q_6 + tmp_q_7)*(tmp_q_18*tmp_q_5 + tmp_q_18*tmp_q_6 + tmp_q_18*tmp_q_7));
                const real_t res_tmp_1_1 = tmp_q_25*((jac_affine_inv_0_0*jac_affine_inv_0_0)*tmp_q_27 + (jac_affine_inv_0_1*jac_affine_inv_0_1)*tmp_q_27 + (jac_affine_inv_0_2*jac_affine_inv_0_2)*tmp_q_27);
                const real_t res_tmp_2_2 = tmp_q_25*((jac_affine_inv_1_0*jac_affine_inv_1_0)*tmp_q_28 + (jac_affine_inv_1_1*jac_affine_inv_1_1)*tmp_q_28 + (jac_affine_inv_1_2*jac_affine_inv_1_2)*tmp_q_28);
                const real_t res_tmp_3_3 = tmp_q_25*((jac_affine_inv_2_0*jac_affine_inv_2_0)*tmp_q_29 + (jac_affine_inv_2_1*jac_affine_inv_2_1)*tmp_q_29 + (jac_affine_inv_2_2*jac_affine_inv_2_2)*tmp_q_29);
                const real_t res_tmp_4_4 = tmp_q_25*((tmp_q_30 + tmp_q_31)*(tmp_q_32 + tmp_q_33) + (tmp_q_34 + tmp_q_35)*(tmp_q_36 + tmp_q_37) + (tmp_q_38 + tmp_q_39)*(tmp_q_40 + tmp_q_41));
                const real_t res_tmp_5_5 = tmp_q_25*((tmp_q_42 + tmp_q_43)*(tmp_q_44 + tmp_q_45) + (tmp_q_46 + tmp_q_47)*(tmp_q_48 + tmp_q_49) + (tmp_q_50 + tmp_q_51)*(tmp_q_52 + tmp_q_53));
                const real_t res_tmp_6_6 = tmp_q_25*((tmp_q_54 + tmp_q_55)*(tmp_q_56 + tmp_q_57) + (tmp_q_58 + tmp_q_59)*(tmp_q_60 + tmp_q_61) + (tmp_q_62 + tmp_q_63)*(tmp_q_64 + tmp_q_65));
                const real_t res_tmp_7_7 = tmp_q_25*((jac_affine_inv_2_0*tmp_q_66 - tmp_q_30 - tmp_q_42)*(jac_affine_inv_2_0*tmp_q_18*tmp_q_66 - tmp_q_32 - tmp_q_44) + (jac_affine_inv_2_1*tmp_q_66 - tmp_q_34 - tmp_q_46)*(jac_affine_inv_2_1*tmp_q_18*tmp_q_66 - tmp_q_36 - tmp_q_48) + (jac_affine_inv_2_2*tmp_q_66 - tmp_q_38 - tmp_q_50)*(jac_affine_inv_2_2*tmp_q_18*tmp_q_66 - tmp_q_40 - tmp_q_52));
                const real_t res_tmp_8_8 = tmp_q_25*((jac_affine_inv_1_0*tmp_q_68 - tmp_q_31 - tmp_q_54)*(jac_affine_inv_1_0*tmp_q_18*tmp_q_68 - tmp_q_33 - tmp_q_56) + (jac_affine_inv_1_1*tmp_q_68 - tmp_q_35 - tmp_q_58)*(jac_affine_inv_1_1*tmp_q_18*tmp_q_68 - tmp_q_37 - tmp_q_60) + (jac_affine_inv_1_2*tmp_q_68 - tmp_q_39 - tmp_q_62)*(jac_affine_inv_1_2*tmp_q_18*tmp_q_68 - tmp_q_41 - tmp_q_64));
                const real_t res_tmp_9_9 = tmp_q_25*((jac_affine_inv_0_0*tmp_q_69 - tmp_q_43 - tmp_q_55)*(jac_affine_inv_0_0*tmp_q_18*tmp_q_69 - tmp_q_45 - tmp_q_57) + (jac_affine_inv_0_1*tmp_q_69 - tmp_q_47 - tmp_q_59)*(jac_affine_inv_0_1*tmp_q_18*tmp_q_69 - tmp_q_49 - tmp_q_61) + (jac_affine_inv_0_2*tmp_q_69 - tmp_q_51 - tmp_q_63)*(jac_affine_inv_0_2*tmp_q_18*tmp_q_69 - tmp_q_53 - tmp_q_65));
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + res_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + res_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + res_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + res_tmp_9_9;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const real_t k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_0 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_q_0 = 4.0*_data_q_p_2[q];
                const real_t tmp_q_1 = 4.0*_data_q_p_0[q];
                const real_t tmp_q_2 = 4.0*_data_q_p_1[q];
                const real_t tmp_q_3 = tmp_q_1 + tmp_q_2;
                const real_t tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const real_t tmp_q_5 = Dummy_4753*tmp_q_4;
                const real_t tmp_q_6 = Dummy_4756*tmp_q_4;
                const real_t tmp_q_7 = Dummy_4759*tmp_q_4;
                const real_t tmp_q_8 = tmp_q_2*_data_q_p_2[q];
                const real_t tmp_q_9 = tmp_q_1*_data_q_p_2[q];
                const real_t tmp_q_10 = tmp_q_1*_data_q_p_1[q];
                const real_t tmp_q_11 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_q_12 = tmp_q_11*2.0;
                const real_t tmp_q_13 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_q_14 = tmp_q_13*2.0;
                const real_t tmp_q_15 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_q_16 = tmp_q_15*2.0;
                const real_t tmp_q_17 = tmp_q_10 + tmp_q_9;
                const real_t tmp_q_18 = k_dof_0*(tmp_q_12 + tmp_q_14 + tmp_q_16 + tmp_q_17 + tmp_q_8 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_12 - _data_q_p_0[q]) + k_dof_2*(tmp_q_14 - _data_q_p_1[q]) + k_dof_3*(tmp_q_16 - _data_q_p_2[q]) + k_dof_4*tmp_q_8 + k_dof_5*tmp_q_9 + k_dof_6*tmp_q_10 + k_dof_7*(tmp_q_0 + tmp_q_15*-4.0 - tmp_q_8 - tmp_q_9) + k_dof_8*(-tmp_q_10 + tmp_q_13*-4.0 + tmp_q_2 - tmp_q_8) + k_dof_9*(tmp_q_1 + tmp_q_11*-4.0 - tmp_q_17);
                const real_t tmp_q_19 = Dummy_4754*tmp_q_4;
                const real_t tmp_q_20 = Dummy_4757*tmp_q_4;
                const real_t tmp_q_21 = Dummy_4760*tmp_q_4;
                const real_t tmp_q_22 = Dummy_4755*tmp_q_4;
                const real_t tmp_q_23 = Dummy_4758*tmp_q_4;
                const real_t tmp_q_24 = Dummy_4761*tmp_q_4;
                const real_t tmp_q_25 = Dummy_4762*_data_q_w[q];
                const real_t tmp_q_26 = tmp_q_18*16.0;
                const real_t tmp_q_27 = tmp_q_26*((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]));
                const real_t tmp_q_28 = tmp_q_26*((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]));
                const real_t tmp_q_29 = tmp_q_26*((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]));
                const real_t tmp_q_30 = Dummy_4756*tmp_q_0;
                const real_t tmp_q_31 = Dummy_4759*tmp_q_2;
                const real_t tmp_q_32 = tmp_q_18*tmp_q_30;
                const real_t tmp_q_33 = tmp_q_18*tmp_q_31;
                const real_t tmp_q_34 = Dummy_4757*tmp_q_0;
                const real_t tmp_q_35 = Dummy_4760*tmp_q_2;
                const real_t tmp_q_36 = tmp_q_18*tmp_q_34;
                const real_t tmp_q_37 = tmp_q_18*tmp_q_35;
                const real_t tmp_q_38 = Dummy_4758*tmp_q_0;
                const real_t tmp_q_39 = Dummy_4761*tmp_q_2;
                const real_t tmp_q_40 = tmp_q_18*tmp_q_38;
                const real_t tmp_q_41 = tmp_q_18*tmp_q_39;
                const real_t tmp_q_42 = Dummy_4753*tmp_q_0;
                const real_t tmp_q_43 = Dummy_4759*tmp_q_1;
                const real_t tmp_q_44 = tmp_q_18*tmp_q_42;
                const real_t tmp_q_45 = tmp_q_18*tmp_q_43;
                const real_t tmp_q_46 = Dummy_4754*tmp_q_0;
                const real_t tmp_q_47 = Dummy_4760*tmp_q_1;
                const real_t tmp_q_48 = tmp_q_18*tmp_q_46;
                const real_t tmp_q_49 = tmp_q_18*tmp_q_47;
                const real_t tmp_q_50 = Dummy_4755*tmp_q_0;
                const real_t tmp_q_51 = Dummy_4761*tmp_q_1;
                const real_t tmp_q_52 = tmp_q_18*tmp_q_50;
                const real_t tmp_q_53 = tmp_q_18*tmp_q_51;
                const real_t tmp_q_54 = Dummy_4753*tmp_q_2;
                const real_t tmp_q_55 = Dummy_4756*tmp_q_1;
                const real_t tmp_q_56 = tmp_q_18*tmp_q_54;
                const real_t tmp_q_57 = tmp_q_18*tmp_q_55;
                const real_t tmp_q_58 = Dummy_4754*tmp_q_2;
                const real_t tmp_q_59 = Dummy_4757*tmp_q_1;
                const real_t tmp_q_60 = tmp_q_18*tmp_q_58;
                const real_t tmp_q_61 = tmp_q_18*tmp_q_59;
                const real_t tmp_q_62 = Dummy_4755*tmp_q_2;
                const real_t tmp_q_63 = Dummy_4758*tmp_q_1;
                const real_t tmp_q_64 = tmp_q_18*tmp_q_62;
                const real_t tmp_q_65 = tmp_q_18*tmp_q_63;
                const real_t tmp_q_66 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const real_t tmp_q_67 = tmp_q_0 - 4.0;
                const real_t tmp_q_68 = -tmp_q_1 - tmp_q_67 - 8.0*_data_q_p_1[q];
                const real_t tmp_q_69 = -tmp_q_2 - tmp_q_67 - 8.0*_data_q_p_0[q];
                const real_t res_tmp_0_0 = tmp_q_25*((tmp_q_19 + tmp_q_20 + tmp_q_21)*(tmp_q_18*tmp_q_19 + tmp_q_18*tmp_q_20 + tmp_q_18*tmp_q_21) + (tmp_q_22 + tmp_q_23 + tmp_q_24)*(tmp_q_18*tmp_q_22 + tmp_q_18*tmp_q_23 + tmp_q_18*tmp_q_24) + (tmp_q_5 + tmp_q_6 + tmp_q_7)*(tmp_q_18*tmp_q_5 + tmp_q_18*tmp_q_6 + tmp_q_18*tmp_q_7));
                const real_t res_tmp_1_1 = tmp_q_25*((Dummy_4753*Dummy_4753)*tmp_q_27 + (Dummy_4754*Dummy_4754)*tmp_q_27 + (Dummy_4755*Dummy_4755)*tmp_q_27);
                const real_t res_tmp_2_2 = tmp_q_25*((Dummy_4756*Dummy_4756)*tmp_q_28 + (Dummy_4757*Dummy_4757)*tmp_q_28 + (Dummy_4758*Dummy_4758)*tmp_q_28);
                const real_t res_tmp_3_3 = tmp_q_25*((Dummy_4759*Dummy_4759)*tmp_q_29 + (Dummy_4760*Dummy_4760)*tmp_q_29 + (Dummy_4761*Dummy_4761)*tmp_q_29);
                const real_t res_tmp_4_4 = tmp_q_25*((tmp_q_30 + tmp_q_31)*(tmp_q_32 + tmp_q_33) + (tmp_q_34 + tmp_q_35)*(tmp_q_36 + tmp_q_37) + (tmp_q_38 + tmp_q_39)*(tmp_q_40 + tmp_q_41));
                const real_t res_tmp_5_5 = tmp_q_25*((tmp_q_42 + tmp_q_43)*(tmp_q_44 + tmp_q_45) + (tmp_q_46 + tmp_q_47)*(tmp_q_48 + tmp_q_49) + (tmp_q_50 + tmp_q_51)*(tmp_q_52 + tmp_q_53));
                const real_t res_tmp_6_6 = tmp_q_25*((tmp_q_54 + tmp_q_55)*(tmp_q_56 + tmp_q_57) + (tmp_q_58 + tmp_q_59)*(tmp_q_60 + tmp_q_61) + (tmp_q_62 + tmp_q_63)*(tmp_q_64 + tmp_q_65));
                const real_t res_tmp_7_7 = tmp_q_25*((Dummy_4759*tmp_q_66 - tmp_q_30 - tmp_q_42)*(Dummy_4759*tmp_q_18*tmp_q_66 - tmp_q_32 - tmp_q_44) + (Dummy_4760*tmp_q_66 - tmp_q_34 - tmp_q_46)*(Dummy_4760*tmp_q_18*tmp_q_66 - tmp_q_36 - tmp_q_48) + (Dummy_4761*tmp_q_66 - tmp_q_38 - tmp_q_50)*(Dummy_4761*tmp_q_18*tmp_q_66 - tmp_q_40 - tmp_q_52));
                const real_t res_tmp_8_8 = tmp_q_25*((Dummy_4756*tmp_q_68 - tmp_q_31 - tmp_q_54)*(Dummy_4756*tmp_q_18*tmp_q_68 - tmp_q_33 - tmp_q_56) + (Dummy_4757*tmp_q_68 - tmp_q_35 - tmp_q_58)*(Dummy_4757*tmp_q_18*tmp_q_68 - tmp_q_37 - tmp_q_60) + (Dummy_4758*tmp_q_68 - tmp_q_39 - tmp_q_62)*(Dummy_4758*tmp_q_18*tmp_q_68 - tmp_q_41 - tmp_q_64));
                const real_t res_tmp_9_9 = tmp_q_25*((Dummy_4753*tmp_q_69 - tmp_q_43 - tmp_q_55)*(Dummy_4753*tmp_q_18*tmp_q_69 - tmp_q_45 - tmp_q_57) + (Dummy_4754*tmp_q_69 - tmp_q_47 - tmp_q_59)*(Dummy_4754*tmp_q_18*tmp_q_69 - tmp_q_49 - tmp_q_61) + (Dummy_4755*tmp_q_69 - tmp_q_51 - tmp_q_63)*(Dummy_4755*tmp_q_18*tmp_q_69 - tmp_q_53 - tmp_q_65));
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + res_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + res_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + res_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + res_tmp_9_9;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_q_0 = 4.0*_data_q_p_2[q];
                const real_t tmp_q_1 = 4.0*_data_q_p_0[q];
                const real_t tmp_q_2 = 4.0*_data_q_p_1[q];
                const real_t tmp_q_3 = tmp_q_1 + tmp_q_2;
                const real_t tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const real_t tmp_q_5 = Dummy_4784*tmp_q_4;
                const real_t tmp_q_6 = Dummy_4787*tmp_q_4;
                const real_t tmp_q_7 = Dummy_4790*tmp_q_4;
                const real_t tmp_q_8 = tmp_q_2*_data_q_p_2[q];
                const real_t tmp_q_9 = tmp_q_1*_data_q_p_2[q];
                const real_t tmp_q_10 = tmp_q_1*_data_q_p_1[q];
                const real_t tmp_q_11 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_q_12 = tmp_q_11*2.0;
                const real_t tmp_q_13 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_q_14 = tmp_q_13*2.0;
                const real_t tmp_q_15 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_q_16 = tmp_q_15*2.0;
                const real_t tmp_q_17 = tmp_q_10 + tmp_q_9;
                const real_t tmp_q_18 = k_dof_0*(tmp_q_12 + tmp_q_14 + tmp_q_16 + tmp_q_17 + tmp_q_8 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_12 - _data_q_p_0[q]) + k_dof_2*(tmp_q_14 - _data_q_p_1[q]) + k_dof_3*(tmp_q_16 - _data_q_p_2[q]) + k_dof_4*tmp_q_8 + k_dof_5*tmp_q_9 + k_dof_6*tmp_q_10 + k_dof_7*(tmp_q_0 + tmp_q_15*-4.0 - tmp_q_8 - tmp_q_9) + k_dof_8*(-tmp_q_10 + tmp_q_13*-4.0 + tmp_q_2 - tmp_q_8) + k_dof_9*(tmp_q_1 + tmp_q_11*-4.0 - tmp_q_17);
                const real_t tmp_q_19 = Dummy_4785*tmp_q_4;
                const real_t tmp_q_20 = Dummy_4788*tmp_q_4;
                const real_t tmp_q_21 = Dummy_4791*tmp_q_4;
                const real_t tmp_q_22 = Dummy_4786*tmp_q_4;
                const real_t tmp_q_23 = Dummy_4789*tmp_q_4;
                const real_t tmp_q_24 = Dummy_4792*tmp_q_4;
                const real_t tmp_q_25 = Dummy_4793*_data_q_w[q];
                const real_t tmp_q_26 = tmp_q_18*16.0;
                const real_t tmp_q_27 = tmp_q_26*((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]));
                const real_t tmp_q_28 = tmp_q_26*((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]));
                const real_t tmp_q_29 = tmp_q_26*((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]));
                const real_t tmp_q_30 = Dummy_4787*tmp_q_0;
                const real_t tmp_q_31 = Dummy_4790*tmp_q_2;
                const real_t tmp_q_32 = tmp_q_18*tmp_q_30;
                const real_t tmp_q_33 = tmp_q_18*tmp_q_31;
                const real_t tmp_q_34 = Dummy_4788*tmp_q_0;
                const real_t tmp_q_35 = Dummy_4791*tmp_q_2;
                const real_t tmp_q_36 = tmp_q_18*tmp_q_34;
                const real_t tmp_q_37 = tmp_q_18*tmp_q_35;
                const real_t tmp_q_38 = Dummy_4789*tmp_q_0;
                const real_t tmp_q_39 = Dummy_4792*tmp_q_2;
                const real_t tmp_q_40 = tmp_q_18*tmp_q_38;
                const real_t tmp_q_41 = tmp_q_18*tmp_q_39;
                const real_t tmp_q_42 = Dummy_4784*tmp_q_0;
                const real_t tmp_q_43 = Dummy_4790*tmp_q_1;
                const real_t tmp_q_44 = tmp_q_18*tmp_q_42;
                const real_t tmp_q_45 = tmp_q_18*tmp_q_43;
                const real_t tmp_q_46 = Dummy_4785*tmp_q_0;
                const real_t tmp_q_47 = Dummy_4791*tmp_q_1;
                const real_t tmp_q_48 = tmp_q_18*tmp_q_46;
                const real_t tmp_q_49 = tmp_q_18*tmp_q_47;
                const real_t tmp_q_50 = Dummy_4786*tmp_q_0;
                const real_t tmp_q_51 = Dummy_4792*tmp_q_1;
                const real_t tmp_q_52 = tmp_q_18*tmp_q_50;
                const real_t tmp_q_53 = tmp_q_18*tmp_q_51;
                const real_t tmp_q_54 = Dummy_4784*tmp_q_2;
                const real_t tmp_q_55 = Dummy_4787*tmp_q_1;
                const real_t tmp_q_56 = tmp_q_18*tmp_q_54;
                const real_t tmp_q_57 = tmp_q_18*tmp_q_55;
                const real_t tmp_q_58 = Dummy_4785*tmp_q_2;
                const real_t tmp_q_59 = Dummy_4788*tmp_q_1;
                const real_t tmp_q_60 = tmp_q_18*tmp_q_58;
                const real_t tmp_q_61 = tmp_q_18*tmp_q_59;
                const real_t tmp_q_62 = Dummy_4786*tmp_q_2;
                const real_t tmp_q_63 = Dummy_4789*tmp_q_1;
                const real_t tmp_q_64 = tmp_q_18*tmp_q_62;
                const real_t tmp_q_65 = tmp_q_18*tmp_q_63;
                const real_t tmp_q_66 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const real_t tmp_q_67 = tmp_q_0 - 4.0;
                const real_t tmp_q_68 = -tmp_q_1 - tmp_q_67 - 8.0*_data_q_p_1[q];
                const real_t tmp_q_69 = -tmp_q_2 - tmp_q_67 - 8.0*_data_q_p_0[q];
                const real_t res_tmp_0_0 = tmp_q_25*((tmp_q_19 + tmp_q_20 + tmp_q_21)*(tmp_q_18*tmp_q_19 + tmp_q_18*tmp_q_20 + tmp_q_18*tmp_q_21) + (tmp_q_22 + tmp_q_23 + tmp_q_24)*(tmp_q_18*tmp_q_22 + tmp_q_18*tmp_q_23 + tmp_q_18*tmp_q_24) + (tmp_q_5 + tmp_q_6 + tmp_q_7)*(tmp_q_18*tmp_q_5 + tmp_q_18*tmp_q_6 + tmp_q_18*tmp_q_7));
                const real_t res_tmp_1_1 = tmp_q_25*((Dummy_4784*Dummy_4784)*tmp_q_27 + (Dummy_4785*Dummy_4785)*tmp_q_27 + (Dummy_4786*Dummy_4786)*tmp_q_27);
                const real_t res_tmp_2_2 = tmp_q_25*((Dummy_4787*Dummy_4787)*tmp_q_28 + (Dummy_4788*Dummy_4788)*tmp_q_28 + (Dummy_4789*Dummy_4789)*tmp_q_28);
                const real_t res_tmp_3_3 = tmp_q_25*((Dummy_4790*Dummy_4790)*tmp_q_29 + (Dummy_4791*Dummy_4791)*tmp_q_29 + (Dummy_4792*Dummy_4792)*tmp_q_29);
                const real_t res_tmp_4_4 = tmp_q_25*((tmp_q_30 + tmp_q_31)*(tmp_q_32 + tmp_q_33) + (tmp_q_34 + tmp_q_35)*(tmp_q_36 + tmp_q_37) + (tmp_q_38 + tmp_q_39)*(tmp_q_40 + tmp_q_41));
                const real_t res_tmp_5_5 = tmp_q_25*((tmp_q_42 + tmp_q_43)*(tmp_q_44 + tmp_q_45) + (tmp_q_46 + tmp_q_47)*(tmp_q_48 + tmp_q_49) + (tmp_q_50 + tmp_q_51)*(tmp_q_52 + tmp_q_53));
                const real_t res_tmp_6_6 = tmp_q_25*((tmp_q_54 + tmp_q_55)*(tmp_q_56 + tmp_q_57) + (tmp_q_58 + tmp_q_59)*(tmp_q_60 + tmp_q_61) + (tmp_q_62 + tmp_q_63)*(tmp_q_64 + tmp_q_65));
                const real_t res_tmp_7_7 = tmp_q_25*((Dummy_4790*tmp_q_66 - tmp_q_30 - tmp_q_42)*(Dummy_4790*tmp_q_18*tmp_q_66 - tmp_q_32 - tmp_q_44) + (Dummy_4791*tmp_q_66 - tmp_q_34 - tmp_q_46)*(Dummy_4791*tmp_q_18*tmp_q_66 - tmp_q_36 - tmp_q_48) + (Dummy_4792*tmp_q_66 - tmp_q_38 - tmp_q_50)*(Dummy_4792*tmp_q_18*tmp_q_66 - tmp_q_40 - tmp_q_52));
                const real_t res_tmp_8_8 = tmp_q_25*((Dummy_4787*tmp_q_68 - tmp_q_31 - tmp_q_54)*(Dummy_4787*tmp_q_18*tmp_q_68 - tmp_q_33 - tmp_q_56) + (Dummy_4788*tmp_q_68 - tmp_q_35 - tmp_q_58)*(Dummy_4788*tmp_q_18*tmp_q_68 - tmp_q_37 - tmp_q_60) + (Dummy_4789*tmp_q_68 - tmp_q_39 - tmp_q_62)*(Dummy_4789*tmp_q_18*tmp_q_68 - tmp_q_41 - tmp_q_64));
                const real_t res_tmp_9_9 = tmp_q_25*((Dummy_4784*tmp_q_69 - tmp_q_43 - tmp_q_55)*(Dummy_4784*tmp_q_18*tmp_q_69 - tmp_q_45 - tmp_q_57) + (Dummy_4785*tmp_q_69 - tmp_q_47 - tmp_q_59)*(Dummy_4785*tmp_q_18*tmp_q_69 - tmp_q_49 - tmp_q_61) + (Dummy_4786*tmp_q_69 - tmp_q_51 - tmp_q_63)*(Dummy_4786*tmp_q_18*tmp_q_69 - tmp_q_53 - tmp_q_65));
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + res_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + res_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + res_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + res_tmp_9_9;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t k_dof_1 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_0 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_q_0 = 4.0*_data_q_p_2[q];
                const real_t tmp_q_1 = 4.0*_data_q_p_0[q];
                const real_t tmp_q_2 = 4.0*_data_q_p_1[q];
                const real_t tmp_q_3 = tmp_q_1 + tmp_q_2;
                const real_t tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const real_t tmp_q_5 = Dummy_4815*tmp_q_4;
                const real_t tmp_q_6 = Dummy_4818*tmp_q_4;
                const real_t tmp_q_7 = Dummy_4821*tmp_q_4;
                const real_t tmp_q_8 = tmp_q_2*_data_q_p_2[q];
                const real_t tmp_q_9 = tmp_q_1*_data_q_p_2[q];
                const real_t tmp_q_10 = tmp_q_1*_data_q_p_1[q];
                const real_t tmp_q_11 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_q_12 = tmp_q_11*2.0;
                const real_t tmp_q_13 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_q_14 = tmp_q_13*2.0;
                const real_t tmp_q_15 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_q_16 = tmp_q_15*2.0;
                const real_t tmp_q_17 = tmp_q_10 + tmp_q_9;
                const real_t tmp_q_18 = k_dof_0*(tmp_q_12 + tmp_q_14 + tmp_q_16 + tmp_q_17 + tmp_q_8 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_12 - _data_q_p_0[q]) + k_dof_2*(tmp_q_14 - _data_q_p_1[q]) + k_dof_3*(tmp_q_16 - _data_q_p_2[q]) + k_dof_4*tmp_q_8 + k_dof_5*tmp_q_9 + k_dof_6*tmp_q_10 + k_dof_7*(tmp_q_0 + tmp_q_15*-4.0 - tmp_q_8 - tmp_q_9) + k_dof_8*(-tmp_q_10 + tmp_q_13*-4.0 + tmp_q_2 - tmp_q_8) + k_dof_9*(tmp_q_1 + tmp_q_11*-4.0 - tmp_q_17);
                const real_t tmp_q_19 = Dummy_4816*tmp_q_4;
                const real_t tmp_q_20 = Dummy_4819*tmp_q_4;
                const real_t tmp_q_21 = Dummy_4822*tmp_q_4;
                const real_t tmp_q_22 = Dummy_4817*tmp_q_4;
                const real_t tmp_q_23 = Dummy_4820*tmp_q_4;
                const real_t tmp_q_24 = Dummy_4823*tmp_q_4;
                const real_t tmp_q_25 = Dummy_4824*_data_q_w[q];
                const real_t tmp_q_26 = tmp_q_18*16.0;
                const real_t tmp_q_27 = tmp_q_26*((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]));
                const real_t tmp_q_28 = tmp_q_26*((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]));
                const real_t tmp_q_29 = tmp_q_26*((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]));
                const real_t tmp_q_30 = Dummy_4818*tmp_q_0;
                const real_t tmp_q_31 = Dummy_4821*tmp_q_2;
                const real_t tmp_q_32 = tmp_q_18*tmp_q_30;
                const real_t tmp_q_33 = tmp_q_18*tmp_q_31;
                const real_t tmp_q_34 = Dummy_4819*tmp_q_0;
                const real_t tmp_q_35 = Dummy_4822*tmp_q_2;
                const real_t tmp_q_36 = tmp_q_18*tmp_q_34;
                const real_t tmp_q_37 = tmp_q_18*tmp_q_35;
                const real_t tmp_q_38 = Dummy_4820*tmp_q_0;
                const real_t tmp_q_39 = Dummy_4823*tmp_q_2;
                const real_t tmp_q_40 = tmp_q_18*tmp_q_38;
                const real_t tmp_q_41 = tmp_q_18*tmp_q_39;
                const real_t tmp_q_42 = Dummy_4815*tmp_q_0;
                const real_t tmp_q_43 = Dummy_4821*tmp_q_1;
                const real_t tmp_q_44 = tmp_q_18*tmp_q_42;
                const real_t tmp_q_45 = tmp_q_18*tmp_q_43;
                const real_t tmp_q_46 = Dummy_4816*tmp_q_0;
                const real_t tmp_q_47 = Dummy_4822*tmp_q_1;
                const real_t tmp_q_48 = tmp_q_18*tmp_q_46;
                const real_t tmp_q_49 = tmp_q_18*tmp_q_47;
                const real_t tmp_q_50 = Dummy_4817*tmp_q_0;
                const real_t tmp_q_51 = Dummy_4823*tmp_q_1;
                const real_t tmp_q_52 = tmp_q_18*tmp_q_50;
                const real_t tmp_q_53 = tmp_q_18*tmp_q_51;
                const real_t tmp_q_54 = Dummy_4815*tmp_q_2;
                const real_t tmp_q_55 = Dummy_4818*tmp_q_1;
                const real_t tmp_q_56 = tmp_q_18*tmp_q_54;
                const real_t tmp_q_57 = tmp_q_18*tmp_q_55;
                const real_t tmp_q_58 = Dummy_4816*tmp_q_2;
                const real_t tmp_q_59 = Dummy_4819*tmp_q_1;
                const real_t tmp_q_60 = tmp_q_18*tmp_q_58;
                const real_t tmp_q_61 = tmp_q_18*tmp_q_59;
                const real_t tmp_q_62 = Dummy_4817*tmp_q_2;
                const real_t tmp_q_63 = Dummy_4820*tmp_q_1;
                const real_t tmp_q_64 = tmp_q_18*tmp_q_62;
                const real_t tmp_q_65 = tmp_q_18*tmp_q_63;
                const real_t tmp_q_66 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const real_t tmp_q_67 = tmp_q_0 - 4.0;
                const real_t tmp_q_68 = -tmp_q_1 - tmp_q_67 - 8.0*_data_q_p_1[q];
                const real_t tmp_q_69 = -tmp_q_2 - tmp_q_67 - 8.0*_data_q_p_0[q];
                const real_t res_tmp_0_0 = tmp_q_25*((tmp_q_19 + tmp_q_20 + tmp_q_21)*(tmp_q_18*tmp_q_19 + tmp_q_18*tmp_q_20 + tmp_q_18*tmp_q_21) + (tmp_q_22 + tmp_q_23 + tmp_q_24)*(tmp_q_18*tmp_q_22 + tmp_q_18*tmp_q_23 + tmp_q_18*tmp_q_24) + (tmp_q_5 + tmp_q_6 + tmp_q_7)*(tmp_q_18*tmp_q_5 + tmp_q_18*tmp_q_6 + tmp_q_18*tmp_q_7));
                const real_t res_tmp_1_1 = tmp_q_25*((Dummy_4815*Dummy_4815)*tmp_q_27 + (Dummy_4816*Dummy_4816)*tmp_q_27 + (Dummy_4817*Dummy_4817)*tmp_q_27);
                const real_t res_tmp_2_2 = tmp_q_25*((Dummy_4818*Dummy_4818)*tmp_q_28 + (Dummy_4819*Dummy_4819)*tmp_q_28 + (Dummy_4820*Dummy_4820)*tmp_q_28);
                const real_t res_tmp_3_3 = tmp_q_25*((Dummy_4821*Dummy_4821)*tmp_q_29 + (Dummy_4822*Dummy_4822)*tmp_q_29 + (Dummy_4823*Dummy_4823)*tmp_q_29);
                const real_t res_tmp_4_4 = tmp_q_25*((tmp_q_30 + tmp_q_31)*(tmp_q_32 + tmp_q_33) + (tmp_q_34 + tmp_q_35)*(tmp_q_36 + tmp_q_37) + (tmp_q_38 + tmp_q_39)*(tmp_q_40 + tmp_q_41));
                const real_t res_tmp_5_5 = tmp_q_25*((tmp_q_42 + tmp_q_43)*(tmp_q_44 + tmp_q_45) + (tmp_q_46 + tmp_q_47)*(tmp_q_48 + tmp_q_49) + (tmp_q_50 + tmp_q_51)*(tmp_q_52 + tmp_q_53));
                const real_t res_tmp_6_6 = tmp_q_25*((tmp_q_54 + tmp_q_55)*(tmp_q_56 + tmp_q_57) + (tmp_q_58 + tmp_q_59)*(tmp_q_60 + tmp_q_61) + (tmp_q_62 + tmp_q_63)*(tmp_q_64 + tmp_q_65));
                const real_t res_tmp_7_7 = tmp_q_25*((Dummy_4821*tmp_q_66 - tmp_q_30 - tmp_q_42)*(Dummy_4821*tmp_q_18*tmp_q_66 - tmp_q_32 - tmp_q_44) + (Dummy_4822*tmp_q_66 - tmp_q_34 - tmp_q_46)*(Dummy_4822*tmp_q_18*tmp_q_66 - tmp_q_36 - tmp_q_48) + (Dummy_4823*tmp_q_66 - tmp_q_38 - tmp_q_50)*(Dummy_4823*tmp_q_18*tmp_q_66 - tmp_q_40 - tmp_q_52));
                const real_t res_tmp_8_8 = tmp_q_25*((Dummy_4818*tmp_q_68 - tmp_q_31 - tmp_q_54)*(Dummy_4818*tmp_q_18*tmp_q_68 - tmp_q_33 - tmp_q_56) + (Dummy_4819*tmp_q_68 - tmp_q_35 - tmp_q_58)*(Dummy_4819*tmp_q_18*tmp_q_68 - tmp_q_37 - tmp_q_60) + (Dummy_4820*tmp_q_68 - tmp_q_39 - tmp_q_62)*(Dummy_4820*tmp_q_18*tmp_q_68 - tmp_q_41 - tmp_q_64));
                const real_t res_tmp_9_9 = tmp_q_25*((Dummy_4815*tmp_q_69 - tmp_q_43 - tmp_q_55)*(Dummy_4815*tmp_q_18*tmp_q_69 - tmp_q_45 - tmp_q_57) + (Dummy_4816*tmp_q_69 - tmp_q_47 - tmp_q_59)*(Dummy_4816*tmp_q_18*tmp_q_69 - tmp_q_49 - tmp_q_61) + (Dummy_4817*tmp_q_69 - tmp_q_51 - tmp_q_63)*(Dummy_4817*tmp_q_18*tmp_q_69 - tmp_q_53 - tmp_q_65));
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + res_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + res_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + res_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + res_tmp_9_9;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_0 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_q_0 = 4.0*_data_q_p_2[q];
                const real_t tmp_q_1 = 4.0*_data_q_p_0[q];
                const real_t tmp_q_2 = 4.0*_data_q_p_1[q];
                const real_t tmp_q_3 = tmp_q_1 + tmp_q_2;
                const real_t tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const real_t tmp_q_5 = Dummy_4846*tmp_q_4;
                const real_t tmp_q_6 = Dummy_4849*tmp_q_4;
                const real_t tmp_q_7 = Dummy_4852*tmp_q_4;
                const real_t tmp_q_8 = tmp_q_2*_data_q_p_2[q];
                const real_t tmp_q_9 = tmp_q_1*_data_q_p_2[q];
                const real_t tmp_q_10 = tmp_q_1*_data_q_p_1[q];
                const real_t tmp_q_11 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_q_12 = tmp_q_11*2.0;
                const real_t tmp_q_13 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_q_14 = tmp_q_13*2.0;
                const real_t tmp_q_15 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_q_16 = tmp_q_15*2.0;
                const real_t tmp_q_17 = tmp_q_10 + tmp_q_9;
                const real_t tmp_q_18 = k_dof_0*(tmp_q_12 + tmp_q_14 + tmp_q_16 + tmp_q_17 + tmp_q_8 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_12 - _data_q_p_0[q]) + k_dof_2*(tmp_q_14 - _data_q_p_1[q]) + k_dof_3*(tmp_q_16 - _data_q_p_2[q]) + k_dof_4*tmp_q_8 + k_dof_5*tmp_q_9 + k_dof_6*tmp_q_10 + k_dof_7*(tmp_q_0 + tmp_q_15*-4.0 - tmp_q_8 - tmp_q_9) + k_dof_8*(-tmp_q_10 + tmp_q_13*-4.0 + tmp_q_2 - tmp_q_8) + k_dof_9*(tmp_q_1 + tmp_q_11*-4.0 - tmp_q_17);
                const real_t tmp_q_19 = Dummy_4847*tmp_q_4;
                const real_t tmp_q_20 = Dummy_4850*tmp_q_4;
                const real_t tmp_q_21 = Dummy_4853*tmp_q_4;
                const real_t tmp_q_22 = Dummy_4848*tmp_q_4;
                const real_t tmp_q_23 = Dummy_4851*tmp_q_4;
                const real_t tmp_q_24 = Dummy_4854*tmp_q_4;
                const real_t tmp_q_25 = Dummy_4855*_data_q_w[q];
                const real_t tmp_q_26 = tmp_q_18*16.0;
                const real_t tmp_q_27 = tmp_q_26*((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]));
                const real_t tmp_q_28 = tmp_q_26*((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]));
                const real_t tmp_q_29 = tmp_q_26*((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]));
                const real_t tmp_q_30 = Dummy_4849*tmp_q_0;
                const real_t tmp_q_31 = Dummy_4852*tmp_q_2;
                const real_t tmp_q_32 = tmp_q_18*tmp_q_30;
                const real_t tmp_q_33 = tmp_q_18*tmp_q_31;
                const real_t tmp_q_34 = Dummy_4850*tmp_q_0;
                const real_t tmp_q_35 = Dummy_4853*tmp_q_2;
                const real_t tmp_q_36 = tmp_q_18*tmp_q_34;
                const real_t tmp_q_37 = tmp_q_18*tmp_q_35;
                const real_t tmp_q_38 = Dummy_4851*tmp_q_0;
                const real_t tmp_q_39 = Dummy_4854*tmp_q_2;
                const real_t tmp_q_40 = tmp_q_18*tmp_q_38;
                const real_t tmp_q_41 = tmp_q_18*tmp_q_39;
                const real_t tmp_q_42 = Dummy_4846*tmp_q_0;
                const real_t tmp_q_43 = Dummy_4852*tmp_q_1;
                const real_t tmp_q_44 = tmp_q_18*tmp_q_42;
                const real_t tmp_q_45 = tmp_q_18*tmp_q_43;
                const real_t tmp_q_46 = Dummy_4847*tmp_q_0;
                const real_t tmp_q_47 = Dummy_4853*tmp_q_1;
                const real_t tmp_q_48 = tmp_q_18*tmp_q_46;
                const real_t tmp_q_49 = tmp_q_18*tmp_q_47;
                const real_t tmp_q_50 = Dummy_4848*tmp_q_0;
                const real_t tmp_q_51 = Dummy_4854*tmp_q_1;
                const real_t tmp_q_52 = tmp_q_18*tmp_q_50;
                const real_t tmp_q_53 = tmp_q_18*tmp_q_51;
                const real_t tmp_q_54 = Dummy_4846*tmp_q_2;
                const real_t tmp_q_55 = Dummy_4849*tmp_q_1;
                const real_t tmp_q_56 = tmp_q_18*tmp_q_54;
                const real_t tmp_q_57 = tmp_q_18*tmp_q_55;
                const real_t tmp_q_58 = Dummy_4847*tmp_q_2;
                const real_t tmp_q_59 = Dummy_4850*tmp_q_1;
                const real_t tmp_q_60 = tmp_q_18*tmp_q_58;
                const real_t tmp_q_61 = tmp_q_18*tmp_q_59;
                const real_t tmp_q_62 = Dummy_4848*tmp_q_2;
                const real_t tmp_q_63 = Dummy_4851*tmp_q_1;
                const real_t tmp_q_64 = tmp_q_18*tmp_q_62;
                const real_t tmp_q_65 = tmp_q_18*tmp_q_63;
                const real_t tmp_q_66 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const real_t tmp_q_67 = tmp_q_0 - 4.0;
                const real_t tmp_q_68 = -tmp_q_1 - tmp_q_67 - 8.0*_data_q_p_1[q];
                const real_t tmp_q_69 = -tmp_q_2 - tmp_q_67 - 8.0*_data_q_p_0[q];
                const real_t res_tmp_0_0 = tmp_q_25*((tmp_q_19 + tmp_q_20 + tmp_q_21)*(tmp_q_18*tmp_q_19 + tmp_q_18*tmp_q_20 + tmp_q_18*tmp_q_21) + (tmp_q_22 + tmp_q_23 + tmp_q_24)*(tmp_q_18*tmp_q_22 + tmp_q_18*tmp_q_23 + tmp_q_18*tmp_q_24) + (tmp_q_5 + tmp_q_6 + tmp_q_7)*(tmp_q_18*tmp_q_5 + tmp_q_18*tmp_q_6 + tmp_q_18*tmp_q_7));
                const real_t res_tmp_1_1 = tmp_q_25*((Dummy_4846*Dummy_4846)*tmp_q_27 + (Dummy_4847*Dummy_4847)*tmp_q_27 + (Dummy_4848*Dummy_4848)*tmp_q_27);
                const real_t res_tmp_2_2 = tmp_q_25*((Dummy_4849*Dummy_4849)*tmp_q_28 + (Dummy_4850*Dummy_4850)*tmp_q_28 + (Dummy_4851*Dummy_4851)*tmp_q_28);
                const real_t res_tmp_3_3 = tmp_q_25*((Dummy_4852*Dummy_4852)*tmp_q_29 + (Dummy_4853*Dummy_4853)*tmp_q_29 + (Dummy_4854*Dummy_4854)*tmp_q_29);
                const real_t res_tmp_4_4 = tmp_q_25*((tmp_q_30 + tmp_q_31)*(tmp_q_32 + tmp_q_33) + (tmp_q_34 + tmp_q_35)*(tmp_q_36 + tmp_q_37) + (tmp_q_38 + tmp_q_39)*(tmp_q_40 + tmp_q_41));
                const real_t res_tmp_5_5 = tmp_q_25*((tmp_q_42 + tmp_q_43)*(tmp_q_44 + tmp_q_45) + (tmp_q_46 + tmp_q_47)*(tmp_q_48 + tmp_q_49) + (tmp_q_50 + tmp_q_51)*(tmp_q_52 + tmp_q_53));
                const real_t res_tmp_6_6 = tmp_q_25*((tmp_q_54 + tmp_q_55)*(tmp_q_56 + tmp_q_57) + (tmp_q_58 + tmp_q_59)*(tmp_q_60 + tmp_q_61) + (tmp_q_62 + tmp_q_63)*(tmp_q_64 + tmp_q_65));
                const real_t res_tmp_7_7 = tmp_q_25*((Dummy_4852*tmp_q_66 - tmp_q_30 - tmp_q_42)*(Dummy_4852*tmp_q_18*tmp_q_66 - tmp_q_32 - tmp_q_44) + (Dummy_4853*tmp_q_66 - tmp_q_34 - tmp_q_46)*(Dummy_4853*tmp_q_18*tmp_q_66 - tmp_q_36 - tmp_q_48) + (Dummy_4854*tmp_q_66 - tmp_q_38 - tmp_q_50)*(Dummy_4854*tmp_q_18*tmp_q_66 - tmp_q_40 - tmp_q_52));
                const real_t res_tmp_8_8 = tmp_q_25*((Dummy_4849*tmp_q_68 - tmp_q_31 - tmp_q_54)*(Dummy_4849*tmp_q_18*tmp_q_68 - tmp_q_33 - tmp_q_56) + (Dummy_4850*tmp_q_68 - tmp_q_35 - tmp_q_58)*(Dummy_4850*tmp_q_18*tmp_q_68 - tmp_q_37 - tmp_q_60) + (Dummy_4851*tmp_q_68 - tmp_q_39 - tmp_q_62)*(Dummy_4851*tmp_q_18*tmp_q_68 - tmp_q_41 - tmp_q_64));
                const real_t res_tmp_9_9 = tmp_q_25*((Dummy_4846*tmp_q_69 - tmp_q_43 - tmp_q_55)*(Dummy_4846*tmp_q_18*tmp_q_69 - tmp_q_45 - tmp_q_57) + (Dummy_4847*tmp_q_69 - tmp_q_47 - tmp_q_59)*(Dummy_4847*tmp_q_18*tmp_q_69 - tmp_q_49 - tmp_q_61) + (Dummy_4848*tmp_q_69 - tmp_q_51 - tmp_q_63)*(Dummy_4848*tmp_q_18*tmp_q_69 - tmp_q_53 - tmp_q_65));
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + res_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + res_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + res_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + res_tmp_9_9;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t k_dof_1 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_6 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             const real_t k_dof_7 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_8 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_5 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_3 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t k_dof_4 = _data_kEdge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             const real_t k_dof_2 = _data_kVertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t k_dof_9 = _data_kEdge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             const real_t k_dof_0 = _data_kVertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             real_t q_acc_0_0 = 0.0;
             real_t q_acc_1_1 = 0.0;
             real_t q_acc_2_2 = 0.0;
             real_t q_acc_3_3 = 0.0;
             real_t q_acc_4_4 = 0.0;
             real_t q_acc_5_5 = 0.0;
             real_t q_acc_6_6 = 0.0;
             real_t q_acc_7_7 = 0.0;
             real_t q_acc_8_8 = 0.0;
             real_t q_acc_9_9 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_q_0 = 4.0*_data_q_p_2[q];
                const real_t tmp_q_1 = 4.0*_data_q_p_0[q];
                const real_t tmp_q_2 = 4.0*_data_q_p_1[q];
                const real_t tmp_q_3 = tmp_q_1 + tmp_q_2;
                const real_t tmp_q_4 = tmp_q_0 + tmp_q_3 - 3.0;
                const real_t tmp_q_5 = Dummy_4877*tmp_q_4;
                const real_t tmp_q_6 = Dummy_4880*tmp_q_4;
                const real_t tmp_q_7 = Dummy_4883*tmp_q_4;
                const real_t tmp_q_8 = tmp_q_2*_data_q_p_2[q];
                const real_t tmp_q_9 = tmp_q_1*_data_q_p_2[q];
                const real_t tmp_q_10 = tmp_q_1*_data_q_p_1[q];
                const real_t tmp_q_11 = (_data_q_p_0[q]*_data_q_p_0[q]);
                const real_t tmp_q_12 = tmp_q_11*2.0;
                const real_t tmp_q_13 = (_data_q_p_1[q]*_data_q_p_1[q]);
                const real_t tmp_q_14 = tmp_q_13*2.0;
                const real_t tmp_q_15 = (_data_q_p_2[q]*_data_q_p_2[q]);
                const real_t tmp_q_16 = tmp_q_15*2.0;
                const real_t tmp_q_17 = tmp_q_10 + tmp_q_9;
                const real_t tmp_q_18 = k_dof_0*(tmp_q_12 + tmp_q_14 + tmp_q_16 + tmp_q_17 + tmp_q_8 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] - 3.0*_data_q_p_2[q] + 1.0) + k_dof_1*(tmp_q_12 - _data_q_p_0[q]) + k_dof_2*(tmp_q_14 - _data_q_p_1[q]) + k_dof_3*(tmp_q_16 - _data_q_p_2[q]) + k_dof_4*tmp_q_8 + k_dof_5*tmp_q_9 + k_dof_6*tmp_q_10 + k_dof_7*(tmp_q_0 + tmp_q_15*-4.0 - tmp_q_8 - tmp_q_9) + k_dof_8*(-tmp_q_10 + tmp_q_13*-4.0 + tmp_q_2 - tmp_q_8) + k_dof_9*(tmp_q_1 + tmp_q_11*-4.0 - tmp_q_17);
                const real_t tmp_q_19 = Dummy_4878*tmp_q_4;
                const real_t tmp_q_20 = Dummy_4881*tmp_q_4;
                const real_t tmp_q_21 = Dummy_4884*tmp_q_4;
                const real_t tmp_q_22 = Dummy_4879*tmp_q_4;
                const real_t tmp_q_23 = Dummy_4882*tmp_q_4;
                const real_t tmp_q_24 = Dummy_4885*tmp_q_4;
                const real_t tmp_q_25 = Dummy_4886*_data_q_w[q];
                const real_t tmp_q_26 = tmp_q_18*16.0;
                const real_t tmp_q_27 = tmp_q_26*((-0.25 + _data_q_p_0[q])*(-0.25 + _data_q_p_0[q]));
                const real_t tmp_q_28 = tmp_q_26*((-0.25 + _data_q_p_1[q])*(-0.25 + _data_q_p_1[q]));
                const real_t tmp_q_29 = tmp_q_26*((-0.25 + _data_q_p_2[q])*(-0.25 + _data_q_p_2[q]));
                const real_t tmp_q_30 = Dummy_4880*tmp_q_0;
                const real_t tmp_q_31 = Dummy_4883*tmp_q_2;
                const real_t tmp_q_32 = tmp_q_18*tmp_q_30;
                const real_t tmp_q_33 = tmp_q_18*tmp_q_31;
                const real_t tmp_q_34 = Dummy_4881*tmp_q_0;
                const real_t tmp_q_35 = Dummy_4884*tmp_q_2;
                const real_t tmp_q_36 = tmp_q_18*tmp_q_34;
                const real_t tmp_q_37 = tmp_q_18*tmp_q_35;
                const real_t tmp_q_38 = Dummy_4882*tmp_q_0;
                const real_t tmp_q_39 = Dummy_4885*tmp_q_2;
                const real_t tmp_q_40 = tmp_q_18*tmp_q_38;
                const real_t tmp_q_41 = tmp_q_18*tmp_q_39;
                const real_t tmp_q_42 = Dummy_4877*tmp_q_0;
                const real_t tmp_q_43 = Dummy_4883*tmp_q_1;
                const real_t tmp_q_44 = tmp_q_18*tmp_q_42;
                const real_t tmp_q_45 = tmp_q_18*tmp_q_43;
                const real_t tmp_q_46 = Dummy_4878*tmp_q_0;
                const real_t tmp_q_47 = Dummy_4884*tmp_q_1;
                const real_t tmp_q_48 = tmp_q_18*tmp_q_46;
                const real_t tmp_q_49 = tmp_q_18*tmp_q_47;
                const real_t tmp_q_50 = Dummy_4879*tmp_q_0;
                const real_t tmp_q_51 = Dummy_4885*tmp_q_1;
                const real_t tmp_q_52 = tmp_q_18*tmp_q_50;
                const real_t tmp_q_53 = tmp_q_18*tmp_q_51;
                const real_t tmp_q_54 = Dummy_4877*tmp_q_2;
                const real_t tmp_q_55 = Dummy_4880*tmp_q_1;
                const real_t tmp_q_56 = tmp_q_18*tmp_q_54;
                const real_t tmp_q_57 = tmp_q_18*tmp_q_55;
                const real_t tmp_q_58 = Dummy_4878*tmp_q_2;
                const real_t tmp_q_59 = Dummy_4881*tmp_q_1;
                const real_t tmp_q_60 = tmp_q_18*tmp_q_58;
                const real_t tmp_q_61 = tmp_q_18*tmp_q_59;
                const real_t tmp_q_62 = Dummy_4879*tmp_q_2;
                const real_t tmp_q_63 = Dummy_4882*tmp_q_1;
                const real_t tmp_q_64 = tmp_q_18*tmp_q_62;
                const real_t tmp_q_65 = tmp_q_18*tmp_q_63;
                const real_t tmp_q_66 = -tmp_q_3 - 8.0*_data_q_p_2[q] + 4.0;
                const real_t tmp_q_67 = tmp_q_0 - 4.0;
                const real_t tmp_q_68 = -tmp_q_1 - tmp_q_67 - 8.0*_data_q_p_1[q];
                const real_t tmp_q_69 = -tmp_q_2 - tmp_q_67 - 8.0*_data_q_p_0[q];
                const real_t res_tmp_0_0 = tmp_q_25*((tmp_q_19 + tmp_q_20 + tmp_q_21)*(tmp_q_18*tmp_q_19 + tmp_q_18*tmp_q_20 + tmp_q_18*tmp_q_21) + (tmp_q_22 + tmp_q_23 + tmp_q_24)*(tmp_q_18*tmp_q_22 + tmp_q_18*tmp_q_23 + tmp_q_18*tmp_q_24) + (tmp_q_5 + tmp_q_6 + tmp_q_7)*(tmp_q_18*tmp_q_5 + tmp_q_18*tmp_q_6 + tmp_q_18*tmp_q_7));
                const real_t res_tmp_1_1 = tmp_q_25*((Dummy_4877*Dummy_4877)*tmp_q_27 + (Dummy_4878*Dummy_4878)*tmp_q_27 + (Dummy_4879*Dummy_4879)*tmp_q_27);
                const real_t res_tmp_2_2 = tmp_q_25*((Dummy_4880*Dummy_4880)*tmp_q_28 + (Dummy_4881*Dummy_4881)*tmp_q_28 + (Dummy_4882*Dummy_4882)*tmp_q_28);
                const real_t res_tmp_3_3 = tmp_q_25*((Dummy_4883*Dummy_4883)*tmp_q_29 + (Dummy_4884*Dummy_4884)*tmp_q_29 + (Dummy_4885*Dummy_4885)*tmp_q_29);
                const real_t res_tmp_4_4 = tmp_q_25*((tmp_q_30 + tmp_q_31)*(tmp_q_32 + tmp_q_33) + (tmp_q_34 + tmp_q_35)*(tmp_q_36 + tmp_q_37) + (tmp_q_38 + tmp_q_39)*(tmp_q_40 + tmp_q_41));
                const real_t res_tmp_5_5 = tmp_q_25*((tmp_q_42 + tmp_q_43)*(tmp_q_44 + tmp_q_45) + (tmp_q_46 + tmp_q_47)*(tmp_q_48 + tmp_q_49) + (tmp_q_50 + tmp_q_51)*(tmp_q_52 + tmp_q_53));
                const real_t res_tmp_6_6 = tmp_q_25*((tmp_q_54 + tmp_q_55)*(tmp_q_56 + tmp_q_57) + (tmp_q_58 + tmp_q_59)*(tmp_q_60 + tmp_q_61) + (tmp_q_62 + tmp_q_63)*(tmp_q_64 + tmp_q_65));
                const real_t res_tmp_7_7 = tmp_q_25*((Dummy_4883*tmp_q_66 - tmp_q_30 - tmp_q_42)*(Dummy_4883*tmp_q_18*tmp_q_66 - tmp_q_32 - tmp_q_44) + (Dummy_4884*tmp_q_66 - tmp_q_34 - tmp_q_46)*(Dummy_4884*tmp_q_18*tmp_q_66 - tmp_q_36 - tmp_q_48) + (Dummy_4885*tmp_q_66 - tmp_q_38 - tmp_q_50)*(Dummy_4885*tmp_q_18*tmp_q_66 - tmp_q_40 - tmp_q_52));
                const real_t res_tmp_8_8 = tmp_q_25*((Dummy_4880*tmp_q_68 - tmp_q_31 - tmp_q_54)*(Dummy_4880*tmp_q_18*tmp_q_68 - tmp_q_33 - tmp_q_56) + (Dummy_4881*tmp_q_68 - tmp_q_35 - tmp_q_58)*(Dummy_4881*tmp_q_18*tmp_q_68 - tmp_q_37 - tmp_q_60) + (Dummy_4882*tmp_q_68 - tmp_q_39 - tmp_q_62)*(Dummy_4882*tmp_q_18*tmp_q_68 - tmp_q_41 - tmp_q_64));
                const real_t res_tmp_9_9 = tmp_q_25*((Dummy_4877*tmp_q_69 - tmp_q_43 - tmp_q_55)*(Dummy_4877*tmp_q_18*tmp_q_69 - tmp_q_45 - tmp_q_57) + (Dummy_4878*tmp_q_69 - tmp_q_47 - tmp_q_59)*(Dummy_4878*tmp_q_18*tmp_q_69 - tmp_q_49 - tmp_q_61) + (Dummy_4879*tmp_q_69 - tmp_q_51 - tmp_q_63)*(Dummy_4879*tmp_q_18*tmp_q_69 - tmp_q_53 - tmp_q_65));
                q_acc_0_0 = q_acc_0_0 + res_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + res_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + res_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + res_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + res_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + res_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + res_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + res_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + res_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + res_tmp_9_9;
             }
             const real_t elMatDiag_0 = q_acc_0_0;
             const real_t elMatDiag_1 = q_acc_1_1;
             const real_t elMatDiag_2 = q_acc_2_2;
             const real_t elMatDiag_3 = q_acc_3_3;
             const real_t elMatDiag_4 = q_acc_4_4;
             const real_t elMatDiag_5 = q_acc_5_5;
             const real_t elMatDiag_6 = q_acc_6_6;
             const real_t elMatDiag_7 = q_acc_7_7;
             const real_t elMatDiag_8 = q_acc_8_8;
             const real_t elMatDiag_9 = q_acc_9_9;
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatDiag_3 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_5 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1] = elMatDiag_6 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_7 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
             _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))] = elMatDiag_8 + _data_invDiag_Edge[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))];
             _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))] = elMatDiag_9 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
