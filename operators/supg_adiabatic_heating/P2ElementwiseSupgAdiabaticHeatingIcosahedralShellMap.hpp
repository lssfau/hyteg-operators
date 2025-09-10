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
#include "hyteg/geometry/IcosahedralShellMap.hpp"
#include "hyteg/operators/Operator.hpp"
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Adiabatic heating SUPG operator for the TALA
///
/// Intended for LHS use.
///
/// The gravity vector is hard coded for annulus and icosahedral shell,
/// i.e. g := -x / norm(x).
///
/// The scaling function for the supg stabilisation is hard coded into the form.
///
/// delta( u_abs ) := h / ( 2 * u_abs ) * xi( Pe )
///
/// with:
///     xi( Pe ) :=  ( 1 + 2 / ( exp( 2* Pe ) - 1 ) - 1 / Pe ) = coth( Pe ) - 1 / Pe
///     Pe := u_abs * h / ( 2 * k ) as the local Peclet number
///     h as the element diameter
///     k as the thermal conductivity coefficient
///     u_abs as the norm of the velocity vector at the element centroid
///
/// Note: h is calculated from the affine element geometry. If your blending map changes the element diameter too drastically, this will no longer work.
///
/// Geometry map: IcosahedralShellMap
///
/// Weak formulation
///
///     T: trial function (scalar space: Lagrange, degree: 2)
///     w: test function (scalar space: Lagrange, degree: 2)
///     u: coefficient (vector space: Lagrange, degree: 2)
///
///     - ∫ delta T (u · g) ( u · ∇w )
///
class P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap : public Operator< P2Function< real_t >, P2Function< real_t > >,
                                                             public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap(
       const std::shared_ptr< PrimitiveStorage >& storage,
       size_t                                     minLevel,
       size_t                                     maxLevel,
       const P2Function< real_t >&                _ux,
       const P2Function< real_t >&                _uy,
       const P2Function< real_t >&                _uz,
       real_t                                     thermalConductivity_P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap );

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
   /// Integral: P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Gatermann | points: 14, degree: 5
   /// - blending map:    IcosahedralShellMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   6759    9716     218     238    336              0                 0              1
   void applyScaled_P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                                                   real_t* RESTRICT _data_dstVertex,
                                                                                   real_t* RESTRICT _data_srcEdge,
                                                                                   real_t* RESTRICT _data_srcVertex,
                                                                                   real_t* RESTRICT _data_uxEdge,
                                                                                   real_t* RESTRICT _data_uxVertex,
                                                                                   real_t* RESTRICT _data_uyEdge,
                                                                                   real_t* RESTRICT _data_uyVertex,
                                                                                   real_t* RESTRICT _data_uzEdge,
                                                                                   real_t* RESTRICT _data_uzVertex,
                                                                                   real_t           forVertex_0,
                                                                                   real_t           forVertex_1,
                                                                                   real_t           forVertex_2,
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
                                                                                   real_t micro_edges_per_macro_edge_float,
                                                                                   real_t operatorScaling,
                                                                                   real_t radRayVertex,
                                                                                   real_t radRefVertex,
                                                                                   real_t rayVertex_0,
                                                                                   real_t rayVertex_1,
                                                                                   real_t rayVertex_2,
                                                                                   real_t refVertex_0,
                                                                                   real_t refVertex_1,
                                                                                   real_t refVertex_2,
                                                                                   real_t thermalConductivity,
                                                                                   real_t thrVertex_0,
                                                                                   real_t thrVertex_1,
                                                                                   real_t thrVertex_2 ) const;

   /// Integral: P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Gatermann | points: 14, degree: 5
   /// - blending map:    IcosahedralShellMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   6659    9706     218     238    336              0                 0              4
   void toMatrixScaled_P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap_macro_3D( idx_t* RESTRICT  _data_dstEdge,
                                                                                      idx_t* RESTRICT  _data_dstVertex,
                                                                                      idx_t* RESTRICT  _data_srcEdge,
                                                                                      idx_t* RESTRICT  _data_srcVertex,
                                                                                      real_t* RESTRICT _data_uxEdge,
                                                                                      real_t* RESTRICT _data_uxVertex,
                                                                                      real_t* RESTRICT _data_uyEdge,
                                                                                      real_t* RESTRICT _data_uyVertex,
                                                                                      real_t* RESTRICT _data_uzEdge,
                                                                                      real_t* RESTRICT _data_uzVertex,
                                                                                      real_t           forVertex_0,
                                                                                      real_t           forVertex_1,
                                                                                      real_t           forVertex_2,
                                                                                      real_t macro_vertex_coord_id_0comp0,
                                                                                      real_t macro_vertex_coord_id_0comp1,
                                                                                      real_t macro_vertex_coord_id_0comp2,
                                                                                      real_t macro_vertex_coord_id_1comp0,
                                                                                      real_t macro_vertex_coord_id_1comp1,
                                                                                      real_t macro_vertex_coord_id_1comp2,
                                                                                      real_t macro_vertex_coord_id_2comp0,
                                                                                      real_t macro_vertex_coord_id_2comp1,
                                                                                      real_t macro_vertex_coord_id_2comp2,
                                                                                      real_t macro_vertex_coord_id_3comp0,
                                                                                      real_t macro_vertex_coord_id_3comp1,
                                                                                      real_t macro_vertex_coord_id_3comp2,
                                                                                      std::shared_ptr< SparseMatrixProxy > mat,
                                                                                      int64_t micro_edges_per_macro_edge,
                                                                                      real_t  micro_edges_per_macro_edge_float,
                                                                                      real_t  radRayVertex,
                                                                                      real_t  radRefVertex,
                                                                                      real_t  rayVertex_0,
                                                                                      real_t  rayVertex_1,
                                                                                      real_t  rayVertex_2,
                                                                                      real_t  refVertex_0,
                                                                                      real_t  refVertex_1,
                                                                                      real_t  refVertex_2,
                                                                                      real_t  thermalConductivity,
                                                                                      real_t  thrVertex_0,
                                                                                      real_t  thrVertex_1,
                                                                                      real_t  thrVertex_2,
                                                                                      real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Gatermann | points: 14, degree: 5
   /// - blending map:    IcosahedralShellMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   5409    8356     218     238    336              0                 0              1
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap_macro_3D(
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_uxEdge,
       real_t* RESTRICT _data_uxVertex,
       real_t* RESTRICT _data_uyEdge,
       real_t* RESTRICT _data_uyVertex,
       real_t* RESTRICT _data_uzEdge,
       real_t* RESTRICT _data_uzVertex,
       real_t           diagScaling,
       real_t           forVertex_0,
       real_t           forVertex_1,
       real_t           forVertex_2,
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
       real_t           radRayVertex,
       real_t           radRefVertex,
       real_t           rayVertex_0,
       real_t           rayVertex_1,
       real_t           rayVertex_2,
       real_t           refVertex_0,
       real_t           refVertex_1,
       real_t           refVertex_2,
       real_t           thermalConductivity,
       real_t           thrVertex_0,
       real_t           thrVertex_1,
       real_t           thrVertex_2 ) const;

   std::shared_ptr< P2Function< real_t > > invDiag_;
   P2Function< real_t >                    ux;
   P2Function< real_t >                    uy;
   P2Function< real_t >                    uz;
   real_t                                  thermalConductivity_P2ElementwiseSupgAdiabaticHeatingIcosahedralShellMap_;
};

} // namespace operatorgeneration

} // namespace hyteg
