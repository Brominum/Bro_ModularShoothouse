class CfgPatches {
	class Bro_ModShoot_Remastered {
		addonRootClass = "Bro_MSW_Base";
		name = "Modular Shoothouse Remastered [Bromine]";
		requiredAddons[] = {"A3_Data_F_Loadorder","Bro_MSW_Base"};
		requiredVersion = 1.60;
	};
};
class CfgFunctions  {
	class bro  {
		class msh_new {
			file = "\Bro_ModularShoothouse\functions";
			class snap_remastered{};
		};
	};
};
class CfgEditorSubcategories {
	class sm_r {
		displayName = "Remastered Walls (Concrete)";
	};
	class sm_r_w {
		displayName = "Remastered Walls (Wood)";
	};
	class sm_r_r {
		displayName = "Remastered Walls (Rubber)";
	};
	class sm_f_r {
		displayName = "Remastered Floors";
	};
};
class CfgVehicles {
	class House;
	class House_F: House {
		class Eventhandlers;
	};
// Base class for inheritance
	class Bro_MSW_Remastered: House_F {
		armor=350;
		author = "Bromine";
		destrType = "DestructWall";
		icon = "Bro_ModularShoothouse\icon.paa";
		editorCategory = "Bro_MSW_Base";
		editorSubcategory = "sm_r";
		hiddenSelections[]= {
			"camo"
		};
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\remastered\ModShNew_BRICK_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\remastered\ModShNew_BRICK.rvmat"
		};
		keepHorizontalPlacement = 1;
		mapSize = 3;
		numberOfDoors = 0;
		scope = 1;
		scopeCurator = 1;
		class DestructionEffects{};
		class EventHandlers: EventHandlers {
			dragged3DEN = "_this call bro_fnc_snap_remastered;";
			registeredToWorld3DEN = "_this call bro_fnc_snap_remastered;";
		};
		class SimpleObject {
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
		class Attributes {
			class ObjectTextureCustom0 {
				displayName = "$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property = "ObjectTextureCustom0";
				control = "Edit";
				expression = "_this setObjectTextureGlobal [0,_value]";
				defaultValue = "(getObjectTextures _this) param [0,'',['']]";
			};
		};
	};
	class Bro_MSF_Remastered: Bro_MSW_Remastered {
		editorSubcategory = "sm_f_r";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		class Attributes {};
	};
// Floors
	class Land_Bro_MSF_Big: Bro_MSF_Remastered {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSF_Big.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Floor: Big";
		model = "Bro_ModularShoothouse\remastered\Bro_MSF_Big.p3d";
	};
	class Land_Bro_MSF_Small: Land_Bro_MSF_Big {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSF_Small.jpg";
		displayName = "Floor: Small";
		model = "Bro_ModularShoothouse\remastered\Bro_MSF_Small.p3d";
	};
	class Land_Bro_MSF_Stairs_Floor: Land_Bro_MSF_Big {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSF_Stairs_Floor.jpg";
		displayName = "Floor: Big, For Stairs";
		model = "Bro_ModularShoothouse\remastered\Bro_MSF_Stairs_Floor.p3d";
	};
	class Land_Bro_MSF_Stairs: Land_Bro_MSF_Big {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSF_Stairs.jpg";
		displayName = "Staircase";
		model = "Bro_ModularShoothouse\remastered\Bro_MSF_Stairs.p3d";
	};
// Walls
	class Land_Bro_MSWR_Plain: Bro_MSW_Remastered {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Plain.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall: Plain";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Plain.p3d";
	};
	class Land_Bro_MSWR_Corner: Land_Bro_MSWR_Plain {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Corner.jpg";
		displayName = "Wall: Corner / Endcap";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Corner.p3d";
	};
	class Land_Bro_MSWR_Window: Land_Bro_MSWR_Plain {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Window.jpg";
		displayName = "Wall: Window";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Window.p3d";
	};
	class Land_Bro_MSWR_Doorway_Empty: Land_Bro_MSWR_Plain {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Doorway_Empty.jpg";
		displayName = "Wall: Doorway, Empty";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Doorway_Empty.p3d";
	};
// Doors
	class Land_Bro_MSWR_Doorway: Land_Bro_MSWR_Plain {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Doorway.jpg";
		displayName = "Wall: Door, Left";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Doorway.p3d";
		numberOfDoors = 1;
		class AnimationSources {
			class Door_1 {
				source = "user";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class Door_1_sound_source: Door_1 {
				Sound = "OldWoodDoorsSound";
				soundPosition="Door_1_trigger";
			};
			class Door_1_locked_source: Door_1{};
		};
		class UserActions {
			class OpenDoor_1 {
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2' />";
				displayName="$STR_DN_OUT_O_DOOR";
				position="Door_1_trigger";
				actionNamedSel="Door_1";
				radius=2.0;
				onlyForPlayer=1;
				condition="((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_1: OpenDoor_1 {
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2' />";
				displayName="$STR_DN_OUT_C_DOOR";
				condition="((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 0] call BIS_fnc_Door)";
			};
		};
	};
	class Land_Bro_MSWR_Doorway_Mirrored: Land_Bro_MSWR_Doorway {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Doorway.jpg";
		displayName = "Wall: Door, Right";
		model = "Bro_ModularShoothouse\remastered\Bro_MSWR_Doorway_Mirrored.p3d";
	};
// ----- WOODEN WALL VARIANTS -----
	class Land_Bro_MSWR_Plain_Wood: Land_Bro_MSWR_Plain {
		editorSubcategory = "sm_r_w";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Plain_Wood.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD.rvmat"};
	};
	class Land_Bro_MSWR_Corner_Wood: Land_Bro_MSWR_Corner {
		editorSubcategory = "sm_r_w";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Corner_Wood.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD.rvmat"};
	};
	class Land_Bro_MSWR_Window_Wood: Land_Bro_MSWR_Window {
		editorSubcategory = "sm_r_w";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Window_Wood.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD.rvmat"};
	};
	class Land_Bro_MSWR_Doorway_Empty_Wood: Land_Bro_MSWR_Doorway_Empty {
		editorSubcategory = "sm_r_w";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Doorway_Empty_Wood.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD.rvmat"};
	};
	class Land_Bro_MSWR_Doorway_Wood: Land_Bro_MSWR_Doorway {
		editorSubcategory = "sm_r_w";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Doorway_Wood.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD.rvmat"};
	};
	class Land_Bro_MSWR_Doorway_Mirrored_Wood: Land_Bro_MSWR_Doorway_Mirrored {
		editorSubcategory = "sm_r_w";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Doorway_Mirrored_Wood.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_WOOD.rvmat"};
	};
// ----- RUBBER WALL VARIANTS -----
	class Land_Bro_MSWR_Plain_Rubber: Land_Bro_MSWR_Plain {
		editorSubcategory = "sm_r_r";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Plain_Rubber.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER.rvmat"};
	};
	class Land_Bro_MSWR_Corner_Rubber: Land_Bro_MSWR_Corner {
		editorSubcategory = "sm_r_r";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Corner_Rubber.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER.rvmat"};
	};
	class Land_Bro_MSWR_Window_Rubber: Land_Bro_MSWR_Window {
		editorSubcategory = "sm_r_r";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Window_Rubber.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER.rvmat"};
	};
	class Land_Bro_MSWR_Doorway_Empty_Rubber: Land_Bro_MSWR_Doorway_Empty {
		editorSubcategory = "sm_r_r";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Doorway_Empty_Rubber.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER.rvmat"};
	};
	class Land_Bro_MSWR_Doorway_Rubber: Land_Bro_MSWR_Doorway {
		editorSubcategory = "sm_r_r";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Doorway_Rubber.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER.rvmat"};
	};
	class Land_Bro_MSWR_Doorway_Mirrored_Rubber: Land_Bro_MSWR_Doorway_Mirrored {
		editorSubcategory = "sm_r_r";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSWR_Doorway_Mirrored_Rubber.jpg";
		hiddenSelectionsTextures[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER_co.paa"};
		hiddenSelectionsMaterials[]={"Bro_ModularShoothouse\remastered\ModShNew_RUBBER.rvmat"};
	};
};