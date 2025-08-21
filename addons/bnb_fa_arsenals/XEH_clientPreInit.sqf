private _bnb_fa_settings = [
	[
		"bnb_fa_arsenal_whitelist_standard",
		"EDITBOX",
		["Standard", "Standard JEF equipment whitelist"],
		["JEF Arsenal", "Arsenal Whitelists"],
		"[]",
		1,
		{
			// One day this will re-init all arsenals that have this filter set
		},
		true
	],
	[
		"bnb_fa_arsenal_whitelist_mission",
		"EDITBOX",
		["Mission", "Mission defined JEF equipment whitelist"],
		["JEF Arsenal", "Arsenal Whitelists"],
		"[]",
		1,
		{
			// One day this will re-init all arsenals that have this filter set
		},
		true
	],
	[
		"bnb_fa_arsenal_whitelist_baltic",
		"EDITBOX",
		["Baltic", "Baltic equipment whitelist"],
		["JEF Arsenal", "Arsenal Whitelists"],
		"[]",
		1,
		{
			// One day this will re-init all arsenals that have this filter set
		},
		true
	],
	[
		"bnb_fa_arsenal_whitelist_nordic",
		"EDITBOX",
		["Nordic", "Nordic equipment whitelist"],
		["JEF Arsenal", "Arsenal Whitelists"],
		"[]",
		1,
		{
			// One day this will re-init all arsenals that have this filter set
		},
		true
	],
	[
		"bnb_fa_arsenal_whitelist_uk",
		"EDITBOX",
		["UK", "UK equipment whitelist"],
		["JEF Arsenal", "Arsenal Whitelists"],
		"[]",
		1,
		{
			// One day this will re-init all arsenals that have this filter set
		},
		true
	]
];

{_x call CBA_Settings_fnc_init;} forEach _bnb_fa_settings;