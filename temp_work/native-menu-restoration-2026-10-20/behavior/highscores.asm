  5510d2:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5510d5:	8b 18                	mov    ebx,DWORD PTR [eax]
  5510d7:	ff 13                	call   DWORD PTR [ebx]
  5510d9:	8b 95 cc fe ff ff    	mov    edx,DWORD PTR [ebp-0x134]
  5510df:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5510e2:	83 c0 18             	add    eax,0x18
  5510e5:	e8 1a 2d eb ff       	call   0x403e04
  5510ea:	6a 00                	push   0x0
  5510ec:	8d 85 c8 fe ff ff    	lea    eax,[ebp-0x138]
  5510f2:	50                   	push   eax
  5510f3:	ba 54 14 55 00       	mov    edx,0x551454
  5510f8:	b9 d4 14 55 00       	mov    ecx,0x5514d4
  5510fd:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  551100:	8b 18                	mov    ebx,DWORD PTR [eax]
  551102:	ff 13                	call   DWORD PTR [ebx]
  551104:	8b 95 c8 fe ff ff    	mov    edx,DWORD PTR [ebp-0x138]
  55110a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55110d:	83 c0 1c             	add    eax,0x1c
  551110:	e8 ef 2c eb ff       	call   0x403e04
  551115:	6a 00                	push   0x0
  551117:	8d 85 c4 fe ff ff    	lea    eax,[ebp-0x13c]
  55111d:	50                   	push   eax
  55111e:	ba 54 14 55 00       	mov    edx,0x551454
  551123:	b9 e8 14 55 00       	mov    ecx,0x5514e8
  551128:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55112b:	8b 18                	mov    ebx,DWORD PTR [eax]
  55112d:	ff 13                	call   DWORD PTR [ebx]
  55112f:	8b 95 c4 fe ff ff    	mov    edx,DWORD PTR [ebp-0x13c]
  551135:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551138:	83 c0 20             	add    eax,0x20
  55113b:	e8 c4 2c eb ff       	call   0x403e04
  551140:	6a 00                	push   0x0
  551142:	8d 85 c0 fe ff ff    	lea    eax,[ebp-0x140]
  551148:	50                   	push   eax
  551149:	ba 54 14 55 00       	mov    edx,0x551454
  55114e:	b9 fc 14 55 00       	mov    ecx,0x5514fc
  551153:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  551156:	8b 18                	mov    ebx,DWORD PTR [eax]
  551158:	ff 13                	call   DWORD PTR [ebx]
  55115a:	8b 95 c0 fe ff ff    	mov    edx,DWORD PTR [ebp-0x140]
  551160:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551163:	83 c0 24             	add    eax,0x24
  551166:	e8 99 2c eb ff       	call   0x403e04
  55116b:	6a 00                	push   0x0
  55116d:	8d 85 bc fe ff ff    	lea    eax,[ebp-0x144]
  551173:	50                   	push   eax
  551174:	ba 54 14 55 00       	mov    edx,0x551454
  551179:	b9 10 15 55 00       	mov    ecx,0x551510
  55117e:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  551181:	8b 18                	mov    ebx,DWORD PTR [eax]
  551183:	ff 13                	call   DWORD PTR [ebx]
  551185:	8b 95 bc fe ff ff    	mov    edx,DWORD PTR [ebp-0x144]
  55118b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55118e:	83 c0 34             	add    eax,0x34
  551191:	e8 6e 2c eb ff       	call   0x403e04
  551196:	6a 00                	push   0x0
  551198:	ba 54 14 55 00       	mov    edx,0x551454
  55119d:	b9 24 15 55 00       	mov    ecx,0x551524
  5511a2:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5511a5:	8b 18                	mov    ebx,DWORD PTR [eax]
  5511a7:	ff 53 08             	call   DWORD PTR [ebx+0x8]
  5511aa:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  5511ad:	6a 00                	push   0x0
  5511af:	ba 54 14 55 00       	mov    edx,0x551454
  5511b4:	b9 3c 15 55 00       	mov    ecx,0x55153c
  5511b9:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5511bc:	8b 18                	mov    ebx,DWORD PTR [eax]
  5511be:	ff 53 08             	call   DWORD PTR [ebx+0x8]
  5511c1:	48                   	dec    eax
  5511c2:	0f 94 c0             	sete   al
  5511c5:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  5511c8:	88 42 38             	mov    BYTE PTR [edx+0x38],al
  5511cb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5511ce:	c6 40 08 00          	mov    BYTE PTR [eax+0x8],0x0
  5511d2:	e8 25 18 eb ff       	call   0x4029fc
  5511d7:	85 c0                	test   eax,eax
  5511d9:	7e 57                	jle    0x551232
  5511db:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  5511de:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
  5511e5:	8d 95 b4 fe ff ff    	lea    edx,[ebp-0x14c]
  5511eb:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  5511ee:	e8 69 18 eb ff       	call   0x402a5c
  5511f3:	8b 85 b4 fe ff ff    	mov    eax,DWORD PTR [ebp-0x14c]
  5511f9:	8d 95 b8 fe ff ff    	lea    edx,[ebp-0x148]
  5511ff:	e8 8c 84 eb ff       	call   0x409690
  551204:	8b 85 b8 fe ff ff    	mov    eax,DWORD PTR [ebp-0x148]
  55120a:	ba 4c 15 55 00       	mov    edx,0x55154c
  55120f:	e8 2c 2f eb ff       	call   0x404140
  551214:	74 06                	je     0x55121c
  551216:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
  55121a:	74 0e                	je     0x55122a
  55121c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55121f:	c6 40 08 01          	mov    BYTE PTR [eax+0x8],0x1
  551223:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551226:	c6 40 09 00          	mov    BYTE PTR [eax+0x9],0x0
  55122a:	ff 45 f0             	inc    DWORD PTR [ebp-0x10]
  55122d:	ff 4d e4             	dec    DWORD PTR [ebp-0x1c]
  551230:	75 b3                	jne    0x5511e5
  551232:	33 c0                	xor    eax,eax
  551234:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  551237:	b2 01                	mov    dl,0x1
  551239:	a1 8c 0d 55 00       	mov    eax,ds:0x550d8c
  55123e:	e8 21 1e eb ff       	call   0x403064
  551243:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  551246:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  551249:	33 d2                	xor    edx,edx
  55124b:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  55124e:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  551251:	83 c0 08             	add    eax,0x8
  551254:	e8 57 2b eb ff       	call   0x403db0
  551259:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55125c:	8b 40 2c             	mov    eax,DWORD PTR [eax+0x2c]
  55125f:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
  551262:	e8 71 0f ec ff       	call   0x4121d8
  551267:	ff 45 f0             	inc    DWORD PTR [ebp-0x10]
  55126a:	83 7d f0 0b          	cmp    DWORD PTR [ebp-0x10],0xb
  55126e:	75 c7                	jne    0x551237
  551270:	b2 01                	mov    dl,0x1
  551272:	a1 8c 0d 55 00       	mov    eax,ds:0x550d8c
  551277:	e8 e8 1d eb ff       	call   0x403064
  55127c:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  55127f:	33 c0                	xor    eax,eax
  551281:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  551284:	6a 00                	push   0x0
  551286:	8d 95 b0 fe ff ff    	lea    edx,[ebp-0x150]
  55128c:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  55128f:	e8 44 89 eb ff       	call   0x409bd8
  551294:	8b 8d b0 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x150]
  55129a:	ba 60 15 55 00       	mov    edx,0x551560
  55129f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5512a2:	8b 18                	mov    ebx,DWORD PTR [eax]
  5512a4:	ff 53 08             	call   DWORD PTR [ebx+0x8]
  5512a7:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
  5512aa:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  5512ad:	6a 00                	push   0x0
  5512af:	8d 85 ac fe ff ff    	lea    eax,[ebp-0x154]
  5512b5:	50                   	push   eax
  5512b6:	8d 95 a4 fe ff ff    	lea    edx,[ebp-0x15c]
  5512bc:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  5512bf:	e8 14 89 eb ff       	call   0x409bd8
  5512c4:	8b 8d a4 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x15c]
  5512ca:	8d 85 a8 fe ff ff    	lea    eax,[ebp-0x158]
  5512d0:	ba 74 15 55 00       	mov    edx,0x551574
  5512d5:	e8 a2 2d eb ff       	call   0x40407c
  5512da:	8b 8d a8 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x158]
  5512e0:	ba 60 15 55 00       	mov    edx,0x551560
  5512e5:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5512e8:	8b 18                	mov    ebx,DWORD PTR [eax]
  5512ea:	ff 13                	call   DWORD PTR [ebx]
  5512ec:	8b 95 ac fe ff ff    	mov    edx,DWORD PTR [ebp-0x154]
  5512f2:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  5512f5:	83 c0 08             	add    eax,0x8
  5512f8:	e8 07 2b eb ff       	call   0x403e04
  5512fd:	8d 4d e8             	lea    ecx,[ebp-0x18]
  551300:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
  551303:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551306:	e8 91 07 00 00       	call   0x551a9c
  55130b:	ff 45 f0             	inc    DWORD PTR [ebp-0x10]
  55130e:	83 7d f0 0b          	cmp    DWORD PTR [ebp-0x10],0xb
  551312:	0f 85 6c ff ff ff    	jne    0x551284
  551318:	b2 01                	mov    dl,0x1
  55131a:	a1 8c 0d 55 00       	mov    eax,ds:0x550d8c
  55131f:	e8 40 1d eb ff       	call   0x403064
  551324:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  551327:	33 c0                	xor    eax,eax
  551329:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  55132c:	6a 00                	push   0x0
  55132e:	8d 95 a0 fe ff ff    	lea    edx,[ebp-0x160]
  551334:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  551337:	e8 9c 88 eb ff       	call   0x409bd8
  55133c:	8b 8d a0 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x160]
  551342:	ba 60 15 55 00       	mov    edx,0x551560
  551347:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55134a:	8b 18                	mov    ebx,DWORD PTR [eax]
  55134c:	ff 53 08             	call   DWORD PTR [ebx+0x8]
  55134f:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
  551352:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  551355:	6a 00                	push   0x0
  551357:	8d 85 9c fe ff ff    	lea    eax,[ebp-0x164]
  55135d:	50                   	push   eax
  55135e:	8d 95 94 fe ff ff    	lea    edx,[ebp-0x16c]
  551364:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  551367:	e8 6c 88 eb ff       	call   0x409bd8
  55136c:	8b 8d 94 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x16c]
  551372:	8d 85 98 fe ff ff    	lea    eax,[ebp-0x168]
  551378:	ba 74 15 55 00       	mov    edx,0x551574
  55137d:	e8 fa 2c eb ff       	call   0x40407c
  551382:	8b 8d 98 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x168]
  551388:	ba 60 15 55 00       	mov    edx,0x551560
  55138d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  551390:	8b 18                	mov    ebx,DWORD PTR [eax]
  551392:	ff 13                	call   DWORD PTR [ebx]
  551394:	8b 95 9c fe ff ff    	mov    edx,DWORD PTR [ebp-0x164]
  55139a:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  55139d:	83 c0 08             	add    eax,0x8
  5513a0:	e8 5f 2a eb ff       	call   0x403e04
  5513a5:	8d 4d e8             	lea    ecx,[ebp-0x18]
  5513a8:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
  5513ab:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5513ae:	e8 e9 06 00 00       	call   0x551a9c
  5513b3:	ff 45 f0             	inc    DWORD PTR [ebp-0x10]
  5513b6:	83 7d f0 0b          	cmp    DWORD PTR [ebp-0x10],0xb
  5513ba:	0f 85 6c ff ff ff    	jne    0x55132c
  5513c0:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  5513c3:	e8 cc 1c eb ff       	call   0x403094
  5513c8:	e8 bf 2d f5 ff       	call   0x4a418c
  5513cd:	e8 de 35 f5 ff       	call   0x4a49b0
  5513d2:	33 c0                	xor    eax,eax
  5513d4:	5a                   	pop    edx
  5513d5:	59                   	pop    ecx
  5513d6:	59                   	pop    ecx
  5513d7:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  5513da:	68 04 14 55 00       	push   0x551404
  5513df:	8d 85 94 fe ff ff    	lea    eax,[ebp-0x16c]
  5513e5:	ba 12 00 00 00       	mov    edx,0x12
  5513ea:	e8 e5 29 eb ff       	call   0x403dd4
  5513ef:	8d 45 dc             	lea    eax,[ebp-0x24]
  5513f2:	ba 02 00 00 00       	mov    edx,0x2
  5513f7:	e8 d8 29 eb ff       	call   0x403dd4
  5513fc:	c3                   	ret
  5513fd:	e9 f2 23 eb ff       	jmp    0x4037f4
  551402:	eb db                	jmp    0x5513df
  551404:	5b                   	pop    ebx
  551405:	8b e5                	mov    esp,ebp
  551407:	5d                   	pop    ebp
  551408:	c3                   	ret
  551409:	00 00                	add    BYTE PTR [eax],al
  55140b:	00 ff                	add    bh,bh
  55140d:	ff                   	(bad)
  55140e:	ff                   	(bad)
  55140f:	ff 01                	inc    DWORD PTR [ecx]
  551411:	00 00                	add    BYTE PTR [eax],al
  551413:	00 2e                	add    BYTE PTR [esi],ch
  551415:	00 00                	add    BYTE PTR [eax],al
  551417:	00 ff                	add    bh,bh
  551419:	ff                   	(bad)
  55141a:	ff                   	(bad)
  55141b:	ff 0e                	dec    DWORD PTR [esi]
  55141d:	00 00                	add    BYTE PTR [eax],al
  55141f:	00 44 6f 4c          	add    BYTE PTR [edi+ebp*2+0x4c],al
  551423:	6f                   	outs   dx,DWORD PTR ds:[esi]
  551424:	61                   	popa
  551425:	64 46                	fs inc esi
  551427:	72 6f                	jb     0x551498
  551429:	6d                   	ins    DWORD PTR es:[edi],dx
  55142a:	46                   	inc    esi
  55142b:	69 6c 65 00 00 00 00 	imul   ebp,DWORD PTR [ebp+eiz*2+0x0],0x0
  551432:	00 
  551433:	00 ff                	add    bh,bh
  551435:	ff                   	(bad)
  551436:	ff                   	(bad)
  551437:	ff 0d 00 00 00 43    	dec    DWORD PTR ds:0x43000000
  55143d:	55                   	push   ebp
  55143e:	52                   	push   edx
  55143f:	52                   	push   edx
  551440:	45                   	inc    ebp
  551441:	4e                   	dec    esi
  551442:	54                   	push   esp
  551443:	50                   	push   eax
  551444:	4c                   	dec    esp
  551445:	41                   	inc    ecx
  551446:	59                   	pop    ecx
  551447:	45                   	inc    ebp
  551448:	52                   	push   edx
  551449:	00 00                	add    BYTE PTR [eax],al
  55144b:	00 ff                	add    bh,bh
  55144d:	ff                   	(bad)
  55144e:	ff                   	(bad)
  55144f:	ff 07                	inc    DWORD PTR [edi]
  551451:	00 00                	add    BYTE PTR [eax],al
  551453:	00 47 45             	add    BYTE PTR [edi+0x45],al
  551456:	4e                   	dec    esi
  551457:	45                   	inc    ebp
  551458:	52                   	push   edx
  551459:	41                   	inc    ecx
  55145a:	4c                   	dec    esp
  55145b:	00 ff                	add    bh,bh
  55145d:	ff                   	(bad)
  55145e:	ff                   	(bad)
  55145f:	ff 09                	dec    DWORD PTR [ecx]
  551461:	00 00                	add    BYTE PTR [eax],al
  551463:	00 50 52             	add    BYTE PTR [eax+0x52],dl
  551466:	45                   	inc    ebp
  551467:	56                   	push   esi
  551468:	53                   	push   ebx
  551469:	54                   	push   esp
  55146a:	41                   	inc    ecx
  55146b:	54                   	push   esp
  55146c:	45                   	inc    ebp
  55146d:	00 00                	add    BYTE PTR [eax],al
  55146f:	00 ff                	add    bh,bh
  551471:	ff                   	(bad)
  551472:	ff                   	(bad)
  551473:	ff 04 00             	inc    DWORD PTR [eax+eax*1]
  551476:	00 00                	add    BYTE PTR [eax],al
  551478:	54                   	push   esp
  551479:	49                   	dec    ecx
  55147a:	4d                   	dec    ebp
  55147b:	45                   	inc    ebp
  55147c:	00 00                	add    BYTE PTR [eax],al
  55147e:	00 00                	add    BYTE PTR [eax],al
  551480:	ff                   	(bad)
  551481:	ff                   	(bad)
  551482:	ff                   	(bad)
  551483:	ff 06                	inc    DWORD PTR [esi]
  551485:	00 00                	add    BYTE PTR [eax],al
  551487:	00 46 4f             	add    BYTE PTR [esi+0x4f],al
  55148a:	52                   	push   edx
  55148b:	4d                   	dec    ebp
  55148c:	41                   	inc    ecx
  55148d:	54                   	push   esp
  55148e:	00 00                	add    BYTE PTR [eax],al
  551490:	ff                   	(bad)
  551491:	ff                   	(bad)
  551492:	ff                   	(bad)
  551493:	ff 08                	dec    DWORD PTR [eax]
  551495:	00 00                	add    BYTE PTR [eax],al
  551497:	00 49 4e             	add    BYTE PTR [ecx+0x4e],cl
  55149a:	54                   	push   esp
  55149b:	52                   	push   edx
  55149c:	4f                   	dec    edi
  55149d:	41                   	inc    ecx
  55149e:	56                   	push   esi
  55149f:	49                   	dec    ecx
  5514a0:	00 00                	add    BYTE PTR [eax],al
  5514a2:	00 00                	add    BYTE PTR [eax],al
  5514a4:	ff                   	(bad)
  5514a5:	ff                   	(bad)
  5514a6:	ff                   	(bad)
  5514a7:	ff 08                	dec    DWORD PTR [eax]
  5514a9:	00 00                	add    BYTE PTR [eax],al
  5514ab:	00 4f 55             	add    BYTE PTR [edi+0x55],cl
  5514ae:	54                   	push   esp
  5514af:	52                   	push   edx
  5514b0:	4f                   	dec    edi
  5514b1:	41                   	inc    ecx
  5514b2:	56                   	push   esi
  5514b3:	49                   	dec    ecx
  5514b4:	00 00                	add    BYTE PTR [eax],al
  5514b6:	00 00                	add    BYTE PTR [eax],al
  5514b8:	ff                   	(bad)
  5514b9:	ff                   	(bad)
  5514ba:	ff                   	(bad)
  5514bb:	ff 09                	dec    DWORD PTR [ecx]
  5514bd:	00 00                	add    BYTE PTR [eax],al
  5514bf:	00 4c 45 41          	add    BYTE PTR [ebp+eax*2+0x41],cl
  5514c3:	44                   	inc    esp
  5514c4:	45                   	inc    ebp
  5514c5:	52                   	push   edx
  5514c6:	41                   	inc    ecx
  5514c7:	56                   	push   esi
  5514c8:	49                   	dec    ecx
  5514c9:	00 00                	add    BYTE PTR [eax],al
  5514cb:	00 ff                	add    bh,bh
  5514cd:	ff                   	(bad)
  5514ce:	ff                   	(bad)
  5514cf:	ff 08                	dec    DWORD PTR [eax]
  5514d1:	00 00                	add    BYTE PTR [eax],al
  5514d3:	00 52 45             	add    BYTE PTR [edx+0x45],dl
  5514d6:	53                   	push   ebx
  5514d7:	4f                   	dec    edi
  5514d8:	55                   	push   ebp
  5514d9:	52                   	push   edx
  5514da:	43                   	inc    ebx
  5514db:	45                   	inc    ebp
  5514dc:	00 00                	add    BYTE PTR [eax],al
  5514de:	00 00                	add    BYTE PTR [eax],al
  5514e0:	ff                   	(bad)
  5514e1:	ff                   	(bad)
  5514e2:	ff                   	(bad)
  5514e3:	ff 08                	dec    DWORD PTR [eax]
  5514e5:	00 00                	add    BYTE PTR [eax],al
  5514e7:	00 53 4f             	add    BYTE PTR [ebx+0x4f],dl
  5514ea:	55                   	push   ebp
  5514eb:	4e                   	dec    esi
  5514ec:	44                   	inc    esp
  5514ed:	44                   	inc    esp
  5514ee:	49                   	dec    ecx
  5514ef:	52                   	push   edx
  5514f0:	00 00                	add    BYTE PTR [eax],al
  5514f2:	00 00                	add    BYTE PTR [eax],al
  5514f4:	ff                   	(bad)
  5514f5:	ff                   	(bad)
  5514f6:	ff                   	(bad)
  5514f7:	ff 09                	dec    DWORD PTR [ecx]
  5514f9:	00 00                	add    BYTE PTR [eax],al
  5514fb:	00 42 49             	add    BYTE PTR [edx+0x49],al
  5514fe:	54                   	push   esp
  5514ff:	4d                   	dec    ebp
  551500:	41                   	inc    ecx
  551501:	50                   	push   eax
  551502:	44                   	inc    esp
  551503:	49                   	dec    ecx
  551504:	52                   	push   edx
  551505:	00 00                	add    BYTE PTR [eax],al
  551507:	00 ff                	add    bh,bh
  551509:	ff                   	(bad)
  55150a:	ff                   	(bad)
  55150b:	ff 08                	dec    DWORD PTR [eax]
  55150d:	00 00                	add    BYTE PTR [eax],al
  55150f:	00 4d 55             	add    BYTE PTR [ebp+0x55],cl
  551512:	53                   	push   ebx
  551513:	49                   	dec    ecx
  551514:	43                   	inc    ebx
  551515:	44                   	inc    esp
  551516:	49                   	dec    ecx
  551517:	52                   	push   edx
  551518:	00 00                	add    BYTE PTR [eax],al
  55151a:	00 00                	add    BYTE PTR [eax],al
  55151c:	ff                   	(bad)
  55151d:	ff                   	(bad)
  55151e:	ff                   	(bad)
  55151f:	ff 0c 00             	dec    DWORD PTR [eax+eax*1]
  551522:	00 00                	add    BYTE PTR [eax],al
  551524:	53                   	push   ebx
  551525:	49                   	dec    ecx
  551526:	4d                   	dec    ebp
  551527:	46                   	inc    esi
  551528:	49                   	dec    ecx
  551529:	52                   	push   edx
  55152a:	53                   	push   ebx
  55152b:	54                   	push   esp
  55152c:	54                   	push   esp
  55152d:	49                   	dec    ecx
  55152e:	4d                   	dec    ebp
  55152f:	45                   	inc    ebp
  551530:	00 00                	add    BYTE PTR [eax],al
  551532:	00 00                	add    BYTE PTR [eax],al
  551534:	ff                   	(bad)
  551535:	ff                   	(bad)
  551536:	ff                   	(bad)
  551537:	ff 07                	inc    DWORD PTR [edi]
  551539:	00 00                	add    BYTE PTR [eax],al
  55153b:	00 48 41             	add    BYTE PTR [eax+0x41],cl
  55153e:	55                   	push   ebp
  55153f:	4e                   	dec    esi
  551540:	54                   	push   esp
  551541:	45                   	inc    ebp
  551542:	44                   	inc    esp
  551543:	00 ff                	add    bh,bh
  551545:	ff                   	(bad)
  551546:	ff                   	(bad)
  551547:	ff 0a                	dec    DWORD PTR [edx]
  551549:	00 00                	add    BYTE PTR [eax],al
  55154b:	00 2f                	add    BYTE PTR [edi],ch
  55154d:	46                   	inc    esi
  55154e:	49                   	dec    ecx
  55154f:	52                   	push   edx
  551550:	53                   	push   ebx
  551551:	54                   	push   esp
  551552:	54                   	push   esp
  551553:	49                   	dec    ecx
  551554:	4d                   	dec    ebp
  551555:	45                   	inc    ebp
  551556:	00 00                	add    BYTE PTR [eax],al
  551558:	ff                   	(bad)
  551559:	ff                   	(bad)
  55155a:	ff                   	(bad)
  55155b:	ff 0a                	dec    DWORD PTR [edx]
  55155d:	00 00                	add    BYTE PTR [eax],al
  55155f:	00 48 49             	add    BYTE PTR [eax+0x49],cl
  551562:	47                   	inc    edi
  551563:	48                   	dec    eax
  551564:	53                   	push   ebx
  551565:	43                   	inc    ebx
  551566:	4f                   	dec    edi
  551567:	52                   	push   edx
  551568:	45                   	inc    ebp
  551569:	53                   	push   ebx
  55156a:	00 00                	add    BYTE PTR [eax],al
  55156c:	ff                   	(bad)
  55156d:	ff                   	(bad)
  55156e:	ff                   	(bad)
  55156f:	ff 04 00             	inc    DWORD PTR [eax+eax*1]
  551572:	00 00                	add    BYTE PTR [eax],al
  551574:	6e                   	outs   dx,BYTE PTR ds:[esi]
  551575:	61                   	popa
  551576:	6d                   	ins    DWORD PTR es:[edi],dx
  551577:	65 00 00             	add    BYTE PTR gs:[eax],al
  55157a:	00 00                	add    BYTE PTR [eax],al
  55157c:	55                   	push   ebp
  55157d:	8b ec                	mov    ebp,esp
  55157f:	33 c9                	xor    ecx,ecx
  551581:	51                   	push   ecx
  551582:	51                   	push   ecx
  551583:	51                   	push   ecx
  551584:	51                   	push   ecx
  551585:	51                   	push   ecx
  551586:	51                   	push   ecx
  551587:	51                   	push   ecx
  551588:	51                   	push   ecx
  551589:	53                   	push   ebx
  55158a:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55158d:	33 c0                	xor    eax,eax
  55158f:	55                   	push   ebp
  551590:	68 90 16 55 00       	push   0x551690
  551595:	64 ff 30             	push   DWORD PTR fs:[eax]
  551598:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55159b:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5515a0:	8b 00                	mov    eax,DWORD PTR [eax]
  5515a2:	8b 90 10 01 00 00    	mov    edx,DWORD PTR [eax+0x110]
  5515a8:	8d 45 f0             	lea    eax,[ebp-0x10]
  5515ab:	b9 a4 16 55 00       	mov    ecx,0x5516a4
  5515b0:	e8 c7 2a eb ff       	call   0x40407c
  5515b5:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  5515b8:	b2 01                	mov    dl,0x1
  5515ba:	a1 54 c5 45 00       	mov    eax,ds:0x45c554
  5515bf:	e8 38 b0 f0 ff       	call   0x45c5fc
  5515c4:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  5515c7:	33 c0                	xor    eax,eax
  5515c9:	55                   	push   ebp
  5515ca:	68 6e 16 55 00       	push   0x55166e
  5515cf:	64 ff 30             	push   DWORD PTR fs:[eax]
  5515d2:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  5515d5:	33 c0                	xor    eax,eax
  5515d7:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  5515da:	6a 00                	push   0x0
  5515dc:	8d 55 ec             	lea    edx,[ebp-0x14]
  5515df:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  5515e2:	e8 f1 85 eb ff       	call   0x409bd8
  5515e7:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
  5515ea:	ba c0 16 55 00       	mov    edx,0x5516c0
  5515ef:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5515f2:	8b 18                	mov    ebx,DWORD PTR [eax]
  5515f4:	ff 53 08             	call   DWORD PTR [ebx+0x8]
  5515f7:	8b d8                	mov    ebx,eax
  5515f9:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  5515fc:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5515ff:	e8 2c 04 00 00       	call   0x551a30
  551604:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
  551607:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  55160a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55160d:	e8 1e 04 00 00       	call   0x551a30
  551612:	83 c0 08             	add    eax,0x8
  551615:	50                   	push   eax
  551616:	6a 00                	push   0x0
  551618:	8d 45 e8             	lea    eax,[ebp-0x18]
  55161b:	50                   	push   eax
  55161c:	8d 55 e0             	lea    edx,[ebp-0x20]
  55161f:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  551622:	e8 b1 85 eb ff       	call   0x409bd8
  551627:	8b 4d e0             	mov    ecx,DWORD PTR [ebp-0x20]
  55162a:	8d 45 e4             	lea    eax,[ebp-0x1c]
  55162d:	ba d4 16 55 00       	mov    edx,0x5516d4
  551632:	e8 45 2a eb ff       	call   0x40407c
  551637:	8b 4d e4             	mov    ecx,DWORD PTR [ebp-0x1c]
  55163a:	ba c0 16 55 00       	mov    edx,0x5516c0
  55163f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  551642:	8b 18                	mov    ebx,DWORD PTR [eax]
  551644:	ff 13                	call   DWORD PTR [ebx]
  551646:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  551649:	58                   	pop    eax
  55164a:	e8 b5 27 eb ff       	call   0x403e04
  55164f:	ff 45 f4             	inc    DWORD PTR [ebp-0xc]
  551652:	83 7d f4 0b          	cmp    DWORD PTR [ebp-0xc],0xb
  551656:	75 82                	jne    0x5515da
  551658:	33 c0                	xor    eax,eax
  55165a:	5a                   	pop    edx
  55165b:	59                   	pop    ecx
  55165c:	59                   	pop    ecx
  55165d:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  551660:	68 75 16 55 00       	push   0x551675
  551665:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  551668:	e8 27 1a eb ff       	call   0x403094
  55166d:	c3                   	ret
  55166e:	e9 81 21 eb ff       	jmp    0x4037f4
  551673:	eb f0                	jmp    0x551665
  551675:	33 c0                	xor    eax,eax
  551677:	5a                   	pop    edx
  551678:	59                   	pop    ecx
  551679:	59                   	pop    ecx
  55167a:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55167d:	68 97 16 55 00       	push   0x551697
  551682:	8d 45 e0             	lea    eax,[ebp-0x20]
  551685:	ba 05 00 00 00       	mov    edx,0x5
  55168a:	e8 45 27 eb ff       	call   0x403dd4
  55168f:	c3                   	ret
  551690:	e9 5f 21 eb ff       	jmp    0x4037f4
  551695:	eb eb                	jmp    0x551682
  551697:	5b                   	pop    ebx
  551698:	8b e5                	mov    esp,ebp
  55169a:	5d                   	pop    ebp
  55169b:	c3                   	ret
  55169c:	ff                   	(bad)
  55169d:	ff                   	(bad)
  55169e:	ff                   	(bad)
  55169f:	ff 11                	call   DWORD PTR [ecx]
  5516a1:	00 00                	add    BYTE PTR [eax],al
  5516a3:	00 73 65             	add    BYTE PTR [ebx+0x65],dh
  5516a6:	74 74                	je     0x55171c
  5516a8:	69 6e 67 73 5c 6d 65 	imul   ebp,DWORD PTR [esi+0x67],0x656d5c73
  5516af:	6e                   	outs   dx,BYTE PTR ds:[esi]
  5516b0:	75 2e                	jne    0x5516e0
  5516b2:	69 6e 69 00 00 00 ff 	imul   ebp,DWORD PTR [esi+0x69],0xff000000
  5516b9:	ff                   	(bad)
  5516ba:	ff                   	(bad)
  5516bb:	ff 0a                	dec    DWORD PTR [edx]
  5516bd:	00 00                	add    BYTE PTR [eax],al
  5516bf:	00 48 49             	add    BYTE PTR [eax+0x49],cl
  5516c2:	47                   	inc    edi
  5516c3:	48                   	dec    eax
  5516c4:	53                   	push   ebx
  5516c5:	43                   	inc    ebx
  5516c6:	4f                   	dec    edi
  5516c7:	52                   	push   edx
  5516c8:	45                   	inc    ebp
  5516c9:	53                   	push   ebx
  5516ca:	00 00                	add    BYTE PTR [eax],al
  5516cc:	ff                   	(bad)
  5516cd:	ff                   	(bad)
  5516ce:	ff                   	(bad)
  5516cf:	ff 04 00             	inc    DWORD PTR [eax+eax*1]
  5516d2:	00 00                	add    BYTE PTR [eax],al
  5516d4:	6e                   	outs   dx,BYTE PTR ds:[esi]
  5516d5:	61                   	popa
  5516d6:	6d                   	ins    DWORD PTR es:[edi],dx
  5516d7:	65 00 00             	add    BYTE PTR gs:[eax],al
  5516da:	00 00                	add    BYTE PTR [eax],al
  5516dc:	55                   	push   ebp
  5516dd:	8b ec                	mov    ebp,esp
  5516df:	83 c4 e8             	add    esp,0xffffffe8
  5516e2:	53                   	push   ebx
  5516e3:	33 c9                	xor    ecx,ecx
  5516e5:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
  5516e8:	89 4d e8             	mov    DWORD PTR [ebp-0x18],ecx
  5516eb:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  5516ee:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5516f1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5516f4:	33 c0                	xor    eax,eax
  5516f6:	55                   	push   ebp
  5516f7:	68 a3 17 55 00       	push   0x5517a3
  5516fc:	64 ff 30             	push   DWORD PTR fs:[eax]
  5516ff:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  551702:	33 c0                	xor    eax,eax
  551704:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  551707:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  55170a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55170d:	e8 1e 03 00 00       	call   0x551a30
  551712:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  551715:	50                   	push   eax
  551716:	8d 55 f0             	lea    edx,[ebp-0x10]
  551719:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55171c:	e8 b7 84 eb ff       	call   0x409bd8
  551721:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  551724:	ba b8 17 55 00       	mov    edx,0x5517b8
  551729:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55172c:	8b 18                	mov    ebx,DWORD PTR [eax]
  55172e:	ff 53 0c             	call   DWORD PTR [ebx+0xc]
  551731:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  551734:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551737:	e8 f4 02 00 00       	call   0x551a30
  55173c:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  55173f:	50                   	push   eax
  551740:	8d 55 e8             	lea    edx,[ebp-0x18]
  551743:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  551746:	e8 8d 84 eb ff       	call   0x409bd8
  55174b:	8b 4d e8             	mov    ecx,DWORD PTR [ebp-0x18]
  55174e:	8d 45 ec             	lea    eax,[ebp-0x14]
  551751:	ba cc 17 55 00       	mov    edx,0x5517cc
  551756:	e8 21 29 eb ff       	call   0x40407c
  55175b:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
  55175e:	ba b8 17 55 00       	mov    edx,0x5517b8
  551763:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  551766:	8b 18                	mov    ebx,DWORD PTR [eax]
  551768:	ff 53 04             	call   DWORD PTR [ebx+0x4]
  55176b:	ff 45 f4             	inc    DWORD PTR [ebp-0xc]
  55176e:	83 7d f4 0b          	cmp    DWORD PTR [ebp-0xc],0xb
  551772:	75 93                	jne    0x551707
  551774:	6a 01                	push   0x1
  551776:	b9 dc 17 55 00       	mov    ecx,0x5517dc
  55177b:	ba ec 17 55 00       	mov    edx,0x5517ec
  551780:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  551783:	8b 18                	mov    ebx,DWORD PTR [eax]
  551785:	ff 53 0c             	call   DWORD PTR [ebx+0xc]
  551788:	33 c0                	xor    eax,eax
  55178a:	5a                   	pop    edx
  55178b:	59                   	pop    ecx
  55178c:	59                   	pop    ecx
  55178d:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  551790:	68 aa 17 55 00       	push   0x5517aa
  551795:	8d 45 e8             	lea    eax,[ebp-0x18]
  551798:	ba 03 00 00 00       	mov    edx,0x3
  55179d:	e8 32 26 eb ff       	call   0x403dd4
  5517a2:	c3                   	ret
  5517a3:	e9 4c 20 eb ff       	jmp    0x4037f4
  5517a8:	eb eb                	jmp    0x551795
  5517aa:	5b                   	pop    ebx
  5517ab:	8b e5                	mov    esp,ebp
  5517ad:	5d                   	pop    ebp
  5517ae:	c3                   	ret
  5517af:	00 ff                	add    bh,bh
  5517b1:	ff                   	(bad)
  5517b2:	ff                   	(bad)
  5517b3:	ff 0a                	dec    DWORD PTR [edx]
  5517b5:	00 00                	add    BYTE PTR [eax],al
  5517b7:	00 48 49             	add    BYTE PTR [eax+0x49],cl
  5517ba:	47                   	inc    edi
  5517bb:	48                   	dec    eax
  5517bc:	53                   	push   ebx
  5517bd:	43                   	inc    ebx
  5517be:	4f                   	dec    edi
  5517bf:	52                   	push   edx
  5517c0:	45                   	inc    ebp
  5517c1:	53                   	push   ebx
  5517c2:	00 00                	add    BYTE PTR [eax],al
  5517c4:	ff                   	(bad)
  5517c5:	ff                   	(bad)
  5517c6:	ff                   	(bad)
  5517c7:	ff 04 00             	inc    DWORD PTR [eax+eax*1]
  5517ca:	00 00                	add    BYTE PTR [eax],al
  5517cc:	6e                   	outs   dx,BYTE PTR ds:[esi]
  5517cd:	61                   	popa
  5517ce:	6d                   	ins    DWORD PTR es:[edi],dx
  5517cf:	65 00 00             	add    BYTE PTR gs:[eax],al
  5517d2:	00 00                	add    BYTE PTR [eax],al
  5517d4:	ff                   	(bad)
  5517d5:	ff                   	(bad)
  5517d6:	ff                   	(bad)
  5517d7:	ff 07                	inc    DWORD PTR [edi]
  5517d9:	00 00                	add    BYTE PTR [eax],al
  5517db:	00 48 41             	add    BYTE PTR [eax+0x41],cl
  5517de:	55                   	push   ebp
  5517df:	4e                   	dec    esi
  5517e0:	54                   	push   esp
  5517e1:	45                   	inc    ebp
  5517e2:	44                   	inc    esp
  5517e3:	00 ff                	add    bh,bh
  5517e5:	ff                   	(bad)
  5517e6:	ff                   	(bad)
  5517e7:	ff 07                	inc    DWORD PTR [edi]
  5517e9:	00 00                	add    BYTE PTR [eax],al
  5517eb:	00 47 45             	add    BYTE PTR [edi+0x45],al
  5517ee:	4e                   	dec    esi
  5517ef:	45                   	inc    ebp
  5517f0:	52                   	push   edx
  5517f1:	41                   	inc    ecx
  5517f2:	4c                   	dec    esp
  5517f3:	00 55 8b             	add    BYTE PTR [ebp-0x75],dl
  5517f6:	ec                   	in     al,dx
  5517f7:	81 c4 f0 fe ff ff    	add    esp,0xfffffef0
  5517fd:	53                   	push   ebx
  5517fe:	33 c9                	xor    ecx,ecx
  551800:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  551803:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  551806:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  551809:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55180c:	33 c0                	xor    eax,eax
  55180e:	55                   	push   ebp
  55180f:	68 13 19 55 00       	push   0x551913
  551814:	64 ff 30             	push   DWORD PTR fs:[eax]
  551817:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55181a:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  551820:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551823:	8b 00                	mov    eax,DWORD PTR [eax]
  551825:	e8 b6 17 eb ff       	call   0x402fe0
  55182a:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  551830:	8d 45 f0             	lea    eax,[ebp-0x10]
  551833:	e8 9c 27 eb ff       	call   0x403fd4
  551838:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  55183b:	68 28 19 55 00       	push   0x551928
  551840:	68 34 19 55 00       	push   0x551934
  551845:	8d 45 f4             	lea    eax,[ebp-0xc]
  551848:	ba 03 00 00 00       	mov    edx,0x3
  55184d:	e8 9e 28 eb ff       	call   0x4040f0
  551852:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  551855:	50                   	push   eax
  551856:	e8 31 29 f5 ff       	call   0x4a418c
  55185b:	8a 0d 44 19 55 00    	mov    cl,BYTE PTR ds:0x551944
  551861:	5a                   	pop    edx
  551862:	e8 51 30 f5 ff       	call   0x4a48b8
  551867:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55186a:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
  55186d:	50                   	push   eax
  55186e:	b9 50 19 55 00       	mov    ecx,0x551950
  551873:	ba 68 19 55 00       	mov    edx,0x551968
  551878:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55187b:	8b 18                	mov    ebx,DWORD PTR [eax]
  55187d:	ff 53 0c             	call   DWORD PTR [ebx+0xc]
  551880:	a1 08 21 57 00       	mov    eax,ds:0x572108
  551885:	8b 00                	mov    eax,DWORD PTR [eax]
  551887:	0f b6 80 00 01 00 00 	movzx  eax,BYTE PTR [eax+0x100]
  55188e:	50                   	push   eax
  55188f:	ba 68 19 55 00       	mov    edx,0x551968
  551894:	b9 78 19 55 00       	mov    ecx,0x551978
  551899:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55189c:	8b 18                	mov    ebx,DWORD PTR [eax]
  55189e:	ff 53 0c             	call   DWORD PTR [ebx+0xc]
  5518a1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5518a4:	0f b6 40 38          	movzx  eax,BYTE PTR [eax+0x38]
  5518a8:	50                   	push   eax
  5518a9:	ba 68 19 55 00       	mov    edx,0x551968
  5518ae:	b9 8c 19 55 00       	mov    ecx,0x55198c
  5518b3:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5518b6:	8b 18                	mov    ebx,DWORD PTR [eax]
  5518b8:	ff 53 0c             	call   DWORD PTR [ebx+0xc]
  5518bb:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5518c0:	8b 00                	mov    eax,DWORD PTR [eax]
  5518c2:	80 b8 00 01 00 00 00 	cmp    BYTE PTR [eax+0x100],0x0
  5518c9:	74 16                	je     0x5518e1
  5518cb:	6a 28                	push   0x28
  5518cd:	ba 68 19 55 00       	mov    edx,0x551968
  5518d2:	b9 9c 19 55 00       	mov    ecx,0x55199c
  5518d7:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5518da:	8b 18                	mov    ebx,DWORD PTR [eax]
  5518dc:	ff 53 0c             	call   DWORD PTR [ebx+0xc]
  5518df:	eb 17                	jmp    0x5518f8
  5518e1:	68 ff 00 00 00       	push   0xff
  5518e6:	ba 68 19 55 00       	mov    edx,0x551968
  5518eb:	b9 9c 19 55 00       	mov    ecx,0x55199c
  5518f0:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5518f3:	8b 18                	mov    ebx,DWORD PTR [eax]
  5518f5:	ff 53 0c             	call   DWORD PTR [ebx+0xc]
  5518f8:	33 c0                	xor    eax,eax
  5518fa:	5a                   	pop    edx
  5518fb:	59                   	pop    ecx
  5518fc:	59                   	pop    ecx
  5518fd:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  551900:	68 1a 19 55 00       	push   0x55191a
  551905:	8d 45 f0             	lea    eax,[ebp-0x10]
  551908:	ba 02 00 00 00       	mov    edx,0x2
  55190d:	e8 c2 24 eb ff       	call   0x403dd4
  551912:	c3                   	ret
  551913:	e9 dc 1e eb ff       	jmp    0x4037f4
  551918:	eb eb                	jmp    0x551905
  55191a:	5b                   	pop    ebx
  55191b:	8b e5                	mov    esp,ebp
  55191d:	5d                   	pop    ebp
  55191e:	c3                   	ret
  55191f:	00 ff                	add    bh,bh
  551921:	ff                   	(bad)
  551922:	ff                   	(bad)
  551923:	ff 01                	inc    DWORD PTR [ecx]
  551925:	00 00                	add    BYTE PTR [eax],al
  551927:	00 2e                	add    BYTE PTR [esi],ch
  551929:	00 00                	add    BYTE PTR [eax],al
  55192b:	00 ff                	add    bh,bh
  55192d:	ff                   	(bad)
  55192e:	ff                   	(bad)
  55192f:	ff 0c 00             	dec    DWORD PTR [eax+eax*1]
  551932:	00 00                	add    BYTE PTR [eax],al
  551934:	44                   	inc    esp
  551935:	6f                   	outs   dx,DWORD PTR ds:[esi]
  551936:	53                   	push   ebx
  551937:	61                   	popa
  551938:	76 65                	jbe    0x55199f
  55193a:	54                   	push   esp
  55193b:	6f                   	outs   dx,DWORD PTR ds:[esi]
  55193c:	46                   	inc    esi
  55193d:	69 6c 65 00 00 00 00 	imul   ebp,DWORD PTR [ebp+eiz*2+0x0],0x0
  551944:	00 
  551945:	00 00                	add    BYTE PTR [eax],al
  551947:	00 ff                	add    bh,bh
  551949:	ff                   	(bad)
  55194a:	ff                   	(bad)
  55194b:	ff 0d 00 00 00 43    	dec    DWORD PTR ds:0x43000000
  551951:	55                   	push   ebp
  551952:	52                   	push   edx
  551953:	52                   	push   edx
  551954:	45                   	inc    ebp
  551955:	4e                   	dec    esi
  551956:	54                   	push   esp
  551957:	50                   	push   eax
  551958:	4c                   	dec    esp
  551959:	41                   	inc    ecx
  55195a:	59                   	pop    ecx
  55195b:	45                   	inc    ebp
  55195c:	52                   	push   edx
  55195d:	00 00                	add    BYTE PTR [eax],al
  55195f:	00 ff                	add    bh,bh
  551961:	ff                   	(bad)
  551962:	ff                   	(bad)
  551963:	ff 07                	inc    DWORD PTR [edi]
  551965:	00 00                	add    BYTE PTR [eax],al
  551967:	00 47 45             	add    BYTE PTR [edi+0x45],al
  55196a:	4e                   	dec    esi
  55196b:	45                   	inc    ebp
  55196c:	52                   	push   edx
  55196d:	41                   	inc    ecx
  55196e:	4c                   	dec    esp
  55196f:	00 ff                	add    bh,bh
  551971:	ff                   	(bad)
  551972:	ff                   	(bad)
  551973:	ff 09                	dec    DWORD PTR [ecx]
  551975:	00 00                	add    BYTE PTR [eax],al
  551977:	00 50 52             	add    BYTE PTR [eax+0x52],dl
  55197a:	45                   	inc    ebp
  55197b:	56                   	push   esi
  55197c:	53                   	push   ebx
  55197d:	54                   	push   esp
  55197e:	41                   	inc    ecx
  55197f:	54                   	push   esp
  551980:	45                   	inc    ebp
  551981:	00 00                	add    BYTE PTR [eax],al
  551983:	00 ff                	add    bh,bh
  551985:	ff                   	(bad)
  551986:	ff                   	(bad)
  551987:	ff 07                	inc    DWORD PTR [edi]
  551989:	00 00                	add    BYTE PTR [eax],al
  55198b:	00 48 41             	add    BYTE PTR [eax+0x41],cl
  55198e:	55                   	push   ebp
  55198f:	4e                   	dec    esi
  551990:	54                   	push   esp
  551991:	45                   	inc    ebp
  551992:	44                   	inc    esp
  551993:	00 ff                	add    bh,bh
  551995:	ff                   	(bad)
  551996:	ff                   	(bad)
  551997:	ff 08                	dec    DWORD PTR [eax]
  551999:	00 00                	add    BYTE PTR [eax],al
  55199b:	00 45 58             	add    BYTE PTR [ebp+0x58],al
  55199e:	49                   	dec    ecx
  55199f:	54                   	push   esp
  5519a0:	43                   	inc    ebx
  5519a1:	4f                   	dec    edi
  5519a2:	44                   	inc    esp
  5519a3:	45                   	inc    ebp
  5519a4:	00 00                	add    BYTE PTR [eax],al
  5519a6:	00 00                	add    BYTE PTR [eax],al
  5519a8:	55                   	push   ebp
  5519a9:	8b ec                	mov    ebp,esp
  5519ab:	51                   	push   ecx
  5519ac:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5519af:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5519b2:	8a 48 08             	mov    cl,BYTE PTR [eax+0x8]
  5519b5:	ba f8 19 55 00       	mov    edx,0x5519f8
  5519ba:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5519bd:	e8 fe 25 f5 ff       	call   0x4a3fc0
  5519c2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5519c5:	33 c9                	xor    ecx,ecx
  5519c7:	8a 48 09             	mov    cl,BYTE PTR [eax+0x9]
  5519ca:	ba 0c 1a 55 00       	mov    edx,0x551a0c
  5519cf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5519d2:	e8 1d 25 f5 ff       	call   0x4a3ef4
  5519d7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5519da:	8b 48 28             	mov    ecx,DWORD PTR [eax+0x28]
  5519dd:	ba 20 1a 55 00       	mov    edx,0x551a20
  5519e2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5519e5:	e8 0a 25 f5 ff       	call   0x4a3ef4
  5519ea:	59                   	pop    ecx
  5519eb:	5d                   	pop    ebp
  5519ec:	c3                   	ret
  5519ed:	00 00                	add    BYTE PTR [eax],al
  5519ef:	00 ff                	add    bh,bh
  5519f1:	ff                   	(bad)
  5519f2:	ff                   	(bad)
  5519f3:	ff 0a                	dec    DWORD PTR [edx]
  5519f5:	00 00                	add    BYTE PTR [eax],al
  5519f7:	00 46 46             	add    BYTE PTR [esi+0x46],al
  5519fa:	69 72 73 74 54 69 6d 	imul   esi,DWORD PTR [edx+0x73],0x6d695474
  551a01:	65 00 00             	add    BYTE PTR gs:[eax],al
  551a04:	ff                   	(bad)
  551a05:	ff                   	(bad)
  551a06:	ff                   	(bad)
  551a07:	ff 09                	dec    DWORD PTR [ecx]
  551a09:	00 00                	add    BYTE PTR [eax],al
  551a0b:	00 46 50             	add    BYTE PTR [esi+0x50],al
  551a0e:	72 65                	jb     0x551a75
  551a10:	76 69                	jbe    0x551a7b
  551a12:	6f                   	outs   dx,DWORD PTR ds:[esi]
  551a13:	75 73                	jne    0x551a88
  551a15:	00 00                	add    BYTE PTR [eax],al
  551a17:	00 ff                	add    bh,bh
  551a19:	ff                   	(bad)
  551a1a:	ff                   	(bad)
  551a1b:	ff 0e                	dec    DWORD PTR [esi]
  551a1d:	00 00                	add    BYTE PTR [eax],al
  551a1f:	00 46 43             	add    BYTE PTR [esi+0x43],al
  551a22:	75 72                	jne    0x551a96
  551a24:	72 65                	jb     0x551a8b
  551a26:	6e                   	outs   dx,BYTE PTR ds:[esi]
  551a27:	74 50                	je     0x551a79
  551a29:	6c                   	ins    BYTE PTR es:[edi],dx
  551a2a:	61                   	popa
  551a2b:	79 65                	jns    0x551a92
  551a2d:	72 00                	jb     0x551a2f
  551a2f:	00 55 8b             	add    BYTE PTR [ebp-0x75],dl
  551a32:	ec                   	in     al,dx
  551a33:	83 c4 f4             	add    esp,0xfffffff4
  551a36:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  551a39:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  551a3c:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  551a3f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551a42:	8b 40 2c             	mov    eax,DWORD PTR [eax+0x2c]
  551a45:	e8 3a 09 ec ff       	call   0x412384
  551a4a:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  551a4d:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  551a50:	8b e5                	mov    esp,ebp
  551a52:	5d                   	pop    ebp
  551a53:	c3                   	ret
  551a54:	55                   	push   ebp
  551a55:	8b ec                	mov    ebp,esp
  551a57:	83 c4 f4             	add    esp,0xfffffff4
  551a5a:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  551a5d:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  551a60:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  551a63:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  551a66:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551a69:	8b 40 2c             	mov    eax,DWORD PTR [eax+0x2c]
  551a6c:	e8 13 09 ec ff       	call   0x412384
  551a71:	83 c0 08             	add    eax,0x8
  551a74:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  551a77:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  551a7a:	e8 85 23 eb ff       	call   0x403e04
  551a7f:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  551a82:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551a85:	8b 40 2c             	mov    eax,DWORD PTR [eax+0x2c]
  551a88:	e8 f7 08 ec ff       	call   0x412384
  551a8d:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  551a90:	8b 52 04             	mov    edx,DWORD PTR [edx+0x4]
  551a93:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  551a96:	8b e5                	mov    esp,ebp
  551a98:	5d                   	pop    ebp
  551a99:	c3                   	ret
  551a9a:	8b c0                	mov    eax,eax
  551a9c:	55                   	push   ebp
  551a9d:	8b ec                	mov    ebp,esp
  551a9f:	83 c4 e8             	add    esp,0xffffffe8
  551aa2:	53                   	push   ebx
  551aa3:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  551aa6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  551aa9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  551aac:	c6 45 f3 01          	mov    BYTE PTR [ebp-0xd],0x1
  551ab0:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  551ab3:	c7 00 ff ff ff ff    	mov    DWORD PTR [eax],0xffffffff
  551ab9:	b2 01                	mov    dl,0x1
  551abb:	a1 8c 0d 55 00       	mov    eax,ds:0x550d8c
  551ac0:	e8 9f 15 eb ff       	call   0x403064
  551ac5:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  551ac8:	33 c0                	xor    eax,eax
  551aca:	55                   	push   ebp
  551acb:	68 c8 1b 55 00       	push   0x551bc8
  551ad0:	64 ff 30             	push   DWORD PTR fs:[eax]
  551ad3:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  551ad6:	ba 09 00 00 00       	mov    edx,0x9
  551adb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551ade:	e8 4d ff ff ff       	call   0x551a30
  551ae3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  551ae6:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  551ae9:	3b 42 04             	cmp    eax,DWORD PTR [edx+0x4]
  551aec:	7e 09                	jle    0x551af7
  551aee:	c6 45 f3 00          	mov    BYTE PTR [ebp-0xd],0x0
  551af2:	e9 bb 00 00 00       	jmp    0x551bb2
  551af7:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  551afa:	ba 09 00 00 00       	mov    edx,0x9
  551aff:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551b02:	e8 4d ff ff ff       	call   0x551a54
  551b07:	c7 45 e8 08 00 00 00 	mov    DWORD PTR [ebp-0x18],0x8
  551b0e:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  551b11:	83 c2 01             	add    edx,0x1
  551b14:	71 05                	jno    0x551b1b
  551b16:	e8 b9 14 eb ff       	call   0x402fd4
  551b1b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551b1e:	e8 0d ff ff ff       	call   0x551a30
  551b23:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
  551b26:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  551b29:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551b2c:	e8 ff fe ff ff       	call   0x551a30
  551b31:	3b 58 04             	cmp    ebx,DWORD PTR [eax+0x4]
  551b34:	7c 6f                	jl     0x551ba5
  551b36:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  551b39:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551b3c:	e8 ef fe ff ff       	call   0x551a30
  551b41:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  551b44:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  551b47:	83 c0 08             	add    eax,0x8
  551b4a:	e8 b5 22 eb ff       	call   0x403e04
  551b4f:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  551b52:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551b55:	e8 d6 fe ff ff       	call   0x551a30
  551b5a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  551b5d:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
  551b60:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  551b63:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  551b66:	83 c2 01             	add    edx,0x1
  551b69:	71 05                	jno    0x551b70
  551b6b:	e8 64 14 eb ff       	call   0x402fd4
  551b70:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551b73:	e8 b8 fe ff ff       	call   0x551a30
  551b78:	8b c8                	mov    ecx,eax
  551b7a:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  551b7d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551b80:	e8 cf fe ff ff       	call   0x551a54
  551b85:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  551b88:	83 c2 01             	add    edx,0x1
  551b8b:	71 05                	jno    0x551b92
  551b8d:	e8 42 14 eb ff       	call   0x402fd4
  551b92:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
  551b95:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551b98:	e8 b7 fe ff ff       	call   0x551a54
  551b9d:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  551ba0:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  551ba3:	89 10                	mov    DWORD PTR [eax],edx
  551ba5:	ff 4d e8             	dec    DWORD PTR [ebp-0x18]
  551ba8:	83 7d e8 ff          	cmp    DWORD PTR [ebp-0x18],0xffffffff
  551bac:	0f 85 5c ff ff ff    	jne    0x551b0e
  551bb2:	33 c0                	xor    eax,eax
  551bb4:	5a                   	pop    edx
  551bb5:	59                   	pop    ecx
  551bb6:	59                   	pop    ecx
  551bb7:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  551bba:	68 cf 1b 55 00       	push   0x551bcf
  551bbf:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  551bc2:	e8 cd 14 eb ff       	call   0x403094
  551bc7:	c3                   	ret
  551bc8:	e9 27 1c eb ff       	jmp    0x4037f4
  551bcd:	eb f0                	jmp    0x551bbf
  551bcf:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  551bd2:	8b 00                	mov    eax,DWORD PTR [eax]
  551bd4:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  551bd7:	89 42 30             	mov    DWORD PTR [edx+0x30],eax
  551bda:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  551bdd:	83 38 00             	cmp    DWORD PTR [eax],0x0
  551be0:	7d 08                	jge    0x551bea
  551be2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  551be5:	e8 92 f9 ff ff       	call   0x55157c
  551bea:	8a 45 f3             	mov    al,BYTE PTR [ebp-0xd]
  551bed:	5b                   	pop    ebx
  551bee:	8b e5                	mov    esp,ebp
  551bf0:	5d                   	pop    ebp
  551bf1:	c3                   	ret
  551bf2:	8b c0                	mov    eax,eax
  551bf4:	55                   	push   ebp
  551bf5:	8b ec                	mov    ebp,esp
  551bf7:	33 c0                	xor    eax,eax
  551bf9:	55                   	push   ebp
  551bfa:	68 19 1c 55 00       	push   0x551c19
  551bff:	64 ff 30             	push   DWORD PTR fs:[eax]
  551c02:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  551c05:	ff 05 3c 48 57 00    	inc    DWORD PTR ds:0x57483c
  551c0b:	33 c0                	xor    eax,eax
  551c0d:	5a                   	pop    edx
  551c0e:	59                   	pop    ecx
  551c0f:	59                   	pop    ecx
  551c10:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  551c13:	68 20 1c 55 00       	push   0x551c20
  551c18:	c3                   	ret
  551c19:	e9 d6 1b eb ff       	jmp    0x4037f4
  551c1e:	eb f8                	jmp    0x551c18
  551c20:	5d                   	pop    ebp
  551c21:	c3                   	ret
  551c22:	8b c0                	mov    eax,eax
  551c24:	83 2d 3c 48 57 00 01 	sub    DWORD PTR ds:0x57483c,0x1
  551c2b:	c3                   	ret
  551c2c:	78 1c                	js     0x551c4a
  551c2e:	55                   	push   ebp
  551c4b:	00 90 1c 55 00 10    	add    BYTE PTR [eax+0x1000551c],dl
  551c51:	00 00                	add    BYTE PTR [eax],al
  551c53:	00 bc 3a 4a 00 b8 32 	add    BYTE PTR [edx+edi*1+0x32b8004a],bh
  551c5a:	40                   	inc    eax
  551c5b:	00 c4                	add    ah,al
  551c5d:	32 40 00             	xor    al,BYTE PTR [eax+0x0]
