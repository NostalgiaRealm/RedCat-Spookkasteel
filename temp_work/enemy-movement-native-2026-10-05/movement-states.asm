  596640:	56                   	push   esi
  596641:	8b f1                	mov    esi,ecx
  596643:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  596646:	85 c9                	test   ecx,ecx
  596648:	74 06                	je     0x596650
  59664a:	8b 01                	mov    eax,DWORD PTR [ecx]
  59664c:	6a 01                	push   0x1
  59664e:	ff 10                	call   DWORD PTR [eax]
  596650:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  596654:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  596658:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
  59665b:	8b ce                	mov    ecx,esi
  59665d:	89 56 18             	mov    DWORD PTR [esi+0x18],edx
  596660:	c6 46 20 00          	mov    BYTE PTR [esi+0x20],0x0
  596664:	e8 47 03 00 00       	call   0x5969b0
  596669:	8a 4e 20             	mov    cl,BYTE PTR [esi+0x20]
  59666c:	84 c0                	test   al,al
  59666e:	0f 94 c0             	sete   al
  596671:	84 c9                	test   cl,cl
  596673:	88 46 21             	mov    BYTE PTR [esi+0x21],al
  596676:	75 15                	jne    0x59668d
  596678:	84 c0                	test   al,al
  59667a:	75 11                	jne    0x59668d
  59667c:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59667f:	6a 00                	push   0x0
  596681:	e8 ea ed ff ff       	call   0x595470
  596686:	8b c8                	mov    ecx,eax
  596688:	e8 e3 57 00 00       	call   0x59be70
  59668d:	5e                   	pop    esi
  59668e:	c2 08 00             	ret    0x8
  596691:	90                   	nop
  596692:	90                   	nop
  596693:	90                   	nop
  596694:	90                   	nop
  596695:	90                   	nop
  596696:	90                   	nop
  596697:	90                   	nop
  596698:	90                   	nop
  596699:	90                   	nop
  59669a:	90                   	nop
  59669b:	90                   	nop
  59669c:	90                   	nop
  59669d:	90                   	nop
  59669e:	90                   	nop
  59669f:	90                   	nop
  5966a0:	6a ff                	push   0xffffffff
  5966a2:	68 9b 3d 64 00       	push   0x643d9b
  5966a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5966ad:	50                   	push   eax
  5966ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5966b5:	51                   	push   ecx
  5966b6:	56                   	push   esi
  5966b7:	8b f1                	mov    esi,ecx
  5966b9:	6a 28                	push   0x28
  5966bb:	e8 f5 39 07 00       	call   0x60a0b5
  5966c0:	83 c4 04             	add    esp,0x4
  5966c3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  5966c7:	85 c0                	test   eax,eax
  5966c9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  5966d0:	00 
  5966d1:	74 12                	je     0x5966e5
  5966d3:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5966d7:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
  5966da:	51                   	push   ecx
  5966db:	52                   	push   edx
  5966dc:	8b c8                	mov    ecx,eax
  5966de:	e8 fd 07 00 00       	call   0x596ee0
  5966e3:	eb 02                	jmp    0x5966e7
  5966e5:	33 c0                	xor    eax,eax
  5966e7:	50                   	push   eax
  5966e8:	6a 00                	push   0x0
  5966ea:	8b ce                	mov    ecx,esi
  5966ec:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  5966f3:	ff 
  5966f4:	e8 47 ff ff ff       	call   0x596640
  5966f9:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5966fd:	5e                   	pop    esi
  5966fe:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596705:	83 c4 10             	add    esp,0x10
  596708:	c2 04 00             	ret    0x4
  59670b:	90                   	nop
  59670c:	90                   	nop
  59670d:	90                   	nop
  59670e:	90                   	nop
  59670f:	90                   	nop
  596710:	6a ff                	push   0xffffffff
  596712:	68 bb 3d 64 00       	push   0x643dbb
  596717:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59671d:	50                   	push   eax
  59671e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596725:	51                   	push   ecx
  596726:	56                   	push   esi
  596727:	8b f1                	mov    esi,ecx
  596729:	6a 2c                	push   0x2c
  59672b:	e8 85 39 07 00       	call   0x60a0b5
  596730:	83 c4 04             	add    esp,0x4
  596733:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  596737:	85 c0                	test   eax,eax
  596739:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  596740:	00 
  596741:	74 17                	je     0x59675a
  596743:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  596747:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  59674b:	51                   	push   ecx
  59674c:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59674f:	52                   	push   edx
  596750:	51                   	push   ecx
  596751:	8b c8                	mov    ecx,eax
  596753:	e8 e8 08 00 00       	call   0x597040
  596758:	eb 02                	jmp    0x59675c
  59675a:	33 c0                	xor    eax,eax
  59675c:	50                   	push   eax
  59675d:	6a 01                	push   0x1
  59675f:	8b ce                	mov    ecx,esi
  596761:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  596768:	ff 
  596769:	e8 d2 fe ff ff       	call   0x596640
  59676e:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  596772:	5e                   	pop    esi
  596773:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59677a:	83 c4 10             	add    esp,0x10
  59677d:	c2 08 00             	ret    0x8
  596780:	6a ff                	push   0xffffffff
  596782:	68 db 3d 64 00       	push   0x643ddb
  596787:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59678d:	50                   	push   eax
  59678e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596795:	51                   	push   ecx
  596796:	56                   	push   esi
  596797:	8b f1                	mov    esi,ecx
  596799:	6a 2c                	push   0x2c
  59679b:	e8 15 39 07 00       	call   0x60a0b5
  5967a0:	83 c4 04             	add    esp,0x4
  5967a3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  5967a7:	85 c0                	test   eax,eax
  5967a9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  5967b0:	00 
  5967b1:	74 17                	je     0x5967ca
  5967b3:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5967b7:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5967bb:	51                   	push   ecx
  5967bc:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  5967bf:	52                   	push   edx
  5967c0:	51                   	push   ecx
  5967c1:	8b c8                	mov    ecx,eax
  5967c3:	e8 98 0a 00 00       	call   0x597260
  5967c8:	eb 02                	jmp    0x5967cc
  5967ca:	33 c0                	xor    eax,eax
  5967cc:	50                   	push   eax
  5967cd:	6a 02                	push   0x2
  5967cf:	8b ce                	mov    ecx,esi
  5967d1:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  5967d8:	ff 
  5967d9:	e8 62 fe ff ff       	call   0x596640
  5967de:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5967e2:	5e                   	pop    esi
  5967e3:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5967ea:	83 c4 10             	add    esp,0x10
  5967ed:	c2 08 00             	ret    0x8
  5967f0:	6a ff                	push   0xffffffff
  5967f2:	68 fb 3d 64 00       	push   0x643dfb
  5967f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5967fd:	50                   	push   eax
  5967fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596805:	51                   	push   ecx
  596806:	56                   	push   esi
  596807:	8b f1                	mov    esi,ecx
  596809:	6a 1c                	push   0x1c
  59680b:	e8 a5 38 07 00       	call   0x60a0b5
  596810:	83 c4 04             	add    esp,0x4
  596813:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  596817:	85 c0                	test   eax,eax
  596819:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  596820:	00 
  596821:	74 12                	je     0x596835
  596823:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  596827:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
  59682a:	51                   	push   ecx
  59682b:	52                   	push   edx
  59682c:	8b c8                	mov    ecx,eax
  59682e:	e8 ad 0b 00 00       	call   0x5973e0
  596833:	eb 02                	jmp    0x596837
  596835:	33 c0                	xor    eax,eax
  596837:	50                   	push   eax
  596838:	6a 03                	push   0x3
  59683a:	8b ce                	mov    ecx,esi
  59683c:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  596843:	ff 
  596844:	e8 f7 fd ff ff       	call   0x596640
  596849:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  59684d:	5e                   	pop    esi
  59684e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596855:	83 c4 10             	add    esp,0x10
  596858:	c2 04 00             	ret    0x4
  59685b:	90                   	nop
  59685c:	90                   	nop
  59685d:	90                   	nop
  59685e:	90                   	nop
  59685f:	90                   	nop
  596860:	6a ff                	push   0xffffffff
  596862:	68 1b 3e 64 00       	push   0x643e1b
  596867:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59686d:	50                   	push   eax
  59686e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596875:	51                   	push   ecx
  596876:	56                   	push   esi
  596877:	8b f1                	mov    esi,ecx
  596879:	6a 1c                	push   0x1c
  59687b:	e8 35 38 07 00       	call   0x60a0b5
  596880:	83 c4 04             	add    esp,0x4
  596883:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  596887:	85 c0                	test   eax,eax
  596889:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  596890:	00 
  596891:	74 12                	je     0x5968a5
  596893:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  596897:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
  59689a:	51                   	push   ecx
  59689b:	52                   	push   edx
  59689c:	8b c8                	mov    ecx,eax
  59689e:	e8 2d 0c 00 00       	call   0x5974d0
  5968a3:	eb 02                	jmp    0x5968a7
  5968a5:	33 c0                	xor    eax,eax
  5968a7:	50                   	push   eax
  5968a8:	6a 04                	push   0x4
  5968aa:	8b ce                	mov    ecx,esi
  5968ac:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  5968b3:	ff 
  5968b4:	e8 87 fd ff ff       	call   0x596640
  5968b9:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5968bd:	5e                   	pop    esi
  5968be:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5968c5:	83 c4 10             	add    esp,0x10
  5968c8:	c2 04 00             	ret    0x4
  5968cb:	90                   	nop
  5968cc:	90                   	nop
  5968cd:	90                   	nop
  5968ce:	90                   	nop
  5968cf:	90                   	nop
  5968d0:	6a ff                	push   0xffffffff
  5968d2:	68 3b 3e 64 00       	push   0x643e3b
  5968d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5968dd:	50                   	push   eax
  5968de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5968e5:	51                   	push   ecx
  5968e6:	56                   	push   esi
  5968e7:	8b f1                	mov    esi,ecx
  5968e9:	6a 1c                	push   0x1c
  5968eb:	e8 c5 37 07 00       	call   0x60a0b5
  5968f0:	83 c4 04             	add    esp,0x4
  5968f3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  5968f7:	85 c0                	test   eax,eax
  5968f9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  596900:	00 
  596901:	74 12                	je     0x596915
  596903:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  596907:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
  59690a:	51                   	push   ecx
  59690b:	52                   	push   edx
  59690c:	8b c8                	mov    ecx,eax
  59690e:	e8 ad 0c 00 00       	call   0x5975c0
  596913:	eb 02                	jmp    0x596917
  596915:	33 c0                	xor    eax,eax
  596917:	50                   	push   eax
  596918:	6a 05                	push   0x5
  59691a:	8b ce                	mov    ecx,esi
  59691c:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  596923:	ff 
  596924:	e8 17 fd ff ff       	call   0x596640
  596929:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  59692d:	5e                   	pop    esi
  59692e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596935:	83 c4 10             	add    esp,0x10
  596938:	c2 04 00             	ret    0x4
  59693b:	90                   	nop
  59693c:	90                   	nop
  59693d:	90                   	nop
  59693e:	90                   	nop
  59693f:	90                   	nop
  596940:	6a ff                	push   0xffffffff
  596942:	68 5b 3e 64 00       	push   0x643e5b
  596947:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59694d:	50                   	push   eax
  59694e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596955:	51                   	push   ecx
  596956:	56                   	push   esi
  596957:	8b f1                	mov    esi,ecx
  596959:	6a 28                	push   0x28
  59695b:	e8 55 37 07 00       	call   0x60a0b5
  596960:	83 c4 04             	add    esp,0x4
  596963:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  596967:	85 c0                	test   eax,eax
  596969:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  596970:	00 
  596971:	74 12                	je     0x596985
  596973:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  596977:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
  59697a:	51                   	push   ecx
  59697b:	52                   	push   edx
  59697c:	8b c8                	mov    ecx,eax
  59697e:	e8 4d 0e 00 00       	call   0x5977d0
  596983:	eb 02                	jmp    0x596987
  596985:	33 c0                	xor    eax,eax
  596987:	50                   	push   eax
  596988:	6a 07                	push   0x7
  59698a:	8b ce                	mov    ecx,esi
  59698c:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  596993:	ff 
  596994:	e8 a7 fc ff ff       	call   0x596640
  596999:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  59699d:	5e                   	pop    esi
  59699e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5969a5:	83 c4 10             	add    esp,0x10
  5969a8:	c2 04 00             	ret    0x4
  5969ab:	90                   	nop
  5969ac:	90                   	nop
  5969ad:	90                   	nop
  5969ae:	90                   	nop
  5969af:	90                   	nop
  5969b0:	6a ff                	push   0xffffffff
  5969b2:	68 80 3e 64 00       	push   0x643e80
  5969b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5969bd:	50                   	push   eax
  5969be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5969c5:	83 ec 18             	sub    esp,0x18
  5969c8:	53                   	push   ebx
  5969c9:	56                   	push   esi
  5969ca:	8b f1                	mov    esi,ecx
  5969cc:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  5969d0:	e8 3b fc ff ff       	call   0x596610
  5969d5:	84 c0                	test   al,al
  5969d7:	0f 85 ad 00 00 00    	jne    0x596a8a
  5969dd:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  5969e1:	55                   	push   ebp
  5969e2:	57                   	push   edi
  5969e3:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  5969e7:	bf d8 6a 6a 00       	mov    edi,0x6a6ad8
  5969ec:	83 c9 ff             	or     ecx,0xffffffff
  5969ef:	33 c0                	xor    eax,eax
  5969f1:	33 db                	xor    ebx,ebx
  5969f3:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5969f5:	f7 d1                	not    ecx
  5969f7:	49                   	dec    ecx
  5969f8:	6a 01                	push   0x1
  5969fa:	8b e9                	mov    ebp,ecx
  5969fc:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  596a00:	55                   	push   ebp
  596a01:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  596a05:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  596a09:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  596a0d:	e8 2e af e6 ff       	call   0x401940
  596a12:	84 c0                	test   al,al
  596a14:	74 28                	je     0x596a3e
  596a16:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  596a1a:	8b cd                	mov    ecx,ebp
  596a1c:	8b d1                	mov    edx,ecx
  596a1e:	be d8 6a 6a 00       	mov    esi,0x6a6ad8
  596a23:	c1 e9 02             	shr    ecx,0x2
  596a26:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  596a28:	8b ca                	mov    ecx,edx
  596a2a:	83 e1 03             	and    ecx,0x3
  596a2d:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  596a2f:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  596a33:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  596a37:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  596a3b:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  596a3e:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  596a42:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  596a46:	51                   	push   ecx
  596a47:	6a 6e                	push   0x6e
  596a49:	68 a8 6a 6a 00       	push   0x6a6aa8
  596a4e:	68 2c 53 69 00       	push   0x69532c
  596a53:	e8 98 9d 00 00       	call   0x5a07f0
  596a58:	ff d0                	call   eax
  596a5a:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  596a5e:	83 c4 10             	add    esp,0x10
  596a61:	3b cb                	cmp    ecx,ebx
  596a63:	c7 44 24 30 ff ff ff 	mov    DWORD PTR [esp+0x30],0xffffffff
  596a6a:	ff 
  596a6b:	5f                   	pop    edi
  596a6c:	5d                   	pop    ebp
  596a6d:	74 1b                	je     0x596a8a
  596a6f:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  596a72:	49                   	dec    ecx
  596a73:	3a c3                	cmp    al,bl
  596a75:	74 0a                	je     0x596a81
  596a77:	3c ff                	cmp    al,0xff
  596a79:	74 06                	je     0x596a81
  596a7b:	fe c8                	dec    al
  596a7d:	88 01                	mov    BYTE PTR [ecx],al
  596a7f:	eb 09                	jmp    0x596a8a
  596a81:	51                   	push   ecx
  596a82:	e8 69 7b 06 00       	call   0x5fe5f0
  596a87:	83 c4 04             	add    esp,0x4
  596a8a:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  596a8d:	e8 de e9 ff ff       	call   0x595470
  596a92:	8b c8                	mov    ecx,eax
  596a94:	e8 c7 53 00 00       	call   0x59be60
  596a99:	84 c0                	test   al,al
  596a9b:	74 38                	je     0x596ad5
  596a9d:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  596aa0:	8d 44 24 0c          	lea    eax,[esp+0xc]
  596aa4:	50                   	push   eax
  596aa5:	8b 11                	mov    edx,DWORD PTR [ecx]
  596aa7:	ff 52 08             	call   DWORD PTR [edx+0x8]
  596aaa:	8b 08                	mov    ecx,DWORD PTR [eax]
  596aac:	c7 44 24 28 01 00 00 	mov    DWORD PTR [esp+0x28],0x1
  596ab3:	00 
  596ab4:	51                   	push   ecx
  596ab5:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  596ab8:	e8 b3 e9 ff ff       	call   0x595470
  596abd:	8b c8                	mov    ecx,eax
  596abf:	e8 fc 4f 00 00       	call   0x59bac0
  596ac4:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  596ac8:	c7 44 24 28 ff ff ff 	mov    DWORD PTR [esp+0x28],0xffffffff
  596acf:	ff 
  596ad0:	e8 0b c6 fc ff       	call   0x5630e0
  596ad5:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  596ad8:	e8 93 e9 ff ff       	call   0x595470
  596add:	8b c8                	mov    ecx,eax
  596adf:	e8 7c fa fb ff       	call   0x556560
  596ae4:	8b c8                	mov    ecx,eax
  596ae6:	e8 05 47 00 00       	call   0x59b1f0
  596aeb:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  596aef:	5e                   	pop    esi
  596af0:	5b                   	pop    ebx
  596af1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596af8:	83 c4 24             	add    esp,0x24
  596afb:	c3                   	ret
  596afc:	90                   	nop
  596afd:	90                   	nop
  596afe:	90                   	nop
  596aff:	90                   	nop
  596b00:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  596b06:	6a ff                	push   0xffffffff
  596b08:	68 98 3e 64 00       	push   0x643e98
  596b0d:	50                   	push   eax
  596b0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596b15:	83 ec 10             	sub    esp,0x10
  596b18:	55                   	push   ebp
  596b19:	8b e9                	mov    ebp,ecx
  596b1b:	e8 f0 fa ff ff       	call   0x596610
  596b20:	84 c0                	test   al,al
  596b22:	0f 85 bc 00 00 00    	jne    0x596be4
  596b28:	8a 44 24 28          	mov    al,BYTE PTR [esp+0x28]
  596b2c:	53                   	push   ebx
  596b2d:	56                   	push   esi
  596b2e:	57                   	push   edi
  596b2f:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  596b33:	bf d8 6a 6a 00       	mov    edi,0x6a6ad8
  596b38:	83 c9 ff             	or     ecx,0xffffffff
  596b3b:	33 c0                	xor    eax,eax
  596b3d:	33 f6                	xor    esi,esi
  596b3f:	6a 01                	push   0x1
  596b41:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  596b43:	f7 d1                	not    ecx
  596b45:	49                   	dec    ecx
  596b46:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  596b4a:	8b d9                	mov    ebx,ecx
  596b4c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  596b50:	53                   	push   ebx
  596b51:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  596b55:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  596b59:	e8 e2 ad e6 ff       	call   0x401940
  596b5e:	84 c0                	test   al,al
  596b60:	74 27                	je     0x596b89
  596b62:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  596b66:	8b cb                	mov    ecx,ebx
  596b68:	8b d1                	mov    edx,ecx
  596b6a:	be d8 6a 6a 00       	mov    esi,0x6a6ad8
  596b6f:	c1 e9 02             	shr    ecx,0x2
  596b72:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  596b74:	8b ca                	mov    ecx,edx
  596b76:	83 e1 03             	and    ecx,0x3
  596b79:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  596b7b:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  596b7f:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  596b83:	33 f6                	xor    esi,esi
  596b85:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  596b89:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  596b8d:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  596b91:	51                   	push   ecx
  596b92:	6a 7e                	push   0x7e
  596b94:	68 a8 6a 6a 00       	push   0x6a6aa8
  596b99:	68 2c 53 69 00       	push   0x69532c
  596b9e:	e8 4d 9c 00 00       	call   0x5a07f0
  596ba3:	ff d0                	call   eax
  596ba5:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  596ba9:	83 c4 10             	add    esp,0x10
  596bac:	3b c6                	cmp    eax,esi
  596bae:	c7 44 24 28 ff ff ff 	mov    DWORD PTR [esp+0x28],0xffffffff
  596bb5:	ff 
  596bb6:	74 1d                	je     0x596bd5
  596bb8:	8d 48 ff             	lea    ecx,[eax-0x1]
  596bbb:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  596bbe:	84 c0                	test   al,al
  596bc0:	74 0a                	je     0x596bcc
  596bc2:	3c ff                	cmp    al,0xff
  596bc4:	74 06                	je     0x596bcc
  596bc6:	fe c8                	dec    al
  596bc8:	88 01                	mov    BYTE PTR [ecx],al
  596bca:	eb 09                	jmp    0x596bd5
  596bcc:	51                   	push   ecx
  596bcd:	e8 1e 7a 06 00       	call   0x5fe5f0
  596bd2:	83 c4 04             	add    esp,0x4
  596bd5:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  596bd9:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  596bdd:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  596be1:	5f                   	pop    edi
  596be2:	5e                   	pop    esi
  596be3:	5b                   	pop    ebx
  596be4:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
  596be7:	8b 11                	mov    edx,DWORD PTR [ecx]
  596be9:	ff 92 84 00 00 00    	call   DWORD PTR [edx+0x84]
  596bef:	8b cd                	mov    ecx,ebp
  596bf1:	e8 ba fd ff ff       	call   0x5969b0
  596bf6:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  596bf9:	84 c0                	test   al,al
  596bfb:	0f 94 c0             	sete   al
  596bfe:	88 45 21             	mov    BYTE PTR [ebp+0x21],al
  596c01:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  596c05:	8b 11                	mov    edx,DWORD PTR [ecx]
  596c07:	50                   	push   eax
  596c08:	ff 52 04             	call   DWORD PTR [edx+0x4]
  596c0b:	84 c0                	test   al,al
  596c0d:	88 45 20             	mov    BYTE PTR [ebp+0x20],al
  596c10:	75 1b                	jne    0x596c2d
  596c12:	8a 45 21             	mov    al,BYTE PTR [ebp+0x21]
  596c15:	84 c0                	test   al,al
  596c17:	75 14                	jne    0x596c2d
  596c19:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  596c1d:	51                   	push   ecx
  596c1e:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
  596c21:	e8 4a e8 ff ff       	call   0x595470
  596c26:	8b c8                	mov    ecx,eax
  596c28:	e8 43 52 00 00       	call   0x59be70
  596c2d:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  596c31:	5d                   	pop    ebp
  596c32:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596c39:	83 c4 1c             	add    esp,0x1c
  596c3c:	c2 08 00             	ret    0x8
  596c3f:	90                   	nop
  596c40:	6a ff                	push   0xffffffff
  596c42:	68 b8 3e 64 00       	push   0x643eb8
  596c47:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  596c4d:	50                   	push   eax
  596c4e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596c55:	83 ec 18             	sub    esp,0x18
  596c58:	53                   	push   ebx
  596c59:	56                   	push   esi
  596c5a:	8b f1                	mov    esi,ecx
  596c5c:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  596c60:	e8 ab f9 ff ff       	call   0x596610
  596c65:	84 c0                	test   al,al
  596c67:	0f 85 bc 00 00 00    	jne    0x596d29
  596c6d:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  596c71:	55                   	push   ebp
  596c72:	57                   	push   edi
  596c73:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  596c77:	bf d8 6a 6a 00       	mov    edi,0x6a6ad8
  596c7c:	83 c9 ff             	or     ecx,0xffffffff
  596c7f:	33 c0                	xor    eax,eax
  596c81:	33 db                	xor    ebx,ebx
  596c83:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  596c85:	f7 d1                	not    ecx
  596c87:	49                   	dec    ecx
  596c88:	6a 01                	push   0x1
  596c8a:	8b e9                	mov    ebp,ecx
  596c8c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  596c90:	55                   	push   ebp
  596c91:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  596c95:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  596c99:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  596c9d:	e8 9e ac e6 ff       	call   0x401940
  596ca2:	84 c0                	test   al,al
  596ca4:	74 28                	je     0x596cce
  596ca6:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  596caa:	8b cd                	mov    ecx,ebp
  596cac:	8b d1                	mov    edx,ecx
  596cae:	be d8 6a 6a 00       	mov    esi,0x6a6ad8
  596cb3:	c1 e9 02             	shr    ecx,0x2
  596cb6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  596cb8:	8b ca                	mov    ecx,edx
  596cba:	83 e1 03             	and    ecx,0x3
  596cbd:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  596cbf:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  596cc3:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  596cc7:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  596ccb:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  596cce:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  596cd2:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  596cd6:	51                   	push   ecx
  596cd7:	68 91 00 00 00       	push   0x91
  596cdc:	68 a8 6a 6a 00       	push   0x6a6aa8
  596ce1:	68 2c 53 69 00       	push   0x69532c
  596ce6:	e8 05 9b 00 00       	call   0x5a07f0
  596ceb:	ff d0                	call   eax
  596ced:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  596cf1:	83 c4 10             	add    esp,0x10
  596cf4:	3b c3                	cmp    eax,ebx
  596cf6:	5f                   	pop    edi
  596cf7:	5d                   	pop    ebp
  596cf8:	74 2f                	je     0x596d29
  596cfa:	8d 48 ff             	lea    ecx,[eax-0x1]
  596cfd:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  596d00:	3a c3                	cmp    al,bl
  596d02:	74 1c                	je     0x596d20
  596d04:	3c ff                	cmp    al,0xff
  596d06:	74 18                	je     0x596d20
  596d08:	fe c8                	dec    al
  596d0a:	88 01                	mov    BYTE PTR [ecx],al
  596d0c:	8a 46 20             	mov    al,BYTE PTR [esi+0x20]
  596d0f:	5e                   	pop    esi
  596d10:	5b                   	pop    ebx
  596d11:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  596d15:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596d1c:	83 c4 24             	add    esp,0x24
  596d1f:	c3                   	ret
  596d20:	51                   	push   ecx
  596d21:	e8 ca 78 06 00       	call   0x5fe5f0
  596d26:	83 c4 04             	add    esp,0x4
  596d29:	8a 46 20             	mov    al,BYTE PTR [esi+0x20]
  596d2c:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  596d30:	5e                   	pop    esi
  596d31:	5b                   	pop    ebx
  596d32:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596d39:	83 c4 24             	add    esp,0x24
  596d3c:	c3                   	ret
  596d3d:	90                   	nop
  596d3e:	90                   	nop
  596d3f:	90                   	nop
  596d40:	6a ff                	push   0xffffffff
  596d42:	68 d8 3e 64 00       	push   0x643ed8
  596d47:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  596d4d:	50                   	push   eax
  596d4e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596d55:	83 ec 18             	sub    esp,0x18
  596d58:	53                   	push   ebx
  596d59:	56                   	push   esi
  596d5a:	8b f1                	mov    esi,ecx
  596d5c:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  596d60:	e8 ab f8 ff ff       	call   0x596610
  596d65:	84 c0                	test   al,al
  596d67:	0f 85 bc 00 00 00    	jne    0x596e29
  596d6d:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  596d71:	55                   	push   ebp
  596d72:	57                   	push   edi
  596d73:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  596d77:	bf d8 6a 6a 00       	mov    edi,0x6a6ad8
  596d7c:	83 c9 ff             	or     ecx,0xffffffff
  596d7f:	33 c0                	xor    eax,eax
  596d81:	33 db                	xor    ebx,ebx
  596d83:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  596d85:	f7 d1                	not    ecx
  596d87:	49                   	dec    ecx
  596d88:	6a 01                	push   0x1
  596d8a:	8b e9                	mov    ebp,ecx
  596d8c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  596d90:	55                   	push   ebp
  596d91:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  596d95:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  596d99:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  596d9d:	e8 9e ab e6 ff       	call   0x401940
  596da2:	84 c0                	test   al,al
  596da4:	74 28                	je     0x596dce
  596da6:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  596daa:	8b cd                	mov    ecx,ebp
  596dac:	8b d1                	mov    edx,ecx
  596dae:	be d8 6a 6a 00       	mov    esi,0x6a6ad8
  596db3:	c1 e9 02             	shr    ecx,0x2
  596db6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  596db8:	8b ca                	mov    ecx,edx
  596dba:	83 e1 03             	and    ecx,0x3
  596dbd:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  596dbf:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  596dc3:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  596dc7:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  596dcb:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  596dce:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  596dd2:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  596dd6:	51                   	push   ecx
  596dd7:	68 99 00 00 00       	push   0x99
  596ddc:	68 a8 6a 6a 00       	push   0x6a6aa8
  596de1:	68 2c 53 69 00       	push   0x69532c
  596de6:	e8 05 9a 00 00       	call   0x5a07f0
  596deb:	ff d0                	call   eax
  596ded:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  596df1:	83 c4 10             	add    esp,0x10
  596df4:	3b c3                	cmp    eax,ebx
  596df6:	5f                   	pop    edi
  596df7:	5d                   	pop    ebp
  596df8:	74 2f                	je     0x596e29
  596dfa:	8d 48 ff             	lea    ecx,[eax-0x1]
  596dfd:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  596e00:	3a c3                	cmp    al,bl
  596e02:	74 1c                	je     0x596e20
  596e04:	3c ff                	cmp    al,0xff
  596e06:	74 18                	je     0x596e20
  596e08:	fe c8                	dec    al
  596e0a:	88 01                	mov    BYTE PTR [ecx],al
  596e0c:	8a 46 21             	mov    al,BYTE PTR [esi+0x21]
  596e0f:	5e                   	pop    esi
  596e10:	5b                   	pop    ebx
  596e11:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  596e15:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596e1c:	83 c4 24             	add    esp,0x24
  596e1f:	c3                   	ret
  596e20:	51                   	push   ecx
  596e21:	e8 ca 77 06 00       	call   0x5fe5f0
  596e26:	83 c4 04             	add    esp,0x4
  596e29:	8a 46 21             	mov    al,BYTE PTR [esi+0x21]
  596e2c:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  596e30:	5e                   	pop    esi
  596e31:	5b                   	pop    ebx
  596e32:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596e39:	83 c4 24             	add    esp,0x24
  596e3c:	c3                   	ret
  596e3d:	90                   	nop
  596e3e:	90                   	nop
  596e3f:	90                   	nop
  596e40:	8d 41 24             	lea    eax,[ecx+0x24]
  596e43:	c3                   	ret
  596e44:	90                   	nop
  596e45:	90                   	nop
  596e46:	90                   	nop
  596e47:	90                   	nop
  596e48:	90                   	nop
  596e49:	90                   	nop
  596e4a:	90                   	nop
  596e4b:	90                   	nop
  596e4c:	90                   	nop
  596e4d:	90                   	nop
  596e4e:	90                   	nop
  596e4f:	90                   	nop
  596e50:	56                   	push   esi
  596e51:	57                   	push   edi
  596e52:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  596e56:	8b f1                	mov    esi,ecx
  596e58:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  596e5b:	8b 07                	mov    eax,DWORD PTR [edi]
  596e5d:	3b c8                	cmp    ecx,eax
  596e5f:	74 20                	je     0x596e81
  596e61:	85 c9                	test   ecx,ecx
  596e63:	74 10                	je     0x596e75
  596e65:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  596e68:	48                   	dec    eax
  596e69:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  596e6c:	75 07                	jne    0x596e75
  596e6e:	6a 00                	push   0x0
  596e70:	e8 4b 51 01 00       	call   0x5abfc0
  596e75:	8b 07                	mov    eax,DWORD PTR [edi]
  596e77:	85 c0                	test   eax,eax
  596e79:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
  596e7c:	74 03                	je     0x596e81
  596e7e:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  596e81:	5f                   	pop    edi
  596e82:	5e                   	pop    esi
  596e83:	c2 04 00             	ret    0x4
  596e86:	90                   	nop
  596e87:	90                   	nop
  596e88:	90                   	nop
  596e89:	90                   	nop
  596e8a:	90                   	nop
  596e8b:	90                   	nop
  596e8c:	90                   	nop
  596e8d:	90                   	nop
  596e8e:	90                   	nop
  596e8f:	90                   	nop
  596e90:	56                   	push   esi
  596e91:	8b f1                	mov    esi,ecx
  596e93:	e8 08 46 01 00       	call   0x5ab4a0
  596e98:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  596e9c:	c7 06 08 00 65 00    	mov    DWORD PTR [esi],0x650008
  596ea2:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  596ea5:	8b c6                	mov    eax,esi
  596ea7:	5e                   	pop    esi
  596ea8:	c2 04 00             	ret    0x4
  596eab:	90                   	nop
  596eac:	90                   	nop
  596ead:	90                   	nop
  596eae:	90                   	nop
  596eaf:	90                   	nop
  596eb0:	56                   	push   esi
  596eb1:	8b f1                	mov    esi,ecx
  596eb3:	e8 18 00 00 00       	call   0x596ed0
  596eb8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  596ebd:	74 09                	je     0x596ec8
  596ebf:	56                   	push   esi
  596ec0:	e8 2b 77 06 00       	call   0x5fe5f0
  596ec5:	83 c4 04             	add    esp,0x4
  596ec8:	8b c6                	mov    eax,esi
  596eca:	5e                   	pop    esi
  596ecb:	c2 04 00             	ret    0x4
  596ece:	90                   	nop
  596ecf:	90                   	nop
  596ed0:	c7 01 08 00 65 00    	mov    DWORD PTR [ecx],0x650008
  596ed6:	e9 f5 45 01 00       	jmp    0x5ab4d0
  596edb:	90                   	nop
  596edc:	90                   	nop
  596edd:	90                   	nop
  596ede:	90                   	nop
  596edf:	90                   	nop
  596ee0:	6a ff                	push   0xffffffff
  596ee2:	68 00 3f 64 00       	push   0x643f00
  596ee7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  596eed:	50                   	push   eax
  596eee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596ef5:	83 ec 14             	sub    esp,0x14
  596ef8:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  596efc:	53                   	push   ebx
  596efd:	55                   	push   ebp
  596efe:	56                   	push   esi
  596eff:	8b f1                	mov    esi,ecx
  596f01:	50                   	push   eax
  596f02:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  596f06:	e8 85 ff ff ff       	call   0x596e90
  596f0b:	8b 6c 24 34          	mov    ebp,DWORD PTR [esp+0x34]
  596f0f:	83 c9 ff             	or     ecx,0xffffffff
  596f12:	33 db                	xor    ebx,ebx
  596f14:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
  596f17:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
  596f1a:	c7 46 20 00 00 80 3f 	mov    DWORD PTR [esi+0x20],0x3f800000
  596f21:	c6 46 24 01          	mov    BYTE PTR [esi+0x24],0x1
  596f25:	3b e9                	cmp    ebp,ecx
  596f27:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  596f2b:	c7 06 18 00 65 00    	mov    DWORD PTR [esi],0x650018
  596f31:	74 7a                	je     0x596fad
  596f33:	3b eb                	cmp    ebp,ebx
  596f35:	7d 76                	jge    0x596fad
  596f37:	57                   	push   edi
  596f38:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  596f3d:	33 c0                	xor    eax,eax
  596f3f:	8a 54 24 34          	mov    dl,BYTE PTR [esp+0x34]
  596f43:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  596f45:	f7 d1                	not    ecx
  596f47:	49                   	dec    ecx
  596f48:	88 54 24 14          	mov    BYTE PTR [esp+0x14],dl
  596f4c:	51                   	push   ecx
  596f4d:	68 70 3f 6b 00       	push   0x6b3f70
  596f52:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  596f56:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  596f5a:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  596f5e:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  596f62:	e8 89 d1 e6 ff       	call   0x4040f0
  596f67:	8d 44 24 14          	lea    eax,[esp+0x14]
  596f6b:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  596f70:	50                   	push   eax
  596f71:	6a 56                	push   0x56
  596f73:	68 c8 d4 68 00       	push   0x68d4c8
  596f78:	68 90 d4 68 00       	push   0x68d490
  596f7d:	e8 6e 98 00 00       	call   0x5a07f0
  596f82:	ff d0                	call   eax
  596f84:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  596f88:	83 c4 10             	add    esp,0x10
  596f8b:	3b c3                	cmp    eax,ebx
  596f8d:	5f                   	pop    edi
  596f8e:	74 1d                	je     0x596fad
  596f90:	8d 48 ff             	lea    ecx,[eax-0x1]
  596f93:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  596f96:	3a c3                	cmp    al,bl
  596f98:	74 0a                	je     0x596fa4
  596f9a:	3c ff                	cmp    al,0xff
  596f9c:	74 06                	je     0x596fa4
  596f9e:	fe c8                	dec    al
  596fa0:	88 01                	mov    BYTE PTR [ecx],al
  596fa2:	eb 09                	jmp    0x596fad
  596fa4:	51                   	push   ecx
  596fa5:	e8 46 76 06 00       	call   0x5fe5f0
  596faa:	83 c4 04             	add    esp,0x4
  596fad:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  596fb1:	89 6e 18             	mov    DWORD PTR [esi+0x18],ebp
  596fb4:	c7 46 1c ff ff ff ff 	mov    DWORD PTR [esi+0x1c],0xffffffff
  596fbb:	c7 46 20 00 00 80 3f 	mov    DWORD PTR [esi+0x20],0x3f800000
  596fc2:	c6 46 24 01          	mov    BYTE PTR [esi+0x24],0x1
  596fc6:	8b c6                	mov    eax,esi
  596fc8:	5e                   	pop    esi
  596fc9:	5d                   	pop    ebp
  596fca:	5b                   	pop    ebx
  596fcb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596fd2:	83 c4 20             	add    esp,0x20
  596fd5:	c2 08 00             	ret    0x8
  596fd8:	90                   	nop
  596fd9:	90                   	nop
  596fda:	90                   	nop
  596fdb:	90                   	nop
  596fdc:	90                   	nop
  596fdd:	90                   	nop
  596fde:	90                   	nop
  596fdf:	90                   	nop
  596fe0:	56                   	push   esi
  596fe1:	8b f1                	mov    esi,ecx
  596fe3:	e8 18 00 00 00       	call   0x597000
  596fe8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  596fed:	74 09                	je     0x596ff8
  596fef:	56                   	push   esi
  596ff0:	e8 fb 75 06 00       	call   0x5fe5f0
  596ff5:	83 c4 04             	add    esp,0x4
  596ff8:	8b c6                	mov    eax,esi
  596ffa:	5e                   	pop    esi
  596ffb:	c2 04 00             	ret    0x4
  596ffe:	90                   	nop
  596fff:	90                   	nop
  597000:	c7 01 18 00 65 00    	mov    DWORD PTR [ecx],0x650018
  597006:	e9 c5 fe ff ff       	jmp    0x596ed0
  59700b:	90                   	nop
  59700c:	90                   	nop
  59700d:	90                   	nop
  59700e:	90                   	nop
  59700f:	90                   	nop
  597010:	51                   	push   ecx
  597011:	56                   	push   esi
  597012:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
  597016:	68 f8 ff 64 00       	push   0x64fff8
  59701b:	8b ce                	mov    ecx,esi
  59701d:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
  597024:	00 
  597025:	e8 a6 41 00 00       	call   0x59b1d0
  59702a:	8b c6                	mov    eax,esi
  59702c:	5e                   	pop    esi
  59702d:	59                   	pop    ecx
  59702e:	c2 04 00             	ret    0x4
  597031:	90                   	nop
  597032:	90                   	nop
  597033:	90                   	nop
  597034:	90                   	nop
  597035:	90                   	nop
  597036:	90                   	nop
  597037:	90                   	nop
  597038:	90                   	nop
  597039:	90                   	nop
  59703a:	90                   	nop
  59703b:	90                   	nop
  59703c:	90                   	nop
  59703d:	90                   	nop
  59703e:	90                   	nop
  59703f:	90                   	nop
  597040:	6a ff                	push   0xffffffff
  597042:	68 20 3f 64 00       	push   0x643f20
  597047:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59704d:	50                   	push   eax
  59704e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  597055:	83 ec 14             	sub    esp,0x14
  597058:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  59705c:	53                   	push   ebx
  59705d:	55                   	push   ebp
  59705e:	56                   	push   esi
  59705f:	8b f1                	mov    esi,ecx
  597061:	50                   	push   eax
  597062:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  597066:	e8 25 fe ff ff       	call   0x596e90
  59706b:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  59706f:	8b 6c 24 38          	mov    ebp,DWORD PTR [esp+0x38]
  597073:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
  597076:	83 c9 ff             	or     ecx,0xffffffff
  597079:	33 db                	xor    ebx,ebx
  59707b:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
  59707e:	89 4e 20             	mov    DWORD PTR [esi+0x20],ecx
  597081:	c7 46 24 00 00 80 3f 	mov    DWORD PTR [esi+0x24],0x3f800000
  597088:	c6 46 28 01          	mov    BYTE PTR [esi+0x28],0x1
  59708c:	3b e9                	cmp    ebp,ecx
  59708e:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  597092:	c7 06 28 00 65 00    	mov    DWORD PTR [esi],0x650028
  597098:	74 7a                	je     0x597114
  59709a:	3b eb                	cmp    ebp,ebx
  59709c:	7d 76                	jge    0x597114
  59709e:	57                   	push   edi
  59709f:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  5970a4:	33 c0                	xor    eax,eax
  5970a6:	8a 54 24 34          	mov    dl,BYTE PTR [esp+0x34]
  5970aa:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5970ac:	f7 d1                	not    ecx
  5970ae:	49                   	dec    ecx
  5970af:	88 54 24 14          	mov    BYTE PTR [esp+0x14],dl
  5970b3:	51                   	push   ecx
  5970b4:	68 70 3f 6b 00       	push   0x6b3f70
  5970b9:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5970bd:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  5970c1:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  5970c5:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  5970c9:	e8 22 d0 e6 ff       	call   0x4040f0
  5970ce:	8d 44 24 14          	lea    eax,[esp+0x14]
  5970d2:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  5970d7:	50                   	push   eax
  5970d8:	6a 56                	push   0x56
  5970da:	68 c8 d4 68 00       	push   0x68d4c8
  5970df:	68 90 d4 68 00       	push   0x68d490
  5970e4:	e8 07 97 00 00       	call   0x5a07f0
  5970e9:	ff d0                	call   eax
  5970eb:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  5970ef:	83 c4 10             	add    esp,0x10
  5970f2:	3b c3                	cmp    eax,ebx
  5970f4:	5f                   	pop    edi
  5970f5:	74 1d                	je     0x597114
  5970f7:	8d 48 ff             	lea    ecx,[eax-0x1]
  5970fa:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5970fd:	3a c3                	cmp    al,bl
  5970ff:	74 0a                	je     0x59710b
  597101:	3c ff                	cmp    al,0xff
  597103:	74 06                	je     0x59710b
  597105:	fe c8                	dec    al
  597107:	88 01                	mov    BYTE PTR [ecx],al
  597109:	eb 09                	jmp    0x597114
  59710b:	51                   	push   ecx
  59710c:	e8 df 74 06 00       	call   0x5fe5f0
  597111:	83 c4 04             	add    esp,0x4
  597114:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  597118:	89 6e 1c             	mov    DWORD PTR [esi+0x1c],ebp
  59711b:	c7 46 20 ff ff ff ff 	mov    DWORD PTR [esi+0x20],0xffffffff
  597122:	c7 46 24 00 00 80 3f 	mov    DWORD PTR [esi+0x24],0x3f800000
  597129:	c6 46 28 01          	mov    BYTE PTR [esi+0x28],0x1
  59712d:	8b c6                	mov    eax,esi
  59712f:	5e                   	pop    esi
  597130:	5d                   	pop    ebp
  597131:	5b                   	pop    ebx
  597132:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  597139:	83 c4 20             	add    esp,0x20
  59713c:	c2 0c 00             	ret    0xc
  59713f:	90                   	nop
  597140:	56                   	push   esi
  597141:	8b f1                	mov    esi,ecx
  597143:	e8 18 00 00 00       	call   0x597160
  597148:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  59714d:	74 09                	je     0x597158
  59714f:	56                   	push   esi
  597150:	e8 9b 74 06 00       	call   0x5fe5f0
  597155:	83 c4 04             	add    esp,0x4
  597158:	8b c6                	mov    eax,esi
  59715a:	5e                   	pop    esi
  59715b:	c2 04 00             	ret    0x4
  59715e:	90                   	nop
  59715f:	90                   	nop
  597160:	c7 01 28 00 65 00    	mov    DWORD PTR [ecx],0x650028
  597166:	e9 65 fd ff ff       	jmp    0x596ed0
  59716b:	90                   	nop
  59716c:	90                   	nop
  59716d:	90                   	nop
  59716e:	90                   	nop
  59716f:	90                   	nop
  597170:	51                   	push   ecx
  597171:	8b 51 1c             	mov    edx,DWORD PTR [ecx+0x1c]
  597174:	53                   	push   ebx
  597175:	83 fa ff             	cmp    edx,0xffffffff
  597178:	56                   	push   esi
  597179:	b3 01                	mov    bl,0x1
  59717b:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
  59717f:	74 75                	je     0x5971f6
  597181:	8b 41 20             	mov    eax,DWORD PTR [ecx+0x20]
  597184:	83 f8 ff             	cmp    eax,0xffffffff
  597187:	75 20                	jne    0x5971a9
  597189:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  59718d:	88 59 28             	mov    BYTE PTR [ecx+0x28],bl
  597190:	03 d0                	add    edx,eax
  597192:	33 c0                	xor    eax,eax
  597194:	84 db                	test   bl,bl
  597196:	5e                   	pop    esi
  597197:	89 51 20             	mov    DWORD PTR [ecx+0x20],edx
  59719a:	c7 41 24 00 00 80 3f 	mov    DWORD PTR [ecx+0x24],0x3f800000
  5971a1:	5b                   	pop    ebx
  5971a2:	0f 94 c0             	sete   al
  5971a5:	59                   	pop    ecx
  5971a6:	c2 04 00             	ret    0x4
  5971a9:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  5971ad:	3b f0                	cmp    esi,eax
  5971af:	7e 19                	jle    0x5971ca
  5971b1:	32 db                	xor    bl,bl
  5971b3:	33 c0                	xor    eax,eax
  5971b5:	84 db                	test   bl,bl
  5971b7:	88 59 28             	mov    BYTE PTR [ecx+0x28],bl
  5971ba:	5e                   	pop    esi
  5971bb:	c7 41 24 00 00 00 00 	mov    DWORD PTR [ecx+0x24],0x0
  5971c2:	5b                   	pop    ebx
  5971c3:	0f 94 c0             	sete   al
  5971c6:	59                   	pop    ecx
  5971c7:	c2 04 00             	ret    0x4
  5971ca:	85 d2                	test   edx,edx
  5971cc:	7e 21                	jle    0x5971ef
  5971ce:	2b c6                	sub    eax,esi
  5971d0:	88 59 28             	mov    BYTE PTR [ecx+0x28],bl
  5971d3:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5971d7:	33 c0                	xor    eax,eax
  5971d9:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  5971dd:	84 db                	test   bl,bl
  5971df:	5e                   	pop    esi
  5971e0:	5b                   	pop    ebx
  5971e1:	da 74 24 00          	fidiv  DWORD PTR [esp+0x0]
  5971e5:	0f 94 c0             	sete   al
  5971e8:	d9 59 24             	fstp   DWORD PTR [ecx+0x24]
  5971eb:	59                   	pop    ecx
  5971ec:	c2 04 00             	ret    0x4
  5971ef:	c7 41 24 00 00 00 00 	mov    DWORD PTR [ecx+0x24],0x0
  5971f6:	33 c0                	xor    eax,eax
  5971f8:	88 59 28             	mov    BYTE PTR [ecx+0x28],bl
  5971fb:	84 db                	test   bl,bl
  5971fd:	5e                   	pop    esi
  5971fe:	5b                   	pop    ebx
  5971ff:	0f 94 c0             	sete   al
  597202:	59                   	pop    ecx
  597203:	c2 04 00             	ret    0x4
  597206:	90                   	nop
  597207:	90                   	nop
  597208:	90                   	nop
  597209:	90                   	nop
  59720a:	90                   	nop
  59720b:	90                   	nop
  59720c:	90                   	nop
  59720d:	90                   	nop
  59720e:	90                   	nop
  59720f:	90                   	nop
  597210:	83 ec 10             	sub    esp,0x10
  597213:	56                   	push   esi
  597214:	8b f1                	mov    esi,ecx
  597216:	57                   	push   edi
  597217:	8d 54 24 0c          	lea    edx,[esp+0xc]
  59721b:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59721e:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  597221:	51                   	push   ecx
  597222:	50                   	push   eax
  597223:	6a 01                	push   0x1
  597225:	52                   	push   edx
  597226:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  59722d:	00 
  59722e:	e8 9d ea ff ff       	call   0x595cd0
  597233:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  597237:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59723a:	50                   	push   eax
  59723b:	57                   	push   edi
  59723c:	e8 2f e2 ff ff       	call   0x595470
  597241:	8b c8                	mov    ecx,eax
  597243:	e8 e8 4a 00 00       	call   0x59bd30
  597248:	8b c8                	mov    ecx,eax
  59724a:	e8 31 2a 00 00       	call   0x599c80
  59724f:	8b c7                	mov    eax,edi
  597251:	5f                   	pop    edi
  597252:	5e                   	pop    esi
  597253:	83 c4 10             	add    esp,0x10
  597256:	c2 04 00             	ret    0x4
  597259:	90                   	nop
  59725a:	90                   	nop
  59725b:	90                   	nop
  59725c:	90                   	nop
  59725d:	90                   	nop
  59725e:	90                   	nop
  59725f:	90                   	nop
  597260:	6a ff                	push   0xffffffff
  597262:	68 40 3f 64 00       	push   0x643f40
  597267:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59726d:	50                   	push   eax
  59726e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  597275:	83 ec 14             	sub    esp,0x14
  597278:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  59727c:	53                   	push   ebx
  59727d:	55                   	push   ebp
  59727e:	56                   	push   esi
  59727f:	8b f1                	mov    esi,ecx
  597281:	50                   	push   eax
  597282:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  597286:	e8 05 fc ff ff       	call   0x596e90
  59728b:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  59728f:	8b 6c 24 38          	mov    ebp,DWORD PTR [esp+0x38]
  597293:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
  597296:	83 c9 ff             	or     ecx,0xffffffff
  597299:	33 db                	xor    ebx,ebx
  59729b:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
  59729e:	89 4e 20             	mov    DWORD PTR [esi+0x20],ecx
  5972a1:	c7 46 24 00 00 80 3f 	mov    DWORD PTR [esi+0x24],0x3f800000
  5972a8:	c6 46 28 01          	mov    BYTE PTR [esi+0x28],0x1
  5972ac:	3b e9                	cmp    ebp,ecx
  5972ae:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  5972b2:	c7 06 38 00 65 00    	mov    DWORD PTR [esi],0x650038
  5972b8:	74 7a                	je     0x597334
  5972ba:	3b eb                	cmp    ebp,ebx
  5972bc:	7d 76                	jge    0x597334
  5972be:	57                   	push   edi
  5972bf:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  5972c4:	33 c0                	xor    eax,eax
  5972c6:	8a 54 24 34          	mov    dl,BYTE PTR [esp+0x34]
  5972ca:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5972cc:	f7 d1                	not    ecx
  5972ce:	49                   	dec    ecx
  5972cf:	88 54 24 14          	mov    BYTE PTR [esp+0x14],dl
  5972d3:	51                   	push   ecx
  5972d4:	68 70 3f 6b 00       	push   0x6b3f70
  5972d9:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5972dd:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  5972e1:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  5972e5:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  5972e9:	e8 02 ce e6 ff       	call   0x4040f0
  5972ee:	8d 44 24 14          	lea    eax,[esp+0x14]
  5972f2:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  5972f7:	50                   	push   eax
  5972f8:	6a 56                	push   0x56
  5972fa:	68 c8 d4 68 00       	push   0x68d4c8
  5972ff:	68 90 d4 68 00       	push   0x68d490
  597304:	e8 e7 94 00 00       	call   0x5a07f0
  597309:	ff d0                	call   eax
  59730b:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  59730f:	83 c4 10             	add    esp,0x10
  597312:	3b c3                	cmp    eax,ebx
  597314:	5f                   	pop    edi
  597315:	74 1d                	je     0x597334
  597317:	8d 48 ff             	lea    ecx,[eax-0x1]
  59731a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59731d:	3a c3                	cmp    al,bl
  59731f:	74 0a                	je     0x59732b
  597321:	3c ff                	cmp    al,0xff
  597323:	74 06                	je     0x59732b
  597325:	fe c8                	dec    al
  597327:	88 01                	mov    BYTE PTR [ecx],al
  597329:	eb 09                	jmp    0x597334
  59732b:	51                   	push   ecx
  59732c:	e8 bf 72 06 00       	call   0x5fe5f0
  597331:	83 c4 04             	add    esp,0x4
  597334:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  597338:	89 6e 1c             	mov    DWORD PTR [esi+0x1c],ebp
  59733b:	c7 46 20 ff ff ff ff 	mov    DWORD PTR [esi+0x20],0xffffffff
  597342:	c7 46 24 00 00 80 3f 	mov    DWORD PTR [esi+0x24],0x3f800000
  597349:	c6 46 28 01          	mov    BYTE PTR [esi+0x28],0x1
  59734d:	8b c6                	mov    eax,esi
  59734f:	5e                   	pop    esi
  597350:	5d                   	pop    ebp
  597351:	5b                   	pop    ebx
  597352:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  597359:	83 c4 20             	add    esp,0x20
  59735c:	c2 0c 00             	ret    0xc
  59735f:	90                   	nop
  597360:	56                   	push   esi
  597361:	8b f1                	mov    esi,ecx
  597363:	e8 18 00 00 00       	call   0x597380
  597368:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  59736d:	74 09                	je     0x597378
  59736f:	56                   	push   esi
  597370:	e8 7b 72 06 00       	call   0x5fe5f0
  597375:	83 c4 04             	add    esp,0x4
  597378:	8b c6                	mov    eax,esi
  59737a:	5e                   	pop    esi
  59737b:	c2 04 00             	ret    0x4
  59737e:	90                   	nop
  59737f:	90                   	nop
  597380:	c7 01 38 00 65 00    	mov    DWORD PTR [ecx],0x650038
  597386:	e9 45 fb ff ff       	jmp    0x596ed0
  59738b:	90                   	nop
  59738c:	90                   	nop
  59738d:	90                   	nop
  59738e:	90                   	nop
  59738f:	90                   	nop
  597390:	83 ec 10             	sub    esp,0x10
  597393:	56                   	push   esi
  597394:	8b f1                	mov    esi,ecx
  597396:	57                   	push   edi
  597397:	8d 54 24 0c          	lea    edx,[esp+0xc]
  59739b:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59739e:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  5973a1:	51                   	push   ecx
  5973a2:	50                   	push   eax
  5973a3:	6a 00                	push   0x0
  5973a5:	52                   	push   edx
  5973a6:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  5973ad:	00 
  5973ae:	e8 1d e9 ff ff       	call   0x595cd0
  5973b3:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  5973b7:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  5973ba:	50                   	push   eax
  5973bb:	57                   	push   edi
  5973bc:	e8 af e0 ff ff       	call   0x595470
  5973c1:	8b c8                	mov    ecx,eax
  5973c3:	e8 68 49 00 00       	call   0x59bd30
  5973c8:	8b c8                	mov    ecx,eax
  5973ca:	e8 b1 28 00 00       	call   0x599c80
  5973cf:	8b c7                	mov    eax,edi
  5973d1:	5f                   	pop    edi
  5973d2:	5e                   	pop    esi
  5973d3:	83 c4 10             	add    esp,0x10
  5973d6:	c2 04 00             	ret    0x4
  5973d9:	90                   	nop
  5973da:	90                   	nop
  5973db:	90                   	nop
  5973dc:	90                   	nop
  5973dd:	90                   	nop
  5973de:	90                   	nop
  5973df:	90                   	nop
  5973e0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5973e4:	56                   	push   esi
  5973e5:	8b f1                	mov    esi,ecx
  5973e7:	50                   	push   eax
  5973e8:	e8 a3 fa ff ff       	call   0x596e90
  5973ed:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  5973f1:	c7 06 48 00 65 00    	mov    DWORD PTR [esi],0x650048
  5973f7:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
  5973fa:	8b c6                	mov    eax,esi
  5973fc:	5e                   	pop    esi
  5973fd:	c2 08 00             	ret    0x8
  597400:	56                   	push   esi
  597401:	8b f1                	mov    esi,ecx
  597403:	e8 18 00 00 00       	call   0x597420
  597408:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  59740d:	74 09                	je     0x597418
  59740f:	56                   	push   esi
  597410:	e8 db 71 06 00       	call   0x5fe5f0
  597415:	83 c4 04             	add    esp,0x4
  597418:	8b c6                	mov    eax,esi
  59741a:	5e                   	pop    esi
  59741b:	c2 04 00             	ret    0x4
  59741e:	90                   	nop
  59741f:	90                   	nop
  597420:	c7 01 48 00 65 00    	mov    DWORD PTR [ecx],0x650048
  597426:	e9 a5 fa ff ff       	jmp    0x596ed0
  59742b:	90                   	nop
  59742c:	90                   	nop
  59742d:	90                   	nop
  59742e:	90                   	nop
  59742f:	90                   	nop
  597430:	83 ec 0c             	sub    esp,0xc
  597433:	8d 44 24 00          	lea    eax,[esp+0x0]
  597437:	56                   	push   esi
  597438:	8b f1                	mov    esi,ecx
  59743a:	57                   	push   edi
  59743b:	50                   	push   eax
  59743c:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59743f:	e8 8c e8 ff ff       	call   0x595cd0
  597444:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  597447:	8b f8                	mov    edi,eax
  597449:	e8 22 e0 ff ff       	call   0x595470
  59744e:	8b c8                	mov    ecx,eax
  597450:	e8 fb 49 00 00       	call   0x59be50
  597455:	8b c8                	mov    ecx,eax
  597457:	8b d7                	mov    edx,edi
  597459:	e8 42 bc 01 00       	call   0x5b30a0
  59745e:	d8 5e 18             	fcomp  DWORD PTR [esi+0x18]
  597461:	5f                   	pop    edi
  597462:	5e                   	pop    esi
  597463:	df e0                	fnstsw ax
  597465:	f6 c4 01             	test   ah,0x1
  597468:	74 0b                	je     0x597475
  59746a:	b8 01 00 00 00       	mov    eax,0x1
  59746f:	83 c4 0c             	add    esp,0xc
  597472:	c2 04 00             	ret    0x4
  597475:	33 c0                	xor    eax,eax
  597477:	83 c4 0c             	add    esp,0xc
  59747a:	c2 04 00             	ret    0x4
  59747d:	90                   	nop
  59747e:	90                   	nop
  59747f:	90                   	nop
  597480:	83 ec 10             	sub    esp,0x10
  597483:	56                   	push   esi
  597484:	8b f1                	mov    esi,ecx
  597486:	57                   	push   edi
  597487:	8d 44 24 0c          	lea    eax,[esp+0xc]
  59748b:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59748e:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
  597495:	00 
  597496:	51                   	push   ecx
  597497:	50                   	push   eax
  597498:	e8 33 e8 ff ff       	call   0x595cd0
  59749d:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  5974a1:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  5974a4:	50                   	push   eax
  5974a5:	57                   	push   edi
  5974a6:	e8 c5 df ff ff       	call   0x595470
  5974ab:	8b c8                	mov    ecx,eax
  5974ad:	e8 7e 48 00 00       	call   0x59bd30
  5974b2:	8b c8                	mov    ecx,eax
  5974b4:	e8 27 23 00 00       	call   0x5997e0
  5974b9:	8b c7                	mov    eax,edi
  5974bb:	5f                   	pop    edi
  5974bc:	5e                   	pop    esi
  5974bd:	83 c4 10             	add    esp,0x10
  5974c0:	c2 04 00             	ret    0x4
  5974c3:	90                   	nop
  5974c4:	90                   	nop
  5974c5:	90                   	nop
  5974c6:	90                   	nop
  5974c7:	90                   	nop
  5974c8:	90                   	nop
  5974c9:	90                   	nop
  5974ca:	90                   	nop
  5974cb:	90                   	nop
  5974cc:	90                   	nop
  5974cd:	90                   	nop
  5974ce:	90                   	nop
  5974cf:	90                   	nop
