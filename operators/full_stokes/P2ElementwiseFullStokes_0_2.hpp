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
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Implements the fully coupled viscous operator of the Stokes problem.
/// The latter is the extension of the Epsilon operator to the case where
/// the velocity field need not be divergence-free. This is e.g. the case
/// in the (truncated) anelastic liquid approximation of mantle convection.
///
/// The strong representation of the operator is given by:
///
///    - div[ μ (grad(u)+grad(u)ᵀ) ] + (2/3) grad[ μ div(u) ]
///
/// Note that the factor 2/3 means that for 2D this is the pseudo-3D form of the operator.
///
/// Component trial: 2
/// Component test:  0
/// Geometry map:    IdentityMap
///
/// Weak formulation
///
///     u: trial function (vectorial space: TensorialVectorSpace(Lagrange, degree: 2, component 2))
///     v: test function  (vectorial space: TensorialVectorSpace(Lagrange, degree: 2, component 0))
///     μ: coefficient    (scalar space:    Lagrange, degree: 2)
///
///     ∫ μ { ( 2 ε(u) : ε(v) ) - (2/3) [ ( ∇ · u ) · ( ∇ · v ) ] }
///
/// where
///
///     ε(w) := (1/2) (∇w + (∇w)ᵀ)

class P2ElementwiseFullStokes_0_2 : public Operator< P2Function< real_t >, P2Function< real_t > >
{
 public:
   P2ElementwiseFullStokes_0_2( const std::shared_ptr< PrimitiveStorage >& storage,
                                size_t                                     minLevel,
                                size_t                                     maxLevel,
                                const P2Function< real_t >&                _mu );

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

 protected:
 private:
   /// Integral: P2ElementwiseFullStokes_0_2
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   2209    2186      36       0      0              0                 0              1
   void applyScaled_P2ElementwiseFullStokes_0_2_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                          real_t* RESTRICT _data_dstVertex,
                                                          real_t* RESTRICT _data_muEdge,
                                                          real_t* RESTRICT _data_muVertex,
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

   /// Integral: P2ElementwiseFullStokes_0_2
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Hammer-Marlowe-Stroud 1 | points: 4, degree: 2
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   2109    2176      36       0      0              0                 0              4
   void toMatrixScaled_P2ElementwiseFullStokes_0_2_macro_3D( idx_t* RESTRICT                      _data_dstEdge,
                                                             idx_t* RESTRICT                      _data_dstVertex,
                                                             real_t* RESTRICT                     _data_muEdge,
                                                             real_t* RESTRICT                     _data_muVertex,
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
                                                             real_t micro_edges_per_macro_edge_float,
                                                             real_t toMatrixScaling ) const;

   P2Function< real_t > mu;
};

} // namespace operatorgeneration

} // namespace hyteg
