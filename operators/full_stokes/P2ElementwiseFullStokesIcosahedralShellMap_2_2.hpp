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
* The entire file was generated with the HyTeG form generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/

#pragma once

#include "core/DataTypes.h"

#include "hyteg/LikwidWrapper.hpp"
#include "hyteg/communication/Syncing.hpp"
#include "hyteg/edgedofspace/EdgeDoFMacroCell.hpp"
#include "hyteg/geometry/IcosahedralShellMap.hpp"
#include "hyteg/operators/Operator.hpp"
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"

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
/// Component trial: 2
/// Component test:  2
/// Geometry map:    IcosahedralShellMap
///
/// Weak formulation
///
///     u: trial function (vectorial space: Lagrange, degree: 2)
///     v: test function  (vectorial space: Lagrange, degree: 2)
///     μ: coefficient    (scalar space:    Lagrange, degree: 2)
///
///     ∫ μ { ( 2 ε(u) : ε(v) ) - (2/3) [ ( ∇ · u ) · ( ∇ · v ) ] }
///
/// where
///
///     ε(w) := (1/2) (∇w + (∇w)ᵀ)

class P2ElementwiseFullStokesIcosahedralShellMap_2_2 : public Operator< P2Function< real_t >, P2Function< real_t > >,
                                                       public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseFullStokesIcosahedralShellMap_2_2( const std::shared_ptr< PrimitiveStorage >& storage,
                                                   size_t                                     minLevel,
                                                   size_t                                     maxLevel,
                                                   const P2Function< real_t >&                _mu );

   void apply( const P2Function< real_t >& src,
               const P2Function< real_t >& dst,
               uint_t                      level,
               DoFType                     flag,
               UpdateType                  updateType = Replace ) const;

   void toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                  const P2Function< idx_t >&                  src,
                  const P2Function< idx_t >&                  dst,
                  uint_t                                      level,
                  DoFType                                     flag ) const;

   void computeInverseDiagonalOperatorValues();

   std::shared_ptr< P2Function< real_t > > getInverseDiagonalValues() const;

 protected:
 private:
   /// Kernel type: apply
   /// - quadrature rule: Hammer-Marlowe-Stroud 3 | points: 5, degree: 3
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   3098    4227      56       5      5              0                 0              1
   void apply_macro_3D( real_t* RESTRICT _data_dstEdge,
                        real_t* RESTRICT _data_dstVertex,
                        real_t* RESTRICT _data_muEdge,
                        real_t* RESTRICT _data_muVertex,
                        real_t* RESTRICT _data_srcEdge,
                        real_t* RESTRICT _data_srcVertex,
                        real_t           forVertex_0,
                        real_t           forVertex_1,
                        real_t           forVertex_2,
                        real_t           macro_vertex_coord_id_0comp0,
                        real_t           macro_vertex_coord_id_0comp1,
                        real_t           macro_vertex_coord_id_0comp2,
                        real_t           macro_vertex_coord_id_1comp0,
                        real_t           macro_vertex_coord_id_1comp1,
                        real_t           macro_vertex_coord_id_1comp2,
                        real_t           macro_vertex_coord_id_2comp0,
                        real_t           macro_vertex_coord_id_2comp1,
                        real_t           macro_vertex_coord_id_2comp2,
                        real_t           macro_vertex_coord_id_3comp0,
                        real_t           macro_vertex_coord_id_3comp1,
                        real_t           macro_vertex_coord_id_3comp2,
                        int64_t          micro_edges_per_macro_edge,
                        real_t           micro_edges_per_macro_edge_float,
                        real_t           radRayVertex,
                        real_t           radRefVertex,
                        real_t           rayVertex_0,
                        real_t           rayVertex_1,
                        real_t           rayVertex_2,
                        real_t           refVertex_0,
                        real_t           refVertex_1,
                        real_t           refVertex_2,
                        real_t           thrVertex_0,
                        real_t           thrVertex_1,
                        real_t           thrVertex_2 ) const;
   /// Kernel type: toMatrix
   /// - quadrature rule: Hammer-Marlowe-Stroud 3 | points: 5, degree: 3
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   2998    4127      56       5      5              0                 0              4
   void toMatrix_macro_3D( idx_t* RESTRICT                      _data_dstEdge,
                           idx_t* RESTRICT                      _data_dstVertex,
                           real_t* RESTRICT                     _data_muEdge,
                           real_t* RESTRICT                     _data_muVertex,
                           idx_t* RESTRICT                      _data_srcEdge,
                           idx_t* RESTRICT                      _data_srcVertex,
                           real_t                               forVertex_0,
                           real_t                               forVertex_1,
                           real_t                               forVertex_2,
                           real_t                               macro_vertex_coord_id_0comp0,
                           real_t                               macro_vertex_coord_id_0comp1,
                           real_t                               macro_vertex_coord_id_0comp2,
                           real_t                               macro_vertex_coord_id_1comp0,
                           real_t                               macro_vertex_coord_id_1comp1,
                           real_t                               macro_vertex_coord_id_1comp2,
                           real_t                               macro_vertex_coord_id_2comp0,
                           real_t                               macro_vertex_coord_id_2comp1,
                           real_t                               macro_vertex_coord_id_2comp2,
                           real_t                               macro_vertex_coord_id_3comp0,
                           real_t                               macro_vertex_coord_id_3comp1,
                           real_t                               macro_vertex_coord_id_3comp2,
                           std::shared_ptr< SparseMatrixProxy > mat,
                           int64_t                              micro_edges_per_macro_edge,
                           real_t                               micro_edges_per_macro_edge_float,
                           real_t                               radRayVertex,
                           real_t                               radRefVertex,
                           real_t                               rayVertex_0,
                           real_t                               rayVertex_1,
                           real_t                               rayVertex_2,
                           real_t                               refVertex_0,
                           real_t                               refVertex_1,
                           real_t                               refVertex_2,
                           real_t                               thrVertex_0,
                           real_t                               thrVertex_1,
                           real_t                               thrVertex_2 ) const;
   /// Kernel type: computeInverseDiagonalOperatorValues
   /// - quadrature rule: Hammer-Marlowe-Stroud 3 | points: 5, degree: 3
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1883    2642      56       5      5              0                 0              1
   void computeInverseDiagonalOperatorValues_macro_3D( real_t* RESTRICT _data_invDiag_Edge,
                                                       real_t* RESTRICT _data_invDiag_Vertex,
                                                       real_t* RESTRICT _data_muEdge,
                                                       real_t* RESTRICT _data_muVertex,
                                                       real_t           forVertex_0,
                                                       real_t           forVertex_1,
                                                       real_t           forVertex_2,
                                                       real_t           macro_vertex_coord_id_0comp0,
                                                       real_t           macro_vertex_coord_id_0comp1,
                                                       real_t           macro_vertex_coord_id_0comp2,
                                                       real_t           macro_vertex_coord_id_1comp0,
                                                       real_t           macro_vertex_coord_id_1comp1,
                                                       real_t           macro_vertex_coord_id_1comp2,
                                                       real_t           macro_vertex_coord_id_2comp0,
                                                       real_t           macro_vertex_coord_id_2comp1,
                                                       real_t           macro_vertex_coord_id_2comp2,
                                                       real_t           macro_vertex_coord_id_3comp0,
                                                       real_t           macro_vertex_coord_id_3comp1,
                                                       real_t           macro_vertex_coord_id_3comp2,
                                                       int64_t          micro_edges_per_macro_edge,
                                                       real_t           micro_edges_per_macro_edge_float,
                                                       real_t           radRayVertex,
                                                       real_t           radRefVertex,
                                                       real_t           rayVertex_0,
                                                       real_t           rayVertex_1,
                                                       real_t           rayVertex_2,
                                                       real_t           refVertex_0,
                                                       real_t           refVertex_1,
                                                       real_t           refVertex_2,
                                                       real_t           thrVertex_0,
                                                       real_t           thrVertex_1,
                                                       real_t           thrVertex_2 ) const;

   std::shared_ptr< P2Function< real_t > > invDiag_;
   P2Function< real_t >                    mu;
};

} // namespace operatorgeneration

} // namespace hyteg