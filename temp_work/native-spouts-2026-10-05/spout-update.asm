  468450:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  468454:	53                   	push   ebx
  468455:	56                   	push   esi
  468456:	8b f1                	mov    esi,ecx
  468458:	50                   	push   eax
  468459:	32 db                	xor    bl,bl
  46845b:	e8 d0 19 fa ff       	call   0x409e30
  468460:	8a 86 a0 16 00 00    	mov    al,BYTE PTR [esi+0x16a0]
  468466:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  46846a:	83 c4 04             	add    esp,0x4
  46846d:	d9 c0                	fld    st(0)
  46846f:	d8 8e b0 16 00 00    	fmul   DWORD PTR [esi+0x16b0]
  468475:	84 c0                	test   al,al
  468477:	74 1d                	je     0x468496
  468479:	d8 01                	fadd   DWORD PTR [ecx]
  46847b:	d9 19                	fstp   DWORD PTR [ecx]
  46847d:	d9 c0                	fld    st(0)
  46847f:	d8 8e b4 16 00 00    	fmul   DWORD PTR [esi+0x16b4]
  468485:	d8 41 04             	fadd   DWORD PTR [ecx+0x4]
  468488:	d9 59 04             	fstp   DWORD PTR [ecx+0x4]
  46848b:	d8 8e b8 16 00 00    	fmul   DWORD PTR [esi+0x16b8]
  468491:	d8 41 08             	fadd   DWORD PTR [ecx+0x8]
  468494:	eb 1b                	jmp    0x4684b1
  468496:	d8 29                	fsubr  DWORD PTR [ecx]
  468498:	d9 19                	fstp   DWORD PTR [ecx]
  46849a:	d9 c0                	fld    st(0)
  46849c:	d8 8e b4 16 00 00    	fmul   DWORD PTR [esi+0x16b4]
  4684a2:	d8 69 04             	fsubr  DWORD PTR [ecx+0x4]
  4684a5:	d9 59 04             	fstp   DWORD PTR [ecx+0x4]
  4684a8:	d8 8e b8 16 00 00    	fmul   DWORD PTR [esi+0x16b8]
  4684ae:	d8 69 08             	fsubr  DWORD PTR [ecx+0x8]
  4684b1:	d9 59 08             	fstp   DWORD PTR [ecx+0x8]
  4684b4:	d9 01                	fld    DWORD PTR [ecx]
  4684b6:	d8 9e c8 16 00 00    	fcomp  DWORD PTR [esi+0x16c8]
  4684bc:	df e0                	fnstsw ax
  4684be:	f6 c4 41             	test   ah,0x41
  4684c1:	75 32                	jne    0x4684f5
  4684c3:	8b 96 c8 16 00 00    	mov    edx,DWORD PTR [esi+0x16c8]
  4684c9:	89 11                	mov    DWORD PTR [ecx],edx
  4684cb:	8b 86 cc 16 00 00    	mov    eax,DWORD PTR [esi+0x16cc]
  4684d1:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  4684d4:	8b 96 d0 16 00 00    	mov    edx,DWORD PTR [esi+0x16d0]
  4684da:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  4684dd:	8a 86 a0 16 00 00    	mov    al,BYTE PTR [esi+0x16a0]
  4684e3:	84 c0                	test   al,al
  4684e5:	0f 94 c0             	sete   al
  4684e8:	88 86 a0 16 00 00    	mov    BYTE PTR [esi+0x16a0],al
  4684ee:	5e                   	pop    esi
  4684ef:	b0 01                	mov    al,0x1
  4684f1:	5b                   	pop    ebx
  4684f2:	c2 08 00             	ret    0x8
  4684f5:	d9 01                	fld    DWORD PTR [ecx]
  4684f7:	d8 9e bc 16 00 00    	fcomp  DWORD PTR [esi+0x16bc]
  4684fd:	df e0                	fnstsw ax
  4684ff:	f6 c4 01             	test   ah,0x1
  468502:	74 32                	je     0x468536
  468504:	8b 96 bc 16 00 00    	mov    edx,DWORD PTR [esi+0x16bc]
  46850a:	89 11                	mov    DWORD PTR [ecx],edx
  46850c:	8b 86 c0 16 00 00    	mov    eax,DWORD PTR [esi+0x16c0]
  468512:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  468515:	8b 96 c4 16 00 00    	mov    edx,DWORD PTR [esi+0x16c4]
  46851b:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  46851e:	8a 86 a0 16 00 00    	mov    al,BYTE PTR [esi+0x16a0]
  468524:	84 c0                	test   al,al
  468526:	0f 94 c0             	sete   al
  468529:	88 86 a0 16 00 00    	mov    BYTE PTR [esi+0x16a0],al
  46852f:	5e                   	pop    esi
  468530:	b0 01                	mov    al,0x1
  468532:	5b                   	pop    ebx
  468533:	c2 08 00             	ret    0x8
  468536:	8a c3                	mov    al,bl
  468538:	5e                   	pop    esi
  468539:	5b                   	pop    ebx
  46853a:	c2 08 00             	ret    0x8
  46853d:	90                   	nop
  46853e:	90                   	nop
  46853f:	90                   	nop
  468540:	83 ec 10             	sub    esp,0x10
  468543:	53                   	push   ebx
  468544:	55                   	push   ebp
  468545:	8b e9                	mov    ebp,ecx
  468547:	56                   	push   esi
  468548:	57                   	push   edi
  468549:	33 ff                	xor    edi,edi
  46854b:	8b 85 80 16 00 00    	mov    eax,DWORD PTR [ebp+0x1680]
  468551:	8d 9d 80 16 00 00    	lea    ebx,[ebp+0x1680]
  468557:	83 f8 ff             	cmp    eax,0xffffffff
  46855a:	c6 44 24 13 00       	mov    BYTE PTR [esp+0x13],0x0
  46855f:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  468563:	b1 01                	mov    cl,0x1
  468565:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  468569:	74 43                	je     0x4685ae
  46856b:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  46856e:	83 fa ff             	cmp    edx,0xffffffff
  468571:	75 12                	jne    0x468585
  468573:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  468577:	c7 43 08 00 00 80 3f 	mov    DWORD PTR [ebx+0x8],0x3f800000
  46857e:	03 c2                	add    eax,edx
  468580:	89 43 04             	mov    DWORD PTR [ebx+0x4],eax
  468583:	eb 29                	jmp    0x4685ae
  468585:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
  468589:	3b f2                	cmp    esi,edx
  46858b:	7e 07                	jle    0x468594
  46858d:	89 7b 08             	mov    DWORD PTR [ebx+0x8],edi
  468590:	32 c9                	xor    cl,cl
  468592:	eb 1a                	jmp    0x4685ae
  468594:	3b c7                	cmp    eax,edi
  468596:	7e 13                	jle    0x4685ab
  468598:	2b d6                	sub    edx,esi
  46859a:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  46859e:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  4685a2:	da 74 24 1c          	fidiv  DWORD PTR [esp+0x1c]
  4685a6:	d9 5b 08             	fstp   DWORD PTR [ebx+0x8]
  4685a9:	eb 03                	jmp    0x4685ae
  4685ab:	89 7b 08             	mov    DWORD PTR [ebx+0x8],edi
  4685ae:	84 c9                	test   cl,cl
  4685b0:	88 4b 0c             	mov    BYTE PTR [ebx+0xc],cl
  4685b3:	75 77                	jne    0x46862c
  4685b5:	8d bd a4 14 00 00    	lea    edi,[ebp+0x14a4]
  4685bb:	8d b5 9c 01 00 00    	lea    esi,[ebp+0x19c]
  4685c1:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4685c5:	84 c0                	test   al,al
  4685c7:	75 61                	jne    0x46862a
  4685c9:	8a 46 6c             	mov    al,BYTE PTR [esi+0x6c]
  4685cc:	84 c0                	test   al,al
  4685ce:	75 43                	jne    0x468613
  4685d0:	8b ce                	mov    ecx,esi
  4685d2:	e8 39 61 01 00       	call   0x47e710
  4685d7:	8d 47 f4             	lea    eax,[edi-0xc]
  4685da:	8d 4e 04             	lea    ecx,[esi+0x4]
  4685dd:	8b 10                	mov    edx,DWORD PTR [eax]
  4685df:	89 11                	mov    DWORD PTR [ecx],edx
  4685e1:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4685e4:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  4685e7:	8b d7                	mov    edx,edi
  4685e9:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4685ec:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  4685ef:	8b 02                	mov    eax,DWORD PTR [edx]
  4685f1:	8d 4e 10             	lea    ecx,[esi+0x10]
  4685f4:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  4685f7:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
  4685fa:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  4685fd:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  468600:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  468603:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
  468606:	50                   	push   eax
  468607:	8b cb                	mov    ecx,ebx
  468609:	e8 a2 bb f9 ff       	call   0x4041b0
  46860e:	c6 44 24 13 01       	mov    BYTE PTR [esp+0x13],0x1
  468613:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  468617:	81 c6 44 01 00 00    	add    esi,0x144
  46861d:	40                   	inc    eax
  46861e:	83 c7 1c             	add    edi,0x1c
  468621:	83 f8 0f             	cmp    eax,0xf
  468624:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  468628:	7c 97                	jl     0x4685c1
  46862a:	33 ff                	xor    edi,edi
  46862c:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  468632:	39 79 30             	cmp    DWORD PTR [ecx+0x30],edi
  468635:	74 13                	je     0x46864a
  468637:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  46863b:	8d 95 00 01 00 00    	lea    edx,[ebp+0x100]
  468641:	52                   	push   edx
  468642:	50                   	push   eax
  468643:	8b cd                	mov    ecx,ebp
  468645:	e8 06 fe ff ff       	call   0x468450
  46864a:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  46864e:	8d b5 9c 01 00 00    	lea    esi,[ebp+0x19c]
  468654:	bf 0f 00 00 00       	mov    edi,0xf
  468659:	8a 46 6c             	mov    al,BYTE PTR [esi+0x6c]
  46865c:	84 c0                	test   al,al
  46865e:	74 15                	je     0x468675
  468660:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  468664:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  468668:	8b 16                	mov    edx,DWORD PTR [esi]
  46866a:	50                   	push   eax
  46866b:	51                   	push   ecx
  46866c:	8b ce                	mov    ecx,esi
  46866e:	ff 52 04             	call   DWORD PTR [edx+0x4]
  468671:	ff 44 24 14          	inc    DWORD PTR [esp+0x14]
  468675:	81 c6 44 01 00 00    	add    esi,0x144
  46867b:	4f                   	dec    edi
  46867c:	75 db                	jne    0x468659
  46867e:	8b 8d 90 16 00 00    	mov    ecx,DWORD PTR [ebp+0x1690]
  468684:	b2 01                	mov    dl,0x1
  468686:	83 f9 ff             	cmp    ecx,0xffffffff
  468689:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  46868d:	74 5d                	je     0x4686ec
  46868f:	8b 85 94 16 00 00    	mov    eax,DWORD PTR [ebp+0x1694]
  468695:	83 f8 ff             	cmp    eax,0xffffffff
  468698:	75 18                	jne    0x4686b2
  46869a:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  46869e:	c7 85 98 16 00 00 00 	mov    DWORD PTR [ebp+0x1698],0x3f800000
  4686a5:	00 80 3f 
  4686a8:	03 c8                	add    ecx,eax
  4686aa:	89 8d 94 16 00 00    	mov    DWORD PTR [ebp+0x1694],ecx
  4686b0:	eb 3a                	jmp    0x4686ec
  4686b2:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
  4686b6:	3b f0                	cmp    esi,eax
  4686b8:	7e 0e                	jle    0x4686c8
  4686ba:	c7 85 98 16 00 00 00 	mov    DWORD PTR [ebp+0x1698],0x0
  4686c1:	00 00 00 
  4686c4:	32 d2                	xor    dl,dl
  4686c6:	eb 24                	jmp    0x4686ec
  4686c8:	85 c9                	test   ecx,ecx
  4686ca:	7e 16                	jle    0x4686e2
  4686cc:	2b c6                	sub    eax,esi
  4686ce:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  4686d2:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
  4686d6:	da 74 24 28          	fidiv  DWORD PTR [esp+0x28]
  4686da:	d9 9d 98 16 00 00    	fstp   DWORD PTR [ebp+0x1698]
  4686e0:	eb 0a                	jmp    0x4686ec
  4686e2:	c7 85 98 16 00 00 00 	mov    DWORD PTR [ebp+0x1698],0x0
  4686e9:	00 00 00 
  4686ec:	84 d2                	test   dl,dl
  4686ee:	88 95 9c 16 00 00    	mov    BYTE PTR [ebp+0x169c],dl
  4686f4:	75 24                	jne    0x46871a
  4686f6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4686fa:	85 c0                	test   eax,eax
  4686fc:	75 13                	jne    0x468711
  4686fe:	6a 00                	push   0x0
  468700:	8b cd                	mov    ecx,ebp
  468702:	e8 49 9c 09 00       	call   0x502350
  468707:	5f                   	pop    edi
  468708:	5e                   	pop    esi
  468709:	5d                   	pop    ebp
  46870a:	5b                   	pop    ebx
  46870b:	83 c4 10             	add    esp,0x10
  46870e:	c2 08 00             	ret    0x8
  468711:	6a ff                	push   0xffffffff
  468713:	8b cb                	mov    ecx,ebx
  468715:	e8 96 ba f9 ff       	call   0x4041b0
  46871a:	5f                   	pop    edi
  46871b:	5e                   	pop    esi
  46871c:	5d                   	pop    ebp
  46871d:	5b                   	pop    ebx
  46871e:	83 c4 10             	add    esp,0x10
  468721:	c2 08 00             	ret    0x8
  468724:	90                   	nop
  468725:	90                   	nop
  468726:	90                   	nop
  468727:	90                   	nop
  468728:	90                   	nop
  468729:	90                   	nop
  46872a:	90                   	nop
  46872b:	90                   	nop
  46872c:	90                   	nop
  46872d:	90                   	nop
  46872e:	90                   	nop
  46872f:	90                   	nop
  468730:	83 ec 60             	sub    esp,0x60
  468733:	53                   	push   ebx
  468734:	55                   	push   ebp
  468735:	56                   	push   esi
  468736:	57                   	push   edi
  468737:	8b f9                	mov    edi,ecx
  468739:	c7 44 24 58 00 00 00 	mov    DWORD PTR [esp+0x58],0x0
  468740:	00 
  468741:	8b 6c 24 58          	mov    ebp,DWORD PTR [esp+0x58]
  468745:	c7 44 24 5c 00 00 00 	mov    DWORD PTR [esp+0x5c],0x0
  46874c:	00 
  46874d:	8b 87 f8 00 00 00    	mov    eax,DWORD PTR [edi+0xf8]
  468753:	8b 5c 24 5c          	mov    ebx,DWORD PTR [esp+0x5c]
  468757:	c7 44 24 60 00 00 00 	mov    DWORD PTR [esp+0x60],0x0
  46875e:	00 
  46875f:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
  468766:	00 
  468767:	8d 48 08             	lea    ecx,[eax+0x8]
  46876a:	c7 44 24 54 00 00 00 	mov    DWORD PTR [esp+0x54],0x0
  468771:	00 
  468772:	8b d1                	mov    edx,ecx
  468774:	c7 44 24 40 00 00 a0 	mov    DWORD PTR [esp+0x40],0x41a00000
  46877b:	41 
  46877c:	d9 40 78             	fld    DWORD PTR [eax+0x78]
  46877f:	8b 32                	mov    esi,DWORD PTR [edx]
  468781:	c7 44 24 44 00 00 a0 	mov    DWORD PTR [esp+0x44],0x41a00000
  468788:	41 
  468789:	d8 0d 3c da 64 00    	fmul   DWORD PTR ds:0x64da3c
  46878f:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
  468793:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  468796:	89 74 24 68          	mov    DWORD PTR [esp+0x68],esi
  46879a:	c7 44 24 48 00 00 a0 	mov    DWORD PTR [esp+0x48],0x41a00000
