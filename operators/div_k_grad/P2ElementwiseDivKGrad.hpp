/*
 * Copyright (c) 2017-2023 Nils Kohl, Daniel Bauer, Fabian Böhm.
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
 * The entire file was generated with the HyTeG form generator.
 *
 * Avoid modifying this file. If buggy, consider fixing the generator itself.
 */

#pragma once

#include "hyteg/communication/Syncing.hpp"

#include "hyteg/edgedofspace/EdgeDoFMacroCell.hpp"

#include "hyteg/p2functionspace/P2Function.hpp"

#include "hyteg/operators/Operator.hpp"

#include "hyteg/solvers/Smoothables.hpp"

#include "hyteg/primitivestorage/PrimitiveStorage.hpp"

#include "core/DataTypes.h"

#include "hyteg/LikwidWrapper.hpp"

#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

class P2ElementwiseDivKGrad
    : public Operator<P2Function<double>, P2Function<double>>,
      public OperatorWithInverseDiagonal<P2Function<double>> {
public:
  P2ElementwiseDivKGrad(const std::shared_ptr<PrimitiveStorage> &storage,
                        size_t minLevel, size_t maxLevel,
                        const P2Function<double> &_k);

  inline void apply(const P2Function<double> &src,
                    const P2Function<double> &dst, uint_t level, DoFType flag,
                    UpdateType updateType = Replace) const;

  inline void toMatrix(const std::shared_ptr<SparseMatrixProxy> &mat,
                       const P2Function<idx_t> &src,
                       const P2Function<idx_t> &dst, uint_t level,
                       DoFType flag) const;

  void computeInverseDiagonalOperatorValues();

  std::shared_ptr<P2Function<double>> getInverseDiagonalValues() const;

protected:
private:
  /// Kernel type: apply
  /// - quadrature rule: Xiao-Gimbutas | points: 3, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///    307     433      12       0      1              0                 0 0
  void apply_macro_2D(
      double *RESTRICT _data_dstEdge, double *RESTRICT _data_dstVertex,
      double *RESTRICT _data_kEdge, double *RESTRICT _data_kVertex,
      double *RESTRICT _data_srcEdge, double *RESTRICT _data_srcVertex,
      double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1,
      double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1,
      double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1,
      int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;
  /// Kernel type: apply
  /// - quadrature rule: Xiao-Gimbutas | points: 4, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///   1314    1736      30       0      1              0                 0 0
  void apply_macro_3D(
      double *RESTRICT _data_dstEdge, double *RESTRICT _data_dstVertex,
      double *RESTRICT _data_kEdge, double *RESTRICT _data_kVertex,
      double *RESTRICT _data_srcEdge, double *RESTRICT _data_srcVertex,
      double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1,
      double macro_vertex_coord_id_0comp2, double macro_vertex_coord_id_1comp0,
      double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_1comp2,
      double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1,
      double macro_vertex_coord_id_2comp2, double macro_vertex_coord_id_3comp0,
      double macro_vertex_coord_id_3comp1, double macro_vertex_coord_id_3comp2,
      int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;
  /// Kernel type: toMatrix
  /// - quadrature rule: Xiao-Gimbutas | points: 3, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///    271     397      12       0      1              0                 0 3
  void toMatrix_macro_2D(
      idx_t *RESTRICT _data_dstEdge, idx_t *RESTRICT _data_dstVertex,
      double *RESTRICT _data_kEdge, double *RESTRICT _data_kVertex,
      idx_t *RESTRICT _data_srcEdge, idx_t *RESTRICT _data_srcVertex,
      double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1,
      double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1,
      double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1,
      std::shared_ptr<SparseMatrixProxy> mat,
      int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;
  /// Kernel type: toMatrix
  /// - quadrature rule: Xiao-Gimbutas | points: 4, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///   1214    1636      30       0      1              0                 0 3
  void toMatrix_macro_3D(
      idx_t *RESTRICT _data_dstEdge, idx_t *RESTRICT _data_dstVertex,
      double *RESTRICT _data_kEdge, double *RESTRICT _data_kVertex,
      idx_t *RESTRICT _data_srcEdge, idx_t *RESTRICT _data_srcVertex,
      double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1,
      double macro_vertex_coord_id_0comp2, double macro_vertex_coord_id_1comp0,
      double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_1comp2,
      double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1,
      double macro_vertex_coord_id_2comp2, double macro_vertex_coord_id_3comp0,
      double macro_vertex_coord_id_3comp1, double macro_vertex_coord_id_3comp2,
      std::shared_ptr<SparseMatrixProxy> mat,
      int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;
  /// Kernel type: computeInverseDiagonalOperatorValues
  /// - quadrature rule: Xiao-Gimbutas | points: 3, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///    187     238      12       0      1              0                 0 0
  void computeInverseDiagonalOperatorValues_macro_2D(
      double *RESTRICT _data_invDiag_Edge,
      double *RESTRICT _data_invDiag_Vertex, double *RESTRICT _data_kEdge,
      double *RESTRICT _data_kVertex, double macro_vertex_coord_id_0comp0,
      double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_1comp0,
      double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_2comp0,
      double macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;
  /// Kernel type: computeInverseDiagonalOperatorValues
  /// - quadrature rule: Xiao-Gimbutas | points: 4, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///    672     844      30       0      1              0                 0 0
  void computeInverseDiagonalOperatorValues_macro_3D(
      double *RESTRICT _data_invDiag_Edge,
      double *RESTRICT _data_invDiag_Vertex, double *RESTRICT _data_kEdge,
      double *RESTRICT _data_kVertex, double macro_vertex_coord_id_0comp0,
      double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_0comp2,
      double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1,
      double macro_vertex_coord_id_1comp2, double macro_vertex_coord_id_2comp0,
      double macro_vertex_coord_id_2comp1, double macro_vertex_coord_id_2comp2,
      double macro_vertex_coord_id_3comp0, double macro_vertex_coord_id_3comp1,
      double macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;

  std::shared_ptr<P2Function<double>> invDiag_;
  P2Function<double> k;
};

} // namespace operatorgeneration

} // namespace hyteg
