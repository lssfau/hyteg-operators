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

































#include "../P2VectorElementwiseFullStokesP1ViscosityDim.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2VectorElementwiseFullStokesP1ViscosityDim::computeInverseDiagonalOperatorValuesScaled_P2VectorElementwiseFullStokesP1ViscosityDim_macro_2D( real_t * RESTRICT  _data_invDiag__edge_0, real_t * RESTRICT  _data_invDiag__edge_1, real_t * RESTRICT  _data_invDiag__vertex_0, real_t * RESTRICT  _data_invDiag__vertex_1, real_t * RESTRICT  _data_mu, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t _data_q_w [] = {-0.28125, 0.26041666666666669, 0.26041666666666669, 0.26041666666666669};
   
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
       {
          /* FaceType.GRAY */
          const real_t _data_phi_0_0_GRAY [] = {0.33333333333333343, 0.33333333333333331, 0.33333333333333331, 0.20000000000000007, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, 0.60000000000000009, 0.20000000000000001, 0.20000000000000001};
      
          const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333348 + jac_affine_inv_1_0_GRAY*-0.33333333333333348)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999973 + jac_affine_inv_1_0_GRAY*0.19999999999999973)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*2.3999999999999999 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.3999999999999999 + jac_affine_inv_1_0_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999996 + jac_affine_inv_1_0_GRAY*0.19999999999999996)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.5999999999999999 + jac_affine_inv_1_0_GRAY*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-1.4000000000000001 + jac_affine_inv_1_0_GRAY*-1.4000000000000001)), ((real_t)(abs_det_jac_affine_GRAY)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004 + jac_affine_inv_1_0_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*1.5999999999999999 + jac_affine_inv_1_0_GRAY*-0.80000000000000004)), 0.0};
      
          const real_t _data_tabulated_and_untitled_0_1_GRAY [] = {0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-0.33333333333333348 + jac_affine_inv_1_0_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3333333333333333 + jac_affine_inv_1_0_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.3333333333333333 + jac_affine_inv_1_0_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_0_GRAY*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999973 + jac_affine_inv_1_0_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*2.3999999999999999 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-2.3999999999999999 + jac_affine_inv_1_0_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*0.19999999999999996 + jac_affine_inv_1_0_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-1.5999999999999999 + jac_affine_inv_1_0_GRAY*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_0_GRAY*-1.4000000000000001 + jac_affine_inv_1_0_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_GRAY*0.80000000000000004 + jac_affine_inv_1_0_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_GRAY*-0.80000000000000004 + jac_affine_inv_1_0_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_GRAY*1.5999999999999999 + jac_affine_inv_1_0_GRAY*-0.80000000000000004))};
      
          const real_t _data_tabulated_and_untitled_1_0_GRAY [] = {((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333348 + jac_affine_inv_1_1_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3333333333333333 + jac_affine_inv_1_1_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3333333333333333 + jac_affine_inv_1_1_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_1_GRAY*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999973 + jac_affine_inv_1_1_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*2.3999999999999999 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.3999999999999999 + jac_affine_inv_1_1_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999996 + jac_affine_inv_1_1_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.5999999999999999 + jac_affine_inv_1_1_GRAY*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-1.4000000000000001 + jac_affine_inv_1_1_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004 + jac_affine_inv_1_1_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*1.5999999999999999 + jac_affine_inv_1_1_GRAY*-0.80000000000000004)), 0.0};
      
          const real_t _data_tabulated_and_untitled_1_1_GRAY [] = {0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-0.33333333333333348 + jac_affine_inv_1_1_GRAY*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_GRAY*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3333333333333333 + jac_affine_inv_1_1_GRAY*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.3333333333333333 + jac_affine_inv_1_1_GRAY*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_GRAY*2.2204460492503131e-16 + jac_affine_inv_1_1_GRAY*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999973 + jac_affine_inv_1_1_GRAY*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*2.3999999999999999 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-2.3999999999999999 + jac_affine_inv_1_1_GRAY*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*0.19999999999999996 + jac_affine_inv_1_1_GRAY*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-1.5999999999999999 + jac_affine_inv_1_1_GRAY*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_1_GRAY*-1.4000000000000001 + jac_affine_inv_1_1_GRAY*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_GRAY*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_GRAY*0.80000000000000004 + jac_affine_inv_1_1_GRAY*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_GRAY*-0.80000000000000004 + jac_affine_inv_1_1_GRAY*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_GRAY*1.5999999999999999 + jac_affine_inv_1_1_GRAY*-0.80000000000000004))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge; ctr_0 += 1)
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
             const real_t mu_dof_0 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             const real_t mu_dof_1 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t mu_dof_2 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
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
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_11_11 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_qloop_0 = 2.0*(_data_tabulated_and_untitled_1_1_GRAY[7*q]*_data_tabulated_and_untitled_1_1_GRAY[7*q]);
                const real_t tmp_qloop_1 = 0.5*_data_tabulated_and_untitled_0_1_GRAY[7*q];
                const real_t tmp_qloop_2 = (mu_dof_0*_data_phi_0_0_GRAY[3*q] + mu_dof_1*_data_phi_0_0_GRAY[3*q + 1] + mu_dof_2*_data_phi_0_0_GRAY[3*q + 2])*_data_q_w[q];
                const real_t tmp_qloop_3 = 2.0*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 7]*_data_tabulated_and_untitled_0_0_GRAY[8*q + 7]);
                const real_t tmp_qloop_4 = 0.5*_data_tabulated_and_untitled_1_0_GRAY[7*q + 6];
                const real_t q_tmp_0_0 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q] + _data_tabulated_and_untitled_1_1_GRAY[7*q])*(_data_tabulated_and_untitled_0_0_GRAY[8*q] + _data_tabulated_and_untitled_1_1_GRAY[7*q]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_GRAY[7*q])*(_data_tabulated_and_untitled_0_1_GRAY[7*q] + _data_tabulated_and_untitled_1_0_GRAY[7*q])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_GRAY[8*q]*_data_tabulated_and_untitled_0_0_GRAY[8*q]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_1_1 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 2] + _data_tabulated_and_untitled_1_1_GRAY[7*q])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 2] + _data_tabulated_and_untitled_1_1_GRAY[7*q]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_GRAY[7*q + 1])*(_data_tabulated_and_untitled_0_1_GRAY[7*q] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 1])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]*_data_tabulated_and_untitled_0_0_GRAY[8*q + 2]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_2_2 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 3] + _data_tabulated_and_untitled_1_1_GRAY[7*q])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 3] + _data_tabulated_and_untitled_1_1_GRAY[7*q]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_GRAY[7*q + 2])*(_data_tabulated_and_untitled_0_1_GRAY[7*q] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 2])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 3]*_data_tabulated_and_untitled_0_0_GRAY[8*q + 3]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_3_3 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 4] + _data_tabulated_and_untitled_1_1_GRAY[7*q])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 4] + _data_tabulated_and_untitled_1_1_GRAY[7*q]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_GRAY[7*q + 3])*(_data_tabulated_and_untitled_0_1_GRAY[7*q] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 3])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 4]*_data_tabulated_and_untitled_0_0_GRAY[8*q + 4]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_4_4 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 5] + _data_tabulated_and_untitled_1_1_GRAY[7*q])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 5] + _data_tabulated_and_untitled_1_1_GRAY[7*q]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_GRAY[7*q + 4])*(_data_tabulated_and_untitled_0_1_GRAY[7*q] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 4])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 5]*_data_tabulated_and_untitled_0_0_GRAY[8*q + 5]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_5_5 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 6] + _data_tabulated_and_untitled_1_1_GRAY[7*q])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 6] + _data_tabulated_and_untitled_1_1_GRAY[7*q]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_GRAY[7*q + 5])*(_data_tabulated_and_untitled_0_1_GRAY[7*q] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 5])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 6]*_data_tabulated_and_untitled_0_0_GRAY[8*q + 6]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_6_6 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 1])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 1]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_GRAY[7*q + 1])*(_data_tabulated_and_untitled_0_1_GRAY[7*q + 1] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_GRAY[7*q + 1]*_data_tabulated_and_untitled_1_1_GRAY[7*q + 1]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_7_7 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 2])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 2]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_GRAY[7*q + 2])*(_data_tabulated_and_untitled_0_1_GRAY[7*q + 2] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_GRAY[7*q + 2]*_data_tabulated_and_untitled_1_1_GRAY[7*q + 2]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_8_8 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 3])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 3]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_GRAY[7*q + 3])*(_data_tabulated_and_untitled_0_1_GRAY[7*q + 3] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_GRAY[7*q + 3]*_data_tabulated_and_untitled_1_1_GRAY[7*q + 3]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_9_9 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 4])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 4]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_GRAY[7*q + 4])*(_data_tabulated_and_untitled_0_1_GRAY[7*q + 4] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_GRAY[7*q + 4]*_data_tabulated_and_untitled_1_1_GRAY[7*q + 4]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_10_10 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 5])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 5]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_GRAY[7*q + 5])*(_data_tabulated_and_untitled_0_1_GRAY[7*q + 5] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_GRAY[7*q + 5]*_data_tabulated_and_untitled_1_1_GRAY[7*q + 5]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                const real_t q_tmp_11_11 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 6])*(_data_tabulated_and_untitled_0_0_GRAY[8*q + 7] + _data_tabulated_and_untitled_1_1_GRAY[7*q + 6]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_GRAY[7*q + 6])*(_data_tabulated_and_untitled_0_1_GRAY[7*q + 6] + _data_tabulated_and_untitled_1_0_GRAY[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_GRAY[7*q + 6]*_data_tabulated_and_untitled_1_1_GRAY[7*q + 6]))*_data_tabulated_and_untitled_0_0_GRAY[8*q + 1]);
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
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
             const real_t elMatDiag_10 = q_acc_10_10;
             const real_t elMatDiag_11 = q_acc_11_11;
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))] = diagScaling*elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))];
          }
       }
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
       {
          /* FaceType.BLUE */
          const real_t _data_phi_0_0_BLUE [] = {0.33333333333333343, 0.33333333333333331, 0.33333333333333331, 0.20000000000000007, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, 0.59999999999999998, 0.20000000000000001, 0.60000000000000009, 0.20000000000000001, 0.20000000000000001};
      
          const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333348 + jac_affine_inv_1_0_BLUE*-0.33333333333333348)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999973 + jac_affine_inv_1_0_BLUE*0.19999999999999973)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*2.3999999999999999 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.3999999999999999 + jac_affine_inv_1_0_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999996 + jac_affine_inv_1_0_BLUE*0.19999999999999996)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.5999999999999999 + jac_affine_inv_1_0_BLUE*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-1.4000000000000001 + jac_affine_inv_1_0_BLUE*-1.4000000000000001)), ((real_t)(abs_det_jac_affine_BLUE)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004 + jac_affine_inv_1_0_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*1.5999999999999999 + jac_affine_inv_1_0_BLUE*-0.80000000000000004)), 0.0};
      
          const real_t _data_tabulated_and_untitled_0_1_BLUE [] = {0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-0.33333333333333348 + jac_affine_inv_1_0_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_0_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3333333333333333 + jac_affine_inv_1_0_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.3333333333333333 + jac_affine_inv_1_0_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_0_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_0_BLUE*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999973 + jac_affine_inv_1_0_BLUE*0.19999999999999973)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*2.3999999999999999 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-2.3999999999999999 + jac_affine_inv_1_0_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*0.19999999999999996 + jac_affine_inv_1_0_BLUE*0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-1.5999999999999999 + jac_affine_inv_1_0_BLUE*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_0_BLUE*-1.4000000000000001 + jac_affine_inv_1_0_BLUE*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_0_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_0_BLUE*0.80000000000000004 + jac_affine_inv_1_0_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_0_BLUE*-0.80000000000000004 + jac_affine_inv_1_0_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_0_BLUE*1.5999999999999999 + jac_affine_inv_1_0_BLUE*-0.80000000000000004))};
      
          const real_t _data_tabulated_and_untitled_1_0_BLUE [] = {((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333348 + jac_affine_inv_1_1_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3333333333333333 + jac_affine_inv_1_1_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3333333333333333 + jac_affine_inv_1_1_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_1_BLUE*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999973 + jac_affine_inv_1_1_BLUE*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*2.3999999999999999 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.3999999999999999 + jac_affine_inv_1_1_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999996 + jac_affine_inv_1_1_BLUE*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.5999999999999999 + jac_affine_inv_1_1_BLUE*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-1.4000000000000001 + jac_affine_inv_1_1_BLUE*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004 + jac_affine_inv_1_1_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*1.5999999999999999 + jac_affine_inv_1_1_BLUE*-0.80000000000000004)), 0.0};
      
          const real_t _data_tabulated_and_untitled_1_1_BLUE [] = {0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-0.33333333333333348 + jac_affine_inv_1_1_BLUE*-0.33333333333333348)), ((real_t)(jac_affine_inv_0_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_1_1_BLUE*0.33333333333333326)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3333333333333333 + jac_affine_inv_1_1_BLUE*1.3333333333333333)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.3333333333333333 + jac_affine_inv_1_1_BLUE*2.2204460492503131e-16)), ((real_t)(jac_affine_inv_0_1_BLUE*2.2204460492503131e-16 + jac_affine_inv_1_1_BLUE*-1.3333333333333333)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999973 + jac_affine_inv_1_1_BLUE*0.19999999999999973)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*2.3999999999999999 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-2.3999999999999999 + jac_affine_inv_1_1_BLUE*-1.5999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.80000000000000004)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*0.19999999999999996 + jac_affine_inv_1_1_BLUE*0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*1.3999999999999999)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*2.3999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-1.5999999999999999 + jac_affine_inv_1_1_BLUE*-2.3999999999999999)), 0.0, ((real_t)(jac_affine_inv_0_1_BLUE*-1.4000000000000001 + jac_affine_inv_1_1_BLUE*-1.4000000000000001)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_1_1_BLUE*-0.19999999999999996)), ((real_t)(jac_affine_inv_0_1_BLUE*0.80000000000000004 + jac_affine_inv_1_1_BLUE*0.80000000000000004)), ((real_t)(jac_affine_inv_0_1_BLUE*-0.80000000000000004 + jac_affine_inv_1_1_BLUE*1.5999999999999999)), ((real_t)(jac_affine_inv_0_1_BLUE*1.5999999999999999 + jac_affine_inv_1_1_BLUE*-0.80000000000000004))};
      
          for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
             const real_t mu_dof_0 = _data_mu[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             const real_t mu_dof_1 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             const real_t mu_dof_2 = _data_mu[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
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
             real_t q_acc_10_10 = 0.0;
             real_t q_acc_11_11 = 0.0;
             for (int64_t q = 0; q < 4; q += 1)
             {
                const real_t tmp_qloop_0 = 2.0*(_data_tabulated_and_untitled_1_1_BLUE[7*q]*_data_tabulated_and_untitled_1_1_BLUE[7*q]);
                const real_t tmp_qloop_1 = 0.5*_data_tabulated_and_untitled_0_1_BLUE[7*q];
                const real_t tmp_qloop_2 = (mu_dof_0*_data_phi_0_0_BLUE[3*q] + mu_dof_1*_data_phi_0_0_BLUE[3*q + 1] + mu_dof_2*_data_phi_0_0_BLUE[3*q + 2])*_data_q_w[q];
                const real_t tmp_qloop_3 = 2.0*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 7]*_data_tabulated_and_untitled_0_0_BLUE[8*q + 7]);
                const real_t tmp_qloop_4 = 0.5*_data_tabulated_and_untitled_1_0_BLUE[7*q + 6];
                const real_t q_tmp_0_0 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q] + _data_tabulated_and_untitled_1_1_BLUE[7*q])*(_data_tabulated_and_untitled_0_0_BLUE[8*q] + _data_tabulated_and_untitled_1_1_BLUE[7*q]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_BLUE[7*q])*(_data_tabulated_and_untitled_0_1_BLUE[7*q] + _data_tabulated_and_untitled_1_0_BLUE[7*q])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_BLUE[8*q]*_data_tabulated_and_untitled_0_0_BLUE[8*q]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_1_1 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 2] + _data_tabulated_and_untitled_1_1_BLUE[7*q])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 2] + _data_tabulated_and_untitled_1_1_BLUE[7*q]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_BLUE[7*q + 1])*(_data_tabulated_and_untitled_0_1_BLUE[7*q] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 1])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]*_data_tabulated_and_untitled_0_0_BLUE[8*q + 2]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_2_2 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 3] + _data_tabulated_and_untitled_1_1_BLUE[7*q])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 3] + _data_tabulated_and_untitled_1_1_BLUE[7*q]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_BLUE[7*q + 2])*(_data_tabulated_and_untitled_0_1_BLUE[7*q] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 2])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 3]*_data_tabulated_and_untitled_0_0_BLUE[8*q + 3]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_3_3 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 4] + _data_tabulated_and_untitled_1_1_BLUE[7*q])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 4] + _data_tabulated_and_untitled_1_1_BLUE[7*q]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_BLUE[7*q + 3])*(_data_tabulated_and_untitled_0_1_BLUE[7*q] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 3])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 4]*_data_tabulated_and_untitled_0_0_BLUE[8*q + 4]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_4_4 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 5] + _data_tabulated_and_untitled_1_1_BLUE[7*q])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 5] + _data_tabulated_and_untitled_1_1_BLUE[7*q]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_BLUE[7*q + 4])*(_data_tabulated_and_untitled_0_1_BLUE[7*q] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 4])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 5]*_data_tabulated_and_untitled_0_0_BLUE[8*q + 5]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_5_5 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 6] + _data_tabulated_and_untitled_1_1_BLUE[7*q])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 6] + _data_tabulated_and_untitled_1_1_BLUE[7*q]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_0 + (tmp_qloop_1 + 0.5*_data_tabulated_and_untitled_1_0_BLUE[7*q + 5])*(_data_tabulated_and_untitled_0_1_BLUE[7*q] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 5])*2.0 + 2.0*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 6]*_data_tabulated_and_untitled_0_0_BLUE[8*q + 6]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_6_6 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 1])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 1]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_BLUE[7*q + 1])*(_data_tabulated_and_untitled_0_1_BLUE[7*q + 1] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_BLUE[7*q + 1]*_data_tabulated_and_untitled_1_1_BLUE[7*q + 1]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_7_7 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 2])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 2]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_BLUE[7*q + 2])*(_data_tabulated_and_untitled_0_1_BLUE[7*q + 2] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_BLUE[7*q + 2]*_data_tabulated_and_untitled_1_1_BLUE[7*q + 2]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_8_8 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 3])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 3]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_BLUE[7*q + 3])*(_data_tabulated_and_untitled_0_1_BLUE[7*q + 3] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_BLUE[7*q + 3]*_data_tabulated_and_untitled_1_1_BLUE[7*q + 3]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_9_9 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 4])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 4]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_BLUE[7*q + 4])*(_data_tabulated_and_untitled_0_1_BLUE[7*q + 4] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_BLUE[7*q + 4]*_data_tabulated_and_untitled_1_1_BLUE[7*q + 4]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_10_10 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 5])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 5]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_BLUE[7*q + 5])*(_data_tabulated_and_untitled_0_1_BLUE[7*q + 5] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_BLUE[7*q + 5]*_data_tabulated_and_untitled_1_1_BLUE[7*q + 5]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                const real_t q_tmp_11_11 = tmp_qloop_2*(-((_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 6])*(_data_tabulated_and_untitled_0_0_BLUE[8*q + 7] + _data_tabulated_and_untitled_1_1_BLUE[7*q + 6]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1] + (tmp_qloop_3 + (tmp_qloop_4 + 0.5*_data_tabulated_and_untitled_0_1_BLUE[7*q + 6])*(_data_tabulated_and_untitled_0_1_BLUE[7*q + 6] + _data_tabulated_and_untitled_1_0_BLUE[7*q + 6])*2.0 + 2.0*(_data_tabulated_and_untitled_1_1_BLUE[7*q + 6]*_data_tabulated_and_untitled_1_1_BLUE[7*q + 6]))*_data_tabulated_and_untitled_0_0_BLUE[8*q + 1]);
                q_acc_0_0 = q_acc_0_0 + q_tmp_0_0;
                q_acc_1_1 = q_acc_1_1 + q_tmp_1_1;
                q_acc_2_2 = q_acc_2_2 + q_tmp_2_2;
                q_acc_3_3 = q_acc_3_3 + q_tmp_3_3;
                q_acc_4_4 = q_acc_4_4 + q_tmp_4_4;
                q_acc_5_5 = q_acc_5_5 + q_tmp_5_5;
                q_acc_6_6 = q_acc_6_6 + q_tmp_6_6;
                q_acc_7_7 = q_acc_7_7 + q_tmp_7_7;
                q_acc_8_8 = q_acc_8_8 + q_tmp_8_8;
                q_acc_9_9 = q_acc_9_9 + q_tmp_9_9;
                q_acc_10_10 = q_acc_10_10 + q_tmp_10_10;
                q_acc_11_11 = q_acc_11_11 + q_tmp_11_11;
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
             const real_t elMatDiag_10 = q_acc_10_10;
             const real_t elMatDiag_11 = q_acc_11_11;
             _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_0 + _data_invDiag__vertex_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_1 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_2 + _data_invDiag__vertex_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_3 + _data_invDiag__edge_0[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_4 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_5 + _data_invDiag__edge_0[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1] = diagScaling*elMatDiag_6 + _data_invDiag__vertex_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_7 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1] = diagScaling*elMatDiag_8 + _data_invDiag__vertex_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))] = diagScaling*elMatDiag_9 + _data_invDiag__edge_1[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1] = diagScaling*elMatDiag_10 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1];
             _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))] = diagScaling*elMatDiag_11 + _data_invDiag__edge_1[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))];
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
