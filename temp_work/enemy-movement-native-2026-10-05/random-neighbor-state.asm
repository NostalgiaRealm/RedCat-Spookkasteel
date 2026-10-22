  5977d0:	6a ff                	push   0xffffffff
  5977d2:	68 b0 3f 64 00       	push   0x643fb0
  5977d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5977dd:	50                   	push   eax
  5977de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5977e5:	83 ec 14             	sub    esp,0x14
  5977e8:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5977ec:	53                   	push   ebx
  5977ed:	55                   	push   ebp
  5977ee:	56                   	push   esi
  5977ef:	8b f1                	mov    esi,ecx
  5977f1:	50                   	push   eax
  5977f2:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  5977f6:	e8 95 f6 ff ff       	call   0x596e90
  5977fb:	8b 6c 24 34          	mov    ebp,DWORD PTR [esp+0x34]
  5977ff:	83 c9 ff             	or     ecx,0xffffffff
  597802:	33 db                	xor    ebx,ebx
  597804:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
  597807:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
  59780a:	c7 46 20 00 00 80 3f 	mov    DWORD PTR [esi+0x20],0x3f800000
  597811:	c6 46 24 01          	mov    BYTE PTR [esi+0x24],0x1
  597815:	3b e9                	cmp    ebp,ecx
  597817:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  59781b:	c7 06 78 00 65 00    	mov    DWORD PTR [esi],0x650078
  597821:	74 7a                	je     0x59789d
  597823:	3b eb                	cmp    ebp,ebx
  597825:	7d 76                	jge    0x59789d
  597827:	57                   	push   edi
  597828:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59782d:	33 c0                	xor    eax,eax
  59782f:	8a 54 24 34          	mov    dl,BYTE PTR [esp+0x34]
  597833:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  597835:	f7 d1                	not    ecx
  597837:	49                   	dec    ecx
  597838:	88 54 24 14          	mov    BYTE PTR [esp+0x14],dl
  59783c:	51                   	push   ecx
  59783d:	68 70 3f 6b 00       	push   0x6b3f70
  597842:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  597846:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59784a:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  59784e:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  597852:	e8 99 c8 e6 ff       	call   0x4040f0
  597857:	8d 44 24 14          	lea    eax,[esp+0x14]
  59785b:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  597860:	50                   	push   eax
  597861:	6a 56                	push   0x56
  597863:	68 c8 d4 68 00       	push   0x68d4c8
  597868:	68 90 d4 68 00       	push   0x68d490
  59786d:	e8 7e 8f 00 00       	call   0x5a07f0
  597872:	ff d0                	call   eax
  597874:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  597878:	83 c4 10             	add    esp,0x10
  59787b:	3b c3                	cmp    eax,ebx
  59787d:	5f                   	pop    edi
  59787e:	74 1d                	je     0x59789d
  597880:	8d 48 ff             	lea    ecx,[eax-0x1]
  597883:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  597886:	3a c3                	cmp    al,bl
  597888:	74 0a                	je     0x597894
  59788a:	3c ff                	cmp    al,0xff
  59788c:	74 06                	je     0x597894
  59788e:	fe c8                	dec    al
  597890:	88 01                	mov    BYTE PTR [ecx],al
  597892:	eb 09                	jmp    0x59789d
  597894:	51                   	push   ecx
  597895:	e8 56 6d 06 00       	call   0x5fe5f0
  59789a:	83 c4 04             	add    esp,0x4
  59789d:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  5978a1:	89 6e 18             	mov    DWORD PTR [esi+0x18],ebp
  5978a4:	c7 46 1c ff ff ff ff 	mov    DWORD PTR [esi+0x1c],0xffffffff
  5978ab:	c7 46 20 00 00 80 3f 	mov    DWORD PTR [esi+0x20],0x3f800000
  5978b2:	c6 46 24 01          	mov    BYTE PTR [esi+0x24],0x1
  5978b6:	8b c6                	mov    eax,esi
  5978b8:	5e                   	pop    esi
  5978b9:	5d                   	pop    ebp
  5978ba:	5b                   	pop    ebx
  5978bb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5978c2:	83 c4 20             	add    esp,0x20
  5978c5:	c2 08 00             	ret    0x8
  5978c8:	90                   	nop
  5978c9:	90                   	nop
  5978ca:	90                   	nop
  5978cb:	90                   	nop
  5978cc:	90                   	nop
  5978cd:	90                   	nop
  5978ce:	90                   	nop
  5978cf:	90                   	nop
  5978d0:	56                   	push   esi
  5978d1:	8b f1                	mov    esi,ecx
  5978d3:	e8 18 00 00 00       	call   0x5978f0
  5978d8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  5978dd:	74 09                	je     0x5978e8
  5978df:	56                   	push   esi
  5978e0:	e8 0b 6d 06 00       	call   0x5fe5f0
  5978e5:	83 c4 04             	add    esp,0x4
  5978e8:	8b c6                	mov    eax,esi
  5978ea:	5e                   	pop    esi
  5978eb:	c2 04 00             	ret    0x4
  5978ee:	90                   	nop
  5978ef:	90                   	nop
  5978f0:	c7 01 78 00 65 00    	mov    DWORD PTR [ecx],0x650078
  5978f6:	e9 d5 f5 ff ff       	jmp    0x596ed0
  5978fb:	90                   	nop
  5978fc:	90                   	nop
  5978fd:	90                   	nop
  5978fe:	90                   	nop
  5978ff:	90                   	nop
  597900:	51                   	push   ecx
  597901:	8b 51 18             	mov    edx,DWORD PTR [ecx+0x18]
  597904:	53                   	push   ebx
  597905:	83 fa ff             	cmp    edx,0xffffffff
  597908:	56                   	push   esi
  597909:	b3 01                	mov    bl,0x1
  59790b:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
  59790f:	74 75                	je     0x597986
  597911:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
  597914:	83 f8 ff             	cmp    eax,0xffffffff
  597917:	75 20                	jne    0x597939
  597919:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  59791d:	88 59 24             	mov    BYTE PTR [ecx+0x24],bl
  597920:	03 d0                	add    edx,eax
  597922:	33 c0                	xor    eax,eax
  597924:	84 db                	test   bl,bl
  597926:	5e                   	pop    esi
  597927:	89 51 1c             	mov    DWORD PTR [ecx+0x1c],edx
  59792a:	c7 41 20 00 00 80 3f 	mov    DWORD PTR [ecx+0x20],0x3f800000
  597931:	5b                   	pop    ebx
  597932:	0f 94 c0             	sete   al
  597935:	59                   	pop    ecx
  597936:	c2 04 00             	ret    0x4
  597939:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  59793d:	3b f0                	cmp    esi,eax
  59793f:	7e 19                	jle    0x59795a
  597941:	32 db                	xor    bl,bl
  597943:	33 c0                	xor    eax,eax
  597945:	84 db                	test   bl,bl
  597947:	88 59 24             	mov    BYTE PTR [ecx+0x24],bl
  59794a:	5e                   	pop    esi
  59794b:	c7 41 20 00 00 00 00 	mov    DWORD PTR [ecx+0x20],0x0
  597952:	5b                   	pop    ebx
  597953:	0f 94 c0             	sete   al
  597956:	59                   	pop    ecx
  597957:	c2 04 00             	ret    0x4
  59795a:	85 d2                	test   edx,edx
  59795c:	7e 21                	jle    0x59797f
  59795e:	2b c6                	sub    eax,esi
  597960:	88 59 24             	mov    BYTE PTR [ecx+0x24],bl
  597963:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  597967:	33 c0                	xor    eax,eax
  597969:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  59796d:	84 db                	test   bl,bl
  59796f:	5e                   	pop    esi
  597970:	5b                   	pop    ebx
  597971:	da 74 24 00          	fidiv  DWORD PTR [esp+0x0]
  597975:	0f 94 c0             	sete   al
  597978:	d9 59 20             	fstp   DWORD PTR [ecx+0x20]
  59797b:	59                   	pop    ecx
  59797c:	c2 04 00             	ret    0x4
  59797f:	c7 41 20 00 00 00 00 	mov    DWORD PTR [ecx+0x20],0x0
  597986:	33 c0                	xor    eax,eax
  597988:	88 59 24             	mov    BYTE PTR [ecx+0x24],bl
  59798b:	84 db                	test   bl,bl
  59798d:	5e                   	pop    esi
  59798e:	5b                   	pop    ebx
  59798f:	0f 94 c0             	sete   al
  597992:	59                   	pop    ecx
  597993:	c2 04 00             	ret    0x4
  597996:	90                   	nop
  597997:	90                   	nop
  597998:	90                   	nop
  597999:	90                   	nop
  59799a:	90                   	nop
  59799b:	90                   	nop
  59799c:	90                   	nop
  59799d:	90                   	nop
  59799e:	90                   	nop
  59799f:	90                   	nop
  5979a0:	51                   	push   ecx
  5979a1:	8b 49 14             	mov    ecx,DWORD PTR [ecx+0x14]
  5979a4:	56                   	push   esi
  5979a5:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
  5979a9:	51                   	push   ecx
  5979aa:	56                   	push   esi
  5979ab:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
  5979b2:	00 
  5979b3:	e8 b8 da ff ff       	call   0x595470
  5979b8:	8b c8                	mov    ecx,eax
  5979ba:	e8 71 43 00 00       	call   0x59bd30
  5979bf:	8b c8                	mov    ecx,eax
  5979c1:	e8 ba 21 00 00       	call   0x599b80
  5979c6:	8b c6                	mov    eax,esi
  5979c8:	5e                   	pop    esi
  5979c9:	59                   	pop    ecx
  5979ca:	c2 04 00             	ret    0x4
  5979cd:	90                   	nop
  5979ce:	90                   	nop
  5979cf:	90                   	nop
