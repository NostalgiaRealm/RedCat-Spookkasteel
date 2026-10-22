/* Later Genesis3D reference only: temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/World.c, original lines1450-1528. Direct binary matching described separately. */
/* 1450 */ //MRB BEGIN
/* 1451 */ //geSprite
/* 1452 */ 		World_Sprite *WSprite;
/* 1453 */ //MRB END
/* 1454 */ 
/* 1455 */ 		//geXForm3d		XForm;
/* 1456 */ 		geVec3d			Center;
/* 1457 */ 		int32			Leaf;
/* 1458 */ 		Frustum_Info	ActorFrustum;
/* 1459 */ 
/* 1460 */ 		// Make the frustum go to world space for actors
/* 1461 */ 		// changed QD Clipping
/* 1462 */ 		// do clipping in camera space
/* 1463 */ 		//Frustum_TransformToWorldSpace(FrustumInfo, Camera, &ActorFrustum);
/* 1464 */ 
/* 1465 */ 		// Tell the driver we want to render meshes
/* 1466 */ 		if (!Engine->DriverInfo.RDriver->BeginMeshes())
/* 1467 */ 		{
/* 1468 */ 			geErrorLog_Add(GE_ERR_BEGIN_MESHES_FAILED, NULL);
/* 1469 */ 			return GE_FALSE;
/* 1470 */ 		}
/* 1471 */ 
/* 1472 */ 		// We were using the actor array alot, so I though I'd move it out...
/* 1473 */ 		// There were also going to be a lot of nested if's, so they are continues now...
/* 1474 */ 		WActor = World->ActorArray;
/* 1475 */ 
/* 1476 */ 		for (i=0; i< World->ActorCount; i++, WActor++)
/* 1477 */ 		{
/* 1478 */ 			if (MirrorRecursion == 0 && !(WActor->Flags & (GE_ACTOR_RENDER_NORMAL | GE_ACTOR_RENDER_ALWAYS)))
/* 1479 */ 				continue;		// Not visible in normal views, skip it
/* 1480 */ 			if (MirrorRecursion > 0 && !(WActor->Flags & (GE_ACTOR_RENDER_MIRRORS | GE_ACTOR_RENDER_ALWAYS)))
/* 1481 */ 				continue;		// Not visible in mirros, skip it
/* 1482 */ 
/* 1483 */ 			{
/* 1484 */ 				geExtBox Box;
/* 1485 */ 				geBoolean Enabled;
/* 1486 */ 				geActor_GetRenderHintExtBox(WActor->Actor,&Box,&Enabled);
/* 1487 */ 				if (Enabled == GE_TRUE)
/* 1488 */ 				{
/* 1489 */ 					geExtBox_GetTranslation ( &Box, &Center );
/* 1490 */ 					if	(!(WActor->Flags & GE_ACTOR_RENDER_ALWAYS))
/* 1491 */ 					{
/* 1492 */ 						// NOTE - We are not taking into acount that a actor may live in more than one leaf...
/* 1493 */ 						geWorld_GetLeaf(World, &Center, &Leaf);
/* 1494 */ 					
/* 1495 */ 						if (World->CurrentBSP->LeafData[Leaf].VisFrame != World->CurFrameStatic)
/* 1496 */ 						{
/* 1497 */ 							// changed QD Shadows
/* 1498 */ 							// actor not visible but may cast a visible shadow
/* 1499 */ 							geActor_BodyGeometryNeedsUpdate(WActor->Actor);
/* 1500 */ 							// end change
/* 1501 */ 							continue;		// Not in PVS, skip it
/* 1502 */ 						}
/* 1503 */ 					}
/* 1504 */ 				}
/* 1505 */ 			}
/* 1506 */ 
/* 1507 */ 			if (MirrorRecursion == 0)
/* 1508 */ 			{
/* 1509 */ 				// changed QD Clipping
/* 1510 */ 				//geActor_Render( WActor->Actor, Engine, World, Camera);
/* 1511 */ 				geActor_Render( WActor->Actor, Engine, World, Camera, FrustumInfo);
/* 1512 */ 				// For debugging...
/* 1513 */ 				//  This is set inside Actor/Puppet.  Engine->DebugInfo.NumActors++;
/* 1514 */ 			}
/* 1515 */ 			else
/* 1516 */ 			{
/* 1517 */ 				// changed QD Clipping
/* 1518 */ 				//geActor_RenderThroughFrustum( WActor->Actor, Engine, World, Camera, &ActorFrustum);
/* 1519 */ 				geActor_RenderThroughFrustum( WActor->Actor, Engine, World, Camera, FrustumInfo);
/* 1520 */ 				
/* 1521 */ 				// For debugging...
/* 1522 */ 				Engine->DebugInfo.NumActors++;
/* 1523 */ 			}
/* 1524 */ 
/* 1525 */ 		}
/* 1526 */ 
/* 1527 */ //MRB BEGIN
/* 1528 */ //geSprite
