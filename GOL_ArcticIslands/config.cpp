#define _ARMA_

//Class config.bin{
class CfgPatches
{
 class GOL_ArcticIslands
 {
  units[] = {"GOL_ArcticIslands"};
  weapons[] = {};
  requiredVersion = 1.0;
  requiredaddons[]={"A3_Map_Stratis"};
  version = "22/03/2018";
  fileName = "GOL_ArcticIslands.pbo";
  author = "-{GOL}-Jason";
 };
};
class CfgWorlds
{
 class CAWorld;
 class Stratis: CAWorld
 {
  class Grid;
  class DefaultClutter;
 };
 class GOL_ArcticIslands: Stratis
 {
  cutscenes[] = {};
  author = "-{GOL}-Jason";
  description = "Arctic Islands";
  pictureMap = "GOL_ArcticIslands\data\pictureMap_ca.paa"; 
  worldName = "GOL_ArcticIslands\GOL_ArcticIslands.wrp";
  startTime = "11:00";
  startDate = "05/03/2001";
  startWeather = 0.2;
  startFog = 0.0;
  forecastWeather = 0.6;
  forecastFog = 0.0;
  centerPosition[] = {1024,1024,500};
  seagullPos[] = {1024,1024,500};
  longitude = 65;
  latitude = -34;
  elevationOffset = 5;
  envTexture = "A3\Data_f\env_land_ca.tga";
  clutterGrid = 1;
  clutterDist = 500;
  noDetailDist = 500;
  fullDetailDist = 15;
  minTreesInForestSquare = 4;
  minRocksInRockSquare = 4;
  newRoadsShape = "GOL_ArcticIslands\data\roads\roads.shp";
  ilsPosition[] = {1024,1024};
  ilsDirection[] = {0.5075,0.08,-0.8616};
  ilsTaxiIn[] = {};
  ilsTaxiOff[] = {};
  drawTaxiway = 0;
 class SecondaryAirports {};
class Sea
  {
   seaTexture = "a3\data_f\seatexture_co.paa";
   seaMaterial = "#water";
   shoreMaterial = "#shore";
   shoreFoamMaterial = "#shorefoam";
   shoreWetMaterial = "#shorewet";
   WaterMapScale = 20;
   WaterGrid = 50;
   MaxTide = 0;
   MaxWave = 0;
   SeaWaveXScale = "2.0/50";
   SeaWaveZScale = "1.0/50";
   SeaWaveHScale = 2.0;
   SeaWaveXDuration = 5000;
   SeaWaveZDuration = 10000;
  };
  class Grid: Grid
  {
   offsetX = 0;
   offsetY = 5120;
   class Zoom1
   {
    zoomMax = 0.15;
    format = "XY";
    formatX = "000";
    formatY = "000";
    stepX = 100;
    stepY = -100;
   };
   class Zoom2
   {
    zoomMax = 0.85;
    format = "XY";
    formatX = "00";
    formatY = "00";
    stepX = 1000;
    stepY = -1000;
   };
   class Zoom3
   {
    zoomMax = 1e+030.0;
    format = "XY";
    formatX = "0";
    formatY = "0";
    stepX = 10000;
    stepY = -10000;
   };
  };
#include "cfgClutter.hpp"
		class Names
		{
			#include "GOL_ArcticIslands.hpp"
		};
 };
};
class CfgWorldList
{
 class GOL_ArcticIslands{};
};
class CfgMissions
{
 class Cutscenes
 {
 
 };
};


//SURFACES
#include "cfgSurfaces.hpp"

