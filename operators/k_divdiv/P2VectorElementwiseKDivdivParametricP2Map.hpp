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
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/p2functionspace/P2VectorFunction.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// divdiv operator which is the compressible part of full Stokes operator
///
/// Geometry map:    ParametricMapP2
///
/// Weak formulation
///
///     u: trial function (vectorial space: TensorialVectorSpace(Lagrange, degree: 2))
///     v: test function  (vectorial space: TensorialVectorSpace(Lagrange, degree: 2))
///
///     ∫ μ ( ∇ · u ) · ( ∇ · v )

class P2VectorElementwiseKDivdivParametricP2Map : public Operator< P2VectorFunction< real_t >, P2VectorFunction< real_t > >,
                                                  public OperatorWithInverseDiagonal< P2VectorFunction< real_t > >
{
 public:
   P2VectorElementwiseKDivdivParametricP2Map( const std::shared_ptr< PrimitiveStorage >& storage,
                                              size_t                                     minLevel,
                                              size_t                                     maxLevel,
                                              const P1Function< real_t >&                _k,
                                              const P2VectorFunction< real_t >&          _micromesh );

   void apply( const P2VectorFunction< real_t >& src,
               const P2VectorFunction< real_t >& dst,
               uint_t                            level,
               DoFType                           flag,
               UpdateType                        updateType = Replace ) const;

   void toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                  const P2VectorFunction< idx_t >&            src,
                  const P2VectorFunction< idx_t >&            dst,
                  uint_t                                      level,
                  DoFType                                     flag ) const;

   void computeInverseDiagonalOperatorValues();

   std::shared_ptr< P2VectorFunction< real_t > > getInverseDiagonalValues() const;

 protected:
 private:
   /// Integral: P2VectorElementwiseKDivdivParametricP2Map
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    700     804      16       0      4              0                 0              1
   void apply_P2VectorElementwiseKDivdivParametricP2Map_macro_2D( real_t* RESTRICT _data_dst_edge_0,
                                                                  real_t* RESTRICT _data_dst_edge_1,
                                                                  real_t* RESTRICT _data_dst_vertex_0,
                                                                  real_t* RESTRICT _data_dst_vertex_1,
                                                                  real_t* RESTRICT _data_k,
                                                                  real_t* RESTRICT _data_micromesh_edge_0,
                                                                  real_t* RESTRICT _data_micromesh_edge_1,
                                                                  real_t* RESTRICT _data_micromesh_vertex_0,
                                                                  real_t* RESTRICT _data_micromesh_vertex_1,
                                                                  real_t* RESTRICT _data_src_edge_0,
                                                                  real_t* RESTRICT _data_src_edge_1,
                                                                  real_t* RESTRICT _data_src_vertex_0,
                                                                  real_t* RESTRICT _data_src_vertex_1,
                                                                  real_t           macro_vertex_coord_id_0comp0,
                                                                  real_t           macro_vertex_coord_id_0comp1,
                                                                  real_t           macro_vertex_coord_id_1comp0,
                                                                  real_t           macro_vertex_coord_id_1comp1,
                                                                  real_t           macro_vertex_coord_id_2comp0,
                                                                  real_t           macro_vertex_coord_id_2comp1,
                                                                  int64_t          micro_edges_per_macro_edge,
                                                                  real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2VectorElementwiseKDivdivParametricP2Map
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 3 | points: 5, degree: 3
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   4243    4542      41       0      5              0                 0              1
   void apply_P2VectorElementwiseKDivdivParametricP2Map_macro_3D( real_t* RESTRICT _data_dst_edge_0,
                                                                  real_t* RESTRICT _data_dst_edge_1,
                                                                  real_t* RESTRICT _data_dst_edge_2,
                                                                  real_t* RESTRICT _data_dst_vertex_0,
                                                                  real_t* RESTRICT _data_dst_vertex_1,
                                                                  real_t* RESTRICT _data_dst_vertex_2,
                                                                  real_t* RESTRICT _data_k,
                                                                  real_t* RESTRICT _data_micromesh_edge_0,
                                                                  real_t* RESTRICT _data_micromesh_edge_1,
                                                                  real_t* RESTRICT _data_micromesh_edge_2,
                                                                  real_t* RESTRICT _data_micromesh_vertex_0,
                                                                  real_t* RESTRICT _data_micromesh_vertex_1,
                                                                  real_t* RESTRICT _data_micromesh_vertex_2,
                                                                  real_t* RESTRICT _data_src_edge_0,
                                                                  real_t* RESTRICT _data_src_edge_1,
                                                                  real_t* RESTRICT _data_src_edge_2,
                                                                  real_t* RESTRICT _data_src_vertex_0,
                                                                  real_t* RESTRICT _data_src_vertex_1,
                                                                  real_t* RESTRICT _data_src_vertex_2,
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

   /// Integral: P2VectorElementwiseKDivdivParametricP2Map
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    556     660      16       0      4              0                 0              4
   void toMatrix_P2VectorElementwiseKDivdivParametricP2Map_macro_2D( idx_t* RESTRICT  _data_dst_edge_0,
                                                                     idx_t* RESTRICT  _data_dst_edge_1,
                                                                     idx_t* RESTRICT  _data_dst_vertex_0,
                                                                     idx_t* RESTRICT  _data_dst_vertex_1,
                                                                     real_t* RESTRICT _data_k,
                                                                     real_t* RESTRICT _data_micromesh_edge_0,
                                                                     real_t* RESTRICT _data_micromesh_edge_1,
                                                                     real_t* RESTRICT _data_micromesh_vertex_0,
                                                                     real_t* RESTRICT _data_micromesh_vertex_1,
                                                                     idx_t* RESTRICT  _data_src_edge_0,
                                                                     idx_t* RESTRICT  _data_src_edge_1,
                                                                     idx_t* RESTRICT  _data_src_vertex_0,
                                                                     idx_t* RESTRICT  _data_src_vertex_1,
                                                                     real_t           macro_vertex_coord_id_0comp0,
                                                                     real_t           macro_vertex_coord_id_0comp1,
                                                                     real_t           macro_vertex_coord_id_1comp0,
                                                                     real_t           macro_vertex_coord_id_1comp1,
                                                                     real_t           macro_vertex_coord_id_2comp0,
                                                                     real_t           macro_vertex_coord_id_2comp1,
                                                                     std::shared_ptr< SparseMatrixProxy > mat,
                                                                     int64_t micro_edges_per_macro_edge,
                                                                     real_t  micro_edges_per_macro_edge_float ) const;

   /// Integral: P2VectorElementwiseKDivdivParametricP2Map
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 3 | points: 5, degree: 3
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   3343    3642      41       0      5              0                 0              4
   void toMatrix_P2VectorElementwiseKDivdivParametricP2Map_macro_3D( idx_t* RESTRICT  _data_dst_edge_0,
                                                                     idx_t* RESTRICT  _data_dst_edge_1,
                                                                     idx_t* RESTRICT  _data_dst_edge_2,
                                                                     idx_t* RESTRICT  _data_dst_vertex_0,
                                                                     idx_t* RESTRICT  _data_dst_vertex_1,
                                                                     idx_t* RESTRICT  _data_dst_vertex_2,
                                                                     real_t* RESTRICT _data_k,
                                                                     real_t* RESTRICT _data_micromesh_edge_0,
                                                                     real_t* RESTRICT _data_micromesh_edge_1,
                                                                     real_t* RESTRICT _data_micromesh_edge_2,
                                                                     real_t* RESTRICT _data_micromesh_vertex_0,
                                                                     real_t* RESTRICT _data_micromesh_vertex_1,
                                                                     real_t* RESTRICT _data_micromesh_vertex_2,
                                                                     idx_t* RESTRICT  _data_src_edge_0,
                                                                     idx_t* RESTRICT  _data_src_edge_1,
                                                                     idx_t* RESTRICT  _data_src_edge_2,
                                                                     idx_t* RESTRICT  _data_src_vertex_0,
                                                                     idx_t* RESTRICT  _data_src_vertex_1,
                                                                     idx_t* RESTRICT  _data_src_vertex_2,
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
                                                                     real_t  micro_edges_per_macro_edge_float ) const;

   /// Integral: P2VectorElementwiseKDivdivParametricP2Map
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    304     352      16       0      4              0                 0              1
   void computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdivParametricP2Map_macro_2D(
       real_t* RESTRICT _data_invDiag__edge_0,
       real_t* RESTRICT _data_invDiag__edge_1,
       real_t* RESTRICT _data_invDiag__vertex_0,
       real_t* RESTRICT _data_invDiag__vertex_1,
       real_t* RESTRICT _data_k,
       real_t* RESTRICT _data_micromesh_edge_0,
       real_t* RESTRICT _data_micromesh_edge_1,
       real_t* RESTRICT _data_micromesh_vertex_0,
       real_t* RESTRICT _data_micromesh_vertex_1,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float ) const;

   /// Integral: P2VectorElementwiseKDivdivParametricP2Map
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 3 | points: 5, degree: 3
   /// - blending map:    ParametricMapP2
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   1198    1322      41       0      5              0                 0              1
   void computeInverseDiagonalOperatorValues_P2VectorElementwiseKDivdivParametricP2Map_macro_3D(
       real_t* RESTRICT _data_invDiag__edge_0,
       real_t* RESTRICT _data_invDiag__edge_1,
       real_t* RESTRICT _data_invDiag__edge_2,
       real_t* RESTRICT _data_invDiag__vertex_0,
       real_t* RESTRICT _data_invDiag__vertex_1,
       real_t* RESTRICT _data_invDiag__vertex_2,
       real_t* RESTRICT _data_k,
       real_t* RESTRICT _data_micromesh_edge_0,
       real_t* RESTRICT _data_micromesh_edge_1,
       real_t* RESTRICT _data_micromesh_edge_2,
       real_t* RESTRICT _data_micromesh_vertex_0,
       real_t* RESTRICT _data_micromesh_vertex_1,
       real_t* RESTRICT _data_micromesh_vertex_2,
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

   std::shared_ptr< P2VectorFunction< real_t > > invDiag_;
   P1Function< real_t >                          k;
   P2VectorFunction< real_t >                    micromesh;
};

} // namespace operatorgeneration

} // namespace hyteg
