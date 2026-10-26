
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


/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00403ed0 <.text+0x2ed0>:
  403ed0:	6a ff                	push   0xffffffff
  403ed2:	68 60 fc 61 00       	push   0x61fc60
  403ed7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  403edd:	50                   	push   eax
  403ede:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  403ee5:	83 ec 14             	sub    esp,0x14
  403ee8:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  403eec:	55                   	push   ebp
  403eed:	56                   	push   esi
  403eee:	8b e9                	mov    ebp,ecx
  403ef0:	50                   	push   eax
  403ef1:	89 6c 24 0c          	mov    DWORD PTR [esp+0xc],ebp
  403ef5:	e8 66 ea ff ff       	call   0x402960
  403efa:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  403efe:	33 f6                	xor    esi,esi
  403f00:	83 f8 ff             	cmp    eax,0xffffffff
  403f03:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  403f07:	0f 84 ad 00 00 00    	je     0x403fba
  403f0d:	3b c6                	cmp    eax,esi
  403f0f:	0f 8d a5 00 00 00    	jge    0x403fba
  403f15:	8a 4c 24 30          	mov    cl,BYTE PTR [esp+0x30]
  403f19:	53                   	push   ebx
  403f1a:	57                   	push   edi
  403f1b:	88 4c 24 14          	mov    BYTE PTR [esp+0x14],cl
  403f1f:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  403f24:	83 c9 ff             	or     ecx,0xffffffff
  403f27:	33 c0                	xor    eax,eax
  403f29:	6a 01                	push   0x1
  403f2b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  403f2d:	f7 d1                	not    ecx
  403f2f:	49                   	dec    ecx
  403f30:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  403f34:	8b d9                	mov    ebx,ecx
  403f36:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  403f3a:	53                   	push   ebx
  403f3b:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  403f3f:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  403f43:	e8 f8 d9 ff ff       	call   0x401940
  403f48:	84 c0                	test   al,al
  403f4a:	74 27                	je     0x403f73
  403f4c:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  403f50:	8b cb                	mov    ecx,ebx
  403f52:	8b d1                	mov    edx,ecx
  403f54:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  403f59:	c1 e9 02             	shr    ecx,0x2
  403f5c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  403f5e:	8b ca                	mov    ecx,edx
  403f60:	83 e1 03             	and    ecx,0x3
  403f63:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  403f65:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  403f69:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  403f6d:	33 f6                	xor    esi,esi
  403f6f:	c6 04 03 00          	mov    BYTE PTR [ebx+eax*1],0x0
  403f73:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  403f77:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
  403f7c:	51                   	push   ecx
  403f7d:	6a 56                	push   0x56
  403f7f:	68 c8 d4 68 00       	push   0x68d4c8
  403f84:	68 90 d4 68 00       	push   0x68d490
  403f89:	e8 62 c8 19 00       	call   0x5a07f0
  403f8e:	ff d0                	call   eax
  403f90:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  403f94:	83 c4 10             	add    esp,0x10
  403f97:	3b c6                	cmp    eax,esi
  403f99:	5f                   	pop    edi
  403f9a:	5b                   	pop    ebx
  403f9b:	74 1d                	je     0x403fba
  403f9d:	8d 48 ff             	lea    ecx,[eax-0x1]
  403fa0:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  403fa3:	84 c0                	test   al,al
  403fa5:	74 0a                	je     0x403fb1
  403fa7:	3c ff                	cmp    al,0xff
  403fa9:	74 06                	je     0x403fb1
  403fab:	fe c8                	dec    al
  403fad:	88 01                	mov    BYTE PTR [ecx],al
  403faf:	eb 09                	jmp    0x403fba
  403fb1:	51                   	push   ecx
  403fb2:	e8 39 a6 1f 00       	call   0x5fe5f0
  403fb7:	83 c4 04             	add    esp,0x4
  403fba:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  403fbe:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  403fc2:	89 55 28             	mov    DWORD PTR [ebp+0x28],edx
  403fc5:	c7 45 2c ff ff ff ff 	mov    DWORD PTR [ebp+0x2c],0xffffffff
  403fcc:	c7 45 30 00 00 80 3f 	mov    DWORD PTR [ebp+0x30],0x3f800000
  403fd3:	c6 45 34 01          	mov    BYTE PTR [ebp+0x34],0x1
  403fd7:	c7 45 00 58 a4 64 00 	mov    DWORD PTR [ebp+0x0],0x64a458
  403fde:	8b c5                	mov    eax,ebp
  403fe0:	5e                   	pop    esi
  403fe1:	5d                   	pop    ebp
  403fe2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  403fe9:	83 c4 20             	add    esp,0x20
  403fec:	c2 08 00             	ret    0x8
  403fef:	90                   	nop
  403ff0:	8b 01                	mov    eax,DWORD PTR [ecx]
  403ff2:	ff 50 0c             	call   DWORD PTR [eax+0xc]
  403ff5:	c2 04 00             	ret    0x4
  403ff8:	90                   	nop
  403ff9:	90                   	nop
  403ffa:	90                   	nop
  403ffb:	90                   	nop
  403ffc:	90                   	nop
  403ffd:	90                   	nop
  403ffe:	90                   	nop
  403fff:	90                   	nop
  404000:	8b 49 24             	mov    ecx,DWORD PTR [ecx+0x24]
  404003:	68 ff ff 7f 7f       	push   0x7f7fffff
  404008:	6a 01                	push   0x1
  40400a:	6a 01                	push   0x1
  40400c:	8b 01                	mov    eax,DWORD PTR [ecx]
  40400e:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  404014:	c3                   	ret
  404015:	90                   	nop
  404016:	90                   	nop
  404017:	90                   	nop
  404018:	90                   	nop
  404019:	90                   	nop
  40401a:	90                   	nop
  40401b:	90                   	nop
  40401c:	90                   	nop
  40401d:	90                   	nop
  40401e:	90                   	nop
  40401f:	90                   	nop
  404020:	51                   	push   ecx
  404021:	8b 51 28             	mov    edx,DWORD PTR [ecx+0x28]
  404024:	53                   	push   ebx
  404025:	83 fa ff             	cmp    edx,0xffffffff
  404028:	56                   	push   esi
  404029:	b3 01                	mov    bl,0x1
  40402b:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
  40402f:	74 4b                	je     0x40407c
  404031:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
  404034:	83 f8 ff             	cmp    eax,0xffffffff
  404037:	75 12                	jne    0x40404b
  404039:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  40403d:	c7 41 30 00 00 80 3f 	mov    DWORD PTR [ecx+0x30],0x3f800000
  404044:	03 d0                	add    edx,eax
  404046:	89 51 2c             	mov    DWORD PTR [ecx+0x2c],edx
  404049:	eb 31                	jmp    0x40407c
  40404b:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  40404f:	3b f0                	cmp    esi,eax
  404051:	7e 0b                	jle    0x40405e
  404053:	c7 41 30 00 00 00 00 	mov    DWORD PTR [ecx+0x30],0x0
  40405a:	32 db                	xor    bl,bl
  40405c:	eb 1e                	jmp    0x40407c
  40405e:	85 d2                	test   edx,edx
  404060:	7e 13                	jle    0x404075
  404062:	2b c6                	sub    eax,esi
  404064:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  404068:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  40406c:	da 74 24 08          	fidiv  DWORD PTR [esp+0x8]
  404070:	d9 59 30             	fstp   DWORD PTR [ecx+0x30]
  404073:	eb 07                	jmp    0x40407c
  404075:	c7 41 30 00 00 00 00 	mov    DWORD PTR [ecx+0x30],0x0
  40407c:	88 59 34             	mov    BYTE PTR [ecx+0x34],bl
  40407f:	5e                   	pop    esi
  404080:	84 db                	test   bl,bl
  404082:	5b                   	pop    ebx
  404083:	75 05                	jne    0x40408a
  404085:	e8 76 ec ff ff       	call   0x402d00
  40408a:	59                   	pop    ecx
  40408b:	c2                   	.byte 0xc2


/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00406c40 <.text+0x5c40>:
  406c40:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  406c44:	56                   	push   esi
  406c45:	8b f1                	mov    esi,ecx
  406c47:	50                   	push   eax
  406c48:	e8 83 35 00 00       	call   0x40a1d0
  406c4d:	c7 06 60 a7 64 00    	mov    DWORD PTR [esi],0x64a760
  406c53:	8b c6                	mov    eax,esi
  406c55:	5e                   	pop    esi
  406c56:	c2 04 00             	ret    0x4
  406c59:	90                   	nop
  406c5a:	90                   	nop
  406c5b:	90                   	nop
  406c5c:	90                   	nop
  406c5d:	90                   	nop
  406c5e:	90                   	nop
  406c5f:	90                   	nop
  406c60:	6a ff                	push   0xffffffff
  406c62:	68 5b 01 62 00       	push   0x62015b
  406c67:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  406c6d:	50                   	push   eax
  406c6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  406c75:	51                   	push   ecx
  406c76:	56                   	push   esi
  406c77:	57                   	push   edi
  406c78:	8b f1                	mov    esi,ecx
  406c7a:	6a 38                	push   0x38
  406c7c:	e8 34 34 20 00       	call   0x60a0b5
  406c81:	8b f8                	mov    edi,eax
  406c83:	83 c4 04             	add    esp,0x4
  406c86:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
  406c8a:	85 ff                	test   edi,edi
  406c8c:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  406c93:	00 
  406c94:	74 19                	je     0x406caf
  406c96:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406c99:	e8 62 46 02 00       	call   0x42b300
  406c9e:	8b 40 38             	mov    eax,DWORD PTR [eax+0x38]
  406ca1:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406ca4:	50                   	push   eax
  406ca5:	51                   	push   ecx
  406ca6:	8b cf                	mov    ecx,edi
  406ca8:	e8 33 00 00 00       	call   0x406ce0
  406cad:	eb 02                	jmp    0x406cb1
  406caf:	33 c0                	xor    eax,eax
  406cb1:	50                   	push   eax
  406cb2:	6a 00                	push   0x0
  406cb4:	8b ce                	mov    ecx,esi
  406cb6:	c7 44 24 1c ff ff ff 	mov    DWORD PTR [esp+0x1c],0xffffffff
  406cbd:	ff 
  406cbe:	e8 4d bd ff ff       	call   0x402a10
  406cc3:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  406cc7:	5f                   	pop    edi
  406cc8:	5e                   	pop    esi
  406cc9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  406cd0:	83 c4 10             	add    esp,0x10
  406cd3:	c3                   	ret
  406cd4:	90                   	nop
  406cd5:	90                   	nop
  406cd6:	90                   	nop
  406cd7:	90                   	nop
  406cd8:	90                   	nop
  406cd9:	90                   	nop
  406cda:	90                   	nop
  406cdb:	90                   	nop
  406cdc:	90                   	nop
  406cdd:	90                   	nop
  406cde:	90                   	nop
  406cdf:	90                   	nop
  406ce0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  406ce4:	56                   	push   esi
  406ce5:	8b f1                	mov    esi,ecx
  406ce7:	50                   	push   eax
  406ce8:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  406cec:	51                   	push   ecx
  406ced:	8b ce                	mov    ecx,esi
  406cef:	e8 dc d1 ff ff       	call   0x403ed0
  406cf4:	c7 06 78 a7 64 00    	mov    DWORD PTR [esi],0x64a778
  406cfa:	8b c6                	mov    eax,esi
  406cfc:	5e                   	pop    esi
  406cfd:	c2 08 00             	ret    0x8
  406d00:	8b 49 24             	mov    ecx,DWORD PTR [ecx+0x24]
  406d03:	68 ff ff 7f 7f       	push   0x7f7fffff
  406d08:	6a 00                	push   0x0
  406d0a:	6a 01                	push   0x1
  406d0c:	8b 01                	mov    eax,DWORD PTR [ecx]
  406d0e:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  406d14:	c3                   	ret
  406d15:	90                   	nop
  406d16:	90                   	nop
  406d17:	90                   	nop
  406d18:	90                   	nop
  406d19:	90                   	nop
  406d1a:	90                   	nop
  406d1b:	90                   	nop
  406d1c:	90                   	nop
  406d1d:	90                   	nop
  406d1e:	90                   	nop
  406d1f:	90                   	nop
  406d20:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  406d24:	56                   	push   esi
  406d25:	8b f1                	mov    esi,ecx
  406d27:	50                   	push   eax
  406d28:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  406d2c:	51                   	push   ecx
  406d2d:	8b ce                	mov    ecx,esi
  406d2f:	e8 ec d2 ff ff       	call   0x404020
  406d34:	8b ce                	mov    ecx,esi
  406d36:	e8 d5 bf ff ff       	call   0x402d10
  406d3b:	84 c0                	test   al,al
  406d3d:	75 27                	jne    0x406d66
  406d3f:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  406d42:	e8 b9 c9 01 00       	call   0x423700
  406d47:	8b c8                	mov    ecx,eax
  406d49:	e8 b2 9f 09 00       	call   0x4a0d00
  406d4e:	84 c0                	test   al,al
  406d50:	74 14                	je     0x406d66
  406d52:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  406d55:	68 ff ff 7f 7f       	push   0x7f7fffff
  406d5a:	6a 00                	push   0x0
  406d5c:	6a 01                	push   0x1
  406d5e:	8b 11                	mov    edx,DWORD PTR [ecx]
  406d60:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  406d66:	5e                   	pop    esi
  406d67:	c2                   	.byte 0xc2
