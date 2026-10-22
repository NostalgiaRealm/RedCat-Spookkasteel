/* Later Genesis3D reference only: temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/World.c, original lines2070-2190. Direct binary matching described separately. */
/* 2070 */ 	if (Node < 0)		// At leaf, no more recursing
/* 2071 */ 	{
/* 2072 */ 		int32		Leaf;
/* 2073 */ 		gePoly		*PolyList;
/* 2074 */ 
/* 2075 */ 		Leaf = -(Node+1);
/* 2076 */ 
/* 2077 */ 		assert(Leaf >= 0 && Leaf < CWorld->CurrentBSP->BSPData.NumGFXLeafs);
/* 2078 */ 
/* 2079 */ 		PolyList = CWorld->CurrentBSP->LeafData[Leaf].PolyList;
/* 2080 */ 
/* 2081 */ 		if (PolyList)
/* 2082 */ 		{
/* 2083 */ 			CDebugInfo->NumLeafsWithUserPolys++;
/* 2084 */ 			GList_AddOperation(1, (uint32)PolyList);
/* 2085 */ 		}
/* 2086 */ 
/* 2087 */ 		CDebugInfo->NumLeafsHit1++;
/* 2088 */ 
/* 2089 */ 		return;
/* 2090 */ 	}
/* 2091 */ 
/* 2092 */ 	if (CBSP->NodeVisFrame[Node] != CWorld->CurFrameStatic)		
/* 2093 */ 	{
/* 2094 */ 		if (CWorld->VisInfo)
/* 2095 */ 			return;
/* 2096 */ 	}
/* 2097 */ 	
/* 2098 */ 	CDebugInfo->NumNodesTraversed1++;
/* 2099 */ 
/* 2100 */ 	pNode = &BSPData->GFXNodes[Node];
/* 2101 */ 	
/* 2102 */ 	if (ClipFlags)	
/* 2103 */ 	{
/* 2104 */ 		geFloat			*MinMaxs;
/* 2105 */ 		int32			*Index;
/* 2106 */ 		geFloat			Dist;
/* 2107 */ 		geVec3d			Pnt;
/* 2108 */ 		GFX_Plane		*Planes;
/* 2109 */ 		Frustum_Info	*Fi;
/* 2110 */ 
/* 2111 */ 		Fi = RenderInfo->Frustum;
/* 2112 */ 
/* 2113 */ 		MinMaxs = (geFloat*)&pNode->Mins;
/* 2114 */ 		Planes = Fi->Planes;
/* 2115 */ 
/* 2116 */ 		for (k=0; k< Fi->NumPlanes; k++)
/* 2117 */ 		{
/* 2118 */ 			if (!(ClipFlags & (1<<k)) )
/* 2119 */ 				continue;
/* 2120 */ 			
/* 2121 */ 			Index = Fi->pFrustumBBoxIndexes[k];
/* 2122 */ 
/* 2123 */ 			Pnt.X = MinMaxs[Index[0]];
/* 2124 */ 			Pnt.Y = MinMaxs[Index[1]];
/* 2125 */ 			Pnt.Z = MinMaxs[Index[2]];
/* 2126 */ 			
/* 2127 */ 			Dist = geVec3d_DotProduct(&Pnt, &Planes[k].Normal);
/* 2128 */ 			Dist -= Fi->Planes[k].Dist;
/* 2129 */ 
/* 2130 */ 			if (Dist <= 0)
/* 2131 */ 			{
/* 2132 */ 				// We have no more visible nodes from this POV, so just traverse to leafs from here
/* 2133 */ 				RenderBSPFrontBack_r2(Node, RenderInfo->Camera);
/* 2134 */ 				return;
/* 2135 */ 			}
/* 2136 */ 
/* 2137 */ 			Pnt.X = MinMaxs[Index[3+0]];
/* 2138 */ 			Pnt.Y = MinMaxs[Index[3+1]];
/* 2139 */ 			Pnt.Z = MinMaxs[Index[3+2]];
/* 2140 */ 
/* 2141 */ 			Dist = geVec3d_DotProduct(&Pnt, &Planes[k].Normal);
/* 2142 */ 			Dist -= Planes[k].Dist;
/* 2143 */ 
/* 2144 */ 			if (Dist >= 0)		
/* 2145 */ 				ClipFlags &= ~(1<<k);		// Don't need to clip to this plane anymore
/* 2146 */ 		}
/* 2147 */ 	}
/* 2148 */ 	
/* 2149 */ 	// Get the distance that the eye is from this plane
/* 2150 */ 	Dist1 = Plane_PlaneDistanceFast(&BSPData->GFXPlanes[pNode->PlaneNum], geCamera_GetPov(RenderInfo->Camera));
/* 2151 */ 
/* 2152 */ 	pSurfInfo2 = &pSurfInfo[pNode->FirstFace];
/* 2153 */ 	pFace = &BSPData->GFXFaces[pNode->FirstFace];
/* 2154 */ 
/* 2155 */ 	if (Dist1 < 0)
/* 2156 */ 		Side = 1;		// Back side first
/* 2157 */ 	else
/* 2158 */ 		Side = 0;		// Front side first
/* 2159 */ 
/* 2160 */ 	// Render the side of the node we are on first
/* 2161 */ 	RenderBSPFrontBack_r(pNode->Children[Side], RenderInfo, ClipFlags);
/* 2162 */ 
/* 2163 */ #ifdef GLOBALINFO
/* 2164 */ 	// Setup the global driver info about this plane (all the faces share it for this run)
/* 2165 */ 	// FIXME:  Software driver needs to calculate gradients from uv's, so we can QUIT doing this here...
/* 2166 */ 	GlobalInfo.PlaneNormal = BSPData->GFXPlanes[pNode->PlaneNum].Normal;
/* 2167 */ 	GlobalInfo.PlaneDist = BSPData->GFXPlanes[pNode->PlaneNum].Dist;
/* 2168 */ 	geXForm3d_Rotate(geCamera_GetCameraSpaceXForm(RenderInfo->Camera), &GlobalInfo.PlaneNormal, &GlobalInfo.RPlaneNormal);
/* 2169 */ #endif
/* 2170 */ 
/* 2171 */ 	// Render faces on this node
/* 2172 */ 	for (i = 0; i < pNode->NumFaces; i++, pSurfInfo2++, pFace++)
/* 2173 */ 	{
/* 2174 */ 		f = i + pNode->FirstFace;
/* 2175 */ 			
/* 2176 */ 		if (pSurfInfo2->VisFrame != CWorld->CurFrameStatic && CWorld->VisInfo)
/* 2177 */ 			continue;
/* 2178 */ 		
/* 2179 */ 		if (pFace->PlaneSide != Side)
/* 2180 */ 			continue;
/* 2181 */ 		
/* 2182 */ 		CEngine->DebugInfo.TraversedPolys++;
/* 2183 */ 		RenderFace(f, RenderInfo, ClipFlags);
/* 2184 */ 	}
/* 2185 */ 
/* 2186 */ 	// Render faces on the other side of the node
/* 2187 */ 	RenderBSPFrontBack_r(pNode->Children[!Side], RenderInfo, ClipFlags);
/* 2188 */ }
/* 2189 */ 
/* 2190 */ void GENESISCC geXForm3d_SetLeft(geXForm3d *M, const geVec3d *Left)
