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































#include "../P2ElementwiseAdiabaticHeatingAnnulusMap.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void P2ElementwiseAdiabaticHeatingAnnulusMap::computeInverseDiagonalOperatorValuesScaled_P2ElementwiseAdiabaticHeatingAnnulusMap_macro_2D( real_t * RESTRICT  _data_invDiag_Edge, real_t * RESTRICT  _data_invDiag_Vertex, real_t * RESTRICT  _data_uxEdge, real_t * RESTRICT  _data_uxVertex, real_t * RESTRICT  _data_uyEdge, real_t * RESTRICT  _data_uyVertex, real_t diagScaling, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float, real_t radRayVertex, real_t radRefVertex, real_t rayVertex_0, real_t rayVertex_1, real_t refVertex_0, real_t refVertex_1, real_t thrVertex_0, real_t thrVertex_1 ) const
{
    {
       const real_t _data_q_w [] = {0.00025771437964227723, 0.052397656566423402, 0.074275554650521658, 0.047488619588783712, 0.00025771437964227723, 0.052397656566423402, 0.074275554650521658, 0.047488619588783712, 0.045496761795224737, 0.10566414783403316};
   
       const real_t _data_q_p_0 [] = {-0.0087919971442063111, 0.064688806056010906, 0.076825716849082099, 0.29502511936941517, 1.2886799075734023, 0.78822920956686404, 0.40172877323475981, 0.64933214716985022, 0.085333161170310701, 0.35369054666996447};
   
       const real_t _data_q_p_1 [] = {-0.27988791042919603, 0.14708198437712505, 0.52144550991615801, 0.055642733460734617, -0.27988791042919603, 0.14708198437712505, 0.52144550991615801, 0.055642733460734617, 0.8293336776593786, 0.29261890666007107};
   
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
       const real_t abs_det_jac_affine_BLUE = abs(jac_affine_0_0_BLUE*jac_affine_1_1_BLUE - jac_affine_0_1_BLUE*jac_affine_1_0_BLUE);
       const real_t _data_tabulated_and_untitled_0_0_BLUE [] = {((real_t)(abs_det_jac_affine_BLUE*4.1319176716270496)), ((real_t)(abs_det_jac_affine_BLUE*0.01818585129032994)), ((real_t)(abs_det_jac_affine_BLUE*0.88740557623922733)), ((real_t)(abs_det_jac_affine_BLUE*0.020008176015331045)), ((real_t)(abs_det_jac_affine_BLUE*-2.9326823013290237)), ((real_t)(abs_det_jac_affine_BLUE*-0.09212307304953013)), ((real_t)(abs_det_jac_affine_BLUE*8.0041572324882136e-5)), ((real_t)(abs_det_jac_affine_BLUE*0.0039057471920395958)), ((real_t)(abs_det_jac_affine_BLUE*8.8062188679155129e-5)), ((real_t)(abs_det_jac_affine_BLUE*-0.012907644452836067)), ((real_t)(abs_det_jac_affine_BLUE*-0.00040546221876372707)), ((real_t)(abs_det_jac_affine_BLUE*0.19058672493597409)), ((real_t)(abs_det_jac_affine_BLUE*0.0042971250584935049)), ((real_t)(abs_det_jac_affine_BLUE*-0.62984764808072091)), ((real_t)(abs_det_jac_affine_BLUE*-0.019785130106974112)), ((real_t)(abs_det_jac_affine_BLUE*9.6886515965558738e-5)), ((real_t)(abs_det_jac_affine_BLUE*-0.014201063124989949)), ((real_t)(abs_det_jac_affine_BLUE*-0.00044609181671385645)), ((real_t)(abs_det_jac_affine_BLUE*2.0815094016967137)), ((real_t)(abs_det_jac_affine_BLUE*0.065385549119620343)), ((real_t)(abs_det_jac_affine_BLUE*0.0020539278036358411)), ((real_t)(abs_det_jac_affine_BLUE*0.20646242400679149)), ((real_t)(abs_det_jac_affine_BLUE*-0.025590541592321308)), ((real_t)(abs_det_jac_affine_BLUE*-0.047171948512205353)), ((real_t)(abs_det_jac_affine_BLUE*0.017292951300343855)), ((real_t)(abs_det_jac_affine_BLUE*0.21071357110449759)), ((real_t)(abs_det_jac_affine_BLUE*0.092674907754836111)), ((real_t)(abs_det_jac_affine_BLUE*0.0031718886482064402)), ((real_t)(abs_det_jac_affine_BLUE*0.005846854294187312)), ((real_t)(abs_det_jac_affine_BLUE*-0.0021434214561526178)), ((real_t)(abs_det_jac_affine_BLUE*-0.026117461476858485)), ((real_t)(abs_det_jac_affine_BLUE*-0.011486841215167857)), ((real_t)(abs_det_jac_affine_BLUE*0.010777712879923157)), ((real_t)(abs_det_jac_affine_BLUE*-0.0039510444202527691)), ((real_t)(abs_det_jac_affine_BLUE*-0.048143238532534709)), ((real_t)(abs_det_jac_affine_BLUE*-0.021174099829616967)), ((real_t)(abs_det_jac_affine_BLUE*0.001448429011306325)), ((real_t)(abs_det_jac_affine_BLUE*0.017649020353029257)), ((real_t)(abs_det_jac_affine_BLUE*0.0077622970585462196)), ((real_t)(abs_det_jac_affine_BLUE*0.21505225108734383)), ((real_t)(abs_det_jac_affine_BLUE*0.094583122612950904)), ((real_t)(abs_det_jac_affine_BLUE*0.041599039479866144)), ((real_t)(abs_det_jac_affine_BLUE*0.0062341697515713237)), ((real_t)(abs_det_jac_affine_BLUE*0.0051338738853983126)), ((real_t)(abs_det_jac_affine_BLUE*-0.0017658939419583873)), ((real_t)(abs_det_jac_affine_BLUE*-0.012652165278493785)), ((real_t)(abs_det_jac_affine_BLUE*-0.066159341488181103)), ((real_t)(abs_det_jac_affine_BLUE*-0.0097474016736858529)), ((real_t)(abs_det_jac_affine_BLUE*0.0042277740455385522)), ((real_t)(abs_det_jac_affine_BLUE*-0.0014542236022235667)), ((real_t)(abs_det_jac_affine_BLUE*-0.010419129331637253)), ((real_t)(abs_det_jac_affine_BLUE*-0.054482590156566132)), ((real_t)(abs_det_jac_affine_BLUE*-0.0080270401508413403)), ((real_t)(abs_det_jac_affine_BLUE*0.00050020797291561452)), ((real_t)(abs_det_jac_affine_BLUE*0.0035838584620377116)), ((real_t)(abs_det_jac_affine_BLUE*0.018740327099448662)), ((real_t)(abs_det_jac_affine_BLUE*0.0027610537170660748)), ((real_t)(abs_det_jac_affine_BLUE*0.025677402543293947)), ((real_t)(abs_det_jac_affine_BLUE*0.13426951087011987)), ((real_t)(abs_det_jac_affine_BLUE*0.019782223122855463)), ((real_t)(abs_det_jac_affine_BLUE*0.70210768082574648)), ((real_t)(abs_det_jac_affine_BLUE*0.10344307287900011)), ((real_t)(abs_det_jac_affine_BLUE*0.015240496036256632)), ((real_t)(abs_det_jac_affine_BLUE*0.037609747659871171)), ((real_t)(abs_det_jac_affine_BLUE*-0.023455237907202432)), ((real_t)(abs_det_jac_affine_BLUE*-0.0095900517039874296)), ((real_t)(abs_det_jac_affine_BLUE*0.012734375520683624)), ((real_t)(abs_det_jac_affine_BLUE*0.028027577507252401)), ((real_t)(abs_det_jac_affine_BLUE*0.14860591644994842)), ((real_t)(abs_det_jac_affine_BLUE*0.01462780846760274)), ((real_t)(abs_det_jac_affine_BLUE*0.0059808150348054662)), ((real_t)(abs_det_jac_affine_BLUE*-0.0079417657927012084)), ((real_t)(abs_det_jac_affine_BLUE*-0.017479338184887269)), ((real_t)(abs_det_jac_affine_BLUE*-0.092677758869157134)), ((real_t)(abs_det_jac_affine_BLUE*0.0024453525324574653)), ((real_t)(abs_det_jac_affine_BLUE*-0.0032471188258370279)), ((real_t)(abs_det_jac_affine_BLUE*-0.0071467088761899538)), ((real_t)(abs_det_jac_affine_BLUE*-0.037892794048018423)), ((real_t)(abs_det_jac_affine_BLUE*0.0043117630399528654)), ((real_t)(abs_det_jac_affine_BLUE*0.009489925328407282)), ((real_t)(abs_det_jac_affine_BLUE*0.050316837054669591)), ((real_t)(abs_det_jac_affine_BLUE*0.020886742129440056)), ((real_t)(abs_det_jac_affine_BLUE*0.11074426446581138)), ((real_t)(abs_det_jac_affine_BLUE*0.58718071186348109)), ((real_t)(abs_det_jac_affine_BLUE*8.0041572324882502e-5)), ((real_t)(abs_det_jac_affine_BLUE*0.018185851290329982)), ((real_t)(abs_det_jac_affine_BLUE*0.0039057471920396049)), ((real_t)(abs_det_jac_affine_BLUE*-0.012907644452836098)), ((real_t)(abs_det_jac_affine_BLUE*8.806218867915662e-5)), ((real_t)(abs_det_jac_affine_BLUE*-0.00040546221876372972)), ((real_t)(abs_det_jac_affine_BLUE*4.1319176716270496)), ((real_t)(abs_det_jac_affine_BLUE*0.88740557623922733)), ((real_t)(abs_det_jac_affine_BLUE*-2.9326823013290242)), ((real_t)(abs_det_jac_affine_BLUE*0.020008176015331336)), ((real_t)(abs_det_jac_affine_BLUE*-0.092123073049530504)), ((real_t)(abs_det_jac_affine_BLUE*0.19058672493597409)), ((real_t)(abs_det_jac_affine_BLUE*-0.62984764808072102)), ((real_t)(abs_det_jac_affine_BLUE*0.0042971250584935674)), ((real_t)(abs_det_jac_affine_BLUE*-0.019785130106974195)), ((real_t)(abs_det_jac_affine_BLUE*2.0815094016967146)), ((real_t)(abs_det_jac_affine_BLUE*-0.014201063124990159)), ((real_t)(abs_det_jac_affine_BLUE*0.06538554911962062)), ((real_t)(abs_det_jac_affine_BLUE*9.688651596556157e-5)), ((real_t)(abs_det_jac_affine_BLUE*-0.0004460918167138648)), ((real_t)(abs_det_jac_affine_BLUE*0.002053927803635858)), ((real_t)(abs_det_jac_affine_BLUE*0.0031718886482064233)), ((real_t)(abs_det_jac_affine_BLUE*-0.025590541592321235)), ((real_t)(abs_det_jac_affine_BLUE*0.0058468542941872955)), ((real_t)(abs_det_jac_affine_BLUE*-0.026117461476858419)), ((real_t)(abs_det_jac_affine_BLUE*-0.0021434214561526096)), ((real_t)(abs_det_jac_affine_BLUE*-0.011486841215167838)), ((real_t)(abs_det_jac_affine_BLUE*0.20646242400679143)), ((real_t)(abs_det_jac_affine_BLUE*-0.047171948512205346)), ((real_t)(abs_det_jac_affine_BLUE*0.21071357110449759)), ((real_t)(abs_det_jac_affine_BLUE*0.017292951300343831)), ((real_t)(abs_det_jac_affine_BLUE*0.092674907754836194)), ((real_t)(abs_det_jac_affine_BLUE*0.010777712879923157)), ((real_t)(abs_det_jac_affine_BLUE*-0.048143238532534709)), ((real_t)(abs_det_jac_affine_BLUE*-0.0039510444202527639)), ((real_t)(abs_det_jac_affine_BLUE*-0.021174099829616988)), ((real_t)(abs_det_jac_affine_BLUE*0.21505225108734385)), ((real_t)(abs_det_jac_affine_BLUE*0.017649020353029236)), ((real_t)(abs_det_jac_affine_BLUE*0.094583122612951001)), ((real_t)(abs_det_jac_affine_BLUE*0.0014484290113063211)), ((real_t)(abs_det_jac_affine_BLUE*0.007762297058546217)), ((real_t)(abs_det_jac_affine_BLUE*0.041599039479866227)), ((real_t)(abs_det_jac_affine_BLUE*0.0042277740455385323)), ((real_t)(abs_det_jac_affine_BLUE*0.0051338738853983134)), ((real_t)(abs_det_jac_affine_BLUE*-0.0014542236022235633)), ((real_t)(abs_det_jac_affine_BLUE*-0.054482590156566001)), ((real_t)(abs_det_jac_affine_BLUE*-0.010419129331637239)), ((real_t)(abs_det_jac_affine_BLUE*-0.0080270401508413351)), ((real_t)(abs_det_jac_affine_BLUE*0.0062341697515713541)), ((real_t)(abs_det_jac_affine_BLUE*-0.0017658939419583916)), ((real_t)(abs_det_jac_affine_BLUE*-0.066159341488181256)), ((real_t)(abs_det_jac_affine_BLUE*-0.012652165278493827)), ((real_t)(abs_det_jac_affine_BLUE*-0.0097474016736858911)), ((real_t)(abs_det_jac_affine_BLUE*0.00050020797291561452)), ((real_t)(abs_det_jac_affine_BLUE*0.018740327099448659)), ((real_t)(abs_det_jac_affine_BLUE*0.0035838584620377146)), ((real_t)(abs_det_jac_affine_BLUE*0.0027610537170660791)), ((real_t)(abs_det_jac_affine_BLUE*0.70210768082574637)), ((real_t)(abs_det_jac_affine_BLUE*0.13426951087011996)), ((real_t)(abs_det_jac_affine_BLUE*0.10344307287900024)), ((real_t)(abs_det_jac_affine_BLUE*0.025677402543293992)), ((real_t)(abs_det_jac_affine_BLUE*0.019782223122855512)), ((real_t)(abs_det_jac_affine_BLUE*0.015240496036256681)), ((real_t)(abs_det_jac_affine_BLUE*0.014627808467602721)), ((real_t)(abs_det_jac_affine_BLUE*-0.023455237907202428)), ((real_t)(abs_det_jac_affine_BLUE*0.0059808150348054628)), ((real_t)(abs_det_jac_affine_BLUE*-0.017479338184887255)), ((real_t)(abs_det_jac_affine_BLUE*-0.0079417657927012032)), ((real_t)(abs_det_jac_affine_BLUE*-0.092677758869157051)), ((real_t)(abs_det_jac_affine_BLUE*0.037609747659871212)), ((real_t)(abs_det_jac_affine_BLUE*-0.0095900517039874348)), ((real_t)(abs_det_jac_affine_BLUE*0.028027577507252419)), ((real_t)(abs_det_jac_affine_BLUE*0.012734375520683631)), ((real_t)(abs_det_jac_affine_BLUE*0.14860591644994847)), ((real_t)(abs_det_jac_affine_BLUE*0.0024453525324574653)), ((real_t)(abs_det_jac_affine_BLUE*-0.0071467088761899538)), ((real_t)(abs_det_jac_affine_BLUE*-0.0032471188258370279)), ((real_t)(abs_det_jac_affine_BLUE*-0.037892794048018416)), ((real_t)(abs_det_jac_affine_BLUE*0.020886742129440063)), ((real_t)(abs_det_jac_affine_BLUE*0.009489925328407282)), ((real_t)(abs_det_jac_affine_BLUE*0.11074426446581136)), ((real_t)(abs_det_jac_affine_BLUE*0.0043117630399528654)), ((real_t)(abs_det_jac_affine_BLUE*0.050316837054669585)), ((real_t)(abs_det_jac_affine_BLUE*0.58718071186348086)), ((real_t)(abs_det_jac_affine_BLUE*0.0050083453964117263)), ((real_t)(abs_det_jac_affine_BLUE*0.0050083453964117307)), ((real_t)(abs_det_jac_affine_BLUE*-0.038658284441068204)), ((real_t)(abs_det_jac_affine_BLUE*-0.020033381585646923)), ((real_t)(abs_det_jac_affine_BLUE*-0.020033381585646916)), ((real_t)(abs_det_jac_affine_BLUE*-0.0020613075601356042)), ((real_t)(abs_det_jac_affine_BLUE*0.0050083453964117359)), ((real_t)(abs_det_jac_affine_BLUE*-0.038658284441068239)), ((real_t)(abs_det_jac_affine_BLUE*-0.020033381585646944)), ((real_t)(abs_det_jac_affine_BLUE*-0.020033381585646937)), ((real_t)(abs_det_jac_affine_BLUE*-0.0020613075601356064)), ((real_t)(abs_det_jac_affine_BLUE*0.29839454702889645)), ((real_t)(abs_det_jac_affine_BLUE*0.15463313776427295)), ((real_t)(abs_det_jac_affine_BLUE*0.1546331377642729)), ((real_t)(abs_det_jac_affine_BLUE*0.015910766465375707)), ((real_t)(abs_det_jac_affine_BLUE*0.080133526342587774)), ((real_t)(abs_det_jac_affine_BLUE*0.080133526342587746)), ((real_t)(abs_det_jac_affine_BLUE*0.0082452302405424255)), ((real_t)(abs_det_jac_affine_BLUE*0.080133526342587705)), ((real_t)(abs_det_jac_affine_BLUE*0.008245230240542422)), ((real_t)(abs_det_jac_affine_BLUE*0.00084838175508350998)), ((real_t)(abs_det_jac_affine_BLUE*0.010711534011915802)), ((real_t)(abs_det_jac_affine_BLUE*0.010711534011915796)), ((real_t)(abs_det_jac_affine_BLUE*0.012561091358835421)), ((real_t)(abs_det_jac_affine_BLUE*-0.042846136047663186)), ((real_t)(abs_det_jac_affine_BLUE*-0.042846136047663186)), ((real_t)(abs_det_jac_affine_BLUE*-0.051788428349908537)), ((real_t)(abs_det_jac_affine_BLUE*0.010711534011915791)), ((real_t)(abs_det_jac_affine_BLUE*0.012561091358835414)), ((real_t)(abs_det_jac_affine_BLUE*-0.042846136047663165)), ((real_t)(abs_det_jac_affine_BLUE*-0.042846136047663165)), ((real_t)(abs_det_jac_affine_BLUE*-0.051788428349908509)), ((real_t)(abs_det_jac_affine_BLUE*0.014730011214966036)), ((real_t)(abs_det_jac_affine_BLUE*-0.050244365435341658)), ((real_t)(abs_det_jac_affine_BLUE*-0.050244365435341658)), ((real_t)(abs_det_jac_affine_BLUE*-0.060730720652153854)), ((real_t)(abs_det_jac_affine_BLUE*0.17138454419065266)), ((real_t)(abs_det_jac_affine_BLUE*0.17138454419065266)), ((real_t)(abs_det_jac_affine_BLUE*0.20715371339963404)), ((real_t)(abs_det_jac_affine_BLUE*0.17138454419065266)), ((real_t)(abs_det_jac_affine_BLUE*0.20715371339963404)), ((real_t)(abs_det_jac_affine_BLUE*0.25038816176749606))};
   
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
       const real_t abs_det_jac_affine_GRAY = abs(jac_affine_0_0_GRAY*jac_affine_1_1_GRAY - jac_affine_0_1_GRAY*jac_affine_1_0_GRAY);
       const real_t _data_tabulated_and_untitled_0_0_GRAY [] = {((real_t)(abs_det_jac_affine_GRAY*4.1319176716270496)), ((real_t)(abs_det_jac_affine_GRAY*0.01818585129032994)), ((real_t)(abs_det_jac_affine_GRAY*0.88740557623922733)), ((real_t)(abs_det_jac_affine_GRAY*0.020008176015331045)), ((real_t)(abs_det_jac_affine_GRAY*-2.9326823013290237)), ((real_t)(abs_det_jac_affine_GRAY*-0.09212307304953013)), ((real_t)(abs_det_jac_affine_GRAY*8.0041572324882136e-5)), ((real_t)(abs_det_jac_affine_GRAY*0.0039057471920395958)), ((real_t)(abs_det_jac_affine_GRAY*8.8062188679155129e-5)), ((real_t)(abs_det_jac_affine_GRAY*-0.012907644452836067)), ((real_t)(abs_det_jac_affine_GRAY*-0.00040546221876372707)), ((real_t)(abs_det_jac_affine_GRAY*0.19058672493597409)), ((real_t)(abs_det_jac_affine_GRAY*0.0042971250584935049)), ((real_t)(abs_det_jac_affine_GRAY*-0.62984764808072091)), ((real_t)(abs_det_jac_affine_GRAY*-0.019785130106974112)), ((real_t)(abs_det_jac_affine_GRAY*9.6886515965558738e-5)), ((real_t)(abs_det_jac_affine_GRAY*-0.014201063124989949)), ((real_t)(abs_det_jac_affine_GRAY*-0.00044609181671385645)), ((real_t)(abs_det_jac_affine_GRAY*2.0815094016967137)), ((real_t)(abs_det_jac_affine_GRAY*0.065385549119620343)), ((real_t)(abs_det_jac_affine_GRAY*0.0020539278036358411)), ((real_t)(abs_det_jac_affine_GRAY*0.20646242400679149)), ((real_t)(abs_det_jac_affine_GRAY*-0.025590541592321308)), ((real_t)(abs_det_jac_affine_GRAY*-0.047171948512205353)), ((real_t)(abs_det_jac_affine_GRAY*0.017292951300343855)), ((real_t)(abs_det_jac_affine_GRAY*0.21071357110449759)), ((real_t)(abs_det_jac_affine_GRAY*0.092674907754836111)), ((real_t)(abs_det_jac_affine_GRAY*0.0031718886482064402)), ((real_t)(abs_det_jac_affine_GRAY*0.005846854294187312)), ((real_t)(abs_det_jac_affine_GRAY*-0.0021434214561526178)), ((real_t)(abs_det_jac_affine_GRAY*-0.026117461476858485)), ((real_t)(abs_det_jac_affine_GRAY*-0.011486841215167857)), ((real_t)(abs_det_jac_affine_GRAY*0.010777712879923157)), ((real_t)(abs_det_jac_affine_GRAY*-0.0039510444202527691)), ((real_t)(abs_det_jac_affine_GRAY*-0.048143238532534709)), ((real_t)(abs_det_jac_affine_GRAY*-0.021174099829616967)), ((real_t)(abs_det_jac_affine_GRAY*0.001448429011306325)), ((real_t)(abs_det_jac_affine_GRAY*0.017649020353029257)), ((real_t)(abs_det_jac_affine_GRAY*0.0077622970585462196)), ((real_t)(abs_det_jac_affine_GRAY*0.21505225108734383)), ((real_t)(abs_det_jac_affine_GRAY*0.094583122612950904)), ((real_t)(abs_det_jac_affine_GRAY*0.041599039479866144)), ((real_t)(abs_det_jac_affine_GRAY*0.0062341697515713237)), ((real_t)(abs_det_jac_affine_GRAY*0.0051338738853983126)), ((real_t)(abs_det_jac_affine_GRAY*-0.0017658939419583873)), ((real_t)(abs_det_jac_affine_GRAY*-0.012652165278493785)), ((real_t)(abs_det_jac_affine_GRAY*-0.066159341488181103)), ((real_t)(abs_det_jac_affine_GRAY*-0.0097474016736858529)), ((real_t)(abs_det_jac_affine_GRAY*0.0042277740455385522)), ((real_t)(abs_det_jac_affine_GRAY*-0.0014542236022235667)), ((real_t)(abs_det_jac_affine_GRAY*-0.010419129331637253)), ((real_t)(abs_det_jac_affine_GRAY*-0.054482590156566132)), ((real_t)(abs_det_jac_affine_GRAY*-0.0080270401508413403)), ((real_t)(abs_det_jac_affine_GRAY*0.00050020797291561452)), ((real_t)(abs_det_jac_affine_GRAY*0.0035838584620377116)), ((real_t)(abs_det_jac_affine_GRAY*0.018740327099448662)), ((real_t)(abs_det_jac_affine_GRAY*0.0027610537170660748)), ((real_t)(abs_det_jac_affine_GRAY*0.025677402543293947)), ((real_t)(abs_det_jac_affine_GRAY*0.13426951087011987)), ((real_t)(abs_det_jac_affine_GRAY*0.019782223122855463)), ((real_t)(abs_det_jac_affine_GRAY*0.70210768082574648)), ((real_t)(abs_det_jac_affine_GRAY*0.10344307287900011)), ((real_t)(abs_det_jac_affine_GRAY*0.015240496036256632)), ((real_t)(abs_det_jac_affine_GRAY*0.037609747659871171)), ((real_t)(abs_det_jac_affine_GRAY*-0.023455237907202432)), ((real_t)(abs_det_jac_affine_GRAY*-0.0095900517039874296)), ((real_t)(abs_det_jac_affine_GRAY*0.012734375520683624)), ((real_t)(abs_det_jac_affine_GRAY*0.028027577507252401)), ((real_t)(abs_det_jac_affine_GRAY*0.14860591644994842)), ((real_t)(abs_det_jac_affine_GRAY*0.01462780846760274)), ((real_t)(abs_det_jac_affine_GRAY*0.0059808150348054662)), ((real_t)(abs_det_jac_affine_GRAY*-0.0079417657927012084)), ((real_t)(abs_det_jac_affine_GRAY*-0.017479338184887269)), ((real_t)(abs_det_jac_affine_GRAY*-0.092677758869157134)), ((real_t)(abs_det_jac_affine_GRAY*0.0024453525324574653)), ((real_t)(abs_det_jac_affine_GRAY*-0.0032471188258370279)), ((real_t)(abs_det_jac_affine_GRAY*-0.0071467088761899538)), ((real_t)(abs_det_jac_affine_GRAY*-0.037892794048018423)), ((real_t)(abs_det_jac_affine_GRAY*0.0043117630399528654)), ((real_t)(abs_det_jac_affine_GRAY*0.009489925328407282)), ((real_t)(abs_det_jac_affine_GRAY*0.050316837054669591)), ((real_t)(abs_det_jac_affine_GRAY*0.020886742129440056)), ((real_t)(abs_det_jac_affine_GRAY*0.11074426446581138)), ((real_t)(abs_det_jac_affine_GRAY*0.58718071186348109)), ((real_t)(abs_det_jac_affine_GRAY*8.0041572324882502e-5)), ((real_t)(abs_det_jac_affine_GRAY*0.018185851290329982)), ((real_t)(abs_det_jac_affine_GRAY*0.0039057471920396049)), ((real_t)(abs_det_jac_affine_GRAY*-0.012907644452836098)), ((real_t)(abs_det_jac_affine_GRAY*8.806218867915662e-5)), ((real_t)(abs_det_jac_affine_GRAY*-0.00040546221876372972)), ((real_t)(abs_det_jac_affine_GRAY*4.1319176716270496)), ((real_t)(abs_det_jac_affine_GRAY*0.88740557623922733)), ((real_t)(abs_det_jac_affine_GRAY*-2.9326823013290242)), ((real_t)(abs_det_jac_affine_GRAY*0.020008176015331336)), ((real_t)(abs_det_jac_affine_GRAY*-0.092123073049530504)), ((real_t)(abs_det_jac_affine_GRAY*0.19058672493597409)), ((real_t)(abs_det_jac_affine_GRAY*-0.62984764808072102)), ((real_t)(abs_det_jac_affine_GRAY*0.0042971250584935674)), ((real_t)(abs_det_jac_affine_GRAY*-0.019785130106974195)), ((real_t)(abs_det_jac_affine_GRAY*2.0815094016967146)), ((real_t)(abs_det_jac_affine_GRAY*-0.014201063124990159)), ((real_t)(abs_det_jac_affine_GRAY*0.06538554911962062)), ((real_t)(abs_det_jac_affine_GRAY*9.688651596556157e-5)), ((real_t)(abs_det_jac_affine_GRAY*-0.0004460918167138648)), ((real_t)(abs_det_jac_affine_GRAY*0.002053927803635858)), ((real_t)(abs_det_jac_affine_GRAY*0.0031718886482064233)), ((real_t)(abs_det_jac_affine_GRAY*-0.025590541592321235)), ((real_t)(abs_det_jac_affine_GRAY*0.0058468542941872955)), ((real_t)(abs_det_jac_affine_GRAY*-0.026117461476858419)), ((real_t)(abs_det_jac_affine_GRAY*-0.0021434214561526096)), ((real_t)(abs_det_jac_affine_GRAY*-0.011486841215167838)), ((real_t)(abs_det_jac_affine_GRAY*0.20646242400679143)), ((real_t)(abs_det_jac_affine_GRAY*-0.047171948512205346)), ((real_t)(abs_det_jac_affine_GRAY*0.21071357110449759)), ((real_t)(abs_det_jac_affine_GRAY*0.017292951300343831)), ((real_t)(abs_det_jac_affine_GRAY*0.092674907754836194)), ((real_t)(abs_det_jac_affine_GRAY*0.010777712879923157)), ((real_t)(abs_det_jac_affine_GRAY*-0.048143238532534709)), ((real_t)(abs_det_jac_affine_GRAY*-0.0039510444202527639)), ((real_t)(abs_det_jac_affine_GRAY*-0.021174099829616988)), ((real_t)(abs_det_jac_affine_GRAY*0.21505225108734385)), ((real_t)(abs_det_jac_affine_GRAY*0.017649020353029236)), ((real_t)(abs_det_jac_affine_GRAY*0.094583122612951001)), ((real_t)(abs_det_jac_affine_GRAY*0.0014484290113063211)), ((real_t)(abs_det_jac_affine_GRAY*0.007762297058546217)), ((real_t)(abs_det_jac_affine_GRAY*0.041599039479866227)), ((real_t)(abs_det_jac_affine_GRAY*0.0042277740455385323)), ((real_t)(abs_det_jac_affine_GRAY*0.0051338738853983134)), ((real_t)(abs_det_jac_affine_GRAY*-0.0014542236022235633)), ((real_t)(abs_det_jac_affine_GRAY*-0.054482590156566001)), ((real_t)(abs_det_jac_affine_GRAY*-0.010419129331637239)), ((real_t)(abs_det_jac_affine_GRAY*-0.0080270401508413351)), ((real_t)(abs_det_jac_affine_GRAY*0.0062341697515713541)), ((real_t)(abs_det_jac_affine_GRAY*-0.0017658939419583916)), ((real_t)(abs_det_jac_affine_GRAY*-0.066159341488181256)), ((real_t)(abs_det_jac_affine_GRAY*-0.012652165278493827)), ((real_t)(abs_det_jac_affine_GRAY*-0.0097474016736858911)), ((real_t)(abs_det_jac_affine_GRAY*0.00050020797291561452)), ((real_t)(abs_det_jac_affine_GRAY*0.018740327099448659)), ((real_t)(abs_det_jac_affine_GRAY*0.0035838584620377146)), ((real_t)(abs_det_jac_affine_GRAY*0.0027610537170660791)), ((real_t)(abs_det_jac_affine_GRAY*0.70210768082574637)), ((real_t)(abs_det_jac_affine_GRAY*0.13426951087011996)), ((real_t)(abs_det_jac_affine_GRAY*0.10344307287900024)), ((real_t)(abs_det_jac_affine_GRAY*0.025677402543293992)), ((real_t)(abs_det_jac_affine_GRAY*0.019782223122855512)), ((real_t)(abs_det_jac_affine_GRAY*0.015240496036256681)), ((real_t)(abs_det_jac_affine_GRAY*0.014627808467602721)), ((real_t)(abs_det_jac_affine_GRAY*-0.023455237907202428)), ((real_t)(abs_det_jac_affine_GRAY*0.0059808150348054628)), ((real_t)(abs_det_jac_affine_GRAY*-0.017479338184887255)), ((real_t)(abs_det_jac_affine_GRAY*-0.0079417657927012032)), ((real_t)(abs_det_jac_affine_GRAY*-0.092677758869157051)), ((real_t)(abs_det_jac_affine_GRAY*0.037609747659871212)), ((real_t)(abs_det_jac_affine_GRAY*-0.0095900517039874348)), ((real_t)(abs_det_jac_affine_GRAY*0.028027577507252419)), ((real_t)(abs_det_jac_affine_GRAY*0.012734375520683631)), ((real_t)(abs_det_jac_affine_GRAY*0.14860591644994847)), ((real_t)(abs_det_jac_affine_GRAY*0.0024453525324574653)), ((real_t)(abs_det_jac_affine_GRAY*-0.0071467088761899538)), ((real_t)(abs_det_jac_affine_GRAY*-0.0032471188258370279)), ((real_t)(abs_det_jac_affine_GRAY*-0.037892794048018416)), ((real_t)(abs_det_jac_affine_GRAY*0.020886742129440063)), ((real_t)(abs_det_jac_affine_GRAY*0.009489925328407282)), ((real_t)(abs_det_jac_affine_GRAY*0.11074426446581136)), ((real_t)(abs_det_jac_affine_GRAY*0.0043117630399528654)), ((real_t)(abs_det_jac_affine_GRAY*0.050316837054669585)), ((real_t)(abs_det_jac_affine_GRAY*0.58718071186348086)), ((real_t)(abs_det_jac_affine_GRAY*0.0050083453964117263)), ((real_t)(abs_det_jac_affine_GRAY*0.0050083453964117307)), ((real_t)(abs_det_jac_affine_GRAY*-0.038658284441068204)), ((real_t)(abs_det_jac_affine_GRAY*-0.020033381585646923)), ((real_t)(abs_det_jac_affine_GRAY*-0.020033381585646916)), ((real_t)(abs_det_jac_affine_GRAY*-0.0020613075601356042)), ((real_t)(abs_det_jac_affine_GRAY*0.0050083453964117359)), ((real_t)(abs_det_jac_affine_GRAY*-0.038658284441068239)), ((real_t)(abs_det_jac_affine_GRAY*-0.020033381585646944)), ((real_t)(abs_det_jac_affine_GRAY*-0.020033381585646937)), ((real_t)(abs_det_jac_affine_GRAY*-0.0020613075601356064)), ((real_t)(abs_det_jac_affine_GRAY*0.29839454702889645)), ((real_t)(abs_det_jac_affine_GRAY*0.15463313776427295)), ((real_t)(abs_det_jac_affine_GRAY*0.1546331377642729)), ((real_t)(abs_det_jac_affine_GRAY*0.015910766465375707)), ((real_t)(abs_det_jac_affine_GRAY*0.080133526342587774)), ((real_t)(abs_det_jac_affine_GRAY*0.080133526342587746)), ((real_t)(abs_det_jac_affine_GRAY*0.0082452302405424255)), ((real_t)(abs_det_jac_affine_GRAY*0.080133526342587705)), ((real_t)(abs_det_jac_affine_GRAY*0.008245230240542422)), ((real_t)(abs_det_jac_affine_GRAY*0.00084838175508350998)), ((real_t)(abs_det_jac_affine_GRAY*0.010711534011915802)), ((real_t)(abs_det_jac_affine_GRAY*0.010711534011915796)), ((real_t)(abs_det_jac_affine_GRAY*0.012561091358835421)), ((real_t)(abs_det_jac_affine_GRAY*-0.042846136047663186)), ((real_t)(abs_det_jac_affine_GRAY*-0.042846136047663186)), ((real_t)(abs_det_jac_affine_GRAY*-0.051788428349908537)), ((real_t)(abs_det_jac_affine_GRAY*0.010711534011915791)), ((real_t)(abs_det_jac_affine_GRAY*0.012561091358835414)), ((real_t)(abs_det_jac_affine_GRAY*-0.042846136047663165)), ((real_t)(abs_det_jac_affine_GRAY*-0.042846136047663165)), ((real_t)(abs_det_jac_affine_GRAY*-0.051788428349908509)), ((real_t)(abs_det_jac_affine_GRAY*0.014730011214966036)), ((real_t)(abs_det_jac_affine_GRAY*-0.050244365435341658)), ((real_t)(abs_det_jac_affine_GRAY*-0.050244365435341658)), ((real_t)(abs_det_jac_affine_GRAY*-0.060730720652153854)), ((real_t)(abs_det_jac_affine_GRAY*0.17138454419065266)), ((real_t)(abs_det_jac_affine_GRAY*0.17138454419065266)), ((real_t)(abs_det_jac_affine_GRAY*0.20715371339963404)), ((real_t)(abs_det_jac_affine_GRAY*0.17138454419065266)), ((real_t)(abs_det_jac_affine_GRAY*0.20715371339963404)), ((real_t)(abs_det_jac_affine_GRAY*0.25038816176749606))};
   
       const real_t tmp_qloop_3 = rayVertex_1 - thrVertex_1;
       const real_t tmp_qloop_4 = -tmp_qloop_3;
       const real_t tmp_qloop_12 = rayVertex_0 - refVertex_0;
       const real_t tmp_qloop_13 = rayVertex_0 - thrVertex_0;
       const real_t tmp_qloop_14 = -tmp_qloop_13;
       const real_t tmp_qloop_15 = rayVertex_1 - refVertex_1;
       const real_t tmp_qloop_16 = 1.0 / (-tmp_qloop_12*tmp_qloop_4 + tmp_qloop_14*tmp_qloop_15);
       const real_t tmp_qloop_17 = radRayVertex - radRefVertex;
       const real_t tmp_qloop_18 = -tmp_qloop_17;
       const real_t tmp_qloop_19 = tmp_qloop_16*tmp_qloop_18;
       const real_t tmp_qloop_20 = tmp_qloop_19*1.0;
       for (int64_t ctr_1 = 0; ctr_1 < micro_edges_per_macro_edge; ctr_1 += 1)
       {
          {
             for (int64_t ctr_0 = 0; ctr_0 < (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 += 4)
             {
                const __m256d ux_dof_0 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d ux_dof_1 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d ux_dof_2 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d ux_dof_3 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d ux_dof_4 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d ux_dof_5 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d uy_dof_0 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))]);
                const __m256d uy_dof_1 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d uy_dof_2 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d uy_dof_3 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d uy_dof_4 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d uy_dof_5 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))]);
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
                  
                      const __m256d p_affine_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_2_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_2_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_5_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_1 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      for (int64_t q = 0; q < 10; q += 1)
                      {
                         const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                         const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_2);
                         const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                         const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,tmp_qloop_8);
                         const __m256d tmp_qloop_10 = _mm256_add_pd(tmp_qloop_5,tmp_qloop_9);
                         const __m256d tmp_qloop_11 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_10));
                         const __m256d tmp_qloop_21 = _mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                         const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                         const __m256d tmp_qloop_23 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10));
                         const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_2),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14))),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                         const __m256d tmp_qloop_25 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_24);
                         const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(1.0,1.0,1.0,1.0));
                         const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                         const __m256d tmp_qloop_28 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_26);
                         const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                         const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                         const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_5);
                         const __m256d tmp_qloop_34 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10),tmp_qloop_10)),tmp_qloop_24),_mm256_set_pd(3.0,3.0,3.0,3.0));
                         const __m256d tmp_qloop_35 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_34),tmp_qloop_9);
                         const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_32,tmp_qloop_9));
                         const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13));
                         const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_8);
                         const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_38);
                         const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_41 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,tmp_qloop_5),tmp_qloop_8);
                         const __m256d tmp_qloop_42 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_8));
                         const __m256d tmp_qloop_43 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_38);
                         const __m256d tmp_qloop_44 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_31,tmp_qloop_38),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                         const __m256d tmp_qloop_45 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_46 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_47 = _mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_48 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_47);
                         const __m256d tmp_qloop_49 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_50 = _mm256_mul_pd(tmp_qloop_49,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_51 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_50);
                         const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_49,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d tmp_qloop_53 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d tmp_qloop_54 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_45),tmp_qloop_47),tmp_qloop_50);
                         const __m256d tmp_qloop_55 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d tmp_qloop_56 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d tmp_qloop_57 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_55),_mm256_mul_pd(tmp_qloop_56,tmp_qloop_56))))))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_55),_mm256_mul_pd(tmp_qloop_56,tmp_qloop_56))))))));
                         const __m256d tmp_qloop_58 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_qloop_56),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_qloop_55),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_15,tmp_qloop_15,tmp_qloop_15,tmp_qloop_15))))),_mm256_set_pd(tmp_qloop_17,tmp_qloop_17,tmp_qloop_17,tmp_qloop_17)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                         const __m256d tmp_qloop_59 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,tmp_qloop_24),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_58)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_58)))))),_mm256_mul_pd(tmp_qloop_57,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_56,tmp_qloop_58)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_56,tmp_qloop_58))))))))));
                         const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_22),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_9));
                         const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_27),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_23),tmp_qloop_24),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,tmp_qloop_8),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_27,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_24),tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                         const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d tmp_qloop_30 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_29);
                         const __m256d abs_det_jac_blending = tmp_qloop_29;
                         const __m256d tmp_qloop_60 = _mm256_mul_pd(_mm256_mul_pd(abs_det_jac_blending,_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_59),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_45,ux_dof_3),_mm256_mul_pd(tmp_qloop_48,ux_dof_1)),_mm256_mul_pd(tmp_qloop_51,ux_dof_2)),_mm256_mul_pd(tmp_qloop_52,ux_dof_4)),_mm256_mul_pd(tmp_qloop_53,ux_dof_5)),_mm256_mul_pd(tmp_qloop_54,ux_dof_0))),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_59,tmp_qloop_8),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_45,uy_dof_3),_mm256_mul_pd(tmp_qloop_48,uy_dof_1)),_mm256_mul_pd(tmp_qloop_51,uy_dof_2)),_mm256_mul_pd(tmp_qloop_52,uy_dof_4)),_mm256_mul_pd(tmp_qloop_53,uy_dof_5)),_mm256_mul_pd(tmp_qloop_54,uy_dof_0))))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q]));
                         const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_30);
                         const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_30);
                         const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_22),tmp_qloop_36);
                         const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_9)),_mm256_mul_pd(tmp_qloop_40,tmp_qloop_8)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_8,tmp_qloop_8),tmp_qloop_8)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_38),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                         const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                         const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                         const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_35),tmp_qloop_44);
                         const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_40),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_2),tmp_qloop_2),tmp_qloop_34),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_33),tmp_qloop_44);
                         const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_9),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                         const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[21*q],_data_tabulated_and_untitled_0_0_GRAY[21*q],_data_tabulated_and_untitled_0_0_GRAY[21*q],_data_tabulated_and_untitled_0_0_GRAY[21*q]));
                         const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[21*q + 6],_data_tabulated_and_untitled_0_0_GRAY[21*q + 6],_data_tabulated_and_untitled_0_0_GRAY[21*q + 6],_data_tabulated_and_untitled_0_0_GRAY[21*q + 6]));
                         const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[21*q + 11],_data_tabulated_and_untitled_0_0_GRAY[21*q + 11],_data_tabulated_and_untitled_0_0_GRAY[21*q + 11],_data_tabulated_and_untitled_0_0_GRAY[21*q + 11]));
                         const __m256d q_tmp_3_3 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[21*q + 15],_data_tabulated_and_untitled_0_0_GRAY[21*q + 15],_data_tabulated_and_untitled_0_0_GRAY[21*q + 15],_data_tabulated_and_untitled_0_0_GRAY[21*q + 15]));
                         const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[21*q + 18],_data_tabulated_and_untitled_0_0_GRAY[21*q + 18],_data_tabulated_and_untitled_0_0_GRAY[21*q + 18],_data_tabulated_and_untitled_0_0_GRAY[21*q + 18]));
                         const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_GRAY[21*q + 20],_data_tabulated_and_untitled_0_0_GRAY[21*q + 20],_data_tabulated_and_untitled_0_0_GRAY[21*q + 20],_data_tabulated_and_untitled_0_0_GRAY[21*q + 20]));
                         q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                         q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                         q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                         q_acc_3_3 = _mm256_add_pd(q_acc_3_3,q_tmp_3_3);
                         q_acc_4_4 = _mm256_add_pd(q_acc_4_4,q_tmp_4_4);
                         q_acc_5_5 = _mm256_add_pd(q_acc_5_5,q_tmp_5_5);
                      }
                      const __m256d elMatDiag_0 = q_acc_0_0;
                      const __m256d elMatDiag_1 = q_acc_1_1;
                      const __m256d elMatDiag_2 = q_acc_2_2;
                      const __m256d elMatDiag_3 = q_acc_3_3;
                      const __m256d elMatDiag_4 = q_acc_4_4;
                      const __m256d elMatDiag_5 = q_acc_5_5;
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_0,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatDiag_1,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_2,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_3,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_4,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_5,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2))])));
                   }
                }
                const __m256d tmp_moved_constant_0 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_1 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_2 = _mm256_loadu_pd(& _data_uxVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_3 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_4 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_5 = _mm256_loadu_pd(& _data_uxEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
                const __m256d tmp_moved_constant_6 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_7 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_8 = _mm256_loadu_pd(& _data_uyVertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1]);
                const __m256d tmp_moved_constant_9 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))]);
                const __m256d tmp_moved_constant_10 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1]);
                const __m256d tmp_moved_constant_11 = _mm256_loadu_pd(& _data_uyEdge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))]);
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
                  
                      const __m256d p_affine_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0])),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      const __m256d p_affine_2_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0,macro_vertex_coord_id_1comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0)),_mm256_set_pd(macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0,macro_vertex_coord_id_2comp0)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0,macro_vertex_coord_id_0comp0));
                      const __m256d p_affine_2_1 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1,macro_vertex_coord_id_1comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_0[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1)),_mm256_set_pd(macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1,macro_vertex_coord_id_2comp1)),_mm256_add_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_loadu_pd(& _data_float_loop_ctr_array_dim_1[ctr_0 - phantom_ctr_0]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_set_pd(micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float,micro_edges_per_macro_edge_float)))),_mm256_set_pd(macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1,macro_vertex_coord_id_0comp1));
                      __m256d q_acc_0_0 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_1_1 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_2_2 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_3_3 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_4_4 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      __m256d q_acc_5_5 = _mm256_set_pd(0.0,0.0,0.0,0.0);
                      const __m256d tmp_qloop_0 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_1 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_0);
                      const __m256d tmp_qloop_6 = _mm256_add_pd(_mm256_mul_pd(p_affine_1_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      const __m256d tmp_qloop_7 = _mm256_add_pd(_mm256_mul_pd(p_affine_2_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),p_affine_0_1);
                      for (int64_t q = 0; q < 10; q += 1)
                      {
                         const __m256d tmp_qloop_2 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_0);
                         const __m256d tmp_qloop_5 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_2);
                         const __m256d tmp_qloop_8 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),p_affine_0_1);
                         const __m256d tmp_qloop_9 = _mm256_mul_pd(tmp_qloop_8,tmp_qloop_8);
                         const __m256d tmp_qloop_10 = _mm256_add_pd(tmp_qloop_5,tmp_qloop_9);
                         const __m256d tmp_qloop_11 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(tmp_qloop_10));
                         const __m256d tmp_qloop_21 = _mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                         const __m256d tmp_qloop_22 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                         const __m256d tmp_qloop_23 = _mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10));
                         const __m256d tmp_qloop_24 = _mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0)),tmp_qloop_2),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1)),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14))),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                         const __m256d tmp_qloop_25 = _mm256_mul_pd(tmp_qloop_23,tmp_qloop_24);
                         const __m256d tmp_qloop_26 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(1.0,1.0,1.0,1.0));
                         const __m256d tmp_qloop_27 = _mm256_mul_pd(tmp_qloop_21,_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                         const __m256d tmp_qloop_28 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_26);
                         const __m256d tmp_qloop_31 = _mm256_mul_pd(tmp_qloop_23,_mm256_set_pd(tmp_qloop_20,tmp_qloop_20,tmp_qloop_20,tmp_qloop_20));
                         const __m256d tmp_qloop_32 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4));
                         const __m256d tmp_qloop_33 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_5);
                         const __m256d tmp_qloop_34 = _mm256_mul_pd(_mm256_mul_pd(_mm256_div_pd(_mm256_sqrt_pd(tmp_qloop_10),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_10,tmp_qloop_10),tmp_qloop_10)),tmp_qloop_24),_mm256_set_pd(3.0,3.0,3.0,3.0));
                         const __m256d tmp_qloop_35 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_34),tmp_qloop_9);
                         const __m256d tmp_qloop_36 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_35,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_32,tmp_qloop_9));
                         const __m256d tmp_qloop_37 = _mm256_mul_pd(tmp_qloop_31,_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13));
                         const __m256d tmp_qloop_38 = _mm256_mul_pd(tmp_qloop_2,tmp_qloop_8);
                         const __m256d tmp_qloop_39 = _mm256_mul_pd(tmp_qloop_32,tmp_qloop_38);
                         const __m256d tmp_qloop_40 = _mm256_mul_pd(tmp_qloop_25,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_41 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,tmp_qloop_5),tmp_qloop_8);
                         const __m256d tmp_qloop_42 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_8));
                         const __m256d tmp_qloop_43 = _mm256_mul_pd(tmp_qloop_37,tmp_qloop_38);
                         const __m256d tmp_qloop_44 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_31,tmp_qloop_38),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14));
                         const __m256d tmp_qloop_45 = _mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_46 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]));
                         const __m256d tmp_qloop_47 = _mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_48 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),tmp_qloop_47);
                         const __m256d tmp_qloop_49 = _mm256_mul_pd(_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]));
                         const __m256d tmp_qloop_50 = _mm256_mul_pd(tmp_qloop_49,_mm256_set_pd(2.0,2.0,2.0,2.0));
                         const __m256d tmp_qloop_51 = _mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])),tmp_qloop_50);
                         const __m256d tmp_qloop_52 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_49,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d tmp_qloop_53 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_46,_mm256_set_pd(-4.0,-4.0,-4.0,-4.0)),_mm256_mul_pd(_mm256_set_pd(4.0,4.0,4.0,4.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_45,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d tmp_qloop_54 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q])),_mm256_mul_pd(_mm256_set_pd(-3.0,-3.0,-3.0,-3.0),_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q]))),_mm256_set_pd(1.0,1.0,1.0,1.0)),tmp_qloop_45),tmp_qloop_47),tmp_qloop_50);
                         const __m256d tmp_qloop_55 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_0,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_0,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_1,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d tmp_qloop_56 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(p_affine_0_1,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_6,_mm256_set_pd(_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q],_data_q_p_0[q]))),_mm256_mul_pd(tmp_qloop_7,_mm256_set_pd(_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q],_data_q_p_1[q])));
                         const __m256d tmp_qloop_57 = _mm256_mul_pd(_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_55),_mm256_mul_pd(tmp_qloop_56,tmp_qloop_56))))))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_55),_mm256_mul_pd(tmp_qloop_56,tmp_qloop_56))))))));
                         const __m256d tmp_qloop_58 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_1,rayVertex_1,rayVertex_1,rayVertex_1),tmp_qloop_56),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_mul_pd(_mm256_mul_pd(_mm256_add_pd(_mm256_set_pd(rayVertex_0,rayVertex_0,rayVertex_0,rayVertex_0),tmp_qloop_55),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3))),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_add_pd(_mm256_mul_pd(_mm256_set_pd(tmp_qloop_12,tmp_qloop_12,tmp_qloop_12,tmp_qloop_12),_mm256_set_pd(tmp_qloop_3,tmp_qloop_3,tmp_qloop_3,tmp_qloop_3)),_mm256_mul_pd(_mm256_mul_pd(_mm256_set_pd(-1.0,-1.0,-1.0,-1.0),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_15,tmp_qloop_15,tmp_qloop_15,tmp_qloop_15))))),_mm256_set_pd(tmp_qloop_17,tmp_qloop_17,tmp_qloop_17,tmp_qloop_17)),_mm256_set_pd(radRayVertex,radRayVertex,radRayVertex,radRayVertex));
                         const __m256d tmp_qloop_59 = _mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,tmp_qloop_24),_mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),_mm256_sqrt_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_57,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_58)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_55,tmp_qloop_58)))))),_mm256_mul_pd(tmp_qloop_57,_mm256_mul_pd(_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_56,tmp_qloop_58)))),_mm256_castsi256_pd(_mm256_and_si256(_mm256_set1_epi64x(0x7fffffffffffffff), _mm256_castpd_si256(_mm256_mul_pd(tmp_qloop_56,tmp_qloop_58))))))))));
                         const __m256d jac_blending_0_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_22),_mm256_mul_pd(tmp_qloop_26,tmp_qloop_9));
                         const __m256d jac_blending_0_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_27),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_23),tmp_qloop_24),tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d jac_blending_1_0 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_22,tmp_qloop_8),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_28,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d jac_blending_1_1 = _mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_27,tmp_qloop_8),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_24),tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)));
                         const __m256d tmp_qloop_29 = _mm256_add_pd(_mm256_mul_pd(jac_blending_0_0,jac_blending_1_1),_mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,jac_blending_1_0),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d tmp_qloop_30 = _mm256_div_pd(_mm256_set_pd(1.0,1.0,1.0,1.0),tmp_qloop_29);
                         const __m256d abs_det_jac_blending = tmp_qloop_29;
                         const __m256d tmp_qloop_60 = _mm256_mul_pd(_mm256_mul_pd(abs_det_jac_blending,_mm256_add_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_59),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_0,tmp_qloop_54),_mm256_mul_pd(tmp_moved_constant_1,tmp_qloop_48)),_mm256_mul_pd(tmp_moved_constant_2,tmp_qloop_51)),_mm256_mul_pd(tmp_moved_constant_3,tmp_qloop_45)),_mm256_mul_pd(tmp_moved_constant_4,tmp_qloop_52)),_mm256_mul_pd(tmp_moved_constant_5,tmp_qloop_53))),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_59,tmp_qloop_8),_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_moved_constant_10,tmp_qloop_52),_mm256_mul_pd(tmp_moved_constant_11,tmp_qloop_53)),_mm256_mul_pd(tmp_moved_constant_6,tmp_qloop_54)),_mm256_mul_pd(tmp_moved_constant_7,tmp_qloop_48)),_mm256_mul_pd(tmp_moved_constant_8,tmp_qloop_51)),_mm256_mul_pd(tmp_moved_constant_9,tmp_qloop_45))))),_mm256_set_pd(_data_q_w[q],_data_q_w[q],_data_q_w[q],_data_q_w[q]));
                         const __m256d jac_blending_inv_0_0 = _mm256_mul_pd(jac_blending_1_1,tmp_qloop_30);
                         const __m256d jac_blending_inv_0_1 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_0_1,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d jac_blending_inv_1_0 = _mm256_mul_pd(_mm256_mul_pd(jac_blending_1_0,tmp_qloop_30),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0));
                         const __m256d jac_blending_inv_1_1 = _mm256_mul_pd(jac_blending_0_0,tmp_qloop_30);
                         const __m256d hessian_blending_0_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_33,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),tmp_qloop_22),tmp_qloop_36);
                         const __m256d hessian_blending_1_0_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_37,tmp_qloop_9)),_mm256_mul_pd(tmp_qloop_40,tmp_qloop_8)),_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_34,_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_8,tmp_qloop_8),tmp_qloop_8)),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)));
                         const __m256d hessian_blending_0_0_1 = _mm256_add_pd(_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_38),_mm256_set_pd(-2.0,-2.0,-2.0,-2.0)),_mm256_set_pd(tmp_qloop_19,tmp_qloop_19,tmp_qloop_19,tmp_qloop_19)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                         const __m256d hessian_blending_1_0_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_36,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_11,_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)),_mm256_set_pd(tmp_qloop_4,tmp_qloop_4,tmp_qloop_4,tmp_qloop_4)));
                         const __m256d hessian_blending_0_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_39,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(tmp_qloop_42,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                         const __m256d hessian_blending_1_1_0 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_28,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_43,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_35),tmp_qloop_44);
                         const __m256d hessian_blending_0_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_40),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_2,tmp_qloop_2),tmp_qloop_2),tmp_qloop_34),_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),tmp_qloop_33),tmp_qloop_44);
                         const __m256d hessian_blending_1_1_1 = _mm256_add_pd(_mm256_add_pd(_mm256_add_pd(_mm256_mul_pd(tmp_qloop_27,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0)),_mm256_mul_pd(tmp_qloop_41,_mm256_set_pd(-1.0,-1.0,-1.0,-1.0))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_5),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_13,tmp_qloop_13,tmp_qloop_13,tmp_qloop_13)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18))),_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(_mm256_mul_pd(tmp_qloop_23,tmp_qloop_9),_mm256_set_pd(1.0,1.0,1.0,1.0)),_mm256_set_pd(tmp_qloop_14,tmp_qloop_14,tmp_qloop_14,tmp_qloop_14)),_mm256_set_pd(tmp_qloop_16,tmp_qloop_16,tmp_qloop_16,tmp_qloop_16)),_mm256_set_pd(tmp_qloop_18,tmp_qloop_18,tmp_qloop_18,tmp_qloop_18)));
                         const __m256d q_tmp_0_0 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[21*q],_data_tabulated_and_untitled_0_0_BLUE[21*q],_data_tabulated_and_untitled_0_0_BLUE[21*q],_data_tabulated_and_untitled_0_0_BLUE[21*q]));
                         const __m256d q_tmp_1_1 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[21*q + 6],_data_tabulated_and_untitled_0_0_BLUE[21*q + 6],_data_tabulated_and_untitled_0_0_BLUE[21*q + 6],_data_tabulated_and_untitled_0_0_BLUE[21*q + 6]));
                         const __m256d q_tmp_2_2 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[21*q + 11],_data_tabulated_and_untitled_0_0_BLUE[21*q + 11],_data_tabulated_and_untitled_0_0_BLUE[21*q + 11],_data_tabulated_and_untitled_0_0_BLUE[21*q + 11]));
                         const __m256d q_tmp_3_3 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[21*q + 15],_data_tabulated_and_untitled_0_0_BLUE[21*q + 15],_data_tabulated_and_untitled_0_0_BLUE[21*q + 15],_data_tabulated_and_untitled_0_0_BLUE[21*q + 15]));
                         const __m256d q_tmp_4_4 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[21*q + 18],_data_tabulated_and_untitled_0_0_BLUE[21*q + 18],_data_tabulated_and_untitled_0_0_BLUE[21*q + 18],_data_tabulated_and_untitled_0_0_BLUE[21*q + 18]));
                         const __m256d q_tmp_5_5 = _mm256_mul_pd(tmp_qloop_60,_mm256_set_pd(_data_tabulated_and_untitled_0_0_BLUE[21*q + 20],_data_tabulated_and_untitled_0_0_BLUE[21*q + 20],_data_tabulated_and_untitled_0_0_BLUE[21*q + 20],_data_tabulated_and_untitled_0_0_BLUE[21*q + 20]));
                         q_acc_0_0 = _mm256_add_pd(q_acc_0_0,q_tmp_0_0);
                         q_acc_1_1 = _mm256_add_pd(q_acc_1_1,q_tmp_1_1);
                         q_acc_2_2 = _mm256_add_pd(q_acc_2_2,q_tmp_2_2);
                         q_acc_3_3 = _mm256_add_pd(q_acc_3_3,q_tmp_3_3);
                         q_acc_4_4 = _mm256_add_pd(q_acc_4_4,q_tmp_4_4);
                         q_acc_5_5 = _mm256_add_pd(q_acc_5_5,q_tmp_5_5);
                      }
                      const __m256d elMatDiag_0 = q_acc_0_0;
                      const __m256d elMatDiag_1 = q_acc_1_1;
                      const __m256d elMatDiag_2 = q_acc_2_2;
                      const __m256d elMatDiag_3 = q_acc_3_3;
                      const __m256d elMatDiag_4 = q_acc_4_4;
                      const __m256d elMatDiag_5 = q_acc_5_5;
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatDiag_0,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_1,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatDiag_2,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Vertex[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_3,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + (ctr_1 + 1)*(micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2))])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1],_mm256_add_pd(_mm256_mul_pd(elMatDiag_4,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2)) + 1])));
                      _mm256_storeu_pd(&_data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))],_mm256_add_pd(_mm256_mul_pd(elMatDiag_5,_mm256_set_pd(diagScaling,diagScaling,diagScaling,diagScaling)),_mm256_loadu_pd(& _data_invDiag_Edge[ctr_0 + ctr_1*(micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)) / (2))])));
                   }
                }
             }
             for (int64_t ctr_0 = (int64_t)((-ctr_1 + micro_edges_per_macro_edge - 1) / (4)) * (4); ctr_0 < -ctr_1 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
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
                      real_t q_acc_1_1 = 0.0;
                      real_t q_acc_2_2 = 0.0;
                      real_t q_acc_3_3 = 0.0;
                      real_t q_acc_4_4 = 0.0;
                      real_t q_acc_5_5 = 0.0;
                      const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                      const real_t tmp_qloop_1 = p_affine_0_0 - p_affine_2_0;
                      const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                      const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
                      for (int64_t q = 0; q < 10; q += 1)
                      {
                         const real_t tmp_qloop_2 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_1*_data_q_p_1[q];
                         const real_t tmp_qloop_5 = (tmp_qloop_2*tmp_qloop_2);
                         const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                         const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                         const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                         const real_t tmp_qloop_11 = pow(tmp_qloop_10, -0.50000000000000000);
                         const real_t tmp_qloop_21 = tmp_qloop_11*tmp_qloop_20;
                         const real_t tmp_qloop_22 = tmp_qloop_21*tmp_qloop_4;
                         const real_t tmp_qloop_23 = pow(tmp_qloop_10, -1.5000000000000000);
                         const real_t tmp_qloop_24 = radRayVertex + tmp_qloop_19*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_8) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_2));
                         const real_t tmp_qloop_25 = tmp_qloop_23*tmp_qloop_24;
                         const real_t tmp_qloop_26 = tmp_qloop_25*1.0;
                         const real_t tmp_qloop_27 = tmp_qloop_14*tmp_qloop_21;
                         const real_t tmp_qloop_28 = tmp_qloop_2*tmp_qloop_26;
                         const real_t tmp_qloop_31 = tmp_qloop_20*tmp_qloop_23;
                         const real_t tmp_qloop_32 = tmp_qloop_31*tmp_qloop_4;
                         const real_t tmp_qloop_33 = tmp_qloop_32*tmp_qloop_5;
                         const real_t tmp_qloop_34 = pow(tmp_qloop_10, -2.5000000000000000)*tmp_qloop_24*3.0;
                         const real_t tmp_qloop_35 = tmp_qloop_2*tmp_qloop_34*tmp_qloop_9;
                         const real_t tmp_qloop_36 = tmp_qloop_32*tmp_qloop_9 - tmp_qloop_35;
                         const real_t tmp_qloop_37 = tmp_qloop_13*tmp_qloop_31;
                         const real_t tmp_qloop_38 = tmp_qloop_2*tmp_qloop_8;
                         const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_38;
                         const real_t tmp_qloop_40 = tmp_qloop_25*2.0;
                         const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_5*tmp_qloop_8;
                         const real_t tmp_qloop_42 = tmp_qloop_26*tmp_qloop_8 - tmp_qloop_41;
                         const real_t tmp_qloop_43 = tmp_qloop_37*tmp_qloop_38;
                         const real_t tmp_qloop_44 = tmp_qloop_14*tmp_qloop_31*tmp_qloop_38;
                         const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                         const real_t tmp_qloop_46 = (_data_q_p_0[q]*_data_q_p_0[q]);
                         const real_t tmp_qloop_47 = tmp_qloop_46*2.0;
                         const real_t tmp_qloop_48 = tmp_qloop_47 - _data_q_p_0[q];
                         const real_t tmp_qloop_49 = (_data_q_p_1[q]*_data_q_p_1[q]);
                         const real_t tmp_qloop_50 = tmp_qloop_49*2.0;
                         const real_t tmp_qloop_51 = tmp_qloop_50 - _data_q_p_1[q];
                         const real_t tmp_qloop_52 = -tmp_qloop_45 + tmp_qloop_49*-4.0 + 4.0*_data_q_p_1[q];
                         const real_t tmp_qloop_53 = -tmp_qloop_45 + tmp_qloop_46*-4.0 + 4.0*_data_q_p_0[q];
                         const real_t tmp_qloop_54 = tmp_qloop_45 + tmp_qloop_47 + tmp_qloop_50 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                         const real_t tmp_qloop_55 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                         const real_t tmp_qloop_56 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                         const real_t tmp_qloop_57 = 1.0 / (abs(pow((tmp_qloop_55*tmp_qloop_55) + (tmp_qloop_56*tmp_qloop_56), 0.50000000000000000))*abs(pow((tmp_qloop_55*tmp_qloop_55) + (tmp_qloop_56*tmp_qloop_56), 0.50000000000000000)));
                         const real_t tmp_qloop_58 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_56) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_55));
                         const real_t tmp_qloop_59 = tmp_qloop_11*tmp_qloop_24*pow(tmp_qloop_57*(abs(tmp_qloop_55*tmp_qloop_58)*abs(tmp_qloop_55*tmp_qloop_58)) + tmp_qloop_57*(abs(tmp_qloop_56*tmp_qloop_58)*abs(tmp_qloop_56*tmp_qloop_58)), -0.50000000000000000);
                         const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                         const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                         const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                         const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                         const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                         const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                         const real_t abs_det_jac_blending = tmp_qloop_29;
                         const real_t tmp_qloop_60 = abs_det_jac_blending*(tmp_qloop_2*tmp_qloop_59*(tmp_qloop_45*ux_dof_3 + tmp_qloop_48*ux_dof_1 + tmp_qloop_51*ux_dof_2 + tmp_qloop_52*ux_dof_4 + tmp_qloop_53*ux_dof_5 + tmp_qloop_54*ux_dof_0) + tmp_qloop_59*tmp_qloop_8*(tmp_qloop_45*uy_dof_3 + tmp_qloop_48*uy_dof_1 + tmp_qloop_51*uy_dof_2 + tmp_qloop_52*uy_dof_4 + tmp_qloop_53*uy_dof_5 + tmp_qloop_54*uy_dof_0))*_data_q_w[q];
                         const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                         const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                         const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                         const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                         const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                         const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                         const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                         const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                         const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                         const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                         const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                         const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                         const real_t q_tmp_0_0 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q];
                         const real_t q_tmp_1_1 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 6];
                         const real_t q_tmp_2_2 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 11];
                         const real_t q_tmp_3_3 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 15];
                         const real_t q_tmp_4_4 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 18];
                         const real_t q_tmp_5_5 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 20];
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
                      real_t q_acc_1_1 = 0.0;
                      real_t q_acc_2_2 = 0.0;
                      real_t q_acc_3_3 = 0.0;
                      real_t q_acc_4_4 = 0.0;
                      real_t q_acc_5_5 = 0.0;
                      const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                      const real_t tmp_qloop_1 = p_affine_0_0 - p_affine_2_0;
                      const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                      const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
                      for (int64_t q = 0; q < 10; q += 1)
                      {
                         const real_t tmp_qloop_2 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_1*_data_q_p_1[q];
                         const real_t tmp_qloop_5 = (tmp_qloop_2*tmp_qloop_2);
                         const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                         const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                         const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                         const real_t tmp_qloop_11 = pow(tmp_qloop_10, -0.50000000000000000);
                         const real_t tmp_qloop_21 = tmp_qloop_11*tmp_qloop_20;
                         const real_t tmp_qloop_22 = tmp_qloop_21*tmp_qloop_4;
                         const real_t tmp_qloop_23 = pow(tmp_qloop_10, -1.5000000000000000);
                         const real_t tmp_qloop_24 = radRayVertex + tmp_qloop_19*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_8) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_2));
                         const real_t tmp_qloop_25 = tmp_qloop_23*tmp_qloop_24;
                         const real_t tmp_qloop_26 = tmp_qloop_25*1.0;
                         const real_t tmp_qloop_27 = tmp_qloop_14*tmp_qloop_21;
                         const real_t tmp_qloop_28 = tmp_qloop_2*tmp_qloop_26;
                         const real_t tmp_qloop_31 = tmp_qloop_20*tmp_qloop_23;
                         const real_t tmp_qloop_32 = tmp_qloop_31*tmp_qloop_4;
                         const real_t tmp_qloop_33 = tmp_qloop_32*tmp_qloop_5;
                         const real_t tmp_qloop_34 = pow(tmp_qloop_10, -2.5000000000000000)*tmp_qloop_24*3.0;
                         const real_t tmp_qloop_35 = tmp_qloop_2*tmp_qloop_34*tmp_qloop_9;
                         const real_t tmp_qloop_36 = tmp_qloop_32*tmp_qloop_9 - tmp_qloop_35;
                         const real_t tmp_qloop_37 = tmp_qloop_13*tmp_qloop_31;
                         const real_t tmp_qloop_38 = tmp_qloop_2*tmp_qloop_8;
                         const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_38;
                         const real_t tmp_qloop_40 = tmp_qloop_25*2.0;
                         const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_5*tmp_qloop_8;
                         const real_t tmp_qloop_42 = tmp_qloop_26*tmp_qloop_8 - tmp_qloop_41;
                         const real_t tmp_qloop_43 = tmp_qloop_37*tmp_qloop_38;
                         const real_t tmp_qloop_44 = tmp_qloop_14*tmp_qloop_31*tmp_qloop_38;
                         const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                         const real_t tmp_qloop_46 = (_data_q_p_0[q]*_data_q_p_0[q]);
                         const real_t tmp_qloop_47 = tmp_qloop_46*2.0;
                         const real_t tmp_qloop_48 = tmp_qloop_47 - _data_q_p_0[q];
                         const real_t tmp_qloop_49 = (_data_q_p_1[q]*_data_q_p_1[q]);
                         const real_t tmp_qloop_50 = tmp_qloop_49*2.0;
                         const real_t tmp_qloop_51 = tmp_qloop_50 - _data_q_p_1[q];
                         const real_t tmp_qloop_52 = -tmp_qloop_45 + tmp_qloop_49*-4.0 + 4.0*_data_q_p_1[q];
                         const real_t tmp_qloop_53 = -tmp_qloop_45 + tmp_qloop_46*-4.0 + 4.0*_data_q_p_0[q];
                         const real_t tmp_qloop_54 = tmp_qloop_45 + tmp_qloop_47 + tmp_qloop_50 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                         const real_t tmp_qloop_55 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                         const real_t tmp_qloop_56 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                         const real_t tmp_qloop_57 = 1.0 / (abs(pow((tmp_qloop_55*tmp_qloop_55) + (tmp_qloop_56*tmp_qloop_56), 0.50000000000000000))*abs(pow((tmp_qloop_55*tmp_qloop_55) + (tmp_qloop_56*tmp_qloop_56), 0.50000000000000000)));
                         const real_t tmp_qloop_58 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_56) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_55));
                         const real_t tmp_qloop_59 = tmp_qloop_11*tmp_qloop_24*pow(tmp_qloop_57*(abs(tmp_qloop_55*tmp_qloop_58)*abs(tmp_qloop_55*tmp_qloop_58)) + tmp_qloop_57*(abs(tmp_qloop_56*tmp_qloop_58)*abs(tmp_qloop_56*tmp_qloop_58)), -0.50000000000000000);
                         const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                         const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                         const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                         const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                         const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                         const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                         const real_t abs_det_jac_blending = tmp_qloop_29;
                         const real_t tmp_qloop_60 = abs_det_jac_blending*(tmp_qloop_2*tmp_qloop_59*(tmp_moved_constant_0*tmp_qloop_54 + tmp_moved_constant_1*tmp_qloop_48 + tmp_moved_constant_2*tmp_qloop_51 + tmp_moved_constant_3*tmp_qloop_45 + tmp_moved_constant_4*tmp_qloop_52 + tmp_moved_constant_5*tmp_qloop_53) + tmp_qloop_59*tmp_qloop_8*(tmp_moved_constant_10*tmp_qloop_52 + tmp_moved_constant_11*tmp_qloop_53 + tmp_moved_constant_6*tmp_qloop_54 + tmp_moved_constant_7*tmp_qloop_48 + tmp_moved_constant_8*tmp_qloop_51 + tmp_moved_constant_9*tmp_qloop_45))*_data_q_w[q];
                         const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                         const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                         const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                         const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                         const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                         const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                         const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                         const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                         const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                         const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                         const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                         const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                         const real_t q_tmp_0_0 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_BLUE[21*q];
                         const real_t q_tmp_1_1 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_BLUE[21*q + 6];
                         const real_t q_tmp_2_2 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_BLUE[21*q + 11];
                         const real_t q_tmp_3_3 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_BLUE[21*q + 15];
                         const real_t q_tmp_4_4 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_BLUE[21*q + 18];
                         const real_t q_tmp_5_5 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_BLUE[21*q + 20];
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
          }
          {
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
                      real_t q_acc_1_1 = 0.0;
                      real_t q_acc_2_2 = 0.0;
                      real_t q_acc_3_3 = 0.0;
                      real_t q_acc_4_4 = 0.0;
                      real_t q_acc_5_5 = 0.0;
                      const real_t tmp_qloop_0 = p_affine_0_0 - p_affine_1_0;
                      const real_t tmp_qloop_1 = p_affine_0_0 - p_affine_2_0;
                      const real_t tmp_qloop_6 = p_affine_0_1 - p_affine_1_1;
                      const real_t tmp_qloop_7 = p_affine_0_1 - p_affine_2_1;
                      for (int64_t q = 0; q < 10; q += 1)
                      {
                         const real_t tmp_qloop_2 = p_affine_0_0 - tmp_qloop_0*_data_q_p_0[q] - tmp_qloop_1*_data_q_p_1[q];
                         const real_t tmp_qloop_5 = (tmp_qloop_2*tmp_qloop_2);
                         const real_t tmp_qloop_8 = p_affine_0_1 - tmp_qloop_6*_data_q_p_0[q] - tmp_qloop_7*_data_q_p_1[q];
                         const real_t tmp_qloop_9 = (tmp_qloop_8*tmp_qloop_8);
                         const real_t tmp_qloop_10 = tmp_qloop_5 + tmp_qloop_9;
                         const real_t tmp_qloop_11 = pow(tmp_qloop_10, -0.50000000000000000);
                         const real_t tmp_qloop_21 = tmp_qloop_11*tmp_qloop_20;
                         const real_t tmp_qloop_22 = tmp_qloop_21*tmp_qloop_4;
                         const real_t tmp_qloop_23 = pow(tmp_qloop_10, -1.5000000000000000);
                         const real_t tmp_qloop_24 = radRayVertex + tmp_qloop_19*(-tmp_qloop_14*(-rayVertex_1 + tmp_qloop_8) + tmp_qloop_4*(-rayVertex_0 + tmp_qloop_2));
                         const real_t tmp_qloop_25 = tmp_qloop_23*tmp_qloop_24;
                         const real_t tmp_qloop_26 = tmp_qloop_25*1.0;
                         const real_t tmp_qloop_27 = tmp_qloop_14*tmp_qloop_21;
                         const real_t tmp_qloop_28 = tmp_qloop_2*tmp_qloop_26;
                         const real_t tmp_qloop_31 = tmp_qloop_20*tmp_qloop_23;
                         const real_t tmp_qloop_32 = tmp_qloop_31*tmp_qloop_4;
                         const real_t tmp_qloop_33 = tmp_qloop_32*tmp_qloop_5;
                         const real_t tmp_qloop_34 = pow(tmp_qloop_10, -2.5000000000000000)*tmp_qloop_24*3.0;
                         const real_t tmp_qloop_35 = tmp_qloop_2*tmp_qloop_34*tmp_qloop_9;
                         const real_t tmp_qloop_36 = tmp_qloop_32*tmp_qloop_9 - tmp_qloop_35;
                         const real_t tmp_qloop_37 = tmp_qloop_13*tmp_qloop_31;
                         const real_t tmp_qloop_38 = tmp_qloop_2*tmp_qloop_8;
                         const real_t tmp_qloop_39 = tmp_qloop_32*tmp_qloop_38;
                         const real_t tmp_qloop_40 = tmp_qloop_25*2.0;
                         const real_t tmp_qloop_41 = tmp_qloop_34*tmp_qloop_5*tmp_qloop_8;
                         const real_t tmp_qloop_42 = tmp_qloop_26*tmp_qloop_8 - tmp_qloop_41;
                         const real_t tmp_qloop_43 = tmp_qloop_37*tmp_qloop_38;
                         const real_t tmp_qloop_44 = tmp_qloop_14*tmp_qloop_31*tmp_qloop_38;
                         const real_t tmp_qloop_45 = 4.0*_data_q_p_0[q]*_data_q_p_1[q];
                         const real_t tmp_qloop_46 = (_data_q_p_0[q]*_data_q_p_0[q]);
                         const real_t tmp_qloop_47 = tmp_qloop_46*2.0;
                         const real_t tmp_qloop_48 = tmp_qloop_47 - _data_q_p_0[q];
                         const real_t tmp_qloop_49 = (_data_q_p_1[q]*_data_q_p_1[q]);
                         const real_t tmp_qloop_50 = tmp_qloop_49*2.0;
                         const real_t tmp_qloop_51 = tmp_qloop_50 - _data_q_p_1[q];
                         const real_t tmp_qloop_52 = -tmp_qloop_45 + tmp_qloop_49*-4.0 + 4.0*_data_q_p_1[q];
                         const real_t tmp_qloop_53 = -tmp_qloop_45 + tmp_qloop_46*-4.0 + 4.0*_data_q_p_0[q];
                         const real_t tmp_qloop_54 = tmp_qloop_45 + tmp_qloop_47 + tmp_qloop_50 - 3.0*_data_q_p_0[q] - 3.0*_data_q_p_1[q] + 1.0;
                         const real_t tmp_qloop_55 = -p_affine_0_0 + tmp_qloop_0*_data_q_p_0[q] + tmp_qloop_1*_data_q_p_1[q];
                         const real_t tmp_qloop_56 = -p_affine_0_1 + tmp_qloop_6*_data_q_p_0[q] + tmp_qloop_7*_data_q_p_1[q];
                         const real_t tmp_qloop_57 = 1.0 / (abs(pow((tmp_qloop_55*tmp_qloop_55) + (tmp_qloop_56*tmp_qloop_56), 0.50000000000000000))*abs(pow((tmp_qloop_55*tmp_qloop_55) + (tmp_qloop_56*tmp_qloop_56), 0.50000000000000000)));
                         const real_t tmp_qloop_58 = radRayVertex + tmp_qloop_17*1.0 / (tmp_qloop_12*tmp_qloop_3 - tmp_qloop_13*tmp_qloop_15)*(tmp_qloop_13*(rayVertex_1 + tmp_qloop_56) - tmp_qloop_3*(rayVertex_0 + tmp_qloop_55));
                         const real_t tmp_qloop_59 = tmp_qloop_11*tmp_qloop_24*pow(tmp_qloop_57*(abs(tmp_qloop_55*tmp_qloop_58)*abs(tmp_qloop_55*tmp_qloop_58)) + tmp_qloop_57*(abs(tmp_qloop_56*tmp_qloop_58)*abs(tmp_qloop_56*tmp_qloop_58)), -0.50000000000000000);
                         const real_t jac_blending_0_0 = tmp_qloop_2*tmp_qloop_22 + tmp_qloop_26*tmp_qloop_9;
                         const real_t jac_blending_0_1 = -tmp_qloop_2*tmp_qloop_23*tmp_qloop_24*tmp_qloop_8 - tmp_qloop_2*tmp_qloop_27;
                         const real_t jac_blending_1_0 = tmp_qloop_22*tmp_qloop_8 - tmp_qloop_28*tmp_qloop_8;
                         const real_t jac_blending_1_1 = tmp_qloop_23*tmp_qloop_24*tmp_qloop_5*1.0 - tmp_qloop_27*tmp_qloop_8;
                         const real_t tmp_qloop_29 = jac_blending_0_0*jac_blending_1_1 - jac_blending_0_1*jac_blending_1_0;
                         const real_t tmp_qloop_30 = 1.0 / (tmp_qloop_29);
                         const real_t abs_det_jac_blending = tmp_qloop_29;
                         const real_t tmp_qloop_60 = abs_det_jac_blending*(tmp_qloop_2*tmp_qloop_59*(tmp_qloop_45*ux_dof_3 + tmp_qloop_48*ux_dof_1 + tmp_qloop_51*ux_dof_2 + tmp_qloop_52*ux_dof_4 + tmp_qloop_53*ux_dof_5 + tmp_qloop_54*ux_dof_0) + tmp_qloop_59*tmp_qloop_8*(tmp_qloop_45*uy_dof_3 + tmp_qloop_48*uy_dof_1 + tmp_qloop_51*uy_dof_2 + tmp_qloop_52*uy_dof_4 + tmp_qloop_53*uy_dof_5 + tmp_qloop_54*uy_dof_0))*_data_q_w[q];
                         const real_t jac_blending_inv_0_0 = jac_blending_1_1*tmp_qloop_30;
                         const real_t jac_blending_inv_0_1 = -jac_blending_0_1*tmp_qloop_30;
                         const real_t jac_blending_inv_1_0 = -jac_blending_1_0*tmp_qloop_30;
                         const real_t jac_blending_inv_1_1 = jac_blending_0_0*tmp_qloop_30;
                         const real_t hessian_blending_0_0_0 = tmp_qloop_22 - tmp_qloop_33 + tmp_qloop_36;
                         const real_t hessian_blending_1_0_0 = -tmp_qloop_34*(tmp_qloop_8*tmp_qloop_8*tmp_qloop_8) + tmp_qloop_37*tmp_qloop_9 - tmp_qloop_39 + tmp_qloop_40*tmp_qloop_8;
                         const real_t hessian_blending_0_0_1 = tmp_qloop_19*tmp_qloop_23*tmp_qloop_38*tmp_qloop_4*-2.0 - tmp_qloop_42;
                         const real_t hessian_blending_1_0_1 = tmp_qloop_11*tmp_qloop_16*tmp_qloop_18*tmp_qloop_4*1.0 - tmp_qloop_28 - tmp_qloop_36 - tmp_qloop_43;
                         const real_t hessian_blending_0_1_0 = tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 - tmp_qloop_27 - tmp_qloop_39 - tmp_qloop_42;
                         const real_t hessian_blending_1_1_0 = -tmp_qloop_28 + tmp_qloop_35 - tmp_qloop_43 + tmp_qloop_44;
                         const real_t hessian_blending_0_1_1 = tmp_qloop_2*tmp_qloop_40 - (tmp_qloop_2*tmp_qloop_2*tmp_qloop_2)*tmp_qloop_34 + tmp_qloop_33 + tmp_qloop_44;
                         const real_t hessian_blending_1_1_1 = tmp_qloop_13*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_5*1.0 + tmp_qloop_14*tmp_qloop_16*tmp_qloop_18*tmp_qloop_23*tmp_qloop_9*1.0 - tmp_qloop_27 - tmp_qloop_41;
                         const real_t q_tmp_0_0 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q];
                         const real_t q_tmp_1_1 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 6];
                         const real_t q_tmp_2_2 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 11];
                         const real_t q_tmp_3_3 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 15];
                         const real_t q_tmp_4_4 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 18];
                         const real_t q_tmp_5_5 = tmp_qloop_60*_data_tabulated_and_untitled_0_0_GRAY[21*q + 20];
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
}
} // namespace operatorgeneration

} // namespace hyteg
