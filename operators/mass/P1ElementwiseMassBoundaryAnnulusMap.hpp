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
#include "hyteg/geometry/AnnulusMap.hpp"
#include "hyteg/operators/Operator.hpp"
#include "hyteg/p1functionspace/P1Function.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Mass operator.
///
/// Geometry map: AnnulusMap
///
/// Weak formulation
///
///     u: trial function (space: Lagrange, degree: 1)
///     v: test function  (space: Lagrange, degree: 1)
///
///     ∫ uv ds

class P1ElementwiseMassBoundaryAnnulusMap : public Operator< P1Function< real_t >, P1Function< real_t > >,
                                            public OperatorWithInverseDiagonal< P1Function< real_t > >
{
 public:
   P1ElementwiseMassBoundaryAnnulusMap( const std::shared_ptr< PrimitiveStorage >& storage,
                                        size_t                                     minLevel,
                                        size_t                                     maxLevel,
                                        BoundaryCondition                          boundaryCondition,
                                        BoundaryUID P1ElementwiseMassBoundaryAnnulusMap_boundary_uid );

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
   /// Integral: P1ElementwiseMassBoundaryAnnulusMap_facet_id_0
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     apply
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     83     116      13       6      2              0                 0              0
   void apply_P1ElementwiseMassBoundaryAnnulusMap_facet_id_0_macro_2D( real_t* RESTRICT _data_dst,
                                                                       real_t* RESTRICT _data_src,
                                                                       real_t           macro_vertex_coord_id_0comp0,
                                                                       real_t           macro_vertex_coord_id_0comp1,
                                                                       real_t           macro_vertex_coord_id_1comp0,
                                                                       real_t           macro_vertex_coord_id_1comp1,
                                                                       real_t           macro_vertex_coord_id_2comp0,
                                                                       real_t           macro_vertex_coord_id_2comp1,
                                                                       int64_t          micro_edges_per_macro_edge,
                                                                       real_t           micro_edges_per_macro_edge_float,
                                                                       real_t           radRayVertex,
                                                                       real_t           radRefVertex,
                                                                       real_t           rayVertex_0,
                                                                       real_t           rayVertex_1,
                                                                       real_t           refVertex_0,
                                                                       real_t           refVertex_1,
                                                                       real_t           thrVertex_0,
                                                                       real_t           thrVertex_1 ) const;

   /// Integral: P1ElementwiseMassBoundaryAnnulusMap_facet_id_1
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     apply
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     83     116      13       6      2              0                 0              0
   void apply_P1ElementwiseMassBoundaryAnnulusMap_facet_id_1_macro_2D( real_t* RESTRICT _data_dst,
                                                                       real_t* RESTRICT _data_src,
                                                                       real_t           macro_vertex_coord_id_0comp0,
                                                                       real_t           macro_vertex_coord_id_0comp1,
                                                                       real_t           macro_vertex_coord_id_1comp0,
                                                                       real_t           macro_vertex_coord_id_1comp1,
                                                                       real_t           macro_vertex_coord_id_2comp0,
                                                                       real_t           macro_vertex_coord_id_2comp1,
                                                                       int64_t          micro_edges_per_macro_edge,
                                                                       real_t           micro_edges_per_macro_edge_float,
                                                                       real_t           radRayVertex,
                                                                       real_t           radRefVertex,
                                                                       real_t           rayVertex_0,
                                                                       real_t           rayVertex_1,
                                                                       real_t           refVertex_0,
                                                                       real_t           refVertex_1,
                                                                       real_t           thrVertex_0,
                                                                       real_t           thrVertex_1 ) const;

   /// Integral: P1ElementwiseMassBoundaryAnnulusMap_facet_id_2
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     apply
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     83     116      13       6      2              0                 0              0
   void apply_P1ElementwiseMassBoundaryAnnulusMap_facet_id_2_macro_2D( real_t* RESTRICT _data_dst,
                                                                       real_t* RESTRICT _data_src,
                                                                       real_t           macro_vertex_coord_id_0comp0,
                                                                       real_t           macro_vertex_coord_id_0comp1,
                                                                       real_t           macro_vertex_coord_id_1comp0,
                                                                       real_t           macro_vertex_coord_id_1comp1,
                                                                       real_t           macro_vertex_coord_id_2comp0,
                                                                       real_t           macro_vertex_coord_id_2comp1,
                                                                       int64_t          micro_edges_per_macro_edge,
                                                                       real_t           micro_edges_per_macro_edge_float,
                                                                       real_t           radRayVertex,
                                                                       real_t           radRefVertex,
                                                                       real_t           rayVertex_0,
                                                                       real_t           rayVertex_1,
                                                                       real_t           refVertex_0,
                                                                       real_t           refVertex_1,
                                                                       real_t           thrVertex_0,
                                                                       real_t           thrVertex_1 ) const;

   /// Integral: P1ElementwiseMassBoundaryAnnulusMap_facet_id_0
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrix
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     74     107      13       6      2              0                 0              3
   void toMatrix_P1ElementwiseMassBoundaryAnnulusMap_facet_id_0_macro_2D( idx_t* RESTRICT _data_dst,
                                                                          idx_t* RESTRICT _data_src,
                                                                          real_t          macro_vertex_coord_id_0comp0,
                                                                          real_t          macro_vertex_coord_id_0comp1,
                                                                          real_t          macro_vertex_coord_id_1comp0,
                                                                          real_t          macro_vertex_coord_id_1comp1,
                                                                          real_t          macro_vertex_coord_id_2comp0,
                                                                          real_t          macro_vertex_coord_id_2comp1,
                                                                          std::shared_ptr< SparseMatrixProxy > mat,
                                                                          int64_t micro_edges_per_macro_edge,
                                                                          real_t  micro_edges_per_macro_edge_float,
                                                                          real_t  radRayVertex,
                                                                          real_t  radRefVertex,
                                                                          real_t  rayVertex_0,
                                                                          real_t  rayVertex_1,
                                                                          real_t  refVertex_0,
                                                                          real_t  refVertex_1,
                                                                          real_t  thrVertex_0,
                                                                          real_t  thrVertex_1 ) const;

   /// Integral: P1ElementwiseMassBoundaryAnnulusMap_facet_id_1
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrix
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     74     107      13       6      2              0                 0              3
   void toMatrix_P1ElementwiseMassBoundaryAnnulusMap_facet_id_1_macro_2D( idx_t* RESTRICT _data_dst,
                                                                          idx_t* RESTRICT _data_src,
                                                                          real_t          macro_vertex_coord_id_0comp0,
                                                                          real_t          macro_vertex_coord_id_0comp1,
                                                                          real_t          macro_vertex_coord_id_1comp0,
                                                                          real_t          macro_vertex_coord_id_1comp1,
                                                                          real_t          macro_vertex_coord_id_2comp0,
                                                                          real_t          macro_vertex_coord_id_2comp1,
                                                                          std::shared_ptr< SparseMatrixProxy > mat,
                                                                          int64_t micro_edges_per_macro_edge,
                                                                          real_t  micro_edges_per_macro_edge_float,
                                                                          real_t  radRayVertex,
                                                                          real_t  radRefVertex,
                                                                          real_t  rayVertex_0,
                                                                          real_t  rayVertex_1,
                                                                          real_t  refVertex_0,
                                                                          real_t  refVertex_1,
                                                                          real_t  thrVertex_0,
                                                                          real_t  thrVertex_1 ) const;

   /// Integral: P1ElementwiseMassBoundaryAnnulusMap_facet_id_2
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrix
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     74     107      13       6      2              0                 0              3
   void toMatrix_P1ElementwiseMassBoundaryAnnulusMap_facet_id_2_macro_2D( idx_t* RESTRICT _data_dst,
                                                                          idx_t* RESTRICT _data_src,
                                                                          real_t          macro_vertex_coord_id_0comp0,
                                                                          real_t          macro_vertex_coord_id_0comp1,
                                                                          real_t          macro_vertex_coord_id_1comp0,
                                                                          real_t          macro_vertex_coord_id_1comp1,
                                                                          real_t          macro_vertex_coord_id_2comp0,
                                                                          real_t          macro_vertex_coord_id_2comp1,
                                                                          std::shared_ptr< SparseMatrixProxy > mat,
                                                                          int64_t micro_edges_per_macro_edge,
                                                                          real_t  micro_edges_per_macro_edge_float,
                                                                          real_t  radRayVertex,
                                                                          real_t  radRefVertex,
                                                                          real_t  rayVertex_0,
                                                                          real_t  rayVertex_1,
                                                                          real_t  refVertex_0,
                                                                          real_t  refVertex_1,
                                                                          real_t  thrVertex_0,
                                                                          real_t  thrVertex_1 ) const;

   /// Integral: P1ElementwiseMassBoundaryAnnulusMap_facet_id_0
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     76     103      13       6      2              0                 0              0
   void computeInverseDiagonalOperatorValues_P1ElementwiseMassBoundaryAnnulusMap_facet_id_0_macro_2D(
       real_t* RESTRICT _data_invDiag_,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float,
       real_t           radRayVertex,
       real_t           radRefVertex,
       real_t           rayVertex_0,
       real_t           rayVertex_1,
       real_t           refVertex_0,
       real_t           refVertex_1,
       real_t           thrVertex_0,
       real_t           thrVertex_1 ) const;

   /// Integral: P1ElementwiseMassBoundaryAnnulusMap_facet_id_1
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     76     103      13       6      2              0                 0              0
   void computeInverseDiagonalOperatorValues_P1ElementwiseMassBoundaryAnnulusMap_facet_id_1_macro_2D(
       real_t* RESTRICT _data_invDiag_,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float,
       real_t           radRayVertex,
       real_t           radRefVertex,
       real_t           rayVertex_0,
       real_t           rayVertex_1,
       real_t           refVertex_0,
       real_t           refVertex_1,
       real_t           thrVertex_0,
       real_t           thrVertex_1 ) const;

   /// Integral: P1ElementwiseMassBoundaryAnnulusMap_facet_id_2
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   BOUNDARY
   /// - quadrature rule: Gauss-Legendre | points: 2, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///     76     103      13       6      2              0                 0              0
   void computeInverseDiagonalOperatorValues_P1ElementwiseMassBoundaryAnnulusMap_facet_id_2_macro_2D(
       real_t* RESTRICT _data_invDiag_,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float,
       real_t           radRayVertex,
       real_t           radRefVertex,
       real_t           rayVertex_0,
       real_t           rayVertex_1,
       real_t           refVertex_0,
       real_t           refVertex_1,
       real_t           thrVertex_0,
       real_t           thrVertex_1 ) const;

   std::shared_ptr< P1Function< real_t > > invDiag_;
   BoundaryCondition                       boundaryCondition_;
   BoundaryUID                             P1ElementwiseMassBoundaryAnnulusMap_boundary_uid_;
};

} // namespace operatorgeneration

} // namespace hyteg
