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

#include "P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap::P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap(
    const std::shared_ptr< PrimitiveStorage >& storage,
    size_t                                     minLevel,
    size_t                                     maxLevel,
    const P2Function< real_t >&                _rho )
: Operator( storage, minLevel, maxLevel )
, rho( _rho )
{}

void P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap::apply( const P2VectorFunction< real_t >& src,
                                                                     const P1Function< real_t >&       dst,
                                                                     uint_t                            level,
                                                                     DoFType                           flag,
                                                                     UpdateType                        updateType ) const
{
   this->startTiming( "apply" );

   // Make sure that halos are up-to-date
   this->timingTree_->start( "pre-communication" );
   if ( this->storage_->hasGlobalCells() )
   {
      WALBERLA_ABORT( "Not implemented." );
   }
   else
   {
      communication::syncVectorFunctionBetweenPrimitives( src, level, communication::syncDirection_t::LOW2HIGH );
      communication::syncFunctionBetweenPrimitives( rho, level, communication::syncDirection_t::LOW2HIGH );
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
      WALBERLA_ABORT( "Not implemented." );
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

         real_t* _data_dst       = face.getData( dst.getFaceDataID() )->getPointer( level );
         real_t* _data_rhoVertex = face.getData( rho.getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_rhoEdge   = face.getData( rho.getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

         // Zero out dst halos only
         //
         // This is also necessary when using update type == Add.
         // During additive comm we then skip zeroing the data on the lower-dim primitives.
         for ( const auto& idx : vertexdof::macroface::Iterator( level ) )
         {
            if ( vertexdof::macroface::isVertexOnBoundary( level, idx ) )
            {
               auto arrayIdx       = vertexdof::macroface::index( level, idx.x(), idx.y() );
               _data_dst[arrayIdx] = real_t( 0 );
            }
         }

         const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
         const auto   num_microfaces_per_face          = (int64_t) levelinfo::num_microfaces_per_face( level );
         const auto   micro_edges_per_macro_edge_float = (real_t) levelinfo::num_microedges_per_edge( level );
         const real_t macro_vertex_coord_id_0comp0     = (real_t) face.getCoordinates()[0][0];
         const real_t macro_vertex_coord_id_0comp1     = (real_t) face.getCoordinates()[0][1];
         const real_t macro_vertex_coord_id_1comp0     = (real_t) face.getCoordinates()[1][0];
         const real_t macro_vertex_coord_id_1comp1     = (real_t) face.getCoordinates()[1][1];
         const real_t macro_vertex_coord_id_2comp0     = (real_t) face.getCoordinates()[2][0];
         const real_t macro_vertex_coord_id_2comp1     = (real_t) face.getCoordinates()[2][1];
         WALBERLA_CHECK_NOT_NULLPTR(
             std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() ),
             "This operator requires the AnnulusMap to be registered as GeometryMap on every macro-cell." )
         real_t radRefVertex = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->radRefVertex();
         real_t radRayVertex = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->radRayVertex();
         real_t refVertex_0  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->refVertex()[0];
         real_t rayVertex_0  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->rayVertex()[0];
         real_t thrVertex_0  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->thrVertex()[0];
         real_t refVertex_1  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->refVertex()[1];
         real_t rayVertex_1  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->rayVertex()[1];
         real_t thrVertex_1  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->thrVertex()[1];

         this->timingTree_->start( "kernel" );

         apply_P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_macro_2D(

             _data_dst,
             _data_rhoEdge,
             _data_rhoVertex,
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
             micro_edges_per_macro_edge_float,
             radRayVertex,
             radRefVertex,
             rayVertex_0,
             rayVertex_1,
             refVertex_0,
             refVertex_1,
             thrVertex_0,
             thrVertex_1 );

         this->timingTree_->stop( "kernel" );
      }

      // Push result to lower-dimensional primitives
      //
      this->timingTree_->start( "post-communication" );
      // Note: We could avoid communication here by implementing the apply() also for the respective
      //       lower dimensional primitives!
      dst.communicateAdditively< Face, Edge >( level, DoFType::All ^ flag, *storage_, updateType == Replace );
      dst.communicateAdditively< Face, Vertex >( level, DoFType::All ^ flag, *storage_, updateType == Replace );
      this->timingTree_->stop( "post-communication" );
   }

   this->stopTiming( "apply" );
}
void P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap::toMatrix( const std::shared_ptr< SparseMatrixProxy >& mat,
                                                                        const P2VectorFunction< idx_t >&            src,
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
      rho.communicate< Face, Cell >( level );
      rho.communicate< Edge, Cell >( level );
      rho.communicate< Vertex, Cell >( level );
      this->timingTree_->stop( "pre-communication" );

      WALBERLA_ABORT( "Not implemented." );
   }
   else
   {
      this->timingTree_->start( "pre-communication" );
      communication::syncFunctionBetweenPrimitives( rho, level, communication::syncDirection_t::LOW2HIGH );
      this->timingTree_->stop( "pre-communication" );

      for ( auto& it : storage_->getFaces() )
      {
         Face& face = *it.second;

         // get hold of the actual numerical data
         idx_t* _data_src_vertex_0 = face.getData( src[0].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         idx_t* _data_src_edge_0   = face.getData( src[0].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );
         idx_t* _data_src_vertex_1 = face.getData( src[1].getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         idx_t* _data_src_edge_1   = face.getData( src[1].getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

         idx_t*  _data_dst       = face.getData( dst.getFaceDataID() )->getPointer( level );
         real_t* _data_rhoVertex = face.getData( rho.getVertexDoFFunction().getFaceDataID() )->getPointer( level );
         real_t* _data_rhoEdge   = face.getData( rho.getEdgeDoFFunction().getFaceDataID() )->getPointer( level );

         const auto   micro_edges_per_macro_edge       = (int64_t) levelinfo::num_microedges_per_edge( level );
         const auto   num_microfaces_per_face          = (int64_t) levelinfo::num_microfaces_per_face( level );
         const auto   micro_edges_per_macro_edge_float = (real_t) levelinfo::num_microedges_per_edge( level );
         const real_t macro_vertex_coord_id_0comp0     = (real_t) face.getCoordinates()[0][0];
         const real_t macro_vertex_coord_id_0comp1     = (real_t) face.getCoordinates()[0][1];
         const real_t macro_vertex_coord_id_1comp0     = (real_t) face.getCoordinates()[1][0];
         const real_t macro_vertex_coord_id_1comp1     = (real_t) face.getCoordinates()[1][1];
         const real_t macro_vertex_coord_id_2comp0     = (real_t) face.getCoordinates()[2][0];
         const real_t macro_vertex_coord_id_2comp1     = (real_t) face.getCoordinates()[2][1];
         WALBERLA_CHECK_NOT_NULLPTR(
             std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() ),
             "This operator requires the AnnulusMap to be registered as GeometryMap on every macro-cell." )
         real_t radRefVertex = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->radRefVertex();
         real_t radRayVertex = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->radRayVertex();
         real_t refVertex_0  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->refVertex()[0];
         real_t rayVertex_0  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->rayVertex()[0];
         real_t thrVertex_0  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->thrVertex()[0];
         real_t refVertex_1  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->refVertex()[1];
         real_t rayVertex_1  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->rayVertex()[1];
         real_t thrVertex_1  = std::dynamic_pointer_cast< AnnulusMap >( face.getGeometryMap() )->thrVertex()[1];

         this->timingTree_->start( "kernel" );

         toMatrix_P2VectorToP1ElementwiseDivergenceCompressibleAnnulusMap_macro_2D(

             _data_dst,
             _data_rhoEdge,
             _data_rhoVertex,
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
             micro_edges_per_macro_edge_float,
             radRayVertex,
             radRefVertex,
             rayVertex_0,
             rayVertex_1,
             refVertex_0,
             refVertex_1,
             thrVertex_0,
             thrVertex_1 );

         this->timingTree_->stop( "kernel" );
      }
   }
   this->stopTiming( "toMatrix" );
}

} // namespace operatorgeneration

} // namespace hyteg
