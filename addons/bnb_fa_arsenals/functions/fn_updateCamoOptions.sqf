    params ["_nation"];

	private _camoCtrl = findDisplay 1901 displayCtrl 1350;
	private _idx = 0;
	
    // Clear existing items
    lbClear _camoCtrl;
	_camoCtrl lbSetCurSel 0;

    // Populate based on the selected nation
    switch (_nation) do {
	    case "Den": {
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
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];			
			
		};		
	    case "Lit": {
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
			_idx = _camoCtrl lbAdd "Multicam";
			_camoCtrl lbSetData [_idx, "Mul"];
			_idx = _camoCtrl lbAdd "Woodland";
			_camoCtrl lbSetData [_idx, "Woo"];	
			_idx = _camoCtrl lbAdd "Winter";
			_camoCtrl lbSetData [_idx, "Win"];
		};			
	    case "UK": {
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
			_idx = _camoCtrl lbAdd "Invalid Nation";
        };
    };
    
