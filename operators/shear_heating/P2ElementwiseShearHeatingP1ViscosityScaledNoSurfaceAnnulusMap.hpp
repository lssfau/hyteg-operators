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
#include "hyteg/p2functionspace/P2Function.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/solvers/Smoothables.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Implements the fully coupled viscous operator for the shear heating term.
/// The latter is the extension of the Epsilon operator to the case where
/// the velocity field need not be divergence-free. This is e.g. the case
/// in the (truncated) anelastic liquid approximation of mantle convection.
///
/// https://doi.org/10.1111/j.1365-246X.2009.04413.x
/// (3) and (5)
///
/// https://doi.org/10.5194/gmd-15-5127-2022
/// Listing 2
///
/// Intended for RHS use.
///
/// Geometry map: AnnulusMap
///
/// Weak formulation
///
///     T: trial function (scalar space: Lagrange, degree: 2)
///     w: test function (scalar space: Lagrange, degree: 2)
///     u: coefficient (vector space: Lagrange, degree: 2)
///     eta: coefficient (scalar space: Lagrange, degree: 1)
///     rho: coefficient (scalar space: Lagrange, degree: 1)
///
///     ∫ 1/rho ( tau(u,eta) : ∇u ) T * w
///
///     or equivalently
///
///     ∫ 1/rho ( tau(u,eta) : eps(u) ) T * w
///
///     with
///
///     tau(u,eta) = 2 eta eps(u)
///     eps(u) := 1/2 ∇u + 1/2 (∇u)^T - 1/dim (∇ · u) I
///     I := Identity Matrix
///
/// This operator was designed for annulus and spherical shell use and includes a scaling factor of 0 close to the surface.
/// Define the (usually nondimensional) surface radius and cutoff distance to the surface via the constructor.
///
/// Typical usage sets T = 1, i.e. applying the operator to a function containing only ones.

class P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap
: public Operator< P2Function< real_t >, P2Function< real_t > >,
  public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap(
       const std::shared_ptr< PrimitiveStorage >& storage,
       size_t                                     minLevel,
       size_t                                     maxLevel,
       const P1Function< real_t >&                _eta,
       const P1Function< real_t >&                _rho,
       const P2Function< real_t >&                _ux,
       const P2Function< real_t >&                _uy,
       real_t                                     cutoff_P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap,
       real_t                                     radius_surface_P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap );

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
   /// Integral: P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     applyScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 5 | points: 7, degree: 5
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    936    1277      47      35     21              0                 0              1
   void applyScaled_P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap_macro_2D(
       real_t* RESTRICT _data_dstEdge,
       real_t* RESTRICT _data_dstVertex,
       real_t* RESTRICT _data_eta,
       real_t* RESTRICT _data_rho,
       real_t* RESTRICT _data_srcEdge,
       real_t* RESTRICT _data_srcVertex,
       real_t* RESTRICT _data_uxEdge,
       real_t* RESTRICT _data_uxVertex,
       real_t* RESTRICT _data_uyEdge,
       real_t* RESTRICT _data_uyVertex,
       real_t           cutoff,
       real_t           macro_vertex_coord_id_0comp0,
       real_t           macro_vertex_coord_id_0comp1,
       real_t           macro_vertex_coord_id_1comp0,
       real_t           macro_vertex_coord_id_1comp1,
       real_t           macro_vertex_coord_id_2comp0,
       real_t           macro_vertex_coord_id_2comp1,
       int64_t          micro_edges_per_macro_edge,
       real_t           micro_edges_per_macro_edge_float,
       real_t           operatorScaling,
       real_t           radRayVertex,
       real_t           radRefVertex,
       real_t           radius_surface,
       real_t           rayVertex_0,
       real_t           rayVertex_1,
       real_t           refVertex_0,
       real_t           refVertex_1,
       real_t           thrVertex_0,
       real_t           thrVertex_1 ) const;

   /// Integral: P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrixScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 5 | points: 7, degree: 5
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    900    1256      47      35     21              0                 0              4
   void toMatrixScaled_P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap_macro_2D(
       idx_t* RESTRICT                      _data_dstEdge,
       idx_t* RESTRICT                      _data_dstVertex,
       real_t* RESTRICT                     _data_eta,
       real_t* RESTRICT                     _data_rho,
       idx_t* RESTRICT                      _data_srcEdge,
       idx_t* RESTRICT                      _data_srcVertex,
       real_t* RESTRICT                     _data_uxEdge,
       real_t* RESTRICT                     _data_uxVertex,
       real_t* RESTRICT                     _data_uyEdge,
       real_t* RESTRICT                     _data_uyVertex,
       real_t                               cutoff,
       real_t                               macro_vertex_coord_id_0comp0,
       real_t                               macro_vertex_coord_id_0comp1,
       real_t                               macro_vertex_coord_id_1comp0,
       real_t                               macro_vertex_coord_id_1comp1,
       real_t                               macro_vertex_coord_id_2comp0,
       real_t                               macro_vertex_coord_id_2comp1,
       std::shared_ptr< SparseMatrixProxy > mat,
       int64_t                              micro_edges_per_macro_edge,
       real_t                               micro_edges_per_macro_edge_float,
       real_t                               radRayVertex,
       real_t                               radRefVertex,
       real_t                               radius_surface,
       real_t                               rayVertex_0,
       real_t                               rayVertex_1,
       real_t                               refVertex_0,
       real_t                               refVertex_1,
       real_t                               thrVertex_0,
       real_t                               thrVertex_1,
       real_t                               toMatrixScaling ) const;

   /// Integral: P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValuesScaled
   /// - loop strategy:   CUBES
   /// - quadrature rule: Dunavant 5 | points: 7, degree: 5
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    801    1136      47      35     21              0                 0              1
   void computeInverseDiagonalOperatorValuesScaled_P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap_macro_2D(
       real_t* RESTRICT _data_eta,
       real_t* RESTRICT _data_invDiag_Edge,
       real_t* RESTRICT _data_invDiag_Vertex,
       real_t* RESTRICT _data_rho,
       real_t* RESTRICT _data_uxEdge,
       real_t* RESTRICT _data_uxVertex,
       real_t* RESTRICT _data_uyEdge,
       real_t* RESTRICT _data_uyVertex,
       real_t           cutoff,
       real_t           diagScaling,
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
       real_t           radius_surface,
       real_t           rayVertex_0,
       real_t           rayVertex_1,
       real_t           refVertex_0,
       real_t           refVertex_1,
       real_t           thrVertex_0,
       real_t           thrVertex_1 ) const;

   std::shared_ptr< P2Function< real_t > > invDiag_;
   P1Function< real_t >                    eta;
   P1Function< real_t >                    rho;
   P2Function< real_t >                    ux;
   P2Function< real_t >                    uy;
   real_t                                  cutoff_P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap_;
   real_t                                  radius_surface_P2ElementwiseShearHeatingP1ViscosityScaledNoSurfaceAnnulusMap_;
};

} // namespace operatorgeneration

} // namespace hyteg
