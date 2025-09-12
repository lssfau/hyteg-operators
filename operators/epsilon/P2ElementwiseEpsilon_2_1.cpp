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

#include "P2ElementwiseEpsilon_2_1.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

P2ElementwiseEpsilon_2_1::P2ElementwiseEpsilon_2_1( const std::shared_ptr< PrimitiveStorage >& storage,
                                                    size_t                                     minLevel,
                                                    size_t                                     maxLevel,
                                                    const P2Function< real_t >&                _mu )
: Operator( storage, minLevel, maxLevel )
, mu( _mu )
{}

void P2ElementwiseEpsilon_2_1::applyScaled( const real_t&               operatorScaling,
                                            const P2Function< real_t >& src,
                                            const P2Function< real_t >& dst,
                                            uint_t                      level,
                                            DoFType                     flag,
                                            UpdateType                  updateType ) const
{
   this->startTiming( "applyScaled" );

   // Make sure that halos are up-to-date
   this->timingTree_->start( "pre-communication" );
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
   this->timingTree_->stop( "pre-communication" );

   if ( updateType == Replace )
   {
      // We need to zero the destination array (including halos).
      // However, we must not zero out anything that is not flagged with the specified BCs.
      // Therefore, we first zero out everything that flagged, and then, later,
      // the halos of the highest dim primitives.
      dst.interpolate( walberla::numeric_cast< real_t >( 0 ), level, flag );
   }

   if ( storage_->hasGlobalCells() )
   {
      for ( auto& it : storage_->getCells() )
      {
         Cell& cell = *it.second;

         // get hold of the actual numerical data in the functions
         real_t* _data_srcVertex = cell.getData( src.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_srcEdge   = cell.getData( src.getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_dstVertex = cell.getData( dst.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_dstEdge   = cell.getData( dst.getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_muVertex  = cell.getData( mu.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_muEdge    = cell.getData( mu.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         // Zero out dst halos only
         //
         // This is also necessary when using update type == Add.
         // During additive comm we then skip zeroing the data on the lower-dim primitives.
         for ( const auto& idx : vertexdof::macrocell::Iterator( level ) )
         {
            if ( !vertexdof::macrocell::isOnCellFace( idx, level ).empty() )
            {
               auto arrayIdx             = vertexdof::macrocell::index( level, idx.x(), idx.y(), idx.z() );
               _data_dstVertex[arrayIdx] = real_t( 0 );
            }
         }
         edgedof::macrocell::setBoundaryToZero( level, cell, dst.getEdgeDoFFunction().getCellDataID() );

         const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
         const auto   num_microfaces_per_face          = (int64_t) levelinfo::num_microfaces_per_face( level );
         const auto   micro_edges_per_macro_edge_float = (real_t) levelinfo::num_microedges_per_edge( level );
         const real_t macro_vertex_coord_id_0comp0     = (real_t) cell.getCoordinates()[0][0];
         const real_t macro_vertex_coord_id_0comp1     = (real_t) cell.getCoordinates()[0][1];
         const real_t macro_vertex_coord_id_0comp2     = (real_t) cell.getCoordinates()[0][2];
         const real_t macro_vertex_coord_id_1comp0     = (real_t) cell.getCoordinates()[1][0];
         const real_t macro_vertex_coord_id_1comp1     = (real_t) cell.getCoordinates()[1][1];
         const real_t macro_vertex_coord_id_1comp2     = (real_t) cell.getCoordinates()[1][2];
         const real_t macro_vertex_coord_id_2comp0     = (real_t) cell.getCoordinates()[2][0];
         const real_t macro_vertex_coord_id_2comp1     = (real_t) cell.getCoordinates()[2][1];
         const real_t macro_vertex_coord_id_2comp2     = (real_t) cell.getCoordinates()[2][2];
         const real_t macro_vertex_coord_id_3comp0     = (real_t) cell.getCoordinates()[3][0];
         const real_t macro_vertex_coord_id_3comp1     = (real_t) cell.getCoordinates()[3][1];
         const real_t macro_vertex_coord_id_3comp2     = (real_t) cell.getCoordinates()[3][2];

         this->timingTree_->start( "kernel" );

         applyScaled_P2ElementwiseEpsilon_2_1_macro_3D(

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
             micro_edges_per_macro_edge_float,
             operatorScaling );

         this->timingTree_->stop( "kernel" );
      }

      // Push result to lower-dimensional primitives
      //
      this->timingTree_->start( "post-communication" );
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
      this->timingTree_->stop( "post-communication" );
   }
   else
   {
      WALBERLA_ABORT( "Not implemented." );
   }

   this->stopTiming( "applyScaled" );
}
void P2ElementwiseEpsilon_2_1::apply( const P2Function< real_t >& src,
                                      const P2Function< real_t >& dst,
                                      uint_t                      level,
                                      DoFType                     flag,
                                      UpdateType                  updateType ) const
{
   return applyScaled( static_cast< real_t >( 1 ), src, dst, level, flag, updateType );
}
void P2ElementwiseEpsilon_2_1::toMatrixScaled( const real_t&                               toMatrixScaling,
                                               const std::shared_ptr< SparseMatrixProxy >& mat,
                                               const P2Function< idx_t >&                  src,
                                               const P2Function< idx_t >&                  dst,
                                               uint_t                                      level,
                                               DoFType                                     flag ) const
{
   this->startTiming( "toMatrixScaled" );

   // We currently ignore the flag provided!
   if ( flag != All )
   {
      WALBERLA_LOG_WARNING_ON_ROOT( "Input flag ignored in toMatrixScaled; using flag = All" );
   }

   if ( storage_->hasGlobalCells() )
   {
      this->timingTree_->start( "pre-communication" );
      mu.communicate< Face, Cell >( level );
      mu.communicate< Edge, Cell >( level );
      mu.communicate< Vertex, Cell >( level );
      this->timingTree_->stop( "pre-communication" );

      for ( auto& it : storage_->getCells() )
      {
         Cell& cell = *it.second;

         // get hold of the actual numerical data
         idx_t*  _data_srcVertex = cell.getData( src.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t*  _data_srcEdge   = cell.getData( src.getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         idx_t*  _data_dstVertex = cell.getData( dst.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t*  _data_dstEdge   = cell.getData( dst.getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_muVertex  = cell.getData( mu.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_muEdge    = cell.getData( mu.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
         const auto   num_microfaces_per_face          = (int64_t) levelinfo::num_microfaces_per_face( level );
         const auto   micro_edges_per_macro_edge_float = (real_t) levelinfo::num_microedges_per_edge( level );
         const real_t macro_vertex_coord_id_0comp0     = (real_t) cell.getCoordinates()[0][0];
         const real_t macro_vertex_coord_id_0comp1     = (real_t) cell.getCoordinates()[0][1];
         const real_t macro_vertex_coord_id_0comp2     = (real_t) cell.getCoordinates()[0][2];
         const real_t macro_vertex_coord_id_1comp0     = (real_t) cell.getCoordinates()[1][0];
         const real_t macro_vertex_coord_id_1comp1     = (real_t) cell.getCoordinates()[1][1];
         const real_t macro_vertex_coord_id_1comp2     = (real_t) cell.getCoordinates()[1][2];
         const real_t macro_vertex_coord_id_2comp0     = (real_t) cell.getCoordinates()[2][0];
         const real_t macro_vertex_coord_id_2comp1     = (real_t) cell.getCoordinates()[2][1];
         const real_t macro_vertex_coord_id_2comp2     = (real_t) cell.getCoordinates()[2][2];
         const real_t macro_vertex_coord_id_3comp0     = (real_t) cell.getCoordinates()[3][0];
         const real_t macro_vertex_coord_id_3comp1     = (real_t) cell.getCoordinates()[3][1];
         const real_t macro_vertex_coord_id_3comp2     = (real_t) cell.getCoordinates()[3][2];

         this->timingTree_->start( "kernel" );

         toMatrixScaled_P2ElementwiseEpsilon_2_1_macro_3D(

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
             micro_edges_per_macro_edge_float,
             toMatrixScaling );

         this->timingTree_->stop( "kernel" );
      }
   }
   else
   {
      this->timingTree_->start( "pre-communication" );
      communication::syncFunctionBetweenPrimitives( mu, level, communication::syncDirection_t::LOW2HIGH );
      this->timingTree_->stop( "pre-communication" );

      WALBERLA_ABORT( "Not implemented." );
   }
   this->stopTiming( "toMatrixScaled" );
}
void P2ElementwiseEpsilon_2_1::toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                                         const P2Function< idx_t >&                  src,
                                         const P2Function< idx_t >&                  dst,
                                         uint_t                                      level,
                                         DoFType                                     flag ) const
{
   return toMatrixScaled( static_cast< real_t >( 1 ), mat, src, dst, level, flag );
}

} // namespace operatorgeneration

} // namespace hyteg
