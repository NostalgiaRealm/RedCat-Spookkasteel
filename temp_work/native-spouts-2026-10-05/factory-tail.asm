  467cc2:	e8 79 9c f9 ff       	call   0x401940
  467cc7:	84 c0                	test   al,al
  467cc9:	74 2a                	je     0x467cf5
  467ccb:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
  467cd2:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  467cd6:	8b c8                	mov    ecx,eax
  467cd8:	be d4 29 69 00       	mov    esi,0x6929d4
  467cdd:	8b d1                	mov    edx,ecx
  467cdf:	50                   	push   eax
  467ce0:	c1 e9 02             	shr    ecx,0x2
  467ce3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  467ce5:	8b ca                	mov    ecx,edx
  467ce7:	83 e1 03             	and    ecx,0x3
  467cea:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  467cec:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467cf0:	e8 9b c4 f9 ff       	call   0x404190
  467cf5:	8d 44 24 20          	lea    eax,[esp+0x20]
  467cf9:	8b cb                	mov    ecx,ebx
  467cfb:	50                   	push   eax
  467cfc:	c6 44 24 7c 17       	mov    BYTE PTR [esp+0x7c],0x17
  467d01:	e8 9a b8 09 00       	call   0x5035a0
  467d06:	6a 01                	push   0x1
  467d08:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467d0c:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467d11:	e8 8a c3 f9 ff       	call   0x4040a0
  467d16:	c7 45 60 00 00 a0 40 	mov    DWORD PTR [ebp+0x60],0x40a00000
  467d1d:	c7 45 64 00 00 20 41 	mov    DWORD PTR [ebp+0x64],0x41200000
  467d24:	d9 45 74             	fld    DWORD PTR [ebp+0x74]
  467d27:	d8 5d 70             	fcomp  DWORD PTR [ebp+0x70]
  467d2a:	df e0                	fnstsw ax
  467d2c:	f6 c4 01             	test   ah,0x1
  467d2f:	75 44                	jne    0x467d75
  467d31:	d9 45 70             	fld    DWORD PTR [ebp+0x70]
  467d34:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467d3a:	df e0                	fnstsw ax
  467d3c:	f6 c4 01             	test   ah,0x1
  467d3f:	75 34                	jne    0x467d75
  467d41:	d9 45 74             	fld    DWORD PTR [ebp+0x74]
  467d44:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467d4a:	df e0                	fnstsw ax
  467d4c:	f6 c4 01             	test   ah,0x1
  467d4f:	75 24                	jne    0x467d75
  467d51:	d9 45 70             	fld    DWORD PTR [ebp+0x70]
  467d54:	d8 1d 38 da 64 00    	fcomp  DWORD PTR ds:0x64da38
  467d5a:	df e0                	fnstsw ax
  467d5c:	f6 c4 01             	test   ah,0x1
  467d5f:	74 14                	je     0x467d75
  467d61:	d9 45 74             	fld    DWORD PTR [ebp+0x74]
  467d64:	d8 1d 38 da 64 00    	fcomp  DWORD PTR ds:0x64da38
  467d6a:	df e0                	fnstsw ax
  467d6c:	f6 c4 01             	test   ah,0x1
  467d6f:	0f 85 95 00 00 00    	jne    0x467e0a
  467d75:	8a 8c 24 80 00 00 00 	mov    cl,BYTE PTR [esp+0x80]
  467d7c:	6a 00                	push   0x0
  467d7e:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  467d82:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467d86:	e8 15 c3 f9 ff       	call   0x4040a0
  467d8b:	bf 90 29 69 00       	mov    edi,0x692990
  467d90:	83 c9 ff             	or     ecx,0xffffffff
  467d93:	33 c0                	xor    eax,eax
  467d95:	6a 01                	push   0x1
  467d97:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467d99:	f7 d1                	not    ecx
  467d9b:	49                   	dec    ecx
  467d9c:	89 8c 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],ecx
  467da3:	51                   	push   ecx
  467da4:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  467da8:	e8 93 9b f9 ff       	call   0x401940
  467dad:	84 c0                	test   al,al
  467daf:	74 2a                	je     0x467ddb
  467db1:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
  467db8:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  467dbc:	8b c8                	mov    ecx,eax
  467dbe:	be 90 29 69 00       	mov    esi,0x692990
  467dc3:	8b d1                	mov    edx,ecx
  467dc5:	50                   	push   eax
  467dc6:	c1 e9 02             	shr    ecx,0x2
  467dc9:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  467dcb:	8b ca                	mov    ecx,edx
  467dcd:	83 e1 03             	and    ecx,0x3
  467dd0:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  467dd2:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467dd6:	e8 b5 c3 f9 ff       	call   0x404190
  467ddb:	8d 44 24 20          	lea    eax,[esp+0x20]
  467ddf:	8b cb                	mov    ecx,ebx
  467de1:	50                   	push   eax
  467de2:	c6 44 24 7c 18       	mov    BYTE PTR [esp+0x7c],0x18
  467de7:	e8 b4 b7 09 00       	call   0x5035a0
  467dec:	6a 01                	push   0x1
  467dee:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467df2:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467df7:	e8 a4 c2 f9 ff       	call   0x4040a0
  467dfc:	c7 45 70 00 00 00 00 	mov    DWORD PTR [ebp+0x70],0x0
  467e03:	c7 45 74 00 00 f0 41 	mov    DWORD PTR [ebp+0x74],0x41f00000
  467e0a:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  467e0e:	33 f6                	xor    esi,esi
