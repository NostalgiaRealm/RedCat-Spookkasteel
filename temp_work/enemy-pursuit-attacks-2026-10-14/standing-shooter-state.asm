
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0040a200 <.text+0x9200>:
  40a200:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40a206:	6a ff                	push   0xffffffff
  40a208:	68 d8 07 62 00       	push   0x6207d8
  40a20d:	50                   	push   eax
  40a20e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40a215:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  40a219:	83 ec 10             	sub    esp,0x10
  40a21c:	53                   	push   ebx
  40a21d:	56                   	push   esi
  40a21e:	57                   	push   edi
  40a21f:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  40a223:	57                   	push   edi
  40a224:	8b f1                	mov    esi,ecx
  40a226:	50                   	push   eax
  40a227:	e8 54 88 ff ff       	call   0x402a80
  40a22c:	8b c8                	mov    ecx,eax
  40a22e:	e8 ed 8a ff ff       	call   0x402d20
  40a233:	8b ce                	mov    ecx,esi
  40a235:	e8 b6 8a ff ff       	call   0x402cf0
  40a23a:	33 db                	xor    ebx,ebx
  40a23c:	2b c3                	sub    eax,ebx
  40a23e:	0f 84 2c 01 00 00    	je     0x40a370
  40a244:	48                   	dec    eax
  40a245:	0f 84 cc 00 00 00    	je     0x40a317
  40a24b:	8a 4c 24 30          	mov    cl,BYTE PTR [esp+0x30]
  40a24f:	bf b4 e2 68 00       	mov    edi,0x68e2b4
  40a254:	88 4c 24 0c          	mov    BYTE PTR [esp+0xc],cl
  40a258:	83 c9 ff             	or     ecx,0xffffffff
  40a25b:	33 c0                	xor    eax,eax
  40a25d:	55                   	push   ebp
  40a25e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40a260:	f7 d1                	not    ecx
  40a262:	49                   	dec    ecx
  40a263:	6a 01                	push   0x1
  40a265:	8b e9                	mov    ebp,ecx
  40a267:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  40a26b:	55                   	push   ebp
  40a26c:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  40a270:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  40a274:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  40a278:	e8 c3 76 ff ff       	call   0x401940
  40a27d:	84 c0                	test   al,al
  40a27f:	74 24                	je     0x40a2a5
  40a281:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  40a285:	8b cd                	mov    ecx,ebp
  40a287:	8b d1                	mov    edx,ecx
  40a289:	be b4 e2 68 00       	mov    esi,0x68e2b4
  40a28e:	c1 e9 02             	shr    ecx,0x2
  40a291:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40a293:	8b ca                	mov    ecx,edx
  40a295:	83 e1 03             	and    ecx,0x3
  40a298:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  40a29a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  40a29e:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  40a2a2:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  40a2a5:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  40a2a9:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  40a2ad:	51                   	push   ecx
  40a2ae:	68 8a 00 00 00       	push   0x8a
  40a2b3:	68 48 e2 68 00       	push   0x68e248
  40a2b8:	68 d0 d2 68 00       	push   0x68d2d0
  40a2bd:	e8 2e 65 19 00       	call   0x5a07f0
  40a2c2:	ff d0                	call   eax
  40a2c4:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  40a2c8:	83 c4 10             	add    esp,0x10
  40a2cb:	3b c3                	cmp    eax,ebx
  40a2cd:	5d                   	pop    ebp
  40a2ce:	0f 84 dd 00 00 00    	je     0x40a3b1
  40a2d4:	8d 48 ff             	lea    ecx,[eax-0x1]
  40a2d7:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  40a2da:	3a c3                	cmp    al,bl
  40a2dc:	74 1c                	je     0x40a2fa
  40a2de:	3c ff                	cmp    al,0xff
  40a2e0:	74 18                	je     0x40a2fa
  40a2e2:	fe c8                	dec    al
  40a2e4:	5f                   	pop    edi
  40a2e5:	5e                   	pop    esi
  40a2e6:	88 01                	mov    BYTE PTR [ecx],al
  40a2e8:	5b                   	pop    ebx
  40a2e9:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40a2ed:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a2f4:	83 c4 1c             	add    esp,0x1c
  40a2f7:	c2 08 00             	ret    0x8
  40a2fa:	51                   	push   ecx
  40a2fb:	e8 f0 42 1f 00       	call   0x5fe5f0
  40a300:	83 c4 04             	add    esp,0x4
  40a303:	5f                   	pop    edi
  40a304:	5e                   	pop    esi
  40a305:	5b                   	pop    ebx
  40a306:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40a30a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a311:	83 c4 1c             	add    esp,0x1c
  40a314:	c2 08 00             	ret    0x8
  40a317:	8b ce                	mov    ecx,esi
  40a319:	e8 62 87 ff ff       	call   0x402a80
  40a31e:	8b c8                	mov    ecx,eax
  40a320:	e8 eb 89 ff ff       	call   0x402d10
  40a325:	84 c0                	test   al,al
  40a327:	0f 84 84 00 00 00    	je     0x40a3b1
  40a32d:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40a330:	57                   	push   edi
  40a331:	e8 fa 8b 01 00       	call   0x422f30
  40a336:	84 c0                	test   al,al
  40a338:	75 1b                	jne    0x40a355
  40a33a:	8b ce                	mov    ecx,esi
  40a33c:	e8 bf 89 ff ff       	call   0x402d00
  40a341:	5f                   	pop    edi
  40a342:	5e                   	pop    esi
  40a343:	5b                   	pop    ebx
  40a344:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40a348:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a34f:	83 c4 1c             	add    esp,0x1c
  40a352:	c2 08 00             	ret    0x8
  40a355:	8b 16                	mov    edx,DWORD PTR [esi]
  40a357:	8b ce                	mov    ecx,esi
  40a359:	ff 52 10             	call   DWORD PTR [edx+0x10]
  40a35c:	5f                   	pop    edi
  40a35d:	5e                   	pop    esi
  40a35e:	5b                   	pop    ebx
  40a35f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40a363:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a36a:	83 c4 1c             	add    esp,0x1c
  40a36d:	c2 08 00             	ret    0x8
  40a370:	8b ce                	mov    ecx,esi
  40a372:	e8 09 87 ff ff       	call   0x402a80
  40a377:	8b c8                	mov    ecx,eax
  40a379:	e8 92 89 ff ff       	call   0x402d10
  40a37e:	84 c0                	test   al,al
  40a380:	74 2f                	je     0x40a3b1
  40a382:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40a385:	57                   	push   edi
  40a386:	e8 a5 8b 01 00       	call   0x422f30
  40a38b:	84 c0                	test   al,al
  40a38d:	75 1b                	jne    0x40a3aa
  40a38f:	8b ce                	mov    ecx,esi
  40a391:	e8 6a 89 ff ff       	call   0x402d00
  40a396:	5f                   	pop    edi
  40a397:	5e                   	pop    esi
  40a398:	5b                   	pop    ebx
  40a399:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40a39d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a3a4:	83 c4 1c             	add    esp,0x1c
  40a3a7:	c2 08 00             	ret    0x8
  40a3aa:	8b 06                	mov    eax,DWORD PTR [esi]
  40a3ac:	8b ce                	mov    ecx,esi
  40a3ae:	ff 50 0c             	call   DWORD PTR [eax+0xc]
  40a3b1:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  40a3b5:	5f                   	pop    edi
  40a3b6:	5e                   	pop    esi
  40a3b7:	5b                   	pop    ebx
  40a3b8:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a3bf:	83 c4 1c             	add    esp,0x1c
  40a3c2:	c2 08 00             	ret    0x8
  40a3c5:	90                   	nop
  40a3c6:	90                   	nop
  40a3c7:	90                   	nop
  40a3c8:	90                   	nop
  40a3c9:	90                   	nop
  40a3ca:	90                   	nop
  40a3cb:	90                   	nop
  40a3cc:	90                   	nop
  40a3cd:	90                   	nop
  40a3ce:	90                   	nop
  40a3cf:	90                   	nop
  40a3d0:	6a ff                	push   0xffffffff
  40a3d2:	68 fb 07 62 00       	push   0x6207fb
  40a3d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40a3dd:	50                   	push   eax
  40a3de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40a3e5:	51                   	push   ecx
  40a3e6:	56                   	push   esi
  40a3e7:	8b f1                	mov    esi,ecx
  40a3e9:	6a 34                	push   0x34
  40a3eb:	e8 c5 fc 1f 00       	call   0x60a0b5
  40a3f0:	83 c4 04             	add    esp,0x4
  40a3f3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  40a3f7:	85 c0                	test   eax,eax
  40a3f9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  40a400:	00 
  40a401:	74 0d                	je     0x40a410
  40a403:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40a406:	51                   	push   ecx
  40a407:	8b c8                	mov    ecx,eax
  40a409:	e8 b2 00 00 00       	call   0x40a4c0
  40a40e:	eb 02                	jmp    0x40a412
  40a410:	33 c0                	xor    eax,eax
  40a412:	50                   	push   eax
  40a413:	6a 01                	push   0x1
  40a415:	8b ce                	mov    ecx,esi
  40a417:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  40a41e:	ff 
  40a41f:	e8 ec 85 ff ff       	call   0x402a10
  40a424:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  40a428:	5e                   	pop    esi
  40a429:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a430:	83 c4 10             	add    esp,0x10
  40a433:	c3                   	ret
  40a434:	90                   	nop
  40a435:	90                   	nop
  40a436:	90                   	nop
  40a437:	90                   	nop
  40a438:	90                   	nop
  40a439:	90                   	nop
  40a43a:	90                   	nop
  40a43b:	90                   	nop
  40a43c:	90                   	nop
  40a43d:	90                   	nop
  40a43e:	90                   	nop
  40a43f:	90                   	nop
  40a440:	6a ff                	push   0xffffffff
  40a442:	68 1b 08 62 00       	push   0x62081b
  40a447:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40a44d:	50                   	push   eax
  40a44e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40a455:	51                   	push   ecx
  40a456:	56                   	push   esi
  40a457:	57                   	push   edi
  40a458:	8b f1                	mov    esi,ecx
  40a45a:	6a 38                	push   0x38
  40a45c:	e8 54 fc 1f 00       	call   0x60a0b5
  40a461:	8b f8                	mov    edi,eax
  40a463:	83 c4 04             	add    esp,0x4
  40a466:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
  40a46a:	85 ff                	test   edi,edi
  40a46c:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  40a473:	00 
  40a474:	74 19                	je     0x40a48f
  40a476:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40a479:	e8 82 0e 02 00       	call   0x42b300
  40a47e:	8b 40 38             	mov    eax,DWORD PTR [eax+0x38]
  40a481:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40a484:	50                   	push   eax
  40a485:	51                   	push   ecx
  40a486:	8b cf                	mov    ecx,edi
  40a488:	e8 43 9a ff ff       	call   0x403ed0
  40a48d:	eb 02                	jmp    0x40a491
  40a48f:	33 c0                	xor    eax,eax
  40a491:	50                   	push   eax
  40a492:	6a 00                	push   0x0
  40a494:	8b ce                	mov    ecx,esi
  40a496:	c7 44 24 1c ff ff ff 	mov    DWORD PTR [esp+0x1c],0xffffffff
  40a49d:	ff 
  40a49e:	e8 6d 85 ff ff       	call   0x402a10
  40a4a3:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  40a4a7:	5f                   	pop    edi
  40a4a8:	5e                   	pop    esi
  40a4a9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a4b0:	83 c4 10             	add    esp,0x10
  40a4b3:	c3                   	ret
  40a4b4:	90                   	nop
  40a4b5:	90                   	nop
  40a4b6:	90                   	nop
  40a4b7:	90                   	nop
  40a4b8:	90                   	nop
  40a4b9:	90                   	nop
  40a4ba:	90                   	nop
  40a4bb:	90                   	nop
  40a4bc:	90                   	nop
  40a4bd:	90                   	nop
  40a4be:	90                   	nop
  40a4bf:	90                   	nop
  40a4c0:	56                   	push   esi
  40a4c1:	57                   	push   edi
  40a4c2:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  40a4c6:	8b f1                	mov    esi,ecx
  40a4c8:	57                   	push   edi
  40a4c9:	e8 52 02 00 00       	call   0x40a720
  40a4ce:	89 7e 2c             	mov    DWORD PTR [esi+0x2c],edi
  40a4d1:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
  40a4d8:	c7 06 c4 a9 64 00    	mov    DWORD PTR [esi],0x64a9c4
  40a4de:	8b c6                	mov    eax,esi
  40a4e0:	5f                   	pop    edi
  40a4e1:	5e                   	pop    esi
  40a4e2:	c2 04 00             	ret    0x4
  40a4e5:	90                   	nop
  40a4e6:	90                   	nop
  40a4e7:	90                   	nop
  40a4e8:	90                   	nop
  40a4e9:	90                   	nop
  40a4ea:	90                   	nop
  40a4eb:	90                   	nop
  40a4ec:	90                   	nop
  40a4ed:	90                   	nop
  40a4ee:	90                   	nop
  40a4ef:	90                   	nop
  40a4f0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40a4f6:	6a ff                	push   0xffffffff
  40a4f8:	68 38 08 62 00       	push   0x620838
  40a4fd:	50                   	push   eax
  40a4fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40a505:	83 ec 18             	sub    esp,0x18
  40a508:	53                   	push   ebx
  40a509:	56                   	push   esi
  40a50a:	8b f1                	mov    esi,ecx
  40a50c:	e8 df 87 ff ff       	call   0x402cf0
  40a511:	33 db                	xor    ebx,ebx
  40a513:	2b c3                	sub    eax,ebx
  40a515:	0f 84 2e 01 00 00    	je     0x40a649
  40a51b:	48                   	dec    eax
  40a51c:	0f 84 cc 00 00 00    	je     0x40a5ee
  40a522:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  40a526:	55                   	push   ebp
  40a527:	57                   	push   edi
  40a528:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  40a52c:	bf 20 d4 68 00       	mov    edi,0x68d420
  40a531:	83 c9 ff             	or     ecx,0xffffffff
  40a534:	33 c0                	xor    eax,eax
  40a536:	6a 01                	push   0x1
  40a538:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40a53a:	f7 d1                	not    ecx
  40a53c:	49                   	dec    ecx
  40a53d:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  40a541:	8b e9                	mov    ebp,ecx
  40a543:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  40a547:	55                   	push   ebp
  40a548:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  40a54c:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  40a550:	e8 eb 73 ff ff       	call   0x401940
  40a555:	84 c0                	test   al,al
  40a557:	74 24                	je     0x40a57d
  40a559:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  40a55d:	8b cd                	mov    ecx,ebp
  40a55f:	8b d1                	mov    edx,ecx
  40a561:	be 20 d4 68 00       	mov    esi,0x68d420
  40a566:	c1 e9 02             	shr    ecx,0x2
  40a569:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40a56b:	8b ca                	mov    ecx,edx
  40a56d:	83 e1 03             	and    ecx,0x3
  40a570:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  40a572:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  40a576:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  40a57a:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  40a57d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  40a581:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  40a585:	51                   	push   ecx
  40a586:	68 c6 00 00 00       	push   0xc6
  40a58b:	68 48 e2 68 00       	push   0x68e248
  40a590:	68 d0 d2 68 00       	push   0x68d2d0
  40a595:	e8 56 62 19 00       	call   0x5a07f0
  40a59a:	ff d0                	call   eax
  40a59c:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  40a5a0:	83 c4 10             	add    esp,0x10
  40a5a3:	3b c3                	cmp    eax,ebx
  40a5a5:	5f                   	pop    edi
  40a5a6:	5d                   	pop    ebp
  40a5a7:	0f 84 da 00 00 00    	je     0x40a687
  40a5ad:	8d 48 ff             	lea    ecx,[eax-0x1]
  40a5b0:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  40a5b3:	3a c3                	cmp    al,bl
  40a5b5:	74 1b                	je     0x40a5d2
  40a5b7:	3c ff                	cmp    al,0xff
  40a5b9:	74 17                	je     0x40a5d2
  40a5bb:	fe c8                	dec    al
  40a5bd:	5e                   	pop    esi
  40a5be:	88 01                	mov    BYTE PTR [ecx],al
  40a5c0:	5b                   	pop    ebx
  40a5c1:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  40a5c5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a5cc:	83 c4 24             	add    esp,0x24
  40a5cf:	c2 08 00             	ret    0x8
  40a5d2:	51                   	push   ecx
  40a5d3:	e8 18 40 1f 00       	call   0x5fe5f0
  40a5d8:	83 c4 04             	add    esp,0x4
  40a5db:	5e                   	pop    esi
  40a5dc:	5b                   	pop    ebx
  40a5dd:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  40a5e1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a5e8:	83 c4 24             	add    esp,0x24
  40a5eb:	c2 08 00             	ret    0x8
  40a5ee:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  40a5f1:	e8 0a 91 01 00       	call   0x423700
  40a5f6:	8b c8                	mov    ecx,eax
  40a5f8:	e8 03 67 09 00       	call   0x4a0d00
  40a5fd:	84 c0                	test   al,al
  40a5ff:	0f 84 82 00 00 00    	je     0x40a687
  40a605:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  40a608:	e8 f3 0c 02 00       	call   0x42b300
  40a60d:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
  40a610:	8b 48 2c             	mov    ecx,DWORD PTR [eax+0x2c]
  40a613:	3b d1                	cmp    edx,ecx
  40a615:	8b ce                	mov    ecx,esi
  40a617:	7c 18                	jl     0x40a631
  40a619:	e8 e2 86 ff ff       	call   0x402d00
  40a61e:	5e                   	pop    esi
  40a61f:	5b                   	pop    ebx
  40a620:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  40a624:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a62b:	83 c4 24             	add    esp,0x24
  40a62e:	c2 08 00             	ret    0x8
  40a631:	e8 7a 00 00 00       	call   0x40a6b0
  40a636:	5e                   	pop    esi
  40a637:	5b                   	pop    ebx
  40a638:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  40a63c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a643:	83 c4 24             	add    esp,0x24
  40a646:	c2 08 00             	ret    0x8
  40a649:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  40a64c:	e8 af 90 01 00       	call   0x423700
  40a651:	8b c8                	mov    ecx,eax
  40a653:	e8 08 6a 09 00       	call   0x4a1060
  40a658:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  40a65b:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
  40a65f:	e8 9c 0c 02 00       	call   0x42b300
  40a664:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  40a668:	d8 58 24             	fcomp  DWORD PTR [eax+0x24]
  40a66b:	df e0                	fnstsw ax
  40a66d:	f6 c4 01             	test   ah,0x1
  40a670:	75 15                	jne    0x40a687
  40a672:	8b ce                	mov    ecx,esi
  40a674:	e8 27 7c ff ff       	call   0x4022a0
  40a679:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
  40a67c:	8b ce                	mov    ecx,esi
  40a67e:	40                   	inc    eax
  40a67f:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
  40a682:	e8 59 00 00 00       	call   0x40a6e0
  40a687:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  40a68b:	5e                   	pop    esi
  40a68c:	5b                   	pop    ebx
  40a68d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40a694:	83 c4 24             	add    esp,0x24
  40a697:	c2 08 00             	ret    0x8
  40a69a:	90                   	nop
  40a69b:	90                   	nop
  40a69c:	90                   	nop
  40a69d:	90                   	nop
  40a69e:	90                   	nop
  40a69f:	90                   	nop
  40a6a0:	e8 0b 00 00 00       	call   0x40a6b0
  40a6a5:	c2 04 00             	ret    0x4
  40a6a8:	90                   	nop
  40a6a9:	90                   	nop
  40a6aa:	90                   	nop
  40a6ab:	90                   	nop
  40a6ac:	90                   	nop
  40a6ad:	90                   	nop
  40a6ae:	90                   	nop
  40a6af:	90                   	nop
  40a6b0:	56                   	push   esi
  40a6b1:	6a 00                	push   0x0
  40a6b3:	8b f1                	mov    esi,ecx
  40a6b5:	6a 00                	push   0x0
  40a6b7:	e8 54 83 ff ff       	call   0x402a10
  40a6bc:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  40a6bf:	68 ff ff 7f 7f       	push   0x7f7fffff
  40a6c4:	6a 00                	push   0x0
  40a6c6:	6a 06                	push   0x6
  40a6c8:	8b 01                	mov    eax,DWORD PTR [ecx]
  40a6ca:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  40a6d0:	5e                   	pop    esi
  40a6d1:	c3                   	ret
  40a6d2:	90                   	nop
  40a6d3:	90                   	nop
  40a6d4:	90                   	nop
  40a6d5:	90                   	nop
  40a6d6:	90                   	nop
  40a6d7:	90                   	nop
  40a6d8:	90                   	nop
  40a6d9:	90                   	nop
  40a6da:	90                   	nop
  40a6db:	90                   	nop
  40a6dc:	90                   	nop
  40a6dd:	90                   	nop
  40a6de:	90                   	nop
  40a6df:	90                   	nop
  40a6e0:	6a 00                	push   0x0
  40a6e2:	6a 01                	push   0x1
  40a6e4:	e8 27 83 ff ff       	call   0x402a10
  40a6e9:	c3                   	ret
  40a6ea:	90                   	nop
  40a6eb:	90                   	nop
  40a6ec:	90                   	nop
  40a6ed:	90                   	nop
  40a6ee:	90                   	nop
  40a6ef:	90                   	nop
