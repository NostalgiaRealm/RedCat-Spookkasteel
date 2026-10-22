  466a90:	6a ff                	push   0xffffffff
  466a92:	68 46 78 62 00       	push   0x627846
  466a97:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  466a9d:	50                   	push   eax
  466a9e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  466aa5:	83 ec 58             	sub    esp,0x58
  466aa8:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  466aac:	53                   	push   ebx
  466aad:	55                   	push   ebp
  466aae:	56                   	push   esi
  466aaf:	57                   	push   edi
  466ab0:	8b f1                	mov    esi,ecx
  466ab2:	50                   	push   eax
  466ab3:	89 74 24 38          	mov    DWORD PTR [esp+0x38],esi
  466ab7:	e8 f4 b1 09 00       	call   0x501cb0
  466abc:	8b 4c 24 7c          	mov    ecx,DWORD PTR [esp+0x7c]
  466ac0:	33 db                	xor    ebx,ebx
  466ac2:	89 8e f8 00 00 00    	mov    DWORD PTR [esi+0xf8],ecx
  466ac8:	89 5c 24 70          	mov    DWORD PTR [esp+0x70],ebx
  466acc:	89 9e fc 00 00 00    	mov    DWORD PTR [esi+0xfc],ebx
  466ad2:	c6 44 24 70 01       	mov    BYTE PTR [esp+0x70],0x1
  466ad7:	8d ae 9c 01 00 00    	lea    ebp,[esi+0x19c]
  466add:	bf 0f 00 00 00       	mov    edi,0xf
  466ae2:	8b cd                	mov    ecx,ebp
  466ae4:	e8 c7 6e 01 00       	call   0x47d9b0
  466ae9:	81 c5 44 01 00 00    	add    ebp,0x144
  466aef:	4f                   	dec    edi
  466af0:	75 f0                	jne    0x466ae2
  466af2:	83 c8 ff             	or     eax,0xffffffff
  466af5:	b9 00 00 80 3f       	mov    ecx,0x3f800000
  466afa:	89 86 3c 16 00 00    	mov    DWORD PTR [esi+0x163c],eax
  466b00:	89 86 40 16 00 00    	mov    DWORD PTR [esi+0x1640],eax
  466b06:	89 8e 44 16 00 00    	mov    DWORD PTR [esi+0x1644],ecx
  466b0c:	c6 86 48 16 00 00 01 	mov    BYTE PTR [esi+0x1648],0x1
  466b13:	89 86 80 16 00 00    	mov    DWORD PTR [esi+0x1680],eax
  466b19:	89 86 84 16 00 00    	mov    DWORD PTR [esi+0x1684],eax
  466b1f:	89 8e 88 16 00 00    	mov    DWORD PTR [esi+0x1688],ecx
  466b25:	c6 86 8c 16 00 00 01 	mov    BYTE PTR [esi+0x168c],0x1
  466b2c:	89 86 90 16 00 00    	mov    DWORD PTR [esi+0x1690],eax
  466b32:	89 86 94 16 00 00    	mov    DWORD PTR [esi+0x1694],eax
  466b38:	89 8e 98 16 00 00    	mov    DWORD PTR [esi+0x1698],ecx
  466b3e:	c6 86 9c 16 00 00 01 	mov    BYTE PTR [esi+0x169c],0x1
  466b45:	c6 86 a0 16 00 00 01 	mov    BYTE PTR [esi+0x16a0],0x1
  466b4c:	89 9e a4 16 00 00    	mov    DWORD PTR [esi+0x16a4],ebx
  466b52:	89 9e a8 16 00 00    	mov    DWORD PTR [esi+0x16a8],ebx
  466b58:	89 9e ac 16 00 00    	mov    DWORD PTR [esi+0x16ac],ebx
  466b5e:	89 9e b0 16 00 00    	mov    DWORD PTR [esi+0x16b0],ebx
  466b64:	89 9e b4 16 00 00    	mov    DWORD PTR [esi+0x16b4],ebx
  466b6a:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  466b70:	89 9e b8 16 00 00    	mov    DWORD PTR [esi+0x16b8],ebx
  466b76:	c7 06 e4 d9 64 00    	mov    DWORD PTR [esi],0x64d9e4
  466b7c:	8b 50 18             	mov    edx,DWORD PTR [eax+0x18]
  466b7f:	89 96 00 01 00 00    	mov    DWORD PTR [esi+0x100],edx
  466b85:	8b 48 1c             	mov    ecx,DWORD PTR [eax+0x1c]
  466b88:	89 8e 04 01 00 00    	mov    DWORD PTR [esi+0x104],ecx
  466b8e:	8b 50 20             	mov    edx,DWORD PTR [eax+0x20]
  466b91:	89 96 08 01 00 00    	mov    DWORD PTR [esi+0x108],edx
  466b97:	8d 86 c8 16 00 00    	lea    eax,[esi+0x16c8]
  466b9d:	b9 03 00 00 00       	mov    ecx,0x3
  466ba2:	89 58 f4             	mov    DWORD PTR [eax-0xc],ebx
  466ba5:	89 18                	mov    DWORD PTR [eax],ebx
  466ba7:	83 c0 04             	add    eax,0x4
  466baa:	49                   	dec    ecx
  466bab:	75 f5                	jne    0x466ba2
  466bad:	8d be 9c 01 00 00    	lea    edi,[esi+0x19c]
  466bb3:	bd 0f 00 00 00       	mov    ebp,0xf
  466bb8:	8b 44 24 78          	mov    eax,DWORD PTR [esp+0x78]
  466bbc:	56                   	push   esi
  466bbd:	50                   	push   eax
  466bbe:	8b cf                	mov    ecx,edi
  466bc0:	e8 8b 6f 01 00       	call   0x47db50
  466bc5:	81 c7 44 01 00 00    	add    edi,0x144
  466bcb:	4d                   	dec    ebp
  466bcc:	75 ea                	jne    0x466bb8
  466bce:	8b ce                	mov    ecx,esi
  466bd0:	e8 5b 1b 00 00       	call   0x468730
  466bd5:	8b 0d 34 d9 64 00    	mov    ecx,DWORD PTR ds:0x64d934
  466bdb:	89 8e 18 01 00 00    	mov    DWORD PTR [esi+0x118],ecx
  466be1:	8b 15 38 d9 64 00    	mov    edx,DWORD PTR ds:0x64d938
  466be7:	89 96 1c 01 00 00    	mov    DWORD PTR [esi+0x11c],edx
  466bed:	a1 58 d9 64 00       	mov    eax,ds:0x64d958
  466bf2:	89 86 3c 01 00 00    	mov    DWORD PTR [esi+0x13c],eax
  466bf8:	8b 0d 5c d9 64 00    	mov    ecx,DWORD PTR ds:0x64d95c
  466bfe:	89 8e 40 01 00 00    	mov    DWORD PTR [esi+0x140],ecx
  466c04:	8b 15 7c d9 64 00    	mov    edx,DWORD PTR ds:0x64d97c
  466c0a:	89 96 60 01 00 00    	mov    DWORD PTR [esi+0x160],edx
  466c10:	a1 80 d9 64 00       	mov    eax,ds:0x64d980
  466c15:	89 86 64 01 00 00    	mov    DWORD PTR [esi+0x164],eax
  466c1b:	8b 0d a0 d9 64 00    	mov    ecx,DWORD PTR ds:0x64d9a0
  466c21:	89 8e 84 01 00 00    	mov    DWORD PTR [esi+0x184],ecx
  466c27:	8b 15 a4 d9 64 00    	mov    edx,DWORD PTR ds:0x64d9a4
  466c2d:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  466c33:	89 96 88 01 00 00    	mov    DWORD PTR [esi+0x188],edx
  466c39:	39 59 30             	cmp    DWORD PTR [ecx+0x30],ebx
  466c3c:	0f 84 c3 00 00 00    	je     0x466d05
  466c42:	d9 41 24             	fld    DWORD PTR [ecx+0x24]
  466c45:	d8 61 18             	fsub   DWORD PTR [ecx+0x18]
  466c48:	d9 41 28             	fld    DWORD PTR [ecx+0x28]
  466c4b:	d8 61 1c             	fsub   DWORD PTR [ecx+0x1c]
  466c4e:	d9 5c 24 78          	fstp   DWORD PTR [esp+0x78]
  466c52:	d9 41 2c             	fld    DWORD PTR [ecx+0x2c]
  466c55:	d8 61 20             	fsub   DWORD PTR [ecx+0x20]
  466c58:	d9 5c 24 7c          	fstp   DWORD PTR [esp+0x7c]
  466c5c:	d8 15 54 a3 64 00    	fcom   DWORD PTR ds:0x64a354
  466c62:	df e0                	fnstsw ax
  466c64:	f6 c4 01             	test   ah,0x1
  466c67:	74 38                	je     0x466ca1
  466c69:	8b 41 24             	mov    eax,DWORD PTR [ecx+0x24]
  466c6c:	89 86 bc 16 00 00    	mov    DWORD PTR [esi+0x16bc],eax
  466c72:	8b 51 18             	mov    edx,DWORD PTR [ecx+0x18]
  466c75:	89 96 c8 16 00 00    	mov    DWORD PTR [esi+0x16c8],edx
  466c7b:	8b 41 28             	mov    eax,DWORD PTR [ecx+0x28]
  466c7e:	89 86 c0 16 00 00    	mov    DWORD PTR [esi+0x16c0],eax
  466c84:	8b 51 1c             	mov    edx,DWORD PTR [ecx+0x1c]
  466c87:	89 96 cc 16 00 00    	mov    DWORD PTR [esi+0x16cc],edx
  466c8d:	8b 41 2c             	mov    eax,DWORD PTR [ecx+0x2c]
  466c90:	89 86 c4 16 00 00    	mov    DWORD PTR [esi+0x16c4],eax
  466c96:	8b 49 20             	mov    ecx,DWORD PTR [ecx+0x20]
  466c99:	89 8e d0 16 00 00    	mov    DWORD PTR [esi+0x16d0],ecx
  466c9f:	eb 36                	jmp    0x466cd7
  466ca1:	8b 51 24             	mov    edx,DWORD PTR [ecx+0x24]
  466ca4:	89 96 c8 16 00 00    	mov    DWORD PTR [esi+0x16c8],edx
  466caa:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
  466cad:	89 86 bc 16 00 00    	mov    DWORD PTR [esi+0x16bc],eax
  466cb3:	8b 51 28             	mov    edx,DWORD PTR [ecx+0x28]
  466cb6:	89 96 cc 16 00 00    	mov    DWORD PTR [esi+0x16cc],edx
  466cbc:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
  466cbf:	89 86 c0 16 00 00    	mov    DWORD PTR [esi+0x16c0],eax
  466cc5:	8b 51 2c             	mov    edx,DWORD PTR [ecx+0x2c]
  466cc8:	89 96 d0 16 00 00    	mov    DWORD PTR [esi+0x16d0],edx
  466cce:	8b 41 20             	mov    eax,DWORD PTR [ecx+0x20]
  466cd1:	89 86 c4 16 00 00    	mov    DWORD PTR [esi+0x16c4],eax
  466cd7:	d8 35 b8 d9 64 00    	fdiv   DWORD PTR ds:0x64d9b8
  466cdd:	d9 9e b0 16 00 00    	fstp   DWORD PTR [esi+0x16b0]
  466ce3:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
  466ce7:	d8 35 b8 d9 64 00    	fdiv   DWORD PTR ds:0x64d9b8
  466ced:	d9 9e b8 16 00 00    	fstp   DWORD PTR [esi+0x16b8]
  466cf3:	d9 44 24 7c          	fld    DWORD PTR [esp+0x7c]
  466cf7:	d8 35 b8 d9 64 00    	fdiv   DWORD PTR ds:0x64d9b8
  466cfd:	d9 9e b4 16 00 00    	fstp   DWORD PTR [esi+0x16b4]
  466d03:	eb 3d                	jmp    0x466d42
  466d05:	8d 86 24 01 00 00    	lea    eax,[esi+0x124]
  466d0b:	b9 04 00 00 00       	mov    ecx,0x4
  466d10:	ba 00 00 7f 43       	mov    edx,0x437f0000
  466d15:	8b be f8 00 00 00    	mov    edi,DWORD PTR [esi+0xf8]
  466d1b:	83 c0 24             	add    eax,0x24
  466d1e:	49                   	dec    ecx
  466d1f:	8b 7f 18             	mov    edi,DWORD PTR [edi+0x18]
  466d22:	89 78 d8             	mov    DWORD PTR [eax-0x28],edi
  466d25:	8b be f8 00 00 00    	mov    edi,DWORD PTR [esi+0xf8]
  466d2b:	8b 7f 1c             	mov    edi,DWORD PTR [edi+0x1c]
  466d2e:	89 78 dc             	mov    DWORD PTR [eax-0x24],edi
  466d31:	8b be f8 00 00 00    	mov    edi,DWORD PTR [esi+0xf8]
  466d37:	8b 7f 20             	mov    edi,DWORD PTR [edi+0x20]
  466d3a:	89 78 e0             	mov    DWORD PTR [eax-0x20],edi
  466d3d:	89 50 e4             	mov    DWORD PTR [eax-0x1c],edx
  466d40:	75 d3                	jne    0x466d15
  466d42:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  466d48:	d9 41 4c             	fld    DWORD PTR [ecx+0x4c]
  466d4b:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  466d51:	d9 9e 74 16 00 00    	fstp   DWORD PTR [esi+0x1674]
  466d57:	d9 41 50             	fld    DWORD PTR [ecx+0x50]
  466d5a:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  466d60:	d9 96 78 16 00 00    	fst    DWORD PTR [esi+0x1678]
  466d66:	d8 9e 74 16 00 00    	fcomp  DWORD PTR [esi+0x1674]
  466d6c:	df e0                	fnstsw ax
  466d6e:	f6 c4 40             	test   ah,0x40
  466d71:	75 09                	jne    0x466d7c
  466d73:	c6 86 7c 16 00 00 01 	mov    BYTE PTR [esi+0x167c],0x1
  466d7a:	eb 06                	jmp    0x466d82
  466d7c:	88 9e 7c 16 00 00    	mov    BYTE PTR [esi+0x167c],bl
  466d82:	d9 05 bc d9 64 00    	fld    DWORD PTR ds:0x64d9bc
  466d88:	d8 49 48             	fmul   DWORD PTR [ecx+0x48]
  466d8b:	d9 9e a8 16 00 00    	fstp   DWORD PTR [esi+0x16a8]
  466d91:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  466d97:	d9 41 14             	fld    DWORD PTR [ecx+0x14]
  466d9a:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  466da0:	df e0                	fnstsw ax
  466da2:	f6 c4 41             	test   ah,0x41
  466da5:	75 16                	jne    0x466dbd
  466da7:	d9 41 14             	fld    DWORD PTR [ecx+0x14]
  466daa:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  466db0:	e8 6b 3d 1a 00       	call   0x60ab20
  466db5:	89 86 ac 16 00 00    	mov    DWORD PTR [esi+0x16ac],eax
  466dbb:	eb 0a                	jmp    0x466dc7
  466dbd:	c7 86 ac 16 00 00 ff 	mov    DWORD PTR [esi+0x16ac],0xffffffff
  466dc4:	ff ff ff 
  466dc7:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  466dcd:	8d ae 4c 16 00 00    	lea    ebp,[esi+0x164c]
  466dd3:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
  466dd6:	3b cb                	cmp    ecx,ebx
  466dd8:	75 15                	jne    0x466def
  466dda:	89 5d 00             	mov    DWORD PTR [ebp+0x0],ebx
  466ddd:	c7 86 50 16 00 00 00 	mov    DWORD PTR [esi+0x1650],0x3f800000
  466de4:	00 80 3f 
  466de7:	89 9e 54 16 00 00    	mov    DWORD PTR [esi+0x1654],ebx
  466ded:	eb 26                	jmp    0x466e15
  466def:	d9 01                	fld    DWORD PTR [ecx]
  466df1:	d8 60 08             	fsub   DWORD PTR [eax+0x8]
  466df4:	d9 5d 00             	fstp   DWORD PTR [ebp+0x0]
  466df7:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
  466dfa:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
  466dfd:	d8 60 0c             	fsub   DWORD PTR [eax+0xc]
  466e00:	d9 9e 50 16 00 00    	fstp   DWORD PTR [esi+0x1650]
  466e06:	8b 50 7c             	mov    edx,DWORD PTR [eax+0x7c]
  466e09:	d9 42 08             	fld    DWORD PTR [edx+0x8]
  466e0c:	d8 60 10             	fsub   DWORD PTR [eax+0x10]
  466e0f:	d9 9e 54 16 00 00    	fstp   DWORD PTR [esi+0x1654]
  466e15:	8b cd                	mov    ecx,ebp
  466e17:	e8 04 c1 14 00       	call   0x5b2f20
  466e1c:	dd d8                	fstp   st(0)
  466e1e:	d9 86 50 16 00 00    	fld    DWORD PTR [esi+0x1650]
  466e24:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  466e2a:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  466e31:	00 
  466e32:	c7 44 24 3c 00 00 80 	mov    DWORD PTR [esp+0x3c],0xbf800000
  466e39:	bf 
  466e3a:	df e0                	fnstsw ax
  466e3c:	f6 c4 01             	test   ah,0x1
  466e3f:	75 08                	jne    0x466e49
  466e41:	c7 44 24 3c 00 00 80 	mov    DWORD PTR [esp+0x3c],0x3f800000
  466e48:	3f 
  466e49:	68 cd cc cc 3d       	push   0x3dcccccd
  466e4e:	8b d5                	mov    edx,ebp
  466e50:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  466e54:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
  466e5b:	00 
  466e5c:	e8 5f c0 14 00       	call   0x5b2ec0
  466e61:	85 c0                	test   eax,eax
  466e63:	74 33                	je     0x466e98
  466e65:	d9 86 54 16 00 00    	fld    DWORD PTR [esi+0x1654]
  466e6b:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  466e71:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  466e78:	00 
  466e79:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
  466e80:	00 
  466e81:	c7 44 24 40 00 00 80 	mov    DWORD PTR [esp+0x40],0xbf800000
  466e88:	bf 
  466e89:	df e0                	fnstsw ax
  466e8b:	f6 c4 01             	test   ah,0x1
  466e8e:	75 08                	jne    0x466e98
  466e90:	c7 44 24 40 00 00 80 	mov    DWORD PTR [esp+0x40],0x3f800000
  466e97:	3f 
  466e98:	8d be 58 16 00 00    	lea    edi,[esi+0x1658]
  466e9e:	8b d5                	mov    edx,ebp
  466ea0:	57                   	push   edi
  466ea1:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  466ea5:	e8 b6 bf 14 00       	call   0x5b2e60
  466eaa:	8d 86 64 16 00 00    	lea    eax,[esi+0x1664]
  466eb0:	8b d5                	mov    edx,ebp
  466eb2:	50                   	push   eax
  466eb3:	8b cf                	mov    ecx,edi
  466eb5:	e8 a6 bf 14 00       	call   0x5b2e60
  466eba:	8d be a4 14 00 00    	lea    edi,[esi+0x14a4]
  466ec0:	c7 44 24 18 0f 00 00 	mov    DWORD PTR [esp+0x18],0xf
  466ec7:	00 
  466ec8:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  466ece:	8b 48 74             	mov    ecx,DWORD PTR [eax+0x74]
  466ed1:	8b 50 70             	mov    edx,DWORD PTR [eax+0x70]
  466ed4:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  466ed8:	89 54 24 78          	mov    DWORD PTR [esp+0x78],edx
  466edc:	e8 bf 35 1a 00       	call   0x60a4a0
  466ee1:	99                   	cdq
  466ee2:	b9 10 27 00 00       	mov    ecx,0x2710
  466ee7:	f7 f9                	idiv   ecx
  466ee9:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  466eef:	89 54 24 7c          	mov    DWORD PTR [esp+0x7c],edx
  466ef3:	db 44 24 7c          	fild   DWORD PTR [esp+0x7c]
  466ef7:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  466efb:	d8 64 24 78          	fsub   DWORD PTR [esp+0x78]
  466eff:	de c9                	fmulp  st(1),st
  466f01:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  466f07:	d8 44 24 78          	fadd   DWORD PTR [esp+0x78]
  466f0b:	d9 40 64             	fld    DWORD PTR [eax+0x64]
  466f0e:	d8 0d 30 a4 64 00    	fmul   DWORD PTR ds:0x64a430
  466f14:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  466f18:	d9 40 60             	fld    DWORD PTR [eax+0x60]
  466f1b:	d8 0d 30 a4 64 00    	fmul   DWORD PTR ds:0x64a430
  466f21:	d9 5c 24 7c          	fstp   DWORD PTR [esp+0x7c]
  466f25:	d8 0d 58 d6 64 00    	fmul   DWORD PTR ds:0x64d658
  466f2b:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  466f2f:	e8 6c 35 1a 00       	call   0x60a4a0
  466f34:	99                   	cdq
  466f35:	b9 10 27 00 00       	mov    ecx,0x2710
  466f3a:	f7 f9                	idiv   ecx
  466f3c:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  466f40:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  466f44:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  466f48:	d8 64 24 7c          	fsub   DWORD PTR [esp+0x7c]
  466f4c:	de c9                	fmulp  st(1),st
  466f4e:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  466f54:	d8 44 24 7c          	fadd   DWORD PTR [esp+0x7c]
  466f58:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  466f5c:	d9 ff                	fcos
  466f5e:	de c9                	fmulp  st(1),st
  466f60:	d9 5c 24 54          	fstp   DWORD PTR [esp+0x54]
  466f64:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  466f68:	d9 f2                	fptan
  466f6a:	dd d8                	fstp   st(0)
  466f6c:	d8 4c 24 54          	fmul   DWORD PTR [esp+0x54]
  466f70:	d9 54 24 50          	fst    DWORD PTR [esp+0x50]
  466f74:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  466f78:	e8 23 35 1a 00       	call   0x60a4a0
  466f7d:	99                   	cdq
  466f7e:	b9 10 27 00 00       	mov    ecx,0x2710
  466f83:	f7 f9                	idiv   ecx
  466f85:	89 54 24 7c          	mov    DWORD PTR [esp+0x7c],edx
  466f89:	db 44 24 7c          	fild   DWORD PTR [esp+0x7c]
  466f8d:	d8 0d dc d9 64 00    	fmul   DWORD PTR ds:0x64d9dc
  466f93:	d8 0d 58 d6 64 00    	fmul   DWORD PTR ds:0x64d658
  466f99:	d9 c0                	fld    st(0)
  466f9b:	d9 ff                	fcos
  466f9d:	d9 c9                	fxch   st(1)
  466f9f:	d9 fe                	fsin
  466fa1:	dd 5c 24 20          	fstp   QWORD PTR [esp+0x20]
  466fa5:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  466fa9:	d8 c9                	fmul   st,st(1)
  466fab:	d9 c9                	fxch   st(1)
  466fad:	dd d8                	fstp   st(0)
  466faf:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  466fb3:	dc 4c 24 20          	fmul   QWORD PTR [esp+0x20]
  466fb7:	d9 c0                	fld    st(0)
  466fb9:	d8 8e 58 16 00 00    	fmul   DWORD PTR [esi+0x1658]
  466fbf:	d9 c2                	fld    st(2)
  466fc1:	d8 8e 64 16 00 00    	fmul   DWORD PTR [esi+0x1664]
  466fc7:	de c1                	faddp  st(1),st
  466fc9:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
  466fcd:	d8 4d 00             	fmul   DWORD PTR [ebp+0x0]
  466fd0:	de c1                	faddp  st(1),st
  466fd2:	d9 5c 24 5c          	fstp   DWORD PTR [esp+0x5c]
  466fd6:	d9 c0                	fld    st(0)
  466fd8:	d8 8e 5c 16 00 00    	fmul   DWORD PTR [esi+0x165c]
  466fde:	d9 c2                	fld    st(2)
  466fe0:	d8 8e 68 16 00 00    	fmul   DWORD PTR [esi+0x1668]
  466fe6:	de c1                	faddp  st(1),st
  466fe8:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
  466fec:	d8 8e 50 16 00 00    	fmul   DWORD PTR [esi+0x1650]
  466ff2:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  466ff8:	de c1                	faddp  st(1),st
  466ffa:	8d 50 08             	lea    edx,[eax+0x8]
  466ffd:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  467001:	8b 0a                	mov    ecx,DWORD PTR [edx]
  467003:	d8 8e 60 16 00 00    	fmul   DWORD PTR [esi+0x1660]
  467009:	d9 c9                	fxch   st(1)
  46700b:	d8 8e 6c 16 00 00    	fmul   DWORD PTR [esi+0x166c]
  467011:	8b 5a 04             	mov    ebx,DWORD PTR [edx+0x4]
  467014:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
  467018:	8b 48 5c             	mov    ecx,DWORD PTR [eax+0x5c]
  46701b:	de c1                	faddp  st(1),st
  46701d:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
  467021:	d8 8e 54 16 00 00    	fmul   DWORD PTR [esi+0x1654]
  467027:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  46702a:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  46702e:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
  467032:	de c1                	faddp  st(1),st
  467034:	d9 5c 24 64          	fstp   DWORD PTR [esp+0x64]
  467038:	d9 40 5c             	fld    DWORD PTR [eax+0x5c]
  46703b:	d9 e0                	fchs
  46703d:	d9 5c 24 7c          	fstp   DWORD PTR [esp+0x7c]
  467041:	e8 5a 34 1a 00       	call   0x60a4a0
  467046:	99                   	cdq
  467047:	b9 10 27 00 00       	mov    ecx,0x2710
  46704c:	f7 f9                	idiv   ecx
  46704e:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  467054:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  467058:	8b 50 5c             	mov    edx,DWORD PTR [eax+0x5c]
  46705b:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
  46705f:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  467063:	d8 64 24 7c          	fsub   DWORD PTR [esp+0x7c]
  467067:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  46706b:	de c9                	fmulp  st(1),st
  46706d:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  467073:	d8 44 24 7c          	fadd   DWORD PTR [esp+0x7c]
  467077:	d8 44 24 44          	fadd   DWORD PTR [esp+0x44]
  46707b:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
  46707f:	d9 40 5c             	fld    DWORD PTR [eax+0x5c]
  467082:	d9 e0                	fchs
  467084:	d9 5c 24 7c          	fstp   DWORD PTR [esp+0x7c]
  467088:	e8 13 34 1a 00       	call   0x60a4a0
  46708d:	99                   	cdq
  46708e:	b9 10 27 00 00       	mov    ecx,0x2710
  467093:	f7 f9                	idiv   ecx
  467095:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  467099:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  46709d:	8d 57 f4             	lea    edx,[edi-0xc]
  4670a0:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
  4670a4:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
  4670a8:	d8 64 24 7c          	fsub   DWORD PTR [esp+0x7c]
  4670ac:	89 02                	mov    DWORD PTR [edx],eax
  4670ae:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  4670b2:	de c9                	fmulp  st(1),st
  4670b4:	89 5a 04             	mov    DWORD PTR [edx+0x4],ebx
  4670b7:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  4670bd:	d8 44 24 7c          	fadd   DWORD PTR [esp+0x7c]
  4670c1:	d8 44 24 4c          	fadd   DWORD PTR [esp+0x4c]
  4670c5:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
  4670c9:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  4670cd:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  4670d0:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  4670d4:	8b d7                	mov    edx,edi
  4670d6:	89 02                	mov    DWORD PTR [edx],eax
  4670d8:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  4670dc:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  4670df:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  4670e2:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  4670e8:	8b 48 38             	mov    ecx,DWORD PTR [eax+0x38]
  4670eb:	8b 50 34             	mov    edx,DWORD PTR [eax+0x34]
  4670ee:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  4670f2:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4670f6:	e8 a5 33 1a 00       	call   0x60a4a0
  4670fb:	99                   	cdq
  4670fc:	b9 10 27 00 00       	mov    ecx,0x2710
  467101:	f7 f9                	idiv   ecx
  467103:	89 54 24 7c          	mov    DWORD PTR [esp+0x7c],edx
  467107:	db 44 24 7c          	fild   DWORD PTR [esp+0x7c]
  46710b:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  46710f:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  467113:	de c9                	fmulp  st(1),st
  467115:	d8 0d d8 d9 64 00    	fmul   DWORD PTR ds:0x64d9d8
  46711b:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  46711f:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  467125:	de c1                	faddp  st(1),st
  467127:	e8 f4 39 1a 00       	call   0x60ab20
  46712c:	89 47 0c             	mov    DWORD PTR [edi+0xc],eax
  46712f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  467133:	83 c7 1c             	add    edi,0x1c
  467136:	48                   	dec    eax
  467137:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  46713b:	0f 85 87 fd ff ff    	jne    0x466ec8
  467141:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
  467145:	8b c6                	mov    eax,esi
  467147:	5f                   	pop    edi
  467148:	5e                   	pop    esi
  467149:	5d                   	pop    ebp
  46714a:	5b                   	pop    ebx
  46714b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
