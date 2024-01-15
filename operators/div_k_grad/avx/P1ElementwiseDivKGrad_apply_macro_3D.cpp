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

void P1ElementwiseDivKGrad::apply_macro_3D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_k, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t tmp_q_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0;
       const real_t tmp_q_5 = -jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1;
       const real_t tmp_q_9 = -jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2;
       const real_t Dummy_3180 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3181 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3182 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3183 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3184 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3185 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3186 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3187 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3188 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3189 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3190 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3191 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3192 = -Dummy_3180 + Dummy_3183;
       const real_t Dummy_3193 = -Dummy_3180 + Dummy_3186;
       const real_t Dummy_3194 = -Dummy_3180 + Dummy_3189;
       const real_t Dummy_3195 = -Dummy_3181 + Dummy_3184;
       const real_t Dummy_3196 = -Dummy_3181 + Dummy_3187;
       const real_t Dummy_3197 = -Dummy_3181 + Dummy_3190;
       const real_t Dummy_3198 = -Dummy_3182 + Dummy_3185;
       const real_t Dummy_3199 = -Dummy_3182 + Dummy_3188;
       const real_t Dummy_3200 = -Dummy_3182 + Dummy_3191;
       const real_t Dummy_3201 = (Dummy_3196*Dummy_3200 - Dummy_3197*Dummy_3199)*1.0 / (Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3202 = (-Dummy_3193*Dummy_3200 + Dummy_3194*Dummy_3199)*1.0 / (Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3203 = (Dummy_3193*Dummy_3197 - Dummy_3194*Dummy_3196)*1.0 / (Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3204 = (-Dummy_3195*Dummy_3200 + Dummy_3197*Dummy_3198)*1.0 / (Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3205 = (Dummy_3192*Dummy_3200 - Dummy_3194*Dummy_3198)*1.0 / (Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3206 = (-Dummy_3192*Dummy_3197 + Dummy_3194*Dummy_3195)*1.0 / (Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3207 = (Dummy_3195*Dummy_3199 - Dummy_3196*Dummy_3198)*1.0 / (Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3208 = (-Dummy_3192*Dummy_3199 + Dummy_3193*Dummy_3198)*1.0 / (Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3209 = (Dummy_3192*Dummy_3196 - Dummy_3193*Dummy_3195)*1.0 / (Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3210 = abs(Dummy_3192*Dummy_3196*Dummy_3200 - Dummy_3192*Dummy_3197*Dummy_3199 - Dummy_3193*Dummy_3195*Dummy_3200 + Dummy_3193*Dummy_3197*Dummy_3198 + Dummy_3194*Dummy_3195*Dummy_3199 - Dummy_3194*Dummy_3196*Dummy_3198);
       const real_t Dummy_3211 = -Dummy_3201 - Dummy_3204 - Dummy_3207;
       const real_t Dummy_3212 = -Dummy_3202 - Dummy_3205 - Dummy_3208;
       const real_t Dummy_3213 = -Dummy_3203 - Dummy_3206 - Dummy_3209;
       const real_t Dummy_3214 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t Dummy_3215 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t Dummy_3216 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const real_t Dummy_3217 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3218 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3219 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3220 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3221 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3222 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3223 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3224 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3225 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3226 = -Dummy_3214 + Dummy_3217;
       const real_t Dummy_3227 = -Dummy_3214 + Dummy_3220;
       const real_t Dummy_3228 = -Dummy_3214 + Dummy_3223;
       const real_t Dummy_3229 = -Dummy_3215 + Dummy_3218;
       const real_t Dummy_3230 = -Dummy_3215 + Dummy_3221;
       const real_t Dummy_3231 = -Dummy_3215 + Dummy_3224;
       const real_t Dummy_3232 = -Dummy_3216 + Dummy_3219;
       const real_t Dummy_3233 = -Dummy_3216 + Dummy_3222;
       const real_t Dummy_3234 = -Dummy_3216 + Dummy_3225;
       const real_t Dummy_3235 = (Dummy_3230*Dummy_3234 - Dummy_3231*Dummy_3233)*1.0 / (Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3236 = (-Dummy_3227*Dummy_3234 + Dummy_3228*Dummy_3233)*1.0 / (Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3237 = (Dummy_3227*Dummy_3231 - Dummy_3228*Dummy_3230)*1.0 / (Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3238 = (-Dummy_3229*Dummy_3234 + Dummy_3231*Dummy_3232)*1.0 / (Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3239 = (Dummy_3226*Dummy_3234 - Dummy_3228*Dummy_3232)*1.0 / (Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3240 = (-Dummy_3226*Dummy_3231 + Dummy_3228*Dummy_3229)*1.0 / (Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3241 = (Dummy_3229*Dummy_3233 - Dummy_3230*Dummy_3232)*1.0 / (Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3242 = (-Dummy_3226*Dummy_3233 + Dummy_3227*Dummy_3232)*1.0 / (Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3243 = (Dummy_3226*Dummy_3230 - Dummy_3227*Dummy_3229)*1.0 / (Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3244 = abs(Dummy_3226*Dummy_3230*Dummy_3234 - Dummy_3226*Dummy_3231*Dummy_3233 - Dummy_3227*Dummy_3229*Dummy_3234 + Dummy_3227*Dummy_3231*Dummy_3232 + Dummy_3228*Dummy_3229*Dummy_3233 - Dummy_3228*Dummy_3230*Dummy_3232);
       const real_t Dummy_3245 = -Dummy_3235 - Dummy_3238 - Dummy_3241;
       const real_t Dummy_3246 = -Dummy_3236 - Dummy_3239 - Dummy_3242;
       const real_t Dummy_3247 = -Dummy_3237 - Dummy_3240 - Dummy_3243;
       const real_t Dummy_3248 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3249 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3250 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3251 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3252 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3253 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3254 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3255 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3256 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3257 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3258 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3259 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3260 = -Dummy_3248 + Dummy_3251;
       const real_t Dummy_3261 = -Dummy_3248 + Dummy_3254;
       const real_t Dummy_3262 = -Dummy_3248 + Dummy_3257;
       const real_t Dummy_3263 = -Dummy_3249 + Dummy_3252;
       const real_t Dummy_3264 = -Dummy_3249 + Dummy_3255;
       const real_t Dummy_3265 = -Dummy_3249 + Dummy_3258;
       const real_t Dummy_3266 = -Dummy_3250 + Dummy_3253;
       const real_t Dummy_3267 = -Dummy_3250 + Dummy_3256;
       const real_t Dummy_3268 = -Dummy_3250 + Dummy_3259;
       const real_t Dummy_3269 = (Dummy_3264*Dummy_3268 - Dummy_3265*Dummy_3267)*1.0 / (Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3270 = (-Dummy_3261*Dummy_3268 + Dummy_3262*Dummy_3267)*1.0 / (Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3271 = (Dummy_3261*Dummy_3265 - Dummy_3262*Dummy_3264)*1.0 / (Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3272 = (-Dummy_3263*Dummy_3268 + Dummy_3265*Dummy_3266)*1.0 / (Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3273 = (Dummy_3260*Dummy_3268 - Dummy_3262*Dummy_3266)*1.0 / (Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3274 = (-Dummy_3260*Dummy_3265 + Dummy_3262*Dummy_3263)*1.0 / (Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3275 = (Dummy_3263*Dummy_3267 - Dummy_3264*Dummy_3266)*1.0 / (Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3276 = (-Dummy_3260*Dummy_3267 + Dummy_3261*Dummy_3266)*1.0 / (Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3277 = (Dummy_3260*Dummy_3264 - Dummy_3261*Dummy_3263)*1.0 / (Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3278 = abs(Dummy_3260*Dummy_3264*Dummy_3268 - Dummy_3260*Dummy_3265*Dummy_3267 - Dummy_3261*Dummy_3263*Dummy_3268 + Dummy_3261*Dummy_3265*Dummy_3266 + Dummy_3262*Dummy_3263*Dummy_3267 - Dummy_3262*Dummy_3264*Dummy_3266);
       const real_t Dummy_3279 = -Dummy_3269 - Dummy_3272 - Dummy_3275;
       const real_t Dummy_3280 = -Dummy_3270 - Dummy_3273 - Dummy_3276;
       const real_t Dummy_3281 = -Dummy_3271 - Dummy_3274 - Dummy_3277;
       const real_t Dummy_3282 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t Dummy_3283 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t Dummy_3284 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const real_t Dummy_3285 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3286 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3287 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3288 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3289 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3290 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3291 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3292 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3293 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3294 = -Dummy_3282 + Dummy_3285;
       const real_t Dummy_3295 = -Dummy_3282 + Dummy_3288;
       const real_t Dummy_3296 = -Dummy_3282 + Dummy_3291;
       const real_t Dummy_3297 = -Dummy_3283 + Dummy_3286;
       const real_t Dummy_3298 = -Dummy_3283 + Dummy_3289;
       const real_t Dummy_3299 = -Dummy_3283 + Dummy_3292;
       const real_t Dummy_3300 = -Dummy_3284 + Dummy_3287;
       const real_t Dummy_3301 = -Dummy_3284 + Dummy_3290;
       const real_t Dummy_3302 = -Dummy_3284 + Dummy_3293;
       const real_t Dummy_3303 = (Dummy_3298*Dummy_3302 - Dummy_3299*Dummy_3301)*1.0 / (Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3304 = (-Dummy_3295*Dummy_3302 + Dummy_3296*Dummy_3301)*1.0 / (Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3305 = (Dummy_3295*Dummy_3299 - Dummy_3296*Dummy_3298)*1.0 / (Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3306 = (-Dummy_3297*Dummy_3302 + Dummy_3299*Dummy_3300)*1.0 / (Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3307 = (Dummy_3294*Dummy_3302 - Dummy_3296*Dummy_3300)*1.0 / (Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3308 = (-Dummy_3294*Dummy_3299 + Dummy_3296*Dummy_3297)*1.0 / (Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3309 = (Dummy_3297*Dummy_3301 - Dummy_3298*Dummy_3300)*1.0 / (Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3310 = (-Dummy_3294*Dummy_3301 + Dummy_3295*Dummy_3300)*1.0 / (Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3311 = (Dummy_3294*Dummy_3298 - Dummy_3295*Dummy_3297)*1.0 / (Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3312 = abs(Dummy_3294*Dummy_3298*Dummy_3302 - Dummy_3294*Dummy_3299*Dummy_3301 - Dummy_3295*Dummy_3297*Dummy_3302 + Dummy_3295*Dummy_3299*Dummy_3300 + Dummy_3296*Dummy_3297*Dummy_3301 - Dummy_3296*Dummy_3298*Dummy_3300);
       const real_t Dummy_3313 = -Dummy_3303 - Dummy_3306 - Dummy_3309;
       const real_t Dummy_3314 = -Dummy_3304 - Dummy_3307 - Dummy_3310;
       const real_t Dummy_3315 = -Dummy_3305 - Dummy_3308 - Dummy_3311;
       const real_t Dummy_3316 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3317 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3318 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3319 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3320 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3321 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3322 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3323 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3324 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3325 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3326 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3327 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3328 = -Dummy_3316 + Dummy_3319;
       const real_t Dummy_3329 = -Dummy_3316 + Dummy_3322;
       const real_t Dummy_3330 = -Dummy_3316 + Dummy_3325;
       const real_t Dummy_3331 = -Dummy_3317 + Dummy_3320;
       const real_t Dummy_3332 = -Dummy_3317 + Dummy_3323;
       const real_t Dummy_3333 = -Dummy_3317 + Dummy_3326;
       const real_t Dummy_3334 = -Dummy_3318 + Dummy_3321;
       const real_t Dummy_3335 = -Dummy_3318 + Dummy_3324;
       const real_t Dummy_3336 = -Dummy_3318 + Dummy_3327;
       const real_t Dummy_3337 = (Dummy_3332*Dummy_3336 - Dummy_3333*Dummy_3335)*1.0 / (Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3338 = (-Dummy_3329*Dummy_3336 + Dummy_3330*Dummy_3335)*1.0 / (Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3339 = (Dummy_3329*Dummy_3333 - Dummy_3330*Dummy_3332)*1.0 / (Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3340 = (-Dummy_3331*Dummy_3336 + Dummy_3333*Dummy_3334)*1.0 / (Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3341 = (Dummy_3328*Dummy_3336 - Dummy_3330*Dummy_3334)*1.0 / (Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3342 = (-Dummy_3328*Dummy_3333 + Dummy_3330*Dummy_3331)*1.0 / (Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3343 = (Dummy_3331*Dummy_3335 - Dummy_3332*Dummy_3334)*1.0 / (Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3344 = (-Dummy_3328*Dummy_3335 + Dummy_3329*Dummy_3334)*1.0 / (Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3345 = (Dummy_3328*Dummy_3332 - Dummy_3329*Dummy_3331)*1.0 / (Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3346 = abs(Dummy_3328*Dummy_3332*Dummy_3336 - Dummy_3328*Dummy_3333*Dummy_3335 - Dummy_3329*Dummy_3331*Dummy_3336 + Dummy_3329*Dummy_3333*Dummy_3334 + Dummy_3330*Dummy_3331*Dummy_3335 - Dummy_3330*Dummy_3332*Dummy_3334);
       const real_t Dummy_3347 = -Dummy_3337 - Dummy_3340 - Dummy_3343;
       const real_t Dummy_3348 = -Dummy_3338 - Dummy_3341 - Dummy_3344;
       const real_t Dummy_3349 = -Dummy_3339 - Dummy_3342 - Dummy_3345;
       {
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_q_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(k_dof_3,_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q])));
                   const __m256d tmp_q_2 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0));
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0));
                   const __m256d tmp_q_4 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0));
                   const __m256d tmp_q_6 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1));
                   const __m256d tmp_q_7 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1));
                   const __m256d tmp_q_8 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1));
                   const __m256d tmp_q_10 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_0_2,jac_affine_inv_0_2,jac_affine_inv_0_2,jac_affine_inv_0_2));
                   const __m256d tmp_q_11 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_1_2,jac_affine_inv_1_2,jac_affine_inv_1_2,jac_affine_inv_1_2));
                   const __m256d tmp_q_12 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2));
                   const real_t tmp_q_13 = abs_det_jac_affine*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_10,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(tmp_q_9,tmp_q_9,tmp_q_9,tmp_q_9)),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_4,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(tmp_q_0,tmp_q_0,tmp_q_0,tmp_q_0))),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(tmp_q_5,tmp_q_5,tmp_q_5,tmp_q_5))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(tmp_q_0,tmp_q_0,tmp_q_0,tmp_q_0)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(tmp_q_5,tmp_q_5,tmp_q_5,tmp_q_5))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(tmp_q_9,tmp_q_9,tmp_q_9,tmp_q_9))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(tmp_q_0,tmp_q_0,tmp_q_0,tmp_q_0)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(tmp_q_5,tmp_q_5,tmp_q_5,tmp_q_5))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(tmp_q_9,tmp_q_9,tmp_q_9,tmp_q_9))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_4,_mm256_set_pd(tmp_q_0,tmp_q_0,tmp_q_0,tmp_q_0)),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(tmp_q_5,tmp_q_5,tmp_q_5,tmp_q_5))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(tmp_q_9,tmp_q_9,tmp_q_9,tmp_q_9))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0),_mm256_set_pd(jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0,jac_affine_inv_0_0))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1),_mm256_set_pd(jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1,jac_affine_inv_0_1)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_0_2,jac_affine_inv_0_2,jac_affine_inv_0_2,jac_affine_inv_0_2),_mm256_set_pd(jac_affine_inv_0_2,jac_affine_inv_0_2,jac_affine_inv_0_2,jac_affine_inv_0_2)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(jac_affine_inv_1_2,jac_affine_inv_1_2,jac_affine_inv_1_2,jac_affine_inv_1_2))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0),_mm256_set_pd(jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0,jac_affine_inv_1_0))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1),_mm256_set_pd(jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1,jac_affine_inv_1_1)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_1_2,jac_affine_inv_1_2,jac_affine_inv_1_2,jac_affine_inv_1_2),_mm256_set_pd(jac_affine_inv_1_2,jac_affine_inv_1_2,jac_affine_inv_1_2,jac_affine_inv_1_2)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_3_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0),_mm256_set_pd(jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0,jac_affine_inv_2_0))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1),_mm256_set_pd(jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1,jac_affine_inv_2_1)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2),_mm256_set_pd(jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2,jac_affine_inv_2_2)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,res_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,res_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,res_tmp_0_3);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,res_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,res_tmp_1_3);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,res_tmp_2_3);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,res_tmp_3_3);
                }
                __m256d q_acc_1_0 = q_acc_0_1;
                __m256d q_acc_2_0 = q_acc_0_2;
                __m256d q_acc_2_1 = q_acc_1_2;
                __m256d q_acc_3_0 = q_acc_0_3;
                __m256d q_acc_3_1 = q_acc_1_3;
                __m256d q_acc_3_2 = q_acc_2_3;
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_3_0,src_dof_0),_mm256_mul_pd(q_acc_3_1,src_dof_1)),_mm256_mul_pd(q_acc_3_2,src_dof_2)),_mm256_mul_pd(q_acc_3_3,src_dof_3));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_3 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_3_3 = 0.0;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                   const real_t tmp_q_2 = jac_affine_inv_0_0*tmp_q_1;
                   const real_t tmp_q_3 = jac_affine_inv_1_0*tmp_q_1;
                   const real_t tmp_q_4 = jac_affine_inv_2_0*tmp_q_1;
                   const real_t tmp_q_6 = jac_affine_inv_0_1*tmp_q_1;
                   const real_t tmp_q_7 = jac_affine_inv_1_1*tmp_q_1;
                   const real_t tmp_q_8 = jac_affine_inv_2_1*tmp_q_1;
                   const real_t tmp_q_10 = jac_affine_inv_0_2*tmp_q_1;
                   const real_t tmp_q_11 = jac_affine_inv_1_2*tmp_q_1;
                   const real_t tmp_q_12 = jac_affine_inv_2_2*tmp_q_1;
                   const real_t tmp_q_13 = abs_det_jac_affine*_data_q_w[q];
                   const real_t res_tmp_0_0 = tmp_q_13*(tmp_q_0*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + tmp_q_5*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + tmp_q_9*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                   const real_t res_tmp_0_1 = tmp_q_13*(tmp_q_0*tmp_q_2 + tmp_q_10*tmp_q_9 + tmp_q_5*tmp_q_6);
                   const real_t res_tmp_0_2 = tmp_q_13*(tmp_q_0*tmp_q_3 + tmp_q_11*tmp_q_9 + tmp_q_5*tmp_q_7);
                   const real_t res_tmp_0_3 = tmp_q_13*(tmp_q_0*tmp_q_4 + tmp_q_12*tmp_q_9 + tmp_q_5*tmp_q_8);
                   const real_t res_tmp_1_1 = tmp_q_13*((jac_affine_inv_0_0*jac_affine_inv_0_0)*tmp_q_1 + (jac_affine_inv_0_1*jac_affine_inv_0_1)*tmp_q_1 + (jac_affine_inv_0_2*jac_affine_inv_0_2)*tmp_q_1);
                   const real_t res_tmp_1_2 = tmp_q_13*(jac_affine_inv_1_0*tmp_q_2 + jac_affine_inv_1_1*tmp_q_6 + jac_affine_inv_1_2*tmp_q_10);
                   const real_t res_tmp_1_3 = tmp_q_13*(jac_affine_inv_2_0*tmp_q_2 + jac_affine_inv_2_1*tmp_q_6 + jac_affine_inv_2_2*tmp_q_10);
                   const real_t res_tmp_2_2 = tmp_q_13*((jac_affine_inv_1_0*jac_affine_inv_1_0)*tmp_q_1 + (jac_affine_inv_1_1*jac_affine_inv_1_1)*tmp_q_1 + (jac_affine_inv_1_2*jac_affine_inv_1_2)*tmp_q_1);
                   const real_t res_tmp_2_3 = tmp_q_13*(jac_affine_inv_2_0*tmp_q_3 + jac_affine_inv_2_1*tmp_q_7 + jac_affine_inv_2_2*tmp_q_11);
                   const real_t res_tmp_3_3 = tmp_q_13*((jac_affine_inv_2_0*jac_affine_inv_2_0)*tmp_q_1 + (jac_affine_inv_2_1*jac_affine_inv_2_1)*tmp_q_1 + (jac_affine_inv_2_2*jac_affine_inv_2_2)*tmp_q_1);
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
                real_t q_acc_1_0 = q_acc_0_1;
                real_t q_acc_2_0 = q_acc_0_2;
                real_t q_acc_2_1 = q_acc_1_2;
                real_t q_acc_3_0 = q_acc_0_3;
                real_t q_acc_3_1 = q_acc_1_3;
                real_t q_acc_3_2 = q_acc_2_3;
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
                const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3;
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_q_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(k_dof_3,_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q])));
                   const __m256d tmp_q_2 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3201,Dummy_3201,Dummy_3201,Dummy_3201));
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3204,Dummy_3204,Dummy_3204,Dummy_3204));
                   const __m256d tmp_q_4 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3207,Dummy_3207,Dummy_3207,Dummy_3207));
                   const __m256d tmp_q_6 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3202,Dummy_3202,Dummy_3202,Dummy_3202));
                   const __m256d tmp_q_7 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3205,Dummy_3205,Dummy_3205,Dummy_3205));
                   const __m256d tmp_q_8 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3208,Dummy_3208,Dummy_3208,Dummy_3208));
                   const __m256d tmp_q_10 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3203,Dummy_3203,Dummy_3203,Dummy_3203));
                   const __m256d tmp_q_11 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3206,Dummy_3206,Dummy_3206,Dummy_3206));
                   const __m256d tmp_q_12 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3209,Dummy_3209,Dummy_3209,Dummy_3209));
                   const real_t tmp_q_13 = Dummy_3210*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_10,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3213,Dummy_3213,Dummy_3213,Dummy_3213)),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_4,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3211,Dummy_3211,Dummy_3211,Dummy_3211))),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3212,Dummy_3212,Dummy_3212,Dummy_3212))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3211,Dummy_3211,Dummy_3211,Dummy_3211)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3212,Dummy_3212,Dummy_3212,Dummy_3212))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3213,Dummy_3213,Dummy_3213,Dummy_3213))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3211,Dummy_3211,Dummy_3211,Dummy_3211)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3212,Dummy_3212,Dummy_3212,Dummy_3212))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3213,Dummy_3213,Dummy_3213,Dummy_3213))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_4,_mm256_set_pd(Dummy_3211,Dummy_3211,Dummy_3211,Dummy_3211)),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(Dummy_3212,Dummy_3212,Dummy_3212,Dummy_3212))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(Dummy_3213,Dummy_3213,Dummy_3213,Dummy_3213))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3201,Dummy_3201,Dummy_3201,Dummy_3201),_mm256_set_pd(Dummy_3201,Dummy_3201,Dummy_3201,Dummy_3201))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3202,Dummy_3202,Dummy_3202,Dummy_3202),_mm256_set_pd(Dummy_3202,Dummy_3202,Dummy_3202,Dummy_3202)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3203,Dummy_3203,Dummy_3203,Dummy_3203),_mm256_set_pd(Dummy_3203,Dummy_3203,Dummy_3203,Dummy_3203)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3204,Dummy_3204,Dummy_3204,Dummy_3204)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3205,Dummy_3205,Dummy_3205,Dummy_3205))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3206,Dummy_3206,Dummy_3206,Dummy_3206))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3207,Dummy_3207,Dummy_3207,Dummy_3207)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3208,Dummy_3208,Dummy_3208,Dummy_3208))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3209,Dummy_3209,Dummy_3209,Dummy_3209))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3204,Dummy_3204,Dummy_3204,Dummy_3204),_mm256_set_pd(Dummy_3204,Dummy_3204,Dummy_3204,Dummy_3204))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3205,Dummy_3205,Dummy_3205,Dummy_3205),_mm256_set_pd(Dummy_3205,Dummy_3205,Dummy_3205,Dummy_3205)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3206,Dummy_3206,Dummy_3206,Dummy_3206),_mm256_set_pd(Dummy_3206,Dummy_3206,Dummy_3206,Dummy_3206)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3207,Dummy_3207,Dummy_3207,Dummy_3207)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3208,Dummy_3208,Dummy_3208,Dummy_3208))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3209,Dummy_3209,Dummy_3209,Dummy_3209))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_3_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3207,Dummy_3207,Dummy_3207,Dummy_3207),_mm256_set_pd(Dummy_3207,Dummy_3207,Dummy_3207,Dummy_3207))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3208,Dummy_3208,Dummy_3208,Dummy_3208),_mm256_set_pd(Dummy_3208,Dummy_3208,Dummy_3208,Dummy_3208)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3209,Dummy_3209,Dummy_3209,Dummy_3209),_mm256_set_pd(Dummy_3209,Dummy_3209,Dummy_3209,Dummy_3209)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,res_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,res_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,res_tmp_0_3);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,res_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,res_tmp_1_3);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,res_tmp_2_3);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,res_tmp_3_3);
                }
                __m256d q_acc_1_0 = q_acc_0_1;
                __m256d q_acc_2_0 = q_acc_0_2;
                __m256d q_acc_2_1 = q_acc_1_2;
                __m256d q_acc_3_0 = q_acc_0_3;
                __m256d q_acc_3_1 = q_acc_1_3;
                __m256d q_acc_3_2 = q_acc_2_3;
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_3_0,src_dof_0),_mm256_mul_pd(q_acc_3_1,src_dof_1)),_mm256_mul_pd(q_acc_3_2,src_dof_2)),_mm256_mul_pd(q_acc_3_3,src_dof_3));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_3 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_0 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_3_3 = 0.0;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                   const real_t tmp_q_2 = Dummy_3201*tmp_q_1;
                   const real_t tmp_q_3 = Dummy_3204*tmp_q_1;
                   const real_t tmp_q_4 = Dummy_3207*tmp_q_1;
                   const real_t tmp_q_6 = Dummy_3202*tmp_q_1;
                   const real_t tmp_q_7 = Dummy_3205*tmp_q_1;
                   const real_t tmp_q_8 = Dummy_3208*tmp_q_1;
                   const real_t tmp_q_10 = Dummy_3203*tmp_q_1;
                   const real_t tmp_q_11 = Dummy_3206*tmp_q_1;
                   const real_t tmp_q_12 = Dummy_3209*tmp_q_1;
                   const real_t tmp_q_13 = Dummy_3210*_data_q_w[q];
                   const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3211*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3212*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3213*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                   const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3211*tmp_q_2 + Dummy_3212*tmp_q_6 + Dummy_3213*tmp_q_10);
                   const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3211*tmp_q_3 + Dummy_3212*tmp_q_7 + Dummy_3213*tmp_q_11);
                   const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3211*tmp_q_4 + Dummy_3212*tmp_q_8 + Dummy_3213*tmp_q_12);
                   const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3201*Dummy_3201)*tmp_q_1 + (Dummy_3202*Dummy_3202)*tmp_q_1 + (Dummy_3203*Dummy_3203)*tmp_q_1);
                   const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3204*tmp_q_2 + Dummy_3205*tmp_q_6 + Dummy_3206*tmp_q_10);
                   const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3207*tmp_q_2 + Dummy_3208*tmp_q_6 + Dummy_3209*tmp_q_10);
                   const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3204*Dummy_3204)*tmp_q_1 + (Dummy_3205*Dummy_3205)*tmp_q_1 + (Dummy_3206*Dummy_3206)*tmp_q_1);
                   const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3207*tmp_q_3 + Dummy_3208*tmp_q_7 + Dummy_3209*tmp_q_11);
                   const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3207*Dummy_3207)*tmp_q_1 + (Dummy_3208*Dummy_3208)*tmp_q_1 + (Dummy_3209*Dummy_3209)*tmp_q_1);
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
                real_t q_acc_1_0 = q_acc_0_1;
                real_t q_acc_2_0 = q_acc_0_2;
                real_t q_acc_2_1 = q_acc_1_2;
                real_t q_acc_3_0 = q_acc_0_3;
                real_t q_acc_3_1 = q_acc_1_3;
                real_t q_acc_3_2 = q_acc_2_3;
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
                const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3;
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_q_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(k_dof_3,_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q])));
                   const __m256d tmp_q_2 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3235,Dummy_3235,Dummy_3235,Dummy_3235));
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3238,Dummy_3238,Dummy_3238,Dummy_3238));
                   const __m256d tmp_q_4 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3241,Dummy_3241,Dummy_3241,Dummy_3241));
                   const __m256d tmp_q_6 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3236,Dummy_3236,Dummy_3236,Dummy_3236));
                   const __m256d tmp_q_7 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3239,Dummy_3239,Dummy_3239,Dummy_3239));
                   const __m256d tmp_q_8 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3242,Dummy_3242,Dummy_3242,Dummy_3242));
                   const __m256d tmp_q_10 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3237,Dummy_3237,Dummy_3237,Dummy_3237));
                   const __m256d tmp_q_11 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3240,Dummy_3240,Dummy_3240,Dummy_3240));
                   const __m256d tmp_q_12 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3243,Dummy_3243,Dummy_3243,Dummy_3243));
                   const real_t tmp_q_13 = Dummy_3244*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_10,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3247,Dummy_3247,Dummy_3247,Dummy_3247)),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_4,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3245,Dummy_3245,Dummy_3245,Dummy_3245))),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3246,Dummy_3246,Dummy_3246,Dummy_3246))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3245,Dummy_3245,Dummy_3245,Dummy_3245)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3246,Dummy_3246,Dummy_3246,Dummy_3246))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3247,Dummy_3247,Dummy_3247,Dummy_3247))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3245,Dummy_3245,Dummy_3245,Dummy_3245)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3246,Dummy_3246,Dummy_3246,Dummy_3246))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3247,Dummy_3247,Dummy_3247,Dummy_3247))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_4,_mm256_set_pd(Dummy_3245,Dummy_3245,Dummy_3245,Dummy_3245)),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(Dummy_3246,Dummy_3246,Dummy_3246,Dummy_3246))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(Dummy_3247,Dummy_3247,Dummy_3247,Dummy_3247))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3235,Dummy_3235,Dummy_3235,Dummy_3235),_mm256_set_pd(Dummy_3235,Dummy_3235,Dummy_3235,Dummy_3235))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3236,Dummy_3236,Dummy_3236,Dummy_3236),_mm256_set_pd(Dummy_3236,Dummy_3236,Dummy_3236,Dummy_3236)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3237,Dummy_3237,Dummy_3237,Dummy_3237),_mm256_set_pd(Dummy_3237,Dummy_3237,Dummy_3237,Dummy_3237)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3238,Dummy_3238,Dummy_3238,Dummy_3238)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3239,Dummy_3239,Dummy_3239,Dummy_3239))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3240,Dummy_3240,Dummy_3240,Dummy_3240))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3241,Dummy_3241,Dummy_3241,Dummy_3241)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3242,Dummy_3242,Dummy_3242,Dummy_3242))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3243,Dummy_3243,Dummy_3243,Dummy_3243))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3238,Dummy_3238,Dummy_3238,Dummy_3238),_mm256_set_pd(Dummy_3238,Dummy_3238,Dummy_3238,Dummy_3238))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3239,Dummy_3239,Dummy_3239,Dummy_3239),_mm256_set_pd(Dummy_3239,Dummy_3239,Dummy_3239,Dummy_3239)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3240,Dummy_3240,Dummy_3240,Dummy_3240),_mm256_set_pd(Dummy_3240,Dummy_3240,Dummy_3240,Dummy_3240)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3241,Dummy_3241,Dummy_3241,Dummy_3241)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3242,Dummy_3242,Dummy_3242,Dummy_3242))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3243,Dummy_3243,Dummy_3243,Dummy_3243))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_3_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3241,Dummy_3241,Dummy_3241,Dummy_3241),_mm256_set_pd(Dummy_3241,Dummy_3241,Dummy_3241,Dummy_3241))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3242,Dummy_3242,Dummy_3242,Dummy_3242),_mm256_set_pd(Dummy_3242,Dummy_3242,Dummy_3242,Dummy_3242)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3243,Dummy_3243,Dummy_3243,Dummy_3243),_mm256_set_pd(Dummy_3243,Dummy_3243,Dummy_3243,Dummy_3243)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,res_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,res_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,res_tmp_0_3);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,res_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,res_tmp_1_3);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,res_tmp_2_3);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,res_tmp_3_3);
                }
                __m256d q_acc_1_0 = q_acc_0_1;
                __m256d q_acc_2_0 = q_acc_0_2;
                __m256d q_acc_2_1 = q_acc_1_2;
                __m256d q_acc_3_0 = q_acc_0_3;
                __m256d q_acc_3_1 = q_acc_1_3;
                __m256d q_acc_3_2 = q_acc_2_3;
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_3_0,src_dof_0),_mm256_mul_pd(q_acc_3_1,src_dof_1)),_mm256_mul_pd(q_acc_3_2,src_dof_2)),_mm256_mul_pd(q_acc_3_3,src_dof_3));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_2 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_3 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_3_3 = 0.0;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                   const real_t tmp_q_2 = Dummy_3235*tmp_q_1;
                   const real_t tmp_q_3 = Dummy_3238*tmp_q_1;
                   const real_t tmp_q_4 = Dummy_3241*tmp_q_1;
                   const real_t tmp_q_6 = Dummy_3236*tmp_q_1;
                   const real_t tmp_q_7 = Dummy_3239*tmp_q_1;
                   const real_t tmp_q_8 = Dummy_3242*tmp_q_1;
                   const real_t tmp_q_10 = Dummy_3237*tmp_q_1;
                   const real_t tmp_q_11 = Dummy_3240*tmp_q_1;
                   const real_t tmp_q_12 = Dummy_3243*tmp_q_1;
                   const real_t tmp_q_13 = Dummy_3244*_data_q_w[q];
                   const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3245*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3246*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3247*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                   const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3245*tmp_q_2 + Dummy_3246*tmp_q_6 + Dummy_3247*tmp_q_10);
                   const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3245*tmp_q_3 + Dummy_3246*tmp_q_7 + Dummy_3247*tmp_q_11);
                   const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3245*tmp_q_4 + Dummy_3246*tmp_q_8 + Dummy_3247*tmp_q_12);
                   const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3235*Dummy_3235)*tmp_q_1 + (Dummy_3236*Dummy_3236)*tmp_q_1 + (Dummy_3237*Dummy_3237)*tmp_q_1);
                   const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3238*tmp_q_2 + Dummy_3239*tmp_q_6 + Dummy_3240*tmp_q_10);
                   const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3241*tmp_q_2 + Dummy_3242*tmp_q_6 + Dummy_3243*tmp_q_10);
                   const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3238*Dummy_3238)*tmp_q_1 + (Dummy_3239*Dummy_3239)*tmp_q_1 + (Dummy_3240*Dummy_3240)*tmp_q_1);
                   const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3241*tmp_q_3 + Dummy_3242*tmp_q_7 + Dummy_3243*tmp_q_11);
                   const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3241*Dummy_3241)*tmp_q_1 + (Dummy_3242*Dummy_3242)*tmp_q_1 + (Dummy_3243*Dummy_3243)*tmp_q_1);
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
                real_t q_acc_1_0 = q_acc_0_1;
                real_t q_acc_2_0 = q_acc_0_2;
                real_t q_acc_2_1 = q_acc_1_2;
                real_t q_acc_3_0 = q_acc_0_3;
                real_t q_acc_3_1 = q_acc_1_3;
                real_t q_acc_3_2 = q_acc_2_3;
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
                const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3;
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_q_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(k_dof_3,_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q])));
                   const __m256d tmp_q_2 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3269,Dummy_3269,Dummy_3269,Dummy_3269));
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3272,Dummy_3272,Dummy_3272,Dummy_3272));
                   const __m256d tmp_q_4 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3275,Dummy_3275,Dummy_3275,Dummy_3275));
                   const __m256d tmp_q_6 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3270,Dummy_3270,Dummy_3270,Dummy_3270));
                   const __m256d tmp_q_7 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3273,Dummy_3273,Dummy_3273,Dummy_3273));
                   const __m256d tmp_q_8 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3276,Dummy_3276,Dummy_3276,Dummy_3276));
                   const __m256d tmp_q_10 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3271,Dummy_3271,Dummy_3271,Dummy_3271));
                   const __m256d tmp_q_11 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3274,Dummy_3274,Dummy_3274,Dummy_3274));
                   const __m256d tmp_q_12 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3277,Dummy_3277,Dummy_3277,Dummy_3277));
                   const real_t tmp_q_13 = Dummy_3278*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_10,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3281,Dummy_3281,Dummy_3281,Dummy_3281)),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_4,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3279,Dummy_3279,Dummy_3279,Dummy_3279))),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3280,Dummy_3280,Dummy_3280,Dummy_3280))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3279,Dummy_3279,Dummy_3279,Dummy_3279)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3280,Dummy_3280,Dummy_3280,Dummy_3280))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3281,Dummy_3281,Dummy_3281,Dummy_3281))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3279,Dummy_3279,Dummy_3279,Dummy_3279)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3280,Dummy_3280,Dummy_3280,Dummy_3280))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3281,Dummy_3281,Dummy_3281,Dummy_3281))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_4,_mm256_set_pd(Dummy_3279,Dummy_3279,Dummy_3279,Dummy_3279)),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(Dummy_3280,Dummy_3280,Dummy_3280,Dummy_3280))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(Dummy_3281,Dummy_3281,Dummy_3281,Dummy_3281))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3269,Dummy_3269,Dummy_3269,Dummy_3269),_mm256_set_pd(Dummy_3269,Dummy_3269,Dummy_3269,Dummy_3269))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3270,Dummy_3270,Dummy_3270,Dummy_3270),_mm256_set_pd(Dummy_3270,Dummy_3270,Dummy_3270,Dummy_3270)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3271,Dummy_3271,Dummy_3271,Dummy_3271),_mm256_set_pd(Dummy_3271,Dummy_3271,Dummy_3271,Dummy_3271)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3272,Dummy_3272,Dummy_3272,Dummy_3272)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3273,Dummy_3273,Dummy_3273,Dummy_3273))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3274,Dummy_3274,Dummy_3274,Dummy_3274))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3275,Dummy_3275,Dummy_3275,Dummy_3275)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3276,Dummy_3276,Dummy_3276,Dummy_3276))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3277,Dummy_3277,Dummy_3277,Dummy_3277))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3272,Dummy_3272,Dummy_3272,Dummy_3272),_mm256_set_pd(Dummy_3272,Dummy_3272,Dummy_3272,Dummy_3272))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3273,Dummy_3273,Dummy_3273,Dummy_3273),_mm256_set_pd(Dummy_3273,Dummy_3273,Dummy_3273,Dummy_3273)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3274,Dummy_3274,Dummy_3274,Dummy_3274),_mm256_set_pd(Dummy_3274,Dummy_3274,Dummy_3274,Dummy_3274)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3275,Dummy_3275,Dummy_3275,Dummy_3275)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3276,Dummy_3276,Dummy_3276,Dummy_3276))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3277,Dummy_3277,Dummy_3277,Dummy_3277))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_3_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3275,Dummy_3275,Dummy_3275,Dummy_3275),_mm256_set_pd(Dummy_3275,Dummy_3275,Dummy_3275,Dummy_3275))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3276,Dummy_3276,Dummy_3276,Dummy_3276),_mm256_set_pd(Dummy_3276,Dummy_3276,Dummy_3276,Dummy_3276)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3277,Dummy_3277,Dummy_3277,Dummy_3277),_mm256_set_pd(Dummy_3277,Dummy_3277,Dummy_3277,Dummy_3277)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,res_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,res_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,res_tmp_0_3);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,res_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,res_tmp_1_3);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,res_tmp_2_3);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,res_tmp_3_3);
                }
                __m256d q_acc_1_0 = q_acc_0_1;
                __m256d q_acc_2_0 = q_acc_0_2;
                __m256d q_acc_2_1 = q_acc_1_2;
                __m256d q_acc_3_0 = q_acc_0_3;
                __m256d q_acc_3_1 = q_acc_1_3;
                __m256d q_acc_3_2 = q_acc_2_3;
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_3_0,src_dof_0),_mm256_mul_pd(q_acc_3_1,src_dof_1)),_mm256_mul_pd(q_acc_3_2,src_dof_2)),_mm256_mul_pd(q_acc_3_3,src_dof_3));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_1 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_2 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_3 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_0 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_3_3 = 0.0;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                   const real_t tmp_q_2 = Dummy_3269*tmp_q_1;
                   const real_t tmp_q_3 = Dummy_3272*tmp_q_1;
                   const real_t tmp_q_4 = Dummy_3275*tmp_q_1;
                   const real_t tmp_q_6 = Dummy_3270*tmp_q_1;
                   const real_t tmp_q_7 = Dummy_3273*tmp_q_1;
                   const real_t tmp_q_8 = Dummy_3276*tmp_q_1;
                   const real_t tmp_q_10 = Dummy_3271*tmp_q_1;
                   const real_t tmp_q_11 = Dummy_3274*tmp_q_1;
                   const real_t tmp_q_12 = Dummy_3277*tmp_q_1;
                   const real_t tmp_q_13 = Dummy_3278*_data_q_w[q];
                   const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3279*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3280*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3281*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                   const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3279*tmp_q_2 + Dummy_3280*tmp_q_6 + Dummy_3281*tmp_q_10);
                   const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3279*tmp_q_3 + Dummy_3280*tmp_q_7 + Dummy_3281*tmp_q_11);
                   const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3279*tmp_q_4 + Dummy_3280*tmp_q_8 + Dummy_3281*tmp_q_12);
                   const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3269*Dummy_3269)*tmp_q_1 + (Dummy_3270*Dummy_3270)*tmp_q_1 + (Dummy_3271*Dummy_3271)*tmp_q_1);
                   const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3272*tmp_q_2 + Dummy_3273*tmp_q_6 + Dummy_3274*tmp_q_10);
                   const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3275*tmp_q_2 + Dummy_3276*tmp_q_6 + Dummy_3277*tmp_q_10);
                   const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3272*Dummy_3272)*tmp_q_1 + (Dummy_3273*Dummy_3273)*tmp_q_1 + (Dummy_3274*Dummy_3274)*tmp_q_1);
                   const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3275*tmp_q_3 + Dummy_3276*tmp_q_7 + Dummy_3277*tmp_q_11);
                   const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3275*Dummy_3275)*tmp_q_1 + (Dummy_3276*Dummy_3276)*tmp_q_1 + (Dummy_3277*Dummy_3277)*tmp_q_1);
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
                real_t q_acc_1_0 = q_acc_0_1;
                real_t q_acc_2_0 = q_acc_0_2;
                real_t q_acc_2_1 = q_acc_1_2;
                real_t q_acc_3_0 = q_acc_0_3;
                real_t q_acc_3_1 = q_acc_1_3;
                real_t q_acc_3_2 = q_acc_2_3;
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
                const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3;
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_q_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(k_dof_3,_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q])));
                   const __m256d tmp_q_2 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3303,Dummy_3303,Dummy_3303,Dummy_3303));
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3306,Dummy_3306,Dummy_3306,Dummy_3306));
                   const __m256d tmp_q_4 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3309,Dummy_3309,Dummy_3309,Dummy_3309));
                   const __m256d tmp_q_6 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3304,Dummy_3304,Dummy_3304,Dummy_3304));
                   const __m256d tmp_q_7 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3307,Dummy_3307,Dummy_3307,Dummy_3307));
                   const __m256d tmp_q_8 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3310,Dummy_3310,Dummy_3310,Dummy_3310));
                   const __m256d tmp_q_10 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3305,Dummy_3305,Dummy_3305,Dummy_3305));
                   const __m256d tmp_q_11 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3308,Dummy_3308,Dummy_3308,Dummy_3308));
                   const __m256d tmp_q_12 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3311,Dummy_3311,Dummy_3311,Dummy_3311));
                   const real_t tmp_q_13 = Dummy_3312*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_10,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3315,Dummy_3315,Dummy_3315,Dummy_3315)),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_4,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3313,Dummy_3313,Dummy_3313,Dummy_3313))),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3314,Dummy_3314,Dummy_3314,Dummy_3314))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3313,Dummy_3313,Dummy_3313,Dummy_3313)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3314,Dummy_3314,Dummy_3314,Dummy_3314))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3315,Dummy_3315,Dummy_3315,Dummy_3315))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3313,Dummy_3313,Dummy_3313,Dummy_3313)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3314,Dummy_3314,Dummy_3314,Dummy_3314))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3315,Dummy_3315,Dummy_3315,Dummy_3315))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_4,_mm256_set_pd(Dummy_3313,Dummy_3313,Dummy_3313,Dummy_3313)),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(Dummy_3314,Dummy_3314,Dummy_3314,Dummy_3314))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(Dummy_3315,Dummy_3315,Dummy_3315,Dummy_3315))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3303,Dummy_3303,Dummy_3303,Dummy_3303),_mm256_set_pd(Dummy_3303,Dummy_3303,Dummy_3303,Dummy_3303))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3304,Dummy_3304,Dummy_3304,Dummy_3304),_mm256_set_pd(Dummy_3304,Dummy_3304,Dummy_3304,Dummy_3304)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3305,Dummy_3305,Dummy_3305,Dummy_3305),_mm256_set_pd(Dummy_3305,Dummy_3305,Dummy_3305,Dummy_3305)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3306,Dummy_3306,Dummy_3306,Dummy_3306)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3307,Dummy_3307,Dummy_3307,Dummy_3307))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3308,Dummy_3308,Dummy_3308,Dummy_3308))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3309,Dummy_3309,Dummy_3309,Dummy_3309)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3310,Dummy_3310,Dummy_3310,Dummy_3310))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3311,Dummy_3311,Dummy_3311,Dummy_3311))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3306,Dummy_3306,Dummy_3306,Dummy_3306),_mm256_set_pd(Dummy_3306,Dummy_3306,Dummy_3306,Dummy_3306))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3307,Dummy_3307,Dummy_3307,Dummy_3307),_mm256_set_pd(Dummy_3307,Dummy_3307,Dummy_3307,Dummy_3307)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3308,Dummy_3308,Dummy_3308,Dummy_3308),_mm256_set_pd(Dummy_3308,Dummy_3308,Dummy_3308,Dummy_3308)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3309,Dummy_3309,Dummy_3309,Dummy_3309)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3310,Dummy_3310,Dummy_3310,Dummy_3310))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3311,Dummy_3311,Dummy_3311,Dummy_3311))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_3_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3309,Dummy_3309,Dummy_3309,Dummy_3309),_mm256_set_pd(Dummy_3309,Dummy_3309,Dummy_3309,Dummy_3309))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3310,Dummy_3310,Dummy_3310,Dummy_3310),_mm256_set_pd(Dummy_3310,Dummy_3310,Dummy_3310,Dummy_3310)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3311,Dummy_3311,Dummy_3311,Dummy_3311),_mm256_set_pd(Dummy_3311,Dummy_3311,Dummy_3311,Dummy_3311)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,res_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,res_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,res_tmp_0_3);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,res_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,res_tmp_1_3);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,res_tmp_2_3);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,res_tmp_3_3);
                }
                __m256d q_acc_1_0 = q_acc_0_1;
                __m256d q_acc_2_0 = q_acc_0_2;
                __m256d q_acc_2_1 = q_acc_1_2;
                __m256d q_acc_3_0 = q_acc_0_3;
                __m256d q_acc_3_1 = q_acc_1_3;
                __m256d q_acc_3_2 = q_acc_2_3;
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_3_0,src_dof_0),_mm256_mul_pd(q_acc_3_1,src_dof_1)),_mm256_mul_pd(q_acc_3_2,src_dof_2)),_mm256_mul_pd(q_acc_3_3,src_dof_3));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_2 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_3 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_0 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_3_3 = 0.0;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                   const real_t tmp_q_2 = Dummy_3303*tmp_q_1;
                   const real_t tmp_q_3 = Dummy_3306*tmp_q_1;
                   const real_t tmp_q_4 = Dummy_3309*tmp_q_1;
                   const real_t tmp_q_6 = Dummy_3304*tmp_q_1;
                   const real_t tmp_q_7 = Dummy_3307*tmp_q_1;
                   const real_t tmp_q_8 = Dummy_3310*tmp_q_1;
                   const real_t tmp_q_10 = Dummy_3305*tmp_q_1;
                   const real_t tmp_q_11 = Dummy_3308*tmp_q_1;
                   const real_t tmp_q_12 = Dummy_3311*tmp_q_1;
                   const real_t tmp_q_13 = Dummy_3312*_data_q_w[q];
                   const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3313*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3314*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3315*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                   const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3313*tmp_q_2 + Dummy_3314*tmp_q_6 + Dummy_3315*tmp_q_10);
                   const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3313*tmp_q_3 + Dummy_3314*tmp_q_7 + Dummy_3315*tmp_q_11);
                   const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3313*tmp_q_4 + Dummy_3314*tmp_q_8 + Dummy_3315*tmp_q_12);
                   const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3303*Dummy_3303)*tmp_q_1 + (Dummy_3304*Dummy_3304)*tmp_q_1 + (Dummy_3305*Dummy_3305)*tmp_q_1);
                   const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3306*tmp_q_2 + Dummy_3307*tmp_q_6 + Dummy_3308*tmp_q_10);
                   const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3309*tmp_q_2 + Dummy_3310*tmp_q_6 + Dummy_3311*tmp_q_10);
                   const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3306*Dummy_3306)*tmp_q_1 + (Dummy_3307*Dummy_3307)*tmp_q_1 + (Dummy_3308*Dummy_3308)*tmp_q_1);
                   const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3309*tmp_q_3 + Dummy_3310*tmp_q_7 + Dummy_3311*tmp_q_11);
                   const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3309*Dummy_3309)*tmp_q_1 + (Dummy_3310*Dummy_3310)*tmp_q_1 + (Dummy_3311*Dummy_3311)*tmp_q_1);
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
                real_t q_acc_1_0 = q_acc_0_1;
                real_t q_acc_2_0 = q_acc_0_2;
                real_t q_acc_2_1 = q_acc_1_2;
                real_t q_acc_3_0 = q_acc_0_3;
                real_t q_acc_3_1 = q_acc_1_3;
                real_t q_acc_3_2 = q_acc_2_3;
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
                const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3;
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             }
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d src_dof_0 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d src_dof_1 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d src_dof_2 = _mm256_loadu_pd(& _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d src_dof_3 = _mm256_loadu_pd(& _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_1 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_2 = _mm256_loadu_pd(& _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]);
                const __m256d k_dof_3 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]);
                const __m256d k_dof_0 = _mm256_loadu_pd(& _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]);
                __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_0_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_1_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_2_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const __m256d tmp_q_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(k_dof_0,_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0))),_mm256_mul_pd(k_dof_1,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(k_dof_2,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(k_dof_3,_mm256_set_pd(_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q],_data_q_p_2[q])));
                   const __m256d tmp_q_2 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3337,Dummy_3337,Dummy_3337,Dummy_3337));
                   const __m256d tmp_q_3 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3340,Dummy_3340,Dummy_3340,Dummy_3340));
                   const __m256d tmp_q_4 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3343,Dummy_3343,Dummy_3343,Dummy_3343));
                   const __m256d tmp_q_6 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3338,Dummy_3338,Dummy_3338,Dummy_3338));
                   const __m256d tmp_q_7 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3341,Dummy_3341,Dummy_3341,Dummy_3341));
                   const __m256d tmp_q_8 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3344,Dummy_3344,Dummy_3344,Dummy_3344));
                   const __m256d tmp_q_10 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3339,Dummy_3339,Dummy_3339,Dummy_3339));
                   const __m256d tmp_q_11 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3342,Dummy_3342,Dummy_3342,Dummy_3342));
                   const __m256d tmp_q_12 = _mm256_mul_pd(tmp_q_1,_mm256_set_pd(Dummy_3345,Dummy_3345,Dummy_3345,Dummy_3345));
                   const real_t tmp_q_13 = Dummy_3346*_data_q_w[q];
                   const __m256d res_tmp_0_0 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_10,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3349,Dummy_3349,Dummy_3349,Dummy_3349)),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_3,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_4,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3347,Dummy_3347,Dummy_3347,Dummy_3347))),_mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_set_pd(Dummy_3348,Dummy_3348,Dummy_3348,Dummy_3348))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3347,Dummy_3347,Dummy_3347,Dummy_3347)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3348,Dummy_3348,Dummy_3348,Dummy_3348))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3349,Dummy_3349,Dummy_3349,Dummy_3349))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3347,Dummy_3347,Dummy_3347,Dummy_3347)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3348,Dummy_3348,Dummy_3348,Dummy_3348))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3349,Dummy_3349,Dummy_3349,Dummy_3349))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_0_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_4,_mm256_set_pd(Dummy_3347,Dummy_3347,Dummy_3347,Dummy_3347)),_mm256_mul_pd(tmp_q_8,_mm256_set_pd(Dummy_3348,Dummy_3348,Dummy_3348,Dummy_3348))),_mm256_mul_pd(tmp_q_12,_mm256_set_pd(Dummy_3349,Dummy_3349,Dummy_3349,Dummy_3349))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_1 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3337,Dummy_3337,Dummy_3337,Dummy_3337),_mm256_set_pd(Dummy_3337,Dummy_3337,Dummy_3337,Dummy_3337))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3338,Dummy_3338,Dummy_3338,Dummy_3338),_mm256_set_pd(Dummy_3338,Dummy_3338,Dummy_3338,Dummy_3338)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3339,Dummy_3339,Dummy_3339,Dummy_3339),_mm256_set_pd(Dummy_3339,Dummy_3339,Dummy_3339,Dummy_3339)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3340,Dummy_3340,Dummy_3340,Dummy_3340)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3341,Dummy_3341,Dummy_3341,Dummy_3341))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3342,Dummy_3342,Dummy_3342,Dummy_3342))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_1_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_2,_mm256_set_pd(Dummy_3343,Dummy_3343,Dummy_3343,Dummy_3343)),_mm256_mul_pd(tmp_q_6,_mm256_set_pd(Dummy_3344,Dummy_3344,Dummy_3344,Dummy_3344))),_mm256_mul_pd(tmp_q_10,_mm256_set_pd(Dummy_3345,Dummy_3345,Dummy_3345,Dummy_3345))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_2 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3340,Dummy_3340,Dummy_3340,Dummy_3340),_mm256_set_pd(Dummy_3340,Dummy_3340,Dummy_3340,Dummy_3340))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3341,Dummy_3341,Dummy_3341,Dummy_3341),_mm256_set_pd(Dummy_3341,Dummy_3341,Dummy_3341,Dummy_3341)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3342,Dummy_3342,Dummy_3342,Dummy_3342),_mm256_set_pd(Dummy_3342,Dummy_3342,Dummy_3342,Dummy_3342)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_2_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_3,_mm256_set_pd(Dummy_3343,Dummy_3343,Dummy_3343,Dummy_3343)),_mm256_mul_pd(tmp_q_7,_mm256_set_pd(Dummy_3344,Dummy_3344,Dummy_3344,Dummy_3344))),_mm256_mul_pd(tmp_q_11,_mm256_set_pd(Dummy_3345,Dummy_3345,Dummy_3345,Dummy_3345))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   const __m256d res_tmp_3_3 = _mm256_mul_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3343,Dummy_3343,Dummy_3343,Dummy_3343),_mm256_set_pd(Dummy_3343,Dummy_3343,Dummy_3343,Dummy_3343))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3344,Dummy_3344,Dummy_3344,Dummy_3344),_mm256_set_pd(Dummy_3344,Dummy_3344,Dummy_3344,Dummy_3344)))),_mm256_mul_pd(tmp_q_1,_mm256_mul_pd(_mm256_set_pd(Dummy_3345,Dummy_3345,Dummy_3345,Dummy_3345),_mm256_set_pd(Dummy_3345,Dummy_3345,Dummy_3345,Dummy_3345)))),_mm256_set_pd(tmp_q_13,tmp_q_13,tmp_q_13,tmp_q_13));
                   q_acc_0_0 = _mm256_add_pd(q_acc_0_0,res_tmp_0_0);
                   q_acc_0_1 = _mm256_add_pd(q_acc_0_1,res_tmp_0_1);
                   q_acc_0_2 = _mm256_add_pd(q_acc_0_2,res_tmp_0_2);
                   q_acc_0_3 = _mm256_add_pd(q_acc_0_3,res_tmp_0_3);
                   q_acc_1_1 = _mm256_add_pd(q_acc_1_1,res_tmp_1_1);
                   q_acc_1_2 = _mm256_add_pd(q_acc_1_2,res_tmp_1_2);
                   q_acc_1_3 = _mm256_add_pd(q_acc_1_3,res_tmp_1_3);
                   q_acc_2_2 = _mm256_add_pd(q_acc_2_2,res_tmp_2_2);
                   q_acc_2_3 = _mm256_add_pd(q_acc_2_3,res_tmp_2_3);
                   q_acc_3_3 = _mm256_add_pd(q_acc_3_3,res_tmp_3_3);
                }
                __m256d q_acc_1_0 = q_acc_0_1;
                __m256d q_acc_2_0 = q_acc_0_2;
                __m256d q_acc_2_1 = q_acc_1_2;
                __m256d q_acc_3_0 = q_acc_0_3;
                __m256d q_acc_3_1 = q_acc_1_3;
                __m256d q_acc_3_2 = q_acc_2_3;
                const __m256d elMatVec_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_0_0,src_dof_0),_mm256_mul_pd(q_acc_0_1,src_dof_1)),_mm256_mul_pd(q_acc_0_2,src_dof_2)),_mm256_mul_pd(q_acc_0_3,src_dof_3));
                const __m256d elMatVec_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_1_0,src_dof_0),_mm256_mul_pd(q_acc_1_1,src_dof_1)),_mm256_mul_pd(q_acc_1_2,src_dof_2)),_mm256_mul_pd(q_acc_1_3,src_dof_3));
                const __m256d elMatVec_2 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_2_0,src_dof_0),_mm256_mul_pd(q_acc_2_1,src_dof_1)),_mm256_mul_pd(q_acc_2_2,src_dof_2)),_mm256_mul_pd(q_acc_2_3,src_dof_3));
                const __m256d elMatVec_3 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(q_acc_3_0,src_dof_0),_mm256_mul_pd(q_acc_3_1,src_dof_1)),_mm256_mul_pd(q_acc_3_2,src_dof_2)),_mm256_mul_pd(q_acc_3_3,src_dof_3));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_0,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_1,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1],_mm256_add_pd(elMatVec_2,_mm256_loadu_pd(& _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1])));
                _mm256_storeu_pd(&_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))],_mm256_add_pd(elMatVec_3,_mm256_loadu_pd(& _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))])));
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
             {
                const real_t src_dof_0 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                const real_t src_dof_1 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t src_dof_2 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t src_dof_3 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_1 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_2 = _data_k[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                const real_t k_dof_3 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                const real_t k_dof_0 = _data_k[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                real_t q_acc_0_0 = 0.0;
                real_t q_acc_0_1 = 0.0;
                real_t q_acc_0_2 = 0.0;
                real_t q_acc_0_3 = 0.0;
                real_t q_acc_1_1 = 0.0;
                real_t q_acc_1_2 = 0.0;
                real_t q_acc_1_3 = 0.0;
                real_t q_acc_2_2 = 0.0;
                real_t q_acc_2_3 = 0.0;
                real_t q_acc_3_3 = 0.0;
                for (int64_t q = 0; q < 4; q += 1)
                {
                   const real_t tmp_q_1 = k_dof_0*(1.0 - _data_q_p_0[q] - _data_q_p_1[q] - _data_q_p_2[q]) + k_dof_1*_data_q_p_0[q] + k_dof_2*_data_q_p_1[q] + k_dof_3*_data_q_p_2[q];
                   const real_t tmp_q_2 = Dummy_3337*tmp_q_1;
                   const real_t tmp_q_3 = Dummy_3340*tmp_q_1;
                   const real_t tmp_q_4 = Dummy_3343*tmp_q_1;
                   const real_t tmp_q_6 = Dummy_3338*tmp_q_1;
                   const real_t tmp_q_7 = Dummy_3341*tmp_q_1;
                   const real_t tmp_q_8 = Dummy_3344*tmp_q_1;
                   const real_t tmp_q_10 = Dummy_3339*tmp_q_1;
                   const real_t tmp_q_11 = Dummy_3342*tmp_q_1;
                   const real_t tmp_q_12 = Dummy_3345*tmp_q_1;
                   const real_t tmp_q_13 = Dummy_3346*_data_q_w[q];
                   const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3347*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3348*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3349*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                   const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3347*tmp_q_2 + Dummy_3348*tmp_q_6 + Dummy_3349*tmp_q_10);
                   const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3347*tmp_q_3 + Dummy_3348*tmp_q_7 + Dummy_3349*tmp_q_11);
                   const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3347*tmp_q_4 + Dummy_3348*tmp_q_8 + Dummy_3349*tmp_q_12);
                   const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3337*Dummy_3337)*tmp_q_1 + (Dummy_3338*Dummy_3338)*tmp_q_1 + (Dummy_3339*Dummy_3339)*tmp_q_1);
                   const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3340*tmp_q_2 + Dummy_3341*tmp_q_6 + Dummy_3342*tmp_q_10);
                   const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3343*tmp_q_2 + Dummy_3344*tmp_q_6 + Dummy_3345*tmp_q_10);
                   const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3340*Dummy_3340)*tmp_q_1 + (Dummy_3341*Dummy_3341)*tmp_q_1 + (Dummy_3342*Dummy_3342)*tmp_q_1);
                   const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3343*tmp_q_3 + Dummy_3344*tmp_q_7 + Dummy_3345*tmp_q_11);
                   const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3343*Dummy_3343)*tmp_q_1 + (Dummy_3344*Dummy_3344)*tmp_q_1 + (Dummy_3345*Dummy_3345)*tmp_q_1);
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
                real_t q_acc_1_0 = q_acc_0_1;
                real_t q_acc_2_0 = q_acc_0_2;
                real_t q_acc_2_1 = q_acc_1_2;
                real_t q_acc_3_0 = q_acc_0_3;
                real_t q_acc_3_1 = q_acc_1_3;
                real_t q_acc_3_2 = q_acc_2_3;
                const real_t elMatVec_0 = q_acc_0_0*src_dof_0 + q_acc_0_1*src_dof_1 + q_acc_0_2*src_dof_2 + q_acc_0_3*src_dof_3;
                const real_t elMatVec_1 = q_acc_1_0*src_dof_0 + q_acc_1_1*src_dof_1 + q_acc_1_2*src_dof_2 + q_acc_1_3*src_dof_3;
                const real_t elMatVec_2 = q_acc_2_0*src_dof_0 + q_acc_2_1*src_dof_1 + q_acc_2_2*src_dof_2 + q_acc_2_3*src_dof_3;
                const real_t elMatVec_3 = q_acc_3_0*src_dof_0 + q_acc_3_1*src_dof_1 + q_acc_3_2*src_dof_2 + q_acc_3_3*src_dof_3;
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_2 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
