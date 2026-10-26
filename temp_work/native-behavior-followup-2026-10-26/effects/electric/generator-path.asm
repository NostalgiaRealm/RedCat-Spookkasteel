
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004b5ce0 <.text+0xb4ce0>:
  4b5ce0:	6a ff                	push   0xffffffff
  4b5ce2:	68 4e ed 62 00       	push   0x62ed4e
  4b5ce7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4b5ced:	50                   	push   eax
  4b5cee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4b5cf5:	83 ec 1c             	sub    esp,0x1c
  4b5cf8:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  4b5cfc:	53                   	push   ebx
  4b5cfd:	55                   	push   ebp
  4b5cfe:	56                   	push   esi
  4b5cff:	57                   	push   edi
  4b5d00:	33 ff                	xor    edi,edi
  4b5d02:	8b e9                	mov    ebp,ecx
  4b5d04:	57                   	push   edi
  4b5d05:	50                   	push   eax
  4b5d06:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  4b5d0a:	e8 e1 b7 0d 00       	call   0x5914f0
  4b5d0f:	8d b5 ac 01 00 00    	lea    esi,[ebp+0x1ac]
  4b5d15:	6a ff                	push   0xffffffff
  4b5d17:	8b ce                	mov    ecx,esi
  4b5d19:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
  4b5d1d:	c7 85 a0 01 00 00 01 	mov    DWORD PTR [ebp+0x1a0],0x1
  4b5d24:	00 00 00 
  4b5d27:	c7 85 a4 01 00 00 cd 	mov    DWORD PTR [ebp+0x1a4],0x3e4ccccd
  4b5d2e:	cc 4c 3e 
  4b5d31:	c7 85 a8 01 00 00 9a 	mov    DWORD PTR [ebp+0x1a8],0x3e99999a
  4b5d38:	99 99 3e 
  4b5d3b:	e8 70 e4 f4 ff       	call   0x4041b0
  4b5d40:	8d 9d dc 01 00 00    	lea    ebx,[ebp+0x1dc]
  4b5d46:	c7 85 c0 01 00 00 cd 	mov    DWORD PTR [ebp+0x1c0],0x411ccccd
  4b5d4d:	cc 1c 41 
  4b5d50:	89 3b                	mov    DWORD PTR [ebx],edi
  4b5d52:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4b5d56:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  4b5d5b:	c7 45 00 64 ec 64 00 	mov    DWORD PTR [ebp+0x0],0x64ec64
  4b5d62:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  4b5d66:	e8 45 e7 0c 00       	call   0x5844b0
  4b5d6b:	8b 3d e0 8d 6c 00    	mov    edi,DWORD PTR ds:0x6c8de0
  4b5d71:	c6 44 24 34 02       	mov    BYTE PTR [esp+0x34],0x2
  4b5d76:	85 ff                	test   edi,edi
  4b5d78:	75 07                	jne    0x4b5d81
  4b5d7a:	e8 01 55 0a 00       	call   0x55b280
  4b5d7f:	8b f8                	mov    edi,eax
  4b5d81:	8b 87 d8 00 00 00    	mov    eax,DWORD PTR [edi+0xd8]
  4b5d87:	85 c0                	test   eax,eax
  4b5d89:	75 46                	jne    0x4b5dd1
  4b5d8b:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  4b5d8f:	51                   	push   ecx
  4b5d90:	68 70 3f 6b 00       	push   0x6b3f70
  4b5d95:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4b5d99:	e8 72 3a f5 ff       	call   0x409810
  4b5d9e:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  4b5da2:	c6 44 24 34 03       	mov    BYTE PTR [esp+0x34],0x3
  4b5da7:	52                   	push   edx
  4b5da8:	68 88 01 00 00       	push   0x188
  4b5dad:	68 58 eb 68 00       	push   0x68eb58
  4b5db2:	68 4c eb 68 00       	push   0x68eb4c
  4b5db7:	e8 34 aa 0e 00       	call   0x5a07f0
  4b5dbc:	ff d0                	call   eax
  4b5dbe:	83 c4 10             	add    esp,0x10
  4b5dc1:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4b5dc5:	c6 44 24 34 02       	mov    BYTE PTR [esp+0x34],0x2
  4b5dca:	6a 01                	push   0x1
  4b5dcc:	e8 cf e2 f4 ff       	call   0x4040a0
  4b5dd1:	8b bf d8 00 00 00    	mov    edi,DWORD PTR [edi+0xd8]
  4b5dd7:	8d 44 24 14          	lea    eax,[esp+0x14]
  4b5ddb:	68 88 9d 6b 00       	push   0x6b9d88
  4b5de0:	50                   	push   eax
  4b5de1:	8b cf                	mov    ecx,edi
  4b5de3:	e8 48 79 05 00       	call   0x50d730
  4b5de8:	8b f8                	mov    edi,eax
  4b5dea:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  4b5dec:	8b 07                	mov    eax,DWORD PTR [edi]
  4b5dee:	3b c8                	cmp    ecx,eax
  4b5df0:	c6 44 24 34 04       	mov    BYTE PTR [esp+0x34],0x4
  4b5df5:	74 14                	je     0x4b5e0b
  4b5df7:	85 c9                	test   ecx,ecx
  4b5df9:	74 05                	je     0x4b5e00
  4b5dfb:	e8 d0 3a f5 ff       	call   0x4098d0
  4b5e00:	8b 0f                	mov    ecx,DWORD PTR [edi]
  4b5e02:	89 0b                	mov    DWORD PTR [ebx],ecx
  4b5e04:	8b cb                	mov    ecx,ebx
  4b5e06:	e8 a5 e6 0c 00       	call   0x5844b0
  4b5e0b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4b5e0f:	c6 44 24 34 02       	mov    BYTE PTR [esp+0x34],0x2
  4b5e14:	e8 f7 74 0c 00       	call   0x57d310
  4b5e19:	8b 3d e0 8d 6c 00    	mov    edi,DWORD PTR ds:0x6c8de0
  4b5e1f:	85 ff                	test   edi,edi
  4b5e21:	75 07                	jne    0x4b5e2a
  4b5e23:	e8 58 54 0a 00       	call   0x55b280
  4b5e28:	8b f8                	mov    edi,eax
  4b5e2a:	8b 87 d8 00 00 00    	mov    eax,DWORD PTR [edi+0xd8]
  4b5e30:	85 c0                	test   eax,eax
  4b5e32:	75 46                	jne    0x4b5e7a
  4b5e34:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  4b5e38:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4b5e3c:	52                   	push   edx
  4b5e3d:	68 70 3f 6b 00       	push   0x6b3f70
  4b5e42:	e8 c9 39 f5 ff       	call   0x409810
  4b5e47:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  4b5e4b:	c6 44 24 34 05       	mov    BYTE PTR [esp+0x34],0x5
  4b5e50:	50                   	push   eax
  4b5e51:	68 88 01 00 00       	push   0x188
  4b5e56:	68 58 eb 68 00       	push   0x68eb58
  4b5e5b:	68 4c eb 68 00       	push   0x68eb4c
  4b5e60:	e8 8b a9 0e 00       	call   0x5a07f0
  4b5e65:	ff d0                	call   eax
  4b5e67:	83 c4 10             	add    esp,0x10
  4b5e6a:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4b5e6e:	c6 44 24 34 02       	mov    BYTE PTR [esp+0x34],0x2
  4b5e73:	6a 01                	push   0x1
  4b5e75:	e8 26 e2 f4 ff       	call   0x4040a0
  4b5e7a:	8b 8f d8 00 00 00    	mov    ecx,DWORD PTR [edi+0xd8]
  4b5e80:	8d 54 24 14          	lea    edx,[esp+0x14]
  4b5e84:	68 c8 9d 6b 00       	push   0x6b9dc8
  4b5e89:	52                   	push   edx
  4b5e8a:	e8 a1 78 05 00       	call   0x50d730
  4b5e8f:	8b f8                	mov    edi,eax
  4b5e91:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4b5e95:	8b 07                	mov    eax,DWORD PTR [edi]
  4b5e97:	3b c8                	cmp    ecx,eax
  4b5e99:	c6 44 24 34 06       	mov    BYTE PTR [esp+0x34],0x6
  4b5e9e:	74 18                	je     0x4b5eb8
  4b5ea0:	85 c9                	test   ecx,ecx
  4b5ea2:	74 05                	je     0x4b5ea9
  4b5ea4:	e8 27 3a f5 ff       	call   0x4098d0
  4b5ea9:	8b 07                	mov    eax,DWORD PTR [edi]
  4b5eab:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4b5eaf:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  4b5eb3:	e8 f8 e5 0c 00       	call   0x5844b0
  4b5eb8:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4b5ebc:	c6 44 24 34 02       	mov    BYTE PTR [esp+0x34],0x2
  4b5ec1:	e8 4a 74 0c 00       	call   0x57d310
  4b5ec6:	83 3b 00             	cmp    DWORD PTR [ebx],0x0
  4b5ec9:	74 2f                	je     0x4b5efa
  4b5ecb:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4b5ecf:	85 c9                	test   ecx,ecx
  4b5ed1:	74 27                	je     0x4b5efa
  4b5ed3:	51                   	push   ecx
  4b5ed4:	8b c4                	mov    eax,esp
  4b5ed6:	89 64 24 40          	mov    DWORD PTR [esp+0x40],esp
  4b5eda:	89 08                	mov    DWORD PTR [eax],ecx
  4b5edc:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4b5ee0:	85 c0                	test   eax,eax
  4b5ee2:	74 03                	je     0x4b5ee7
  4b5ee4:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  4b5ee7:	8b cb                	mov    ecx,ebx
  4b5ee9:	c6 44 24 38 02       	mov    BYTE PTR [esp+0x38],0x2
  4b5eee:	e8 ed ce f5 ff       	call   0x412de0
  4b5ef3:	8b c8                	mov    ecx,eax
  4b5ef5:	e8 a6 4f 05 00       	call   0x50aea0
  4b5efa:	8b 03                	mov    eax,DWORD PTR [ebx]
  4b5efc:	51                   	push   ecx
  4b5efd:	8b cc                	mov    ecx,esp
  4b5eff:	89 64 24 40          	mov    DWORD PTR [esp+0x40],esp
  4b5f03:	85 c0                	test   eax,eax
  4b5f05:	89 01                	mov    DWORD PTR [ecx],eax
  4b5f07:	74 03                	je     0x4b5f0c
  4b5f09:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  4b5f0c:	8b cd                	mov    ecx,ebp
  4b5f0e:	e8 6d 13 f8 ff       	call   0x437280
  4b5f13:	e8 88 45 15 00       	call   0x60a4a0
  4b5f18:	99                   	cdq
  4b5f19:	b9 10 27 00 00       	mov    ecx,0x2710
  4b5f1e:	68 e8 03 00 00       	push   0x3e8
  4b5f23:	f7 f9                	idiv   ecx
  4b5f25:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  4b5f29:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  4b5f2d:	89 8d 04 01 00 00    	mov    DWORD PTR [ebp+0x104],ecx
  4b5f33:	8d 8d 20 01 00 00    	lea    ecx,[ebp+0x120]
  4b5f39:	89 85 00 01 00 00    	mov    DWORD PTR [ebp+0x100],eax
  4b5f3f:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  4b5f43:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  4b5f47:	db 44 24 40          	fild   DWORD PTR [esp+0x40]
  4b5f4b:	89 95 fc 00 00 00    	mov    DWORD PTR [ebp+0xfc],edx
  4b5f51:	d8 0d 5c ec 64 00    	fmul   DWORD PTR ds:0x64ec5c
  4b5f57:	d8 05 60 d7 64 00    	fadd   DWORD PTR ds:0x64d760
  4b5f5d:	d9 9d 30 01 00 00    	fstp   DWORD PTR [ebp+0x130]
  4b5f63:	e8 48 e2 f4 ff       	call   0x4041b0
  4b5f68:	c7 85 c4 01 00 00 00 	mov    DWORD PTR [ebp+0x1c4],0x40a00000
  4b5f6f:	00 a0 40 
  4b5f72:	c7 85 c8 01 00 00 00 	mov    DWORD PTR [ebp+0x1c8],0x42480000
  4b5f79:	00 48 42 
  4b5f7c:	c7 85 cc 01 00 00 00 	mov    DWORD PTR [ebp+0x1cc],0x40a00000
  4b5f83:	00 a0 40 
  4b5f86:	8b 85 c4 01 00 00    	mov    eax,DWORD PTR [ebp+0x1c4]
  4b5f8c:	8b 8d c8 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1c8]
  4b5f92:	8d 95 d0 01 00 00    	lea    edx,[ebp+0x1d0]
  4b5f98:	89 85 d0 01 00 00    	mov    DWORD PTR [ebp+0x1d0],eax
  4b5f9e:	8b 85 cc 01 00 00    	mov    eax,DWORD PTR [ebp+0x1cc]
  4b5fa4:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  4b5fa7:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  4b5faa:	c7 06 ff ff ff ff    	mov    DWORD PTR [esi],0xffffffff
  4b5fb0:	c7 46 04 ff ff ff ff 	mov    DWORD PTR [esi+0x4],0xffffffff
  4b5fb7:	c7 46 08 00 00 80 3f 	mov    DWORD PTR [esi+0x8],0x3f800000
  4b5fbe:	c6 46 0c 01          	mov    BYTE PTR [esi+0xc],0x1
  4b5fc2:	e8 d9 44 15 00       	call   0x60a4a0
  4b5fc7:	99                   	cdq
  4b5fc8:	b9 10 27 00 00       	mov    ecx,0x2710
  4b5fcd:	f7 f9                	idiv   ecx
  4b5fcf:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  4b5fd3:	db 44 24 3c          	fild   DWORD PTR [esp+0x3c]
  4b5fd7:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4b5fdd:	d8 05 58 ec 64 00    	fadd   DWORD PTR ds:0x64ec58
  4b5fe3:	d9 9d 7c 01 00 00    	fstp   DWORD PTR [ebp+0x17c]
  4b5fe9:	e8 b2 44 15 00       	call   0x60a4a0
  4b5fee:	99                   	cdq
  4b5fef:	b9 10 27 00 00       	mov    ecx,0x2710
  4b5ff4:	f7 f9                	idiv   ecx
  4b5ff6:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  4b5ffa:	db 44 24 3c          	fild   DWORD PTR [esp+0x3c]
  4b5ffe:	d8 0d 74 e8 64 00    	fmul   DWORD PTR ds:0x64e874
  4b6004:	d8 05 58 ad 64 00    	fadd   DWORD PTR ds:0x64ad58
  4b600a:	d9 9d 80 01 00 00    	fstp   DWORD PTR [ebp+0x180]
  4b6010:	e8 8b 44 15 00       	call   0x60a4a0
  4b6015:	99                   	cdq
  4b6016:	b9 10 27 00 00       	mov    ecx,0x2710
  4b601b:	f7 f9                	idiv   ecx
  4b601d:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  4b6021:	db 44 24 3c          	fild   DWORD PTR [esp+0x3c]
  4b6025:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4b602b:	d8 05 58 ec 64 00    	fadd   DWORD PTR ds:0x64ec58
  4b6031:	d9 9d 84 01 00 00    	fstp   DWORD PTR [ebp+0x184]
  4b6037:	e8 64 44 15 00       	call   0x60a4a0
  4b603c:	99                   	cdq
  4b603d:	b9 10 27 00 00       	mov    ecx,0x2710
  4b6042:	6a 01                	push   0x1
  4b6044:	f7 f9                	idiv   ecx
  4b6046:	8b cd                	mov    ecx,ebp
  4b6048:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  4b604c:	db 44 24 40          	fild   DWORD PTR [esp+0x40]
  4b6050:	d8 0d 74 e8 64 00    	fmul   DWORD PTR ds:0x64e874
  4b6056:	d8 05 f8 d7 64 00    	fadd   DWORD PTR ds:0x64d7f8
  4b605c:	d9 9d 88 01 00 00    	fstp   DWORD PTR [ebp+0x188]
  4b6062:	e8 59 bd 0d 00       	call   0x591dc0
  4b6067:	8b 9d 9c 01 00 00    	mov    ebx,DWORD PTR [ebp+0x19c]
  4b606d:	85 db                	test   ebx,ebx
  4b606f:	0f 84 dc 00 00 00    	je     0x4b6151
  4b6075:	8a 54 24 3c          	mov    dl,BYTE PTR [esp+0x3c]
  4b6079:	b8 00 00 7a 43       	mov    eax,0x437a0000
  4b607e:	6a 00                	push   0x0
  4b6080:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4b6084:	89 43 40             	mov    DWORD PTR [ebx+0x40],eax
  4b6087:	89 43 44             	mov    DWORD PTR [ebx+0x44],eax
  4b608a:	c7 43 48 00 00 48 43 	mov    DWORD PTR [ebx+0x48],0x43480000
  4b6091:	c7 43 4c 00 00 34 43 	mov    DWORD PTR [ebx+0x4c],0x43340000
  4b6098:	c7 43 3c 0a d7 23 3f 	mov    DWORD PTR [ebx+0x3c],0x3f23d70a
  4b609f:	c7 43 50 00 00 80 41 	mov    DWORD PTR [ebx+0x50],0x41800000
  4b60a6:	c7 43 58 2c 01 00 00 	mov    DWORD PTR [ebx+0x58],0x12c
  4b60ad:	88 54 24 20          	mov    BYTE PTR [esp+0x20],dl
  4b60b1:	e8 ea df f4 ff       	call   0x4040a0
  4b60b6:	bf 98 70 69 00       	mov    edi,0x697098
  4b60bb:	83 c9 ff             	or     ecx,0xffffffff
  4b60be:	33 c0                	xor    eax,eax
  4b60c0:	6a 01                	push   0x1
  4b60c2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4b60c4:	f7 d1                	not    ecx
  4b60c6:	49                   	dec    ecx
  4b60c7:	8b f1                	mov    esi,ecx
  4b60c9:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4b60cd:	56                   	push   esi
  4b60ce:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
  4b60d2:	e8 69 b8 f4 ff       	call   0x401940
  4b60d7:	84 c0                	test   al,al
  4b60d9:	74 25                	je     0x4b6100
  4b60db:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  4b60df:	8b ce                	mov    ecx,esi
  4b60e1:	8b c1                	mov    eax,ecx
  4b60e3:	be 98 70 69 00       	mov    esi,0x697098
  4b60e8:	c1 e9 02             	shr    ecx,0x2
  4b60eb:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4b60ed:	8b c8                	mov    ecx,eax
  4b60ef:	83 e1 03             	and    ecx,0x3
  4b60f2:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4b60f4:	8b c8                	mov    ecx,eax
  4b60f6:	51                   	push   ecx
  4b60f7:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4b60fb:	e8 90 e0 f4 ff       	call   0x404190
  4b6100:	51                   	push   ecx
  4b6101:	8d 44 24 20          	lea    eax,[esp+0x20]
  4b6105:	8b d4                	mov    edx,esp
  4b6107:	89 64 24 40          	mov    DWORD PTR [esp+0x40],esp
  4b610b:	50                   	push   eax
  4b610c:	52                   	push   edx
  4b610d:	c6 44 24 40 09       	mov    BYTE PTR [esp+0x40],0x9
  4b6112:	e8 e9 e0 f9 ff       	call   0x454200
  4b6117:	8b c8                	mov    ecx,eax
  4b6119:	e8 e2 76 fc ff       	call   0x47d800
  4b611e:	8b c8                	mov    ecx,eax
  4b6120:	e8 5b 78 05 00       	call   0x50d980
  4b6125:	8b cb                	mov    ecx,ebx
  4b6127:	e8 d4 0f 0d 00       	call   0x587100
  4b612c:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  4b6130:	85 c0                	test   eax,eax
  4b6132:	74 1d                	je     0x4b6151
  4b6134:	8d 48 ff             	lea    ecx,[eax-0x1]
  4b6137:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4b613a:	84 c0                	test   al,al
  4b613c:	74 0a                	je     0x4b6148
  4b613e:	3c ff                	cmp    al,0xff
  4b6140:	74 06                	je     0x4b6148
  4b6142:	fe c8                	dec    al
  4b6144:	88 01                	mov    BYTE PTR [ecx],al
  4b6146:	eb 09                	jmp    0x4b6151
  4b6148:	51                   	push   ecx
  4b6149:	e8 a2 84 14 00       	call   0x5fe5f0
  4b614e:	83 c4 04             	add    esp,0x4
  4b6151:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4b6155:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  4b615a:	85 c0                	test   eax,eax
  4b615c:	74 18                	je     0x4b6176
  4b615e:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4b6161:	8b c8                	mov    ecx,eax
  4b6163:	83 c0 14             	add    eax,0x14
  4b6166:	4e                   	dec    esi
  4b6167:	8b d6                	mov    edx,esi
  4b6169:	85 d2                	test   edx,edx
  4b616b:	89 30                	mov    DWORD PTR [eax],esi
  4b616d:	75 07                	jne    0x4b6176
  4b616f:	6a 00                	push   0x0
  4b6171:	e8 4a 5e 0f 00       	call   0x5abfc0
  4b6176:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  4b617a:	5f                   	pop    edi
  4b617b:	8b c5                	mov    eax,ebp
  4b617d:	5e                   	pop    esi
  4b617e:	5d                   	pop    ebp
  4b617f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4b6186:	5b                   	pop    ebx
  4b6187:	83 c4 28             	add    esp,0x28
  4b618a:	c2 10 00             	ret    0x10
  4b618d:	90                   	nop
  4b618e:	90                   	nop
  4b618f:	90                   	nop
  4b6190:	56                   	push   esi
  4b6191:	8b f1                	mov    esi,ecx
  4b6193:	e8 18 00 00 00       	call   0x4b61b0
  4b6198:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  4b619d:	74 09                	je     0x4b61a8
  4b619f:	56                   	push   esi
  4b61a0:	e8 4b 84 14 00       	call   0x5fe5f0
  4b61a5:	83 c4 04             	add    esp,0x4
  4b61a8:	8b c6                	mov    eax,esi
  4b61aa:	5e                   	pop    esi
  4b61ab:	c2 04 00             	ret    0x4
  4b61ae:	90                   	nop
  4b61af:	90                   	nop
  4b61b0:	6a ff                	push   0xffffffff
  4b61b2:	68 68 ed 62 00       	push   0x62ed68
  4b61b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4b61bd:	50                   	push   eax
  4b61be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4b61c5:	51                   	push   ecx
  4b61c6:	56                   	push   esi
  4b61c7:	8b f1                	mov    esi,ecx
  4b61c9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  4b61cd:	8b 8e dc 01 00 00    	mov    ecx,DWORD PTR [esi+0x1dc]
  4b61d3:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  4b61da:	00 
  4b61db:	85 c9                	test   ecx,ecx
  4b61dd:	74 1a                	je     0x4b61f9
  4b61df:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  4b61e2:	48                   	dec    eax
  4b61e3:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  4b61e6:	75 07                	jne    0x4b61ef
  4b61e8:	6a 00                	push   0x0
  4b61ea:	e8 d1 5d 0f 00       	call   0x5abfc0
  4b61ef:	c7 86 dc 01 00 00 00 	mov    DWORD PTR [esi+0x1dc],0x0
  4b61f6:	00 00 00 
  4b61f9:	8b ce                	mov    ecx,esi
  4b61fb:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  4b6202:	ff 
  4b6203:	e8 88 b4 0d 00       	call   0x591690
  4b6208:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4b620c:	5e                   	pop    esi
  4b620d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4b6214:	83 c4 10             	add    esp,0x10
  4b6217:	c3                   	ret
  4b6218:	90                   	nop
  4b6219:	90                   	nop
  4b621a:	90                   	nop
  4b621b:	90                   	nop
  4b621c:	90                   	nop
  4b621d:	90                   	nop
  4b621e:	90                   	nop
  4b621f:	90                   	nop
  4b6220:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4b6226:	6a ff                	push   0xffffffff
  4b6228:	68 49 ef 62 00       	push   0x62ef49
  4b622d:	50                   	push   eax
  4b622e:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4b6232:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4b6239:	81 ec f0 00 00 00    	sub    esp,0xf0
  4b623f:	53                   	push   ebx
  4b6240:	55                   	push   ebp
  4b6241:	83 cd ff             	or     ebp,0xffffffff
  4b6244:	56                   	push   esi
  4b6245:	33 db                	xor    ebx,ebx
  4b6247:	57                   	push   edi
  4b6248:	3b c5                	cmp    eax,ebp
  4b624a:	8b f9                	mov    edi,ecx
  4b624c:	75 4a                	jne    0x4b6298
  4b624e:	8d 44 24 43          	lea    eax,[esp+0x43]
  4b6252:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  4b6256:	50                   	push   eax
  4b6257:	68 70 3f 6b 00       	push   0x6b3f70
  4b625c:	e8 af 35 f5 ff       	call   0x409810
  4b6261:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  4b6265:	89 9c 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebx
  4b626c:	51                   	push   ecx
  4b626d:	68 8a 00 00 00       	push   0x8a
  4b6272:	68 2c e2 68 00       	push   0x68e22c
  4b6277:	68 14 e2 68 00       	push   0x68e214
  4b627c:	e8 6f a5 0e 00       	call   0x5a07f0
  4b6281:	ff d0                	call   eax
  4b6283:	83 c4 10             	add    esp,0x10
  4b6286:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  4b628a:	89 ac 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebp
  4b6291:	6a 01                	push   0x1
  4b6293:	e8 08 de f4 ff       	call   0x4040a0
  4b6298:	db 84 24 14 01 00 00 	fild   DWORD PTR [esp+0x114]
  4b629f:	8b 87 ac 01 00 00    	mov    eax,DWORD PTR [edi+0x1ac]
  4b62a5:	8b b4 24 10 01 00 00 	mov    esi,DWORD PTR [esp+0x110]
  4b62ac:	3b c5                	cmp    eax,ebp
  4b62ae:	d8 8f c0 01 00 00    	fmul   DWORD PTR [edi+0x1c0]
  4b62b4:	d8 0d d0 ec 64 00    	fmul   DWORD PTR ds:0x64ecd0
  4b62ba:	d8 af c8 01 00 00    	fsubr  DWORD PTR [edi+0x1c8]
  4b62c0:	d9 9f c8 01 00 00    	fstp   DWORD PTR [edi+0x1c8]
  4b62c6:	74 66                	je     0x4b632e
  4b62c8:	8b c8                	mov    ecx,eax
  4b62ca:	b2 01                	mov    dl,0x1
  4b62cc:	3b cd                	cmp    ecx,ebp
  4b62ce:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
  4b62d2:	74 4c                	je     0x4b6320
  4b62d4:	8b 87 b0 01 00 00    	mov    eax,DWORD PTR [edi+0x1b0]
  4b62da:	3b c5                	cmp    eax,ebp
  4b62dc:	75 14                	jne    0x4b62f2
  4b62de:	03 ce                	add    ecx,esi
  4b62e0:	c7 87 b4 01 00 00 00 	mov    DWORD PTR [edi+0x1b4],0x3f800000
  4b62e7:	00 80 3f 
  4b62ea:	89 8f b0 01 00 00    	mov    DWORD PTR [edi+0x1b0],ecx
  4b62f0:	eb 2e                	jmp    0x4b6320
  4b62f2:	3b f0                	cmp    esi,eax
  4b62f4:	7e 0a                	jle    0x4b6300
  4b62f6:	89 9f b4 01 00 00    	mov    DWORD PTR [edi+0x1b4],ebx
  4b62fc:	32 d2                	xor    dl,dl
  4b62fe:	eb 20                	jmp    0x4b6320
  4b6300:	3b cb                	cmp    ecx,ebx
  4b6302:	7e 16                	jle    0x4b631a
  4b6304:	2b c6                	sub    eax,esi
  4b6306:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  4b630a:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  4b630e:	da 74 24 3c          	fidiv  DWORD PTR [esp+0x3c]
  4b6312:	d9 9f b4 01 00 00    	fstp   DWORD PTR [edi+0x1b4]
  4b6318:	eb 06                	jmp    0x4b6320
  4b631a:	89 9f b4 01 00 00    	mov    DWORD PTR [edi+0x1b4],ebx
  4b6320:	84 d2                	test   dl,dl
  4b6322:	88 97 b8 01 00 00    	mov    BYTE PTR [edi+0x1b8],dl
  4b6328:	0f 85 22 14 00 00    	jne    0x4b7750
  4b632e:	8b 87 a0 01 00 00    	mov    eax,DWORD PTR [edi+0x1a0]
  4b6334:	8b c8                	mov    ecx,eax
  4b6336:	49                   	dec    ecx
  4b6337:	74 3e                	je     0x4b6377
  4b6339:	50                   	push   eax
  4b633a:	8d 94 24 e4 00 00 00 	lea    edx,[esp+0xe4]
  4b6341:	68 ac 70 69 00       	push   0x6970ac
  4b6346:	52                   	push   edx
  4b6347:	e8 44 80 0f 00       	call   0x5ae390
  4b634c:	83 c4 0c             	add    esp,0xc
  4b634f:	50                   	push   eax
  4b6350:	8b cf                	mov    ecx,edi
  4b6352:	c7 84 24 0c 01 00 00 	mov    DWORD PTR [esp+0x10c],0x1
  4b6359:	01 00 00 00 
  4b635d:	e8 3e d2 04 00       	call   0x5035a0
  4b6362:	6a 01                	push   0x1
  4b6364:	8d 8c 24 e4 00 00 00 	lea    ecx,[esp+0xe4]
  4b636b:	89 ac 24 0c 01 00 00 	mov    DWORD PTR [esp+0x10c],ebp
  4b6372:	e8 29 dd f4 ff       	call   0x4040a0
  4b6377:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
  4b637b:	bb 00 00 70 42       	mov    ebx,0x42700000
  4b6380:	e8 1b 41 15 00       	call   0x60a4a0
  4b6385:	99                   	cdq
  4b6386:	b9 0b 00 00 00       	mov    ecx,0xb
  4b638b:	f7 f9                	idiv   ecx
  4b638d:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  4b6391:	83 c2 0a             	add    edx,0xa
  4b6394:	3b c2                	cmp    eax,edx
  4b6396:	0f 8d e3 03 00 00    	jge    0x4b677f
  4b639c:	e8 ff 40 15 00       	call   0x60a4a0
  4b63a1:	99                   	cdq
  4b63a2:	b9 10 27 00 00       	mov    ecx,0x2710
  4b63a7:	f7 f9                	idiv   ecx
  4b63a9:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  4b63ad:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  4b63b1:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  4b63b7:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  4b63bd:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
  4b63c1:	e8 da 40 15 00       	call   0x60a4a0
  4b63c6:	99                   	cdq
  4b63c7:	b9 10 27 00 00       	mov    ecx,0x2710
  4b63cc:	f7 f9                	idiv   ecx
  4b63ce:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  4b63d2:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  4b63d6:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  4b63dc:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  4b63e2:	d9 5c 24 5c          	fstp   DWORD PTR [esp+0x5c]
  4b63e6:	e8 b5 40 15 00       	call   0x60a4a0
  4b63eb:	99                   	cdq
  4b63ec:	b9 10 27 00 00       	mov    ecx,0x2710
  4b63f1:	f7 f9                	idiv   ecx
  4b63f3:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  4b63f7:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  4b63fb:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  4b63ff:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  4b6405:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  4b640b:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  4b640f:	e8 0c cb 0f 00       	call   0x5b2f20
  4b6414:	8d 54 24 58          	lea    edx,[esp+0x58]
  4b6418:	53                   	push   ebx
  4b6419:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4b641d:	dd d8                	fstp   st(0)
  4b641f:	e8 7c cb 0f 00       	call   0x5b2fa0
  4b6424:	68 84 01 00 00       	push   0x184
  4b6429:	e8 87 3c 15 00       	call   0x60a0b5
  4b642e:	8b f0                	mov    esi,eax
  4b6430:	83 c4 04             	add    esp,0x4
  4b6433:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
  4b6437:	85 f6                	test   esi,esi
  4b6439:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0x2
  4b6440:	02 00 00 00 
  4b6444:	0f 84 49 02 00 00    	je     0x4b6693
  4b644a:	8b 97 fc 00 00 00    	mov    edx,DWORD PTR [edi+0xfc]
  4b6450:	8b 8f 04 01 00 00    	mov    ecx,DWORD PTR [edi+0x104]
  4b6456:	8b 87 00 01 00 00    	mov    eax,DWORD PTR [edi+0x100]
  4b645c:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  4b6460:	8d 54 24 43          	lea    edx,[esp+0x43]
  4b6464:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  4b6468:	52                   	push   edx
  4b6469:	68 bc 6f 69 00       	push   0x696fbc
  4b646e:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  4b6475:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  4b6479:	e8 92 33 f5 ff       	call   0x409810
  4b647e:	8d 84 24 d0 00 00 00 	lea    eax,[esp+0xd0]
  4b6485:	8d 8c 24 f0 00 00 00 	lea    ecx,[esp+0xf0]
  4b648c:	50                   	push   eax
  4b648d:	51                   	push   ecx
  4b648e:	c6 84 24 10 01 00 00 	mov    BYTE PTR [esp+0x110],0x3
  4b6495:	03 
  4b6496:	e8 05 cf 04 00       	call   0x5033a0
  4b649b:	83 c4 08             	add    esp,0x8
  4b649e:	50                   	push   eax
  4b649f:	8b ce                	mov    ecx,esi
  4b64a1:	c6 84 24 0c 01 00 00 	mov    BYTE PTR [esp+0x10c],0x4
  4b64a8:	04 
  4b64a9:	e8 02 b8 04 00       	call   0x501cb0
  4b64ae:	6a 01                	push   0x1
  4b64b0:	8d 8c 24 f4 00 00 00 	lea    ecx,[esp+0xf4]
  4b64b7:	c6 84 24 0c 01 00 00 	mov    BYTE PTR [esp+0x10c],0x7
  4b64be:	07 
  4b64bf:	e8 dc db f4 ff       	call   0x4040a0
  4b64c4:	6a 01                	push   0x1
  4b64c6:	8d 8c 24 d4 00 00 00 	lea    ecx,[esp+0xd4]
  4b64cd:	c6 84 24 0c 01 00 00 	mov    BYTE PTR [esp+0x10c],0x6
  4b64d4:	06 
  4b64d5:	e8 c6 db f4 ff       	call   0x4040a0
  4b64da:	d9 05 6c f3 64 00    	fld    DWORD PTR ds:0x64f36c
  4b64e0:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  4b64e6:	e8 35 46 15 00       	call   0x60ab20
  4b64eb:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  4b64ef:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  4b64f3:	d9 c0                	fld    st(0)
  4b64f5:	d8 0d 5c d6 64 00    	fmul   DWORD PTR ds:0x64d65c
  4b64fb:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
  4b64ff:	d8 0d 84 bd 64 00    	fmul   DWORD PTR ds:0x64bd84
  4b6505:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  4b6509:	e8 92 3f 15 00       	call   0x60a4a0
  4b650e:	99                   	cdq
  4b650f:	b9 10 27 00 00       	mov    ecx,0x2710
  4b6514:	f7 f9                	idiv   ecx
  4b6516:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
  4b651a:	db 44 24 4c          	fild   DWORD PTR [esp+0x4c]
  4b651e:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
  4b6522:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  4b6526:	de c9                	fmulp  st(1),st
  4b6528:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  4b652e:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  4b6532:	e8 e9 45 15 00       	call   0x60ab20
  4b6537:	8d 8e f8 00 00 00    	lea    ecx,[esi+0xf8]
  4b653d:	50                   	push   eax
  4b653e:	e8 6d dc f4 ff       	call   0x4041b0
  4b6543:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  4b6547:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  4b654b:	8d 96 28 01 00 00    	lea    edx,[esi+0x128]
  4b6551:	8b ea                	mov    ebp,edx
  4b6553:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  4b6557:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
  4b655a:	89 4d 04             	mov    DWORD PTR [ebp+0x4],ecx
  4b655d:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
  4b6560:	8d ae 34 01 00 00    	lea    ebp,[esi+0x134]
  4b6566:	89 86 34 01 00 00    	mov    DWORD PTR [esi+0x134],eax
  4b656c:	8d 86 40 01 00 00    	lea    eax,[esi+0x140]
  4b6572:	89 4d 04             	mov    DWORD PTR [ebp+0x4],ecx
  4b6575:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
  4b6578:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  4b657c:	89 08                	mov    DWORD PTR [eax],ecx
  4b657e:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  4b6582:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  4b6585:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  4b6589:	8d 96 4c 01 00 00    	lea    edx,[esi+0x14c]
  4b658f:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  4b6592:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  4b6596:	6a 00                	push   0x0
  4b6598:	89 02                	mov    DWORD PTR [edx],eax
  4b659a:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  4b659e:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  4b65a1:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  4b65a5:	c6 86 58 01 00 00 00 	mov    BYTE PTR [esi+0x158],0x0
  4b65ac:	8d 8e 68 01 00 00    	lea    ecx,[esi+0x168]
  4b65b2:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  4b65b5:	a1 38 95 6b 00       	mov    eax,ds:0x6b9538
  4b65ba:	40                   	inc    eax
  4b65bb:	a3 38 95 6b 00       	mov    ds:0x6b9538,eax
  4b65c0:	89 86 5c 01 00 00    	mov    DWORD PTR [esi+0x15c],eax
  4b65c6:	c6 86 60 01 00 00 00 	mov    BYTE PTR [esi+0x160],0x0
  4b65cd:	c7 86 64 01 00 00 00 	mov    DWORD PTR [esi+0x164],0x3f800000
  4b65d4:	00 80 3f 
  4b65d7:	e8 64 0c fa ff       	call   0x457240
  4b65dc:	8d 4c 24 53          	lea    ecx,[esp+0x53]
  4b65e0:	8d ae 6c 01 00 00    	lea    ebp,[esi+0x16c]
  4b65e6:	51                   	push   ecx
  4b65e7:	68 70 3f 6b 00       	push   0x6b3f70
  4b65ec:	8b cd                	mov    ecx,ebp
  4b65ee:	c6 84 24 10 01 00 00 	mov    BYTE PTR [esp+0x110],0x8
  4b65f5:	08 
  4b65f6:	e8 15 32 f5 ff       	call   0x409810
  4b65fb:	c7 86 7c 01 00 00 0a 	mov    DWORD PTR [esi+0x17c],0x3ea3d70a
  4b6602:	d7 a3 3e 
  4b6605:	c7 86 80 01 00 00 8f 	mov    DWORD PTR [esi+0x180],0x3ff5c28f
  4b660c:	c2 f5 3f 
  4b660f:	c7 06 04 ec 64 00    	mov    DWORD PTR [esi],0x64ec04
  4b6615:	8b 15 3c 95 6b 00    	mov    edx,DWORD PTR ds:0x6b953c
  4b661b:	42                   	inc    edx
  4b661c:	b9 00 95 6b 00       	mov    ecx,0x6b9500
  4b6621:	89 15 3c 95 6b 00    	mov    DWORD PTR ds:0x6b953c,edx
  4b6627:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x9
  4b662e:	09 
  4b662f:	c7 86 08 01 00 00 00 	mov    DWORD PTR [esi+0x108],0x437a0000
  4b6636:	00 7a 43 
  4b6639:	c7 86 0c 01 00 00 00 	mov    DWORD PTR [esi+0x10c],0x43700000
  4b6640:	00 70 43 
  4b6643:	c7 86 10 01 00 00 00 	mov    DWORD PTR [esi+0x110],0x43340000
  4b664a:	00 34 43 
  4b664d:	c7 86 14 01 00 00 00 	mov    DWORD PTR [esi+0x114],0x437f0000
  4b6654:	00 7f 43 
  4b6657:	c7 86 18 01 00 00 00 	mov    DWORD PTR [esi+0x118],0x43740000
  4b665e:	00 74 43 
  4b6661:	c7 86 1c 01 00 00 00 	mov    DWORD PTR [esi+0x11c],0x43550000
  4b6668:	00 55 43 
  4b666b:	c7 86 20 01 00 00 00 	mov    DWORD PTR [esi+0x120],0x42cc0000
  4b6672:	00 cc 42 
  4b6675:	89 9e 24 01 00 00    	mov    DWORD PTR [esi+0x124],ebx
  4b667b:	e8 e0 b6 0e 00       	call   0x5a1d60
  4b6680:	8b 15 a8 ab 64 00    	mov    edx,DWORD PTR ds:0x64aba8
  4b6686:	8b cd                	mov    ecx,ebp
  4b6688:	52                   	push   edx
  4b6689:	6a 00                	push   0x0
  4b668b:	50                   	push   eax
  4b668c:	e8 6f 65 f5 ff       	call   0x40cc00
  4b6691:	eb 02                	jmp    0x4b6695
  4b6693:	33 f6                	xor    esi,esi
  4b6695:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0xffffffff
  4b669c:	ff ff ff ff 
  4b66a0:	e8 fb 3d 15 00       	call   0x60a4a0
  4b66a5:	99                   	cdq
  4b66a6:	b9 10 27 00 00       	mov    ecx,0x2710
  4b66ab:	f7 f9                	idiv   ecx
  4b66ad:	89 54 24 48          	mov    DWORD PTR [esp+0x48],edx
  4b66b1:	db 44 24 48          	fild   DWORD PTR [esp+0x48]
  4b66b5:	d8 0d cc ec 64 00    	fmul   DWORD PTR ds:0x64eccc
  4b66bb:	d8 05 c8 ec 64 00    	fadd   DWORD PTR ds:0x64ecc8
  4b66c1:	e8 5a 44 15 00       	call   0x60ab20
  4b66c6:	50                   	push   eax
  4b66c7:	8d 8e f8 00 00 00    	lea    ecx,[esi+0xf8]
  4b66cd:	e8 de da f4 ff       	call   0x4041b0
  4b66d2:	6a 01                	push   0x1
  4b66d4:	8b ce                	mov    ecx,esi
  4b66d6:	c7 86 64 01 00 00 00 	mov    DWORD PTR [esi+0x164],0x3fc00000
  4b66dd:	00 c0 3f 
  4b66e0:	e8 6b bc 04 00       	call   0x502350
  4b66e5:	8d 54 24 74          	lea    edx,[esp+0x74]
  4b66e9:	8b cf                	mov    ecx,edi
  4b66eb:	52                   	push   edx
  4b66ec:	e8 ef db f4 ff       	call   0x4042e0
  4b66f1:	8b e8                	mov    ebp,eax
  4b66f3:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b66f6:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0xa
  4b66fd:	0a 00 00 00 
  4b6701:	85 c0                	test   eax,eax
  4b6703:	75 4c                	jne    0x4b6751
  4b6705:	8d 44 24 13          	lea    eax,[esp+0x13]
  4b6709:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b670d:	50                   	push   eax
  4b670e:	68 70 3f 6b 00       	push   0x6b3f70
  4b6713:	e8 f8 30 f5 ff       	call   0x409810
  4b6718:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b671c:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0xb
  4b6723:	0b 
  4b6724:	51                   	push   ecx
  4b6725:	68 b6 00 00 00       	push   0xb6
  4b672a:	68 38 d6 68 00       	push   0x68d638
  4b672f:	68 2c d6 68 00       	push   0x68d62c
  4b6734:	e8 b7 a0 0e 00       	call   0x5a07f0
  4b6739:	ff d0                	call   eax
  4b673b:	83 c4 10             	add    esp,0x10
  4b673e:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6742:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0xa
  4b6749:	0a 
  4b674a:	6a 01                	push   0x1
  4b674c:	e8 4f d9 f4 ff       	call   0x4040a0
  4b6751:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  4b6754:	56                   	push   esi
  4b6755:	e8 66 da 03 00       	call   0x4f41c0
  4b675a:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  4b675e:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0xffffffff
  4b6765:	ff ff ff ff 
  4b6769:	e8 a2 6b 0c 00       	call   0x57d310
  4b676e:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  4b6772:	40                   	inc    eax
  4b6773:	83 cd ff             	or     ebp,0xffffffff
  4b6776:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  4b677a:	e9 01 fc ff ff       	jmp    0x4b6380
  4b677f:	e8 1c 3d 15 00       	call   0x60a4a0
  4b6784:	99                   	cdq
  4b6785:	b9 14 00 00 00       	mov    ecx,0x14
  4b678a:	f7 f9                	idiv   ecx
  4b678c:	83 fa 05             	cmp    edx,0x5
  4b678f:	0f 87 e4 04 00 00    	ja     0x4b6c79
  4b6795:	ff 24 95 8c 77 4b 00 	jmp    DWORD PTR [edx*4+0x4b778c]
  4b679c:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b67a2:	8b 97 fc 00 00 00    	mov    edx,DWORD PTR [edi+0xfc]
  4b67a8:	8b 87 00 01 00 00    	mov    eax,DWORD PTR [edi+0x100]
  4b67ae:	8b 8f 04 01 00 00    	mov    ecx,DWORD PTR [edi+0x104]
  4b67b4:	85 f6                	test   esi,esi
  4b67b6:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  4b67ba:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  4b67be:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  4b67c2:	89 94 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],edx
  4b67c9:	89 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],eax
  4b67d0:	89 8c 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],ecx
  4b67d7:	75 07                	jne    0x4b67e0
  4b67d9:	e8 a2 4a 0a 00       	call   0x55b280
  4b67de:	8b f0                	mov    esi,eax
  4b67e0:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  4b67e6:	85 c0                	test   eax,eax
  4b67e8:	75 4e                	jne    0x4b6838
  4b67ea:	8d 54 24 13          	lea    edx,[esp+0x13]
  4b67ee:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b67f2:	52                   	push   edx
  4b67f3:	68 70 3f 6b 00       	push   0x6b3f70
  4b67f8:	e8 13 30 f5 ff       	call   0x409810
  4b67fd:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  4b6801:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0xc
  4b6808:	0c 00 00 00 
  4b680c:	50                   	push   eax
  4b680d:	68 8f 01 00 00       	push   0x18f
  4b6812:	68 58 eb 68 00       	push   0x68eb58
  4b6817:	68 ec f8 68 00       	push   0x68f8ec
  4b681c:	e8 cf 9f 0e 00       	call   0x5a07f0
  4b6821:	ff d0                	call   eax
  4b6823:	83 c4 10             	add    esp,0x10
  4b6826:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b682a:	89 ac 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebp
  4b6831:	6a 01                	push   0x1
  4b6833:	e8 68 d8 f4 ff       	call   0x4040a0
  4b6838:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  4b683e:	6a 00                	push   0x0
  4b6840:	6a 00                	push   0x0
  4b6842:	68 00 00 80 3f       	push   0x3f800000
  4b6847:	6a 01                	push   0x1
  4b6849:	8d 94 24 a4 00 00 00 	lea    edx,[esp+0xa4]
  4b6850:	6a 00                	push   0x0
  4b6852:	52                   	push   edx
  4b6853:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  4b685a:	68 78 a5 6b 00       	push   0x6ba578
  4b685f:	50                   	push   eax
  4b6860:	e8 9b 81 09 00       	call   0x54ea00
  4b6865:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  4b6869:	e9 06 04 00 00       	jmp    0x4b6c74
  4b686e:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b6874:	8b 8f fc 00 00 00    	mov    ecx,DWORD PTR [edi+0xfc]
  4b687a:	8b 97 00 01 00 00    	mov    edx,DWORD PTR [edi+0x100]
  4b6880:	8b 87 04 01 00 00    	mov    eax,DWORD PTR [edi+0x104]
  4b6886:	85 f6                	test   esi,esi
  4b6888:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  4b688c:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  4b6890:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  4b6894:	89 8c 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],ecx
  4b689b:	89 94 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],edx
  4b68a2:	89 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],eax
  4b68a9:	75 07                	jne    0x4b68b2
  4b68ab:	e8 d0 49 0a 00       	call   0x55b280
  4b68b0:	8b f0                	mov    esi,eax
  4b68b2:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  4b68b8:	85 c0                	test   eax,eax
  4b68ba:	75 4e                	jne    0x4b690a
  4b68bc:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4b68c0:	51                   	push   ecx
  4b68c1:	68 70 3f 6b 00       	push   0x6b3f70
  4b68c6:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4b68ca:	e8 41 2f f5 ff       	call   0x409810
  4b68cf:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4b68d3:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0xd
  4b68da:	0d 00 00 00 
  4b68de:	52                   	push   edx
  4b68df:	68 8f 01 00 00       	push   0x18f
  4b68e4:	68 58 eb 68 00       	push   0x68eb58
  4b68e9:	68 ec f8 68 00       	push   0x68f8ec
  4b68ee:	e8 fd 9e 0e 00       	call   0x5a07f0
  4b68f3:	ff d0                	call   eax
  4b68f5:	83 c4 10             	add    esp,0x10
  4b68f8:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b68fc:	89 ac 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebp
  4b6903:	6a 01                	push   0x1
  4b6905:	e8 96 d7 f4 ff       	call   0x4040a0
  4b690a:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  4b6910:	6a 00                	push   0x0
  4b6912:	6a 00                	push   0x0
  4b6914:	68 00 00 80 3f       	push   0x3f800000
  4b6919:	6a 01                	push   0x1
  4b691b:	8d 84 24 c8 00 00 00 	lea    eax,[esp+0xc8]
  4b6922:	6a 00                	push   0x0
  4b6924:	50                   	push   eax
  4b6925:	8d 94 24 80 00 00 00 	lea    edx,[esp+0x80]
  4b692c:	68 50 a5 6b 00       	push   0x6ba550
  4b6931:	52                   	push   edx
  4b6932:	e8 c9 80 09 00       	call   0x54ea00
  4b6937:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4b693b:	e9 34 03 00 00       	jmp    0x4b6c74
  4b6940:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b6946:	8b 87 fc 00 00 00    	mov    eax,DWORD PTR [edi+0xfc]
  4b694c:	8b 8f 00 01 00 00    	mov    ecx,DWORD PTR [edi+0x100]
  4b6952:	8b 97 04 01 00 00    	mov    edx,DWORD PTR [edi+0x104]
  4b6958:	85 f6                	test   esi,esi
  4b695a:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  4b695e:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  4b6962:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  4b6966:	89 84 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],eax
  4b696d:	89 8c 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],ecx
  4b6974:	89 94 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],edx
  4b697b:	75 07                	jne    0x4b6984
  4b697d:	e8 fe 48 0a 00       	call   0x55b280
  4b6982:	8b f0                	mov    esi,eax
  4b6984:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  4b698a:	85 c0                	test   eax,eax
  4b698c:	75 4e                	jne    0x4b69dc
  4b698e:	8d 44 24 13          	lea    eax,[esp+0x13]
  4b6992:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6996:	50                   	push   eax
  4b6997:	68 70 3f 6b 00       	push   0x6b3f70
  4b699c:	e8 6f 2e f5 ff       	call   0x409810
  4b69a1:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b69a5:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0xe
  4b69ac:	0e 00 00 00 
  4b69b0:	51                   	push   ecx
  4b69b1:	68 8f 01 00 00       	push   0x18f
  4b69b6:	68 58 eb 68 00       	push   0x68eb58
  4b69bb:	68 ec f8 68 00       	push   0x68f8ec
  4b69c0:	e8 2b 9e 0e 00       	call   0x5a07f0
  4b69c5:	ff d0                	call   eax
  4b69c7:	83 c4 10             	add    esp,0x10
  4b69ca:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b69ce:	89 ac 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebp
  4b69d5:	6a 01                	push   0x1
  4b69d7:	e8 c4 d6 f4 ff       	call   0x4040a0
  4b69dc:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  4b69e2:	6a 00                	push   0x0
  4b69e4:	6a 00                	push   0x0
  4b69e6:	68 00 00 80 3f       	push   0x3f800000
  4b69eb:	6a 01                	push   0x1
  4b69ed:	8d 94 24 bc 00 00 00 	lea    edx,[esp+0xbc]
  4b69f4:	6a 00                	push   0x0
  4b69f6:	52                   	push   edx
  4b69f7:	8d 44 24 6c          	lea    eax,[esp+0x6c]
  4b69fb:	68 28 a5 6b 00       	push   0x6ba528
  4b6a00:	50                   	push   eax
  4b6a01:	e8 fa 7f 09 00       	call   0x54ea00
  4b6a06:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4b6a0a:	e9 65 02 00 00       	jmp    0x4b6c74
  4b6a0f:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b6a15:	8b 8f fc 00 00 00    	mov    ecx,DWORD PTR [edi+0xfc]
  4b6a1b:	8b 97 00 01 00 00    	mov    edx,DWORD PTR [edi+0x100]
  4b6a21:	8b 87 04 01 00 00    	mov    eax,DWORD PTR [edi+0x104]
  4b6a27:	85 f6                	test   esi,esi
  4b6a29:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  4b6a2d:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  4b6a31:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  4b6a35:	89 8c 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],ecx
  4b6a3c:	89 94 24 c8 00 00 00 	mov    DWORD PTR [esp+0xc8],edx
  4b6a43:	89 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],eax
  4b6a4a:	75 07                	jne    0x4b6a53
  4b6a4c:	e8 2f 48 0a 00       	call   0x55b280
  4b6a51:	8b f0                	mov    esi,eax
  4b6a53:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  4b6a59:	85 c0                	test   eax,eax
  4b6a5b:	75 4e                	jne    0x4b6aab
  4b6a5d:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4b6a61:	51                   	push   ecx
  4b6a62:	68 70 3f 6b 00       	push   0x6b3f70
  4b6a67:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4b6a6b:	e8 a0 2d f5 ff       	call   0x409810
  4b6a70:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4b6a74:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0xf
  4b6a7b:	0f 00 00 00 
  4b6a7f:	52                   	push   edx
  4b6a80:	68 8f 01 00 00       	push   0x18f
  4b6a85:	68 58 eb 68 00       	push   0x68eb58
  4b6a8a:	68 ec f8 68 00       	push   0x68f8ec
  4b6a8f:	e8 5c 9d 0e 00       	call   0x5a07f0
  4b6a94:	ff d0                	call   eax
  4b6a96:	83 c4 10             	add    esp,0x10
  4b6a99:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6a9d:	89 ac 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebp
  4b6aa4:	6a 01                	push   0x1
  4b6aa6:	e8 f5 d5 f4 ff       	call   0x4040a0
  4b6aab:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  4b6ab1:	6a 00                	push   0x0
  4b6ab3:	6a 00                	push   0x0
  4b6ab5:	68 00 00 80 3f       	push   0x3f800000
  4b6aba:	6a 01                	push   0x1
  4b6abc:	8d 84 24 d4 00 00 00 	lea    eax,[esp+0xd4]
  4b6ac3:	6a 00                	push   0x0
  4b6ac5:	50                   	push   eax
  4b6ac6:	8d 94 24 84 00 00 00 	lea    edx,[esp+0x84]
  4b6acd:	68 00 a5 6b 00       	push   0x6ba500
  4b6ad2:	52                   	push   edx
  4b6ad3:	e8 28 7f 09 00       	call   0x54ea00
  4b6ad8:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4b6adc:	e9 93 01 00 00       	jmp    0x4b6c74
  4b6ae1:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b6ae7:	8b 87 fc 00 00 00    	mov    eax,DWORD PTR [edi+0xfc]
  4b6aed:	8b 8f 00 01 00 00    	mov    ecx,DWORD PTR [edi+0x100]
  4b6af3:	8b 97 04 01 00 00    	mov    edx,DWORD PTR [edi+0x104]
  4b6af9:	85 f6                	test   esi,esi
  4b6afb:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  4b6aff:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  4b6b03:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  4b6b07:	89 84 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],eax
  4b6b0e:	89 8c 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],ecx
  4b6b15:	89 94 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],edx
  4b6b1c:	75 07                	jne    0x4b6b25
  4b6b1e:	e8 5d 47 0a 00       	call   0x55b280
  4b6b23:	8b f0                	mov    esi,eax
  4b6b25:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  4b6b2b:	85 c0                	test   eax,eax
  4b6b2d:	75 4e                	jne    0x4b6b7d
  4b6b2f:	8d 44 24 13          	lea    eax,[esp+0x13]
  4b6b33:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6b37:	50                   	push   eax
  4b6b38:	68 70 3f 6b 00       	push   0x6b3f70
  4b6b3d:	e8 ce 2c f5 ff       	call   0x409810
  4b6b42:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6b46:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0x10
  4b6b4d:	10 00 00 00 
  4b6b51:	51                   	push   ecx
  4b6b52:	68 8f 01 00 00       	push   0x18f
  4b6b57:	68 58 eb 68 00       	push   0x68eb58
  4b6b5c:	68 ec f8 68 00       	push   0x68f8ec
  4b6b61:	e8 8a 9c 0e 00       	call   0x5a07f0
  4b6b66:	ff d0                	call   eax
  4b6b68:	83 c4 10             	add    esp,0x10
  4b6b6b:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6b6f:	89 ac 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebp
  4b6b76:	6a 01                	push   0x1
  4b6b78:	e8 23 d5 f4 ff       	call   0x4040a0
  4b6b7d:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  4b6b83:	6a 00                	push   0x0
  4b6b85:	6a 00                	push   0x0
  4b6b87:	68 00 00 80 3f       	push   0x3f800000
  4b6b8c:	6a 01                	push   0x1
  4b6b8e:	8d 94 24 b0 00 00 00 	lea    edx,[esp+0xb0]
  4b6b95:	6a 00                	push   0x0
  4b6b97:	52                   	push   edx
  4b6b98:	8d 44 24 7c          	lea    eax,[esp+0x7c]
  4b6b9c:	68 d0 a4 6b 00       	push   0x6ba4d0
  4b6ba1:	50                   	push   eax
  4b6ba2:	e8 59 7e 09 00       	call   0x54ea00
  4b6ba7:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  4b6bab:	e9 c4 00 00 00       	jmp    0x4b6c74
  4b6bb0:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b6bb6:	8b 8f fc 00 00 00    	mov    ecx,DWORD PTR [edi+0xfc]
  4b6bbc:	8b 97 00 01 00 00    	mov    edx,DWORD PTR [edi+0x100]
  4b6bc2:	8b 87 04 01 00 00    	mov    eax,DWORD PTR [edi+0x104]
  4b6bc8:	85 f6                	test   esi,esi
  4b6bca:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  4b6bce:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  4b6bd2:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  4b6bd6:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
  4b6bda:	89 54 24 7c          	mov    DWORD PTR [esp+0x7c],edx
  4b6bde:	89 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],eax
  4b6be5:	75 07                	jne    0x4b6bee
  4b6be7:	e8 94 46 0a 00       	call   0x55b280
  4b6bec:	8b f0                	mov    esi,eax
  4b6bee:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  4b6bf4:	85 c0                	test   eax,eax
  4b6bf6:	75 4e                	jne    0x4b6c46
  4b6bf8:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4b6bfc:	51                   	push   ecx
  4b6bfd:	68 70 3f 6b 00       	push   0x6b3f70
  4b6c02:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4b6c06:	e8 05 2c f5 ff       	call   0x409810
  4b6c0b:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4b6c0f:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0x11
  4b6c16:	11 00 00 00 
  4b6c1a:	52                   	push   edx
  4b6c1b:	68 8f 01 00 00       	push   0x18f
  4b6c20:	68 58 eb 68 00       	push   0x68eb58
  4b6c25:	68 ec f8 68 00       	push   0x68f8ec
  4b6c2a:	e8 c1 9b 0e 00       	call   0x5a07f0
  4b6c2f:	ff d0                	call   eax
  4b6c31:	83 c4 10             	add    esp,0x10
  4b6c34:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6c38:	89 ac 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebp
  4b6c3f:	6a 01                	push   0x1
  4b6c41:	e8 5a d4 f4 ff       	call   0x4040a0
  4b6c46:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  4b6c4c:	6a 00                	push   0x0
  4b6c4e:	6a 00                	push   0x0
  4b6c50:	68 00 00 80 3f       	push   0x3f800000
  4b6c55:	6a 01                	push   0x1
  4b6c57:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  4b6c5e:	6a 00                	push   0x0
  4b6c60:	50                   	push   eax
  4b6c61:	8d 54 24 30          	lea    edx,[esp+0x30]
  4b6c65:	68 a8 a4 6b 00       	push   0x6ba4a8
  4b6c6a:	52                   	push   edx
  4b6c6b:	e8 90 7d 09 00       	call   0x54ea00
  4b6c70:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4b6c74:	e8 97 66 0c 00       	call   0x57d310
  4b6c79:	e8 22 38 15 00       	call   0x60a4a0
  4b6c7e:	99                   	cdq
  4b6c7f:	b9 10 27 00 00       	mov    ecx,0x2710
  4b6c84:	c7 87 7c 01 00 00 00 	mov    DWORD PTR [edi+0x17c],0x42c80000
  4b6c8b:	00 c8 42 
  4b6c8e:	f7 f9                	idiv   ecx
  4b6c90:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4b6c94:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  4b6c98:	d8 0d c4 ec 64 00    	fmul   DWORD PTR ds:0x64ecc4
  4b6c9e:	d8 05 74 b8 64 00    	fadd   DWORD PTR ds:0x64b874
  4b6ca4:	d9 9f 30 01 00 00    	fstp   DWORD PTR [edi+0x130]
  4b6caa:	e8 f1 37 15 00       	call   0x60a4a0
  4b6caf:	99                   	cdq
  4b6cb0:	b9 10 27 00 00       	mov    ecx,0x2710
  4b6cb5:	f7 f9                	idiv   ecx
  4b6cb7:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4b6cbb:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  4b6cbf:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4b6cc5:	d9 9f 80 01 00 00    	fstp   DWORD PTR [edi+0x180]
  4b6ccb:	e8 d0 37 15 00       	call   0x60a4a0
  4b6cd0:	99                   	cdq
  4b6cd1:	b9 10 27 00 00       	mov    ecx,0x2710
  4b6cd6:	f7 f9                	idiv   ecx
  4b6cd8:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4b6cdc:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  4b6ce0:	d8 0d 74 e8 64 00    	fmul   DWORD PTR ds:0x64e874
  4b6ce6:	d8 05 60 e5 64 00    	fadd   DWORD PTR ds:0x64e560
  4b6cec:	d9 9f 84 01 00 00    	fstp   DWORD PTR [edi+0x184]
  4b6cf2:	e8 a9 37 15 00       	call   0x60a4a0
  4b6cf7:	99                   	cdq
  4b6cf8:	b9 10 27 00 00       	mov    ecx,0x2710
  4b6cfd:	8d b7 c4 01 00 00    	lea    esi,[edi+0x1c4]
  4b6d03:	f7 f9                	idiv   ecx
  4b6d05:	8b ce                	mov    ecx,esi
  4b6d07:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4b6d0b:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  4b6d0f:	d8 0d 74 e8 64 00    	fmul   DWORD PTR ds:0x64e874
  4b6d15:	d9 9f 88 01 00 00    	fstp   DWORD PTR [edi+0x188]
  4b6d1b:	e8 b0 c2 0f 00       	call   0x5b2fd0
  4b6d20:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  4b6d23:	8b 16                	mov    edx,DWORD PTR [esi]
  4b6d25:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  4b6d28:	89 8c 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],ecx
  4b6d2f:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  4b6d33:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
  4b6d3a:	89 94 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edx
  4b6d41:	89 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],eax
  4b6d48:	e8 d3 c1 0f 00       	call   0x5b2f20
  4b6d4d:	dd d8                	fstp   st(0)
  4b6d4f:	8d b7 d0 01 00 00    	lea    esi,[edi+0x1d0]
  4b6d55:	e8 46 37 15 00       	call   0x60a4a0
  4b6d5a:	99                   	cdq
  4b6d5b:	b9 10 27 00 00       	mov    ecx,0x2710
  4b6d60:	f7 f9                	idiv   ecx
  4b6d62:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4b6d66:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  4b6d6a:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  4b6d70:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  4b6d76:	d9 1e                	fstp   DWORD PTR [esi]
  4b6d78:	e8 23 37 15 00       	call   0x60a4a0
  4b6d7d:	99                   	cdq
  4b6d7e:	b9 10 27 00 00       	mov    ecx,0x2710
  4b6d83:	f7 f9                	idiv   ecx
  4b6d85:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4b6d89:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  4b6d8d:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  4b6d93:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  4b6d99:	d9 9f d4 01 00 00    	fstp   DWORD PTR [edi+0x1d4]
  4b6d9f:	e8 fc 36 15 00       	call   0x60a4a0
  4b6da4:	99                   	cdq
  4b6da5:	b9 10 27 00 00       	mov    ecx,0x2710
  4b6daa:	f7 f9                	idiv   ecx
  4b6dac:	8b ce                	mov    ecx,esi
  4b6dae:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4b6db2:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  4b6db6:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  4b6dbc:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  4b6dc2:	d9 9f d8 01 00 00    	fstp   DWORD PTR [edi+0x1d8]
  4b6dc8:	e8 53 c1 0f 00       	call   0x5b2f20
  4b6dcd:	dd d8                	fstp   st(0)
  4b6dcf:	8d 94 24 88 00 00 00 	lea    edx,[esp+0x88]
  4b6dd6:	8b ce                	mov    ecx,esi
  4b6dd8:	e8 63 c0 0f 00       	call   0x5b2e40
  4b6ddd:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4b6de3:	df e0                	fnstsw ax
  4b6de5:	f6 c4 01             	test   ah,0x1
  4b6de8:	74 0a                	je     0x4b6df4
  4b6dea:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  4b6dee:	d9 e0                	fchs
  4b6df0:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  4b6df4:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  4b6df8:	8b d6                	mov    edx,esi
  4b6dfa:	50                   	push   eax
  4b6dfb:	8b ce                	mov    ecx,esi
  4b6dfd:	e8 9e c1 0f 00       	call   0x5b2fa0
  4b6e02:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4b6e06:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  4b6e0d:	00 
  4b6e0e:	e8 9d d6 0c 00       	call   0x5844b0
  4b6e13:	bb 12 00 00 00       	mov    ebx,0x12
  4b6e18:	89 9c 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],ebx
  4b6e1f:	e8 7c 36 15 00       	call   0x60a4a0
  4b6e24:	99                   	cdq
  4b6e25:	b9 06 00 00 00       	mov    ecx,0x6
  4b6e2a:	f7 f9                	idiv   ecx
  4b6e2c:	83 fa 05             	cmp    edx,0x5
  4b6e2f:	0f 87 32 08 00 00    	ja     0x4b7667
  4b6e35:	ff 24 95 a4 77 4b 00 	jmp    DWORD PTR [edx*4+0x4b77a4]
  4b6e3c:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b6e42:	85 f6                	test   esi,esi
  4b6e44:	75 07                	jne    0x4b6e4d
  4b6e46:	e8 35 44 0a 00       	call   0x55b280
  4b6e4b:	8b f0                	mov    esi,eax
  4b6e4d:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b6e53:	85 c0                	test   eax,eax
  4b6e55:	75 4b                	jne    0x4b6ea2
  4b6e57:	8d 54 24 13          	lea    edx,[esp+0x13]
  4b6e5b:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6e5f:	52                   	push   edx
  4b6e60:	68 70 3f 6b 00       	push   0x6b3f70
  4b6e65:	e8 a6 29 f5 ff       	call   0x409810
  4b6e6a:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  4b6e6e:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x13
  4b6e75:	13 
  4b6e76:	50                   	push   eax
  4b6e77:	68 88 01 00 00       	push   0x188
  4b6e7c:	68 58 eb 68 00       	push   0x68eb58
  4b6e81:	68 4c eb 68 00       	push   0x68eb4c
  4b6e86:	e8 65 99 0e 00       	call   0x5a07f0
  4b6e8b:	ff d0                	call   eax
  4b6e8d:	83 c4 10             	add    esp,0x10
  4b6e90:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6e94:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b6e9b:	6a 01                	push   0x1
  4b6e9d:	e8 fe d1 f4 ff       	call   0x4040a0
  4b6ea2:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b6ea8:	8d 54 24 18          	lea    edx,[esp+0x18]
  4b6eac:	68 88 9d 6b 00       	push   0x6b9d88
  4b6eb1:	52                   	push   edx
  4b6eb2:	e8 79 68 05 00       	call   0x50d730
  4b6eb7:	8b e8                	mov    ebp,eax
  4b6eb9:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
  4b6ebf:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b6ec2:	8d b7 dc 01 00 00    	lea    esi,[edi+0x1dc]
  4b6ec8:	3b c8                	cmp    ecx,eax
  4b6eca:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x14
  4b6ed1:	14 
  4b6ed2:	74 15                	je     0x4b6ee9
  4b6ed4:	85 c9                	test   ecx,ecx
  4b6ed6:	74 05                	je     0x4b6edd
  4b6ed8:	e8 f3 29 f5 ff       	call   0x4098d0
  4b6edd:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b6ee0:	8b ce                	mov    ecx,esi
  4b6ee2:	89 06                	mov    DWORD PTR [esi],eax
  4b6ee4:	e8 c7 d5 0c 00       	call   0x5844b0
  4b6ee9:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4b6eed:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b6ef4:	e8 17 64 0c 00       	call   0x57d310
  4b6ef9:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b6eff:	85 f6                	test   esi,esi
  4b6f01:	75 07                	jne    0x4b6f0a
  4b6f03:	e8 78 43 0a 00       	call   0x55b280
  4b6f08:	8b f0                	mov    esi,eax
  4b6f0a:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b6f10:	85 c0                	test   eax,eax
  4b6f12:	75 4b                	jne    0x4b6f5f
  4b6f14:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4b6f18:	51                   	push   ecx
  4b6f19:	68 70 3f 6b 00       	push   0x6b3f70
  4b6f1e:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4b6f22:	e8 e9 28 f5 ff       	call   0x409810
  4b6f27:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4b6f2b:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x15
  4b6f32:	15 
  4b6f33:	52                   	push   edx
  4b6f34:	68 88 01 00 00       	push   0x188
  4b6f39:	68 58 eb 68 00       	push   0x68eb58
  4b6f3e:	68 4c eb 68 00       	push   0x68eb4c
  4b6f43:	e8 a8 98 0e 00       	call   0x5a07f0
  4b6f48:	ff d0                	call   eax
  4b6f4a:	83 c4 10             	add    esp,0x10
  4b6f4d:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6f51:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b6f58:	6a 01                	push   0x1
  4b6f5a:	e8 41 d1 f4 ff       	call   0x4040a0
  4b6f5f:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b6f65:	8d 44 24 64          	lea    eax,[esp+0x64]
  4b6f69:	68 c8 9d 6b 00       	push   0x6b9dc8
  4b6f6e:	50                   	push   eax
  4b6f6f:	e8 bc 67 05 00       	call   0x50d730
  4b6f74:	8b f0                	mov    esi,eax
  4b6f76:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4b6f7a:	8b 06                	mov    eax,DWORD PTR [esi]
  4b6f7c:	3b c8                	cmp    ecx,eax
  4b6f7e:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x16
  4b6f85:	16 
  4b6f86:	74 18                	je     0x4b6fa0
  4b6f88:	85 c9                	test   ecx,ecx
  4b6f8a:	74 05                	je     0x4b6f91
  4b6f8c:	e8 3f 29 f5 ff       	call   0x4098d0
  4b6f91:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4b6f93:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  4b6f97:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4b6f9b:	e8 10 d5 0c 00       	call   0x5844b0
  4b6fa0:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b6fa7:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  4b6fab:	e9 b2 06 00 00       	jmp    0x4b7662
  4b6fb0:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b6fb6:	85 f6                	test   esi,esi
  4b6fb8:	75 07                	jne    0x4b6fc1
  4b6fba:	e8 c1 42 0a 00       	call   0x55b280
  4b6fbf:	8b f0                	mov    esi,eax
  4b6fc1:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b6fc7:	85 c0                	test   eax,eax
  4b6fc9:	75 4b                	jne    0x4b7016
  4b6fcb:	8d 54 24 13          	lea    edx,[esp+0x13]
  4b6fcf:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b6fd3:	52                   	push   edx
  4b6fd4:	68 70 3f 6b 00       	push   0x6b3f70
  4b6fd9:	e8 32 28 f5 ff       	call   0x409810
  4b6fde:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  4b6fe2:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x17
  4b6fe9:	17 
  4b6fea:	50                   	push   eax
  4b6feb:	68 88 01 00 00       	push   0x188
  4b6ff0:	68 58 eb 68 00       	push   0x68eb58
  4b6ff5:	68 4c eb 68 00       	push   0x68eb4c
  4b6ffa:	e8 f1 97 0e 00       	call   0x5a07f0
  4b6fff:	ff d0                	call   eax
  4b7001:	83 c4 10             	add    esp,0x10
  4b7004:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b7008:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b700f:	6a 01                	push   0x1
  4b7011:	e8 8a d0 f4 ff       	call   0x4040a0
  4b7016:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b701c:	8d 54 24 6c          	lea    edx,[esp+0x6c]
  4b7020:	68 38 9c 6b 00       	push   0x6b9c38
  4b7025:	52                   	push   edx
  4b7026:	e8 05 67 05 00       	call   0x50d730
  4b702b:	8b e8                	mov    ebp,eax
  4b702d:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
  4b7033:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b7036:	8d b7 dc 01 00 00    	lea    esi,[edi+0x1dc]
  4b703c:	3b c8                	cmp    ecx,eax
  4b703e:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x18
  4b7045:	18 
  4b7046:	74 15                	je     0x4b705d
  4b7048:	85 c9                	test   ecx,ecx
  4b704a:	74 05                	je     0x4b7051
  4b704c:	e8 7f 28 f5 ff       	call   0x4098d0
  4b7051:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b7054:	8b ce                	mov    ecx,esi
  4b7056:	89 06                	mov    DWORD PTR [esi],eax
  4b7058:	e8 53 d4 0c 00       	call   0x5844b0
  4b705d:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4b7061:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b7068:	e8 a3 62 0c 00       	call   0x57d310
  4b706d:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b7073:	85 f6                	test   esi,esi
  4b7075:	75 07                	jne    0x4b707e
  4b7077:	e8 04 42 0a 00       	call   0x55b280
  4b707c:	8b f0                	mov    esi,eax
  4b707e:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b7084:	85 c0                	test   eax,eax
  4b7086:	75 4b                	jne    0x4b70d3
  4b7088:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4b708c:	51                   	push   ecx
  4b708d:	68 70 3f 6b 00       	push   0x6b3f70
  4b7092:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4b7096:	e8 75 27 f5 ff       	call   0x409810
  4b709b:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4b709f:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x19
  4b70a6:	19 
  4b70a7:	52                   	push   edx
  4b70a8:	68 88 01 00 00       	push   0x188
  4b70ad:	68 58 eb 68 00       	push   0x68eb58
  4b70b2:	68 4c eb 68 00       	push   0x68eb4c
  4b70b7:	e8 34 97 0e 00       	call   0x5a07f0
  4b70bc:	ff d0                	call   eax
  4b70be:	83 c4 10             	add    esp,0x10
  4b70c1:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b70c5:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b70cc:	6a 01                	push   0x1
  4b70ce:	e8 cd cf f4 ff       	call   0x4040a0
  4b70d3:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b70d9:	8d 44 24 54          	lea    eax,[esp+0x54]
  4b70dd:	68 70 9c 6b 00       	push   0x6b9c70
  4b70e2:	50                   	push   eax
  4b70e3:	e8 48 66 05 00       	call   0x50d730
  4b70e8:	8b f0                	mov    esi,eax
  4b70ea:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4b70ee:	8b 06                	mov    eax,DWORD PTR [esi]
  4b70f0:	3b c8                	cmp    ecx,eax
  4b70f2:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x1a
  4b70f9:	1a 
  4b70fa:	74 18                	je     0x4b7114
  4b70fc:	85 c9                	test   ecx,ecx
  4b70fe:	74 05                	je     0x4b7105
  4b7100:	e8 cb 27 f5 ff       	call   0x4098d0
  4b7105:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4b7107:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  4b710b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4b710f:	e8 9c d3 0c 00       	call   0x5844b0
  4b7114:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b711b:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4b711f:	e9 3e 05 00 00       	jmp    0x4b7662
  4b7124:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b712a:	85 f6                	test   esi,esi
  4b712c:	75 07                	jne    0x4b7135
  4b712e:	e8 4d 41 0a 00       	call   0x55b280
  4b7133:	8b f0                	mov    esi,eax
  4b7135:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b713b:	85 c0                	test   eax,eax
  4b713d:	75 4b                	jne    0x4b718a
  4b713f:	8d 54 24 13          	lea    edx,[esp+0x13]
  4b7143:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b7147:	52                   	push   edx
  4b7148:	68 70 3f 6b 00       	push   0x6b3f70
  4b714d:	e8 be 26 f5 ff       	call   0x409810
  4b7152:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  4b7156:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x1b
  4b715d:	1b 
  4b715e:	50                   	push   eax
  4b715f:	68 88 01 00 00       	push   0x188
  4b7164:	68 58 eb 68 00       	push   0x68eb58
  4b7169:	68 4c eb 68 00       	push   0x68eb4c
  4b716e:	e8 7d 96 0e 00       	call   0x5a07f0
  4b7173:	ff d0                	call   eax
  4b7175:	83 c4 10             	add    esp,0x10
  4b7178:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b717c:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b7183:	6a 01                	push   0x1
  4b7185:	e8 16 cf f4 ff       	call   0x4040a0
  4b718a:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b7190:	8d 54 24 68          	lea    edx,[esp+0x68]
  4b7194:	68 c0 9b 6b 00       	push   0x6b9bc0
  4b7199:	52                   	push   edx
  4b719a:	e8 91 65 05 00       	call   0x50d730
  4b719f:	8b e8                	mov    ebp,eax
  4b71a1:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
  4b71a7:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b71aa:	8d b7 dc 01 00 00    	lea    esi,[edi+0x1dc]
  4b71b0:	3b c8                	cmp    ecx,eax
  4b71b2:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x1c
  4b71b9:	1c 
  4b71ba:	74 15                	je     0x4b71d1
  4b71bc:	85 c9                	test   ecx,ecx
  4b71be:	74 05                	je     0x4b71c5
  4b71c0:	e8 0b 27 f5 ff       	call   0x4098d0
  4b71c5:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b71c8:	8b ce                	mov    ecx,esi
  4b71ca:	89 06                	mov    DWORD PTR [esi],eax
  4b71cc:	e8 df d2 0c 00       	call   0x5844b0
  4b71d1:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4b71d5:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b71dc:	e8 2f 61 0c 00       	call   0x57d310
  4b71e1:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b71e7:	85 f6                	test   esi,esi
  4b71e9:	75 07                	jne    0x4b71f2
  4b71eb:	e8 90 40 0a 00       	call   0x55b280
  4b71f0:	8b f0                	mov    esi,eax
  4b71f2:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b71f8:	85 c0                	test   eax,eax
  4b71fa:	75 4b                	jne    0x4b7247
  4b71fc:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4b7200:	51                   	push   ecx
  4b7201:	68 70 3f 6b 00       	push   0x6b3f70
  4b7206:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4b720a:	e8 01 26 f5 ff       	call   0x409810
  4b720f:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4b7213:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x1d
  4b721a:	1d 
  4b721b:	52                   	push   edx
  4b721c:	68 88 01 00 00       	push   0x188
  4b7221:	68 58 eb 68 00       	push   0x68eb58
  4b7226:	68 4c eb 68 00       	push   0x68eb4c
  4b722b:	e8 c0 95 0e 00       	call   0x5a07f0
  4b7230:	ff d0                	call   eax
  4b7232:	83 c4 10             	add    esp,0x10
  4b7235:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b7239:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b7240:	6a 01                	push   0x1
  4b7242:	e8 59 ce f4 ff       	call   0x4040a0
  4b7247:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b724d:	8d 44 24 70          	lea    eax,[esp+0x70]
  4b7251:	68 00 9c 6b 00       	push   0x6b9c00
  4b7256:	50                   	push   eax
  4b7257:	e8 d4 64 05 00       	call   0x50d730
  4b725c:	8b f0                	mov    esi,eax
  4b725e:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4b7262:	8b 06                	mov    eax,DWORD PTR [esi]
  4b7264:	3b c8                	cmp    ecx,eax
  4b7266:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x1e
  4b726d:	1e 
  4b726e:	74 18                	je     0x4b7288
  4b7270:	85 c9                	test   ecx,ecx
  4b7272:	74 05                	je     0x4b7279
  4b7274:	e8 57 26 f5 ff       	call   0x4098d0
  4b7279:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4b727b:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  4b727f:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4b7283:	e8 28 d2 0c 00       	call   0x5844b0
  4b7288:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b728f:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  4b7293:	e9 ca 03 00 00       	jmp    0x4b7662
  4b7298:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b729e:	85 f6                	test   esi,esi
  4b72a0:	75 07                	jne    0x4b72a9
  4b72a2:	e8 d9 3f 0a 00       	call   0x55b280
  4b72a7:	8b f0                	mov    esi,eax
  4b72a9:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b72af:	85 c0                	test   eax,eax
  4b72b1:	75 4b                	jne    0x4b72fe
  4b72b3:	8d 54 24 13          	lea    edx,[esp+0x13]
  4b72b7:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b72bb:	52                   	push   edx
  4b72bc:	68 70 3f 6b 00       	push   0x6b3f70
  4b72c1:	e8 4a 25 f5 ff       	call   0x409810
  4b72c6:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  4b72ca:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x1f
  4b72d1:	1f 
  4b72d2:	50                   	push   eax
  4b72d3:	68 88 01 00 00       	push   0x188
  4b72d8:	68 58 eb 68 00       	push   0x68eb58
  4b72dd:	68 4c eb 68 00       	push   0x68eb4c
  4b72e2:	e8 09 95 0e 00       	call   0x5a07f0
  4b72e7:	ff d0                	call   eax
  4b72e9:	83 c4 10             	add    esp,0x10
  4b72ec:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b72f0:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b72f7:	6a 01                	push   0x1
  4b72f9:	e8 a2 cd f4 ff       	call   0x4040a0
  4b72fe:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b7304:	8d 54 24 74          	lea    edx,[esp+0x74]
  4b7308:	68 e0 9a 6b 00       	push   0x6b9ae0
  4b730d:	52                   	push   edx
  4b730e:	e8 1d 64 05 00       	call   0x50d730
  4b7313:	8b e8                	mov    ebp,eax
  4b7315:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
  4b731b:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b731e:	8d b7 dc 01 00 00    	lea    esi,[edi+0x1dc]
  4b7324:	3b c8                	cmp    ecx,eax
  4b7326:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x20
  4b732d:	20 
  4b732e:	74 15                	je     0x4b7345
  4b7330:	85 c9                	test   ecx,ecx
  4b7332:	74 05                	je     0x4b7339
  4b7334:	e8 97 25 f5 ff       	call   0x4098d0
  4b7339:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b733c:	8b ce                	mov    ecx,esi
  4b733e:	89 06                	mov    DWORD PTR [esi],eax
  4b7340:	e8 6b d1 0c 00       	call   0x5844b0
  4b7345:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  4b7349:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b7350:	e8 bb 5f 0c 00       	call   0x57d310
  4b7355:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b735b:	85 f6                	test   esi,esi
  4b735d:	75 07                	jne    0x4b7366
  4b735f:	e8 1c 3f 0a 00       	call   0x55b280
  4b7364:	8b f0                	mov    esi,eax
  4b7366:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b736c:	85 c0                	test   eax,eax
  4b736e:	75 4b                	jne    0x4b73bb
  4b7370:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4b7374:	51                   	push   ecx
  4b7375:	68 70 3f 6b 00       	push   0x6b3f70
  4b737a:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4b737e:	e8 8d 24 f5 ff       	call   0x409810
  4b7383:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4b7387:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x21
  4b738e:	21 
  4b738f:	52                   	push   edx
  4b7390:	68 88 01 00 00       	push   0x188
  4b7395:	68 58 eb 68 00       	push   0x68eb58
  4b739a:	68 4c eb 68 00       	push   0x68eb4c
  4b739f:	e8 4c 94 0e 00       	call   0x5a07f0
  4b73a4:	ff d0                	call   eax
  4b73a6:	83 c4 10             	add    esp,0x10
  4b73a9:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b73ad:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b73b4:	6a 01                	push   0x1
  4b73b6:	e8 e5 cc f4 ff       	call   0x4040a0
  4b73bb:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b73c1:	8d 44 24 48          	lea    eax,[esp+0x48]
  4b73c5:	68 18 9b 6b 00       	push   0x6b9b18
  4b73ca:	50                   	push   eax
  4b73cb:	e8 60 63 05 00       	call   0x50d730
  4b73d0:	8b f0                	mov    esi,eax
  4b73d2:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4b73d6:	8b 06                	mov    eax,DWORD PTR [esi]
  4b73d8:	3b c8                	cmp    ecx,eax
  4b73da:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x22
  4b73e1:	22 
  4b73e2:	74 18                	je     0x4b73fc
  4b73e4:	85 c9                	test   ecx,ecx
  4b73e6:	74 05                	je     0x4b73ed
  4b73e8:	e8 e3 24 f5 ff       	call   0x4098d0
  4b73ed:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4b73ef:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  4b73f3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4b73f7:	e8 b4 d0 0c 00       	call   0x5844b0
  4b73fc:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b7403:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4b7407:	e9 56 02 00 00       	jmp    0x4b7662
  4b740c:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b7412:	85 f6                	test   esi,esi
  4b7414:	75 07                	jne    0x4b741d
  4b7416:	e8 65 3e 0a 00       	call   0x55b280
  4b741b:	8b f0                	mov    esi,eax
  4b741d:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b7423:	85 c0                	test   eax,eax
  4b7425:	75 4b                	jne    0x4b7472
  4b7427:	8d 54 24 13          	lea    edx,[esp+0x13]
  4b742b:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b742f:	52                   	push   edx
  4b7430:	68 70 3f 6b 00       	push   0x6b3f70
  4b7435:	e8 d6 23 f5 ff       	call   0x409810
  4b743a:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  4b743e:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x23
  4b7445:	23 
  4b7446:	50                   	push   eax
  4b7447:	68 88 01 00 00       	push   0x188
  4b744c:	68 58 eb 68 00       	push   0x68eb58
  4b7451:	68 4c eb 68 00       	push   0x68eb4c
  4b7456:	e8 95 93 0e 00       	call   0x5a07f0
  4b745b:	ff d0                	call   eax
  4b745d:	83 c4 10             	add    esp,0x10
  4b7460:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b7464:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b746b:	6a 01                	push   0x1
  4b746d:	e8 2e cc f4 ff       	call   0x4040a0
  4b7472:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b7478:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  4b747c:	68 70 9a 6b 00       	push   0x6b9a70
  4b7481:	52                   	push   edx
  4b7482:	e8 a9 62 05 00       	call   0x50d730
  4b7487:	8b e8                	mov    ebp,eax
  4b7489:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
  4b748f:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b7492:	8d b7 dc 01 00 00    	lea    esi,[edi+0x1dc]
  4b7498:	3b c8                	cmp    ecx,eax
  4b749a:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x24
  4b74a1:	24 
  4b74a2:	74 15                	je     0x4b74b9
  4b74a4:	85 c9                	test   ecx,ecx
  4b74a6:	74 05                	je     0x4b74ad
  4b74a8:	e8 23 24 f5 ff       	call   0x4098d0
  4b74ad:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4b74b0:	8b ce                	mov    ecx,esi
  4b74b2:	89 06                	mov    DWORD PTR [esi],eax
  4b74b4:	e8 f7 cf 0c 00       	call   0x5844b0
  4b74b9:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4b74bd:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b74c4:	e8 47 5e 0c 00       	call   0x57d310
  4b74c9:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b74cf:	85 f6                	test   esi,esi
  4b74d1:	75 07                	jne    0x4b74da
  4b74d3:	e8 a8 3d 0a 00       	call   0x55b280
  4b74d8:	8b f0                	mov    esi,eax
  4b74da:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b74e0:	85 c0                	test   eax,eax
  4b74e2:	75 4b                	jne    0x4b752f
  4b74e4:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4b74e8:	51                   	push   ecx
  4b74e9:	68 70 3f 6b 00       	push   0x6b3f70
  4b74ee:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4b74f2:	e8 19 23 f5 ff       	call   0x409810
  4b74f7:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4b74fb:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x25
  4b7502:	25 
  4b7503:	52                   	push   edx
  4b7504:	68 88 01 00 00       	push   0x188
  4b7509:	68 58 eb 68 00       	push   0x68eb58
  4b750e:	68 4c eb 68 00       	push   0x68eb4c
  4b7513:	e8 d8 92 0e 00       	call   0x5a07f0
  4b7518:	ff d0                	call   eax
  4b751a:	83 c4 10             	add    esp,0x10
  4b751d:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b7521:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b7528:	6a 01                	push   0x1
  4b752a:	e8 71 cb f4 ff       	call   0x4040a0
  4b752f:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b7535:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  4b7539:	68 a8 9a 6b 00       	push   0x6b9aa8
  4b753e:	50                   	push   eax
  4b753f:	e8 ec 61 05 00       	call   0x50d730
  4b7544:	8b f0                	mov    esi,eax
  4b7546:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4b754a:	8b 06                	mov    eax,DWORD PTR [esi]
  4b754c:	3b c8                	cmp    ecx,eax
  4b754e:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x26
  4b7555:	26 
  4b7556:	74 18                	je     0x4b7570
  4b7558:	85 c9                	test   ecx,ecx
  4b755a:	74 05                	je     0x4b7561
  4b755c:	e8 6f 23 f5 ff       	call   0x4098d0
  4b7561:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4b7563:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  4b7567:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4b756b:	e8 40 cf 0c 00       	call   0x5844b0
  4b7570:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b7577:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4b757b:	e9 e2 00 00 00       	jmp    0x4b7662
  4b7580:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4b7586:	85 f6                	test   esi,esi
  4b7588:	75 07                	jne    0x4b7591
  4b758a:	e8 f1 3c 0a 00       	call   0x55b280
  4b758f:	8b f0                	mov    esi,eax
  4b7591:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  4b7597:	85 c0                	test   eax,eax
  4b7599:	75 4b                	jne    0x4b75e6
  4b759b:	8d 54 24 13          	lea    edx,[esp+0x13]
  4b759f:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b75a3:	52                   	push   edx
  4b75a4:	68 70 3f 6b 00       	push   0x6b3f70
  4b75a9:	e8 62 22 f5 ff       	call   0x409810
  4b75ae:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  4b75b2:	c6 84 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],0x27
  4b75b9:	27 
  4b75ba:	50                   	push   eax
  4b75bb:	68 88 01 00 00       	push   0x188
  4b75c0:	68 58 eb 68 00       	push   0x68eb58
  4b75c5:	68 4c eb 68 00       	push   0x68eb4c
  4b75ca:	e8 21 92 0e 00       	call   0x5a07f0
  4b75cf:	ff d0                	call   eax
  4b75d1:	83 c4 10             	add    esp,0x10
  4b75d4:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4b75d8:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b75df:	6a 01                	push   0x1
  4b75e1:	e8 ba ca f4 ff       	call   0x4040a0
  4b75e6:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4b75ec:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  4b75f0:	68 f8 99 6b 00       	push   0x6b99f8
  4b75f5:	52                   	push   edx
  4b75f6:	e8 35 61 05 00       	call   0x50d730
  4b75fb:	50                   	push   eax
  4b75fc:	8d 8f dc 01 00 00    	lea    ecx,[edi+0x1dc]
  4b7602:	c6 84 24 0c 01 00 00 	mov    BYTE PTR [esp+0x10c],0x28
  4b7609:	28 
  4b760a:	e8 f1 fc 07 00       	call   0x537300
  4b760f:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  4b7613:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b761a:	e8 f1 5c 0c 00       	call   0x57d310
  4b761f:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  4b7624:	85 c0                	test   eax,eax
  4b7626:	75 05                	jne    0x4b762d
  4b7628:	e8 53 3c 0a 00       	call   0x55b280
  4b762d:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4b7631:	68 38 9a 6b 00       	push   0x6b9a38
  4b7636:	51                   	push   ecx
  4b7637:	8b c8                	mov    ecx,eax
  4b7639:	e8 c2 61 fc ff       	call   0x47d800
  4b763e:	8b c8                	mov    ecx,eax
  4b7640:	e8 eb 60 05 00       	call   0x50d730
  4b7645:	50                   	push   eax
  4b7646:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4b764a:	c6 84 24 0c 01 00 00 	mov    BYTE PTR [esp+0x10c],0x29
  4b7651:	29 
  4b7652:	e8 a9 fc 07 00       	call   0x537300
  4b7657:	88 9c 24 08 01 00 00 	mov    BYTE PTR [esp+0x108],bl
  4b765e:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4b7662:	e8 a9 5c 0c 00       	call   0x57d310
  4b7667:	8b 87 dc 01 00 00    	mov    eax,DWORD PTR [edi+0x1dc]
  4b766d:	8d b7 dc 01 00 00    	lea    esi,[edi+0x1dc]
  4b7673:	85 c0                	test   eax,eax
  4b7675:	74 2e                	je     0x4b76a5
  4b7677:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4b767b:	85 c0                	test   eax,eax
  4b767d:	74 26                	je     0x4b76a5
  4b767f:	51                   	push   ecx
  4b7680:	8d 54 24 18          	lea    edx,[esp+0x18]
  4b7684:	8b cc                	mov    ecx,esp
  4b7686:	89 64 24 48          	mov    DWORD PTR [esp+0x48],esp
  4b768a:	52                   	push   edx
  4b768b:	e8 d0 20 f9 ff       	call   0x449760
  4b7690:	8b ce                	mov    ecx,esi
  4b7692:	88 9c 24 0c 01 00 00 	mov    BYTE PTR [esp+0x10c],bl
  4b7699:	e8 42 b7 f5 ff       	call   0x412de0
  4b769e:	8b c8                	mov    ecx,eax
  4b76a0:	e8 fb 37 05 00       	call   0x50aea0
  4b76a5:	51                   	push   ecx
  4b76a6:	8b cc                	mov    ecx,esp
  4b76a8:	89 64 24 48          	mov    DWORD PTR [esp+0x48],esp
  4b76ac:	56                   	push   esi
  4b76ad:	e8 ae 20 f9 ff       	call   0x449760
  4b76b2:	8b cf                	mov    ecx,edi
  4b76b4:	e8 c7 fb f7 ff       	call   0x437280
  4b76b9:	8b 87 a8 01 00 00    	mov    eax,DWORD PTR [edi+0x1a8]
  4b76bf:	8b 8f a4 01 00 00    	mov    ecx,DWORD PTR [edi+0x1a4]
  4b76c5:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  4b76c9:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  4b76cd:	e8 ce 2d 15 00       	call   0x60a4a0
  4b76d2:	99                   	cdq
  4b76d3:	b9 10 27 00 00       	mov    ecx,0x2710
  4b76d8:	f7 f9                	idiv   ecx
  4b76da:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
  4b76de:	db 44 24 44          	fild   DWORD PTR [esp+0x44]
  4b76e2:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  4b76e6:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  4b76ea:	de c9                	fmulp  st(1),st
  4b76ec:	d8 0d d8 d9 64 00    	fmul   DWORD PTR ds:0x64d9d8
  4b76f2:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  4b76f6:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  4b76fc:	de c1                	faddp  st(1),st
  4b76fe:	e8 1d 34 15 00       	call   0x60ab20
  4b7703:	50                   	push   eax
  4b7704:	8d 8f ac 01 00 00    	lea    ecx,[edi+0x1ac]
  4b770a:	e8 a1 ca f4 ff       	call   0x4041b0
  4b770f:	8b b7 9c 01 00 00    	mov    esi,DWORD PTR [edi+0x19c]
  4b7715:	85 f6                	test   esi,esi
  4b7717:	74 1c                	je     0x4b7735
  4b7719:	8d 54 24 20          	lea    edx,[esp+0x20]
  4b771d:	8b cf                	mov    ecx,edi
  4b771f:	52                   	push   edx
  4b7720:	e8 0b fb f7 ff       	call   0x437230
  4b7725:	50                   	push   eax
  4b7726:	8b 84 24 14 01 00 00 	mov    eax,DWORD PTR [esp+0x114]
  4b772d:	50                   	push   eax
  4b772e:	8b ce                	mov    ecx,esi
  4b7730:	e8 6b fa 0c 00       	call   0x5871a0
  4b7735:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4b7739:	c7 84 24 08 01 00 00 	mov    DWORD PTR [esp+0x108],0xffffffff
  4b7740:	ff ff ff ff 
  4b7744:	e8 c7 5b 0c 00       	call   0x57d310
  4b7749:	8b b4 24 10 01 00 00 	mov    esi,DWORD PTR [esp+0x110]
  4b7750:	8b 8c 24 14 01 00 00 	mov    ecx,DWORD PTR [esp+0x114]
  4b7757:	51                   	push   ecx
  4b7758:	56                   	push   esi
  4b7759:	8b cf                	mov    ecx,edi
  4b775b:	e8 e0 a0 0d 00       	call   0x591840
  4b7760:	8d 97 d0 01 00 00    	lea    edx,[edi+0x1d0]
  4b7766:	8b cf                	mov    ecx,edi
  4b7768:	52                   	push   edx
  4b7769:	e8 52 00 00 00       	call   0x4b77c0
  4b776e:	8b 8c 24 00 01 00 00 	mov    ecx,DWORD PTR [esp+0x100]
  4b7775:	5f                   	pop    edi
  4b7776:	5e                   	pop    esi
  4b7777:	5d                   	pop    ebp
  4b7778:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4b777f:	5b                   	pop    ebx
  4b7780:	81 c4 fc 00 00 00    	add    esp,0xfc
  4b7786:	c2 08 00             	ret    0x8
  4b7789:	8d 49 00             	lea    ecx,[ecx+0x0]
  4b778c:	9c                   	pushf
  4b778d:	67 4b                	addr16 dec ebx
  4b778f:	00 6e 68             	add    BYTE PTR [esi+0x68],ch
  4b7792:	4b                   	dec    ebx
  4b7793:	00 40 69             	add    BYTE PTR [eax+0x69],al
  4b7796:	4b                   	dec    ebx
  4b7797:	00 0f                	add    BYTE PTR [edi],cl
  4b7799:	6a 4b                	push   0x4b
  4b779b:	00 e1                	add    cl,ah
  4b779d:	6a 4b                	push   0x4b
  4b779f:	00 b0 6b 4b 00 3c    	add    BYTE PTR [eax+0x3c004b6b],dh
  4b77a5:	6e                   	outs   dx,BYTE PTR ds:[esi]
  4b77a6:	4b                   	dec    ebx
  4b77a7:	00 b0 6f 4b 00 24    	add    BYTE PTR [eax+0x24004b6f],dh
  4b77ad:	71 4b                	jno    0x4b77fa
  4b77af:	00 98 72 4b 00 0c    	add    BYTE PTR [eax+0xc004b72],bl
  4b77b5:	74 4b                	je     0x4b7802
  4b77b7:	00 80 75 4b 00 90    	add    BYTE PTR [eax-0x6fffb48b],al
  4b77bd:	90                   	nop
  4b77be:	90                   	nop
  4b77bf:	90                   	nop
