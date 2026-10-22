  45ea10:	83 ec 14             	sub    esp,0x14
  45ea13:	56                   	push   esi
  45ea14:	8b f1                	mov    esi,ecx
  45ea16:	57                   	push   edi
  45ea17:	8a 46 7c             	mov    al,BYTE PTR [esi+0x7c]
  45ea1a:	84 c0                	test   al,al
  45ea1c:	0f 84 ba 02 00 00    	je     0x45ecdc
  45ea22:	8b 86 bc 15 00 00    	mov    eax,DWORD PTR [esi+0x15bc]
  45ea28:	b2 01                	mov    dl,0x1
  45ea2a:	83 f8 ff             	cmp    eax,0xffffffff
  45ea2d:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  45ea31:	74 5d                	je     0x45ea90
  45ea33:	8b 8e c0 15 00 00    	mov    ecx,DWORD PTR [esi+0x15c0]
  45ea39:	83 f9 ff             	cmp    ecx,0xffffffff
  45ea3c:	75 18                	jne    0x45ea56
  45ea3e:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  45ea42:	c7 86 c4 15 00 00 00 	mov    DWORD PTR [esi+0x15c4],0x3f800000
  45ea49:	00 80 3f 
  45ea4c:	03 c1                	add    eax,ecx
  45ea4e:	89 86 c0 15 00 00    	mov    DWORD PTR [esi+0x15c0],eax
  45ea54:	eb 3a                	jmp    0x45ea90
  45ea56:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  45ea5a:	3b f9                	cmp    edi,ecx
  45ea5c:	7e 0e                	jle    0x45ea6c
  45ea5e:	c7 86 c4 15 00 00 00 	mov    DWORD PTR [esi+0x15c4],0x0
  45ea65:	00 00 00 
  45ea68:	32 d2                	xor    dl,dl
  45ea6a:	eb 24                	jmp    0x45ea90
  45ea6c:	85 c0                	test   eax,eax
  45ea6e:	7e 16                	jle    0x45ea86
  45ea70:	2b cf                	sub    ecx,edi
  45ea72:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
  45ea76:	db 44 24 08          	fild   DWORD PTR [esp+0x8]
  45ea7a:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  45ea7e:	d9 9e c4 15 00 00    	fstp   DWORD PTR [esi+0x15c4]
  45ea84:	eb 0a                	jmp    0x45ea90
  45ea86:	c7 86 c4 15 00 00 00 	mov    DWORD PTR [esi+0x15c4],0x0
  45ea8d:	00 00 00 
  45ea90:	84 d2                	test   dl,dl
  45ea92:	88 96 c8 15 00 00    	mov    BYTE PTR [esi+0x15c8],dl
  45ea98:	75 27                	jne    0x45eac1
  45ea9a:	6a 00                	push   0x0
  45ea9c:	8b ce                	mov    ecx,esi
  45ea9e:	e8 ad 38 0a 00       	call   0x502350
  45eaa3:	8d 86 74 01 00 00    	lea    eax,[esi+0x174]
  45eaa9:	b9 0f 00 00 00       	mov    ecx,0xf
  45eaae:	c6 00 00             	mov    BYTE PTR [eax],0x0
  45eab1:	05 5c 01 00 00       	add    eax,0x15c
  45eab6:	49                   	dec    ecx
  45eab7:	75 f5                	jne    0x45eaae
  45eab9:	5f                   	pop    edi
  45eaba:	5e                   	pop    esi
  45eabb:	83 c4 14             	add    esp,0x14
  45eabe:	c2 08 00             	ret    0x8
  45eac1:	8a 86 b4 15 00 00    	mov    al,BYTE PTR [esi+0x15b4]
  45eac7:	53                   	push   ebx
  45eac8:	84 c0                	test   al,al
  45eaca:	55                   	push   ebp
  45eacb:	74 25                	je     0x45eaf2
  45eacd:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  45ead3:	d8 a6 c4 15 00 00    	fsub   DWORD PTR [esi+0x15c4]
  45ead9:	8d 9e 9c 15 00 00    	lea    ebx,[esi+0x159c]
  45eadf:	8d 96 84 15 00 00    	lea    edx,[esi+0x1584]
  45eae5:	53                   	push   ebx
  45eae6:	51                   	push   ecx
  45eae7:	d9 1c 24             	fstp   DWORD PTR [esp]
  45eaea:	8d 8e 6c 15 00 00    	lea    ecx,[esi+0x156c]
  45eaf0:	eb 25                	jmp    0x45eb17
  45eaf2:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  45eaf6:	52                   	push   edx
  45eaf7:	e8 34 b3 fa ff       	call   0x409e30
  45eafc:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  45eb00:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  45eb04:	83 c4 04             	add    esp,0x4
  45eb07:	8d 9e 9c 15 00 00    	lea    ebx,[esi+0x159c]
  45eb0d:	8d 96 a8 15 00 00    	lea    edx,[esi+0x15a8]
  45eb13:	53                   	push   ebx
  45eb14:	50                   	push   eax
  45eb15:	8b cb                	mov    ecx,ebx
  45eb17:	e8 04 45 15 00       	call   0x5b3020
  45eb1c:	8b 86 d0 15 00 00    	mov    eax,DWORD PTR [esi+0x15d0]
  45eb22:	8b ae cc 15 00 00    	mov    ebp,DWORD PTR [esi+0x15cc]
  45eb28:	8d be d0 15 00 00    	lea    edi,[esi+0x15d0]
  45eb2e:	83 f8 ff             	cmp    eax,0xffffffff
  45eb31:	b2 01                	mov    dl,0x1
  45eb33:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  45eb37:	74 4b                	je     0x45eb84
  45eb39:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
  45eb3c:	83 f9 ff             	cmp    ecx,0xffffffff
  45eb3f:	75 12                	jne    0x45eb53
  45eb41:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  45eb45:	c7 47 08 00 00 80 3f 	mov    DWORD PTR [edi+0x8],0x3f800000
  45eb4c:	03 c1                	add    eax,ecx
  45eb4e:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
  45eb51:	eb 31                	jmp    0x45eb84
  45eb53:	39 4c 24 28          	cmp    DWORD PTR [esp+0x28],ecx
  45eb57:	7e 0b                	jle    0x45eb64
  45eb59:	c7 47 08 00 00 00 00 	mov    DWORD PTR [edi+0x8],0x0
  45eb60:	32 d2                	xor    dl,dl
  45eb62:	eb 20                	jmp    0x45eb84
  45eb64:	85 c0                	test   eax,eax
  45eb66:	7e 15                	jle    0x45eb7d
  45eb68:	2b 4c 24 28          	sub    ecx,DWORD PTR [esp+0x28]
  45eb6c:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  45eb70:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  45eb74:	da 74 24 10          	fidiv  DWORD PTR [esp+0x10]
  45eb78:	d9 5f 08             	fstp   DWORD PTR [edi+0x8]
  45eb7b:	eb 07                	jmp    0x45eb84
  45eb7d:	c7 47 08 00 00 00 00 	mov    DWORD PTR [edi+0x8],0x0
  45eb84:	84 d2                	test   dl,dl
  45eb86:	88 57 0c             	mov    BYTE PTR [edi+0xc],dl
  45eb89:	0f 85 26 01 00 00    	jne    0x45ecb5
  45eb8f:	83 fd 0f             	cmp    ebp,0xf
  45eb92:	0f 8d 1d 01 00 00    	jge    0x45ecb5
  45eb98:	8d 14 ed 00 00 00 00 	lea    edx,[ebp*8+0x0]
  45eb9f:	2b d5                	sub    edx,ebp
  45eba1:	8d 44 95 00          	lea    eax,[ebp+edx*4+0x0]
  45eba5:	8d 04 40             	lea    eax,[eax+eax*2]
  45eba8:	8d 2c 86             	lea    ebp,[esi+eax*4]
  45ebab:	8a 84 86 74 01 00 00 	mov    al,BYTE PTR [esi+eax*4+0x174]
  45ebb2:	8d 8d 08 01 00 00    	lea    ecx,[ebp+0x108]
  45ebb8:	84 c0                	test   al,al
  45ebba:	75 07                	jne    0x45ebc3
  45ebbc:	e8 4f fb 01 00       	call   0x47e710
  45ebc1:	eb 05                	jmp    0x45ebc8
  45ebc3:	e8 b8 fb 01 00       	call   0x47e780
  45ebc8:	d9 05 c4 71 6b 00    	fld    DWORD PTR ds:0x6b71c4
  45ebce:	e8 4d bf 1a 00       	call   0x60ab20
  45ebd3:	50                   	push   eax
  45ebd4:	8b cf                	mov    ecx,edi
  45ebd6:	e8 d5 55 fa ff       	call   0x4041b0
  45ebdb:	8b d3                	mov    edx,ebx
  45ebdd:	8d 8d 0c 01 00 00    	lea    ecx,[ebp+0x10c]
  45ebe3:	8b 02                	mov    eax,DWORD PTR [edx]
  45ebe5:	89 01                	mov    DWORD PTR [ecx],eax
  45ebe7:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
  45ebea:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  45ebed:	8d 86 78 15 00 00    	lea    eax,[esi+0x1578]
  45ebf3:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  45ebf6:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  45ebf9:	8b 08                	mov    ecx,DWORD PTR [eax]
  45ebfb:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  45ebff:	8b 0d 00 d7 64 00    	mov    ecx,DWORD PTR ds:0x64d700
  45ec05:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  45ec08:	51                   	push   ecx
  45ec09:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  45ec0d:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  45ec11:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  45ec14:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  45ec18:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  45ec1c:	e8 7f 43 15 00       	call   0x5b2fa0
  45ec21:	d9 05 04 d7 64 00    	fld    DWORD PTR ds:0x64d704
  45ec27:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  45ec2b:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  45ec2f:	e8 6c b8 1a 00       	call   0x60a4a0
  45ec34:	99                   	cdq
  45ec35:	b9 10 27 00 00       	mov    ecx,0x2710
  45ec3a:	f7 f9                	idiv   ecx
  45ec3c:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  45ec40:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  45ec44:	8d 95 18 01 00 00    	lea    edx,[ebp+0x118]
  45ec4a:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  45ec4e:	81 c5 4c 02 00 00    	add    ebp,0x24c
  45ec54:	d8 0d 68 d7 64 00    	fmul   DWORD PTR ds:0x64d768
  45ec5a:	d8 25 64 d7 64 00    	fsub   DWORD PTR ds:0x64d764
  45ec60:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  45ec64:	d8 e1                	fsub   st,st(1)
  45ec66:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  45ec6a:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  45ec6e:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  45ec72:	d8 c1                	fadd   st,st(1)
  45ec74:	89 02                	mov    DWORD PTR [edx],eax
  45ec76:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  45ec79:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  45ec7d:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  45ec81:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  45ec84:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  45ec86:	89 4d 00             	mov    DWORD PTR [ebp+0x0],ecx
  45ec89:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  45ec8c:	dd d8                	fstp   st(0)
  45ec8e:	89 55 04             	mov    DWORD PTR [ebp+0x4],edx
  45ec91:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  45ec94:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  45ec97:	8b 8e cc 15 00 00    	mov    ecx,DWORD PTR [esi+0x15cc]
  45ec9d:	41                   	inc    ecx
  45ec9e:	8b c1                	mov    eax,ecx
  45eca0:	89 8e cc 15 00 00    	mov    DWORD PTR [esi+0x15cc],ecx
  45eca6:	83 f8 0f             	cmp    eax,0xf
  45eca9:	7c 0a                	jl     0x45ecb5
  45ecab:	c7 86 cc 15 00 00 00 	mov    DWORD PTR [esi+0x15cc],0x0
  45ecb2:	00 00 00 
  45ecb5:	5d                   	pop    ebp
  45ecb6:	81 c6 08 01 00 00    	add    esi,0x108
  45ecbc:	bf 0f 00 00 00       	mov    edi,0xf
  45ecc1:	5b                   	pop    ebx
  45ecc2:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  45ecc6:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  45ecca:	8b 16                	mov    edx,DWORD PTR [esi]
  45eccc:	50                   	push   eax
  45eccd:	51                   	push   ecx
  45ecce:	8b ce                	mov    ecx,esi
  45ecd0:	ff 52 04             	call   DWORD PTR [edx+0x4]
  45ecd3:	81 c6 5c 01 00 00    	add    esi,0x15c
  45ecd9:	4f                   	dec    edi
  45ecda:	75 e6                	jne    0x45ecc2
  45ecdc:	5f                   	pop    edi
  45ecdd:	5e                   	pop    esi
  45ecde:	83 c4 14             	add    esp,0x14
  45ece1:	c2 08 00             	ret    0x8
  45ece4:	90                   	nop
  45ece5:	90                   	nop
  45ece6:	90                   	nop
  45ece7:	90                   	nop
  45ece8:	90                   	nop
  45ece9:	90                   	nop
  45ecea:	90                   	nop
  45eceb:	90                   	nop
  45ecec:	90                   	nop
  45eced:	90                   	nop
  45ecee:	90                   	nop
  45ecef:	90                   	nop
