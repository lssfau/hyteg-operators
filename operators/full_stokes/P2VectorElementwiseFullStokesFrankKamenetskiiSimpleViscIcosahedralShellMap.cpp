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

#include "P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap.hpp"

#define FUNC_PREFIX

namespace hyteg {

namespace operatorgeneration {

P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap::
    P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap(
        const std::shared_ptr< PrimitiveStorage >& storage,
        size_t                                     minLevel,
        size_t                                     maxLevel,
        const P2Function< real_t >&                _T_extra,
        real_t additiveOffSet_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap,
        real_t depthDependency_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap,
        real_t etaRef_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap,
        real_t radiusCMB_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap,
        real_t radiusSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap,
        real_t rockChemicalCompositionParameter_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap,
        real_t temperatureSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap )
: Operator( storage, minLevel, maxLevel )
, T_extra( _T_extra )
, additiveOffSet_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_(
      additiveOffSet_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap )
, depthDependency_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_(
      depthDependency_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap )
, etaRef_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_(
      etaRef_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap )
, radiusCMB_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_(
      radiusCMB_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap )
, radiusSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_(
      radiusSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap )
, rockChemicalCompositionParameter_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_(
      rockChemicalCompositionParameter_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap )
, temperatureSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_(
      temperatureSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap )
{}

void P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap::applyScaled(
    const real_t&                     operatorScaling,
    const P2VectorFunction< real_t >& src,
    const P2VectorFunction< real_t >& dst,
    uint_t                            level,
    DoFType                           flag,
    UpdateType                        updateType ) const
{
   this->startTiming( "applyScaled" );

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
      T_extra.communicate< Face, Cell >( level );
      T_extra.communicate< Edge, Cell >( level );
      T_extra.communicate< Vertex, Cell >( level );
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

         real_t* _data_T_extraVertex = cell.getData( T_extra.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_T_extraEdge   = cell.getData( T_extra.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

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

         applyScaled_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_macro_3D(

             _data_T_extraEdge,
             _data_T_extraVertex,
             _data_dst_edge_0,
             _data_dst_edge_1,
             _data_dst_edge_2,
             _data_dst_vertex_0,
             _data_dst_vertex_1,
             _data_dst_vertex_2,
             _data_src_edge_0,
             _data_src_edge_1,
             _data_src_edge_2,
             _data_src_vertex_0,
             _data_src_vertex_1,
             _data_src_vertex_2,
             additiveOffSet_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             depthDependency_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             etaRef_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
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
             operatorScaling,
             radRayVertex,
             radRefVertex,
             radiusCMB_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             radiusSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             rayVertex_0,
             rayVertex_1,
             rayVertex_2,
             refVertex_0,
             refVertex_1,
             refVertex_2,
             rockChemicalCompositionParameter_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             temperatureSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
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
      WALBERLA_ABORT( "Not implemented." );
   }

   this->stopTiming( "applyScaled" );
}
void P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap::apply( const P2VectorFunction< real_t >& src,
                                                                                        const P2VectorFunction< real_t >& dst,
                                                                                        uint_t                            level,
                                                                                        DoFType                           flag,
                                                                                        UpdateType updateType ) const
{
   return applyScaled( static_cast< real_t >( 1 ), src, dst, level, flag, updateType );
}
void P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap::toMatrixScaled(
    const real_t&                               toMatrixScaling,
    const std::shared_ptr< SparseMatrixProxy >& mat,
    const P2VectorFunction< idx_t >&            src,
    const P2VectorFunction< idx_t >&            dst,
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
      T_extra.communicate< Face, Cell >( level );
      T_extra.communicate< Edge, Cell >( level );
      T_extra.communicate< Vertex, Cell >( level );
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

         real_t* _data_T_extraVertex = cell.getData( T_extra.getVertexDoFFunction().getCellDataID() )->getPointer( level );
         real_t* _data_T_extraEdge   = cell.getData( T_extra.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

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

         toMatrixScaled_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_macro_3D(

             _data_T_extraEdge,
             _data_T_extraVertex,
             _data_dst_edge_0,
             _data_dst_edge_1,
             _data_dst_edge_2,
             _data_dst_vertex_0,
             _data_dst_vertex_1,
             _data_dst_vertex_2,
             _data_src_edge_0,
             _data_src_edge_1,
             _data_src_edge_2,
             _data_src_vertex_0,
             _data_src_vertex_1,
             _data_src_vertex_2,
             additiveOffSet_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             depthDependency_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             etaRef_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
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
             radiusCMB_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             radiusSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             rayVertex_0,
             rayVertex_1,
             rayVertex_2,
             refVertex_0,
             refVertex_1,
             refVertex_2,
             rockChemicalCompositionParameter_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             temperatureSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
             thrVertex_0,
             thrVertex_1,
             thrVertex_2,
             toMatrixScaling );

         this->timingTree_->stop( "kernel" );
      }
   }
   else
   {
      this->timingTree_->start( "pre-communication" );
      communication::syncFunctionBetweenPrimitives( T_extra, level, communication::syncDirection_t::LOW2HIGH );
      this->timingTree_->stop( "pre-communication" );

      WALBERLA_ABORT( "Not implemented." );
   }
   this->stopTiming( "toMatrixScaled" );
}
void P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap::toMatrix(
    const std::shared_ptr< SparseMatrixProxy >& mat,
    const P2VectorFunction< idx_t >&            src,
    const P2VectorFunction< idx_t >&            dst,
    uint_t                                      level,
    DoFType                                     flag ) const
{
   return toMatrixScaled( static_cast< real_t >( 1 ), mat, src, dst, level, flag );
}
void P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap::computeInverseDiagonalOperatorValuesScaled(
    const real_t& diagScaling )
{
   this->startTiming( "computeInverseDiagonalOperatorValuesScaled" );

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
         T_extra.communicate< Face, Cell >( level );
         T_extra.communicate< Edge, Cell >( level );
         T_extra.communicate< Vertex, Cell >( level );
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

            real_t* _data_T_extraVertex = cell.getData( T_extra.getVertexDoFFunction().getCellDataID() )->getPointer( level );
            real_t* _data_T_extraEdge   = cell.getData( T_extra.getEdgeDoFFunction().getCellDataID() )->getPointer( level );

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

            computeInverseDiagonalOperatorValuesScaled_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_macro_3D(

                _data_T_extraEdge,
                _data_T_extraVertex,
                _data_invDiag__edge_0,
                _data_invDiag__edge_1,
                _data_invDiag__edge_2,
                _data_invDiag__vertex_0,
                _data_invDiag__vertex_1,
                _data_invDiag__vertex_2,
                additiveOffSet_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
                depthDependency_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
                diagScaling,
                etaRef_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
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
                radiusCMB_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
                radiusSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
                rayVertex_0,
                rayVertex_1,
                rayVertex_2,
                refVertex_0,
                refVertex_1,
                refVertex_2,
                rockChemicalCompositionParameter_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
                temperatureSurface_P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap_,
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
         communication::syncFunctionBetweenPrimitives( T_extra, level, communication::syncDirection_t::LOW2HIGH );
         this->timingTree_->stop( "pre-communication" );

         WALBERLA_ABORT( "Not implemented." );
         ( *invDiag_ )[0].invertElementwise( level );
         ( *invDiag_ )[1].invertElementwise( level );
      }
   }

   this->stopTiming( "computeInverseDiagonalOperatorValuesScaled" );
}
void P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap::computeInverseDiagonalOperatorValues()
{
   return computeInverseDiagonalOperatorValuesScaled( static_cast< real_t >( 1 ) );
}
std::shared_ptr< P2VectorFunction< real_t > >
    P2VectorElementwiseFullStokesFrankKamenetskiiSimpleViscIcosahedralShellMap::getInverseDiagonalValues() const
{
   return invDiag_;
}

} // namespace operatorgeneration

} // namespace hyteg
