/* Later Genesis3D reference only: temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/World.c, original lines3060-3100. Direct binary matching described separately. */
/* 3060 */ //========================================================================================
/* 3061 */ //	geWorld_OpenModel
/* 3062 */ //========================================================================================
/* 3063 */ GENESISAPI geBoolean geWorld_OpenModel(geWorld *World, geWorld_Model *Model, geBoolean Open)
/* 3064 */ {
/* 3065 */ 	World_BSP	*WBSP;
/* 3066 */ 	int32		a0, a1;
/* 3067 */ 	GFX_Model	*GFXModel;
/* 3068 */ #if 0
/* 3069 */ 	int32		i0, i1;
/* 3070 */ 	int32		NumWorkAreas0;
/* 3071 */ 	uint8		WorkAreas0[256];
/* 3072 */ 	int32		NumWorkAreas1;
/* 3073 */ 	uint8		WorkAreas1[256];
/* 3074 */ #endif
/* 3075 */ 
/* 3076 */ 	assert(World);
/* 3077 */ 	assert(Model);
/* 3078 */ 
/* 3079 */ 	if (Model->Open == Open)
/* 3080 */ 		return GE_TRUE;			// Nothing changed
/* 3081 */ 
/* 3082 */ 	Model->Open = Open;
/* 3083 */ 	World->ForceVis = GE_TRUE;			// Force an update
/* 3084 */ 
/* 3085 */ 	WBSP = World->CurrentBSP;
/* 3086 */ 
/* 3087 */ 	GFXModel = &WBSP->BSPData.GFXModels[Model->GFXModelNum];
/* 3088 */ 
/* 3089 */ 	a0 = GFXModel->Areas[0];
/* 3090 */ 	a1 = GFXModel->Areas[1];
/* 3091 */ 
/* 3092 */ 	// We know these 2 can see each other
/* 3093 */ 	WBSP->AreaConnections[a0][a1] = Open;
/* 3094 */ 	WBSP->AreaConnections[a1][a0] = Open;
/* 3095 */ 
/* 3096 */ #if 0
/* 3097 */ 	NumWorkAreas0 = NumWorkAreas1 = 0;
/* 3098 */ 	
/* 3099 */ 	if (Open)
/* 3100 */ 	{
