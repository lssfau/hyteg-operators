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
#include "hyteg/p2functionspace/P2VectorFunction.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// "Epsilon" operator.
///
/// Geometry map:    AnnulusMap
///
/// Weak formulation
///
///     u: trial function (vectorial space: TensorialVectorSpace(Lagrange, degree: 2))
///     v: test function  (vectorial space: TensorialVectorSpace(Lagrange, degree: 2))
///     μ: coefficient    (scalar space:    Lagrange, degree: 1)
///
///     ∫ 2 μ ε(u) : ε(v)
///
/// where
///
///     ε(w) := (1/2) (∇w + (∇w)ᵀ)

class P2VectorElementwiseEpsilonP1ViscosityAnnulusMap : public Operator< P2VectorFunction< real_t >, P2VectorFunction< real_t > >,
                                                        public OperatorWithInverseDiagonal< P2VectorFunction< real_t > >
{
 public:
   P2VectorElementwiseEpsilonP1ViscosityAnnulusMap( const std::shared_ptr< PrimitiveStorage >& storage,
                                                    size_t                                     minLevel,
                                                    size_t                                     maxLevel,
                                                    const P1Function< real_t >&                _mu );

   void apply( const P2VectorFunction< real_t >& src,
               const P2VectorFunction< real_t >& dst,
               uint_t                            level,
               DoFType                           flag,
               UpdateType                        updateType = Replace ) const;

   void toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                  const P2VectorFunction< idx_t >&            src,
                  const P2VectorFunction< idx_t >&            dst,
                  uint_t                                      level,
                  DoFType                                     flag ) const;

   void computeInverseDiagonalOperatorValues();

   std::shared_ptr< P2VectorFunction< real_t > > getInverseDiagonalValues() const;

 protected:
 private:
   /// Integral: P2VectorElementwiseEpsilonP1ViscosityAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1572    1908      20      12      0              0                 0              1
   void apply_P2VectorElementwiseEpsilonP1ViscosityAnnulusMap_macro_2D( real_t* RESTRICT _data_dst_edge_0,
                                                                        real_t* RESTRICT _data_dst_edge_1,
                                                                        real_t* RESTRICT _data_dst_vertex_0,
                                                                        real_t* RESTRICT _data_dst_vertex_1,
                                                                        real_t* RESTRICT _data_mu,
                                                                        real_t* RESTRICT _data_src_edge_0,
                                                                        real_t* RESTRICT _data_src_edge_1,
                                                                        real_t* RESTRICT _data_src_vertex_0,
                                                                        real_t* RESTRICT _data_src_vertex_1,
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

   /// Integral: P2VectorElementwiseEpsilonP1ViscosityAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1428    1764      20      12      0              0                 0              4
   void toMatrix_P2VectorElementwiseEpsilonP1ViscosityAnnulusMap_macro_2D( idx_t* RESTRICT  _data_dst_edge_0,
                                                                           idx_t* RESTRICT  _data_dst_edge_1,
                                                                           idx_t* RESTRICT  _data_dst_vertex_0,
                                                                           idx_t* RESTRICT  _data_dst_vertex_1,
                                                                           real_t* RESTRICT _data_mu,
                                                                           idx_t* RESTRICT  _data_src_edge_0,
                                                                           idx_t* RESTRICT  _data_src_edge_1,
                                                                           idx_t* RESTRICT  _data_src_vertex_0,
                                                                           idx_t* RESTRICT  _data_src_vertex_1,
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
                                                                           real_t  thrVertex_1 ) const;

   /// Integral: P2VectorElementwiseEpsilonP1ViscosityAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    544     860      20      12      0              0                 0              1
   void computeInverseDiagonalOperatorValues_P2VectorElementwiseEpsilonP1ViscosityAnnulusMap_macro_2D(
       real_t* RESTRICT _data_invDiag__edge_0,
       real_t* RESTRICT _data_invDiag__edge_1,
       real_t* RESTRICT _data_invDiag__vertex_0,
       real_t* RESTRICT _data_invDiag__vertex_1,
       real_t* RESTRICT _data_mu,
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

   std::shared_ptr< P2VectorFunction< real_t > > invDiag_;
   P1Function< real_t >                          mu;
};

} // namespace operatorgeneration

} // namespace hyteg
