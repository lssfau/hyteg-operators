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

#include "P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2::P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2(
    const std::shared_ptr< PrimitiveStorage >& storage,
    size_t                                     minLevel,
    size_t                                     maxLevel )
: Operator( storage, minLevel, maxLevel )
{}

void P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2::apply( const P2Function< real_t >& src,
                                                                const P1Function< real_t >& dst,
                                                                uint_t                      level,
                                                                DoFType                     flag,
                                                                UpdateType                  updateType ) const
{
   this->startTiming( "apply" );

   // Make sure that halos are up-to-date
   this->timingTree_->start( "pre-communication" );
   if ( this->storage_->hasGlobalCells() )
   {
      // Note that the order of communication is important, since the face -> cell communication may overwrite
      // parts of the halos that carry the macro-vertex and macro-edge unknowns.
      src.communicate< Face, Cell >( level );
      src.communicate< Edge, Cell >( level );
      src.communicate< Vertex, Cell >( level );
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
         real_t* _data_dst       = cell.getData( dst.getCellDataID() )->getPointer( level );

         // Zero out dst halos only
         //
         // This is also necessary when using update type == Add.
         // During additive comm we then skip zeroing the data on the lower-dim primitives.
         for ( const auto& idx : vertexdof::macrocell::Iterator( level ) )
         {
            if ( !vertexdof::macrocell::isOnCellFace( idx, level ).empty() )
            {
               auto arrayIdx       = vertexdof::macrocell::index( level, idx.x(), idx.y(), idx.z() );
               _data_dst[arrayIdx] = real_t( 0 );
            }
         }

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
         WALBERLA_CHECK_NOT_NULLPTR(
             std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() ),
             "This operator requires the IcosahedralShellMap to be registered as GeometryMap on every macro-cell." )
         real_t radRefVertex = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->radRefVertex();
         real_t radRayVertex = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->radRayVertex();
         real_t refVertex_0  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->refVertex()[0];
         real_t rayVertex_0  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->rayVertex()[0];
         real_t thrVertex_0  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->thrVertex()[0];
         real_t forVertex_0  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->forVertex()[0];
         real_t refVertex_1  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->refVertex()[1];
         real_t rayVertex_1  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->rayVertex()[1];
         real_t thrVertex_1  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->thrVertex()[1];
         real_t forVertex_1  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->forVertex()[1];
         real_t refVertex_2  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->refVertex()[2];
         real_t rayVertex_2  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->rayVertex()[2];
         real_t thrVertex_2  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->thrVertex()[2];
         real_t forVertex_2  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->forVertex()[2];

         this->timingTree_->start( "kernel" );

         apply_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_macro_3D(

             _data_dst,
             _data_srcEdge,
             _data_srcVertex,
             forVertex_0,
             forVertex_1,
             forVertex_2,
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
             radRayVertex,
             radRefVertex,
             rayVertex_0,
             rayVertex_1,
             rayVertex_2,
             refVertex_0,
             refVertex_1,
             refVertex_2,
             thrVertex_0,
             thrVertex_1,
             thrVertex_2 );

         this->timingTree_->stop( "kernel" );
      }

      // Push result to lower-dimensional primitives
      //
      this->timingTree_->start( "post-communication" );
      // Note: We could avoid communication here by implementing the apply() also for the respective
      //       lower dimensional primitives!
      dst.communicateAdditively< Cell, Face >( level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst.communicateAdditively< Cell, Edge >( level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst.communicateAdditively< Cell, Vertex >( level, DoFType::All ^ flag, *storage_, updateType == Replace );
      this->timingTree_->stop( "post-communication" );
   }
   else
   {
      WALBERLA_ABORT( "Not implemented." );
   }

   this->stopTiming( "apply" );
}
void P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2::toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                                                                   const P2Function< idx_t >&                  src,
                                                                   const P1Function< idx_t >&                  dst,
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

      this->timingTree_->stop( "pre-communication" );

      for ( auto& it : storage_->getCells() )
      {
         Cell& cell = *it.second;

         // get hold of the actual numerical data
         idx_t* _data_srcVertex = cell.getData( src.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_srcEdge   = cell.getData( src.getEdgeDoFFunction().getCellDataID() )->getPointer( level );
         idx_t* _data_dst       = cell.getData( dst.getCellDataID() )->getPointer( level );

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
         WALBERLA_CHECK_NOT_NULLPTR(
             std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() ),
             "This operator requires the IcosahedralShellMap to be registered as GeometryMap on every macro-cell." )
         real_t radRefVertex = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->radRefVertex();
         real_t radRayVertex = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->radRayVertex();
         real_t refVertex_0  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->refVertex()[0];
         real_t rayVertex_0  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->rayVertex()[0];
         real_t thrVertex_0  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->thrVertex()[0];
         real_t forVertex_0  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->forVertex()[0];
         real_t refVertex_1  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->refVertex()[1];
         real_t rayVertex_1  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->rayVertex()[1];
         real_t thrVertex_1  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->thrVertex()[1];
         real_t forVertex_1  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->forVertex()[1];
         real_t refVertex_2  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->refVertex()[2];
         real_t rayVertex_2  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->rayVertex()[2];
         real_t thrVertex_2  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->thrVertex()[2];
         real_t forVertex_2  = std::dynamic_pointer_cast< IcosahedralShellMap >( cell.getGeometryMap() )->forVertex()[2];

         this->timingTree_->start( "kernel" );

         toMatrix_P2ToP1ElementwiseDivergenceIcosahedralShellMap_0_2_macro_3D(

             _data_dst,
             _data_srcEdge,
             _data_srcVertex,
             forVertex_0,
             forVertex_1,
             forVertex_2,
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
             radRayVertex,
             radRefVertex,
             rayVertex_0,
             rayVertex_1,
             rayVertex_2,
             refVertex_0,
             refVertex_1,
             refVertex_2,
             thrVertex_0,
             thrVertex_1,
             thrVertex_2 );

         this->timingTree_->stop( "kernel" );
      }
   }
   else
   {
      this->timingTree_->start( "pre-communication" );

      this->timingTree_->stop( "pre-communication" );

      WALBERLA_ABORT( "Not implemented." );
   }
   this->stopTiming( "toMatrix" );
}

} // namespace operatorgeneration

} // namespace hyteg
