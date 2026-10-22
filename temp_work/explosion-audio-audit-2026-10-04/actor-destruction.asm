  4a7940:	6a ff                	push   0xffffffff
  4a7942:	68 38 dc 62 00       	push   0x62dc38
  4a7947:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4a794d:	50                   	push   eax
  4a794e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4a7955:	81 ec 50 01 00 00    	sub    esp,0x150
  4a795b:	53                   	push   ebx
  4a795c:	55                   	push   ebp
  4a795d:	56                   	push   esi
  4a795e:	57                   	push   edi
  4a795f:	68 91 00 00 00       	push   0x91
  4a7964:	68 a4 5d 69 00       	push   0x695da4
  4a7969:	8d 8c 24 98 00 00 00 	lea    ecx,[esp+0x98]
  4a7970:	e8 7b 6c 10 00       	call   0x5ae5f0
  4a7975:	8b 9c 24 70 01 00 00 	mov    ebx,DWORD PTR [esp+0x170]
  4a797c:	8d 84 24 24 01 00 00 	lea    eax,[esp+0x124]
  4a7983:	33 ed                	xor    ebp,ebp
  4a7985:	50                   	push   eax
  4a7986:	8b cb                	mov    ecx,ebx
  4a7988:	89 ac 24 6c 01 00 00 	mov    DWORD PTR [esp+0x16c],ebp
  4a798f:	e8 6c 42 ff ff       	call   0x49bc00
  4a7994:	8b f0                	mov    esi,eax
  4a7996:	8b 83 08 01 00 00    	mov    eax,DWORD PTR [ebx+0x108]
  4a799c:	b9 06 00 00 00       	mov    ecx,0x6
  4a79a1:	8d 7c 24 78          	lea    edi,[esp+0x78]
  4a79a5:	3b c5                	cmp    eax,ebp
  4a79a7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4a79a9:	75 69                	jne    0x4a7a14
  4a79ab:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4a79af:	55                   	push   ebp
  4a79b0:	88 4c 24 4c          	mov    BYTE PTR [esp+0x4c],cl
  4a79b4:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4a79b8:	e8 e3 c6 f5 ff       	call   0x4040a0
  4a79bd:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4a79c2:	83 c9 ff             	or     ecx,0xffffffff
  4a79c5:	33 c0                	xor    eax,eax
  4a79c7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a79c9:	f7 d1                	not    ecx
  4a79cb:	49                   	dec    ecx
  4a79cc:	51                   	push   ecx
  4a79cd:	68 70 3f 6b 00       	push   0x6b3f70
  4a79d2:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4a79d6:	e8 15 c7 f5 ff       	call   0x4040f0
  4a79db:	8d 54 24 48          	lea    edx,[esp+0x48]
  4a79df:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x1
  4a79e6:	01 
  4a79e7:	52                   	push   edx
  4a79e8:	68 41 01 00 00       	push   0x141
  4a79ed:	68 cc 4b 69 00       	push   0x694bcc
  4a79f2:	68 a0 f8 68 00       	push   0x68f8a0
  4a79f7:	e8 f4 8d 0f 00       	call   0x5a07f0
  4a79fc:	ff d0                	call   eax
  4a79fe:	83 c4 10             	add    esp,0x10
  4a7a01:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4a7a05:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x0
  4a7a0c:	00 
  4a7a0d:	6a 01                	push   0x1
  4a7a0f:	e8 8c c6 f5 ff       	call   0x4040a0
  4a7a14:	8b 9b 08 01 00 00    	mov    ebx,DWORD PTR [ebx+0x108]
  4a7a1a:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  4a7a1e:	39 6b 64             	cmp    DWORD PTR [ebx+0x64],ebp
  4a7a21:	0f 8e 32 01 00 00    	jle    0x4a7b59
  4a7a27:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  4a7a2b:	8b 80 50 01 00 00    	mov    eax,DWORD PTR [eax+0x150]
  4a7a31:	8b 0c a8             	mov    ecx,DWORD PTR [eax+ebp*4]
  4a7a34:	8b d1                	mov    edx,ecx
  4a7a36:	8b 79 24             	mov    edi,DWORD PTR [ecx+0x24]
  4a7a39:	8b 5a 28             	mov    ebx,DWORD PTR [edx+0x28]
  4a7a3c:	e8 2f ff 0a 00       	call   0x557970
  4a7a41:	8b f0                	mov    esi,eax
  4a7a43:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  4a7a46:	3d 00 00 00 80       	cmp    eax,0x80000000
  4a7a4b:	75 18                	jne    0x4a7a65
  4a7a4d:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  4a7a50:	85 c0                	test   eax,eax
  4a7a52:	75 05                	jne    0x4a7a59
  4a7a54:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4a7a59:	50                   	push   eax
  4a7a5a:	e8 b1 34 16 00       	call   0x60af10
  4a7a5f:	83 c4 04             	add    esp,0x4
  4a7a62:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  4a7a65:	85 c0                	test   eax,eax
  4a7a67:	0f 8e a5 00 00 00    	jle    0x4a7b12
  4a7a6d:	e8 fe fe 0a 00       	call   0x557970
  4a7a72:	8b f0                	mov    esi,eax
  4a7a74:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  4a7a77:	3d 00 00 00 80       	cmp    eax,0x80000000
  4a7a7c:	75 18                	jne    0x4a7a96
  4a7a7e:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  4a7a81:	85 c0                	test   eax,eax
  4a7a83:	75 05                	jne    0x4a7a8a
  4a7a85:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4a7a8a:	50                   	push   eax
  4a7a8b:	e8 80 34 16 00       	call   0x60af10
  4a7a90:	83 c4 04             	add    esp,0x4
  4a7a93:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  4a7a96:	83 f8 01             	cmp    eax,0x1
  4a7a99:	7f 18                	jg     0x4a7ab3
  4a7a9b:	8b cb                	mov    ecx,ebx
  4a7a9d:	b8 56 55 55 55       	mov    eax,0x55555556
  4a7aa2:	2b cf                	sub    ecx,edi
  4a7aa4:	f7 e9                	imul   ecx
  4a7aa6:	8b c2                	mov    eax,edx
  4a7aa8:	c1 e8 1f             	shr    eax,0x1f
  4a7aab:	03 d0                	add    edx,eax
  4a7aad:	03 d7                	add    edx,edi
  4a7aaf:	8b da                	mov    ebx,edx
  4a7ab1:	eb 3b                	jmp    0x4a7aee
  4a7ab3:	e8 b8 fe 0a 00       	call   0x557970
  4a7ab8:	8b f0                	mov    esi,eax
  4a7aba:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  4a7abd:	3d 00 00 00 80       	cmp    eax,0x80000000
  4a7ac2:	75 18                	jne    0x4a7adc
  4a7ac4:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  4a7ac7:	85 c0                	test   eax,eax
  4a7ac9:	75 05                	jne    0x4a7ad0
  4a7acb:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4a7ad0:	50                   	push   eax
  4a7ad1:	e8 3a 34 16 00       	call   0x60af10
  4a7ad6:	83 c4 04             	add    esp,0x4
  4a7ad9:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  4a7adc:	83 f8 02             	cmp    eax,0x2
  4a7adf:	7f 0d                	jg     0x4a7aee
  4a7ae1:	8b c3                	mov    eax,ebx
  4a7ae3:	2b c7                	sub    eax,edi
  4a7ae5:	99                   	cdq
  4a7ae6:	2b c2                	sub    eax,edx
  4a7ae8:	d1 f8                	sar    eax,1
  4a7aea:	03 c7                	add    eax,edi
  4a7aec:	8b d8                	mov    ebx,eax
  4a7aee:	3b fb                	cmp    edi,ebx
  4a7af0:	7d 0f                	jge    0x4a7b01
  4a7af2:	e8 a9 29 16 00       	call   0x60a4a0
  4a7af7:	2b df                	sub    ebx,edi
  4a7af9:	99                   	cdq
  4a7afa:	43                   	inc    ebx
  4a7afb:	f7 fb                	idiv   ebx
  4a7afd:	03 d7                	add    edx,edi
  4a7aff:	eb 13                	jmp    0x4a7b14
  4a7b01:	7e 0f                	jle    0x4a7b12
  4a7b03:	e8 98 29 16 00       	call   0x60a4a0
  4a7b08:	2b fb                	sub    edi,ebx
  4a7b0a:	99                   	cdq
  4a7b0b:	47                   	inc    edi
  4a7b0c:	f7 ff                	idiv   edi
  4a7b0e:	03 d3                	add    edx,ebx
  4a7b10:	eb 02                	jmp    0x4a7b14
  4a7b12:	8b d7                	mov    edx,edi
  4a7b14:	85 d2                	test   edx,edx
  4a7b16:	7e 2f                	jle    0x4a7b47
  4a7b18:	8b f2                	mov    esi,edx
  4a7b1a:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  4a7b1e:	6a 00                	push   0x0
  4a7b20:	6a 00                	push   0x0
  4a7b22:	8b 81 50 01 00 00    	mov    eax,DWORD PTR [ecx+0x150]
  4a7b28:	8b 8c 24 78 01 00 00 	mov    ecx,DWORD PTR [esp+0x178]
  4a7b2f:	8b 14 a8             	mov    edx,DWORD PTR [eax+ebp*4]
  4a7b32:	8d 84 24 80 00 00 00 	lea    eax,[esp+0x80]
  4a7b39:	52                   	push   edx
  4a7b3a:	50                   	push   eax
  4a7b3b:	51                   	push   ecx
  4a7b3c:	e8 1f f8 ff ff       	call   0x4a7360
  4a7b41:	83 c4 14             	add    esp,0x14
  4a7b44:	4e                   	dec    esi
  4a7b45:	75 d3                	jne    0x4a7b1a
  4a7b47:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  4a7b4b:	45                   	inc    ebp
  4a7b4c:	3b 6a 64             	cmp    ebp,DWORD PTR [edx+0x64]
  4a7b4f:	0f 8c d2 fe ff ff    	jl     0x4a7a27
  4a7b55:	8b da                	mov    ebx,edx
  4a7b57:	33 ed                	xor    ebp,ebp
  4a7b59:	d9 84 24 84 00 00 00 	fld    DWORD PTR [esp+0x84]
  4a7b60:	d8 64 24 78          	fsub   DWORD PTR [esp+0x78]
  4a7b64:	33 c0                	xor    eax,eax
  4a7b66:	33 c9                	xor    ecx,ecx
  4a7b68:	89 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],eax
  4a7b6f:	89 8c 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],ecx
  4a7b76:	89 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],eax
  4a7b7d:	33 d2                	xor    edx,edx
  4a7b7f:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  4a7b83:	d9 84 24 88 00 00 00 	fld    DWORD PTR [esp+0x88]
  4a7b8a:	d8 64 24 7c          	fsub   DWORD PTR [esp+0x7c]
  4a7b8e:	89 84 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],eax
  4a7b95:	89 8c 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],ecx
  4a7b9c:	89 84 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],eax
  4a7ba3:	89 94 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],edx
  4a7baa:	89 84 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],eax
  4a7bb1:	89 84 24 ec 00 00 00 	mov    DWORD PTR [esp+0xec],eax
  4a7bb8:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  4a7bbc:	d9 84 24 8c 00 00 00 	fld    DWORD PTR [esp+0x8c]
  4a7bc3:	d8 a4 24 80 00 00 00 	fsub   DWORD PTR [esp+0x80]
  4a7bca:	89 84 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],eax
  4a7bd1:	89 8c 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],ecx
  4a7bd8:	89 94 24 d4 00 00 00 	mov    DWORD PTR [esp+0xd4],edx
  4a7bdf:	c6 44 24 1b 01       	mov    BYTE PTR [esp+0x1b],0x1
  4a7be4:	c6 44 24 13 01       	mov    BYTE PTR [esp+0x13],0x1
  4a7be9:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  4a7bf0:	00 
  4a7bf1:	d9 54 24 3c          	fst    DWORD PTR [esp+0x3c]
  4a7bf5:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
  4a7bf9:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
  4a7bfd:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x3f000000
  4a7c04:	00 00 00 3f 
  4a7c08:	c7 84 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],0x3e99999a
  4a7c0f:	9a 99 99 3e 
  4a7c13:	c7 84 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],0x3f19999a
  4a7c1a:	9a 99 19 3f 
  4a7c1e:	89 8c 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ecx
  4a7c25:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x3f000000
  4a7c2c:	00 00 00 3f 
  4a7c30:	c7 84 24 c8 00 00 00 	mov    DWORD PTR [esp+0xc8],0x3e4ccccd
  4a7c37:	cd cc 4c 3e 
  4a7c3b:	df e0                	fnstsw ax
  4a7c3d:	c7 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],0x3f4ccccd
  4a7c44:	cd cc 4c 3f 
  4a7c48:	89 94 24 d8 00 00 00 	mov    DWORD PTR [esp+0xd8],edx
  4a7c4f:	f6 c4 41             	test   ah,0x41
  4a7c52:	c7 84 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],0x3f000000
  4a7c59:	00 00 00 3f 
  4a7c5d:	c7 84 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],0x3dcccccd
  4a7c64:	cd cc cc 3d 
  4a7c68:	c7 84 24 e4 00 00 00 	mov    DWORD PTR [esp+0xe4],0x3f333333
  4a7c6f:	33 33 33 3f 
  4a7c73:	c7 84 24 e8 00 00 00 	mov    DWORD PTR [esp+0xe8],0x3e99999a
  4a7c7a:	9a 99 99 3e 
  4a7c7e:	c7 84 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],0x3f000000
  4a7c85:	00 00 00 3f 
  4a7c89:	c7 84 24 f8 00 00 00 	mov    DWORD PTR [esp+0xf8],0x3f333333
  4a7c90:	33 33 33 3f 
  4a7c94:	c7 84 24 fc 00 00 00 	mov    DWORD PTR [esp+0xfc],0x3e99999a
  4a7c9b:	9a 99 99 3e 
  4a7c9f:	c7 84 24 00 01 00 00 	mov    DWORD PTR [esp+0x100],0x3f666666
  4a7ca6:	66 66 66 3f 
  4a7caa:	c7 84 24 04 01 00 00 	mov    DWORD PTR [esp+0x104],0x3dcccccd
  4a7cb1:	cd cc cc 3d 
  4a7cb5:	89 ac 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebp
  4a7cbc:	c7 84 24 0c 01 00 00 	mov    DWORD PTR [esp+0x10c],0x3f000000
  4a7cc3:	00 00 00 3f 
  4a7cc7:	c7 84 24 10 01 00 00 	mov    DWORD PTR [esp+0x110],0x3f19999a
  4a7cce:	9a 99 19 3f 
  4a7cd2:	c7 84 24 14 01 00 00 	mov    DWORD PTR [esp+0x114],0x3ecccccd
  4a7cd9:	cd cc cc 3e 
  4a7cdd:	c7 84 24 18 01 00 00 	mov    DWORD PTR [esp+0x118],0x3f4ccccd
  4a7ce4:	cd cc 4c 3f 
  4a7ce8:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0x3dcccccd
  4a7cef:	cd cc cc 3d 
  4a7cf3:	c7 84 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],0x3f733333
  4a7cfa:	33 33 73 3f 
  4a7cfe:	75 04                	jne    0x4a7d04
  4a7d00:	88 54 24 13          	mov    BYTE PTR [esp+0x13],dl
  4a7d04:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  4a7d08:	d8 5c 24 30          	fcomp  DWORD PTR [esp+0x30]
  4a7d0c:	df e0                	fnstsw ax
  4a7d0e:	f6 c4 41             	test   ah,0x41
  4a7d11:	75 05                	jne    0x4a7d18
  4a7d13:	c6 44 24 1b 00       	mov    BYTE PTR [esp+0x1b],0x0
  4a7d18:	d8 54 24 30          	fcom   DWORD PTR [esp+0x30]
  4a7d1c:	df e0                	fnstsw ax
  4a7d1e:	f6 c4 41             	test   ah,0x41
  4a7d21:	75 05                	jne    0x4a7d28
  4a7d23:	c6 44 24 1b 00       	mov    BYTE PTR [esp+0x1b],0x0
  4a7d28:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
  4a7d2c:	df e0                	fnstsw ax
  4a7d2e:	f6 c4 41             	test   ah,0x41
  4a7d31:	75 05                	jne    0x4a7d38
  4a7d33:	c6 44 24 13 00       	mov    BYTE PTR [esp+0x13],0x0
  4a7d38:	d9 05 50 a4 64 00    	fld    DWORD PTR ds:0x64a450
  4a7d3e:	d8 9b b8 00 00 00    	fcomp  DWORD PTR [ebx+0xb8]
  4a7d44:	89 6c 24 34          	mov    DWORD PTR [esp+0x34],ebp
  4a7d48:	df e0                	fnstsw ax
  4a7d4a:	f6 c4 01             	test   ah,0x1
  4a7d4d:	0f 84 d9 06 00 00    	je     0x4a842c
  4a7d53:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
  4a7d57:	d9 83 b8 00 00 00    	fld    DWORD PTR [ebx+0xb8]
  4a7d5d:	e8 be 2d 16 00       	call   0x60ab20
  4a7d62:	99                   	cdq
  4a7d63:	b9 06 00 00 00       	mov    ecx,0x6
  4a7d68:	be 06 00 00 00       	mov    esi,0x6
  4a7d6d:	f7 f9                	idiv   ecx
  4a7d6f:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  4a7d73:	8b bc 24 70 01 00 00 	mov    edi,DWORD PTR [esp+0x170]
  4a7d7a:	8d 0c 52             	lea    ecx,[edx+edx*2]
  4a7d7d:	99                   	cdq
  4a7d7e:	f7 fe                	idiv   esi
  4a7d80:	8b 07                	mov    eax,DWORD PTR [edi]
  4a7d82:	8d 14 4a             	lea    edx,[edx+ecx*2]
  4a7d85:	8d 8c 24 3c 01 00 00 	lea    ecx,[esp+0x13c]
  4a7d8c:	51                   	push   ecx
  4a7d8d:	8b cf                	mov    ecx,edi
  4a7d8f:	d9 84 94 98 00 00 00 	fld    DWORD PTR [esp+edx*4+0x98]
  4a7d96:	d8 25 98 ab 64 00    	fsub   DWORD PTR ds:0x64ab98
  4a7d9c:	d9 5c 24 44          	fstp   DWORD PTR [esp+0x44]
  4a7da0:	ff 50 48             	call   DWORD PTR [eax+0x48]
  4a7da3:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
  4a7da7:	d8 84 24 84 00 00 00 	fadd   DWORD PTR [esp+0x84]
  4a7dae:	8b 17                	mov    edx,DWORD PTR [edi]
  4a7db0:	8b cf                	mov    ecx,edi
  4a7db2:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  4a7db8:	d8 00                	fadd   DWORD PTR [eax]
  4a7dba:	8d 84 24 48 01 00 00 	lea    eax,[esp+0x148]
  4a7dc1:	50                   	push   eax
  4a7dc2:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  4a7dc6:	ff 52 48             	call   DWORD PTR [edx+0x48]
  4a7dc9:	d9 44 24 7c          	fld    DWORD PTR [esp+0x7c]
  4a7dcd:	d8 84 24 88 00 00 00 	fadd   DWORD PTR [esp+0x88]
  4a7dd4:	8b 17                	mov    edx,DWORD PTR [edi]
  4a7dd6:	8b cf                	mov    ecx,edi
  4a7dd8:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  4a7dde:	d8 40 04             	fadd   DWORD PTR [eax+0x4]
  4a7de1:	8d 84 24 54 01 00 00 	lea    eax,[esp+0x154]
  4a7de8:	50                   	push   eax
  4a7de9:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  4a7ded:	ff 52 48             	call   DWORD PTR [edx+0x48]
  4a7df0:	d9 84 24 80 00 00 00 	fld    DWORD PTR [esp+0x80]
  4a7df7:	d8 84 24 8c 00 00 00 	fadd   DWORD PTR [esp+0x8c]
  4a7dfe:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  4a7e04:	d8 40 08             	fadd   DWORD PTR [eax+0x8]
  4a7e07:	8a 44 24 1b          	mov    al,BYTE PTR [esp+0x1b]
  4a7e0b:	84 c0                	test   al,al
  4a7e0d:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  4a7e11:	0f 84 84 00 00 00    	je     0x4a7e9b
  4a7e17:	e8 84 26 16 00       	call   0x60a4a0
  4a7e1c:	99                   	cdq
  4a7e1d:	b9 10 27 00 00       	mov    ecx,0x2710
  4a7e22:	f7 f9                	idiv   ecx
  4a7e24:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a7e28:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a7e2c:	d8 0d 8c e8 64 00    	fmul   DWORD PTR ds:0x64e88c
  4a7e32:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
  4a7e36:	d8 25 88 e8 64 00    	fsub   DWORD PTR ds:0x64e888
  4a7e3c:	d8 4c 24 30          	fmul   DWORD PTR [esp+0x30]
  4a7e40:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  4a7e44:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  4a7e48:	e8 53 26 16 00       	call   0x60a4a0
  4a7e4d:	99                   	cdq
  4a7e4e:	b9 10 27 00 00       	mov    ecx,0x2710
  4a7e53:	f7 f9                	idiv   ecx
  4a7e55:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a7e59:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a7e5d:	d8 0d 84 e8 64 00    	fmul   DWORD PTR ds:0x64e884
  4a7e63:	d8 25 c8 d9 64 00    	fsub   DWORD PTR ds:0x64d9c8
  4a7e69:	d8 4c 24 2c          	fmul   DWORD PTR [esp+0x2c]
  4a7e6d:	d8 44 24 20          	fadd   DWORD PTR [esp+0x20]
  4a7e71:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  4a7e75:	e8 26 26 16 00       	call   0x60a4a0
  4a7e7a:	99                   	cdq
  4a7e7b:	b9 10 27 00 00       	mov    ecx,0x2710
  4a7e80:	f7 f9                	idiv   ecx
  4a7e82:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a7e86:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a7e8a:	d8 0d 84 e8 64 00    	fmul   DWORD PTR ds:0x64e884
  4a7e90:	d8 25 c8 d9 64 00    	fsub   DWORD PTR ds:0x64d9c8
  4a7e96:	e9 0c 01 00 00       	jmp    0x4a7fa7
  4a7e9b:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4a7e9f:	84 c0                	test   al,al
  4a7ea1:	0f 84 81 00 00 00    	je     0x4a7f28
  4a7ea7:	e8 f4 25 16 00       	call   0x60a4a0
  4a7eac:	99                   	cdq
  4a7ead:	b9 10 27 00 00       	mov    ecx,0x2710
  4a7eb2:	f7 f9                	idiv   ecx
  4a7eb4:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a7eb8:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a7ebc:	d8 0d 84 e8 64 00    	fmul   DWORD PTR ds:0x64e884
  4a7ec2:	d8 25 c8 d9 64 00    	fsub   DWORD PTR ds:0x64d9c8
  4a7ec8:	d8 4c 24 30          	fmul   DWORD PTR [esp+0x30]
  4a7ecc:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  4a7ed0:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  4a7ed4:	e8 c7 25 16 00       	call   0x60a4a0
  4a7ed9:	99                   	cdq
  4a7eda:	b9 10 27 00 00       	mov    ecx,0x2710
  4a7edf:	f7 f9                	idiv   ecx
  4a7ee1:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a7ee5:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a7ee9:	d8 0d 8c e8 64 00    	fmul   DWORD PTR ds:0x64e88c
  4a7eef:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
  4a7ef3:	d8 25 88 e8 64 00    	fsub   DWORD PTR ds:0x64e888
  4a7ef9:	d8 4c 24 2c          	fmul   DWORD PTR [esp+0x2c]
  4a7efd:	d8 44 24 20          	fadd   DWORD PTR [esp+0x20]
  4a7f01:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  4a7f05:	e8 96 25 16 00       	call   0x60a4a0
  4a7f0a:	99                   	cdq
  4a7f0b:	b9 10 27 00 00       	mov    ecx,0x2710
  4a7f10:	f7 f9                	idiv   ecx
  4a7f12:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a7f16:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a7f1a:	d8 0d 84 e8 64 00    	fmul   DWORD PTR ds:0x64e884
  4a7f20:	d8 25 c8 d9 64 00    	fsub   DWORD PTR ds:0x64d9c8
  4a7f26:	eb 7f                	jmp    0x4a7fa7
  4a7f28:	e8 73 25 16 00       	call   0x60a4a0
  4a7f2d:	99                   	cdq
  4a7f2e:	b9 10 27 00 00       	mov    ecx,0x2710
  4a7f33:	f7 f9                	idiv   ecx
  4a7f35:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a7f39:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a7f3d:	d8 0d 84 e8 64 00    	fmul   DWORD PTR ds:0x64e884
  4a7f43:	d8 25 c8 d9 64 00    	fsub   DWORD PTR ds:0x64d9c8
  4a7f49:	d8 4c 24 30          	fmul   DWORD PTR [esp+0x30]
  4a7f4d:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  4a7f51:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  4a7f55:	e8 46 25 16 00       	call   0x60a4a0
  4a7f5a:	99                   	cdq
  4a7f5b:	b9 10 27 00 00       	mov    ecx,0x2710
  4a7f60:	f7 f9                	idiv   ecx
  4a7f62:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a7f66:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a7f6a:	d8 0d 84 e8 64 00    	fmul   DWORD PTR ds:0x64e884
  4a7f70:	d8 25 c8 d9 64 00    	fsub   DWORD PTR ds:0x64d9c8
  4a7f76:	d8 4c 24 2c          	fmul   DWORD PTR [esp+0x2c]
  4a7f7a:	d8 44 24 20          	fadd   DWORD PTR [esp+0x20]
  4a7f7e:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  4a7f82:	e8 19 25 16 00       	call   0x60a4a0
  4a7f87:	99                   	cdq
  4a7f88:	b9 10 27 00 00       	mov    ecx,0x2710
  4a7f8d:	f7 f9                	idiv   ecx
  4a7f8f:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a7f93:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a7f97:	d8 0d 8c e8 64 00    	fmul   DWORD PTR ds:0x64e88c
  4a7f9d:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
  4a7fa1:	d8 25 88 e8 64 00    	fsub   DWORD PTR ds:0x64e888
  4a7fa7:	d8 4c 24 3c          	fmul   DWORD PTR [esp+0x3c]
  4a7fab:	68 94 01 00 00       	push   0x194
  4a7fb0:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  4a7fb4:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  4a7fb8:	e8 f8 20 16 00       	call   0x60a0b5
  4a7fbd:	83 c4 04             	add    esp,0x4
  4a7fc0:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  4a7fc4:	85 c0                	test   eax,eax
  4a7fc6:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x2
  4a7fcd:	02 
  4a7fce:	74 0b                	je     0x4a7fdb
  4a7fd0:	8b c8                	mov    ecx,eax
  4a7fd2:	e8 29 55 0e 00       	call   0x58d500
  4a7fd7:	8b e8                	mov    ebp,eax
  4a7fd9:	eb 02                	jmp    0x4a7fdd
  4a7fdb:	33 ed                	xor    ebp,ebp
  4a7fdd:	6a 01                	push   0x1
  4a7fdf:	8b cd                	mov    ecx,ebp
  4a7fe1:	c6 84 24 6c 01 00 00 	mov    BYTE PTR [esp+0x16c],0x0
  4a7fe8:	00 
  4a7fe9:	e8 62 a3 05 00       	call   0x502350
  4a7fee:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  4a7ff1:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  4a7ff5:	50                   	push   eax
  4a7ff6:	8b cd                	mov    ecx,ebp
  4a7ff8:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
  4a7ffb:	8b 8b b4 00 00 00    	mov    ecx,DWORD PTR [ebx+0xb4]
  4a8001:	89 8d 84 01 00 00    	mov    DWORD PTR [ebp+0x184],ecx
  4a8007:	d9 83 b0 00 00 00    	fld    DWORD PTR [ebx+0xb0]
  4a800d:	d8 0d 80 e8 64 00    	fmul   DWORD PTR ds:0x64e880
  4a8013:	d9 9d 80 01 00 00    	fstp   DWORD PTR [ebp+0x180]
  4a8019:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  4a801d:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  4a8023:	e8 f8 2a 16 00       	call   0x60ab20
  4a8028:	8b f0                	mov    esi,eax
  4a802a:	83 fe ff             	cmp    esi,0xffffffff
  4a802d:	0f 84 81 00 00 00    	je     0x4a80b4
  4a8033:	85 f6                	test   esi,esi
  4a8035:	7d 7d                	jge    0x4a80b4
  4a8037:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4a803b:	6a 00                	push   0x0
  4a803d:	8d 8c 24 28 01 00 00 	lea    ecx,[esp+0x128]
  4a8044:	88 94 24 28 01 00 00 	mov    BYTE PTR [esp+0x128],dl
  4a804b:	e8 50 c0 f5 ff       	call   0x4040a0
  4a8050:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4a8055:	83 c9 ff             	or     ecx,0xffffffff
  4a8058:	33 c0                	xor    eax,eax
  4a805a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a805c:	f7 d1                	not    ecx
  4a805e:	49                   	dec    ecx
  4a805f:	51                   	push   ecx
  4a8060:	68 70 3f 6b 00       	push   0x6b3f70
  4a8065:	8d 8c 24 2c 01 00 00 	lea    ecx,[esp+0x12c]
  4a806c:	e8 7f c0 f5 ff       	call   0x4040f0
  4a8071:	8d 84 24 24 01 00 00 	lea    eax,[esp+0x124]
  4a8078:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x3
  4a807f:	03 
  4a8080:	50                   	push   eax
  4a8081:	6a 56                	push   0x56
  4a8083:	68 c8 d4 68 00       	push   0x68d4c8
  4a8088:	68 90 d4 68 00       	push   0x68d490
  4a808d:	e8 5e 87 0f 00       	call   0x5a07f0
  4a8092:	ff d0                	call   eax
  4a8094:	83 c4 10             	add    esp,0x10
  4a8097:	8d 8c 24 24 01 00 00 	lea    ecx,[esp+0x124]
  4a809e:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x0
  4a80a5:	00 
  4a80a6:	6a 01                	push   0x1
  4a80a8:	e8 f3 bf f5 ff       	call   0x4040a0
  4a80ad:	8b bc 24 70 01 00 00 	mov    edi,DWORD PTR [esp+0x170]
  4a80b4:	89 b5 b0 00 00 00    	mov    DWORD PTR [ebp+0xb0],esi
  4a80ba:	c7 85 b4 00 00 00 ff 	mov    DWORD PTR [ebp+0xb4],0xffffffff
  4a80c1:	ff ff ff 
  4a80c4:	c7 85 b8 00 00 00 00 	mov    DWORD PTR [ebp+0xb8],0x3f800000
  4a80cb:	00 80 3f 
  4a80ce:	c6 85 bc 00 00 00 01 	mov    BYTE PTR [ebp+0xbc],0x1
  4a80d5:	8a 83 bc 00 00 00    	mov    al,BYTE PTR [ebx+0xbc]
  4a80db:	88 85 74 01 00 00    	mov    BYTE PTR [ebp+0x174],al
  4a80e1:	8a 83 c8 00 00 00    	mov    al,BYTE PTR [ebx+0xc8]
  4a80e7:	88 85 75 01 00 00    	mov    BYTE PTR [ebp+0x175],al
  4a80ed:	33 c0                	xor    eax,eax
  4a80ef:	8a 83 c9 00 00 00    	mov    al,BYTE PTR [ebx+0xc9]
  4a80f5:	40                   	inc    eax
  4a80f6:	89 85 7c 01 00 00    	mov    DWORD PTR [ebp+0x17c],eax
  4a80fc:	8b 83 cc 00 00 00    	mov    eax,DWORD PTR [ebx+0xcc]
  4a8102:	85 c0                	test   eax,eax
  4a8104:	0f 84 c8 00 00 00    	je     0x4a81d2
  4a810a:	48                   	dec    eax
  4a810b:	0f 84 a6 00 00 00    	je     0x4a81b7
  4a8111:	48                   	dec    eax
  4a8112:	0f 84 8f 01 00 00    	je     0x4a82a7
  4a8118:	48                   	dec    eax
  4a8119:	0f 84 7e 01 00 00    	je     0x4a829d
  4a811f:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4a8123:	6a 00                	push   0x0
  4a8125:	88 4c 24 4c          	mov    BYTE PTR [esp+0x4c],cl
  4a8129:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4a812d:	e8 6e bf f5 ff       	call   0x4040a0
  4a8132:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4a8137:	83 c9 ff             	or     ecx,0xffffffff
  4a813a:	33 c0                	xor    eax,eax
  4a813c:	6a 01                	push   0x1
  4a813e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a8140:	f7 d1                	not    ecx
  4a8142:	49                   	dec    ecx
  4a8143:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  4a8147:	51                   	push   ecx
  4a8148:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4a814c:	e8 ef 97 f5 ff       	call   0x401940
  4a8151:	84 c0                	test   al,al
  4a8153:	74 27                	je     0x4a817c
  4a8155:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4a8159:	8b 7c 24 4c          	mov    edi,DWORD PTR [esp+0x4c]
  4a815d:	8b c8                	mov    ecx,eax
  4a815f:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  4a8164:	8b d1                	mov    edx,ecx
  4a8166:	50                   	push   eax
  4a8167:	c1 e9 02             	shr    ecx,0x2
  4a816a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4a816c:	8b ca                	mov    ecx,edx
  4a816e:	83 e1 03             	and    ecx,0x3
  4a8171:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4a8173:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4a8177:	e8 14 c0 f5 ff       	call   0x404190
  4a817c:	8d 44 24 48          	lea    eax,[esp+0x48]
  4a8180:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x4
  4a8187:	04 
  4a8188:	50                   	push   eax
  4a8189:	68 ea 00 00 00       	push   0xea
  4a818e:	68 74 5d 69 00       	push   0x695d74
  4a8193:	68 d0 d2 68 00       	push   0x68d2d0
  4a8198:	e8 53 86 0f 00       	call   0x5a07f0
  4a819d:	ff d0                	call   eax
  4a819f:	83 c4 10             	add    esp,0x10
  4a81a2:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4a81a6:	8b f0                	mov    esi,eax
  4a81a8:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x0
  4a81af:	00 
  4a81b0:	6a 01                	push   0x1
  4a81b2:	e8 e9 be f5 ff       	call   0x4040a0
  4a81b7:	b8 b8 8f 6b 00       	mov    eax,0x6b8fb8
  4a81bc:	8b 8b d0 00 00 00    	mov    ecx,DWORD PTR [ebx+0xd0]
  4a81c2:	51                   	push   ecx
  4a81c3:	50                   	push   eax
  4a81c4:	8b cd                	mov    ecx,ebp
  4a81c6:	e8 e5 6c 0e 00       	call   0x58eeb0
  4a81cb:	8b bc 24 70 01 00 00 	mov    edi,DWORD PTR [esp+0x170]
  4a81d2:	8b 83 c0 00 00 00    	mov    eax,DWORD PTR [ebx+0xc0]
  4a81d8:	85 c0                	test   eax,eax
  4a81da:	0f 84 05 01 00 00    	je     0x4a82e5
  4a81e0:	48                   	dec    eax
  4a81e1:	0f 84 df 00 00 00    	je     0x4a82c6
  4a81e7:	48                   	dec    eax
  4a81e8:	0f 84 a1 01 00 00    	je     0x4a838f
  4a81ee:	48                   	dec    eax
  4a81ef:	0f 84 90 01 00 00    	je     0x4a8385
  4a81f5:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4a81f9:	33 f6                	xor    esi,esi
  4a81fb:	56                   	push   esi
  4a81fc:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4a8200:	88 54 24 5c          	mov    BYTE PTR [esp+0x5c],dl
  4a8204:	e8 97 be f5 ff       	call   0x4040a0
  4a8209:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4a820e:	83 c9 ff             	or     ecx,0xffffffff
  4a8211:	33 c0                	xor    eax,eax
  4a8213:	6a 01                	push   0x1
  4a8215:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a8217:	f7 d1                	not    ecx
  4a8219:	49                   	dec    ecx
  4a821a:	8b d9                	mov    ebx,ecx
  4a821c:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4a8220:	53                   	push   ebx
  4a8221:	e8 1a 97 f5 ff       	call   0x401940
  4a8226:	84 c0                	test   al,al
  4a8228:	74 27                	je     0x4a8251
  4a822a:	8b 7c 24 5c          	mov    edi,DWORD PTR [esp+0x5c]
  4a822e:	8b cb                	mov    ecx,ebx
  4a8230:	8b c1                	mov    eax,ecx
  4a8232:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  4a8237:	c1 e9 02             	shr    ecx,0x2
  4a823a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4a823c:	8b c8                	mov    ecx,eax
  4a823e:	83 e1 03             	and    ecx,0x3
  4a8241:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4a8243:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
  4a8247:	89 5c 24 60          	mov    DWORD PTR [esp+0x60],ebx
  4a824b:	33 f6                	xor    esi,esi
  4a824d:	c6 04 19 00          	mov    BYTE PTR [ecx+ebx*1],0x0
  4a8251:	8d 54 24 58          	lea    edx,[esp+0x58]
  4a8255:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x5
  4a825c:	05 
  4a825d:	52                   	push   edx
  4a825e:	68 de 00 00 00       	push   0xde
  4a8263:	68 74 5d 69 00       	push   0x695d74
  4a8268:	68 d0 d2 68 00       	push   0x68d2d0
  4a826d:	e8 7e 85 0f 00       	call   0x5a07f0
  4a8272:	ff d0                	call   eax
  4a8274:	8b f8                	mov    edi,eax
  4a8276:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
  4a827a:	83 c4 10             	add    esp,0x10
  4a827d:	3b c6                	cmp    eax,esi
  4a827f:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x0
  4a8286:	00 
  4a8287:	74 31                	je     0x4a82ba
  4a8289:	8d 48 ff             	lea    ecx,[eax-0x1]
  4a828c:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4a828f:	84 c0                	test   al,al
  4a8291:	74 1e                	je     0x4a82b1
  4a8293:	3c ff                	cmp    al,0xff
  4a8295:	74 1a                	je     0x4a82b1
  4a8297:	fe c8                	dec    al
  4a8299:	88 01                	mov    BYTE PTR [ecx],al
  4a829b:	eb 1d                	jmp    0x4a82ba
  4a829d:	b8 68 8f 6b 00       	mov    eax,0x6b8f68
  4a82a2:	e9 15 ff ff ff       	jmp    0x4a81bc
  4a82a7:	b8 90 8f 6b 00       	mov    eax,0x6b8f90
  4a82ac:	e9 0b ff ff ff       	jmp    0x4a81bc
  4a82b1:	51                   	push   ecx
  4a82b2:	e8 39 63 15 00       	call   0x5fe5f0
  4a82b7:	83 c4 04             	add    esp,0x4
  4a82ba:	89 74 24 5c          	mov    DWORD PTR [esp+0x5c],esi
  4a82be:	89 74 24 60          	mov    DWORD PTR [esp+0x60],esi
  4a82c2:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
  4a82c6:	b8 30 90 6b 00       	mov    eax,0x6b9030
  4a82cb:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
  4a82cf:	8b 8b c4 00 00 00    	mov    ecx,DWORD PTR [ebx+0xc4]
  4a82d5:	51                   	push   ecx
  4a82d6:	50                   	push   eax
  4a82d7:	8b cd                	mov    ecx,ebp
  4a82d9:	e8 d2 6b 0e 00       	call   0x58eeb0
  4a82de:	8b bc 24 70 01 00 00 	mov    edi,DWORD PTR [esp+0x170]
  4a82e5:	8d 54 24 44          	lea    edx,[esp+0x44]
  4a82e9:	8b cf                	mov    ecx,edi
  4a82eb:	52                   	push   edx
  4a82ec:	e8 ef bf f5 ff       	call   0x4042e0
  4a82f1:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  4a82f5:	8b 08                	mov    ecx,DWORD PTR [eax]
  4a82f7:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x6
  4a82fe:	06 
  4a82ff:	85 c9                	test   ecx,ecx
  4a8301:	0f 85 ab 00 00 00    	jne    0x4a83b2
  4a8307:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4a830b:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4a8310:	88 44 24 68          	mov    BYTE PTR [esp+0x68],al
  4a8314:	83 c9 ff             	or     ecx,0xffffffff
  4a8317:	33 c0                	xor    eax,eax
  4a8319:	33 f6                	xor    esi,esi
  4a831b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a831d:	f7 d1                	not    ecx
  4a831f:	49                   	dec    ecx
  4a8320:	89 74 24 6c          	mov    DWORD PTR [esp+0x6c],esi
  4a8324:	51                   	push   ecx
  4a8325:	68 70 3f 6b 00       	push   0x6b3f70
  4a832a:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  4a832e:	89 74 24 78          	mov    DWORD PTR [esp+0x78],esi
  4a8332:	89 74 24 7c          	mov    DWORD PTR [esp+0x7c],esi
  4a8336:	e8 b5 bd f5 ff       	call   0x4040f0
  4a833b:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4a833f:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x7
  4a8346:	07 
  4a8347:	51                   	push   ecx
  4a8348:	68 b6 00 00 00       	push   0xb6
  4a834d:	68 38 d6 68 00       	push   0x68d638
  4a8352:	68 2c d6 68 00       	push   0x68d62c
  4a8357:	e8 94 84 0f 00       	call   0x5a07f0
  4a835c:	ff d0                	call   eax
  4a835e:	8b 44 24 7c          	mov    eax,DWORD PTR [esp+0x7c]
  4a8362:	83 c4 10             	add    esp,0x10
  4a8365:	3b c6                	cmp    eax,esi
  4a8367:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x6
  4a836e:	06 
  4a836f:	74 31                	je     0x4a83a2
  4a8371:	8d 48 ff             	lea    ecx,[eax-0x1]
  4a8374:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4a8377:	84 c0                	test   al,al
  4a8379:	74 1e                	je     0x4a8399
  4a837b:	3c ff                	cmp    al,0xff
  4a837d:	74 1a                	je     0x4a8399
  4a837f:	fe c8                	dec    al
  4a8381:	88 01                	mov    BYTE PTR [ecx],al
  4a8383:	eb 1d                	jmp    0x4a83a2
  4a8385:	b8 e0 8f 6b 00       	mov    eax,0x6b8fe0
  4a838a:	e9 3c ff ff ff       	jmp    0x4a82cb
  4a838f:	b8 08 90 6b 00       	mov    eax,0x6b9008
  4a8394:	e9 32 ff ff ff       	jmp    0x4a82cb
  4a8399:	51                   	push   ecx
  4a839a:	e8 51 62 15 00       	call   0x5fe5f0
  4a839f:	83 c4 04             	add    esp,0x4
  4a83a2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4a83a6:	89 74 24 6c          	mov    DWORD PTR [esp+0x6c],esi
  4a83aa:	89 74 24 70          	mov    DWORD PTR [esp+0x70],esi
  4a83ae:	89 74 24 74          	mov    DWORD PTR [esp+0x74],esi
  4a83b2:	8b 08                	mov    ecx,DWORD PTR [eax]
  4a83b4:	55                   	push   ebp
  4a83b5:	e8 06 be 04 00       	call   0x4f41c0
  4a83ba:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  4a83be:	c6 84 24 68 01 00 00 	mov    BYTE PTR [esp+0x168],0x0
  4a83c5:	00 
  4a83c6:	85 c0                	test   eax,eax
  4a83c8:	74 20                	je     0x4a83ea
  4a83ca:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4a83cd:	8b c8                	mov    ecx,eax
  4a83cf:	83 c0 14             	add    eax,0x14
  4a83d2:	4e                   	dec    esi
  4a83d3:	8b d6                	mov    edx,esi
  4a83d5:	85 d2                	test   edx,edx
  4a83d7:	89 30                	mov    DWORD PTR [eax],esi
  4a83d9:	75 07                	jne    0x4a83e2
  4a83db:	6a 00                	push   0x0
  4a83dd:	e8 de 3b 10 00       	call   0x5abfc0
  4a83e2:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
  4a83e9:	00 
  4a83ea:	e8 b1 20 16 00       	call   0x60a4a0
  4a83ef:	99                   	cdq
  4a83f0:	b9 10 27 00 00       	mov    ecx,0x2710
  4a83f5:	f7 f9                	idiv   ecx
  4a83f7:	ff 44 24 34          	inc    DWORD PTR [esp+0x34]
  4a83fb:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4a83ff:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4a8403:	d8 0d 7c e8 64 00    	fmul   DWORD PTR ds:0x64e87c
  4a8409:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  4a840d:	d8 05 70 d6 64 00    	fadd   DWORD PTR ds:0x64d670
  4a8413:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  4a8417:	db 44 24 34          	fild   DWORD PTR [esp+0x34]
  4a841b:	d8 9b b8 00 00 00    	fcomp  DWORD PTR [ebx+0xb8]
  4a8421:	df e0                	fnstsw ax
  4a8423:	f6 c4 01             	test   ah,0x1
  4a8426:	0f 85 27 f9 ff ff    	jne    0x4a7d53
  4a842c:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  4a8433:	c7 84 24 68 01 00 00 	mov    DWORD PTR [esp+0x168],0xffffffff
  4a843a:	ff ff ff ff 
  4a843e:	e8 2d 63 10 00       	call   0x5ae770
  4a8443:	8b 8c 24 60 01 00 00 	mov    ecx,DWORD PTR [esp+0x160]
  4a844a:	5f                   	pop    edi
  4a844b:	5e                   	pop    esi
  4a844c:	5d                   	pop    ebp
  4a844d:	5b                   	pop    ebx
  4a844e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4a8455:	81 c4 5c 01 00 00    	add    esp,0x15c
  4a845b:	c3                   	ret
  4a845c:	90                   	nop
  4a845d:	90                   	nop
  4a845e:	90                   	nop
  4a845f:	90                   	nop
