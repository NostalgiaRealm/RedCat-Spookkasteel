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
