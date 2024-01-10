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

#include "hyteg/edgedofspace/EdgeDoFMacroCell.hpp"

#include "hyteg/primitivestorage/PrimitiveStorage.hpp"

#include "core/DataTypes.h"

#include "hyteg/LikwidWrapper.hpp"

#include "hyteg/p1functionspace/P1Function.hpp"

#include "hyteg/solvers/Smoothables.hpp"

#include "hyteg/communication/Syncing.hpp"

#include "hyteg/operators/Operator.hpp"

#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

class P1ElementwiseDivKGrad
    : public Operator<P1Function<double>, P1Function<double>>,
      public OperatorWithInverseDiagonal<P1Function<double>> {
public:
  P1ElementwiseDivKGrad(const std::shared_ptr<PrimitiveStorage> &storage,
                        size_t minLevel, size_t maxLevel,
                        const P1Function<double> &_k);

  inline void apply(const P1Function<double> &src,
                    const P1Function<double> &dst, uint_t level, DoFType flag,
                    UpdateType updateType = Replace) const;

  inline void toMatrix(const std::shared_ptr<SparseMatrixProxy> &mat,
                       const P1Function<idx_t> &src,
                       const P1Function<idx_t> &dst, uint_t level,
                       DoFType flag) const;

  void computeInverseDiagonalOperatorValues();

  std::shared_ptr<P1Function<double>> getInverseDiagonalValues() const;

protected:
private:
  /// Kernel type: apply
  /// - quadrature rule: Xiao-Gimbutas | points: 3, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///     94     121      12       0      1              0                 0 0
  void apply_macro_2D(
      double *RESTRICT _data_dst, double *RESTRICT _data_k,
      double *RESTRICT _data_src, double macro_vertex_coord_id_0comp0,
      double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_1comp0,
      double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_2comp0,
      double macro_vertex_coord_id_2comp1, int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;
  /// Kernel type: apply
  /// - quadrature rule: Xiao-Gimbutas | points: 4, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///    318     436      30       0      1              0                 0 0
  void apply_macro_3D(
      double *RESTRICT _data_dst, double *RESTRICT _data_k,
      double *RESTRICT _data_src, double macro_vertex_coord_id_0comp0,
      double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_0comp2,
      double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1,
      double macro_vertex_coord_id_1comp2, double macro_vertex_coord_id_2comp0,
      double macro_vertex_coord_id_2comp1, double macro_vertex_coord_id_2comp2,
      double macro_vertex_coord_id_3comp0, double macro_vertex_coord_id_3comp1,
      double macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;
  /// Kernel type: toMatrix
  /// - quadrature rule: Xiao-Gimbutas | points: 3, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///     85     112      12       0      1              0                 0 3
  void toMatrix_macro_2D(int64_t *RESTRICT _data_dst, double *RESTRICT _data_k,
                         int64_t *RESTRICT _data_src,
                         double macro_vertex_coord_id_0comp0,
                         double macro_vertex_coord_id_0comp1,
                         double macro_vertex_coord_id_1comp0,
                         double macro_vertex_coord_id_1comp1,
                         double macro_vertex_coord_id_2comp0,
                         double macro_vertex_coord_id_2comp1,
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
  ///    302     420      30       0      1              0                 0 3
  void toMatrix_macro_3D(
      int64_t *RESTRICT _data_dst, double *RESTRICT _data_k,
      int64_t *RESTRICT _data_src, double macro_vertex_coord_id_0comp0,
      double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_0comp2,
      double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1,
      double macro_vertex_coord_id_1comp2, double macro_vertex_coord_id_2comp0,
      double macro_vertex_coord_id_2comp1, double macro_vertex_coord_id_2comp2,
      double macro_vertex_coord_id_3comp0, double macro_vertex_coord_id_3comp1,
      double macro_vertex_coord_id_3comp2,
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
  ///     88     112      12       0      1              0                 0 0
  void computeInverseDiagonalOperatorValues_macro_2D(
      double *RESTRICT _data_invDiag_, double *RESTRICT _data_k,
      double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1,
      double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1,
      double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1,
      int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;
  /// Kernel type: computeInverseDiagonalOperatorValues
  /// - quadrature rule: Xiao-Gimbutas | points: 4, degree: 2
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///    306     420      30       0      1              0                 0 0
  void computeInverseDiagonalOperatorValues_macro_3D(
      double *RESTRICT _data_invDiag_, double *RESTRICT _data_k,
      double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1,
      double macro_vertex_coord_id_0comp2, double macro_vertex_coord_id_1comp0,
      double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_1comp2,
      double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1,
      double macro_vertex_coord_id_2comp2, double macro_vertex_coord_id_3comp0,
      double macro_vertex_coord_id_3comp1, double macro_vertex_coord_id_3comp2,
      int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;

  std::shared_ptr<P1Function<double>> invDiag_;
  P1Function<double> k;
};

} // namespace operatorgeneration

} // namespace hyteg
