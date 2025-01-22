class CfgPatches {
	class Bro_MSW_Base {
		name = "Modular Shoothouse [Bromine]";
		author = "Bromine";
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder"};
		requiredVersion = 1.60;
	};
};
class CfgFunctions  {
	class bro  {
		class msh_old {
			file = "\Bro_ModularShoothouse\functions";
			class snap{};
			class snap2{};
			class snap3{};
		};
	};
};
class CfgEditorCategories {
	class Bro_MSW_Base {
		displayName = "Modular Shoothouse [Bromine]";
		priority = 1;
		side = 1;
	};
};
class CfgEditorSubcategories {
	class sm {
		displayName = "Old Walls (Wood)";
	};
	class sm2 {
		displayName = "Old Walls (Concrete)";
	};
	class sm_old_r {
		displayName = "Old Walls (Rubber)";
	};
	class mcw {
		displayName = "Catwalks";
	};
};
class House_F {
	class Eventhandlers;
};
class CfgVehicles {
// Base class declarations. Avoid modifying.
	class Bro_MSW_Base: House_F {
		armor=350;
		author = "Bromine";
		destrType = "DestructWall";
		icon = "Bro_ModularShoothouse\icon.paa";
		editorCategory = "Bro_MSW_Base";
		editorSubcategory = "sm";
		hiddenSelections[]= {
			"camo"
		};
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\msh.rvmat"
		};
		keepHorizontalPlacement = 1;
		mapSize = 3;
		numberOfDoors = 0;
		scope = 1;
		scopeCurator = 1;
		class Attributes {
			class ObjectTextureCustom0 {
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="(getObjectTextures _this) param [0,'',['']]";
			};
		};
		class DestructionEffects{};
		class EventHandlers: EventHandlers {
			dragged3DEN = "_this call bro_fnc_snap;";
			registeredToWorld3DEN = "_this call bro_fnc_snap;";
		};
		class SimpleObject {
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
	};
	class Bro_CWK_Base: House_F {
		author = "Bromine";
		destrType = "DestructNo";
		icon = "Bro_ModularShoothouse\icon.paa";
		editorCategory = "Bro_MSW_Base";
		editorSubcategory = "mcw";
		keepHorizontalPlacement = 1;
		mapSize = 2;
		numberOfDoors = 0;
		scope = 1;
		scopeCurator = 1;
		class DestructionEffects{};
		class EventHandlers: EventHandlers {
			dragged3DEN = "_this call bro_fnc_snap2;";
			registeredToWorld3DEN = "_this call bro_fnc_snap2;";
		};
		class SimpleObject {
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
	};
// Catwalks
	class Bro_CWK_2m_s: Bro_CWK_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Catwalk: 2m Straight";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_s.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_CWK_2m_s.jpg";
	};
	class Bro_CWK_2m_t: Bro_CWK_2m_s {
		displayName = "Catwalk: 2m Endcap";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_t.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_CWK_2m_t.jpg";
	};
	class Bro_CWK_2m_e: Bro_CWK_2m_s {
		displayName = "Catwalk: 2m Middle";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_e.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_CWK_2m_e.jpg";
	};
	class Bro_CWK_2m_c: Bro_CWK_2m_s {
		displayName = "Catwalk: 2m Corner";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_c.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_CWK_2m_c.jpg";
	};
	class Bro_CWK_2m_o: Bro_CWK_2m_s {
		displayName = "Catwalk: 2m Open Side";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_o.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_CWK_2m_o.jpg";
	};
	class Bro_CWK_4m_s: Bro_CWK_2m_s {
		displayName = "Catwalk: 4m Straight";
		model = "Bro_ModularShoothouse\Bro_CWK_4m_s.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_CWK_4m_s.jpg";
	};
	class Bro_CWK_Stairs: Bro_CWK_2m_s {
		displayName = "Catwalk: Stairs";
		model = "Bro_ModularShoothouse\Bro_CWK_stairs.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\Bro_CWK_Stairs.jpg";
	};
// Straight walls
	class Bro_MSW_1m: Bro_MSW_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall: 1m";
		model = "Bro_ModularShoothouse\Bro_MSW_1m.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_1m.jpg";
	};
	class Bro_MSW_2m: Bro_MSW_1m {
		displayName = "Wall: 2m";
		model = "Bro_ModularShoothouse\Bro_MSW_2m.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m.jpg";
		class EventHandlers: EventHandlers {
			dragged3DEN = "_this call bro_fnc_snap3;";
			registeredToWorld3DEN = "_this call bro_fnc_snap3;";
		};
	};
	class Bro_MSW_4m: Bro_MSW_1m {
		displayName = "Wall: 4m";
		model = "Bro_ModularShoothouse\Bro_MSW_4m.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_4m.jpg";
	};
	class Bro_MSW_8m: Bro_MSW_1m {
		displayName = "Wall: 8m";
		model = "Bro_ModularShoothouse\Bro_MSW_8m.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_8m.jpg";
		class EventHandlers: EventHandlers {
			dragged3DEN = "_this call bro_fnc_snap3;";
			registeredToWorld3DEN = "_this call bro_fnc_snap3;";
		};
	};
// Corner walls
	class Bro_MSW_1m_c: Bro_MSW_1m {
		displayName = "Wall: 1m Corner";
		model = "Bro_ModularShoothouse\Bro_MSW_1m_c.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_1m_c.jpg";
	};
	class Bro_MSW_2m_c: Bro_MSW_1m {
		displayName = "Wall: 2m Corner";
		model = "Bro_ModularShoothouse\Bro_MSW_2m_c.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_c.jpg";
	};
// Window walls
	class Bro_MSW_2m_w: Bro_MSW_1m {
		displayName = "Wall: 2m Window";
		model = "Bro_ModularShoothouse\Bro_MSW_2m_w.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_w.jpg";
	};
	class Bro_MSW_4m_w: Bro_MSW_1m {
		displayName = "Wall: 4m Window";
		model = "Bro_ModularShoothouse\Bro_MSW_4m_w.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_4m_w.jpg";
	};
// Empty doorways
	class Bro_MSW_2m_de: Bro_MSW_1m {
		displayName = "Wall: 2m Doorway (No door)";
		model = "Bro_ModularShoothouse\Bro_MSW_2m_de.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_de.jpg";
	};
	class Bro_MSW_4m_de: Bro_MSW_1m {
		displayName = "Wall: 4m Doorway (No door)";
		model = "Bro_ModularShoothouse\Bro_MSW_4m_de.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_4m_de.jpg";
	};
// Functional Doorways
	class Land_Bro_MSW_2m_d: Bro_MSW_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall: 2m Doorway";
		model = "Bro_ModularShoothouse\Bro_MSW_2m_d.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSW_2m_d.jpg";
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
	class Land_Bro_MSW_4m_d: Land_Bro_MSW_2m_d {
		displayName = "Wall: 4m Doorway";
		model = "Bro_ModularShoothouse\Bro_MSW_4m_d.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSW_4m_d.jpg";
	};
	class Land_Bro_MSW_4m_dd: Bro_MSW_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall: 4m Doorway (Double)";
		model = "Bro_ModularShoothouse\Bro_MSW_4m_dd.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSW_4m_dd.jpg";
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
			class Door_2 {
				source = "user";
				animPeriod = 0.8;
				initPhase = 0;
			};
			class Door_2_sound_source: Door_2 {
				Sound = "OldWoodDoorsSound";
				soundPosition="Door_2_trigger";
			};
			class Door_2_locked_source: Door_2{};
		};
		class UserActions {
			class OpenDoor_1 {
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2' />";
				displayName="Open Left Door";
				position="Door_1_trigger";
				actionNamedSel="Door_1";
				radius=2.0;
				onlyForPlayer=1;
				condition="((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_1: OpenDoor_1 {
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2' />";
				displayName="Close Left Door";
				condition="((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 1, 0] call BIS_fnc_Door)";
			};
			class OpenDoor_2 {
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2' />";
				displayName="Open Right Door";
				position="Door_1_trigger";
				actionNamedSel="Door_2";
				radius=2.0;
				onlyForPlayer=1;
				condition="((this animationSourcePhase 'Door_2_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 2, 1] call BIS_fnc_Door)";
			};
			class CloseDoor_2: OpenDoor_2 {
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2' />";
				displayName="Close Right Door";
				condition="((this animationSourcePhase 'Door_2_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
				statement="([this, 2, 0] call BIS_fnc_Door)";
			};
		};
	};
//Concrete Variants
	class Bro_MSW_1m_conc: Bro_MSW_1m  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_1m_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Bro_MSW_2m_conc: Bro_MSW_2m  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Bro_MSW_4m_conc: Bro_MSW_4m  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_4m_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Bro_MSW_8m_conc: Bro_MSW_8m  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_8m_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Bro_MSW_1m_c_conc: Bro_MSW_1m_c  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_1m_c_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Bro_MSW_2m_c_conc: Bro_MSW_2m_c  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_c_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Bro_MSW_2m_w_conc: Bro_MSW_2m_w  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_w_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Bro_MSW_4m_w_conc: Bro_MSW_4m_w  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_4m_w_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Bro_MSW_2m_de_conc: Bro_MSW_2m_de  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_de_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Bro_MSW_4m_de_conc: Bro_MSW_4m_de  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_4m_de_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Land_Bro_MSW_2m_d_conc: Land_Bro_MSW_2m_d  {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSW_2m_d_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Land_Bro_MSW_4m_d_conc: Land_Bro_MSW_4m_d  {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSW_4m_d_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
	class Land_Bro_MSW_4m_dd_conc: Land_Bro_MSW_4m_dd  {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSW_4m_dd_conc.jpg";
		editorSubcategory = "sm2";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\concrete\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\concrete\msh.rvmat"
		};
	};
//Rubber Variants
	class Bro_MSW_1m_rubber: Bro_MSW_1m  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_1m_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Bro_MSW_2m_rubber: Bro_MSW_2m  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Bro_MSW_4m_rubber: Bro_MSW_4m  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_4m_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Bro_MSW_8m_rubber: Bro_MSW_8m  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_8m_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Bro_MSW_1m_c_rubber: Bro_MSW_1m_c  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_1m_c_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Bro_MSW_2m_c_rubber: Bro_MSW_2m_c  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_c_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Bro_MSW_2m_w_rubber: Bro_MSW_2m_w  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_w_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Bro_MSW_4m_w_rubber: Bro_MSW_4m_w  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_4m_w_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Bro_MSW_2m_de_rubber: Bro_MSW_2m_de  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_2m_de_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Bro_MSW_4m_de_rubber: Bro_MSW_4m_de  {
		editorPreview = "Bro_ModularShoothouse\previews\bro_MSW_4m_de_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Land_Bro_MSW_2m_d_rubber: Land_Bro_MSW_2m_d  {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSW_2m_d_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Land_Bro_MSW_4m_d_rubber: Land_Bro_MSW_4m_d  {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSW_4m_d_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
	class Land_Bro_MSW_4m_dd_rubber: Land_Bro_MSW_4m_dd  {
		editorPreview = "Bro_ModularShoothouse\previews\Land_Bro_MSW_4m_dd_rubber.jpg";
		editorSubcategory = "sm_old_r";
		hiddenSelectionsTextures[]= {
			"Bro_ModularShoothouse\rubber\msh_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Bro_ModularShoothouse\rubber\msh.rvmat"
		};
	};
// Backwards compatibility for TB, we gotta stick Land_ in front because... we just gotta!!! So I gotta maintain backwards compatibility here.
	class Bro_MSW_2m_d: Land_Bro_MSW_2m_d{scope=1;};
	class Bro_MSW_4m_d: Land_Bro_MSW_4m_d{scope=1;};
	class Bro_MSW_4m_dd: Land_Bro_MSW_4m_dd{scope=1;};
	class Bro_MSW_2m_d_conc: Land_Bro_MSW_2m_d_conc{scope=1;};
	class Bro_MSW_4m_d_conc: Land_Bro_MSW_4m_d_conc{scope=1;};
	class Bro_MSW_4m_dd_conc: Land_Bro_MSW_4m_dd_conc{scope=1;};
};