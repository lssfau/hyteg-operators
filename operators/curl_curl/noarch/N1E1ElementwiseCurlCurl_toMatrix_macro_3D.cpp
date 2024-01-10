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

void N1E1ElementwiseCurlCurl::toMatrix_macro_3D( int64_t * RESTRICT  _data_dst, int64_t * RESTRICT  _data_src, const Cell& cell, const uint_t level, double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_0comp2, double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_1comp2, double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1, double macro_vertex_coord_id_2comp2, double macro_vertex_coord_id_3comp0, double macro_vertex_coord_id_3comp1, double macro_vertex_coord_id_3comp2, std::shared_ptr< SparseMatrixProxy > mat, int64_t micro_edges_per_macro_edge, double micro_edges_per_macro_edge_float ) const
{
    {
       const double tmp_WHITE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double p_affine_0_0 = macro_vertex_coord_id_0comp0;
       const double p_affine_0_1 = macro_vertex_coord_id_0comp1;
       const double p_affine_0_2 = macro_vertex_coord_id_0comp2;
       const double p_affine_1_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double p_affine_1_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double p_affine_1_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double p_affine_2_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double p_affine_2_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double p_affine_2_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double p_affine_3_0 = macro_vertex_coord_id_0comp0 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double p_affine_3_1 = macro_vertex_coord_id_0comp1 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double p_affine_3_2 = macro_vertex_coord_id_0comp2 + tmp_WHITE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double jac_affine_0_0 = -p_affine_0_0 + p_affine_1_0;
       const double jac_affine_0_1 = -p_affine_0_0 + p_affine_2_0;
       const double jac_affine_0_2 = -p_affine_0_0 + p_affine_3_0;
       const double jac_affine_1_0 = -p_affine_0_1 + p_affine_1_1;
       const double jac_affine_1_1 = -p_affine_0_1 + p_affine_2_1;
       const double jac_affine_1_2 = -p_affine_0_1 + p_affine_3_1;
       const double jac_affine_2_0 = -p_affine_0_2 + p_affine_1_2;
       const double jac_affine_2_1 = -p_affine_0_2 + p_affine_2_2;
       const double jac_affine_2_2 = -p_affine_0_2 + p_affine_3_2;
       const double abs_det_jac_affine = fabs(jac_affine_0_0*jac_affine_1_1*jac_affine_2_2 - jac_affine_0_0*jac_affine_1_2*jac_affine_2_1 - jac_affine_0_1*jac_affine_1_0*jac_affine_2_2 + jac_affine_0_1*jac_affine_1_2*jac_affine_2_0 + jac_affine_0_2*jac_affine_1_0*jac_affine_2_1 - jac_affine_0_2*jac_affine_1_1*jac_affine_2_0);
       const double tmp_0 = 1.0 / (abs_det_jac_affine)*0.16666666666666666;
       const double tmp_1 = jac_affine_0_0*4.0;
       const double tmp_2 = jac_affine_1_0*4.0;
       const double tmp_3 = jac_affine_2_0*4.0;
       const double tmp_4 = tmp_0*(-jac_affine_0_1*tmp_1 - jac_affine_1_1*tmp_2 - jac_affine_2_1*tmp_3);
       const double tmp_5 = tmp_0*(jac_affine_0_2*tmp_1 + jac_affine_1_2*tmp_2 + jac_affine_2_2*tmp_3);
       const double tmp_6 = jac_affine_0_0*2.0;
       const double tmp_7 = jac_affine_0_1*2.0;
       const double tmp_8 = -tmp_6 + tmp_7;
       const double tmp_9 = jac_affine_1_0*2.0;
       const double tmp_10 = jac_affine_1_1*2.0;
       const double tmp_11 = tmp_10 - tmp_9;
       const double tmp_12 = jac_affine_2_0*2.0;
       const double tmp_13 = jac_affine_2_1*2.0;
       const double tmp_14 = -tmp_12 + tmp_13;
       const double tmp_15 = tmp_0*(tmp_11*tmp_9 + tmp_12*tmp_14 + tmp_6*tmp_8);
       const double tmp_16 = jac_affine_0_2*2.0;
       const double tmp_17 = -tmp_16;
       const double tmp_18 = tmp_17 + tmp_6;
       const double tmp_19 = jac_affine_1_2*2.0;
       const double tmp_20 = -tmp_19;
       const double tmp_21 = tmp_20 + tmp_9;
       const double tmp_22 = jac_affine_2_2*2.0;
       const double tmp_23 = -tmp_22;
       const double tmp_24 = tmp_12 + tmp_23;
       const double tmp_25 = tmp_0*(tmp_12*tmp_24 + tmp_18*tmp_6 + tmp_21*tmp_9);
       const double tmp_26 = -tmp_17 - tmp_7;
       const double tmp_27 = -tmp_10 - tmp_20;
       const double tmp_28 = -tmp_13 - tmp_23;
       const double tmp_29 = tmp_0*(tmp_12*tmp_28 + tmp_26*tmp_6 + tmp_27*tmp_9);
       const double tmp_30 = tmp_0*(jac_affine_0_1*jac_affine_0_2*-4.0 + jac_affine_1_1*jac_affine_1_2*-4.0 + jac_affine_2_1*jac_affine_2_2*-4.0);
       const double tmp_31 = tmp_0*(-tmp_10*tmp_11 - tmp_13*tmp_14 - tmp_7*tmp_8);
       const double tmp_32 = tmp_0*(-tmp_10*tmp_21 - tmp_13*tmp_24 - tmp_18*tmp_7);
       const double tmp_33 = tmp_0*(-tmp_10*tmp_27 - tmp_13*tmp_28 - tmp_26*tmp_7);
       const double tmp_34 = tmp_0*(tmp_11*tmp_19 + tmp_14*tmp_22 + tmp_16*tmp_8);
       const double tmp_35 = tmp_0*(tmp_16*tmp_18 + tmp_19*tmp_21 + tmp_22*tmp_24);
       const double tmp_36 = tmp_0*(tmp_16*tmp_26 + tmp_19*tmp_27 + tmp_22*tmp_28);
       const double tmp_37 = tmp_0*(tmp_11*tmp_21 + tmp_14*tmp_24 + tmp_18*tmp_8);
       const double tmp_38 = tmp_0*(tmp_11*tmp_27 + tmp_14*tmp_28 + tmp_26*tmp_8);
       const double tmp_39 = tmp_0*(tmp_18*tmp_26 + tmp_21*tmp_27 + tmp_24*tmp_28);
       const double elMat_0_0 = tmp_0*((jac_affine_0_0*jac_affine_0_0)*4.0 + (jac_affine_1_0*jac_affine_1_0)*4.0 + (jac_affine_2_0*jac_affine_2_0)*4.0);
       const double elMat_0_1 = tmp_4;
       const double elMat_0_2 = tmp_5;
       const double elMat_0_3 = tmp_15;
       const double elMat_0_4 = tmp_25;
       const double elMat_0_5 = tmp_29;
       const double elMat_1_0 = tmp_4;
       const double elMat_1_1 = tmp_0*((jac_affine_0_1*jac_affine_0_1)*4.0 + (jac_affine_1_1*jac_affine_1_1)*4.0 + (jac_affine_2_1*jac_affine_2_1)*4.0);
       const double elMat_1_2 = tmp_30;
       const double elMat_1_3 = tmp_31;
       const double elMat_1_4 = tmp_32;
       const double elMat_1_5 = tmp_33;
       const double elMat_2_0 = tmp_5;
       const double elMat_2_1 = tmp_30;
       const double elMat_2_2 = tmp_0*((jac_affine_0_2*jac_affine_0_2)*4.0 + (jac_affine_1_2*jac_affine_1_2)*4.0 + (jac_affine_2_2*jac_affine_2_2)*4.0);
       const double elMat_2_3 = tmp_34;
       const double elMat_2_4 = tmp_35;
       const double elMat_2_5 = tmp_36;
       const double elMat_3_0 = tmp_15;
       const double elMat_3_1 = tmp_31;
       const double elMat_3_2 = tmp_34;
       const double elMat_3_3 = tmp_0*((tmp_11*tmp_11) + (tmp_14*tmp_14) + (tmp_8*tmp_8));
       const double elMat_3_4 = tmp_37;
       const double elMat_3_5 = tmp_38;
       const double elMat_4_0 = tmp_25;
       const double elMat_4_1 = tmp_32;
       const double elMat_4_2 = tmp_35;
       const double elMat_4_3 = tmp_37;
       const double elMat_4_4 = tmp_0*((tmp_18*tmp_18) + (tmp_21*tmp_21) + (tmp_24*tmp_24));
       const double elMat_4_5 = tmp_39;
       const double elMat_5_0 = tmp_29;
       const double elMat_5_1 = tmp_33;
       const double elMat_5_2 = tmp_36;
       const double elMat_5_3 = tmp_38;
       const double elMat_5_4 = tmp_39;
       const double elMat_5_5 = tmp_0*((tmp_26*tmp_26) + (tmp_27*tmp_27) + (tmp_28*tmp_28));
       const double tmp_WHITE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_WHITE_DOWN_1 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_WHITE_DOWN_2 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_WHITE_DOWN_3 = tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_2;
       const double tmp_WHITE_DOWN_4 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_WHITE_DOWN_5 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_WHITE_DOWN_6 = tmp_WHITE_DOWN_4 + tmp_WHITE_DOWN_5;
       const double tmp_WHITE_DOWN_7 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double tmp_WHITE_DOWN_8 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_WHITE_DOWN_9 = tmp_WHITE_DOWN_7 + tmp_WHITE_DOWN_8;
       const double tmp_WHITE_DOWN_10 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_WHITE_DOWN_11 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_WHITE_DOWN_12 = tmp_WHITE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double Dummy_332 = tmp_WHITE_DOWN_3;
       const double Dummy_333 = tmp_WHITE_DOWN_6;
       const double Dummy_334 = tmp_WHITE_DOWN_9;
       const double Dummy_335 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_2;
       const double Dummy_336 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_5;
       const double Dummy_337 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_8;
       const double Dummy_338 = macro_vertex_coord_id_0comp0 + tmp_WHITE_DOWN_1 + tmp_WHITE_DOWN_10;
       const double Dummy_339 = macro_vertex_coord_id_0comp1 + tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_4;
       const double Dummy_340 = macro_vertex_coord_id_0comp2 + tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_7;
       const double Dummy_341 = tmp_WHITE_DOWN_10 + tmp_WHITE_DOWN_3;
       const double Dummy_342 = tmp_WHITE_DOWN_11 + tmp_WHITE_DOWN_6;
       const double Dummy_343 = tmp_WHITE_DOWN_12 + tmp_WHITE_DOWN_9;
       const double Dummy_344 = -Dummy_332 + Dummy_335;
       const double Dummy_345 = -Dummy_332 + Dummy_338;
       const double Dummy_346 = -Dummy_332 + Dummy_341;
       const double Dummy_347 = -Dummy_333 + Dummy_336;
       const double Dummy_348 = -Dummy_333 + Dummy_339;
       const double Dummy_349 = -Dummy_333 + Dummy_342;
       const double Dummy_350 = -Dummy_334 + Dummy_337;
       const double Dummy_351 = -Dummy_334 + Dummy_340;
       const double Dummy_352 = -Dummy_334 + Dummy_343;
       const double Dummy_353 = fabs(Dummy_344*Dummy_348*Dummy_352 - Dummy_344*Dummy_349*Dummy_351 - Dummy_345*Dummy_347*Dummy_352 + Dummy_345*Dummy_349*Dummy_350 + Dummy_346*Dummy_347*Dummy_351 - Dummy_346*Dummy_348*Dummy_350);
       const double Dummy_354 = 1.0 / (Dummy_353)*0.16666666666666666;
       const double Dummy_355 = Dummy_344*4.0;
       const double Dummy_356 = Dummy_347*4.0;
       const double Dummy_357 = Dummy_350*4.0;
       const double Dummy_358 = Dummy_354*(-Dummy_345*Dummy_355 - Dummy_348*Dummy_356 - Dummy_351*Dummy_357);
       const double Dummy_359 = Dummy_354*(Dummy_346*Dummy_355 + Dummy_349*Dummy_356 + Dummy_352*Dummy_357);
       const double Dummy_360 = Dummy_344*2.0;
       const double Dummy_361 = Dummy_345*2.0;
       const double Dummy_362 = -Dummy_360 + Dummy_361;
       const double Dummy_363 = Dummy_347*2.0;
       const double Dummy_364 = Dummy_348*2.0;
       const double Dummy_365 = -Dummy_363 + Dummy_364;
       const double Dummy_366 = Dummy_350*2.0;
       const double Dummy_367 = Dummy_351*2.0;
       const double Dummy_368 = -Dummy_366 + Dummy_367;
       const double Dummy_369 = Dummy_354*(Dummy_360*Dummy_362 + Dummy_363*Dummy_365 + Dummy_366*Dummy_368);
       const double Dummy_370 = Dummy_346*2.0;
       const double Dummy_371 = -Dummy_370;
       const double Dummy_372 = Dummy_360 + Dummy_371;
       const double Dummy_373 = Dummy_349*2.0;
       const double Dummy_374 = -Dummy_373;
       const double Dummy_375 = Dummy_363 + Dummy_374;
       const double Dummy_376 = Dummy_352*2.0;
       const double Dummy_377 = -Dummy_376;
       const double Dummy_378 = Dummy_366 + Dummy_377;
       const double Dummy_379 = Dummy_354*(Dummy_360*Dummy_372 + Dummy_363*Dummy_375 + Dummy_366*Dummy_378);
       const double Dummy_380 = -Dummy_361 - Dummy_371;
       const double Dummy_381 = -Dummy_364 - Dummy_374;
       const double Dummy_382 = -Dummy_367 - Dummy_377;
       const double Dummy_383 = Dummy_354*(Dummy_360*Dummy_380 + Dummy_363*Dummy_381 + Dummy_366*Dummy_382);
       const double Dummy_384 = Dummy_354*(Dummy_345*Dummy_346*-4.0 + Dummy_348*Dummy_349*-4.0 + Dummy_351*Dummy_352*-4.0);
       const double Dummy_385 = Dummy_354*(-Dummy_361*Dummy_362 - Dummy_364*Dummy_365 - Dummy_367*Dummy_368);
       const double Dummy_386 = Dummy_354*(-Dummy_361*Dummy_372 - Dummy_364*Dummy_375 - Dummy_367*Dummy_378);
       const double Dummy_387 = Dummy_354*(-Dummy_361*Dummy_380 - Dummy_364*Dummy_381 - Dummy_367*Dummy_382);
       const double Dummy_388 = Dummy_354*(Dummy_362*Dummy_370 + Dummy_365*Dummy_373 + Dummy_368*Dummy_376);
       const double Dummy_389 = Dummy_354*(Dummy_370*Dummy_372 + Dummy_373*Dummy_375 + Dummy_376*Dummy_378);
       const double Dummy_390 = Dummy_354*(Dummy_370*Dummy_380 + Dummy_373*Dummy_381 + Dummy_376*Dummy_382);
       const double Dummy_391 = Dummy_354*(Dummy_362*Dummy_372 + Dummy_365*Dummy_375 + Dummy_368*Dummy_378);
       const double Dummy_392 = Dummy_354*(Dummy_362*Dummy_380 + Dummy_365*Dummy_381 + Dummy_368*Dummy_382);
       const double Dummy_393 = Dummy_354*(Dummy_372*Dummy_380 + Dummy_375*Dummy_381 + Dummy_378*Dummy_382);
       const double Dummy_394 = Dummy_354*((Dummy_344*Dummy_344)*4.0 + (Dummy_347*Dummy_347)*4.0 + (Dummy_350*Dummy_350)*4.0);
       const double Dummy_395 = Dummy_358;
       const double Dummy_396 = Dummy_359;
       const double Dummy_397 = Dummy_369;
       const double Dummy_398 = Dummy_379;
       const double Dummy_399 = Dummy_383;
       const double Dummy_400 = Dummy_358;
       const double Dummy_401 = Dummy_354*((Dummy_345*Dummy_345)*4.0 + (Dummy_348*Dummy_348)*4.0 + (Dummy_351*Dummy_351)*4.0);
       const double Dummy_402 = Dummy_384;
       const double Dummy_403 = Dummy_385;
       const double Dummy_404 = Dummy_386;
       const double Dummy_405 = Dummy_387;
       const double Dummy_406 = Dummy_359;
       const double Dummy_407 = Dummy_384;
       const double Dummy_408 = Dummy_354*((Dummy_346*Dummy_346)*4.0 + (Dummy_349*Dummy_349)*4.0 + (Dummy_352*Dummy_352)*4.0);
       const double Dummy_409 = Dummy_388;
       const double Dummy_410 = Dummy_389;
       const double Dummy_411 = Dummy_390;
       const double Dummy_412 = Dummy_369;
       const double Dummy_413 = Dummy_385;
       const double Dummy_414 = Dummy_388;
       const double Dummy_415 = Dummy_354*((Dummy_362*Dummy_362) + (Dummy_365*Dummy_365) + (Dummy_368*Dummy_368));
       const double Dummy_416 = Dummy_391;
       const double Dummy_417 = Dummy_392;
       const double Dummy_418 = Dummy_379;
       const double Dummy_419 = Dummy_386;
       const double Dummy_420 = Dummy_389;
       const double Dummy_421 = Dummy_391;
       const double Dummy_422 = Dummy_354*((Dummy_372*Dummy_372) + (Dummy_375*Dummy_375) + (Dummy_378*Dummy_378));
       const double Dummy_423 = Dummy_393;
       const double Dummy_424 = Dummy_383;
       const double Dummy_425 = Dummy_387;
       const double Dummy_426 = Dummy_390;
       const double Dummy_427 = Dummy_392;
       const double Dummy_428 = Dummy_393;
       const double Dummy_429 = Dummy_354*((Dummy_380*Dummy_380) + (Dummy_381*Dummy_381) + (Dummy_382*Dummy_382));
       const double tmp_BLUE_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_BLUE_UP_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_BLUE_UP_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_BLUE_UP_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_BLUE_UP_4 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_BLUE_UP_5 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_BLUE_UP_6 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double Dummy_430 = tmp_BLUE_UP_1;
       const double Dummy_431 = tmp_BLUE_UP_2;
       const double Dummy_432 = tmp_BLUE_UP_3;
       const double Dummy_433 = macro_vertex_coord_id_0comp0 + tmp_BLUE_UP_4;
       const double Dummy_434 = macro_vertex_coord_id_0comp1 + tmp_BLUE_UP_5;
       const double Dummy_435 = macro_vertex_coord_id_0comp2 + tmp_BLUE_UP_6;
       const double Dummy_436 = tmp_BLUE_UP_1 + tmp_BLUE_UP_4;
       const double Dummy_437 = tmp_BLUE_UP_2 + tmp_BLUE_UP_5;
       const double Dummy_438 = tmp_BLUE_UP_3 + tmp_BLUE_UP_6;
       const double Dummy_439 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0) + tmp_BLUE_UP_1;
       const double Dummy_440 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1) + tmp_BLUE_UP_2;
       const double Dummy_441 = tmp_BLUE_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2) + tmp_BLUE_UP_3;
       const double Dummy_442 = -Dummy_430 + Dummy_433;
       const double Dummy_443 = -Dummy_430 + Dummy_436;
       const double Dummy_444 = -Dummy_430 + Dummy_439;
       const double Dummy_445 = -Dummy_431 + Dummy_434;
       const double Dummy_446 = -Dummy_431 + Dummy_437;
       const double Dummy_447 = -Dummy_431 + Dummy_440;
       const double Dummy_448 = -Dummy_432 + Dummy_435;
       const double Dummy_449 = -Dummy_432 + Dummy_438;
       const double Dummy_450 = -Dummy_432 + Dummy_441;
       const double Dummy_451 = fabs(Dummy_442*Dummy_446*Dummy_450 - Dummy_442*Dummy_447*Dummy_449 - Dummy_443*Dummy_445*Dummy_450 + Dummy_443*Dummy_447*Dummy_448 + Dummy_444*Dummy_445*Dummy_449 - Dummy_444*Dummy_446*Dummy_448);
       const double Dummy_452 = 1.0 / (Dummy_451)*0.16666666666666666;
       const double Dummy_453 = Dummy_442*4.0;
       const double Dummy_454 = Dummy_445*4.0;
       const double Dummy_455 = Dummy_448*4.0;
       const double Dummy_456 = Dummy_452*(-Dummy_443*Dummy_453 - Dummy_446*Dummy_454 - Dummy_449*Dummy_455);
       const double Dummy_457 = Dummy_452*(Dummy_444*Dummy_453 + Dummy_447*Dummy_454 + Dummy_450*Dummy_455);
       const double Dummy_458 = Dummy_442*2.0;
       const double Dummy_459 = Dummy_443*2.0;
       const double Dummy_460 = -Dummy_458 + Dummy_459;
       const double Dummy_461 = Dummy_445*2.0;
       const double Dummy_462 = Dummy_446*2.0;
       const double Dummy_463 = -Dummy_461 + Dummy_462;
       const double Dummy_464 = Dummy_448*2.0;
       const double Dummy_465 = Dummy_449*2.0;
       const double Dummy_466 = -Dummy_464 + Dummy_465;
       const double Dummy_467 = Dummy_452*(Dummy_458*Dummy_460 + Dummy_461*Dummy_463 + Dummy_464*Dummy_466);
       const double Dummy_468 = Dummy_444*2.0;
       const double Dummy_469 = -Dummy_468;
       const double Dummy_470 = Dummy_458 + Dummy_469;
       const double Dummy_471 = Dummy_447*2.0;
       const double Dummy_472 = -Dummy_471;
       const double Dummy_473 = Dummy_461 + Dummy_472;
       const double Dummy_474 = Dummy_450*2.0;
       const double Dummy_475 = -Dummy_474;
       const double Dummy_476 = Dummy_464 + Dummy_475;
       const double Dummy_477 = Dummy_452*(Dummy_458*Dummy_470 + Dummy_461*Dummy_473 + Dummy_464*Dummy_476);
       const double Dummy_478 = -Dummy_459 - Dummy_469;
       const double Dummy_479 = -Dummy_462 - Dummy_472;
       const double Dummy_480 = -Dummy_465 - Dummy_475;
       const double Dummy_481 = Dummy_452*(Dummy_458*Dummy_478 + Dummy_461*Dummy_479 + Dummy_464*Dummy_480);
       const double Dummy_482 = Dummy_452*(Dummy_443*Dummy_444*-4.0 + Dummy_446*Dummy_447*-4.0 + Dummy_449*Dummy_450*-4.0);
       const double Dummy_483 = Dummy_452*(-Dummy_459*Dummy_460 - Dummy_462*Dummy_463 - Dummy_465*Dummy_466);
       const double Dummy_484 = Dummy_452*(-Dummy_459*Dummy_470 - Dummy_462*Dummy_473 - Dummy_465*Dummy_476);
       const double Dummy_485 = Dummy_452*(-Dummy_459*Dummy_478 - Dummy_462*Dummy_479 - Dummy_465*Dummy_480);
       const double Dummy_486 = Dummy_452*(Dummy_460*Dummy_468 + Dummy_463*Dummy_471 + Dummy_466*Dummy_474);
       const double Dummy_487 = Dummy_452*(Dummy_468*Dummy_470 + Dummy_471*Dummy_473 + Dummy_474*Dummy_476);
       const double Dummy_488 = Dummy_452*(Dummy_468*Dummy_478 + Dummy_471*Dummy_479 + Dummy_474*Dummy_480);
       const double Dummy_489 = Dummy_452*(Dummy_460*Dummy_470 + Dummy_463*Dummy_473 + Dummy_466*Dummy_476);
       const double Dummy_490 = Dummy_452*(Dummy_460*Dummy_478 + Dummy_463*Dummy_479 + Dummy_466*Dummy_480);
       const double Dummy_491 = Dummy_452*(Dummy_470*Dummy_478 + Dummy_473*Dummy_479 + Dummy_476*Dummy_480);
       const double Dummy_492 = Dummy_452*((Dummy_442*Dummy_442)*4.0 + (Dummy_445*Dummy_445)*4.0 + (Dummy_448*Dummy_448)*4.0);
       const double Dummy_493 = Dummy_456;
       const double Dummy_494 = Dummy_457;
       const double Dummy_495 = Dummy_467;
       const double Dummy_496 = Dummy_477;
       const double Dummy_497 = Dummy_481;
       const double Dummy_498 = Dummy_456;
       const double Dummy_499 = Dummy_452*((Dummy_443*Dummy_443)*4.0 + (Dummy_446*Dummy_446)*4.0 + (Dummy_449*Dummy_449)*4.0);
       const double Dummy_500 = Dummy_482;
       const double Dummy_501 = Dummy_483;
       const double Dummy_502 = Dummy_484;
       const double Dummy_503 = Dummy_485;
       const double Dummy_504 = Dummy_457;
       const double Dummy_505 = Dummy_482;
       const double Dummy_506 = Dummy_452*((Dummy_444*Dummy_444)*4.0 + (Dummy_447*Dummy_447)*4.0 + (Dummy_450*Dummy_450)*4.0);
       const double Dummy_507 = Dummy_486;
       const double Dummy_508 = Dummy_487;
       const double Dummy_509 = Dummy_488;
       const double Dummy_510 = Dummy_467;
       const double Dummy_511 = Dummy_483;
       const double Dummy_512 = Dummy_486;
       const double Dummy_513 = Dummy_452*((Dummy_460*Dummy_460) + (Dummy_463*Dummy_463) + (Dummy_466*Dummy_466));
       const double Dummy_514 = Dummy_489;
       const double Dummy_515 = Dummy_490;
       const double Dummy_516 = Dummy_477;
       const double Dummy_517 = Dummy_484;
       const double Dummy_518 = Dummy_487;
       const double Dummy_519 = Dummy_489;
       const double Dummy_520 = Dummy_452*((Dummy_470*Dummy_470) + (Dummy_473*Dummy_473) + (Dummy_476*Dummy_476));
       const double Dummy_521 = Dummy_491;
       const double Dummy_522 = Dummy_481;
       const double Dummy_523 = Dummy_485;
       const double Dummy_524 = Dummy_488;
       const double Dummy_525 = Dummy_490;
       const double Dummy_526 = Dummy_491;
       const double Dummy_527 = Dummy_452*((Dummy_478*Dummy_478) + (Dummy_479*Dummy_479) + (Dummy_480*Dummy_480));
       const double tmp_BLUE_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_BLUE_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_BLUE_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_BLUE_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double tmp_BLUE_DOWN_4 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_BLUE_DOWN_5 = macro_vertex_coord_id_0comp0 + tmp_BLUE_DOWN_4;
       const double tmp_BLUE_DOWN_6 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_BLUE_DOWN_7 = macro_vertex_coord_id_0comp1 + tmp_BLUE_DOWN_6;
       const double tmp_BLUE_DOWN_8 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double tmp_BLUE_DOWN_9 = macro_vertex_coord_id_0comp2 + tmp_BLUE_DOWN_8;
       const double Dummy_528 = tmp_BLUE_DOWN_1;
       const double Dummy_529 = tmp_BLUE_DOWN_2;
       const double Dummy_530 = tmp_BLUE_DOWN_3;
       const double Dummy_531 = tmp_BLUE_DOWN_5;
       const double Dummy_532 = tmp_BLUE_DOWN_7;
       const double Dummy_533 = tmp_BLUE_DOWN_9;
       const double Dummy_534 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0) + tmp_BLUE_DOWN_5;
       const double Dummy_535 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1) + tmp_BLUE_DOWN_7;
       const double Dummy_536 = tmp_BLUE_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2) + tmp_BLUE_DOWN_9;
       const double Dummy_537 = tmp_BLUE_DOWN_1 + tmp_BLUE_DOWN_4;
       const double Dummy_538 = tmp_BLUE_DOWN_2 + tmp_BLUE_DOWN_6;
       const double Dummy_539 = tmp_BLUE_DOWN_3 + tmp_BLUE_DOWN_8;
       const double Dummy_540 = -Dummy_528 + Dummy_531;
       const double Dummy_541 = -Dummy_528 + Dummy_534;
       const double Dummy_542 = -Dummy_528 + Dummy_537;
       const double Dummy_543 = -Dummy_529 + Dummy_532;
       const double Dummy_544 = -Dummy_529 + Dummy_535;
       const double Dummy_545 = -Dummy_529 + Dummy_538;
       const double Dummy_546 = -Dummy_530 + Dummy_533;
       const double Dummy_547 = -Dummy_530 + Dummy_536;
       const double Dummy_548 = -Dummy_530 + Dummy_539;
       const double Dummy_549 = fabs(Dummy_540*Dummy_544*Dummy_548 - Dummy_540*Dummy_545*Dummy_547 - Dummy_541*Dummy_543*Dummy_548 + Dummy_541*Dummy_545*Dummy_546 + Dummy_542*Dummy_543*Dummy_547 - Dummy_542*Dummy_544*Dummy_546);
       const double Dummy_550 = 1.0 / (Dummy_549)*0.16666666666666666;
       const double Dummy_551 = Dummy_540*4.0;
       const double Dummy_552 = Dummy_543*4.0;
       const double Dummy_553 = Dummy_546*4.0;
       const double Dummy_554 = Dummy_550*(-Dummy_541*Dummy_551 - Dummy_544*Dummy_552 - Dummy_547*Dummy_553);
       const double Dummy_555 = Dummy_550*(Dummy_542*Dummy_551 + Dummy_545*Dummy_552 + Dummy_548*Dummy_553);
       const double Dummy_556 = Dummy_540*2.0;
       const double Dummy_557 = Dummy_541*2.0;
       const double Dummy_558 = -Dummy_556 + Dummy_557;
       const double Dummy_559 = Dummy_543*2.0;
       const double Dummy_560 = Dummy_544*2.0;
       const double Dummy_561 = -Dummy_559 + Dummy_560;
       const double Dummy_562 = Dummy_546*2.0;
       const double Dummy_563 = Dummy_547*2.0;
       const double Dummy_564 = -Dummy_562 + Dummy_563;
       const double Dummy_565 = Dummy_550*(Dummy_556*Dummy_558 + Dummy_559*Dummy_561 + Dummy_562*Dummy_564);
       const double Dummy_566 = Dummy_542*2.0;
       const double Dummy_567 = -Dummy_566;
       const double Dummy_568 = Dummy_556 + Dummy_567;
       const double Dummy_569 = Dummy_545*2.0;
       const double Dummy_570 = -Dummy_569;
       const double Dummy_571 = Dummy_559 + Dummy_570;
       const double Dummy_572 = Dummy_548*2.0;
       const double Dummy_573 = -Dummy_572;
       const double Dummy_574 = Dummy_562 + Dummy_573;
       const double Dummy_575 = Dummy_550*(Dummy_556*Dummy_568 + Dummy_559*Dummy_571 + Dummy_562*Dummy_574);
       const double Dummy_576 = -Dummy_557 - Dummy_567;
       const double Dummy_577 = -Dummy_560 - Dummy_570;
       const double Dummy_578 = -Dummy_563 - Dummy_573;
       const double Dummy_579 = Dummy_550*(Dummy_556*Dummy_576 + Dummy_559*Dummy_577 + Dummy_562*Dummy_578);
       const double Dummy_580 = Dummy_550*(Dummy_541*Dummy_542*-4.0 + Dummy_544*Dummy_545*-4.0 + Dummy_547*Dummy_548*-4.0);
       const double Dummy_581 = Dummy_550*(-Dummy_557*Dummy_558 - Dummy_560*Dummy_561 - Dummy_563*Dummy_564);
       const double Dummy_582 = Dummy_550*(-Dummy_557*Dummy_568 - Dummy_560*Dummy_571 - Dummy_563*Dummy_574);
       const double Dummy_583 = Dummy_550*(-Dummy_557*Dummy_576 - Dummy_560*Dummy_577 - Dummy_563*Dummy_578);
       const double Dummy_584 = Dummy_550*(Dummy_558*Dummy_566 + Dummy_561*Dummy_569 + Dummy_564*Dummy_572);
       const double Dummy_585 = Dummy_550*(Dummy_566*Dummy_568 + Dummy_569*Dummy_571 + Dummy_572*Dummy_574);
       const double Dummy_586 = Dummy_550*(Dummy_566*Dummy_576 + Dummy_569*Dummy_577 + Dummy_572*Dummy_578);
       const double Dummy_587 = Dummy_550*(Dummy_558*Dummy_568 + Dummy_561*Dummy_571 + Dummy_564*Dummy_574);
       const double Dummy_588 = Dummy_550*(Dummy_558*Dummy_576 + Dummy_561*Dummy_577 + Dummy_564*Dummy_578);
       const double Dummy_589 = Dummy_550*(Dummy_568*Dummy_576 + Dummy_571*Dummy_577 + Dummy_574*Dummy_578);
       const double Dummy_590 = Dummy_550*((Dummy_540*Dummy_540)*4.0 + (Dummy_543*Dummy_543)*4.0 + (Dummy_546*Dummy_546)*4.0);
       const double Dummy_591 = Dummy_554;
       const double Dummy_592 = Dummy_555;
       const double Dummy_593 = Dummy_565;
       const double Dummy_594 = Dummy_575;
       const double Dummy_595 = Dummy_579;
       const double Dummy_596 = Dummy_554;
       const double Dummy_597 = Dummy_550*((Dummy_541*Dummy_541)*4.0 + (Dummy_544*Dummy_544)*4.0 + (Dummy_547*Dummy_547)*4.0);
       const double Dummy_598 = Dummy_580;
       const double Dummy_599 = Dummy_581;
       const double Dummy_600 = Dummy_582;
       const double Dummy_601 = Dummy_583;
       const double Dummy_602 = Dummy_555;
       const double Dummy_603 = Dummy_580;
       const double Dummy_604 = Dummy_550*((Dummy_542*Dummy_542)*4.0 + (Dummy_545*Dummy_545)*4.0 + (Dummy_548*Dummy_548)*4.0);
       const double Dummy_605 = Dummy_584;
       const double Dummy_606 = Dummy_585;
       const double Dummy_607 = Dummy_586;
       const double Dummy_608 = Dummy_565;
       const double Dummy_609 = Dummy_581;
       const double Dummy_610 = Dummy_584;
       const double Dummy_611 = Dummy_550*((Dummy_558*Dummy_558) + (Dummy_561*Dummy_561) + (Dummy_564*Dummy_564));
       const double Dummy_612 = Dummy_587;
       const double Dummy_613 = Dummy_588;
       const double Dummy_614 = Dummy_575;
       const double Dummy_615 = Dummy_582;
       const double Dummy_616 = Dummy_585;
       const double Dummy_617 = Dummy_587;
       const double Dummy_618 = Dummy_550*((Dummy_568*Dummy_568) + (Dummy_571*Dummy_571) + (Dummy_574*Dummy_574));
       const double Dummy_619 = Dummy_589;
       const double Dummy_620 = Dummy_579;
       const double Dummy_621 = Dummy_583;
       const double Dummy_622 = Dummy_586;
       const double Dummy_623 = Dummy_588;
       const double Dummy_624 = Dummy_589;
       const double Dummy_625 = Dummy_550*((Dummy_576*Dummy_576) + (Dummy_577*Dummy_577) + (Dummy_578*Dummy_578));
       const double tmp_GREEN_UP_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_GREEN_UP_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_GREEN_UP_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_GREEN_UP_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_GREEN_UP_4 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_GREEN_UP_5 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_GREEN_UP_6 = tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double Dummy_626 = tmp_GREEN_UP_1;
       const double Dummy_627 = tmp_GREEN_UP_2;
       const double Dummy_628 = tmp_GREEN_UP_3;
       const double Dummy_629 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double Dummy_630 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double Dummy_631 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double Dummy_632 = macro_vertex_coord_id_0comp0 + tmp_GREEN_UP_4;
       const double Dummy_633 = macro_vertex_coord_id_0comp1 + tmp_GREEN_UP_5;
       const double Dummy_634 = macro_vertex_coord_id_0comp2 + tmp_GREEN_UP_6;
       const double Dummy_635 = tmp_GREEN_UP_1 + tmp_GREEN_UP_4;
       const double Dummy_636 = tmp_GREEN_UP_2 + tmp_GREEN_UP_5;
       const double Dummy_637 = tmp_GREEN_UP_3 + tmp_GREEN_UP_6;
       const double Dummy_638 = -Dummy_626 + Dummy_629;
       const double Dummy_639 = -Dummy_626 + Dummy_632;
       const double Dummy_640 = -Dummy_626 + Dummy_635;
       const double Dummy_641 = -Dummy_627 + Dummy_630;
       const double Dummy_642 = -Dummy_627 + Dummy_633;
       const double Dummy_643 = -Dummy_627 + Dummy_636;
       const double Dummy_644 = -Dummy_628 + Dummy_631;
       const double Dummy_645 = -Dummy_628 + Dummy_634;
       const double Dummy_646 = -Dummy_628 + Dummy_637;
       const double Dummy_647 = fabs(Dummy_638*Dummy_642*Dummy_646 - Dummy_638*Dummy_643*Dummy_645 - Dummy_639*Dummy_641*Dummy_646 + Dummy_639*Dummy_643*Dummy_644 + Dummy_640*Dummy_641*Dummy_645 - Dummy_640*Dummy_642*Dummy_644);
       const double Dummy_648 = 1.0 / (Dummy_647)*0.16666666666666666;
       const double Dummy_649 = Dummy_638*4.0;
       const double Dummy_650 = Dummy_641*4.0;
       const double Dummy_651 = Dummy_644*4.0;
       const double Dummy_652 = Dummy_648*(-Dummy_639*Dummy_649 - Dummy_642*Dummy_650 - Dummy_645*Dummy_651);
       const double Dummy_653 = Dummy_648*(Dummy_640*Dummy_649 + Dummy_643*Dummy_650 + Dummy_646*Dummy_651);
       const double Dummy_654 = Dummy_638*2.0;
       const double Dummy_655 = Dummy_639*2.0;
       const double Dummy_656 = -Dummy_654 + Dummy_655;
       const double Dummy_657 = Dummy_641*2.0;
       const double Dummy_658 = Dummy_642*2.0;
       const double Dummy_659 = -Dummy_657 + Dummy_658;
       const double Dummy_660 = Dummy_644*2.0;
       const double Dummy_661 = Dummy_645*2.0;
       const double Dummy_662 = -Dummy_660 + Dummy_661;
       const double Dummy_663 = Dummy_648*(Dummy_654*Dummy_656 + Dummy_657*Dummy_659 + Dummy_660*Dummy_662);
       const double Dummy_664 = Dummy_640*2.0;
       const double Dummy_665 = -Dummy_664;
       const double Dummy_666 = Dummy_654 + Dummy_665;
       const double Dummy_667 = Dummy_643*2.0;
       const double Dummy_668 = -Dummy_667;
       const double Dummy_669 = Dummy_657 + Dummy_668;
       const double Dummy_670 = Dummy_646*2.0;
       const double Dummy_671 = -Dummy_670;
       const double Dummy_672 = Dummy_660 + Dummy_671;
       const double Dummy_673 = Dummy_648*(Dummy_654*Dummy_666 + Dummy_657*Dummy_669 + Dummy_660*Dummy_672);
       const double Dummy_674 = -Dummy_655 - Dummy_665;
       const double Dummy_675 = -Dummy_658 - Dummy_668;
       const double Dummy_676 = -Dummy_661 - Dummy_671;
       const double Dummy_677 = Dummy_648*(Dummy_654*Dummy_674 + Dummy_657*Dummy_675 + Dummy_660*Dummy_676);
       const double Dummy_678 = Dummy_648*(Dummy_639*Dummy_640*-4.0 + Dummy_642*Dummy_643*-4.0 + Dummy_645*Dummy_646*-4.0);
       const double Dummy_679 = Dummy_648*(-Dummy_655*Dummy_656 - Dummy_658*Dummy_659 - Dummy_661*Dummy_662);
       const double Dummy_680 = Dummy_648*(-Dummy_655*Dummy_666 - Dummy_658*Dummy_669 - Dummy_661*Dummy_672);
       const double Dummy_681 = Dummy_648*(-Dummy_655*Dummy_674 - Dummy_658*Dummy_675 - Dummy_661*Dummy_676);
       const double Dummy_682 = Dummy_648*(Dummy_656*Dummy_664 + Dummy_659*Dummy_667 + Dummy_662*Dummy_670);
       const double Dummy_683 = Dummy_648*(Dummy_664*Dummy_666 + Dummy_667*Dummy_669 + Dummy_670*Dummy_672);
       const double Dummy_684 = Dummy_648*(Dummy_664*Dummy_674 + Dummy_667*Dummy_675 + Dummy_670*Dummy_676);
       const double Dummy_685 = Dummy_648*(Dummy_656*Dummy_666 + Dummy_659*Dummy_669 + Dummy_662*Dummy_672);
       const double Dummy_686 = Dummy_648*(Dummy_656*Dummy_674 + Dummy_659*Dummy_675 + Dummy_662*Dummy_676);
       const double Dummy_687 = Dummy_648*(Dummy_666*Dummy_674 + Dummy_669*Dummy_675 + Dummy_672*Dummy_676);
       const double Dummy_688 = Dummy_648*((Dummy_638*Dummy_638)*4.0 + (Dummy_641*Dummy_641)*4.0 + (Dummy_644*Dummy_644)*4.0);
       const double Dummy_689 = Dummy_652;
       const double Dummy_690 = Dummy_653;
       const double Dummy_691 = Dummy_663;
       const double Dummy_692 = Dummy_673;
       const double Dummy_693 = Dummy_677;
       const double Dummy_694 = Dummy_652;
       const double Dummy_695 = Dummy_648*((Dummy_639*Dummy_639)*4.0 + (Dummy_642*Dummy_642)*4.0 + (Dummy_645*Dummy_645)*4.0);
       const double Dummy_696 = Dummy_678;
       const double Dummy_697 = Dummy_679;
       const double Dummy_698 = Dummy_680;
       const double Dummy_699 = Dummy_681;
       const double Dummy_700 = Dummy_653;
       const double Dummy_701 = Dummy_678;
       const double Dummy_702 = Dummy_648*((Dummy_640*Dummy_640)*4.0 + (Dummy_643*Dummy_643)*4.0 + (Dummy_646*Dummy_646)*4.0);
       const double Dummy_703 = Dummy_682;
       const double Dummy_704 = Dummy_683;
       const double Dummy_705 = Dummy_684;
       const double Dummy_706 = Dummy_663;
       const double Dummy_707 = Dummy_679;
       const double Dummy_708 = Dummy_682;
       const double Dummy_709 = Dummy_648*((Dummy_656*Dummy_656) + (Dummy_659*Dummy_659) + (Dummy_662*Dummy_662));
       const double Dummy_710 = Dummy_685;
       const double Dummy_711 = Dummy_686;
       const double Dummy_712 = Dummy_673;
       const double Dummy_713 = Dummy_680;
       const double Dummy_714 = Dummy_683;
       const double Dummy_715 = Dummy_685;
       const double Dummy_716 = Dummy_648*((Dummy_666*Dummy_666) + (Dummy_669*Dummy_669) + (Dummy_672*Dummy_672));
       const double Dummy_717 = Dummy_687;
       const double Dummy_718 = Dummy_677;
       const double Dummy_719 = Dummy_681;
       const double Dummy_720 = Dummy_684;
       const double Dummy_721 = Dummy_686;
       const double Dummy_722 = Dummy_687;
       const double Dummy_723 = Dummy_648*((Dummy_674*Dummy_674) + (Dummy_675*Dummy_675) + (Dummy_676*Dummy_676));
       const double tmp_GREEN_DOWN_0 = 1.0 / (micro_edges_per_macro_edge_float)*1.0;
       const double tmp_GREEN_DOWN_1 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_2comp0);
       const double tmp_GREEN_DOWN_2 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_2comp1);
       const double tmp_GREEN_DOWN_3 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_2comp2);
       const double tmp_GREEN_DOWN_4 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_1comp0);
       const double tmp_GREEN_DOWN_5 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_1comp1);
       const double tmp_GREEN_DOWN_6 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_1comp2);
       const double tmp_GREEN_DOWN_7 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp0 + macro_vertex_coord_id_3comp0);
       const double tmp_GREEN_DOWN_8 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp1 + macro_vertex_coord_id_3comp1);
       const double tmp_GREEN_DOWN_9 = tmp_GREEN_DOWN_0*(-macro_vertex_coord_id_0comp2 + macro_vertex_coord_id_3comp2);
       const double Dummy_724 = tmp_GREEN_DOWN_1;
       const double Dummy_725 = tmp_GREEN_DOWN_2;
       const double Dummy_726 = tmp_GREEN_DOWN_3;
       const double Dummy_727 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_4;
       const double Dummy_728 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_5;
       const double Dummy_729 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_6;
       const double Dummy_730 = macro_vertex_coord_id_0comp0 + tmp_GREEN_DOWN_4 + tmp_GREEN_DOWN_7;
       const double Dummy_731 = macro_vertex_coord_id_0comp1 + tmp_GREEN_DOWN_5 + tmp_GREEN_DOWN_8;
       const double Dummy_732 = macro_vertex_coord_id_0comp2 + tmp_GREEN_DOWN_6 + tmp_GREEN_DOWN_9;
       const double Dummy_733 = tmp_GREEN_DOWN_1 + tmp_GREEN_DOWN_7;
       const double Dummy_734 = tmp_GREEN_DOWN_2 + tmp_GREEN_DOWN_8;
       const double Dummy_735 = tmp_GREEN_DOWN_3 + tmp_GREEN_DOWN_9;
       const double Dummy_736 = -Dummy_724 + Dummy_727;
       const double Dummy_737 = -Dummy_724 + Dummy_730;
       const double Dummy_738 = -Dummy_724 + Dummy_733;
       const double Dummy_739 = -Dummy_725 + Dummy_728;
       const double Dummy_740 = -Dummy_725 + Dummy_731;
       const double Dummy_741 = -Dummy_725 + Dummy_734;
       const double Dummy_742 = -Dummy_726 + Dummy_729;
       const double Dummy_743 = -Dummy_726 + Dummy_732;
       const double Dummy_744 = -Dummy_726 + Dummy_735;
       const double Dummy_745 = fabs(Dummy_736*Dummy_740*Dummy_744 - Dummy_736*Dummy_741*Dummy_743 - Dummy_737*Dummy_739*Dummy_744 + Dummy_737*Dummy_741*Dummy_742 + Dummy_738*Dummy_739*Dummy_743 - Dummy_738*Dummy_740*Dummy_742);
       const double Dummy_746 = 1.0 / (Dummy_745)*0.16666666666666666;
       const double Dummy_747 = Dummy_736*4.0;
       const double Dummy_748 = Dummy_739*4.0;
       const double Dummy_749 = Dummy_742*4.0;
       const double Dummy_750 = Dummy_746*(-Dummy_737*Dummy_747 - Dummy_740*Dummy_748 - Dummy_743*Dummy_749);
       const double Dummy_751 = Dummy_746*(Dummy_738*Dummy_747 + Dummy_741*Dummy_748 + Dummy_744*Dummy_749);
       const double Dummy_752 = Dummy_736*2.0;
       const double Dummy_753 = Dummy_737*2.0;
       const double Dummy_754 = -Dummy_752 + Dummy_753;
       const double Dummy_755 = Dummy_739*2.0;
       const double Dummy_756 = Dummy_740*2.0;
       const double Dummy_757 = -Dummy_755 + Dummy_756;
       const double Dummy_758 = Dummy_742*2.0;
       const double Dummy_759 = Dummy_743*2.0;
       const double Dummy_760 = -Dummy_758 + Dummy_759;
       const double Dummy_761 = Dummy_746*(Dummy_752*Dummy_754 + Dummy_755*Dummy_757 + Dummy_758*Dummy_760);
       const double Dummy_762 = Dummy_738*2.0;
       const double Dummy_763 = -Dummy_762;
       const double Dummy_764 = Dummy_752 + Dummy_763;
       const double Dummy_765 = Dummy_741*2.0;
       const double Dummy_766 = -Dummy_765;
       const double Dummy_767 = Dummy_755 + Dummy_766;
       const double Dummy_768 = Dummy_744*2.0;
       const double Dummy_769 = -Dummy_768;
       const double Dummy_770 = Dummy_758 + Dummy_769;
       const double Dummy_771 = Dummy_746*(Dummy_752*Dummy_764 + Dummy_755*Dummy_767 + Dummy_758*Dummy_770);
       const double Dummy_772 = -Dummy_753 - Dummy_763;
       const double Dummy_773 = -Dummy_756 - Dummy_766;
       const double Dummy_774 = -Dummy_759 - Dummy_769;
       const double Dummy_775 = Dummy_746*(Dummy_752*Dummy_772 + Dummy_755*Dummy_773 + Dummy_758*Dummy_774);
       const double Dummy_776 = Dummy_746*(Dummy_737*Dummy_738*-4.0 + Dummy_740*Dummy_741*-4.0 + Dummy_743*Dummy_744*-4.0);
       const double Dummy_777 = Dummy_746*(-Dummy_753*Dummy_754 - Dummy_756*Dummy_757 - Dummy_759*Dummy_760);
       const double Dummy_778 = Dummy_746*(-Dummy_753*Dummy_764 - Dummy_756*Dummy_767 - Dummy_759*Dummy_770);
       const double Dummy_779 = Dummy_746*(-Dummy_753*Dummy_772 - Dummy_756*Dummy_773 - Dummy_759*Dummy_774);
       const double Dummy_780 = Dummy_746*(Dummy_754*Dummy_762 + Dummy_757*Dummy_765 + Dummy_760*Dummy_768);
       const double Dummy_781 = Dummy_746*(Dummy_762*Dummy_764 + Dummy_765*Dummy_767 + Dummy_768*Dummy_770);
       const double Dummy_782 = Dummy_746*(Dummy_762*Dummy_772 + Dummy_765*Dummy_773 + Dummy_768*Dummy_774);
       const double Dummy_783 = Dummy_746*(Dummy_754*Dummy_764 + Dummy_757*Dummy_767 + Dummy_760*Dummy_770);
       const double Dummy_784 = Dummy_746*(Dummy_754*Dummy_772 + Dummy_757*Dummy_773 + Dummy_760*Dummy_774);
       const double Dummy_785 = Dummy_746*(Dummy_764*Dummy_772 + Dummy_767*Dummy_773 + Dummy_770*Dummy_774);
       const double Dummy_786 = Dummy_746*((Dummy_736*Dummy_736)*4.0 + (Dummy_739*Dummy_739)*4.0 + (Dummy_742*Dummy_742)*4.0);
       const double Dummy_787 = Dummy_750;
       const double Dummy_788 = Dummy_751;
       const double Dummy_789 = Dummy_761;
       const double Dummy_790 = Dummy_771;
       const double Dummy_791 = Dummy_775;
       const double Dummy_792 = Dummy_750;
       const double Dummy_793 = Dummy_746*((Dummy_737*Dummy_737)*4.0 + (Dummy_740*Dummy_740)*4.0 + (Dummy_743*Dummy_743)*4.0);
       const double Dummy_794 = Dummy_776;
       const double Dummy_795 = Dummy_777;
       const double Dummy_796 = Dummy_778;
       const double Dummy_797 = Dummy_779;
       const double Dummy_798 = Dummy_751;
       const double Dummy_799 = Dummy_776;
       const double Dummy_800 = Dummy_746*((Dummy_738*Dummy_738)*4.0 + (Dummy_741*Dummy_741)*4.0 + (Dummy_744*Dummy_744)*4.0);
       const double Dummy_801 = Dummy_780;
       const double Dummy_802 = Dummy_781;
       const double Dummy_803 = Dummy_782;
       const double Dummy_804 = Dummy_761;
       const double Dummy_805 = Dummy_777;
       const double Dummy_806 = Dummy_780;
       const double Dummy_807 = Dummy_746*((Dummy_754*Dummy_754) + (Dummy_757*Dummy_757) + (Dummy_760*Dummy_760));
       const double Dummy_808 = Dummy_783;
       const double Dummy_809 = Dummy_784;
       const double Dummy_810 = Dummy_771;
       const double Dummy_811 = Dummy_778;
       const double Dummy_812 = Dummy_781;
       const double Dummy_813 = Dummy_783;
       const double Dummy_814 = Dummy_746*((Dummy_764*Dummy_764) + (Dummy_767*Dummy_767) + (Dummy_770*Dummy_770));
       const double Dummy_815 = Dummy_785;
       const double Dummy_816 = Dummy_775;
       const double Dummy_817 = Dummy_779;
       const double Dummy_818 = Dummy_782;
       const double Dummy_819 = Dummy_784;
       const double Dummy_820 = Dummy_785;
       const double Dummy_821 = Dummy_746*((Dummy_772*Dummy_772) + (Dummy_773*Dummy_773) + (Dummy_774*Dummy_774));
       {
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< double > _data_mat( 36 );
         
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
         
             _data_mat[0] = (basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0))*elMat_0_0;
             _data_mat[1] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*elMat_0_1;
             _data_mat[2] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*elMat_0_2;
             _data_mat[3] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*elMat_0_3;
             _data_mat[4] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*elMat_0_4;
             _data_mat[5] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*elMat_0_5;
             _data_mat[6] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1)*elMat_1_0;
             _data_mat[7] = (basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1))*elMat_1_1;
             _data_mat[8] = basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*elMat_1_2;
             _data_mat[9] = basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*elMat_1_3;
             _data_mat[10] = basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*elMat_1_4;
             _data_mat[11] = basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*elMat_1_5;
             _data_mat[12] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2)*elMat_2_0;
             _data_mat[13] = basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2)*elMat_2_1;
             _data_mat[14] = (basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2))*elMat_2_2;
             _data_mat[15] = basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*elMat_2_3;
             _data_mat[16] = basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*elMat_2_4;
             _data_mat[17] = basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*elMat_2_5;
             _data_mat[18] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3)*elMat_3_0;
             _data_mat[19] = basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3)*elMat_3_1;
             _data_mat[20] = basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3)*elMat_3_2;
             _data_mat[21] = (basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3))*elMat_3_3;
             _data_mat[22] = basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*elMat_3_4;
             _data_mat[23] = basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*elMat_3_5;
             _data_mat[24] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4)*elMat_4_0;
             _data_mat[25] = basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4)*elMat_4_1;
             _data_mat[26] = basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4)*elMat_4_2;
             _data_mat[27] = basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4)*elMat_4_3;
             _data_mat[28] = (basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4))*elMat_4_4;
             _data_mat[29] = basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*elMat_4_5;
             _data_mat[30] = basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5)*elMat_5_0;
             _data_mat[31] = basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5)*elMat_5_1;
             _data_mat[32] = basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5)*elMat_5_2;
             _data_mat[33] = basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5)*elMat_5_3;
             _data_mat[34] = basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5)*elMat_5_4;
             _data_mat[35] = (basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5))*elMat_5_5;
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 2; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< double > _data_mat( 36 );
         
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
         
             _data_mat[0] = Dummy_394*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0));
             _data_mat[1] = Dummy_395*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[2] = Dummy_396*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[3] = Dummy_397*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[4] = Dummy_398*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[5] = Dummy_399*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[6] = Dummy_400*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[7] = Dummy_401*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1));
             _data_mat[8] = Dummy_402*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[9] = Dummy_403*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[10] = Dummy_404*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[11] = Dummy_405*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[12] = Dummy_406*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[13] = Dummy_407*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[14] = Dummy_408*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2));
             _data_mat[15] = Dummy_409*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[16] = Dummy_410*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[17] = Dummy_411*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[18] = Dummy_412*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[19] = Dummy_413*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[20] = Dummy_414*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[21] = Dummy_415*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3));
             _data_mat[22] = Dummy_416*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[23] = Dummy_417*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[24] = Dummy_418*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[25] = Dummy_419*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[26] = Dummy_420*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[27] = Dummy_421*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[28] = Dummy_422*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4));
             _data_mat[29] = Dummy_423*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[30] = Dummy_424*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[31] = Dummy_425*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[32] = Dummy_426*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[33] = Dummy_427*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[34] = Dummy_428*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[35] = Dummy_429*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< double > _data_mat( 36 );
         
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
         
             _data_mat[0] = Dummy_492*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0));
             _data_mat[1] = Dummy_493*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[2] = Dummy_494*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[3] = Dummy_495*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[4] = Dummy_496*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[5] = Dummy_497*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[6] = Dummy_498*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[7] = Dummy_499*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1));
             _data_mat[8] = Dummy_500*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[9] = Dummy_501*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[10] = Dummy_502*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[11] = Dummy_503*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[12] = Dummy_504*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[13] = Dummy_505*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[14] = Dummy_506*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2));
             _data_mat[15] = Dummy_507*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[16] = Dummy_508*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[17] = Dummy_509*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[18] = Dummy_510*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[19] = Dummy_511*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[20] = Dummy_512*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[21] = Dummy_513*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3));
             _data_mat[22] = Dummy_514*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[23] = Dummy_515*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[24] = Dummy_516*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[25] = Dummy_517*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[26] = Dummy_518*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[27] = Dummy_519*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[28] = Dummy_520*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4));
             _data_mat[29] = Dummy_521*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[30] = Dummy_522*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[31] = Dummy_523*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[32] = Dummy_524*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[33] = Dummy_525*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[34] = Dummy_526*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[35] = Dummy_527*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< double > _data_mat( 36 );
         
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
         
             _data_mat[0] = Dummy_590*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0));
             _data_mat[1] = Dummy_591*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[2] = Dummy_592*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[3] = Dummy_593*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[4] = Dummy_594*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[5] = Dummy_595*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[6] = Dummy_596*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[7] = Dummy_597*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1));
             _data_mat[8] = Dummy_598*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[9] = Dummy_599*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[10] = Dummy_600*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[11] = Dummy_601*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[12] = Dummy_602*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[13] = Dummy_603*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[14] = Dummy_604*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2));
             _data_mat[15] = Dummy_605*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[16] = Dummy_606*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[17] = Dummy_607*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[18] = Dummy_608*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[19] = Dummy_609*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[20] = Dummy_610*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[21] = Dummy_611*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3));
             _data_mat[22] = Dummy_612*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[23] = Dummy_613*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[24] = Dummy_614*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[25] = Dummy_615*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[26] = Dummy_616*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[27] = Dummy_617*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[28] = Dummy_618*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4));
             _data_mat[29] = Dummy_619*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[30] = Dummy_620*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[31] = Dummy_621*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[32] = Dummy_622*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[33] = Dummy_623*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[34] = Dummy_624*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[35] = Dummy_625*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< double > _data_mat( 36 );
         
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
         
             _data_mat[0] = Dummy_688*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0));
             _data_mat[1] = Dummy_689*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[2] = Dummy_690*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[3] = Dummy_691*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[4] = Dummy_692*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[5] = Dummy_693*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[6] = Dummy_694*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[7] = Dummy_695*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1));
             _data_mat[8] = Dummy_696*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[9] = Dummy_697*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[10] = Dummy_698*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[11] = Dummy_699*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[12] = Dummy_700*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[13] = Dummy_701*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[14] = Dummy_702*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2));
             _data_mat[15] = Dummy_703*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[16] = Dummy_704*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[17] = Dummy_705*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[18] = Dummy_706*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[19] = Dummy_707*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[20] = Dummy_708*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[21] = Dummy_709*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3));
             _data_mat[22] = Dummy_710*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[23] = Dummy_711*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[24] = Dummy_712*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[25] = Dummy_713*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[26] = Dummy_714*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[27] = Dummy_715*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[28] = Dummy_716*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4));
             _data_mat[29] = Dummy_717*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[30] = Dummy_718*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[31] = Dummy_719*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[32] = Dummy_720*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[33] = Dummy_721*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[34] = Dummy_722*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[35] = Dummy_723*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
          for (int64_t ctr_2 = 0; ctr_2 < micro_edges_per_macro_edge; ctr_2 += 1)
          for (int64_t ctr_1 = 0; ctr_1 < -ctr_2 + micro_edges_per_macro_edge; ctr_1 += 1)
          for (int64_t ctr_0 = 0; ctr_0 < -ctr_1 - ctr_2 + micro_edges_per_macro_edge - 1; ctr_0 += 1)
          {
         
             std::vector< uint_t > _data_rowIdx( 6 );
             std::vector< uint_t > _data_colIdx( 6 );
             std::vector< double > _data_mat( 36 );
         
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
         
             _data_mat[0] = Dummy_786*(basisTransformation.diagonal()(0)*basisTransformation.diagonal()(0));
             _data_mat[1] = Dummy_787*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[2] = Dummy_788*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[3] = Dummy_789*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[4] = Dummy_790*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[5] = Dummy_791*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[6] = Dummy_792*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(1);
             _data_mat[7] = Dummy_793*(basisTransformation.diagonal()(1)*basisTransformation.diagonal()(1));
             _data_mat[8] = Dummy_794*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[9] = Dummy_795*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[10] = Dummy_796*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[11] = Dummy_797*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[12] = Dummy_798*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(2);
             _data_mat[13] = Dummy_799*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(2);
             _data_mat[14] = Dummy_800*(basisTransformation.diagonal()(2)*basisTransformation.diagonal()(2));
             _data_mat[15] = Dummy_801*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[16] = Dummy_802*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[17] = Dummy_803*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[18] = Dummy_804*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(3);
             _data_mat[19] = Dummy_805*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(3);
             _data_mat[20] = Dummy_806*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(3);
             _data_mat[21] = Dummy_807*(basisTransformation.diagonal()(3)*basisTransformation.diagonal()(3));
             _data_mat[22] = Dummy_808*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[23] = Dummy_809*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[24] = Dummy_810*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(4);
             _data_mat[25] = Dummy_811*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(4);
             _data_mat[26] = Dummy_812*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(4);
             _data_mat[27] = Dummy_813*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(4);
             _data_mat[28] = Dummy_814*(basisTransformation.diagonal()(4)*basisTransformation.diagonal()(4));
             _data_mat[29] = Dummy_815*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[30] = Dummy_816*basisTransformation.diagonal()(0)*basisTransformation.diagonal()(5);
             _data_mat[31] = Dummy_817*basisTransformation.diagonal()(1)*basisTransformation.diagonal()(5);
             _data_mat[32] = Dummy_818*basisTransformation.diagonal()(2)*basisTransformation.diagonal()(5);
             _data_mat[33] = Dummy_819*basisTransformation.diagonal()(3)*basisTransformation.diagonal()(5);
             _data_mat[34] = Dummy_820*basisTransformation.diagonal()(4)*basisTransformation.diagonal()(5);
             _data_mat[35] = Dummy_821*(basisTransformation.diagonal()(5)*basisTransformation.diagonal()(5));
         
         
             mat->addValues( _data_rowIdx, _data_colIdx, _data_mat );
          }
       }
    }
}
} // namespace operatorgeneration

} // namespace hyteg
