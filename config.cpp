class CfgPatches
{
	class Bro_MSW_Base
	{
		name = "Modular Shoothouse [Bromine]";
		author = "Bromine";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] =
		{
			"Bro_MSW_2m_d",
			"Bro_MSW_4m_d",
			"Bro_MSW_2m_de",
			"Bro_MSW_4m_de",
			"Bro_MSW_1m",
			"Bro_MSW_2m",
			"Bro_MSW_4m",
			"Bro_MSW_8m",
			"Bro_MSW_2m_w",
			"Bro_MSW_4m_w",
			"Bro_MSW_1m_c",
			"Bro_MSW_2m_c",
			"Bro_CWK_Stairs",
			"Bro_CWK_2m_S",
			"Bro_CWK_2m_T",
			"Bro_CWK_2m_E",
			"Bro_CWK_2m_c",
			"Bro_CWK_4m_S",
			"Bro_CWK_4m_O"
		};
		weapons[] = {};
	};
};
class CfgEditorCategories
{
	class Bro_MSW_Base
	{
		displayName = "Modular Shoothouse [Bromine]";
		priority = 1;
		side = 1;
	};
};
class CfgEditorSubcategories
{
	class sm
	{
		displayName = "Walls";
	};
	class mcw
	{
		displayName = "Catwalks";
	};
};
class CfgVehicles
{
	
// Base class declarations. Avoid modifying.
	
	class House_F
	{
		class Eventhandlers;
	};
	class Bro_MSW_Base: House_F
	{
		armor=350;
		author = "Bromine";
		destrType = "DestructWall";
		icon = "Bro_ModularShoothouse\icon.paa";
		editorCategory = "Bro_MSW_Base";
		editorSubcategory = "sm";
		keepHorizontalPlacement = 1;
		mapSize = 3;
		numberOfDoors = 0;
		scope = 1;
		scopeCurator = 1;
		class DestructionEffects{};
		class EventHandlers: EventHandlers
		{
			dragged3DEN = "_this call compile preprocessFileLineNumbers 'Bro_ModularShoothouse\snap.sqf';";
			registeredToWorld3DEN = "_this call compile preprocessFileLineNumbers 'Bro_ModularShoothouse\snap.sqf';";
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
	class Bro_CWK_Base: House_F
	{
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
		class EventHandlers: EventHandlers
		{
			dragged3DEN = "_this call compile preprocessFileLineNumbers 'Bro_ModularShoothouse\snap2.sqf';";
			registeredToWorld3DEN = "_this call compile preprocessFileLineNumbers 'Bro_ModularShoothouse\snap2.sqf';";
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

// Catwalks
	class Bro_CWK_2m_s: Bro_CWK_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Catwalk: 2m Straight";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_s.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\CWK_2m_s.jpg";
	};
	class Bro_CWK_2m_t: Bro_CWK_2m_s
	{
		displayName = "Catwalk: 2m Endcap";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_t.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\CWK_2m_t.jpg";
	};
	class Bro_CWK_2m_e: Bro_CWK_2m_s
	{
		displayName = "Catwalk: 2m Middle";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_e.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\CWK_2m_e.jpg";
	};
	class Bro_CWK_2m_c: Bro_CWK_2m_s
	{
		displayName = "Catwalk: 2m Corner";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_c.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\CWK_2m_c.jpg";
	};
	class Bro_CWK_2m_o: Bro_CWK_2m_s
	{
		displayName = "Catwalk: 2m Open Side";
		model = "Bro_ModularShoothouse\Bro_CWK_2m_o.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\CWK_2m_o.jpg";
	};
	class Bro_CWK_4m_s: Bro_CWK_2m_s
	{
		displayName = "Catwalk: 4m Straight";
		model = "Bro_ModularShoothouse\Bro_CWK_4m_s.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\CWK_4m_s.jpg";
	};
	class Bro_CWK_Stairs: Bro_CWK_2m_s
	{
		displayName = "Catwalk: Stairs";
		model = "Bro_ModularShoothouse\Bro_CWK_stairs.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\Stairs.jpg";
	};

// Straight walls

	class Bro_MSW_1m: Bro_MSW_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall: 1m";
		model = "Bro_ModularShoothouse\Bro_MSW_1m.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_1m.jpg";
	};
	class Bro_MSW_2m: Bro_MSW_1m
	{
		displayName = "Wall: 2m";
		model = "Bro_ModularShoothouse\Bro_MSW_2m.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_2m.jpg";
	};
	class Bro_MSW_4m: Bro_MSW_1m
	{
		displayName = "Wall: 4m";
		model = "Bro_ModularShoothouse\Bro_MSW_4m.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_4m.jpg";
	};
	class Bro_MSW_8m: Bro_MSW_1m
	{
		displayName = "Wall: 8m";
		model = "Bro_ModularShoothouse\Bro_MSW_8m.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_8m.jpg";
	};

// Corner walls

	class Bro_MSW_1m_c: Bro_MSW_1m
	{
		displayName = "Wall: 1m Corner";
		model = "Bro_ModularShoothouse\Bro_MSW_1m_c.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_1m_c.jpg";
	};
	class Bro_MSW_2m_c: Bro_MSW_1m
	{
		displayName = "Wall: 2m Corner";
		model = "Bro_ModularShoothouse\Bro_MSW_2m_c.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_2m_c.jpg";
	};

// Window walls

	class Bro_MSW_2m_w: Bro_MSW_1m
	{
		displayName = "Wall: 2m Window";
		model = "Bro_ModularShoothouse\Bro_MSW_2m_w.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_2m_w.jpg";
	};
	class Bro_MSW_4m_w: Bro_MSW_1m
	{
		displayName = "Wall: 4m Window";
		model = "Bro_ModularShoothouse\Bro_MSW_4m_w.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_4m_w.jpg";
	};

// Doorways
	class Bro_MSW_2m_d: Bro_MSW_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Wall: 2m Doorway";
		model = "Bro_ModularShoothouse\Bro_MSW_2m_d.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_2m_d.jpg";
		numberOfDoors = 1;
		class AnimationSources {
			class Door01 {
				source = "user";
				animPeriod = 0.7;
				initPhase = 0;
				Sound = "OldWoodDoorsSound";
			};
		};
		class UserActions {
			class Door01_Open
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='1.5' />";
				displayName = "Open Door";
				radius = 2;
				position = "Door01_trigger";
				onlyForPlayer = 1;
				condition = (this animationPhase 'Door01') < 0.5;
				statement = ([this, 'Door01'] call BIS_fnc_DoorNoHandleOpen);
			};
			class Door01_Close: Door01_Open
			{
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='1.5' />";
				displayName = "Close Door";
				condition = (this animationPhase 'Door01') >= 0.5;
				statement = ([this, 'Door01'] call BIS_fnc_DoorNoHandleClose);
			};
		};
	};
	class Bro_MSW_4m_d: Bro_MSW_2m_d
	{
		displayName = "Wall: 4m Doorway";
		model = "Bro_ModularShoothouse\Bro_MSW_4m_d.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_4m_d.jpg";
	};

// Empty doorways

	class Bro_MSW_2m_de: Bro_MSW_1m
	{
		displayName = "Wall: 2m Doorway (No door)";
		model = "Bro_ModularShoothouse\Bro_MSW_2m_de.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_2m_de.jpg";
	};
	class Bro_MSW_4m_de: Bro_MSW_1m
	{
		displayName = "Wall: 4m Doorway (No door)";
		model = "Bro_ModularShoothouse\Bro_MSW_4m_de.p3d";
		editorPreview = "Bro_ModularShoothouse\previews\MSW_4m_de.jpg";
	};
};