  415680:	6a ff                	push   0xffffffff
  415682:	68 c0 11 62 00       	push   0x6211c0
  415687:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  41568d:	50                   	push   eax
  41568e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  415695:	83 ec 28             	sub    esp,0x28
  415698:	8a 44 24 3c          	mov    al,BYTE PTR [esp+0x3c]
  41569c:	53                   	push   ebx
  41569d:	55                   	push   ebp
  41569e:	56                   	push   esi
  41569f:	57                   	push   edi
  4156a0:	8b 3d bc b2 64 00    	mov    edi,DWORD PTR ds:0x64b2bc
  4156a6:	8b f1                	mov    esi,ecx
  4156a8:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  4156ac:	33 db                	xor    ebx,ebx
  4156ae:	83 c9 ff             	or     ecx,0xffffffff
  4156b1:	33 c0                	xor    eax,eax
  4156b3:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  4156b7:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  4156bb:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  4156bf:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  4156c3:	6a 01                	push   0x1
  4156c5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4156c7:	f7 d1                	not    ecx
  4156c9:	49                   	dec    ecx
  4156ca:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  4156ce:	8b e9                	mov    ebp,ecx
  4156d0:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4156d4:	55                   	push   ebp
  4156d5:	e8 66 c2 fe ff       	call   0x401940
  4156da:	84 c0                	test   al,al
  4156dc:	74 26                	je     0x415704
  4156de:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  4156e2:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  4156e6:	8b cd                	mov    ecx,ebp
  4156e8:	55                   	push   ebp
  4156e9:	8b d1                	mov    edx,ecx
  4156eb:	c1 e9 02             	shr    ecx,0x2
  4156ee:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4156f0:	8b ca                	mov    ecx,edx
  4156f2:	83 e1 03             	and    ecx,0x3
  4156f5:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4156f7:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4156fb:	e8 90 ea fe ff       	call   0x404190
  415700:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  415704:	8a 44 24 4c          	mov    al,BYTE PTR [esp+0x4c]
  415708:	8b 15 b8 b2 64 00    	mov    edx,DWORD PTR ds:0x64b2b8
  41570e:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  415712:	8b fa                	mov    edi,edx
  415714:	83 c9 ff             	or     ecx,0xffffffff
  415717:	33 c0                	xor    eax,eax
  415719:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  41571d:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  415721:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  415725:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  415729:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  41572b:	f7 d1                	not    ecx
  41572d:	49                   	dec    ecx
  41572e:	51                   	push   ecx
  41572f:	52                   	push   edx
  415730:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  415734:	e8 b7 e9 fe ff       	call   0x4040f0
  415739:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
  41573d:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  415741:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  415745:	c6 44 24 40 01       	mov    BYTE PTR [esp+0x40],0x1
  41574a:	51                   	push   ecx
  41574b:	52                   	push   edx
  41574c:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
  415750:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  415754:	50                   	push   eax
  415755:	51                   	push   ecx
  415756:	52                   	push   edx
  415757:	8b ce                	mov    ecx,esi
  415759:	e8 22 85 01 00       	call   0x42dc80
  41575e:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  415762:	3b c3                	cmp    eax,ebx
  415764:	74 1d                	je     0x415783
  415766:	8d 48 ff             	lea    ecx,[eax-0x1]
  415769:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  41576c:	3a c3                	cmp    al,bl
  41576e:	74 0a                	je     0x41577a
  415770:	3c ff                	cmp    al,0xff
  415772:	74 06                	je     0x41577a
  415774:	fe c8                	dec    al
  415776:	88 01                	mov    BYTE PTR [ecx],al
  415778:	eb 09                	jmp    0x415783
  41577a:	51                   	push   ecx
  41577b:	e8 70 8e 1e 00       	call   0x5fe5f0
  415780:	83 c4 04             	add    esp,0x4
  415783:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  415787:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  41578b:	3b c3                	cmp    eax,ebx
  41578d:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  415791:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  415795:	74 1d                	je     0x4157b4
  415797:	8d 48 ff             	lea    ecx,[eax-0x1]
  41579a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  41579d:	3a c3                	cmp    al,bl
  41579f:	74 0a                	je     0x4157ab
  4157a1:	3c ff                	cmp    al,0xff
  4157a3:	74 06                	je     0x4157ab
  4157a5:	fe c8                	dec    al
  4157a7:	88 01                	mov    BYTE PTR [ecx],al
  4157a9:	eb 09                	jmp    0x4157b4
  4157ab:	51                   	push   ecx
  4157ac:	e8 3f 8e 1e 00       	call   0x5fe5f0
  4157b1:	83 c4 04             	add    esp,0x4
  4157b4:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  4157b8:	c7 06 c4 b2 64 00    	mov    DWORD PTR [esi],0x64b2c4
  4157be:	8b c6                	mov    eax,esi
  4157c0:	5f                   	pop    edi
  4157c1:	5e                   	pop    esi
  4157c2:	5d                   	pop    ebp
  4157c3:	5b                   	pop    ebx
  4157c4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4157cb:	83 c4 34             	add    esp,0x34
  4157ce:	c2 0c 00             	ret    0xc
  4157d1:	90                   	nop
  4157d2:	90                   	nop
  4157d3:	90                   	nop
  4157d4:	90                   	nop
  4157d5:	90                   	nop
  4157d6:	90                   	nop
  4157d7:	90                   	nop
  4157d8:	90                   	nop
  4157d9:	90                   	nop
  4157da:	90                   	nop
  4157db:	90                   	nop
  4157dc:	90                   	nop
  4157dd:	90                   	nop
  4157de:	90                   	nop
  4157df:	90                   	nop
