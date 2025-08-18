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
#include "hyteg/p2functionspace/P2VectorFunction.hpp"
#include "hyteg/primitivestorage/PrimitiveStorage.hpp"
#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"
#include "hyteg/types/types.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

/// Divergence.
///
/// Component:    0
/// Geometry map: AnnulusMap
///
/// Weak formulation
///
///     u: trial function (vectorial space: TensorialVectorSpace(Lagrange, degree: 2))
///
///     v: test function  (scalar space:    Lagrange, degree: 1)
///
///
///     ∫ - ( ∇ · u ) v
///
///
/// And the assembled FE matrix (K) is wrapped with a Rotation matrix (R) locally as below,
///
///     KRᵀ uᵣ
///
/// where
///     R : Rotation matrix calculated with the normal vector (n̂) at the DoF
///     uᵣ: FE function but the components rotated at the boundaries according to the normal FE function passed
///
///     n̂ : normals (vectorial space: Lagrange, degree: 2)
///         * The passed normal vector must be normalized
///         * The radial component of the rotated vector will be pointing in the given normal direction
///         * If the normals are zero at a DoF, the rotation matrix is identity matrix
///
class P2VectorToP1ElementwiseDivergenceRotationAnnulusMap : public Operator< P2VectorFunction< real_t >, P1Function< real_t > >
{
 public:
   P2VectorToP1ElementwiseDivergenceRotationAnnulusMap( const std::shared_ptr< PrimitiveStorage >& storage,
                                                        size_t                                     minLevel,
                                                        size_t                                     maxLevel,
                                                        const P2Function< real_t >&                _nx_rotation,
                                                        const P2Function< real_t >&                _ny_rotation );

   void apply( const P2VectorFunction< real_t >& src,
               const P1Function< real_t >&       dst,
               uint_t                            level,
               DoFType                           flag,
               UpdateType                        updateType = Replace ) const;

   void toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                  const P2VectorFunction< idx_t >&            src,
                  const P1Function< idx_t >&                  dst,
                  uint_t                                      level,
                  DoFType                                     flag ) const;

 protected:
 private:
   /// Integral: P2VectorToP1ElementwiseDivergenceRotationAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     apply
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    384     849      16      12      0              0                 0              1
   void apply_P2VectorToP1ElementwiseDivergenceRotationAnnulusMap_macro_2D( real_t* RESTRICT _data_dst,
                                                                            real_t* RESTRICT _data_nx_rotationEdge,
                                                                            real_t* RESTRICT _data_nx_rotationVertex,
                                                                            real_t* RESTRICT _data_ny_rotationEdge,
                                                                            real_t* RESTRICT _data_ny_rotationVertex,
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
                                                                            real_t           micro_edges_per_macro_edge_float,
                                                                            real_t           radRayVertex,
                                                                            real_t           radRefVertex,
                                                                            real_t           rayVertex_0,
                                                                            real_t           rayVertex_1,
                                                                            real_t           refVertex_0,
                                                                            real_t           refVertex_1,
                                                                            real_t           thrVertex_0,
                                                                            real_t           thrVertex_1 ) const;

   /// Integral: P2VectorToP1ElementwiseDivergenceRotationAnnulusMap
   /// - volume element:  triangle, dim: 2, vertices: 3, spacedim: 2
   /// - kernel type:     toMatrix
   /// - loop strategy:   SAWTOOTH
   /// - quadrature rule: Dunavant 2 | points: 3, degree: 2
   /// - blending map:    AnnulusMap
   /// - operations per element:
   ///   adds    muls    divs    pows    abs    assignments    function_calls    unknown_ops
   /// ------  ------  ------  ------  -----  -------------  ----------------  -------------
   ///    348     813      16      12      0              0                 0              4
   void toMatrix_P2VectorToP1ElementwiseDivergenceRotationAnnulusMap_macro_2D( idx_t* RESTRICT  _data_dst,
                                                                               real_t* RESTRICT _data_nx_rotationEdge,
                                                                               real_t* RESTRICT _data_nx_rotationVertex,
                                                                               real_t* RESTRICT _data_ny_rotationEdge,
                                                                               real_t* RESTRICT _data_ny_rotationVertex,
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
                                                                               real_t  micro_edges_per_macro_edge_float,
                                                                               real_t  radRayVertex,
                                                                               real_t  radRefVertex,
                                                                               real_t  rayVertex_0,
                                                                               real_t  rayVertex_1,
                                                                               real_t  refVertex_0,
                                                                               real_t  refVertex_1,
                                                                               real_t  thrVertex_0,
                                                                               real_t  thrVertex_1 ) const;

   P2Function< real_t > nx_rotation;
   P2Function< real_t > ny_rotation;
};

} // namespace operatorgeneration

} // namespace hyteg
