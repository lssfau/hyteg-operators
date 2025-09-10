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
#include "hyteg/p1functionspace/P1Function.hpp"
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Divergence.
///
/// Component:    0
/// Geometry map: IdentityMap
///
/// Weak formulation
///
///     u: trial function (vectorial space: TensorialVectorSpace(Lagrange, degree: 2, component 1))
///
///     v: test function  (scalar space:    Lagrange, degree: 1)
///
///
///     ∫ - ( ∇ · u ) v

class P2ToP1ElementwiseDivergence_0_1 : public Operator< P2Function< real_t >, P1Function< real_t > >
{
 public:
   P2ToP1ElementwiseDivergence_0_1( const std::shared_ptr< PrimitiveStorage >& storage, size_t minLevel, size_t maxLevel );

   void applyScaled( const real_t&               operatorScaling,
                     const P2Function< real_t >& src,
                     const P1Function< real_t >& dst,
                     uint_t                      level,
                     DoFType                     flag,
                     UpdateType                  updateType = Replace ) const;

   void apply( const P2Function< real_t >& src,
               const P1Function< real_t >& dst,
               uint_t                      level,
               DoFType                     flag,
               UpdateType                  updateType = Replace ) const;

   void toMatrixScaled( const real_t&                               toMatrixScaling,
                        const std::shared_ptr< SparseMatrixProxy >& mat,
                        const P2Function< idx_t >&                  src,
                        const P1Function< idx_t >&                  dst,
                        uint_t                                      level,
                        DoFType                                     flag ) const;

   void toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                  const P2Function< idx_t >&                  src,
                  const P1Function< idx_t >&                  dst,
                  uint_t                                      level,
                  DoFType                                     flag ) const;

 protected:
 private:
   /// Integral: P2ToP1ElementwiseDivergence_0_1
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    116     135      12       0      0              0                 0              1
   void applyScaled_P2ToP1ElementwiseDivergence_0_1_macro_2D( real_t* RESTRICT _data_dst,
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

   /// Integral: P2ToP1ElementwiseDivergence_0_1
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    345     356      36       0      0              0                 0              1
   void applyScaled_P2ToP1ElementwiseDivergence_0_1_macro_3D( real_t* RESTRICT _data_dst,
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

   /// Integral: P2ToP1ElementwiseDivergence_0_1
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     98     132      12       0      0              0                 0              4
   void toMatrixScaled_P2ToP1ElementwiseDivergence_0_1_macro_2D( idx_t* RESTRICT _data_dst,
                                                                 idx_t* RESTRICT _data_srcEdge,
                                                                 idx_t* RESTRICT _data_srcVertex,
                                                                 real_t          macro_vertex_coord_id_0comp0,
                                                                 real_t          macro_vertex_coord_id_0comp1,
                                                                 real_t          macro_vertex_coord_id_1comp0,
                                                                 real_t          macro_vertex_coord_id_1comp1,
                                                                 real_t          macro_vertex_coord_id_2comp0,
                                                                 real_t          macro_vertex_coord_id_2comp1,
                                                                 std::shared_ptr< SparseMatrixProxy > mat,
                                                                 int64_t                              micro_edges_per_macro_edge,
                                                                 real_t micro_edges_per_macro_edge_float,
                                                                 real_t toMatrixScaling ) const;

   /// Integral: P2ToP1ElementwiseDivergence_0_1
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    305     352      36       0      0              0                 0              4
   void toMatrixScaled_P2ToP1ElementwiseDivergence_0_1_macro_3D( idx_t* RESTRICT _data_dst,
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
                                                                 int64_t                              micro_edges_per_macro_edge,
                                                                 real_t micro_edges_per_macro_edge_float,
                                                                 real_t toMatrixScaling ) const;
};

} // namespace operatorgeneration

} // namespace hyteg
