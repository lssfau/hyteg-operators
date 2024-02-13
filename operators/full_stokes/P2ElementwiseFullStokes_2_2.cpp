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
* The entire file was generated with the HyTeG form generator.
*
* Avoid modifying this file. If buggy, consider fixing the generator itself.
*/

// Unfortunately, the inverse diagonal kernel wrapper triggers a GCC bug (maybe
// (related to) https://gcc.gnu.org/bugzilla/show_bug.cgi?id=107087) causing a
// warning in an internal standard library header (bits/stl_algobase.h). As a
// workaround, we disable the warning and include this header indirectly through
// a public header.
#include <waLBerlaDefinitions.h>
#ifdef WALBERLA_CXX_COMPILER_IS_GNU
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wnonnull"
#endif
#include <cmath>
#ifdef WALBERLA_CXX_COMPILER_IS_GNU
#pragma GCC diagnostic pop
#endif

#include "P2ElementwiseFullStokes_2_2.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

P2ElementwiseFullStokes_2_2::P2ElementwiseFullStokes_2_2( const std::shared_ptr< PrimitiveStorage >& storage,
                                                          size_t                                     minLevel,
                                                          size_t                                     maxLevel,
                                                          const P2Function< walberla::float64 >&     _mu )
: Operator( storage, minLevel, maxLevel )
, mu( _mu )
{}

void P2ElementwiseFullStokes_2_2::apply( const P2Function< walberla::float64 >& src,
                                         const P2Function< walberla::float64 >& dst,
                                         uint_t                                 level,
                                         DoFType                                flag,
                                         UpdateType                             updateType ) const
{
   // Make sure that halos are up-to-date
   if ( this->storage_->hasGlobalCells() )
   {
      // Note that the order of communication is important, since the face -> cell communication may overwrite
      // parts of the halos that carry the macro-vertex and macro-edge unknowns.
      src.communicate< Face, Cell >( level );
      src.communicate< Edge, Cell >( level );
      src.communicate< Vertex, Cell >( level );
      mu.communicate< Face, Cell >( level );
      mu.communicate< Edge, Cell >( level );
      mu.communicate< Vertex, Cell >( level );
   }
   else
   {
      WALBERLA_ABORT( "Not implemented." );
   }

   if ( updateType == Replace )
   {
      // We need to zero the destination array (including halos).
      // However, we must not zero out anything that is not flagged with the specified BCs.
      // Therefore, we first zero out everything that flagged, and then, later,
      // the halos of the highest dim primitives.
      dst.interpolate( walberla::numeric_cast< walberla::float64 >( 0 ), level, flag );
   }

   if ( storage_->hasGlobalCells() )
   {
      for ( auto& it : storage_->getCells() )
      {
         Cell& cell = *it.second;

         // get hold of the actual numerical data in the functions
         walberla::float64* _data_srcVertex = cell.getData( src.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         walberla::float64* _data_srcEdge   = cell.getData( src.getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         walberla::float64* _data_dstVertex = cell.getData( dst.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         walberla::float64* _data_dstEdge   = cell.getData( dst.getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         walberla::float64* _data_muVertex  = cell.getData( mu.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         walberla::float64* _data_muEdge    = cell.getData( mu.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         // Zero out dst halos only
         //
         // This is also necessary when using update type == Add.
         // During additive comm we then skip zeroing the data on the lower-dim primitives.
         for ( const auto& idx : vertexdof::macrocell::Iterator( level ) )
         {
            if ( !vertexdof::macrocell::isOnCellFace( idx, level ).empty() )
            {
               auto arrayIdx             = vertexdof::macrocell::index( level, idx.x(), idx.y(), idx.z() );
               _data_dstVertex[arrayIdx] = walberla::float64( 0 );
            }
         }
         edgedof::macrocell::setBoundaryToZero( level, cell, dst.getEdgeDoFFunction().getCellDataID() );

         const auto micro_edges_per_macro_edge                = (int64_t) levelinfo::num_microedges_per_edge( level );
         const auto micro_edges_per_macro_edge_float          = (walberla::float64) levelinfo::num_microedges_per_edge( level );
         const walberla::float64 macro_vertex_coord_id_0comp0 = (walberla::float64) cell.getCoordinates()[0][0];
         const walberla::float64 macro_vertex_coord_id_0comp1 = (walberla::float64) cell.getCoordinates()[0][1];
         const walberla::float64 macro_vertex_coord_id_0comp2 = (walberla::float64) cell.getCoordinates()[0][2];
         const walberla::float64 macro_vertex_coord_id_1comp0 = (walberla::float64) cell.getCoordinates()[1][0];
         const walberla::float64 macro_vertex_coord_id_1comp1 = (walberla::float64) cell.getCoordinates()[1][1];
         const walberla::float64 macro_vertex_coord_id_1comp2 = (walberla::float64) cell.getCoordinates()[1][2];
         const walberla::float64 macro_vertex_coord_id_2comp0 = (walberla::float64) cell.getCoordinates()[2][0];
         const walberla::float64 macro_vertex_coord_id_2comp1 = (walberla::float64) cell.getCoordinates()[2][1];
         const walberla::float64 macro_vertex_coord_id_2comp2 = (walberla::float64) cell.getCoordinates()[2][2];
         const walberla::float64 macro_vertex_coord_id_3comp0 = (walberla::float64) cell.getCoordinates()[3][0];
         const walberla::float64 macro_vertex_coord_id_3comp1 = (walberla::float64) cell.getCoordinates()[3][1];
         const walberla::float64 macro_vertex_coord_id_3comp2 = (walberla::float64) cell.getCoordinates()[3][2];

         apply_macro_3D(

             _data_dstEdge,
             _data_dstVertex,
             _data_muEdge,
             _data_muVertex,
             _data_srcEdge,
             _data_srcVertex,
             macro_vertex_coord_id_0comp0,
             macro_vertex_coord_id_0comp1,
             macro_vertex_coord_id_0comp2,
             macro_vertex_coord_id_1comp0,
             macro_vertex_coord_id_1comp1,
             macro_vertex_coord_id_1comp2,
             macro_vertex_coord_id_2comp0,
             macro_vertex_coord_id_2comp1,
             macro_vertex_coord_id_2comp2,
             macro_vertex_coord_id_3comp0,
             macro_vertex_coord_id_3comp1,
             macro_vertex_coord_id_3comp2,
             micro_edges_per_macro_edge,
             micro_edges_per_macro_edge_float );
      }

      // Push result to lower-dimensional primitives
      //
      // Note: We could avoid communication here by implementing the apply() also for the respective
      //       lower dimensional primitives!
      dst.getVertexDoFFunction().communicateAdditively< Cell, Face >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst.getVertexDoFFunction().communicateAdditively< Cell, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst.getVertexDoFFunction().communicateAdditively< Cell, Vertex >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst.getEdgeDoFFunction().communicateAdditively< Cell, Face >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst.getEdgeDoFFunction().communicateAdditively< Cell, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
   }
   else
   {
      WALBERLA_ABORT( "Not implemented." );
   }
}
void P2ElementwiseFullStokes_2_2::toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                                            const P2Function< idx_t >&                  src,
                                            const P2Function< idx_t >&                  dst,
                                            uint_t                                      level,
                                            DoFType                                     flag ) const
{
   // We currently ignore the flag provided!
   if ( flag != All )
   {
      WALBERLA_LOG_WARNING_ON_ROOT( "Input flag ignored in toMatrix; using flag = All" );
   }

   if ( storage_->hasGlobalCells() )
   {
      mu.communicate< Face, Cell >( level );
      mu.communicate< Edge, Cell >( level );
      mu.communicate< Vertex, Cell >( level );

      for ( auto& it : storage_->getCells() )
      {
         Cell& cell = *it.second;

         // get hold of the actual numerical data
         idx_t*             _data_srcVertex = cell.getData( src.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t*             _data_srcEdge   = cell.getData( src.getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         idx_t*             _data_dstVertex = cell.getData( dst.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t*             _data_dstEdge   = cell.getData( dst.getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         walberla::float64* _data_muVertex  = cell.getData( mu.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         walberla::float64* _data_muEdge    = cell.getData( mu.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         const auto micro_edges_per_macro_edge                = (int64_t) levelinfo::num_microedges_per_edge( level );
         const auto micro_edges_per_macro_edge_float          = (walberla::float64) levelinfo::num_microedges_per_edge( level );
         const walberla::float64 macro_vertex_coord_id_0comp0 = (walberla::float64) cell.getCoordinates()[0][0];
         const walberla::float64 macro_vertex_coord_id_0comp1 = (walberla::float64) cell.getCoordinates()[0][1];
         const walberla::float64 macro_vertex_coord_id_0comp2 = (walberla::float64) cell.getCoordinates()[0][2];
         const walberla::float64 macro_vertex_coord_id_1comp0 = (walberla::float64) cell.getCoordinates()[1][0];
         const walberla::float64 macro_vertex_coord_id_1comp1 = (walberla::float64) cell.getCoordinates()[1][1];
         const walberla::float64 macro_vertex_coord_id_1comp2 = (walberla::float64) cell.getCoordinates()[1][2];
         const walberla::float64 macro_vertex_coord_id_2comp0 = (walberla::float64) cell.getCoordinates()[2][0];
         const walberla::float64 macro_vertex_coord_id_2comp1 = (walberla::float64) cell.getCoordinates()[2][1];
         const walberla::float64 macro_vertex_coord_id_2comp2 = (walberla::float64) cell.getCoordinates()[2][2];
         const walberla::float64 macro_vertex_coord_id_3comp0 = (walberla::float64) cell.getCoordinates()[3][0];
         const walberla::float64 macro_vertex_coord_id_3comp1 = (walberla::float64) cell.getCoordinates()[3][1];
         const walberla::float64 macro_vertex_coord_id_3comp2 = (walberla::float64) cell.getCoordinates()[3][2];

         toMatrix_macro_3D(

             _data_dstEdge,
             _data_dstVertex,
             _data_muEdge,
             _data_muVertex,
             _data_srcEdge,
             _data_srcVertex,
             macro_vertex_coord_id_0comp0,
             macro_vertex_coord_id_0comp1,
             macro_vertex_coord_id_0comp2,
             macro_vertex_coord_id_1comp0,
             macro_vertex_coord_id_1comp1,
             macro_vertex_coord_id_1comp2,
             macro_vertex_coord_id_2comp0,
             macro_vertex_coord_id_2comp1,
             macro_vertex_coord_id_2comp2,
             macro_vertex_coord_id_3comp0,
             macro_vertex_coord_id_3comp1,
             macro_vertex_coord_id_3comp2,
             mat,
             micro_edges_per_macro_edge,
             micro_edges_per_macro_edge_float );
      }
   }
   else
   {
      communication::syncFunctionBetweenPrimitives( mu, level, communication::syncDirection_t::LOW2HIGH );

      WALBERLA_ABORT( "Not implemented." );
   }
}
void P2ElementwiseFullStokes_2_2::computeInverseDiagonalOperatorValues()
{
   if ( invDiag_ == nullptr )
   {
      invDiag_ =
          std::make_shared< P2Function< walberla::float64 > >( "inverse diagonal entries", storage_, minLevel_, maxLevel_ );
   }

   for ( uint_t level = minLevel_; level <= maxLevel_; level++ )
   {
      invDiag_->setToZero( level );

      if ( storage_->hasGlobalCells() )
      {
         mu.communicate< Face, Cell >( level );
         mu.communicate< Edge, Cell >( level );
         mu.communicate< Vertex, Cell >( level );

         for ( auto& it : storage_->getCells() )
         {
            Cell& cell = *it.second;

            // get hold of the actual numerical data
            walberla::float64* _data_invDiag_Vertex =
                cell.getData( ( *invDiag_ ).getVertexDoFFunction().getCellDataID() )->getPointer( level );
            walberla::float64* _data_invDiag_Edge =
                cell.getData( ( *invDiag_ ).getEdgeDoFFunction().getCellDataID() )->getPointer( level );
            walberla::float64* _data_muVertex = cell.getData( mu.getVertexDoFFunction().getCellDataID() )->getPointer( level );
            walberla::float64* _data_muEdge   = cell.getData( mu.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

            const auto micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
            const auto micro_edges_per_macro_edge_float = (walberla::float64) levelinfo::num_microedges_per_edge( level );
            const walberla::float64 macro_vertex_coord_id_0comp0 = (walberla::float64) cell.getCoordinates()[0][0];
            const walberla::float64 macro_vertex_coord_id_0comp1 = (walberla::float64) cell.getCoordinates()[0][1];
            const walberla::float64 macro_vertex_coord_id_0comp2 = (walberla::float64) cell.getCoordinates()[0][2];
            const walberla::float64 macro_vertex_coord_id_1comp0 = (walberla::float64) cell.getCoordinates()[1][0];
            const walberla::float64 macro_vertex_coord_id_1comp1 = (walberla::float64) cell.getCoordinates()[1][1];
            const walberla::float64 macro_vertex_coord_id_1comp2 = (walberla::float64) cell.getCoordinates()[1][2];
            const walberla::float64 macro_vertex_coord_id_2comp0 = (walberla::float64) cell.getCoordinates()[2][0];
            const walberla::float64 macro_vertex_coord_id_2comp1 = (walberla::float64) cell.getCoordinates()[2][1];
            const walberla::float64 macro_vertex_coord_id_2comp2 = (walberla::float64) cell.getCoordinates()[2][2];
            const walberla::float64 macro_vertex_coord_id_3comp0 = (walberla::float64) cell.getCoordinates()[3][0];
            const walberla::float64 macro_vertex_coord_id_3comp1 = (walberla::float64) cell.getCoordinates()[3][1];
            const walberla::float64 macro_vertex_coord_id_3comp2 = (walberla::float64) cell.getCoordinates()[3][2];

            computeInverseDiagonalOperatorValues_macro_3D(

                _data_invDiag_Edge,
                _data_invDiag_Vertex,
                _data_muEdge,
                _data_muVertex,
                macro_vertex_coord_id_0comp0,
                macro_vertex_coord_id_0comp1,
                macro_vertex_coord_id_0comp2,
                macro_vertex_coord_id_1comp0,
                macro_vertex_coord_id_1comp1,
                macro_vertex_coord_id_1comp2,
                macro_vertex_coord_id_2comp0,
                macro_vertex_coord_id_2comp1,
                macro_vertex_coord_id_2comp2,
                macro_vertex_coord_id_3comp0,
                macro_vertex_coord_id_3comp1,
                macro_vertex_coord_id_3comp2,
                micro_edges_per_macro_edge,
                micro_edges_per_macro_edge_float );
         }

         // Push result to lower-dimensional primitives
         //
         // Note: We could avoid communication here by implementing the apply() also for the respective
         //       lower dimensional primitives!
         ( *invDiag_ ).getVertexDoFFunction().communicateAdditively< Cell, Face >( level );
         ( *invDiag_ ).getVertexDoFFunction().communicateAdditively< Cell, Edge >( level );
         ( *invDiag_ ).getVertexDoFFunction().communicateAdditively< Cell, Vertex >( level );
         ( *invDiag_ ).getEdgeDoFFunction().communicateAdditively< Cell, Face >( level );
         ( *invDiag_ ).getEdgeDoFFunction().communicateAdditively< Cell, Edge >( level );
      }
      else
      {
         communication::syncFunctionBetweenPrimitives( mu, level, communication::syncDirection_t::LOW2HIGH );

         WALBERLA_ABORT( "Not implemented." );
      }

      ( *invDiag_ ).invertElementwise( level );
   }
}
std::shared_ptr< P2Function< walberla::float64 > > P2ElementwiseFullStokes_2_2::getInverseDiagonalValues() const
{
   return invDiag_;
}

} // namespace operatorgeneration

} // namespace hyteg
