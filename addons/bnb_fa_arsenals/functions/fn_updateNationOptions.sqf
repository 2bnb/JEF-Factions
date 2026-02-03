    params ["_faction"];

	private _natCtrl = findDisplay 1901 displayCtrl 1330;
	
    // Clear existing items
    lbClear _natCtrl;
	private _idx = 0;
	_natCtrl lbSetCurSel 0;

    // Populate based on the selected faction
    switch (_faction) do {
        case "Baltic": {	
			_idx = _natCtrl lbAdd "Estonia";
			_natCtrl lbSetData [_idx, "Est"];
			_idx = _natCtrl lbAdd "Latvia";
			_natCtrl lbSetData [_idx, "Lat"];
			_idx = _natCtrl lbAdd "Lithuania";
			_natCtrl lbSetData [_idx, "Lit"];	
			};	
        case "Nordic": {
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
			_idx = _natCtrl lbAdd "UK";
			_natCtrl lbSetData [_idx, "UK"];
        };


        default {
            // Handle invalid faction if needed
			_idx = _natCtrl lbAdd "Invalid Faction";
        };
    };
    
