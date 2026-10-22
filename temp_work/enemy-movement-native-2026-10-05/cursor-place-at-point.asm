  59b980:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59b986:	6a ff                	push   0xffffffff
  59b988:	68 b8 46 64 00       	push   0x6446b8
  59b98d:	50                   	push   eax
  59b98e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59b995:	83 ec 10             	sub    esp,0x10
  59b998:	53                   	push   ebx
  59b999:	56                   	push   esi
  59b99a:	8b 74 24 28          	mov    esi,DWORD PTR [esp+0x28]
  59b99e:	8b d9                	mov    ebx,ecx
  59b9a0:	8b ce                	mov    ecx,esi
  59b9a2:	e8 49 f8 ff ff       	call   0x59b1f0
  59b9a7:	84 c0                	test   al,al
  59b9a9:	0f 85 c1 00 00 00    	jne    0x59ba70
  59b9af:	8a 44 24 28          	mov    al,BYTE PTR [esp+0x28]
  59b9b3:	55                   	push   ebp
  59b9b4:	57                   	push   edi
  59b9b5:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  59b9b9:	bf 78 71 6a 00       	mov    edi,0x6a7178
  59b9be:	83 c9 ff             	or     ecx,0xffffffff
  59b9c1:	33 c0                	xor    eax,eax
  59b9c3:	33 f6                	xor    esi,esi
  59b9c5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59b9c7:	f7 d1                	not    ecx
  59b9c9:	49                   	dec    ecx
  59b9ca:	6a 01                	push   0x1
  59b9cc:	8b e9                	mov    ebp,ecx
  59b9ce:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59b9d2:	55                   	push   ebp
  59b9d3:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  59b9d7:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  59b9db:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59b9df:	e8 5c 5f e6 ff       	call   0x401940
  59b9e4:	84 c0                	test   al,al
  59b9e6:	74 27                	je     0x59ba0f
  59b9e8:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  59b9ec:	8b cd                	mov    ecx,ebp
  59b9ee:	8b d1                	mov    edx,ecx
  59b9f0:	be 78 71 6a 00       	mov    esi,0x6a7178
  59b9f5:	c1 e9 02             	shr    ecx,0x2
  59b9f8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59b9fa:	8b ca                	mov    ecx,edx
  59b9fc:	83 e1 03             	and    ecx,0x3
  59b9ff:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59ba01:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  59ba05:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  59ba09:	33 f6                	xor    esi,esi
  59ba0b:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  59ba0f:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  59ba13:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  59ba17:	51                   	push   ecx
  59ba18:	68 8a 00 00 00       	push   0x8a
  59ba1d:	68 c8 70 6a 00       	push   0x6a70c8
  59ba22:	68 1c 6d 6a 00       	push   0x6a6d1c
  59ba27:	e8 c4 4d 00 00       	call   0x5a07f0
  59ba2c:	ff d0                	call   eax
  59ba2e:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  59ba32:	83 c4 10             	add    esp,0x10
  59ba35:	3b c6                	cmp    eax,esi
  59ba37:	c7 44 24 28 ff ff ff 	mov    DWORD PTR [esp+0x28],0xffffffff
  59ba3e:	ff 
  59ba3f:	5f                   	pop    edi
  59ba40:	5d                   	pop    ebp
  59ba41:	74 1d                	je     0x59ba60
  59ba43:	8d 48 ff             	lea    ecx,[eax-0x1]
  59ba46:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59ba49:	84 c0                	test   al,al
  59ba4b:	74 0a                	je     0x59ba57
  59ba4d:	3c ff                	cmp    al,0xff
  59ba4f:	74 06                	je     0x59ba57
  59ba51:	fe c8                	dec    al
  59ba53:	88 01                	mov    BYTE PTR [ecx],al
  59ba55:	eb 09                	jmp    0x59ba60
  59ba57:	51                   	push   ecx
  59ba58:	e8 93 2b 06 00       	call   0x5fe5f0
  59ba5d:	83 c4 04             	add    esp,0x4
  59ba60:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  59ba64:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  59ba68:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  59ba6c:	8b 74 24 28          	mov    esi,DWORD PTR [esp+0x28]
  59ba70:	56                   	push   esi
  59ba71:	8b cb                	mov    ecx,ebx
  59ba73:	e8 b8 fc ff ff       	call   0x59b730
  59ba78:	56                   	push   esi
  59ba79:	8b cb                	mov    ecx,ebx
  59ba7b:	e8 70 fa ff ff       	call   0x59b4f0
  59ba80:	8d 53 20             	lea    edx,[ebx+0x20]
  59ba83:	8d 43 3c             	lea    eax,[ebx+0x3c]
  59ba86:	c6 43 2c 01          	mov    BYTE PTR [ebx+0x2c],0x1
  59ba8a:	8b 0a                	mov    ecx,DWORD PTR [edx]
  59ba8c:	89 08                	mov    DWORD PTR [eax],ecx
  59ba8e:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  59ba91:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  59ba94:	8b 4b 18             	mov    ecx,DWORD PTR [ebx+0x18]
  59ba97:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  59ba9a:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  59ba9d:	e8 1e db ff ff       	call   0x5995c0
  59baa2:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  59baa6:	89 43 48             	mov    DWORD PTR [ebx+0x48],eax
  59baa9:	5e                   	pop    esi
  59baaa:	5b                   	pop    ebx
  59baab:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59bab2:	83 c4 1c             	add    esp,0x1c
  59bab5:	c2 04 00             	ret    0x4
  59bab8:	90                   	nop
  59bab9:	90                   	nop
  59baba:	90                   	nop
  59babb:	90                   	nop
  59babc:	90                   	nop
  59babd:	90                   	nop
  59babe:	90                   	nop
  59babf:	90                   	nop
