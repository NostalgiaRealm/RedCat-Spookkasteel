  596150:	6a ff                	push   0xffffffff
  596152:	68 60 3d 64 00       	push   0x643d60
  596157:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59615d:	50                   	push   eax
  59615e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596165:	83 ec 30             	sub    esp,0x30
  596168:	53                   	push   ebx
  596169:	55                   	push   ebp
  59616a:	56                   	push   esi
  59616b:	8b f1                	mov    esi,ecx
  59616d:	57                   	push   edi
  59616e:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  596172:	e8 f9 f2 ff ff       	call   0x595470
  596177:	8b c8                	mov    ecx,eax
  596179:	e8 e2 5c 00 00       	call   0x59be60
  59617e:	84 c0                	test   al,al
  596180:	8b ce                	mov    ecx,esi
  596182:	74 0e                	je     0x596192
  596184:	e8 e7 f2 ff ff       	call   0x595470
  596189:	8b c8                	mov    ecx,eax
  59618b:	e8 a0 5b 00 00       	call   0x59bd30
  596190:	eb 0c                	jmp    0x59619e
  596192:	e8 d9 f2 ff ff       	call   0x595470
  596197:	8b c8                	mov    ecx,eax
  596199:	e8 82 5a 00 00       	call   0x59bc20
  59619e:	8b e8                	mov    ebp,eax
  5961a0:	85 ed                	test   ebp,ebp
  5961a2:	75 65                	jne    0x596209
  5961a4:	8a 44 24 50          	mov    al,BYTE PTR [esp+0x50]
  5961a8:	55                   	push   ebp
  5961a9:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5961ad:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  5961b1:	e8 ea de e6 ff       	call   0x4040a0
  5961b6:	bf 54 6a 6a 00       	mov    edi,0x6a6a54
  5961bb:	83 c9 ff             	or     ecx,0xffffffff
  5961be:	33 c0                	xor    eax,eax
  5961c0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5961c2:	f7 d1                	not    ecx
  5961c4:	49                   	dec    ecx
  5961c5:	51                   	push   ecx
  5961c6:	68 54 6a 6a 00       	push   0x6a6a54
  5961cb:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  5961cf:	e8 1c df e6 ff       	call   0x4040f0
  5961d4:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5961d8:	89 6c 24 48          	mov    DWORD PTR [esp+0x48],ebp
  5961dc:	51                   	push   ecx
  5961dd:	68 9e 01 00 00       	push   0x19e
  5961e2:	68 24 6a 6a 00       	push   0x6a6a24
  5961e7:	68 0c 6a 6a 00       	push   0x6a6a0c
  5961ec:	e8 ff a5 00 00       	call   0x5a07f0
  5961f1:	ff d0                	call   eax
  5961f3:	83 c4 10             	add    esp,0x10
  5961f6:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5961fa:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  596201:	ff 
  596202:	6a 01                	push   0x1
  596204:	e8 97 de e6 ff       	call   0x4040a0
  596209:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59620d:	e8 ae 4f 00 00       	call   0x59b1c0
  596212:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  596216:	c7 44 24 48 01 00 00 	mov    DWORD PTR [esp+0x48],0x1
  59621d:	00 
  59621e:	e8 ad ef ff ff       	call   0x5951d0
  596223:	8d 54 24 18          	lea    edx,[esp+0x18]
  596227:	8b ce                	mov    ecx,esi
  596229:	52                   	push   edx
  59622a:	e8 b1 e0 e6 ff       	call   0x4042e0
  59622f:	8b f0                	mov    esi,eax
  596231:	8b 06                	mov    eax,DWORD PTR [esi]
  596233:	b3 02                	mov    bl,0x2
  596235:	85 c0                	test   eax,eax
  596237:	88 5c 24 48          	mov    BYTE PTR [esp+0x48],bl
  59623b:	75 63                	jne    0x5962a0
  59623d:	8a 44 24 50          	mov    al,BYTE PTR [esp+0x50]
  596241:	6a 00                	push   0x0
  596243:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  596247:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  59624b:	e8 50 de e6 ff       	call   0x4040a0
  596250:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  596255:	83 c9 ff             	or     ecx,0xffffffff
  596258:	33 c0                	xor    eax,eax
  59625a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59625c:	f7 d1                	not    ecx
  59625e:	49                   	dec    ecx
  59625f:	51                   	push   ecx
  596260:	68 70 3f 6b 00       	push   0x6b3f70
  596265:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  596269:	e8 82 de e6 ff       	call   0x4040f0
  59626e:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  596272:	c6 44 24 48 03       	mov    BYTE PTR [esp+0x48],0x3
  596277:	51                   	push   ecx
  596278:	68 b6 00 00 00       	push   0xb6
  59627d:	68 38 d6 68 00       	push   0x68d638
  596282:	68 2c d6 68 00       	push   0x68d62c
  596287:	e8 64 a5 00 00       	call   0x5a07f0
  59628c:	ff d0                	call   eax
  59628e:	83 c4 10             	add    esp,0x10
  596291:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  596295:	88 5c 24 48          	mov    BYTE PTR [esp+0x48],bl
  596299:	6a 01                	push   0x1
  59629b:	e8 00 de e6 ff       	call   0x4040a0
  5962a0:	8b 36                	mov    esi,DWORD PTR [esi]
  5962a2:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5962a6:	85 c9                	test   ecx,ecx
  5962a8:	8b b6 60 03 00 00    	mov    esi,DWORD PTR [esi+0x360]
  5962ae:	c6 44 24 48 01       	mov    BYTE PTR [esp+0x48],0x1
  5962b3:	74 0d                	je     0x5962c2
  5962b5:	e8 16 36 e7 ff       	call   0x4098d0
  5962ba:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  5962c1:	00 
  5962c2:	85 f6                	test   esi,esi
  5962c4:	0f 84 f1 00 00 00    	je     0x5963bb
  5962ca:	8a 86 a8 00 00 00    	mov    al,BYTE PTR [esi+0xa8]
  5962d0:	84 c0                	test   al,al
  5962d2:	0f 84 e3 00 00 00    	je     0x5963bb
  5962d8:	8d 54 24 18          	lea    edx,[esp+0x18]
  5962dc:	8b cd                	mov    ecx,ebp
  5962de:	52                   	push   edx
  5962df:	e8 6c 31 00 00       	call   0x599450
  5962e4:	50                   	push   eax
  5962e5:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5962e9:	c6 44 24 4c 05       	mov    BYTE PTR [esp+0x4c],0x5
  5962ee:	e8 dd 4e 00 00       	call   0x59b1d0
  5962f3:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  5962f7:	c6 44 24 48 01       	mov    BYTE PTR [esp+0x48],0x1
  5962fc:	e8 df cd fc ff       	call   0x5630e0
  596301:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  596305:	8b cd                	mov    ecx,ebp
  596307:	50                   	push   eax
  596308:	e8 73 3f 00 00       	call   0x59a280
  59630d:	8b 08                	mov    ecx,DWORD PTR [eax]
  59630f:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  596313:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  596316:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
  59631a:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  59631d:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  596321:	8a c1                	mov    al,cl
  596323:	84 c0                	test   al,al
  596325:	0f 84 89 00 00 00    	je     0x5963b4
  59632b:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  59632f:	8b ca                	mov    ecx,edx
  596331:	89 4c 24 50          	mov    DWORD PTR [esp+0x50],ecx
  596335:	8b ce                	mov    ecx,esi
  596337:	e8 24 fa ff ff       	call   0x595d60
  59633c:	50                   	push   eax
  59633d:	e8 ae b2 01 00       	call   0x5b15f0
  596342:	d8 6c 24 3c          	fsubr  DWORD PTR [esp+0x3c]
  596346:	d9 1c 24             	fstp   DWORD PTR [esp]
  596349:	e8 e2 b2 01 00       	call   0x5b1630
  59634e:	d9 e1                	fabs
  596350:	dd 5c 24 14          	fstp   QWORD PTR [esp+0x14]
  596354:	83 c4 04             	add    esp,0x4
  596357:	8b ce                	mov    ecx,esi
  596359:	e8 42 f1 ff ff       	call   0x5954a0
  59635e:	d9 40 0c             	fld    DWORD PTR [eax+0xc]
  596361:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  596367:	dc 5c 24 10          	fcomp  QWORD PTR [esp+0x10]
  59636b:	df e0                	fnstsw ax
  59636d:	f6 c4 41             	test   ah,0x41
  596370:	75 04                	jne    0x596376
  596372:	b3 01                	mov    bl,0x1
  596374:	eb 02                	jmp    0x596378
  596376:	32 db                	xor    bl,bl
  596378:	8b ce                	mov    ecx,esi
  59637a:	e8 21 f1 ff ff       	call   0x5954a0
  59637f:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  596383:	d8 58 04             	fcomp  DWORD PTR [eax+0x4]
  596386:	df e0                	fnstsw ax
  596388:	f6 c4 01             	test   ah,0x1
  59638b:	75 20                	jne    0x5963ad
  59638d:	84 db                	test   bl,bl
  59638f:	74 15                	je     0x5963a6
  596391:	8b ce                	mov    ecx,esi
  596393:	e8 08 f1 ff ff       	call   0x5954a0
  596398:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  59639c:	d8 58 08             	fcomp  DWORD PTR [eax+0x8]
  59639f:	df e0                	fnstsw ax
  5963a1:	f6 c4 01             	test   ah,0x1
  5963a4:	75 07                	jne    0x5963ad
  5963a6:	c6 44 24 3c 00       	mov    BYTE PTR [esp+0x3c],0x0
  5963ab:	eb 7d                	jmp    0x59642a
  5963ad:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  5963b2:	eb 76                	jmp    0x59642a
  5963b4:	c6 44 24 3c 00       	mov    BYTE PTR [esp+0x3c],0x0
  5963b9:	eb 6b                	jmp    0x596426
  5963bb:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5963bf:	8a 88 a9 00 00 00    	mov    cl,BYTE PTR [eax+0xa9]
  5963c5:	84 c9                	test   cl,cl
  5963c7:	74 54                	je     0x59641d
  5963c9:	8b 40 60             	mov    eax,DWORD PTR [eax+0x60]
  5963cc:	85 c0                	test   eax,eax
  5963ce:	75 05                	jne    0x5963d5
  5963d0:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  5963d5:	50                   	push   eax
  5963d6:	8d 54 24 20          	lea    edx,[esp+0x20]
  5963da:	68 d8 69 6a 00       	push   0x6a69d8
  5963df:	52                   	push   edx
  5963e0:	e8 ab 7f 01 00       	call   0x5ae390
  5963e5:	50                   	push   eax
  5963e6:	c6 44 24 58 04       	mov    BYTE PTR [esp+0x58],0x4
  5963eb:	e8 10 9b 01 00       	call   0x5aff00
  5963f0:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  5963f4:	83 c4 10             	add    esp,0x10
  5963f7:	85 c0                	test   eax,eax
  5963f9:	c6 44 24 48 01       	mov    BYTE PTR [esp+0x48],0x1
  5963fe:	74 1d                	je     0x59641d
  596400:	8d 48 ff             	lea    ecx,[eax-0x1]
  596403:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  596406:	84 c0                	test   al,al
  596408:	74 0a                	je     0x596414
  59640a:	3c ff                	cmp    al,0xff
  59640c:	74 06                	je     0x596414
  59640e:	fe c8                	dec    al
  596410:	88 01                	mov    BYTE PTR [ecx],al
  596412:	eb 09                	jmp    0x59641d
  596414:	51                   	push   ecx
  596415:	e8 d6 81 06 00       	call   0x5fe5f0
  59641a:	83 c4 04             	add    esp,0x4
  59641d:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  596421:	e8 aa ed ff ff       	call   0x5951d0
  596426:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  59642a:	81 c6 30 03 00 00    	add    esi,0x330
  596430:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  596434:	50                   	push   eax
  596435:	8b ce                	mov    ecx,esi
  596437:	e8 94 4d 00 00       	call   0x59b1d0
  59643c:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  596440:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  596444:	8d 4e 04             	lea    ecx,[esi+0x4]
  596447:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  59644e:	ff 
  59644f:	89 11                	mov    DWORD PTR [ecx],edx
  596451:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
  596455:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  596458:	8a 44 24 3c          	mov    al,BYTE PTR [esp+0x3c]
  59645c:	88 46 10             	mov    BYTE PTR [esi+0x10],al
  59645f:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  596462:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  596466:	e8 75 cc fc ff       	call   0x5630e0
  59646b:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  59646f:	5f                   	pop    edi
  596470:	5e                   	pop    esi
  596471:	5d                   	pop    ebp
  596472:	5b                   	pop    ebx
  596473:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59647a:	83 c4 3c             	add    esp,0x3c
  59647d:	c2 04 00             	ret    0x4
  596480:	83 ec 14             	sub    esp,0x14
  596483:	8d 44 24 00          	lea    eax,[esp+0x0]
  596487:	53                   	push   ebx
  596488:	8b 1d c8 23 6a 00    	mov    ebx,DWORD PTR ds:0x6a23c8
  59648e:	55                   	push   ebp
  59648f:	8b 2d cc 23 6a 00    	mov    ebp,DWORD PTR ds:0x6a23cc
  596495:	56                   	push   esi
  596496:	8b 35 c0 23 6a 00    	mov    esi,DWORD PTR ds:0x6a23c0
  59649c:	57                   	push   edi
  59649d:	8b 3d c4 23 6a 00    	mov    edi,DWORD PTR ds:0x6a23c4
  5964a3:	50                   	push   eax
  5964a4:	e8 87 f8 ff ff       	call   0x595d30
  5964a9:	8a 44 24 20          	mov    al,BYTE PTR [esp+0x20]
  5964ad:	84 c0                	test   al,al
  5964af:	75 18                	jne    0x5964c9
  5964b1:	8b 35 80 23 6a 00    	mov    esi,DWORD PTR ds:0x6a2380
  5964b7:	8b 3d 84 23 6a 00    	mov    edi,DWORD PTR ds:0x6a2384
  5964bd:	8b 1d 88 23 6a 00    	mov    ebx,DWORD PTR ds:0x6a2388
  5964c3:	8b 2d 8c 23 6a 00    	mov    ebp,DWORD PTR ds:0x6a238c
  5964c9:	8a 44 24 14          	mov    al,BYTE PTR [esp+0x14]
  5964cd:	84 c0                	test   al,al
  5964cf:	75 18                	jne    0x5964e9
  5964d1:	8b 35 70 23 6a 00    	mov    esi,DWORD PTR ds:0x6a2370
  5964d7:	8b 3d 74 23 6a 00    	mov    edi,DWORD PTR ds:0x6a2374
  5964dd:	8b 1d 78 23 6a 00    	mov    ebx,DWORD PTR ds:0x6a2378
  5964e3:	8b 2d 7c 23 6a 00    	mov    ebp,DWORD PTR ds:0x6a237c
  5964e9:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  5964ed:	89 31                	mov    DWORD PTR [ecx],esi
  5964ef:	89 79 04             	mov    DWORD PTR [ecx+0x4],edi
  5964f2:	89 59 08             	mov    DWORD PTR [ecx+0x8],ebx
  5964f5:	89 69 0c             	mov    DWORD PTR [ecx+0xc],ebp
  5964f8:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5964fc:	e8 df cb fc ff       	call   0x5630e0
  596501:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  596505:	5f                   	pop    edi
  596506:	5e                   	pop    esi
  596507:	5d                   	pop    ebp
  596508:	5b                   	pop    ebx
  596509:	83 c4 14             	add    esp,0x14
  59650c:	c2 04 00             	ret    0x4
  59650f:	90                   	nop
  596510:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  596516:	b0 01                	mov    al,0x1
  596518:	84 c8                	test   al,cl
  59651a:	75 08                	jne    0x596524
  59651c:	0a c8                	or     cl,al
  59651e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  596524:	e9 07 00 00 00       	jmp    0x596530
  596529:	90                   	nop
  59652a:	90                   	nop
  59652b:	90                   	nop
  59652c:	90                   	nop
  59652d:	90                   	nop
  59652e:	90                   	nop
  59652f:	90                   	nop
  596530:	68 a0 1b 40 00       	push   0x401ba0
  596535:	e8 41 40 07 00       	call   0x60a57b
  59653a:	59                   	pop    ecx
  59653b:	c3                   	ret
  59653c:	90                   	nop
  59653d:	90                   	nop
  59653e:	90                   	nop
  59653f:	90                   	nop
  596540:	56                   	push   esi
  596541:	8b f1                	mov    esi,ecx
  596543:	e8 58 4f 01 00       	call   0x5ab4a0
  596548:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  59654c:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  59654f:	33 c0                	xor    eax,eax
  596551:	89 46 1c             	mov    DWORD PTR [esi+0x1c],eax
  596554:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
  596557:	c7 06 00 00 65 00    	mov    DWORD PTR [esi],0x650000
  59655d:	8b c6                	mov    eax,esi
  59655f:	5e                   	pop    esi
  596560:	c2 04 00             	ret    0x4
  596563:	90                   	nop
  596564:	90                   	nop
  596565:	90                   	nop
  596566:	90                   	nop
  596567:	90                   	nop
  596568:	90                   	nop
  596569:	90                   	nop
  59656a:	90                   	nop
  59656b:	90                   	nop
  59656c:	90                   	nop
  59656d:	90                   	nop
  59656e:	90                   	nop
  59656f:	90                   	nop
  596570:	56                   	push   esi
  596571:	8b f1                	mov    esi,ecx
  596573:	e8 18 00 00 00       	call   0x596590
  596578:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  59657d:	74 09                	je     0x596588
  59657f:	56                   	push   esi
  596580:	e8 6b 80 06 00       	call   0x5fe5f0
  596585:	83 c4 04             	add    esp,0x4
  596588:	8b c6                	mov    eax,esi
  59658a:	5e                   	pop    esi
  59658b:	c2 04 00             	ret    0x4
  59658e:	90                   	nop
  59658f:	90                   	nop
  596590:	6a ff                	push   0xffffffff
  596592:	68 83 3d 64 00       	push   0x643d83
  596597:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59659d:	50                   	push   eax
  59659e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5965a5:	51                   	push   ecx
  5965a6:	56                   	push   esi
  5965a7:	8b f1                	mov    esi,ecx
  5965a9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  5965ad:	c7 06 00 00 65 00    	mov    DWORD PTR [esi],0x650000
  5965b3:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  5965b6:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
  5965bd:	00 
  5965be:	85 c9                	test   ecx,ecx
  5965c0:	74 06                	je     0x5965c8
  5965c2:	8b 01                	mov    eax,DWORD PTR [ecx]
  5965c4:	6a 01                	push   0x1
  5965c6:	ff 10                	call   DWORD PTR [eax]
  5965c8:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  5965cb:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
  5965d0:	85 c9                	test   ecx,ecx
  5965d2:	74 17                	je     0x5965eb
  5965d4:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  5965d7:	48                   	dec    eax
  5965d8:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  5965db:	75 07                	jne    0x5965e4
  5965dd:	6a 00                	push   0x0
  5965df:	e8 dc 59 01 00       	call   0x5abfc0
  5965e4:	c7 46 24 00 00 00 00 	mov    DWORD PTR [esi+0x24],0x0
  5965eb:	8b ce                	mov    ecx,esi
  5965ed:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  5965f4:	ff 
  5965f5:	e8 d6 4e 01 00       	call   0x5ab4d0
  5965fa:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5965fe:	5e                   	pop    esi
  5965ff:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596606:	83 c4 10             	add    esp,0x10
  596609:	c3                   	ret
  59660a:	90                   	nop
  59660b:	90                   	nop
  59660c:	90                   	nop
  59660d:	90                   	nop
  59660e:	90                   	nop
  59660f:	90                   	nop
  596610:	8b 51 1c             	mov    edx,DWORD PTR [ecx+0x1c]
  596613:	33 c0                	xor    eax,eax
  596615:	85 d2                	test   edx,edx
  596617:	0f 95 c0             	setne  al
  59661a:	c3                   	ret
  59661b:	90                   	nop
  59661c:	90                   	nop
  59661d:	90                   	nop
  59661e:	90                   	nop
  59661f:	90                   	nop
  596620:	56                   	push   esi
  596621:	8b f1                	mov    esi,ecx
  596623:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  596626:	85 c9                	test   ecx,ecx
  596628:	74 06                	je     0x596630
  59662a:	8b 01                	mov    eax,DWORD PTR [ecx]
  59662c:	6a 01                	push   0x1
  59662e:	ff 10                	call   DWORD PTR [eax]
  596630:	c7 46 1c 00 00 00 00 	mov    DWORD PTR [esi+0x1c],0x0
  596637:	5e                   	pop    esi
  596638:	c3                   	ret
  596639:	90                   	nop
  59663a:	90                   	nop
  59663b:	90                   	nop
  59663c:	90                   	nop
  59663d:	90                   	nop
  59663e:	90                   	nop
  59663f:	90                   	nop
  596640:	56                   	push   esi
  596641:	8b f1                	mov    esi,ecx
  596643:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  596646:	85 c9                	test   ecx,ecx
  596648:	74 06                	je     0x596650
  59664a:	8b 01                	mov    eax,DWORD PTR [ecx]
  59664c:	6a 01                	push   0x1
  59664e:	ff 10                	call   DWORD PTR [eax]
  596650:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  596654:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  596658:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
  59665b:	8b ce                	mov    ecx,esi
  59665d:	89 56 18             	mov    DWORD PTR [esi+0x18],edx
  596660:	c6 46 20 00          	mov    BYTE PTR [esi+0x20],0x0
  596664:	e8 47 03 00 00       	call   0x5969b0
  596669:	8a 4e 20             	mov    cl,BYTE PTR [esi+0x20]
  59666c:	84 c0                	test   al,al
  59666e:	0f 94 c0             	sete   al
  596671:	84 c9                	test   cl,cl
  596673:	88 46 21             	mov    BYTE PTR [esi+0x21],al
  596676:	75 15                	jne    0x59668d
  596678:	84 c0                	test   al,al
  59667a:	75 11                	jne    0x59668d
  59667c:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59667f:	6a 00                	push   0x0
  596681:	e8 ea ed ff ff       	call   0x595470
  596686:	8b c8                	mov    ecx,eax
  596688:	e8 e3 57 00 00       	call   0x59be70
  59668d:	5e                   	pop    esi
  59668e:	c2 08 00             	ret    0x8
  596691:	90                   	nop
  596692:	90                   	nop
  596693:	90                   	nop
  596694:	90                   	nop
  596695:	90                   	nop
  596696:	90                   	nop
  596697:	90                   	nop
  596698:	90                   	nop
  596699:	90                   	nop
  59669a:	90                   	nop
  59669b:	90                   	nop
  59669c:	90                   	nop
  59669d:	90                   	nop
  59669e:	90                   	nop
  59669f:	90                   	nop
  5966a0:	6a ff                	push   0xffffffff
  5966a2:	68 9b 3d 64 00       	push   0x643d9b
  5966a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5966ad:	50                   	push   eax
  5966ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5966b5:	51                   	push   ecx
  5966b6:	56                   	push   esi
  5966b7:	8b f1                	mov    esi,ecx
  5966b9:	6a 28                	push   0x28
  5966bb:	e8 f5 39 07 00       	call   0x60a0b5
  5966c0:	83 c4 04             	add    esp,0x4
  5966c3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  5966c7:	85 c0                	test   eax,eax
  5966c9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  5966d0:	00 
  5966d1:	74 12                	je     0x5966e5
  5966d3:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5966d7:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
  5966da:	51                   	push   ecx
  5966db:	52                   	push   edx
  5966dc:	8b c8                	mov    ecx,eax
  5966de:	e8 fd 07 00 00       	call   0x596ee0
  5966e3:	eb 02                	jmp    0x5966e7
  5966e5:	33 c0                	xor    eax,eax
  5966e7:	50                   	push   eax
  5966e8:	6a 00                	push   0x0
  5966ea:	8b ce                	mov    ecx,esi
  5966ec:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  5966f3:	ff 
  5966f4:	e8 47 ff ff ff       	call   0x596640
  5966f9:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5966fd:	5e                   	pop    esi
  5966fe:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596705:	83 c4 10             	add    esp,0x10
  596708:	c2 04 00             	ret    0x4
  59670b:	90                   	nop
  59670c:	90                   	nop
  59670d:	90                   	nop
  59670e:	90                   	nop
  59670f:	90                   	nop
  596710:	6a ff                	push   0xffffffff
  596712:	68 bb 3d 64 00       	push   0x643dbb
  596717:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59671d:	50                   	push   eax
  59671e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596725:	51                   	push   ecx
  596726:	56                   	push   esi
  596727:	8b f1                	mov    esi,ecx
  596729:	6a 2c                	push   0x2c
  59672b:	e8 85 39 07 00       	call   0x60a0b5
  596730:	83 c4 04             	add    esp,0x4
  596733:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  596737:	85 c0                	test   eax,eax
  596739:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  596740:	00 
  596741:	74 17                	je     0x59675a
  596743:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  596747:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  59674b:	51                   	push   ecx
  59674c:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59674f:	52                   	push   edx
  596750:	51                   	push   ecx
  596751:	8b c8                	mov    ecx,eax
  596753:	e8 e8 08 00 00       	call   0x597040
  596758:	eb 02                	jmp    0x59675c
  59675a:	33 c0                	xor    eax,eax
  59675c:	50                   	push   eax
  59675d:	6a 01                	push   0x1
  59675f:	8b ce                	mov    ecx,esi
  596761:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  596768:	ff 
  596769:	e8 d2 fe ff ff       	call   0x596640
  59676e:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  596772:	5e                   	pop    esi
  596773:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59677a:	83 c4 10             	add    esp,0x10
  59677d:	c2 08 00             	ret    0x8
  596780:	6a ff                	push   0xffffffff
  596782:	68 db 3d 64 00       	push   0x643ddb
  596787:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59678d:	50                   	push   eax
  59678e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596795:	51                   	push   ecx
  596796:	56                   	push   esi
  596797:	8b f1                	mov    esi,ecx
  596799:	6a 2c                	push   0x2c
  59679b:	e8 15 39 07 00       	call   0x60a0b5
  5967a0:	83 c4 04             	add    esp,0x4
  5967a3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  5967a7:	85 c0                	test   eax,eax
  5967a9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  5967b0:	00 
  5967b1:	74 17                	je     0x5967ca
  5967b3:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5967b7:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5967bb:	51                   	push   ecx
  5967bc:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  5967bf:	52                   	push   edx
  5967c0:	51                   	push   ecx
  5967c1:	8b c8                	mov    ecx,eax
  5967c3:	e8 98 0a 00 00       	call   0x597260
  5967c8:	eb 02                	jmp    0x5967cc
  5967ca:	33 c0                	xor    eax,eax
  5967cc:	50                   	push   eax
  5967cd:	6a 02                	push   0x2
  5967cf:	8b ce                	mov    ecx,esi
  5967d1:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  5967d8:	ff 
  5967d9:	e8 62 fe ff ff       	call   0x596640
  5967de:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5967e2:	5e                   	pop    esi
  5967e3:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5967ea:	83 c4 10             	add    esp,0x10
  5967ed:	c2 08 00             	ret    0x8
  5967f0:	6a ff                	push   0xffffffff
  5967f2:	68 fb 3d 64 00       	push   0x643dfb
  5967f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5967fd:	50                   	push   eax
  5967fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596805:	51                   	push   ecx
  596806:	56                   	push   esi
  596807:	8b f1                	mov    esi,ecx
  596809:	6a 1c                	push   0x1c
  59680b:	e8 a5 38 07 00       	call   0x60a0b5
  596810:	83 c4 04             	add    esp,0x4
  596813:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  596817:	85 c0                	test   eax,eax
  596819:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  596820:	00 
  596821:	74 12                	je     0x596835
  596823:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  596827:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
  59682a:	51                   	push   ecx
  59682b:	52                   	push   edx
  59682c:	8b c8                	mov    ecx,eax
  59682e:	e8 ad 0b 00 00       	call   0x5973e0
  596833:	eb 02                	jmp    0x596837
  596835:	33 c0                	xor    eax,eax
  596837:	50                   	push   eax
  596838:	6a 03                	push   0x3
  59683a:	8b ce                	mov    ecx,esi
  59683c:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  596843:	ff 
  596844:	e8 f7 fd ff ff       	call   0x596640
  596849:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  59684d:	5e                   	pop    esi
  59684e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  596855:	83 c4 10             	add    esp,0x10
  596858:	c2 04 00             	ret    0x4
  59685b:	90                   	nop
  59685c:	90                   	nop
  59685d:	90                   	nop
  59685e:	90                   	nop
  59685f:	90                   	nop
  596860:	6a ff                	push   0xffffffff
  596862:	68 1b 3e 64 00       	push   0x643e1b
  596867:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59686d:	50                   	push   eax
  59686e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  596875:	51                   	push   ecx
  596876:	56                   	push   esi
  596877:	8b f1                	mov    esi,ecx
  596879:	6a 1c                	push   0x1c
  59687b:	e8 35 38 07 00       	call   0x60a0b5
