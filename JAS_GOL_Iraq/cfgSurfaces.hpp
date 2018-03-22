class CfgSurfaces 
{
	class Default {};
	class JAS_GOL_Iraq_Dust_Surface : Default
	{	
		 files = "JAS_GOL_Iraq_Dust_*";
		 rough = 0.5;
		 maxSpeedCoef = 0.7;
		 dust = 0.9;
		 soundEnviron = "rock";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.1;
	};
	class JAS_GOL_Iraq_DesertRock_Surface : Default
	{	
		 files = "JAS_GOL_Iraq_DesertRock_*";
		 rough = 0.6;
		 maxSpeedCoef = 0.7;
		 dust = 0.9;
		 soundEnviron = "rock";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.01;
	};
	class JAS_GOL_Iraq_DesertRock2_Surface : Default
	{	
		 files = "JAS_GOL_Iraq_DesertRock2_*";
		 rough = 0.6;
		 maxSpeedCoef = 0.7;
		 dust = 0.9;
		 soundEnviron = "rock";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.01;
	};
	class JAS_GOL_Iraq_Sand_Surface : Default
	{	
		 files = "JAS_GOL_Iraq_Sand_*";
		 rough = 0.8;
		 maxSpeedCoef = 0.4;
		 dust = 0.9;
		 soundEnviron = "dirt";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.01;
	};
	class JAS_GOL_Iraq_Mud_Surface : Default
	{
		files = "JAS_GOL_Iraq_Mud_*";
		rough = 0.7;
		maxSpeedCoef = 0.4;
		dust = 0.2;
		soundEnviron = "mud_exp";
		character = "Empty";
		soundHit = "soft_ground";
		lucidity = 1;
		grassCover = 0.01;
	};
	class JAS_GOL_Iraq_Soil_Surface : Default
	{
		files = "JAS_GOL_Iraq_Soil_*";
		rough = 0.2;
		maxSpeedCoef = 0.9;
		dust = 0.2;
		soundEnviron = "mud_exp";
		character = "Empty";
		soundHit = "soft_ground";
		lucidity = 1;
		grassCover = 0.01;
	};
};
