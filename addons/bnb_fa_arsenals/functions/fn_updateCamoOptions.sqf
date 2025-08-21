    params ["_nation"];

	private _camoCtrl = findDisplay 1901 displayCtrl 1902;
	private _idx = 0;
	
    // Clear existing items
    lbClear _camoCtrl;
	_camoCtrl lbSetCurSel 0;

    // Populate based on the selected nation
    switch (_nation) do {
	    case "Den": {
			"Selected Denmark" call BIS_fnc_3DENNotification; // Debug message
			_idx = _camoCtrl lbAdd "Desert";
			_camoCtrl lbSetData [_idx, "Des"];
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Woodland";
			_camoCtrl lbSetData [_idx, "Woo"];	
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];
		};
	    case "Est": {
			"Selected Estonia" call BIS_fnc_3DENNotification; // Debug message
			_idx = _camoCtrl lbAdd "Desert";
			_camoCtrl lbSetData [_idx, "Des"];
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Woodland";
			_camoCtrl lbSetData [_idx, "Woo"];	
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];
		};		
	    case "Fin": {
			"Selected Finland" call BIS_fnc_3DENNotification; // Debug message
			_idx = _camoCtrl lbAdd "Desert";
			_camoCtrl lbSetData [_idx, "Des"];
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Woodland";
			_camoCtrl lbSetData [_idx, "Woo"];	
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];
		};		
	    case "Lat": {
			"Selected Latvia" call BIS_fnc_3DENNotification; // Debug message
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];			
			
		};		
	    case "Lit": {
			"Selected Lithuania" call BIS_fnc_3DENNotification; // Debug message
			_idx = _camoCtrl lbAdd "Desert";
			_camoCtrl lbSetData [_idx, "Des"];
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Woodland";
			_camoCtrl lbSetData [_idx, "Woo"];	
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];
		};			
	    case "Nor": {
			"Selected Norway" call BIS_fnc_3DENNotification; // Debug message
			_idx = _camoCtrl lbAdd "Desert";
			_camoCtrl lbSetData [_idx, "Des"];
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Woodland";
			_camoCtrl lbSetData [_idx, "Woo"];	
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];
		};			
	    case "Swe": {
			"Selected Sweden" call BIS_fnc_3DENNotification; // Debug message
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Woodland";
			_camoCtrl lbSetData [_idx, "Woo"];	
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];
		};			
	    case "UK": {
			"Selected UK" call BIS_fnc_3DENNotification; // Debug message
			_idx = _camoCtrl lbAdd "Desert";
			_camoCtrl lbSetData [_idx, "Des"];
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Woodland";
			_camoCtrl lbSetData [_idx, "Woo"];	
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];
		};			
        default {
            // Handle invalid nation if needed
			"Invalid Nation" call BIS_fnc_3DENNotification; // Debug message
			_idx = _camoCtrl lbAdd "Invalid Nation";
        };
    };
    
