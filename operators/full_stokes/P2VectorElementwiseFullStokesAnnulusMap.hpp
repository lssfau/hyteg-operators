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
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/p2functionspace/P2VectorFunction.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Implements the fully coupled viscous operator of the Stokes problem.
/// The latter is the extension of the Epsilon operator to the case where
/// the velocity field need not be divergence-free. This is e.g. the case
/// in the (truncated) anelastic liquid approximation of mantle convection.
///
/// The strong representation of the operator is given by:
///
///    - div[ μ (grad(u)+grad(u)ᵀ) ] + 2/3 grad[ μ div(u) ]
///
/// Note that the factor 2/3 means that for 2D this is the pseudo-3D form
/// of the operator.
///
/// Component trial: 0
/// Component test:  0
/// Geometry map:    AnnulusMap
///
/// Weak formulation
///
///     u: trial function (vectorial space: TensorialVectorSpace(Lagrange, degree: 2))
///     v: test function  (vectorial space: TensorialVectorSpace(Lagrange, degree: 2))
///     μ: coefficient    (scalar space:    Lagrange, degree: 2)
///
///     ∫ μ { ( 2 ε(u) : ε(v) ) - (2/3) [ ( ∇ · u ) · ( ∇ · v ) ] }
///
/// where
///
///     ε(w) := (1/2) (∇w + (∇w)ᵀ)

class P2VectorElementwiseFullStokesAnnulusMap : public Operator< P2VectorFunction< real_t >, P2VectorFunction< real_t > >,
                                                public OperatorWithInverseDiagonal< P2VectorFunction< real_t > >
{
 public:
   P2VectorElementwiseFullStokesAnnulusMap( const std::shared_ptr< PrimitiveStorage >& storage,
                                            size_t                                     minLevel,
                                            size_t                                     maxLevel,
                                            const P2Function< real_t >&                _mu );

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
   /// Integral: P2VectorElementwiseFullStokesAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   2160    2560      20      12      0              0                 0              1
   void apply_P2VectorElementwiseFullStokesAnnulusMap_macro_2D( real_t* RESTRICT _data_dst_edge_0,
                                                                real_t* RESTRICT _data_dst_edge_1,
                                                                real_t* RESTRICT _data_dst_vertex_0,
                                                                real_t* RESTRICT _data_dst_vertex_1,
                                                                real_t* RESTRICT _data_muEdge,
                                                                real_t* RESTRICT _data_muVertex,
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

   /// Integral: P2VectorElementwiseFullStokesAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   2016    2416      20      12      0              0                 0              4
   void toMatrix_P2VectorElementwiseFullStokesAnnulusMap_macro_2D( idx_t* RESTRICT  _data_dst_edge_0,
                                                                   idx_t* RESTRICT  _data_dst_edge_1,
                                                                   idx_t* RESTRICT  _data_dst_vertex_0,
                                                                   idx_t* RESTRICT  _data_dst_vertex_1,
                                                                   real_t* RESTRICT _data_muEdge,
                                                                   real_t* RESTRICT _data_muVertex,
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

   /// Integral: P2VectorElementwiseFullStokesAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    972    1280      20      12      0              0                 0              1
   void computeInverseDiagonalOperatorValues_P2VectorElementwiseFullStokesAnnulusMap_macro_2D(
       real_t* RESTRICT _data_invDiag__edge_0,
       real_t* RESTRICT _data_invDiag__edge_1,
       real_t* RESTRICT _data_invDiag__vertex_0,
       real_t* RESTRICT _data_invDiag__vertex_1,
       real_t* RESTRICT _data_muEdge,
       real_t* RESTRICT _data_muVertex,
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
   P2Function< real_t >                          mu;
};

} // namespace operatorgeneration

} // namespace hyteg
