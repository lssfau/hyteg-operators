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
#include "hyteg/p1functionspace/P1VectorFunction.hpp"
#include "hyteg/p2functionspace/P2VectorFunction.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Mass operator.
///
/// Geometry map: ParametricMapP1
///
/// Weak formulation
///
///     u: trial function (space: Lagrange, degree: 1)
///     v: test function  (space: Lagrange, degree: 1)
///
///     ∫ uv

class P1ElementwiseMassParametricP1Map : public Operator< P1Function< real_t >, P1Function< real_t > >,
                                         public OperatorWithInverseDiagonal< P1Function< real_t > >
{
 public:
   P1ElementwiseMassParametricP1Map( const std::shared_ptr< PrimitiveStorage >& storage,
                                     size_t                                     minLevel,
                                     size_t                                     maxLevel,
                                     const P1VectorFunction< real_t >&          _micromesh );

   void apply( const P1Function< real_t >& src,
               const P1Function< real_t >& dst,
               uint_t                      level,
               DoFType                     flag,
               UpdateType                  updateType = Replace ) const;

   void toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                  const P1Function< idx_t >&                  src,
                  const P1Function< idx_t >&                  dst,
                  uint_t                                      level,
                  DoFType                                     flag ) const;

   void computeInverseDiagonalOperatorValues();

   std::shared_ptr< P1Function< real_t > > getInverseDiagonalValues() const;

 protected:
 private:
   /// Integral: P1ElementwiseMassParametricP1Map
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    ParametricMapP1
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     74      60      12       0      3              0                 0              1
   void apply_P1ElementwiseMassParametricP1Map_macro_2D( real_t* RESTRICT _data_dst,
                                                         real_t* RESTRICT _data_micromesh_0,
                                                         real_t* RESTRICT _data_micromesh_1,
                                                         real_t* RESTRICT _data_src,
                                                         real_t           macro_vertex_coord_id_0comp0,
                                                         real_t           macro_vertex_coord_id_0comp1,
                                                         real_t           macro_vertex_coord_id_1comp0,
                                                         real_t           macro_vertex_coord_id_1comp1,
                                                         real_t           macro_vertex_coord_id_2comp0,
                                                         real_t           macro_vertex_coord_id_2comp1,
                                                         int64_t          micro_edges_per_macro_edge,
                                                         real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P1ElementwiseMassParametricP1Map
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    ParametricMapP1
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    205     180      36       0      4              0                 0              1
   void apply_P1ElementwiseMassParametricP1Map_macro_3D( real_t* RESTRICT _data_dst,
                                                         real_t* RESTRICT _data_micromesh_0,
                                                         real_t* RESTRICT _data_micromesh_1,
                                                         real_t* RESTRICT _data_micromesh_2,
                                                         real_t* RESTRICT _data_src,
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

   /// Integral: P1ElementwiseMassParametricP1Map
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    ParametricMapP1
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     65      51      12       0      3              0                 0              4
   void toMatrix_P1ElementwiseMassParametricP1Map_macro_2D( idx_t* RESTRICT                      _data_dst,
                                                            real_t* RESTRICT                     _data_micromesh_0,
                                                            real_t* RESTRICT                     _data_micromesh_1,
                                                            idx_t* RESTRICT                      _data_src,
                                                            real_t                               macro_vertex_coord_id_0comp0,
                                                            real_t                               macro_vertex_coord_id_0comp1,
                                                            real_t                               macro_vertex_coord_id_1comp0,
                                                            real_t                               macro_vertex_coord_id_1comp1,
                                                            real_t                               macro_vertex_coord_id_2comp0,
                                                            real_t                               macro_vertex_coord_id_2comp1,
                                                            std::shared_ptr< SparseMatrixProxy > mat,
                                                            int64_t                              micro_edges_per_macro_edge,
                                                            real_t micro_edges_per_macro_edge_float ) const;

   /// Integral: P1ElementwiseMassParametricP1Map
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    ParametricMapP1
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    189     164      36       0      4              0                 0              4
   void toMatrix_P1ElementwiseMassParametricP1Map_macro_3D( idx_t* RESTRICT                      _data_dst,
                                                            real_t* RESTRICT                     _data_micromesh_0,
                                                            real_t* RESTRICT                     _data_micromesh_1,
                                                            real_t* RESTRICT                     _data_micromesh_2,
                                                            idx_t* RESTRICT                      _data_src,
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
                                                            real_t micro_edges_per_macro_edge_float ) const;

   /// Integral: P1ElementwiseMassParametricP1Map
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    ParametricMapP1
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     59      42      12       0      3              0                 0              1
   void computeInverseDiagonalOperatorValues_P1ElementwiseMassParametricP1Map_macro_2D(
       real_t* RESTRICT _data_invDiag_,
       real_t* RESTRICT _data_micromesh_0,
       real_t* RESTRICT _data_micromesh_1,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P1ElementwiseMassParametricP1Map
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    ParametricMapP1
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    169     140      36       0      4              0                 0              1
   void computeInverseDiagonalOperatorValues_P1ElementwiseMassParametricP1Map_macro_3D(
       real_t* RESTRICT _data_invDiag_,
       real_t* RESTRICT _data_micromesh_0,
       real_t* RESTRICT _data_micromesh_1,
       real_t* RESTRICT _data_micromesh_2,
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

   std::shared_ptr< P1Function< real_t > > invDiag_;
   P1VectorFunction< real_t >              micromesh;
};

} // namespace operatorgeneration

} // namespace hyteg
