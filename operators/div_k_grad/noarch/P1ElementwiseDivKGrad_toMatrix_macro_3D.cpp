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

void P1ElementwiseDivKGrad::toMatrix_macro_3D( idx_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_k, idx_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t Dummy_3501 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3502 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3503 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3504 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3505 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3506 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3507 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3508 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3509 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3510 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3511 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3512 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3513 = -Dummy_3501 + Dummy_3504;
       const real_t Dummy_3514 = -Dummy_3501 + Dummy_3507;
       const real_t Dummy_3515 = -Dummy_3501 + Dummy_3510;
       const real_t Dummy_3516 = -Dummy_3502 + Dummy_3505;
       const real_t Dummy_3517 = -Dummy_3502 + Dummy_3508;
       const real_t Dummy_3518 = -Dummy_3502 + Dummy_3511;
       const real_t Dummy_3519 = -Dummy_3503 + Dummy_3506;
       const real_t Dummy_3520 = -Dummy_3503 + Dummy_3509;
       const real_t Dummy_3521 = -Dummy_3503 + Dummy_3512;
       const real_t Dummy_3522 = (Dummy_3517*Dummy_3521 - Dummy_3518*Dummy_3520)*1.0 / (Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3523 = (-Dummy_3514*Dummy_3521 + Dummy_3515*Dummy_3520)*1.0 / (Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3524 = (Dummy_3514*Dummy_3518 - Dummy_3515*Dummy_3517)*1.0 / (Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3525 = (-Dummy_3516*Dummy_3521 + Dummy_3518*Dummy_3519)*1.0 / (Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3526 = (Dummy_3513*Dummy_3521 - Dummy_3515*Dummy_3519)*1.0 / (Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3527 = (-Dummy_3513*Dummy_3518 + Dummy_3515*Dummy_3516)*1.0 / (Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3528 = (Dummy_3516*Dummy_3520 - Dummy_3517*Dummy_3519)*1.0 / (Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3529 = (-Dummy_3513*Dummy_3520 + Dummy_3514*Dummy_3519)*1.0 / (Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3530 = (Dummy_3513*Dummy_3517 - Dummy_3514*Dummy_3516)*1.0 / (Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3531 = abs(Dummy_3513*Dummy_3517*Dummy_3521 - Dummy_3513*Dummy_3518*Dummy_3520 - Dummy_3514*Dummy_3516*Dummy_3521 + Dummy_3514*Dummy_3518*Dummy_3519 + Dummy_3515*Dummy_3516*Dummy_3520 - Dummy_3515*Dummy_3517*Dummy_3519);
       const real_t Dummy_3532 = -Dummy_3522 - Dummy_3525 - Dummy_3528;
       const real_t Dummy_3533 = -Dummy_3523 - Dummy_3526 - Dummy_3529;
       const real_t Dummy_3534 = -Dummy_3524 - Dummy_3527 - Dummy_3530;
       const real_t Dummy_3535 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t Dummy_3536 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t Dummy_3537 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const real_t Dummy_3538 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3539 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3540 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3541 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3542 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3543 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3544 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3545 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3546 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3547 = -Dummy_3535 + Dummy_3538;
       const real_t Dummy_3548 = -Dummy_3535 + Dummy_3541;
       const real_t Dummy_3549 = -Dummy_3535 + Dummy_3544;
       const real_t Dummy_3550 = -Dummy_3536 + Dummy_3539;
       const real_t Dummy_3551 = -Dummy_3536 + Dummy_3542;
       const real_t Dummy_3552 = -Dummy_3536 + Dummy_3545;
       const real_t Dummy_3553 = -Dummy_3537 + Dummy_3540;
       const real_t Dummy_3554 = -Dummy_3537 + Dummy_3543;
       const real_t Dummy_3555 = -Dummy_3537 + Dummy_3546;
       const real_t Dummy_3556 = (Dummy_3551*Dummy_3555 - Dummy_3552*Dummy_3554)*1.0 / (Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3557 = (-Dummy_3548*Dummy_3555 + Dummy_3549*Dummy_3554)*1.0 / (Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3558 = (Dummy_3548*Dummy_3552 - Dummy_3549*Dummy_3551)*1.0 / (Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3559 = (-Dummy_3550*Dummy_3555 + Dummy_3552*Dummy_3553)*1.0 / (Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3560 = (Dummy_3547*Dummy_3555 - Dummy_3549*Dummy_3553)*1.0 / (Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3561 = (-Dummy_3547*Dummy_3552 + Dummy_3549*Dummy_3550)*1.0 / (Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3562 = (Dummy_3550*Dummy_3554 - Dummy_3551*Dummy_3553)*1.0 / (Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3563 = (-Dummy_3547*Dummy_3554 + Dummy_3548*Dummy_3553)*1.0 / (Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3564 = (Dummy_3547*Dummy_3551 - Dummy_3548*Dummy_3550)*1.0 / (Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3565 = abs(Dummy_3547*Dummy_3551*Dummy_3555 - Dummy_3547*Dummy_3552*Dummy_3554 - Dummy_3548*Dummy_3550*Dummy_3555 + Dummy_3548*Dummy_3552*Dummy_3553 + Dummy_3549*Dummy_3550*Dummy_3554 - Dummy_3549*Dummy_3551*Dummy_3553);
       const real_t Dummy_3566 = -Dummy_3556 - Dummy_3559 - Dummy_3562;
       const real_t Dummy_3567 = -Dummy_3557 - Dummy_3560 - Dummy_3563;
       const real_t Dummy_3568 = -Dummy_3558 - Dummy_3561 - Dummy_3564;
       const real_t Dummy_3569 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3570 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3571 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3572 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3573 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3574 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3575 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3576 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3577 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3578 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3579 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3580 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3581 = -Dummy_3569 + Dummy_3572;
       const real_t Dummy_3582 = -Dummy_3569 + Dummy_3575;
       const real_t Dummy_3583 = -Dummy_3569 + Dummy_3578;
       const real_t Dummy_3584 = -Dummy_3570 + Dummy_3573;
       const real_t Dummy_3585 = -Dummy_3570 + Dummy_3576;
       const real_t Dummy_3586 = -Dummy_3570 + Dummy_3579;
       const real_t Dummy_3587 = -Dummy_3571 + Dummy_3574;
       const real_t Dummy_3588 = -Dummy_3571 + Dummy_3577;
       const real_t Dummy_3589 = -Dummy_3571 + Dummy_3580;
       const real_t Dummy_3590 = (Dummy_3585*Dummy_3589 - Dummy_3586*Dummy_3588)*1.0 / (Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3591 = (-Dummy_3582*Dummy_3589 + Dummy_3583*Dummy_3588)*1.0 / (Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3592 = (Dummy_3582*Dummy_3586 - Dummy_3583*Dummy_3585)*1.0 / (Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3593 = (-Dummy_3584*Dummy_3589 + Dummy_3586*Dummy_3587)*1.0 / (Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3594 = (Dummy_3581*Dummy_3589 - Dummy_3583*Dummy_3587)*1.0 / (Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3595 = (-Dummy_3581*Dummy_3586 + Dummy_3583*Dummy_3584)*1.0 / (Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3596 = (Dummy_3584*Dummy_3588 - Dummy_3585*Dummy_3587)*1.0 / (Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3597 = (-Dummy_3581*Dummy_3588 + Dummy_3582*Dummy_3587)*1.0 / (Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3598 = (Dummy_3581*Dummy_3585 - Dummy_3582*Dummy_3584)*1.0 / (Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3599 = abs(Dummy_3581*Dummy_3585*Dummy_3589 - Dummy_3581*Dummy_3586*Dummy_3588 - Dummy_3582*Dummy_3584*Dummy_3589 + Dummy_3582*Dummy_3586*Dummy_3587 + Dummy_3583*Dummy_3584*Dummy_3588 - Dummy_3583*Dummy_3585*Dummy_3587);
       const real_t Dummy_3600 = -Dummy_3590 - Dummy_3593 - Dummy_3596;
       const real_t Dummy_3601 = -Dummy_3591 - Dummy_3594 - Dummy_3597;
       const real_t Dummy_3602 = -Dummy_3592 - Dummy_3595 - Dummy_3598;
       const real_t Dummy_3603 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0;
       const real_t Dummy_3604 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0;
       const real_t Dummy_3605 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0;
       const real_t Dummy_3606 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3607 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3608 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3609 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3610 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3611 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3612 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3613 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3614 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3615 = -Dummy_3603 + Dummy_3606;
       const real_t Dummy_3616 = -Dummy_3603 + Dummy_3609;
       const real_t Dummy_3617 = -Dummy_3603 + Dummy_3612;
       const real_t Dummy_3618 = -Dummy_3604 + Dummy_3607;
       const real_t Dummy_3619 = -Dummy_3604 + Dummy_3610;
       const real_t Dummy_3620 = -Dummy_3604 + Dummy_3613;
       const real_t Dummy_3621 = -Dummy_3605 + Dummy_3608;
       const real_t Dummy_3622 = -Dummy_3605 + Dummy_3611;
       const real_t Dummy_3623 = -Dummy_3605 + Dummy_3614;
       const real_t Dummy_3624 = (Dummy_3619*Dummy_3623 - Dummy_3620*Dummy_3622)*1.0 / (Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3625 = (-Dummy_3616*Dummy_3623 + Dummy_3617*Dummy_3622)*1.0 / (Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3626 = (Dummy_3616*Dummy_3620 - Dummy_3617*Dummy_3619)*1.0 / (Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3627 = (-Dummy_3618*Dummy_3623 + Dummy_3620*Dummy_3621)*1.0 / (Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3628 = (Dummy_3615*Dummy_3623 - Dummy_3617*Dummy_3621)*1.0 / (Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3629 = (-Dummy_3615*Dummy_3620 + Dummy_3617*Dummy_3618)*1.0 / (Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3630 = (Dummy_3618*Dummy_3622 - Dummy_3619*Dummy_3621)*1.0 / (Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3631 = (-Dummy_3615*Dummy_3622 + Dummy_3616*Dummy_3621)*1.0 / (Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3632 = (Dummy_3615*Dummy_3619 - Dummy_3616*Dummy_3618)*1.0 / (Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3633 = abs(Dummy_3615*Dummy_3619*Dummy_3623 - Dummy_3615*Dummy_3620*Dummy_3622 - Dummy_3616*Dummy_3618*Dummy_3623 + Dummy_3616*Dummy_3620*Dummy_3621 + Dummy_3617*Dummy_3618*Dummy_3622 - Dummy_3617*Dummy_3619*Dummy_3621);
       const real_t Dummy_3634 = -Dummy_3624 - Dummy_3627 - Dummy_3630;
       const real_t Dummy_3635 = -Dummy_3625 - Dummy_3628 - Dummy_3631;
       const real_t Dummy_3636 = -Dummy_3626 - Dummy_3629 - Dummy_3632;
       const real_t Dummy_3637 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3638 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3639 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3640 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0;
       const real_t Dummy_3641 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0;
       const real_t Dummy_3642 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0;
       const real_t Dummy_3643 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3644 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3645 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3646 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0)*1.0;
       const real_t Dummy_3647 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1)*1.0;
       const real_t Dummy_3648 = macro_vertex_coord_id_0comp2 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2)*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2)*1.0;
       const real_t Dummy_3649 = -Dummy_3637 + Dummy_3640;
       const real_t Dummy_3650 = -Dummy_3637 + Dummy_3643;
       const real_t Dummy_3651 = -Dummy_3637 + Dummy_3646;
       const real_t Dummy_3652 = -Dummy_3638 + Dummy_3641;
       const real_t Dummy_3653 = -Dummy_3638 + Dummy_3644;
       const real_t Dummy_3654 = -Dummy_3638 + Dummy_3647;
       const real_t Dummy_3655 = -Dummy_3639 + Dummy_3642;
       const real_t Dummy_3656 = -Dummy_3639 + Dummy_3645;
       const real_t Dummy_3657 = -Dummy_3639 + Dummy_3648;
       const real_t Dummy_3658 = (Dummy_3653*Dummy_3657 - Dummy_3654*Dummy_3656)*1.0 / (Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3659 = (-Dummy_3650*Dummy_3657 + Dummy_3651*Dummy_3656)*1.0 / (Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3660 = (Dummy_3650*Dummy_3654 - Dummy_3651*Dummy_3653)*1.0 / (Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3661 = (-Dummy_3652*Dummy_3657 + Dummy_3654*Dummy_3655)*1.0 / (Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3662 = (Dummy_3649*Dummy_3657 - Dummy_3651*Dummy_3655)*1.0 / (Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3663 = (-Dummy_3649*Dummy_3654 + Dummy_3651*Dummy_3652)*1.0 / (Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3664 = (Dummy_3652*Dummy_3656 - Dummy_3653*Dummy_3655)*1.0 / (Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3665 = (-Dummy_3649*Dummy_3656 + Dummy_3650*Dummy_3655)*1.0 / (Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3666 = (Dummy_3649*Dummy_3653 - Dummy_3650*Dummy_3652)*1.0 / (Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3667 = abs(Dummy_3649*Dummy_3653*Dummy_3657 - Dummy_3649*Dummy_3654*Dummy_3656 - Dummy_3650*Dummy_3652*Dummy_3657 + Dummy_3650*Dummy_3654*Dummy_3655 + Dummy_3651*Dummy_3652*Dummy_3656 - Dummy_3651*Dummy_3653*Dummy_3655);
       const real_t Dummy_3668 = -Dummy_3658 - Dummy_3661 - Dummy_3664;
       const real_t Dummy_3669 = -Dummy_3659 - Dummy_3662 - Dummy_3665;
       const real_t Dummy_3670 = -Dummy_3660 - Dummy_3663 - Dummy_3666;
       {
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
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
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 4 );
             std::vector< real_t > _data_mat( 16 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_1_0));
             _data_mat[5] = ((real_t)(elMat_1_1));
             _data_mat[6] = ((real_t)(elMat_1_2));
             _data_mat[7] = ((real_t)(elMat_1_3));
             _data_mat[8] = ((real_t)(elMat_2_0));
             _data_mat[9] = ((real_t)(elMat_2_1));
             _data_mat[10] = ((real_t)(elMat_2_2));
             _data_mat[11] = ((real_t)(elMat_2_3));
             _data_mat[12] = ((real_t)(elMat_3_0));
             _data_mat[13] = ((real_t)(elMat_3_1));
             _data_mat[14] = ((real_t)(elMat_3_2));
             _data_mat[15] = ((real_t)(elMat_3_3));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
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
                const real_t tmp_q_2 = Dummy_3522*tmp_q_1;
                const real_t tmp_q_3 = Dummy_3525*tmp_q_1;
                const real_t tmp_q_4 = Dummy_3528*tmp_q_1;
                const real_t tmp_q_6 = Dummy_3523*tmp_q_1;
                const real_t tmp_q_7 = Dummy_3526*tmp_q_1;
                const real_t tmp_q_8 = Dummy_3529*tmp_q_1;
                const real_t tmp_q_10 = Dummy_3524*tmp_q_1;
                const real_t tmp_q_11 = Dummy_3527*tmp_q_1;
                const real_t tmp_q_12 = Dummy_3530*tmp_q_1;
                const real_t tmp_q_13 = Dummy_3531*_data_q_w[q];
                const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3532*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3533*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3534*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3532*tmp_q_2 + Dummy_3533*tmp_q_6 + Dummy_3534*tmp_q_10);
                const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3532*tmp_q_3 + Dummy_3533*tmp_q_7 + Dummy_3534*tmp_q_11);
                const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3532*tmp_q_4 + Dummy_3533*tmp_q_8 + Dummy_3534*tmp_q_12);
                const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3522*Dummy_3522)*tmp_q_1 + (Dummy_3523*Dummy_3523)*tmp_q_1 + (Dummy_3524*Dummy_3524)*tmp_q_1);
                const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3525*tmp_q_2 + Dummy_3526*tmp_q_6 + Dummy_3527*tmp_q_10);
                const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3528*tmp_q_2 + Dummy_3529*tmp_q_6 + Dummy_3530*tmp_q_10);
                const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3525*Dummy_3525)*tmp_q_1 + (Dummy_3526*Dummy_3526)*tmp_q_1 + (Dummy_3527*Dummy_3527)*tmp_q_1);
                const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3528*tmp_q_3 + Dummy_3529*tmp_q_7 + Dummy_3530*tmp_q_11);
                const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3528*Dummy_3528)*tmp_q_1 + (Dummy_3529*Dummy_3529)*tmp_q_1 + (Dummy_3530*Dummy_3530)*tmp_q_1);
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
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 4 );
             std::vector< real_t > _data_mat( 16 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_1_0));
             _data_mat[5] = ((real_t)(elMat_1_1));
             _data_mat[6] = ((real_t)(elMat_1_2));
             _data_mat[7] = ((real_t)(elMat_1_3));
             _data_mat[8] = ((real_t)(elMat_2_0));
             _data_mat[9] = ((real_t)(elMat_2_1));
             _data_mat[10] = ((real_t)(elMat_2_2));
             _data_mat[11] = ((real_t)(elMat_2_3));
             _data_mat[12] = ((real_t)(elMat_3_0));
             _data_mat[13] = ((real_t)(elMat_3_1));
             _data_mat[14] = ((real_t)(elMat_3_2));
             _data_mat[15] = ((real_t)(elMat_3_3));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
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
                const real_t tmp_q_2 = Dummy_3556*tmp_q_1;
                const real_t tmp_q_3 = Dummy_3559*tmp_q_1;
                const real_t tmp_q_4 = Dummy_3562*tmp_q_1;
                const real_t tmp_q_6 = Dummy_3557*tmp_q_1;
                const real_t tmp_q_7 = Dummy_3560*tmp_q_1;
                const real_t tmp_q_8 = Dummy_3563*tmp_q_1;
                const real_t tmp_q_10 = Dummy_3558*tmp_q_1;
                const real_t tmp_q_11 = Dummy_3561*tmp_q_1;
                const real_t tmp_q_12 = Dummy_3564*tmp_q_1;
                const real_t tmp_q_13 = Dummy_3565*_data_q_w[q];
                const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3566*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3567*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3568*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3566*tmp_q_2 + Dummy_3567*tmp_q_6 + Dummy_3568*tmp_q_10);
                const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3566*tmp_q_3 + Dummy_3567*tmp_q_7 + Dummy_3568*tmp_q_11);
                const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3566*tmp_q_4 + Dummy_3567*tmp_q_8 + Dummy_3568*tmp_q_12);
                const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3556*Dummy_3556)*tmp_q_1 + (Dummy_3557*Dummy_3557)*tmp_q_1 + (Dummy_3558*Dummy_3558)*tmp_q_1);
                const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3559*tmp_q_2 + Dummy_3560*tmp_q_6 + Dummy_3561*tmp_q_10);
                const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3562*tmp_q_2 + Dummy_3563*tmp_q_6 + Dummy_3564*tmp_q_10);
                const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3559*Dummy_3559)*tmp_q_1 + (Dummy_3560*Dummy_3560)*tmp_q_1 + (Dummy_3561*Dummy_3561)*tmp_q_1);
                const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3562*tmp_q_3 + Dummy_3563*tmp_q_7 + Dummy_3564*tmp_q_11);
                const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3562*Dummy_3562)*tmp_q_1 + (Dummy_3563*Dummy_3563)*tmp_q_1 + (Dummy_3564*Dummy_3564)*tmp_q_1);
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
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 4 );
             std::vector< real_t > _data_mat( 16 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_1_0));
             _data_mat[5] = ((real_t)(elMat_1_1));
             _data_mat[6] = ((real_t)(elMat_1_2));
             _data_mat[7] = ((real_t)(elMat_1_3));
             _data_mat[8] = ((real_t)(elMat_2_0));
             _data_mat[9] = ((real_t)(elMat_2_1));
             _data_mat[10] = ((real_t)(elMat_2_2));
             _data_mat[11] = ((real_t)(elMat_2_3));
             _data_mat[12] = ((real_t)(elMat_3_0));
             _data_mat[13] = ((real_t)(elMat_3_1));
             _data_mat[14] = ((real_t)(elMat_3_2));
             _data_mat[15] = ((real_t)(elMat_3_3));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
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
                const real_t tmp_q_2 = Dummy_3590*tmp_q_1;
                const real_t tmp_q_3 = Dummy_3593*tmp_q_1;
                const real_t tmp_q_4 = Dummy_3596*tmp_q_1;
                const real_t tmp_q_6 = Dummy_3591*tmp_q_1;
                const real_t tmp_q_7 = Dummy_3594*tmp_q_1;
                const real_t tmp_q_8 = Dummy_3597*tmp_q_1;
                const real_t tmp_q_10 = Dummy_3592*tmp_q_1;
                const real_t tmp_q_11 = Dummy_3595*tmp_q_1;
                const real_t tmp_q_12 = Dummy_3598*tmp_q_1;
                const real_t tmp_q_13 = Dummy_3599*_data_q_w[q];
                const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3600*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3601*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3602*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3600*tmp_q_2 + Dummy_3601*tmp_q_6 + Dummy_3602*tmp_q_10);
                const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3600*tmp_q_3 + Dummy_3601*tmp_q_7 + Dummy_3602*tmp_q_11);
                const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3600*tmp_q_4 + Dummy_3601*tmp_q_8 + Dummy_3602*tmp_q_12);
                const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3590*Dummy_3590)*tmp_q_1 + (Dummy_3591*Dummy_3591)*tmp_q_1 + (Dummy_3592*Dummy_3592)*tmp_q_1);
                const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3593*tmp_q_2 + Dummy_3594*tmp_q_6 + Dummy_3595*tmp_q_10);
                const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3596*tmp_q_2 + Dummy_3597*tmp_q_6 + Dummy_3598*tmp_q_10);
                const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3593*Dummy_3593)*tmp_q_1 + (Dummy_3594*Dummy_3594)*tmp_q_1 + (Dummy_3595*Dummy_3595)*tmp_q_1);
                const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3596*tmp_q_3 + Dummy_3597*tmp_q_7 + Dummy_3598*tmp_q_11);
                const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3596*Dummy_3596)*tmp_q_1 + (Dummy_3597*Dummy_3597)*tmp_q_1 + (Dummy_3598*Dummy_3598)*tmp_q_1);
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
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 4 );
             std::vector< real_t > _data_mat( 16 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_1_0));
             _data_mat[5] = ((real_t)(elMat_1_1));
             _data_mat[6] = ((real_t)(elMat_1_2));
             _data_mat[7] = ((real_t)(elMat_1_3));
             _data_mat[8] = ((real_t)(elMat_2_0));
             _data_mat[9] = ((real_t)(elMat_2_1));
             _data_mat[10] = ((real_t)(elMat_2_2));
             _data_mat[11] = ((real_t)(elMat_2_3));
             _data_mat[12] = ((real_t)(elMat_3_0));
             _data_mat[13] = ((real_t)(elMat_3_1));
             _data_mat[14] = ((real_t)(elMat_3_2));
             _data_mat[15] = ((real_t)(elMat_3_3));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
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
                const real_t tmp_q_2 = Dummy_3624*tmp_q_1;
                const real_t tmp_q_3 = Dummy_3627*tmp_q_1;
                const real_t tmp_q_4 = Dummy_3630*tmp_q_1;
                const real_t tmp_q_6 = Dummy_3625*tmp_q_1;
                const real_t tmp_q_7 = Dummy_3628*tmp_q_1;
                const real_t tmp_q_8 = Dummy_3631*tmp_q_1;
                const real_t tmp_q_10 = Dummy_3626*tmp_q_1;
                const real_t tmp_q_11 = Dummy_3629*tmp_q_1;
                const real_t tmp_q_12 = Dummy_3632*tmp_q_1;
                const real_t tmp_q_13 = Dummy_3633*_data_q_w[q];
                const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3634*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3635*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3636*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3634*tmp_q_2 + Dummy_3635*tmp_q_6 + Dummy_3636*tmp_q_10);
                const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3634*tmp_q_3 + Dummy_3635*tmp_q_7 + Dummy_3636*tmp_q_11);
                const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3634*tmp_q_4 + Dummy_3635*tmp_q_8 + Dummy_3636*tmp_q_12);
                const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3624*Dummy_3624)*tmp_q_1 + (Dummy_3625*Dummy_3625)*tmp_q_1 + (Dummy_3626*Dummy_3626)*tmp_q_1);
                const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3627*tmp_q_2 + Dummy_3628*tmp_q_6 + Dummy_3629*tmp_q_10);
                const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3630*tmp_q_2 + Dummy_3631*tmp_q_6 + Dummy_3632*tmp_q_10);
                const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3627*Dummy_3627)*tmp_q_1 + (Dummy_3628*Dummy_3628)*tmp_q_1 + (Dummy_3629*Dummy_3629)*tmp_q_1);
                const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3630*tmp_q_3 + Dummy_3631*tmp_q_7 + Dummy_3632*tmp_q_11);
                const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3630*Dummy_3630)*tmp_q_1 + (Dummy_3631*Dummy_3631)*tmp_q_1 + (Dummy_3632*Dummy_3632)*tmp_q_1);
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
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 4 );
             std::vector< real_t > _data_mat( 16 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_1_0));
             _data_mat[5] = ((real_t)(elMat_1_1));
             _data_mat[6] = ((real_t)(elMat_1_2));
             _data_mat[7] = ((real_t)(elMat_1_3));
             _data_mat[8] = ((real_t)(elMat_2_0));
             _data_mat[9] = ((real_t)(elMat_2_1));
             _data_mat[10] = ((real_t)(elMat_2_2));
             _data_mat[11] = ((real_t)(elMat_2_3));
             _data_mat[12] = ((real_t)(elMat_3_0));
             _data_mat[13] = ((real_t)(elMat_3_1));
             _data_mat[14] = ((real_t)(elMat_3_2));
             _data_mat[15] = ((real_t)(elMat_3_3));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
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
                const real_t tmp_q_2 = Dummy_3658*tmp_q_1;
                const real_t tmp_q_3 = Dummy_3661*tmp_q_1;
                const real_t tmp_q_4 = Dummy_3664*tmp_q_1;
                const real_t tmp_q_6 = Dummy_3659*tmp_q_1;
                const real_t tmp_q_7 = Dummy_3662*tmp_q_1;
                const real_t tmp_q_8 = Dummy_3665*tmp_q_1;
                const real_t tmp_q_10 = Dummy_3660*tmp_q_1;
                const real_t tmp_q_11 = Dummy_3663*tmp_q_1;
                const real_t tmp_q_12 = Dummy_3666*tmp_q_1;
                const real_t tmp_q_13 = Dummy_3667*_data_q_w[q];
                const real_t res_tmp_0_0 = tmp_q_13*(Dummy_3668*(-tmp_q_2 - tmp_q_3 - tmp_q_4) + Dummy_3669*(-tmp_q_6 - tmp_q_7 - tmp_q_8) + Dummy_3670*(-tmp_q_10 - tmp_q_11 - tmp_q_12));
                const real_t res_tmp_0_1 = tmp_q_13*(Dummy_3668*tmp_q_2 + Dummy_3669*tmp_q_6 + Dummy_3670*tmp_q_10);
                const real_t res_tmp_0_2 = tmp_q_13*(Dummy_3668*tmp_q_3 + Dummy_3669*tmp_q_7 + Dummy_3670*tmp_q_11);
                const real_t res_tmp_0_3 = tmp_q_13*(Dummy_3668*tmp_q_4 + Dummy_3669*tmp_q_8 + Dummy_3670*tmp_q_12);
                const real_t res_tmp_1_1 = tmp_q_13*((Dummy_3658*Dummy_3658)*tmp_q_1 + (Dummy_3659*Dummy_3659)*tmp_q_1 + (Dummy_3660*Dummy_3660)*tmp_q_1);
                const real_t res_tmp_1_2 = tmp_q_13*(Dummy_3661*tmp_q_2 + Dummy_3662*tmp_q_6 + Dummy_3663*tmp_q_10);
                const real_t res_tmp_1_3 = tmp_q_13*(Dummy_3664*tmp_q_2 + Dummy_3665*tmp_q_6 + Dummy_3666*tmp_q_10);
                const real_t res_tmp_2_2 = tmp_q_13*((Dummy_3661*Dummy_3661)*tmp_q_1 + (Dummy_3662*Dummy_3662)*tmp_q_1 + (Dummy_3663*Dummy_3663)*tmp_q_1);
                const real_t res_tmp_2_3 = tmp_q_13*(Dummy_3664*tmp_q_3 + Dummy_3665*tmp_q_7 + Dummy_3666*tmp_q_11);
                const real_t res_tmp_3_3 = tmp_q_13*((Dummy_3664*Dummy_3664)*tmp_q_1 + (Dummy_3665*Dummy_3665)*tmp_q_1 + (Dummy_3666*Dummy_3666)*tmp_q_1);
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
             const real_t elMat_0_0 = q_acc_0_0;
             const real_t elMat_0_1 = q_acc_0_1;
             const real_t elMat_0_2 = q_acc_0_2;
             const real_t elMat_0_3 = q_acc_0_3;
             const real_t elMat_1_0 = q_acc_1_0;
             const real_t elMat_1_1 = q_acc_1_1;
             const real_t elMat_1_2 = q_acc_1_2;
             const real_t elMat_1_3 = q_acc_1_3;
             const real_t elMat_2_0 = q_acc_2_0;
             const real_t elMat_2_1 = q_acc_2_1;
             const real_t elMat_2_2 = q_acc_2_2;
             const real_t elMat_2_3 = q_acc_2_3;
             const real_t elMat_3_0 = q_acc_3_0;
             const real_t elMat_3_1 = q_acc_3_1;
             const real_t elMat_3_2 = q_acc_3_2;
             const real_t elMat_3_3 = q_acc_3_3;
         
             std::vector< uint_t > _data_rowIdx( 4 );
             std::vector< uint_t > _data_colIdx( 4 );
             std::vector< real_t > _data_mat( 16 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))]));
         
             /* Apply basis transformation */
         
         
         
             _data_mat[0] = ((real_t)(elMat_0_0));
             _data_mat[1] = ((real_t)(elMat_0_1));
             _data_mat[2] = ((real_t)(elMat_0_2));
             _data_mat[3] = ((real_t)(elMat_0_3));
             _data_mat[4] = ((real_t)(elMat_1_0));
             _data_mat[5] = ((real_t)(elMat_1_1));
             _data_mat[6] = ((real_t)(elMat_1_2));
             _data_mat[7] = ((real_t)(elMat_1_3));
             _data_mat[8] = ((real_t)(elMat_2_0));
             _data_mat[9] = ((real_t)(elMat_2_1));
             _data_mat[10] = ((real_t)(elMat_2_2));
             _data_mat[11] = ((real_t)(elMat_2_3));
             _data_mat[12] = ((real_t)(elMat_3_0));
             _data_mat[13] = ((real_t)(elMat_3_1));
             _data_mat[14] = ((real_t)(elMat_3_2));
             _data_mat[15] = ((real_t)(elMat_3_3));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
