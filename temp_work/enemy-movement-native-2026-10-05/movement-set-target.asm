  59bac0:	6a ff                	push   0xffffffff
  59bac2:	68 e0 46 64 00       	push   0x6446e0
  59bac7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59bacd:	50                   	push   eax
  59bace:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59bad5:	83 ec 14             	sub    esp,0x14
  59bad8:	53                   	push   ebx
  59bad9:	56                   	push   esi
  59bada:	8b f1                	mov    esi,ecx
  59badc:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  59bae0:	8a 46 34             	mov    al,BYTE PTR [esi+0x34]
  59bae3:	33 db                	xor    ebx,ebx
  59bae5:	3a c3                	cmp    al,bl
  59bae7:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  59baeb:	0f 85 b7 00 00 00    	jne    0x59bba8
  59baf1:	8a 44 24 2c          	mov    al,BYTE PTR [esp+0x2c]
  59baf5:	55                   	push   ebp
  59baf6:	57                   	push   edi
  59baf7:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  59bafb:	bf ac 71 6a 00       	mov    edi,0x6a71ac
  59bb00:	83 c9 ff             	or     ecx,0xffffffff
  59bb03:	33 c0                	xor    eax,eax
  59bb05:	6a 01                	push   0x1
  59bb07:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59bb09:	f7 d1                	not    ecx
  59bb0b:	49                   	dec    ecx
  59bb0c:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  59bb10:	8b e9                	mov    ebp,ecx
  59bb12:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59bb16:	55                   	push   ebp
  59bb17:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  59bb1b:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  59bb1f:	e8 1c 5e e6 ff       	call   0x401940
  59bb24:	84 c0                	test   al,al
  59bb26:	74 28                	je     0x59bb50
  59bb28:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  59bb2c:	8b cd                	mov    ecx,ebp
  59bb2e:	8b d1                	mov    edx,ecx
  59bb30:	be ac 71 6a 00       	mov    esi,0x6a71ac
  59bb35:	c1 e9 02             	shr    ecx,0x2
  59bb38:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59bb3a:	8b ca                	mov    ecx,edx
  59bb3c:	83 e1 03             	and    ecx,0x3
  59bb3f:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59bb41:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  59bb45:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  59bb49:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  59bb4d:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  59bb50:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59bb54:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
  59bb59:	51                   	push   ecx
  59bb5a:	68 99 00 00 00       	push   0x99
  59bb5f:	68 c8 70 6a 00       	push   0x6a70c8
  59bb64:	68 9c 71 6a 00       	push   0x6a719c
  59bb69:	e8 82 4c 00 00       	call   0x5a07f0
  59bb6e:	ff d0                	call   eax
  59bb70:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  59bb74:	83 c4 10             	add    esp,0x10
  59bb77:	3b cb                	cmp    ecx,ebx
  59bb79:	88 5c 24 2c          	mov    BYTE PTR [esp+0x2c],bl
  59bb7d:	5f                   	pop    edi
  59bb7e:	5d                   	pop    ebp
  59bb7f:	74 1b                	je     0x59bb9c
  59bb81:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  59bb84:	49                   	dec    ecx
  59bb85:	3a c3                	cmp    al,bl
  59bb87:	74 0a                	je     0x59bb93
  59bb89:	3c ff                	cmp    al,0xff
  59bb8b:	74 06                	je     0x59bb93
  59bb8d:	fe c8                	dec    al
  59bb8f:	88 01                	mov    BYTE PTR [ecx],al
  59bb91:	eb 09                	jmp    0x59bb9c
  59bb93:	51                   	push   ecx
  59bb94:	e8 57 2a 06 00       	call   0x5fe5f0
  59bb99:	83 c4 04             	add    esp,0x4
  59bb9c:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  59bba0:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  59bba4:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  59bba8:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59bbac:	e8 3f f6 ff ff       	call   0x59b1f0
  59bbb1:	84 c0                	test   al,al
  59bbb3:	74 0e                	je     0x59bbc3
  59bbb5:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  59bbb9:	8b ce                	mov    ecx,esi
  59bbbb:	52                   	push   edx
  59bbbc:	e8 6f fb ff ff       	call   0x59b730
  59bbc1:	eb 07                	jmp    0x59bbca
  59bbc3:	8b ce                	mov    ecx,esi
  59bbc5:	e8 c6 f8 ff ff       	call   0x59b490
  59bbca:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59bbce:	c7 44 24 24 ff ff ff 	mov    DWORD PTR [esp+0x24],0xffffffff
  59bbd5:	ff 
  59bbd6:	e8 05 75 fc ff       	call   0x5630e0
  59bbdb:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  59bbdf:	5e                   	pop    esi
  59bbe0:	5b                   	pop    ebx
  59bbe1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59bbe8:	83 c4 20             	add    esp,0x20
  59bbeb:	c2 04 00             	ret    0x4
  59bbee:	90                   	nop
  59bbef:	90                   	nop
  59bbf0:	56                   	push   esi
  59bbf1:	8b f1                	mov    esi,ecx
  59bbf3:	e8 98 f8 ff ff       	call   0x59b490
  59bbf8:	8b ce                	mov    ecx,esi
  59bbfa:	e8 51 f8 ff ff       	call   0x59b450
  59bbff:	5e                   	pop    esi
  59bc00:	c3                   	ret
  59bc01:	90                   	nop
  59bc02:	90                   	nop
  59bc03:	90                   	nop
  59bc04:	90                   	nop
  59bc05:	90                   	nop
  59bc06:	90                   	nop
  59bc07:	90                   	nop
  59bc08:	90                   	nop
  59bc09:	90                   	nop
  59bc0a:	90                   	nop
  59bc0b:	90                   	nop
  59bc0c:	90                   	nop
  59bc0d:	90                   	nop
  59bc0e:	90                   	nop
  59bc0f:	90                   	nop
  59bc10:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  59bc14:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
  59bc17:	c2 04 00             	ret    0x4
  59bc1a:	90                   	nop
  59bc1b:	90                   	nop
  59bc1c:	90                   	nop
  59bc1d:	90                   	nop
  59bc1e:	90                   	nop
  59bc1f:	90                   	nop
