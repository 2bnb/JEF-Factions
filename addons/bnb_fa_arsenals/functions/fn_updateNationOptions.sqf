    params ["_faction"];

	private _natCtrl = findDisplay 1901 displayCtrl 1909;
	
    // Clear existing items
    lbClear _natCtrl;
	private _idx = 0;
	_natCtrl lbSetCurSel 0;

    // Populate based on the selected faction
    switch (_faction) do {
        case "Bal": {	
			_idx = _natCtrl lbAdd "Estonia";
			_natCtrl lbSetData [_idx, "Est"];
			_idx = _natCtrl lbAdd "Latvia";
			_natCtrl lbSetData [_idx, "Lat"];
			_idx = _natCtrl lbAdd "Lithuania";
			_natCtrl lbSetData [_idx, "Lit"];	
			"Selected Baltic" call BIS_fnc_3DENNotification; // Debug message
			};	
        case "Nor": {
			"Selected Nordic" call BIS_fnc_3DENNotification; // Debug message
			_idx = _natCtrl lbAdd "Denmark";
			_natCtrl lbSetData [_idx, "Den"];
			_idx = _natCtrl lbAdd "Finland";
			_natCtrl lbSetData [_idx, "Fin"];
			_idx = _natCtrl lbAdd "Norway";
			_natCtrl lbSetData [_idx, "Nor"];
			_idx = _natCtrl lbAdd "Sweden";
			_natCtrl lbSetData [_idx, "Swe"];				
        };	
        case "UK": {
            "Selected UK" call BIS_fnc_3DENNotification; // Debug message
			_idx = _natCtrl lbAdd "UK";
			_natCtrl lbSetData [_idx, "UK"];
        };


        default {
            // Handle invalid faction if needed
			"Invalid Faction" call BIS_fnc_3DENNotification; // Debug message
			_idx = _natCtrl lbAdd "Invalid Faction";
        };
    };
    
