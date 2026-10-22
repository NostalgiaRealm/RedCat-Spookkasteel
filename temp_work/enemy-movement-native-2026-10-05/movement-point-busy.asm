  598570:	8b 41 74             	mov    eax,DWORD PTR [ecx+0x74]
  598573:	c3                   	ret
  598574:	90                   	nop
  598575:	90                   	nop
  598576:	90                   	nop
  598577:	90                   	nop
  598578:	90                   	nop
  598579:	90                   	nop
  59857a:	90                   	nop
  59857b:	90                   	nop
  59857c:	90                   	nop
  59857d:	90                   	nop
  59857e:	90                   	nop
  59857f:	90                   	nop
  598580:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  598586:	6a ff                	push   0xffffffff
  598588:	68 48 41 64 00       	push   0x644148
  59858d:	50                   	push   eax
  59858e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  598592:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  598599:	8b 51 74             	mov    edx,DWORD PTR [ecx+0x74]
  59859c:	83 ec 10             	sub    esp,0x10
  59859f:	03 d0                	add    edx,eax
  5985a1:	53                   	push   ebx
  5985a2:	89 51 74             	mov    DWORD PTR [ecx+0x74],edx
  5985a5:	0f 89 b8 00 00 00    	jns    0x598663
  5985ab:	8a 4c 24 24          	mov    cl,BYTE PTR [esp+0x24]
  5985af:	55                   	push   ebp
  5985b0:	57                   	push   edi
  5985b1:	88 4c 24 0c          	mov    BYTE PTR [esp+0xc],cl
  5985b5:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  5985ba:	83 c9 ff             	or     ecx,0xffffffff
  5985bd:	33 c0                	xor    eax,eax
  5985bf:	33 db                	xor    ebx,ebx
  5985c1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5985c3:	f7 d1                	not    ecx
  5985c5:	49                   	dec    ecx
  5985c6:	6a 01                	push   0x1
  5985c8:	8b e9                	mov    ebp,ecx
  5985ca:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5985ce:	55                   	push   ebp
  5985cf:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  5985d3:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  5985d7:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  5985db:	e8 60 93 e6 ff       	call   0x401940
  5985e0:	84 c0                	test   al,al
  5985e2:	74 26                	je     0x59860a
  5985e4:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  5985e8:	8b cd                	mov    ecx,ebp
  5985ea:	8b d1                	mov    edx,ecx
  5985ec:	56                   	push   esi
  5985ed:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  5985f2:	c1 e9 02             	shr    ecx,0x2
  5985f5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5985f7:	8b ca                	mov    ecx,edx
  5985f9:	83 e1 03             	and    ecx,0x3
  5985fc:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5985fe:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  598602:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  598606:	5e                   	pop    esi
  598607:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  59860a:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  59860e:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  598612:	51                   	push   ecx
  598613:	68 f6 00 00 00       	push   0xf6
  598618:	68 ec 6c 6a 00       	push   0x6a6cec
  59861d:	68 b8 6d 6a 00       	push   0x6a6db8
  598622:	e8 c9 81 00 00       	call   0x5a07f0
  598627:	ff d0                	call   eax
  598629:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  59862d:	83 c4 10             	add    esp,0x10
  598630:	3b c3                	cmp    eax,ebx
  598632:	5f                   	pop    edi
  598633:	5d                   	pop    ebp
  598634:	74 2d                	je     0x598663
  598636:	8d 48 ff             	lea    ecx,[eax-0x1]
  598639:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59863c:	3a c3                	cmp    al,bl
  59863e:	74 1a                	je     0x59865a
  598640:	3c ff                	cmp    al,0xff
  598642:	74 16                	je     0x59865a
  598644:	fe c8                	dec    al
  598646:	5b                   	pop    ebx
  598647:	88 01                	mov    BYTE PTR [ecx],al
  598649:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  59864d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  598654:	83 c4 1c             	add    esp,0x1c
  598657:	c2 04 00             	ret    0x4
  59865a:	51                   	push   ecx
  59865b:	e8 90 5f 06 00       	call   0x5fe5f0
  598660:	83 c4 04             	add    esp,0x4
  598663:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  598667:	5b                   	pop    ebx
  598668:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59866f:	83 c4 1c             	add    esp,0x1c
