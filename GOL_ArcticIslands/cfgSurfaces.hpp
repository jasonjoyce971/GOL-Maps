class CfgSurfaces 
{
	class Default {};
	class GOL_ArcticIslands_Snow_Surface : Default
	{	
		 files = "GOL_ArcticIslands_Snow_*";
		 rough = 0.8;
		 maxSpeedCoef = 0.3;
		 dust = 0.1;
		 soundEnviron = "sand";
		 //character = "GOL_ArcticIslands_Snow_Character";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.01;
	};
	class GOL_ArcticIslands_Cliffs_Surface : Default
	{	
		 files = "GOL_ArcticIslands_Cliffs_*";
		 rough = 0.9;
		 maxSpeedCoef = 0.5;
		 dust = 0.1;
		 soundEnviron = "rock";
		 character = "Empty";
		 soundHit = "hard_ground";
		 lucidity = 1;
		 grassCover = 0.01;
	};
	class GOL_ArcticIslands_Beach_Surface : Default
	{	
		 files = "GOL_ArcticIslands_Beach_*";
		 rough = 0.4;
		 maxSpeedCoef = 0.8;
		 dust = 0.5;
		 soundEnviron = "sand";
		 //character = "GOL_ArcticIslands_Beach_Character";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.1;
	};
	class GOL_ArcticIslands_Seabed_Surface : Default
	{	
		 files = "GOL_ArcticIslands_Seabed_*";
		 rough = 0.4;
		 maxSpeedCoef = 0.6;
		 dust = 0.4;
		 soundEnviron = "seabed_exp";
		 //character = "GOL_ArcticIslands_Seabed_Character";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.1;
	};
};

class CfgSurfaceCharacters
{
	class GOL_ArcticIslands_Snow_Character
	{
		probability[] = { 0.5 };
		names[] = { "jason_tanith_beach_grass" };
	};
    class jason_tanith_dry_grass_Character
	{
		probability[] = {0.2,0.2,0.2,0.2,0.1};
		names[] = {"jason_tanith_c_Flower_BrushMedium_Blue","jason_tanith_c_Grass_BrushHigh_Dry","jason_tanith_c_GrassLong_DryBunch","jason_tanith_c_StrGrassDryMedium_group","jason_tanith_c_Thistle_Small_GreenYellow"};
	};
	class jason_tanith_farm_soil_Character
  	{
		probability[] = { 0.16, 0.16, 0.16, 0.16, 0.16, 0.16 };
		names[] = {"jason_tanith_GrassGreenGroup","jason_tanith_FlowerLowYellow2","jason_tanith_c_bigFallenBranches_pine","jason_tanith_c_bigFallenBranches_pine02","jason_tanith_c_bigFallenBranches_pine03","jason_tanith_c_GrassGreen_GroupHard"};
  	};
	class jason_tanith_inland_grass_Character
	{
		probability[] = { 0.16, 0.16, 0.16, 0.16, 0.16 };
		names[] = { "jason_tanith_GrassGreenGroup", "jason_tanith_FlowerLowYellow2", "jason_tanith_c_Thistle_Small_GreenYellow", "jason_tanith_c_Flower_BrushMedium_Blue", "jason_tanith_c_GrassGreen_GroupHard" };
	};
	class jason_tanith_lowland_grass_Character
	{
		probability[] = { 0.16, 0.16, 0.16, 0.16, 0.16 };
		names[] = { "jason_tanith_c_GrassLong_DryBunch", "jason_tanith_c_Grass_Tall_Dead", "jason_tanith_c_Thistle_Small_GreenYellow", "jason_tanith_c_StrThornGreen", "jason_tanith_c_StrGrassDryMedium_group" };
	};
	class jason_tanith_seabed_Character
	{
		probability[] = { 0.24, 0.24, 0.24, 0.24 };
		names[] = { "jason_tanith_c_Coral_brain_flat_set1", "jason_tanith_c_Coral_SPS_pink_set", "jason_tanith_c_Corals_set_t", "jason_tanith_c_SeaDollars_set1" };
	};
	class jason_tanith_trans_grass_Character
	{
		probability[] = { 0.15, 0.15, 0.15, 0.15, 0.15 };
		names[] = { "jason_tanith_c_Grass_Tall_Dead", "jason_tanith_c_GrassGreen_GroupHard", "jason_tanith_c_StrThornGreen", "jason_tanith_c_StrWeedGreenTall", "jason_tanith_c_Thistle_High_Dead" };
	};
	class jason_tanith_swamp_Character
	{
		probability[] = { 0.15, 0.15, 0.15, 0.15, 0.15 };
		names[] = { "jason_tanith_c_Grass_Tall_Dead", "jason_tanith_c_GrassGreen_GroupHard", "jason_tanith_c_StrThornGreen", "jason_tanith_c_StrWeedGreenTall", "jason_tanith_c_Thistle_High_Dead" };
	};
};