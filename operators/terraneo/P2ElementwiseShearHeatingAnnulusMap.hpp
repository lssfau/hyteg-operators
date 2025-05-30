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
/// The strong representation of the operator is given by:
///
///     𝜏(w) : grad(w)
///     2 {[ μ (grad(w)+grad(w)ᵀ) / 2 ] - 1/dim [ μ div(w) ]I} : grad(w)
///
/// Note that the factor 1/dim means that for 2D this is the pseudo-3D form
/// of the operator.
///
/// Component trial: 0
/// Component test:  0
/// Geometry map:    AnnulusMap
///
/// Weak formulation
///
///     T: trial function (scalar space:    Lagrange, degree: 2)
///     s: test function  (scalar space:    Lagrange, degree: 2)
///     μ: coefficient    (scalar space:    Lagrange, degree: 2)
///     w: velocity       (vectorial space: Lagrange, degree: 2)
///
///     ∫ { 2 {[ μ (grad(w)+grad(w)ᵀ) / 2 ] - 1/dim [ μ div(w) ]I} : grad(w) } T_h s_h
///
/// The resulting matrix must be multiplied with a vector of ones to be used as the shear heating term in the RHS

class P2ElementwiseShearHeatingAnnulusMap : public Operator< P2Function< real_t >, P2Function< real_t > >,
                                            public OperatorWithInverseDiagonal< P2Function< real_t > >
{
 public:
   P2ElementwiseShearHeatingAnnulusMap( const std::shared_ptr< PrimitiveStorage >& storage,
                                        size_t                                     minLevel,
                                        size_t                                     maxLevel,
                                        const P2Function< real_t >&                _mu,
                                        const P2Function< real_t >&                _wx,
                                        const P2Function< real_t >&                _wy );

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
   /// Integral: P2ElementwiseShearHeatingAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    556     756      20      12      0              0                 0              1
   void apply_P2ElementwiseShearHeatingAnnulusMap_macro_2D( real_t* RESTRICT _data_dstEdge,
                                                            real_t* RESTRICT _data_dstVertex,
                                                            real_t* RESTRICT _data_muEdge,
                                                            real_t* RESTRICT _data_muVertex,
                                                            real_t* RESTRICT _data_srcEdge,
                                                            real_t* RESTRICT _data_srcVertex,
                                                            real_t* RESTRICT _data_wxEdge,
                                                            real_t* RESTRICT _data_wxVertex,
                                                            real_t* RESTRICT _data_wyEdge,
                                                            real_t* RESTRICT _data_wyVertex,
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

   /// Integral: P2ElementwiseShearHeatingAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    520     720      20      12      0              0                 0              4
   void toMatrix_P2ElementwiseShearHeatingAnnulusMap_macro_2D( idx_t* RESTRICT                      _data_dstEdge,
                                                               idx_t* RESTRICT                      _data_dstVertex,
                                                               real_t* RESTRICT                     _data_muEdge,
                                                               real_t* RESTRICT                     _data_muVertex,
                                                               idx_t* RESTRICT                      _data_srcEdge,
                                                               idx_t* RESTRICT                      _data_srcVertex,
                                                               real_t* RESTRICT                     _data_wxEdge,
                                                               real_t* RESTRICT                     _data_wxVertex,
                                                               real_t* RESTRICT                     _data_wyEdge,
                                                               real_t* RESTRICT                     _data_wyVertex,
                                                               real_t                               macro_vertex_coord_id_0comp0,
                                                               real_t                               macro_vertex_coord_id_0comp1,
                                                               real_t                               macro_vertex_coord_id_1comp0,
                                                               real_t                               macro_vertex_coord_id_1comp1,
                                                               real_t                               macro_vertex_coord_id_2comp0,
                                                               real_t                               macro_vertex_coord_id_2comp1,
                                                               std::shared_ptr< SparseMatrixProxy > mat,
                                                               int64_t                              micro_edges_per_macro_edge,
                                                               real_t micro_edges_per_macro_edge_float,
                                                               real_t radRayVertex,
                                                               real_t radRefVertex,
                                                               real_t rayVertex_0,
                                                               real_t rayVertex_1,
                                                               real_t refVertex_0,
                                                               real_t refVertex_1,
                                                               real_t thrVertex_0,
                                                               real_t thrVertex_1 ) const;

   /// Integral: P2ElementwiseShearHeatingAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     computeInverseDiagonalOperatorValues
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 3 | points: 4, degree: 3
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    466     640      20      12      0              0                 0              1
   void
       computeInverseDiagonalOperatorValues_P2ElementwiseShearHeatingAnnulusMap_macro_2D( real_t* RESTRICT _data_invDiag_Edge,
                                                                                          real_t* RESTRICT _data_invDiag_Vertex,
                                                                                          real_t* RESTRICT _data_muEdge,
                                                                                          real_t* RESTRICT _data_muVertex,
                                                                                          real_t* RESTRICT _data_wxEdge,
                                                                                          real_t* RESTRICT _data_wxVertex,
                                                                                          real_t* RESTRICT _data_wyEdge,
                                                                                          real_t* RESTRICT _data_wyVertex,
                                                                                          real_t  macro_vertex_coord_id_0comp0,
                                                                                          real_t  macro_vertex_coord_id_0comp1,
                                                                                          real_t  macro_vertex_coord_id_1comp0,
                                                                                          real_t  macro_vertex_coord_id_1comp1,
                                                                                          real_t  macro_vertex_coord_id_2comp0,
                                                                                          real_t  macro_vertex_coord_id_2comp1,
                                                                                          int64_t micro_edges_per_macro_edge,
                                                                                          real_t micro_edges_per_macro_edge_float,
                                                                                          real_t radRayVertex,
                                                                                          real_t radRefVertex,
                                                                                          real_t rayVertex_0,
                                                                                          real_t rayVertex_1,
                                                                                          real_t refVertex_0,
                                                                                          real_t refVertex_1,
                                                                                          real_t thrVertex_0,
                                                                                          real_t thrVertex_1 ) const;

   std::shared_ptr< P2Function< real_t > > invDiag_;
   P2Function< real_t >                    mu;
   P2Function< real_t >                    wx;
   P2Function< real_t >                    wy;
};

} // namespace operatorgeneration

} // namespace hyteg
