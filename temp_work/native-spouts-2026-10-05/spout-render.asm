  467eb0:	6a ff                	push   0xffffffff
  467eb2:	68 b0 79 62 00       	push   0x6279b0
  467eb7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  467ebd:	50                   	push   eax
  467ebe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  467ec5:	83 ec 74             	sub    esp,0x74
  467ec8:	53                   	push   ebx
  467ec9:	55                   	push   ebp
  467eca:	56                   	push   esi
  467ecb:	8d 44 24 18          	lea    eax,[esp+0x18]
  467ecf:	57                   	push   edi
  467ed0:	8b e9                	mov    ebp,ecx
  467ed2:	50                   	push   eax
  467ed3:	e8 08 c4 f9 ff       	call   0x4042e0
  467ed8:	8b d8                	mov    ebx,eax
  467eda:	8b 03                	mov    eax,DWORD PTR [ebx]
  467edc:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0x0
  467ee3:	00 00 00 00 
  467ee7:	85 c0                	test   eax,eax
  467ee9:	75 6a                	jne    0x467f55
  467eeb:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  467eef:	6a 00                	push   0x0
  467ef1:	88 4c 24 68          	mov    BYTE PTR [esp+0x68],cl
  467ef5:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  467ef9:	e8 a2 c1 f9 ff       	call   0x4040a0
  467efe:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  467f03:	83 c9 ff             	or     ecx,0xffffffff
  467f06:	33 c0                	xor    eax,eax
  467f08:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467f0a:	f7 d1                	not    ecx
  467f0c:	49                   	dec    ecx
  467f0d:	51                   	push   ecx
  467f0e:	68 70 3f 6b 00       	push   0x6b3f70
  467f13:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  467f17:	e8 d4 c1 f9 ff       	call   0x4040f0
  467f1c:	8d 54 24 64          	lea    edx,[esp+0x64]
  467f20:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x1
  467f27:	01 
  467f28:	52                   	push   edx
  467f29:	68 b6 00 00 00       	push   0xb6
  467f2e:	68 38 d6 68 00       	push   0x68d638
  467f33:	68 2c d6 68 00       	push   0x68d62c
  467f38:	e8 b3 88 13 00       	call   0x5a07f0
  467f3d:	ff d0                	call   eax
  467f3f:	83 c4 10             	add    esp,0x10
  467f42:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  467f46:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x0
  467f4d:	00 
  467f4e:	6a 01                	push   0x1
  467f50:	e8 4b c1 f9 ff       	call   0x4040a0
  467f55:	8b 1b                	mov    ebx,DWORD PTR [ebx]
  467f57:	8b 43 5c             	mov    eax,DWORD PTR [ebx+0x5c]
  467f5a:	85 c0                	test   eax,eax
  467f5c:	75 6a                	jne    0x467fc8
  467f5e:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  467f62:	6a 00                	push   0x0
  467f64:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  467f68:	88 44 24 78          	mov    BYTE PTR [esp+0x78],al
  467f6c:	e8 2f c1 f9 ff       	call   0x4040a0
  467f71:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  467f76:	83 c9 ff             	or     ecx,0xffffffff
  467f79:	33 c0                	xor    eax,eax
  467f7b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467f7d:	f7 d1                	not    ecx
  467f7f:	49                   	dec    ecx
  467f80:	51                   	push   ecx
  467f81:	68 70 3f 6b 00       	push   0x6b3f70
  467f86:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  467f8a:	e8 61 c1 f9 ff       	call   0x4040f0
  467f8f:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  467f93:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x2
  467f9a:	02 
  467f9b:	51                   	push   ecx
  467f9c:	68 44 01 00 00       	push   0x144
  467fa1:	68 b8 e1 68 00       	push   0x68e1b8
  467fa6:	68 a8 e1 68 00       	push   0x68e1a8
  467fab:	e8 40 88 13 00       	call   0x5a07f0
  467fb0:	ff d0                	call   eax
  467fb2:	83 c4 10             	add    esp,0x10
  467fb5:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  467fb9:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x0
  467fc0:	00 
  467fc1:	6a 01                	push   0x1
  467fc3:	e8 d8 c0 f9 ff       	call   0x4040a0
  467fc8:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  467fcc:	8b 53 5c             	mov    edx,DWORD PTR [ebx+0x5c]
  467fcf:	83 ce ff             	or     esi,0xffffffff
  467fd2:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  467fd6:	85 c0                	test   eax,eax
  467fd8:	89 b4 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],esi
  467fdf:	74 18                	je     0x467ff9
  467fe1:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  467fe4:	8b c8                	mov    ecx,eax
  467fe6:	83 c0 14             	add    eax,0x14
  467fe9:	4f                   	dec    edi
  467fea:	8b d7                	mov    edx,edi
  467fec:	85 d2                	test   edx,edx
  467fee:	89 38                	mov    DWORD PTR [eax],edi
  467ff0:	75 07                	jne    0x467ff9
  467ff2:	6a 00                	push   0x0
  467ff4:	e8 c7 3f 14 00       	call   0x5abfc0
  467ff9:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  467ffe:	85 c0                	test   eax,eax
  468000:	75 05                	jne    0x468007
  468002:	e8 79 32 0f 00       	call   0x55b280
  468007:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  46800b:	51                   	push   ecx
  46800c:	8b c8                	mov    ecx,eax
  46800e:	e8 3d 97 fb ff       	call   0x421750
  468013:	8b d8                	mov    ebx,eax
  468015:	8b 03                	mov    eax,DWORD PTR [ebx]
  468017:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0x3
  46801e:	03 00 00 00 
  468022:	85 c0                	test   eax,eax
  468024:	75 69                	jne    0x46808f
  468026:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  46802a:	6a 00                	push   0x0
  46802c:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  468030:	88 54 24 78          	mov    BYTE PTR [esp+0x78],dl
  468034:	e8 67 c0 f9 ff       	call   0x4040a0
  468039:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  46803e:	8b ce                	mov    ecx,esi
  468040:	33 c0                	xor    eax,eax
  468042:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  468044:	f7 d1                	not    ecx
  468046:	49                   	dec    ecx
  468047:	51                   	push   ecx
  468048:	68 70 3f 6b 00       	push   0x6b3f70
  46804d:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  468051:	e8 9a c0 f9 ff       	call   0x4040f0
  468056:	8d 44 24 74          	lea    eax,[esp+0x74]
  46805a:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x4
  468061:	04 
  468062:	50                   	push   eax
  468063:	68 b6 00 00 00       	push   0xb6
  468068:	68 38 d6 68 00       	push   0x68d638
  46806d:	68 2c d6 68 00       	push   0x68d62c
  468072:	e8 79 87 13 00       	call   0x5a07f0
  468077:	ff d0                	call   eax
  468079:	83 c4 10             	add    esp,0x10
  46807c:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  468080:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x3
  468087:	03 
  468088:	6a 01                	push   0x1
  46808a:	e8 11 c0 f9 ff       	call   0x4040a0
  46808f:	8b 1b                	mov    ebx,DWORD PTR [ebx]
  468091:	89 b4 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],esi
  468098:	81 c3 10 02 00 00    	add    ebx,0x210
  46809e:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  4680a0:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
  4680a4:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  4680a7:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
  4680ab:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  4680ae:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
  4680b2:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4680b6:	85 c0                	test   eax,eax
  4680b8:	74 18                	je     0x4680d2
  4680ba:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4680bd:	8b c8                	mov    ecx,eax
  4680bf:	83 c0 14             	add    eax,0x14
  4680c2:	4e                   	dec    esi
  4680c3:	8b d6                	mov    edx,esi
  4680c5:	85 d2                	test   edx,edx
  4680c7:	89 30                	mov    DWORD PTR [eax],esi
  4680c9:	75 07                	jne    0x4680d2
  4680cb:	6a 00                	push   0x0
  4680cd:	e8 ee 3e 14 00       	call   0x5abfc0
  4680d2:	8d b5 c0 01 00 00    	lea    esi,[ebp+0x1c0]
  4680d8:	c7 44 24 1c 0f 00 00 	mov    DWORD PTR [esp+0x1c],0xf
  4680df:	00 
  4680e0:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  4680e4:	8a 46 48             	mov    al,BYTE PTR [esi+0x48]
  4680e7:	84 c0                	test   al,al
  4680e9:	0f 84 2e 03 00 00    	je     0x46841d
  4680ef:	8a 85 7c 16 00 00    	mov    al,BYTE PTR [ebp+0x167c]
  4680f5:	8b 8d a8 16 00 00    	mov    ecx,DWORD PTR [ebp+0x16a8]
  4680fb:	84 c0                	test   al,al
  4680fd:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  468101:	74 20                	je     0x468123
  468103:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  468109:	d8 26                	fsub   DWORD PTR [esi]
  46810b:	d8 8d 78 16 00 00    	fmul   DWORD PTR [ebp+0x1678]
  468111:	d9 85 74 16 00 00    	fld    DWORD PTR [ebp+0x1674]
  468117:	d8 0e                	fmul   DWORD PTR [esi]
  468119:	de c1                	faddp  st(1),st
  46811b:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
  46811f:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  468123:	8d 56 e0             	lea    edx,[esi-0x20]
  468126:	8b 46 e0             	mov    eax,DWORD PTR [esi-0x20]
  468129:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  46812d:	8d 44 24 58          	lea    eax,[esp+0x58]
  468131:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  468134:	50                   	push   eax
  468135:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  468139:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  46813d:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  468140:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
  468144:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  468148:	e8 93 ae 14 00       	call   0x5b2fe0
  46814d:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  468151:	8d 54 24 34          	lea    edx,[esp+0x34]
  468155:	51                   	push   ecx
  468156:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  46815a:	52                   	push   edx
  46815b:	50                   	push   eax
  46815c:	8b cd                	mov    ecx,ebp
  46815e:	e8 ed fb 00 00       	call   0x477d50
  468163:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  468167:	8d 54 24 34          	lea    edx,[esp+0x34]
  46816b:	57                   	push   edi
  46816c:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  468170:	e8 2b ae 14 00       	call   0x5b2fa0
  468175:	8d 54 24 40          	lea    edx,[esp+0x40]
  468179:	57                   	push   edi
  46817a:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  46817e:	e8 1d ae 14 00       	call   0x5b2fa0
  468183:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  468187:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
  46818b:	df e0                	fnstsw ax
  46818d:	f6 c4 41             	test   ah,0x41
  468190:	75 12                	jne    0x4681a4
  468192:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  468196:	e8 e5 ae 14 00       	call   0x5b3080
  46819b:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  46819f:	e8 dc ae 14 00       	call   0x5b3080
  4681a4:	d9 05 28 d9 64 00    	fld    DWORD PTR ds:0x64d928
  4681aa:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  4681ae:	8d 4e dc             	lea    ecx,[esi-0x24]
  4681b1:	d8 64 24 34          	fsub   DWORD PTR [esp+0x34]
  4681b5:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
  4681b9:	d9 9d 0c 01 00 00    	fstp   DWORD PTR [ebp+0x10c]
  4681bf:	d9 05 2c d9 64 00    	fld    DWORD PTR ds:0x64d92c
  4681c5:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  4681c9:	d8 64 24 38          	fsub   DWORD PTR [esp+0x38]
  4681cd:	d8 44 24 44          	fadd   DWORD PTR [esp+0x44]
  4681d1:	d9 9d 10 01 00 00    	fstp   DWORD PTR [ebp+0x110]
  4681d7:	d9 05 30 d9 64 00    	fld    DWORD PTR ds:0x64d930
  4681dd:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  4681e1:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
  4681e5:	d8 44 24 48          	fadd   DWORD PTR [esp+0x48]
  4681e9:	d9 9d 14 01 00 00    	fstp   DWORD PTR [ebp+0x114]
  4681ef:	d9 05 4c d9 64 00    	fld    DWORD PTR ds:0x64d94c
  4681f5:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
  4681f9:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  4681fd:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  468201:	d9 9d 30 01 00 00    	fstp   DWORD PTR [ebp+0x130]
  468207:	d9 05 50 d9 64 00    	fld    DWORD PTR ds:0x64d950
  46820d:	d8 44 24 44          	fadd   DWORD PTR [esp+0x44]
  468211:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  468215:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  468219:	d9 9d 34 01 00 00    	fstp   DWORD PTR [ebp+0x134]
  46821f:	d9 05 54 d9 64 00    	fld    DWORD PTR ds:0x64d954
  468225:	d8 44 24 48          	fadd   DWORD PTR [esp+0x48]
  468229:	d8 44 24 3c          	fadd   DWORD PTR [esp+0x3c]
  46822d:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  468231:	d9 9d 38 01 00 00    	fstp   DWORD PTR [ebp+0x138]
  468237:	d9 05 70 d9 64 00    	fld    DWORD PTR ds:0x64d970
  46823d:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  468241:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  468245:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
  468249:	d9 9d 54 01 00 00    	fstp   DWORD PTR [ebp+0x154]
  46824f:	d9 05 74 d9 64 00    	fld    DWORD PTR ds:0x64d974
  468255:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  468259:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  46825d:	d8 64 24 44          	fsub   DWORD PTR [esp+0x44]
  468261:	d9 9d 58 01 00 00    	fstp   DWORD PTR [ebp+0x158]
  468267:	d9 05 78 d9 64 00    	fld    DWORD PTR ds:0x64d978
  46826d:	d8 44 24 3c          	fadd   DWORD PTR [esp+0x3c]
  468271:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  468275:	d8 64 24 48          	fsub   DWORD PTR [esp+0x48]
  468279:	d9 9d 5c 01 00 00    	fstp   DWORD PTR [ebp+0x15c]
  46827f:	d9 05 94 d9 64 00    	fld    DWORD PTR ds:0x64d994
  468285:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  468289:	d8 64 24 34          	fsub   DWORD PTR [esp+0x34]
  46828d:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
  468291:	d9 9d 78 01 00 00    	fstp   DWORD PTR [ebp+0x178]
  468297:	d9 05 98 d9 64 00    	fld    DWORD PTR ds:0x64d998
  46829d:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  4682a1:	d8 64 24 38          	fsub   DWORD PTR [esp+0x38]
  4682a5:	d8 64 24 44          	fsub   DWORD PTR [esp+0x44]
  4682a9:	d9 9d 7c 01 00 00    	fstp   DWORD PTR [ebp+0x17c]
  4682af:	d9 05 9c d9 64 00    	fld    DWORD PTR ds:0x64d99c
  4682b5:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  4682b9:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
  4682bd:	d8 64 24 48          	fsub   DWORD PTR [esp+0x48]
  4682c1:	d9 9d 80 01 00 00    	fstp   DWORD PTR [ebp+0x180]
  4682c7:	e8 04 13 13 00       	call   0x5995d0
  4682cc:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4682d2:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  4682d6:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  4682da:	33 d2                	xor    edx,edx
  4682dc:	d9 95 2c 01 00 00    	fst    DWORD PTR [ebp+0x12c]
  4682e2:	d9 95 50 01 00 00    	fst    DWORD PTR [ebp+0x150]
  4682e8:	d9 95 74 01 00 00    	fst    DWORD PTR [ebp+0x174]
  4682ee:	d9 9d 98 01 00 00    	fstp   DWORD PTR [ebp+0x198]
  4682f4:	39 51 30             	cmp    DWORD PTR [ecx+0x30],edx
  4682f7:	74 2b                	je     0x468324
  4682f9:	8d 85 24 01 00 00    	lea    eax,[ebp+0x124]
  4682ff:	b9 04 00 00 00       	mov    ecx,0x4
  468304:	8b bd 00 01 00 00    	mov    edi,DWORD PTR [ebp+0x100]
  46830a:	89 78 fc             	mov    DWORD PTR [eax-0x4],edi
  46830d:	8b bd 04 01 00 00    	mov    edi,DWORD PTR [ebp+0x104]
  468313:	89 38                	mov    DWORD PTR [eax],edi
  468315:	8b bd 08 01 00 00    	mov    edi,DWORD PTR [ebp+0x108]
  46831b:	89 78 04             	mov    DWORD PTR [eax+0x4],edi
  46831e:	83 c0 24             	add    eax,0x24
  468321:	49                   	dec    ecx
  468322:	75 e0                	jne    0x468304
  468324:	39 95 fc 00 00 00    	cmp    DWORD PTR [ebp+0xfc],edx
  46832a:	0f 85 c7 00 00 00    	jne    0x4683f7
  468330:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  468334:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  468339:	88 44 24 64          	mov    BYTE PTR [esp+0x64],al
  46833d:	83 c9 ff             	or     ecx,0xffffffff
  468340:	33 c0                	xor    eax,eax
  468342:	6a 01                	push   0x1
  468344:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  468346:	f7 d1                	not    ecx
  468348:	49                   	dec    ecx
  468349:	89 54 24 6c          	mov    DWORD PTR [esp+0x6c],edx
  46834d:	8b d9                	mov    ebx,ecx
  46834f:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  468353:	53                   	push   ebx
  468354:	89 54 24 74          	mov    DWORD PTR [esp+0x74],edx
  468358:	89 54 24 78          	mov    DWORD PTR [esp+0x78],edx
  46835c:	e8 df 95 f9 ff       	call   0x401940
  468361:	84 c0                	test   al,al
  468363:	74 29                	je     0x46838e
  468365:	8b 7c 24 68          	mov    edi,DWORD PTR [esp+0x68]
  468369:	8b cb                	mov    ecx,ebx
  46836b:	8b d1                	mov    edx,ecx
  46836d:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  468372:	c1 e9 02             	shr    ecx,0x2
  468375:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  468377:	8b ca                	mov    ecx,edx
  468379:	83 e1 03             	and    ecx,0x3
  46837c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  46837e:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  468382:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  468386:	89 5c 24 6c          	mov    DWORD PTR [esp+0x6c],ebx
  46838a:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  46838e:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  468392:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0x5
  468399:	05 00 00 00 
  46839d:	51                   	push   ecx
  46839e:	68 b6 00 00 00       	push   0xb6
  4683a3:	68 38 d6 68 00       	push   0x68d638
  4683a8:	68 2c d6 68 00       	push   0x68d62c
  4683ad:	e8 3e 84 13 00       	call   0x5a07f0
  4683b2:	ff d0                	call   eax
  4683b4:	8b 44 24 78          	mov    eax,DWORD PTR [esp+0x78]
  4683b8:	33 ff                	xor    edi,edi
  4683ba:	83 c4 10             	add    esp,0x10
  4683bd:	3b c7                	cmp    eax,edi
  4683bf:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0xffffffff
  4683c6:	ff ff ff ff 
  4683ca:	74 1d                	je     0x4683e9
  4683cc:	8d 48 ff             	lea    ecx,[eax-0x1]
  4683cf:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4683d2:	84 c0                	test   al,al
  4683d4:	74 0a                	je     0x4683e0
  4683d6:	3c ff                	cmp    al,0xff
  4683d8:	74 06                	je     0x4683e0
  4683da:	fe c8                	dec    al
  4683dc:	88 01                	mov    BYTE PTR [ecx],al
  4683de:	eb 09                	jmp    0x4683e9
  4683e0:	51                   	push   ecx
  4683e1:	e8 0a 62 19 00       	call   0x5fe5f0
  4683e6:	83 c4 04             	add    esp,0x4
  4683e9:	89 7c 24 68          	mov    DWORD PTR [esp+0x68],edi
  4683ed:	89 7c 24 6c          	mov    DWORD PTR [esp+0x6c],edi
  4683f1:	89 7c 24 70          	mov    DWORD PTR [esp+0x70],edi
  4683f5:	33 d2                	xor    edx,edx
  4683f7:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  4683fd:	52                   	push   edx
  4683fe:	6a 01                	push   0x1
  468400:	52                   	push   edx
  468401:	e8 6a 26 0a 00       	call   0x50aa70
  468406:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  46840a:	50                   	push   eax
  46840b:	8d 85 0c 01 00 00    	lea    eax,[ebp+0x10c]
  468411:	6a 04                	push   0x4
  468413:	50                   	push   eax
  468414:	52                   	push   edx
  468415:	e8 76 ea 14 00       	call   0x5b6e90
  46841a:	83 c4 1c             	add    esp,0x1c
  46841d:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  468421:	81 c6 44 01 00 00    	add    esi,0x144
  468427:	48                   	dec    eax
  468428:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  46842c:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  468430:	0f 85 ae fc ff ff    	jne    0x4680e4
  468436:	8b 8c 24 84 00 00 00 	mov    ecx,DWORD PTR [esp+0x84]
  46843d:	5f                   	pop    edi
  46843e:	5e                   	pop    esi
  46843f:	5d                   	pop    ebp
  468440:	5b                   	pop    ebx
  468441:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  468448:	81 c4 80 00 00 00    	add    esp,0x80
  46844e:	c3                   	ret
  46844f:	90                   	nop
