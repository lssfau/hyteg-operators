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
#include "hyteg/operators/Operator.hpp"
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Mass operator.
///
/// Geometry map: IdentityMap
///
/// Weak formulation
///
///     u: trial function (space: Lagrange, degree: 2)
///     v: test function  (space: Lagrange, degree: 2)
///
///     ∫ uv ds

class P2ElementwiseMassBoundary : public Operator< P2Function< real_t >, P2Function< real_t > >,
                                  public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseMassBoundary( const std::shared_ptr< PrimitiveStorage >& storage,
                              size_t                                     minLevel,
                              size_t                                     maxLevel,
                              BoundaryCondition                          boundaryCondition,
                              BoundaryUID                                P2ElementwiseMassBoundary_boundary_uid );

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
   /// Integral: P2ElementwiseMassBoundary_facet_id_0
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    101     142      12       1      1              0                 0              0
   void applyScaled_P2ElementwiseMassBoundary_facet_id_0_macro_2D( real_t* RESTRICT _data_dstEdge,
                                                                   real_t* RESTRICT _data_dstVertex,
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
                                                                   real_t           operatorScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_1
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    101     142      12       1      1              0                 0              0
   void applyScaled_P2ElementwiseMassBoundary_facet_id_1_macro_2D( real_t* RESTRICT _data_dstEdge,
                                                                   real_t* RESTRICT _data_dstVertex,
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
                                                                   real_t           operatorScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_2
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    101     142      12       1      1              0                 0              0
   void applyScaled_P2ElementwiseMassBoundary_facet_id_2_macro_2D( real_t* RESTRICT _data_dstEdge,
                                                                   real_t* RESTRICT _data_dstVertex,
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
                                                                   real_t           operatorScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_0
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    484     530      36       1      1              0                 0              0
   void applyScaled_P2ElementwiseMassBoundary_facet_id_0_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                                   real_t* RESTRICT _data_dstVertex,
                                                                   real_t* RESTRICT _data_srcEdge,
                                                                   real_t* RESTRICT _data_srcVertex,
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
                                                                   real_t           operatorScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_1
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    481     530      36       1      1              0                 0              0
   void applyScaled_P2ElementwiseMassBoundary_facet_id_1_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                                   real_t* RESTRICT _data_dstVertex,
                                                                   real_t* RESTRICT _data_srcEdge,
                                                                   real_t* RESTRICT _data_srcVertex,
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
                                                                   real_t           operatorScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_2
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    484     530      36       1      1              0                 0              0
   void applyScaled_P2ElementwiseMassBoundary_facet_id_2_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                                   real_t* RESTRICT _data_dstVertex,
                                                                   real_t* RESTRICT _data_srcEdge,
                                                                   real_t* RESTRICT _data_srcVertex,
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
                                                                   real_t           operatorScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_3
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    487     530      36       1      1              0                 0              0
   void applyScaled_P2ElementwiseMassBoundary_facet_id_3_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                                   real_t* RESTRICT _data_dstVertex,
                                                                   real_t* RESTRICT _data_srcEdge,
                                                                   real_t* RESTRICT _data_srcVertex,
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
                                                                   real_t           operatorScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_0
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     65     121      12       1      1              0                 0              3
   void toMatrixScaled_P2ElementwiseMassBoundary_facet_id_0_macro_2D( idx_t* RESTRICT _data_dstEdge,
                                                                      idx_t* RESTRICT _data_dstVertex,
                                                                      idx_t* RESTRICT _data_srcEdge,
                                                                      idx_t* RESTRICT _data_srcVertex,
                                                                      real_t          macro_vertex_coord_id_0comp0,
                                                                      real_t          macro_vertex_coord_id_0comp1,
                                                                      real_t          macro_vertex_coord_id_1comp0,
                                                                      real_t          macro_vertex_coord_id_1comp1,
                                                                      real_t          macro_vertex_coord_id_2comp0,
                                                                      real_t          macro_vertex_coord_id_2comp1,
                                                                      std::shared_ptr< SparseMatrixProxy > mat,
                                                                      int64_t micro_edges_per_macro_edge,
                                                                      real_t  micro_edges_per_macro_edge_float,
                                                                      real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_1
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     65     121      12       1      1              0                 0              3
   void toMatrixScaled_P2ElementwiseMassBoundary_facet_id_1_macro_2D( idx_t* RESTRICT _data_dstEdge,
                                                                      idx_t* RESTRICT _data_dstVertex,
                                                                      idx_t* RESTRICT _data_srcEdge,
                                                                      idx_t* RESTRICT _data_srcVertex,
                                                                      real_t          macro_vertex_coord_id_0comp0,
                                                                      real_t          macro_vertex_coord_id_0comp1,
                                                                      real_t          macro_vertex_coord_id_1comp0,
                                                                      real_t          macro_vertex_coord_id_1comp1,
                                                                      real_t          macro_vertex_coord_id_2comp0,
                                                                      real_t          macro_vertex_coord_id_2comp1,
                                                                      std::shared_ptr< SparseMatrixProxy > mat,
                                                                      int64_t micro_edges_per_macro_edge,
                                                                      real_t  micro_edges_per_macro_edge_float,
                                                                      real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_2
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     65     121      12       1      1              0                 0              3
   void toMatrixScaled_P2ElementwiseMassBoundary_facet_id_2_macro_2D( idx_t* RESTRICT _data_dstEdge,
                                                                      idx_t* RESTRICT _data_dstVertex,
                                                                      idx_t* RESTRICT _data_srcEdge,
                                                                      idx_t* RESTRICT _data_srcVertex,
                                                                      real_t          macro_vertex_coord_id_0comp0,
                                                                      real_t          macro_vertex_coord_id_0comp1,
                                                                      real_t          macro_vertex_coord_id_1comp0,
                                                                      real_t          macro_vertex_coord_id_1comp1,
                                                                      real_t          macro_vertex_coord_id_2comp0,
                                                                      real_t          macro_vertex_coord_id_2comp1,
                                                                      std::shared_ptr< SparseMatrixProxy > mat,
                                                                      int64_t micro_edges_per_macro_edge,
                                                                      real_t  micro_edges_per_macro_edge_float,
                                                                      real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_0
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    384     475      36       1      1              0                 0              3
   void toMatrixScaled_P2ElementwiseMassBoundary_facet_id_0_macro_3D( idx_t* RESTRICT _data_dstEdge,
                                                                      idx_t* RESTRICT _data_dstVertex,
                                                                      idx_t* RESTRICT _data_srcEdge,
                                                                      idx_t* RESTRICT _data_srcVertex,
                                                                      real_t          macro_vertex_coord_id_0comp0,
                                                                      real_t          macro_vertex_coord_id_0comp1,
                                                                      real_t          macro_vertex_coord_id_0comp2,
                                                                      real_t          macro_vertex_coord_id_1comp0,
                                                                      real_t          macro_vertex_coord_id_1comp1,
                                                                      real_t          macro_vertex_coord_id_1comp2,
                                                                      real_t          macro_vertex_coord_id_2comp0,
                                                                      real_t          macro_vertex_coord_id_2comp1,
                                                                      real_t          macro_vertex_coord_id_2comp2,
                                                                      real_t          macro_vertex_coord_id_3comp0,
                                                                      real_t          macro_vertex_coord_id_3comp1,
                                                                      real_t          macro_vertex_coord_id_3comp2,
                                                                      std::shared_ptr< SparseMatrixProxy > mat,
                                                                      int64_t micro_edges_per_macro_edge,
                                                                      real_t  micro_edges_per_macro_edge_float,
                                                                      real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_1
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    381     475      36       1      1              0                 0              3
   void toMatrixScaled_P2ElementwiseMassBoundary_facet_id_1_macro_3D( idx_t* RESTRICT _data_dstEdge,
                                                                      idx_t* RESTRICT _data_dstVertex,
                                                                      idx_t* RESTRICT _data_srcEdge,
                                                                      idx_t* RESTRICT _data_srcVertex,
                                                                      real_t          macro_vertex_coord_id_0comp0,
                                                                      real_t          macro_vertex_coord_id_0comp1,
                                                                      real_t          macro_vertex_coord_id_0comp2,
                                                                      real_t          macro_vertex_coord_id_1comp0,
                                                                      real_t          macro_vertex_coord_id_1comp1,
                                                                      real_t          macro_vertex_coord_id_1comp2,
                                                                      real_t          macro_vertex_coord_id_2comp0,
                                                                      real_t          macro_vertex_coord_id_2comp1,
                                                                      real_t          macro_vertex_coord_id_2comp2,
                                                                      real_t          macro_vertex_coord_id_3comp0,
                                                                      real_t          macro_vertex_coord_id_3comp1,
                                                                      real_t          macro_vertex_coord_id_3comp2,
                                                                      std::shared_ptr< SparseMatrixProxy > mat,
                                                                      int64_t micro_edges_per_macro_edge,
                                                                      real_t  micro_edges_per_macro_edge_float,
                                                                      real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_2
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    384     475      36       1      1              0                 0              3
   void toMatrixScaled_P2ElementwiseMassBoundary_facet_id_2_macro_3D( idx_t* RESTRICT _data_dstEdge,
                                                                      idx_t* RESTRICT _data_dstVertex,
                                                                      idx_t* RESTRICT _data_srcEdge,
                                                                      idx_t* RESTRICT _data_srcVertex,
                                                                      real_t          macro_vertex_coord_id_0comp0,
                                                                      real_t          macro_vertex_coord_id_0comp1,
                                                                      real_t          macro_vertex_coord_id_0comp2,
                                                                      real_t          macro_vertex_coord_id_1comp0,
                                                                      real_t          macro_vertex_coord_id_1comp1,
                                                                      real_t          macro_vertex_coord_id_1comp2,
                                                                      real_t          macro_vertex_coord_id_2comp0,
                                                                      real_t          macro_vertex_coord_id_2comp1,
                                                                      real_t          macro_vertex_coord_id_2comp2,
                                                                      real_t          macro_vertex_coord_id_3comp0,
                                                                      real_t          macro_vertex_coord_id_3comp1,
                                                                      real_t          macro_vertex_coord_id_3comp2,
                                                                      std::shared_ptr< SparseMatrixProxy > mat,
                                                                      int64_t micro_edges_per_macro_edge,
                                                                      real_t  micro_edges_per_macro_edge_float,
                                                                      real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_3
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    387     475      36       1      1              0                 0              3
   void toMatrixScaled_P2ElementwiseMassBoundary_facet_id_3_macro_3D( idx_t* RESTRICT _data_dstEdge,
                                                                      idx_t* RESTRICT _data_dstVertex,
                                                                      idx_t* RESTRICT _data_srcEdge,
                                                                      idx_t* RESTRICT _data_srcVertex,
                                                                      real_t          macro_vertex_coord_id_0comp0,
                                                                      real_t          macro_vertex_coord_id_0comp1,
                                                                      real_t          macro_vertex_coord_id_0comp2,
                                                                      real_t          macro_vertex_coord_id_1comp0,
                                                                      real_t          macro_vertex_coord_id_1comp1,
                                                                      real_t          macro_vertex_coord_id_1comp2,
                                                                      real_t          macro_vertex_coord_id_2comp0,
                                                                      real_t          macro_vertex_coord_id_2comp1,
                                                                      real_t          macro_vertex_coord_id_2comp2,
                                                                      real_t          macro_vertex_coord_id_3comp0,
                                                                      real_t          macro_vertex_coord_id_3comp1,
                                                                      real_t          macro_vertex_coord_id_3comp2,
                                                                      std::shared_ptr< SparseMatrixProxy > mat,
                                                                      int64_t micro_edges_per_macro_edge,
                                                                      real_t  micro_edges_per_macro_edge_float,
                                                                      real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_0
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     56      72      12       1      1              0                 0              0
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseMassBoundary_facet_id_0_macro_2D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t           diagScaling,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_1
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     56      72      12       1      1              0                 0              0
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseMassBoundary_facet_id_1_macro_2D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t           diagScaling,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_2
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     56      72      12       1      1              0                 0              0
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseMassBoundary_facet_id_2_macro_2D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t           diagScaling,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_0
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    198     185      36       1      1              0                 0              0
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseMassBoundary_facet_id_0_macro_3D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t           diagScaling,
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
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_1
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    195     185      36       1      1              0                 0              0
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseMassBoundary_facet_id_1_macro_3D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t           diagScaling,
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
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_2
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    198     185      36       1      1              0                 0              0
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseMassBoundary_facet_id_2_macro_3D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t           diagScaling,
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
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2ElementwiseMassBoundary_facet_id_3
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    201     185      36       1      1              0                 0              0
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseMassBoundary_facet_id_3_macro_3D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t           diagScaling,
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
       real_t           micro_edges_per_macro_edge_float ) const;

   std::shared_ptr< P2Function< real_t > > invDiag_;
   BoundaryCondition                       boundaryCondition_;
   BoundaryUID                             P2ElementwiseMassBoundary_boundary_uid_;
};

} // namespace operatorgeneration

} // namespace hyteg
