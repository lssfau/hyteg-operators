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

#pragma once

#include "core/DataTypes.h"

#include "hyteg/LikwidWrapper.hpp"
#include "hyteg/boundary/BoundaryConditions.hpp"
#include "hyteg/communication/Syncing.hpp"
#include "hyteg/edgedofspace/EdgeDoFMacroCell.hpp"
#include "hyteg/geometry/AnnulusMap.hpp"
#include "hyteg/operators/Operator.hpp"
#include "hyteg/p1functionspace/P1Function.hpp"
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

///     Diffusion inv rho operator for the TALA
///
///     Intended for LHS use.
///
///     Geometry map: AnnulusMap
///
///     Weak formulation
///
///         T: trial function (scalar space: Lagrange, degree: 2)
///         w: test function (scalar space: Lagrange, degree: 2)
///         rho: coefficient (scalar space: Lagrange, degree: 1)
///
///         - ∫ w/(rho*rho) ∇T · ∇rho
///
class P2ElementwiseDiffusionInvRhoAnnulusMap : public Operator< P2Function< real_t >, P2Function< real_t > >,
                                               public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseDiffusionInvRhoAnnulusMap( const std::shared_ptr< PrimitiveStorage >& storage,
                                           size_t                                     minLevel,
                                           size_t                                     maxLevel,
                                           const P1Function< real_t >&                _rho );

   void applyScaled( const real_t&               operatorScaling,
                     const P2Function< real_t >& src,
                     const P2Function< real_t >& dst,
                     uint_t                      level,
                     DoFType                     flag,
                     UpdateType                  updateType = Replace ) const;

   void apply( const P2Function< real_t >& src,
               const P2Function< real_t >& dst,
               uint_t                      level,
               DoFType                     flag,
               UpdateType                  updateType = Replace ) const;

   void toMatrixScaled( const real_t&                               toMatrixScaling,
                        const std::shared_ptr< SparseMatrixProxy >& mat,
                        const P2Function< idx_t >&                  src,
                        const P2Function< idx_t >&                  dst,
                        uint_t                                      level,
                        DoFType                                     flag ) const;

   void toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                  const P2Function< idx_t >&                  src,
                  const P2Function< idx_t >&                  dst,
                  uint_t                                      level,
                  DoFType                                     flag ) const;

   void computeInverseDiagonalOperatorValuesScaled( const real_t& diagScaling );

   void computeInverseDiagonalOperatorValues();

   std::shared_ptr< P2Function< real_t > > getInverseDiagonalValues() const;

 protected:
 private:
   /// Integral: P2ElementwiseDiffusionInvRhoAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 5 | points: 7, degree: 5
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    936    1382      33      21      0              0                 0              1
   void applyScaled_P2ElementwiseDiffusionInvRhoAnnulusMap_macro_2D( real_t* RESTRICT _data_dstEdge,
                                                                     real_t* RESTRICT _data_dstVertex,
                                                                     real_t* RESTRICT _data_rho,
                                                                     real_t* RESTRICT _data_srcEdge,
                                                                     real_t* RESTRICT _data_srcVertex,
                                                                     real_t           macro_vertex_coord_id_0comp0,
                                                                     real_t           macro_vertex_coord_id_0comp1,
                                                                     real_t           macro_vertex_coord_id_1comp0,
                                                                     real_t           macro_vertex_coord_id_1comp1,
                                                                     real_t           macro_vertex_coord_id_2comp0,
                                                                     real_t           macro_vertex_coord_id_2comp1,
                                                                     int64_t          micro_edges_per_macro_edge,
                                                                     real_t           micro_edges_per_macro_edge_float,
                                                                     real_t           operatorScaling,
                                                                     real_t           radRayVertex,
                                                                     real_t           radRefVertex,
                                                                     real_t           rayVertex_0,
                                                                     real_t           rayVertex_1,
                                                                     real_t           refVertex_0,
                                                                     real_t           refVertex_1,
                                                                     real_t           thrVertex_0,
                                                                     real_t           thrVertex_1 ) const;

   /// Integral: P2ElementwiseDiffusionInvRhoAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 5 | points: 7, degree: 5
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    900    1376      33      21      0              0                 0              4
   void toMatrixScaled_P2ElementwiseDiffusionInvRhoAnnulusMap_macro_2D( idx_t* RESTRICT  _data_dstEdge,
                                                                        idx_t* RESTRICT  _data_dstVertex,
                                                                        real_t* RESTRICT _data_rho,
                                                                        idx_t* RESTRICT  _data_srcEdge,
                                                                        idx_t* RESTRICT  _data_srcVertex,
                                                                        real_t           macro_vertex_coord_id_0comp0,
                                                                        real_t           macro_vertex_coord_id_0comp1,
                                                                        real_t           macro_vertex_coord_id_1comp0,
                                                                        real_t           macro_vertex_coord_id_1comp1,
                                                                        real_t           macro_vertex_coord_id_2comp0,
                                                                        real_t           macro_vertex_coord_id_2comp1,
                                                                        std::shared_ptr< SparseMatrixProxy > mat,
                                                                        int64_t micro_edges_per_macro_edge,
                                                                        real_t  micro_edges_per_macro_edge_float,
                                                                        real_t  radRayVertex,
                                                                        real_t  radRefVertex,
                                                                        real_t  rayVertex_0,
                                                                        real_t  rayVertex_1,
                                                                        real_t  refVertex_0,
                                                                        real_t  refVertex_1,
                                                                        real_t  thrVertex_0,
                                                                        real_t  thrVertex_1,
                                                                        real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseDiffusionInvRhoAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 5 | points: 7, degree: 5
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    696    1136      33      21      0              0                 0              1
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseDiffusionInvRhoAnnulusMap_macro_2D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_rho,
       real_t           diagScaling,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float,
       real_t           radRayVertex,
       real_t           radRefVertex,
       real_t           rayVertex_0,
       real_t           rayVertex_1,
       real_t           refVertex_0,
       real_t           refVertex_1,
       real_t           thrVertex_0,
       real_t           thrVertex_1 ) const;

   std::shared_ptr< P2Function< real_t > > invDiag_;
   P1Function< real_t >                    rho;
};

} // namespace operatorgeneration

} // namespace hyteg
