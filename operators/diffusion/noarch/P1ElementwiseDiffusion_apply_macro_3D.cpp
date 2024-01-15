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

void P1ElementwiseDiffusion::apply_macro_3D( real_t * RESTRICT  _data_dst, real_t * RESTRICT  _data_src, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
{
    {
       const real_t tmp_WHITE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2;
       const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const real_t jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const real_t jac_affine_0_2 = -p_affine_0_0 + p_affine_3_0;
       const real_t jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const real_t jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const real_t tmp_WHITE_UP_5 = jac_affine_0_2*jac_affine_1_1;
       const real_t jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
       const real_t tmp_WHITE_UP_3 = jac_affine_0_1*jac_affine_1_2;
       const real_t jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
       const real_t jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
       const real_t tmp_WHITE_UP_2 = jac_affine_1_2*jac_affine_2_1;
       const real_t jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
       const real_t tmp_WHITE_UP_1 = jac_affine_1_1*jac_affine_2_2;
       const real_t tmp_WHITE_UP_4 = jac_affine_0_1*jac_affine_2_2;
       const real_t tmp_WHITE_UP_6 = jac_affine_0_0*tmp_WHITE_UP_1 - jac_affine_0_0*tmp_WHITE_UP_2 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_1_0*tmp_WHITE_UP_4 + jac_affine_2_0*tmp_WHITE_UP_3 - jac_affine_2_0*tmp_WHITE_UP_5;
       const real_t tmp_WHITE_UP_7 = 1.0 / (tmp_WHITE_UP_6);
       const real_t jac_affine_inv_0_0 = tmp_WHITE_UP_7*(tmp_WHITE_UP_1 - tmp_WHITE_UP_2);
       const real_t jac_affine_inv_0_1 = tmp_WHITE_UP_7*(jac_affine_0_2*jac_affine_2_1 - tmp_WHITE_UP_4);
       const real_t jac_affine_inv_0_2 = tmp_WHITE_UP_7*(tmp_WHITE_UP_3 - tmp_WHITE_UP_5);
       const real_t jac_affine_inv_1_0 = tmp_WHITE_UP_7*(-jac_affine_1_0*jac_affine_2_2 + jac_affine_1_2*jac_affine_2_0);
       const real_t jac_affine_inv_1_1 = tmp_WHITE_UP_7*(jac_affine_0_0*jac_affine_2_2 - jac_affine_0_2*jac_affine_2_0);
       const real_t jac_affine_inv_1_2 = tmp_WHITE_UP_7*(-jac_affine_0_0*jac_affine_1_2 + jac_affine_0_2*jac_affine_1_0);
       const real_t jac_affine_inv_2_0 = tmp_WHITE_UP_7*(jac_affine_1_0*jac_affine_2_1 - jac_affine_1_1*jac_affine_2_0);
       const real_t jac_affine_inv_2_1 = tmp_WHITE_UP_7*(-jac_affine_0_0*jac_affine_2_1 + jac_affine_0_1*jac_affine_2_0);
       const real_t jac_affine_inv_2_2 = tmp_WHITE_UP_7*(jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
       const real_t abs_det_jac_affine = abs(tmp_WHITE_UP_6);
       const real_t tmp_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0;
       const real_t tmp_1 = -jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1;
       const real_t tmp_2 = -jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2;
       const real_t tmp_3 = abs_det_jac_affine*0.16666666666666666;
       const real_t tmp_5 = jac_affine_inv_0_0*tmp_0 + jac_affine_inv_0_1*tmp_1 + jac_affine_inv_0_2*tmp_2;
       const real_t tmp_7 = jac_affine_inv_1_0*tmp_0 + jac_affine_inv_1_1*tmp_1 + jac_affine_inv_1_2*tmp_2;
       const real_t tmp_9 = jac_affine_inv_2_0*tmp_0 + jac_affine_inv_2_1*tmp_1 + jac_affine_inv_2_2*tmp_2;
       const real_t tmp_11 = jac_affine_inv_0_0*jac_affine_inv_1_0 + jac_affine_inv_0_1*jac_affine_inv_1_1 + jac_affine_inv_0_2*jac_affine_inv_1_2;
       const real_t tmp_12 = jac_affine_inv_0_0*jac_affine_inv_2_0 + jac_affine_inv_0_1*jac_affine_inv_2_1 + jac_affine_inv_0_2*jac_affine_inv_2_2;
       const real_t tmp_13 = jac_affine_inv_1_0*jac_affine_inv_2_0 + jac_affine_inv_1_1*jac_affine_inv_2_1 + jac_affine_inv_1_2*jac_affine_inv_2_2;
       const real_t tmp_WHITE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_WHITE_DOWN_1 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_WHITE_DOWN_2 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_WHITE_DOWN_3 = tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_2;
       const real_t tmp_WHITE_DOWN_4 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_WHITE_DOWN_5 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_WHITE_DOWN_6 = tmp_WHITE_DOWN_4 + tmp_WHITE_DOWN_5;
       const real_t tmp_WHITE_DOWN_7 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_WHITE_DOWN_8 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_WHITE_DOWN_9 = tmp_WHITE_DOWN_7 + tmp_WHITE_DOWN_8;
       const real_t tmp_WHITE_DOWN_10 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_WHITE_DOWN_11 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_WHITE_DOWN_12 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t Dummy_1254 = tmp_WHITE_DOWN_3;
       const real_t Dummy_1255 = tmp_WHITE_DOWN_6;
       const real_t Dummy_1256 = tmp_WHITE_DOWN_9;
       const real_t Dummy_1257 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_2;
       const real_t Dummy_1258 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_5;
       const real_t Dummy_1259 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_8;
       const real_t Dummy_1260 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_10;
       const real_t Dummy_1261 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_4;
       const real_t Dummy_1262 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_7;
       const real_t Dummy_1263 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_3;
       const real_t Dummy_1264 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_6;
       const real_t Dummy_1265 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_9;
       const real_t Dummy_1266 = -Dummy_1254 + Dummy_1257;
       const real_t Dummy_1267 = -Dummy_1254 + Dummy_1260;
       const real_t Dummy_1268 = -Dummy_1254 + Dummy_1263;
       const real_t Dummy_1269 = -Dummy_1255 + Dummy_1258;
       const real_t Dummy_1270 = -Dummy_1255 + Dummy_1261;
       const real_t tmp_WHITE_DOWN_17 = Dummy_1268*Dummy_1270;
       const real_t Dummy_1271 = -Dummy_1255 + Dummy_1264;
       const real_t tmp_WHITE_DOWN_15 = Dummy_1267*Dummy_1271;
       const real_t Dummy_1272 = -Dummy_1256 + Dummy_1259;
       const real_t Dummy_1273 = -Dummy_1256 + Dummy_1262;
       const real_t tmp_WHITE_DOWN_14 = Dummy_1271*Dummy_1273;
       const real_t Dummy_1274 = -Dummy_1256 + Dummy_1265;
       const real_t tmp_WHITE_DOWN_13 = Dummy_1270*Dummy_1274;
       const real_t tmp_WHITE_DOWN_16 = Dummy_1267*Dummy_1274;
       const real_t tmp_WHITE_DOWN_18 = Dummy_1266*tmp_WHITE_DOWN_13 - Dummy_1266*tmp_WHITE_DOWN_14 + Dummy_1268*Dummy_1269*Dummy_1273 - Dummy_1269*tmp_WHITE_DOWN_16 + Dummy_1272*tmp_WHITE_DOWN_15 - Dummy_1272*tmp_WHITE_DOWN_17;
       const real_t tmp_WHITE_DOWN_19 = 1.0 / (tmp_WHITE_DOWN_18);
       const real_t Dummy_1275 = tmp_WHITE_DOWN_19*(tmp_WHITE_DOWN_13 - tmp_WHITE_DOWN_14);
       const real_t Dummy_1276 = tmp_WHITE_DOWN_19*(Dummy_1268*Dummy_1273 - tmp_WHITE_DOWN_16);
       const real_t Dummy_1277 = tmp_WHITE_DOWN_19*(tmp_WHITE_DOWN_15 - tmp_WHITE_DOWN_17);
       const real_t Dummy_1278 = tmp_WHITE_DOWN_19*(-Dummy_1269*Dummy_1274 + Dummy_1271*Dummy_1272);
       const real_t Dummy_1279 = tmp_WHITE_DOWN_19*(Dummy_1266*Dummy_1274 - Dummy_1268*Dummy_1272);
       const real_t Dummy_1280 = tmp_WHITE_DOWN_19*(-Dummy_1266*Dummy_1271 + Dummy_1268*Dummy_1269);
       const real_t Dummy_1281 = tmp_WHITE_DOWN_19*(Dummy_1269*Dummy_1273 - Dummy_1270*Dummy_1272);
       const real_t Dummy_1282 = tmp_WHITE_DOWN_19*(-Dummy_1266*Dummy_1273 + Dummy_1267*Dummy_1272);
       const real_t Dummy_1283 = tmp_WHITE_DOWN_19*(Dummy_1266*Dummy_1270 - Dummy_1267*Dummy_1269);
       const real_t Dummy_1284 = abs(tmp_WHITE_DOWN_18);
       const real_t Dummy_1285 = -Dummy_1275 - Dummy_1278 - Dummy_1281;
       const real_t Dummy_1286 = -Dummy_1276 - Dummy_1279 - Dummy_1282;
       const real_t Dummy_1287 = -Dummy_1277 - Dummy_1280 - Dummy_1283;
       const real_t Dummy_1288 = Dummy_1284*0.16666666666666666;
       const real_t Dummy_1290 = Dummy_1275*Dummy_1285 + Dummy_1276*Dummy_1286 + Dummy_1277*Dummy_1287;
       const real_t Dummy_1292 = Dummy_1278*Dummy_1285 + Dummy_1279*Dummy_1286 + Dummy_1280*Dummy_1287;
       const real_t Dummy_1294 = Dummy_1281*Dummy_1285 + Dummy_1282*Dummy_1286 + Dummy_1283*Dummy_1287;
       const real_t Dummy_1296 = Dummy_1275*Dummy_1278 + Dummy_1276*Dummy_1279 + Dummy_1277*Dummy_1280;
       const real_t Dummy_1297 = Dummy_1275*Dummy_1281 + Dummy_1276*Dummy_1282 + Dummy_1277*Dummy_1283;
       const real_t Dummy_1298 = Dummy_1278*Dummy_1281 + Dummy_1279*Dummy_1282 + Dummy_1280*Dummy_1283;
       const real_t tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t Dummy_1307 = tmp_BLUE_UP_1;
       const real_t Dummy_1308 = tmp_BLUE_UP_2;
       const real_t Dummy_1309 = tmp_BLUE_UP_3;
       const real_t Dummy_1310 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
       const real_t Dummy_1311 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
       const real_t Dummy_1312 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
       const real_t Dummy_1313 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
       const real_t Dummy_1314 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
       const real_t Dummy_1315 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
       const real_t Dummy_1316 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
       const real_t Dummy_1317 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
       const real_t Dummy_1318 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
       const real_t Dummy_1319 = -Dummy_1307 + Dummy_1310;
       const real_t Dummy_1320 = -Dummy_1307 + Dummy_1313;
       const real_t Dummy_1321 = -Dummy_1307 + Dummy_1316;
       const real_t Dummy_1322 = -Dummy_1308 + Dummy_1311;
       const real_t Dummy_1323 = -Dummy_1308 + Dummy_1314;
       const real_t tmp_BLUE_UP_11 = Dummy_1321*Dummy_1323;
       const real_t Dummy_1324 = -Dummy_1308 + Dummy_1317;
       const real_t tmp_BLUE_UP_9 = Dummy_1320*Dummy_1324;
       const real_t Dummy_1325 = -Dummy_1309 + Dummy_1312;
       const real_t Dummy_1326 = -Dummy_1309 + Dummy_1315;
       const real_t tmp_BLUE_UP_8 = Dummy_1324*Dummy_1326;
       const real_t Dummy_1327 = -Dummy_1309 + Dummy_1318;
       const real_t tmp_BLUE_UP_7 = Dummy_1323*Dummy_1327;
       const real_t tmp_BLUE_UP_10 = Dummy_1320*Dummy_1327;
       const real_t tmp_BLUE_UP_12 = Dummy_1319*tmp_BLUE_UP_7 - Dummy_1319*tmp_BLUE_UP_8 + Dummy_1321*Dummy_1322*Dummy_1326 - Dummy_1322*tmp_BLUE_UP_10 - Dummy_1325*tmp_BLUE_UP_11 + Dummy_1325*tmp_BLUE_UP_9;
       const real_t tmp_BLUE_UP_13 = 1.0 / (tmp_BLUE_UP_12);
       const real_t Dummy_1328 = tmp_BLUE_UP_13*(tmp_BLUE_UP_7 - tmp_BLUE_UP_8);
       const real_t Dummy_1329 = tmp_BLUE_UP_13*(Dummy_1321*Dummy_1326 - tmp_BLUE_UP_10);
       const real_t Dummy_1330 = tmp_BLUE_UP_13*(-tmp_BLUE_UP_11 + tmp_BLUE_UP_9);
       const real_t Dummy_1331 = tmp_BLUE_UP_13*(-Dummy_1322*Dummy_1327 + Dummy_1324*Dummy_1325);
       const real_t Dummy_1332 = tmp_BLUE_UP_13*(Dummy_1319*Dummy_1327 - Dummy_1321*Dummy_1325);
       const real_t Dummy_1333 = tmp_BLUE_UP_13*(-Dummy_1319*Dummy_1324 + Dummy_1321*Dummy_1322);
       const real_t Dummy_1334 = tmp_BLUE_UP_13*(Dummy_1322*Dummy_1326 - Dummy_1323*Dummy_1325);
       const real_t Dummy_1335 = tmp_BLUE_UP_13*(-Dummy_1319*Dummy_1326 + Dummy_1320*Dummy_1325);
       const real_t Dummy_1336 = tmp_BLUE_UP_13*(Dummy_1319*Dummy_1323 - Dummy_1320*Dummy_1322);
       const real_t Dummy_1337 = abs(tmp_BLUE_UP_12);
       const real_t Dummy_1338 = -Dummy_1328 - Dummy_1331 - Dummy_1334;
       const real_t Dummy_1339 = -Dummy_1329 - Dummy_1332 - Dummy_1335;
       const real_t Dummy_1340 = -Dummy_1330 - Dummy_1333 - Dummy_1336;
       const real_t Dummy_1341 = Dummy_1337*0.16666666666666666;
       const real_t Dummy_1343 = Dummy_1328*Dummy_1338 + Dummy_1329*Dummy_1339 + Dummy_1330*Dummy_1340;
       const real_t Dummy_1345 = Dummy_1331*Dummy_1338 + Dummy_1332*Dummy_1339 + Dummy_1333*Dummy_1340;
       const real_t Dummy_1347 = Dummy_1334*Dummy_1338 + Dummy_1335*Dummy_1339 + Dummy_1336*Dummy_1340;
       const real_t Dummy_1349 = Dummy_1328*Dummy_1331 + Dummy_1329*Dummy_1332 + Dummy_1330*Dummy_1333;
       const real_t Dummy_1350 = Dummy_1328*Dummy_1334 + Dummy_1329*Dummy_1335 + Dummy_1330*Dummy_1336;
       const real_t Dummy_1351 = Dummy_1331*Dummy_1334 + Dummy_1332*Dummy_1335 + Dummy_1333*Dummy_1336;
       const real_t tmp_BLUE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_BLUE_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_BLUE_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_BLUE_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_BLUE_DOWN_4 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_BLUE_DOWN_5 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_4;
       const real_t tmp_BLUE_DOWN_6 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_BLUE_DOWN_7 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_6;
       const real_t tmp_BLUE_DOWN_8 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t tmp_BLUE_DOWN_9 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_8;
       const real_t Dummy_1360 = tmp_BLUE_DOWN_1;
       const real_t Dummy_1361 = tmp_BLUE_DOWN_2;
       const real_t Dummy_1362 = tmp_BLUE_DOWN_3;
       const real_t Dummy_1363 = tmp_BLUE_DOWN_5;
       const real_t Dummy_1364 = tmp_BLUE_DOWN_7;
       const real_t Dummy_1365 = tmp_BLUE_DOWN_9;
       const real_t Dummy_1366 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
       const real_t Dummy_1367 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
       const real_t Dummy_1368 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
       const real_t Dummy_1369 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
       const real_t Dummy_1370 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
       const real_t Dummy_1371 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
       const real_t Dummy_1372 = -Dummy_1360 + Dummy_1363;
       const real_t Dummy_1373 = -Dummy_1360 + Dummy_1366;
       const real_t Dummy_1374 = -Dummy_1360 + Dummy_1369;
       const real_t Dummy_1375 = -Dummy_1361 + Dummy_1364;
       const real_t Dummy_1376 = -Dummy_1361 + Dummy_1367;
       const real_t tmp_BLUE_DOWN_14 = Dummy_1374*Dummy_1376;
       const real_t Dummy_1377 = -Dummy_1361 + Dummy_1370;
       const real_t tmp_BLUE_DOWN_12 = Dummy_1373*Dummy_1377;
       const real_t Dummy_1378 = -Dummy_1362 + Dummy_1365;
       const real_t Dummy_1379 = -Dummy_1362 + Dummy_1368;
       const real_t tmp_BLUE_DOWN_11 = Dummy_1377*Dummy_1379;
       const real_t Dummy_1380 = -Dummy_1362 + Dummy_1371;
       const real_t tmp_BLUE_DOWN_10 = Dummy_1376*Dummy_1380;
       const real_t tmp_BLUE_DOWN_13 = Dummy_1373*Dummy_1380;
       const real_t tmp_BLUE_DOWN_15 = Dummy_1372*tmp_BLUE_DOWN_10 - Dummy_1372*tmp_BLUE_DOWN_11 + Dummy_1374*Dummy_1375*Dummy_1379 - Dummy_1375*tmp_BLUE_DOWN_13 + Dummy_1378*tmp_BLUE_DOWN_12 - Dummy_1378*tmp_BLUE_DOWN_14;
       const real_t tmp_BLUE_DOWN_16 = 1.0 / (tmp_BLUE_DOWN_15);
       const real_t Dummy_1381 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_10 - tmp_BLUE_DOWN_11);
       const real_t Dummy_1382 = tmp_BLUE_DOWN_16*(Dummy_1374*Dummy_1379 - tmp_BLUE_DOWN_13);
       const real_t Dummy_1383 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_12 - tmp_BLUE_DOWN_14);
       const real_t Dummy_1384 = tmp_BLUE_DOWN_16*(-Dummy_1375*Dummy_1380 + Dummy_1377*Dummy_1378);
       const real_t Dummy_1385 = tmp_BLUE_DOWN_16*(Dummy_1372*Dummy_1380 - Dummy_1374*Dummy_1378);
       const real_t Dummy_1386 = tmp_BLUE_DOWN_16*(-Dummy_1372*Dummy_1377 + Dummy_1374*Dummy_1375);
       const real_t Dummy_1387 = tmp_BLUE_DOWN_16*(Dummy_1375*Dummy_1379 - Dummy_1376*Dummy_1378);
       const real_t Dummy_1388 = tmp_BLUE_DOWN_16*(-Dummy_1372*Dummy_1379 + Dummy_1373*Dummy_1378);
       const real_t Dummy_1389 = tmp_BLUE_DOWN_16*(Dummy_1372*Dummy_1376 - Dummy_1373*Dummy_1375);
       const real_t Dummy_1390 = abs(tmp_BLUE_DOWN_15);
       const real_t Dummy_1391 = -Dummy_1381 - Dummy_1384 - Dummy_1387;
       const real_t Dummy_1392 = -Dummy_1382 - Dummy_1385 - Dummy_1388;
       const real_t Dummy_1393 = -Dummy_1383 - Dummy_1386 - Dummy_1389;
       const real_t Dummy_1394 = Dummy_1390*0.16666666666666666;
       const real_t Dummy_1396 = Dummy_1381*Dummy_1391 + Dummy_1382*Dummy_1392 + Dummy_1383*Dummy_1393;
       const real_t Dummy_1398 = Dummy_1384*Dummy_1391 + Dummy_1385*Dummy_1392 + Dummy_1386*Dummy_1393;
       const real_t Dummy_1400 = Dummy_1387*Dummy_1391 + Dummy_1388*Dummy_1392 + Dummy_1389*Dummy_1393;
       const real_t Dummy_1402 = Dummy_1381*Dummy_1384 + Dummy_1382*Dummy_1385 + Dummy_1383*Dummy_1386;
       const real_t Dummy_1403 = Dummy_1381*Dummy_1387 + Dummy_1382*Dummy_1388 + Dummy_1383*Dummy_1389;
       const real_t Dummy_1404 = Dummy_1384*Dummy_1387 + Dummy_1385*Dummy_1388 + Dummy_1386*Dummy_1389;
       const real_t tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t Dummy_1413 = tmp_GREEN_UP_1;
       const real_t Dummy_1414 = tmp_GREEN_UP_2;
       const real_t Dummy_1415 = tmp_GREEN_UP_3;
       const real_t Dummy_1416 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t Dummy_1417 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t Dummy_1418 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t Dummy_1419 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
       const real_t Dummy_1420 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
       const real_t Dummy_1421 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
       const real_t Dummy_1422 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
       const real_t Dummy_1423 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
       const real_t Dummy_1424 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
       const real_t Dummy_1425 = -Dummy_1413 + Dummy_1416;
       const real_t Dummy_1426 = -Dummy_1413 + Dummy_1419;
       const real_t Dummy_1427 = -Dummy_1413 + Dummy_1422;
       const real_t Dummy_1428 = -Dummy_1414 + Dummy_1417;
       const real_t Dummy_1429 = -Dummy_1414 + Dummy_1420;
       const real_t tmp_GREEN_UP_11 = Dummy_1427*Dummy_1429;
       const real_t Dummy_1430 = -Dummy_1414 + Dummy_1423;
       const real_t tmp_GREEN_UP_9 = Dummy_1426*Dummy_1430;
       const real_t Dummy_1431 = -Dummy_1415 + Dummy_1418;
       const real_t Dummy_1432 = -Dummy_1415 + Dummy_1421;
       const real_t tmp_GREEN_UP_8 = Dummy_1430*Dummy_1432;
       const real_t Dummy_1433 = -Dummy_1415 + Dummy_1424;
       const real_t tmp_GREEN_UP_7 = Dummy_1429*Dummy_1433;
       const real_t tmp_GREEN_UP_10 = Dummy_1426*Dummy_1433;
       const real_t tmp_GREEN_UP_12 = Dummy_1425*tmp_GREEN_UP_7 - Dummy_1425*tmp_GREEN_UP_8 + Dummy_1427*Dummy_1428*Dummy_1432 - Dummy_1428*tmp_GREEN_UP_10 - Dummy_1431*tmp_GREEN_UP_11 + Dummy_1431*tmp_GREEN_UP_9;
       const real_t tmp_GREEN_UP_13 = 1.0 / (tmp_GREEN_UP_12);
       const real_t Dummy_1434 = tmp_GREEN_UP_13*(tmp_GREEN_UP_7 - tmp_GREEN_UP_8);
       const real_t Dummy_1435 = tmp_GREEN_UP_13*(Dummy_1427*Dummy_1432 - tmp_GREEN_UP_10);
       const real_t Dummy_1436 = tmp_GREEN_UP_13*(-tmp_GREEN_UP_11 + tmp_GREEN_UP_9);
       const real_t Dummy_1437 = tmp_GREEN_UP_13*(-Dummy_1428*Dummy_1433 + Dummy_1430*Dummy_1431);
       const real_t Dummy_1438 = tmp_GREEN_UP_13*(Dummy_1425*Dummy_1433 - Dummy_1427*Dummy_1431);
       const real_t Dummy_1439 = tmp_GREEN_UP_13*(-Dummy_1425*Dummy_1430 + Dummy_1427*Dummy_1428);
       const real_t Dummy_1440 = tmp_GREEN_UP_13*(Dummy_1428*Dummy_1432 - Dummy_1429*Dummy_1431);
       const real_t Dummy_1441 = tmp_GREEN_UP_13*(-Dummy_1425*Dummy_1432 + Dummy_1426*Dummy_1431);
       const real_t Dummy_1442 = tmp_GREEN_UP_13*(Dummy_1425*Dummy_1429 - Dummy_1426*Dummy_1428);
       const real_t Dummy_1443 = abs(tmp_GREEN_UP_12);
       const real_t Dummy_1444 = -Dummy_1434 - Dummy_1437 - Dummy_1440;
       const real_t Dummy_1445 = -Dummy_1435 - Dummy_1438 - Dummy_1441;
       const real_t Dummy_1446 = -Dummy_1436 - Dummy_1439 - Dummy_1442;
       const real_t Dummy_1447 = Dummy_1443*0.16666666666666666;
       const real_t Dummy_1449 = Dummy_1434*Dummy_1444 + Dummy_1435*Dummy_1445 + Dummy_1436*Dummy_1446;
       const real_t Dummy_1451 = Dummy_1437*Dummy_1444 + Dummy_1438*Dummy_1445 + Dummy_1439*Dummy_1446;
       const real_t Dummy_1453 = Dummy_1440*Dummy_1444 + Dummy_1441*Dummy_1445 + Dummy_1442*Dummy_1446;
       const real_t Dummy_1455 = Dummy_1434*Dummy_1437 + Dummy_1435*Dummy_1438 + Dummy_1436*Dummy_1439;
       const real_t Dummy_1456 = Dummy_1434*Dummy_1440 + Dummy_1435*Dummy_1441 + Dummy_1436*Dummy_1442;
       const real_t Dummy_1457 = Dummy_1437*Dummy_1440 + Dummy_1438*Dummy_1441 + Dummy_1439*Dummy_1442;
       const real_t tmp_GREEN_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_GREEN_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_GREEN_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_GREEN_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t tmp_GREEN_DOWN_4 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_GREEN_DOWN_5 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_GREEN_DOWN_6 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_GREEN_DOWN_7 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_GREEN_DOWN_8 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_GREEN_DOWN_9 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t Dummy_1466 = tmp_GREEN_DOWN_1;
       const real_t Dummy_1467 = tmp_GREEN_DOWN_2;
       const real_t Dummy_1468 = tmp_GREEN_DOWN_3;
       const real_t Dummy_1469 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
       const real_t Dummy_1470 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
       const real_t Dummy_1471 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
       const real_t Dummy_1472 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
       const real_t Dummy_1473 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
       const real_t Dummy_1474 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
       const real_t Dummy_1475 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
       const real_t Dummy_1476 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
       const real_t Dummy_1477 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
       const real_t Dummy_1478 = -Dummy_1466 + Dummy_1469;
       const real_t Dummy_1479 = -Dummy_1466 + Dummy_1472;
       const real_t Dummy_1480 = -Dummy_1466 + Dummy_1475;
       const real_t Dummy_1481 = -Dummy_1467 + Dummy_1470;
       const real_t Dummy_1482 = -Dummy_1467 + Dummy_1473;
       const real_t tmp_GREEN_DOWN_14 = Dummy_1480*Dummy_1482;
       const real_t Dummy_1483 = -Dummy_1467 + Dummy_1476;
       const real_t tmp_GREEN_DOWN_12 = Dummy_1479*Dummy_1483;
       const real_t Dummy_1484 = -Dummy_1468 + Dummy_1471;
       const real_t Dummy_1485 = -Dummy_1468 + Dummy_1474;
       const real_t tmp_GREEN_DOWN_11 = Dummy_1483*Dummy_1485;
       const real_t Dummy_1486 = -Dummy_1468 + Dummy_1477;
       const real_t tmp_GREEN_DOWN_10 = Dummy_1482*Dummy_1486;
       const real_t tmp_GREEN_DOWN_13 = Dummy_1479*Dummy_1486;
       const real_t tmp_GREEN_DOWN_15 = Dummy_1478*tmp_GREEN_DOWN_10 - Dummy_1478*tmp_GREEN_DOWN_11 + Dummy_1480*Dummy_1481*Dummy_1485 - Dummy_1481*tmp_GREEN_DOWN_13 + Dummy_1484*tmp_GREEN_DOWN_12 - Dummy_1484*tmp_GREEN_DOWN_14;
       const real_t tmp_GREEN_DOWN_16 = 1.0 / (tmp_GREEN_DOWN_15);
       const real_t Dummy_1487 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_10 - tmp_GREEN_DOWN_11);
       const real_t Dummy_1488 = tmp_GREEN_DOWN_16*(Dummy_1480*Dummy_1485 - tmp_GREEN_DOWN_13);
       const real_t Dummy_1489 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_12 - tmp_GREEN_DOWN_14);
       const real_t Dummy_1490 = tmp_GREEN_DOWN_16*(-Dummy_1481*Dummy_1486 + Dummy_1483*Dummy_1484);
       const real_t Dummy_1491 = tmp_GREEN_DOWN_16*(Dummy_1478*Dummy_1486 - Dummy_1480*Dummy_1484);
       const real_t Dummy_1492 = tmp_GREEN_DOWN_16*(-Dummy_1478*Dummy_1483 + Dummy_1480*Dummy_1481);
       const real_t Dummy_1493 = tmp_GREEN_DOWN_16*(Dummy_1481*Dummy_1485 - Dummy_1482*Dummy_1484);
       const real_t Dummy_1494 = tmp_GREEN_DOWN_16*(-Dummy_1478*Dummy_1485 + Dummy_1479*Dummy_1484);
       const real_t Dummy_1495 = tmp_GREEN_DOWN_16*(Dummy_1478*Dummy_1482 - Dummy_1479*Dummy_1481);
       const real_t Dummy_1496 = abs(tmp_GREEN_DOWN_15);
       const real_t Dummy_1497 = -Dummy_1487 - Dummy_1490 - Dummy_1493;
       const real_t Dummy_1498 = -Dummy_1488 - Dummy_1491 - Dummy_1494;
       const real_t Dummy_1499 = -Dummy_1489 - Dummy_1492 - Dummy_1495;
       const real_t Dummy_1500 = Dummy_1496*0.16666666666666666;
       const real_t Dummy_1502 = Dummy_1487*Dummy_1497 + Dummy_1488*Dummy_1498 + Dummy_1489*Dummy_1499;
       const real_t Dummy_1504 = Dummy_1490*Dummy_1497 + Dummy_1491*Dummy_1498 + Dummy_1492*Dummy_1499;
       const real_t Dummy_1506 = Dummy_1493*Dummy_1497 + Dummy_1494*Dummy_1498 + Dummy_1495*Dummy_1499;
       const real_t Dummy_1508 = Dummy_1487*Dummy_1490 + Dummy_1488*Dummy_1491 + Dummy_1489*Dummy_1492;
       const real_t Dummy_1509 = Dummy_1487*Dummy_1493 + Dummy_1488*Dummy_1494 + Dummy_1489*Dummy_1495;
       const real_t Dummy_1510 = Dummy_1490*Dummy_1493 + Dummy_1491*Dummy_1494 + Dummy_1492*Dummy_1495;
       for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
       for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
       {
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
             const real_t src_dof_0 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_1 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t src_dof_2 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t src_dof_3 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t tmp_4 = src_dof_0*tmp_3;
             const real_t tmp_6 = src_dof_1*tmp_3;
             const real_t tmp_8 = src_dof_2*tmp_3;
             const real_t tmp_10 = src_dof_3*tmp_3;
             const real_t elMatVec_0 = tmp_10*tmp_9 + tmp_4*((tmp_0*tmp_0) + (tmp_1*tmp_1) + (tmp_2*tmp_2)) + tmp_5*tmp_6 + tmp_7*tmp_8;
             const real_t elMatVec_1 = tmp_10*tmp_12 + tmp_11*tmp_8 + tmp_4*tmp_5 + tmp_6*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1) + (jac_affine_inv_0_2*jac_affine_inv_0_2));
             const real_t elMatVec_2 = tmp_10*tmp_13 + tmp_11*tmp_6 + tmp_4*tmp_7 + tmp_8*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1) + (jac_affine_inv_1_2*jac_affine_inv_1_2));
             const real_t elMatVec_3 = tmp_10*((jac_affine_inv_2_0*jac_affine_inv_2_0) + (jac_affine_inv_2_1*jac_affine_inv_2_1) + (jac_affine_inv_2_2*jac_affine_inv_2_2)) + tmp_12*tmp_6 + tmp_13*tmp_8 + tmp_4*tmp_9;
             {
                {
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_0 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = elMatVec_1 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_2 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_3 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
             const real_t Dummy_1250 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1251 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1252 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t Dummy_1253 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1289 = Dummy_1250*Dummy_1288;
             const real_t Dummy_1291 = Dummy_1251*Dummy_1288;
             const real_t Dummy_1293 = Dummy_1252*Dummy_1288;
             const real_t Dummy_1295 = Dummy_1253*Dummy_1288;
             const real_t Dummy_1299 = Dummy_1289*((Dummy_1285*Dummy_1285) + (Dummy_1286*Dummy_1286) + (Dummy_1287*Dummy_1287)) + Dummy_1290*Dummy_1291 + Dummy_1292*Dummy_1293 + Dummy_1294*Dummy_1295;
             const real_t Dummy_1300 = Dummy_1289*Dummy_1290 + Dummy_1291*((Dummy_1275*Dummy_1275) + (Dummy_1276*Dummy_1276) + (Dummy_1277*Dummy_1277)) + Dummy_1293*Dummy_1296 + Dummy_1295*Dummy_1297;
             const real_t Dummy_1301 = Dummy_1289*Dummy_1292 + Dummy_1291*Dummy_1296 + Dummy_1293*((Dummy_1278*Dummy_1278) + (Dummy_1279*Dummy_1279) + (Dummy_1280*Dummy_1280)) + Dummy_1295*Dummy_1298;
             const real_t Dummy_1302 = Dummy_1289*Dummy_1294 + Dummy_1291*Dummy_1297 + Dummy_1293*Dummy_1298 + Dummy_1295*((Dummy_1281*Dummy_1281) + (Dummy_1282*Dummy_1282) + (Dummy_1283*Dummy_1283));
             {
                {
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1299 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1300 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1301 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1302 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             const real_t Dummy_1303 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1304 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t Dummy_1305 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1306 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1342 = Dummy_1303*Dummy_1341;
             const real_t Dummy_1344 = Dummy_1304*Dummy_1341;
             const real_t Dummy_1346 = Dummy_1305*Dummy_1341;
             const real_t Dummy_1348 = Dummy_1306*Dummy_1341;
             const real_t Dummy_1352 = Dummy_1342*((Dummy_1338*Dummy_1338) + (Dummy_1339*Dummy_1339) + (Dummy_1340*Dummy_1340)) + Dummy_1343*Dummy_1344 + Dummy_1345*Dummy_1346 + Dummy_1347*Dummy_1348;
             const real_t Dummy_1353 = Dummy_1342*Dummy_1343 + Dummy_1344*((Dummy_1328*Dummy_1328) + (Dummy_1329*Dummy_1329) + (Dummy_1330*Dummy_1330)) + Dummy_1346*Dummy_1349 + Dummy_1348*Dummy_1350;
             const real_t Dummy_1354 = Dummy_1342*Dummy_1345 + Dummy_1344*Dummy_1349 + Dummy_1346*((Dummy_1331*Dummy_1331) + (Dummy_1332*Dummy_1332) + (Dummy_1333*Dummy_1333)) + Dummy_1348*Dummy_1351;
             const real_t Dummy_1355 = Dummy_1342*Dummy_1347 + Dummy_1344*Dummy_1350 + Dummy_1346*Dummy_1351 + Dummy_1348*((Dummy_1334*Dummy_1334) + (Dummy_1335*Dummy_1335) + (Dummy_1336*Dummy_1336));
             {
                {
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1352 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1353 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1354 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1355 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             const real_t Dummy_1356 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t Dummy_1357 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t Dummy_1358 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1359 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t Dummy_1395 = Dummy_1356*Dummy_1394;
             const real_t Dummy_1397 = Dummy_1357*Dummy_1394;
             const real_t Dummy_1399 = Dummy_1358*Dummy_1394;
             const real_t Dummy_1401 = Dummy_1359*Dummy_1394;
             const real_t Dummy_1405 = Dummy_1395*((Dummy_1391*Dummy_1391) + (Dummy_1392*Dummy_1392) + (Dummy_1393*Dummy_1393)) + Dummy_1396*Dummy_1397 + Dummy_1398*Dummy_1399 + Dummy_1400*Dummy_1401;
             const real_t Dummy_1406 = Dummy_1395*Dummy_1396 + Dummy_1397*((Dummy_1381*Dummy_1381) + (Dummy_1382*Dummy_1382) + (Dummy_1383*Dummy_1383)) + Dummy_1399*Dummy_1402 + Dummy_1401*Dummy_1403;
             const real_t Dummy_1407 = Dummy_1395*Dummy_1398 + Dummy_1397*Dummy_1402 + Dummy_1399*((Dummy_1384*Dummy_1384) + (Dummy_1385*Dummy_1385) + (Dummy_1386*Dummy_1386)) + Dummy_1401*Dummy_1404;
             const real_t Dummy_1408 = Dummy_1395*Dummy_1400 + Dummy_1397*Dummy_1403 + Dummy_1399*Dummy_1404 + Dummy_1401*((Dummy_1387*Dummy_1387) + (Dummy_1388*Dummy_1388) + (Dummy_1389*Dummy_1389));
             {
                {
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1405 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1406 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1407 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1408 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
             const real_t Dummy_1409 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1410 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t Dummy_1411 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t Dummy_1412 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1448 = Dummy_1409*Dummy_1447;
             const real_t Dummy_1450 = Dummy_1410*Dummy_1447;
             const real_t Dummy_1452 = Dummy_1411*Dummy_1447;
             const real_t Dummy_1454 = Dummy_1412*Dummy_1447;
             const real_t Dummy_1458 = Dummy_1448*((Dummy_1444*Dummy_1444) + (Dummy_1445*Dummy_1445) + (Dummy_1446*Dummy_1446)) + Dummy_1449*Dummy_1450 + Dummy_1451*Dummy_1452 + Dummy_1453*Dummy_1454;
             const real_t Dummy_1459 = Dummy_1448*Dummy_1449 + Dummy_1450*((Dummy_1434*Dummy_1434) + (Dummy_1435*Dummy_1435) + (Dummy_1436*Dummy_1436)) + Dummy_1452*Dummy_1455 + Dummy_1454*Dummy_1456;
             const real_t Dummy_1460 = Dummy_1448*Dummy_1451 + Dummy_1450*Dummy_1455 + Dummy_1452*((Dummy_1437*Dummy_1437) + (Dummy_1438*Dummy_1438) + (Dummy_1439*Dummy_1439)) + Dummy_1454*Dummy_1457;
             const real_t Dummy_1461 = Dummy_1448*Dummy_1453 + Dummy_1450*Dummy_1456 + Dummy_1452*Dummy_1457 + Dummy_1454*((Dummy_1440*Dummy_1440) + (Dummy_1441*Dummy_1441) + (Dummy_1442*Dummy_1442));
             {
                {
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1458 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1459 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1460 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1461 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                }
             }
             const real_t Dummy_1462 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
             const real_t Dummy_1463 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1464 = _data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
             const real_t Dummy_1465 = _data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
             const real_t Dummy_1501 = Dummy_1462*Dummy_1500;
             const real_t Dummy_1503 = Dummy_1463*Dummy_1500;
             const real_t Dummy_1505 = Dummy_1464*Dummy_1500;
             const real_t Dummy_1507 = Dummy_1465*Dummy_1500;
             const real_t Dummy_1511 = Dummy_1501*((Dummy_1497*Dummy_1497) + (Dummy_1498*Dummy_1498) + (Dummy_1499*Dummy_1499)) + Dummy_1502*Dummy_1503 + Dummy_1504*Dummy_1505 + Dummy_1506*Dummy_1507;
             const real_t Dummy_1512 = Dummy_1501*Dummy_1502 + Dummy_1503*((Dummy_1487*Dummy_1487) + (Dummy_1488*Dummy_1488) + (Dummy_1489*Dummy_1489)) + Dummy_1505*Dummy_1508 + Dummy_1507*Dummy_1509;
             const real_t Dummy_1513 = Dummy_1501*Dummy_1504 + Dummy_1503*Dummy_1508 + Dummy_1505*((Dummy_1490*Dummy_1490) + (Dummy_1491*Dummy_1491) + (Dummy_1492*Dummy_1492)) + Dummy_1507*Dummy_1510;
             const real_t Dummy_1514 = Dummy_1501*Dummy_1506 + Dummy_1503*Dummy_1509 + Dummy_1505*Dummy_1510 + Dummy_1507*((Dummy_1493*Dummy_1493) + (Dummy_1494*Dummy_1494) + (Dummy_1495*Dummy_1495));
             {
                {
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1511 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1512 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1] = Dummy_1513 + _data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) + 1];
                   _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))] = Dummy_1514 + _data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6))];
                }
             }
          }
          if (-ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2 >= 0)
          {
             const real_t tmp_WHITE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const real_t src_dof_0 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t src_dof_1 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const real_t src_dof_2 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t src_dof_3 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t p_affine_0_0 = macro_vertex_coord_id_0comp0;
             const real_t p_affine_0_1 = macro_vertex_coord_id_0comp1;
             const real_t p_affine_0_2 = macro_vertex_coord_id_0comp2;
             const real_t p_affine_1_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const real_t p_affine_1_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const real_t p_affine_1_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const real_t p_affine_2_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const real_t p_affine_2_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const real_t p_affine_2_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const real_t p_affine_3_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
             const real_t p_affine_3_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
             const real_t p_affine_3_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
             const real_t jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
             const real_t jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
             const real_t jac_affine_0_2 = -p_affine_0_0 + p_affine_3_0;
             const real_t jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
             const real_t jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
             const real_t tmp_WHITE_UP_5 = jac_affine_0_2*jac_affine_1_1;
             const real_t jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
             const real_t tmp_WHITE_UP_3 = jac_affine_0_1*jac_affine_1_2;
             const real_t jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
             const real_t jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
             const real_t tmp_WHITE_UP_2 = jac_affine_1_2*jac_affine_2_1;
             const real_t jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
             const real_t tmp_WHITE_UP_1 = jac_affine_1_1*jac_affine_2_2;
             const real_t tmp_WHITE_UP_4 = jac_affine_0_1*jac_affine_2_2;
             const real_t tmp_WHITE_UP_6 = jac_affine_0_0*tmp_WHITE_UP_1 - jac_affine_0_0*tmp_WHITE_UP_2 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_1_0*tmp_WHITE_UP_4 + jac_affine_2_0*tmp_WHITE_UP_3 - jac_affine_2_0*tmp_WHITE_UP_5;
             const real_t tmp_WHITE_UP_7 = 1.0 / (tmp_WHITE_UP_6);
             const real_t jac_affine_inv_0_0 = tmp_WHITE_UP_7*(tmp_WHITE_UP_1 - tmp_WHITE_UP_2);
             const real_t jac_affine_inv_0_1 = tmp_WHITE_UP_7*(jac_affine_0_2*jac_affine_2_1 - tmp_WHITE_UP_4);
             const real_t jac_affine_inv_0_2 = tmp_WHITE_UP_7*(tmp_WHITE_UP_3 - tmp_WHITE_UP_5);
             const real_t jac_affine_inv_1_0 = tmp_WHITE_UP_7*(-jac_affine_1_0*jac_affine_2_2 + jac_affine_1_2*jac_affine_2_0);
             const real_t jac_affine_inv_1_1 = tmp_WHITE_UP_7*(jac_affine_0_0*jac_affine_2_2 - jac_affine_0_2*jac_affine_2_0);
             const real_t jac_affine_inv_1_2 = tmp_WHITE_UP_7*(-jac_affine_0_0*jac_affine_1_2 + jac_affine_0_2*jac_affine_1_0);
             const real_t jac_affine_inv_2_0 = tmp_WHITE_UP_7*(jac_affine_1_0*jac_affine_2_1 - jac_affine_1_1*jac_affine_2_0);
             const real_t jac_affine_inv_2_1 = tmp_WHITE_UP_7*(-jac_affine_0_0*jac_affine_2_1 + jac_affine_0_1*jac_affine_2_0);
             const real_t jac_affine_inv_2_2 = tmp_WHITE_UP_7*(jac_affine_0_0*jac_affine_1_1 - jac_affine_0_1*jac_affine_1_0);
             const real_t abs_det_jac_affine = abs(tmp_WHITE_UP_6);
             const real_t tmp_0 = -jac_affine_inv_0_0 - jac_affine_inv_1_0 - jac_affine_inv_2_0;
             const real_t tmp_1 = -jac_affine_inv_0_1 - jac_affine_inv_1_1 - jac_affine_inv_2_1;
             const real_t tmp_2 = -jac_affine_inv_0_2 - jac_affine_inv_1_2 - jac_affine_inv_2_2;
             const real_t tmp_3 = abs_det_jac_affine*0.16666666666666666;
             const real_t tmp_4 = src_dof_0*tmp_3;
             const real_t tmp_5 = jac_affine_inv_0_0*tmp_0 + jac_affine_inv_0_1*tmp_1 + jac_affine_inv_0_2*tmp_2;
             const real_t tmp_6 = src_dof_1*tmp_3;
             const real_t tmp_7 = jac_affine_inv_1_0*tmp_0 + jac_affine_inv_1_1*tmp_1 + jac_affine_inv_1_2*tmp_2;
             const real_t tmp_8 = src_dof_2*tmp_3;
             const real_t tmp_9 = jac_affine_inv_2_0*tmp_0 + jac_affine_inv_2_1*tmp_1 + jac_affine_inv_2_2*tmp_2;
             const real_t tmp_10 = src_dof_3*tmp_3;
             const real_t tmp_11 = jac_affine_inv_0_0*jac_affine_inv_1_0 + jac_affine_inv_0_1*jac_affine_inv_1_1 + jac_affine_inv_0_2*jac_affine_inv_1_2;
             const real_t tmp_12 = jac_affine_inv_0_0*jac_affine_inv_2_0 + jac_affine_inv_0_1*jac_affine_inv_2_1 + jac_affine_inv_0_2*jac_affine_inv_2_2;
             const real_t tmp_13 = jac_affine_inv_1_0*jac_affine_inv_2_0 + jac_affine_inv_1_1*jac_affine_inv_2_1 + jac_affine_inv_1_2*jac_affine_inv_2_2;
             const real_t elMatVec_0 = tmp_10*tmp_9 + tmp_4*((tmp_0*tmp_0) + (tmp_1*tmp_1) + (tmp_2*tmp_2)) + tmp_5*tmp_6 + tmp_7*tmp_8;
             const real_t elMatVec_1 = tmp_10*tmp_12 + tmp_11*tmp_8 + tmp_4*tmp_5 + tmp_6*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1) + (jac_affine_inv_0_2*jac_affine_inv_0_2));
             const real_t elMatVec_2 = tmp_10*tmp_13 + tmp_11*tmp_6 + tmp_4*tmp_7 + tmp_8*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1) + (jac_affine_inv_1_2*jac_affine_inv_1_2));
             const real_t elMatVec_3 = tmp_10*((jac_affine_inv_2_0*jac_affine_inv_2_0) + (jac_affine_inv_2_1*jac_affine_inv_2_1) + (jac_affine_inv_2_2*jac_affine_inv_2_2)) + tmp_12*tmp_6 + tmp_13*tmp_8 + tmp_4*tmp_9;
             {
                {
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatVec_0 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatVec_1 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatVec_2 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = elMatVec_3 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const real_t tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const real_t tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const real_t tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const real_t tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const real_t tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const real_t tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const real_t tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const real_t Dummy_1515 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const real_t Dummy_1516 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t Dummy_1517 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const real_t Dummy_1518 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const real_t Dummy_1519 = tmp_BLUE_UP_1;
             const real_t Dummy_1520 = tmp_BLUE_UP_2;
             const real_t Dummy_1521 = tmp_BLUE_UP_3;
             const real_t Dummy_1522 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
             const real_t Dummy_1523 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
             const real_t Dummy_1524 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
             const real_t Dummy_1525 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
             const real_t Dummy_1526 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
             const real_t Dummy_1527 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
             const real_t Dummy_1528 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
             const real_t Dummy_1529 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
             const real_t Dummy_1530 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
             const real_t Dummy_1531 = -Dummy_1519 + Dummy_1522;
             const real_t Dummy_1532 = -Dummy_1519 + Dummy_1525;
             const real_t Dummy_1533 = -Dummy_1519 + Dummy_1528;
             const real_t Dummy_1534 = -Dummy_1520 + Dummy_1523;
             const real_t Dummy_1535 = -Dummy_1520 + Dummy_1526;
             const real_t tmp_BLUE_UP_11 = Dummy_1533*Dummy_1535;
             const real_t Dummy_1536 = -Dummy_1520 + Dummy_1529;
             const real_t tmp_BLUE_UP_9 = Dummy_1532*Dummy_1536;
             const real_t Dummy_1537 = -Dummy_1521 + Dummy_1524;
             const real_t Dummy_1538 = -Dummy_1521 + Dummy_1527;
             const real_t tmp_BLUE_UP_8 = Dummy_1536*Dummy_1538;
             const real_t Dummy_1539 = -Dummy_1521 + Dummy_1530;
             const real_t tmp_BLUE_UP_7 = Dummy_1535*Dummy_1539;
             const real_t tmp_BLUE_UP_10 = Dummy_1532*Dummy_1539;
             const real_t tmp_BLUE_UP_12 = Dummy_1531*tmp_BLUE_UP_7 - Dummy_1531*tmp_BLUE_UP_8 + Dummy_1533*Dummy_1534*Dummy_1538 - Dummy_1534*tmp_BLUE_UP_10 - Dummy_1537*tmp_BLUE_UP_11 + Dummy_1537*tmp_BLUE_UP_9;
             const real_t tmp_BLUE_UP_13 = 1.0 / (tmp_BLUE_UP_12);
             const real_t Dummy_1540 = tmp_BLUE_UP_13*(tmp_BLUE_UP_7 - tmp_BLUE_UP_8);
             const real_t Dummy_1541 = tmp_BLUE_UP_13*(Dummy_1533*Dummy_1538 - tmp_BLUE_UP_10);
             const real_t Dummy_1542 = tmp_BLUE_UP_13*(-tmp_BLUE_UP_11 + tmp_BLUE_UP_9);
             const real_t Dummy_1543 = tmp_BLUE_UP_13*(-Dummy_1534*Dummy_1539 + Dummy_1536*Dummy_1537);
             const real_t Dummy_1544 = tmp_BLUE_UP_13*(Dummy_1531*Dummy_1539 - Dummy_1533*Dummy_1537);
             const real_t Dummy_1545 = tmp_BLUE_UP_13*(-Dummy_1531*Dummy_1536 + Dummy_1533*Dummy_1534);
             const real_t Dummy_1546 = tmp_BLUE_UP_13*(Dummy_1534*Dummy_1538 - Dummy_1535*Dummy_1537);
             const real_t Dummy_1547 = tmp_BLUE_UP_13*(-Dummy_1531*Dummy_1538 + Dummy_1532*Dummy_1537);
             const real_t Dummy_1548 = tmp_BLUE_UP_13*(Dummy_1531*Dummy_1535 - Dummy_1532*Dummy_1534);
             const real_t Dummy_1549 = abs(tmp_BLUE_UP_12);
             const real_t Dummy_1550 = -Dummy_1540 - Dummy_1543 - Dummy_1546;
             const real_t Dummy_1551 = -Dummy_1541 - Dummy_1544 - Dummy_1547;
             const real_t Dummy_1552 = -Dummy_1542 - Dummy_1545 - Dummy_1548;
             const real_t Dummy_1553 = Dummy_1549*0.16666666666666666;
             const real_t Dummy_1554 = Dummy_1515*Dummy_1553;
             const real_t Dummy_1555 = Dummy_1540*Dummy_1550 + Dummy_1541*Dummy_1551 + Dummy_1542*Dummy_1552;
             const real_t Dummy_1556 = Dummy_1516*Dummy_1553;
             const real_t Dummy_1557 = Dummy_1543*Dummy_1550 + Dummy_1544*Dummy_1551 + Dummy_1545*Dummy_1552;
             const real_t Dummy_1558 = Dummy_1517*Dummy_1553;
             const real_t Dummy_1559 = Dummy_1546*Dummy_1550 + Dummy_1547*Dummy_1551 + Dummy_1548*Dummy_1552;
             const real_t Dummy_1560 = Dummy_1518*Dummy_1553;
             const real_t Dummy_1561 = Dummy_1540*Dummy_1543 + Dummy_1541*Dummy_1544 + Dummy_1542*Dummy_1545;
             const real_t Dummy_1562 = Dummy_1540*Dummy_1546 + Dummy_1541*Dummy_1547 + Dummy_1542*Dummy_1548;
             const real_t Dummy_1563 = Dummy_1543*Dummy_1546 + Dummy_1544*Dummy_1547 + Dummy_1545*Dummy_1548;
             const real_t Dummy_1564 = Dummy_1554*((Dummy_1550*Dummy_1550) + (Dummy_1551*Dummy_1551) + (Dummy_1552*Dummy_1552)) + Dummy_1555*Dummy_1556 + Dummy_1557*Dummy_1558 + Dummy_1559*Dummy_1560;
             const real_t Dummy_1565 = Dummy_1554*Dummy_1555 + Dummy_1556*((Dummy_1540*Dummy_1540) + (Dummy_1541*Dummy_1541) + (Dummy_1542*Dummy_1542)) + Dummy_1558*Dummy_1561 + Dummy_1560*Dummy_1562;
             const real_t Dummy_1566 = Dummy_1554*Dummy_1557 + Dummy_1556*Dummy_1561 + Dummy_1558*((Dummy_1543*Dummy_1543) + (Dummy_1544*Dummy_1544) + (Dummy_1545*Dummy_1545)) + Dummy_1560*Dummy_1563;
             const real_t Dummy_1567 = Dummy_1554*Dummy_1559 + Dummy_1556*Dummy_1562 + Dummy_1558*Dummy_1563 + Dummy_1560*((Dummy_1546*Dummy_1546) + (Dummy_1547*Dummy_1547) + (Dummy_1548*Dummy_1548));
             {
                {
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1564 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1565 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1566 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1567 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
             const real_t tmp_BLUE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const real_t tmp_BLUE_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const real_t tmp_BLUE_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const real_t tmp_BLUE_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const real_t tmp_BLUE_DOWN_4 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
             const real_t tmp_BLUE_DOWN_5 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_4;
             const real_t tmp_BLUE_DOWN_6 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
             const real_t tmp_BLUE_DOWN_7 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_6;
             const real_t tmp_BLUE_DOWN_8 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
             const real_t tmp_BLUE_DOWN_9 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_8;
             const real_t Dummy_1568 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t Dummy_1569 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t Dummy_1570 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const real_t Dummy_1571 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t Dummy_1572 = tmp_BLUE_DOWN_1;
             const real_t Dummy_1573 = tmp_BLUE_DOWN_2;
             const real_t Dummy_1574 = tmp_BLUE_DOWN_3;
             const real_t Dummy_1575 = tmp_BLUE_DOWN_5;
             const real_t Dummy_1576 = tmp_BLUE_DOWN_7;
             const real_t Dummy_1577 = tmp_BLUE_DOWN_9;
             const real_t Dummy_1578 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
             const real_t Dummy_1579 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
             const real_t Dummy_1580 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
             const real_t Dummy_1581 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
             const real_t Dummy_1582 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
             const real_t Dummy_1583 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
             const real_t Dummy_1584 = -Dummy_1572 + Dummy_1575;
             const real_t Dummy_1585 = -Dummy_1572 + Dummy_1578;
             const real_t Dummy_1586 = -Dummy_1572 + Dummy_1581;
             const real_t Dummy_1587 = -Dummy_1573 + Dummy_1576;
             const real_t Dummy_1588 = -Dummy_1573 + Dummy_1579;
             const real_t tmp_BLUE_DOWN_14 = Dummy_1586*Dummy_1588;
             const real_t Dummy_1589 = -Dummy_1573 + Dummy_1582;
             const real_t tmp_BLUE_DOWN_12 = Dummy_1585*Dummy_1589;
             const real_t Dummy_1590 = -Dummy_1574 + Dummy_1577;
             const real_t Dummy_1591 = -Dummy_1574 + Dummy_1580;
             const real_t tmp_BLUE_DOWN_11 = Dummy_1589*Dummy_1591;
             const real_t Dummy_1592 = -Dummy_1574 + Dummy_1583;
             const real_t tmp_BLUE_DOWN_10 = Dummy_1588*Dummy_1592;
             const real_t tmp_BLUE_DOWN_13 = Dummy_1585*Dummy_1592;
             const real_t tmp_BLUE_DOWN_15 = Dummy_1584*tmp_BLUE_DOWN_10 - Dummy_1584*tmp_BLUE_DOWN_11 + Dummy_1586*Dummy_1587*Dummy_1591 - Dummy_1587*tmp_BLUE_DOWN_13 + Dummy_1590*tmp_BLUE_DOWN_12 - Dummy_1590*tmp_BLUE_DOWN_14;
             const real_t tmp_BLUE_DOWN_16 = 1.0 / (tmp_BLUE_DOWN_15);
             const real_t Dummy_1593 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_10 - tmp_BLUE_DOWN_11);
             const real_t Dummy_1594 = tmp_BLUE_DOWN_16*(Dummy_1586*Dummy_1591 - tmp_BLUE_DOWN_13);
             const real_t Dummy_1595 = tmp_BLUE_DOWN_16*(tmp_BLUE_DOWN_12 - tmp_BLUE_DOWN_14);
             const real_t Dummy_1596 = tmp_BLUE_DOWN_16*(-Dummy_1587*Dummy_1592 + Dummy_1589*Dummy_1590);
             const real_t Dummy_1597 = tmp_BLUE_DOWN_16*(Dummy_1584*Dummy_1592 - Dummy_1586*Dummy_1590);
             const real_t Dummy_1598 = tmp_BLUE_DOWN_16*(-Dummy_1584*Dummy_1589 + Dummy_1586*Dummy_1587);
             const real_t Dummy_1599 = tmp_BLUE_DOWN_16*(Dummy_1587*Dummy_1591 - Dummy_1588*Dummy_1590);
             const real_t Dummy_1600 = tmp_BLUE_DOWN_16*(-Dummy_1584*Dummy_1591 + Dummy_1585*Dummy_1590);
             const real_t Dummy_1601 = tmp_BLUE_DOWN_16*(Dummy_1584*Dummy_1588 - Dummy_1585*Dummy_1587);
             const real_t Dummy_1602 = abs(tmp_BLUE_DOWN_15);
             const real_t Dummy_1603 = -Dummy_1593 - Dummy_1596 - Dummy_1599;
             const real_t Dummy_1604 = -Dummy_1594 - Dummy_1597 - Dummy_1600;
             const real_t Dummy_1605 = -Dummy_1595 - Dummy_1598 - Dummy_1601;
             const real_t Dummy_1606 = Dummy_1602*0.16666666666666666;
             const real_t Dummy_1607 = Dummy_1568*Dummy_1606;
             const real_t Dummy_1608 = Dummy_1593*Dummy_1603 + Dummy_1594*Dummy_1604 + Dummy_1595*Dummy_1605;
             const real_t Dummy_1609 = Dummy_1569*Dummy_1606;
             const real_t Dummy_1610 = Dummy_1596*Dummy_1603 + Dummy_1597*Dummy_1604 + Dummy_1598*Dummy_1605;
             const real_t Dummy_1611 = Dummy_1570*Dummy_1606;
             const real_t Dummy_1612 = Dummy_1599*Dummy_1603 + Dummy_1600*Dummy_1604 + Dummy_1601*Dummy_1605;
             const real_t Dummy_1613 = Dummy_1571*Dummy_1606;
             const real_t Dummy_1614 = Dummy_1593*Dummy_1596 + Dummy_1594*Dummy_1597 + Dummy_1595*Dummy_1598;
             const real_t Dummy_1615 = Dummy_1593*Dummy_1599 + Dummy_1594*Dummy_1600 + Dummy_1595*Dummy_1601;
             const real_t Dummy_1616 = Dummy_1596*Dummy_1599 + Dummy_1597*Dummy_1600 + Dummy_1598*Dummy_1601;
             const real_t Dummy_1617 = Dummy_1607*((Dummy_1603*Dummy_1603) + (Dummy_1604*Dummy_1604) + (Dummy_1605*Dummy_1605)) + Dummy_1608*Dummy_1609 + Dummy_1610*Dummy_1611 + Dummy_1612*Dummy_1613;
             const real_t Dummy_1618 = Dummy_1607*Dummy_1608 + Dummy_1609*((Dummy_1593*Dummy_1593) + (Dummy_1594*Dummy_1594) + (Dummy_1595*Dummy_1595)) + Dummy_1611*Dummy_1614 + Dummy_1613*Dummy_1615;
             const real_t Dummy_1619 = Dummy_1607*Dummy_1610 + Dummy_1609*Dummy_1614 + Dummy_1611*((Dummy_1596*Dummy_1596) + (Dummy_1597*Dummy_1597) + (Dummy_1598*Dummy_1598)) + Dummy_1613*Dummy_1616;
             const real_t Dummy_1620 = Dummy_1607*Dummy_1612 + Dummy_1609*Dummy_1615 + Dummy_1611*Dummy_1616 + Dummy_1613*((Dummy_1599*Dummy_1599) + (Dummy_1600*Dummy_1600) + (Dummy_1601*Dummy_1601));
             {
                {
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1617 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1618 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1619 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1620 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
             const real_t tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const real_t tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const real_t tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const real_t tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const real_t tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
             const real_t tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
             const real_t tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
             const real_t Dummy_1621 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const real_t Dummy_1622 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t Dummy_1623 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t Dummy_1624 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const real_t Dummy_1625 = tmp_GREEN_UP_1;
             const real_t Dummy_1626 = tmp_GREEN_UP_2;
             const real_t Dummy_1627 = tmp_GREEN_UP_3;
             const real_t Dummy_1628 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const real_t Dummy_1629 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const real_t Dummy_1630 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const real_t Dummy_1631 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
             const real_t Dummy_1632 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
             const real_t Dummy_1633 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
             const real_t Dummy_1634 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
             const real_t Dummy_1635 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
             const real_t Dummy_1636 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
             const real_t Dummy_1637 = -Dummy_1625 + Dummy_1628;
             const real_t Dummy_1638 = -Dummy_1625 + Dummy_1631;
             const real_t Dummy_1639 = -Dummy_1625 + Dummy_1634;
             const real_t Dummy_1640 = -Dummy_1626 + Dummy_1629;
             const real_t Dummy_1641 = -Dummy_1626 + Dummy_1632;
             const real_t tmp_GREEN_UP_11 = Dummy_1639*Dummy_1641;
             const real_t Dummy_1642 = -Dummy_1626 + Dummy_1635;
             const real_t tmp_GREEN_UP_9 = Dummy_1638*Dummy_1642;
             const real_t Dummy_1643 = -Dummy_1627 + Dummy_1630;
             const real_t Dummy_1644 = -Dummy_1627 + Dummy_1633;
             const real_t tmp_GREEN_UP_8 = Dummy_1642*Dummy_1644;
             const real_t Dummy_1645 = -Dummy_1627 + Dummy_1636;
             const real_t tmp_GREEN_UP_7 = Dummy_1641*Dummy_1645;
             const real_t tmp_GREEN_UP_10 = Dummy_1638*Dummy_1645;
             const real_t tmp_GREEN_UP_12 = Dummy_1637*tmp_GREEN_UP_7 - Dummy_1637*tmp_GREEN_UP_8 + Dummy_1639*Dummy_1640*Dummy_1644 - Dummy_1640*tmp_GREEN_UP_10 - Dummy_1643*tmp_GREEN_UP_11 + Dummy_1643*tmp_GREEN_UP_9;
             const real_t tmp_GREEN_UP_13 = 1.0 / (tmp_GREEN_UP_12);
             const real_t Dummy_1646 = tmp_GREEN_UP_13*(tmp_GREEN_UP_7 - tmp_GREEN_UP_8);
             const real_t Dummy_1647 = tmp_GREEN_UP_13*(Dummy_1639*Dummy_1644 - tmp_GREEN_UP_10);
             const real_t Dummy_1648 = tmp_GREEN_UP_13*(-tmp_GREEN_UP_11 + tmp_GREEN_UP_9);
             const real_t Dummy_1649 = tmp_GREEN_UP_13*(-Dummy_1640*Dummy_1645 + Dummy_1642*Dummy_1643);
             const real_t Dummy_1650 = tmp_GREEN_UP_13*(Dummy_1637*Dummy_1645 - Dummy_1639*Dummy_1643);
             const real_t Dummy_1651 = tmp_GREEN_UP_13*(-Dummy_1637*Dummy_1642 + Dummy_1639*Dummy_1640);
             const real_t Dummy_1652 = tmp_GREEN_UP_13*(Dummy_1640*Dummy_1644 - Dummy_1641*Dummy_1643);
             const real_t Dummy_1653 = tmp_GREEN_UP_13*(-Dummy_1637*Dummy_1644 + Dummy_1638*Dummy_1643);
             const real_t Dummy_1654 = tmp_GREEN_UP_13*(Dummy_1637*Dummy_1641 - Dummy_1638*Dummy_1640);
             const real_t Dummy_1655 = abs(tmp_GREEN_UP_12);
             const real_t Dummy_1656 = -Dummy_1646 - Dummy_1649 - Dummy_1652;
             const real_t Dummy_1657 = -Dummy_1647 - Dummy_1650 - Dummy_1653;
             const real_t Dummy_1658 = -Dummy_1648 - Dummy_1651 - Dummy_1654;
             const real_t Dummy_1659 = Dummy_1655*0.16666666666666666;
             const real_t Dummy_1660 = Dummy_1621*Dummy_1659;
             const real_t Dummy_1661 = Dummy_1646*Dummy_1656 + Dummy_1647*Dummy_1657 + Dummy_1648*Dummy_1658;
             const real_t Dummy_1662 = Dummy_1622*Dummy_1659;
             const real_t Dummy_1663 = Dummy_1649*Dummy_1656 + Dummy_1650*Dummy_1657 + Dummy_1651*Dummy_1658;
             const real_t Dummy_1664 = Dummy_1623*Dummy_1659;
             const real_t Dummy_1665 = Dummy_1652*Dummy_1656 + Dummy_1653*Dummy_1657 + Dummy_1654*Dummy_1658;
             const real_t Dummy_1666 = Dummy_1624*Dummy_1659;
             const real_t Dummy_1667 = Dummy_1646*Dummy_1649 + Dummy_1647*Dummy_1650 + Dummy_1648*Dummy_1651;
             const real_t Dummy_1668 = Dummy_1646*Dummy_1652 + Dummy_1647*Dummy_1653 + Dummy_1648*Dummy_1654;
             const real_t Dummy_1669 = Dummy_1649*Dummy_1652 + Dummy_1650*Dummy_1653 + Dummy_1651*Dummy_1654;
             const real_t Dummy_1670 = Dummy_1660*((Dummy_1656*Dummy_1656) + (Dummy_1657*Dummy_1657) + (Dummy_1658*Dummy_1658)) + Dummy_1661*Dummy_1662 + Dummy_1663*Dummy_1664 + Dummy_1665*Dummy_1666;
             const real_t Dummy_1671 = Dummy_1660*Dummy_1661 + Dummy_1662*((Dummy_1646*Dummy_1646) + (Dummy_1647*Dummy_1647) + (Dummy_1648*Dummy_1648)) + Dummy_1664*Dummy_1667 + Dummy_1666*Dummy_1668;
             const real_t Dummy_1672 = Dummy_1660*Dummy_1663 + Dummy_1662*Dummy_1667 + Dummy_1664*((Dummy_1649*Dummy_1649) + (Dummy_1650*Dummy_1650) + (Dummy_1651*Dummy_1651)) + Dummy_1666*Dummy_1669;
             const real_t Dummy_1673 = Dummy_1660*Dummy_1665 + Dummy_1662*Dummy_1668 + Dummy_1664*Dummy_1669 + Dummy_1666*((Dummy_1652*Dummy_1652) + (Dummy_1653*Dummy_1653) + (Dummy_1654*Dummy_1654));
             {
                {
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1670 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1671 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1672 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1673 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
             const real_t tmp_GREEN_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
             const real_t tmp_GREEN_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
             const real_t tmp_GREEN_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
             const real_t tmp_GREEN_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
             const real_t tmp_GREEN_DOWN_4 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
             const real_t tmp_GREEN_DOWN_5 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
             const real_t tmp_GREEN_DOWN_6 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
             const real_t tmp_GREEN_DOWN_7 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
             const real_t tmp_GREEN_DOWN_8 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
             const real_t tmp_GREEN_DOWN_9 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
             const real_t Dummy_1674 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t Dummy_1675 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const real_t Dummy_1676 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
             const real_t Dummy_1677 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
             const real_t Dummy_1678 = tmp_GREEN_DOWN_1;
             const real_t Dummy_1679 = tmp_GREEN_DOWN_2;
             const real_t Dummy_1680 = tmp_GREEN_DOWN_3;
             const real_t Dummy_1681 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
             const real_t Dummy_1682 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
             const real_t Dummy_1683 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
             const real_t Dummy_1684 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
             const real_t Dummy_1685 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
             const real_t Dummy_1686 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
             const real_t Dummy_1687 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
             const real_t Dummy_1688 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
             const real_t Dummy_1689 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
             const real_t Dummy_1690 = -Dummy_1678 + Dummy_1681;
             const real_t Dummy_1691 = -Dummy_1678 + Dummy_1684;
             const real_t Dummy_1692 = -Dummy_1678 + Dummy_1687;
             const real_t Dummy_1693 = -Dummy_1679 + Dummy_1682;
             const real_t Dummy_1694 = -Dummy_1679 + Dummy_1685;
             const real_t tmp_GREEN_DOWN_14 = Dummy_1692*Dummy_1694;
             const real_t Dummy_1695 = -Dummy_1679 + Dummy_1688;
             const real_t tmp_GREEN_DOWN_12 = Dummy_1691*Dummy_1695;
             const real_t Dummy_1696 = -Dummy_1680 + Dummy_1683;
             const real_t Dummy_1697 = -Dummy_1680 + Dummy_1686;
             const real_t tmp_GREEN_DOWN_11 = Dummy_1695*Dummy_1697;
             const real_t Dummy_1698 = -Dummy_1680 + Dummy_1689;
             const real_t tmp_GREEN_DOWN_10 = Dummy_1694*Dummy_1698;
             const real_t tmp_GREEN_DOWN_13 = Dummy_1691*Dummy_1698;
             const real_t tmp_GREEN_DOWN_15 = Dummy_1690*tmp_GREEN_DOWN_10 - Dummy_1690*tmp_GREEN_DOWN_11 + Dummy_1692*Dummy_1693*Dummy_1697 - Dummy_1693*tmp_GREEN_DOWN_13 + Dummy_1696*tmp_GREEN_DOWN_12 - Dummy_1696*tmp_GREEN_DOWN_14;
             const real_t tmp_GREEN_DOWN_16 = 1.0 / (tmp_GREEN_DOWN_15);
             const real_t Dummy_1699 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_10 - tmp_GREEN_DOWN_11);
             const real_t Dummy_1700 = tmp_GREEN_DOWN_16*(Dummy_1692*Dummy_1697 - tmp_GREEN_DOWN_13);
             const real_t Dummy_1701 = tmp_GREEN_DOWN_16*(tmp_GREEN_DOWN_12 - tmp_GREEN_DOWN_14);
             const real_t Dummy_1702 = tmp_GREEN_DOWN_16*(-Dummy_1693*Dummy_1698 + Dummy_1695*Dummy_1696);
             const real_t Dummy_1703 = tmp_GREEN_DOWN_16*(Dummy_1690*Dummy_1698 - Dummy_1692*Dummy_1696);
             const real_t Dummy_1704 = tmp_GREEN_DOWN_16*(-Dummy_1690*Dummy_1695 + Dummy_1692*Dummy_1693);
             const real_t Dummy_1705 = tmp_GREEN_DOWN_16*(Dummy_1693*Dummy_1697 - Dummy_1694*Dummy_1696);
             const real_t Dummy_1706 = tmp_GREEN_DOWN_16*(-Dummy_1690*Dummy_1697 + Dummy_1691*Dummy_1696);
             const real_t Dummy_1707 = tmp_GREEN_DOWN_16*(Dummy_1690*Dummy_1694 - Dummy_1691*Dummy_1693);
             const real_t Dummy_1708 = abs(tmp_GREEN_DOWN_15);
             const real_t Dummy_1709 = -Dummy_1699 - Dummy_1702 - Dummy_1705;
             const real_t Dummy_1710 = -Dummy_1700 - Dummy_1703 - Dummy_1706;
             const real_t Dummy_1711 = -Dummy_1701 - Dummy_1704 - Dummy_1707;
             const real_t Dummy_1712 = Dummy_1708*0.16666666666666666;
             const real_t Dummy_1713 = Dummy_1674*Dummy_1712;
             const real_t Dummy_1714 = Dummy_1699*Dummy_1709 + Dummy_1700*Dummy_1710 + Dummy_1701*Dummy_1711;
             const real_t Dummy_1715 = Dummy_1675*Dummy_1712;
             const real_t Dummy_1716 = Dummy_1702*Dummy_1709 + Dummy_1703*Dummy_1710 + Dummy_1704*Dummy_1711;
             const real_t Dummy_1717 = Dummy_1676*Dummy_1712;
             const real_t Dummy_1718 = Dummy_1705*Dummy_1709 + Dummy_1706*Dummy_1710 + Dummy_1707*Dummy_1711;
             const real_t Dummy_1719 = Dummy_1677*Dummy_1712;
             const real_t Dummy_1720 = Dummy_1699*Dummy_1702 + Dummy_1700*Dummy_1703 + Dummy_1701*Dummy_1704;
             const real_t Dummy_1721 = Dummy_1699*Dummy_1705 + Dummy_1700*Dummy_1706 + Dummy_1701*Dummy_1707;
             const real_t Dummy_1722 = Dummy_1702*Dummy_1705 + Dummy_1703*Dummy_1706 + Dummy_1704*Dummy_1707;
             const real_t Dummy_1723 = Dummy_1713*((Dummy_1709*Dummy_1709) + (Dummy_1710*Dummy_1710) + (Dummy_1711*Dummy_1711)) + Dummy_1714*Dummy_1715 + Dummy_1716*Dummy_1717 + Dummy_1718*Dummy_1719;
             const real_t Dummy_1724 = Dummy_1713*Dummy_1714 + Dummy_1715*((Dummy_1699*Dummy_1699) + (Dummy_1700*Dummy_1700) + (Dummy_1701*Dummy_1701)) + Dummy_1717*Dummy_1720 + Dummy_1719*Dummy_1721;
             const real_t Dummy_1725 = Dummy_1713*Dummy_1716 + Dummy_1715*Dummy_1720 + Dummy_1717*((Dummy_1702*Dummy_1702) + (Dummy_1703*Dummy_1703) + (Dummy_1704*Dummy_1704)) + Dummy_1719*Dummy_1722;
             const real_t Dummy_1726 = Dummy_1713*Dummy_1718 + Dummy_1715*Dummy_1721 + Dummy_1717*Dummy_1722 + Dummy_1719*((Dummy_1705*Dummy_1705) + (Dummy_1706*Dummy_1706) + (Dummy_1707*Dummy_1707));
             {
                {
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1723 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 2];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1724 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = Dummy_1725 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2] = Dummy_1726 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 2];
                }
             }
          } 
          const real_t src_dof_0 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
          const real_t src_dof_1 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
          const real_t src_dof_2 = _data_src[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
          const real_t src_dof_3 = _data_src[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
          const real_t tmp_4 = src_dof_0*tmp_3;
          const real_t tmp_6 = src_dof_1*tmp_3;
          const real_t tmp_8 = src_dof_2*tmp_3;
          const real_t tmp_10 = src_dof_3*tmp_3;
          const real_t elMatVec_0 = tmp_10*tmp_9 + tmp_4*((tmp_0*tmp_0) + (tmp_1*tmp_1) + (tmp_2*tmp_2)) + tmp_5*tmp_6 + tmp_7*tmp_8;
          const real_t elMatVec_1 = tmp_10*tmp_12 + tmp_11*tmp_8 + tmp_4*tmp_5 + tmp_6*((jac_affine_inv_0_0*jac_affine_inv_0_0) + (jac_affine_inv_0_1*jac_affine_inv_0_1) + (jac_affine_inv_0_2*jac_affine_inv_0_2));
          const real_t elMatVec_2 = tmp_10*tmp_13 + tmp_11*tmp_6 + tmp_4*tmp_7 + tmp_8*((jac_affine_inv_1_0*jac_affine_inv_1_0) + (jac_affine_inv_1_1*jac_affine_inv_1_1) + (jac_affine_inv_1_2*jac_affine_inv_1_2));
          const real_t elMatVec_3 = tmp_10*((jac_affine_inv_2_0*jac_affine_inv_2_0) + (jac_affine_inv_2_1*jac_affine_inv_2_1) + (jac_affine_inv_2_2*jac_affine_inv_2_2)) + tmp_12*tmp_6 + tmp_13*tmp_8 + tmp_4*tmp_9;
          {
             {
                {
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatVec_0 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))] = elMatVec_1 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 2) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6))];
                   _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatVec_2 + _data_dst[-ctr_1 - ctr_2 + micro_edges_per_macro_edge + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)*(-ctr_2 + micro_edges_per_macro_edge + 3)) / (6)) - 1];
                   _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1] = elMatVec_3 + _data_dst[ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ctr_1 - ctr_2 + micro_edges_per_macro_edge - ((ctr_1*(ctr_1 + 1)) / (2)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + (((micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)*(micro_edges_per_macro_edge + 3)) / (6)) - 1];
                }
             }
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
