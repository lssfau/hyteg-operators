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

/// Diffusion operator with a scalar coefficient.
///
/// Geometry map: IdentityMap
///
/// Weak formulation
///
///     u: trial function (space: Lagrange, degree: 2)
///     v: test function  (space: Lagrange, degree: 2)
///     k: coefficient    (space: Lagrange, degree: 2)
///
///     ∫ k ∇u · ∇v

class P2ElementwiseDivKGrad : public Operator< P2Function< real_t >, P2Function< real_t > >,
                              public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseDivKGrad( const std::shared_ptr< PrimitiveStorage >& storage,
                          size_t                                     minLevel,
                          size_t                                     maxLevel,
                          const P2Function< real_t >&                _k );

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
   /// Integral: P2ElementwiseDivKGrad
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    290     384      12       0      0              0                 0              1
   void applyScaled_P2ElementwiseDivKGrad_macro_2D( real_t* RESTRICT _data_dstEdge,
                                                    real_t* RESTRICT _data_dstVertex,
                                                    real_t* RESTRICT _data_kEdge,
                                                    real_t* RESTRICT _data_kVertex,
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

   /// Integral: P2ElementwiseDivKGrad
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1273    1650      36       0      0              0                 0              1
   void applyScaled_P2ElementwiseDivKGrad_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                    real_t* RESTRICT _data_dstVertex,
                                                    real_t* RESTRICT _data_kEdge,
                                                    real_t* RESTRICT _data_kVertex,
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

   /// Integral: P2ElementwiseDivKGrad
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    254     363      12       0      0              0                 0              4
   void toMatrixScaled_P2ElementwiseDivKGrad_macro_2D( idx_t* RESTRICT                      _data_dstEdge,
                                                       idx_t* RESTRICT                      _data_dstVertex,
                                                       real_t* RESTRICT                     _data_kEdge,
                                                       real_t* RESTRICT                     _data_kVertex,
                                                       idx_t* RESTRICT                      _data_srcEdge,
                                                       idx_t* RESTRICT                      _data_srcVertex,
                                                       real_t                               macro_vertex_coord_id_0comp0,
                                                       real_t                               macro_vertex_coord_id_0comp1,
                                                       real_t                               macro_vertex_coord_id_1comp0,
                                                       real_t                               macro_vertex_coord_id_1comp1,
                                                       real_t                               macro_vertex_coord_id_2comp0,
                                                       real_t                               macro_vertex_coord_id_2comp1,
                                                       std::shared_ptr< SparseMatrixProxy > mat,
                                                       int64_t                              micro_edges_per_macro_edge,
                                                       real_t                               micro_edges_per_macro_edge_float,
                                                       real_t                               toMatrixScaling ) const;

   /// Integral: P2ElementwiseDivKGrad
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1173    1595      36       0      0              0                 0              4
   void toMatrixScaled_P2ElementwiseDivKGrad_macro_3D( idx_t* RESTRICT                      _data_dstEdge,
                                                       idx_t* RESTRICT                      _data_dstVertex,
                                                       real_t* RESTRICT                     _data_kEdge,
                                                       real_t* RESTRICT                     _data_kVertex,
                                                       idx_t* RESTRICT                      _data_srcEdge,
                                                       idx_t* RESTRICT                      _data_srcVertex,
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
                                                       real_t                               toMatrixScaling ) const;

   /// Integral: P2ElementwiseDivKGrad
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    170     201      12       0      0              0                 0              1
   void
       computeInverseDiagonalOperatorValuesScaled_P2ElementwiseDivKGrad_macro_2D( real_t* RESTRICT _data_invDiag_Edge,
                                                                                  real_t* RESTRICT _data_invDiag_Vertex,
                                                                                  real_t* RESTRICT _data_kEdge,
                                                                                  real_t* RESTRICT _data_kVertex,
                                                                                  real_t           diagScaling,
                                                                                  real_t           macro_vertex_coord_id_0comp0,
                                                                                  real_t           macro_vertex_coord_id_0comp1,
                                                                                  real_t           macro_vertex_coord_id_1comp0,
                                                                                  real_t           macro_vertex_coord_id_1comp1,
                                                                                  real_t           macro_vertex_coord_id_2comp0,
                                                                                  real_t           macro_vertex_coord_id_2comp1,
                                                                                  int64_t          micro_edges_per_macro_edge,
                                                                                  real_t micro_edges_per_macro_edge_float ) const;

   /// Integral: P2ElementwiseDivKGrad
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    523     686      36       0      0              0                 0              1
   void
       computeInverseDiagonalOperatorValuesScaled_P2ElementwiseDivKGrad_macro_3D( real_t* RESTRICT _data_invDiag_Edge,
                                                                                  real_t* RESTRICT _data_invDiag_Vertex,
                                                                                  real_t* RESTRICT _data_kEdge,
                                                                                  real_t* RESTRICT _data_kVertex,
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
                                                                                  real_t micro_edges_per_macro_edge_float ) const;

   std::shared_ptr< P2Function< real_t > > invDiag_;
   P2Function< real_t >                    k;
};

} // namespace operatorgeneration

} // namespace hyteg
