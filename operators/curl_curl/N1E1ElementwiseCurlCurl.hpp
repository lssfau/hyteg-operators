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
#include "hyteg/n1e1functionspace/N1E1MacroCell.hpp"
#include "hyteg/n1e1functionspace/N1E1VectorFunction.hpp"
#include "hyteg/operators/Operator.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

class N1E1ElementwiseCurlCurl : public Operator< n1e1::N1E1VectorFunction< real_t >, n1e1::N1E1VectorFunction< real_t > >,
                                public OperatorWithInverseDiagonal< n1e1::N1E1VectorFunction< real_t > >
{
 public:
   N1E1ElementwiseCurlCurl( const std::shared_ptr< PrimitiveStorage >& storage, size_t minLevel, size_t maxLevel );

   void apply( const n1e1::N1E1VectorFunction< real_t >& src,
               const n1e1::N1E1VectorFunction< real_t >& dst,
               uint_t                                    level,
               DoFType                                   flag,
               UpdateType                                updateType = Replace ) const;

   void toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                  const n1e1::N1E1VectorFunction< idx_t >&    src,
                  const n1e1::N1E1VectorFunction< idx_t >&    dst,
                  uint_t                                      level,
                  DoFType                                     flag ) const;

   void computeInverseDiagonalOperatorValues();

   std::shared_ptr< n1e1::N1E1VectorFunction< real_t > > getInverseDiagonalValues() const;

 protected:
 private:
   /// Integral: N1E1ElementwiseCurlCurl
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Keast 0 | points: 1, degree: 1
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    180     202      37       0      0              0                 0              1
   void apply_N1E1ElementwiseCurlCurl_macro_3D( real_t* RESTRICT _data_dst,
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

   /// Integral: N1E1ElementwiseCurlCurl
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Keast 0 | points: 1, degree: 1
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    144     253      37       0      0              0                 0              4
   void toMatrix_N1E1ElementwiseCurlCurl_macro_3D( idx_t* RESTRICT                      _data_dst,
                                                   idx_t* RESTRICT                      _data_src,
                                                   const Cell&                          cell,
                                                   const uint_t                         level,
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

   /// Integral: N1E1ElementwiseCurlCurl
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Keast 0 | points: 1, degree: 1
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    120     115      37       0      0              0                 0              1
   void computeInverseDiagonalOperatorValues_N1E1ElementwiseCurlCurl_macro_3D( real_t* RESTRICT _data_invDiag_,
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

   std::shared_ptr< n1e1::N1E1VectorFunction< real_t > > invDiag_;
};

} // namespace operatorgeneration

} // namespace hyteg
