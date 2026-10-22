
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00599300 <.text+0x198300>:
  599300:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  599304:	33 f6                	xor    esi,esi
  599306:	83 c4 1c             	add    esp,0x1c
  599309:	3b c6                	cmp    eax,esi
  59930b:	74 1d                	je     0x59932a
  59930d:	8d 48 ff             	lea    ecx,[eax-0x1]
  599310:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  599313:	84 c0                	test   al,al
  599315:	74 0a                	je     0x599321
  599317:	3c ff                	cmp    al,0xff
  599319:	74 06                	je     0x599321
  59931b:	fe c8                	dec    al
  59931d:	88 01                	mov    BYTE PTR [ecx],al
  59931f:	eb 09                	jmp    0x59932a
  599321:	51                   	push   ecx
  599322:	e8 c9 52 06 00       	call   0x5fe5f0
  599327:	83 c4 04             	add    esp,0x4
  59932a:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  59932e:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  599332:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  599336:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  59933a:	c6 44 24 2c 00       	mov    BYTE PTR [esp+0x2c],0x0
  59933f:	e8 9c 9d fc ff       	call   0x5630e0
  599344:	e9 da 00 00 00       	jmp    0x599423
  599349:	33 f6                	xor    esi,esi
  59934b:	8d 6f 34             	lea    ebp,[edi+0x34]
  59934e:	8b cd                	mov    ecx,ebp
  599350:	e8 9b 1e 00 00       	call   0x59b1f0
  599355:	84 c0                	test   al,al
  599357:	0f 84 a1 00 00 00    	je     0x5993fe
  59935d:	46                   	inc    esi
  59935e:	83 c5 04             	add    ebp,0x4
  599361:	83 fe 08             	cmp    esi,0x8
  599364:	7c e8                	jl     0x59934e
  599366:	8a 44 24 34          	mov    al,BYTE PTR [esp+0x34]
  59936a:	bf 08 6e 6a 00       	mov    edi,0x6a6e08
  59936f:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  599373:	83 c9 ff             	or     ecx,0xffffffff
  599376:	33 c0                	xor    eax,eax
  599378:	33 db                	xor    ebx,ebx
  59937a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59937c:	f7 d1                	not    ecx
  59937e:	49                   	dec    ecx
  59937f:	6a 01                	push   0x1
  599381:	8b e9                	mov    ebp,ecx
  599383:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  599387:	55                   	push   ebp
  599388:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59938c:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  599390:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  599394:	e8 a7 85 e6 ff       	call   0x401940
  599399:	84 c0                	test   al,al
  59939b:	74 24                	je     0x5993c1
  59939d:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  5993a1:	8b cd                	mov    ecx,ebp
  5993a3:	8b d1                	mov    edx,ecx
  5993a5:	be 08 6e 6a 00       	mov    esi,0x6a6e08
  5993aa:	c1 e9 02             	shr    ecx,0x2
  5993ad:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5993af:	8b ca                	mov    ecx,edx
  5993b1:	83 e1 03             	and    ecx,0x3
  5993b4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5993b6:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5993ba:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  5993be:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  5993c1:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5993c5:	c6 44 24 2c 06       	mov    BYTE PTR [esp+0x2c],0x6
  5993ca:	51                   	push   ecx
  5993cb:	68 c3 01 00 00       	push   0x1c3
  5993d0:	68 ec 6c 6a 00       	push   0x6a6cec
  5993d5:	68 d0 d2 68 00       	push   0x68d2d0
  5993da:	e8 11 74 00 00       	call   0x5a07f0
  5993df:	ff d0                	call   eax
  5993e1:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  5993e5:	83 c4 10             	add    esp,0x10
  5993e8:	3b cb                	cmp    ecx,ebx
  5993ea:	74 2b                	je     0x599417
  5993ec:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  5993ef:	49                   	dec    ecx
  5993f0:	84 c0                	test   al,al
  5993f2:	74 1a                	je     0x59940e
  5993f4:	3c ff                	cmp    al,0xff
  5993f6:	74 16                	je     0x59940e
  5993f8:	fe c8                	dec    al
  5993fa:	88 01                	mov    BYTE PTR [ecx],al
  5993fc:	eb 19                	jmp    0x599417
  5993fe:	8d 54 24 34          	lea    edx,[esp+0x34]
  599402:	8d 4c b7 34          	lea    ecx,[edi+esi*4+0x34]
  599406:	52                   	push   edx
  599407:	e8 c4 1d 00 00       	call   0x59b1d0
  59940c:	eb 15                	jmp    0x599423
  59940e:	51                   	push   ecx
  59940f:	e8 dc 51 06 00       	call   0x5fe5f0
  599414:	83 c4 04             	add    esp,0x4
  599417:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  59941b:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  59941f:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  599423:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  599427:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  59942e:	ff 
  59942f:	e8 ac 9c fc ff       	call   0x5630e0
  599434:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  599438:	5f                   	pop    edi
  599439:	5e                   	pop    esi
  59943a:	5d                   	pop    ebp
  59943b:	5b                   	pop    ebx
  59943c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  599443:	83 c4 20             	add    esp,0x20
  599446:	c2 04 00             	ret    0x4
  599449:	90                   	nop
  59944a:	90                   	nop
  59944b:	90                   	nop
  59944c:	90                   	nop
  59944d:	90                   	nop
  59944e:	90                   	nop
  59944f:	90                   	nop
  599450:	51                   	push   ecx
  599451:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  599455:	8b 49 68             	mov    ecx,DWORD PTR [ecx+0x68]
  599458:	c7 44 24 00 00 00 00 	mov    DWORD PTR [esp+0x0],0x0
  59945f:	00 
  599460:	89 08                	mov    DWORD PTR [eax],ecx
  599462:	59                   	pop    ecx
  599463:	c2 04 00             	ret    0x4
  599466:	90                   	nop
  599467:	90                   	nop
  599468:	90                   	nop
  599469:	90                   	nop
  59946a:	90                   	nop
  59946b:	90                   	nop
  59946c:	90                   	nop
  59946d:	90                   	nop
  59946e:	90                   	nop
  59946f:	90                   	nop
  599470:	53                   	push   ebx
  599471:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
  599475:	57                   	push   edi
  599476:	8b f9                	mov    edi,ecx
  599478:	39 5f 64             	cmp    DWORD PTR [edi+0x64],ebx
  59947b:	74 36                	je     0x5994b3
  59947d:	55                   	push   ebp
  59947e:	56                   	push   esi
  59947f:	53                   	push   ebx
  599480:	e8 bb 00 00 00       	call   0x599540
  599485:	8d 77 34             	lea    esi,[edi+0x34]
  599488:	bd 08 00 00 00       	mov    ebp,0x8
  59948d:	8b ce                	mov    ecx,esi
  59948f:	e8 5c 1d 00 00       	call   0x59b1f0
  599494:	84 c0                	test   al,al
  599496:	74 13                	je     0x5994ab
  599498:	8b 06                	mov    eax,DWORD PTR [esi]
  59949a:	8b 4f 6c             	mov    ecx,DWORD PTR [edi+0x6c]
  59949d:	53                   	push   ebx
  59949e:	50                   	push   eax
  59949f:	e8 ec 4a 00 00       	call   0x59df90
  5994a4:	8b c8                	mov    ecx,eax
  5994a6:	e8 c5 ff ff ff       	call   0x599470
  5994ab:	83 c6 04             	add    esi,0x4
  5994ae:	4d                   	dec    ebp
  5994af:	75 dc                	jne    0x59948d
  5994b1:	5e                   	pop    esi
  5994b2:	5d                   	pop    ebp
  5994b3:	5f                   	pop    edi
  5994b4:	5b                   	pop    ebx
  5994b5:	c2 04 00             	ret    0x4
  5994b8:	90                   	nop
  5994b9:	90                   	nop
  5994ba:	90                   	nop
  5994bb:	90                   	nop
  5994bc:	90                   	nop
  5994bd:	90                   	nop
  5994be:	90                   	nop
  5994bf:	90                   	nop
  5994c0:	83 ec 08             	sub    esp,0x8
  5994c3:	53                   	push   ebx
  5994c4:	55                   	push   ebp
  5994c5:	8b d9                	mov    ebx,ecx
  5994c7:	56                   	push   esi
  5994c8:	57                   	push   edi
  5994c9:	83 cd ff             	or     ebp,0xffffffff
  5994cc:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  5994d3:	00 
  5994d4:	8d 7b 34             	lea    edi,[ebx+0x34]
  5994d7:	c7 44 24 10 08 00 00 	mov    DWORD PTR [esp+0x10],0x8
  5994de:	00 
  5994df:	8b cf                	mov    ecx,edi
  5994e1:	e8 0a 1d 00 00       	call   0x59b1f0
  5994e6:	84 c0                	test   al,al
  5994e8:	74 33                	je     0x59951d
  5994ea:	8b 07                	mov    eax,DWORD PTR [edi]
  5994ec:	8b 4b 6c             	mov    ecx,DWORD PTR [ebx+0x6c]
  5994ef:	50                   	push   eax
  5994f0:	e8 9b 4a 00 00       	call   0x59df90
  5994f5:	8b c8                	mov    ecx,eax
  5994f7:	e8 d4 00 00 00       	call   0x5995d0
  5994fc:	8b f0                	mov    esi,eax
  5994fe:	83 fe ff             	cmp    esi,0xffffffff
  599501:	74 1a                	je     0x59951d
  599503:	83 fd ff             	cmp    ebp,0xffffffff
  599506:	74 04                	je     0x59950c
  599508:	3b ee                	cmp    ebp,esi
  59950a:	7e 11                	jle    0x59951d
  59950c:	8b 0f                	mov    ecx,DWORD PTR [edi]
  59950e:	51                   	push   ecx
  59950f:	8b 4b 6c             	mov    ecx,DWORD PTR [ebx+0x6c]
  599512:	e8 79 4a 00 00       	call   0x59df90
  599517:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  59951b:	8b ee                	mov    ebp,esi
  59951d:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  599521:	83 c7 04             	add    edi,0x4
  599524:	48                   	dec    eax
  599525:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  599529:	75 b4                	jne    0x5994df
  59952b:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  59952f:	5f                   	pop    edi
  599530:	5e                   	pop    esi
  599531:	5d                   	pop    ebp
  599532:	5b                   	pop    ebx
  599533:	83 c4 08             	add    esp,0x8
  599536:	c3                   	ret
  599537:	90                   	nop
  599538:	90                   	nop
  599539:	90                   	nop
  59953a:	90                   	nop
  59953b:	90                   	nop
  59953c:	90                   	nop
  59953d:	90                   	nop
  59953e:	90                   	nop
  59953f:	90                   	nop
  599540:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  599544:	56                   	push   esi
  599545:	89 41 64             	mov    DWORD PTR [ecx+0x64],eax
  599548:	be 05 00 00 00       	mov    esi,0x5
  59954d:	99                   	cdq
  59954e:	f7 fe                	idiv   esi
  599550:	5e                   	pop    esi
  599551:	83 fa 04             	cmp    edx,0x4
  599554:	77 3e                	ja     0x599594
  599556:	ff 24 95 a0 95 59 00 	jmp    DWORD PTR [edx*4+0x5995a0]
  59955d:	83 c1 78             	add    ecx,0x78
  599560:	e8 0b 1d 00 00       	call   0x59b270
  599565:	c2 04 00             	ret    0x4
  599568:	83 c1 78             	add    ecx,0x78
  59956b:	e8 d0 1c 00 00       	call   0x59b240
  599570:	c2 04 00             	ret    0x4
  599573:	83 c1 78             	add    ecx,0x78
  599576:	e8 d5 1c 00 00       	call   0x59b250
  59957b:	c2 04 00             	ret    0x4
  59957e:	83 c1 78             	add    ecx,0x78
  599581:	e8 0a 1d 00 00       	call   0x59b290
  599586:	c2 04 00             	ret    0x4
  599589:	83 c1 78             	add    ecx,0x78
  59958c:	e8 1f 1d 00 00       	call   0x59b2b0
  599591:	c2 04 00             	ret    0x4
  599594:	83 c1 78             	add    ecx,0x78
  599597:	e8 24 1d 00 00       	call   0x59b2c0
  59959c:	c2 04 00             	ret    0x4
  59959f:	90                   	nop
  5995a0:	5d                   	pop    ebp
  5995a1:	95                   	xchg   ebp,eax
  5995a2:	59                   	pop    ecx
  5995a3:	00 68 95             	add    BYTE PTR [eax-0x6b],ch
  5995a6:	59                   	pop    ecx
  5995a7:	00 73 95             	add    BYTE PTR [ebx-0x6b],dh
  5995aa:	59                   	pop    ecx
  5995ab:	00 7e 95             	add    BYTE PTR [esi-0x6b],bh
  5995ae:	59                   	pop    ecx
  5995af:	00 89 95 59 00 90    	add    BYTE PTR [ecx-0x6fffa66b],cl
  5995b5:	90                   	nop
  5995b6:	90                   	nop
  5995b7:	90                   	nop
  5995b8:	90                   	nop
  5995b9:	90                   	nop
  5995ba:	90                   	nop
  5995bb:	90                   	nop
  5995bc:	90                   	nop
  5995bd:	90                   	nop
  5995be:	90                   	nop
  5995bf:	90                   	nop
  5995c0:	8b 41 64             	mov    eax,DWORD PTR [ecx+0x64]
  5995c3:	c3                   	ret
  5995c4:	90                   	nop
  5995c5:	90                   	nop
  5995c6:	90                   	nop
  5995c7:	90                   	nop
  5995c8:	90                   	nop
  5995c9:	90                   	nop
  5995ca:	90                   	nop
  5995cb:	90                   	nop
  5995cc:	90                   	nop
  5995cd:	90                   	nop
  5995ce:	90                   	nop
  5995cf:	90                   	nop
  5995d0:	8b 41 70             	mov    eax,DWORD PTR [ecx+0x70]
  5995d3:	c3                   	ret
  5995d4:	90                   	nop
  5995d5:	90                   	nop
  5995d6:	90                   	nop
  5995d7:	90                   	nop
  5995d8:	90                   	nop
  5995d9:	90                   	nop
  5995da:	90                   	nop
  5995db:	90                   	nop
  5995dc:	90                   	nop
  5995dd:	90                   	nop
  5995de:	90                   	nop
  5995df:	90                   	nop
  5995e0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5995e4:	89 41 70             	mov    DWORD PTR [ecx+0x70],eax
  5995e7:	c2 04 00             	ret    0x4
  5995ea:	90                   	nop
  5995eb:	90                   	nop
  5995ec:	90                   	nop
  5995ed:	90                   	nop
  5995ee:	90                   	nop
  5995ef:	90                   	nop
  5995f0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5995f4:	89 81 94 00 00 00    	mov    DWORD PTR [ecx+0x94],eax
  5995fa:	c2 04 00             	ret    0x4
  5995fd:	90                   	nop
  5995fe:	90                   	nop
  5995ff:	90                   	nop
  599600:	6a ff                	push   0xffffffff
  599602:	68 b8 42 64 00       	push   0x6442b8
  599607:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59960d:	50                   	push   eax
  59960e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  599615:	83 ec 10             	sub    esp,0x10
  599618:	53                   	push   ebx
  599619:	8b 5c 24 24          	mov    ebx,DWORD PTR [esp+0x24]
  59961d:	55                   	push   ebp
  59961e:	56                   	push   esi
  59961f:	8b e9                	mov    ebp,ecx
  599621:	57                   	push   edi
  599622:	b9 24 00 00 00       	mov    ecx,0x24
  599627:	33 c0                	xor    eax,eax
  599629:	8b fb                	mov    edi,ebx
  59962b:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  59962d:	8d 4d 68             	lea    ecx,[ebp+0x68]
  599630:	e8 ab 1b 00 00       	call   0x59b1e0
  599635:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
  599638:	8d 7b 58             	lea    edi,[ebx+0x58]
  59963b:	8d 75 34             	lea    esi,[ebp+0x34]
  59963e:	c7 44 24 30 08 00 00 	mov    DWORD PTR [esp+0x30],0x8
  599645:	00 
  599646:	8b ce                	mov    ecx,esi
  599648:	e8 93 1b 00 00       	call   0x59b1e0
  59964d:	89 07                	mov    DWORD PTR [edi],eax
  59964f:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  599653:	83 c6 04             	add    esi,0x4
  599656:	83 c7 04             	add    edi,0x4
  599659:	48                   	dec    eax
  59965a:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  59965e:	75 e6                	jne    0x599646
  599660:	8d 7b 78             	lea    edi,[ebx+0x78]
  599663:	8d 75 54             	lea    esi,[ebp+0x54]
  599666:	c7 44 24 30 04 00 00 	mov    DWORD PTR [esp+0x30],0x4
  59966d:	00 
  59966e:	8b ce                	mov    ecx,esi
  599670:	e8 6b 1b 00 00       	call   0x59b1e0
  599675:	89 07                	mov    DWORD PTR [edi],eax
  599677:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  59967b:	83 c6 04             	add    esi,0x4
  59967e:	83 c7 04             	add    edi,0x4
  599681:	48                   	dec    eax
  599682:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  599686:	75 e6                	jne    0x59966e
  599688:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  59968b:	83 f8 40             	cmp    eax,0x40
  59968e:	0f 82 ad 00 00 00    	jb     0x599741
  599694:	8a 44 24 30          	mov    al,BYTE PTR [esp+0x30]
  599698:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59969d:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  5996a1:	83 c9 ff             	or     ecx,0xffffffff
  5996a4:	33 c0                	xor    eax,eax
  5996a6:	33 f6                	xor    esi,esi
  5996a8:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5996aa:	f7 d1                	not    ecx
  5996ac:	49                   	dec    ecx
  5996ad:	6a 01                	push   0x1
  5996af:	8b f9                	mov    edi,ecx
  5996b1:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5996b5:	57                   	push   edi
  5996b6:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  5996ba:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  5996be:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  5996c2:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
  5996c6:	e8 75 82 e6 ff       	call   0x401940
  5996cb:	84 c0                	test   al,al
  5996cd:	74 29                	je     0x5996f8
  5996cf:	8b cf                	mov    ecx,edi
  5996d1:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  5996d5:	8b d1                	mov    edx,ecx
  5996d7:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  5996dc:	c1 e9 02             	shr    ecx,0x2
  5996df:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5996e1:	8b ca                	mov    ecx,edx
  5996e3:	8b c2                	mov    eax,edx
  5996e5:	83 e1 03             	and    ecx,0x3
  5996e8:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5996ea:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5996ee:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5996f2:	33 f6                	xor    esi,esi
  5996f4:	c6 04 08 00          	mov    BYTE PTR [eax+ecx*1],0x0
  5996f8:	8d 54 24 10          	lea    edx,[esp+0x10]
  5996fc:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
