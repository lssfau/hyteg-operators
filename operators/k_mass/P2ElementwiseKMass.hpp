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
#include "hyteg/communication/Syncing.hpp"
#include "hyteg/edgedofspace/EdgeDoFMacroCell.hpp"
#include "hyteg/operators/Operator.hpp"
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"

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
///     ∫ k uv

class P2ElementwiseKMass : public Operator< P2Function< real_t >, P2Function< real_t > >,
                           public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseKMass( const std::shared_ptr< PrimitiveStorage >& storage,
                       size_t                                     minLevel,
                       size_t                                     maxLevel,
                       const P2Function< real_t >&                _k );

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
   /// - quadrature rule: Dunavant 4 | points: 6, degree: 4
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    290     300      12       0      0              0                 0              1
   void apply_macro_2D( real_t* RESTRICT _data_dstEdge,
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
                        real_t           micro_edges_per_macro_edge_float ) const;
   /// Kernel type: apply
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1117    1118      36       0      0              0                 0              1
   void apply_macro_3D( real_t* RESTRICT _data_dstEdge,
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
                        real_t           micro_edges_per_macro_edge_float ) const;
   /// Kernel type: toMatrix
   /// - quadrature rule: Dunavant 4 | points: 6, degree: 4
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    254     264      12       0      0              0                 0              4
   void toMatrix_macro_2D( idx_t* RESTRICT                      _data_dstEdge,
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
                           real_t                               micro_edges_per_macro_edge_float ) const;
   /// Kernel type: toMatrix
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1017    1018      36       0      0              0                 0              4
   void toMatrix_macro_3D( idx_t* RESTRICT                      _data_dstEdge,
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
                           real_t                               micro_edges_per_macro_edge_float ) const;
   /// Kernel type: computeInverseDiagonalOperatorValues
   /// - quadrature rule: Dunavant 4 | points: 6, degree: 4
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    170     174      12       0      0              0                 0              1
   void computeInverseDiagonalOperatorValues_macro_2D( real_t* RESTRICT _data_invDiag_Edge,
                                                       real_t* RESTRICT _data_invDiag_Vertex,
                                                       real_t* RESTRICT _data_kEdge,
                                                       real_t* RESTRICT _data_kVertex,
                                                       real_t           macro_vertex_coord_id_0comp0,
                                                       real_t           macro_vertex_coord_id_0comp1,
                                                       real_t           macro_vertex_coord_id_1comp0,
                                                       real_t           macro_vertex_coord_id_1comp1,
                                                       real_t           macro_vertex_coord_id_2comp0,
                                                       real_t           macro_vertex_coord_id_2comp1,
                                                       int64_t          micro_edges_per_macro_edge,
                                                       real_t           micro_edges_per_macro_edge_float ) const;
   /// Kernel type: computeInverseDiagonalOperatorValues
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    532     523      36       0      0              0                 0              1
   void computeInverseDiagonalOperatorValues_macro_3D( real_t* RESTRICT _data_invDiag_Edge,
                                                       real_t* RESTRICT _data_invDiag_Vertex,
                                                       real_t* RESTRICT _data_kEdge,
                                                       real_t* RESTRICT _data_kVertex,
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
   P2Function< real_t >                    k;
};

} // namespace operatorgeneration

} // namespace hyteg
