
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005b9f30 <.text+0x1b8f30>:
  5b9f30:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5b9f34:	83 ec 0c             	sub    esp,0xc
  5b9f37:	8b c8                	mov    ecx,eax
  5b9f39:	83 c0 10             	add    eax,0x10
  5b9f3c:	53                   	push   ebx
  5b9f3d:	56                   	push   esi
  5b9f3e:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5b9f42:	8b 19                	mov    ebx,DWORD PTR [ecx]
  5b9f44:	57                   	push   edi
  5b9f45:	8d be 60 03 00 00    	lea    edi,[esi+0x360]
  5b9f4b:	8b d7                	mov    edx,edi
  5b9f4d:	89 1a                	mov    DWORD PTR [edx],ebx
  5b9f4f:	8b 59 04             	mov    ebx,DWORD PTR [ecx+0x4]
  5b9f52:	89 5a 04             	mov    DWORD PTR [edx+0x4],ebx
  5b9f55:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5b9f58:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  5b9f5b:	8b 50 fc             	mov    edx,DWORD PTR [eax-0x4]
  5b9f5e:	89 96 6c 03 00 00    	mov    DWORD PTR [esi+0x36c],edx
  5b9f64:	8b 48 18             	mov    ecx,DWORD PTR [eax+0x18]
  5b9f67:	89 8e 70 03 00 00    	mov    DWORD PTR [esi+0x370],ecx
  5b9f6d:	8d 8e 74 03 00 00    	lea    ecx,[esi+0x374]
  5b9f73:	ba 06 00 00 00       	mov    edx,0x6
  5b9f78:	8b 18                	mov    ebx,DWORD PTR [eax]
  5b9f7a:	83 c0 04             	add    eax,0x4
  5b9f7d:	89 19                	mov    DWORD PTR [ecx],ebx
  5b9f7f:	83 c1 04             	add    ecx,0x4
  5b9f82:	4a                   	dec    edx
  5b9f83:	75 f3                	jne    0x5b9f78
  5b9f85:	33 db                	xor    ebx,ebx
  5b9f87:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  5b9f8b:	53                   	push   ebx
  5b9f8c:	53                   	push   ebx
  5b9f8d:	53                   	push   ebx
  5b9f8e:	e8 8d 8e ff ff       	call   0x5b2e20
  5b9f93:	68 cd cc 4c 3d       	push   0x3d4ccccd
  5b9f98:	8d 54 24 10          	lea    edx,[esp+0x10]
  5b9f9c:	8b cf                	mov    ecx,edi
  5b9f9e:	e8 1d 8f ff ff       	call   0x5b2ec0
  5b9fa3:	85 c0                	test   eax,eax
  5b9fa5:	74 0e                	je     0x5b9fb5
  5b9fa7:	53                   	push   ebx
  5b9fa8:	53                   	push   ebx
  5b9fa9:	68 00 00 80 3f       	push   0x3f800000
  5b9fae:	8b cf                	mov    ecx,edi
  5b9fb0:	e8 6b 8e ff ff       	call   0x5b2e20
  5b9fb5:	b9 00 40 9c c5       	mov    ecx,0xc59c4000
  5b9fba:	b8 00 40 9c 45       	mov    eax,0x459c4000
  5b9fbf:	89 0e                	mov    DWORD PTR [esi],ecx
  5b9fc1:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  5b9fc4:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
  5b9fc7:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  5b9fca:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5b9fcd:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  5b9fd0:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
  5b9fd3:	89 46 1c             	mov    DWORD PTR [esi+0x1c],eax
  5b9fd6:	89 4e 20             	mov    DWORD PTR [esi+0x20],ecx
  5b9fd9:	89 4e 24             	mov    DWORD PTR [esi+0x24],ecx
  5b9fdc:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
  5b9fdf:	89 4e 2c             	mov    DWORD PTR [esi+0x2c],ecx
  5b9fe2:	89 4e 30             	mov    DWORD PTR [esi+0x30],ecx
  5b9fe5:	89 4e 34             	mov    DWORD PTR [esi+0x34],ecx
  5b9fe8:	89 4e 38             	mov    DWORD PTR [esi+0x38],ecx
  5b9feb:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
  5b9fee:	89 4e 40             	mov    DWORD PTR [esi+0x40],ecx
  5b9ff1:	89 4e 44             	mov    DWORD PTR [esi+0x44],ecx
  5b9ff4:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
  5b9ff7:	89 4e 4c             	mov    DWORD PTR [esi+0x4c],ecx
  5b9ffa:	89 46 50             	mov    DWORD PTR [esi+0x50],eax
  5b9ffd:	89 4e 54             	mov    DWORD PTR [esi+0x54],ecx
  5ba000:	89 4e 58             	mov    DWORD PTR [esi+0x58],ecx
  5ba003:	89 46 5c             	mov    DWORD PTR [esi+0x5c],eax
  5ba006:	89 4e 60             	mov    DWORD PTR [esi+0x60],ecx
  5ba009:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  5ba00c:	89 46 68             	mov    DWORD PTR [esi+0x68],eax
  5ba00f:	89 4e 6c             	mov    DWORD PTR [esi+0x6c],ecx
  5ba012:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
  5ba015:	89 4e 74             	mov    DWORD PTR [esi+0x74],ecx
  5ba018:	89 4e 78             	mov    DWORD PTR [esi+0x78],ecx
  5ba01b:	89 4e 7c             	mov    DWORD PTR [esi+0x7c],ecx
  5ba01e:	89 8e 80 00 00 00    	mov    DWORD PTR [esi+0x80],ecx
  5ba024:	89 8e 84 00 00 00    	mov    DWORD PTR [esi+0x84],ecx
  5ba02a:	89 8e 88 00 00 00    	mov    DWORD PTR [esi+0x88],ecx
  5ba030:	89 86 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],eax
  5ba036:	89 86 90 00 00 00    	mov    DWORD PTR [esi+0x90],eax
  5ba03c:	89 86 94 00 00 00    	mov    DWORD PTR [esi+0x94],eax
  5ba042:	89 8e 98 00 00 00    	mov    DWORD PTR [esi+0x98],ecx
  5ba048:	89 86 9c 00 00 00    	mov    DWORD PTR [esi+0x9c],eax
  5ba04e:	89 86 a0 00 00 00    	mov    DWORD PTR [esi+0xa0],eax
  5ba054:	89 86 a4 00 00 00    	mov    DWORD PTR [esi+0xa4],eax
  5ba05a:	89 86 a8 00 00 00    	mov    DWORD PTR [esi+0xa8],eax
  5ba060:	89 8e ac 00 00 00    	mov    DWORD PTR [esi+0xac],ecx
  5ba066:	89 86 b0 00 00 00    	mov    DWORD PTR [esi+0xb0],eax
  5ba06c:	89 86 b4 00 00 00    	mov    DWORD PTR [esi+0xb4],eax
  5ba072:	89 8e b8 00 00 00    	mov    DWORD PTR [esi+0xb8],ecx
  5ba078:	89 8e bc 00 00 00    	mov    DWORD PTR [esi+0xbc],ecx
  5ba07e:	89 8e c0 00 00 00    	mov    DWORD PTR [esi+0xc0],ecx
  5ba084:	89 86 c4 00 00 00    	mov    DWORD PTR [esi+0xc4],eax
  5ba08a:	89 8e c8 00 00 00    	mov    DWORD PTR [esi+0xc8],ecx
  5ba090:	89 86 cc 00 00 00    	mov    DWORD PTR [esi+0xcc],eax
  5ba096:	89 86 d0 00 00 00    	mov    DWORD PTR [esi+0xd0],eax
  5ba09c:	89 8e d4 00 00 00    	mov    DWORD PTR [esi+0xd4],ecx
  5ba0a2:	89 86 d8 00 00 00    	mov    DWORD PTR [esi+0xd8],eax
  5ba0a8:	89 8e dc 00 00 00    	mov    DWORD PTR [esi+0xdc],ecx
  5ba0ae:	89 8e e0 00 00 00    	mov    DWORD PTR [esi+0xe0],ecx
  5ba0b4:	89 8e e4 00 00 00    	mov    DWORD PTR [esi+0xe4],ecx
  5ba0ba:	89 8e e8 00 00 00    	mov    DWORD PTR [esi+0xe8],ecx
  5ba0c0:	89 8e ec 00 00 00    	mov    DWORD PTR [esi+0xec],ecx
  5ba0c6:	89 86 f0 00 00 00    	mov    DWORD PTR [esi+0xf0],eax
  5ba0cc:	89 86 f4 00 00 00    	mov    DWORD PTR [esi+0xf4],eax
  5ba0d2:	89 86 f8 00 00 00    	mov    DWORD PTR [esi+0xf8],eax
  5ba0d8:	89 8e fc 00 00 00    	mov    DWORD PTR [esi+0xfc],ecx
  5ba0de:	89 86 00 01 00 00    	mov    DWORD PTR [esi+0x100],eax
  5ba0e4:	89 86 04 01 00 00    	mov    DWORD PTR [esi+0x104],eax
  5ba0ea:	89 8e 08 01 00 00    	mov    DWORD PTR [esi+0x108],ecx
  5ba0f0:	89 8e 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],ecx
  5ba0f6:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
  5ba0fc:	89 86 14 01 00 00    	mov    DWORD PTR [esi+0x114],eax
  5ba102:	89 8e 18 01 00 00    	mov    DWORD PTR [esi+0x118],ecx
  5ba108:	89 86 1c 01 00 00    	mov    DWORD PTR [esi+0x11c],eax
  5ba10e:	d9 86 70 03 00 00    	fld    DWORD PTR [esi+0x370]
  5ba114:	d9 86 70 03 00 00    	fld    DWORD PTR [esi+0x370]
  5ba11a:	8d 86 38 01 00 00    	lea    eax,[esi+0x138]
  5ba120:	b9 06 00 00 00       	mov    ecx,0x6
  5ba125:	d9 c1                	fld    st(1)
  5ba127:	89 58 e8             	mov    DWORD PTR [eax-0x18],ebx
  5ba12a:	89 58 ec             	mov    DWORD PTR [eax-0x14],ebx
  5ba12d:	d9 18                	fstp   DWORD PTR [eax]
  5ba12f:	d9 c1                	fld    st(1)
  5ba131:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
  5ba134:	89 58 30             	mov    DWORD PTR [eax+0x30],ebx
  5ba137:	d9 58 18             	fstp   DWORD PTR [eax+0x18]
  5ba13a:	d9 50 1c             	fst    DWORD PTR [eax+0x1c]
  5ba13d:	d9 50 34             	fst    DWORD PTR [eax+0x34]
  5ba140:	83 c0 60             	add    eax,0x60
  5ba143:	49                   	dec    ecx
  5ba144:	75 df                	jne    0x5ba125
  5ba146:	dd d8                	fstp   st(0)
  5ba148:	5f                   	pop    edi
  5ba149:	5e                   	pop    esi
  5ba14a:	dd d8                	fstp   st(0)
  5ba14c:	b8 01 00 00 00       	mov    eax,0x1
  5ba151:	5b                   	pop    ebx
  5ba152:	83 c4 0c             	add    esp,0xc
  5ba155:	c3                   	ret
  5ba156:	90                   	nop
  5ba157:	90                   	nop
  5ba158:	90                   	nop
  5ba159:	90                   	nop
  5ba15a:	90                   	nop
  5ba15b:	90                   	nop
  5ba15c:	90                   	nop
  5ba15d:	90                   	nop
  5ba15e:	90                   	nop
  5ba15f:	90                   	nop
  5ba160:	81 ec a4 06 00 00    	sub    esp,0x6a4
  5ba166:	53                   	push   ebx
  5ba167:	8b 9c 24 b0 06 00 00 	mov    ebx,DWORD PTR [esp+0x6b0]
  5ba16e:	55                   	push   ebp
  5ba16f:	8b ac 24 bc 06 00 00 	mov    ebp,DWORD PTR [esp+0x6bc]
  5ba176:	56                   	push   esi
  5ba177:	57                   	push   edi
  5ba178:	8b cb                	mov    ecx,ebx
  5ba17a:	c7 85 0c 01 00 00 00 	mov    DWORD PTR [ebp+0x10c],0x0
  5ba181:	00 00 00 
  5ba184:	e8 e7 f2 00 00       	call   0x5c9470
  5ba189:	b9 0c 00 00 00       	mov    ecx,0xc
  5ba18e:	8b f0                	mov    esi,eax
  5ba190:	8d 7c 24 20          	lea    edi,[esp+0x20]
  5ba194:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5ba196:	b9 0c 00 00 00       	mov    ecx,0xc
  5ba19b:	8d 74 24 20          	lea    esi,[esp+0x20]
  5ba19f:	8d bc 24 80 00 00 00 	lea    edi,[esp+0x80]
  5ba1a6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5ba1a8:	8b bc 24 b8 06 00 00 	mov    edi,DWORD PTR [esp+0x6b8]
  5ba1af:	51                   	push   ecx
  5ba1b0:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5ba1b4:	d9 87 8c 03 00 00    	fld    DWORD PTR [edi+0x38c]
  5ba1ba:	d9 e0                	fchs
  5ba1bc:	d9 1c 24             	fstp   DWORD PTR [esp]
  5ba1bf:	8d 97 60 03 00 00    	lea    edx,[edi+0x360]
  5ba1c5:	e8 76 b3 ff ff       	call   0x5b5540
  5ba1ca:	8d 54 24 50          	lea    edx,[esp+0x50]
  5ba1ce:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5ba1d2:	e8 49 b7 ff ff       	call   0x5b5920
  5ba1d7:	8d 44 24 20          	lea    eax,[esp+0x20]
  5ba1db:	8d 54 24 20          	lea    edx,[esp+0x20]
  5ba1df:	50                   	push   eax
  5ba1e0:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  5ba1e4:	e8 d7 90 ff ff       	call   0x5b32c0
  5ba1e9:	8d 54 24 20          	lea    edx,[esp+0x20]
  5ba1ed:	8b cb                	mov    ecx,ebx
  5ba1ef:	e8 2c f2 00 00       	call   0x5c9420
  5ba1f4:	8b 94 24 c0 06 00 00 	mov    edx,DWORD PTR [esp+0x6c0]
  5ba1fb:	8d 8c 24 b0 00 00 00 	lea    ecx,[esp+0xb0]
  5ba202:	51                   	push   ecx
  5ba203:	53                   	push   ebx
  5ba204:	52                   	push   edx
  5ba205:	e8 c6 67 01 00       	call   0x5d09d0
  5ba20a:	83 c4 0c             	add    esp,0xc
  5ba20d:	33 f6                	xor    esi,esi
  5ba20f:	8d 84 24 b0 00 00 00 	lea    eax,[esp+0xb0]
  5ba216:	55                   	push   ebp
  5ba217:	50                   	push   eax
  5ba218:	8b cb                	mov    ecx,ebx
  5ba21a:	e8 21 1c fe ff       	call   0x59be40
  5ba21f:	50                   	push   eax
  5ba220:	56                   	push   esi
  5ba221:	57                   	push   edi
  5ba222:	e8 29 00 00 00       	call   0x5ba250
  5ba227:	83 c4 14             	add    esp,0x14
  5ba22a:	46                   	inc    esi
  5ba22b:	83 fe 06             	cmp    esi,0x6
  5ba22e:	7c df                	jl     0x5ba20f
  5ba230:	8d 94 24 80 00 00 00 	lea    edx,[esp+0x80]
  5ba237:	8b cb                	mov    ecx,ebx
  5ba239:	e8 e2 f1 00 00       	call   0x5c9420
  5ba23e:	5f                   	pop    edi
  5ba23f:	5e                   	pop    esi
  5ba240:	5d                   	pop    ebp
  5ba241:	5b                   	pop    ebx
  5ba242:	81 c4 a4 06 00 00    	add    esp,0x6a4
  5ba248:	c3                   	ret
  5ba249:	90                   	nop
  5ba24a:	90                   	nop
  5ba24b:	90                   	nop
  5ba24c:	90                   	nop
  5ba24d:	90                   	nop
  5ba24e:	90                   	nop
  5ba24f:	90                   	nop
  5ba250:	b8 10 12 00 00       	mov    eax,0x1210
  5ba255:	e8 16 3d 05 00       	call   0x60df70
  5ba25a:	a1 1c c4 6c 00       	mov    eax,ds:0x6cc41c
  5ba25f:	53                   	push   ebx
  5ba260:	55                   	push   ebp
  5ba261:	8b ac 24 20 12 00 00 	mov    ebp,DWORD PTR [esp+0x1220]
  5ba268:	8b 48 18             	mov    ecx,DWORD PTR [eax+0x18]
  5ba26b:	56                   	push   esi
  5ba26c:	57                   	push   edi
  5ba26d:	8b 84 a9 f4 00 00 00 	mov    eax,DWORD PTR [ecx+ebp*4+0xf4]
  5ba274:	85 c0                	test   eax,eax
  5ba276:	0f 8c 74 01 00 00    	jl     0x5ba3f0
  5ba27c:	8b 8c 24 24 12 00 00 	mov    ecx,DWORD PTR [esp+0x1224]
  5ba283:	8b b4 24 30 12 00 00 	mov    esi,DWORD PTR [esp+0x1230]
  5ba28a:	8b bc 24 30 12 00 00 	mov    edi,DWORD PTR [esp+0x1230]
  5ba291:	8d 5c 6d 00          	lea    ebx,[ebp+ebp*2+0x0]
  5ba295:	8d 6c 6d 09          	lea    ebp,[ebp+ebp*2+0x9]
  5ba299:	ba 04 00 00 00       	mov    edx,0x4
  5ba29e:	c1 e3 04             	shl    ebx,0x4
  5ba2a1:	c1 e5 05             	shl    ebp,0x5
  5ba2a4:	03 d9                	add    ebx,ecx
  5ba2a6:	03 e9                	add    ebp,ecx
  5ba2a8:	03 f2                	add    esi,edx
  5ba2aa:	83 3f 00             	cmp    DWORD PTR [edi],0x0
  5ba2ad:	8d 44 24 20          	lea    eax,[esp+0x20]
  5ba2b1:	8d 8c 24 20 06 00 00 	lea    ecx,[esp+0x620]
  5ba2b8:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  5ba2bf:	00 
  5ba2c0:	0f 8e 87 00 00 00    	jle    0x5ba34d
  5ba2c6:	eb 04                	jmp    0x5ba2cc
  5ba2c8:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  5ba2cc:	8d 7c 24 18          	lea    edi,[esp+0x18]
  5ba2d0:	57                   	push   edi
  5ba2d1:	52                   	push   edx
  5ba2d2:	51                   	push   ecx
  5ba2d3:	55                   	push   ebp
  5ba2d4:	50                   	push   eax
  5ba2d5:	53                   	push   ebx
  5ba2d6:	56                   	push   esi
  5ba2d7:	e8 84 6a 01 00       	call   0x5d0d60
  5ba2dc:	83 c4 1c             	add    esp,0x1c
  5ba2df:	85 c0                	test   eax,eax
  5ba2e1:	0f 84 09 01 00 00    	je     0x5ba3f0
  5ba2e7:	8d 54 24 20          	lea    edx,[esp+0x20]
  5ba2eb:	3b da                	cmp    ebx,edx
  5ba2ed:	75 1b                	jne    0x5ba30a
  5ba2ef:	8d 9c 24 20 03 00 00 	lea    ebx,[esp+0x320]
  5ba2f6:	8d 44 24 20          	lea    eax,[esp+0x20]
  5ba2fa:	8d ac 24 20 0c 00 00 	lea    ebp,[esp+0xc20]
  5ba301:	8d 8c 24 20 06 00 00 	lea    ecx,[esp+0x620]
  5ba308:	eb 19                	jmp    0x5ba323
  5ba30a:	8d 5c 24 20          	lea    ebx,[esp+0x20]
  5ba30e:	8d 84 24 20 03 00 00 	lea    eax,[esp+0x320]
  5ba315:	8d ac 24 20 06 00 00 	lea    ebp,[esp+0x620]
  5ba31c:	8d 8c 24 20 0c 00 00 	lea    ecx,[esp+0xc20]
  5ba323:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  5ba327:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5ba32b:	83 c6 14             	add    esi,0x14
  5ba32e:	47                   	inc    edi
  5ba32f:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  5ba333:	8b b4 24 30 12 00 00 	mov    esi,DWORD PTR [esp+0x1230]
  5ba33a:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  5ba33e:	3b 3e                	cmp    edi,DWORD PTR [esi]
  5ba340:	7c 86                	jl     0x5ba2c8
  5ba342:	8b c2                	mov    eax,edx
  5ba344:	83 f8 03             	cmp    eax,0x3
  5ba347:	0f 8c a3 00 00 00    	jl     0x5ba3f0
  5ba34d:	8b                   	.byte 0x8b
  5ba34e:	84                   	.byte 0x84
  5ba34f:	24                   	.byte 0x24
