
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00478230 <.text+0x77230>:
  478230:	51                   	push   ecx
  478231:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  478235:	53                   	push   ebx
  478236:	56                   	push   esi
  478237:	57                   	push   edi
  478238:	a2 c8 87 6b 00       	mov    ds:0x6b87c8,al
  47823d:	bf 6c 2d 69 00       	mov    edi,0x692d6c
  478242:	83 c9 ff             	or     ecx,0xffffffff
  478245:	33 c0                	xor    eax,eax
  478247:	33 d2                	xor    edx,edx
  478249:	33 f6                	xor    esi,esi
  47824b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47824d:	f7 d1                	not    ecx
  47824f:	49                   	dec    ecx
  478250:	89 15 cc 87 6b 00    	mov    DWORD PTR ds:0x6b87cc,edx
  478256:	8b d9                	mov    ebx,ecx
  478258:	89 15 d0 87 6b 00    	mov    DWORD PTR ds:0x6b87d0,edx
  47825e:	83 fb fd             	cmp    ebx,0xfffffffd
  478261:	89 35 d4 87 6b 00    	mov    DWORD PTR ds:0x6b87d4,esi
  478267:	76 39                	jbe    0x4782a2
  478269:	e8 8d 63 18 00       	call   0x5fe5fb
  47826e:	8b 15 cc 87 6b 00    	mov    edx,DWORD PTR ds:0x6b87cc
  478274:	85 d2                	test   edx,edx
  478276:	74 24                	je     0x47829c
  478278:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
  47827b:	84 c0                	test   al,al
  47827d:	74 1d                	je     0x47829c
  47827f:	3c ff                	cmp    al,0xff
  478281:	74 19                	je     0x47829c
  478283:	85 db                	test   ebx,ebx
  478285:	75 45                	jne    0x4782cc
  478287:	fe c8                	dec    al
  478289:	53                   	push   ebx
  47828a:	b9 c8 87 6b 00       	mov    ecx,0x6b87c8
  47828f:	88 42 ff             	mov    BYTE PTR [edx-0x1],al
  478292:	e8 09 be f8 ff       	call   0x4040a0
  478297:	5f                   	pop    edi
  478298:	5e                   	pop    esi
  478299:	5b                   	pop    ebx
  47829a:	59                   	pop    ecx
  47829b:	c3                   	ret
  47829c:	8b 35 d4 87 6b 00    	mov    esi,DWORD PTR ds:0x6b87d4
  4782a2:	85 db                	test   ebx,ebx
  4782a4:	75 11                	jne    0x4782b7
  4782a6:	6a 01                	push   0x1
  4782a8:	b9 c8 87 6b 00       	mov    ecx,0x6b87c8
  4782ad:	e8 ee bd f8 ff       	call   0x4040a0
  4782b2:	5f                   	pop    edi
  4782b3:	5e                   	pop    esi
  4782b4:	5b                   	pop    ebx
  4782b5:	59                   	pop    ecx
  4782b6:	c3                   	ret
  4782b7:	83 fe 1f             	cmp    esi,0x1f
  4782ba:	77 04                	ja     0x4782c0
  4782bc:	3b f3                	cmp    esi,ebx
  4782be:	73 1d                	jae    0x4782dd
  4782c0:	6a 01                	push   0x1
  4782c2:	b9 c8 87 6b 00       	mov    ecx,0x6b87c8
  4782c7:	e8 d4 bd f8 ff       	call   0x4040a0
  4782cc:	53                   	push   ebx
  4782cd:	b9 c8 87 6b 00       	mov    ecx,0x6b87c8
  4782d2:	e8 89 97 f8 ff       	call   0x401a60
  4782d7:	8b 15 cc 87 6b 00    	mov    edx,DWORD PTR ds:0x6b87cc
  4782dd:	8b cb                	mov    ecx,ebx
  4782df:	8b fa                	mov    edi,edx
  4782e1:	8b d1                	mov    edx,ecx
  4782e3:	be 6c 2d 69 00       	mov    esi,0x692d6c
  4782e8:	c1 e9 02             	shr    ecx,0x2
  4782eb:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4782ed:	8b ca                	mov    ecx,edx
  4782ef:	83 e1 03             	and    ecx,0x3
  4782f2:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4782f4:	a1 cc 87 6b 00       	mov    eax,ds:0x6b87cc
  4782f9:	89 1d d0 87 6b 00    	mov    DWORD PTR ds:0x6b87d0,ebx
  4782ff:	5f                   	pop    edi
  478300:	5e                   	pop    esi
  478301:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  478305:	5b                   	pop    ebx
  478306:	59                   	pop    ecx
  478307:	c3                   	ret
  478308:	90                   	nop
  478309:	90                   	nop
  47830a:	90                   	nop
  47830b:	90                   	nop
  47830c:	90                   	nop
  47830d:	90                   	nop
  47830e:	90                   	nop
  47830f:	90                   	nop
  478310:	68 20 83 47 00       	push   0x478320
  478315:	e8 61 22 19 00       	call   0x60a57b
  47831a:	59                   	pop    ecx
  47831b:	c3                   	ret
  47831c:	90                   	nop
  47831d:	90                   	nop
  47831e:	90                   	nop
  47831f:	90                   	nop
  478320:	8b 0d cc 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b87cc
  478326:	85 c9                	test   ecx,ecx
  478328:	74 1c                	je     0x478346
  47832a:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  47832d:	84 c0                	test   al,al
  47832f:	74 0b                	je     0x47833c
  478331:	3c ff                	cmp    al,0xff
  478333:	74 07                	je     0x47833c
  478335:	fe c8                	dec    al
  478337:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  47833a:	eb 0a                	jmp    0x478346
  47833c:	49                   	dec    ecx
  47833d:	51                   	push   ecx
  47833e:	e8 ad 62 18 00       	call   0x5fe5f0
  478343:	83 c4 04             	add    esp,0x4
  478346:	c7 05 cc 87 6b 00 00 	mov    DWORD PTR ds:0x6b87cc,0x0
  47834d:	00 00 00 
  478350:	c7 05 d0 87 6b 00 00 	mov    DWORD PTR ds:0x6b87d0,0x0
  478357:	00 00 00 
  47835a:	c7 05 d4 87 6b 00 00 	mov    DWORD PTR ds:0x6b87d4,0x0
  478361:	00 00 00 
  478364:	c3                   	ret
  478365:	90                   	nop
  478366:	90                   	nop
  478367:	90                   	nop
  478368:	90                   	nop
  478369:	90                   	nop
  47836a:	90                   	nop
  47836b:	90                   	nop
  47836c:	90                   	nop
  47836d:	90                   	nop
  47836e:	90                   	nop
  47836f:	90                   	nop
  478370:	e8 0b 00 00 00       	call   0x478380
  478375:	e9 e6 00 00 00       	jmp    0x478460
  47837a:	90                   	nop
  47837b:	90                   	nop
  47837c:	90                   	nop
  47837d:	90                   	nop
  47837e:	90                   	nop
  47837f:	90                   	nop
  478380:	51                   	push   ecx
  478381:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  478385:	53                   	push   ebx
  478386:	56                   	push   esi
  478387:	57                   	push   edi
  478388:	a2 b8 87 6b 00       	mov    ds:0x6b87b8,al
  47838d:	bf 7c 2d 69 00       	mov    edi,0x692d7c
  478392:	83 c9 ff             	or     ecx,0xffffffff
  478395:	33 c0                	xor    eax,eax
  478397:	33 d2                	xor    edx,edx
  478399:	33 f6                	xor    esi,esi
  47839b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47839d:	f7 d1                	not    ecx
  47839f:	49                   	dec    ecx
  4783a0:	89 15 bc 87 6b 00    	mov    DWORD PTR ds:0x6b87bc,edx
  4783a6:	8b d9                	mov    ebx,ecx
  4783a8:	89 15 c0 87 6b 00    	mov    DWORD PTR ds:0x6b87c0,edx
  4783ae:	83 fb fd             	cmp    ebx,0xfffffffd
  4783b1:	89 35 c4 87 6b 00    	mov    DWORD PTR ds:0x6b87c4,esi
  4783b7:	76 39                	jbe    0x4783f2
  4783b9:	e8 3d 62 18 00       	call   0x5fe5fb
  4783be:	8b 15 bc 87 6b 00    	mov    edx,DWORD PTR ds:0x6b87bc
  4783c4:	85 d2                	test   edx,edx
  4783c6:	74 24                	je     0x4783ec
  4783c8:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
  4783cb:	84 c0                	test   al,al
  4783cd:	74 1d                	je     0x4783ec
  4783cf:	3c ff                	cmp    al,0xff
  4783d1:	74 19                	je     0x4783ec
  4783d3:	85 db                	test   ebx,ebx
  4783d5:	75 45                	jne    0x47841c
  4783d7:	fe c8                	dec    al
  4783d9:	53                   	push   ebx
  4783da:	b9 b8 87 6b 00       	mov    ecx,0x6b87b8
  4783df:	88 42 ff             	mov    BYTE PTR [edx-0x1],al
  4783e2:	e8 b9 bc f8 ff       	call   0x4040a0
  4783e7:	5f                   	pop    edi
  4783e8:	5e                   	pop    esi
  4783e9:	5b                   	pop    ebx
  4783ea:	59                   	pop    ecx
  4783eb:	c3                   	ret
  4783ec:	8b 35 c4 87 6b 00    	mov    esi,DWORD PTR ds:0x6b87c4
  4783f2:	85 db                	test   ebx,ebx
  4783f4:	75 11                	jne    0x478407
  4783f6:	6a 01                	push   0x1
  4783f8:	b9 b8 87 6b 00       	mov    ecx,0x6b87b8
  4783fd:	e8 9e bc f8 ff       	call   0x4040a0
  478402:	5f                   	pop    edi
  478403:	5e                   	pop    esi
  478404:	5b                   	pop    ebx
  478405:	59                   	pop    ecx
  478406:	c3                   	ret
  478407:	83 fe 1f             	cmp    esi,0x1f
  47840a:	77 04                	ja     0x478410
  47840c:	3b f3                	cmp    esi,ebx
  47840e:	73 1d                	jae    0x47842d
  478410:	6a 01                	push   0x1
  478412:	b9 b8 87 6b 00       	mov    ecx,0x6b87b8
  478417:	e8 84 bc f8 ff       	call   0x4040a0
  47841c:	53                   	push   ebx
  47841d:	b9 b8 87 6b 00       	mov    ecx,0x6b87b8
  478422:	e8 39 96 f8 ff       	call   0x401a60
  478427:	8b 15 bc 87 6b 00    	mov    edx,DWORD PTR ds:0x6b87bc
  47842d:	8b cb                	mov    ecx,ebx
  47842f:	8b fa                	mov    edi,edx
  478431:	8b d1                	mov    edx,ecx
  478433:	be 7c 2d 69 00       	mov    esi,0x692d7c
  478438:	c1 e9 02             	shr    ecx,0x2
  47843b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47843d:	8b ca                	mov    ecx,edx
  47843f:	83 e1 03             	and    ecx,0x3
  478442:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  478444:	a1 bc 87 6b 00       	mov    eax,ds:0x6b87bc
  478449:	89 1d c0 87 6b 00    	mov    DWORD PTR ds:0x6b87c0,ebx
  47844f:	5f                   	pop    edi
  478450:	5e                   	pop    esi
  478451:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  478455:	5b                   	pop    ebx
  478456:	59                   	pop    ecx
  478457:	c3                   	ret
  478458:	90                   	nop
  478459:	90                   	nop
  47845a:	90                   	nop
  47845b:	90                   	nop
  47845c:	90                   	nop
  47845d:	90                   	nop
  47845e:	90                   	nop
  47845f:	90                   	nop
  478460:	68 70 84 47 00       	push   0x478470
  478465:	e8 11 21 19 00       	call   0x60a57b
  47846a:	59                   	pop    ecx
  47846b:	c3                   	ret
  47846c:	90                   	nop
  47846d:	90                   	nop
  47846e:	90                   	nop
  47846f:	90                   	nop
  478470:	8b 0d bc 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b87bc
  478476:	85 c9                	test   ecx,ecx
  478478:	74 1c                	je     0x478496
  47847a:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  47847d:	84 c0                	test   al,al
  47847f:	74 0b                	je     0x47848c
  478481:	3c ff                	cmp    al,0xff
  478483:	74 07                	je     0x47848c
  478485:	fe c8                	dec    al
  478487:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  47848a:	eb 0a                	jmp    0x478496
  47848c:	49                   	dec    ecx
  47848d:	51                   	push   ecx
  47848e:	e8 5d 61 18 00       	call   0x5fe5f0
  478493:	83 c4 04             	add    esp,0x4
  478496:	c7 05 bc 87 6b 00 00 	mov    DWORD PTR ds:0x6b87bc,0x0
  47849d:	00 00 00 
  4784a0:	c7 05 c0 87 6b 00 00 	mov    DWORD PTR ds:0x6b87c0,0x0
  4784a7:	00 00 00 
  4784aa:	c7 05 c4 87 6b 00 00 	mov    DWORD PTR ds:0x6b87c4,0x0
  4784b1:	00 00 00 
  4784b4:	c3                   	ret
  4784b5:	90                   	nop
  4784b6:	90                   	nop
  4784b7:	90                   	nop
  4784b8:	90                   	nop
  4784b9:	90                   	nop
  4784ba:	90                   	nop
  4784bb:	90                   	nop
  4784bc:	90                   	nop
  4784bd:	90                   	nop
  4784be:	90                   	nop
  4784bf:	90                   	nop
  4784c0:	e8 0b 00 00 00       	call   0x4784d0
  4784c5:	e9 e6 00 00 00       	jmp    0x4785b0
  4784ca:	90                   	nop
  4784cb:	90                   	nop
  4784cc:	90                   	nop
  4784cd:	90                   	nop
  4784ce:	90                   	nop
  4784cf:	90                   	nop
  4784d0:	51                   	push   ecx
  4784d1:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  4784d5:	53                   	push   ebx
  4784d6:	56                   	push   esi
  4784d7:	57                   	push   edi
  4784d8:	a2 a8 87 6b 00       	mov    ds:0x6b87a8,al
  4784dd:	bf d0 2f 69 00       	mov    edi,0x692fd0
  4784e2:	83 c9 ff             	or     ecx,0xffffffff
  4784e5:	33 c0                	xor    eax,eax
  4784e7:	33 d2                	xor    edx,edx
  4784e9:	33 f6                	xor    esi,esi
  4784eb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4784ed:	f7 d1                	not    ecx
  4784ef:	49                   	dec    ecx
  4784f0:	89 15 ac 87 6b 00    	mov    DWORD PTR ds:0x6b87ac,edx
  4784f6:	8b d9                	mov    ebx,ecx
  4784f8:	89 15 b0 87 6b 00    	mov    DWORD PTR ds:0x6b87b0,edx
  4784fe:	83 fb fd             	cmp    ebx,0xfffffffd
  478501:	89 35 b4 87 6b 00    	mov    DWORD PTR ds:0x6b87b4,esi
  478507:	76 39                	jbe    0x478542
  478509:	e8 ed 60 18 00       	call   0x5fe5fb
  47850e:	8b 15 ac 87 6b 00    	mov    edx,DWORD PTR ds:0x6b87ac
  478514:	85 d2                	test   edx,edx
  478516:	74 24                	je     0x47853c
  478518:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
  47851b:	84 c0                	test   al,al
  47851d:	74 1d                	je     0x47853c
  47851f:	3c ff                	cmp    al,0xff
  478521:	74 19                	je     0x47853c
  478523:	85 db                	test   ebx,ebx
  478525:	75 45                	jne    0x47856c
  478527:	fe c8                	dec    al
  478529:	53                   	push   ebx
  47852a:	b9 a8 87 6b 00       	mov    ecx,0x6b87a8
  47852f:	88 42 ff             	mov    BYTE PTR [edx-0x1],al
  478532:	e8 69 bb f8 ff       	call   0x4040a0
  478537:	5f                   	pop    edi
  478538:	5e                   	pop    esi
  478539:	5b                   	pop    ebx
  47853a:	59                   	pop    ecx
  47853b:	c3                   	ret
  47853c:	8b 35 b4 87 6b 00    	mov    esi,DWORD PTR ds:0x6b87b4
  478542:	85 db                	test   ebx,ebx
  478544:	75 11                	jne    0x478557
  478546:	6a 01                	push   0x1
  478548:	b9 a8 87 6b 00       	mov    ecx,0x6b87a8
  47854d:	e8 4e bb f8 ff       	call   0x4040a0
  478552:	5f                   	pop    edi
  478553:	5e                   	pop    esi
  478554:	5b                   	pop    ebx
  478555:	59                   	pop    ecx
  478556:	c3                   	ret
  478557:	83 fe 1f             	cmp    esi,0x1f
  47855a:	77 04                	ja     0x478560
  47855c:	3b f3                	cmp    esi,ebx
  47855e:	73 1d                	jae    0x47857d
  478560:	6a 01                	push   0x1
  478562:	b9 a8 87 6b 00       	mov    ecx,0x6b87a8
  478567:	e8 34 bb f8 ff       	call   0x4040a0
  47856c:	53                   	push   ebx
  47856d:	b9 a8 87 6b 00       	mov    ecx,0x6b87a8
  478572:	e8 e9 94 f8 ff       	call   0x401a60
  478577:	8b 15 ac 87 6b 00    	mov    edx,DWORD PTR ds:0x6b87ac
  47857d:	8b cb                	mov    ecx,ebx
  47857f:	8b fa                	mov    edi,edx
  478581:	8b d1                	mov    edx,ecx
  478583:	be d0 2f 69 00       	mov    esi,0x692fd0
  478588:	c1 e9 02             	shr    ecx,0x2
  47858b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47858d:	8b ca                	mov    ecx,edx
  47858f:	83 e1 03             	and    ecx,0x3
  478592:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  478594:	a1 ac 87 6b 00       	mov    eax,ds:0x6b87ac
  478599:	89 1d b0 87 6b 00    	mov    DWORD PTR ds:0x6b87b0,ebx
  47859f:	5f                   	pop    edi
  4785a0:	5e                   	pop    esi
  4785a1:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  4785a5:	5b                   	pop    ebx
  4785a6:	59                   	pop    ecx
  4785a7:	c3                   	ret
  4785a8:	90                   	nop
  4785a9:	90                   	nop
  4785aa:	90                   	nop
  4785ab:	90                   	nop
  4785ac:	90                   	nop
  4785ad:	90                   	nop
  4785ae:	90                   	nop
  4785af:	90                   	nop
  4785b0:	68 c0 85 47 00       	push   0x4785c0
  4785b5:	e8 c1 1f 19 00       	call   0x60a57b
  4785ba:	59                   	pop    ecx
  4785bb:	c3                   	ret
  4785bc:	90                   	nop
  4785bd:	90                   	nop
  4785be:	90                   	nop
  4785bf:	90                   	nop
  4785c0:	8b 0d ac 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b87ac
  4785c6:	85 c9                	test   ecx,ecx
  4785c8:	74 1c                	je     0x4785e6
  4785ca:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4785cd:	84 c0                	test   al,al
  4785cf:	74 0b                	je     0x4785dc
  4785d1:	3c ff                	cmp    al,0xff
  4785d3:	74 07                	je     0x4785dc
  4785d5:	fe c8                	dec    al
  4785d7:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4785da:	eb 0a                	jmp    0x4785e6
  4785dc:	49                   	dec    ecx
  4785dd:	51                   	push   ecx
  4785de:	e8 0d 60 18 00       	call   0x5fe5f0
  4785e3:	83 c4 04             	add    esp,0x4
  4785e6:	c7 05 ac 87 6b 00 00 	mov    DWORD PTR ds:0x6b87ac,0x0
  4785ed:	00 00 00 
  4785f0:	c7 05 b0 87 6b 00 00 	mov    DWORD PTR ds:0x6b87b0,0x0
  4785f7:	00 00 00 
  4785fa:	c7 05 b4 87 6b 00 00 	mov    DWORD PTR ds:0x6b87b4,0x0
  478601:	00 00 00 
  478604:	c3                   	ret
  478605:	90                   	nop
  478606:	90                   	nop
  478607:	90                   	nop
  478608:	90                   	nop
  478609:	90                   	nop
  47860a:	90                   	nop
  47860b:	90                   	nop
  47860c:	90                   	nop
  47860d:	90                   	nop
  47860e:	90                   	nop
  47860f:	90                   	nop
  478610:	e8 0b 00 00 00       	call   0x478620
  478615:	e9 e6 00 00 00       	jmp    0x478700
  47861a:	90                   	nop
  47861b:	90                   	nop
  47861c:	90                   	nop
  47861d:	90                   	nop
  47861e:	90                   	nop
  47861f:	90                   	nop
  478620:	51                   	push   ecx
  478621:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  478625:	53                   	push   ebx
  478626:	56                   	push   esi
  478627:	57                   	push   edi
  478628:	a2 98 87 6b 00       	mov    ds:0x6b8798,al
  47862d:	bf 48 29 69 00       	mov    edi,0x692948
  478632:	83 c9 ff             	or     ecx,0xffffffff
  478635:	33 c0                	xor    eax,eax
  478637:	33 d2                	xor    edx,edx
  478639:	33 f6                	xor    esi,esi
  47863b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47863d:	f7 d1                	not    ecx
  47863f:	49                   	dec    ecx
  478640:	89 15 9c 87 6b 00    	mov    DWORD PTR ds:0x6b879c,edx
  478646:	8b d9                	mov    ebx,ecx
  478648:	89 15 a0 87 6b 00    	mov    DWORD PTR ds:0x6b87a0,edx
  47864e:	83 fb fd             	cmp    ebx,0xfffffffd
  478651:	89 35 a4 87 6b 00    	mov    DWORD PTR ds:0x6b87a4,esi
  478657:	76 39                	jbe    0x478692
  478659:	e8 9d 5f 18 00       	call   0x5fe5fb
  47865e:	8b 15 9c 87 6b 00    	mov    edx,DWORD PTR ds:0x6b879c
  478664:	85 d2                	test   edx,edx
  478666:	74 24                	je     0x47868c
  478668:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
  47866b:	84 c0                	test   al,al
  47866d:	74 1d                	je     0x47868c
  47866f:	3c ff                	cmp    al,0xff
  478671:	74 19                	je     0x47868c
  478673:	85 db                	test   ebx,ebx
  478675:	75 45                	jne    0x4786bc
  478677:	fe c8                	dec    al
  478679:	53                   	push   ebx
  47867a:	b9 98 87 6b 00       	mov    ecx,0x6b8798
  47867f:	88 42 ff             	mov    BYTE PTR [edx-0x1],al
  478682:	e8 19 ba f8 ff       	call   0x4040a0
  478687:	5f                   	pop    edi
  478688:	5e                   	pop    esi
  478689:	5b                   	pop    ebx
  47868a:	59                   	pop    ecx
  47868b:	c3                   	ret
  47868c:	8b 35 a4 87 6b 00    	mov    esi,DWORD PTR ds:0x6b87a4
  478692:	85 db                	test   ebx,ebx
  478694:	75 11                	jne    0x4786a7
  478696:	6a 01                	push   0x1
  478698:	b9 98 87 6b 00       	mov    ecx,0x6b8798
  47869d:	e8 fe b9 f8 ff       	call   0x4040a0
  4786a2:	5f                   	pop    edi
  4786a3:	5e                   	pop    esi
  4786a4:	5b                   	pop    ebx
  4786a5:	59                   	pop    ecx
  4786a6:	c3                   	ret
  4786a7:	83 fe 1f             	cmp    esi,0x1f
  4786aa:	77 04                	ja     0x4786b0
  4786ac:	3b f3                	cmp    esi,ebx
  4786ae:	73 1d                	jae    0x4786cd
  4786b0:	6a 01                	push   0x1
  4786b2:	b9 98 87 6b 00       	mov    ecx,0x6b8798
  4786b7:	e8 e4 b9 f8 ff       	call   0x4040a0
  4786bc:	53                   	push   ebx
  4786bd:	b9 98 87 6b 00       	mov    ecx,0x6b8798
  4786c2:	e8 99 93 f8 ff       	call   0x401a60
  4786c7:	8b 15 9c 87 6b 00    	mov    edx,DWORD PTR ds:0x6b879c
  4786cd:	8b cb                	mov    ecx,ebx
  4786cf:	8b fa                	mov    edi,edx
  4786d1:	8b d1                	mov    edx,ecx
  4786d3:	be 48 29 69 00       	mov    esi,0x692948
  4786d8:	c1 e9 02             	shr    ecx,0x2
  4786db:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4786dd:	8b ca                	mov    ecx,edx
  4786df:	83 e1 03             	and    ecx,0x3
  4786e2:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4786e4:	a1 9c 87 6b 00       	mov    eax,ds:0x6b879c
  4786e9:	89 1d a0 87 6b 00    	mov    DWORD PTR ds:0x6b87a0,ebx
  4786ef:	5f                   	pop    edi
  4786f0:	5e                   	pop    esi
  4786f1:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  4786f5:	5b                   	pop    ebx
  4786f6:	59                   	pop    ecx
  4786f7:	c3                   	ret
  4786f8:	90                   	nop
  4786f9:	90                   	nop
  4786fa:	90                   	nop
  4786fb:	90                   	nop
  4786fc:	90                   	nop
  4786fd:	90                   	nop
  4786fe:	90                   	nop
  4786ff:	90                   	nop
  478700:	68 10 87 47 00       	push   0x478710
  478705:	e8 71 1e 19 00       	call   0x60a57b
  47870a:	59                   	pop    ecx
  47870b:	c3                   	ret
  47870c:	90                   	nop
  47870d:	90                   	nop
  47870e:	90                   	nop
  47870f:	90                   	nop
  478710:	8b 0d 9c 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b879c
  478716:	85 c9                	test   ecx,ecx
  478718:	74 1c                	je     0x478736
  47871a:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  47871d:	84 c0                	test   al,al
  47871f:	74 0b                	je     0x47872c
  478721:	3c ff                	cmp    al,0xff
  478723:	74 07                	je     0x47872c
  478725:	fe c8                	dec    al
  478727:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  47872a:	eb 0a                	jmp    0x478736
  47872c:	49                   	dec    ecx
  47872d:	51                   	push   ecx
  47872e:	e8 bd 5e 18 00       	call   0x5fe5f0
  478733:	83 c4 04             	add    esp,0x4
  478736:	c7 05 9c 87 6b 00 00 	mov    DWORD PTR ds:0x6b879c,0x0
  47873d:	00 00 00 
  478740:	c7 05 a0 87 6b 00 00 	mov    DWORD PTR ds:0x6b87a0,0x0
  478747:	00 00 00 
  47874a:	c7 05 a4 87 6b 00 00 	mov    DWORD PTR ds:0x6b87a4,0x0
  478751:	00 00 00 
  478754:	c3                   	ret
  478755:	90                   	nop
  478756:	90                   	nop
  478757:	90                   	nop
  478758:	90                   	nop
  478759:	90                   	nop
  47875a:	90                   	nop
  47875b:	90                   	nop
  47875c:	90                   	nop
  47875d:	90                   	nop
  47875e:	90                   	nop
  47875f:	90                   	nop
  478760:	e8 0b 00 00 00       	call   0x478770
  478765:	e9 e6 00 00 00       	jmp    0x478850
  47876a:	90                   	nop
  47876b:	90                   	nop
  47876c:	90                   	nop
  47876d:	90                   	nop
  47876e:	90                   	nop
  47876f:	90                   	nop
  478770:	51                   	push   ecx
  478771:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  478775:	53                   	push   ebx
  478776:	56                   	push   esi
  478777:	57                   	push   edi
  478778:	a2 88 87 6b 00       	mov    ds:0x6b8788,al
  47877d:	bf 54 29 69 00       	mov    edi,0x692954
  478782:	83 c9 ff             	or     ecx,0xffffffff
  478785:	33 c0                	xor    eax,eax
  478787:	33 d2                	xor    edx,edx
  478789:	33 f6                	xor    esi,esi
  47878b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47878d:	f7 d1                	not    ecx
  47878f:	49                   	dec    ecx
  478790:	89 15 8c 87 6b 00    	mov    DWORD PTR ds:0x6b878c,edx
  478796:	8b d9                	mov    ebx,ecx
  478798:	89 15 90 87 6b 00    	mov    DWORD PTR ds:0x6b8790,edx
  47879e:	83 fb fd             	cmp    ebx,0xfffffffd
  4787a1:	89 35 94 87 6b 00    	mov    DWORD PTR ds:0x6b8794,esi
  4787a7:	76 39                	jbe    0x4787e2
  4787a9:	e8 4d 5e 18 00       	call   0x5fe5fb
  4787ae:	8b 15 8c 87 6b 00    	mov    edx,DWORD PTR ds:0x6b878c
  4787b4:	85 d2                	test   edx,edx
  4787b6:	74 24                	je     0x4787dc
  4787b8:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
  4787bb:	84 c0                	test   al,al
  4787bd:	74 1d                	je     0x4787dc
  4787bf:	3c ff                	cmp    al,0xff
  4787c1:	74 19                	je     0x4787dc
  4787c3:	85 db                	test   ebx,ebx
  4787c5:	75 45                	jne    0x47880c
  4787c7:	fe c8                	dec    al
  4787c9:	53                   	push   ebx
  4787ca:	b9 88 87 6b 00       	mov    ecx,0x6b8788
  4787cf:	88 42 ff             	mov    BYTE PTR [edx-0x1],al
  4787d2:	e8 c9 b8 f8 ff       	call   0x4040a0
  4787d7:	5f                   	pop    edi
  4787d8:	5e                   	pop    esi
  4787d9:	5b                   	pop    ebx
  4787da:	59                   	pop    ecx
  4787db:	c3                   	ret
  4787dc:	8b 35 94 87 6b 00    	mov    esi,DWORD PTR ds:0x6b8794
  4787e2:	85 db                	test   ebx,ebx
  4787e4:	75 11                	jne    0x4787f7
  4787e6:	6a 01                	push   0x1
  4787e8:	b9 88 87 6b 00       	mov    ecx,0x6b8788
  4787ed:	e8 ae b8 f8 ff       	call   0x4040a0
  4787f2:	5f                   	pop    edi
  4787f3:	5e                   	pop    esi
  4787f4:	5b                   	pop    ebx
  4787f5:	59                   	pop    ecx
  4787f6:	c3                   	ret
  4787f7:	83 fe 1f             	cmp    esi,0x1f
  4787fa:	77 04                	ja     0x478800
  4787fc:	3b f3                	cmp    esi,ebx
  4787fe:	73 1d                	jae    0x47881d
  478800:	6a 01                	push   0x1
  478802:	b9 88 87 6b 00       	mov    ecx,0x6b8788
  478807:	e8 94 b8 f8 ff       	call   0x4040a0
  47880c:	53                   	push   ebx
  47880d:	b9 88 87 6b 00       	mov    ecx,0x6b8788
  478812:	e8 49 92 f8 ff       	call   0x401a60
  478817:	8b 15 8c 87 6b 00    	mov    edx,DWORD PTR ds:0x6b878c
  47881d:	8b cb                	mov    ecx,ebx
  47881f:	8b fa                	mov    edi,edx
  478821:	8b d1                	mov    edx,ecx
  478823:	be 54 29 69 00       	mov    esi,0x692954
  478828:	c1 e9 02             	shr    ecx,0x2
  47882b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47882d:	8b ca                	mov    ecx,edx
  47882f:	83 e1 03             	and    ecx,0x3
  478832:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  478834:	a1 8c 87 6b 00       	mov    eax,ds:0x6b878c
  478839:	89 1d 90 87 6b 00    	mov    DWORD PTR ds:0x6b8790,ebx
  47883f:	5f                   	pop    edi
  478840:	5e                   	pop    esi
  478841:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  478845:	5b                   	pop    ebx
  478846:	59                   	pop    ecx
  478847:	c3                   	ret
  478848:	90                   	nop
  478849:	90                   	nop
  47884a:	90                   	nop
  47884b:	90                   	nop
  47884c:	90                   	nop
  47884d:	90                   	nop
  47884e:	90                   	nop
  47884f:	90                   	nop
  478850:	68 60 88 47 00       	push   0x478860
  478855:	e8 21 1d 19 00       	call   0x60a57b
  47885a:	59                   	pop    ecx
  47885b:	c3                   	ret
  47885c:	90                   	nop
  47885d:	90                   	nop
  47885e:	90                   	nop
  47885f:	90                   	nop
  478860:	8b 0d 8c 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b878c
  478866:	85 c9                	test   ecx,ecx
  478868:	74 1c                	je     0x478886
  47886a:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  47886d:	84 c0                	test   al,al
  47886f:	74 0b                	je     0x47887c
  478871:	3c ff                	cmp    al,0xff
  478873:	74 07                	je     0x47887c
  478875:	fe c8                	dec    al
  478877:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  47887a:	eb 0a                	jmp    0x478886
  47887c:	49                   	dec    ecx
  47887d:	51                   	push   ecx
  47887e:	e8 6d 5d 18 00       	call   0x5fe5f0
  478883:	83 c4 04             	add    esp,0x4
  478886:	c7 05 8c 87 6b 00 00 	mov    DWORD PTR ds:0x6b878c,0x0
  47888d:	00 00 00 
  478890:	c7 05 90 87 6b 00 00 	mov    DWORD PTR ds:0x6b8790,0x0
  478897:	00 00 00 
  47889a:	c7 05 94 87 6b 00 00 	mov    DWORD PTR ds:0x6b8794,0x0
  4788a1:	00 00 00 
  4788a4:	c3                   	ret
  4788a5:	90                   	nop
  4788a6:	90                   	nop
  4788a7:	90                   	nop
  4788a8:	90                   	nop
  4788a9:	90                   	nop
  4788aa:	90                   	nop
  4788ab:	90                   	nop
  4788ac:	90                   	nop
  4788ad:	90                   	nop
  4788ae:	90                   	nop
  4788af:	90                   	nop
  4788b0:	e8 0b 00 00 00       	call   0x4788c0
  4788b5:	e9 e6 00 00 00       	jmp    0x4789a0
  4788ba:	90                   	nop
  4788bb:	90                   	nop
  4788bc:	90                   	nop
  4788bd:	90                   	nop
  4788be:	90                   	nop
  4788bf:	90                   	nop
  4788c0:	51                   	push   ecx
  4788c1:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  4788c5:	53                   	push   ebx
  4788c6:	56                   	push   esi
  4788c7:	57                   	push   edi
  4788c8:	a2 78 87 6b 00       	mov    ds:0x6b8778,al
  4788cd:	bf 60 29 69 00       	mov    edi,0x692960
  4788d2:	83 c9 ff             	or     ecx,0xffffffff
  4788d5:	33 c0                	xor    eax,eax
  4788d7:	33 d2                	xor    edx,edx
  4788d9:	33 f6                	xor    esi,esi
  4788db:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4788dd:	f7 d1                	not    ecx
  4788df:	49                   	dec    ecx
  4788e0:	89 15 7c 87 6b 00    	mov    DWORD PTR ds:0x6b877c,edx
  4788e6:	8b d9                	mov    ebx,ecx
  4788e8:	89 15 80 87 6b 00    	mov    DWORD PTR ds:0x6b8780,edx
  4788ee:	83 fb fd             	cmp    ebx,0xfffffffd
  4788f1:	89 35 84 87 6b 00    	mov    DWORD PTR ds:0x6b8784,esi
  4788f7:	76 39                	jbe    0x478932
  4788f9:	e8 fd 5c 18 00       	call   0x5fe5fb
  4788fe:	8b 15 7c 87 6b 00    	mov    edx,DWORD PTR ds:0x6b877c
  478904:	85 d2                	test   edx,edx
  478906:	74 24                	je     0x47892c
  478908:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
  47890b:	84 c0                	test   al,al
  47890d:	74 1d                	je     0x47892c
  47890f:	3c ff                	cmp    al,0xff
  478911:	74 19                	je     0x47892c
  478913:	85 db                	test   ebx,ebx
  478915:	75 45                	jne    0x47895c
  478917:	fe c8                	dec    al
  478919:	53                   	push   ebx
  47891a:	b9 78 87 6b 00       	mov    ecx,0x6b8778
  47891f:	88 42 ff             	mov    BYTE PTR [edx-0x1],al
  478922:	e8 79 b7 f8 ff       	call   0x4040a0
  478927:	5f                   	pop    edi
  478928:	5e                   	pop    esi
  478929:	5b                   	pop    ebx
  47892a:	59                   	pop    ecx
  47892b:	c3                   	ret
  47892c:	8b 35 84 87 6b 00    	mov    esi,DWORD PTR ds:0x6b8784
  478932:	85 db                	test   ebx,ebx
  478934:	75 11                	jne    0x478947
  478936:	6a 01                	push   0x1
  478938:	b9 78 87 6b 00       	mov    ecx,0x6b8778
  47893d:	e8 5e b7 f8 ff       	call   0x4040a0
  478942:	5f                   	pop    edi
  478943:	5e                   	pop    esi
  478944:	5b                   	pop    ebx
  478945:	59                   	pop    ecx
  478946:	c3                   	ret
  478947:	83 fe 1f             	cmp    esi,0x1f
  47894a:	77 04                	ja     0x478950
  47894c:	3b f3                	cmp    esi,ebx
  47894e:	73 1d                	jae    0x47896d
  478950:	6a 01                	push   0x1
  478952:	b9 78 87 6b 00       	mov    ecx,0x6b8778
  478957:	e8 44 b7 f8 ff       	call   0x4040a0
  47895c:	53                   	push   ebx
  47895d:	b9 78 87 6b 00       	mov    ecx,0x6b8778
  478962:	e8 f9 90 f8 ff       	call   0x401a60
  478967:	8b 15 7c 87 6b 00    	mov    edx,DWORD PTR ds:0x6b877c
  47896d:	8b cb                	mov    ecx,ebx
  47896f:	8b fa                	mov    edi,edx
  478971:	8b d1                	mov    edx,ecx
  478973:	be 60 29 69 00       	mov    esi,0x692960
  478978:	c1 e9 02             	shr    ecx,0x2
  47897b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47897d:	8b ca                	mov    ecx,edx
  47897f:	83 e1 03             	and    ecx,0x3
  478982:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  478984:	a1 7c 87 6b 00       	mov    eax,ds:0x6b877c
  478989:	89 1d 80 87 6b 00    	mov    DWORD PTR ds:0x6b8780,ebx
  47898f:	5f                   	pop    edi
  478990:	5e                   	pop    esi
  478991:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  478995:	5b                   	pop    ebx
  478996:	59                   	pop    ecx
  478997:	c3                   	ret
  478998:	90                   	nop
  478999:	90                   	nop
  47899a:	90                   	nop
  47899b:	90                   	nop
  47899c:	90                   	nop
  47899d:	90                   	nop
  47899e:	90                   	nop
  47899f:	90                   	nop
  4789a0:	68 b0 89 47 00       	push   0x4789b0
  4789a5:	e8 d1 1b 19 00       	call   0x60a57b
  4789aa:	59                   	pop    ecx
  4789ab:	c3                   	ret
  4789ac:	90                   	nop
  4789ad:	90                   	nop
  4789ae:	90                   	nop
  4789af:	90                   	nop
  4789b0:	8b 0d 7c 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b877c
  4789b6:	85 c9                	test   ecx,ecx
  4789b8:	74 1c                	je     0x4789d6
  4789ba:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4789bd:	84 c0                	test   al,al
  4789bf:	74 0b                	je     0x4789cc
  4789c1:	3c ff                	cmp    al,0xff
  4789c3:	74 07                	je     0x4789cc
  4789c5:	fe c8                	dec    al
  4789c7:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4789ca:	eb 0a                	jmp    0x4789d6
  4789cc:	49                   	dec    ecx
  4789cd:	51                   	push   ecx
  4789ce:	e8 1d 5c 18 00       	call   0x5fe5f0
  4789d3:	83 c4 04             	add    esp,0x4
  4789d6:	c7 05 7c 87 6b 00 00 	mov    DWORD PTR ds:0x6b877c,0x0
  4789dd:	00 00 00 
  4789e0:	c7 05 80 87 6b 00 00 	mov    DWORD PTR ds:0x6b8780,0x0
  4789e7:	00 00 00 
  4789ea:	c7 05 84 87 6b 00 00 	mov    DWORD PTR ds:0x6b8784,0x0
  4789f1:	00 00 00 
  4789f4:	c3                   	ret
  4789f5:	90                   	nop
  4789f6:	90                   	nop
  4789f7:	90                   	nop
  4789f8:	90                   	nop
  4789f9:	90                   	nop
  4789fa:	90                   	nop
  4789fb:	90                   	nop
  4789fc:	90                   	nop
  4789fd:	90                   	nop
  4789fe:	90                   	nop
  4789ff:	90                   	nop
