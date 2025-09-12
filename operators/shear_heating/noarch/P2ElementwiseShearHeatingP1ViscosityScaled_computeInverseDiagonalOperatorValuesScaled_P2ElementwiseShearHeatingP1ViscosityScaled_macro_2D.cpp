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































#include "../P2ElementwiseShearHeatingP1ViscosityScaled.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseShearHeatingP1ViscosityScaled::computeInverseDiagonalOperatorValuesScaled_P2ElementwiseShearHeatingP1ViscosityScaled_macro_2D( real_t * RESTRICT  _data_eta, real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t * RESTRICT  _data_rho, real_t * RESTRICT  _data_uxEdge, real_t * RESTRICT  _data_uxVertex, real_t * RESTRICT  _data_uyEdge, real_t * RESTRICT  _data_uyVertex, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {0.11250000000000003, 0.066197076394253096, 0.062969590272413584, 0.066197076394253096, 0.062969590272413584, 0.066197076394253096, 0.062969590272413584};
   
       const real_t _data_q_p_0 [] = {0.33333333333333331, 0.47014206410511505, 0.10128650732345632, 0.059715871789769892, 0.79742698535308731, 0.47014206410511505, 0.10128650732345632};
   
       const real_t _data_q_p_1 [] = {0.33333333333333331, 0.059715871789769892, 0.79742698535308731, 0.47014206410511505, 0.10128650732345632, 0.47014206410511505, 0.10128650732345632};
   
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
       const real_t jac_affine_inv_0_0_BLUE = jac_affine_1_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_0_1_BLUE = -jac_affine_0_1_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_0_BLUE = -jac_affine_1_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t jac_affine_inv_1_1_BLUE = jac_affine_0_0_BLUE*tmp_coords_jac_6_BLUE;
       const real_t abs_det_jac_affine_BLUE = abs(tmp_coords_jac_5_BLUE);
       const real_t _data_phi_0_0_BLUE [] = {-0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, 0.33333333333333343, 0.33333333333333331, 0.33333333333333331, -0.028074943223078866, -0.028074943223078852, -0.052583901102545419, 0.11229977289231531, 0.11229977289231531, 0.88413424176407251, 0.47014206410511505, 0.47014206410511505, 0.059715871789769892, -0.080768594191887089, -0.080768594191887172, 0.47435260858553852, 0.32307437676754869, 0.32307437676754891, 0.041035826263138286, 0.10128650732345634, 0.10128650732345632, 0.79742698535308731, -0.028074943223078838, -0.052583901102545419, -0.028074943223078852, 0.11229977289231531, 0.88413424176407251, 0.11229977289231531, 0.47014206410511505, 0.059715871789769892, 0.47014206410511505, -0.080768594191887089, 0.47435260858553852, -0.080768594191887172, 0.32307437676754869, 0.041035826263138286, 0.32307437676754891, 0.10128650732345637, 0.79742698535308731, 0.10128650732345632, -0.052583901102545627, -0.028074943223078852, -0.028074943223078852, 0.8841342417640724, 0.11229977289231541, 0.11229977289231541, 0.059715871789769892, 0.47014206410511505, 0.47014206410511505, 0.47435260858553874, -0.080768594191887172, -0.080768594191887172, 0.041035826263138279, 0.32307437676754869, 0.32307437676754869, 0.79742698535308731, 0.10128650732345632, 0.10128650732345632};
   
       const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*0.01234567901234569)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345684)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345684)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345678)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345678)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*0.012345679012345678)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.19753086419753085)), ((real_t)(abs_det_jac_affine_BLUE*0.00078820243697910199)), ((real_t)(abs_det_jac_affine_BLUE*0.00078820243697910156)), ((real_t)(abs_det_jac_affine_BLUE*0.0014762900379019569)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164036)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164036)), ((real_t)(abs_det_jac_affine_BLUE*-0.024822018639106221)), ((real_t)(abs_det_jac_affine_BLUE*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_BLUE*0.001476290037901956)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164019)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164019)), ((real_t)(abs_det_jac_affine_BLUE*-0.024822018639106207)), ((real_t)(abs_det_jac_affine_BLUE*0.0027650666551622773)), ((real_t)(abs_det_jac_affine_BLUE*-0.0059051601516078196)), ((real_t)(abs_det_jac_affine_BLUE*-0.0059051601516078196)), ((real_t)(abs_det_jac_affine_BLUE*-0.04649122753029597)), ((real_t)(abs_det_jac_affine_BLUE*0.012611238991665597)), ((real_t)(abs_det_jac_affine_BLUE*0.012611238991665597)), ((real_t)(abs_det_jac_affine_BLUE*0.099288074556424744)), ((real_t)(abs_det_jac_affine_BLUE*0.012611238991665597)), ((real_t)(abs_det_jac_affine_BLUE*0.099288074556424744)), ((real_t)(abs_det_jac_affine_BLUE*0.78169335745973145)), ((real_t)(abs_det_jac_affine_BLUE*0.0065235658077337369)), ((real_t)(abs_det_jac_affine_BLUE*0.0065235658077337439)), ((real_t)(abs_det_jac_affine_BLUE*-0.038312793346708417)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230934975)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230934993)), ((real_t)(abs_det_jac_affine_BLUE*-0.0033144059987761988)), ((real_t)(abs_det_jac_affine_BLUE*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_BLUE*-0.038312793346708458)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230935)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230935017)), ((real_t)(abs_det_jac_affine_BLUE*-0.0033144059987762022)), ((real_t)(abs_det_jac_affine_BLUE*0.22501039727190511)), ((real_t)(abs_det_jac_affine_BLUE*0.15325117338683383)), ((real_t)(abs_det_jac_affine_BLUE*0.15325117338683392)), ((real_t)(abs_det_jac_affine_BLUE*0.019465451233382596)), ((real_t)(abs_det_jac_affine_BLUE*0.10437705292374)), ((real_t)(abs_det_jac_affine_BLUE*0.10437705292374007)), ((real_t)(abs_det_jac_affine_BLUE*0.013257623995104809)), ((real_t)(abs_det_jac_affine_BLUE*0.10437705292374015)), ((real_t)(abs_det_jac_affine_BLUE*0.013257623995104818)), ((real_t)(abs_det_jac_affine_BLUE*0.0016839390370984699)), ((real_t)(abs_det_jac_affine_BLUE*0.00078820243697910037)), ((real_t)(abs_det_jac_affine_BLUE*0.0014762900379019553)), ((real_t)(abs_det_jac_affine_BLUE*0.0007882024369791008)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164002)), ((real_t)(abs_det_jac_affine_BLUE*-0.024822018639106196)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164002)), ((real_t)(abs_det_jac_affine_BLUE*0.0027650666551622773)), ((real_t)(abs_det_jac_affine_BLUE*0.001476290037901956)), ((real_t)(abs_det_jac_affine_BLUE*-0.0059051601516078196)), ((real_t)(abs_det_jac_affine_BLUE*-0.04649122753029597)), ((real_t)(abs_det_jac_affine_BLUE*-0.0059051601516078196)), ((real_t)(abs_det_jac_affine_BLUE*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164019)), ((real_t)(abs_det_jac_affine_BLUE*-0.024822018639106207)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164019)), ((real_t)(abs_det_jac_affine_BLUE*0.012611238991665597)), ((real_t)(abs_det_jac_affine_BLUE*0.099288074556424744)), ((real_t)(abs_det_jac_affine_BLUE*0.012611238991665597)), ((real_t)(abs_det_jac_affine_BLUE*0.78169335745973145)), ((real_t)(abs_det_jac_affine_BLUE*0.099288074556424744)), ((real_t)(abs_det_jac_affine_BLUE*0.012611238991665597)), ((real_t)(abs_det_jac_affine_BLUE*0.0065235658077337369)), ((real_t)(abs_det_jac_affine_BLUE*-0.038312793346708417)), ((real_t)(abs_det_jac_affine_BLUE*0.0065235658077337439)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230934975)), ((real_t)(abs_det_jac_affine_BLUE*-0.0033144059987761988)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230934993)), ((real_t)(abs_det_jac_affine_BLUE*0.22501039727190511)), ((real_t)(abs_det_jac_affine_BLUE*-0.038312793346708458)), ((real_t)(abs_det_jac_affine_BLUE*0.15325117338683383)), ((real_t)(abs_det_jac_affine_BLUE*0.019465451233382596)), ((real_t)(abs_det_jac_affine_BLUE*0.15325117338683392)), ((real_t)(abs_det_jac_affine_BLUE*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230935)), ((real_t)(abs_det_jac_affine_BLUE*-0.0033144059987762022)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230935017)), ((real_t)(abs_det_jac_affine_BLUE*0.10437705292374)), ((real_t)(abs_det_jac_affine_BLUE*0.013257623995104809)), ((real_t)(abs_det_jac_affine_BLUE*0.10437705292374007)), ((real_t)(abs_det_jac_affine_BLUE*0.0016839390370984699)), ((real_t)(abs_det_jac_affine_BLUE*0.013257623995104818)), ((real_t)(abs_det_jac_affine_BLUE*0.10437705292374015)), ((real_t)(abs_det_jac_affine_BLUE*0.002765066655162299)), ((real_t)(abs_det_jac_affine_BLUE*0.0014762900379019618)), ((real_t)(abs_det_jac_affine_BLUE*0.0014762900379019618)), ((real_t)(abs_det_jac_affine_BLUE*-0.04649122753029615)), ((real_t)(abs_det_jac_affine_BLUE*-0.0059051601516078474)), ((real_t)(abs_det_jac_affine_BLUE*-0.0059051601516078474)), ((real_t)(abs_det_jac_affine_BLUE*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_BLUE*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_BLUE*-0.024822018639106203)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164045)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164045)), ((real_t)(abs_det_jac_affine_BLUE*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_BLUE*-0.024822018639106203)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164045)), ((real_t)(abs_det_jac_affine_BLUE*-0.0031528097479164045)), ((real_t)(abs_det_jac_affine_BLUE*0.78169335745973123)), ((real_t)(abs_det_jac_affine_BLUE*0.099288074556424813)), ((real_t)(abs_det_jac_affine_BLUE*0.099288074556424813)), ((real_t)(abs_det_jac_affine_BLUE*0.012611238991665618)), ((real_t)(abs_det_jac_affine_BLUE*0.012611238991665618)), ((real_t)(abs_det_jac_affine_BLUE*0.012611238991665618)), ((real_t)(abs_det_jac_affine_BLUE*0.22501039727190533)), ((real_t)(abs_det_jac_affine_BLUE*-0.038312793346708472)), ((real_t)(abs_det_jac_affine_BLUE*-0.038312793346708472)), ((real_t)(abs_det_jac_affine_BLUE*0.019465451233382603)), ((real_t)(abs_det_jac_affine_BLUE*0.15325117338683389)), ((real_t)(abs_det_jac_affine_BLUE*0.15325117338683389)), ((real_t)(abs_det_jac_affine_BLUE*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_BLUE*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_BLUE*-0.0033144059987762014)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230935)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230935)), ((real_t)(abs_det_jac_affine_BLUE*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_BLUE*-0.0033144059987762014)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230935)), ((real_t)(abs_det_jac_affine_BLUE*-0.026094263230935)), ((real_t)(abs_det_jac_affine_BLUE*0.0016839390370984694)), ((real_t)(abs_det_jac_affine_BLUE*0.013257623995104805)), ((real_t)(abs_det_jac_affine_BLUE*0.013257623995104805)), ((real_t)(abs_det_jac_affine_BLUE*0.10437705292374)), ((real_t)(abs_det_jac_affine_BLUE*0.10437705292374)), ((real_t)(abs_det_jac_affine_BLUE*0.10437705292374))};
   
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
       const real_t jac_affine_inv_0_0_GRAY = jac_affine_1_1_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_0_1_GRAY = -jac_affine_0_1_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_1_0_GRAY = -jac_affine_1_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t jac_affine_inv_1_1_GRAY = jac_affine_0_0_GRAY*tmp_coords_jac_2_GRAY;
       const real_t abs_det_jac_affine_GRAY = abs(tmp_coords_jac_1_GRAY);
       const real_t _data_phi_0_0_GRAY [] = {-0.11111111111111116, -0.1111111111111111, -0.1111111111111111, 0.44444444444444442, 0.44444444444444442, 0.44444444444444442, 0.33333333333333343, 0.33333333333333331, 0.33333333333333331, -0.028074943223078866, -0.028074943223078852, -0.052583901102545419, 0.11229977289231531, 0.11229977289231531, 0.88413424176407251, 0.47014206410511505, 0.47014206410511505, 0.059715871789769892, -0.080768594191887089, -0.080768594191887172, 0.47435260858553852, 0.32307437676754869, 0.32307437676754891, 0.041035826263138286, 0.10128650732345634, 0.10128650732345632, 0.79742698535308731, -0.028074943223078838, -0.052583901102545419, -0.028074943223078852, 0.11229977289231531, 0.88413424176407251, 0.11229977289231531, 0.47014206410511505, 0.059715871789769892, 0.47014206410511505, -0.080768594191887089, 0.47435260858553852, -0.080768594191887172, 0.32307437676754869, 0.041035826263138286, 0.32307437676754891, 0.10128650732345637, 0.79742698535308731, 0.10128650732345632, -0.052583901102545627, -0.028074943223078852, -0.028074943223078852, 0.8841342417640724, 0.11229977289231541, 0.11229977289231541, 0.059715871789769892, 0.47014206410511505, 0.47014206410511505, 0.47435260858553874, -0.080768594191887172, -0.080768594191887172, 0.041035826263138279, 0.32307437676754869, 0.32307437676754869, 0.79742698535308731, 0.10128650732345632, 0.10128650732345632};
   
       const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*0.01234567901234569)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345684)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345684)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382734)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345678)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345678)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*0.012345679012345678)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*-0.049382716049382713)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.19753086419753085)), ((real_t)(abs_det_jac_affine_GRAY*0.00078820243697910199)), ((real_t)(abs_det_jac_affine_GRAY*0.00078820243697910156)), ((real_t)(abs_det_jac_affine_GRAY*0.0014762900379019569)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164036)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164036)), ((real_t)(abs_det_jac_affine_GRAY*-0.024822018639106221)), ((real_t)(abs_det_jac_affine_GRAY*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_GRAY*0.001476290037901956)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164019)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164019)), ((real_t)(abs_det_jac_affine_GRAY*-0.024822018639106207)), ((real_t)(abs_det_jac_affine_GRAY*0.0027650666551622773)), ((real_t)(abs_det_jac_affine_GRAY*-0.0059051601516078196)), ((real_t)(abs_det_jac_affine_GRAY*-0.0059051601516078196)), ((real_t)(abs_det_jac_affine_GRAY*-0.04649122753029597)), ((real_t)(abs_det_jac_affine_GRAY*0.012611238991665597)), ((real_t)(abs_det_jac_affine_GRAY*0.012611238991665597)), ((real_t)(abs_det_jac_affine_GRAY*0.099288074556424744)), ((real_t)(abs_det_jac_affine_GRAY*0.012611238991665597)), ((real_t)(abs_det_jac_affine_GRAY*0.099288074556424744)), ((real_t)(abs_det_jac_affine_GRAY*0.78169335745973145)), ((real_t)(abs_det_jac_affine_GRAY*0.0065235658077337369)), ((real_t)(abs_det_jac_affine_GRAY*0.0065235658077337439)), ((real_t)(abs_det_jac_affine_GRAY*-0.038312793346708417)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230934975)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230934993)), ((real_t)(abs_det_jac_affine_GRAY*-0.0033144059987761988)), ((real_t)(abs_det_jac_affine_GRAY*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_GRAY*-0.038312793346708458)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230935)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230935017)), ((real_t)(abs_det_jac_affine_GRAY*-0.0033144059987762022)), ((real_t)(abs_det_jac_affine_GRAY*0.22501039727190511)), ((real_t)(abs_det_jac_affine_GRAY*0.15325117338683383)), ((real_t)(abs_det_jac_affine_GRAY*0.15325117338683392)), ((real_t)(abs_det_jac_affine_GRAY*0.019465451233382596)), ((real_t)(abs_det_jac_affine_GRAY*0.10437705292374)), ((real_t)(abs_det_jac_affine_GRAY*0.10437705292374007)), ((real_t)(abs_det_jac_affine_GRAY*0.013257623995104809)), ((real_t)(abs_det_jac_affine_GRAY*0.10437705292374015)), ((real_t)(abs_det_jac_affine_GRAY*0.013257623995104818)), ((real_t)(abs_det_jac_affine_GRAY*0.0016839390370984699)), ((real_t)(abs_det_jac_affine_GRAY*0.00078820243697910037)), ((real_t)(abs_det_jac_affine_GRAY*0.0014762900379019553)), ((real_t)(abs_det_jac_affine_GRAY*0.0007882024369791008)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164002)), ((real_t)(abs_det_jac_affine_GRAY*-0.024822018639106196)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164002)), ((real_t)(abs_det_jac_affine_GRAY*0.0027650666551622773)), ((real_t)(abs_det_jac_affine_GRAY*0.001476290037901956)), ((real_t)(abs_det_jac_affine_GRAY*-0.0059051601516078196)), ((real_t)(abs_det_jac_affine_GRAY*-0.04649122753029597)), ((real_t)(abs_det_jac_affine_GRAY*-0.0059051601516078196)), ((real_t)(abs_det_jac_affine_GRAY*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164019)), ((real_t)(abs_det_jac_affine_GRAY*-0.024822018639106207)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164019)), ((real_t)(abs_det_jac_affine_GRAY*0.012611238991665597)), ((real_t)(abs_det_jac_affine_GRAY*0.099288074556424744)), ((real_t)(abs_det_jac_affine_GRAY*0.012611238991665597)), ((real_t)(abs_det_jac_affine_GRAY*0.78169335745973145)), ((real_t)(abs_det_jac_affine_GRAY*0.099288074556424744)), ((real_t)(abs_det_jac_affine_GRAY*0.012611238991665597)), ((real_t)(abs_det_jac_affine_GRAY*0.0065235658077337369)), ((real_t)(abs_det_jac_affine_GRAY*-0.038312793346708417)), ((real_t)(abs_det_jac_affine_GRAY*0.0065235658077337439)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230934975)), ((real_t)(abs_det_jac_affine_GRAY*-0.0033144059987761988)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230934993)), ((real_t)(abs_det_jac_affine_GRAY*0.22501039727190511)), ((real_t)(abs_det_jac_affine_GRAY*-0.038312793346708458)), ((real_t)(abs_det_jac_affine_GRAY*0.15325117338683383)), ((real_t)(abs_det_jac_affine_GRAY*0.019465451233382596)), ((real_t)(abs_det_jac_affine_GRAY*0.15325117338683392)), ((real_t)(abs_det_jac_affine_GRAY*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230935)), ((real_t)(abs_det_jac_affine_GRAY*-0.0033144059987762022)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230935017)), ((real_t)(abs_det_jac_affine_GRAY*0.10437705292374)), ((real_t)(abs_det_jac_affine_GRAY*0.013257623995104809)), ((real_t)(abs_det_jac_affine_GRAY*0.10437705292374007)), ((real_t)(abs_det_jac_affine_GRAY*0.0016839390370984699)), ((real_t)(abs_det_jac_affine_GRAY*0.013257623995104818)), ((real_t)(abs_det_jac_affine_GRAY*0.10437705292374015)), ((real_t)(abs_det_jac_affine_GRAY*0.002765066655162299)), ((real_t)(abs_det_jac_affine_GRAY*0.0014762900379019618)), ((real_t)(abs_det_jac_affine_GRAY*0.0014762900379019618)), ((real_t)(abs_det_jac_affine_GRAY*-0.04649122753029615)), ((real_t)(abs_det_jac_affine_GRAY*-0.0059051601516078474)), ((real_t)(abs_det_jac_affine_GRAY*-0.0059051601516078474)), ((real_t)(abs_det_jac_affine_GRAY*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_GRAY*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_GRAY*-0.024822018639106203)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164045)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164045)), ((real_t)(abs_det_jac_affine_GRAY*0.00078820243697910112)), ((real_t)(abs_det_jac_affine_GRAY*-0.024822018639106203)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164045)), ((real_t)(abs_det_jac_affine_GRAY*-0.0031528097479164045)), ((real_t)(abs_det_jac_affine_GRAY*0.78169335745973123)), ((real_t)(abs_det_jac_affine_GRAY*0.099288074556424813)), ((real_t)(abs_det_jac_affine_GRAY*0.099288074556424813)), ((real_t)(abs_det_jac_affine_GRAY*0.012611238991665618)), ((real_t)(abs_det_jac_affine_GRAY*0.012611238991665618)), ((real_t)(abs_det_jac_affine_GRAY*0.012611238991665618)), ((real_t)(abs_det_jac_affine_GRAY*0.22501039727190533)), ((real_t)(abs_det_jac_affine_GRAY*-0.038312793346708472)), ((real_t)(abs_det_jac_affine_GRAY*-0.038312793346708472)), ((real_t)(abs_det_jac_affine_GRAY*0.019465451233382603)), ((real_t)(abs_det_jac_affine_GRAY*0.15325117338683389)), ((real_t)(abs_det_jac_affine_GRAY*0.15325117338683389)), ((real_t)(abs_det_jac_affine_GRAY*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_GRAY*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_GRAY*-0.0033144059987762014)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230935)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230935)), ((real_t)(abs_det_jac_affine_GRAY*0.0065235658077337499)), ((real_t)(abs_det_jac_affine_GRAY*-0.0033144059987762014)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230935)), ((real_t)(abs_det_jac_affine_GRAY*-0.026094263230935)), ((real_t)(abs_det_jac_affine_GRAY*0.0016839390370984694)), ((real_t)(abs_det_jac_affine_GRAY*0.013257623995104805)), ((real_t)(abs_det_jac_affine_GRAY*0.013257623995104805)), ((real_t)(abs_det_jac_affine_GRAY*0.10437705292374)), ((real_t)(abs_det_jac_affine_GRAY*0.10437705292374)), ((real_t)(abs_det_jac_affine_GRAY*0.10437705292374))};
   
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
             const real_t eta_dof_0 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t eta_dof_1 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t eta_dof_2 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_0 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ux_dof_1 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ux_dof_2 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_3 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_4 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_5 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_0 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_1 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t uy_dof_2 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t uy_dof_3 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_4 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_5 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             {
                {
               
                   const int64_t phantom_ctr_0 = ctr_0;
                   real_t _data_float_loop_ctr_array_dim_0[4];
                   _data_float_loop_ctr_array_dim_0[0] = (real_t) ctr_0+ 0;
                   _data_float_loop_ctr_array_dim_0[1] = (real_t) ctr_0+ 1;
                   _data_float_loop_ctr_array_dim_0[2] = (real_t) ctr_0+ 2;
                   _data_float_loop_ctr_array_dim_0[3] = (real_t) ctr_0+ 3;
                   real_t _data_float_loop_ctr_array_dim_1[4];
                   _data_float_loop_ctr_array_dim_1[0] = (real_t) ctr_1;
                   _data_float_loop_ctr_array_dim_1[1] = (real_t) ctr_1;
                   _data_float_loop_ctr_array_dim_1[2] = (real_t) ctr_1;
                   _data_float_loop_ctr_array_dim_1[3] = (real_t) ctr_1;
               
                   const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
                   real_t q_acc_0_0 = 0.0;
                   real_t q_acc_1_1 = 0.0;
                   real_t q_acc_2_2 = 0.0;
                   real_t q_acc_3_3 = 0.0;
                   real_t q_acc_4_4 = 0.0;
                   real_t q_acc_5_5 = 0.0;
                   for (int64_t q = 0; q < 7; q += 1)
                   {
                      const real_t tmp_qloop_0 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_1 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_2 = tmp_qloop_1 - 1.0;
                      const real_t tmp_qloop_3 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                      const real_t tmp_qloop_4 = tmp_qloop_3*uy_dof_0;
                      const real_t tmp_qloop_5 = -tmp_qloop_0 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_6 = tmp_qloop_0*uy_dof_3 - tmp_qloop_0*uy_dof_4 + tmp_qloop_2*uy_dof_1 + tmp_qloop_4 + tmp_qloop_5*uy_dof_5;
                      const real_t tmp_qloop_7 = tmp_qloop_0 - 1.0;
                      const real_t tmp_qloop_8 = -tmp_qloop_1 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_9 = tmp_qloop_1*uy_dof_3 - tmp_qloop_1*uy_dof_5 + tmp_qloop_4 + tmp_qloop_7*uy_dof_2 + tmp_qloop_8*uy_dof_4;
                      const real_t tmp_qloop_10 = jac_affine_inv_0_0_GRAY*tmp_qloop_6 + jac_affine_inv_1_0_GRAY*tmp_qloop_9;
                      const real_t tmp_qloop_11 = tmp_qloop_3*ux_dof_0;
                      const real_t tmp_qloop_12 = tmp_qloop_0*ux_dof_3 - tmp_qloop_0*ux_dof_4 + tmp_qloop_11 + tmp_qloop_2*ux_dof_1 + tmp_qloop_5*ux_dof_5;
                      const real_t tmp_qloop_13 = tmp_qloop_1*ux_dof_3 - tmp_qloop_1*ux_dof_5 + tmp_qloop_11 + tmp_qloop_7*ux_dof_2 + tmp_qloop_8*ux_dof_4;
                      const real_t tmp_qloop_14 = jac_affine_inv_0_1_GRAY*tmp_qloop_12 + jac_affine_inv_1_1_GRAY*tmp_qloop_13;
                      const real_t tmp_qloop_15 = tmp_qloop_10 + tmp_qloop_14;
                      const real_t tmp_qloop_16 = jac_affine_inv_0_0_GRAY*tmp_qloop_12 + jac_affine_inv_1_0_GRAY*tmp_qloop_13;
                      const real_t tmp_qloop_17 = jac_affine_inv_0_1_GRAY*tmp_qloop_6;
                      const real_t tmp_qloop_18 = jac_affine_inv_1_1_GRAY*tmp_qloop_9;
                      const real_t tmp_qloop_19 = tmp_qloop_16 - tmp_qloop_17 - tmp_qloop_18;
                      const real_t tmp_qloop_20 = (eta_dof_0*_data_phi_0_0_GRAY[9*q + 6] + eta_dof_1*_data_phi_0_0_GRAY[9*q + 7] + eta_dof_2*_data_phi_0_0_GRAY[9*q + 8])*1.0 / (rho_dof_0*_data_phi_0_0_GRAY[9*q + 6] + rho_dof_1*_data_phi_0_0_GRAY[9*q + 7] + rho_dof_2*_data_phi_0_0_GRAY[9*q + 8])*(tmp_qloop_10*tmp_qloop_15 + tmp_qloop_14*tmp_qloop_15 + tmp_qloop_16*tmp_qloop_19 - tmp_qloop_19*(tmp_qloop_17 + tmp_qloop_18))*_data_q_w[q];
                      const real_t q_tmp_0_0 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q];
                      const real_t q_tmp_1_1 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 6];
                      const real_t q_tmp_2_2 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 11];
                      const real_t q_tmp_3_3 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 15];
                      const real_t q_tmp_4_4 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 18];
                      const real_t q_tmp_5_5 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 20];
                      q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                      q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                      q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                      q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                      q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                      q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                   }
                   const real_t elMatDiag_0 = q_acc_0_0;
                   const real_t elMatDiag_1 = q_acc_1_1;
                   const real_t elMatDiag_2 = q_acc_2_2;
                   const real_t elMatDiag_3 = q_acc_3_3;
                   const real_t elMatDiag_4 = q_acc_4_4;
                   const real_t elMatDiag_5 = q_acc_5_5;
                   _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                }
             }
             const real_t tmp_moved_constant_0 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_1 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_2 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_3 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_4 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_5 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_6 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_7 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_8 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_9 = _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_10 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_11 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_12 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_13 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_14 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_15 = _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_16 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_17 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             {
                {
               
                   const int64_t phantom_ctr_0 = ctr_0;
                   real_t _data_float_loop_ctr_array_dim_0[4];
                   _data_float_loop_ctr_array_dim_0[0] = (real_t) ctr_0+ 0;
                   _data_float_loop_ctr_array_dim_0[1] = (real_t) ctr_0+ 1;
                   _data_float_loop_ctr_array_dim_0[2] = (real_t) ctr_0+ 2;
                   _data_float_loop_ctr_array_dim_0[3] = (real_t) ctr_0+ 3;
                   real_t _data_float_loop_ctr_array_dim_1[4];
                   _data_float_loop_ctr_array_dim_1[0] = (real_t) ctr_1;
                   _data_float_loop_ctr_array_dim_1[1] = (real_t) ctr_1;
                   _data_float_loop_ctr_array_dim_1[2] = (real_t) ctr_1;
                   _data_float_loop_ctr_array_dim_1[3] = (real_t) ctr_1;
               
                   const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
                   real_t q_acc_0_0 = 0.0;
                   real_t q_acc_1_1 = 0.0;
                   real_t q_acc_2_2 = 0.0;
                   real_t q_acc_3_3 = 0.0;
                   real_t q_acc_4_4 = 0.0;
                   real_t q_acc_5_5 = 0.0;
                   for (int64_t q = 0; q < 7; q += 1)
                   {
                      const real_t tmp_qloop_0 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_1 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_2 = tmp_qloop_1 - 1.0;
                      const real_t tmp_qloop_3 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                      const real_t tmp_qloop_4 = tmp_moved_constant_12*tmp_qloop_3;
                      const real_t tmp_qloop_5 = -tmp_qloop_0 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_6 = tmp_moved_constant_13*tmp_qloop_2 + tmp_moved_constant_15*tmp_qloop_0 - tmp_moved_constant_16*tmp_qloop_0 + tmp_moved_constant_17*tmp_qloop_5 + tmp_qloop_4;
                      const real_t tmp_qloop_7 = tmp_qloop_0 - 1.0;
                      const real_t tmp_qloop_8 = -tmp_qloop_1 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_9 = tmp_moved_constant_14*tmp_qloop_7 + tmp_moved_constant_15*tmp_qloop_1 + tmp_moved_constant_16*tmp_qloop_8 - tmp_moved_constant_17*tmp_qloop_1 + tmp_qloop_4;
                      const real_t tmp_qloop_10 = jac_affine_inv_0_0_BLUE*tmp_qloop_6 + jac_affine_inv_1_0_BLUE*tmp_qloop_9;
                      const real_t tmp_qloop_11 = tmp_moved_constant_6*tmp_qloop_3;
                      const real_t tmp_qloop_12 = -tmp_moved_constant_10*tmp_qloop_0 + tmp_moved_constant_11*tmp_qloop_5 + tmp_moved_constant_7*tmp_qloop_2 + tmp_moved_constant_9*tmp_qloop_0 + tmp_qloop_11;
                      const real_t tmp_qloop_13 = tmp_moved_constant_10*tmp_qloop_8 - tmp_moved_constant_11*tmp_qloop_1 + tmp_moved_constant_8*tmp_qloop_7 + tmp_moved_constant_9*tmp_qloop_1 + tmp_qloop_11;
                      const real_t tmp_qloop_14 = jac_affine_inv_0_1_BLUE*tmp_qloop_12 + jac_affine_inv_1_1_BLUE*tmp_qloop_13;
                      const real_t tmp_qloop_15 = tmp_qloop_10 + tmp_qloop_14;
                      const real_t tmp_qloop_16 = jac_affine_inv_0_0_BLUE*tmp_qloop_12 + jac_affine_inv_1_0_BLUE*tmp_qloop_13;
                      const real_t tmp_qloop_17 = jac_affine_inv_0_1_BLUE*tmp_qloop_6;
                      const real_t tmp_qloop_18 = jac_affine_inv_1_1_BLUE*tmp_qloop_9;
                      const real_t tmp_qloop_19 = tmp_qloop_16 - tmp_qloop_17 - tmp_qloop_18;
                      const real_t tmp_qloop_20 = (tmp_moved_constant_0*_data_phi_0_0_BLUE[9*q + 6] + tmp_moved_constant_1*_data_phi_0_0_BLUE[9*q + 7] + tmp_moved_constant_2*_data_phi_0_0_BLUE[9*q + 8])*1.0 / (tmp_moved_constant_3*_data_phi_0_0_BLUE[9*q + 6] + tmp_moved_constant_4*_data_phi_0_0_BLUE[9*q + 7] + tmp_moved_constant_5*_data_phi_0_0_BLUE[9*q + 8])*(tmp_qloop_10*tmp_qloop_15 + tmp_qloop_14*tmp_qloop_15 + tmp_qloop_16*tmp_qloop_19 - tmp_qloop_19*(tmp_qloop_17 + tmp_qloop_18))*_data_q_w[q];
                      const real_t q_tmp_0_0 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_BLUE[21*q];
                      const real_t q_tmp_1_1 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_BLUE[21*q + 6];
                      const real_t q_tmp_2_2 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_BLUE[21*q + 11];
                      const real_t q_tmp_3_3 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_BLUE[21*q + 15];
                      const real_t q_tmp_4_4 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_BLUE[21*q + 18];
                      const real_t q_tmp_5_5 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_BLUE[21*q + 20];
                      q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                      q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                      q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                      q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                      q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                      q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                   }
                   const real_t elMatDiag_0 = q_acc_0_0;
                   const real_t elMatDiag_1 = q_acc_1_1;
                   const real_t elMatDiag_2 = q_acc_2_2;
                   const real_t elMatDiag_3 = q_acc_3_3;
                   const real_t elMatDiag_4 = q_acc_4_4;
                   const real_t elMatDiag_5 = q_acc_5_5;
                   _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
                   _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                }
             }
          }
          for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
             const real_t eta_dof_0 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t eta_dof_1 = _data_eta[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t eta_dof_2 = _data_eta[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t rho_dof_0 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t rho_dof_1 = _data_rho[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t rho_dof_2 = _data_rho[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_0 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t ux_dof_1 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t ux_dof_2 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t ux_dof_3 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_4 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t ux_dof_5 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_0 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t uy_dof_1 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t uy_dof_2 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t uy_dof_3 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_4 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t uy_dof_5 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             {
                {
               
                   const int64_t phantom_ctr_0 = ctr_0;
                   real_t _data_float_loop_ctr_array_dim_0[4];
                   _data_float_loop_ctr_array_dim_0[0] = (real_t) ctr_0+ 0;
                   _data_float_loop_ctr_array_dim_0[1] = (real_t) ctr_0+ 1;
                   _data_float_loop_ctr_array_dim_0[2] = (real_t) ctr_0+ 2;
                   _data_float_loop_ctr_array_dim_0[3] = (real_t) ctr_0+ 3;
                   real_t _data_float_loop_ctr_array_dim_1[4];
                   _data_float_loop_ctr_array_dim_1[0] = (real_t) ctr_1;
                   _data_float_loop_ctr_array_dim_1[1] = (real_t) ctr_1;
                   _data_float_loop_ctr_array_dim_1[2] = (real_t) ctr_1;
                   _data_float_loop_ctr_array_dim_1[3] = (real_t) ctr_1;
               
                   const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*(1.0 + _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])*1.0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*1.0*_data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0];
                   const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
                   const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1)*1.0*_data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0] + 1.0 / (micro_edges_per_macro_edge_float)*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1)*(1.0 + _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0])*1.0;
                   real_t q_acc_0_0 = 0.0;
                   real_t q_acc_1_1 = 0.0;
                   real_t q_acc_2_2 = 0.0;
                   real_t q_acc_3_3 = 0.0;
                   real_t q_acc_4_4 = 0.0;
                   real_t q_acc_5_5 = 0.0;
                   for (int64_t q = 0; q < 7; q += 1)
                   {
                      const real_t tmp_qloop_0 = 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_1 = 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_2 = tmp_qloop_1 - 1.0;
                      const real_t tmp_qloop_3 = tmp_qloop_0 + tmp_qloop_1 - 3.0;
                      const real_t tmp_qloop_4 = tmp_qloop_3*uy_dof_0;
                      const real_t tmp_qloop_5 = -tmp_qloop_0 - 8.0*_data_q_p_0[q] + 4.0;
                      const real_t tmp_qloop_6 = tmp_qloop_0*uy_dof_3 - tmp_qloop_0*uy_dof_4 + tmp_qloop_2*uy_dof_1 + tmp_qloop_4 + tmp_qloop_5*uy_dof_5;
                      const real_t tmp_qloop_7 = tmp_qloop_0 - 1.0;
                      const real_t tmp_qloop_8 = -tmp_qloop_1 - 8.0*_data_q_p_1[q] + 4.0;
                      const real_t tmp_qloop_9 = tmp_qloop_1*uy_dof_3 - tmp_qloop_1*uy_dof_5 + tmp_qloop_4 + tmp_qloop_7*uy_dof_2 + tmp_qloop_8*uy_dof_4;
                      const real_t tmp_qloop_10 = jac_affine_inv_0_0_GRAY*tmp_qloop_6 + jac_affine_inv_1_0_GRAY*tmp_qloop_9;
                      const real_t tmp_qloop_11 = tmp_qloop_3*ux_dof_0;
                      const real_t tmp_qloop_12 = tmp_qloop_0*ux_dof_3 - tmp_qloop_0*ux_dof_4 + tmp_qloop_11 + tmp_qloop_2*ux_dof_1 + tmp_qloop_5*ux_dof_5;
                      const real_t tmp_qloop_13 = tmp_qloop_1*ux_dof_3 - tmp_qloop_1*ux_dof_5 + tmp_qloop_11 + tmp_qloop_7*ux_dof_2 + tmp_qloop_8*ux_dof_4;
                      const real_t tmp_qloop_14 = jac_affine_inv_0_1_GRAY*tmp_qloop_12 + jac_affine_inv_1_1_GRAY*tmp_qloop_13;
                      const real_t tmp_qloop_15 = tmp_qloop_10 + tmp_qloop_14;
                      const real_t tmp_qloop_16 = jac_affine_inv_0_0_GRAY*tmp_qloop_12 + jac_affine_inv_1_0_GRAY*tmp_qloop_13;
                      const real_t tmp_qloop_17 = jac_affine_inv_0_1_GRAY*tmp_qloop_6;
                      const real_t tmp_qloop_18 = jac_affine_inv_1_1_GRAY*tmp_qloop_9;
                      const real_t tmp_qloop_19 = tmp_qloop_16 - tmp_qloop_17 - tmp_qloop_18;
                      const real_t tmp_qloop_20 = (eta_dof_0*_data_phi_0_0_GRAY[9*q + 6] + eta_dof_1*_data_phi_0_0_GRAY[9*q + 7] + eta_dof_2*_data_phi_0_0_GRAY[9*q + 8])*1.0 / (rho_dof_0*_data_phi_0_0_GRAY[9*q + 6] + rho_dof_1*_data_phi_0_0_GRAY[9*q + 7] + rho_dof_2*_data_phi_0_0_GRAY[9*q + 8])*(tmp_qloop_10*tmp_qloop_15 + tmp_qloop_14*tmp_qloop_15 + tmp_qloop_16*tmp_qloop_19 - tmp_qloop_19*(tmp_qloop_17 + tmp_qloop_18))*_data_q_w[q];
                      const real_t q_tmp_0_0 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q];
                      const real_t q_tmp_1_1 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 6];
                      const real_t q_tmp_2_2 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 11];
                      const real_t q_tmp_3_3 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 15];
                      const real_t q_tmp_4_4 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 18];
                      const real_t q_tmp_5_5 = tmp_qloop_20*_data_tabulated_and_untitled_0_0_GRAY[21*q + 20];
                      q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                      q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                      q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                      q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                      q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                      q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                   }
                   const real_t elMatDiag_0 = q_acc_0_0;
                   const real_t elMatDiag_1 = q_acc_1_1;
                   const real_t elMatDiag_2 = q_acc_2_2;
                   const real_t elMatDiag_3 = q_acc_3_3;
                   const real_t elMatDiag_4 = q_acc_4_4;
                   const real_t elMatDiag_5 = q_acc_5_5;
                   _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
                   _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
                   _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_2 + _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
                   _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
