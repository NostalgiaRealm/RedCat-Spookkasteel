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
