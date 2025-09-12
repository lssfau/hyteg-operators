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































#include "../P2ElementwiseAdvectionAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseAdvectionAnnulusMap::toMatrixScaled_P2ElementwiseAdvectionAnnulusMap_macro_2D( idx_t * RESTRICT  _data_dstEdge, idx_t * RESTRICT  _data_dstVertex, idx_t * RESTRICT  _data_srcEdge, idx_t * RESTRICT  _data_srcVertex, real_t * RESTRICT  _data_uxEdge, real_t * RESTRICT  _data_uxVertex, real_t * RESTRICT  _data_uyEdge, real_t * RESTRICT  _data_uyVertex, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1, real_t toMatrixScaling ) const
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
       const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333348 + jac_affine_inv_1_0_BLUE*-0.33333333333333348)), ((real_t)(abs_det_jac_affine_BLUE*-0.11111111111111116)), ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)), ((real_t)(abs_det_jac_affine_BLUE*-0.1111111111111111)), ((real_t)(abs_det_jac_affine_BLUE*-0.1111111111111111)), ((real_t)(abs_det_jac_affine_BLUE*0.44444444444444442)), ((real_t)(abs_det_jac_affine_BLUE*0.44444444444444442)), ((real_t)(abs_det_jac_affine_BLUE*0.44444444444444442)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.88056825642046022 + jac_affine_inv_1_0_BLUE*-0.88056825642046022)), ((real_t)(abs_det_jac_affine_BLUE*-0.028074943223078866)), ((real_t)(jac_affine_inv_0_0_BLUE*0.88056825642046022)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.76113651284092043)), ((real_t)(jac_affine_inv_0_0_BLUE*0.23886348715907957 + jac_affine_inv_1_0_BLUE*1.8805682564204602)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.23886348715907957 + jac_affine_inv_1_0_BLUE*1.6417047692613806)), ((real_t)(jac_affine_inv_1_0_BLUE*-1.8805682564204602)), ((real_t)(abs_det_jac_affine_BLUE*-0.028074943223078852)), ((real_t)(abs_det_jac_affine_BLUE*-0.052583901102545419)), ((real_t)(abs_det_jac_affine_BLUE*0.11229977289231531)), ((real_t)(abs_det_jac_affine_BLUE*0.11229977289231531)), ((real_t)(abs_det_jac_affine_BLUE*0.88413424176407251)), ((real_t)(jac_affine_inv_0_0_BLUE*0.59485397070617463 + jac_affine_inv_1_0_BLUE*0.59485397070617463)), ((real_t)(abs_det_jac_affine_BLUE*-0.080768594191887089)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.59485397070617474)), ((real_t)(jac_affine_inv_1_0_BLUE*2.1897079414123493)), ((real_t)(jac_affine_inv_0_0_BLUE*3.1897079414123493 + jac_affine_inv_1_0_BLUE*0.40514602929382526)), ((real_t)(jac_affine_inv_0_0_BLUE*-3.1897079414123493 + jac_affine_inv_1_0_BLUE*-2.7845619121185239)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.40514602929382526)), ((real_t)(abs_det_jac_affine_BLUE*-0.080768594191887172)), ((real_t)(abs_det_jac_affine_BLUE*0.47435260858553852)), ((real_t)(abs_det_jac_affine_BLUE*0.32307437676754869)), ((real_t)(abs_det_jac_affine_BLUE*0.32307437676754891)), ((real_t)(abs_det_jac_affine_BLUE*0.041035826263138286)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.88056825642046022 + jac_affine_inv_1_0_BLUE*-0.88056825642046022)), ((real_t)(abs_det_jac_affine_BLUE*-0.028074943223078838)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.76113651284092043)), ((real_t)(jac_affine_inv_1_0_BLUE*0.88056825642046022)), ((real_t)(jac_affine_inv_0_0_BLUE*1.8805682564204602 + jac_affine_inv_1_0_BLUE*0.23886348715907957)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.8805682564204602)), ((real_t)(jac_affine_inv_0_0_BLUE*1.6417047692613806 + jac_affine_inv_1_0_BLUE*-0.23886348715907957)), ((real_t)(abs_det_jac_affine_BLUE*-0.052583901102545419)), ((real_t)(abs_det_jac_affine_BLUE*-0.028074943223078852)), ((real_t)(abs_det_jac_affine_BLUE*0.11229977289231531)), ((real_t)(abs_det_jac_affine_BLUE*0.88413424176407251)), ((real_t)(abs_det_jac_affine_BLUE*0.11229977289231531)), ((real_t)(jac_affine_inv_0_0_BLUE*0.59485397070617452 + jac_affine_inv_1_0_BLUE*0.59485397070617452)), ((real_t)(abs_det_jac_affine_BLUE*-0.080768594191887089)), ((real_t)(jac_affine_inv_0_0_BLUE*2.1897079414123493)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.59485397070617474)), ((real_t)(jac_affine_inv_0_0_BLUE*0.40514602929382526 + jac_affine_inv_1_0_BLUE*3.1897079414123493)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.40514602929382526)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.7845619121185239 + jac_affine_inv_1_0_BLUE*-3.1897079414123493)), ((real_t)(abs_det_jac_affine_BLUE*0.47435260858553852)), ((real_t)(abs_det_jac_affine_BLUE*-0.080768594191887172)), ((real_t)(abs_det_jac_affine_BLUE*0.32307437676754869)), ((real_t)(abs_det_jac_affine_BLUE*0.041035826263138286)), ((real_t)(abs_det_jac_affine_BLUE*0.32307437676754891)), ((real_t)(jac_affine_inv_0_0_BLUE*0.76113651284092043 + jac_affine_inv_1_0_BLUE*0.76113651284092043)), ((real_t)(abs_det_jac_affine_BLUE*-0.052583901102545627)), ((real_t)(jac_affine_inv_0_0_BLUE*0.88056825642046022)), ((real_t)(jac_affine_inv_1_0_BLUE*0.88056825642046022)), ((real_t)(jac_affine_inv_0_0_BLUE*1.8805682564204602 + jac_affine_inv_1_0_BLUE*1.8805682564204602)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.8805682564204602 + jac_affine_inv_1_0_BLUE*-1.6417047692613806)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.6417047692613806 + jac_affine_inv_1_0_BLUE*-1.8805682564204602)), ((real_t)(abs_det_jac_affine_BLUE*-0.028074943223078852)), ((real_t)(abs_det_jac_affine_BLUE*-0.028074943223078852)), ((real_t)(abs_det_jac_affine_BLUE*0.8841342417640724)), ((real_t)(abs_det_jac_affine_BLUE*0.11229977289231541)), ((real_t)(abs_det_jac_affine_BLUE*0.11229977289231541)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.1897079414123493 + jac_affine_inv_1_0_BLUE*-2.1897079414123493)), ((real_t)(abs_det_jac_affine_BLUE*0.47435260858553874)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.59485397070617474)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.59485397070617474)), ((real_t)(jac_affine_inv_0_0_BLUE*0.40514602929382526 + jac_affine_inv_1_0_BLUE*0.40514602929382526)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.40514602929382526 + jac_affine_inv_1_0_BLUE*2.7845619121185239)), ((real_t)(jac_affine_inv_0_0_BLUE*2.7845619121185239 + jac_affine_inv_1_0_BLUE*-0.40514602929382526)), ((real_t)(abs_det_jac_affine_BLUE*-0.080768594191887172)), ((real_t)(abs_det_jac_affine_BLUE*-0.080768594191887172)), ((real_t)(abs_det_jac_affine_BLUE*0.041035826263138279)), ((real_t)(abs_det_jac_affine_BLUE*0.32307437676754869)), ((real_t)(abs_det_jac_affine_BLUE*0.32307437676754869))};
   
       const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333348 + jac_affine_inv_1_1_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3333333333333333 + jac_affine_inv_1_1_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3333333333333333 + jac_affine_inv_1_1_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_1_BLUE*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.88056825642046022 + jac_affine_inv_1_1_BLUE*-0.88056825642046022)), ((real_t)(jac_affine_inv_0_1_BLUE*0.88056825642046022)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.76113651284092043)), ((real_t)(jac_affine_inv_0_1_BLUE*0.23886348715907957 + jac_affine_inv_1_1_BLUE*1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.23886348715907957 + jac_affine_inv_1_1_BLUE*1.6417047692613806)), ((real_t)(jac_affine_inv_1_1_BLUE*-1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_BLUE*0.59485397070617463 + jac_affine_inv_1_1_BLUE*0.59485397070617463)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.59485397070617474)), ((real_t)(jac_affine_inv_1_1_BLUE*2.1897079414123493)), ((real_t)(jac_affine_inv_0_1_BLUE*3.1897079414123493 + jac_affine_inv_1_1_BLUE*0.40514602929382526)), ((real_t)(jac_affine_inv_0_1_BLUE*-3.1897079414123493 + jac_affine_inv_1_1_BLUE*-2.7845619121185239)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.40514602929382526)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.88056825642046022 + jac_affine_inv_1_1_BLUE*-0.88056825642046022)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.76113651284092043)), ((real_t)(jac_affine_inv_1_1_BLUE*0.88056825642046022)), ((real_t)(jac_affine_inv_0_1_BLUE*1.8805682564204602 + jac_affine_inv_1_1_BLUE*0.23886348715907957)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_BLUE*1.6417047692613806 + jac_affine_inv_1_1_BLUE*-0.23886348715907957)), ((real_t)(jac_affine_inv_0_1_BLUE*0.59485397070617452 + jac_affine_inv_1_1_BLUE*0.59485397070617452)), ((real_t)(jac_affine_inv_0_1_BLUE*2.1897079414123493)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.59485397070617474)), ((real_t)(jac_affine_inv_0_1_BLUE*0.40514602929382526 + jac_affine_inv_1_1_BLUE*3.1897079414123493)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.40514602929382526)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.7845619121185239 + jac_affine_inv_1_1_BLUE*-3.1897079414123493)), ((real_t)(jac_affine_inv_0_1_BLUE*0.76113651284092043 + jac_affine_inv_1_1_BLUE*0.76113651284092043)), ((real_t)(jac_affine_inv_0_1_BLUE*0.88056825642046022)), ((real_t)(jac_affine_inv_1_1_BLUE*0.88056825642046022)), ((real_t)(jac_affine_inv_0_1_BLUE*1.8805682564204602 + jac_affine_inv_1_1_BLUE*1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.8805682564204602 + jac_affine_inv_1_1_BLUE*-1.6417047692613806)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.6417047692613806 + jac_affine_inv_1_1_BLUE*-1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.1897079414123493 + jac_affine_inv_1_1_BLUE*-2.1897079414123493)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.59485397070617474)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.59485397070617474)), ((real_t)(jac_affine_inv_0_1_BLUE*0.40514602929382526 + jac_affine_inv_1_1_BLUE*0.40514602929382526)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.40514602929382526 + jac_affine_inv_1_1_BLUE*2.7845619121185239)), ((real_t)(jac_affine_inv_0_1_BLUE*2.7845619121185239 + jac_affine_inv_1_1_BLUE*-0.40514602929382526))};
   
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
       const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333348 + jac_affine_inv_1_0_GRAY*-0.33333333333333348)), ((real_t)(abs_det_jac_affine_GRAY*-0.11111111111111116)), ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)), ((real_t)(abs_det_jac_affine_GRAY*-0.1111111111111111)), ((real_t)(abs_det_jac_affine_GRAY*-0.1111111111111111)), ((real_t)(abs_det_jac_affine_GRAY*0.44444444444444442)), ((real_t)(abs_det_jac_affine_GRAY*0.44444444444444442)), ((real_t)(abs_det_jac_affine_GRAY*0.44444444444444442)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.88056825642046022 + jac_affine_inv_1_0_GRAY*-0.88056825642046022)), ((real_t)(abs_det_jac_affine_GRAY*-0.028074943223078866)), ((real_t)(jac_affine_inv_0_0_GRAY*0.88056825642046022)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.76113651284092043)), ((real_t)(jac_affine_inv_0_0_GRAY*0.23886348715907957 + jac_affine_inv_1_0_GRAY*1.8805682564204602)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.23886348715907957 + jac_affine_inv_1_0_GRAY*1.6417047692613806)), ((real_t)(jac_affine_inv_1_0_GRAY*-1.8805682564204602)), ((real_t)(abs_det_jac_affine_GRAY*-0.028074943223078852)), ((real_t)(abs_det_jac_affine_GRAY*-0.052583901102545419)), ((real_t)(abs_det_jac_affine_GRAY*0.11229977289231531)), ((real_t)(abs_det_jac_affine_GRAY*0.11229977289231531)), ((real_t)(abs_det_jac_affine_GRAY*0.88413424176407251)), ((real_t)(jac_affine_inv_0_0_GRAY*0.59485397070617463 + jac_affine_inv_1_0_GRAY*0.59485397070617463)), ((real_t)(abs_det_jac_affine_GRAY*-0.080768594191887089)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.59485397070617474)), ((real_t)(jac_affine_inv_1_0_GRAY*2.1897079414123493)), ((real_t)(jac_affine_inv_0_0_GRAY*3.1897079414123493 + jac_affine_inv_1_0_GRAY*0.40514602929382526)), ((real_t)(jac_affine_inv_0_0_GRAY*-3.1897079414123493 + jac_affine_inv_1_0_GRAY*-2.7845619121185239)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.40514602929382526)), ((real_t)(abs_det_jac_affine_GRAY*-0.080768594191887172)), ((real_t)(abs_det_jac_affine_GRAY*0.47435260858553852)), ((real_t)(abs_det_jac_affine_GRAY*0.32307437676754869)), ((real_t)(abs_det_jac_affine_GRAY*0.32307437676754891)), ((real_t)(abs_det_jac_affine_GRAY*0.041035826263138286)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.88056825642046022 + jac_affine_inv_1_0_GRAY*-0.88056825642046022)), ((real_t)(abs_det_jac_affine_GRAY*-0.028074943223078838)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.76113651284092043)), ((real_t)(jac_affine_inv_1_0_GRAY*0.88056825642046022)), ((real_t)(jac_affine_inv_0_0_GRAY*1.8805682564204602 + jac_affine_inv_1_0_GRAY*0.23886348715907957)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.8805682564204602)), ((real_t)(jac_affine_inv_0_0_GRAY*1.6417047692613806 + jac_affine_inv_1_0_GRAY*-0.23886348715907957)), ((real_t)(abs_det_jac_affine_GRAY*-0.052583901102545419)), ((real_t)(abs_det_jac_affine_GRAY*-0.028074943223078852)), ((real_t)(abs_det_jac_affine_GRAY*0.11229977289231531)), ((real_t)(abs_det_jac_affine_GRAY*0.88413424176407251)), ((real_t)(abs_det_jac_affine_GRAY*0.11229977289231531)), ((real_t)(jac_affine_inv_0_0_GRAY*0.59485397070617452 + jac_affine_inv_1_0_GRAY*0.59485397070617452)), ((real_t)(abs_det_jac_affine_GRAY*-0.080768594191887089)), ((real_t)(jac_affine_inv_0_0_GRAY*2.1897079414123493)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.59485397070617474)), ((real_t)(jac_affine_inv_0_0_GRAY*0.40514602929382526 + jac_affine_inv_1_0_GRAY*3.1897079414123493)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.40514602929382526)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.7845619121185239 + jac_affine_inv_1_0_GRAY*-3.1897079414123493)), ((real_t)(abs_det_jac_affine_GRAY*0.47435260858553852)), ((real_t)(abs_det_jac_affine_GRAY*-0.080768594191887172)), ((real_t)(abs_det_jac_affine_GRAY*0.32307437676754869)), ((real_t)(abs_det_jac_affine_GRAY*0.041035826263138286)), ((real_t)(abs_det_jac_affine_GRAY*0.32307437676754891)), ((real_t)(jac_affine_inv_0_0_GRAY*0.76113651284092043 + jac_affine_inv_1_0_GRAY*0.76113651284092043)), ((real_t)(abs_det_jac_affine_GRAY*-0.052583901102545627)), ((real_t)(jac_affine_inv_0_0_GRAY*0.88056825642046022)), ((real_t)(jac_affine_inv_1_0_GRAY*0.88056825642046022)), ((real_t)(jac_affine_inv_0_0_GRAY*1.8805682564204602 + jac_affine_inv_1_0_GRAY*1.8805682564204602)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.8805682564204602 + jac_affine_inv_1_0_GRAY*-1.6417047692613806)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.6417047692613806 + jac_affine_inv_1_0_GRAY*-1.8805682564204602)), ((real_t)(abs_det_jac_affine_GRAY*-0.028074943223078852)), ((real_t)(abs_det_jac_affine_GRAY*-0.028074943223078852)), ((real_t)(abs_det_jac_affine_GRAY*0.8841342417640724)), ((real_t)(abs_det_jac_affine_GRAY*0.11229977289231541)), ((real_t)(abs_det_jac_affine_GRAY*0.11229977289231541)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.1897079414123493 + jac_affine_inv_1_0_GRAY*-2.1897079414123493)), ((real_t)(abs_det_jac_affine_GRAY*0.47435260858553874)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.59485397070617474)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.59485397070617474)), ((real_t)(jac_affine_inv_0_0_GRAY*0.40514602929382526 + jac_affine_inv_1_0_GRAY*0.40514602929382526)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.40514602929382526 + jac_affine_inv_1_0_GRAY*2.7845619121185239)), ((real_t)(jac_affine_inv_0_0_GRAY*2.7845619121185239 + jac_affine_inv_1_0_GRAY*-0.40514602929382526)), ((real_t)(abs_det_jac_affine_GRAY*-0.080768594191887172)), ((real_t)(abs_det_jac_affine_GRAY*-0.080768594191887172)), ((real_t)(abs_det_jac_affine_GRAY*0.041035826263138279)), ((real_t)(abs_det_jac_affine_GRAY*0.32307437676754869)), ((real_t)(abs_det_jac_affine_GRAY*0.32307437676754869))};
   
       const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333348 + jac_affine_inv_1_1_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3333333333333333 + jac_affine_inv_1_1_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3333333333333333 + jac_affine_inv_1_1_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_1_GRAY*-1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.88056825642046022 + jac_affine_inv_1_1_GRAY*-0.88056825642046022)), ((real_t)(jac_affine_inv_0_1_GRAY*0.88056825642046022)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.76113651284092043)), ((real_t)(jac_affine_inv_0_1_GRAY*0.23886348715907957 + jac_affine_inv_1_1_GRAY*1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.23886348715907957 + jac_affine_inv_1_1_GRAY*1.6417047692613806)), ((real_t)(jac_affine_inv_1_1_GRAY*-1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_GRAY*0.59485397070617463 + jac_affine_inv_1_1_GRAY*0.59485397070617463)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.59485397070617474)), ((real_t)(jac_affine_inv_1_1_GRAY*2.1897079414123493)), ((real_t)(jac_affine_inv_0_1_GRAY*3.1897079414123493 + jac_affine_inv_1_1_GRAY*0.40514602929382526)), ((real_t)(jac_affine_inv_0_1_GRAY*-3.1897079414123493 + jac_affine_inv_1_1_GRAY*-2.7845619121185239)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.40514602929382526)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.88056825642046022 + jac_affine_inv_1_1_GRAY*-0.88056825642046022)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.76113651284092043)), ((real_t)(jac_affine_inv_1_1_GRAY*0.88056825642046022)), ((real_t)(jac_affine_inv_0_1_GRAY*1.8805682564204602 + jac_affine_inv_1_1_GRAY*0.23886348715907957)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_GRAY*1.6417047692613806 + jac_affine_inv_1_1_GRAY*-0.23886348715907957)), ((real_t)(jac_affine_inv_0_1_GRAY*0.59485397070617452 + jac_affine_inv_1_1_GRAY*0.59485397070617452)), ((real_t)(jac_affine_inv_0_1_GRAY*2.1897079414123493)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.59485397070617474)), ((real_t)(jac_affine_inv_0_1_GRAY*0.40514602929382526 + jac_affine_inv_1_1_GRAY*3.1897079414123493)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.40514602929382526)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.7845619121185239 + jac_affine_inv_1_1_GRAY*-3.1897079414123493)), ((real_t)(jac_affine_inv_0_1_GRAY*0.76113651284092043 + jac_affine_inv_1_1_GRAY*0.76113651284092043)), ((real_t)(jac_affine_inv_0_1_GRAY*0.88056825642046022)), ((real_t)(jac_affine_inv_1_1_GRAY*0.88056825642046022)), ((real_t)(jac_affine_inv_0_1_GRAY*1.8805682564204602 + jac_affine_inv_1_1_GRAY*1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.8805682564204602 + jac_affine_inv_1_1_GRAY*-1.6417047692613806)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.6417047692613806 + jac_affine_inv_1_1_GRAY*-1.8805682564204602)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.1897079414123493 + jac_affine_inv_1_1_GRAY*-2.1897079414123493)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.59485397070617474)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.59485397070617474)), ((real_t)(jac_affine_inv_0_1_GRAY*0.40514602929382526 + jac_affine_inv_1_1_GRAY*0.40514602929382526)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.40514602929382526 + jac_affine_inv_1_1_GRAY*2.7845619121185239)), ((real_t)(jac_affine_inv_0_1_GRAY*2.7845619121185239 + jac_affine_inv_1_1_GRAY*-0.40514602929382526))};
   
       const real_t tmp_qloop_1 = -rayVertex_1 + thrVertex_1;
       const real_t tmp_qloop_7 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_8 = -tmp_qloop_7;
       const real_t tmp_qloop_9 = 1.0 / (tmp_qloop_1*(-rayVertex_0 + refVertex_0) - tmp_qloop_8*(-rayVertex_1 + refVertex_1));
       const real_t tmp_qloop_10 = -radRayVertex + radRefVertex;
       const real_t tmp_qloop_11 = tmp_qloop_10*tmp_qloop_9;
       const real_t tmp_qloop_12 = tmp_qloop_11*1.0;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
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
                   real_t q_acc_0_1 = 0.0;
                   real_t q_acc_0_2 = 0.0;
                   real_t q_acc_0_3 = 0.0;
                   real_t q_acc_0_4 = 0.0;
                   real_t q_acc_0_5 = 0.0;
                   real_t q_acc_1_0 = 0.0;
                   real_t q_acc_1_1 = 0.0;
                   real_t q_acc_1_2 = 0.0;
                   real_t q_acc_1_3 = 0.0;
                   real_t q_acc_1_4 = 0.0;
                   real_t q_acc_1_5 = 0.0;
                   real_t q_acc_2_0 = 0.0;
                   real_t q_acc_2_1 = 0.0;
                   real_t q_acc_2_2 = 0.0;
                   real_t q_acc_2_3 = 0.0;
                   real_t q_acc_2_4 = 0.0;
                   real_t q_acc_2_5 = 0.0;
                   real_t q_acc_3_0 = 0.0;
                   real_t q_acc_3_1 = 0.0;
                   real_t q_acc_3_2 = 0.0;
                   real_t q_acc_3_3 = 0.0;
                   real_t q_acc_3_4 = 0.0;
                   real_t q_acc_3_5 = 0.0;
                   real_t q_acc_4_0 = 0.0;
                   real_t q_acc_4_1 = 0.0;
                   real_t q_acc_4_2 = 0.0;
                   real_t q_acc_4_3 = 0.0;
                   real_t q_acc_4_4 = 0.0;
                   real_t q_acc_4_5 = 0.0;
                   real_t q_acc_5_0 = 0.0;
                   real_t q_acc_5_1 = 0.0;
                   real_t q_acc_5_2 = 0.0;
                   real_t q_acc_5_3 = 0.0;
                   real_t q_acc_5_4 = 0.0;
                   real_t q_acc_5_5 = 0.0;
                   for (int64_t q = 0; q < 7; q += 1)
                   {
                      const real_t tmp_qloop_0 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q];
                      const real_t tmp_qloop_2 = (tmp_qloop_0*tmp_qloop_0);
                      const real_t tmp_qloop_3 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q];
                      const real_t tmp_qloop_4 = (tmp_qloop_3*tmp_qloop_3);
                      const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_4;
                      const real_t tmp_qloop_6 = pow(tmp_qloop_5, -0.50000000000000000);
                      const real_t tmp_qloop_13 = tmp_qloop_12*tmp_qloop_6;
                      const real_t tmp_qloop_14 = tmp_qloop_1*tmp_qloop_13;
                      const real_t tmp_qloop_15 = pow(tmp_qloop_5, -1.5000000000000000);
                      const real_t tmp_qloop_16 = radRayVertex + tmp_qloop_11*(tmp_qloop_1*(-rayVertex_0 + tmp_qloop_0) - tmp_qloop_8*(-rayVertex_1 + tmp_qloop_3));
                      const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_16;
                      const real_t tmp_qloop_18 = tmp_qloop_17*1.0;
                      const real_t tmp_qloop_19 = tmp_qloop_13*tmp_qloop_8;
                      const real_t tmp_qloop_20 = tmp_qloop_0*tmp_qloop_18;
                      const real_t tmp_qloop_23 = tmp_qloop_12*tmp_qloop_15;
                      const real_t tmp_qloop_24 = tmp_qloop_1*tmp_qloop_23;
                      const real_t tmp_qloop_25 = tmp_qloop_2*tmp_qloop_24;
                      const real_t tmp_qloop_26 = tmp_qloop_16*pow(tmp_qloop_5, -2.5000000000000000)*3.0;
                      const real_t tmp_qloop_27 = tmp_qloop_0*tmp_qloop_26*tmp_qloop_4;
                      const real_t tmp_qloop_28 = tmp_qloop_24*tmp_qloop_4 - tmp_qloop_27;
                      const real_t tmp_qloop_29 = tmp_qloop_23*tmp_qloop_7;
                      const real_t tmp_qloop_30 = tmp_qloop_0*tmp_qloop_3;
                      const real_t tmp_qloop_31 = tmp_qloop_24*tmp_qloop_30;
                      const real_t tmp_qloop_32 = tmp_qloop_17*2.0;
                      const real_t tmp_qloop_33 = tmp_qloop_2*tmp_qloop_26*tmp_qloop_3;
                      const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_3 - tmp_qloop_33;
                      const real_t tmp_qloop_35 = tmp_qloop_29*tmp_qloop_30;
                      const real_t tmp_qloop_36 = tmp_qloop_23*tmp_qloop_30*tmp_qloop_8;
                      const real_t tmp_qloop_37 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                      const real_t tmp_qloop_38 = (_data_q_p_0[q]*_data_q_p_0[q]);
                      const real_t tmp_qloop_39 = tmp_qloop_38*2.0;
                      const real_t tmp_qloop_40 = tmp_qloop_39 - _data_q_p_0[q];
                      const real_t tmp_qloop_41 = (_data_q_p_1[q]*_data_q_p_1[q]);
                      const real_t tmp_qloop_42 = tmp_qloop_41*2.0;
                      const real_t tmp_qloop_43 = tmp_qloop_42 - _data_q_p_1[q];
                      const real_t tmp_qloop_44 = -tmp_qloop_37 + tmp_qloop_41*-4.0 + 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_45 = -tmp_qloop_37 + tmp_qloop_38*-4.0 + 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_46 = tmp_qloop_37 + tmp_qloop_39 + tmp_qloop_42 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                      const real_t tmp_qloop_47 = tmp_qloop_37*ux_dof_3 + tmp_qloop_40*ux_dof_1 + tmp_qloop_43*ux_dof_2 + tmp_qloop_44*ux_dof_4 + tmp_qloop_45*ux_dof_5 + tmp_qloop_46*ux_dof_0;
                      const real_t tmp_qloop_48 = tmp_qloop_37*uy_dof_3 + tmp_qloop_40*uy_dof_1 + tmp_qloop_43*uy_dof_2 + tmp_qloop_44*uy_dof_4 + tmp_qloop_45*uy_dof_5 + tmp_qloop_46*uy_dof_0;
                      const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                      const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                      const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                      const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                      const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                      const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                      const real_t abs_det_jac_blending = tmp_qloop_21;
                      const real_t tmp_qloop_50 = abs_det_jac_blending*_data_q_w[q];
                      const real_t tmp_qloop_51 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1];
                      const real_t tmp_qloop_57 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7];
                      const real_t tmp_qloop_58 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8];
                      const real_t tmp_qloop_59 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9];
                      const real_t tmp_qloop_60 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10];
                      const real_t tmp_qloop_61 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11];
                      const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                      const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                      const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                      const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                      const real_t tmp_qloop_49 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]);
                      const real_t tmp_qloop_52 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]);
                      const real_t tmp_qloop_53 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]);
                      const real_t tmp_qloop_54 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]);
                      const real_t tmp_qloop_55 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]);
                      const real_t tmp_qloop_56 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]);
                      const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                      const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                      const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                      const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                      const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                      const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                      const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                      const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                      const real_t q_tmp_0_0 = tmp_qloop_49*tmp_qloop_51;
                      const real_t q_tmp_0_1 = tmp_qloop_51*tmp_qloop_52;
                      const real_t q_tmp_0_2 = tmp_qloop_51*tmp_qloop_53;
                      const real_t q_tmp_0_3 = tmp_qloop_51*tmp_qloop_54;
                      const real_t q_tmp_0_4 = tmp_qloop_51*tmp_qloop_55;
                      const real_t q_tmp_0_5 = tmp_qloop_51*tmp_qloop_56;
                      const real_t q_tmp_1_0 = tmp_qloop_49*tmp_qloop_57;
                      const real_t q_tmp_1_1 = tmp_qloop_52*tmp_qloop_57;
                      const real_t q_tmp_1_2 = tmp_qloop_53*tmp_qloop_57;
                      const real_t q_tmp_1_3 = tmp_qloop_54*tmp_qloop_57;
                      const real_t q_tmp_1_4 = tmp_qloop_55*tmp_qloop_57;
                      const real_t q_tmp_1_5 = tmp_qloop_56*tmp_qloop_57;
                      const real_t q_tmp_2_0 = tmp_qloop_49*tmp_qloop_58;
                      const real_t q_tmp_2_1 = tmp_qloop_52*tmp_qloop_58;
                      const real_t q_tmp_2_2 = tmp_qloop_53*tmp_qloop_58;
                      const real_t q_tmp_2_3 = tmp_qloop_54*tmp_qloop_58;
                      const real_t q_tmp_2_4 = tmp_qloop_55*tmp_qloop_58;
                      const real_t q_tmp_2_5 = tmp_qloop_56*tmp_qloop_58;
                      const real_t q_tmp_3_0 = tmp_qloop_49*tmp_qloop_59;
                      const real_t q_tmp_3_1 = tmp_qloop_52*tmp_qloop_59;
                      const real_t q_tmp_3_2 = tmp_qloop_53*tmp_qloop_59;
                      const real_t q_tmp_3_3 = tmp_qloop_54*tmp_qloop_59;
                      const real_t q_tmp_3_4 = tmp_qloop_55*tmp_qloop_59;
                      const real_t q_tmp_3_5 = tmp_qloop_56*tmp_qloop_59;
                      const real_t q_tmp_4_0 = tmp_qloop_49*tmp_qloop_60;
                      const real_t q_tmp_4_1 = tmp_qloop_52*tmp_qloop_60;
                      const real_t q_tmp_4_2 = tmp_qloop_53*tmp_qloop_60;
                      const real_t q_tmp_4_3 = tmp_qloop_54*tmp_qloop_60;
                      const real_t q_tmp_4_4 = tmp_qloop_55*tmp_qloop_60;
                      const real_t q_tmp_4_5 = tmp_qloop_56*tmp_qloop_60;
                      const real_t q_tmp_5_0 = tmp_qloop_49*tmp_qloop_61;
                      const real_t q_tmp_5_1 = tmp_qloop_52*tmp_qloop_61;
                      const real_t q_tmp_5_2 = tmp_qloop_53*tmp_qloop_61;
                      const real_t q_tmp_5_3 = tmp_qloop_54*tmp_qloop_61;
                      const real_t q_tmp_5_4 = tmp_qloop_55*tmp_qloop_61;
                      const real_t q_tmp_5_5 = tmp_qloop_56*tmp_qloop_61;
                      q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                      q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                      q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                      q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                      q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                      q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                      q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                      q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                      q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                      q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                      q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                      q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                      q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                      q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                      q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                      q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                      q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                      q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                      q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                      q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                      q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                      q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                      q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                      q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                      q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                      q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                      q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                      q_acc_4_3 = q_acc_4_3 + q_tmp_4_3;
                      q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                      q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                      q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                      q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                      q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                      q_acc_5_3 = q_acc_5_3 + q_tmp_5_3;
                      q_acc_5_4 = q_acc_5_4 + q_tmp_5_4;
                      q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                   }
                   const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
                   const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
                   const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
                   const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
                   const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
                   const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
                   const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
                   const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
                   const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
                   const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
                   const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
                   const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
                   const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
                   const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
                   const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
                   const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
                   const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
                   const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
                   const real_t elMat_3_0 = q_acc_3_0*toMatrixScaling;
                   const real_t elMat_3_1 = q_acc_3_1*toMatrixScaling;
                   const real_t elMat_3_2 = q_acc_3_2*toMatrixScaling;
                   const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
                   const real_t elMat_3_4 = q_acc_3_4*toMatrixScaling;
                   const real_t elMat_3_5 = q_acc_3_5*toMatrixScaling;
                   const real_t elMat_4_0 = q_acc_4_0*toMatrixScaling;
                   const real_t elMat_4_1 = q_acc_4_1*toMatrixScaling;
                   const real_t elMat_4_2 = q_acc_4_2*toMatrixScaling;
                   const real_t elMat_4_3 = q_acc_4_3*toMatrixScaling;
                   const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
                   const real_t elMat_4_5 = q_acc_4_5*toMatrixScaling;
                   const real_t elMat_5_0 = q_acc_5_0*toMatrixScaling;
                   const real_t elMat_5_1 = q_acc_5_1*toMatrixScaling;
                   const real_t elMat_5_2 = q_acc_5_2*toMatrixScaling;
                   const real_t elMat_5_3 = q_acc_5_3*toMatrixScaling;
                   const real_t elMat_5_4 = q_acc_5_4*toMatrixScaling;
                   const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
               
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
             const real_t tmp_moved_constant_0 = _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_1 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_2 = _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_3 = _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_4 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_5 = _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             const real_t tmp_moved_constant_6 = _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_7 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_8 = _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             const real_t tmp_moved_constant_9 = _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t tmp_moved_constant_10 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             const real_t tmp_moved_constant_11 = _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
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
                   real_t q_acc_0_1 = 0.0;
                   real_t q_acc_0_2 = 0.0;
                   real_t q_acc_0_3 = 0.0;
                   real_t q_acc_0_4 = 0.0;
                   real_t q_acc_0_5 = 0.0;
                   real_t q_acc_1_0 = 0.0;
                   real_t q_acc_1_1 = 0.0;
                   real_t q_acc_1_2 = 0.0;
                   real_t q_acc_1_3 = 0.0;
                   real_t q_acc_1_4 = 0.0;
                   real_t q_acc_1_5 = 0.0;
                   real_t q_acc_2_0 = 0.0;
                   real_t q_acc_2_1 = 0.0;
                   real_t q_acc_2_2 = 0.0;
                   real_t q_acc_2_3 = 0.0;
                   real_t q_acc_2_4 = 0.0;
                   real_t q_acc_2_5 = 0.0;
                   real_t q_acc_3_0 = 0.0;
                   real_t q_acc_3_1 = 0.0;
                   real_t q_acc_3_2 = 0.0;
                   real_t q_acc_3_3 = 0.0;
                   real_t q_acc_3_4 = 0.0;
                   real_t q_acc_3_5 = 0.0;
                   real_t q_acc_4_0 = 0.0;
                   real_t q_acc_4_1 = 0.0;
                   real_t q_acc_4_2 = 0.0;
                   real_t q_acc_4_3 = 0.0;
                   real_t q_acc_4_4 = 0.0;
                   real_t q_acc_4_5 = 0.0;
                   real_t q_acc_5_0 = 0.0;
                   real_t q_acc_5_1 = 0.0;
                   real_t q_acc_5_2 = 0.0;
                   real_t q_acc_5_3 = 0.0;
                   real_t q_acc_5_4 = 0.0;
                   real_t q_acc_5_5 = 0.0;
                   for (int64_t q = 0; q < 7; q += 1)
                   {
                      const real_t tmp_qloop_0 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q];
                      const real_t tmp_qloop_2 = (tmp_qloop_0*tmp_qloop_0);
                      const real_t tmp_qloop_3 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q];
                      const real_t tmp_qloop_4 = (tmp_qloop_3*tmp_qloop_3);
                      const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_4;
                      const real_t tmp_qloop_6 = pow(tmp_qloop_5, -0.50000000000000000);
                      const real_t tmp_qloop_13 = tmp_qloop_12*tmp_qloop_6;
                      const real_t tmp_qloop_14 = tmp_qloop_1*tmp_qloop_13;
                      const real_t tmp_qloop_15 = pow(tmp_qloop_5, -1.5000000000000000);
                      const real_t tmp_qloop_16 = radRayVertex + tmp_qloop_11*(tmp_qloop_1*(-rayVertex_0 + tmp_qloop_0) - tmp_qloop_8*(-rayVertex_1 + tmp_qloop_3));
                      const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_16;
                      const real_t tmp_qloop_18 = tmp_qloop_17*1.0;
                      const real_t tmp_qloop_19 = tmp_qloop_13*tmp_qloop_8;
                      const real_t tmp_qloop_20 = tmp_qloop_0*tmp_qloop_18;
                      const real_t tmp_qloop_23 = tmp_qloop_12*tmp_qloop_15;
                      const real_t tmp_qloop_24 = tmp_qloop_1*tmp_qloop_23;
                      const real_t tmp_qloop_25 = tmp_qloop_2*tmp_qloop_24;
                      const real_t tmp_qloop_26 = tmp_qloop_16*pow(tmp_qloop_5, -2.5000000000000000)*3.0;
                      const real_t tmp_qloop_27 = tmp_qloop_0*tmp_qloop_26*tmp_qloop_4;
                      const real_t tmp_qloop_28 = tmp_qloop_24*tmp_qloop_4 - tmp_qloop_27;
                      const real_t tmp_qloop_29 = tmp_qloop_23*tmp_qloop_7;
                      const real_t tmp_qloop_30 = tmp_qloop_0*tmp_qloop_3;
                      const real_t tmp_qloop_31 = tmp_qloop_24*tmp_qloop_30;
                      const real_t tmp_qloop_32 = tmp_qloop_17*2.0;
                      const real_t tmp_qloop_33 = tmp_qloop_2*tmp_qloop_26*tmp_qloop_3;
                      const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_3 - tmp_qloop_33;
                      const real_t tmp_qloop_35 = tmp_qloop_29*tmp_qloop_30;
                      const real_t tmp_qloop_36 = tmp_qloop_23*tmp_qloop_30*tmp_qloop_8;
                      const real_t tmp_qloop_37 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                      const real_t tmp_qloop_38 = (_data_q_p_0[q]*_data_q_p_0[q]);
                      const real_t tmp_qloop_39 = tmp_qloop_38*2.0;
                      const real_t tmp_qloop_40 = tmp_qloop_39 - _data_q_p_0[q];
                      const real_t tmp_qloop_41 = (_data_q_p_1[q]*_data_q_p_1[q]);
                      const real_t tmp_qloop_42 = tmp_qloop_41*2.0;
                      const real_t tmp_qloop_43 = tmp_qloop_42 - _data_q_p_1[q];
                      const real_t tmp_qloop_44 = -tmp_qloop_37 + tmp_qloop_41*-4.0 + 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_45 = -tmp_qloop_37 + tmp_qloop_38*-4.0 + 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_46 = tmp_qloop_37 + tmp_qloop_39 + tmp_qloop_42 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                      const real_t tmp_qloop_47 = tmp_moved_constant_0*tmp_qloop_46 + tmp_moved_constant_1*tmp_qloop_40 + tmp_moved_constant_2*tmp_qloop_43 + tmp_moved_constant_3*tmp_qloop_37 + tmp_moved_constant_4*tmp_qloop_44 + tmp_moved_constant_5*tmp_qloop_45;
                      const real_t tmp_qloop_48 = tmp_moved_constant_10*tmp_qloop_44 + tmp_moved_constant_11*tmp_qloop_45 + tmp_moved_constant_6*tmp_qloop_46 + tmp_moved_constant_7*tmp_qloop_40 + tmp_moved_constant_8*tmp_qloop_43 + tmp_moved_constant_9*tmp_qloop_37;
                      const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                      const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                      const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                      const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                      const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                      const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                      const real_t abs_det_jac_blending = tmp_qloop_21;
                      const real_t tmp_qloop_50 = abs_det_jac_blending*_data_q_w[q];
                      const real_t tmp_qloop_51 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_BLUE[12*q + 1];
                      const real_t tmp_qloop_57 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_BLUE[12*q + 7];
                      const real_t tmp_qloop_58 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_BLUE[12*q + 8];
                      const real_t tmp_qloop_59 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_BLUE[12*q + 9];
                      const real_t tmp_qloop_60 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_BLUE[12*q + 10];
                      const real_t tmp_qloop_61 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_BLUE[12*q + 11];
                      const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                      const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                      const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                      const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                      const real_t tmp_qloop_49 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q]);
                      const real_t tmp_qloop_52 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 2] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 1]);
                      const real_t tmp_qloop_53 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 3] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 2]);
                      const real_t tmp_qloop_54 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 4] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 3]);
                      const real_t tmp_qloop_55 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 5] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 4]);
                      const real_t tmp_qloop_56 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_BLUE[12*q + 6] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_BLUE[6*q + 5]);
                      const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                      const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                      const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                      const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                      const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                      const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                      const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                      const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                      const real_t q_tmp_0_0 = tmp_qloop_49*tmp_qloop_51;
                      const real_t q_tmp_0_1 = tmp_qloop_51*tmp_qloop_52;
                      const real_t q_tmp_0_2 = tmp_qloop_51*tmp_qloop_53;
                      const real_t q_tmp_0_3 = tmp_qloop_51*tmp_qloop_54;
                      const real_t q_tmp_0_4 = tmp_qloop_51*tmp_qloop_55;
                      const real_t q_tmp_0_5 = tmp_qloop_51*tmp_qloop_56;
                      const real_t q_tmp_1_0 = tmp_qloop_49*tmp_qloop_57;
                      const real_t q_tmp_1_1 = tmp_qloop_52*tmp_qloop_57;
                      const real_t q_tmp_1_2 = tmp_qloop_53*tmp_qloop_57;
                      const real_t q_tmp_1_3 = tmp_qloop_54*tmp_qloop_57;
                      const real_t q_tmp_1_4 = tmp_qloop_55*tmp_qloop_57;
                      const real_t q_tmp_1_5 = tmp_qloop_56*tmp_qloop_57;
                      const real_t q_tmp_2_0 = tmp_qloop_49*tmp_qloop_58;
                      const real_t q_tmp_2_1 = tmp_qloop_52*tmp_qloop_58;
                      const real_t q_tmp_2_2 = tmp_qloop_53*tmp_qloop_58;
                      const real_t q_tmp_2_3 = tmp_qloop_54*tmp_qloop_58;
                      const real_t q_tmp_2_4 = tmp_qloop_55*tmp_qloop_58;
                      const real_t q_tmp_2_5 = tmp_qloop_56*tmp_qloop_58;
                      const real_t q_tmp_3_0 = tmp_qloop_49*tmp_qloop_59;
                      const real_t q_tmp_3_1 = tmp_qloop_52*tmp_qloop_59;
                      const real_t q_tmp_3_2 = tmp_qloop_53*tmp_qloop_59;
                      const real_t q_tmp_3_3 = tmp_qloop_54*tmp_qloop_59;
                      const real_t q_tmp_3_4 = tmp_qloop_55*tmp_qloop_59;
                      const real_t q_tmp_3_5 = tmp_qloop_56*tmp_qloop_59;
                      const real_t q_tmp_4_0 = tmp_qloop_49*tmp_qloop_60;
                      const real_t q_tmp_4_1 = tmp_qloop_52*tmp_qloop_60;
                      const real_t q_tmp_4_2 = tmp_qloop_53*tmp_qloop_60;
                      const real_t q_tmp_4_3 = tmp_qloop_54*tmp_qloop_60;
                      const real_t q_tmp_4_4 = tmp_qloop_55*tmp_qloop_60;
                      const real_t q_tmp_4_5 = tmp_qloop_56*tmp_qloop_60;
                      const real_t q_tmp_5_0 = tmp_qloop_49*tmp_qloop_61;
                      const real_t q_tmp_5_1 = tmp_qloop_52*tmp_qloop_61;
                      const real_t q_tmp_5_2 = tmp_qloop_53*tmp_qloop_61;
                      const real_t q_tmp_5_3 = tmp_qloop_54*tmp_qloop_61;
                      const real_t q_tmp_5_4 = tmp_qloop_55*tmp_qloop_61;
                      const real_t q_tmp_5_5 = tmp_qloop_56*tmp_qloop_61;
                      q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                      q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                      q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                      q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                      q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                      q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                      q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                      q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                      q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                      q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                      q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                      q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                      q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                      q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                      q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                      q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                      q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                      q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                      q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                      q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                      q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                      q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                      q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                      q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                      q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                      q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                      q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                      q_acc_4_3 = q_acc_4_3 + q_tmp_4_3;
                      q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                      q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                      q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                      q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                      q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                      q_acc_5_3 = q_acc_5_3 + q_tmp_5_3;
                      q_acc_5_4 = q_acc_5_4 + q_tmp_5_4;
                      q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                   }
                   const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
                   const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
                   const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
                   const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
                   const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
                   const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
                   const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
                   const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
                   const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
                   const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
                   const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
                   const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
                   const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
                   const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
                   const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
                   const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
                   const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
                   const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
                   const real_t elMat_3_0 = q_acc_3_0*toMatrixScaling;
                   const real_t elMat_3_1 = q_acc_3_1*toMatrixScaling;
                   const real_t elMat_3_2 = q_acc_3_2*toMatrixScaling;
                   const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
                   const real_t elMat_3_4 = q_acc_3_4*toMatrixScaling;
                   const real_t elMat_3_5 = q_acc_3_5*toMatrixScaling;
                   const real_t elMat_4_0 = q_acc_4_0*toMatrixScaling;
                   const real_t elMat_4_1 = q_acc_4_1*toMatrixScaling;
                   const real_t elMat_4_2 = q_acc_4_2*toMatrixScaling;
                   const real_t elMat_4_3 = q_acc_4_3*toMatrixScaling;
                   const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
                   const real_t elMat_4_5 = q_acc_4_5*toMatrixScaling;
                   const real_t elMat_5_0 = q_acc_5_0*toMatrixScaling;
                   const real_t elMat_5_1 = q_acc_5_1*toMatrixScaling;
                   const real_t elMat_5_2 = q_acc_5_2*toMatrixScaling;
                   const real_t elMat_5_3 = q_acc_5_3*toMatrixScaling;
                   const real_t elMat_5_4 = q_acc_5_4*toMatrixScaling;
                   const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
               
                   std::vector< uint_t > _data_rowIdx( 6 );
                   std::vector< uint_t > _data_colIdx( 6 );
                   std::vector< real_t > _data_mat( 36 );
               
                   _data_rowIdx[0] = ((uint64_t)(_data_dstVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_rowIdx[1] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[2] = ((uint64_t)(_data_dstVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_rowIdx[3] = ((uint64_t)(_data_dstEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_rowIdx[4] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_rowIdx[5] = ((uint64_t)(_data_dstEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
                   _data_colIdx[0] = ((uint64_t)(_data_srcVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]));
                   _data_colIdx[1] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[2] = ((uint64_t)(_data_srcVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]));
                   _data_colIdx[3] = ((uint64_t)(_data_srcEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]));
                   _data_colIdx[4] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]));
                   _data_colIdx[5] = ((uint64_t)(_data_srcEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]));
               
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
          for (int64_t ctr_0 = -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
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
                   real_t q_acc_0_1 = 0.0;
                   real_t q_acc_0_2 = 0.0;
                   real_t q_acc_0_3 = 0.0;
                   real_t q_acc_0_4 = 0.0;
                   real_t q_acc_0_5 = 0.0;
                   real_t q_acc_1_0 = 0.0;
                   real_t q_acc_1_1 = 0.0;
                   real_t q_acc_1_2 = 0.0;
                   real_t q_acc_1_3 = 0.0;
                   real_t q_acc_1_4 = 0.0;
                   real_t q_acc_1_5 = 0.0;
                   real_t q_acc_2_0 = 0.0;
                   real_t q_acc_2_1 = 0.0;
                   real_t q_acc_2_2 = 0.0;
                   real_t q_acc_2_3 = 0.0;
                   real_t q_acc_2_4 = 0.0;
                   real_t q_acc_2_5 = 0.0;
                   real_t q_acc_3_0 = 0.0;
                   real_t q_acc_3_1 = 0.0;
                   real_t q_acc_3_2 = 0.0;
                   real_t q_acc_3_3 = 0.0;
                   real_t q_acc_3_4 = 0.0;
                   real_t q_acc_3_5 = 0.0;
                   real_t q_acc_4_0 = 0.0;
                   real_t q_acc_4_1 = 0.0;
                   real_t q_acc_4_2 = 0.0;
                   real_t q_acc_4_3 = 0.0;
                   real_t q_acc_4_4 = 0.0;
                   real_t q_acc_4_5 = 0.0;
                   real_t q_acc_5_0 = 0.0;
                   real_t q_acc_5_1 = 0.0;
                   real_t q_acc_5_2 = 0.0;
                   real_t q_acc_5_3 = 0.0;
                   real_t q_acc_5_4 = 0.0;
                   real_t q_acc_5_5 = 0.0;
                   for (int64_t q = 0; q < 7; q += 1)
                   {
                      const real_t tmp_qloop_0 = p_affine_0_0 + (-p_affine_0_0 + p_affine_1_0)*_data_q_p_0[q] + (-p_affine_0_0 + p_affine_2_0)*_data_q_p_1[q];
                      const real_t tmp_qloop_2 = (tmp_qloop_0*tmp_qloop_0);
                      const real_t tmp_qloop_3 = p_affine_0_1 + (-p_affine_0_1 + p_affine_1_1)*_data_q_p_0[q] + (-p_affine_0_1 + p_affine_2_1)*_data_q_p_1[q];
                      const real_t tmp_qloop_4 = (tmp_qloop_3*tmp_qloop_3);
                      const real_t tmp_qloop_5 = tmp_qloop_2 + tmp_qloop_4;
                      const real_t tmp_qloop_6 = pow(tmp_qloop_5, -0.50000000000000000);
                      const real_t tmp_qloop_13 = tmp_qloop_12*tmp_qloop_6;
                      const real_t tmp_qloop_14 = tmp_qloop_1*tmp_qloop_13;
                      const real_t tmp_qloop_15 = pow(tmp_qloop_5, -1.5000000000000000);
                      const real_t tmp_qloop_16 = radRayVertex + tmp_qloop_11*(tmp_qloop_1*(-rayVertex_0 + tmp_qloop_0) - tmp_qloop_8*(-rayVertex_1 + tmp_qloop_3));
                      const real_t tmp_qloop_17 = tmp_qloop_15*tmp_qloop_16;
                      const real_t tmp_qloop_18 = tmp_qloop_17*1.0;
                      const real_t tmp_qloop_19 = tmp_qloop_13*tmp_qloop_8;
                      const real_t tmp_qloop_20 = tmp_qloop_0*tmp_qloop_18;
                      const real_t tmp_qloop_23 = tmp_qloop_12*tmp_qloop_15;
                      const real_t tmp_qloop_24 = tmp_qloop_1*tmp_qloop_23;
                      const real_t tmp_qloop_25 = tmp_qloop_2*tmp_qloop_24;
                      const real_t tmp_qloop_26 = tmp_qloop_16*pow(tmp_qloop_5, -2.5000000000000000)*3.0;
                      const real_t tmp_qloop_27 = tmp_qloop_0*tmp_qloop_26*tmp_qloop_4;
                      const real_t tmp_qloop_28 = tmp_qloop_24*tmp_qloop_4 - tmp_qloop_27;
                      const real_t tmp_qloop_29 = tmp_qloop_23*tmp_qloop_7;
                      const real_t tmp_qloop_30 = tmp_qloop_0*tmp_qloop_3;
                      const real_t tmp_qloop_31 = tmp_qloop_24*tmp_qloop_30;
                      const real_t tmp_qloop_32 = tmp_qloop_17*2.0;
                      const real_t tmp_qloop_33 = tmp_qloop_2*tmp_qloop_26*tmp_qloop_3;
                      const real_t tmp_qloop_34 = tmp_qloop_18*tmp_qloop_3 - tmp_qloop_33;
                      const real_t tmp_qloop_35 = tmp_qloop_29*tmp_qloop_30;
                      const real_t tmp_qloop_36 = tmp_qloop_23*tmp_qloop_30*tmp_qloop_8;
                      const real_t tmp_qloop_37 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                      const real_t tmp_qloop_38 = (_data_q_p_0[q]*_data_q_p_0[q]);
                      const real_t tmp_qloop_39 = tmp_qloop_38*2.0;
                      const real_t tmp_qloop_40 = tmp_qloop_39 - _data_q_p_0[q];
                      const real_t tmp_qloop_41 = (_data_q_p_1[q]*_data_q_p_1[q]);
                      const real_t tmp_qloop_42 = tmp_qloop_41*2.0;
                      const real_t tmp_qloop_43 = tmp_qloop_42 - _data_q_p_1[q];
                      const real_t tmp_qloop_44 = -tmp_qloop_37 + tmp_qloop_41*-4.0 + 4.0*_data_q_p_1[q];
                      const real_t tmp_qloop_45 = -tmp_qloop_37 + tmp_qloop_38*-4.0 + 4.0*_data_q_p_0[q];
                      const real_t tmp_qloop_46 = tmp_qloop_37 + tmp_qloop_39 + tmp_qloop_42 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                      const real_t tmp_qloop_47 = tmp_qloop_37*ux_dof_3 + tmp_qloop_40*ux_dof_1 + tmp_qloop_43*ux_dof_2 + tmp_qloop_44*ux_dof_4 + tmp_qloop_45*ux_dof_5 + tmp_qloop_46*ux_dof_0;
                      const real_t tmp_qloop_48 = tmp_qloop_37*uy_dof_3 + tmp_qloop_40*uy_dof_1 + tmp_qloop_43*uy_dof_2 + tmp_qloop_44*uy_dof_4 + tmp_qloop_45*uy_dof_5 + tmp_qloop_46*uy_dof_0;
                      const real_t jac_blending_0_0 = tmp_qloop_0*tmp_qloop_14 + tmp_qloop_18*tmp_qloop_4;
                      const real_t jac_blending_0_1 = -tmp_qloop_0*tmp_qloop_15*tmp_qloop_16*tmp_qloop_3 - tmp_qloop_0*tmp_qloop_19;
                      const real_t jac_blending_1_0 = tmp_qloop_14*tmp_qloop_3 - tmp_qloop_20*tmp_qloop_3;
                      const real_t jac_blending_1_1 = tmp_qloop_15*tmp_qloop_16*tmp_qloop_2*1.0 - tmp_qloop_19*tmp_qloop_3;
                      const real_t tmp_qloop_21 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                      const real_t tmp_qloop_22 = 1.0 / (tmp_qloop_21);
                      const real_t abs_det_jac_blending = tmp_qloop_21;
                      const real_t tmp_qloop_50 = abs_det_jac_blending*_data_q_w[q];
                      const real_t tmp_qloop_51 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 1];
                      const real_t tmp_qloop_57 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 7];
                      const real_t tmp_qloop_58 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 8];
                      const real_t tmp_qloop_59 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 9];
                      const real_t tmp_qloop_60 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 10];
                      const real_t tmp_qloop_61 = tmp_qloop_50*_data_tabulated_and_untitled_0_0_GRAY[12*q + 11];
                      const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_22;
                      const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_22;
                      const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_22;
                      const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_22;
                      const real_t tmp_qloop_49 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q]);
                      const real_t tmp_qloop_52 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 2] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 1]);
                      const real_t tmp_qloop_53 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 3] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 2]);
                      const real_t tmp_qloop_54 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 4] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 3]);
                      const real_t tmp_qloop_55 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 5] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 4]);
                      const real_t tmp_qloop_56 = tmp_qloop_47*(jac_blending_inv_0_0*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6] + jac_blending_inv_1_0*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]) + tmp_qloop_48*(jac_blending_inv_0_1*_data_tabulated_and_untitled_0_0_GRAY[12*q + 6] + jac_blending_inv_1_1*_data_tabulated_and_untitled_1_0_GRAY[6*q + 5]);
                      const real_t hessian_blending_0_0_0 = tmp_qloop_14 - tmp_qloop_25 + tmp_qloop_28;
                      const real_t hessian_blending_1_0_0 = -tmp_qloop_26*(tmp_qloop_3*tmp_qloop_3*tmp_qloop_3) + tmp_qloop_29*tmp_qloop_4 + tmp_qloop_3*tmp_qloop_32 - tmp_qloop_31;
                      const real_t hessian_blending_0_0_1 = tmp_qloop_1*tmp_qloop_11*tmp_qloop_15*tmp_qloop_30*-2.0 - tmp_qloop_34;
                      const real_t hessian_blending_1_0_1 = tmp_qloop_1*tmp_qloop_10*tmp_qloop_6*tmp_qloop_9*1.0 - tmp_qloop_20 - tmp_qloop_28 - tmp_qloop_35;
                      const real_t hessian_blending_0_1_0 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_31 - tmp_qloop_34;
                      const real_t hessian_blending_1_1_0 = -tmp_qloop_20 + tmp_qloop_27 - tmp_qloop_35 + tmp_qloop_36;
                      const real_t hessian_blending_0_1_1 = tmp_qloop_0*tmp_qloop_32 - (tmp_qloop_0*tmp_qloop_0*tmp_qloop_0)*tmp_qloop_26 + tmp_qloop_25 + tmp_qloop_36;
                      const real_t hessian_blending_1_1_1 = tmp_qloop_10*tmp_qloop_15*tmp_qloop_2*tmp_qloop_7*tmp_qloop_9*1.0 + tmp_qloop_10*tmp_qloop_15*tmp_qloop_4*tmp_qloop_8*tmp_qloop_9*1.0 - tmp_qloop_19 - tmp_qloop_33;
                      const real_t q_tmp_0_0 = tmp_qloop_49*tmp_qloop_51;
                      const real_t q_tmp_0_1 = tmp_qloop_51*tmp_qloop_52;
                      const real_t q_tmp_0_2 = tmp_qloop_51*tmp_qloop_53;
                      const real_t q_tmp_0_3 = tmp_qloop_51*tmp_qloop_54;
                      const real_t q_tmp_0_4 = tmp_qloop_51*tmp_qloop_55;
                      const real_t q_tmp_0_5 = tmp_qloop_51*tmp_qloop_56;
                      const real_t q_tmp_1_0 = tmp_qloop_49*tmp_qloop_57;
                      const real_t q_tmp_1_1 = tmp_qloop_52*tmp_qloop_57;
                      const real_t q_tmp_1_2 = tmp_qloop_53*tmp_qloop_57;
                      const real_t q_tmp_1_3 = tmp_qloop_54*tmp_qloop_57;
                      const real_t q_tmp_1_4 = tmp_qloop_55*tmp_qloop_57;
                      const real_t q_tmp_1_5 = tmp_qloop_56*tmp_qloop_57;
                      const real_t q_tmp_2_0 = tmp_qloop_49*tmp_qloop_58;
                      const real_t q_tmp_2_1 = tmp_qloop_52*tmp_qloop_58;
                      const real_t q_tmp_2_2 = tmp_qloop_53*tmp_qloop_58;
                      const real_t q_tmp_2_3 = tmp_qloop_54*tmp_qloop_58;
                      const real_t q_tmp_2_4 = tmp_qloop_55*tmp_qloop_58;
                      const real_t q_tmp_2_5 = tmp_qloop_56*tmp_qloop_58;
                      const real_t q_tmp_3_0 = tmp_qloop_49*tmp_qloop_59;
                      const real_t q_tmp_3_1 = tmp_qloop_52*tmp_qloop_59;
                      const real_t q_tmp_3_2 = tmp_qloop_53*tmp_qloop_59;
                      const real_t q_tmp_3_3 = tmp_qloop_54*tmp_qloop_59;
                      const real_t q_tmp_3_4 = tmp_qloop_55*tmp_qloop_59;
                      const real_t q_tmp_3_5 = tmp_qloop_56*tmp_qloop_59;
                      const real_t q_tmp_4_0 = tmp_qloop_49*tmp_qloop_60;
                      const real_t q_tmp_4_1 = tmp_qloop_52*tmp_qloop_60;
                      const real_t q_tmp_4_2 = tmp_qloop_53*tmp_qloop_60;
                      const real_t q_tmp_4_3 = tmp_qloop_54*tmp_qloop_60;
                      const real_t q_tmp_4_4 = tmp_qloop_55*tmp_qloop_60;
                      const real_t q_tmp_4_5 = tmp_qloop_56*tmp_qloop_60;
                      const real_t q_tmp_5_0 = tmp_qloop_49*tmp_qloop_61;
                      const real_t q_tmp_5_1 = tmp_qloop_52*tmp_qloop_61;
                      const real_t q_tmp_5_2 = tmp_qloop_53*tmp_qloop_61;
                      const real_t q_tmp_5_3 = tmp_qloop_54*tmp_qloop_61;
                      const real_t q_tmp_5_4 = tmp_qloop_55*tmp_qloop_61;
                      const real_t q_tmp_5_5 = tmp_qloop_56*tmp_qloop_61;
                      q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                      q_acc_0_1 = q_acc_0_1 + q_tmp_0_1;
                      q_acc_0_2 = q_acc_0_2 + q_tmp_0_2;
                      q_acc_0_3 = q_acc_0_3 + q_tmp_0_3;
                      q_acc_0_4 = q_acc_0_4 + q_tmp_0_4;
                      q_acc_0_5 = q_acc_0_5 + q_tmp_0_5;
                      q_acc_1_0 = q_acc_1_0 + q_tmp_1_0;
                      q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                      q_acc_1_2 = q_acc_1_2 + q_tmp_1_2;
                      q_acc_1_3 = q_acc_1_3 + q_tmp_1_3;
                      q_acc_1_4 = q_acc_1_4 + q_tmp_1_4;
                      q_acc_1_5 = q_acc_1_5 + q_tmp_1_5;
                      q_acc_2_0 = q_acc_2_0 + q_tmp_2_0;
                      q_acc_2_1 = q_acc_2_1 + q_tmp_2_1;
                      q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                      q_acc_2_3 = q_acc_2_3 + q_tmp_2_3;
                      q_acc_2_4 = q_acc_2_4 + q_tmp_2_4;
                      q_acc_2_5 = q_acc_2_5 + q_tmp_2_5;
                      q_acc_3_0 = q_acc_3_0 + q_tmp_3_0;
                      q_acc_3_1 = q_acc_3_1 + q_tmp_3_1;
                      q_acc_3_2 = q_acc_3_2 + q_tmp_3_2;
                      q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                      q_acc_3_4 = q_acc_3_4 + q_tmp_3_4;
                      q_acc_3_5 = q_acc_3_5 + q_tmp_3_5;
                      q_acc_4_0 = q_acc_4_0 + q_tmp_4_0;
                      q_acc_4_1 = q_acc_4_1 + q_tmp_4_1;
                      q_acc_4_2 = q_acc_4_2 + q_tmp_4_2;
                      q_acc_4_3 = q_acc_4_3 + q_tmp_4_3;
                      q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                      q_acc_4_5 = q_acc_4_5 + q_tmp_4_5;
                      q_acc_5_0 = q_acc_5_0 + q_tmp_5_0;
                      q_acc_5_1 = q_acc_5_1 + q_tmp_5_1;
                      q_acc_5_2 = q_acc_5_2 + q_tmp_5_2;
                      q_acc_5_3 = q_acc_5_3 + q_tmp_5_3;
                      q_acc_5_4 = q_acc_5_4 + q_tmp_5_4;
                      q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                   }
                   const real_t elMat_0_0 = q_acc_0_0*toMatrixScaling;
                   const real_t elMat_0_1 = q_acc_0_1*toMatrixScaling;
                   const real_t elMat_0_2 = q_acc_0_2*toMatrixScaling;
                   const real_t elMat_0_3 = q_acc_0_3*toMatrixScaling;
                   const real_t elMat_0_4 = q_acc_0_4*toMatrixScaling;
                   const real_t elMat_0_5 = q_acc_0_5*toMatrixScaling;
                   const real_t elMat_1_0 = q_acc_1_0*toMatrixScaling;
                   const real_t elMat_1_1 = q_acc_1_1*toMatrixScaling;
                   const real_t elMat_1_2 = q_acc_1_2*toMatrixScaling;
                   const real_t elMat_1_3 = q_acc_1_3*toMatrixScaling;
                   const real_t elMat_1_4 = q_acc_1_4*toMatrixScaling;
                   const real_t elMat_1_5 = q_acc_1_5*toMatrixScaling;
                   const real_t elMat_2_0 = q_acc_2_0*toMatrixScaling;
                   const real_t elMat_2_1 = q_acc_2_1*toMatrixScaling;
                   const real_t elMat_2_2 = q_acc_2_2*toMatrixScaling;
                   const real_t elMat_2_3 = q_acc_2_3*toMatrixScaling;
                   const real_t elMat_2_4 = q_acc_2_4*toMatrixScaling;
                   const real_t elMat_2_5 = q_acc_2_5*toMatrixScaling;
                   const real_t elMat_3_0 = q_acc_3_0*toMatrixScaling;
                   const real_t elMat_3_1 = q_acc_3_1*toMatrixScaling;
                   const real_t elMat_3_2 = q_acc_3_2*toMatrixScaling;
                   const real_t elMat_3_3 = q_acc_3_3*toMatrixScaling;
                   const real_t elMat_3_4 = q_acc_3_4*toMatrixScaling;
                   const real_t elMat_3_5 = q_acc_3_5*toMatrixScaling;
                   const real_t elMat_4_0 = q_acc_4_0*toMatrixScaling;
                   const real_t elMat_4_1 = q_acc_4_1*toMatrixScaling;
                   const real_t elMat_4_2 = q_acc_4_2*toMatrixScaling;
                   const real_t elMat_4_3 = q_acc_4_3*toMatrixScaling;
                   const real_t elMat_4_4 = q_acc_4_4*toMatrixScaling;
                   const real_t elMat_4_5 = q_acc_4_5*toMatrixScaling;
                   const real_t elMat_5_0 = q_acc_5_0*toMatrixScaling;
                   const real_t elMat_5_1 = q_acc_5_1*toMatrixScaling;
                   const real_t elMat_5_2 = q_acc_5_2*toMatrixScaling;
                   const real_t elMat_5_3 = q_acc_5_3*toMatrixScaling;
                   const real_t elMat_5_4 = q_acc_5_4*toMatrixScaling;
                   const real_t elMat_5_5 = q_acc_5_5*toMatrixScaling;
               
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
    }
}
} // namespace operatorgeneration

} // namespace hyteg
