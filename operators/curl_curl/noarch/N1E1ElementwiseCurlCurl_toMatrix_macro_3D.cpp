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



























#include "../N1E1ElementwiseCurlCurl.hpp"

#define FUNC_PREFIX  

namespace hyteg {

namespace operatorgeneration {

void N1E1ElementwiseCurlCurl::toMatrix_macro_3D( idx_t * RESTRICT  _data_dst, idx_t * RESTRICT  _data_src, const Cell& cell, const uint_t level, real_t macro_vertex_coord_id_0comp0, real_t macro_vertex_coord_id_0comp1, real_t macro_vertex_coord_id_0comp2, real_t macro_vertex_coord_id_1comp0, real_t macro_vertex_coord_id_1comp1, real_t macro_vertex_coord_id_1comp2, real_t macro_vertex_coord_id_2comp0, real_t macro_vertex_coord_id_2comp1, real_t macro_vertex_coord_id_2comp2, real_t macro_vertex_coord_id_3comp0, real_t macro_vertex_coord_id_3comp1, real_t macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, real_t micro_edges_per_macro_edge_float ) const
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
       const real_t jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
       const real_t jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
       const real_t jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
       const real_t jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
       const real_t abs_det_jac_affine = abs(jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const real_t tmp_0 = 1.0 / (abs_det_jac_affine)*0.16666666666666666;
       const real_t tmp_1 = jac_affine_0_0*4.0;
       const real_t tmp_2 = jac_affine_1_0*4.0;
       const real_t tmp_3 = jac_affine_2_0*4.0;
       const real_t tmp_4 = tmp_0*(-jac_affine_0_1*tmp_1 - jac_affine_1_1*tmp_2 - jac_affine_2_1*tmp_3);
       const real_t tmp_5 = tmp_0*(jac_affine_0_2*tmp_1 + jac_affine_1_2*tmp_2 + jac_affine_2_2*tmp_3);
       const real_t tmp_6 = jac_affine_0_0*2.0;
       const real_t tmp_7 = jac_affine_0_1*2.0;
       const real_t tmp_8 = -tmp_6 + tmp_7;
       const real_t tmp_9 = jac_affine_1_0*2.0;
       const real_t tmp_10 = jac_affine_1_1*2.0;
       const real_t tmp_11 = tmp_10 - tmp_9;
       const real_t tmp_12 = jac_affine_2_0*2.0;
       const real_t tmp_13 = jac_affine_2_1*2.0;
       const real_t tmp_14 = -tmp_12 + tmp_13;
       const real_t tmp_15 = tmp_0*(tmp_11*tmp_9 + tmp_12*tmp_14 + tmp_6*tmp_8);
       const real_t tmp_16 = jac_affine_0_2*2.0;
       const real_t tmp_17 = -tmp_16;
       const real_t tmp_18 = tmp_17 + tmp_6;
       const real_t tmp_19 = jac_affine_1_2*2.0;
       const real_t tmp_20 = -tmp_19;
       const real_t tmp_21 = tmp_20 + tmp_9;
       const real_t tmp_22 = jac_affine_2_2*2.0;
       const real_t tmp_23 = -tmp_22;
       const real_t tmp_24 = tmp_12 + tmp_23;
       const real_t tmp_25 = tmp_0*(tmp_12*tmp_24 + tmp_18*tmp_6 + tmp_21*tmp_9);
       const real_t tmp_26 = -tmp_17 - tmp_7;
       const real_t tmp_27 = -tmp_10 - tmp_20;
       const real_t tmp_28 = -tmp_13 - tmp_23;
       const real_t tmp_29 = tmp_0*(tmp_12*tmp_28 + tmp_26*tmp_6 + tmp_27*tmp_9);
       const real_t tmp_30 = tmp_0*(jac_affine_0_1*jac_affine_0_2*-4.0 + jac_affine_1_1*jac_affine_1_2*-4.0 + jac_affine_2_1*jac_affine_2_2*-4.0);
       const real_t tmp_31 = tmp_0*(-tmp_10*tmp_11 - tmp_13*tmp_14 - tmp_7*tmp_8);
       const real_t tmp_32 = tmp_0*(-tmp_10*tmp_21 - tmp_13*tmp_24 - tmp_18*tmp_7);
       const real_t tmp_33 = tmp_0*(-tmp_10*tmp_27 - tmp_13*tmp_28 - tmp_26*tmp_7);
       const real_t tmp_34 = tmp_0*(tmp_11*tmp_19 + tmp_14*tmp_22 + tmp_16*tmp_8);
       const real_t tmp_35 = tmp_0*(tmp_16*tmp_18 + tmp_19*tmp_21 + tmp_22*tmp_24);
       const real_t tmp_36 = tmp_0*(tmp_16*tmp_26 + tmp_19*tmp_27 + tmp_22*tmp_28);
       const real_t tmp_37 = tmp_0*(tmp_11*tmp_21 + tmp_14*tmp_24 + tmp_18*tmp_8);
       const real_t tmp_38 = tmp_0*(tmp_11*tmp_27 + tmp_14*tmp_28 + tmp_26*tmp_8);
       const real_t tmp_39 = tmp_0*(tmp_18*tmp_26 + tmp_21*tmp_27 + tmp_24*tmp_28);
       const real_t elMat_0_0 = tmp_0*((jac_affine_0_0*jac_affine_0_0)*4.0 + (jac_affine_1_0*jac_affine_1_0)*4.0 + (jac_affine_2_0*jac_affine_2_0)*4.0);
       const real_t elMat_0_1 = tmp_4;
       const real_t elMat_0_2 = tmp_5;
       const real_t elMat_0_3 = tmp_15;
       const real_t elMat_0_4 = tmp_25;
       const real_t elMat_0_5 = tmp_29;
       const real_t elMat_1_0 = tmp_4;
       const real_t elMat_1_1 = tmp_0*((jac_affine_0_1*jac_affine_0_1)*4.0 + (jac_affine_1_1*jac_affine_1_1)*4.0 + (jac_affine_2_1*jac_affine_2_1)*4.0);
       const real_t elMat_1_2 = tmp_30;
       const real_t elMat_1_3 = tmp_31;
       const real_t elMat_1_4 = tmp_32;
       const real_t elMat_1_5 = tmp_33;
       const real_t elMat_2_0 = tmp_5;
       const real_t elMat_2_1 = tmp_30;
       const real_t elMat_2_2 = tmp_0*((jac_affine_0_2*jac_affine_0_2)*4.0 + (jac_affine_1_2*jac_affine_1_2)*4.0 + (jac_affine_2_2*jac_affine_2_2)*4.0);
       const real_t elMat_2_3 = tmp_34;
       const real_t elMat_2_4 = tmp_35;
       const real_t elMat_2_5 = tmp_36;
       const real_t elMat_3_0 = tmp_15;
       const real_t elMat_3_1 = tmp_31;
       const real_t elMat_3_2 = tmp_34;
       const real_t elMat_3_3 = tmp_0*((tmp_11*tmp_11) + (tmp_14*tmp_14) + (tmp_8*tmp_8));
       const real_t elMat_3_4 = tmp_37;
       const real_t elMat_3_5 = tmp_38;
       const real_t elMat_4_0 = tmp_25;
       const real_t elMat_4_1 = tmp_32;
       const real_t elMat_4_2 = tmp_35;
       const real_t elMat_4_3 = tmp_37;
       const real_t elMat_4_4 = tmp_0*((tmp_18*tmp_18) + (tmp_21*tmp_21) + (tmp_24*tmp_24));
       const real_t elMat_4_5 = tmp_39;
       const real_t elMat_5_0 = tmp_29;
       const real_t elMat_5_1 = tmp_33;
       const real_t elMat_5_2 = tmp_36;
       const real_t elMat_5_3 = tmp_38;
       const real_t elMat_5_4 = tmp_39;
       const real_t elMat_5_5 = tmp_0*((tmp_26*tmp_26) + (tmp_27*tmp_27) + (tmp_28*tmp_28));
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
       const real_t Dummy_332 = tmp_WHITE_DOWN_3;
       const real_t Dummy_333 = tmp_WHITE_DOWN_6;
       const real_t Dummy_334 = tmp_WHITE_DOWN_9;
       const real_t Dummy_335 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_2;
       const real_t Dummy_336 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_5;
       const real_t Dummy_337 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_8;
       const real_t Dummy_338 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_10;
       const real_t Dummy_339 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_4;
       const real_t Dummy_340 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_7;
       const real_t Dummy_341 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_3;
       const real_t Dummy_342 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_6;
       const real_t Dummy_343 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_9;
       const real_t Dummy_344 = -Dummy_332 + Dummy_335;
       const real_t Dummy_345 = -Dummy_332 + Dummy_338;
       const real_t Dummy_346 = -Dummy_332 + Dummy_341;
       const real_t Dummy_347 = -Dummy_333 + Dummy_336;
       const real_t Dummy_348 = -Dummy_333 + Dummy_339;
       const real_t Dummy_349 = -Dummy_333 + Dummy_342;
       const real_t Dummy_350 = -Dummy_334 + Dummy_337;
       const real_t Dummy_351 = -Dummy_334 + Dummy_340;
       const real_t Dummy_352 = -Dummy_334 + Dummy_343;
       const real_t Dummy_353 = abs(Dummy_344*Dummy_348*Dummy_352 - Dummy_344*Dummy_349*Dummy_351 - Dummy_345*Dummy_347*Dummy_352 + Dummy_345*Dummy_349*Dummy_350 + Dummy_346*Dummy_347*Dummy_351 - Dummy_346*Dummy_348*Dummy_350);
       const real_t Dummy_354 = 1.0 / (Dummy_353)*0.16666666666666666;
       const real_t Dummy_355 = Dummy_344*4.0;
       const real_t Dummy_356 = Dummy_347*4.0;
       const real_t Dummy_357 = Dummy_350*4.0;
       const real_t Dummy_358 = Dummy_354*(-Dummy_345*Dummy_355 - Dummy_348*Dummy_356 - Dummy_351*Dummy_357);
       const real_t Dummy_359 = Dummy_354*(Dummy_346*Dummy_355 + Dummy_349*Dummy_356 + Dummy_352*Dummy_357);
       const real_t Dummy_360 = Dummy_344*2.0;
       const real_t Dummy_361 = Dummy_345*2.0;
       const real_t Dummy_362 = -Dummy_360 + Dummy_361;
       const real_t Dummy_363 = Dummy_347*2.0;
       const real_t Dummy_364 = Dummy_348*2.0;
       const real_t Dummy_365 = -Dummy_363 + Dummy_364;
       const real_t Dummy_366 = Dummy_350*2.0;
       const real_t Dummy_367 = Dummy_351*2.0;
       const real_t Dummy_368 = -Dummy_366 + Dummy_367;
       const real_t Dummy_369 = Dummy_354*(Dummy_360*Dummy_362 + Dummy_363*Dummy_365 + Dummy_366*Dummy_368);
       const real_t Dummy_370 = Dummy_346*2.0;
       const real_t Dummy_371 = -Dummy_370;
       const real_t Dummy_372 = Dummy_360 + Dummy_371;
       const real_t Dummy_373 = Dummy_349*2.0;
       const real_t Dummy_374 = -Dummy_373;
       const real_t Dummy_375 = Dummy_363 + Dummy_374;
       const real_t Dummy_376 = Dummy_352*2.0;
       const real_t Dummy_377 = -Dummy_376;
       const real_t Dummy_378 = Dummy_366 + Dummy_377;
       const real_t Dummy_379 = Dummy_354*(Dummy_360*Dummy_372 + Dummy_363*Dummy_375 + Dummy_366*Dummy_378);
       const real_t Dummy_380 = -Dummy_361 - Dummy_371;
       const real_t Dummy_381 = -Dummy_364 - Dummy_374;
       const real_t Dummy_382 = -Dummy_367 - Dummy_377;
       const real_t Dummy_383 = Dummy_354*(Dummy_360*Dummy_380 + Dummy_363*Dummy_381 + Dummy_366*Dummy_382);
       const real_t Dummy_384 = Dummy_354*(Dummy_345*Dummy_346*-4.0 + Dummy_348*Dummy_349*-4.0 + Dummy_351*Dummy_352*-4.0);
       const real_t Dummy_385 = Dummy_354*(-Dummy_361*Dummy_362 - Dummy_364*Dummy_365 - Dummy_367*Dummy_368);
       const real_t Dummy_386 = Dummy_354*(-Dummy_361*Dummy_372 - Dummy_364*Dummy_375 - Dummy_367*Dummy_378);
       const real_t Dummy_387 = Dummy_354*(-Dummy_361*Dummy_380 - Dummy_364*Dummy_381 - Dummy_367*Dummy_382);
       const real_t Dummy_388 = Dummy_354*(Dummy_362*Dummy_370 + Dummy_365*Dummy_373 + Dummy_368*Dummy_376);
       const real_t Dummy_389 = Dummy_354*(Dummy_370*Dummy_372 + Dummy_373*Dummy_375 + Dummy_376*Dummy_378);
       const real_t Dummy_390 = Dummy_354*(Dummy_370*Dummy_380 + Dummy_373*Dummy_381 + Dummy_376*Dummy_382);
       const real_t Dummy_391 = Dummy_354*(Dummy_362*Dummy_372 + Dummy_365*Dummy_375 + Dummy_368*Dummy_378);
       const real_t Dummy_392 = Dummy_354*(Dummy_362*Dummy_380 + Dummy_365*Dummy_381 + Dummy_368*Dummy_382);
       const real_t Dummy_393 = Dummy_354*(Dummy_372*Dummy_380 + Dummy_375*Dummy_381 + Dummy_378*Dummy_382);
       const real_t Dummy_394 = Dummy_354*((Dummy_344*Dummy_344)*4.0 + (Dummy_347*Dummy_347)*4.0 + (Dummy_350*Dummy_350)*4.0);
       const real_t Dummy_395 = Dummy_358;
       const real_t Dummy_396 = Dummy_359;
       const real_t Dummy_397 = Dummy_369;
       const real_t Dummy_398 = Dummy_379;
       const real_t Dummy_399 = Dummy_383;
       const real_t Dummy_400 = Dummy_358;
       const real_t Dummy_401 = Dummy_354*((Dummy_345*Dummy_345)*4.0 + (Dummy_348*Dummy_348)*4.0 + (Dummy_351*Dummy_351)*4.0);
       const real_t Dummy_402 = Dummy_384;
       const real_t Dummy_403 = Dummy_385;
       const real_t Dummy_404 = Dummy_386;
       const real_t Dummy_405 = Dummy_387;
       const real_t Dummy_406 = Dummy_359;
       const real_t Dummy_407 = Dummy_384;
       const real_t Dummy_408 = Dummy_354*((Dummy_346*Dummy_346)*4.0 + (Dummy_349*Dummy_349)*4.0 + (Dummy_352*Dummy_352)*4.0);
       const real_t Dummy_409 = Dummy_388;
       const real_t Dummy_410 = Dummy_389;
       const real_t Dummy_411 = Dummy_390;
       const real_t Dummy_412 = Dummy_369;
       const real_t Dummy_413 = Dummy_385;
       const real_t Dummy_414 = Dummy_388;
       const real_t Dummy_415 = Dummy_354*((Dummy_362*Dummy_362) + (Dummy_365*Dummy_365) + (Dummy_368*Dummy_368));
       const real_t Dummy_416 = Dummy_391;
       const real_t Dummy_417 = Dummy_392;
       const real_t Dummy_418 = Dummy_379;
       const real_t Dummy_419 = Dummy_386;
       const real_t Dummy_420 = Dummy_389;
       const real_t Dummy_421 = Dummy_391;
       const real_t Dummy_422 = Dummy_354*((Dummy_372*Dummy_372) + (Dummy_375*Dummy_375) + (Dummy_378*Dummy_378));
       const real_t Dummy_423 = Dummy_393;
       const real_t Dummy_424 = Dummy_383;
       const real_t Dummy_425 = Dummy_387;
       const real_t Dummy_426 = Dummy_390;
       const real_t Dummy_427 = Dummy_392;
       const real_t Dummy_428 = Dummy_393;
       const real_t Dummy_429 = Dummy_354*((Dummy_380*Dummy_380) + (Dummy_381*Dummy_381) + (Dummy_382*Dummy_382));
       const real_t tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t Dummy_430 = tmp_BLUE_UP_1;
       const real_t Dummy_431 = tmp_BLUE_UP_2;
       const real_t Dummy_432 = tmp_BLUE_UP_3;
       const real_t Dummy_433 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
       const real_t Dummy_434 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
       const real_t Dummy_435 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
       const real_t Dummy_436 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
       const real_t Dummy_437 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
       const real_t Dummy_438 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
       const real_t Dummy_439 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
       const real_t Dummy_440 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
       const real_t Dummy_441 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
       const real_t Dummy_442 = -Dummy_430 + Dummy_433;
       const real_t Dummy_443 = -Dummy_430 + Dummy_436;
       const real_t Dummy_444 = -Dummy_430 + Dummy_439;
       const real_t Dummy_445 = -Dummy_431 + Dummy_434;
       const real_t Dummy_446 = -Dummy_431 + Dummy_437;
       const real_t Dummy_447 = -Dummy_431 + Dummy_440;
       const real_t Dummy_448 = -Dummy_432 + Dummy_435;
       const real_t Dummy_449 = -Dummy_432 + Dummy_438;
       const real_t Dummy_450 = -Dummy_432 + Dummy_441;
       const real_t Dummy_451 = abs(Dummy_442*Dummy_446*Dummy_450 - Dummy_442*Dummy_447*Dummy_449 - Dummy_443*Dummy_445*Dummy_450 + Dummy_443*Dummy_447*Dummy_448 + Dummy_444*Dummy_445*Dummy_449 - Dummy_444*Dummy_446*Dummy_448);
       const real_t Dummy_452 = 1.0 / (Dummy_451)*0.16666666666666666;
       const real_t Dummy_453 = Dummy_442*4.0;
       const real_t Dummy_454 = Dummy_445*4.0;
       const real_t Dummy_455 = Dummy_448*4.0;
       const real_t Dummy_456 = Dummy_452*(-Dummy_443*Dummy_453 - Dummy_446*Dummy_454 - Dummy_449*Dummy_455);
       const real_t Dummy_457 = Dummy_452*(Dummy_444*Dummy_453 + Dummy_447*Dummy_454 + Dummy_450*Dummy_455);
       const real_t Dummy_458 = Dummy_442*2.0;
       const real_t Dummy_459 = Dummy_443*2.0;
       const real_t Dummy_460 = -Dummy_458 + Dummy_459;
       const real_t Dummy_461 = Dummy_445*2.0;
       const real_t Dummy_462 = Dummy_446*2.0;
       const real_t Dummy_463 = -Dummy_461 + Dummy_462;
       const real_t Dummy_464 = Dummy_448*2.0;
       const real_t Dummy_465 = Dummy_449*2.0;
       const real_t Dummy_466 = -Dummy_464 + Dummy_465;
       const real_t Dummy_467 = Dummy_452*(Dummy_458*Dummy_460 + Dummy_461*Dummy_463 + Dummy_464*Dummy_466);
       const real_t Dummy_468 = Dummy_444*2.0;
       const real_t Dummy_469 = -Dummy_468;
       const real_t Dummy_470 = Dummy_458 + Dummy_469;
       const real_t Dummy_471 = Dummy_447*2.0;
       const real_t Dummy_472 = -Dummy_471;
       const real_t Dummy_473 = Dummy_461 + Dummy_472;
       const real_t Dummy_474 = Dummy_450*2.0;
       const real_t Dummy_475 = -Dummy_474;
       const real_t Dummy_476 = Dummy_464 + Dummy_475;
       const real_t Dummy_477 = Dummy_452*(Dummy_458*Dummy_470 + Dummy_461*Dummy_473 + Dummy_464*Dummy_476);
       const real_t Dummy_478 = -Dummy_459 - Dummy_469;
       const real_t Dummy_479 = -Dummy_462 - Dummy_472;
       const real_t Dummy_480 = -Dummy_465 - Dummy_475;
       const real_t Dummy_481 = Dummy_452*(Dummy_458*Dummy_478 + Dummy_461*Dummy_479 + Dummy_464*Dummy_480);
       const real_t Dummy_482 = Dummy_452*(Dummy_443*Dummy_444*-4.0 + Dummy_446*Dummy_447*-4.0 + Dummy_449*Dummy_450*-4.0);
       const real_t Dummy_483 = Dummy_452*(-Dummy_459*Dummy_460 - Dummy_462*Dummy_463 - Dummy_465*Dummy_466);
       const real_t Dummy_484 = Dummy_452*(-Dummy_459*Dummy_470 - Dummy_462*Dummy_473 - Dummy_465*Dummy_476);
       const real_t Dummy_485 = Dummy_452*(-Dummy_459*Dummy_478 - Dummy_462*Dummy_479 - Dummy_465*Dummy_480);
       const real_t Dummy_486 = Dummy_452*(Dummy_460*Dummy_468 + Dummy_463*Dummy_471 + Dummy_466*Dummy_474);
       const real_t Dummy_487 = Dummy_452*(Dummy_468*Dummy_470 + Dummy_471*Dummy_473 + Dummy_474*Dummy_476);
       const real_t Dummy_488 = Dummy_452*(Dummy_468*Dummy_478 + Dummy_471*Dummy_479 + Dummy_474*Dummy_480);
       const real_t Dummy_489 = Dummy_452*(Dummy_460*Dummy_470 + Dummy_463*Dummy_473 + Dummy_466*Dummy_476);
       const real_t Dummy_490 = Dummy_452*(Dummy_460*Dummy_478 + Dummy_463*Dummy_479 + Dummy_466*Dummy_480);
       const real_t Dummy_491 = Dummy_452*(Dummy_470*Dummy_478 + Dummy_473*Dummy_479 + Dummy_476*Dummy_480);
       const real_t Dummy_492 = Dummy_452*((Dummy_442*Dummy_442)*4.0 + (Dummy_445*Dummy_445)*4.0 + (Dummy_448*Dummy_448)*4.0);
       const real_t Dummy_493 = Dummy_456;
       const real_t Dummy_494 = Dummy_457;
       const real_t Dummy_495 = Dummy_467;
       const real_t Dummy_496 = Dummy_477;
       const real_t Dummy_497 = Dummy_481;
       const real_t Dummy_498 = Dummy_456;
       const real_t Dummy_499 = Dummy_452*((Dummy_443*Dummy_443)*4.0 + (Dummy_446*Dummy_446)*4.0 + (Dummy_449*Dummy_449)*4.0);
       const real_t Dummy_500 = Dummy_482;
       const real_t Dummy_501 = Dummy_483;
       const real_t Dummy_502 = Dummy_484;
       const real_t Dummy_503 = Dummy_485;
       const real_t Dummy_504 = Dummy_457;
       const real_t Dummy_505 = Dummy_482;
       const real_t Dummy_506 = Dummy_452*((Dummy_444*Dummy_444)*4.0 + (Dummy_447*Dummy_447)*4.0 + (Dummy_450*Dummy_450)*4.0);
       const real_t Dummy_507 = Dummy_486;
       const real_t Dummy_508 = Dummy_487;
       const real_t Dummy_509 = Dummy_488;
       const real_t Dummy_510 = Dummy_467;
       const real_t Dummy_511 = Dummy_483;
       const real_t Dummy_512 = Dummy_486;
       const real_t Dummy_513 = Dummy_452*((Dummy_460*Dummy_460) + (Dummy_463*Dummy_463) + (Dummy_466*Dummy_466));
       const real_t Dummy_514 = Dummy_489;
       const real_t Dummy_515 = Dummy_490;
       const real_t Dummy_516 = Dummy_477;
       const real_t Dummy_517 = Dummy_484;
       const real_t Dummy_518 = Dummy_487;
       const real_t Dummy_519 = Dummy_489;
       const real_t Dummy_520 = Dummy_452*((Dummy_470*Dummy_470) + (Dummy_473*Dummy_473) + (Dummy_476*Dummy_476));
       const real_t Dummy_521 = Dummy_491;
       const real_t Dummy_522 = Dummy_481;
       const real_t Dummy_523 = Dummy_485;
       const real_t Dummy_524 = Dummy_488;
       const real_t Dummy_525 = Dummy_490;
       const real_t Dummy_526 = Dummy_491;
       const real_t Dummy_527 = Dummy_452*((Dummy_478*Dummy_478) + (Dummy_479*Dummy_479) + (Dummy_480*Dummy_480));
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
       const real_t Dummy_528 = tmp_BLUE_DOWN_1;
       const real_t Dummy_529 = tmp_BLUE_DOWN_2;
       const real_t Dummy_530 = tmp_BLUE_DOWN_3;
       const real_t Dummy_531 = tmp_BLUE_DOWN_5;
       const real_t Dummy_532 = tmp_BLUE_DOWN_7;
       const real_t Dummy_533 = tmp_BLUE_DOWN_9;
       const real_t Dummy_534 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
       const real_t Dummy_535 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
       const real_t Dummy_536 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
       const real_t Dummy_537 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
       const real_t Dummy_538 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
       const real_t Dummy_539 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
       const real_t Dummy_540 = -Dummy_528 + Dummy_531;
       const real_t Dummy_541 = -Dummy_528 + Dummy_534;
       const real_t Dummy_542 = -Dummy_528 + Dummy_537;
       const real_t Dummy_543 = -Dummy_529 + Dummy_532;
       const real_t Dummy_544 = -Dummy_529 + Dummy_535;
       const real_t Dummy_545 = -Dummy_529 + Dummy_538;
       const real_t Dummy_546 = -Dummy_530 + Dummy_533;
       const real_t Dummy_547 = -Dummy_530 + Dummy_536;
       const real_t Dummy_548 = -Dummy_530 + Dummy_539;
       const real_t Dummy_549 = abs(Dummy_540*Dummy_544*Dummy_548 - Dummy_540*Dummy_545*Dummy_547 - Dummy_541*Dummy_543*Dummy_548 + Dummy_541*Dummy_545*Dummy_546 + Dummy_542*Dummy_543*Dummy_547 - Dummy_542*Dummy_544*Dummy_546);
       const real_t Dummy_550 = 1.0 / (Dummy_549)*0.16666666666666666;
       const real_t Dummy_551 = Dummy_540*4.0;
       const real_t Dummy_552 = Dummy_543*4.0;
       const real_t Dummy_553 = Dummy_546*4.0;
       const real_t Dummy_554 = Dummy_550*(-Dummy_541*Dummy_551 - Dummy_544*Dummy_552 - Dummy_547*Dummy_553);
       const real_t Dummy_555 = Dummy_550*(Dummy_542*Dummy_551 + Dummy_545*Dummy_552 + Dummy_548*Dummy_553);
       const real_t Dummy_556 = Dummy_540*2.0;
       const real_t Dummy_557 = Dummy_541*2.0;
       const real_t Dummy_558 = -Dummy_556 + Dummy_557;
       const real_t Dummy_559 = Dummy_543*2.0;
       const real_t Dummy_560 = Dummy_544*2.0;
       const real_t Dummy_561 = -Dummy_559 + Dummy_560;
       const real_t Dummy_562 = Dummy_546*2.0;
       const real_t Dummy_563 = Dummy_547*2.0;
       const real_t Dummy_564 = -Dummy_562 + Dummy_563;
       const real_t Dummy_565 = Dummy_550*(Dummy_556*Dummy_558 + Dummy_559*Dummy_561 + Dummy_562*Dummy_564);
       const real_t Dummy_566 = Dummy_542*2.0;
       const real_t Dummy_567 = -Dummy_566;
       const real_t Dummy_568 = Dummy_556 + Dummy_567;
       const real_t Dummy_569 = Dummy_545*2.0;
       const real_t Dummy_570 = -Dummy_569;
       const real_t Dummy_571 = Dummy_559 + Dummy_570;
       const real_t Dummy_572 = Dummy_548*2.0;
       const real_t Dummy_573 = -Dummy_572;
       const real_t Dummy_574 = Dummy_562 + Dummy_573;
       const real_t Dummy_575 = Dummy_550*(Dummy_556*Dummy_568 + Dummy_559*Dummy_571 + Dummy_562*Dummy_574);
       const real_t Dummy_576 = -Dummy_557 - Dummy_567;
       const real_t Dummy_577 = -Dummy_560 - Dummy_570;
       const real_t Dummy_578 = -Dummy_563 - Dummy_573;
       const real_t Dummy_579 = Dummy_550*(Dummy_556*Dummy_576 + Dummy_559*Dummy_577 + Dummy_562*Dummy_578);
       const real_t Dummy_580 = Dummy_550*(Dummy_541*Dummy_542*-4.0 + Dummy_544*Dummy_545*-4.0 + Dummy_547*Dummy_548*-4.0);
       const real_t Dummy_581 = Dummy_550*(-Dummy_557*Dummy_558 - Dummy_560*Dummy_561 - Dummy_563*Dummy_564);
       const real_t Dummy_582 = Dummy_550*(-Dummy_557*Dummy_568 - Dummy_560*Dummy_571 - Dummy_563*Dummy_574);
       const real_t Dummy_583 = Dummy_550*(-Dummy_557*Dummy_576 - Dummy_560*Dummy_577 - Dummy_563*Dummy_578);
       const real_t Dummy_584 = Dummy_550*(Dummy_558*Dummy_566 + Dummy_561*Dummy_569 + Dummy_564*Dummy_572);
       const real_t Dummy_585 = Dummy_550*(Dummy_566*Dummy_568 + Dummy_569*Dummy_571 + Dummy_572*Dummy_574);
       const real_t Dummy_586 = Dummy_550*(Dummy_566*Dummy_576 + Dummy_569*Dummy_577 + Dummy_572*Dummy_578);
       const real_t Dummy_587 = Dummy_550*(Dummy_558*Dummy_568 + Dummy_561*Dummy_571 + Dummy_564*Dummy_574);
       const real_t Dummy_588 = Dummy_550*(Dummy_558*Dummy_576 + Dummy_561*Dummy_577 + Dummy_564*Dummy_578);
       const real_t Dummy_589 = Dummy_550*(Dummy_568*Dummy_576 + Dummy_571*Dummy_577 + Dummy_574*Dummy_578);
       const real_t Dummy_590 = Dummy_550*((Dummy_540*Dummy_540)*4.0 + (Dummy_543*Dummy_543)*4.0 + (Dummy_546*Dummy_546)*4.0);
       const real_t Dummy_591 = Dummy_554;
       const real_t Dummy_592 = Dummy_555;
       const real_t Dummy_593 = Dummy_565;
       const real_t Dummy_594 = Dummy_575;
       const real_t Dummy_595 = Dummy_579;
       const real_t Dummy_596 = Dummy_554;
       const real_t Dummy_597 = Dummy_550*((Dummy_541*Dummy_541)*4.0 + (Dummy_544*Dummy_544)*4.0 + (Dummy_547*Dummy_547)*4.0);
       const real_t Dummy_598 = Dummy_580;
       const real_t Dummy_599 = Dummy_581;
       const real_t Dummy_600 = Dummy_582;
       const real_t Dummy_601 = Dummy_583;
       const real_t Dummy_602 = Dummy_555;
       const real_t Dummy_603 = Dummy_580;
       const real_t Dummy_604 = Dummy_550*((Dummy_542*Dummy_542)*4.0 + (Dummy_545*Dummy_545)*4.0 + (Dummy_548*Dummy_548)*4.0);
       const real_t Dummy_605 = Dummy_584;
       const real_t Dummy_606 = Dummy_585;
       const real_t Dummy_607 = Dummy_586;
       const real_t Dummy_608 = Dummy_565;
       const real_t Dummy_609 = Dummy_581;
       const real_t Dummy_610 = Dummy_584;
       const real_t Dummy_611 = Dummy_550*((Dummy_558*Dummy_558) + (Dummy_561*Dummy_561) + (Dummy_564*Dummy_564));
       const real_t Dummy_612 = Dummy_587;
       const real_t Dummy_613 = Dummy_588;
       const real_t Dummy_614 = Dummy_575;
       const real_t Dummy_615 = Dummy_582;
       const real_t Dummy_616 = Dummy_585;
       const real_t Dummy_617 = Dummy_587;
       const real_t Dummy_618 = Dummy_550*((Dummy_568*Dummy_568) + (Dummy_571*Dummy_571) + (Dummy_574*Dummy_574));
       const real_t Dummy_619 = Dummy_589;
       const real_t Dummy_620 = Dummy_579;
       const real_t Dummy_621 = Dummy_583;
       const real_t Dummy_622 = Dummy_586;
       const real_t Dummy_623 = Dummy_588;
       const real_t Dummy_624 = Dummy_589;
       const real_t Dummy_625 = Dummy_550*((Dummy_576*Dummy_576) + (Dummy_577*Dummy_577) + (Dummy_578*Dummy_578));
       const real_t tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const real_t tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const real_t tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const real_t tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const real_t tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const real_t tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const real_t tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const real_t Dummy_626 = tmp_GREEN_UP_1;
       const real_t Dummy_627 = tmp_GREEN_UP_2;
       const real_t Dummy_628 = tmp_GREEN_UP_3;
       const real_t Dummy_629 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const real_t Dummy_630 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const real_t Dummy_631 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const real_t Dummy_632 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
       const real_t Dummy_633 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
       const real_t Dummy_634 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
       const real_t Dummy_635 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
       const real_t Dummy_636 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
       const real_t Dummy_637 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
       const real_t Dummy_638 = -Dummy_626 + Dummy_629;
       const real_t Dummy_639 = -Dummy_626 + Dummy_632;
       const real_t Dummy_640 = -Dummy_626 + Dummy_635;
       const real_t Dummy_641 = -Dummy_627 + Dummy_630;
       const real_t Dummy_642 = -Dummy_627 + Dummy_633;
       const real_t Dummy_643 = -Dummy_627 + Dummy_636;
       const real_t Dummy_644 = -Dummy_628 + Dummy_631;
       const real_t Dummy_645 = -Dummy_628 + Dummy_634;
       const real_t Dummy_646 = -Dummy_628 + Dummy_637;
       const real_t Dummy_647 = abs(Dummy_638*Dummy_642*Dummy_646 - Dummy_638*Dummy_643*Dummy_645 - Dummy_639*Dummy_641*Dummy_646 + Dummy_639*Dummy_643*Dummy_644 + Dummy_640*Dummy_641*Dummy_645 - Dummy_640*Dummy_642*Dummy_644);
       const real_t Dummy_648 = 1.0 / (Dummy_647)*0.16666666666666666;
       const real_t Dummy_649 = Dummy_638*4.0;
       const real_t Dummy_650 = Dummy_641*4.0;
       const real_t Dummy_651 = Dummy_644*4.0;
       const real_t Dummy_652 = Dummy_648*(-Dummy_639*Dummy_649 - Dummy_642*Dummy_650 - Dummy_645*Dummy_651);
       const real_t Dummy_653 = Dummy_648*(Dummy_640*Dummy_649 + Dummy_643*Dummy_650 + Dummy_646*Dummy_651);
       const real_t Dummy_654 = Dummy_638*2.0;
       const real_t Dummy_655 = Dummy_639*2.0;
       const real_t Dummy_656 = -Dummy_654 + Dummy_655;
       const real_t Dummy_657 = Dummy_641*2.0;
       const real_t Dummy_658 = Dummy_642*2.0;
       const real_t Dummy_659 = -Dummy_657 + Dummy_658;
       const real_t Dummy_660 = Dummy_644*2.0;
       const real_t Dummy_661 = Dummy_645*2.0;
       const real_t Dummy_662 = -Dummy_660 + Dummy_661;
       const real_t Dummy_663 = Dummy_648*(Dummy_654*Dummy_656 + Dummy_657*Dummy_659 + Dummy_660*Dummy_662);
       const real_t Dummy_664 = Dummy_640*2.0;
       const real_t Dummy_665 = -Dummy_664;
       const real_t Dummy_666 = Dummy_654 + Dummy_665;
       const real_t Dummy_667 = Dummy_643*2.0;
       const real_t Dummy_668 = -Dummy_667;
       const real_t Dummy_669 = Dummy_657 + Dummy_668;
       const real_t Dummy_670 = Dummy_646*2.0;
       const real_t Dummy_671 = -Dummy_670;
       const real_t Dummy_672 = Dummy_660 + Dummy_671;
       const real_t Dummy_673 = Dummy_648*(Dummy_654*Dummy_666 + Dummy_657*Dummy_669 + Dummy_660*Dummy_672);
       const real_t Dummy_674 = -Dummy_655 - Dummy_665;
       const real_t Dummy_675 = -Dummy_658 - Dummy_668;
       const real_t Dummy_676 = -Dummy_661 - Dummy_671;
       const real_t Dummy_677 = Dummy_648*(Dummy_654*Dummy_674 + Dummy_657*Dummy_675 + Dummy_660*Dummy_676);
       const real_t Dummy_678 = Dummy_648*(Dummy_639*Dummy_640*-4.0 + Dummy_642*Dummy_643*-4.0 + Dummy_645*Dummy_646*-4.0);
       const real_t Dummy_679 = Dummy_648*(-Dummy_655*Dummy_656 - Dummy_658*Dummy_659 - Dummy_661*Dummy_662);
       const real_t Dummy_680 = Dummy_648*(-Dummy_655*Dummy_666 - Dummy_658*Dummy_669 - Dummy_661*Dummy_672);
       const real_t Dummy_681 = Dummy_648*(-Dummy_655*Dummy_674 - Dummy_658*Dummy_675 - Dummy_661*Dummy_676);
       const real_t Dummy_682 = Dummy_648*(Dummy_656*Dummy_664 + Dummy_659*Dummy_667 + Dummy_662*Dummy_670);
       const real_t Dummy_683 = Dummy_648*(Dummy_664*Dummy_666 + Dummy_667*Dummy_669 + Dummy_670*Dummy_672);
       const real_t Dummy_684 = Dummy_648*(Dummy_664*Dummy_674 + Dummy_667*Dummy_675 + Dummy_670*Dummy_676);
       const real_t Dummy_685 = Dummy_648*(Dummy_656*Dummy_666 + Dummy_659*Dummy_669 + Dummy_662*Dummy_672);
       const real_t Dummy_686 = Dummy_648*(Dummy_656*Dummy_674 + Dummy_659*Dummy_675 + Dummy_662*Dummy_676);
       const real_t Dummy_687 = Dummy_648*(Dummy_666*Dummy_674 + Dummy_669*Dummy_675 + Dummy_672*Dummy_676);
       const real_t Dummy_688 = Dummy_648*((Dummy_638*Dummy_638)*4.0 + (Dummy_641*Dummy_641)*4.0 + (Dummy_644*Dummy_644)*4.0);
       const real_t Dummy_689 = Dummy_652;
       const real_t Dummy_690 = Dummy_653;
       const real_t Dummy_691 = Dummy_663;
       const real_t Dummy_692 = Dummy_673;
       const real_t Dummy_693 = Dummy_677;
       const real_t Dummy_694 = Dummy_652;
       const real_t Dummy_695 = Dummy_648*((Dummy_639*Dummy_639)*4.0 + (Dummy_642*Dummy_642)*4.0 + (Dummy_645*Dummy_645)*4.0);
       const real_t Dummy_696 = Dummy_678;
       const real_t Dummy_697 = Dummy_679;
       const real_t Dummy_698 = Dummy_680;
       const real_t Dummy_699 = Dummy_681;
       const real_t Dummy_700 = Dummy_653;
       const real_t Dummy_701 = Dummy_678;
       const real_t Dummy_702 = Dummy_648*((Dummy_640*Dummy_640)*4.0 + (Dummy_643*Dummy_643)*4.0 + (Dummy_646*Dummy_646)*4.0);
       const real_t Dummy_703 = Dummy_682;
       const real_t Dummy_704 = Dummy_683;
       const real_t Dummy_705 = Dummy_684;
       const real_t Dummy_706 = Dummy_663;
       const real_t Dummy_707 = Dummy_679;
       const real_t Dummy_708 = Dummy_682;
       const real_t Dummy_709 = Dummy_648*((Dummy_656*Dummy_656) + (Dummy_659*Dummy_659) + (Dummy_662*Dummy_662));
       const real_t Dummy_710 = Dummy_685;
       const real_t Dummy_711 = Dummy_686;
       const real_t Dummy_712 = Dummy_673;
       const real_t Dummy_713 = Dummy_680;
       const real_t Dummy_714 = Dummy_683;
       const real_t Dummy_715 = Dummy_685;
       const real_t Dummy_716 = Dummy_648*((Dummy_666*Dummy_666) + (Dummy_669*Dummy_669) + (Dummy_672*Dummy_672));
       const real_t Dummy_717 = Dummy_687;
       const real_t Dummy_718 = Dummy_677;
       const real_t Dummy_719 = Dummy_681;
       const real_t Dummy_720 = Dummy_684;
       const real_t Dummy_721 = Dummy_686;
       const real_t Dummy_722 = Dummy_687;
       const real_t Dummy_723 = Dummy_648*((Dummy_674*Dummy_674) + (Dummy_675*Dummy_675) + (Dummy_676*Dummy_676));
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
       const real_t Dummy_724 = tmp_GREEN_DOWN_1;
       const real_t Dummy_725 = tmp_GREEN_DOWN_2;
       const real_t Dummy_726 = tmp_GREEN_DOWN_3;
       const real_t Dummy_727 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
       const real_t Dummy_728 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
       const real_t Dummy_729 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
       const real_t Dummy_730 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
       const real_t Dummy_731 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
       const real_t Dummy_732 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
       const real_t Dummy_733 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
       const real_t Dummy_734 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
       const real_t Dummy_735 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
       const real_t Dummy_736 = -Dummy_724 + Dummy_727;
       const real_t Dummy_737 = -Dummy_724 + Dummy_730;
       const real_t Dummy_738 = -Dummy_724 + Dummy_733;
       const real_t Dummy_739 = -Dummy_725 + Dummy_728;
       const real_t Dummy_740 = -Dummy_725 + Dummy_731;
       const real_t Dummy_741 = -Dummy_725 + Dummy_734;
       const real_t Dummy_742 = -Dummy_726 + Dummy_729;
       const real_t Dummy_743 = -Dummy_726 + Dummy_732;
       const real_t Dummy_744 = -Dummy_726 + Dummy_735;
       const real_t Dummy_745 = abs(Dummy_736*Dummy_740*Dummy_744 - Dummy_736*Dummy_741*Dummy_743 - Dummy_737*Dummy_739*Dummy_744 + Dummy_737*Dummy_741*Dummy_742 + Dummy_738*Dummy_739*Dummy_743 - Dummy_738*Dummy_740*Dummy_742);
       const real_t Dummy_746 = 1.0 / (Dummy_745)*0.16666666666666666;
       const real_t Dummy_747 = Dummy_736*4.0;
       const real_t Dummy_748 = Dummy_739*4.0;
       const real_t Dummy_749 = Dummy_742*4.0;
       const real_t Dummy_750 = Dummy_746*(-Dummy_737*Dummy_747 - Dummy_740*Dummy_748 - Dummy_743*Dummy_749);
       const real_t Dummy_751 = Dummy_746*(Dummy_738*Dummy_747 + Dummy_741*Dummy_748 + Dummy_744*Dummy_749);
       const real_t Dummy_752 = Dummy_736*2.0;
       const real_t Dummy_753 = Dummy_737*2.0;
       const real_t Dummy_754 = -Dummy_752 + Dummy_753;
       const real_t Dummy_755 = Dummy_739*2.0;
       const real_t Dummy_756 = Dummy_740*2.0;
       const real_t Dummy_757 = -Dummy_755 + Dummy_756;
       const real_t Dummy_758 = Dummy_742*2.0;
       const real_t Dummy_759 = Dummy_743*2.0;
       const real_t Dummy_760 = -Dummy_758 + Dummy_759;
       const real_t Dummy_761 = Dummy_746*(Dummy_752*Dummy_754 + Dummy_755*Dummy_757 + Dummy_758*Dummy_760);
       const real_t Dummy_762 = Dummy_738*2.0;
       const real_t Dummy_763 = -Dummy_762;
       const real_t Dummy_764 = Dummy_752 + Dummy_763;
       const real_t Dummy_765 = Dummy_741*2.0;
       const real_t Dummy_766 = -Dummy_765;
       const real_t Dummy_767 = Dummy_755 + Dummy_766;
       const real_t Dummy_768 = Dummy_744*2.0;
       const real_t Dummy_769 = -Dummy_768;
       const real_t Dummy_770 = Dummy_758 + Dummy_769;
       const real_t Dummy_771 = Dummy_746*(Dummy_752*Dummy_764 + Dummy_755*Dummy_767 + Dummy_758*Dummy_770);
       const real_t Dummy_772 = -Dummy_753 - Dummy_763;
       const real_t Dummy_773 = -Dummy_756 - Dummy_766;
       const real_t Dummy_774 = -Dummy_759 - Dummy_769;
       const real_t Dummy_775 = Dummy_746*(Dummy_752*Dummy_772 + Dummy_755*Dummy_773 + Dummy_758*Dummy_774);
       const real_t Dummy_776 = Dummy_746*(Dummy_737*Dummy_738*-4.0 + Dummy_740*Dummy_741*-4.0 + Dummy_743*Dummy_744*-4.0);
       const real_t Dummy_777 = Dummy_746*(-Dummy_753*Dummy_754 - Dummy_756*Dummy_757 - Dummy_759*Dummy_760);
       const real_t Dummy_778 = Dummy_746*(-Dummy_753*Dummy_764 - Dummy_756*Dummy_767 - Dummy_759*Dummy_770);
       const real_t Dummy_779 = Dummy_746*(-Dummy_753*Dummy_772 - Dummy_756*Dummy_773 - Dummy_759*Dummy_774);
       const real_t Dummy_780 = Dummy_746*(Dummy_754*Dummy_762 + Dummy_757*Dummy_765 + Dummy_760*Dummy_768);
       const real_t Dummy_781 = Dummy_746*(Dummy_762*Dummy_764 + Dummy_765*Dummy_767 + Dummy_768*Dummy_770);
       const real_t Dummy_782 = Dummy_746*(Dummy_762*Dummy_772 + Dummy_765*Dummy_773 + Dummy_768*Dummy_774);
       const real_t Dummy_783 = Dummy_746*(Dummy_754*Dummy_764 + Dummy_757*Dummy_767 + Dummy_760*Dummy_770);
       const real_t Dummy_784 = Dummy_746*(Dummy_754*Dummy_772 + Dummy_757*Dummy_773 + Dummy_760*Dummy_774);
       const real_t Dummy_785 = Dummy_746*(Dummy_764*Dummy_772 + Dummy_767*Dummy_773 + Dummy_770*Dummy_774);
       const real_t Dummy_786 = Dummy_746*((Dummy_736*Dummy_736)*4.0 + (Dummy_739*Dummy_739)*4.0 + (Dummy_742*Dummy_742)*4.0);
       const real_t Dummy_787 = Dummy_750;
       const real_t Dummy_788 = Dummy_751;
       const real_t Dummy_789 = Dummy_761;
       const real_t Dummy_790 = Dummy_771;
       const real_t Dummy_791 = Dummy_775;
       const real_t Dummy_792 = Dummy_750;
       const real_t Dummy_793 = Dummy_746*((Dummy_737*Dummy_737)*4.0 + (Dummy_740*Dummy_740)*4.0 + (Dummy_743*Dummy_743)*4.0);
       const real_t Dummy_794 = Dummy_776;
       const real_t Dummy_795 = Dummy_777;
       const real_t Dummy_796 = Dummy_778;
       const real_t Dummy_797 = Dummy_779;
       const real_t Dummy_798 = Dummy_751;
       const real_t Dummy_799 = Dummy_776;
       const real_t Dummy_800 = Dummy_746*((Dummy_738*Dummy_738)*4.0 + (Dummy_741*Dummy_741)*4.0 + (Dummy_744*Dummy_744)*4.0);
       const real_t Dummy_801 = Dummy_780;
       const real_t Dummy_802 = Dummy_781;
       const real_t Dummy_803 = Dummy_782;
       const real_t Dummy_804 = Dummy_761;
       const real_t Dummy_805 = Dummy_777;
       const real_t Dummy_806 = Dummy_780;
       const real_t Dummy_807 = Dummy_746*((Dummy_754*Dummy_754) + (Dummy_757*Dummy_757) + (Dummy_760*Dummy_760));
       const real_t Dummy_808 = Dummy_783;
       const real_t Dummy_809 = Dummy_784;
       const real_t Dummy_810 = Dummy_771;
       const real_t Dummy_811 = Dummy_778;
       const real_t Dummy_812 = Dummy_781;
       const real_t Dummy_813 = Dummy_783;
       const real_t Dummy_814 = Dummy_746*((Dummy_764*Dummy_764) + (Dummy_767*Dummy_767) + (Dummy_770*Dummy_770));
       const real_t Dummy_815 = Dummy_785;
       const real_t Dummy_816 = Dummy_775;
       const real_t Dummy_817 = Dummy_779;
       const real_t Dummy_818 = Dummy_782;
       const real_t Dummy_819 = Dummy_784;
       const real_t Dummy_820 = Dummy_785;
       const real_t Dummy_821 = Dummy_746*((Dummy_772*Dummy_772) + (Dummy_773*Dummy_773) + (Dummy_774*Dummy_774));
       {
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::WHITE_UP );
         
             _data_mat[0] = ((real_t)((basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))*elMat_0_0));
             _data_mat[1] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*elMat_0_1));
             _data_mat[2] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*elMat_0_2));
             _data_mat[3] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*elMat_0_3));
             _data_mat[4] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*elMat_0_4));
             _data_mat[5] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*elMat_0_5));
             _data_mat[6] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*elMat_1_0));
             _data_mat[7] = ((real_t)((basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))*elMat_1_1));
             _data_mat[8] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*elMat_1_2));
             _data_mat[9] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*elMat_1_3));
             _data_mat[10] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*elMat_1_4));
             _data_mat[11] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*elMat_1_5));
             _data_mat[12] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*elMat_2_0));
             _data_mat[13] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*elMat_2_1));
             _data_mat[14] = ((real_t)((basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))*elMat_2_2));
             _data_mat[15] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*elMat_2_3));
             _data_mat[16] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*elMat_2_4));
             _data_mat[17] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*elMat_2_5));
             _data_mat[18] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*elMat_3_0));
             _data_mat[19] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*elMat_3_1));
             _data_mat[20] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*elMat_3_2));
             _data_mat[21] = ((real_t)((basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))*elMat_3_3));
             _data_mat[22] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*elMat_3_4));
             _data_mat[23] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*elMat_3_5));
             _data_mat[24] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*elMat_4_0));
             _data_mat[25] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*elMat_4_1));
             _data_mat[26] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*elMat_4_2));
             _data_mat[27] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*elMat_4_3));
             _data_mat[28] = ((real_t)((basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))*elMat_4_4));
             _data_mat[29] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*elMat_4_5));
             _data_mat[30] = ((real_t)(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*elMat_5_0));
             _data_mat[31] = ((real_t)(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*elMat_5_1));
             _data_mat[32] = ((real_t)(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*elMat_5_2));
             _data_mat[33] = ((real_t)(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*elMat_5_3));
             _data_mat[34] = ((real_t)(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*elMat_5_4));
             _data_mat[35] = ((real_t)((basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))*elMat_5_5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6)) + 1]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::WHITE_DOWN );
         
             _data_mat[0] = ((real_t)(Dummy_394*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((real_t)(Dummy_395*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((real_t)(Dummy_396*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((real_t)(Dummy_397*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((real_t)(Dummy_398*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((real_t)(Dummy_399*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((real_t)(Dummy_400*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((real_t)(Dummy_401*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((real_t)(Dummy_402*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((real_t)(Dummy_403*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((real_t)(Dummy_404*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((real_t)(Dummy_405*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((real_t)(Dummy_406*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((real_t)(Dummy_407*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((real_t)(Dummy_408*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((real_t)(Dummy_409*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((real_t)(Dummy_410*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((real_t)(Dummy_411*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((real_t)(Dummy_412*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((real_t)(Dummy_413*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((real_t)(Dummy_414*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((real_t)(Dummy_415*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((real_t)(Dummy_416*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((real_t)(Dummy_417*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((real_t)(Dummy_418*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((real_t)(Dummy_419*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((real_t)(Dummy_420*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((real_t)(Dummy_421*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((real_t)(Dummy_422*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((real_t)(Dummy_423*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((real_t)(Dummy_424*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((real_t)(Dummy_425*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((real_t)(Dummy_426*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((real_t)(Dummy_427*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((real_t)(Dummy_428*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((real_t)(Dummy_429*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::BLUE_UP );
         
             _data_mat[0] = ((real_t)(Dummy_492*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((real_t)(Dummy_493*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((real_t)(Dummy_494*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((real_t)(Dummy_495*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((real_t)(Dummy_496*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((real_t)(Dummy_497*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((real_t)(Dummy_498*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((real_t)(Dummy_499*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((real_t)(Dummy_500*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((real_t)(Dummy_501*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((real_t)(Dummy_502*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((real_t)(Dummy_503*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((real_t)(Dummy_504*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((real_t)(Dummy_505*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((real_t)(Dummy_506*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((real_t)(Dummy_507*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((real_t)(Dummy_508*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((real_t)(Dummy_509*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((real_t)(Dummy_510*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((real_t)(Dummy_511*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((real_t)(Dummy_512*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((real_t)(Dummy_513*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((real_t)(Dummy_514*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((real_t)(Dummy_515*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((real_t)(Dummy_516*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((real_t)(Dummy_517*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((real_t)(Dummy_518*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((real_t)(Dummy_519*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((real_t)(Dummy_520*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((real_t)(Dummy_521*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((real_t)(Dummy_522*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((real_t)(Dummy_523*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((real_t)(Dummy_524*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((real_t)(Dummy_525*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((real_t)(Dummy_526*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((real_t)(Dummy_527*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 2*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::BLUE_DOWN );
         
             _data_mat[0] = ((real_t)(Dummy_590*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((real_t)(Dummy_591*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((real_t)(Dummy_592*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((real_t)(Dummy_593*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((real_t)(Dummy_594*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((real_t)(Dummy_595*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((real_t)(Dummy_596*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((real_t)(Dummy_597*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((real_t)(Dummy_598*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((real_t)(Dummy_599*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((real_t)(Dummy_600*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((real_t)(Dummy_601*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((real_t)(Dummy_602*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((real_t)(Dummy_603*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((real_t)(Dummy_604*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((real_t)(Dummy_605*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((real_t)(Dummy_606*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((real_t)(Dummy_607*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((real_t)(Dummy_608*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((real_t)(Dummy_609*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((real_t)(Dummy_610*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((real_t)(Dummy_611*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((real_t)(Dummy_612*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((real_t)(Dummy_613*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((real_t)(Dummy_614*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((real_t)(Dummy_615*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((real_t)(Dummy_616*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((real_t)(Dummy_617*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((real_t)(Dummy_618*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((real_t)(Dummy_619*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((real_t)(Dummy_620*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((real_t)(Dummy_621*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((real_t)(Dummy_622*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((real_t)(Dummy_623*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((real_t)(Dummy_624*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((real_t)(Dummy_625*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::GREEN_UP );
         
             _data_mat[0] = ((real_t)(Dummy_688*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((real_t)(Dummy_689*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((real_t)(Dummy_690*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((real_t)(Dummy_691*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((real_t)(Dummy_692*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((real_t)(Dummy_693*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((real_t)(Dummy_694*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((real_t)(Dummy_695*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((real_t)(Dummy_696*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((real_t)(Dummy_697*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((real_t)(Dummy_698*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((real_t)(Dummy_699*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((real_t)(Dummy_700*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((real_t)(Dummy_701*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((real_t)(Dummy_702*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((real_t)(Dummy_703*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((real_t)(Dummy_704*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((real_t)(Dummy_705*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((real_t)(Dummy_706*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((real_t)(Dummy_707*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((real_t)(Dummy_708*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((real_t)(Dummy_709*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((real_t)(Dummy_710*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((real_t)(Dummy_711*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((real_t)(Dummy_712*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((real_t)(Dummy_713*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((real_t)(Dummy_714*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((real_t)(Dummy_715*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((real_t)(Dummy_716*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((real_t)(Dummy_717*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((real_t)(Dummy_718*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((real_t)(Dummy_719*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((real_t)(Dummy_720*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((real_t)(Dummy_721*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((real_t)(Dummy_722*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((real_t)(Dummy_723*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< real_t > _data_mat( 36 );
         
             _data_rowIdx[0] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[1] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[2] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_rowIdx[3] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_rowIdx[4] = ((uint64_t)(_data_dst[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_rowIdx[5] = ((uint64_t)(_data_dst[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[0] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + 4*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[1] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 5*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[2] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge + 1) - ((ctr_1*(ctr_1 + 1)) / (2)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6)) + 1]));
             _data_colIdx[3] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + 3*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
             _data_colIdx[4] = ((uint64_t)(_data_src[ctr_0 + ctr_1*(-ctr_2 + micro_edges_per_macro_edge) - ((ctr_1*(ctr_1 + 1)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge - 1)*(micro_edges_per_macro_edge + 1)) / (6)) + 6*((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge - 1)*(-ctr_2 + micro_edges_per_macro_edge + 1)) / (6))]));
             _data_colIdx[5] = ((uint64_t)(_data_src[ctr_0 + (ctr_1 + 1)*(-ctr_2 + micro_edges_per_macro_edge + 1) - (((ctr_1 + 1)*(ctr_1 + 2)) / (2)) + ((micro_edges_per_macro_edge*(micro_edges_per_macro_edge + 1)*(micro_edges_per_macro_edge + 2)) / (6)) - (((-ctr_2 + micro_edges_per_macro_edge)*(-ctr_2 + micro_edges_per_macro_edge + 1)*(-ctr_2 + micro_edges_per_macro_edge + 2)) / (6))]));
         
             /* Apply basis transformation */
         
             const Eigen::DiagonalMatrix< real_t, 6 > basisTransformation = n1e1::macrocell::basisTransformation( level, cell, {ctr_0, ctr_1, ctr_2}, celldof::CellType::GREEN_DOWN );
         
             _data_mat[0] = ((real_t)(Dummy_786*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))));
             _data_mat[1] = ((real_t)(Dummy_787*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[2] = ((real_t)(Dummy_788*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[3] = ((real_t)(Dummy_789*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[4] = ((real_t)(Dummy_790*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[5] = ((real_t)(Dummy_791*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[6] = ((real_t)(Dummy_792*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)));
             _data_mat[7] = ((real_t)(Dummy_793*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))));
             _data_mat[8] = ((real_t)(Dummy_794*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[9] = ((real_t)(Dummy_795*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[10] = ((real_t)(Dummy_796*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[11] = ((real_t)(Dummy_797*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[12] = ((real_t)(Dummy_798*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)));
             _data_mat[13] = ((real_t)(Dummy_799*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)));
             _data_mat[14] = ((real_t)(Dummy_800*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))));
             _data_mat[15] = ((real_t)(Dummy_801*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[16] = ((real_t)(Dummy_802*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[17] = ((real_t)(Dummy_803*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[18] = ((real_t)(Dummy_804*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)));
             _data_mat[19] = ((real_t)(Dummy_805*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)));
             _data_mat[20] = ((real_t)(Dummy_806*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)));
             _data_mat[21] = ((real_t)(Dummy_807*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))));
             _data_mat[22] = ((real_t)(Dummy_808*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[23] = ((real_t)(Dummy_809*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[24] = ((real_t)(Dummy_810*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)));
             _data_mat[25] = ((real_t)(Dummy_811*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)));
             _data_mat[26] = ((real_t)(Dummy_812*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)));
             _data_mat[27] = ((real_t)(Dummy_813*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)));
             _data_mat[28] = ((real_t)(Dummy_814*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))));
             _data_mat[29] = ((real_t)(Dummy_815*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[30] = ((real_t)(Dummy_816*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)));
             _data_mat[31] = ((real_t)(Dummy_817*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)));
             _data_mat[32] = ((real_t)(Dummy_818*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)));
             _data_mat[33] = ((real_t)(Dummy_819*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)));
             _data_mat[34] = ((real_t)(Dummy_820*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)));
             _data_mat[35] = ((real_t)(Dummy_821*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
