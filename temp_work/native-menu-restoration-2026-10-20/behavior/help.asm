  553208:	55                   	push   ebp
  553209:	8b ec                	mov    ebp,esp
  55320b:	81 c4 f0 fe ff ff    	add    esp,0xfffffef0
  553211:	33 c9                	xor    ecx,ecx
  553213:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  553216:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
  553219:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55321c:	33 c0                	xor    eax,eax
  55321e:	55                   	push   ebp
  55321f:	68 0c 33 55 00       	push   0x55330c
  553224:	64 ff 30             	push   DWORD PTR fs:[eax]
  553227:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55322a:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55322f:	8b 00                	mov    eax,DWORD PTR [eax]
  553231:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  553237:	e8 a0 cd ff ff       	call   0x54ffdc
  55323c:	a1 08 21 57 00       	mov    eax,ds:0x572108
  553241:	8b 00                	mov    eax,DWORD PTR [eax]
  553243:	ba 20 33 55 00       	mov    edx,0x553320
  553248:	e8 1f 6a 01 00       	call   0x569c6c
  55324d:	a1 08 21 57 00       	mov    eax,ds:0x572108
  553252:	8b 00                	mov    eax,DWORD PTR [eax]
  553254:	e8 8b 77 01 00       	call   0x56a9e4
  553259:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55325c:	c6 80 f8 02 00 00 01 	mov    BYTE PTR [eax+0x2f8],0x1
  553263:	e8 f0 8f ff ff       	call   0x54c258
  553268:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55326b:	89 90 44 03 00 00    	mov    DWORD PTR [eax+0x344],edx
  553271:	c7 80 40 03 00 00 e0 	mov    DWORD PTR [eax+0x340],0x5536e0
  553278:	36 55 00 
  55327b:	e8 d8 8f ff ff       	call   0x54c258
  553280:	b2 04                	mov    dl,0x4
  553282:	e8 e5 9f ff ff       	call   0x54d26c
  553287:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  55328d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  553290:	8b 00                	mov    eax,DWORD PTR [eax]
  553292:	e8 49 fd ea ff       	call   0x402fe0
  553297:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  55329d:	8d 45 f0             	lea    eax,[ebp-0x10]
  5532a0:	e8 2f 0d eb ff       	call   0x403fd4
  5532a5:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  5532a8:	e8 7b d4 f5 ff       	call   0x4b0728
  5532ad:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  5532b0:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
  5532b4:	74 1b                	je     0x5532d1
  5532b6:	e8 9d 8f ff ff       	call   0x54c258
  5532bb:	33 d2                	xor    edx,edx
  5532bd:	e8 52 98 ff ff       	call   0x54cb14
  5532c2:	e8 91 8f ff ff       	call   0x54c258
  5532c7:	33 c9                	xor    ecx,ecx
  5532c9:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  5532cc:	e8 13 98 ff ff       	call   0x54cae4
  5532d1:	e8 82 8f ff ff       	call   0x54c258
  5532d6:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  5532d9:	8b 92 f4 02 00 00    	mov    edx,DWORD PTR [edx+0x2f4]
  5532df:	e8 4c 90 ff ff       	call   0x54c330
  5532e4:	e8 6f 8f ff ff       	call   0x54c258
  5532e9:	e8 b2 97 ff ff       	call   0x54caa0
  5532ee:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5532f1:	8b 10                	mov    edx,DWORD PTR [eax]
  5532f3:	ff 52 74             	call   DWORD PTR [edx+0x74]
  5532f6:	33 c0                	xor    eax,eax
  5532f8:	5a                   	pop    edx
  5532f9:	59                   	pop    ecx
  5532fa:	59                   	pop    ecx
  5532fb:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  5532fe:	68 13 33 55 00       	push   0x553313
  553303:	8d 45 f0             	lea    eax,[ebp-0x10]
  553306:	e8 a5 0a eb ff       	call   0x403db0
  55330b:	c3                   	ret
  55330c:	e9 e3 04 eb ff       	jmp    0x4037f4
  553311:	eb f0                	jmp    0x553303
  553313:	8b e5                	mov    esp,ebp
  553315:	5d                   	pop    ebp
  553316:	c3                   	ret
  553317:	00 ff                	add    bh,bh
  553319:	ff                   	(bad)
  55331a:	ff                   	(bad)
  55331b:	ff 08                	dec    DWORD PTR [eax]
  55331d:	00 00                	add    BYTE PTR [eax],al
  55331f:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  553322:	5f                   	pop    edi
  553323:	72 65                	jb     0x55338a
  553325:	64 32 31             	xor    dh,BYTE PTR fs:[ecx]
  553328:	00 00                	add    BYTE PTR [eax],al
  55332a:	00 00                	add    BYTE PTR [eax],al
  55332c:	55                   	push   ebp
  55332d:	8b ec                	mov    ebp,esp
  55332f:	83 c4 f8             	add    esp,0xfffffff8
  553332:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  553335:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  553338:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55333b:	e8 d0 03 00 00       	call   0x553710
  553340:	a1 08 21 57 00       	mov    eax,ds:0x572108
  553345:	8b 00                	mov    eax,DWORD PTR [eax]
  553347:	c6 80 00 01 00 00 00 	mov    BYTE PTR [eax+0x100],0x0
  55334e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  553353:	8b 00                	mov    eax,DWORD PTR [eax]
  553355:	e8 96 66 01 00       	call   0x5699f0
  55335a:	59                   	pop    ecx
  55335b:	59                   	pop    ecx
  55335c:	5d                   	pop    ebp
  55335d:	c3                   	ret
  55335e:	8b c0                	mov    eax,eax
  553360:	55                   	push   ebp
  553361:	8b ec                	mov    ebp,esp
  553363:	51                   	push   ecx
  553364:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  553367:	83 3d 54 48 57 00 00 	cmp    DWORD PTR ds:0x574854,0x0
  55336e:	75 14                	jne    0x553384
  553370:	b9 c9 00 00 00       	mov    ecx,0xc9
  553375:	ba 9c 33 55 00       	mov    edx,0x55339c
  55337a:	b8 c8 33 55 00       	mov    eax,0x5533c8
  55337f:	e8 10 0a eb ff       	call   0x403d94
  553384:	a1 54 48 57 00       	mov    eax,ds:0x574854
  553389:	8b 10                	mov    edx,DWORD PTR [eax]
  55338b:	ff 52 08             	call   DWORD PTR [edx+0x8]
  55338e:	59                   	pop    ecx
  55338f:	5d                   	pop    ebp
  553390:	c3                   	ret
  553391:	00 00                	add    BYTE PTR [eax],al
  553393:	00 ff                	add    bh,bh
  553395:	ff                   	(bad)
  553396:	ff                   	(bad)
  553397:	ff 23                	jmp    DWORD PTR [ebx]
  553399:	00 00                	add    BYTE PTR [eax],al
  55339b:	00 44 3a 5c          	add    BYTE PTR [edx+edi*1+0x5c],al
  55339f:	57                   	push   edi
  5533a0:	6f                   	outs   dx,DWORD PTR ds:[esi]
  5533a1:	72 6b                	jb     0x55340e
  5533a3:	5c                   	pop    esp
  5533a4:	52                   	push   edx
  5533a5:	43                   	inc    ebx
  5533a6:	48                   	dec    eax
  5533a7:	4d                   	dec    ebp
  5533a8:	65 6e                	outs   dx,BYTE PTR gs:[esi]
  5533aa:	75 5c                	jne    0x553408
  5533ac:	73 6f                	jae    0x55341d
  5533ae:	75 72                	jne    0x553422
  5533b0:	63 65 5c             	arpl   WORD PTR [ebp+0x5c],esp
  5533b3:	42                   	inc    edx
  5533b4:	61                   	popa
  5533b5:	73 65                	jae    0x55341c
  5533b7:	46                   	inc    esi
  5533b8:	6f                   	outs   dx,DWORD PTR ds:[esi]
  5533b9:	72 6d                	jb     0x553428
  5533bb:	2e 70 61             	cs jo  0x55341f
  5533be:	73 00                	jae    0x5533c0
  5533c0:	ff                   	(bad)
  5533c1:	ff                   	(bad)
  5533c2:	ff                   	(bad)
  5533c3:	ff 1e                	call   FWORD PTR [esi]
  5533c5:	00 00                	add    BYTE PTR [eax],al
  5533c7:	00 47 4c             	add    BYTE PTR [edi+0x4c],al
  5533ca:	4f                   	dec    edi
  5533cb:	42                   	inc    edx
  5533cc:	41                   	inc    ecx
  5533cd:	4c                   	dec    esp
  5533ce:	5f                   	pop    edi
  5533cf:	46                   	inc    esi
  5533d0:	6f                   	outs   dx,DWORD PTR ds:[esi]
  5533d1:	72 6d                	jb     0x553440
  5533d3:	4c                   	dec    esp
  5533d4:	69 73 74 20 64 6f 65 	imul   esi,DWORD PTR [ebx+0x74],0x656f6420
  5533db:	73 20                	jae    0x5533fd
  5533dd:	6e                   	outs   dx,BYTE PTR ds:[esi]
  5533de:	6f                   	outs   dx,DWORD PTR ds:[esi]
  5533df:	74 20                	je     0x553401
  5533e1:	65 78 69             	gs js  0x55344d
  5533e4:	73 74                	jae    0x55345a
  5533e6:	00 00                	add    BYTE PTR [eax],al
  5533e8:	55                   	push   ebp
  5533e9:	8b ec                	mov    ebp,esp
  5533eb:	83 c4 f4             	add    esp,0xfffffff4
  5533ee:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5533f1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5533f4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5533f7:	e8 e0 fb ea ff       	call   0x402fdc
  5533fc:	8b d0                	mov    edx,eax
  5533fe:	a1 54 48 57 00       	mov    eax,ds:0x574854
  553403:	e8 d0 ed eb ff       	call   0x4121d8
  553408:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55340b:	e8 54 ee ff ff       	call   0x552264
  553410:	8b 15 7c 2a 55 00    	mov    edx,DWORD PTR ds:0x552a7c
  553416:	e8 09 fe ea ff       	call   0x403224
  55341b:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  55341e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  553421:	e8 b6 fb ea ff       	call   0x402fdc
  553426:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  553429:	89 82 fc 02 00 00    	mov    DWORD PTR [edx+0x2fc],eax
  55342f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  553432:	8b 10                	mov    edx,DWORD PTR [eax]
  553434:	ff 92 ec 00 00 00    	call   DWORD PTR [edx+0xec]
  55343a:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55343d:	8b 10                	mov    edx,DWORD PTR [eax]
  55343f:	ff 92 f0 00 00 00    	call   DWORD PTR [edx+0xf0]
  553445:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  553448:	e8 af a8 ef ff       	call   0x44dcfc
  55344d:	8b e5                	mov    esp,ebp
  55344f:	5d                   	pop    ebp
  553450:	c3                   	ret
  553451:	8d 40 00             	lea    eax,[eax+0x0]
  553454:	55                   	push   ebp
  553455:	8b ec                	mov    ebp,esp
  553457:	83 c4 f4             	add    esp,0xfffffff4
  55345a:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55345d:	a1 54 48 57 00       	mov    eax,ds:0x574854
  553462:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
  553466:	7e 6f                	jle    0x5534d7
  553468:	a1 54 48 57 00       	mov    eax,ds:0x574854
  55346d:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  553470:	83 ea 01             	sub    edx,0x1
  553473:	71 05                	jno    0x55347a
  553475:	e8 5a fb ea ff       	call   0x402fd4
  55347a:	a1 54 48 57 00       	mov    eax,ds:0x574854
  55347f:	e8 00 ef eb ff       	call   0x412384
  553484:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  553487:	a1 54 48 57 00       	mov    eax,ds:0x574854
  55348c:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  55348f:	83 ea 01             	sub    edx,0x1
  553492:	71 05                	jno    0x553499
  553494:	e8 3b fb ea ff       	call   0x402fd4
  553499:	a1 54 48 57 00       	mov    eax,ds:0x574854
  55349e:	e8 81 ed eb ff       	call   0x412224
  5534a3:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5534a6:	e8 b9 ed ff ff       	call   0x552264
  5534ab:	8b 15 7c 2a 55 00    	mov    edx,DWORD PTR ds:0x552a7c
  5534b1:	e8 6e fd ea ff       	call   0x403224
  5534b6:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  5534b9:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  5534bc:	8b 10                	mov    edx,DWORD PTR [eax]
  5534be:	ff 92 f0 00 00 00    	call   DWORD PTR [edx+0xf0]
  5534c4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5534c7:	8b 10                	mov    edx,DWORD PTR [eax]
  5534c9:	ff 92 ec 00 00 00    	call   DWORD PTR [edx+0xec]
  5534cf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5534d2:	e8 25 a8 ef ff       	call   0x44dcfc
  5534d7:	8b e5                	mov    esp,ebp
  5534d9:	5d                   	pop    ebp
  5534da:	c3                   	ret
  5534db:	90                   	nop
  5534dc:	55                   	push   ebp
  5534dd:	8b ec                	mov    ebp,esp
  5534df:	81 c4 f4 fe ff ff    	add    esp,0xfffffef4
  5534e5:	33 d2                	xor    edx,edx
  5534e7:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5534ea:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
  5534ed:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5534f0:	33 c0                	xor    eax,eax
  5534f2:	55                   	push   ebp
  5534f3:	68 94 35 55 00       	push   0x553594
  5534f8:	64 ff 30             	push   DWORD PTR fs:[eax]
  5534fb:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  5534fe:	8d 95 f4 fe ff ff    	lea    edx,[ebp-0x10c]
  553504:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  553507:	8b 00                	mov    eax,DWORD PTR [eax]
  553509:	e8 d2 fa ea ff       	call   0x402fe0
  55350e:	8d 95 f4 fe ff ff    	lea    edx,[ebp-0x10c]
  553514:	8d 45 f4             	lea    eax,[ebp-0xc]
  553517:	e8 b8 0a eb ff       	call   0x403fd4
  55351c:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  55351f:	68 a8 35 55 00       	push   0x5535a8
  553524:	68 b4 35 55 00       	push   0x5535b4
  553529:	8d 45 f8             	lea    eax,[ebp-0x8]
  55352c:	ba 03 00 00 00       	mov    edx,0x3
  553531:	e8 ba 0b eb ff       	call   0x4040f0
  553536:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  553539:	50                   	push   eax
  55353a:	e8 4d 0c f5 ff       	call   0x4a418c
  55353f:	8a 0d cc 35 55 00    	mov    cl,BYTE PTR ds:0x5535cc
  553545:	5a                   	pop    edx
  553546:	e8 6d 13 f5 ff       	call   0x4a48b8
  55354b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55354e:	e8 bd 01 00 00       	call   0x553710
  553553:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  553556:	8b 80 ec 02 00 00    	mov    eax,DWORD PTR [eax+0x2ec]
  55355c:	e8 f7 f3 ed ff       	call   0x432958
  553561:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  553564:	8b 80 ec 02 00 00    	mov    eax,DWORD PTR [eax+0x2ec]
  55356a:	e8 85 f6 ed ff       	call   0x432bf4
  55356f:	e8 18 0c f5 ff       	call   0x4a418c
  553574:	e8 37 14 f5 ff       	call   0x4a49b0
  553579:	33 c0                	xor    eax,eax
  55357b:	5a                   	pop    edx
  55357c:	59                   	pop    ecx
  55357d:	59                   	pop    ecx
  55357e:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  553581:	68 9b 35 55 00       	push   0x55359b
  553586:	8d 45 f4             	lea    eax,[ebp-0xc]
  553589:	ba 02 00 00 00       	mov    edx,0x2
  55358e:	e8 41 08 eb ff       	call   0x403dd4
  553593:	c3                   	ret
  553594:	e9 5b 02 eb ff       	jmp    0x4037f4
  553599:	eb eb                	jmp    0x553586
  55359b:	8b e5                	mov    esp,ebp
  55359d:	5d                   	pop    ebp
  55359e:	c3                   	ret
  55359f:	00 ff                	add    bh,bh
  5535a1:	ff                   	(bad)
  5535a2:	ff                   	(bad)
  5535a3:	ff 01                	inc    DWORD PTR [ecx]
  5535a5:	00 00                	add    BYTE PTR [eax],al
  5535a7:	00 2e                	add    BYTE PTR [esi],ch
  5535a9:	00 00                	add    BYTE PTR [eax],al
  5535ab:	00 ff                	add    bh,bh
  5535ad:	ff                   	(bad)
  5535ae:	ff                   	(bad)
  5535af:	ff 17                	call   DWORD PTR [edi]
  5535b1:	00 00                	add    BYTE PTR [eax],al
  5535b3:	00 54 47 61          	add    BYTE PTR [edi+eax*2+0x61],dl
  5535b7:	6d                   	ins    DWORD PTR es:[edi],dx
  5535b8:	65 4d                	gs dec ebp
  5535ba:	65 6e                	outs   dx,BYTE PTR gs:[esi]
  5535bc:	75 53                	jne    0x553611
  5535be:	63 72 65             	arpl   WORD PTR [edx+0x65],esi
  5535c1:	65 6e                	outs   dx,BYTE PTR gs:[esi]
  5535c3:	2e 44                	cs inc esp
  5535c5:	69 73 61 62 6c 65 00 	imul   esi,DWORD PTR [ebx+0x61],0x656c62
  5535cc:	00 00                	add    BYTE PTR [eax],al
  5535ce:	00 00                	add    BYTE PTR [eax],al
  5535d0:	55                   	push   ebp
  5535d1:	8b ec                	mov    ebp,esp
  5535d3:	81 c4 f4 fe ff ff    	add    esp,0xfffffef4
  5535d9:	33 d2                	xor    edx,edx
  5535db:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5535de:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
  5535e1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5535e4:	33 c0                	xor    eax,eax
  5535e6:	55                   	push   ebp
  5535e7:	68 80 36 55 00       	push   0x553680
  5535ec:	64 ff 30             	push   DWORD PTR fs:[eax]
  5535ef:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  5535f2:	8d 95 f4 fe ff ff    	lea    edx,[ebp-0x10c]
  5535f8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5535fb:	8b 00                	mov    eax,DWORD PTR [eax]
  5535fd:	e8 de f9 ea ff       	call   0x402fe0
  553602:	8d 95 f4 fe ff ff    	lea    edx,[ebp-0x10c]
  553608:	8d 45 f4             	lea    eax,[ebp-0xc]
  55360b:	e8 c4 09 eb ff       	call   0x403fd4
  553610:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  553613:	68 94 36 55 00       	push   0x553694
  553618:	68 a0 36 55 00       	push   0x5536a0
  55361d:	8d 45 f8             	lea    eax,[ebp-0x8]
  553620:	ba 03 00 00 00       	mov    edx,0x3
  553625:	e8 c6 0a eb ff       	call   0x4040f0
  55362a:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55362d:	50                   	push   eax
  55362e:	e8 59 0b f5 ff       	call   0x4a418c
  553633:	8a 0d b8 36 55 00    	mov    cl,BYTE PTR ds:0x5536b8
  553639:	5a                   	pop    edx
  55363a:	e8 79 12 f5 ff       	call   0x4a48b8
  55363f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  553642:	8b 80 ec 02 00 00    	mov    eax,DWORD PTR [eax+0x2ec]
  553648:	e8 1b f3 ed ff       	call   0x432968
  55364d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  553650:	8b 80 ec 02 00 00    	mov    eax,DWORD PTR [eax+0x2ec]
  553656:	e8 91 f5 ed ff       	call   0x432bec
  55365b:	e8 2c 0b f5 ff       	call   0x4a418c
  553660:	e8 4b 13 f5 ff       	call   0x4a49b0
  553665:	33 c0                	xor    eax,eax
  553667:	5a                   	pop    edx
  553668:	59                   	pop    ecx
  553669:	59                   	pop    ecx
  55366a:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55366d:	68 87 36 55 00       	push   0x553687
  553672:	8d 45 f4             	lea    eax,[ebp-0xc]
  553675:	ba 02 00 00 00       	mov    edx,0x2
  55367a:	e8 55 07 eb ff       	call   0x403dd4
  55367f:	c3                   	ret
  553680:	e9 6f 01 eb ff       	jmp    0x4037f4
  553685:	eb eb                	jmp    0x553672
  553687:	8b e5                	mov    esp,ebp
  553689:	5d                   	pop    ebp
  55368a:	c3                   	ret
  55368b:	00 ff                	add    bh,bh
  55368d:	ff                   	(bad)
  55368e:	ff                   	(bad)
  55368f:	ff 01                	inc    DWORD PTR [ecx]
  553691:	00 00                	add    BYTE PTR [eax],al
  553693:	00 2e                	add    BYTE PTR [esi],ch
  553695:	00 00                	add    BYTE PTR [eax],al
  553697:	00 ff                	add    bh,bh
  553699:	ff                   	(bad)
  55369a:	ff                   	(bad)
  55369b:	ff 16                	call   DWORD PTR [esi]
  55369d:	00 00                	add    BYTE PTR [eax],al
  55369f:	00 54 47 61          	add    BYTE PTR [edi+eax*2+0x61],dl
  5536a3:	6d                   	ins    DWORD PTR es:[edi],dx
  5536a4:	65 4d                	gs dec ebp
  5536a6:	65 6e                	outs   dx,BYTE PTR gs:[esi]
  5536a8:	75 53                	jne    0x5536fd
  5536aa:	63 72 65             	arpl   WORD PTR [edx+0x65],esi
  5536ad:	65 6e                	outs   dx,BYTE PTR gs:[esi]
  5536af:	2e 45                	cs inc ebp
  5536b1:	6e                   	outs   dx,BYTE PTR ds:[esi]
  5536b2:	61                   	popa
  5536b3:	62 6c 65 00          	bound  ebp,QWORD PTR [ebp+eiz*2+0x0]
  5536b7:	00 00                	add    BYTE PTR [eax],al
  5536b9:	00 00                	add    BYTE PTR [eax],al
  5536bb:	00 55 8b             	add    BYTE PTR [ebp-0x75],dl
  5536be:	ec                   	in     al,dx
  5536bf:	83 c4 f8             	add    esp,0xfffffff8
  5536c2:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5536c5:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5536c8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5536cb:	e8 40 00 00 00       	call   0x553710
  5536d0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5536d3:	8b 10                	mov    edx,DWORD PTR [eax]
  5536d5:	ff 92 e8 00 00 00    	call   DWORD PTR [edx+0xe8]
  5536db:	59                   	pop    ecx
  5536dc:	59                   	pop    ecx
  5536dd:	5d                   	pop    ebp
  5536de:	c3                   	ret
  5536df:	90                   	nop
  5536e0:	55                   	push   ebp
  5536e1:	8b ec                	mov    ebp,esp
  5536e3:	83 c4 f8             	add    esp,0xfffffff8
  5536e6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5536e9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5536ec:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5536ef:	e8 1c 00 00 00       	call   0x553710
  5536f4:	59                   	pop    ecx
  5536f5:	59                   	pop    ecx
  5536f6:	5d                   	pop    ebp
  5536f7:	c3                   	ret
