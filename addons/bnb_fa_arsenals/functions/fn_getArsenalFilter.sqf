/* ----------------------------------------------------------------------------
Function: bnb_fa_arsenals_fnc_getArsenalFilter

Description:
	Gets the whitelist array associated with a filter from
	`bnb_f_arsenal_whitelist_loadouts`

Parameters:
	0: _filter - Filter which controls what objects are shown in the
				 arsenal <STRING>

Returns:
	Arsenal whitelist <ARRAY>

Examples:
	["WEST"] call bnb_f_core_fnc_getArsenalFilter;

	[] call bnb_f_core_fnc_getArsenalFilter;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_filter", "", [""]]];

// [format["Getting whitelists for filter %1", _filter], "core\functions\fn_getArsenalFilter.sqf"] call bnb_es_core_fnc_log;
private _whitelist = [];
if (count _filter > 3) then {
	_filter = _filter select [0, 3]
};
switch (toLowerANSI _filter) do {
	case "bal": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_baltic; };
	case "sta": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_standard; };
	case "den": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_nordic; };
	case "nor": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_nordic; };
	case "swe": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_nordic; };
	case "fin": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_nordic; };
	case "lit": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_baltic; };
	case "lat": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_baltic; };
	case "est": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_baltic; };
	case "uk": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_uk; };
	case "mis": { _whitelist = parseSimpleArray bnb_fa_arsenal_whitelist_mission; };
	default { _whitelist = true; };
};

// Is it empty?
if (_whitelist isEqualTo []) then {
	_whitelist = true;
	_filter = format["(was %1, now reset)", _filter];
//	[format["Arsenal Whitelist is empty. Filling Arsenal with everything instead. %1", _filter], "core\functions\fn_getArsenalFilter.sqf"] call bnb_es_core_fnc_log;
};

_whitelist;