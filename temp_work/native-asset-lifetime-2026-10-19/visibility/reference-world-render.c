/* Later Genesis3D reference only: temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/World.c, original lines1200-1280. Direct binary matching described separately. */
/* 1200 */ //	World_RenderQ
/* 1201 */ //	Render the worlds render Q using the supplied engine, world, and camera
/* 1202 */ //=====================================================================================
/* 1203 */ geBoolean World_WorldRenderQ(geEngine *Engine, geWorld *World, geCamera *Camera)
/* 1204 */ {
/* 1205 */ 	Frustum_Info		FrustumInfo;
/* 1206 */ 	geFloat				Rpm;
/* 1207 */ 	World_SkyBox		*pSkyBox;
/* 1208 */ 
/* 1209 */ 	assert(Engine != NULL);
/* 1210 */ 	assert(World != NULL);
/* 1211 */ 	assert(Camera!= NULL);
/* 1212 */ 
/* 1213 */ 	World->CurFrameDynamic++;
/* 1214 */ 
/* 1215 */ 	MirrorRecursion = 0;
/* 1216 */ 	NumTransPolys[MirrorRecursion] = 0;
/* 1217 */ 	NumGListOperations[MirrorRecursion] = 0;
/* 1218 */ 	
/* 1219 */ 	// Clear the debug info for this world
/* 1220 */ 	//memset(&World->DebugInfo, 0, sizeof(geWorld_DebugInfo));
/* 1221 */ 	CDebugInfo = &World->DebugInfo;
/* 1222 */ 
/* 1223 */ 	// Setup modules that need info that we don't want to lug around with us...
/* 1224 */ 	// NOTE - This might screw up multi-threading, so it might need to be changed
/* 1225 */ 	// around a little to work with multi-threading
/* 1226 */ 	World_SetEngine(Engine);
/* 1227 */ 	World_SetWorld(World);
/* 1228 */ 	World_SetGBSP(World->CurrentBSP);
/* 1229 */ 	
/* 1230 */ 	// FIXME:  REMOVE!!!!!
/* 1231 */ 	GlobalEyePos = *geCamera_GetPov(Camera);
/* 1232 */ 
/* 1233 */ 	// Setup some globals for this pass (this must be done before anyone uses them, or KABOOM)
/* 1234 */ 	SetupStaticData();
/* 1235 */ 
/* 1236 */ 	CFrustumInfo = &FrustumInfo;
/* 1237 */ 
/* 1238 */ 	// Se if we can do mirrors with this driver
/* 1239 */ 	CanDoMirrors = (RDriver->EngineSettings->PreferenceFlags & DRV_PREFERENCE_NO_MIRRORS)==0;
/* 1240 */ 
/* 1241 */ 	// Setup the View Frustum to default window from the camera
/* 1242 */ 	Frustum_SetFromCamera(&FrustumInfo, Camera);
/* 1243 */ 
/* 1244 */ 	// Have the Vis module setup all vising info
/* 1245 */ 	Vis_VisWorld(Engine, World, Camera, &FrustumInfo);
/* 1246 */ 
/* 1247 */ 	// Setup the dynamic lights, etc...
/* 1248 */ 	if (!Light_SetupLights(World))
/* 1249 */ 		return GE_FALSE;
/* 1250 */ 
/* 1251 */ 	g_HackFrustum = FrustumInfo;
/* 1252 */ 
/* 1253 */ 	// Render the entire scene through the DEFAULT FRUSTUM
/* 1254 */ 	if (!RenderScene(Engine, World, Camera, &FrustumInfo))
/* 1255 */ 		return GE_FALSE;
/* 1256 */ 
/* 1257 */ 	// Adjust current sky angle 
/* 1258 */ 	pSkyBox = &World->SkyBox;
/* 1259 */ 	Rpm = (pSkyBox->Dpm/180.0f)*3.14159f;		// Get radiuns per minute
/* 1260 */ 	pSkyBox->Angle += Rpm*(1/30.0f);			// Assume 30 fps for now :)
/* 1261 */ 
/* 1262 */ 	// Little hack to flush the scene
/* 1263 */ 	RDriver->BeginModels();
/* 1264 */ 	RDriver->EndModels();
/* 1265 */ 
/* 1266 */ 	if (!User_DestroyOncePolys(World))
/* 1267 */ 		return GE_FALSE;
/* 1268 */ 
/* 1269 */ // changed QD Shadows
/* 1270 */ 	if(Engine->StencilShadowsEnable==GE_TRUE && Engine->NumStencilShadowLights>0)
/* 1271 */ 		RenderShadowVolumes(Engine, World, Camera, &FrustumInfo);
/* 1272 */ // end change
/* 1273 */ 
/* 1274 */ #if 1
/* 1275 */ 	// <> CB remember the last camera we rendered with,
/* 1276 */ 	//	so we can avoiding redoing view-dependent calculation
/* 1277 */ 	World->LastCameraXForm = * geCamera_GetCameraSpaceXForm(Camera);
/* 1278 */ #endif
/* 1279 */ 
/* 1280 */ 	return GE_TRUE;
