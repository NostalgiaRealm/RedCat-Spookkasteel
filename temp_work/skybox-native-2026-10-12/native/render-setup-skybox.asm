
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005ba350 <.text+0x1b9350>:
  5ba350:	34 12                	xor    al,0x12
  5ba352:	00 00                	add    BYTE PTR [eax],al
  5ba354:	8b 88 0c 01 00 00    	mov    ecx,DWORD PTR [eax+0x10c]
  5ba35a:	8d 3c 49             	lea    edi,[ecx+ecx*2]
  5ba35d:	8d 34 49             	lea    esi,[ecx+ecx*2]
  5ba360:	89 94 88 80 09 00 00 	mov    DWORD PTR [eax+ecx*4+0x980],edx
  5ba367:	8b 88 0c 01 00 00    	mov    ecx,DWORD PTR [eax+0x10c]
  5ba36d:	8d 3c bf             	lea    edi,[edi+edi*4]
  5ba370:	8d 34 b6             	lea    esi,[esi+esi*4]
  5ba373:	c1 e7 04             	shl    edi,0x4
  5ba376:	85 d2                	test   edx,edx
  5ba378:	8d bc 07 e0 03 00 00 	lea    edi,[edi+eax*1+0x3e0]
  5ba37f:	8d b4 f0 10 01 00 00 	lea    esi,[eax+esi*8+0x110]
  5ba386:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  5ba38a:	8b bc 24 28 12 00 00 	mov    edi,DWORD PTR [esp+0x1228]
  5ba391:	89 bc 88 98 09 00 00 	mov    DWORD PTR [eax+ecx*4+0x998],edi
  5ba398:	7e 50                	jle    0x5ba3ea
  5ba39a:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  5ba39e:	eb 04                	jmp    0x5ba3a4
  5ba3a0:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
  5ba3a4:	8b 8c 24 2c 12 00 00 	mov    ecx,DWORD PTR [esp+0x122c]
  5ba3ab:	56                   	push   esi
  5ba3ac:	8b d3                	mov    edx,ebx
  5ba3ae:	e8 fd 91 ff ff       	call   0x5b35b0
  5ba3b3:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  5ba3b7:	83 c6 0c             	add    esi,0xc
  5ba3ba:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5ba3be:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  5ba3c2:	b9 06 00 00 00       	mov    ecx,0x6
  5ba3c7:	8b f5                	mov    esi,ebp
  5ba3c9:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5ba3cb:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5ba3cf:	83 c3 0c             	add    ebx,0xc
  5ba3d2:	83 c5 18             	add    ebp,0x18
  5ba3d5:	83 c1 18             	add    ecx,0x18
  5ba3d8:	48                   	dec    eax
  5ba3d9:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5ba3dd:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5ba3e1:	75 bd                	jne    0x5ba3a0
  5ba3e3:	8b 84 24 34 12 00 00 	mov    eax,DWORD PTR [esp+0x1234]
  5ba3ea:	ff 80 0c 01 00 00    	inc    DWORD PTR [eax+0x10c]
  5ba3f0:	5f                   	pop    edi
  5ba3f1:	5e                   	pop    esi
  5ba3f2:	5d                   	pop    ebp
  5ba3f3:	5b                   	pop    ebx
  5ba3f4:	81 c4 10 12 00 00    	add    esp,0x1210
  5ba3fa:	c3                   	ret
  5ba3fb:	90                   	nop
  5ba3fc:	90                   	nop
  5ba3fd:	90                   	nop
  5ba3fe:	90                   	nop
  5ba3ff:	90                   	nop
  5ba400:	83 ec 24             	sub    esp,0x24
  5ba403:	53                   	push   ebx
  5ba404:	55                   	push   ebp
  5ba405:	56                   	push   esi
  5ba406:	57                   	push   edi
  5ba407:	8b 7c 24 38          	mov    edi,DWORD PTR [esp+0x38]
  5ba40b:	8b 87 1c 0c 00 00    	mov    eax,DWORD PTR [edi+0xc1c]
  5ba411:	85 c0                	test   eax,eax
  5ba413:	75 38                	jne    0x5ba44d
  5ba415:	e8 36 c7 01 00       	call   0x5d6b50
  5ba41a:	85 c0                	test   eax,eax
  5ba41c:	89 87 1c 0c 00 00    	mov    DWORD PTR [edi+0xc1c],eax
  5ba422:	75 29                	jne    0x5ba44d
  5ba424:	50                   	push   eax
  5ba425:	68 70 3f 6b 00       	push   0x6b3f70
  5ba42a:	68 34 0d 00 00       	push   0xd34
  5ba42f:	68 28 95 6a 00       	push   0x6a9528
  5ba434:	68 70 3f 6b 00       	push   0x6b3f70
  5ba439:	6a ff                	push   0xffffffff
  5ba43b:	e8 e0 4d 01 00       	call   0x5cf220
  5ba440:	83 c4 18             	add    esp,0x18
  5ba443:	33 c0                	xor    eax,eax
  5ba445:	5f                   	pop    edi
  5ba446:	5e                   	pop    esi
  5ba447:	5d                   	pop    ebp
  5ba448:	5b                   	pop    ebx
  5ba449:	83 c4 24             	add    esp,0x24
  5ba44c:	c3                   	ret
  5ba44d:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
  5ba450:	8b 80 c8 01 00 00    	mov    eax,DWORD PTR [eax+0x1c8]
  5ba456:	85 c0                	test   eax,eax
  5ba458:	74 68                	je     0x5ba4c2
  5ba45a:	50                   	push   eax
  5ba45b:	e8 30 9c 01 00       	call   0x5d4090
  5ba460:	83 c4 04             	add    esp,0x4
  5ba463:	33 db                	xor    ebx,ebx
  5ba465:	85 c0                	test   eax,eax
  5ba467:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  5ba46b:	7e 55                	jle    0x5ba4c2
  5ba46d:	8b 4f 18             	mov    ecx,DWORD PTR [edi+0x18]
  5ba470:	53                   	push   ebx
  5ba471:	8b 91 c8 01 00 00    	mov    edx,DWORD PTR [ecx+0x1c8]
  5ba477:	52                   	push   edx
  5ba478:	e8 23 9c 01 00       	call   0x5d40a0
  5ba47d:	8b f0                	mov    esi,eax
  5ba47f:	56                   	push   esi
  5ba480:	e8 4b a2 01 00       	call   0x5d46d0
  5ba485:	56                   	push   esi
  5ba486:	8b e8                	mov    ebp,eax
  5ba488:	e8 33 a2 01 00       	call   0x5d46c0
  5ba48d:	83 c4 10             	add    esp,0x10
  5ba490:	8d 54 24 10          	lea    edx,[esp+0x10]
  5ba494:	8b cd                	mov    ecx,ebp
  5ba496:	6a 00                	push   0x0
  5ba498:	e8 b3 8e 00 00       	call   0x5c3350
  5ba49d:	85 c0                	test   eax,eax
  5ba49f:	74 2e                	je     0x5ba4cf
  5ba4a1:	55                   	push   ebp
  5ba4a2:	57                   	push   edi
  5ba4a3:	e8 b8 00 00 00       	call   0x5ba560
  5ba4a8:	83 c4 08             	add    esp,0x8
  5ba4ab:	85 c0                	test   eax,eax
  5ba4ad:	74 4a                	je     0x5ba4f9
  5ba4af:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  5ba4b3:	43                   	inc    ebx
  5ba4b4:	3b d8                	cmp    ebx,eax
  5ba4b6:	c7 87 54 0c 00 00 01 	mov    DWORD PTR [edi+0xc54],0x1
  5ba4bd:	00 00 00 
  5ba4c0:	7c ab                	jl     0x5ba46d
  5ba4c2:	5f                   	pop    edi
  5ba4c3:	5e                   	pop    esi
  5ba4c4:	5d                   	pop    ebp
  5ba4c5:	b8 01 00 00 00       	mov    eax,0x1
  5ba4ca:	5b                   	pop    ebx
  5ba4cb:	83 c4 24             	add    esp,0x24
  5ba4ce:	c3                   	ret
  5ba4cf:	6a 00                	push   0x0
  5ba4d1:	68 70 3f 6b 00       	push   0x6b3f70
  5ba4d6:	68 50 0d 00 00       	push   0xd50
  5ba4db:	68 28 95 6a 00       	push   0x6a9528
  5ba4e0:	68 70 3f 6b 00       	push   0x6b3f70
  5ba4e5:	6a ff                	push   0xffffffff
  5ba4e7:	e8 34 4d 01 00       	call   0x5cf220
  5ba4ec:	83 c4 18             	add    esp,0x18
  5ba4ef:	33 c0                	xor    eax,eax
  5ba4f1:	5f                   	pop    edi
  5ba4f2:	5e                   	pop    esi
  5ba4f3:	5d                   	pop    ebp
  5ba4f4:	5b                   	pop    ebx
  5ba4f5:	83 c4 24             	add    esp,0x24
  5ba4f8:	c3                   	ret
  5ba4f9:	6a 00                	push   0x0
  5ba4fb:	68 70 3f 6b 00       	push   0x6b3f70
  5ba500:	68 56 0d 00 00       	push   0xd56
  5ba505:	68 28 95 6a 00       	push   0x6a9528
  5ba50a:	68 70 3f 6b 00       	push   0x6b3f70
  5ba50f:	6a ff                	push   0xffffffff
  5ba511:	e8 0a 4d 01 00       	call   0x5cf220
  5ba516:	83 c4 18             	add    esp,0x18
  5ba519:	33 c0                	xor    eax,eax
  5ba51b:	5f                   	pop    edi
  5ba51c:	5e                   	pop    esi
  5ba51d:	5d                   	pop    ebp
  5ba51e:	5b                   	pop    ebx
  5ba51f:	83 c4 24             	add    esp,0x24
  5ba522:	c3                   	ret
  5ba523:	90                   	nop
  5ba524:	90                   	nop
  5ba525:	90                   	nop
  5ba526:	90                   	nop
  5ba527:	90                   	nop
  5ba528:	90                   	nop
  5ba529:	90                   	nop
  5ba52a:	90                   	nop
  5ba52b:	90                   	nop
  5ba52c:	90                   	nop
  5ba52d:	90                   	nop
  5ba52e:	90                   	nop
  5ba52f:	90                   	nop
  5ba530:	56                   	push   esi
  5ba531:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5ba535:	8b 86 1c 0c 00 00    	mov    eax,DWORD PTR [esi+0xc1c]
  5ba53b:	85 c0                	test   eax,eax
  5ba53d:	74 13                	je     0x5ba552
  5ba53f:	50                   	push   eax
  5ba540:	e8 5b c6 01 00       	call   0x5d6ba0
  5ba545:	83 c4 04             	add    esp,0x4
  5ba548:	c7 86 1c 0c 00 00 00 	mov    DWORD PTR [esi+0xc1c],0x0
  5ba54f:	00 00 00 
  5ba552:	b8 01 00 00 00       	mov    eax,0x1
  5ba557:	5e                   	pop    esi
  5ba558:	c3                   	ret
  5ba559:	90                   	nop
  5ba55a:	90                   	nop
  5ba55b:	90                   	nop
  5ba55c:	90                   	nop
  5ba55d:	90                   	nop
  5ba55e:	90                   	nop
  5ba55f:	90                   	nop
  5ba560:	56                   	push   esi
  5ba561:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5ba565:	8b 86 1c 0c 00 00    	mov    eax,DWORD PTR [esi+0xc1c]
  5ba56b:	85 c0                	test   eax,eax
  5ba56d:	75 24                	jne    0x5ba593
  5ba56f:	6a 00                	push   0x0
  5ba571:	68 70 3f 6b 00       	push   0x6b3f70
  5ba576:	68 7e 0d 00 00       	push   0xd7e
  5ba57b:	68 28 95 6a 00       	push   0x6a9528
  5ba580:	68 70 3f 6b 00       	push   0x6b3f70
  5ba585:	6a ff                	push   0xffffffff
  5ba587:	e8 94 4c 01 00       	call   0x5cf220
  5ba58c:	83 c4 18             	add    esp,0x18
  5ba58f:	33 c0                	xor    eax,eax
  5ba591:	5e                   	pop    esi
  5ba592:	c3                   	ret
  5ba593:	57                   	push   edi
  5ba594:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  5ba598:	ba 02 00 04 00       	mov    edx,0x40002
  5ba59d:	8b cf                	mov    ecx,edi
  5ba59f:	e8 3c 76 00 00       	call   0x5c1be0
  5ba5a4:	8b 86 1c 0c 00 00    	mov    eax,DWORD PTR [esi+0xc1c]
  5ba5aa:	57                   	push   edi
  5ba5ab:	50                   	push   eax
  5ba5ac:	e8 3f c8 01 00       	call   0x5d6df0
  5ba5b1:	83 c4 08             	add    esp,0x8
  5ba5b4:	85 c0                	test   eax,eax
  5ba5b6:	5f                   	pop    edi
  5ba5b7:	74 0a                	je     0x5ba5c3
  5ba5b9:	c7 86 54 0c 00 00 01 	mov    DWORD PTR [esi+0xc54],0x1
  5ba5c0:	00 00 00 
  5ba5c3:	b8 01 00 00 00       	mov    eax,0x1
  5ba5c8:	5e                   	pop    esi
  5ba5c9:	c3                   	ret
  5ba5ca:	90                   	nop
  5ba5cb:	90                   	nop
  5ba5cc:	90                   	nop
  5ba5cd:	90                   	nop
  5ba5ce:	90                   	nop
  5ba5cf:	90                   	nop
  5ba5d0:	56                   	push   esi
  5ba5d1:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5ba5d5:	8b 86 1c 0c 00 00    	mov    eax,DWORD PTR [esi+0xc1c]
  5ba5db:	85 c0                	test   eax,eax
  5ba5dd:	75 02                	jne    0x5ba5e1
  5ba5df:	5e                   	pop    esi
  5ba5e0:	c3                   	ret
  5ba5e1:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  5ba5e5:	51                   	push   ecx
  5ba5e6:	50                   	push   eax
  5ba5e7:	e8 64 c8 01 00       	call   0x5d6e50
  5ba5ec:	83 c4 08             	add    esp,0x8
  5ba5ef:	85 c0                	test   eax,eax
  5ba5f1:	74 0a                	je     0x5ba5fd
  5ba5f3:	c7 86 54 0c 00 00 01 	mov    DWORD PTR [esi+0xc54],0x1
  5ba5fa:	00 00 00 
  5ba5fd:	b8 01 00 00 00       	mov    eax,0x1
  5ba602:	5e                   	pop    esi
  5ba603:	c3                   	ret
  5ba604:	90                   	nop
  5ba605:	90                   	nop
  5ba606:	90                   	nop
  5ba607:	90                   	nop
  5ba608:	90                   	nop
  5ba609:	90                   	nop
  5ba60a:	90                   	nop
  5ba60b:	90                   	nop
  5ba60c:	90                   	nop
  5ba60d:	90                   	nop
  5ba60e:	90                   	nop
  5ba60f:	90                   	nop
  5ba610:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5ba614:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
  5ba617:	85 c0                	test   eax,eax
  5ba619:	75 01                	jne    0x5ba61c
  5ba61b:	c3                   	ret
  5ba61c:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5ba620:	8b 90 c8 01 00 00    	mov    edx,DWORD PTR [eax+0x1c8]
  5ba626:	51                   	push   ecx
  5ba627:	52                   	push   edx
  5ba628:	e8 e3 9a 01 00       	call   0x5d4110
  5ba62d:	83 c4 08             	add    esp,0x8
  5ba630:	c3                   	ret
  5ba631:	90                   	nop
  5ba632:	90                   	nop
  5ba633:	90                   	nop
  5ba634:	90                   	nop
  5ba635:	90                   	nop
  5ba636:	90                   	nop
  5ba637:	90                   	nop
  5ba638:	90                   	nop
  5ba639:	90                   	nop
  5ba63a:	90                   	nop
  5ba63b:	90                   	nop
  5ba63c:	90                   	nop
  5ba63d:	90                   	nop
  5ba63e:	90                   	nop
  5ba63f:	90                   	nop
  5ba640:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5ba644:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5ba648:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5ba64c:	50                   	push   eax
  5ba64d:	8b 82 1c 0c 00 00    	mov    eax,DWORD PTR [edx+0xc1c]
  5ba653:	51                   	push   ecx
  5ba654:	50                   	push   eax
  5ba655:	e8 86 c6 01 00       	call   0x5d6ce0
  5ba65a:	83 c4 0c             	add    esp,0xc
  5ba65d:	85 c0                	test   eax,eax
  5ba65f:	75 22                	jne    0x5ba683
  5ba661:	50                   	push   eax
  5ba662:	68 70 3f 6b 00       	push   0x6b3f70
  5ba667:	68 df 0d 00 00       	push   0xddf
  5ba66c:	68 28 95 6a 00       	push   0x6a9528
  5ba671:	68 70 3f 6b 00       	push   0x6b3f70
  5ba676:	6a ff                	push   0xffffffff
  5ba678:	e8 a3 4b 01 00       	call   0x5cf220
  5ba67d:	83 c4 18             	add    esp,0x18
  5ba680:	33 c0                	xor    eax,eax
  5ba682:	c3                   	ret
  5ba683:	b8 01 00 00 00       	mov    eax,0x1
  5ba688:	c3                   	ret
  5ba689:	90                   	nop
  5ba68a:	90                   	nop
  5ba68b:	90                   	nop
  5ba68c:	90                   	nop
  5ba68d:	90                   	nop
  5ba68e:	90                   	nop
  5ba68f:	90                   	nop
  5ba690:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5ba694:	8b 88 1c 0c 00 00    	mov    ecx,DWORD PTR [eax+0xc1c]
  5ba69a:	51                   	push   ecx
  5ba69b:	e8 f0 c6 01 00       	call   0x5d6d90
  5ba6a0:	83 c4 04             	add    esp,0x4
  5ba6a3:	85 c0                	test   eax,eax
  5ba6a5:	75 22                	jne    0x5ba6c9
  5ba6a7:	50                   	push   eax
  5ba6a8:	68 70 3f 6b 00       	push   0x6b3f70
  5ba6ad:	68 f0 0d 00 00       	push   0xdf0
  5ba6b2:	68 28 95 6a 00       	push   0x6a9528
  5ba6b7:	68 70 3f 6b 00       	push   0x6b3f70
  5ba6bc:	6a ff                	push   0xffffffff
  5ba6be:	e8 5d 4b 01 00       	call   0x5cf220
  5ba6c3:	83 c4 18             	add    esp,0x18
  5ba6c6:	33 c0                	xor    eax,eax
  5ba6c8:	c3                   	ret
  5ba6c9:	b8 01 00 00 00       	mov    eax,0x1
  5ba6ce:	c3                   	ret
  5ba6cf:	90                   	nop
  5ba6d0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5ba6d4:	56                   	push   esi
  5ba6d5:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5ba6d9:	50                   	push   eax
  5ba6da:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  5ba6dd:	8b 91 c8 01 00 00    	mov    edx,DWORD PTR [ecx+0x1c8]
  5ba6e3:	52                   	push   edx
  5ba6e4:	e8 d7 99 01 00       	call   0x5d40c0
  5ba6e9:	83 c4 08             	add    esp,0x8
  5ba6ec:	85 c0                	test   eax,eax
  5ba6ee:	75 02                	jne    0x5ba6f2
  5ba6f0:	5e                   	pop    esi
  5ba6f1:	c3                   	ret
  5ba6f2:	50                   	push   eax
  5ba6f3:	e8 e8 9f 01 00       	call   0x5d46e0
  5ba6f8:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
  5ba6fb:	83 c4 04             	add    esp,0x4
  5ba6fe:	33 c9                	xor    ecx,ecx
  5ba700:	3b c2                	cmp    eax,edx
  5ba702:	0f 94 c1             	sete   cl
  5ba705:	8b c1                	mov    eax,ecx
  5ba707:	5e                   	pop    esi
  5ba708:	c3                   	ret
  5ba709:	90                   	nop
  5ba70a:	90                   	nop
  5ba70b:	90                   	nop
  5ba70c:	90                   	nop
  5ba70d:	90                   	nop
  5ba70e:	90                   	nop
  5ba70f:	90                   	nop
  5ba710:	68 80 00 00 00       	push   0x80
  5ba715:	e8 06 d7 ff ff       	call   0x5b7e20
  5ba71a:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  5ba71e:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  5ba722:	83 c4 04             	add    esp,0x4
  5ba725:	85 c0                	test   eax,eax
  5ba727:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5ba72b:	50                   	push   eax
  5ba72c:	51                   	push   ecx
  5ba72d:	52                   	push   edx
  5ba72e:	74 09                	je     0x5ba739
  5ba730:	e8 1b 00 00 00       	call   0x5ba750
  5ba735:	83 c4 0c             	add    esp,0xc
  5ba738:	c3                   	ret
  5ba739:	e8 92 04 00 00       	call   0x5babd0
  5ba73e:	83 c4 0c             	add    esp,0xc
  5ba741:	c3                   	ret
  5ba742:	90                   	nop
  5ba743:	90                   	nop
  5ba744:	90                   	nop
  5ba745:	90                   	nop
  5ba746:	90                   	nop
  5ba747:	90                   	nop
  5ba748:	90                   	nop
  5ba749:	90                   	nop
  5ba74a:	90                   	nop
  5ba74b:	90                   	nop
  5ba74c:	90                   	nop
  5ba74d:	90                   	nop
  5ba74e:	90                   	nop
  5ba74f:	90                   	nop
  5ba750:	b8 44 1b 00 00       	mov    eax,0x1b44
  5ba755:	e8 16 38 05 00       	call   0x60df70
  5ba75a:	8b 84 24 4c 1b 00 00 	mov    eax,DWORD PTR [esp+0x1b4c]
  5ba761:	8b 15 08 c4 6c 00    	mov    edx,DWORD PTR ds:0x6cc408
  5ba767:	53                   	push   ebx
  5ba768:	55                   	push   ebp
  5ba769:	8b 08                	mov    ecx,DWORD PTR [eax]
  5ba76b:	56                   	push   esi
  5ba76c:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5ba770:	8b 8c 24 54 1b 00 00 	mov    ecx,DWORD PTR [esp+0x1b54]
  5ba777:	8b c1                	mov    eax,ecx
  5ba779:	57                   	push   edi
  5ba77a:	c1 e0 04             	shl    eax,0x4
  5ba77d:	03 c1                	add    eax,ecx
  5ba77f:	c1 e0 03             	shl    eax,0x3
  5ba782:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  5ba786:	83 7c 10 14 ff       	cmp    DWORD PTR [eax+edx*1+0x14],0xffffffff
  5ba78b:	0f 84 32 04 00 00    	je     0x5babc3
  5ba791:	8d 34 c9             	lea    esi,[ecx+ecx*8]
  5ba794:	8b 0d 20 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc420
  5ba79a:	8b 94 10 84 00 00 00 	mov    edx,DWORD PTR [eax+edx*1+0x84]
  5ba7a1:	8b 79 68             	mov    edi,DWORD PTR [ecx+0x68]
  5ba7a4:	8d 1c b7             	lea    ebx,[edi+esi*4]
  5ba7a7:	8b 71 74             	mov    esi,DWORD PTR [ecx+0x74]
  5ba7aa:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  5ba7ae:	8b 7b 10             	mov    edi,DWORD PTR [ebx+0x10]
  5ba7b1:	8b 6b 04             	mov    ebp,DWORD PTR [ebx+0x4]
  5ba7b4:	c1 e7 06             	shl    edi,0x6
  5ba7b7:	03 b9 88 00 00 00    	add    edi,DWORD PTR [ecx+0x88]
  5ba7bd:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  5ba7c1:	f6 c2 01             	test   dl,0x1
  5ba7c4:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  5ba7c8:	74 1a                	je     0x5ba7e4
  5ba7ca:	f6 47 28 01          	test   BYTE PTR [edi+0x28],0x1
  5ba7ce:	75 14                	jne    0x5ba7e4
  5ba7d0:	d9 47 34             	fld    DWORD PTR [edi+0x34]
  5ba7d3:	d8 1d 5c ad 64 00    	fcomp  DWORD PTR ds:0x64ad5c
  5ba7d9:	df e0                	fnstsw ax
  5ba7db:	f6 c4 01             	test   ah,0x1
  5ba7de:	0f 85 df 03 00 00    	jne    0x5babc3
  5ba7e4:	8b 47 28             	mov    eax,DWORD PTR [edi+0x28]
  5ba7e7:	8b 49 78             	mov    ecx,DWORD PTR [ecx+0x78]
  5ba7ea:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  5ba7ee:	8b 03                	mov    eax,DWORD PTR [ebx]
  5ba7f0:	f6 c2 08             	test   dl,0x8
  5ba7f3:	8d 0c 81             	lea    ecx,[ecx+eax*4]
  5ba7f6:	0f 84 9c 00 00 00    	je     0x5ba898
  5ba7fc:	85 ed                	test   ebp,ebp
  5ba7fe:	0f 8e d6 00 00 00    	jle    0x5ba8da
  5ba804:	8d 7c 24 58          	lea    edi,[esp+0x58]
  5ba808:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
  5ba80c:	8b 29                	mov    ebp,DWORD PTR [ecx]
  5ba80e:	a1 18 c4 6c 00       	mov    eax,ds:0x6cc418
  5ba813:	8b d5                	mov    edx,ebp
  5ba815:	83 c7 0c             	add    edi,0xc
  5ba818:	83 e2 0f             	and    edx,0xf
  5ba81b:	8d 6c 6d 00          	lea    ebp,[ebp+ebp*2+0x0]
  5ba81f:	83 c1 04             	add    ecx,0x4
  5ba822:	0f bf 9c 50 98 4f 03 	movsx  ebx,WORD PTR [eax+edx*2+0x34f98]
  5ba829:	00 
  5ba82a:	83 c3 b5             	add    ebx,0xffffffb5
  5ba82d:	b8 67 66 66 66       	mov    eax,0x66666667
  5ba832:	f7 eb                	imul   ebx
  5ba834:	c1 fa 03             	sar    edx,0x3
  5ba837:	8b c2                	mov    eax,edx
  5ba839:	c1 e8 1f             	shr    eax,0x1f
  5ba83c:	03 d0                	add    edx,eax
  5ba83e:	b8 1f 85 eb 51       	mov    eax,0x51eb851f
  5ba843:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  5ba847:	f7 eb                	imul   ebx
  5ba849:	c1 fa 03             	sar    edx,0x3
  5ba84c:	8b c2                	mov    eax,edx
  5ba84e:	c1 e8 1f             	shr    eax,0x1f
  5ba851:	03 d0                	add    edx,eax
  5ba853:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  5ba857:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
  5ba85b:	d8 04 ae             	fadd   DWORD PTR [esi+ebp*4]
  5ba85e:	d9 5f ec             	fstp   DWORD PTR [edi-0x14]
  5ba861:	8b 41 fc             	mov    eax,DWORD PTR [ecx-0x4]
  5ba864:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
  5ba868:	8d 14 40             	lea    edx,[eax+eax*2]
  5ba86b:	8b 44 96 04          	mov    eax,DWORD PTR [esi+edx*4+0x4]
  5ba86f:	89 47 f0             	mov    DWORD PTR [edi-0x10],eax
  5ba872:	8b 41 fc             	mov    eax,DWORD PTR [ecx-0x4]
  5ba875:	8d 14 40             	lea    edx,[eax+eax*2]
  5ba878:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5ba87c:	48                   	dec    eax
  5ba87d:	d8 44 96 08          	fadd   DWORD PTR [esi+edx*4+0x8]
  5ba881:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5ba885:	d9 5f f4             	fstp   DWORD PTR [edi-0xc]
  5ba888:	75 82                	jne    0x5ba80c
  5ba88a:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
  5ba88e:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
  5ba892:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  5ba896:	eb 42                	jmp    0x5ba8da
  5ba898:	85 ed                	test   ebp,ebp
  5ba89a:	7e 3e                	jle    0x5ba8da
  5ba89c:	8d 44 24 58          	lea    eax,[esp+0x58]
  5ba8a0:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
  5ba8a4:	8b 11                	mov    edx,DWORD PTR [ecx]
  5ba8a6:	83 c0 0c             	add    eax,0xc
  5ba8a9:	83 c1 04             	add    ecx,0x4
  5ba8ac:	8d 14 52             	lea    edx,[edx+edx*2]
  5ba8af:	8b 14 96             	mov    edx,DWORD PTR [esi+edx*4]
  5ba8b2:	89 50 ec             	mov    DWORD PTR [eax-0x14],edx
  5ba8b5:	8b 51 fc             	mov    edx,DWORD PTR [ecx-0x4]
  5ba8b8:	8d 14 52             	lea    edx,[edx+edx*2]
  5ba8bb:	8b 54 96 04          	mov    edx,DWORD PTR [esi+edx*4+0x4]
  5ba8bf:	89 50 f0             	mov    DWORD PTR [eax-0x10],edx
  5ba8c2:	8b 51 fc             	mov    edx,DWORD PTR [ecx-0x4]
  5ba8c5:	8d 14 52             	lea    edx,[edx+edx*2]
  5ba8c8:	8b 54 96 08          	mov    edx,DWORD PTR [esi+edx*4+0x8]
  5ba8cc:	89 50 f4             	mov    DWORD PTR [eax-0xc],edx
  5ba8cf:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5ba8d3:	4a                   	dec    edx
  5ba8d4:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  5ba8d8:	75 ca                	jne    0x5ba8a4
  5ba8da:	8b 03                	mov    eax,DWORD PTR [ebx]
  5ba8dc:	83 fd 03             	cmp    ebp,0x3
  5ba8df:	8d 0c 40             	lea    ecx,[eax+eax*2]
  5ba8e2:	a1 0c c4 6c 00       	mov    eax,ds:0x6cc40c
  5ba8e7:	8b 90 c4 01 00 00    	mov    edx,DWORD PTR [eax+0x1c4]
  5ba8ed:	8d 0c ca             	lea    ecx,[edx+ecx*8]
  5ba8f0:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  5ba8f4:	0f 8c c9 02 00 00    	jl     0x5babc3
  5ba8fa:	8b 57 3c             	mov    edx,DWORD PTR [edi+0x3c]
  5ba8fd:	8b 80 c8 01 00 00    	mov    eax,DWORD PTR [eax+0x1c8]
  5ba903:	52                   	push   edx
  5ba904:	50                   	push   eax
  5ba905:	e8 96 97 01 00       	call   0x5d40a0
  5ba90a:	8b 0d 1c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc41c
  5ba910:	8b f0                	mov    esi,eax
  5ba912:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  5ba915:	52                   	push   edx
  5ba916:	56                   	push   esi
  5ba917:	e8 d4 9d 01 00       	call   0x5d46f0
  5ba91c:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  5ba920:	83 c4 10             	add    esp,0x10
  5ba923:	e8 18 15 fe ff       	call   0x59be40
  5ba928:	8b 0d 20 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc420
  5ba92e:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5ba932:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  5ba935:	8b 51 64             	mov    edx,DWORD PTR [ecx+0x64]
  5ba938:	8d 04 80             	lea    eax,[eax+eax*4]
  5ba93b:	8d 0c 82             	lea    ecx,[edx+eax*4]
  5ba93e:	8d 54 24 44          	lea    edx,[esp+0x44]
  5ba942:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
  5ba945:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5ba949:	e8 02 87 ff ff       	call   0x5b3050
  5ba94e:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
  5ba951:	85 c0                	test   eax,eax
  5ba953:	74 13                	je     0x5ba968
  5ba955:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  5ba959:	e8 22 87 ff ff       	call   0x5b3080
  5ba95e:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  5ba962:	d9 e0                	fchs
  5ba964:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  5ba968:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  5ba96c:	8d 8c 24 54 15 00 00 	lea    ecx,[esp+0x1554]
  5ba973:	55                   	push   ebp
  5ba974:	51                   	push   ecx
  5ba975:	8d 44 24 58          	lea    eax,[esp+0x58]
  5ba979:	52                   	push   edx
  5ba97a:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  5ba97e:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  5ba982:	50                   	push   eax
  5ba983:	51                   	push   ecx
  5ba984:	52                   	push   edx
  5ba985:	e8 16 96 01 00       	call   0x5d3fa0
  5ba98a:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  5ba98e:	83 c4 18             	add    esp,0x18
  5ba991:	8d 84 24 50 03 00 00 	lea    eax,[esp+0x350]
  5ba998:	8d 54 24 50          	lea    edx,[esp+0x50]
  5ba99c:	55                   	push   ebp
  5ba99d:	50                   	push   eax
  5ba99e:	e8 4d 8b ff ff       	call   0x5b34f0
  5ba9a3:	f6 44 24 20 04       	test   BYTE PTR [esp+0x20],0x4
  5ba9a8:	74 55                	je     0x5ba9ff
  5ba9aa:	8b 0d 24 2f 72 00    	mov    ecx,DWORD PTR ds:0x722f24
  5ba9b0:	8d 94 24 50 03 00 00 	lea    edx,[esp+0x350]
  5ba9b7:	83 e1 01             	and    ecx,0x1
  5ba9ba:	8d 84 24 50 0f 00 00 	lea    eax,[esp+0xf50]
  5ba9c1:	51                   	push   ecx
  5ba9c2:	55                   	push   ebp
  5ba9c3:	52                   	push   edx
  5ba9c4:	50                   	push   eax
  5ba9c5:	e8 26 5f 01 00       	call   0x5d08f0
  5ba9ca:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  5ba9ce:	8b 84 24 6c 1b 00 00 	mov    eax,DWORD PTR [esp+0x1b6c]
  5ba9d5:	8d 8c 24 60 0f 00 00 	lea    ecx,[esp+0xf60]
  5ba9dc:	51                   	push   ecx
  5ba9dd:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
  5ba9e0:	52                   	push   edx
  5ba9e1:	8b 15 1c c4 6c 00    	mov    edx,DWORD PTR ds:0x6cc41c
  5ba9e7:	83 c2 1c             	add    edx,0x1c
  5ba9ea:	51                   	push   ecx
  5ba9eb:	52                   	push   edx
  5ba9ec:	e8 4f 09 00 00       	call   0x5bb340
  5ba9f1:	83 c4 20             	add    esp,0x20
  5ba9f4:	5f                   	pop    edi
  5ba9f5:	5e                   	pop    esi
  5ba9f6:	5d                   	pop    ebp
  5ba9f7:	5b                   	pop    ebx
  5ba9f8:	81 c4 44 1b 00 00    	add    esp,0x1b44
  5ba9fe:	c3                   	ret
  5ba9ff:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5baa03:	8d 8c 24 50 06 00 00 	lea    ecx,[esp+0x650]
  5baa0a:	50                   	push   eax
  5baa0b:	55                   	push   ebp
  5baa0c:	8d 94 24 5c 15 00 00 	lea    edx,[esp+0x155c]
  5baa13:	51                   	push   ecx
  5baa14:	8d 84 24 5c 03 00 00 	lea    eax,[esp+0x35c]
  5baa1b:	52                   	push   edx
  5baa1c:	50                   	push   eax
  5baa1d:	e8 ae 6a 01 00       	call   0x5d14d0
  5baa22:	56                   	push   esi
  5baa23:	e8 a8 9c 01 00       	call   0x5d46d0
  5baa28:	8b 15 18 c4 6c 00    	mov    edx,DWORD PTR ds:0x6cc418
  5baa2e:	83 c4 18             	add    esp,0x18
  5baa31:	33 db                	xor    ebx,ebx
  5baa33:	8b b2 84 36 03 00    	mov    esi,DWORD PTR [edx+0x33684]
  5baa39:	46                   	inc    esi
  5baa3a:	89 b2 84 36 03 00    	mov    DWORD PTR [edx+0x33684],esi
  5baa40:	8b 15 08 c4 6c 00    	mov    edx,DWORD PTR ds:0x6cc408
  5baa46:	8b 74 24 30          	mov    esi,DWORD PTR [esp+0x30]
  5baa4a:	f6 84 16 84 00 00 00 	test   BYTE PTR [esi+edx*1+0x84],0x1
  5baa51:	01 
  5baa52:	8a 4f 28             	mov    cl,BYTE PTR [edi+0x28]
  5baa55:	0f 84 b3 00 00 00    	je     0x5bab0e
  5baa5b:	f6 c1 01             	test   cl,0x1
  5baa5e:	0f 85 af 00 00 00    	jne    0x5bab13
  5baa64:	a1 24 2f 72 00       	mov    eax,ds:0x722f24
  5baa69:	8b 0c 85 40 7b 74 00 	mov    ecx,DWORD PTR [eax*4+0x747b40]
  5baa70:	8b 14 85 40 28 72 00 	mov    edx,DWORD PTR [eax*4+0x722840]
  5baa77:	03 ca                	add    ecx,edx
  5baa79:	8d 51 01             	lea    edx,[ecx+0x1]
  5baa7c:	81 fa 00 01 00 00    	cmp    edx,0x100
  5baa82:	0f 8d 3b 01 00 00    	jge    0x5babc3
  5baa88:	83 fd 10             	cmp    ebp,0x10
  5baa8b:	0f 8f 32 01 00 00    	jg     0x5babc3
  5baa91:	8d 04 49             	lea    eax,[ecx+ecx*2]
  5baa94:	c1 e0 04             	shl    eax,0x4
  5baa97:	03 c1                	add    eax,ecx
  5baa99:	85 ed                	test   ebp,ebp
  5baa9b:	8d 04 40             	lea    eax,[eax+eax*2]
  5baa9e:	8d 04 85 40 2f 72 00 	lea    eax,[eax*4+0x722f40]
  5baaa5:	8d 50 0c             	lea    edx,[eax+0xc]
  5baaa8:	7e 27                	jle    0x5baad1
  5baaaa:	8d 9c 24 50 06 00 00 	lea    ebx,[esp+0x650]
  5baab1:	89 6c 24 14          	mov    DWORD PTR [esp+0x14],ebp
  5baab5:	b9 09 00 00 00       	mov    ecx,0x9
  5baaba:	8b f3                	mov    esi,ebx
  5baabc:	8b fa                	mov    edi,edx
  5baabe:	83 c3 24             	add    ebx,0x24
  5baac1:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5baac3:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5baac7:	83 c2 24             	add    edx,0x24
  5baaca:	49                   	dec    ecx
  5baacb:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  5baacf:	75 e4                	jne    0x5baab5
  5baad1:	8b 8c 24 58 1b 00 00 	mov    ecx,DWORD PTR [esp+0x1b58]
  5baad8:	50                   	push   eax
  5baad9:	6a 00                	push   0x0
  5baadb:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
  5baae1:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  5baae4:	89 68 08             	mov    DWORD PTR [eax+0x8],ebp
  5baae7:	e8 a4 d3 ff ff       	call   0x5b7e90
  5baaec:	a1 24 2f 72 00       	mov    eax,ds:0x722f24
  5baaf1:	83 c4 08             	add    esp,0x8
  5baaf4:	8b 0c 85 40 7b 74 00 	mov    ecx,DWORD PTR [eax*4+0x747b40]
  5baafb:	5f                   	pop    edi
  5baafc:	41                   	inc    ecx
  5baafd:	5e                   	pop    esi
  5baafe:	5d                   	pop    ebp
  5baaff:	89 0c 85 40 7b 74 00 	mov    DWORD PTR [eax*4+0x747b40],ecx
  5bab06:	5b                   	pop    ebx
  5bab07:	81 c4 44 1b 00 00    	add    esp,0x1b44
  5bab0d:	c3                   	ret
  5bab0e:	f6 c1 01             	test   cl,0x1
  5bab11:	74 1b                	je     0x5bab2e
  5bab13:	8b 0d fc c3 6c 00    	mov    ecx,DWORD PTR ds:0x6cc3fc
  5bab19:	85 c9                	test   ecx,ecx
  5bab1b:	74 1c                	je     0x5bab39
  5bab1d:	8b 4f 34             	mov    ecx,DWORD PTR [edi+0x34]
  5bab20:	bb 03 00 00 00       	mov    ebx,0x3
  5bab25:	89 8c 24 70 06 00 00 	mov    DWORD PTR [esp+0x670],ecx
  5bab2c:	eb 0b                	jmp    0x5bab39
  5bab2e:	c7 84 24 70 06 00 00 	mov    DWORD PTR [esp+0x670],0x437f0000
  5bab35:	00 00 7f 43 
  5bab39:	d9 44 16 70          	fld    DWORD PTR [esi+edx*1+0x70]
  5bab3d:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  5bab41:	d9 44 16 74          	fld    DWORD PTR [esi+edx*1+0x74]
  5bab45:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  5bab49:	8b 57 20             	mov    edx,DWORD PTR [edi+0x20]
  5bab4c:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  5bab50:	8b 4f 24             	mov    ecx,DWORD PTR [edi+0x24]
  5bab53:	8b d7                	mov    edx,edi
  5bab55:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  5bab59:	8b 0a                	mov    ecx,DWORD PTR [edx]
  5bab5b:	89 0d 60 28 72 00    	mov    DWORD PTR ds:0x722860,ecx
  5bab61:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  5bab64:	89 0d 64 28 72 00    	mov    DWORD PTR ds:0x722864,ecx
  5bab6a:	8d 4f 0c             	lea    ecx,[edi+0xc]
  5bab6d:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5bab70:	89 15 68 28 72 00    	mov    DWORD PTR ds:0x722868,edx
  5bab76:	8b 11                	mov    edx,DWORD PTR [ecx]
  5bab78:	89 15 6c 28 72 00    	mov    DWORD PTR ds:0x72286c,edx
  5bab7e:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  5bab81:	89 15 70 28 72 00    	mov    DWORD PTR ds:0x722870,edx
  5bab87:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5bab8a:	89 0d 74 28 72 00    	mov    DWORD PTR ds:0x722874,ecx
  5bab90:	8b 57 18             	mov    edx,DWORD PTR [edi+0x18]
  5bab93:	89 15 88 28 72 00    	mov    DWORD PTR ds:0x722888,edx
  5bab99:	8b 4f 1c             	mov    ecx,DWORD PTR [edi+0x1c]
  5bab9c:	89 0d 8c 28 72 00    	mov    DWORD PTR ds:0x72288c,ecx
  5baba2:	8b c8                	mov    ecx,eax
  5baba4:	e8 57 8a e9 ff       	call   0x453600
  5baba9:	53                   	push   ebx
  5babaa:	8d 54 24 38          	lea    edx,[esp+0x38]
  5babae:	6a 00                	push   0x0
  5babb0:	52                   	push   edx
  5babb1:	50                   	push   eax
  5babb2:	a1 10 c4 6c 00       	mov    eax,ds:0x6cc410
  5babb7:	8b d5                	mov    edx,ebp
  5babb9:	8d 8c 24 60 06 00 00 	lea    ecx,[esp+0x660]
  5babc0:	ff 50 7c             	call   DWORD PTR [eax+0x7c]
  5babc3:	5f                   	pop    edi
  5babc4:	5e                   	pop    esi
  5babc5:	5d                   	pop    ebp
  5babc6:	5b                   	pop    ebx
  5babc7:	81 c4 44 1b 00 00    	add    esp,0x1b44
  5babcd:	c3                   	ret
  5babce:	90                   	nop
  5babcf:	90                   	nop
  5babd0:	b8 a8 21 00 00       	mov    eax,0x21a8
  5babd5:	e8 96 33 05 00       	call   0x60df70
  5babda:	8b 84 24 b0 21 00 00 	mov    eax,DWORD PTR [esp+0x21b0]
  5babe1:	53                   	push   ebx
  5babe2:	55                   	push   ebp
  5babe3:	56                   	push   esi
  5babe4:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  5babe7:	8b 10                	mov    edx,DWORD PTR [eax]
  5babe9:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  5babed:	8b 8c 24 b8 21 00 00 	mov    ecx,DWORD PTR [esp+0x21b8]
  5babf4:	8b c1                	mov    eax,ecx
  5babf6:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  5babfa:	8b 15 08 c4 6c 00    	mov    edx,DWORD PTR ds:0x6cc408
