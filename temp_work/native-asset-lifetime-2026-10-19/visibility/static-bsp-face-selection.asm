; Retained original RcHcGame.dat disassembly; lines597822-598066 fromtemp_work/player-world-light-2026-10-04/native-full.asm
  5b8cc0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5b8cc4:	8b 0d 1c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc41c
  5b8cca:	83 ec 1c             	sub    esp,0x1c
  5b8ccd:	85 c0                	test   eax,eax
  5b8ccf:	53                   	push   ebx
  5b8cd0:	55                   	push   ebp
  5b8cd1:	56                   	push   esi
  5b8cd2:	57                   	push   edi
  5b8cd3:	0f 8c a7 02 00 00    	jl     0x5b8f80
  5b8cd9:	8b 15 0c c4 6c 00    	mov    edx,DWORD PTR ds:0x6cc40c
  5b8cdf:	8b 31                	mov    esi,DWORD PTR [ecx]
  5b8ce1:	8b 92 d4 d5 00 00    	mov    edx,DWORD PTR [edx+0xd5d4]
  5b8ce7:	8b 14 82             	mov    edx,DWORD PTR [edx+eax*4]
  5b8cea:	3b d6                	cmp    edx,esi
  5b8cec:	74 0b                	je     0x5b8cf9
  5b8cee:	8b 51 14             	mov    edx,DWORD PTR [ecx+0x14]
  5b8cf1:	85 d2                	test   edx,edx
  5b8cf3:	0f 85 db 02 00 00    	jne    0x5b8fd4
  5b8cf9:	8b 0d 00 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc400
  5b8cff:	8b 11                	mov    edx,DWORD PTR [ecx]
  5b8d01:	42                   	inc    edx
  5b8d02:	89 11                	mov    DWORD PTR [ecx],edx
  5b8d04:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5b8d07:	8d 14 48             	lea    edx,[eax+ecx*2]
  5b8d0a:	a1 20 c4 6c 00       	mov    eax,ds:0x6cc420
  5b8d0f:	8b 48 4c             	mov    ecx,DWORD PTR [eax+0x4c]
  5b8d12:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  5b8d16:	85 c0                	test   eax,eax
  5b8d18:	8d 34 91             	lea    esi,[ecx+edx*4]
  5b8d1b:	0f 84 00 01 00 00    	je     0x5b8e21
  5b8d21:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  5b8d25:	33 ed                	xor    ebp,ebp
  5b8d27:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
  5b8d2a:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5b8d2e:	8b 08                	mov    ecx,DWORD PTR [eax]
  5b8d30:	8d 58 04             	lea    ebx,[eax+0x4]
  5b8d33:	85 c9                	test   ecx,ecx
  5b8d35:	0f 8e e6 00 00 00    	jle    0x5b8e21
  5b8d3b:	8d 48 10             	lea    ecx,[eax+0x10]
  5b8d3e:	8d 90 84 05 00 00    	lea    edx,[eax+0x584]
  5b8d44:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  5b8d48:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  5b8d4c:	ba 01 00 00 00       	mov    edx,0x1
  5b8d51:	8b cd                	mov    ecx,ebp
  5b8d53:	d3 e2                	shl    edx,cl
  5b8d55:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  5b8d59:	85 d1                	test   ecx,edx
  5b8d5b:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  5b8d5f:	0f 84 98 00 00 00    	je     0x5b8dfd
  5b8d65:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5b8d69:	8b 3a                	mov    edi,DWORD PTR [edx]
  5b8d6b:	8b 07                	mov    eax,DWORD PTR [edi]
  5b8d6d:	d9 44 86 14          	fld    DWORD PTR [esi+eax*4+0x14]
  5b8d71:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  5b8d75:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
  5b8d78:	d9 44 8e 14          	fld    DWORD PTR [esi+ecx*4+0x14]
  5b8d7c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5b8d80:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  5b8d84:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
  5b8d87:	d9 44 96 14          	fld    DWORD PTR [esi+edx*4+0x14]
  5b8d8b:	8b d3                	mov    edx,ebx
  5b8d8d:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  5b8d91:	e8 aa a0 ff ff       	call   0x5b2e40
  5b8d96:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5b8d9a:	d8 20                	fsub   DWORD PTR [eax]
  5b8d9c:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5b8da2:	df e0                	fnstsw ax
  5b8da4:	f6 c4 41             	test   ah,0x41
  5b8da7:	0f 85 13 02 00 00    	jne    0x5b8fc0
  5b8dad:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
  5b8db0:	d9 44 8e 14          	fld    DWORD PTR [esi+ecx*4+0x14]
  5b8db4:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5b8db8:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  5b8dbc:	8b 57 10             	mov    edx,DWORD PTR [edi+0x10]
  5b8dbf:	d9 44 96 14          	fld    DWORD PTR [esi+edx*4+0x14]
  5b8dc3:	8b d3                	mov    edx,ebx
  5b8dc5:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  5b8dc9:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
  5b8dcc:	d9 44 86 14          	fld    DWORD PTR [esi+eax*4+0x14]
  5b8dd0:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  5b8dd4:	e8 67 a0 ff ff       	call   0x5b2e40
  5b8dd9:	d8 63 0c             	fsub   DWORD PTR [ebx+0xc]
  5b8ddc:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5b8de2:	df e0                	fnstsw ax
  5b8de4:	f6 c4 01             	test   ah,0x1
  5b8de7:	75 10                	jne    0x5b8df9
  5b8de9:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5b8ded:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  5b8df1:	f7 d0                	not    eax
  5b8df3:	23 c8                	and    ecx,eax
  5b8df5:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
  5b8df9:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b8dfd:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5b8e01:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  5b8e05:	83 c1 04             	add    ecx,0x4
  5b8e08:	45                   	inc    ebp
  5b8e09:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5b8e0d:	8b 08                	mov    ecx,DWORD PTR [eax]
  5b8e0f:	83 c7 14             	add    edi,0x14
  5b8e12:	83 c3 14             	add    ebx,0x14
  5b8e15:	3b e9                	cmp    ebp,ecx
  5b8e17:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  5b8e1b:	0f 8c 2b ff ff ff    	jl     0x5b8d4c
  5b8e21:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
  5b8e25:	8b 0f                	mov    ecx,DWORD PTR [edi]
  5b8e27:	e8 54 06 01 00       	call   0x5c9480
  5b8e2c:	8b d0                	mov    edx,eax
  5b8e2e:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b8e31:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5b8e34:	a1 20 c4 6c 00       	mov    eax,ds:0x6cc420
  5b8e39:	8b 40 64             	mov    eax,DWORD PTR [eax+0x64]
  5b8e3c:	8d 0c 88             	lea    ecx,[eax+ecx*4]
  5b8e3f:	e8 ac 89 01 00       	call   0x5d17f0
  5b8e44:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  5b8e47:	8b 15 08 c4 6c 00    	mov    edx,DWORD PTR ds:0x6cc408
  5b8e4d:	8b c8                	mov    ecx,eax
  5b8e4f:	c7 44 24 30 01 00 00 	mov    DWORD PTR [esp+0x30],0x1
  5b8e56:	00 
  5b8e57:	c1 e1 04             	shl    ecx,0x4
  5b8e5a:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5b8e60:	03 c8                	add    ecx,eax
  5b8e62:	8d 04 c0             	lea    eax,[eax+eax*8]
  5b8e65:	8d 1c ca             	lea    ebx,[edx+ecx*8]
  5b8e68:	8b 0d 20 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc420
  5b8e6e:	8b 51 68             	mov    edx,DWORD PTR [ecx+0x68]
  5b8e71:	8d 2c 82             	lea    ebp,[edx+eax*4]
  5b8e74:	df e0                	fnstsw ax
  5b8e76:	f6 c4 01             	test   ah,0x1
  5b8e79:	75 08                	jne    0x5b8e83
  5b8e7b:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  5b8e82:	00 
  5b8e83:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  5b8e87:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  5b8e8b:	50                   	push   eax
  5b8e8c:	57                   	push   edi
  5b8e8d:	8b 14 8e             	mov    edx,DWORD PTR [esi+ecx*4]
  5b8e90:	52                   	push   edx
  5b8e91:	e8 2a fe ff ff       	call   0x5b8cc0
  5b8e96:	8b 0d 20 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc420
  5b8e9c:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b8e9f:	83 c4 0c             	add    esp,0xc
  5b8ea2:	8b 51 64             	mov    edx,DWORD PTR [ecx+0x64]
  5b8ea5:	8d 04 80             	lea    eax,[eax+eax*4]
  5b8ea8:	68 f8 28 72 00       	push   0x7228f8
  5b8ead:	8d 04 82             	lea    eax,[edx+eax*4]
  5b8eb0:	8b 10                	mov    edx,DWORD PTR [eax]
  5b8eb2:	89 15 e8 28 72 00    	mov    DWORD PTR ds:0x7228e8,edx
  5b8eb8:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5b8ebb:	89 15 ec 28 72 00    	mov    DWORD PTR ds:0x7228ec,edx
  5b8ec1:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5b8ec4:	a3 f0 28 72 00       	mov    ds:0x7228f0,eax
  5b8ec9:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b8ecc:	8d 14 80             	lea    edx,[eax+eax*4]
  5b8ecf:	8b 41 64             	mov    eax,DWORD PTR [ecx+0x64]
  5b8ed2:	d9 44 90 0c          	fld    DWORD PTR [eax+edx*4+0xc]
  5b8ed6:	d9 1d f4 28 72 00    	fstp   DWORD PTR ds:0x7228f4
  5b8edc:	8b 0f                	mov    ecx,DWORD PTR [edi]
  5b8ede:	e8 5d 2f fe ff       	call   0x59be40
  5b8ee3:	8b c8                	mov    ecx,eax
  5b8ee5:	ba e8 28 72 00       	mov    edx,0x7228e8
  5b8eea:	e8 c1 a6 ff ff       	call   0x5b35b0
  5b8eef:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  5b8ef2:	33 ff                	xor    edi,edi
  5b8ef4:	85 c0                	test   eax,eax
  5b8ef6:	7e 66                	jle    0x5b8f5e
  5b8ef8:	8b 0d 1c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc41c
  5b8efe:	83 c5 0c             	add    ebp,0xc
  5b8f01:	83 c3 58             	add    ebx,0x58
  5b8f04:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  5b8f07:	8b 13                	mov    edx,DWORD PTR [ebx]
  5b8f09:	03 c7                	add    eax,edi
  5b8f0b:	3b 11                	cmp    edx,DWORD PTR [ecx]
  5b8f0d:	74 07                	je     0x5b8f16
  5b8f0f:	8b 51 14             	mov    edx,DWORD PTR [ecx+0x14]
  5b8f12:	85 d2                	test   edx,edx
  5b8f14:	75 35                	jne    0x5b8f4b
  5b8f16:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  5b8f1a:	39 55 00             	cmp    DWORD PTR [ebp+0x0],edx
  5b8f1d:	75 2c                	jne    0x5b8f4b
  5b8f1f:	8b 0d 18 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc418
  5b8f25:	8b 91 80 36 03 00    	mov    edx,DWORD PTR [ecx+0x33680]
  5b8f2b:	42                   	inc    edx
  5b8f2c:	89 91 80 36 03 00    	mov    DWORD PTR [ecx+0x33680],edx
  5b8f32:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  5b8f36:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  5b8f3a:	51                   	push   ecx
  5b8f3b:	52                   	push   edx
  5b8f3c:	50                   	push   eax
  5b8f3d:	e8 ce 17 00 00       	call   0x5ba710
  5b8f42:	8b 0d 1c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc41c
  5b8f48:	83 c4 0c             	add    esp,0xc
  5b8f4b:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  5b8f4e:	47                   	inc    edi
  5b8f4f:	81 c3 88 00 00 00    	add    ebx,0x88
  5b8f55:	83 c5 24             	add    ebp,0x24
  5b8f58:	3b f8                	cmp    edi,eax
  5b8f5a:	7c a8                	jl     0x5b8f04
  5b8f5c:	eb 06                	jmp    0x5b8f64
  5b8f5e:	8b 0d 1c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc41c
  5b8f64:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  5b8f68:	33 c0                	xor    eax,eax
  5b8f6a:	85 d2                	test   edx,edx
  5b8f6c:	0f 94 c0             	sete   al
  5b8f6f:	8b 34 86             	mov    esi,DWORD PTR [esi+eax*4]
  5b8f72:	85 f6                	test   esi,esi
  5b8f74:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  5b8f78:	8b c6                	mov    eax,esi
  5b8f7a:	0f 8d 59 fd ff ff    	jge    0x5b8cd9
  5b8f80:	8b 49 18             	mov    ecx,DWORD PTR [ecx+0x18]
  5b8f83:	8d 14 40             	lea    edx,[eax+eax*2]
  5b8f86:	c1 e2 02             	shl    edx,0x2
  5b8f89:	8b 81 cc d5 00 00    	mov    eax,DWORD PTR [ecx+0xd5cc]
  5b8f8f:	2b c2                	sub    eax,edx
  5b8f91:	8b 40 fc             	mov    eax,DWORD PTR [eax-0x4]
  5b8f94:	85 c0                	test   eax,eax
  5b8f96:	74 14                	je     0x5b8fac
  5b8f98:	8b 0d 00 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc400
  5b8f9e:	50                   	push   eax
  5b8f9f:	6a 01                	push   0x1
  5b8fa1:	ff 41 10             	inc    DWORD PTR [ecx+0x10]
  5b8fa4:	e8 e7 ee ff ff       	call   0x5b7e90
  5b8fa9:	83 c4 08             	add    esp,0x8
  5b8fac:	a1 00 c4 6c 00       	mov    eax,ds:0x6cc400
  5b8fb1:	5f                   	pop    edi
  5b8fb2:	5e                   	pop    esi
  5b8fb3:	5d                   	pop    ebp
  5b8fb4:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
  5b8fb7:	5b                   	pop    ebx
  5b8fb8:	41                   	inc    ecx
  5b8fb9:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  5b8fbc:	83 c4 1c             	add    esp,0x1c
  5b8fbf:	c3                   	ret
  5b8fc0:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  5b8fc4:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  5b8fc8:	8b 11                	mov    edx,DWORD PTR [ecx]
  5b8fca:	52                   	push   edx
  5b8fcb:	50                   	push   eax
  5b8fcc:	e8 0f 00 00 00       	call   0x5b8fe0
  5b8fd1:	83 c4 08             	add    esp,0x8
  5b8fd4:	5f                   	pop    edi
  5b8fd5:	5e                   	pop    esi
  5b8fd6:	5d                   	pop    ebp
  5b8fd7:	5b                   	pop    ebx
  5b8fd8:	83 c4 1c             	add    esp,0x1c
  5b8fdb:	c3                   	ret
