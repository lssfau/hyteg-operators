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

#include "P2VectorElementwiseFullStokes.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

P2VectorElementwiseFullStokes::P2VectorElementwiseFullStokes( const std::shared_ptr< PrimitiveStorage >& storage,
                                                              size_t                                     minLevel,
                                                              size_t                                     maxLevel,
                                                              const P2Function< real_t >&                _mu )
: Operator( storage, minLevel, maxLevel )
, mu( _mu )
{}

void P2VectorElementwiseFullStokes::apply( const P2VectorFunction< real_t >& src,
                                           const P2VectorFunction< real_t >& dst,
                                           uint_t                            level,
                                           DoFType                           flag,
                                           UpdateType                        updateType ) const
{
   this->startTiming( "apply" );

   // Make sure that halos are up-to-date
   this->timingTree_->start( "pre-communication" );
   if ( this->storage_->hasGlobalCells() )
   {
      // Note that the order of communication is important, since the face -> cell communication may overwrite
      // parts of the halos that carry the macro-vertex and macro-edge unknowns.
      src[0].communicate< Face, Cell >( level );
      src[0].communicate< Edge, Cell >( level );
      src[0].communicate< Vertex, Cell >( level );
      src[1].communicate< Face, Cell >( level );
      src[1].communicate< Edge, Cell >( level );
      src[1].communicate< Vertex, Cell >( level );
      src[2].communicate< Face, Cell >( level );
      src[2].communicate< Edge, Cell >( level );
      src[2].communicate< Vertex, Cell >( level );
      mu.communicate< Face, Cell >( level );
      mu.communicate< Edge, Cell >( level );
      mu.communicate< Vertex, Cell >( level );
   }
   else
   {
      communication::syncVectorFunctionBetweenPrimitives( src, level, communication::syncDirection_t::LOW2HIGH );
      communication::syncFunctionBetweenPrimitives( mu, level, communication::syncDirection_t::LOW2HIGH );
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
         real_t* _data_src_vertex_0 = cell.getData( src[0].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_src_edge_0   = cell.getData( src[0].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_src_vertex_1 = cell.getData( src[1].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_src_edge_1   = cell.getData( src[1].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_src_vertex_2 = cell.getData( src[2].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_src_edge_2   = cell.getData( src[2].getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         real_t* _data_dst_vertex_0 = cell.getData( dst[0].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_dst_edge_0   = cell.getData( dst[0].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_dst_vertex_1 = cell.getData( dst[1].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_dst_edge_1   = cell.getData( dst[1].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_dst_vertex_2 = cell.getData( dst[2].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_dst_edge_2   = cell.getData( dst[2].getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         real_t* _data_muVertex = cell.getData( mu.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_muEdge   = cell.getData( mu.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         // Zero out dst halos only
         //
         // This is also necessary when using update type == Add.
         // During additive comm we then skip zeroing the data on the lower-dim primitives.
         for ( const auto& idx : vertexdof::macrocell::Iterator( level ) )
         {
            if ( !vertexdof::macrocell::isOnCellFace( idx, level ).empty() )
            {
               auto arrayIdx                = vertexdof::macrocell::index( level, idx.x(), idx.y(), idx.z() );
               _data_dst_vertex_0[arrayIdx] = real_t( 0 );
               _data_dst_vertex_1[arrayIdx] = real_t( 0 );
               _data_dst_vertex_2[arrayIdx] = real_t( 0 );
            }
         }
         edgedof::macrocell::setBoundaryToZero( level, cell, dst[0].getEdgeDoFFunction().getCellDataID() );
         edgedof::macrocell::setBoundaryToZero( level, cell, dst[1].getEdgeDoFFunction().getCellDataID() );
         edgedof::macrocell::setBoundaryToZero( level, cell, dst[2].getEdgeDoFFunction().getCellDataID() );

         const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
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

         apply_P2VectorElementwiseFullStokes_macro_3D(

             _data_dst_edge_0,
             _data_dst_edge_1,
             _data_dst_edge_2,
             _data_dst_vertex_0,
             _data_dst_vertex_1,
             _data_dst_vertex_2,
             _data_muEdge,
             _data_muVertex,
             _data_src_edge_0,
             _data_src_edge_1,
             _data_src_edge_2,
             _data_src_vertex_0,
             _data_src_vertex_1,
             _data_src_vertex_2,
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

         this->timingTree_->stop( "kernel" );
      }

      // Push result to lower-dimensional primitives
      //
      this->timingTree_->start( "post-communication" );
      // Note: We could avoid communication here by implementing the apply() also for the respective
      //       lower dimensional primitives!
      dst[0].getVertexDoFFunction().communicateAdditively< Cell, Face >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[0].getVertexDoFFunction().communicateAdditively< Cell, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[0].getVertexDoFFunction().communicateAdditively< Cell, Vertex >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[0].getEdgeDoFFunction().communicateAdditively< Cell, Face >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[0].getEdgeDoFFunction().communicateAdditively< Cell, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[1].getVertexDoFFunction().communicateAdditively< Cell, Face >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[1].getVertexDoFFunction().communicateAdditively< Cell, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[1].getVertexDoFFunction().communicateAdditively< Cell, Vertex >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[1].getEdgeDoFFunction().communicateAdditively< Cell, Face >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[1].getEdgeDoFFunction().communicateAdditively< Cell, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[2].getVertexDoFFunction().communicateAdditively< Cell, Face >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[2].getVertexDoFFunction().communicateAdditively< Cell, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[2].getVertexDoFFunction().communicateAdditively< Cell, Vertex >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[2].getEdgeDoFFunction().communicateAdditively< Cell, Face >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[2].getEdgeDoFFunction().communicateAdditively< Cell, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      this->timingTree_->stop( "post-communication" );
   }
   else
   {
      for ( auto& it : storage_->getFaces() )
      {
         Face& face = *it.second;

         // get hold of the actual numerical data in the functions
         real_t* _data_src_vertex_0 = face.getData( src[0].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_src_edge_0   = face.getData( src[0].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_src_vertex_1 = face.getData( src[1].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_src_edge_1   = face.getData( src[1].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

         real_t* _data_dst_vertex_0 = face.getData( dst[0].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_dst_edge_0   = face.getData( dst[0].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_dst_vertex_1 = face.getData( dst[1].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_dst_edge_1   = face.getData( dst[1].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

         real_t* _data_muVertex = face.getData( mu.getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_muEdge   = face.getData( mu.getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

         // Zero out dst halos only
         //
         // This is also necessary when using update type == Add.
         // During additive comm we then skip zeroing the data on the lower-dim primitives.
         for ( const auto& idx : vertexdof::macroface::Iterator( level ) )
         {
            if ( vertexdof::macroface::isVertexOnBoundary( level, idx ) )
            {
               auto arrayIdx                = vertexdof::macroface::index( level, idx.x(), idx.y() );
               _data_dst_vertex_0[arrayIdx] = walberla::numeric_cast< real_t >( 0 );
               _data_dst_vertex_1[arrayIdx] = walberla::numeric_cast< real_t >( 0 );
            }
         }
         for ( const auto& idx : edgedof::macroface::Iterator( level ) )
         {
            for ( const auto& orientation : edgedof::faceLocalEdgeDoFOrientations )
            {
               if ( !edgedof::macroface::isInnerEdgeDoF( level, idx, orientation ) )
               {
                  auto arrayIdx              = edgedof::macroface::index( level, idx.x(), idx.y(), orientation );
                  _data_dst_edge_0[arrayIdx] = walberla::numeric_cast< real_t >( 0 );
                  _data_dst_edge_1[arrayIdx] = walberla::numeric_cast< real_t >( 0 );
               }
            }
         }

         const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
         const auto   micro_edges_per_macro_edge_float = (real_t) levelinfo::num_microedges_per_edge( level );
         const real_t macro_vertex_coord_id_0comp0     = (real_t) face.getCoordinates()[0][0];
         const real_t macro_vertex_coord_id_0comp1     = (real_t) face.getCoordinates()[0][1];
         const real_t macro_vertex_coord_id_1comp0     = (real_t) face.getCoordinates()[1][0];
         const real_t macro_vertex_coord_id_1comp1     = (real_t) face.getCoordinates()[1][1];
         const real_t macro_vertex_coord_id_2comp0     = (real_t) face.getCoordinates()[2][0];
         const real_t macro_vertex_coord_id_2comp1     = (real_t) face.getCoordinates()[2][1];

         this->timingTree_->start( "kernel" );

         apply_P2VectorElementwiseFullStokes_macro_2D(

             _data_dst_edge_0,
             _data_dst_edge_1,
             _data_dst_vertex_0,
             _data_dst_vertex_1,
             _data_muEdge,
             _data_muVertex,
             _data_src_edge_0,
             _data_src_edge_1,
             _data_src_vertex_0,
             _data_src_vertex_1,
             macro_vertex_coord_id_0comp0,
             macro_vertex_coord_id_0comp1,
             macro_vertex_coord_id_1comp0,
             macro_vertex_coord_id_1comp1,
             macro_vertex_coord_id_2comp0,
             macro_vertex_coord_id_2comp1,
             micro_edges_per_macro_edge,
             micro_edges_per_macro_edge_float );

         this->timingTree_->stop( "kernel" );
      }

      // Push result to lower-dimensional primitives
      //
      this->timingTree_->start( "post-communication" );
      // Note: We could avoid communication here by implementing the apply() also for the respective
      //       lower dimensional primitives!
      dst[0].getVertexDoFFunction().communicateAdditively< Face, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[0].getVertexDoFFunction().communicateAdditively< Face, Vertex >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[0].getEdgeDoFFunction().communicateAdditively< Face, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[1].getVertexDoFFunction().communicateAdditively< Face, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[1].getVertexDoFFunction().communicateAdditively< Face, Vertex >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst[1].getEdgeDoFFunction().communicateAdditively< Face, Edge >(
          level, DoFType::All ^ flag, *storage_, updateType == Replace );
      this->timingTree_->stop( "post-communication" );
   }

   this->stopTiming( "apply" );
}
void P2VectorElementwiseFullStokes::toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                                              const P2VectorFunction< idx_t >&            src,
                                              const P2VectorFunction< idx_t >&            dst,
                                              uint_t                                      level,
                                              DoFType                                     flag ) const
{
   this->startTiming( "toMatrix" );

   // We currently ignore the flag provided!
   if ( flag != All )
   {
      WALBERLA_LOG_WARNING_ON_ROOT( "Input flag ignored in toMatrix; using flag = All" );
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
         idx_t* _data_src_vertex_0 = cell.getData( src[0].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_src_edge_0   = cell.getData( src[0].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_src_vertex_1 = cell.getData( src[1].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_src_edge_1   = cell.getData( src[1].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_src_vertex_2 = cell.getData( src[2].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_src_edge_2   = cell.getData( src[2].getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         idx_t* _data_dst_vertex_0 = cell.getData( dst[0].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_dst_edge_0   = cell.getData( dst[0].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_dst_vertex_1 = cell.getData( dst[1].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_dst_edge_1   = cell.getData( dst[1].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_dst_vertex_2 = cell.getData( dst[2].getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_dst_edge_2   = cell.getData( dst[2].getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         real_t* _data_muVertex = cell.getData( mu.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_muEdge   = cell.getData( mu.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

         const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
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

         toMatrix_P2VectorElementwiseFullStokes_macro_3D(

             _data_dst_edge_0,
             _data_dst_edge_1,
             _data_dst_edge_2,
             _data_dst_vertex_0,
             _data_dst_vertex_1,
             _data_dst_vertex_2,
             _data_muEdge,
             _data_muVertex,
             _data_src_edge_0,
             _data_src_edge_1,
             _data_src_edge_2,
             _data_src_vertex_0,
             _data_src_vertex_1,
             _data_src_vertex_2,
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

         this->timingTree_->stop( "kernel" );
      }
   }
   else
   {
      this->timingTree_->start( "pre-communication" );
      communication::syncFunctionBetweenPrimitives( mu, level, communication::syncDirection_t::LOW2HIGH );
      this->timingTree_->stop( "pre-communication" );

      for ( auto& it : storage_->getFaces() )
      {
         Face& face = *it.second;

         // get hold of the actual numerical data
         idx_t* _data_src_vertex_0 = face.getData( src[0].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         idx_t* _data_src_edge_0   = face.getData( src[0].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );
         idx_t* _data_src_vertex_1 = face.getData( src[1].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         idx_t* _data_src_edge_1   = face.getData( src[1].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

         idx_t* _data_dst_vertex_0 = face.getData( dst[0].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         idx_t* _data_dst_edge_0   = face.getData( dst[0].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );
         idx_t* _data_dst_vertex_1 = face.getData( dst[1].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         idx_t* _data_dst_edge_1   = face.getData( dst[1].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

         real_t* _data_muVertex = face.getData( mu.getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_muEdge   = face.getData( mu.getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

         const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
         const auto   micro_edges_per_macro_edge_float = (real_t) levelinfo::num_microedges_per_edge( level );
         const real_t macro_vertex_coord_id_0comp0     = (real_t) face.getCoordinates()[0][0];
         const real_t macro_vertex_coord_id_0comp1     = (real_t) face.getCoordinates()[0][1];
         const real_t macro_vertex_coord_id_1comp0     = (real_t) face.getCoordinates()[1][0];
         const real_t macro_vertex_coord_id_1comp1     = (real_t) face.getCoordinates()[1][1];
         const real_t macro_vertex_coord_id_2comp0     = (real_t) face.getCoordinates()[2][0];
         const real_t macro_vertex_coord_id_2comp1     = (real_t) face.getCoordinates()[2][1];

         this->timingTree_->start( "kernel" );

         toMatrix_P2VectorElementwiseFullStokes_macro_2D(

             _data_dst_edge_0,
             _data_dst_edge_1,
             _data_dst_vertex_0,
             _data_dst_vertex_1,
             _data_muEdge,
             _data_muVertex,
             _data_src_edge_0,
             _data_src_edge_1,
             _data_src_vertex_0,
             _data_src_vertex_1,
             macro_vertex_coord_id_0comp0,
             macro_vertex_coord_id_0comp1,
             macro_vertex_coord_id_1comp0,
             macro_vertex_coord_id_1comp1,
             macro_vertex_coord_id_2comp0,
             macro_vertex_coord_id_2comp1,
             mat,
             micro_edges_per_macro_edge,
             micro_edges_per_macro_edge_float );

         this->timingTree_->stop( "kernel" );
      }
   }
   this->stopTiming( "toMatrix" );
}
void P2VectorElementwiseFullStokes::computeInverseDiagonalOperatorValues()
{
   this->startTiming( "computeInverseDiagonalOperatorValues" );

   if ( invDiag_ == nullptr )
   {
      invDiag_ = std::make_shared< P2VectorFunction< real_t > >( "inverse diagonal entries", storage_, minLevel_, maxLevel_ );
   }

   for ( uint_t level = minLevel_; level <= maxLevel_; level++ )
   {
      invDiag_->setToZero( level );

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
            real_t* _data_invDiag__vertex_0 =
                cell.getData( ( *invDiag_ )[0].getVertexDoFFunction().getCellDataID() )->getPointer( level );
            real_t* _data_invDiag__edge_0 =
                cell.getData( ( *invDiag_ )[0].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
            real_t* _data_invDiag__vertex_1 =
                cell.getData( ( *invDiag_ )[1].getVertexDoFFunction().getCellDataID() )->getPointer( level );
            real_t* _data_invDiag__edge_1 =
                cell.getData( ( *invDiag_ )[1].getEdgeDoFFunction().getCellDataID() )->getPointer( level );
            real_t* _data_invDiag__vertex_2 =
                cell.getData( ( *invDiag_ )[2].getVertexDoFFunction().getCellDataID() )->getPointer( level );
            real_t* _data_invDiag__edge_2 =
                cell.getData( ( *invDiag_ )[2].getEdgeDoFFunction().getCellDataID() )->getPointer( level );

            real_t* _data_muVertex = cell.getData( mu.getVertexDoFFunction().getCellDataID() )->getPointer( level );
            real_t* _data_muEdge   = cell.getData( mu.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

            const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
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

            computeInverseDiagonalOperatorValues_P2VectorElementwiseFullStokes_macro_3D(

                _data_invDiag__edge_0,
                _data_invDiag__edge_1,
                _data_invDiag__edge_2,
                _data_invDiag__vertex_0,
                _data_invDiag__vertex_1,
                _data_invDiag__vertex_2,
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

            this->timingTree_->stop( "kernel" );
         }

         // Push result to lower-dimensional primitives
         //
         this->timingTree_->start( "post-communication" );
         // Note: We could avoid communication here by implementing the apply() also for the respective
         //       lower dimensional primitives!
         ( *invDiag_ )[0].getVertexDoFFunction().communicateAdditively< Cell, Face >( level );
         ( *invDiag_ )[0].getVertexDoFFunction().communicateAdditively< Cell, Edge >( level );
         ( *invDiag_ )[0].getVertexDoFFunction().communicateAdditively< Cell, Vertex >( level );
         ( *invDiag_ )[0].getEdgeDoFFunction().communicateAdditively< Cell, Face >( level );
         ( *invDiag_ )[0].getEdgeDoFFunction().communicateAdditively< Cell, Edge >( level );
         ( *invDiag_ )[1].getVertexDoFFunction().communicateAdditively< Cell, Face >( level );
         ( *invDiag_ )[1].getVertexDoFFunction().communicateAdditively< Cell, Edge >( level );
         ( *invDiag_ )[1].getVertexDoFFunction().communicateAdditively< Cell, Vertex >( level );
         ( *invDiag_ )[1].getEdgeDoFFunction().communicateAdditively< Cell, Face >( level );
         ( *invDiag_ )[1].getEdgeDoFFunction().communicateAdditively< Cell, Edge >( level );
         ( *invDiag_ )[2].getVertexDoFFunction().communicateAdditively< Cell, Face >( level );
         ( *invDiag_ )[2].getVertexDoFFunction().communicateAdditively< Cell, Edge >( level );
         ( *invDiag_ )[2].getVertexDoFFunction().communicateAdditively< Cell, Vertex >( level );
         ( *invDiag_ )[2].getEdgeDoFFunction().communicateAdditively< Cell, Face >( level );
         ( *invDiag_ )[2].getEdgeDoFFunction().communicateAdditively< Cell, Edge >( level );
         this->timingTree_->stop( "post-communication" );
         ( *invDiag_ )[0].invertElementwise( level );
         ( *invDiag_ )[1].invertElementwise( level );
         ( *invDiag_ )[2].invertElementwise( level );
      }
      else
      {
         this->timingTree_->start( "pre-communication" );
         communication::syncFunctionBetweenPrimitives( mu, level, communication::syncDirection_t::LOW2HIGH );
         this->timingTree_->stop( "pre-communication" );

         for ( auto& it : storage_->getFaces() )
         {
            Face& face = *it.second;

            // get hold of the actual numerical data
            real_t* _data_invDiag__vertex_0 =
                face.getData( ( *invDiag_ )[0].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
            real_t* _data_invDiag__edge_0 =
                face.getData( ( *invDiag_ )[0].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );
            real_t* _data_invDiag__vertex_1 =
                face.getData( ( *invDiag_ )[1].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
            real_t* _data_invDiag__edge_1 =
                face.getData( ( *invDiag_ )[1].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

            real_t* _data_muVertex = face.getData( mu.getVertexDoFFunction().getFaceDataID() )->getPointer( level );
            real_t* _data_muEdge   = face.getData( mu.getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

            const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
            const auto   micro_edges_per_macro_edge_float = (real_t) levelinfo::num_microedges_per_edge( level );
            const real_t macro_vertex_coord_id_0comp0     = (real_t) face.getCoordinates()[0][0];
            const real_t macro_vertex_coord_id_0comp1     = (real_t) face.getCoordinates()[0][1];
            const real_t macro_vertex_coord_id_1comp0     = (real_t) face.getCoordinates()[1][0];
            const real_t macro_vertex_coord_id_1comp1     = (real_t) face.getCoordinates()[1][1];
            const real_t macro_vertex_coord_id_2comp0     = (real_t) face.getCoordinates()[2][0];
            const real_t macro_vertex_coord_id_2comp1     = (real_t) face.getCoordinates()[2][1];

            this->timingTree_->start( "kernel" );

            computeInverseDiagonalOperatorValues_P2VectorElementwiseFullStokes_macro_2D(

                _data_invDiag__edge_0,
                _data_invDiag__edge_1,
                _data_invDiag__vertex_0,
                _data_invDiag__vertex_1,
                _data_muEdge,
                _data_muVertex,
                macro_vertex_coord_id_0comp0,
                macro_vertex_coord_id_0comp1,
                macro_vertex_coord_id_1comp0,
                macro_vertex_coord_id_1comp1,
                macro_vertex_coord_id_2comp0,
                macro_vertex_coord_id_2comp1,
                micro_edges_per_macro_edge,
                micro_edges_per_macro_edge_float );

            this->timingTree_->stop( "kernel" );
         }

         // Push result to lower-dimensional primitives
         //
         this->timingTree_->start( "post-communication" );
         // Note: We could avoid communication here by implementing the apply() also for the respective
         //       lower dimensional primitives!
         ( *invDiag_ )[0].getVertexDoFFunction().communicateAdditively< Face, Edge >( level );
         ( *invDiag_ )[0].getVertexDoFFunction().communicateAdditively< Face, Vertex >( level );
         ( *invDiag_ )[0].getEdgeDoFFunction().communicateAdditively< Face, Edge >( level );
         ( *invDiag_ )[1].getVertexDoFFunction().communicateAdditively< Face, Edge >( level );
         ( *invDiag_ )[1].getVertexDoFFunction().communicateAdditively< Face, Vertex >( level );
         ( *invDiag_ )[1].getEdgeDoFFunction().communicateAdditively< Face, Edge >( level );
         this->timingTree_->stop( "post-communication" );
         ( *invDiag_ )[0].invertElementwise( level );
         ( *invDiag_ )[1].invertElementwise( level );
      }
   }

   this->stopTiming( "computeInverseDiagonalOperatorValues" );
}
std::shared_ptr< P2VectorFunction< real_t > > P2VectorElementwiseFullStokes::getInverseDiagonalValues() const
{
   return invDiag_;
}

} // namespace operatorgeneration

} // namespace hyteg