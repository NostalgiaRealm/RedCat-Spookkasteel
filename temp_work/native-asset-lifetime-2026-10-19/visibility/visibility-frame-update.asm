; Retained original RcHcGame.dat disassembly; lines639299-639496 fromtemp_work/player-world-light-2026-10-04/native-full.asm
  5d5580:	83 ec 1c             	sub    esp,0x1c
  5d5583:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  5d5587:	53                   	push   ebx
  5d5588:	55                   	push   ebp
  5d5589:	56                   	push   esi
  5d558a:	57                   	push   edi
  5d558b:	e8 00 3f ff ff       	call   0x5c9490
  5d5590:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
  5d5594:	50                   	push   eax
  5d5595:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  5d5598:	8b 91 20 01 00 00    	mov    edx,DWORD PTR [ecx+0x120]
  5d559e:	8d 99 c8 00 00 00    	lea    ebx,[ecx+0xc8]
  5d55a4:	8b 89 c0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1c0]
  5d55aa:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  5d55ae:	8b 93 98 00 00 00    	mov    edx,DWORD PTR [ebx+0x98]
  5d55b4:	8b 6b 48             	mov    ebp,DWORD PTR [ebx+0x48]
  5d55b7:	8b 7b 54             	mov    edi,DWORD PTR [ebx+0x54]
  5d55ba:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  5d55be:	8b 53 6c             	mov    edx,DWORD PTR [ebx+0x6c]
  5d55c1:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  5d55c5:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  5d55c9:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  5d55cc:	8b ce                	mov    ecx,esi
  5d55ce:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  5d55d2:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
  5d55d6:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
  5d55da:	e8 b1 c1 ff ff       	call   0x5d1790
  5d55df:	8d 0c 40             	lea    ecx,[eax+eax*2]
  5d55e2:	8d 14 89             	lea    edx,[ecx+ecx*4]
  5d55e5:	8d 0c 97             	lea    ecx,[edi+edx*4]
  5d55e8:	8b 7e 0c             	mov    edi,DWORD PTR [esi+0xc]
  5d55eb:	3b f8                	cmp    edi,eax
  5d55ed:	8b 51 30             	mov    edx,DWORD PTR [ecx+0x30]
  5d55f0:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  5d55f4:	75 0b                	jne    0x5d5601
  5d55f6:	8b 7e 10             	mov    edi,DWORD PTR [esi+0x10]
  5d55f9:	85 ff                	test   edi,edi
  5d55fb:	0f 84 4d 01 00 00    	je     0x5d574e
  5d5601:	8b 3e                	mov    edi,DWORD PTR [esi]
  5d5603:	c7 46 10 00 00 00 00 	mov    DWORD PTR [esi+0x10],0x0
  5d560a:	47                   	inc    edi
  5d560b:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  5d560e:	89 3e                	mov    DWORD PTR [esi],edi
  5d5610:	8b 79 2c             	mov    edi,DWORD PTR [ecx+0x2c]
  5d5613:	83 ff ff             	cmp    edi,0xffffffff
  5d5616:	0f 84 b3 01 00 00    	je     0x5d57cf
  5d561c:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  5d5620:	83 3c b8 ff          	cmp    DWORD PTR [eax+edi*4],0xffffffff
  5d5624:	0f 84 a5 01 00 00    	je     0x5d57cf
  5d562a:	85 d2                	test   edx,edx
  5d562c:	74 0a                	je     0x5d5638
  5d562e:	52                   	push   edx
  5d562f:	56                   	push   esi
  5d5630:	e8 cb fe ff ff       	call   0x5d5500
  5d5635:	83 c4 08             	add    esp,0x8
  5d5638:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  5d563c:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5d5640:	c7 46 14 01 00 00 00 	mov    DWORD PTR [esi+0x14],0x1
  5d5647:	8b 04 b9             	mov    eax,DWORD PTR [ecx+edi*4]
  5d564a:	8b 4d 40             	mov    ecx,DWORD PTR [ebp+0x40]
  5d564d:	03 c2                	add    eax,edx
  5d564f:	33 ff                	xor    edi,edi
  5d5651:	85 c9                	test   ecx,ecx
  5d5653:	7e 2e                	jle    0x5d5683
  5d5655:	8b cf                	mov    ecx,edi
  5d5657:	ba 01 00 00 00       	mov    edx,0x1
  5d565c:	83 e1 07             	and    ecx,0x7
  5d565f:	d3 e2                	shl    edx,cl
  5d5661:	8b cf                	mov    ecx,edi
  5d5663:	c1 f9 03             	sar    ecx,0x3
  5d5666:	8a 0c 01             	mov    cl,BYTE PTR [ecx+eax*1]
  5d5669:	84 d1                	test   cl,dl
  5d566b:	74 0e                	je     0x5d567b
  5d566d:	8b 56 18             	mov    edx,DWORD PTR [esi+0x18]
  5d5670:	8b 8a d0 d5 00 00    	mov    ecx,DWORD PTR [edx+0xd5d0]
  5d5676:	8b 16                	mov    edx,DWORD PTR [esi]
  5d5678:	89 14 b9             	mov    DWORD PTR [ecx+edi*4],edx
  5d567b:	8b 4d 40             	mov    ecx,DWORD PTR [ebp+0x40]
  5d567e:	47                   	inc    edi
  5d567f:	3b f9                	cmp    edi,ecx
  5d5681:	7c d2                	jl     0x5d5655
  5d5683:	8b 45 34             	mov    eax,DWORD PTR [ebp+0x34]
  5d5686:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5d568a:	8d 04 40             	lea    eax,[eax+eax*2]
  5d568d:	8d 04 80             	lea    eax,[eax+eax*4]
  5d5690:	8d 3c 81             	lea    edi,[ecx+eax*4]
  5d5693:	8b 4d 38             	mov    ecx,DWORD PTR [ebp+0x38]
  5d5696:	33 c0                	xor    eax,eax
  5d5698:	3b c8                	cmp    ecx,eax
  5d569a:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  5d569e:	0f 8e aa 00 00 00    	jle    0x5d574e
  5d56a4:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5d56a8:	83 c7 30             	add    edi,0x30
  5d56ab:	8b 4f fc             	mov    ecx,DWORD PTR [edi-0x4]
  5d56ae:	83 f9 ff             	cmp    ecx,0xffffffff
  5d56b1:	74 79                	je     0x5d572c
  5d56b3:	8b 56 18             	mov    edx,DWORD PTR [esi+0x18]
  5d56b6:	8b 06                	mov    eax,DWORD PTR [esi]
  5d56b8:	8b 92 d0 d5 00 00    	mov    edx,DWORD PTR [edx+0xd5d0]
  5d56be:	39 04 8a             	cmp    DWORD PTR [edx+ecx*4],eax
  5d56c1:	75 69                	jne    0x5d572c
  5d56c3:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  5d56c6:	8b 17                	mov    edx,DWORD PTR [edi]
  5d56c8:	8b 89 d8 d5 00 00    	mov    ecx,DWORD PTR [ecx+0xd5d8]
  5d56ce:	39 04 91             	cmp    DWORD PTR [ecx+edx*4],eax
  5d56d1:	75 59                	jne    0x5d572c
  5d56d3:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  5d56d7:	52                   	push   edx
  5d56d8:	56                   	push   esi
  5d56d9:	e8 42 02 00 00       	call   0x5d5920
  5d56de:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  5d56e1:	8b 16                	mov    edx,DWORD PTR [esi]
  5d56e3:	83 c4 08             	add    esp,0x8
  5d56e6:	8b 88 cc d5 00 00    	mov    ecx,DWORD PTR [eax+0xd5cc]
  5d56ec:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5d56f0:	89 14 01             	mov    DWORD PTR [ecx+eax*1],edx
  5d56f3:	8b 4f ec             	mov    ecx,DWORD PTR [edi-0x14]
  5d56f6:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5d56fa:	8b 47 f0             	mov    eax,DWORD PTR [edi-0x10]
  5d56fd:	8d 0c 8a             	lea    ecx,[edx+ecx*4]
  5d5700:	33 d2                	xor    edx,edx
  5d5702:	85 c0                	test   eax,eax
  5d5704:	7e 26                	jle    0x5d572c
  5d5706:	8b 01                	mov    eax,DWORD PTR [ecx]
  5d5708:	8b 6c 24 1c          	mov    ebp,DWORD PTR [esp+0x1c]
  5d570c:	8b d8                	mov    ebx,eax
  5d570e:	83 c1 04             	add    ecx,0x4
  5d5711:	c1 e3 04             	shl    ebx,0x4
  5d5714:	03 d8                	add    ebx,eax
  5d5716:	8b 06                	mov    eax,DWORD PTR [esi]
  5d5718:	42                   	inc    edx
  5d5719:	89 44 dd 58          	mov    DWORD PTR [ebp+ebx*8+0x58],eax
  5d571d:	8b 47 f0             	mov    eax,DWORD PTR [edi-0x10]
  5d5720:	3b d0                	cmp    edx,eax
  5d5722:	7c e2                	jl     0x5d5706
  5d5724:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
  5d5728:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
  5d572c:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5d5730:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  5d5734:	83 c1 0c             	add    ecx,0xc
  5d5737:	40                   	inc    eax
  5d5738:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5d573c:	8b 4d 38             	mov    ecx,DWORD PTR [ebp+0x38]
  5d573f:	83 c7 3c             	add    edi,0x3c
  5d5742:	3b c1                	cmp    eax,ecx
  5d5744:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  5d5748:	0f 8c 5d ff ff ff    	jl     0x5d56ab
  5d574e:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  5d5751:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
  5d5754:	bd 01 00 00 00       	mov    ebp,0x1
  5d5759:	89 91 88 02 00 00    	mov    DWORD PTR [ecx+0x288],edx
  5d575f:	8b 7e 18             	mov    edi,DWORD PTR [esi+0x18]
  5d5762:	8b 83 a0 00 00 00    	mov    eax,DWORD PTR [ebx+0xa0]
  5d5768:	81 c7 a0 02 00 00    	add    edi,0x2a0
  5d576e:	3b c5                	cmp    eax,ebp
  5d5770:	7e 33                	jle    0x5d57a5
  5d5772:	57                   	push   edi
  5d5773:	56                   	push   esi
  5d5774:	e8 67 fd ff ff       	call   0x5d54e0
  5d5779:	83 c4 08             	add    esp,0x8
  5d577c:	85 c0                	test   eax,eax
  5d577e:	74 09                	je     0x5d5789
  5d5780:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  5d5783:	89 87 bc 00 00 00    	mov    DWORD PTR [edi+0xbc],eax
  5d5789:	8b 87 d0 00 00 00    	mov    eax,DWORD PTR [edi+0xd0]
  5d578f:	81 c7 d4 00 00 00    	add    edi,0xd4
  5d5795:	24 fe                	and    al,0xfe
  5d5797:	45                   	inc    ebp
  5d5798:	89 47 fc             	mov    DWORD PTR [edi-0x4],eax
  5d579b:	8b 83 a0 00 00 00    	mov    eax,DWORD PTR [ebx+0xa0]
  5d57a1:	3b e8                	cmp    ebp,eax
  5d57a3:	7c cd                	jl     0x5d5772
  5d57a5:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  5d57a9:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  5d57ad:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  5d57b1:	51                   	push   ecx
  5d57b2:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  5d57b6:	52                   	push   edx
  5d57b7:	50                   	push   eax
  5d57b8:	56                   	push   esi
  5d57b9:	51                   	push   ecx
  5d57ba:	e8 a1 01 00 00       	call   0x5d5960
  5d57bf:	83 c4 14             	add    esp,0x14
  5d57c2:	b8 01 00 00 00       	mov    eax,0x1
  5d57c7:	5f                   	pop    edi
  5d57c8:	5e                   	pop    esi
  5d57c9:	5d                   	pop    ebp
  5d57ca:	5b                   	pop    ebx
  5d57cb:	83 c4 1c             	add    esp,0x1c
  5d57ce:	c3                   	ret
  5d57cf:	c7 46 14 00 00 00 00 	mov    DWORD PTR [esi+0x14],0x0
  5d57d6:	5f                   	pop    edi
  5d57d7:	5e                   	pop    esi
  5d57d8:	5d                   	pop    ebp
  5d57d9:	b8 01 00 00 00       	mov    eax,0x1
  5d57de:	5b                   	pop    ebx
  5d57df:	83 c4 1c             	add    esp,0x1c
  5d57e2:	c3                   	ret
