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
/// Component trial: 0
/// Component test:  0
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

class P2ElementwiseFullStokesIcosahedralShellMap_2_2
: public Operator< P2Function< walberla::float64 >, P2Function< walberla::float64 > >,
  public OperatorWithInverseDiagonal< P2Function< walberla::float64 > >
{
 public:
   P2ElementwiseFullStokesIcosahedralShellMap_2_2( const std::shared_ptr< PrimitiveStorage >& storage,
                                                   size_t                                     minLevel,
                                                   size_t                                     maxLevel,
                                                   const P2Function< walberla::float64 >&     _mu );

   void apply( const P2Function< walberla::float64 >& src,
               const P2Function< walberla::float64 >& dst,
               uint_t                                 level,
               DoFType                                flag,
               UpdateType                             updateType = Replace ) const;

   void toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                  const P2Function< idx_t >&                  src,
                  const P2Function< idx_t >&                  dst,
                  uint_t                                      level,
                  DoFType                                     flag ) const;

   void computeInverseDiagonalOperatorValues();

   std::shared_ptr< P2Function< walberla::float64 > > getInverseDiagonalValues() const;

 protected:
 private:
   /// Kernel type: apply
   /// - quadrature rule: Hammer-Marlowe-Stroud 3 | points: 5, degree: 3
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   3098    4222      56       5      5              0                 0              1
   void apply_macro_3D( walberla::float64* RESTRICT _data_dstEdge,
                        walberla::float64* RESTRICT _data_dstVertex,
                        walberla::float64* RESTRICT _data_muEdge,
                        walberla::float64* RESTRICT _data_muVertex,
                        walberla::float64* RESTRICT _data_srcEdge,
                        walberla::float64* RESTRICT _data_srcVertex,
                        walberla::float64           forVertex_0,
                        walberla::float64           forVertex_1,
                        walberla::float64           forVertex_2,
                        walberla::float64           macro_vertex_coord_id_0comp0,
                        walberla::float64           macro_vertex_coord_id_0comp1,
                        walberla::float64           macro_vertex_coord_id_0comp2,
                        walberla::float64           macro_vertex_coord_id_1comp0,
                        walberla::float64           macro_vertex_coord_id_1comp1,
                        walberla::float64           macro_vertex_coord_id_1comp2,
                        walberla::float64           macro_vertex_coord_id_2comp0,
                        walberla::float64           macro_vertex_coord_id_2comp1,
                        walberla::float64           macro_vertex_coord_id_2comp2,
                        walberla::float64           macro_vertex_coord_id_3comp0,
                        walberla::float64           macro_vertex_coord_id_3comp1,
                        walberla::float64           macro_vertex_coord_id_3comp2,
                        int64_t                     micro_edges_per_macro_edge,
                        walberla::float64           micro_edges_per_macro_edge_float,
                        walberla::float64           radRayVertex,
                        walberla::float64           radRefVertex,
                        walberla::float64           rayVertex_0,
                        walberla::float64           rayVertex_1,
                        walberla::float64           rayVertex_2,
                        walberla::float64           refVertex_0,
                        walberla::float64           refVertex_1,
                        walberla::float64           refVertex_2,
                        walberla::float64           thrVertex_0,
                        walberla::float64           thrVertex_1,
                        walberla::float64           thrVertex_2 ) const;
   /// Kernel type: toMatrix
   /// - quadrature rule: Hammer-Marlowe-Stroud 3 | points: 5, degree: 3
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   2998    4122      56       5      5              0                 0              4
   void toMatrix_macro_3D( idx_t* RESTRICT                      _data_dstEdge,
                           idx_t* RESTRICT                      _data_dstVertex,
                           walberla::float64* RESTRICT          _data_muEdge,
                           walberla::float64* RESTRICT          _data_muVertex,
                           idx_t* RESTRICT                      _data_srcEdge,
                           idx_t* RESTRICT                      _data_srcVertex,
                           walberla::float64                    forVertex_0,
                           walberla::float64                    forVertex_1,
                           walberla::float64                    forVertex_2,
                           walberla::float64                    macro_vertex_coord_id_0comp0,
                           walberla::float64                    macro_vertex_coord_id_0comp1,
                           walberla::float64                    macro_vertex_coord_id_0comp2,
                           walberla::float64                    macro_vertex_coord_id_1comp0,
                           walberla::float64                    macro_vertex_coord_id_1comp1,
                           walberla::float64                    macro_vertex_coord_id_1comp2,
                           walberla::float64                    macro_vertex_coord_id_2comp0,
                           walberla::float64                    macro_vertex_coord_id_2comp1,
                           walberla::float64                    macro_vertex_coord_id_2comp2,
                           walberla::float64                    macro_vertex_coord_id_3comp0,
                           walberla::float64                    macro_vertex_coord_id_3comp1,
                           walberla::float64                    macro_vertex_coord_id_3comp2,
                           std::shared_ptr< SparseMatrixProxy > mat,
                           int64_t                              micro_edges_per_macro_edge,
                           walberla::float64                    micro_edges_per_macro_edge_float,
                           walberla::float64                    radRayVertex,
                           walberla::float64                    radRefVertex,
                           walberla::float64                    rayVertex_0,
                           walberla::float64                    rayVertex_1,
                           walberla::float64                    rayVertex_2,
                           walberla::float64                    refVertex_0,
                           walberla::float64                    refVertex_1,
                           walberla::float64                    refVertex_2,
                           walberla::float64                    thrVertex_0,
                           walberla::float64                    thrVertex_1,
                           walberla::float64                    thrVertex_2 ) const;
   /// Kernel type: computeInverseDiagonalOperatorValues
   /// - quadrature rule: Hammer-Marlowe-Stroud 3 | points: 5, degree: 3
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1883    2637      56       5      5              0                 0              1
   void computeInverseDiagonalOperatorValues_macro_3D( walberla::float64* RESTRICT _data_invDiag_Edge,
                                                       walberla::float64* RESTRICT _data_invDiag_Vertex,
                                                       walberla::float64* RESTRICT _data_muEdge,
                                                       walberla::float64* RESTRICT _data_muVertex,
                                                       walberla::float64           forVertex_0,
                                                       walberla::float64           forVertex_1,
                                                       walberla::float64           forVertex_2,
                                                       walberla::float64           macro_vertex_coord_id_0comp0,
                                                       walberla::float64           macro_vertex_coord_id_0comp1,
                                                       walberla::float64           macro_vertex_coord_id_0comp2,
                                                       walberla::float64           macro_vertex_coord_id_1comp0,
                                                       walberla::float64           macro_vertex_coord_id_1comp1,
                                                       walberla::float64           macro_vertex_coord_id_1comp2,
                                                       walberla::float64           macro_vertex_coord_id_2comp0,
                                                       walberla::float64           macro_vertex_coord_id_2comp1,
                                                       walberla::float64           macro_vertex_coord_id_2comp2,
                                                       walberla::float64           macro_vertex_coord_id_3comp0,
                                                       walberla::float64           macro_vertex_coord_id_3comp1,
                                                       walberla::float64           macro_vertex_coord_id_3comp2,
                                                       int64_t                     micro_edges_per_macro_edge,
                                                       walberla::float64           micro_edges_per_macro_edge_float,
                                                       walberla::float64           radRayVertex,
                                                       walberla::float64           radRefVertex,
                                                       walberla::float64           rayVertex_0,
                                                       walberla::float64           rayVertex_1,
                                                       walberla::float64           rayVertex_2,
                                                       walberla::float64           refVertex_0,
                                                       walberla::float64           refVertex_1,
                                                       walberla::float64           refVertex_2,
                                                       walberla::float64           thrVertex_0,
                                                       walberla::float64           thrVertex_1,
                                                       walberla::float64           thrVertex_2 ) const;

   std::shared_ptr< P2Function< walberla::float64 > > invDiag_;
   P2Function< walberla::float64 >                    mu;
};

} // namespace operatorgeneration

} // namespace hyteg
