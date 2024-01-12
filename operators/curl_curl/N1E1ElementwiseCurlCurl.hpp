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

#include "hyteg/n1e1functionspace/N1E1MacroCell.hpp"

#include "hyteg/communication/Syncing.hpp"

#include "hyteg/edgedofspace/EdgeDoFMacroCell.hpp"

#include "hyteg/operators/Operator.hpp"

#include "hyteg/solvers/Smoothables.hpp"

#include "hyteg/primitivestorage/PrimitiveStorage.hpp"

#include "core/DataTypes.h"

#include "hyteg/n1e1functionspace/N1E1VectorFunction.hpp"

#include "hyteg/LikwidWrapper.hpp"

#include "hyteg/sparseassembly/SparseMatrixProxy.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

class N1E1ElementwiseCurlCurl
    : public Operator<n1e1::N1E1VectorFunction<double>,
                      n1e1::N1E1VectorFunction<double>>,
      public OperatorWithInverseDiagonal<n1e1::N1E1VectorFunction<double>> {
public:
  N1E1ElementwiseCurlCurl(const std::shared_ptr<PrimitiveStorage> &storage,
                          size_t minLevel, size_t maxLevel);

  inline void apply(const n1e1::N1E1VectorFunction<double> &src,
                    const n1e1::N1E1VectorFunction<double> &dst, uint_t level,
                    DoFType flag, UpdateType updateType = Replace) const;

  inline void toMatrix(const std::shared_ptr<SparseMatrixProxy> &mat,
                       const n1e1::N1E1VectorFunction<idx_t> &src,
                       const n1e1::N1E1VectorFunction<idx_t> &dst, uint_t level,
                       DoFType flag) const;

  void computeInverseDiagonalOperatorValues();

  std::shared_ptr<n1e1::N1E1VectorFunction<double>>
  getInverseDiagonalValues() const;

protected:
private:
  /// Kernel type: apply
  /// - quadrature rule: Xiao-Gimbutas | points: 1, degree: 1
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///    125     151       2       0      1              0                 0 0
  void apply_macro_3D(
      double *RESTRICT _data_dst, double *RESTRICT _data_src,
      double macro_vertex_coord_id_0comp0, double macro_vertex_coord_id_0comp1,
      double macro_vertex_coord_id_0comp2, double macro_vertex_coord_id_1comp0,
      double macro_vertex_coord_id_1comp1, double macro_vertex_coord_id_1comp2,
      double macro_vertex_coord_id_2comp0, double macro_vertex_coord_id_2comp1,
      double macro_vertex_coord_id_2comp2, double macro_vertex_coord_id_3comp0,
      double macro_vertex_coord_id_3comp1, double macro_vertex_coord_id_3comp2,
      int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;
  /// Kernel type: toMatrix
  /// - quadrature rule: Xiao-Gimbutas | points: 1, degree: 1
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///     89     202       2       0      1              0                 0 3
  void toMatrix_macro_3D(
      idx_t *RESTRICT _data_dst, idx_t *RESTRICT _data_src, const Cell &cell,
      const uint_t level, double macro_vertex_coord_id_0comp0,
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
  /// - quadrature rule: Xiao-Gimbutas | points: 1, degree: 1
  /// - operations per element:
  ///   adds    muls    divs    pows    abs    assignments    function_calls
  ///   unknown_ops
  /// ------  ------  ------  ------  -----  -------------  ----------------
  /// -------------
  ///     65      64       2       0      1              0                 0 0
  void computeInverseDiagonalOperatorValues_macro_3D(
      double *RESTRICT _data_invDiag_, double macro_vertex_coord_id_0comp0,
      double macro_vertex_coord_id_0comp1, double macro_vertex_coord_id_0comp2,
      double macro_vertex_coord_id_1comp0, double macro_vertex_coord_id_1comp1,
      double macro_vertex_coord_id_1comp2, double macro_vertex_coord_id_2comp0,
      double macro_vertex_coord_id_2comp1, double macro_vertex_coord_id_2comp2,
      double macro_vertex_coord_id_3comp0, double macro_vertex_coord_id_3comp1,
      double macro_vertex_coord_id_3comp2, int64_t micro_edges_per_macro_edge,
      double micro_edges_per_macro_edge_float) const;

  std::shared_ptr<n1e1::N1E1VectorFunction<double>> invDiag_;
};

} // namespace operatorgeneration

} // namespace hyteg
