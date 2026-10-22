  404c70:	56                   	push   esi
  404c71:	8b f1                	mov    esi,ecx
  404c73:	6a 00                	push   0x0
  404c75:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  404c78:	8b 01                	mov    eax,DWORD PTR [ecx]
  404c7a:	ff 90 88 00 00 00    	call   DWORD PTR [eax+0x88]
  404c80:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  404c83:	84 c0                	test   al,al
  404c85:	74 20                	je     0x404ca7
  404c87:	8b 11                	mov    edx,DWORD PTR [ecx]
  404c89:	68 9a 99 d9 3f       	push   0x3fd9999a
  404c8e:	6a 00                	push   0x0
  404c90:	6a 00                	push   0x0
  404c92:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  404c98:	6a 00                	push   0x0
  404c9a:	6a 00                	push   0x0
  404c9c:	8b ce                	mov    ecx,esi
  404c9e:	e8 6d dd ff ff       	call   0x402a10
  404ca3:	5e                   	pop    esi
  404ca4:	c2 04 00             	ret    0x4
  404ca7:	8b 01                	mov    eax,DWORD PTR [ecx]
  404ca9:	68 ff ff 7f 7f       	push   0x7f7fffff
  404cae:	6a 01                	push   0x1
  404cb0:	6a 01                	push   0x1
  404cb2:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  404cb8:	6a 00                	push   0x0
  404cba:	6a 01                	push   0x1
  404cbc:	8b ce                	mov    ecx,esi
  404cbe:	e8 4d dd ff ff       	call   0x402a10
  404cc3:	5e                   	pop    esi
  404cc4:	c2 04 00             	ret    0x4
  404cc7:	90                   	nop
  404cc8:	90                   	nop
  404cc9:	90                   	nop
  404cca:	90                   	nop
  404ccb:	90                   	nop
  404ccc:	90                   	nop
  404ccd:	90                   	nop
  404cce:	90                   	nop
  404ccf:	90                   	nop
  404cd0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  404cd6:	6a ff                	push   0xffffffff
  404cd8:	68 b8 fd 61 00       	push   0x61fdb8
  404cdd:	50                   	push   eax
  404cde:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  404ce5:	83 ec 10             	sub    esp,0x10
  404ce8:	53                   	push   ebx
  404ce9:	56                   	push   esi
  404cea:	57                   	push   edi
  404ceb:	8b f1                	mov    esi,ecx
  404ced:	e8 fe df ff ff       	call   0x402cf0
  404cf2:	33 db                	xor    ebx,ebx
  404cf4:	2b c3                	sub    eax,ebx
  404cf6:	0f 84 80 01 00 00    	je     0x404e7c
  404cfc:	48                   	dec    eax
  404cfd:	0f 84 03 01 00 00    	je     0x404e06
  404d03:	48                   	dec    eax
  404d04:	0f 84 c9 00 00 00    	je     0x404dd3
  404d0a:	8a 44 24 30          	mov    al,BYTE PTR [esp+0x30]
  404d0e:	bf 34 d9 68 00       	mov    edi,0x68d934
  404d13:	88 44 24 0c          	mov    BYTE PTR [esp+0xc],al
  404d17:	83 c9 ff             	or     ecx,0xffffffff
  404d1a:	33 c0                	xor    eax,eax
  404d1c:	55                   	push   ebp
  404d1d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  404d1f:	f7 d1                	not    ecx
  404d21:	49                   	dec    ecx
  404d22:	6a 01                	push   0x1
  404d24:	8b e9                	mov    ebp,ecx
  404d26:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  404d2a:	55                   	push   ebp
  404d2b:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  404d2f:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  404d33:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  404d37:	e8 04 cc ff ff       	call   0x401940
  404d3c:	84 c0                	test   al,al
  404d3e:	74 24                	je     0x404d64
  404d40:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  404d44:	8b cd                	mov    ecx,ebp
  404d46:	8b d1                	mov    edx,ecx
  404d48:	be 34 d9 68 00       	mov    esi,0x68d934
  404d4d:	c1 e9 02             	shr    ecx,0x2
  404d50:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  404d52:	8b ca                	mov    ecx,edx
  404d54:	83 e1 03             	and    ecx,0x3
  404d57:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  404d59:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  404d5d:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  404d61:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  404d64:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  404d68:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  404d6c:	51                   	push   ecx
  404d6d:	6a 6c                	push   0x6c
  404d6f:	68 08 d9 68 00       	push   0x68d908
  404d74:	68 d0 d2 68 00       	push   0x68d2d0
  404d79:	e8 72 ba 19 00       	call   0x5a07f0
  404d7e:	ff d0                	call   eax
  404d80:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  404d84:	83 c4 10             	add    esp,0x10
  404d87:	3b c3                	cmp    eax,ebx
  404d89:	5d                   	pop    ebp
  404d8a:	0f 84 09 01 00 00    	je     0x404e99
  404d90:	8d 48 ff             	lea    ecx,[eax-0x1]
  404d93:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  404d96:	3a c3                	cmp    al,bl
  404d98:	74 1c                	je     0x404db6
  404d9a:	3c ff                	cmp    al,0xff
  404d9c:	74 18                	je     0x404db6
  404d9e:	fe c8                	dec    al
  404da0:	5f                   	pop    edi
  404da1:	5e                   	pop    esi
  404da2:	88 01                	mov    BYTE PTR [ecx],al
  404da4:	5b                   	pop    ebx
  404da5:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  404da9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  404db0:	83 c4 1c             	add    esp,0x1c
  404db3:	c2 08 00             	ret    0x8
  404db6:	51                   	push   ecx
  404db7:	e8 34 98 1f 00       	call   0x5fe5f0
  404dbc:	83 c4 04             	add    esp,0x4
  404dbf:	5f                   	pop    edi
  404dc0:	5e                   	pop    esi
  404dc1:	5b                   	pop    ebx
  404dc2:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  404dc6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  404dcd:	83 c4 1c             	add    esp,0x1c
  404dd0:	c2 08 00             	ret    0x8
  404dd3:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  404dd7:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  404ddb:	52                   	push   edx
  404ddc:	50                   	push   eax
  404ddd:	8b ce                	mov    ecx,esi
  404ddf:	e8 9c dc ff ff       	call   0x402a80
  404de4:	8b c8                	mov    ecx,eax
  404de6:	e8 35 df ff ff       	call   0x402d20
  404deb:	8b ce                	mov    ecx,esi
  404ded:	e8 8e dc ff ff       	call   0x402a80
  404df2:	8b c8                	mov    ecx,eax
  404df4:	e8 17 df ff ff       	call   0x402d10
  404df9:	84 c0                	test   al,al
  404dfb:	0f 84 98 00 00 00    	je     0x404e99
  404e01:	e9 89 00 00 00       	jmp    0x404e8f
  404e06:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  404e0a:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  404e0d:	57                   	push   edi
  404e0e:	e8 5d e1 01 00       	call   0x422f70
  404e13:	84 c0                	test   al,al
  404e15:	74 1b                	je     0x404e32
  404e17:	8b 16                	mov    edx,DWORD PTR [esi]
  404e19:	8b ce                	mov    ecx,esi
  404e1b:	ff 52 0c             	call   DWORD PTR [edx+0xc]
  404e1e:	5f                   	pop    edi
  404e1f:	5e                   	pop    esi
  404e20:	5b                   	pop    ebx
  404e21:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  404e25:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  404e2c:	83 c4 1c             	add    esp,0x1c
  404e2f:	c2 08 00             	ret    0x8
  404e32:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  404e35:	57                   	push   edi
  404e36:	e8 f5 e0 01 00       	call   0x422f30
  404e3b:	84 c0                	test   al,al
  404e3d:	75 5a                	jne    0x404e99
  404e3f:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  404e42:	53                   	push   ebx
  404e43:	8b 01                	mov    eax,DWORD PTR [ecx]
  404e45:	ff 90 88 00 00 00    	call   DWORD PTR [eax+0x88]
  404e4b:	84 c0                	test   al,al
  404e4d:	74 12                	je     0x404e61
  404e4f:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  404e52:	68 9a 99 d9 bf       	push   0xbfd9999a
  404e57:	53                   	push   ebx
  404e58:	53                   	push   ebx
  404e59:	8b 11                	mov    edx,DWORD PTR [ecx]
  404e5b:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  404e61:	8b ce                	mov    ecx,esi
  404e63:	e8 98 de ff ff       	call   0x402d00
  404e68:	5f                   	pop    edi
  404e69:	5e                   	pop    esi
  404e6a:	5b                   	pop    ebx
  404e6b:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  404e6f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  404e76:	83 c4 1c             	add    esp,0x1c
  404e79:	c2 08 00             	ret    0x8
  404e7c:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  404e7f:	e8 7c e8 01 00       	call   0x423700
  404e84:	8b c8                	mov    ecx,eax
  404e86:	e8 75 be 09 00       	call   0x4a0d00
  404e8b:	84 c0                	test   al,al
  404e8d:	74 0a                	je     0x404e99
  404e8f:	53                   	push   ebx
  404e90:	6a 01                	push   0x1
  404e92:	8b ce                	mov    ecx,esi
  404e94:	e8 77 db ff ff       	call   0x402a10
  404e99:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  404e9d:	5f                   	pop    edi
  404e9e:	5e                   	pop    esi
  404e9f:	5b                   	pop    ebx
  404ea0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  404ea7:	83 c4 1c             	add    esp,0x1c
  404eaa:	c2 08 00             	ret    0x8
  404ead:	90                   	nop
  404eae:	90                   	nop
  404eaf:	90                   	nop
  404eb0:	56                   	push   esi
  404eb1:	57                   	push   edi
  404eb2:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  404eb6:	8b f1                	mov    esi,ecx
  404eb8:	57                   	push   edi
  404eb9:	e8 82 58 00 00       	call   0x40a740
  404ebe:	89 7e 30             	mov    DWORD PTR [esi+0x30],edi
  404ec1:	c7 06 48 a5 64 00    	mov    DWORD PTR [esi],0x64a548
  404ec7:	8b c6                	mov    eax,esi
  404ec9:	5f                   	pop    edi
  404eca:	5e                   	pop    esi
  404ecb:	c2 04 00             	ret    0x4
  404ece:	90                   	nop
  404ecf:	90                   	nop
  404ed0:	8b 01                	mov    eax,DWORD PTR [ecx]
  404ed2:	ff 60 24             	jmp    DWORD PTR [eax+0x24]
  404ed5:	90                   	nop
  404ed6:	90                   	nop
  404ed7:	90                   	nop
  404ed8:	90                   	nop
  404ed9:	90                   	nop
  404eda:	90                   	nop
  404edb:	90                   	nop
  404edc:	90                   	nop
  404edd:	90                   	nop
  404ede:	90                   	nop
  404edf:	90                   	nop
  404ee0:	6a ff                	push   0xffffffff
  404ee2:	68 e3 fd 61 00       	push   0x61fde3
  404ee7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  404eed:	50                   	push   eax
  404eee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  404ef5:	51                   	push   ecx
  404ef6:	53                   	push   ebx
  404ef7:	56                   	push   esi
  404ef8:	8b d9                	mov    ebx,ecx
  404efa:	6a 30                	push   0x30
  404efc:	e8 b4 51 20 00       	call   0x60a0b5
  404f01:	8b f0                	mov    esi,eax
  404f03:	83 c4 04             	add    esp,0x4
  404f06:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  404f0a:	85 f6                	test   esi,esi
  404f0c:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  404f13:	00 
  404f14:	74 4a                	je     0x404f60
  404f16:	57                   	push   edi
  404f17:	8b 7b 30             	mov    edi,DWORD PTR [ebx+0x30]
  404f1a:	57                   	push   edi
  404f1b:	8b ce                	mov    ecx,esi
  404f1d:	e8 fe 57 00 00       	call   0x40a720
  404f22:	6a 00                	push   0x0
  404f24:	8b cf                	mov    ecx,edi
  404f26:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
  404f2b:	89 7e 2c             	mov    DWORD PTR [esi+0x2c],edi
  404f2e:	c7 06 7c a5 64 00    	mov    DWORD PTR [esi],0x64a57c
  404f34:	e8 57 94 00 00       	call   0x40e390
  404f39:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  404f3c:	e8 bf e7 01 00       	call   0x423700
  404f41:	8b c8                	mov    ecx,eax
  404f43:	e8 f8 b6 09 00       	call   0x4a0640
  404f48:	84 c0                	test   al,al
  404f4a:	5f                   	pop    edi
  404f4b:	74 15                	je     0x404f62
  404f4d:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  404f50:	6a 00                	push   0x0
  404f52:	e8 a9 e7 01 00       	call   0x423700
  404f57:	8b c8                	mov    ecx,eax
  404f59:	e8 52 bc 09 00       	call   0x4a0bb0
  404f5e:	eb 02                	jmp    0x404f62
  404f60:	33 f6                	xor    esi,esi
  404f62:	56                   	push   esi
  404f63:	6a 01                	push   0x1
  404f65:	8b cb                	mov    ecx,ebx
  404f67:	c7 44 24 1c ff ff ff 	mov    DWORD PTR [esp+0x1c],0xffffffff
  404f6e:	ff 
  404f6f:	e8 9c da ff ff       	call   0x402a10
  404f74:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  404f78:	5e                   	pop    esi
  404f79:	5b                   	pop    ebx
  404f7a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  404f81:	83 c4 10             	add    esp,0x10
  404f84:	c3                   	ret
  404f85:	90                   	nop
  404f86:	90                   	nop
  404f87:	90                   	nop
  404f88:	90                   	nop
  404f89:	90                   	nop
  404f8a:	90                   	nop
  404f8b:	90                   	nop
  404f8c:	90                   	nop
  404f8d:	90                   	nop
  404f8e:	90                   	nop
  404f8f:	90                   	nop
  404f90:	6a ff                	push   0xffffffff
  404f92:	68 fb fd 61 00       	push   0x61fdfb
  404f97:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  404f9d:	50                   	push   eax
  404f9e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  404fa5:	51                   	push   ecx
  404fa6:	56                   	push   esi
  404fa7:	8b f1                	mov    esi,ecx
  404fa9:	6a 2c                	push   0x2c
  404fab:	e8 05 51 20 00       	call   0x60a0b5
  404fb0:	83 c4 04             	add    esp,0x4
  404fb3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  404fb7:	85 c0                	test   eax,eax
  404fb9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  404fc0:	00 
  404fc1:	74 0d                	je     0x404fd0
  404fc3:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
  404fc6:	51                   	push   ecx
  404fc7:	8b c8                	mov    ecx,eax
  404fc9:	e8 32 00 00 00       	call   0x405000
  404fce:	eb 02                	jmp    0x404fd2
  404fd0:	33 c0                	xor    eax,eax
  404fd2:	50                   	push   eax
  404fd3:	6a 02                	push   0x2
  404fd5:	8b ce                	mov    ecx,esi
  404fd7:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  404fde:	ff 
  404fdf:	e8 2c da ff ff       	call   0x402a10
  404fe4:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  404fe8:	5e                   	pop    esi
  404fe9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  404ff0:	83 c4 10             	add    esp,0x10
  404ff3:	c3                   	ret
  404ff4:	90                   	nop
  404ff5:	90                   	nop
  404ff6:	90                   	nop
  404ff7:	90                   	nop
  404ff8:	90                   	nop
  404ff9:	90                   	nop
  404ffa:	90                   	nop
  404ffb:	90                   	nop
  404ffc:	90                   	nop
  404ffd:	90                   	nop
  404ffe:	90                   	nop
  404fff:	90                   	nop
  405000:	56                   	push   esi
  405001:	57                   	push   edi
  405002:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405006:	8b f1                	mov    esi,ecx
  405008:	57                   	push   edi
  405009:	e8 42 fc ff ff       	call   0x404c50
  40500e:	89 7e 28             	mov    DWORD PTR [esi+0x28],edi
  405011:	c7 06 8c a5 64 00    	mov    DWORD PTR [esi],0x64a58c
  405017:	8b c6                	mov    eax,esi
  405019:	5f                   	pop    edi
  40501a:	5e                   	pop    esi
  40501b:	c2 04 00             	ret    0x4
  40501e:	90                   	nop
  40501f:	90                   	nop
  405020:	6a ff                	push   0xffffffff
  405022:	68 1b fe 61 00       	push   0x61fe1b
  405027:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40502d:	50                   	push   eax
  40502e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405035:	51                   	push   ecx
  405036:	56                   	push   esi
  405037:	8b f1                	mov    esi,ecx
  405039:	6a 30                	push   0x30
  40503b:	e8 75 50 20 00       	call   0x60a0b5
  405040:	83 c4 04             	add    esp,0x4
  405043:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  405047:	85 c0                	test   eax,eax
  405049:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  405050:	00 
  405051:	74 0d                	je     0x405060
  405053:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405056:	51                   	push   ecx
  405057:	8b c8                	mov    ecx,eax
  405059:	e8 32 00 00 00       	call   0x405090
  40505e:	eb 02                	jmp    0x405062
  405060:	33 c0                	xor    eax,eax
  405062:	50                   	push   eax
  405063:	6a 02                	push   0x2
  405065:	8b ce                	mov    ecx,esi
  405067:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  40506e:	ff 
  40506f:	e8 9c d9 ff ff       	call   0x402a10
  405074:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  405078:	5e                   	pop    esi
  405079:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  405080:	83 c4 10             	add    esp,0x10
  405083:	c3                   	ret
  405084:	90                   	nop
  405085:	90                   	nop
  405086:	90                   	nop
  405087:	90                   	nop
  405088:	90                   	nop
  405089:	90                   	nop
  40508a:	90                   	nop
  40508b:	90                   	nop
  40508c:	90                   	nop
  40508d:	90                   	nop
  40508e:	90                   	nop
  40508f:	90                   	nop
  405090:	56                   	push   esi
  405091:	57                   	push   edi
  405092:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405096:	8b f1                	mov    esi,ecx
  405098:	57                   	push   edi
  405099:	e8 72 5a 00 00       	call   0x40ab10
  40509e:	89 7e 28             	mov    DWORD PTR [esi+0x28],edi
  4050a1:	c6 46 2c 00          	mov    BYTE PTR [esi+0x2c],0x0
  4050a5:	c7 06 a0 a5 64 00    	mov    DWORD PTR [esi],0x64a5a0
  4050ab:	8b c6                	mov    eax,esi
  4050ad:	5f                   	pop    edi
  4050ae:	5e                   	pop    esi
  4050af:	c2 04 00             	ret    0x4
  4050b2:	90                   	nop
  4050b3:	90                   	nop
  4050b4:	90                   	nop
  4050b5:	90                   	nop
  4050b6:	90                   	nop
  4050b7:	90                   	nop
  4050b8:	90                   	nop
  4050b9:	90                   	nop
  4050ba:	90                   	nop
  4050bb:	90                   	nop
  4050bc:	90                   	nop
  4050bd:	90                   	nop
  4050be:	90                   	nop
  4050bf:	90                   	nop
  4050c0:	8b 49 28             	mov    ecx,DWORD PTR [ecx+0x28]
  4050c3:	68 66 66 e6 3f       	push   0x3fe66666
  4050c8:	6a 00                	push   0x0
  4050ca:	6a 06                	push   0x6
  4050cc:	8b 01                	mov    eax,DWORD PTR [ecx]
  4050ce:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  4050d4:	c2 04 00             	ret    0x4
  4050d7:	90                   	nop
  4050d8:	90                   	nop
  4050d9:	90                   	nop
  4050da:	90                   	nop
  4050db:	90                   	nop
  4050dc:	90                   	nop
  4050dd:	90                   	nop
  4050de:	90                   	nop
  4050df:	90                   	nop
  4050e0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  4050e4:	83 ec 30             	sub    esp,0x30
  4050e7:	56                   	push   esi
  4050e8:	8b f1                	mov    esi,ecx
  4050ea:	50                   	push   eax
  4050eb:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  4050ee:	e8 3d de 01 00       	call   0x422f30
  4050f3:	84 c0                	test   al,al
  4050f5:	75 0e                	jne    0x405105
  4050f7:	8b ce                	mov    ecx,esi
  4050f9:	e8 02 dc ff ff       	call   0x402d00
  4050fe:	5e                   	pop    esi
  4050ff:	83 c4 30             	add    esp,0x30
  405102:	c2 08 00             	ret    0x8
  405105:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405108:	e8 f3 e5 01 00       	call   0x423700
  40510d:	8b c8                	mov    ecx,eax
  40510f:	e8 ec bb 09 00       	call   0x4a0d00
  405114:	84 c0                	test   al,al
  405116:	74 1f                	je     0x405137
  405118:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40511b:	c6 46 2c 00          	mov    BYTE PTR [esi+0x2c],0x0
  40511f:	68 66 66 e6 3f       	push   0x3fe66666
  405124:	6a 00                	push   0x0
  405126:	8b 11                	mov    edx,DWORD PTR [ecx]
  405128:	6a 06                	push   0x6
  40512a:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  405130:	5e                   	pop    esi
  405131:	83 c4 30             	add    esp,0x30
  405134:	c2 08 00             	ret    0x8
  405137:	8a 46 2c             	mov    al,BYTE PTR [esi+0x2c]
  40513a:	84 c0                	test   al,al
  40513c:	0f 85 e1 00 00 00    	jne    0x405223
  405142:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405145:	e8 b6 e5 01 00       	call   0x423700
  40514a:	8b c8                	mov    ecx,eax
  40514c:	e8 0f bf 09 00       	call   0x4a1060
  405151:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  405155:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405158:	e8 73 6b 02 00       	call   0x42bcd0
  40515d:	d8 5c 24 3c          	fcomp  DWORD PTR [esp+0x3c]
  405161:	df e0                	fnstsw ax
  405163:	f6 c4 01             	test   ah,0x1
  405166:	0f 84 b7 00 00 00    	je     0x405223
  40516c:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40516f:	e8 8c e5 01 00       	call   0x423700
  405174:	8b c8                	mov    ecx,eax
  405176:	e8 e5 be 09 00       	call   0x4a1060
  40517b:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  40517f:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405182:	e8 59 6b 02 00       	call   0x42bce0
  405187:	d8 5c 24 3c          	fcomp  DWORD PTR [esp+0x3c]
  40518b:	df e0                	fnstsw ax
  40518d:	f6 c4 41             	test   ah,0x41
  405190:	0f 85 8d 00 00 00    	jne    0x405223
  405196:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405199:	8d 44 24 28          	lea    eax,[esp+0x28]
  40519d:	50                   	push   eax
  40519e:	e8 cd 94 00 00       	call   0x40e670
  4051a3:	8b 08                	mov    ecx,DWORD PTR [eax]
  4051a5:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
  4051a9:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  4051ac:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4051af:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
  4051b3:	8d 54 24 28          	lea    edx,[esp+0x28]
  4051b7:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4051ba:	52                   	push   edx
  4051bb:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  4051bf:	8b 01                	mov    eax,DWORD PTR [ecx]
  4051c1:	ff 90 9c 00 00 00    	call   DWORD PTR [eax+0x9c]
  4051c7:	8b c8                	mov    ecx,eax
  4051c9:	e8 b2 6a 09 00       	call   0x49bc80
  4051ce:	8b 08                	mov    ecx,DWORD PTR [eax]
  4051d0:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  4051d4:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4051d8:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4051db:	51                   	push   ecx
  4051dc:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4051e0:	8d 54 24 14          	lea    edx,[esp+0x14]
  4051e4:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4051e7:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  4051eb:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  4051ef:	e8 ec dd 1a 00       	call   0x5b2fe0
  4051f4:	8d 54 24 04          	lea    edx,[esp+0x4]
  4051f8:	8d 4c 24 04          	lea    ecx,[esp+0x4]
  4051fc:	52                   	push   edx
  4051fd:	68 9a 99 99 3e       	push   0x3e99999a
  405202:	8d 54 24 24          	lea    edx,[esp+0x24]
  405206:	e8 15 de 1a 00       	call   0x5b3020
  40520b:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40520e:	8d 54 24 10          	lea    edx,[esp+0x10]
  405212:	52                   	push   edx
  405213:	8d 54 24 08          	lea    edx,[esp+0x8]
  405217:	8b 01                	mov    eax,DWORD PTR [ecx]
  405219:	52                   	push   edx
  40521a:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
  405220:	88 46 2c             	mov    BYTE PTR [esi+0x2c],al
  405223:	5e                   	pop    esi
  405224:	83 c4 30             	add    esp,0x30
  405227:	c2 08 00             	ret    0x8
  40522a:	90                   	nop
  40522b:	90                   	nop
  40522c:	90                   	nop
  40522d:	90                   	nop
  40522e:	90                   	nop
  40522f:	90                   	nop
  405230:	56                   	push   esi
  405231:	57                   	push   edi
  405232:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405236:	8b f1                	mov    esi,ecx
  405238:	57                   	push   edi
  405239:	e8 02 55 00 00       	call   0x40a740
  40523e:	89 7e 30             	mov    DWORD PTR [esi+0x30],edi
  405241:	c7 06 b0 a5 64 00    	mov    DWORD PTR [esi],0x64a5b0
  405247:	8b c6                	mov    eax,esi
  405249:	5f                   	pop    edi
  40524a:	5e                   	pop    esi
  40524b:	c2 04 00             	ret    0x4
  40524e:	90                   	nop
  40524f:	90                   	nop
  405250:	6a ff                	push   0xffffffff
  405252:	68 43 fe 61 00       	push   0x61fe43
  405257:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40525d:	50                   	push   eax
  40525e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405265:	51                   	push   ecx
  405266:	53                   	push   ebx
  405267:	56                   	push   esi
  405268:	8b d9                	mov    ebx,ecx
  40526a:	6a 30                	push   0x30
  40526c:	e8 44 4e 20 00       	call   0x60a0b5
  405271:	8b f0                	mov    esi,eax
  405273:	83 c4 04             	add    esp,0x4
  405276:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  40527a:	85 f6                	test   esi,esi
  40527c:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  405283:	00 
  405284:	74 4a                	je     0x4052d0
  405286:	57                   	push   edi
  405287:	8b 7b 30             	mov    edi,DWORD PTR [ebx+0x30]
  40528a:	57                   	push   edi
  40528b:	8b ce                	mov    ecx,esi
  40528d:	e8 8e 54 00 00       	call   0x40a720
  405292:	6a 00                	push   0x0
  405294:	8b cf                	mov    ecx,edi
  405296:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
  40529b:	89 7e 2c             	mov    DWORD PTR [esi+0x2c],edi
  40529e:	c7 06 e4 a5 64 00    	mov    DWORD PTR [esi],0x64a5e4
  4052a4:	e8 47 72 00 00       	call   0x40c4f0
  4052a9:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  4052ac:	e8 4f e4 01 00       	call   0x423700
  4052b1:	8b c8                	mov    ecx,eax
  4052b3:	e8 88 b3 09 00       	call   0x4a0640
  4052b8:	84 c0                	test   al,al
  4052ba:	5f                   	pop    edi
  4052bb:	74 15                	je     0x4052d2
  4052bd:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  4052c0:	6a 00                	push   0x0
  4052c2:	e8 39 e4 01 00       	call   0x423700
  4052c7:	8b c8                	mov    ecx,eax
  4052c9:	e8 e2 b8 09 00       	call   0x4a0bb0
  4052ce:	eb 02                	jmp    0x4052d2
  4052d0:	33 f6                	xor    esi,esi
  4052d2:	56                   	push   esi
  4052d3:	6a 01                	push   0x1
  4052d5:	8b cb                	mov    ecx,ebx
  4052d7:	c7 44 24 1c ff ff ff 	mov    DWORD PTR [esp+0x1c],0xffffffff
  4052de:	ff 
  4052df:	e8 2c d7 ff ff       	call   0x402a10
  4052e4:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  4052e8:	5e                   	pop    esi
  4052e9:	5b                   	pop    ebx
  4052ea:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4052f1:	83 c4 10             	add    esp,0x10
  4052f4:	c3                   	ret
  4052f5:	90                   	nop
  4052f6:	90                   	nop
  4052f7:	90                   	nop
  4052f8:	90                   	nop
  4052f9:	90                   	nop
  4052fa:	90                   	nop
  4052fb:	90                   	nop
  4052fc:	90                   	nop
  4052fd:	90                   	nop
  4052fe:	90                   	nop
  4052ff:	90                   	nop
  405300:	6a ff                	push   0xffffffff
  405302:	68 5b fe 61 00       	push   0x61fe5b
  405307:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40530d:	50                   	push   eax
  40530e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405315:	51                   	push   ecx
  405316:	56                   	push   esi
  405317:	8b f1                	mov    esi,ecx
  405319:	6a 2c                	push   0x2c
  40531b:	e8 95 4d 20 00       	call   0x60a0b5
  405320:	83 c4 04             	add    esp,0x4
  405323:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  405327:	85 c0                	test   eax,eax
  405329:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  405330:	00 
  405331:	74 0d                	je     0x405340
  405333:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
  405336:	51                   	push   ecx
  405337:	8b c8                	mov    ecx,eax
  405339:	e8 32 00 00 00       	call   0x405370
  40533e:	eb 02                	jmp    0x405342
  405340:	33 c0                	xor    eax,eax
  405342:	50                   	push   eax
  405343:	6a 02                	push   0x2
  405345:	8b ce                	mov    ecx,esi
  405347:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  40534e:	ff 
  40534f:	e8 bc d6 ff ff       	call   0x402a10
  405354:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  405358:	5e                   	pop    esi
  405359:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  405360:	83 c4 10             	add    esp,0x10
  405363:	c3                   	ret
  405364:	90                   	nop
  405365:	90                   	nop
  405366:	90                   	nop
  405367:	90                   	nop
  405368:	90                   	nop
  405369:	90                   	nop
  40536a:	90                   	nop
  40536b:	90                   	nop
  40536c:	90                   	nop
  40536d:	90                   	nop
  40536e:	90                   	nop
  40536f:	90                   	nop
  405370:	56                   	push   esi
  405371:	57                   	push   edi
  405372:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405376:	8b f1                	mov    esi,ecx
  405378:	57                   	push   edi
  405379:	e8 d2 f8 ff ff       	call   0x404c50
  40537e:	89 7e 28             	mov    DWORD PTR [esi+0x28],edi
  405381:	c7 06 f4 a5 64 00    	mov    DWORD PTR [esi],0x64a5f4
  405387:	8b c6                	mov    eax,esi
  405389:	5f                   	pop    edi
  40538a:	5e                   	pop    esi
  40538b:	c2 04 00             	ret    0x4
  40538e:	90                   	nop
  40538f:	90                   	nop
  405390:	6a ff                	push   0xffffffff
  405392:	68 7b fe 61 00       	push   0x61fe7b
  405397:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40539d:	50                   	push   eax
  40539e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4053a5:	51                   	push   ecx
  4053a6:	56                   	push   esi
  4053a7:	8b f1                	mov    esi,ecx
  4053a9:	6a 2c                	push   0x2c
  4053ab:	e8 05 4d 20 00       	call   0x60a0b5
  4053b0:	83 c4 04             	add    esp,0x4
  4053b3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  4053b7:	85 c0                	test   eax,eax
  4053b9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  4053c0:	00 
  4053c1:	74 0d                	je     0x4053d0
  4053c3:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  4053c6:	51                   	push   ecx
  4053c7:	8b c8                	mov    ecx,eax
  4053c9:	e8 02 4e 00 00       	call   0x40a1d0
  4053ce:	eb 02                	jmp    0x4053d2
  4053d0:	33 c0                	xor    eax,eax
  4053d2:	50                   	push   eax
  4053d3:	6a 02                	push   0x2
  4053d5:	8b ce                	mov    ecx,esi
  4053d7:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  4053de:	ff 
  4053df:	e8 2c d6 ff ff       	call   0x402a10
  4053e4:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4053e8:	5e                   	pop    esi
  4053e9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4053f0:	83 c4 10             	add    esp,0x10
  4053f3:	c3                   	ret
  4053f4:	90                   	nop
  4053f5:	90                   	nop
  4053f6:	90                   	nop
  4053f7:	90                   	nop
  4053f8:	90                   	nop
  4053f9:	90                   	nop
  4053fa:	90                   	nop
  4053fb:	90                   	nop
  4053fc:	90                   	nop
  4053fd:	90                   	nop
  4053fe:	90                   	nop
  4053ff:	90                   	nop
  405400:	56                   	push   esi
  405401:	8b f1                	mov    esi,ecx
  405403:	e8 18 00 00 00       	call   0x405420
  405408:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  40540d:	74 09                	je     0x405418
  40540f:	56                   	push   esi
  405410:	e8 db 91 1f 00       	call   0x5fe5f0
  405415:	83 c4 04             	add    esp,0x4
  405418:	8b c6                	mov    eax,esi
  40541a:	5e                   	pop    esi
  40541b:	c2 04 00             	ret    0x4
  40541e:	90                   	nop
  40541f:	90                   	nop
  405420:	6a ff                	push   0xffffffff
  405422:	68 98 fe 61 00       	push   0x61fe98
  405427:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40542d:	50                   	push   eax
  40542e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405435:	51                   	push   ecx
  405436:	56                   	push   esi
  405437:	8b f1                	mov    esi,ecx
  405439:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  40543d:	c7 06 7c a5 64 00    	mov    DWORD PTR [esi],0x64a57c
  405443:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  405446:	6a 01                	push   0x1
  405448:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  40544f:	00 
  405450:	e8 3b 8f 00 00       	call   0x40e390
  405455:	8b ce                	mov    ecx,esi
  405457:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  40545e:	ff 
  40545f:	e8 4c d5 ff ff       	call   0x4029b0
  405464:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  405468:	5e                   	pop    esi
  405469:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  405470:	83 c4 10             	add    esp,0x10
  405473:	c3                   	ret
  405474:	90                   	nop
  405475:	90                   	nop
  405476:	90                   	nop
  405477:	90                   	nop
  405478:	90                   	nop
  405479:	90                   	nop
  40547a:	90                   	nop
  40547b:	90                   	nop
  40547c:	90                   	nop
  40547d:	90                   	nop
  40547e:	90                   	nop
  40547f:	90                   	nop
  405480:	56                   	push   esi
  405481:	8b f1                	mov    esi,ecx
  405483:	e8 18 00 00 00       	call   0x4054a0
  405488:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  40548d:	74 09                	je     0x405498
  40548f:	56                   	push   esi
  405490:	e8 5b 91 1f 00       	call   0x5fe5f0
  405495:	83 c4 04             	add    esp,0x4
  405498:	8b c6                	mov    eax,esi
  40549a:	5e                   	pop    esi
  40549b:	c2 04 00             	ret    0x4
  40549e:	90                   	nop
  40549f:	90                   	nop
  4054a0:	6a ff                	push   0xffffffff
  4054a2:	68 b8 fe 61 00       	push   0x61feb8
  4054a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4054ad:	50                   	push   eax
  4054ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4054b5:	51                   	push   ecx
  4054b6:	56                   	push   esi
  4054b7:	8b f1                	mov    esi,ecx
  4054b9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  4054bd:	c7 06 e4 a5 64 00    	mov    DWORD PTR [esi],0x64a5e4
  4054c3:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  4054c6:	6a 01                	push   0x1
  4054c8:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  4054cf:	00 
  4054d0:	e8 1b 70 00 00       	call   0x40c4f0
  4054d5:	8b ce                	mov    ecx,esi
  4054d7:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  4054de:	ff 
  4054df:	e8 cc d4 ff ff       	call   0x4029b0
  4054e4:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4054e8:	5e                   	pop    esi
  4054e9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4054f0:	83 c4 10             	add    esp,0x10
  4054f3:	c3                   	ret
  4054f4:	90                   	nop
  4054f5:	90                   	nop
  4054f6:	90                   	nop
  4054f7:	90                   	nop
  4054f8:	90                   	nop
  4054f9:	90                   	nop
  4054fa:	90                   	nop
  4054fb:	90                   	nop
  4054fc:	90                   	nop
  4054fd:	90                   	nop
  4054fe:	90                   	nop
  4054ff:	90                   	nop
  405500:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  405506:	b0 01                	mov    al,0x1
  405508:	84 c8                	test   al,cl
  40550a:	75 08                	jne    0x405514
  40550c:	0a c8                	or     cl,al
  40550e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  405514:	e9 07 00 00 00       	jmp    0x405520
  405519:	90                   	nop
  40551a:	90                   	nop
  40551b:	90                   	nop
  40551c:	90                   	nop
  40551d:	90                   	nop
  40551e:	90                   	nop
  40551f:	90                   	nop
  405520:	68 a0 1b 40 00       	push   0x401ba0
  405525:	e8 51 50 20 00       	call   0x60a57b
  40552a:	59                   	pop    ecx
  40552b:	c3                   	ret
  40552c:	90                   	nop
  40552d:	90                   	nop
  40552e:	90                   	nop
  40552f:	90                   	nop
  405530:	56                   	push   esi
  405531:	57                   	push   edi
  405532:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405536:	8b f1                	mov    esi,ecx
  405538:	57                   	push   edi
  405539:	e8 22 d4 ff ff       	call   0x402960
  40553e:	89 7e 28             	mov    DWORD PTR [esi+0x28],edi
  405541:	c7 06 08 a6 64 00    	mov    DWORD PTR [esi],0x64a608
  405547:	8b c6                	mov    eax,esi
  405549:	5f                   	pop    edi
  40554a:	5e                   	pop    esi
  40554b:	c2 04 00             	ret    0x4
  40554e:	90                   	nop
  40554f:	90                   	nop
  405550:	56                   	push   esi
  405551:	57                   	push   edi
  405552:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405556:	8b f1                	mov    esi,ecx
  405558:	57                   	push   edi
  405559:	e8 12 d8 ff ff       	call   0x402d70
  40555e:	89 7e 2c             	mov    DWORD PTR [esi+0x2c],edi
  405561:	c7 06 18 a6 64 00    	mov    DWORD PTR [esi],0x64a618
  405567:	8b c6                	mov    eax,esi
  405569:	5f                   	pop    edi
  40556a:	5e                   	pop    esi
  40556b:	c2 04 00             	ret    0x4
  40556e:	90                   	nop
  40556f:	90                   	nop
  405570:	6a ff                	push   0xffffffff
  405572:	68 db fe 61 00       	push   0x61fedb
  405577:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40557d:	50                   	push   eax
  40557e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405585:	51                   	push   ecx
  405586:	56                   	push   esi
  405587:	8b f1                	mov    esi,ecx
  405589:	6a 30                	push   0x30
  40558b:	e8 25 4b 20 00       	call   0x60a0b5
  405590:	83 c4 04             	add    esp,0x4
  405593:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  405597:	85 c0                	test   eax,eax
  405599:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  4055a0:	00 
  4055a1:	74 0d                	je     0x4055b0
  4055a3:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  4055a6:	51                   	push   ecx
  4055a7:	8b c8                	mov    ecx,eax
  4055a9:	e8 92 0a 00 00       	call   0x406040
  4055ae:	eb 02                	jmp    0x4055b2
  4055b0:	33 c0                	xor    eax,eax
  4055b2:	50                   	push   eax
  4055b3:	6a 00                	push   0x0
  4055b5:	8b ce                	mov    ecx,esi
  4055b7:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  4055be:	ff 
  4055bf:	e8 4c d4 ff ff       	call   0x402a10
  4055c4:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4055c8:	5e                   	pop    esi
  4055c9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4055d0:	83 c4 10             	add    esp,0x10
  4055d3:	c3                   	ret
  4055d4:	90                   	nop
  4055d5:	90                   	nop
  4055d6:	90                   	nop
  4055d7:	90                   	nop
  4055d8:	90                   	nop
  4055d9:	90                   	nop
  4055da:	90                   	nop
  4055db:	90                   	nop
  4055dc:	90                   	nop
  4055dd:	90                   	nop
  4055de:	90                   	nop
  4055df:	90                   	nop
  4055e0:	6a ff                	push   0xffffffff
  4055e2:	68 fb fe 61 00       	push   0x61fefb
  4055e7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4055ed:	50                   	push   eax
  4055ee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4055f5:	51                   	push   ecx
  4055f6:	56                   	push   esi
  4055f7:	8b f1                	mov    esi,ecx
  4055f9:	6a 3c                	push   0x3c
  4055fb:	e8 b5 4a 20 00       	call   0x60a0b5
  405600:	83 c4 04             	add    esp,0x4
  405603:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  405607:	85 c0                	test   eax,eax
  405609:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  405610:	00 
  405611:	74 0d                	je     0x405620
  405613:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  405616:	51                   	push   ecx
  405617:	8b c8                	mov    ecx,eax
  405619:	e8 22 02 00 00       	call   0x405840
  40561e:	eb 02                	jmp    0x405622
  405620:	33 c0                	xor    eax,eax
  405622:	50                   	push   eax
  405623:	6a 01                	push   0x1
  405625:	8b ce                	mov    ecx,esi
  405627:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  40562e:	ff 
  40562f:	e8 dc d3 ff ff       	call   0x402a10
  405634:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  405638:	5e                   	pop    esi
  405639:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  405640:	83 c4 10             	add    esp,0x10
  405643:	c3                   	ret
  405644:	90                   	nop
  405645:	90                   	nop
  405646:	90                   	nop
  405647:	90                   	nop
  405648:	90                   	nop
  405649:	90                   	nop
  40564a:	90                   	nop
  40564b:	90                   	nop
  40564c:	90                   	nop
  40564d:	90                   	nop
  40564e:	90                   	nop
  40564f:	90                   	nop
  405650:	6a ff                	push   0xffffffff
  405652:	68 1b ff 61 00       	push   0x61ff1b
  405657:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40565d:	50                   	push   eax
  40565e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405665:	51                   	push   ecx
  405666:	56                   	push   esi
  405667:	8b f1                	mov    esi,ecx
  405669:	6a 2c                	push   0x2c
  40566b:	e8 45 4a 20 00       	call   0x60a0b5
  405670:	83 c4 04             	add    esp,0x4
  405673:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  405677:	85 c0                	test   eax,eax
  405679:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  405680:	00 
  405681:	74 0d                	je     0x405690
  405683:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  405686:	51                   	push   ecx
  405687:	8b c8                	mov    ecx,eax
  405689:	e8 f2 03 00 00       	call   0x405a80
  40568e:	eb 02                	jmp    0x405692
  405690:	33 c0                	xor    eax,eax
  405692:	50                   	push   eax
  405693:	6a 02                	push   0x2
  405695:	8b ce                	mov    ecx,esi
  405697:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  40569e:	ff 
  40569f:	e8 6c d3 ff ff       	call   0x402a10
  4056a4:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4056a8:	5e                   	pop    esi
  4056a9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4056b0:	83 c4 10             	add    esp,0x10
  4056b3:	c3                   	ret
  4056b4:	90                   	nop
  4056b5:	90                   	nop
  4056b6:	90                   	nop
  4056b7:	90                   	nop
  4056b8:	90                   	nop
  4056b9:	90                   	nop
  4056ba:	90                   	nop
  4056bb:	90                   	nop
  4056bc:	90                   	nop
  4056bd:	90                   	nop
  4056be:	90                   	nop
  4056bf:	90                   	nop
  4056c0:	6a ff                	push   0xffffffff
  4056c2:	68 3b ff 61 00       	push   0x61ff3b
  4056c7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4056cd:	50                   	push   eax
  4056ce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4056d5:	51                   	push   ecx
  4056d6:	56                   	push   esi
  4056d7:	8b f1                	mov    esi,ecx
  4056d9:	e8 12 d6 ff ff       	call   0x402cf0
  4056de:	83 f8 05             	cmp    eax,0x5
  4056e1:	75 0c                	jne    0x4056ef
  4056e3:	8b ce                	mov    ecx,esi
  4056e5:	e8 06 d6 ff ff       	call   0x402cf0
  4056ea:	83 f8 04             	cmp    eax,0x4
  4056ed:	74 3b                	je     0x40572a
  4056ef:	6a 2c                	push   0x2c
  4056f1:	e8 bf 49 20 00       	call   0x60a0b5
  4056f6:	83 c4 04             	add    esp,0x4
  4056f9:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  4056fd:	85 c0                	test   eax,eax
  4056ff:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  405706:	00 
  405707:	74 0d                	je     0x405716
  405709:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  40570c:	51                   	push   ecx
  40570d:	8b c8                	mov    ecx,eax
  40570f:	e8 fc 03 00 00       	call   0x405b10
  405714:	eb 02                	jmp    0x405718
  405716:	33 c0                	xor    eax,eax
  405718:	50                   	push   eax
  405719:	6a 04                	push   0x4
  40571b:	8b ce                	mov    ecx,esi
  40571d:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  405724:	ff 
  405725:	e8 e6 d2 ff ff       	call   0x402a10
  40572a:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  40572e:	5e                   	pop    esi
  40572f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  405736:	83 c4 10             	add    esp,0x10
  405739:	c3                   	ret
  40573a:	90                   	nop
  40573b:	90                   	nop
  40573c:	90                   	nop
  40573d:	90                   	nop
  40573e:	90                   	nop
  40573f:	90                   	nop
  405740:	56                   	push   esi
  405741:	8b f1                	mov    esi,ecx
  405743:	e8 a8 d5 ff ff       	call   0x402cf0
  405748:	83 f8 05             	cmp    eax,0x5
  40574b:	74 07                	je     0x405754
  40574d:	8b 06                	mov    eax,DWORD PTR [esi]
  40574f:	8b ce                	mov    ecx,esi
  405751:	ff 50 28             	call   DWORD PTR [eax+0x28]
  405754:	5e                   	pop    esi
  405755:	c3                   	ret
  405756:	90                   	nop
  405757:	90                   	nop
  405758:	90                   	nop
  405759:	90                   	nop
  40575a:	90                   	nop
  40575b:	90                   	nop
  40575c:	90                   	nop
  40575d:	90                   	nop
  40575e:	90                   	nop
  40575f:	90                   	nop
  405760:	6a ff                	push   0xffffffff
  405762:	68 5b ff 61 00       	push   0x61ff5b
  405767:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40576d:	50                   	push   eax
  40576e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405775:	51                   	push   ecx
  405776:	56                   	push   esi
  405777:	8b f1                	mov    esi,ecx
  405779:	6a 3c                	push   0x3c
  40577b:	e8 35 49 20 00       	call   0x60a0b5
  405780:	83 c4 04             	add    esp,0x4
  405783:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  405787:	85 c0                	test   eax,eax
  405789:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  405790:	00 
  405791:	74 0d                	je     0x4057a0
  405793:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  405796:	51                   	push   ecx
  405797:	8b c8                	mov    ecx,eax
  405799:	e8 32 04 00 00       	call   0x405bd0
  40579e:	eb 02                	jmp    0x4057a2
  4057a0:	33 c0                	xor    eax,eax
  4057a2:	50                   	push   eax
  4057a3:	6a 05                	push   0x5
  4057a5:	8b ce                	mov    ecx,esi
  4057a7:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  4057ae:	ff 
  4057af:	e8 5c d2 ff ff       	call   0x402a10
  4057b4:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4057b8:	5e                   	pop    esi
  4057b9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4057c0:	83 c4 10             	add    esp,0x10
  4057c3:	c3                   	ret
  4057c4:	90                   	nop
  4057c5:	90                   	nop
  4057c6:	90                   	nop
  4057c7:	90                   	nop
  4057c8:	90                   	nop
  4057c9:	90                   	nop
  4057ca:	90                   	nop
  4057cb:	90                   	nop
  4057cc:	90                   	nop
  4057cd:	90                   	nop
  4057ce:	90                   	nop
  4057cf:	90                   	nop
  4057d0:	6a ff                	push   0xffffffff
  4057d2:	68 7b ff 61 00       	push   0x61ff7b
  4057d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4057dd:	50                   	push   eax
  4057de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4057e5:	51                   	push   ecx
  4057e6:	56                   	push   esi
  4057e7:	8b f1                	mov    esi,ecx
  4057e9:	6a 3c                	push   0x3c
  4057eb:	e8 c5 48 20 00       	call   0x60a0b5
  4057f0:	83 c4 04             	add    esp,0x4
  4057f3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  4057f7:	85 c0                	test   eax,eax
  4057f9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  405800:	00 
  405801:	74 12                	je     0x405815
  405803:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  405807:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
  40580a:	51                   	push   ecx
  40580b:	52                   	push   edx
  40580c:	8b c8                	mov    ecx,eax
  40580e:	e8 0d 04 00 00       	call   0x405c20
  405813:	eb 02                	jmp    0x405817
  405815:	33 c0                	xor    eax,eax
  405817:	50                   	push   eax
  405818:	6a 04                	push   0x4
  40581a:	8b ce                	mov    ecx,esi
  40581c:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  405823:	ff 
  405824:	e8 e7 d1 ff ff       	call   0x402a10
  405829:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  40582d:	5e                   	pop    esi
  40582e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  405835:	83 c4 10             	add    esp,0x10
  405838:	c2 04 00             	ret    0x4
  40583b:	90                   	nop
  40583c:	90                   	nop
  40583d:	90                   	nop
  40583e:	90                   	nop
  40583f:	90                   	nop
  405840:	6a ff                	push   0xffffffff
  405842:	68 a0 ff 61 00       	push   0x61ffa0
  405847:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40584d:	50                   	push   eax
  40584e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405855:	83 ec 14             	sub    esp,0x14
  405858:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  40585c:	55                   	push   ebp
  40585d:	56                   	push   esi
  40585e:	8b e9                	mov    ebp,ecx
  405860:	50                   	push   eax
  405861:	89 6c 24 0c          	mov    DWORD PTR [esp+0xc],ebp
  405865:	e8 c6 fc ff ff       	call   0x405530
  40586a:	33 f6                	xor    esi,esi
  40586c:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  405870:	e8 2b 4c 20 00       	call   0x60a4a0
  405875:	99                   	cdq
  405876:	b9 10 27 00 00       	mov    ecx,0x2710
  40587b:	f7 f9                	idiv   ecx
  40587d:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  405881:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
  405885:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  40588b:	d8 05 2c a4 64 00    	fadd   DWORD PTR ds:0x64a42c
  405891:	e8 8a 52 20 00       	call   0x60ab20
  405896:	83 f8 ff             	cmp    eax,0xffffffff
  405899:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  40589d:	0f 84 ad 00 00 00    	je     0x405950
  4058a3:	3b c6                	cmp    eax,esi
  4058a5:	0f 8d a5 00 00 00    	jge    0x405950
  4058ab:	53                   	push   ebx
  4058ac:	57                   	push   edi
  4058ad:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4058b2:	83 c9 ff             	or     ecx,0xffffffff
  4058b5:	33 c0                	xor    eax,eax
  4058b7:	8a 54 24 34          	mov    dl,BYTE PTR [esp+0x34]
  4058bb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4058bd:	f7 d1                	not    ecx
  4058bf:	49                   	dec    ecx
  4058c0:	6a 01                	push   0x1
  4058c2:	8b d9                	mov    ebx,ecx
  4058c4:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4058c8:	53                   	push   ebx
  4058c9:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  4058cd:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  4058d1:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  4058d5:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  4058d9:	e8 62 c0 ff ff       	call   0x401940
  4058de:	84 c0                	test   al,al
  4058e0:	74 27                	je     0x405909
  4058e2:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4058e6:	8b cb                	mov    ecx,ebx
  4058e8:	8b c1                	mov    eax,ecx
  4058ea:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  4058ef:	c1 e9 02             	shr    ecx,0x2
  4058f2:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4058f4:	8b c8                	mov    ecx,eax
  4058f6:	83 e1 03             	and    ecx,0x3
  4058f9:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4058fb:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  4058ff:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  405903:	33 f6                	xor    esi,esi
  405905:	c6 04 0b 00          	mov    BYTE PTR [ebx+ecx*1],0x0
  405909:	8d 54 24 14          	lea    edx,[esp+0x14]
  40590d:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
  405912:	52                   	push   edx
  405913:	6a 56                	push   0x56
  405915:	68 c8 d4 68 00       	push   0x68d4c8
  40591a:	68 90 d4 68 00       	push   0x68d490
  40591f:	e8 cc ae 19 00       	call   0x5a07f0
  405924:	ff d0                	call   eax
  405926:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  40592a:	83 c4 10             	add    esp,0x10
  40592d:	3b c6                	cmp    eax,esi
  40592f:	5f                   	pop    edi
  405930:	5b                   	pop    ebx
  405931:	74 1d                	je     0x405950
  405933:	8d 48 ff             	lea    ecx,[eax-0x1]
  405936:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  405939:	84 c0                	test   al,al
  40593b:	74 0a                	je     0x405947
  40593d:	3c ff                	cmp    al,0xff
  40593f:	74 06                	je     0x405947
  405941:	fe c8                	dec    al
  405943:	88 01                	mov    BYTE PTR [ecx],al
  405945:	eb 09                	jmp    0x405950
  405947:	51                   	push   ecx
  405948:	e8 a3 8c 1f 00       	call   0x5fe5f0
  40594d:	83 c4 04             	add    esp,0x4
  405950:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  405954:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  405958:	89 45 2c             	mov    DWORD PTR [ebp+0x2c],eax
  40595b:	c7 45 30 ff ff ff ff 	mov    DWORD PTR [ebp+0x30],0xffffffff
  405962:	c7 45 34 00 00 80 3f 	mov    DWORD PTR [ebp+0x34],0x3f800000
  405969:	c6 45 38 01          	mov    BYTE PTR [ebp+0x38],0x1
  40596d:	c7 45 00 4c a6 64 00 	mov    DWORD PTR [ebp+0x0],0x64a64c
  405974:	8b c5                	mov    eax,ebp
  405976:	5e                   	pop    esi
  405977:	5d                   	pop    ebp
  405978:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40597f:	83 c4 20             	add    esp,0x20
  405982:	c2 04 00             	ret    0x4
  405985:	90                   	nop
  405986:	90                   	nop
  405987:	90                   	nop
  405988:	90                   	nop
  405989:	90                   	nop
  40598a:	90                   	nop
  40598b:	90                   	nop
  40598c:	90                   	nop
  40598d:	90                   	nop
  40598e:	90                   	nop
  40598f:	90                   	nop
  405990:	56                   	push   esi
  405991:	8b f1                	mov    esi,ecx
  405993:	6a ff                	push   0xffffffff
  405995:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405998:	e8 23 2f 02 00       	call   0x4288c0
  40599d:	8b c8                	mov    ecx,eax
  40599f:	e8 9c 0f 19 00       	call   0x596940
  4059a4:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  4059a7:	e8 94 31 02 00       	call   0x428b40
  4059ac:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  4059af:	68 ff ff 7f 7f       	push   0x7f7fffff
  4059b4:	6a 01                	push   0x1
  4059b6:	6a 02                	push   0x2
  4059b8:	8b 01                	mov    eax,DWORD PTR [ecx]
  4059ba:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  4059c0:	5e                   	pop    esi
  4059c1:	c2 04 00             	ret    0x4
  4059c4:	90                   	nop
  4059c5:	90                   	nop
  4059c6:	90                   	nop
  4059c7:	90                   	nop
  4059c8:	90                   	nop
  4059c9:	90                   	nop
  4059ca:	90                   	nop
  4059cb:	90                   	nop
  4059cc:	90                   	nop
  4059cd:	90                   	nop
  4059ce:	90                   	nop
  4059cf:	90                   	nop
  4059d0:	51                   	push   ecx
  4059d1:	55                   	push   ebp
  4059d2:	56                   	push   esi
  4059d3:	57                   	push   edi
  4059d4:	8b f9                	mov    edi,ecx
  4059d6:	b1 01                	mov    cl,0x1
  4059d8:	8b 57 2c             	mov    edx,DWORD PTR [edi+0x2c]
  4059db:	8d 77 2c             	lea    esi,[edi+0x2c]
  4059de:	83 fa ff             	cmp    edx,0xffffffff
  4059e1:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  4059e5:	74 4b                	je     0x405a32
  4059e7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  4059ea:	83 f8 ff             	cmp    eax,0xffffffff
  4059ed:	75 12                	jne    0x405a01
  4059ef:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4059f3:	c7 46 08 00 00 80 3f 	mov    DWORD PTR [esi+0x8],0x3f800000
  4059fa:	03 d0                	add    edx,eax
  4059fc:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
  4059ff:	eb 31                	jmp    0x405a32
  405a01:	8b 6c 24 18          	mov    ebp,DWORD PTR [esp+0x18]
  405a05:	3b e8                	cmp    ebp,eax
  405a07:	7e 0b                	jle    0x405a14
  405a09:	c7 46 08 00 00 00 00 	mov    DWORD PTR [esi+0x8],0x0
  405a10:	32 c9                	xor    cl,cl
  405a12:	eb 1e                	jmp    0x405a32
  405a14:	85 d2                	test   edx,edx
  405a16:	7e 13                	jle    0x405a2b
  405a18:	2b c5                	sub    eax,ebp
  405a1a:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  405a1e:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  405a22:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  405a26:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
  405a29:	eb 07                	jmp    0x405a32
  405a2b:	c7 46 08 00 00 00 00 	mov    DWORD PTR [esi+0x8],0x0
  405a32:	84 c9                	test   cl,cl
  405a34:	88 4e 0c             	mov    BYTE PTR [esi+0xc],cl
  405a37:	75 3b                	jne    0x405a74
  405a39:	8b 4f 28             	mov    ecx,DWORD PTR [edi+0x28]
  405a3c:	6a 00                	push   0x0
  405a3e:	8b 11                	mov    edx,DWORD PTR [ecx]
  405a40:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
  405a46:	e8 55 4a 20 00       	call   0x60a4a0
  405a4b:	99                   	cdq
  405a4c:	b9 10 27 00 00       	mov    ecx,0x2710
  405a51:	f7 f9                	idiv   ecx
  405a53:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  405a57:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  405a5b:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  405a61:	d8 05 2c a4 64 00    	fadd   DWORD PTR ds:0x64a42c
  405a67:	e8 b4 50 20 00       	call   0x60ab20
  405a6c:	50                   	push   eax
  405a6d:	8b ce                	mov    ecx,esi
  405a6f:	e8 3c e7 ff ff       	call   0x4041b0
  405a74:	5f                   	pop    edi
  405a75:	5e                   	pop    esi
  405a76:	5d                   	pop    ebp
  405a77:	59                   	pop    ecx
  405a78:	c2 08 00             	ret    0x8
  405a7b:	90                   	nop
  405a7c:	90                   	nop
  405a7d:	90                   	nop
  405a7e:	90                   	nop
  405a7f:	90                   	nop
  405a80:	56                   	push   esi
  405a81:	57                   	push   edi
  405a82:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405a86:	8b f1                	mov    esi,ecx
  405a88:	57                   	push   edi
  405a89:	e8 82 db ff ff       	call   0x403610
  405a8e:	89 7e 28             	mov    DWORD PTR [esi+0x28],edi
  405a91:	c7 06 60 a6 64 00    	mov    DWORD PTR [esi],0x64a660
  405a97:	8b c6                	mov    eax,esi
  405a99:	5f                   	pop    edi
  405a9a:	5e                   	pop    esi
  405a9b:	c2 04 00             	ret    0x4
  405a9e:	90                   	nop
  405a9f:	90                   	nop
  405aa0:	56                   	push   esi
  405aa1:	8b f1                	mov    esi,ecx
  405aa3:	e8 48 47 00 00       	call   0x40a1f0
  405aa8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  405aad:	74 09                	je     0x405ab8
  405aaf:	56                   	push   esi
  405ab0:	e8 3b 8b 1f 00       	call   0x5fe5f0
  405ab5:	83 c4 04             	add    esp,0x4
  405ab8:	8b c6                	mov    eax,esi
  405aba:	5e                   	pop    esi
  405abb:	c2 04 00             	ret    0x4
  405abe:	90                   	nop
  405abf:	90                   	nop
  405ac0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  405ac4:	56                   	push   esi
  405ac5:	8b f1                	mov    esi,ecx
  405ac7:	50                   	push   eax
  405ac8:	e8 c3 db ff ff       	call   0x403690
  405acd:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405ad0:	e8 6b 30 02 00       	call   0x428b40
  405ad5:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405ad8:	68 ff ff 7f 7f       	push   0x7f7fffff
  405add:	6a 01                	push   0x1
  405adf:	6a 02                	push   0x2
  405ae1:	8b 11                	mov    edx,DWORD PTR [ecx]
  405ae3:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  405ae9:	5e                   	pop    esi
  405aea:	c2 04 00             	ret    0x4
  405aed:	90                   	nop
  405aee:	90                   	nop
  405aef:	90                   	nop
  405af0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  405af4:	56                   	push   esi
  405af5:	8b f1                	mov    esi,ecx
  405af7:	50                   	push   eax
  405af8:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405afb:	e8 30 d4 01 00       	call   0x422f30
  405b00:	84 c0                	test   al,al
  405b02:	75 07                	jne    0x405b0b
  405b04:	8b ce                	mov    ecx,esi
  405b06:	e8 f5 d1 ff ff       	call   0x402d00
  405b0b:	5e                   	pop    esi
  405b0c:	c2 08 00             	ret    0x8
  405b0f:	90                   	nop
  405b10:	56                   	push   esi
  405b11:	57                   	push   edi
  405b12:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405b16:	8b f1                	mov    esi,ecx
  405b18:	57                   	push   edi
  405b19:	e8 e2 db ff ff       	call   0x403700
  405b1e:	89 7e 28             	mov    DWORD PTR [esi+0x28],edi
  405b21:	c7 06 70 a6 64 00    	mov    DWORD PTR [esi],0x64a670
  405b27:	8b c6                	mov    eax,esi
  405b29:	5f                   	pop    edi
  405b2a:	5e                   	pop    esi
  405b2b:	c2 04 00             	ret    0x4
  405b2e:	90                   	nop
  405b2f:	90                   	nop
  405b30:	56                   	push   esi
  405b31:	8b f1                	mov    esi,ecx
  405b33:	e8 18 00 00 00       	call   0x405b50
  405b38:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  405b3d:	74 09                	je     0x405b48
  405b3f:	56                   	push   esi
  405b40:	e8 ab 8a 1f 00       	call   0x5fe5f0
  405b45:	83 c4 04             	add    esp,0x4
  405b48:	8b c6                	mov    eax,esi
  405b4a:	5e                   	pop    esi
  405b4b:	c2 04 00             	ret    0x4
  405b4e:	90                   	nop
  405b4f:	90                   	nop
  405b50:	6a ff                	push   0xffffffff
  405b52:	68 b8 ff 61 00       	push   0x61ffb8
  405b57:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  405b5d:	50                   	push   eax
  405b5e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405b65:	51                   	push   ecx
  405b66:	56                   	push   esi
  405b67:	8b f1                	mov    esi,ecx
  405b69:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  405b6d:	c7 06 70 a6 64 00    	mov    DWORD PTR [esi],0x64a670
  405b73:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405b76:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  405b7d:	00 
  405b7e:	e8 bd 2f 02 00       	call   0x428b40
  405b83:	8b ce                	mov    ecx,esi
  405b85:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  405b8c:	ff 
  405b8d:	e8 ee db ff ff       	call   0x403780
  405b92:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  405b96:	5e                   	pop    esi
  405b97:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  405b9e:	83 c4 10             	add    esp,0x10
  405ba1:	c3                   	ret
  405ba2:	90                   	nop
  405ba3:	90                   	nop
  405ba4:	90                   	nop
  405ba5:	90                   	nop
  405ba6:	90                   	nop
  405ba7:	90                   	nop
  405ba8:	90                   	nop
  405ba9:	90                   	nop
  405baa:	90                   	nop
  405bab:	90                   	nop
  405bac:	90                   	nop
  405bad:	90                   	nop
  405bae:	90                   	nop
  405baf:	90                   	nop
  405bb0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  405bb4:	56                   	push   esi
  405bb5:	8b f1                	mov    esi,ecx
  405bb7:	50                   	push   eax
  405bb8:	e8 23 dc ff ff       	call   0x4037e0
  405bbd:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  405bc0:	e8 4b 2f 02 00       	call   0x428b10
  405bc5:	5e                   	pop    esi
  405bc6:	c2 04 00             	ret    0x4
  405bc9:	90                   	nop
  405bca:	90                   	nop
  405bcb:	90                   	nop
  405bcc:	90                   	nop
  405bcd:	90                   	nop
  405bce:	90                   	nop
  405bcf:	90                   	nop
  405bd0:	56                   	push   esi
  405bd1:	57                   	push   edi
  405bd2:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405bd6:	8b f1                	mov    esi,ecx
  405bd8:	57                   	push   edi
  405bd9:	e8 62 dc ff ff       	call   0x403840
  405bde:	89 7e 38             	mov    DWORD PTR [esi+0x38],edi
  405be1:	c7 06 80 a6 64 00    	mov    DWORD PTR [esi],0x64a680
  405be7:	8b c6                	mov    eax,esi
  405be9:	5f                   	pop    edi
  405bea:	5e                   	pop    esi
  405beb:	c2 04 00             	ret    0x4
  405bee:	90                   	nop
  405bef:	90                   	nop
  405bf0:	56                   	push   esi
  405bf1:	8b f1                	mov    esi,ecx
  405bf3:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
  405bf6:	e8 15 2f 02 00       	call   0x428b10
  405bfb:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
  405bfe:	68 ff ff 7f 7f       	push   0x7f7fffff
  405c03:	6a 00                	push   0x0
  405c05:	6a 05                	push   0x5
  405c07:	8b 01                	mov    eax,DWORD PTR [ecx]
  405c09:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  405c0f:	6a 00                	push   0x0
  405c11:	6a 00                	push   0x0
  405c13:	8b ce                	mov    ecx,esi
  405c15:	e8 f6 cd ff ff       	call   0x402a10
  405c1a:	5e                   	pop    esi
  405c1b:	c3                   	ret
  405c1c:	90                   	nop
  405c1d:	90                   	nop
  405c1e:	90                   	nop
  405c1f:	90                   	nop
  405c20:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  405c24:	56                   	push   esi
  405c25:	57                   	push   edi
  405c26:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  405c2a:	50                   	push   eax
  405c2b:	8b f1                	mov    esi,ecx
  405c2d:	57                   	push   edi
  405c2e:	e8 9d e2 ff ff       	call   0x403ed0
  405c33:	89 7e 38             	mov    DWORD PTR [esi+0x38],edi
  405c36:	c7 06 98 a6 64 00    	mov    DWORD PTR [esi],0x64a698
  405c3c:	8b c6                	mov    eax,esi
  405c3e:	5f                   	pop    edi
  405c3f:	5e                   	pop    esi
  405c40:	c2 08 00             	ret    0x8
  405c43:	90                   	nop
  405c44:	90                   	nop
  405c45:	90                   	nop
  405c46:	90                   	nop
  405c47:	90                   	nop
  405c48:	90                   	nop
  405c49:	90                   	nop
  405c4a:	90                   	nop
  405c4b:	90                   	nop
  405c4c:	90                   	nop
  405c4d:	90                   	nop
  405c4e:	90                   	nop
  405c4f:	90                   	nop
  405c50:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  405c54:	56                   	push   esi
  405c55:	8b f1                	mov    esi,ecx
  405c57:	50                   	push   eax
  405c58:	e8 93 e3 ff ff       	call   0x403ff0
  405c5d:	d9 46 30             	fld    DWORD PTR [esi+0x30]
  405c60:	db 46 28             	fild   DWORD PTR [esi+0x28]
  405c63:	d8 c9                	fmul   st,st(1)
  405c65:	e8 b6 4e 20 00       	call   0x60ab20
  405c6a:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
  405c6d:	50                   	push   eax
  405c6e:	dd d8                	fstp   st(0)
  405c70:	e8 4b 2c 02 00       	call   0x4288c0
  405c75:	8b c8                	mov    ecx,eax
  405c77:	e8 24 0a 19 00       	call   0x5966a0
  405c7c:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
  405c7f:	e8 8c 2e 02 00       	call   0x428b10
  405c84:	5e                   	pop    esi
  405c85:	c2 04 00             	ret    0x4
  405c88:	90                   	nop
  405c89:	90                   	nop
  405c8a:	90                   	nop
  405c8b:	90                   	nop
  405c8c:	90                   	nop
  405c8d:	90                   	nop
  405c8e:	90                   	nop
  405c8f:	90                   	nop
  405c90:	56                   	push   esi
  405c91:	8b f1                	mov    esi,ecx
  405c93:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
  405c96:	e8 25 2c 02 00       	call   0x4288c0
  405c9b:	8b c8                	mov    ecx,eax
  405c9d:	e8 9e 0f 19 00       	call   0x596c40
  405ca2:	84 c0                	test   al,al
  405ca4:	74 0f                	je     0x405cb5
  405ca6:	8b 4e 38             	mov    ecx,DWORD PTR [esi+0x38]
  405ca9:	e8 92 2e 02 00       	call   0x428b40
  405cae:	8b ce                	mov    ecx,esi
  405cb0:	e8 4b d0 ff ff       	call   0x402d00
  405cb5:	5e                   	pop    esi
  405cb6:	c2 08 00             	ret    0x8
  405cb9:	90                   	nop
  405cba:	90                   	nop
  405cbb:	90                   	nop
  405cbc:	90                   	nop
  405cbd:	90                   	nop
  405cbe:	90                   	nop
  405cbf:	90                   	nop
  405cc0:	6a ff                	push   0xffffffff
  405cc2:	68 e0 ff 61 00       	push   0x61ffe0
  405cc7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  405ccd:	50                   	push   eax
  405cce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  405cd5:	83 ec 14             	sub    esp,0x14
  405cd8:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  405cdc:	55                   	push   ebp
  405cdd:	56                   	push   esi
  405cde:	8b e9                	mov    ebp,ecx
  405ce0:	50                   	push   eax
  405ce1:	89 6c 24 0c          	mov    DWORD PTR [esp+0xc],ebp
  405ce5:	e8 46 f8 ff ff       	call   0x405530
  405cea:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  405cee:	33 f6                	xor    esi,esi
  405cf0:	83 f8 ff             	cmp    eax,0xffffffff
  405cf3:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  405cf7:	0f 84 b2 00 00 00    	je     0x405daf
  405cfd:	3b c6                	cmp    eax,esi
  405cff:	0f 8d aa 00 00 00    	jge    0x405daf
