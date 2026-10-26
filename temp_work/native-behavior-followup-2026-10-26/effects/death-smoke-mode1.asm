
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0047e090 <.text+0x7d090>:
  47e090:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47e096:	6a ff                	push   0xffffffff
  47e098:	68 11 8f 62 00       	push   0x628f11
  47e09d:	50                   	push   eax
  47e09e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47e0a2:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47e0a9:	81 ec 3c 01 00 00    	sub    esp,0x13c
  47e0af:	53                   	push   ebx
  47e0b0:	55                   	push   ebp
  47e0b1:	83 cd ff             	or     ebp,0xffffffff
  47e0b4:	33 db                	xor    ebx,ebx
  47e0b6:	56                   	push   esi
  47e0b7:	3b c5                	cmp    eax,ebp
  47e0b9:	57                   	push   edi
  47e0ba:	8b f1                	mov    esi,ecx
  47e0bc:	75 66                	jne    0x47e124
  47e0be:	8a 44 24 37          	mov    al,BYTE PTR [esp+0x37]
  47e0c2:	53                   	push   ebx
  47e0c3:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  47e0c7:	88 44 24 58          	mov    BYTE PTR [esp+0x58],al
  47e0cb:	e8 d0 5f f8 ff       	call   0x4040a0
  47e0d0:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47e0d5:	8b cd                	mov    ecx,ebp
  47e0d7:	33 c0                	xor    eax,eax
  47e0d9:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47e0db:	f7 d1                	not    ecx
  47e0dd:	49                   	dec    ecx
  47e0de:	51                   	push   ecx
  47e0df:	68 70 3f 6b 00       	push   0x6b3f70
  47e0e4:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  47e0e8:	e8 03 60 f8 ff       	call   0x4040f0
  47e0ed:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  47e0f1:	89 9c 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],ebx
  47e0f8:	51                   	push   ecx
  47e0f9:	68 8a 00 00 00       	push   0x8a
  47e0fe:	68 2c e2 68 00       	push   0x68e22c
  47e103:	68 14 e2 68 00       	push   0x68e214
  47e108:	e8 e3 26 12 00       	call   0x5a07f0
  47e10d:	ff d0                	call   eax
  47e10f:	83 c4 10             	add    esp,0x10
  47e112:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  47e116:	89 ac 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],ebp
  47e11d:	6a 01                	push   0x1
  47e11f:	e8 7c 5f f8 ff       	call   0x4040a0
  47e124:	db 84 24 5c 01 00 00 	fild   DWORD PTR [esp+0x15c]
  47e12b:	39 1d e0 8d 6c 00    	cmp    DWORD PTR ds:0x6c8de0,ebx
  47e131:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  47e137:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  47e13b:	75 05                	jne    0x47e142
  47e13d:	e8 3e d1 0d 00       	call   0x55b280
  47e142:	8d 6e 10             	lea    ebp,[esi+0x10]
  47e145:	8d 7e 60             	lea    edi,[esi+0x60]
  47e148:	8b d5                	mov    edx,ebp
  47e14a:	89 6c 24 50          	mov    DWORD PTR [esp+0x50],ebp
  47e14e:	8b 02                	mov    eax,DWORD PTR [edx]
  47e150:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  47e154:	8b c7                	mov    eax,edi
  47e156:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  47e159:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  47e15d:	8b 08                	mov    ecx,DWORD PTR [eax]
  47e15f:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47e162:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  47e166:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  47e16a:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  47e16d:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  47e171:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47e174:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  47e178:	8a 86 c9 00 00 00    	mov    al,BYTE PTR [esi+0xc9]
  47e17e:	3a c3                	cmp    al,bl
  47e180:	0f 84 7b 01 00 00    	je     0x47e301
  47e186:	8b 8e cc 00 00 00    	mov    ecx,DWORD PTR [esi+0xcc]
  47e18c:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  47e190:	a1 fc e2 64 00       	mov    eax,ds:0x64e2fc
  47e195:	51                   	push   ecx
  47e196:	d9 05 00 e3 64 00    	fld    DWORD PTR ds:0x64e300
  47e19c:	52                   	push   edx
  47e19d:	50                   	push   eax
  47e19e:	51                   	push   ecx
  47e19f:	8b 0d 00 e3 64 00    	mov    ecx,DWORD PTR ds:0x64e300
  47e1a5:	d9 e0                	fchs
  47e1a7:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e1aa:	51                   	push   ecx
  47e1ab:	8b ce                	mov    ecx,esi
  47e1ad:	e8 4e 0d 00 00       	call   0x47ef00
  47e1b2:	8a 8e c8 00 00 00    	mov    cl,BYTE PTR [esi+0xc8]
  47e1b8:	3a cb                	cmp    cl,bl
  47e1ba:	74 0e                	je     0x47e1ca
  47e1bc:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e1c2:	d9 9e cc 00 00 00    	fstp   DWORD PTR [esi+0xcc]
  47e1c8:	eb 10                	jmp    0x47e1da
  47e1ca:	d9 86 cc 00 00 00    	fld    DWORD PTR [esi+0xcc]
  47e1d0:	d8 e1                	fsub   st,st(1)
  47e1d2:	d9 9e cc 00 00 00    	fstp   DWORD PTR [esi+0xcc]
  47e1d8:	dd d8                	fstp   st(0)
  47e1da:	d9 86 cc 00 00 00    	fld    DWORD PTR [esi+0xcc]
  47e1e0:	d8 1d 00 e3 64 00    	fcomp  DWORD PTR ds:0x64e300
  47e1e6:	df e0                	fnstsw ax
  47e1e8:	f6 c4 41             	test   ah,0x41
  47e1eb:	74 15                	je     0x47e202
  47e1ed:	d9 05 00 e3 64 00    	fld    DWORD PTR ds:0x64e300
  47e1f3:	d9 e0                	fchs
  47e1f5:	d8 9e cc 00 00 00    	fcomp  DWORD PTR [esi+0xcc]
  47e1fb:	df e0                	fnstsw ax
  47e1fd:	f6 c4 41             	test   ah,0x41
  47e200:	75 2b                	jne    0x47e22d
  47e202:	3a cb                	cmp    cl,bl
  47e204:	74 0e                	je     0x47e214
  47e206:	8b 15 00 e3 64 00    	mov    edx,DWORD PTR ds:0x64e300
  47e20c:	89 96 cc 00 00 00    	mov    DWORD PTR [esi+0xcc],edx
  47e212:	eb 0e                	jmp    0x47e222
  47e214:	d9 05 00 e3 64 00    	fld    DWORD PTR ds:0x64e300
  47e21a:	d9 e0                	fchs
  47e21c:	d9 9e cc 00 00 00    	fstp   DWORD PTR [esi+0xcc]
  47e222:	3a cb                	cmp    cl,bl
  47e224:	0f 94 c0             	sete   al
  47e227:	88 86 c8 00 00 00    	mov    BYTE PTR [esi+0xc8],al
  47e22d:	d9 07                	fld    DWORD PTR [edi]
  47e22f:	e8 ec c8 18 00       	call   0x60ab20
  47e234:	99                   	cdq
  47e235:	33 c2                	xor    eax,edx
  47e237:	2b c2                	sub    eax,edx
  47e239:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  47e23d:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  47e241:	d9 46 64             	fld    DWORD PTR [esi+0x64]
  47e244:	e8 d7 c8 18 00       	call   0x60ab20
  47e249:	99                   	cdq
  47e24a:	33 c2                	xor    eax,edx
  47e24c:	2b c2                	sub    eax,edx
  47e24e:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  47e252:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  47e256:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  47e25a:	d9 46 68             	fld    DWORD PTR [esi+0x68]
  47e25d:	e8 be c8 18 00       	call   0x60ab20
  47e262:	99                   	cdq
  47e263:	33 c2                	xor    eax,edx
  47e265:	2b c2                	sub    eax,edx
  47e267:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  47e26b:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  47e26f:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  47e273:	d8 54 24 18          	fcom   DWORD PTR [esp+0x18]
  47e277:	df e0                	fnstsw ax
  47e279:	f6 c4 41             	test   ah,0x41
  47e27c:	75 2b                	jne    0x47e2a9
  47e27e:	d8 54 24 10          	fcom   DWORD PTR [esp+0x10]
  47e282:	df e0                	fnstsw ax
  47e284:	f6 c4 41             	test   ah,0x41
  47e287:	75 20                	jne    0x47e2a9
  47e289:	dd d8                	fstp   st(0)
  47e28b:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  47e28f:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e295:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  47e299:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  47e29d:	d8 a6 cc 00 00 00    	fsub   DWORD PTR [esi+0xcc]
  47e2a3:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  47e2a7:	eb 58                	jmp    0x47e301
  47e2a9:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  47e2ad:	d8 d9                	fcomp  st(1)
  47e2af:	df e0                	fnstsw ax
  47e2b1:	f6 c4 41             	test   ah,0x41
  47e2b4:	dd d8                	fstp   st(0)
  47e2b6:	75 2d                	jne    0x47e2e5
  47e2b8:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  47e2bc:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
  47e2c0:	df e0                	fnstsw ax
  47e2c2:	f6 c4 41             	test   ah,0x41
  47e2c5:	75 1e                	jne    0x47e2e5
  47e2c7:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  47e2cb:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e2d1:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  47e2d5:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  47e2d9:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e2df:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  47e2e3:	eb 1c                	jmp    0x47e301
  47e2e5:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  47e2e9:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e2ef:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  47e2f3:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  47e2f7:	d8 a6 cc 00 00 00    	fsub   DWORD PTR [esi+0xcc]
  47e2fd:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  47e301:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  47e305:	d8 0d bc d0 64 00    	fmul   DWORD PTR ds:0x64d0bc
  47e30b:	51                   	push   ecx
  47e30c:	8d 54 24 20          	lea    edx,[esp+0x20]
  47e310:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47e314:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e317:	e8 84 4c 13 00       	call   0x5b2fa0
  47e31c:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47e320:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47e324:	51                   	push   ecx
  47e325:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47e329:	e8 d2 4c 13 00       	call   0x5b3000
  47e32e:	d9 86 94 00 00 00    	fld    DWORD PTR [esi+0x94]
  47e334:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  47e33a:	df e0                	fnstsw ax
  47e33c:	f6 c4 01             	test   ah,0x1
  47e33f:	74 53                	je     0x47e394
  47e341:	d9 86 94 00 00 00    	fld    DWORD PTR [esi+0x94]
  47e347:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e34d:	df e0                	fnstsw ax
  47e34f:	f6 c4 01             	test   ah,0x1
  47e352:	75 40                	jne    0x47e394
  47e354:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e35a:	d8 a6 94 00 00 00    	fsub   DWORD PTR [esi+0x94]
  47e360:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
  47e364:	d8 15 54 a3 64 00    	fcom   DWORD PTR ds:0x64a354
  47e36a:	df e0                	fnstsw ax
  47e36c:	f6 c4 41             	test   ah,0x41
  47e36f:	75 08                	jne    0x47e379
  47e371:	dd d8                	fstp   st(0)
  47e373:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e379:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e37f:	d8 e1                	fsub   st,st(1)
  47e381:	51                   	push   ecx
  47e382:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  47e386:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47e38a:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e38d:	dd d8                	fstp   st(0)
  47e38f:	e8 0c 4c 13 00       	call   0x5b2fa0
  47e394:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  47e398:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47e39c:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47e3a0:	89 55 00             	mov    DWORD PTR [ebp+0x0],edx
  47e3a3:	89 45 04             	mov    DWORD PTR [ebp+0x4],eax
  47e3a6:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
  47e3a9:	8d 6e 04             	lea    ebp,[esi+0x4]
  47e3ac:	8b d5                	mov    edx,ebp
  47e3ae:	8b 02                	mov    eax,DWORD PTR [edx]
  47e3b0:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
  47e3b4:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47e3b8:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  47e3bb:	50                   	push   eax
  47e3bc:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
  47e3c0:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47e3c4:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47e3c7:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
  47e3cb:	8d 54 24 6c          	lea    edx,[esp+0x6c]
  47e3cf:	e8 cc 4b 13 00       	call   0x5b2fa0
  47e3d4:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  47e3d8:	8d 54 24 68          	lea    edx,[esp+0x68]
  47e3dc:	51                   	push   ecx
  47e3dd:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  47e3e1:	e8 1a 4c 13 00       	call   0x5b3000
  47e3e6:	38 9e 98 00 00 00    	cmp    BYTE PTR [esi+0x98],bl
  47e3ec:	0f 84 cc 02 00 00    	je     0x47e6be
  47e3f2:	51                   	push   ecx
  47e3f3:	8b 8e 9c 00 00 00    	mov    ecx,DWORD PTR [esi+0x9c]
  47e3f9:	8b d4                	mov    edx,esp
  47e3fb:	89 64 24 14          	mov    DWORD PTR [esp+0x14],esp
  47e3ff:	52                   	push   edx
  47e400:	c7 44 24 1c 00 00 80 	mov    DWORD PTR [esp+0x1c],0x3f800000
  47e407:	3f 
  47e408:	33 ff                	xor    edi,edi
  47e40a:	e8 d1 5e f8 ff       	call   0x4042e0
  47e40f:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  47e413:	e8 18 78 0e 00       	call   0x565c30
  47e418:	d9 05 74 88 6b 00    	fld    DWORD PTR ds:0x6b8874
  47e41e:	d8 8e a0 00 00 00    	fmul   DWORD PTR [esi+0xa0]
  47e424:	8b 15 74 88 6b 00    	mov    edx,DWORD PTR ds:0x6b8874
  47e42a:	c7 84 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],0x1
  47e431:	01 00 00 00 
  47e435:	89 94 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],edx
  47e43c:	8d 54 24 44          	lea    edx,[esp+0x44]
  47e440:	d9 c0                	fld    st(0)
  47e442:	d9 e0                	fchs
  47e444:	d9 9c 24 b0 00 00 00 	fstp   DWORD PTR [esp+0xb0]
  47e44b:	d9 05 74 88 6b 00    	fld    DWORD PTR ds:0x6b8874
  47e451:	d8 8e a4 00 00 00    	fmul   DWORD PTR [esi+0xa4]
  47e457:	c6 84 24 89 00 00 00 	mov    BYTE PTR [esp+0x89],0x1
  47e45e:	01 
  47e45f:	c6 84 24 8a 00 00 00 	mov    BYTE PTR [esp+0x8a],0x1
  47e466:	01 
  47e467:	88 9c 24 8b 00 00 00 	mov    BYTE PTR [esp+0x8b],bl
  47e46e:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x1
  47e475:	01 
  47e476:	88 9c 24 8d 00 00 00 	mov    BYTE PTR [esp+0x8d],bl
  47e47d:	c6 84 24 8e 00 00 00 	mov    BYTE PTR [esp+0x8e],0x1
  47e484:	01 
  47e485:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
  47e489:	d9 e0                	fchs
  47e48b:	d9 9c 24 b4 00 00 00 	fstp   DWORD PTR [esp+0xb4]
  47e492:	d9 05 74 88 6b 00    	fld    DWORD PTR ds:0x6b8874
  47e498:	d8 8e a8 00 00 00    	fmul   DWORD PTR [esi+0xa8]
  47e49e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47e4a2:	89 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],eax
  47e4a9:	8a 46 7b             	mov    al,BYTE PTR [esi+0x7b]
  47e4ac:	88 84 24 88 00 00 00 	mov    BYTE PTR [esp+0x88],al
  47e4b3:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
  47e4b7:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  47e4bb:	d9 e0                	fchs
  47e4bd:	d9 9c 24 b8 00 00 00 	fstp   DWORD PTR [esp+0xb8]
  47e4c4:	89 8c 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],ecx
  47e4cb:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  47e4cf:	d9 9c 24 bc 00 00 00 	fstp   DWORD PTR [esp+0xbc]
  47e4d6:	51                   	push   ecx
  47e4d7:	52                   	push   edx
  47e4d8:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  47e4dc:	e8 2f 79 0e 00       	call   0x565e10
  47e4e1:	84 c0                	test   al,al
  47e4e3:	0f 84 d0 00 00 00    	je     0x47e5b9
  47e4e9:	8b 8e b0 00 00 00    	mov    ecx,DWORD PTR [esi+0xb0]
  47e4ef:	8b 86 ac 00 00 00    	mov    eax,DWORD PTR [esi+0xac]
  47e4f5:	8b 94 24 10 01 00 00 	mov    edx,DWORD PTR [esp+0x110]
  47e4fc:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  47e500:	8b 8c 24 18 01 00 00 	mov    ecx,DWORD PTR [esp+0x118]
  47e507:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  47e50b:	8b 84 24 14 01 00 00 	mov    eax,DWORD PTR [esp+0x114]
  47e512:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  47e516:	8b 8e b4 00 00 00    	mov    ecx,DWORD PTR [esi+0xb4]
  47e51c:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  47e520:	41                   	inc    ecx
  47e521:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  47e525:	8d 54 24 64          	lea    edx,[esp+0x64]
  47e529:	89 8e b4 00 00 00    	mov    DWORD PTR [esi+0xb4],ecx
  47e52f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  47e533:	8d 44 24 28          	lea    eax,[esp+0x28]
  47e537:	52                   	push   edx
  47e538:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  47e53c:	50                   	push   eax
  47e53d:	51                   	push   ecx
  47e53e:	8d 44 24 34          	lea    eax,[esp+0x34]
  47e542:	52                   	push   edx
  47e543:	8d 8c 24 e4 00 00 00 	lea    ecx,[esp+0xe4]
  47e54a:	50                   	push   eax
  47e54b:	51                   	push   ecx
  47e54c:	e8 1f 30 13 00       	call   0x5b1570
  47e551:	d9 84 24 34 01 00 00 	fld    DWORD PTR [esp+0x134]
  47e558:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e55e:	83 c4 18             	add    esp,0x18
  47e561:	df e0                	fnstsw ax
  47e563:	f6 c4 01             	test   ah,0x1
  47e566:	75 19                	jne    0x47e581
  47e568:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e56e:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  47e572:	d8 8c 24 1c 01 00 00 	fmul   DWORD PTR [esp+0x11c]
  47e579:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
  47e57d:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  47e581:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e587:	d8 25 0c e3 64 00    	fsub   DWORD PTR ds:0x64e30c
  47e58d:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
  47e591:	df e0                	fnstsw ax
  47e593:	f6 c4 41             	test   ah,0x41
  47e596:	75 21                	jne    0x47e5b9
  47e598:	47                   	inc    edi
  47e599:	83 ff 0a             	cmp    edi,0xa
  47e59c:	7d 1b                	jge    0x47e5b9
  47e59e:	8d 54 24 38          	lea    edx,[esp+0x38]
  47e5a2:	8d 44 24 44          	lea    eax,[esp+0x44]
  47e5a6:	52                   	push   edx
  47e5a7:	50                   	push   eax
  47e5a8:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  47e5ac:	e8 5f 78 0e 00       	call   0x565e10
  47e5b1:	84 c0                	test   al,al
  47e5b3:	0f 85 30 ff ff ff    	jne    0x47e4e9
  47e5b9:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47e5bd:	e8 0e 4a 13 00       	call   0x5b2fd0
  47e5c2:	d8 1d 78 be 64 00    	fcomp  DWORD PTR ds:0x64be78
  47e5c8:	df e0                	fnstsw ax
  47e5ca:	f6 c4 01             	test   ah,0x1
  47e5cd:	74 61                	je     0x47e630
  47e5cf:	83 be b4 00 00 00 32 	cmp    DWORD PTR [esi+0xb4],0x32
  47e5d6:	7e 58                	jle    0x47e630
  47e5d8:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  47e5db:	83 cf ff             	or     edi,0xffffffff
  47e5de:	3b c7                	cmp    eax,edi
  47e5e0:	88 5e 7a             	mov    BYTE PTR [esi+0x7a],bl
  47e5e3:	74 4e                	je     0x47e633
  47e5e5:	38 9e b8 00 00 00    	cmp    BYTE PTR [esi+0xb8],bl
  47e5eb:	74 46                	je     0x47e633
  47e5ed:	b9 d0 07 00 00       	mov    ecx,0x7d0
  47e5f2:	b8 00 00 80 3f       	mov    eax,0x3f800000
  47e5f7:	c6 46 79 01          	mov    BYTE PTR [esi+0x79],0x1
  47e5fb:	c7 46 7c 00 00 c8 42 	mov    DWORD PTR [esi+0x7c],0x42c80000
  47e602:	89 9e 80 00 00 00    	mov    DWORD PTR [esi+0x80],ebx
  47e608:	89 8e 84 00 00 00    	mov    DWORD PTR [esi+0x84],ecx
  47e60e:	89 be 88 00 00 00    	mov    DWORD PTR [esi+0x88],edi
  47e614:	89 86 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],eax
  47e61a:	c6 86 90 00 00 00 01 	mov    BYTE PTR [esi+0x90],0x1
  47e621:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
  47e624:	89 7e 20             	mov    DWORD PTR [esi+0x20],edi
  47e627:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
  47e62a:	c6 46 28 01          	mov    BYTE PTR [esi+0x28],0x1
  47e62e:	eb 03                	jmp    0x47e633
  47e630:	83 cf ff             	or     edi,0xffffffff
  47e633:	8b 8c 24 40 01 00 00 	mov    ecx,DWORD PTR [esp+0x140]
  47e63a:	c7 84 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],0x4
  47e641:	04 00 00 00 
  47e645:	51                   	push   ecx
  47e646:	e8 a5 ff 17 00       	call   0x5fe5f0
  47e64b:	8b 94 24 34 01 00 00 	mov    edx,DWORD PTR [esp+0x134]
  47e652:	89 9c 24 44 01 00 00 	mov    DWORD PTR [esp+0x144],ebx
  47e659:	52                   	push   edx
  47e65a:	89 9c 24 4c 01 00 00 	mov    DWORD PTR [esp+0x14c],ebx
  47e661:	89 9c 24 50 01 00 00 	mov    DWORD PTR [esp+0x150],ebx
  47e668:	e8 83 ff 17 00       	call   0x5fe5f0
  47e66d:	8b 84 24 9c 00 00 00 	mov    eax,DWORD PTR [esp+0x9c]
  47e674:	83 c4 08             	add    esp,0x8
  47e677:	3b c3                	cmp    eax,ebx
  47e679:	89 9c 24 30 01 00 00 	mov    DWORD PTR [esp+0x130],ebx
  47e680:	89 9c 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],ebx
  47e687:	89 9c 24 38 01 00 00 	mov    DWORD PTR [esp+0x138],ebx
  47e68e:	74 1e                	je     0x47e6ae
  47e690:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47e693:	8b c8                	mov    ecx,eax
  47e695:	83 c0 14             	add    eax,0x14
  47e698:	4e                   	dec    esi
  47e699:	8b d6                	mov    edx,esi
  47e69b:	3b d3                	cmp    edx,ebx
  47e69d:	89 30                	mov    DWORD PTR [eax],esi
  47e69f:	75 06                	jne    0x47e6a7
  47e6a1:	53                   	push   ebx
  47e6a2:	e8 19 d9 12 00       	call   0x5abfc0
  47e6a7:	89 9c 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],ebx
  47e6ae:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  47e6b2:	89 bc 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],edi
  47e6b9:	e8 12 ce 12 00       	call   0x5ab4d0
  47e6be:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  47e6c2:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  47e6c6:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
  47e6ca:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
  47e6cd:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  47e6d1:	89 4d 04             	mov    DWORD PTR [ebp+0x4],ecx
  47e6d4:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  47e6d8:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
  47e6db:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  47e6df:	89 08                	mov    DWORD PTR [eax],ecx
  47e6e1:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47e6e5:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47e6e8:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47e6eb:	8b 8c 24 4c 01 00 00 	mov    ecx,DWORD PTR [esp+0x14c]
  47e6f2:	5f                   	pop    edi
  47e6f3:	5e                   	pop    esi
  47e6f4:	5d                   	pop    ebp
  47e6f5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47e6fc:	5b                   	pop    ebx
  47e6fd:	81 c4 48 01 00 00    	add    esp,0x148
  47e703:	c2 04 00             	ret    0x4
