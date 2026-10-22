  40d660:	6a ff                	push   0xffffffff
  40d662:	68 60 0b 62 00       	push   0x620b60
  40d667:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40d66d:	50                   	push   eax
  40d66e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40d675:	83 ec 28             	sub    esp,0x28
  40d678:	8a 44 24 3c          	mov    al,BYTE PTR [esp+0x3c]
  40d67c:	53                   	push   ebx
  40d67d:	55                   	push   ebp
  40d67e:	56                   	push   esi
  40d67f:	57                   	push   edi
  40d680:	8b 3d b8 ab 64 00    	mov    edi,DWORD PTR ds:0x64abb8
  40d686:	8b f1                	mov    esi,ecx
  40d688:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  40d68c:	33 db                	xor    ebx,ebx
  40d68e:	83 c9 ff             	or     ecx,0xffffffff
  40d691:	33 c0                	xor    eax,eax
  40d693:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  40d697:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  40d69b:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  40d69f:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  40d6a3:	6a 01                	push   0x1
  40d6a5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40d6a7:	f7 d1                	not    ecx
  40d6a9:	49                   	dec    ecx
  40d6aa:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  40d6ae:	8b e9                	mov    ebp,ecx
  40d6b0:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  40d6b4:	55                   	push   ebp
  40d6b5:	e8 86 42 ff ff       	call   0x401940
  40d6ba:	84 c0                	test   al,al
  40d6bc:	74 26                	je     0x40d6e4
  40d6be:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  40d6c2:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  40d6c6:	8b cd                	mov    ecx,ebp
  40d6c8:	55                   	push   ebp
  40d6c9:	8b d1                	mov    edx,ecx
  40d6cb:	c1 e9 02             	shr    ecx,0x2
  40d6ce:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40d6d0:	8b ca                	mov    ecx,edx
  40d6d2:	83 e1 03             	and    ecx,0x3
  40d6d5:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  40d6d7:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  40d6db:	e8 b0 6a ff ff       	call   0x404190
  40d6e0:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  40d6e4:	8a 44 24 4c          	mov    al,BYTE PTR [esp+0x4c]
  40d6e8:	8b 15 b4 ab 64 00    	mov    edx,DWORD PTR ds:0x64abb4
  40d6ee:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  40d6f2:	8b fa                	mov    edi,edx
  40d6f4:	83 c9 ff             	or     ecx,0xffffffff
  40d6f7:	33 c0                	xor    eax,eax
  40d6f9:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  40d6fd:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  40d701:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  40d705:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  40d709:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40d70b:	f7 d1                	not    ecx
  40d70d:	49                   	dec    ecx
  40d70e:	51                   	push   ecx
  40d70f:	52                   	push   edx
  40d710:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  40d714:	e8 d7 69 ff ff       	call   0x4040f0
  40d719:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
  40d71d:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  40d721:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  40d725:	c6 44 24 40 01       	mov    BYTE PTR [esp+0x40],0x1
  40d72a:	51                   	push   ecx
  40d72b:	52                   	push   edx
  40d72c:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
  40d730:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  40d734:	50                   	push   eax
  40d735:	51                   	push   ecx
  40d736:	52                   	push   edx
  40d737:	8b ce                	mov    ecx,esi
  40d739:	e8 42 05 02 00       	call   0x42dc80
  40d73e:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  40d742:	3b c3                	cmp    eax,ebx
  40d744:	74 1d                	je     0x40d763
  40d746:	8d 48 ff             	lea    ecx,[eax-0x1]
  40d749:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  40d74c:	3a c3                	cmp    al,bl
  40d74e:	74 0a                	je     0x40d75a
  40d750:	3c ff                	cmp    al,0xff
  40d752:	74 06                	je     0x40d75a
  40d754:	fe c8                	dec    al
  40d756:	88 01                	mov    BYTE PTR [ecx],al
  40d758:	eb 09                	jmp    0x40d763
  40d75a:	51                   	push   ecx
  40d75b:	e8 90 0e 1f 00       	call   0x5fe5f0
  40d760:	83 c4 04             	add    esp,0x4
  40d763:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  40d767:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  40d76b:	3b c3                	cmp    eax,ebx
  40d76d:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  40d771:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  40d775:	74 1d                	je     0x40d794
  40d777:	8d 48 ff             	lea    ecx,[eax-0x1]
  40d77a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  40d77d:	3a c3                	cmp    al,bl
  40d77f:	74 0a                	je     0x40d78b
  40d781:	3c ff                	cmp    al,0xff
  40d783:	74 06                	je     0x40d78b
  40d785:	fe c8                	dec    al
  40d787:	88 01                	mov    BYTE PTR [ecx],al
  40d789:	eb 09                	jmp    0x40d794
  40d78b:	51                   	push   ecx
  40d78c:	e8 5f 0e 1f 00       	call   0x5fe5f0
  40d791:	83 c4 04             	add    esp,0x4
  40d794:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  40d798:	c7 06 c0 ab 64 00    	mov    DWORD PTR [esi],0x64abc0
  40d79e:	8b c6                	mov    eax,esi
  40d7a0:	5f                   	pop    edi
  40d7a1:	5e                   	pop    esi
  40d7a2:	5d                   	pop    ebp
  40d7a3:	5b                   	pop    ebx
  40d7a4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40d7ab:	83 c4 34             	add    esp,0x34
  40d7ae:	c2 0c 00             	ret    0xc
