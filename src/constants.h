//
//  constants.h
//  CVMversions
//
//  Created by Ethan M. Thomson on 20/06/14.
//  Copyright (c) 2014 Dept. Civil Engineering. All rights reserved.
//

#ifndef constants_h
#define constants_h

#define GLOBAL_SURF_IN_DIM_MAX 1601 // maximum dimension of global surface input files
#define BASIN_SURF_IN_DIM_MAX 1022 // maximum dimension of basin surface input files
#define MAX_FILENAME_STRING_LEN 1024 // maximum dimension of basin surface input files
#define LON_GRID_DIM_MAX 8501 // X
#define LAT_GRID_DIM_MAX 8501 // Y
#define DEP_GRID_DIM_MAX 1511 // Z
//#define LON_GRID_DIM_MAX 2126 // X
//#define LAT_GRID_DIM_MAX 751 // Y
//#define DEP_GRID_DIM_MAX 251 // Z
#define SUB_MOD_DIM_MAX 50 // maximum number of entries in the 1d sub model arrays
#define MAX_NUM_BASINS 2 // the maxinum number of basins
#define MAX_NUM_GLOBAL_SURFACES 4 // the maxinum number of global (Full domain) surfaces
#define MAX_NUM_BASIN_SURFACES 12 // the maximum number of basin surfaces
#define MAX_NUM_1D_VELOCITY_MODELS 1 // the maximum number of 1D velocity models
#define MAX_NUM_BASIN_BOUNDARIES 3 // the maximum number of boundaries per velocity model
#define MAX_NUM_GEN_MULTI_PROFILES 1000 // the maximum number of profiles able to be generated by GEN_MULTI_PROFILES_CALL
#define MAX_NUM_GRIDPOINTS 1000 // the maximum number of gridpoints able to be read from gridpoints textfile





#define MAX_DIM_BOUNDARY_FILE 1500 // maximum number of points to define a basin boundary
//#define MAX_NUM_VELOSUBMOD 15 // max number of velo sub models in the basin
#define MAX_NUM_SLICE_GRIDPTS 2000 // the maximum number of grid points for slice extraction
//#define MAX_NUM_SLICE_PIVOTS 4
#define MAX_NUM_TOMO_SURFACES 21 // the maximun number of Tomography surfaces able to be loaded
#define SURF_IN_DIM_MAX_TOMO 1200 // maximum dimension of tomography surfaces
#define MAX_NUM_GLOBAL_SURFACES 4 // the maximum number of full domain (global) surfaces
#define EARTH_RADIUS_MEAN 6378.139 //6371.0071
#define MAX_NUM_SLICES 20 // the maximum number of slices in the slice parameters files
#define MAX_LAT_SURFACE_EXTENSION 1 // value in degrees the surface files may be extended by
#define MAX_LON_SURFACE_EXTENSION 1 // value in degrees the surface files may be extended by

#define pi_180 0.017453292 // value of pi/180 used to convert degrees to radians

#define P_a 101.325 // kPa
#define ns_marine 0.331
#define ns_gravel 0.273
#define rho_const 19.0 // t/m3
#define As_gravel 0.312 // m/s
#define As_silt 0.192 // m/s

// constants for coord generation functions
#define         FLAT_CONST      298.256
#define         ERAD            6378.139
#define         RPERD           0.017453292





#endif


#if !defined(M_PI)
    #define M_PI 3.14159

#endif


/*
 Purpose:
 
 Input variables:
 
 Output variables:
 */

/*
 *GLOBAL_MODEL_PARAMETERS - struct containing all model parameters (surface names, submodel names, basin names etc)
 *VELO_MOD_1D_DATA - struct containing a 1D velocity model
 *NZ_TOMOGRAPHY_DATA - struct containing tomography sub velocity model data (tomography surfaces depths etc)
 *GLOBAL_SURFACES - struct containing pointers to global surfaces (whole domain surfaces which sub velocity models apply between)
 *BASIN_DATA - struct containing basin data (surfaces submodels etc)
 *MESH_VECTOR - struct containing a single lat lon point with one or more depths
 *CALCULATION_LOG - struct containing calculation data and output directory (tracks various parameters for error reporting etc)
 MODEL_EXTENT - struct containing the extent, spacing and version of the model
 *GLOBAL_MESH - structure containing the full model grid (lat, lon and depth points)
 *PARTIAL_GLOBAL_SURFACE_DEPTHS - struct containing the global surface depths at the lat lon of the grid point
 *GLOBAL_SURF_READ - structure containing a global surface
 *BASIN_SURF_READ - structure containing a basin surface

 *PARTIAL_GLOBAL_MESH - struct containing a slice of the global mesh

 *QUALITIES_VECTOR - struct housing Vp Vs and Rho for one Lat Lon value and one or more depths
 *ADJACENT_POINTS - structure containing indicies of points adjacent to the lat - lon for interpolation
 *IN_BASIN - struct containing flags to indicate if lat lon point - depths lie within the basin
 *PARTIAL_BASIN_SURFACE_DEPTHS - struct containing depths for all applicable basin surfaces at one lat - lon location
 *BASIN_SURF_READ - struct containing a basin surface
 Lat - latitude value of point of concern
 Lon - longitude value of point of concern
 depth - the depth of the gridpoint to determine the properties at
 zInd - the depth indice of the single grid point (related to storing Vp Vs and Rho values in QUALITIES_VECTOR)
 basinSubModelInd - the indicie of the basin sub velocity model to be used



 basinNum - the basin number pertaining to the basin of interest

 */












