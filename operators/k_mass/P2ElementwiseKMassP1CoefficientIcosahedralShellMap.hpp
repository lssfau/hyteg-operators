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
#include "hyteg/geometry/IcosahedralShellMap.hpp"
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

/// Mass operator scaled with a coefficient.
///
/// Geometry map: IcosahedralShellMap
///
/// Weak formulation
///
///     u: trial function (space: Lagrange, degree: 2)
///     v: test function  (space: Lagrange, degree: 2)
///     k: coefficient    (space: Lagrange, degree: 1)
///
///     ∫ k uv

class P2ElementwiseKMassP1CoefficientIcosahedralShellMap : public Operator< P2Function< real_t >, P2Function< real_t > >,
                                                           public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseKMassP1CoefficientIcosahedralShellMap( const std::shared_ptr< PrimitiveStorage >& storage,
                                                       size_t                                     minLevel,
                                                       size_t                                     maxLevel,
                                                       const P1Function< real_t >&                _k );

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
   /// Integral: P2ElementwiseKMassP1CoefficientIcosahedralShellMap
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - blending map:    IcosahedralShellMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   2360    3571      58      22      0              0                 0              1
   void apply_P2ElementwiseKMassP1CoefficientIcosahedralShellMap_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                                           real_t* RESTRICT _data_dstVertex,
                                                                           real_t* RESTRICT _data_k,
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

   /// Integral: P2ElementwiseKMassP1CoefficientIcosahedralShellMap
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - blending map:    IcosahedralShellMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   2260    3471      58      22      0              0                 0              4
   void toMatrix_P2ElementwiseKMassP1CoefficientIcosahedralShellMap_macro_3D( idx_t* RESTRICT  _data_dstEdge,
                                                                              idx_t* RESTRICT  _data_dstVertex,
                                                                              real_t* RESTRICT _data_k,
                                                                              idx_t* RESTRICT  _data_srcEdge,
                                                                              idx_t* RESTRICT  _data_srcVertex,
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
                                                                              std::shared_ptr< SparseMatrixProxy > mat,
                                                                              int64_t micro_edges_per_macro_edge,
                                                                              real_t  micro_edges_per_macro_edge_float,
                                                                              real_t  radRayVertex,
                                                                              real_t  radRefVertex,
                                                                              real_t  rayVertex_0,
                                                                              real_t  rayVertex_1,
                                                                              real_t  rayVertex_2,
                                                                              real_t  refVertex_0,
                                                                              real_t  refVertex_1,
                                                                              real_t  refVertex_2,
                                                                              real_t  thrVertex_0,
                                                                              real_t  thrVertex_1,
                                                                              real_t  thrVertex_2 ) const;

   /// Integral: P2ElementwiseKMassP1CoefficientIcosahedralShellMap
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - blending map:    IcosahedralShellMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1775    2976      58      22      0              0                 0              1
   void computeInverseDiagonalOperatorValues_P2ElementwiseKMassP1CoefficientIcosahedralShellMap_macro_3D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_k,
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
   P1Function< real_t >                    k;
};

} // namespace operatorgeneration

} // namespace hyteg
