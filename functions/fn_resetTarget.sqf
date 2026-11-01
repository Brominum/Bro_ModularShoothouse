/*
	fn_resetTarget.sqf
	Remove the bullet holes from a paper target. Arma cannot remove decals from an object, so this function deletes the target and creates a new one at the same position and orientation.
	The function runs on the server. The "Reset Target" action calls it with remoteExecCall.
	Parameters:
		0: OBJECT - the paper target
*/
if (!isServer) exitWith {};
params [["_old", objNull, [objNull]]];
// Accept only paper targets. A client can send any object, and this function deletes the object.
if (isNull _old || {!(_old isKindOf "Bro_MSW_Target")} || {_old getVariable ["bro_msw_resetting", false]}) exitWith {};
// Stop a second reset of the same target before it is deleted
_old setVariable ["bro_msw_resetting", true];
// Keep all the data before the delete
private _type = typeOf _old;
private _posWorld = getPosWorld _old;
private _dir = vectorDir _old;
private _up = vectorUp _old;
private _name = vehicleVarName _old;
private _textures = getObjectTextures _old;
private _curators = objectCurators _old;
private _simulation = simulationEnabled _old;
deleteVehicle _old;
// CAN_COLLIDE stops the engine from moving the new target to a free position
private _new = createVehicle [_type, [0, 0, 0], [], 0, "CAN_COLLIDE"];
// getPosWorld and setPosWorld use the model center, so the position is exact on any terrain and any pitch or bank
_new setVectorDirAndUp [_dir, _up];
_new setPosWorld _posWorld;
_new enableSimulationGlobal _simulation;
{
	_new setObjectTextureGlobal [_forEachIndex, _x];
} forEach _textures;
// Keep the variable name, so that mission scripts that use it continue to work
if (_name != "") then {
	[_new, _name] remoteExec ["setVehicleVarName", 0, _new];
	missionNamespace setVariable [_name, _new, true];
};
// A target that Zeus can edit stays editable
{
	_x addCuratorEditableObjects [[_new], false];
} forEach _curators;
