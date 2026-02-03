class CfgFactionClasses 
{
	// BNB_FA_FactionClasses(natCode,unitNation)
	BNB_FA_FactionClasses(UK,JEF United Kingdom)
	BNB_FA_FactionClasses(Est,JEF Estonia)
	BNB_FA_FactionClasses(Lat,JEF Latvia)
	BNB_FA_FactionClasses(Lit,JEF Lithuania)
	BNB_FA_FactionClasses(Fin,JEF Finland)
	BNB_FA_FactionClasses(Den,JEF Denmark)
	BNB_FA_FactionClasses(Nor,JEF Norway)
	BNB_FA_FactionClasses(Swe,JEF Sweden)
};

class CfgEditorSubcategories 
{
	// BNB_FA_EditorSubcategories(natCode) 
	BNB_FA_EditorSubcategories(UK)
	BNB_FA_EditorSubcategories(Est)
	BNB_FA_EditorSubcategories(Lat)
	BNB_FA_EditorSubcategories(Lit)
	BNB_FA_EditorSubcategories(Fin)
	BNB_FA_EditorSubcategories(Den)
	BNB_FA_EditorSubcategories(Nor)
	BNB_FA_EditorSubcategories(Swe)

};

class CfgGroups 
{
	class WEST 
	{
		name="BLUFOR";
		class BNB_FA_Den_Group_BluFor
		{
		name = "JEF Denmark";
			// BNB_FA_Sections_BluFor(natCode,camCode,camName)
			BNB_FA_Sections_BluFor(Den,Des,Desert)
			BNB_FA_Sections_BluFor(Den,Mul,Multicam)			
			BNB_FA_Sections_BluFor(Den,Win,Winter)				
			BNB_FA_Sections_BluFor(Den,Woo,Woodland)
		};
		class BNB_FA_Est_Group_BluFor
		{
		name = "JEF Estonia";
			// BNB_FA_Sections_BluFor(natCode,camCode,camName)
			BNB_FA_Sections_BluFor(Est,Des,Desert)
			BNB_FA_Sections_BluFor(Est,Mul,Multicam)			
			BNB_FA_Sections_BluFor(Est,Win,Winter)				
			BNB_FA_Sections_BluFor(Est,Woo,Woodland)
		};
			class BNB_FA_Fin_Group_BluFor
		{
		name = "JEF Finland";
			// BNB_FA_Sections_BluFor(natCode,camCode,camName)
			BNB_FA_Sections_BluFor(Fin,Des,Desert)
			BNB_FA_Sections_BluFor(Fin,Mul,Multicam)			
			BNB_FA_Sections_BluFor(Fin,Win,Winter)				
			BNB_FA_Sections_BluFor(Fin,Woo,Woodland)
		};
		class BNB_FA_Lat_Group_BluFor
		{
		name = "JEF Latvia";
			// BNB_FA_Sections_BluFor(natCode,camCode,camName)
			BNB_FA_Sections_BluFor(Lat,Mul,Multicam)
			BNB_FA_Sections_BluFor(Lat,Win,Winter)	
		};	
	
			class BNB_FA_Lit_Group_BluFor
		{
		name = "JEF Lithuania";
			// BNB_FA_Sections_BluFor(natCode,camCode,camName)
			BNB_FA_Sections_BluFor(Lit,Des,Desert)
			BNB_FA_Sections_BluFor(Lit,Mul,Multicam)			
			BNB_FA_Sections_BluFor(Lit,Win,Winter)				
			BNB_FA_Sections_BluFor(Lit,Woo,Woodland)
		};
		class BNB_FA_Nor_Group_BluFor
		{
		name = "JEF Norway";
			// BNB_FA_Sections_BluFor(natCode,camCode,camName)
			BNB_FA_Sections_BluFor(Nor,Des,Desert)
			BNB_FA_Sections_BluFor(Nor,Mul,Multicam)			
			BNB_FA_Sections_BluFor(Nor,Win,Winter)				
			BNB_FA_Sections_BluFor(Nor,Woo,Woodland)
		};
			class BNB_FA_Swe_Group_BluFor
		{
		name = "JEF Sweden";
			// BNB_FA_Sections_BluFor(natCode,camCode,camName)
			BNB_FA_Sections_BluFor(Swe,Mul,Multicam)			
			BNB_FA_Sections_BluFor(Swe,Win,Winter)				
			BNB_FA_Sections_BluFor(Swe,Woo,Woodland)
		};
		class BNB_FA_UK_Group_BluFor
		{
		name = "JEF United Kingdom";
			// BNB_FA_Sections_BluFor(natCode,camCode,camName)
			BNB_FA_Sections_BluFor(UK,Des,Desert)
			BNB_FA_Sections_BluFor(UK,Mul,Multicam)			
			BNB_FA_Sections_BluFor(UK,Win,Winter)				
			BNB_FA_Sections_BluFor(UK,Woo,Woodland)	
		};	
	};

	class EAST
	{
		name="OPFOR";
		class BNB_FA_Den_Group_OpFor
		{
		name = "JEF Denmark";
			// BNB_FA_Sections_OpFor(natCode,camCode,camName)
			BNB_FA_Sections_OpFor(Den,Des,Desert)
			BNB_FA_Sections_OpFor(Den,Mul,Multicam)			
			BNB_FA_Sections_OpFor(Den,Win,Winter)				
			BNB_FA_Sections_OpFor(Den,Woo,Woodland)
		};
		class BNB_FA_Est_Group_OpFor
		{
		name = "JEF Estonia";
			// BNB_FA_Sections_OpFor(natCode,camCode,camName)
			BNB_FA_Sections_OpFor(Est,Des,Desert)
			BNB_FA_Sections_OpFor(Est,Mul,Multicam)			
			BNB_FA_Sections_OpFor(Est,Win,Winter)				
			BNB_FA_Sections_OpFor(Est,Woo,Woodland)
		};
			class BNB_FA_Fin_Group_OpFor
		{
		name = "JEF Finland";
			// BNB_FA_Sections_OpFor(natCode,camCode,camName)
			BNB_FA_Sections_OpFor(Fin,Des,Desert)
			BNB_FA_Sections_OpFor(Fin,Mul,Multicam)			
			BNB_FA_Sections_OpFor(Fin,Win,Winter)				
			BNB_FA_Sections_OpFor(Fin,Woo,Woodland)
		};
		class BNB_FA_Lat_Group_OpFor
		{
		name = "JEF Latvia";
			// BNB_FA_Sections_OpFor(natCode,camCode,camName)
			BNB_FA_Sections_OpFor(Lat,Mul,Multicam)
			BNB_FA_Sections_OpFor(Lat,Win,Winter)	
		};	
	
			class BNB_FA_Lit_Group_OpFor
		{
		name = "JEF Lithuania";
			// BNB_FA_Sections_OpFor(natCode,camCode,camName)
			BNB_FA_Sections_OpFor(Lit,Des,Desert)
			BNB_FA_Sections_OpFor(Lit,Mul,Multicam)			
			BNB_FA_Sections_OpFor(Lit,Win,Winter)				
			BNB_FA_Sections_OpFor(Lit,Woo,Woodland)
		};
		class BNB_FA_Nor_Group_OpFor
		{
		name = "JEF Norway";
			// BNB_FA_Sections_OpFor(natCode,camCode,camName)
			BNB_FA_Sections_OpFor(Nor,Des,Desert)
			BNB_FA_Sections_OpFor(Nor,Mul,Multicam)			
			BNB_FA_Sections_OpFor(Nor,Win,Winter)				
			BNB_FA_Sections_OpFor(Nor,Woo,Woodland)
		};
			class BNB_FA_Swe_Group_OpFor
		{
		name = "JEF Sweden";
			// BNB_FA_Sections_OpFor(natCode,camCode,camName)
			BNB_FA_Sections_OpFor(Swe,Mul,Multicam)			
			BNB_FA_Sections_OpFor(Swe,Win,Winter)				
			BNB_FA_Sections_OpFor(Swe,Woo,Woodland)
		};
		class BNB_FA_UK_Group_OpFor
		{
		name = "JEF United Kingdom";
			// BNB_FA_Sections_OpFor(natCode,camCode,camName)
			BNB_FA_Sections_OpFor(UK,Des,Desert)
			BNB_FA_Sections_OpFor(UK,Mul,Multicam)			
			BNB_FA_Sections_OpFor(UK,Win,Winter)				
			BNB_FA_Sections_OpFor(UK,Woo,Woodland)	
		};
	};
	class Indep
	{
		name="Independent";
		class BNB_FA_Den_Group_IndFor
		{
		name = "JEF Denmark";
			// BNB_FA_Sections_IndFor(natCode,camCode,camName)
			BNB_FA_Sections_IndFor(Den,Des,Desert)
			BNB_FA_Sections_IndFor(Den,Mul,Multicam)			
			BNB_FA_Sections_IndFor(Den,Win,Winter)				
			BNB_FA_Sections_IndFor(Den,Woo,Woodland)
		};
		class BNB_FA_Est_Group_IndFor
		{
		name = "JEF Estonia";
			// BNB_FA_Sections_IndFor(natCode,camCode,camName)
			BNB_FA_Sections_IndFor(Est,Des,Desert)
			BNB_FA_Sections_IndFor(Est,Mul,Multicam)			
			BNB_FA_Sections_IndFor(Est,Win,Winter)				
			BNB_FA_Sections_IndFor(Est,Woo,Woodland)
		};
			class BNB_FA_Fin_Group_IndFor
		{
		name = "JEF Finland";
			// BNB_FA_Sections_IndFor(natCode,camCode,camName)
			BNB_FA_Sections_IndFor(Fin,Des,Desert)
			BNB_FA_Sections_IndFor(Fin,Mul,Multicam)			
			BNB_FA_Sections_IndFor(Fin,Win,Winter)				
			BNB_FA_Sections_IndFor(Fin,Woo,Woodland)
		};
		class BNB_FA_Lat_Group_IndFor
		{
		name = "JEF Latvia";
			// BNB_FA_Sections_IndFor(natCode,camCode,camName)
			BNB_FA_Sections_IndFor(Lat,Mul,Multicam)
			BNB_FA_Sections_IndFor(Lat,Win,Winter)	
		};	
	
			class BNB_FA_Lit_Group_IndFor
		{
		name = "JEF Lithuania";
			// BNB_FA_Sections_IndFor(natCode,camCode,camName)
			BNB_FA_Sections_IndFor(Lit,Des,Desert)
			BNB_FA_Sections_IndFor(Lit,Mul,Multicam)			
			BNB_FA_Sections_IndFor(Lit,Win,Winter)				
			BNB_FA_Sections_IndFor(Lit,Woo,Woodland)
		};
		class BNB_FA_Nor_Group_IndFor
		{
		name = "JEF Norway";
			// BNB_FA_Sections_IndFor(natCode,camCode,camName)
			BNB_FA_Sections_IndFor(Nor,Des,Desert)
			BNB_FA_Sections_IndFor(Nor,Mul,Multicam)			
			BNB_FA_Sections_IndFor(Nor,Win,Winter)				
			BNB_FA_Sections_IndFor(Nor,Woo,Woodland)
		};
			class BNB_FA_Swe_Group_IndFor
		{
		name = "JEF Sweden";
			// BNB_FA_Sections_IndFor(natCode,camCode,camName)
			BNB_FA_Sections_IndFor(Swe,Mul,Multicam)			
			BNB_FA_Sections_IndFor(Swe,Win,Winter)				
			BNB_FA_Sections_IndFor(Swe,Woo,Woodland)
		};
		class BNB_FA_UK_Group_IndFor
		{
		name = "JEF United Kingdom";
			// BNB_FA_Sections_IndFor(natCode,camCode,camName)
			BNB_FA_Sections_IndFor(UK,Des,Desert)
			BNB_FA_Sections_IndFor(UK,Mul,Multicam)			
			BNB_FA_Sections_IndFor(UK,Win,Winter)				
			BNB_FA_Sections_IndFor(UK,Woo,Woodland)	
		};

	};
	
		
};

