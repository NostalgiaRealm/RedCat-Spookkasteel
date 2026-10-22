/* Later Genesis3D reference only: temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/Vis.c, original lines143-341. Direct binary matching described separately. */
/* 143 */ }
/* 144 */ 
/* 145 */ //=====================================================================================
/* 146 */ //	ModelVisible
/* 147 */ //=====================================================================================
/* 148 */ geBoolean ModelVisible(geWorld *World, geWorld_Model *Model)
/* 149 */ {
/* 150 */ 	return Trace_BBoxInVisibleLeaf(World, &Model->TMins, &Model->TMaxs);
/* 151 */ }
/* 152 */ 
/* 153 */ //=====================================================================================
/* 154 */ //	Vis_FloodAreas_r
/* 155 */ //=====================================================================================
/* 156 */ void Vis_FloodAreas_r(geWorld *World, int32 Area)
/* 157 */ {
/* 158 */ 	GBSP_BSPData	*BSP;
/* 159 */ 	GFX_Area		*a;
/* 160 */ 	GFX_AreaPortal	*p;
/* 161 */ 	int32			i;
/* 162 */ 
/* 163 */ 	if (World->CurrentBSP->AreaVisFrame[Area] == World->CurFrameStatic)
/* 164 */ 		return;		// Area already set
/* 165 */ 	
/* 166 */ 	World->CurrentBSP->AreaVisFrame[Area] = World->CurFrameStatic;		// Mark this area visible
/* 167 */ 	
/* 168 */ 	BSP = &World->CurrentBSP->BSPData;
/* 169 */ 
/* 170 */ 	a = &BSP->GFXAreas[Area];
/* 171 */ 
/* 172 */ 	p = &BSP->GFXAreaPortals[a->FirstAreaPortal];
/* 173 */ 
/* 174 */ 	for (i=0; i< a->NumAreaPortals; i++, p++)
/* 175 */ 	{
/* 176 */ 		geWorld_Model	*Model;
/* 177 */ 
/* 178 */ 		Model = &World->CurrentBSP->Models[p->ModelNum];
/* 179 */ 
/* 180 */ 		if (Model->Open)
/* 181 */ 			Vis_FloodAreas_r(World, p->Area);
/* 182 */ 	}
/* 183 */ }
/* 184 */ 
/* 185 */ //=====================================================================================
/* 186 */ //	Vis_VisWorld
/* 187 */ //=====================================================================================
/* 188 */ geBoolean Vis_VisWorld(geEngine *Engine, geWorld *World, const geCamera *Camera, Frustum_Info *Fi)
/* 189 */ {
/* 190 */ 	uint8			*VisData;
/* 191 */ 	int32			k, i, Area;
/* 192 */ 	GFX_Node		*GFXNodes;
/* 193 */ 	GFX_Leaf		*GFXLeafs;
/* 194 */ 	Surf_SurfInfo	*SurfInfo;
/* 195 */ 	uint8			*GFXVisData;
/* 196 */ 	int32			Leaf, Cluster;
/* 197 */ 	GFX_Model		*GFXModels;
/* 198 */ 	int32			*GFXLeafFaces;
/* 199 */ 	GFX_Cluster		*GFXClusters;
/* 200 */ 	GBSP_BSPData	*BSPData;
/* 201 */ 	geWorld_Model	*Models;
/* 202 */ 	const geVec3d	*Pos;
/* 203 */ 	GFX_Leaf		*pLeaf;
/* 204 */ 
/* 205 */ #ifdef _TSC
/* 206 */ 	pushTSC();
/* 207 */ #endif
/* 208 */ 
/* 209 */ 	Pos = geCamera_GetVisPov(Camera);
/* 210 */ 
/* 211 */ 	BSPData = &World->CurrentBSP->BSPData;
/* 212 */ 
/* 213 */ 	GFXNodes = BSPData->GFXNodes;
/* 214 */ 	GFXLeafs = BSPData->GFXLeafs;
/* 215 */ 	GFXClusters = BSPData->GFXClusters;
/* 216 */ 	GFXVisData = BSPData->GFXVisData;
/* 217 */ 	GFXModels = BSPData->GFXModels;
/* 218 */ 	GFXLeafFaces = BSPData->GFXLeafFaces;
/* 219 */ 
/* 220 */ 	SurfInfo = World->CurrentBSP->SurfInfo;
/* 221 */ 
/* 222 */ 	Leaf = Plane_FindLeaf(World, GFXModels[0].RootNode[0], Pos);
/* 223 */ 	Area = GFXLeafs[Leaf].Area;
/* 224 */ 
/* 225 */ 	// Check to see if we cen get rid of most of the work load by seeing if the leaf has not changed...
/* 226 */ 	if (World->CurrentLeaf == Leaf && !World->ForceVis)
/* 227 */ 		goto LeafDidNotChange;
/* 228 */ 
/* 229 */ 	World->ForceVis = GE_FALSE;			// Reset force vis flag
/* 230 */ 	
/* 231 */ 	World->CurrentLeaf = Leaf;
/* 232 */ 
/* 233 */ 	World->CurFrameStatic++;			// Make all old vis info obsolete
/* 234 */ 
/* 235 */ 	Cluster = GFXLeafs[Leaf].Cluster;
/* 236 */ 
/* 237 */ 	if (Cluster == -1 || GFXClusters[Cluster].VisOfs == -1)
/* 238 */ 	{
/* 239 */ 		World->VisInfo = GE_FALSE;
/* 240 */ 		return GE_TRUE;
/* 241 */ 	}
/* 242 */ 
/* 243 */ 	if (Area)
/* 244 */ 		Vis_FloodAreas_r(World, Area);
/* 245 */ 
/* 246 */ 	World->VisInfo = GE_TRUE;
/* 247 */ 
/* 248 */ 	VisData = &GFXVisData[GFXClusters[Cluster].VisOfs];
/* 249 */ 
/* 250 */ 	// Mark all visible clusters
/* 251 */ 	for (i=0; i<GFXModels[0].NumClusters; i++)
/* 252 */ 	{
/* 253 */ 		if (VisData[i>>3] & (1<<(i&7)) )
/* 254 */ 			World->CurrentBSP->ClusterVisFrame[i] = World->CurFrameStatic;
/* 255 */ 	}
/* 256 */ 
/* 257 */ 	pLeaf = &GFXLeafs[GFXModels[0].FirstLeaf];
/* 258 */ 
/* 259 */ 	// Go through and find all visible leafs based on the visible clusters the leafs are in
/* 260 */ 	for (i=0; i< GFXModels[0].NumLeafs; i++, pLeaf++)
/* 261 */ 	{
/* 262 */ 		int32	*pFace;
/* 263 */ 
/* 264 */ 		Cluster = pLeaf->Cluster;
/* 265 */ 
/* 266 */ 		if (Cluster == -1)		// No cluster info for this leaf (must be solid)
/* 267 */ 			continue;
/* 268 */ 
/* 269 */ 		// If the cluster is not visible, then the leaf is not visible
/* 270 */ 		if (World->CurrentBSP->ClusterVisFrame[Cluster] != World->CurFrameStatic)
/* 271 */ 			continue;
/* 272 */ 		
/* 273 */ 		// If the area is not visible, then the leaf is not visible
/* 274 */ 		if (World->CurrentBSP->AreaVisFrame[pLeaf->Area] != World->CurFrameStatic)
/* 275 */ 			continue;
/* 276 */ 
/* 277 */ 		// Mark all visible nodes by bubbling up the tree from the leaf
/* 278 */ 		MarkVisibleParents(World, i);
/* 279 */ 
/* 280 */ 		// Mark the leafs vis frame to worlds current frame
/* 281 */ 		World->CurrentBSP->LeafData[i].VisFrame = World->CurFrameStatic;
/* 282 */ 			
/* 283 */ 		pFace = &GFXLeafFaces[pLeaf->FirstFace];
/* 284 */ 
/* 285 */ 		// Go ahead and vis surfaces here...
/* 286 */ 		for (k=0; k< pLeaf->NumFaces; k++)
/* 287 */ 		{
/* 288 */ 			// Update each surface infos visframe thats touches each visible leaf
/* 289 */ 			SurfInfo[*pFace++].VisFrame = World->CurFrameStatic;
/* 290 */ 		}
/* 291 */ 	}
/* 292 */ 
/* 293 */ 	LeafDidNotChange:
/* 294 */ 
/* 295 */ 	// The world is always visible as a model
/* 296 */ 	World->CurrentBSP->Models[0].VisFrame = World->CurFrameDynamic;
/* 297 */ 
/* 298 */ 	Models = &World->CurrentBSP->Models[1];
/* 299 */ 	// Do models, skipping world models (it's always visible)
/* 300 */ 	for (i=1; i< BSPData->NumGFXModels; i++, Models++)
/* 301 */ 	{
/* 302 */ 	#if 0
/* 303 */ 		int32		Cluster;
/* 304 */ 
/* 305 */ 		// First, lets cheat, and see if the center is in a valid location to test for vis
/* 306 */ 		Leaf = Plane_FindLeaf(World, GFXModels[0].RootNode[0], &Models->Pivot);
/* 307 */ 
/* 308 */ 		Cluster = GFXLeafs[Leaf].Cluster;
/* 309 */ 
/* 310 */ 		if (Cluster >= 0 && GFXClusters[Cluster].VisOfs >= 0)		// If there is vis data for this leaf
/* 311 */ 		{
/* 312 */ 			if (World->CurrentBSP->LeafData[Leaf].VisFrame == World->CurFrameStatic)
/* 313 */ 				Models->VisFrame = World->CurFrameDynamic;
/* 314 */ 			else
/* 315 */ 			{
/* 316 */ 				GFX_Model	*pModel;
/* 317 */ 
/* 318 */ 				pModel = &BSPData->GFXModels[i];
/* 319 */ 
/* 320 */ 				if (pModel->Areas[0] == Area || pModel->Areas[1] == Area && 
/* 321 */ 					World->CurrentBSP->ClusterVisFrame[Cluster] == World->CurFrameStatic)
/* 322 */ 					Models->VisFrame = World->CurFrameDynamic;
/* 323 */ 			}
/* 324 */ 		}
/* 325 */ 		else if (ModelVisible(World, Models))
/* 326 */ 			Models->VisFrame = World->CurFrameDynamic;
/* 327 */ 	#else
/* 328 */ 		
/* 329 */ 		if (ModelVisible(World, Models))
/* 330 */ 			Models->VisFrame = World->CurFrameDynamic;
/* 331 */ 		
/* 332 */ 	#endif
/* 333 */ 		
/* 334 */ 		Models->ChangedFlags &= ~MODEL_CHANGED_XFORM;
/* 335 */ 	}
/* 336 */ 	
/* 337 */ 	VisFog(Engine, World, Camera, Fi, Area);
/* 338 */ 
/* 339 */ #ifdef _TSC
/* 340 */ 	showPopTSC("Vis_VisWorld");
/* 341 */ #endif
