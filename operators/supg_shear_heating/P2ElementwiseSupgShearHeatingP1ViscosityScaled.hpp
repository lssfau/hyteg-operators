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
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Shear heating SUPG operator for the TALA
///
/// Intended for RHS use.
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
/// Geometry map: IdentityMap
///
/// Weak formulation
///
///     T: trial function (scalar space: Lagrange, degree: 2)
///     w: test function (scalar space: Lagrange, degree: 2)
///     u: coefficient (vector space: Lagrange, degree: 2)
///     eta: coefficient (scalar space: Lagrange, degree: 1)
///     rho: coefficient (scalar space: Lagrange, degree: 1)
///
///     ∫ delta 1/rho ( tau(u,eta) : ∇u ) T * ( u · ∇w )
///
///     or equivalently
///
///     ∫ delta 1/rho ( tau(u,eta) : eps(u) ) T * ( u · ∇w )
///
///     with
///
///     tau(u,eta) = 2 eta eps(u)
///     eps(u) := 1/2 ∇u + 1/2 (∇u)^T - 1/dim (∇ · u) I
///     I := Identity Matrix
///
/// Typical usage sets T = 1, i.e. applying the operator to a function containing only ones.

class P2ElementwiseSupgShearHeatingP1ViscosityScaled : public Operator< P2Function< real_t >, P2Function< real_t > >,
                                                       public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseSupgShearHeatingP1ViscosityScaled( const std::shared_ptr< PrimitiveStorage >& storage,
                                                   size_t                                     minLevel,
                                                   size_t                                     maxLevel,
                                                   const P1Function< real_t >&                _eta,
                                                   const P1Function< real_t >&                _rho,
                                                   const P2Function< real_t >&                _ux,
                                                   const P2Function< real_t >&                _uy,
                                                   const P2Function< real_t >&                _uz,
                                                   real_t thermalConductivity_P2ElementwiseSupgShearHeatingP1ViscosityScaled );

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
   /// Integral: P2ElementwiseSupgShearHeatingP1ViscosityScaled
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 4 | points: 6, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    740    1122      78      48     42              0                 0              1
   void applyScaled_P2ElementwiseSupgShearHeatingP1ViscosityScaled_macro_2D( real_t* RESTRICT _data_dstEdge,
                                                                             real_t* RESTRICT _data_dstVertex,
                                                                             real_t* RESTRICT _data_eta,
                                                                             real_t* RESTRICT _data_rho,
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
                                                                             real_t           operatorScaling,
                                                                             real_t           thermalConductivity ) const;

   /// Integral: P2ElementwiseSupgShearHeatingP1ViscosityScaled
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     applyScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   3702    4406     146     132    209              0                 0              1
   void applyScaled_P2ElementwiseSupgShearHeatingP1ViscosityScaled_macro_3D( real_t* RESTRICT _data_dstEdge,
                                                                             real_t* RESTRICT _data_dstVertex,
                                                                             real_t* RESTRICT _data_eta,
                                                                             real_t* RESTRICT _data_rho,
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
                                                                             real_t           operatorScaling,
                                                                             real_t           thermalConductivity ) const;

   /// Integral: P2ElementwiseSupgShearHeatingP1ViscosityScaled
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 4 | points: 6, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    704    1116      78      48     42              0                 0              4
   void toMatrixScaled_P2ElementwiseSupgShearHeatingP1ViscosityScaled_macro_2D( idx_t* RESTRICT  _data_dstEdge,
                                                                                idx_t* RESTRICT  _data_dstVertex,
                                                                                real_t* RESTRICT _data_eta,
                                                                                real_t* RESTRICT _data_rho,
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
                                                                                int64_t micro_edges_per_macro_edge,
                                                                                real_t  micro_edges_per_macro_edge_float,
                                                                                real_t  thermalConductivity,
                                                                                real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseSupgShearHeatingP1ViscosityScaled
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   3602    4396     146     132    209              0                 0              4
   void toMatrixScaled_P2ElementwiseSupgShearHeatingP1ViscosityScaled_macro_3D( idx_t* RESTRICT  _data_dstEdge,
                                                                                idx_t* RESTRICT  _data_dstVertex,
                                                                                real_t* RESTRICT _data_eta,
                                                                                real_t* RESTRICT _data_rho,
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
                                                                                int64_t micro_edges_per_macro_edge,
                                                                                real_t  micro_edges_per_macro_edge_float,
                                                                                real_t  thermalConductivity,
                                                                                real_t  toMatrixScaling ) const;

   /// Integral: P2ElementwiseSupgShearHeatingP1ViscosityScaled
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 4 | points: 6, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    530     906      78      48     42              0                 0              1
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseSupgShearHeatingP1ViscosityScaled_macro_2D(
       real_t* RESTRICT _data_eta,
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_rho,
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
       real_t           micro_edges_per_macro_edge_float,
       real_t           thermalConductivity ) const;

   /// Integral: P2ElementwiseSupgShearHeatingP1ViscosityScaled
   /// - volume element:  tetrahedron, dim: 3, vertices: 4, spacedim: 3
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Jaśkowiec-Sukumar 04 | points: 11, degree: 4
   /// - blending map:    IdentityMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///   2622    3316     146     132    209              0                 0              1
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseSupgShearHeatingP1ViscosityScaled_macro_3D(
       real_t* RESTRICT _data_eta,
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_rho,
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
       real_t           micro_edges_per_macro_edge_float,
       real_t           thermalConductivity ) const;

   std::shared_ptr< P2Function< real_t > > invDiag_;
   P1Function< real_t >                    eta;
   P1Function< real_t >                    rho;
   P2Function< real_t >                    ux;
   P2Function< real_t >                    uy;
   P2Function< real_t >                    uz;
   real_t                                  thermalConductivity_P2ElementwiseSupgShearHeatingP1ViscosityScaled_;
};

} // namespace operatorgeneration

} // namespace hyteg
