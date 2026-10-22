  4a11e0:	e8 0b 00 00 00       	call   0x4a11f0
  4a11e5:	e9 d6 00 00 00       	jmp    0x4a12c0
  4a11ea:	90                   	nop
  4a11eb:	90                   	nop
  4a11ec:	90                   	nop
  4a11ed:	90                   	nop
  4a11ee:	90                   	nop
  4a11ef:	90                   	nop
  4a11f0:	83 ec 08             	sub    esp,0x8
  4a11f3:	53                   	push   ebx
  4a11f4:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  4a11f8:	55                   	push   ebp
  4a11f9:	56                   	push   esi
  4a11fa:	57                   	push   edi
  4a11fb:	33 f6                	xor    esi,esi
  4a11fd:	83 ec 10             	sub    esp,0x10
  4a1200:	bf c8 53 69 00       	mov    edi,0x6953c8
  4a1205:	8b ec                	mov    ebp,esp
  4a1207:	83 c9 ff             	or     ecx,0xffffffff
  4a120a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  4a120e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  4a1211:	33 c0                	xor    eax,eax
  4a1213:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  4a1216:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  4a1219:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  4a121c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a121e:	f7 d1                	not    ecx
  4a1220:	49                   	dec    ecx
  4a1221:	8b d9                	mov    ebx,ecx
  4a1223:	83 fb fd             	cmp    ebx,0xfffffffd
  4a1226:	76 05                	jbe    0x4a122d
  4a1228:	e8 ce d3 15 00       	call   0x5fe5fb
  4a122d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  4a1230:	3b ce                	cmp    ecx,esi
  4a1232:	74 1e                	je     0x4a1252
  4a1234:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4a1237:	84 c0                	test   al,al
  4a1239:	74 17                	je     0x4a1252
  4a123b:	3c ff                	cmp    al,0xff
  4a123d:	74 13                	je     0x4a1252
  4a123f:	3b de                	cmp    ebx,esi
  4a1241:	75 33                	jne    0x4a1276
  4a1243:	fe c8                	dec    al
  4a1245:	56                   	push   esi
  4a1246:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4a1249:	8b cd                	mov    ecx,ebp
  4a124b:	e8 50 2e f6 ff       	call   0x4040a0
  4a1250:	eb 4e                	jmp    0x4a12a0
  4a1252:	3b de                	cmp    ebx,esi
  4a1254:	75 0b                	jne    0x4a1261
  4a1256:	6a 01                	push   0x1
  4a1258:	8b cd                	mov    ecx,ebp
  4a125a:	e8 41 2e f6 ff       	call   0x4040a0
  4a125f:	eb 3f                	jmp    0x4a12a0
  4a1261:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  4a1264:	83 f8 1f             	cmp    eax,0x1f
  4a1267:	77 04                	ja     0x4a126d
  4a1269:	3b c3                	cmp    eax,ebx
  4a126b:	73 11                	jae    0x4a127e
  4a126d:	6a 01                	push   0x1
  4a126f:	8b cd                	mov    ecx,ebp
  4a1271:	e8 2a 2e f6 ff       	call   0x4040a0
  4a1276:	53                   	push   ebx
  4a1277:	8b cd                	mov    ecx,ebp
  4a1279:	e8 e2 07 f6 ff       	call   0x401a60
  4a127e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  4a1281:	8b cb                	mov    ecx,ebx
  4a1283:	8b d1                	mov    edx,ecx
  4a1285:	be c8 53 69 00       	mov    esi,0x6953c8
  4a128a:	c1 e9 02             	shr    ecx,0x2
  4a128d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4a128f:	8b ca                	mov    ecx,edx
  4a1291:	83 e1 03             	and    ecx,0x3
  4a1294:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4a1296:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  4a1299:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  4a129c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  4a12a0:	68 f0 8d 6b 00       	push   0x6b8df0
  4a12a5:	b9 30 90 6b 00       	mov    ecx,0x6b9030
  4a12aa:	e8 b1 b5 f6 ff       	call   0x40c860
  4a12af:	5f                   	pop    edi
  4a12b0:	5e                   	pop    esi
  4a12b1:	5d                   	pop    ebp
  4a12b2:	5b                   	pop    ebx
  4a12b3:	83 c4 08             	add    esp,0x8
  4a12b6:	c3                   	ret
  4a12b7:	90                   	nop
  4a12b8:	90                   	nop
  4a12b9:	90                   	nop
  4a12ba:	90                   	nop
  4a12bb:	90                   	nop
  4a12bc:	90                   	nop
  4a12bd:	90                   	nop
  4a12be:	90                   	nop
  4a12bf:	90                   	nop
  4a12c0:	68 d0 12 4a 00       	push   0x4a12d0
  4a12c5:	e8 b1 92 16 00       	call   0x60a57b
  4a12ca:	59                   	pop    ecx
  4a12cb:	c3                   	ret
  4a12cc:	90                   	nop
  4a12cd:	90                   	nop
  4a12ce:	90                   	nop
  4a12cf:	90                   	nop
  4a12d0:	8a 0d 64 8f 6b 00    	mov    cl,BYTE PTR ds:0x6b8f64
  4a12d6:	b0 01                	mov    al,0x1
  4a12d8:	84 c8                	test   al,cl
  4a12da:	75 12                	jne    0x4a12ee
  4a12dc:	0a c8                	or     cl,al
  4a12de:	88 0d 64 8f 6b 00    	mov    BYTE PTR ds:0x6b8f64,cl
  4a12e4:	b9 30 90 6b 00       	mov    ecx,0x6b9030
  4a12e9:	e9 d2 89 f8 ff       	jmp    0x429cc0
  4a12ee:	c3                   	ret
  4a12ef:	90                   	nop
  4a12f0:	e8 0b 00 00 00       	call   0x4a1300
  4a12f5:	e9 d6 00 00 00       	jmp    0x4a13d0
  4a12fa:	90                   	nop
  4a12fb:	90                   	nop
  4a12fc:	90                   	nop
  4a12fd:	90                   	nop
  4a12fe:	90                   	nop
  4a12ff:	90                   	nop
  4a1300:	83 ec 08             	sub    esp,0x8
  4a1303:	53                   	push   ebx
  4a1304:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  4a1308:	55                   	push   ebp
  4a1309:	56                   	push   esi
  4a130a:	57                   	push   edi
  4a130b:	33 f6                	xor    esi,esi
  4a130d:	83 ec 10             	sub    esp,0x10
  4a1310:	bf c8 53 69 00       	mov    edi,0x6953c8
  4a1315:	8b ec                	mov    ebp,esp
  4a1317:	83 c9 ff             	or     ecx,0xffffffff
  4a131a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  4a131e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  4a1321:	33 c0                	xor    eax,eax
  4a1323:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  4a1326:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  4a1329:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  4a132c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a132e:	f7 d1                	not    ecx
  4a1330:	49                   	dec    ecx
  4a1331:	8b d9                	mov    ebx,ecx
  4a1333:	83 fb fd             	cmp    ebx,0xfffffffd
  4a1336:	76 05                	jbe    0x4a133d
  4a1338:	e8 be d2 15 00       	call   0x5fe5fb
  4a133d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  4a1340:	3b ce                	cmp    ecx,esi
  4a1342:	74 1e                	je     0x4a1362
  4a1344:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4a1347:	84 c0                	test   al,al
  4a1349:	74 17                	je     0x4a1362
  4a134b:	3c ff                	cmp    al,0xff
  4a134d:	74 13                	je     0x4a1362
  4a134f:	3b de                	cmp    ebx,esi
  4a1351:	75 33                	jne    0x4a1386
  4a1353:	fe c8                	dec    al
  4a1355:	56                   	push   esi
  4a1356:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4a1359:	8b cd                	mov    ecx,ebp
  4a135b:	e8 40 2d f6 ff       	call   0x4040a0
  4a1360:	eb 4e                	jmp    0x4a13b0
  4a1362:	3b de                	cmp    ebx,esi
  4a1364:	75 0b                	jne    0x4a1371
  4a1366:	6a 01                	push   0x1
  4a1368:	8b cd                	mov    ecx,ebp
  4a136a:	e8 31 2d f6 ff       	call   0x4040a0
  4a136f:	eb 3f                	jmp    0x4a13b0
  4a1371:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  4a1374:	83 f8 1f             	cmp    eax,0x1f
  4a1377:	77 04                	ja     0x4a137d
  4a1379:	3b c3                	cmp    eax,ebx
  4a137b:	73 11                	jae    0x4a138e
  4a137d:	6a 01                	push   0x1
  4a137f:	8b cd                	mov    ecx,ebp
  4a1381:	e8 1a 2d f6 ff       	call   0x4040a0
  4a1386:	53                   	push   ebx
  4a1387:	8b cd                	mov    ecx,ebp
  4a1389:	e8 d2 06 f6 ff       	call   0x401a60
  4a138e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  4a1391:	8b cb                	mov    ecx,ebx
  4a1393:	8b d1                	mov    edx,ecx
  4a1395:	be c8 53 69 00       	mov    esi,0x6953c8
  4a139a:	c1 e9 02             	shr    ecx,0x2
  4a139d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4a139f:	8b ca                	mov    ecx,edx
  4a13a1:	83 e1 03             	and    ecx,0x3
  4a13a4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4a13a6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  4a13a9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  4a13ac:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  4a13b0:	68 f0 8d 6b 00       	push   0x6b8df0
  4a13b5:	b9 08 90 6b 00       	mov    ecx,0x6b9008
  4a13ba:	e8 a1 b4 f6 ff       	call   0x40c860
  4a13bf:	5f                   	pop    edi
  4a13c0:	5e                   	pop    esi
  4a13c1:	5d                   	pop    ebp
  4a13c2:	5b                   	pop    ebx
  4a13c3:	83 c4 08             	add    esp,0x8
  4a13c6:	c3                   	ret
  4a13c7:	90                   	nop
  4a13c8:	90                   	nop
  4a13c9:	90                   	nop
  4a13ca:	90                   	nop
  4a13cb:	90                   	nop
  4a13cc:	90                   	nop
  4a13cd:	90                   	nop
  4a13ce:	90                   	nop
  4a13cf:	90                   	nop
  4a13d0:	68 e0 13 4a 00       	push   0x4a13e0
  4a13d5:	e8 a1 91 16 00       	call   0x60a57b
  4a13da:	59                   	pop    ecx
  4a13db:	c3                   	ret
  4a13dc:	90                   	nop
  4a13dd:	90                   	nop
  4a13de:	90                   	nop
  4a13df:	90                   	nop
  4a13e0:	8a 0d 64 8f 6b 00    	mov    cl,BYTE PTR ds:0x6b8f64
  4a13e6:	b0 02                	mov    al,0x2
  4a13e8:	84 c8                	test   al,cl
  4a13ea:	75 12                	jne    0x4a13fe
  4a13ec:	0a c8                	or     cl,al
  4a13ee:	88 0d 64 8f 6b 00    	mov    BYTE PTR ds:0x6b8f64,cl
  4a13f4:	b9 08 90 6b 00       	mov    ecx,0x6b9008
  4a13f9:	e9 c2 88 f8 ff       	jmp    0x429cc0
  4a13fe:	c3                   	ret
  4a13ff:	90                   	nop
  4a1400:	e8 0b 00 00 00       	call   0x4a1410
  4a1405:	e9 d6 00 00 00       	jmp    0x4a14e0
  4a140a:	90                   	nop
  4a140b:	90                   	nop
  4a140c:	90                   	nop
  4a140d:	90                   	nop
  4a140e:	90                   	nop
  4a140f:	90                   	nop
  4a1410:	83 ec 08             	sub    esp,0x8
  4a1413:	53                   	push   ebx
  4a1414:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  4a1418:	55                   	push   ebp
  4a1419:	56                   	push   esi
  4a141a:	57                   	push   edi
  4a141b:	33 f6                	xor    esi,esi
  4a141d:	83 ec 10             	sub    esp,0x10
  4a1420:	bf d4 53 69 00       	mov    edi,0x6953d4
  4a1425:	8b ec                	mov    ebp,esp
  4a1427:	83 c9 ff             	or     ecx,0xffffffff
  4a142a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  4a142e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  4a1431:	33 c0                	xor    eax,eax
  4a1433:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  4a1436:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  4a1439:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  4a143c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a143e:	f7 d1                	not    ecx
  4a1440:	49                   	dec    ecx
  4a1441:	8b d9                	mov    ebx,ecx
  4a1443:	83 fb fd             	cmp    ebx,0xfffffffd
  4a1446:	76 05                	jbe    0x4a144d
  4a1448:	e8 ae d1 15 00       	call   0x5fe5fb
  4a144d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  4a1450:	3b ce                	cmp    ecx,esi
  4a1452:	74 1e                	je     0x4a1472
  4a1454:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4a1457:	84 c0                	test   al,al
  4a1459:	74 17                	je     0x4a1472
  4a145b:	3c ff                	cmp    al,0xff
  4a145d:	74 13                	je     0x4a1472
  4a145f:	3b de                	cmp    ebx,esi
  4a1461:	75 33                	jne    0x4a1496
  4a1463:	fe c8                	dec    al
  4a1465:	56                   	push   esi
  4a1466:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4a1469:	8b cd                	mov    ecx,ebp
  4a146b:	e8 30 2c f6 ff       	call   0x4040a0
  4a1470:	eb 4e                	jmp    0x4a14c0
  4a1472:	3b de                	cmp    ebx,esi
  4a1474:	75 0b                	jne    0x4a1481
  4a1476:	6a 01                	push   0x1
  4a1478:	8b cd                	mov    ecx,ebp
  4a147a:	e8 21 2c f6 ff       	call   0x4040a0
  4a147f:	eb 3f                	jmp    0x4a14c0
  4a1481:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  4a1484:	83 f8 1f             	cmp    eax,0x1f
  4a1487:	77 04                	ja     0x4a148d
  4a1489:	3b c3                	cmp    eax,ebx
  4a148b:	73 11                	jae    0x4a149e
  4a148d:	6a 01                	push   0x1
  4a148f:	8b cd                	mov    ecx,ebp
  4a1491:	e8 0a 2c f6 ff       	call   0x4040a0
  4a1496:	53                   	push   ebx
  4a1497:	8b cd                	mov    ecx,ebp
  4a1499:	e8 c2 05 f6 ff       	call   0x401a60
  4a149e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  4a14a1:	8b cb                	mov    ecx,ebx
  4a14a3:	8b d1                	mov    edx,ecx
  4a14a5:	be d4 53 69 00       	mov    esi,0x6953d4
  4a14aa:	c1 e9 02             	shr    ecx,0x2
  4a14ad:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4a14af:	8b ca                	mov    ecx,edx
  4a14b1:	83 e1 03             	and    ecx,0x3
  4a14b4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4a14b6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  4a14b9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  4a14bc:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  4a14c0:	68 f0 8d 6b 00       	push   0x6b8df0
  4a14c5:	b9 e0 8f 6b 00       	mov    ecx,0x6b8fe0
  4a14ca:	e8 91 b3 f6 ff       	call   0x40c860
  4a14cf:	5f                   	pop    edi
  4a14d0:	5e                   	pop    esi
  4a14d1:	5d                   	pop    ebp
  4a14d2:	5b                   	pop    ebx
  4a14d3:	83 c4 08             	add    esp,0x8
  4a14d6:	c3                   	ret
  4a14d7:	90                   	nop
  4a14d8:	90                   	nop
  4a14d9:	90                   	nop
  4a14da:	90                   	nop
  4a14db:	90                   	nop
  4a14dc:	90                   	nop
  4a14dd:	90                   	nop
  4a14de:	90                   	nop
  4a14df:	90                   	nop
  4a14e0:	68 f0 14 4a 00       	push   0x4a14f0
  4a14e5:	e8 91 90 16 00       	call   0x60a57b
  4a14ea:	59                   	pop    ecx
  4a14eb:	c3                   	ret
  4a14ec:	90                   	nop
  4a14ed:	90                   	nop
  4a14ee:	90                   	nop
  4a14ef:	90                   	nop
  4a14f0:	8a 0d 64 8f 6b 00    	mov    cl,BYTE PTR ds:0x6b8f64
  4a14f6:	b0 04                	mov    al,0x4
  4a14f8:	84 c8                	test   al,cl
  4a14fa:	75 12                	jne    0x4a150e
  4a14fc:	0a c8                	or     cl,al
  4a14fe:	88 0d 64 8f 6b 00    	mov    BYTE PTR ds:0x6b8f64,cl
  4a1504:	b9 e0 8f 6b 00       	mov    ecx,0x6b8fe0
  4a1509:	e9 b2 87 f8 ff       	jmp    0x429cc0
  4a150e:	c3                   	ret
  4a150f:	90                   	nop
  4a1510:	e8 0b 00 00 00       	call   0x4a1520
  4a1515:	e9 d6 00 00 00       	jmp    0x4a15f0
  4a151a:	90                   	nop
  4a151b:	90                   	nop
  4a151c:	90                   	nop
  4a151d:	90                   	nop
  4a151e:	90                   	nop
  4a151f:	90                   	nop
  4a1520:	83 ec 08             	sub    esp,0x8
  4a1523:	53                   	push   ebx
  4a1524:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  4a1528:	55                   	push   ebp
  4a1529:	56                   	push   esi
  4a152a:	57                   	push   edi
  4a152b:	33 f6                	xor    esi,esi
  4a152d:	83 ec 10             	sub    esp,0x10
  4a1530:	bf c8 53 69 00       	mov    edi,0x6953c8
  4a1535:	8b ec                	mov    ebp,esp
  4a1537:	83 c9 ff             	or     ecx,0xffffffff
  4a153a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  4a153e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  4a1541:	33 c0                	xor    eax,eax
  4a1543:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  4a1546:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  4a1549:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  4a154c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a154e:	f7 d1                	not    ecx
  4a1550:	49                   	dec    ecx
  4a1551:	8b d9                	mov    ebx,ecx
  4a1553:	83 fb fd             	cmp    ebx,0xfffffffd
  4a1556:	76 05                	jbe    0x4a155d
  4a1558:	e8 9e d0 15 00       	call   0x5fe5fb
  4a155d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  4a1560:	3b ce                	cmp    ecx,esi
  4a1562:	74 1e                	je     0x4a1582
  4a1564:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4a1567:	84 c0                	test   al,al
  4a1569:	74 17                	je     0x4a1582
  4a156b:	3c ff                	cmp    al,0xff
  4a156d:	74 13                	je     0x4a1582
  4a156f:	3b de                	cmp    ebx,esi
  4a1571:	75 33                	jne    0x4a15a6
  4a1573:	fe c8                	dec    al
  4a1575:	56                   	push   esi
  4a1576:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4a1579:	8b cd                	mov    ecx,ebp
  4a157b:	e8 20 2b f6 ff       	call   0x4040a0
  4a1580:	eb 4e                	jmp    0x4a15d0
  4a1582:	3b de                	cmp    ebx,esi
  4a1584:	75 0b                	jne    0x4a1591
  4a1586:	6a 01                	push   0x1
  4a1588:	8b cd                	mov    ecx,ebp
  4a158a:	e8 11 2b f6 ff       	call   0x4040a0
  4a158f:	eb 3f                	jmp    0x4a15d0
  4a1591:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  4a1594:	83 f8 1f             	cmp    eax,0x1f
  4a1597:	77 04                	ja     0x4a159d
  4a1599:	3b c3                	cmp    eax,ebx
  4a159b:	73 11                	jae    0x4a15ae
  4a159d:	6a 01                	push   0x1
  4a159f:	8b cd                	mov    ecx,ebp
  4a15a1:	e8 fa 2a f6 ff       	call   0x4040a0
  4a15a6:	53                   	push   ebx
  4a15a7:	8b cd                	mov    ecx,ebp
  4a15a9:	e8 b2 04 f6 ff       	call   0x401a60
  4a15ae:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  4a15b1:	8b cb                	mov    ecx,ebx
  4a15b3:	8b d1                	mov    edx,ecx
  4a15b5:	be c8 53 69 00       	mov    esi,0x6953c8
  4a15ba:	c1 e9 02             	shr    ecx,0x2
  4a15bd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4a15bf:	8b ca                	mov    ecx,edx
  4a15c1:	83 e1 03             	and    ecx,0x3
  4a15c4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4a15c6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  4a15c9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  4a15cc:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  4a15d0:	68 f0 8d 6b 00       	push   0x6b8df0
  4a15d5:	b9 b8 8f 6b 00       	mov    ecx,0x6b8fb8
  4a15da:	e8 81 b2 f6 ff       	call   0x40c860
  4a15df:	5f                   	pop    edi
  4a15e0:	5e                   	pop    esi
  4a15e1:	5d                   	pop    ebp
  4a15e2:	5b                   	pop    ebx
  4a15e3:	83 c4 08             	add    esp,0x8
  4a15e6:	c3                   	ret
  4a15e7:	90                   	nop
  4a15e8:	90                   	nop
  4a15e9:	90                   	nop
  4a15ea:	90                   	nop
  4a15eb:	90                   	nop
  4a15ec:	90                   	nop
  4a15ed:	90                   	nop
  4a15ee:	90                   	nop
  4a15ef:	90                   	nop
  4a15f0:	68 00 16 4a 00       	push   0x4a1600
  4a15f5:	e8 81 8f 16 00       	call   0x60a57b
  4a15fa:	59                   	pop    ecx
  4a15fb:	c3                   	ret
  4a15fc:	90                   	nop
  4a15fd:	90                   	nop
  4a15fe:	90                   	nop
  4a15ff:	90                   	nop
  4a1600:	8a 0d 64 8f 6b 00    	mov    cl,BYTE PTR ds:0x6b8f64
  4a1606:	b0 08                	mov    al,0x8
  4a1608:	84 c8                	test   al,cl
  4a160a:	75 12                	jne    0x4a161e
  4a160c:	0a c8                	or     cl,al
  4a160e:	88 0d 64 8f 6b 00    	mov    BYTE PTR ds:0x6b8f64,cl
  4a1614:	b9 b8 8f 6b 00       	mov    ecx,0x6b8fb8
  4a1619:	e9 a2 86 f8 ff       	jmp    0x429cc0
  4a161e:	c3                   	ret
  4a161f:	90                   	nop
  4a1620:	e8 0b 00 00 00       	call   0x4a1630
  4a1625:	e9 d6 00 00 00       	jmp    0x4a1700
  4a162a:	90                   	nop
  4a162b:	90                   	nop
  4a162c:	90                   	nop
  4a162d:	90                   	nop
  4a162e:	90                   	nop
  4a162f:	90                   	nop
  4a1630:	83 ec 08             	sub    esp,0x8
  4a1633:	53                   	push   ebx
  4a1634:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  4a1638:	55                   	push   ebp
  4a1639:	56                   	push   esi
  4a163a:	57                   	push   edi
  4a163b:	33 f6                	xor    esi,esi
  4a163d:	83 ec 10             	sub    esp,0x10
  4a1640:	bf c8 53 69 00       	mov    edi,0x6953c8
  4a1645:	8b ec                	mov    ebp,esp
  4a1647:	83 c9 ff             	or     ecx,0xffffffff
  4a164a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  4a164e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  4a1651:	33 c0                	xor    eax,eax
  4a1653:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  4a1656:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  4a1659:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  4a165c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a165e:	f7 d1                	not    ecx
  4a1660:	49                   	dec    ecx
  4a1661:	8b d9                	mov    ebx,ecx
  4a1663:	83 fb fd             	cmp    ebx,0xfffffffd
  4a1666:	76 05                	jbe    0x4a166d
  4a1668:	e8 8e cf 15 00       	call   0x5fe5fb
  4a166d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  4a1670:	3b ce                	cmp    ecx,esi
  4a1672:	74 1e                	je     0x4a1692
  4a1674:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4a1677:	84 c0                	test   al,al
  4a1679:	74 17                	je     0x4a1692
  4a167b:	3c ff                	cmp    al,0xff
  4a167d:	74 13                	je     0x4a1692
  4a167f:	3b de                	cmp    ebx,esi
  4a1681:	75 33                	jne    0x4a16b6
  4a1683:	fe c8                	dec    al
  4a1685:	56                   	push   esi
  4a1686:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4a1689:	8b cd                	mov    ecx,ebp
  4a168b:	e8 10 2a f6 ff       	call   0x4040a0
  4a1690:	eb 4e                	jmp    0x4a16e0
  4a1692:	3b de                	cmp    ebx,esi
  4a1694:	75 0b                	jne    0x4a16a1
  4a1696:	6a 01                	push   0x1
  4a1698:	8b cd                	mov    ecx,ebp
  4a169a:	e8 01 2a f6 ff       	call   0x4040a0
  4a169f:	eb 3f                	jmp    0x4a16e0
  4a16a1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  4a16a4:	83 f8 1f             	cmp    eax,0x1f
  4a16a7:	77 04                	ja     0x4a16ad
  4a16a9:	3b c3                	cmp    eax,ebx
  4a16ab:	73 11                	jae    0x4a16be
  4a16ad:	6a 01                	push   0x1
  4a16af:	8b cd                	mov    ecx,ebp
  4a16b1:	e8 ea 29 f6 ff       	call   0x4040a0
  4a16b6:	53                   	push   ebx
  4a16b7:	8b cd                	mov    ecx,ebp
  4a16b9:	e8 a2 03 f6 ff       	call   0x401a60
  4a16be:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  4a16c1:	8b cb                	mov    ecx,ebx
  4a16c3:	8b d1                	mov    edx,ecx
  4a16c5:	be c8 53 69 00       	mov    esi,0x6953c8
  4a16ca:	c1 e9 02             	shr    ecx,0x2
  4a16cd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4a16cf:	8b ca                	mov    ecx,edx
  4a16d1:	83 e1 03             	and    ecx,0x3
  4a16d4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4a16d6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  4a16d9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  4a16dc:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  4a16e0:	68 f0 8d 6b 00       	push   0x6b8df0
  4a16e5:	b9 90 8f 6b 00       	mov    ecx,0x6b8f90
  4a16ea:	e8 71 b1 f6 ff       	call   0x40c860
  4a16ef:	5f                   	pop    edi
  4a16f0:	5e                   	pop    esi
  4a16f1:	5d                   	pop    ebp
  4a16f2:	5b                   	pop    ebx
  4a16f3:	83 c4 08             	add    esp,0x8
  4a16f6:	c3                   	ret
  4a16f7:	90                   	nop
  4a16f8:	90                   	nop
  4a16f9:	90                   	nop
  4a16fa:	90                   	nop
  4a16fb:	90                   	nop
  4a16fc:	90                   	nop
  4a16fd:	90                   	nop
  4a16fe:	90                   	nop
  4a16ff:	90                   	nop
  4a1700:	68 10 17 4a 00       	push   0x4a1710
  4a1705:	e8 71 8e 16 00       	call   0x60a57b
  4a170a:	59                   	pop    ecx
  4a170b:	c3                   	ret
  4a170c:	90                   	nop
  4a170d:	90                   	nop
  4a170e:	90                   	nop
  4a170f:	90                   	nop
  4a1710:	8a 0d 64 8f 6b 00    	mov    cl,BYTE PTR ds:0x6b8f64
  4a1716:	b0 10                	mov    al,0x10
  4a1718:	84 c8                	test   al,cl
  4a171a:	75 12                	jne    0x4a172e
  4a171c:	0a c8                	or     cl,al
  4a171e:	88 0d 64 8f 6b 00    	mov    BYTE PTR ds:0x6b8f64,cl
  4a1724:	b9 90 8f 6b 00       	mov    ecx,0x6b8f90
  4a1729:	e9 92 85 f8 ff       	jmp    0x429cc0
  4a172e:	c3                   	ret
  4a172f:	90                   	nop
  4a1730:	e8 0b 00 00 00       	call   0x4a1740
  4a1735:	e9 d6 00 00 00       	jmp    0x4a1810
  4a173a:	90                   	nop
  4a173b:	90                   	nop
  4a173c:	90                   	nop
  4a173d:	90                   	nop
  4a173e:	90                   	nop
  4a173f:	90                   	nop
  4a1740:	83 ec 08             	sub    esp,0x8
  4a1743:	53                   	push   ebx
  4a1744:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  4a1748:	55                   	push   ebp
  4a1749:	56                   	push   esi
  4a174a:	57                   	push   edi
  4a174b:	33 f6                	xor    esi,esi
  4a174d:	83 ec 10             	sub    esp,0x10
  4a1750:	bf d4 53 69 00       	mov    edi,0x6953d4
  4a1755:	8b ec                	mov    ebp,esp
  4a1757:	83 c9 ff             	or     ecx,0xffffffff
  4a175a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  4a175e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  4a1761:	33 c0                	xor    eax,eax
  4a1763:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  4a1766:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  4a1769:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  4a176c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a176e:	f7 d1                	not    ecx
  4a1770:	49                   	dec    ecx
  4a1771:	8b d9                	mov    ebx,ecx
  4a1773:	83 fb fd             	cmp    ebx,0xfffffffd
  4a1776:	76 05                	jbe    0x4a177d
  4a1778:	e8 7e ce 15 00       	call   0x5fe5fb
  4a177d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  4a1780:	3b ce                	cmp    ecx,esi
  4a1782:	74 1e                	je     0x4a17a2
  4a1784:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4a1787:	84 c0                	test   al,al
  4a1789:	74 17                	je     0x4a17a2
  4a178b:	3c ff                	cmp    al,0xff
  4a178d:	74 13                	je     0x4a17a2
  4a178f:	3b de                	cmp    ebx,esi
  4a1791:	75 33                	jne    0x4a17c6
  4a1793:	fe c8                	dec    al
  4a1795:	56                   	push   esi
  4a1796:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4a1799:	8b cd                	mov    ecx,ebp
  4a179b:	e8 00 29 f6 ff       	call   0x4040a0
  4a17a0:	eb 4e                	jmp    0x4a17f0
  4a17a2:	3b de                	cmp    ebx,esi
  4a17a4:	75 0b                	jne    0x4a17b1
  4a17a6:	6a 01                	push   0x1
  4a17a8:	8b cd                	mov    ecx,ebp
  4a17aa:	e8 f1 28 f6 ff       	call   0x4040a0
  4a17af:	eb 3f                	jmp    0x4a17f0
  4a17b1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  4a17b4:	83 f8 1f             	cmp    eax,0x1f
  4a17b7:	77 04                	ja     0x4a17bd
  4a17b9:	3b c3                	cmp    eax,ebx
  4a17bb:	73 11                	jae    0x4a17ce
  4a17bd:	6a 01                	push   0x1
  4a17bf:	8b cd                	mov    ecx,ebp
  4a17c1:	e8 da 28 f6 ff       	call   0x4040a0
  4a17c6:	53                   	push   ebx
  4a17c7:	8b cd                	mov    ecx,ebp
  4a17c9:	e8 92 02 f6 ff       	call   0x401a60
  4a17ce:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  4a17d1:	8b cb                	mov    ecx,ebx
  4a17d3:	8b d1                	mov    edx,ecx
  4a17d5:	be d4 53 69 00       	mov    esi,0x6953d4
  4a17da:	c1 e9 02             	shr    ecx,0x2
  4a17dd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4a17df:	8b ca                	mov    ecx,edx
  4a17e1:	83 e1 03             	and    ecx,0x3
  4a17e4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4a17e6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  4a17e9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  4a17ec:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  4a17f0:	68 f0 8d 6b 00       	push   0x6b8df0
  4a17f5:	b9 68 8f 6b 00       	mov    ecx,0x6b8f68
  4a17fa:	e8 61 b0 f6 ff       	call   0x40c860
  4a17ff:	5f                   	pop    edi
  4a1800:	5e                   	pop    esi
  4a1801:	5d                   	pop    ebp
  4a1802:	5b                   	pop    ebx
  4a1803:	83 c4 08             	add    esp,0x8
  4a1806:	c3                   	ret
  4a1807:	90                   	nop
  4a1808:	90                   	nop
  4a1809:	90                   	nop
  4a180a:	90                   	nop
  4a180b:	90                   	nop
  4a180c:	90                   	nop
  4a180d:	90                   	nop
  4a180e:	90                   	nop
  4a180f:	90                   	nop
  4a1810:	68 20 18 4a 00       	push   0x4a1820
  4a1815:	e8 61 8d 16 00       	call   0x60a57b
  4a181a:	59                   	pop    ecx
  4a181b:	c3                   	ret
  4a181c:	90                   	nop
  4a181d:	90                   	nop
  4a181e:	90                   	nop
  4a181f:	90                   	nop
  4a1820:	8a 0d 64 8f 6b 00    	mov    cl,BYTE PTR ds:0x6b8f64
  4a1826:	b0 20                	mov    al,0x20
  4a1828:	84 c8                	test   al,cl
  4a182a:	75 12                	jne    0x4a183e
  4a182c:	0a c8                	or     cl,al
  4a182e:	88 0d 64 8f 6b 00    	mov    BYTE PTR ds:0x6b8f64,cl
  4a1834:	b9 68 8f 6b 00       	mov    ecx,0x6b8f68
  4a1839:	e9 82 84 f8 ff       	jmp    0x429cc0
  4a183e:	c3                   	ret
  4a183f:	90                   	nop
