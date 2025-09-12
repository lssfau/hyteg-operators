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
#include "hyteg/p1functionspace/P1VectorFunction.hpp"
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/p2functionspace/P2VectorFunction.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Diffusion operator without coefficients.
///
/// Geometry map: ParametricMapP2
///
/// Weak formulation
///
///     u: trial function (space: Lagrange, degree: 2)
///     v: test function  (space: Lagrange, degree: 2)
///
///     ∫ ∇u : ∇v
///
///     Note that the double contraction (:) reduces to the dot product for scalar function spaces, i.e. the form becomes
///
///     ∫ ∇u · ∇v

class P2ElementwiseDiffusionParametricP2Map : public Operator< P2Function< real_t >, P2Function< real_t > >,
                                              public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseDiffusionParametricP2Map( const std::shared_ptr< PrimitiveStorage >& storage,
                                          size_t                                     minLevel,
                                          size_t                                     maxLevel,
                                          const P2VectorFunction< real_t >&          _micromesh );

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
   /// Integral: P2ElementwiseDiffusionParametricP2Map
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    266     432      18       0      3              0                 0              1
   void applyScaled_P2ElementwiseDiffusionParametricP2Map_macro_2D( real_t* RESTRICT _data_dstEdge,
                                                                    real_t* RESTRICT _data_dstVertex,
                                                                    real_t* RESTRICT _data_micromesh_edge_0,
                                                                    real_t* RESTRICT _data_micromesh_edge_1,
                                                                    real_t* RESTRICT _data_micromesh_vertex_0,
                                                                    real_t* RESTRICT _data_micromesh_vertex_1,
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

   /// Integral: P2ElementwiseDiffusionParametricP2Map
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1346    1978      44       0      4              0                 0              1
   void applyScaled_P2ElementwiseDiffusionParametricP2Map_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                                    real_t* RESTRICT _data_dstVertex,
                                                                    real_t* RESTRICT _data_micromesh_edge_0,
                                                                    real_t* RESTRICT _data_micromesh_edge_1,
                                                                    real_t* RESTRICT _data_micromesh_edge_2,
                                                                    real_t* RESTRICT _data_micromesh_vertex_0,
                                                                    real_t* RESTRICT _data_micromesh_vertex_1,
                                                                    real_t* RESTRICT _data_micromesh_vertex_2,
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

   /// Integral: P2ElementwiseDiffusionParametricP2Map
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    230     411      18       0      3              0                 0              4
   void toMatrixScaled_P2ElementwiseDiffusionParametricP2Map_macro_2D( idx_t* RESTRICT  _data_dstEdge,
                                                                       idx_t* RESTRICT  _data_dstVertex,
                                                                       real_t* RESTRICT _data_micromesh_edge_0,
                                                                       real_t* RESTRICT _data_micromesh_edge_1,
                                                                       real_t* RESTRICT _data_micromesh_vertex_0,
                                                                       real_t* RESTRICT _data_micromesh_vertex_1,
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
                                                                       real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseDiffusionParametricP2Map
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1246    1923      44       0      4              0                 0              4
   void toMatrixScaled_P2ElementwiseDiffusionParametricP2Map_macro_3D( idx_t* RESTRICT  _data_dstEdge,
                                                                       idx_t* RESTRICT  _data_dstVertex,
                                                                       real_t* RESTRICT _data_micromesh_edge_0,
                                                                       real_t* RESTRICT _data_micromesh_edge_1,
                                                                       real_t* RESTRICT _data_micromesh_edge_2,
                                                                       real_t* RESTRICT _data_micromesh_vertex_0,
                                                                       real_t* RESTRICT _data_micromesh_vertex_1,
                                                                       real_t* RESTRICT _data_micromesh_vertex_2,
                                                                       idx_t* RESTRICT  _data_srcEdge,
                                                                       idx_t* RESTRICT  _data_srcVertex,
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
                                                                       real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseDiffusionParametricP2Map
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    161     231      18       0      3              0                 0              1
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseDiffusionParametricP2Map_macro_2D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_micromesh_edge_0,
       real_t* RESTRICT _data_micromesh_edge_1,
       real_t* RESTRICT _data_micromesh_vertex_0,
       real_t* RESTRICT _data_micromesh_vertex_1,
       real_t           diagScaling,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2ElementwiseDiffusionParametricP2Map
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    653     898      44       0      4              0                 0              1
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseDiffusionParametricP2Map_macro_3D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_micromesh_edge_0,
       real_t* RESTRICT _data_micromesh_edge_1,
       real_t* RESTRICT _data_micromesh_edge_2,
       real_t* RESTRICT _data_micromesh_vertex_0,
       real_t* RESTRICT _data_micromesh_vertex_1,
       real_t* RESTRICT _data_micromesh_vertex_2,
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
   P2VectorFunction< real_t >              micromesh;
};

} // namespace operatorgeneration

} // namespace hyteg
