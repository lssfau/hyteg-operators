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

/// SUPG mass operator for the TALA
///
/// Intended for LHS use.
///
/// Geometry map: IdentityMap
///
/// Weak formulation
///
///     T: trial function (scalar space: Lagrange, degree: 2)
///     w: test function (scalar space: Lagrange, degree: 2)
///     u: coefficient (vector space: Lagrange, degree: 2)
///     delta: coefficient (scalar space: Lagrange, degree: 2)
///
///     ∫ delta T ( u · ∇w )

class P2ElementwiseSupgMassCoeffDelta : public Operator< P2Function< real_t >, P2Function< real_t > >,
                                        public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseSupgMassCoeffDelta( const std::shared_ptr< PrimitiveStorage >& storage,
                                    size_t                                     minLevel,
                                    size_t                                     maxLevel,
                                    const P2Function< real_t >&                _delta,
                                    const P2Function< real_t >&                _ux,
                                    const P2Function< real_t >&                _uy,
                                    const P2Function< real_t >&                _uz );

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
   /// Integral: P2ElementwiseSupgMassCoeffDelta
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 4 | points: 6, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    410     504      12       0      0              0                 0              1
   void applyScaled_P2ElementwiseSupgMassCoeffDelta_macro_2D( real_t* RESTRICT _data_deltaEdge,
                                                              real_t* RESTRICT _data_deltaVertex,
                                                              real_t* RESTRICT _data_dstEdge,
                                                              real_t* RESTRICT _data_dstVertex,
                                                              real_t* RESTRICT _data_srcEdge,
                                                              real_t* RESTRICT _data_srcVertex,
                                                              real_t* RESTRICT _data_uxEdge,
                                                              real_t* RESTRICT _data_uxVertex,
                                                              real_t* RESTRICT _data_uyEdge,
                                                              real_t* RESTRICT _data_uyVertex,
                                                              real_t           macro_vertex_coord_id_0comp0,
                                                              real_t           macro_vertex_coord_id_0comp1,
                                                              real_t           macro_vertex_coord_id_1comp0,
                                                              real_t           macro_vertex_coord_id_1comp1,
                                                              real_t           macro_vertex_coord_id_2comp0,
                                                              real_t           macro_vertex_coord_id_2comp1,
                                                              int64_t          micro_edges_per_macro_edge,
                                                              real_t           micro_edges_per_macro_edge_float,
                                                              real_t           operatorScaling ) const;

   /// Integral: P2ElementwiseSupgMassCoeffDelta
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1909    2173      36       0      0              0                 0              1
   void applyScaled_P2ElementwiseSupgMassCoeffDelta_macro_3D( real_t* RESTRICT _data_deltaEdge,
                                                              real_t* RESTRICT _data_deltaVertex,
                                                              real_t* RESTRICT _data_dstEdge,
                                                              real_t* RESTRICT _data_dstVertex,
                                                              real_t* RESTRICT _data_srcEdge,
                                                              real_t* RESTRICT _data_srcVertex,
                                                              real_t* RESTRICT _data_uxEdge,
                                                              real_t* RESTRICT _data_uxVertex,
                                                              real_t* RESTRICT _data_uyEdge,
                                                              real_t* RESTRICT _data_uyVertex,
                                                              real_t* RESTRICT _data_uzEdge,
                                                              real_t* RESTRICT _data_uzVertex,
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

   /// Integral: P2ElementwiseSupgMassCoeffDelta
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 4 | points: 6, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    374     498      12       0      0              0                 0              4
   void toMatrixScaled_P2ElementwiseSupgMassCoeffDelta_macro_2D( real_t* RESTRICT _data_deltaEdge,
                                                                 real_t* RESTRICT _data_deltaVertex,
                                                                 idx_t* RESTRICT  _data_dstEdge,
                                                                 idx_t* RESTRICT  _data_dstVertex,
                                                                 idx_t* RESTRICT  _data_srcEdge,
                                                                 idx_t* RESTRICT  _data_srcVertex,
                                                                 real_t* RESTRICT _data_uxEdge,
                                                                 real_t* RESTRICT _data_uxVertex,
                                                                 real_t* RESTRICT _data_uyEdge,
                                                                 real_t* RESTRICT _data_uyVertex,
                                                                 real_t           macro_vertex_coord_id_0comp0,
                                                                 real_t           macro_vertex_coord_id_0comp1,
                                                                 real_t           macro_vertex_coord_id_1comp0,
                                                                 real_t           macro_vertex_coord_id_1comp1,
                                                                 real_t           macro_vertex_coord_id_2comp0,
                                                                 real_t           macro_vertex_coord_id_2comp1,
                                                                 std::shared_ptr< SparseMatrixProxy > mat,
                                                                 int64_t                              micro_edges_per_macro_edge,
                                                                 real_t micro_edges_per_macro_edge_float,
                                                                 real_t toMatrixScaling ) const;

   /// Integral: P2ElementwiseSupgMassCoeffDelta
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1809    2163      36       0      0              0                 0              4
   void toMatrixScaled_P2ElementwiseSupgMassCoeffDelta_macro_3D( real_t* RESTRICT _data_deltaEdge,
                                                                 real_t* RESTRICT _data_deltaVertex,
                                                                 idx_t* RESTRICT  _data_dstEdge,
                                                                 idx_t* RESTRICT  _data_dstVertex,
                                                                 idx_t* RESTRICT  _data_srcEdge,
                                                                 idx_t* RESTRICT  _data_srcVertex,
                                                                 real_t* RESTRICT _data_uxEdge,
                                                                 real_t* RESTRICT _data_uxVertex,
                                                                 real_t* RESTRICT _data_uyEdge,
                                                                 real_t* RESTRICT _data_uyVertex,
                                                                 real_t* RESTRICT _data_uzEdge,
                                                                 real_t* RESTRICT _data_uzVertex,
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
                                                                 int64_t                              micro_edges_per_macro_edge,
                                                                 real_t micro_edges_per_macro_edge_float,
                                                                 real_t toMatrixScaling ) const;

   /// Integral: P2ElementwiseSupgMassCoeffDelta
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 4 | points: 6, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    200     288      12       0      0              0                 0              1
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseSupgMassCoeffDelta_macro_2D(
       real_t* RESTRICT _data_deltaEdge,
       real_t* RESTRICT _data_deltaVertex,
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_uxEdge,
       real_t* RESTRICT _data_uxVertex,
       real_t* RESTRICT _data_uyEdge,
       real_t* RESTRICT _data_uyVertex,
       real_t           diagScaling,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2ElementwiseSupgMassCoeffDelta
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    829    1083      36       0      0              0                 0              1
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseSupgMassCoeffDelta_macro_3D(
       real_t* RESTRICT _data_deltaEdge,
       real_t* RESTRICT _data_deltaVertex,
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_uxEdge,
       real_t* RESTRICT _data_uxVertex,
       real_t* RESTRICT _data_uyEdge,
       real_t* RESTRICT _data_uyVertex,
       real_t* RESTRICT _data_uzEdge,
       real_t* RESTRICT _data_uzVertex,
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
   P2Function< real_t >                    delta;
   P2Function< real_t >                    ux;
   P2Function< real_t >                    uy;
   P2Function< real_t >                    uz;
};

} // namespace operatorgeneration

} // namespace hyteg
