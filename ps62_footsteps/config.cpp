class CfgPatches
{
	class ps62_footsteps
	{
		name = "Project Sounds62 - Footsteps Config";
		author = "MAXIMILI";
		requiredVersion = 1.0; 
		requiredAddons[] =
		{
			"DZ_Sounds_Effects",
			"ps62_data"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	#include "_mov_asphalt_ext.hpp"
};