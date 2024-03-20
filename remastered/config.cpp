class CfgPatches
{
	class Bro_MSW_Remastered
	{
		name = "Modular Shoothouse Remastered [Bromine]";
		author = "Bromine";
		requiredAddons[] = {"A3_Structures_F","Bro_MSW_Base"};
		requiredVersion = 0.1;
		units[] =
		{
			"Bro_MSWR_Plain",
			"Bro_MSWR_Corner",
			"Bro_MSWR_Window",
			"Bro_MSWR_Doorway_Empty",
			"Bro_MSWR_Doorway",
			"Bro_MSF_Big",
			"Bro_MSF_Small",
			"Bro_MSF_Stairs_Floor",
			"Bro_MSF_Stairs"
		};
		weapons[] = {};
	};
};
class CfgFunctions 
{
	class BRO 
	{
		tag = "BRO";
		class functions 
		{
			file = "\Bro_ModularShoothouse\functions";
			class snap_remastered{};
		};
	};
};
class CfgEditorCategories
{
	class Bro_MSW_Base;
};
class CfgEditorSubcategories
{
	class sm_r
	{
		displayName = "Remastered Walls (Concrete)";
	};
	class sm_f_r
	{
		displayName = "Remastered Floors";
	};
};
class CfgVehicles
{
// Base class declarations. Avoid modifying.
	class House_F
	{
		class Eventhandlers;
	};
	class Bro_MSW_Remastered: House_F
	{
		armor=350;
		author = "Bromine";
		destrType = "DestructWall";
		icon = "Bro_ModularShoothouse\icon.paa";
		editorCategory = "Bro_MSW_Base";
		editorSubcategory = "sm_r";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Bro_ModularShoothouse\remastered\ModShNew_BRICK_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Bro_ModularShoothouse\remastered\ModShNew_BRICK.rvmat"
		};
		keepHorizontalPlacement = 1;
		mapSize = 3;
		numberOfDoors = 0;
		scope = 1;
		scopeCurator = 1;
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
		};
		class DestructionEffects{};
		class EventHandlers: EventHandlers
		{
			dragged3DEN = "_this call bro_fnc_snap_remastered;";
			registeredToWorld3DEN = "_this call bro_fnc_snap_remastered;";
		};
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
	};
	class Bro_MSF_Remastered: Bro_MSW_Remastered
	{
		editorSubcategory = "sm_f_r";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
// Walls
	class Land_Bro_MSWR_Plain: Bro_MSW_Remastered
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall: Plain";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Plain.p3d";
	};
	class Land_Bro_MSWR_Corner: Land_Bro_MSWR_Plain
	{
		displayName = "Wall: Endpiece";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Corner.p3d";
	};
	class Land_Bro_MSWR_Window: Land_Bro_MSWR_Plain
	{
		displayName = "Wall: Window";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Window.p3d";
	};
	class Land_Bro_MSWR_Doorway_Empty: Land_Bro_MSWR_Plain
	{
		displayName = "Wall: Doorway, Empty";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Doorway_Empty.p3d";
	};
	class Land_Bro_MSWR_Doorway: Land_Bro_MSWR_Doorway_Empty
	{
		displayName = "Wall: Door";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Doorway.p3d";
		numberOfDoors = 1;
		class AnimationSources
		{
			class Door01
			{
				source = "user";
				animPeriod = 0.7;
				initPhase = 0;
				Sound = "OldWoodDoorsSound";
			};
		};
		class UserActions
		{
			class Door_1_Open
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='1.5' />";
				displayName = "Open Door";
				radius = 2;
				position = "Door_1_trigger";
				onlyForPlayer = 1;
				condition = (this animationPhase 'Door_1') < 0.5;
				statement = ([this, 'Door_1'] call BIS_fnc_DoorNoHandleOpen);
			};
			class Door_1_Close: Door_1_Open
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='1.5' />";
				displayName = "Close Door";
				condition = (this animationPhase 'Door_1') >= 0.5;
				statement = ([this, 'Door_1'] call BIS_fnc_DoorNoHandleClose);
			};
		};
	};
// Floors
	class Land_Bro_MSF_Big: Bro_MSF_Remastered
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Floor: Big";
		model = "Bro_ModularShoothouse\remastered\Bro_MSF_Big.p3d";
	};
	class Land_Bro_MSF_Small: Land_Bro_MSF_Big
	{
		displayName = "Floor: Small";
		model = "Bro_ModularShoothouse\remastered\Bro_MSF_Small.p3d";
	};
	class Land_Bro_MSF_Stairs_Floor: Land_Bro_MSF_Big
	{
		displayName = "Floor: Large, Open";
		model = "Bro_ModularShoothouse\remastered\Bro_MSF_Stairs_Floor.p3d";
	};
	class Land_Bro_MSF_Stairs: Land_Bro_MSF_Big
	{
		displayName = "Staircase";
		model = "Bro_ModularShoothouse\remastered\Bro_MSF_Stairs.p3d";
	};
};