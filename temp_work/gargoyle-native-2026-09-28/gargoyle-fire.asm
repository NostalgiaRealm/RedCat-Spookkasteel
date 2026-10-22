  40c100:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40c106:	6a ff                	push   0xffffffff
  40c108:	68 b0 0a 62 00       	push   0x620ab0
  40c10d:	50                   	push   eax
  40c10e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40c115:	83 ec 58             	sub    esp,0x58
  40c118:	8d 44 24 0c          	lea    eax,[esp+0xc]
  40c11c:	53                   	push   ebx
  40c11d:	55                   	push   ebp
  40c11e:	56                   	push   esi
  40c11f:	57                   	push   edi
  40c120:	8b e9                	mov    ebp,ecx
  40c122:	50                   	push   eax
  40c123:	e8 a8 76 01 00       	call   0x4237d0
  40c128:	8b 08                	mov    ecx,DWORD PTR [eax]
  40c12a:	33 f6                	xor    esi,esi
  40c12c:	3b ce                	cmp    ecx,esi
  40c12e:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  40c132:	0f 94 c3             	sete   bl
  40c135:	3b ce                	cmp    ecx,esi
  40c137:	74 05                	je     0x40c13e
  40c139:	e8 92 d7 ff ff       	call   0x4098d0
  40c13e:	84 db                	test   bl,bl
  40c140:	0f 85 19 03 00 00    	jne    0x40c45f
  40c146:	51                   	push   ecx
  40c147:	8b cc                	mov    ecx,esp
  40c149:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  40c14d:	51                   	push   ecx
  40c14e:	8b cd                	mov    ecx,ebp
  40c150:	e8 7b 76 01 00       	call   0x4237d0
  40c155:	e8 06 ef ff ff       	call   0x40b060
  40c15a:	8b d8                	mov    ebx,eax
  40c15c:	83 c4 04             	add    esp,0x4
  40c15f:	3b de                	cmp    ebx,esi
  40c161:	0f 85 90 00 00 00    	jne    0x40c1f7
  40c167:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  40c16b:	56                   	push   esi
  40c16c:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  40c170:	88 54 24 50          	mov    BYTE PTR [esp+0x50],dl
  40c174:	e8 27 7f ff ff       	call   0x4040a0
  40c179:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  40c17e:	83 c9 ff             	or     ecx,0xffffffff
  40c181:	33 c0                	xor    eax,eax
  40c183:	6a 01                	push   0x1
  40c185:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40c187:	f7 d1                	not    ecx
  40c189:	49                   	dec    ecx
  40c18a:	8b f9                	mov    edi,ecx
  40c18c:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  40c190:	57                   	push   edi
  40c191:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
  40c195:	e8 a6 57 ff ff       	call   0x401940
  40c19a:	84 c0                	test   al,al
  40c19c:	74 27                	je     0x40c1c5
  40c19e:	8b cf                	mov    ecx,edi
  40c1a0:	8b 7c 24 50          	mov    edi,DWORD PTR [esp+0x50]
  40c1a4:	8b c1                	mov    eax,ecx
  40c1a6:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  40c1ab:	c1 e9 02             	shr    ecx,0x2
  40c1ae:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40c1b0:	8b c8                	mov    ecx,eax
  40c1b2:	83 e1 03             	and    ecx,0x3
  40c1b5:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  40c1b7:	8b c8                	mov    ecx,eax
  40c1b9:	51                   	push   ecx
  40c1ba:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  40c1be:	e8 cd 7f ff ff       	call   0x404190
  40c1c3:	33 f6                	xor    esi,esi
  40c1c5:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  40c1c9:	89 74 24 70          	mov    DWORD PTR [esp+0x70],esi
  40c1cd:	52                   	push   edx
  40c1ce:	6a 70                	push   0x70
  40c1d0:	68 e8 e4 68 00       	push   0x68e4e8
  40c1d5:	68 14 e5 68 00       	push   0x68e514
  40c1da:	e8 11 46 19 00       	call   0x5a07f0
  40c1df:	ff d0                	call   eax
  40c1e1:	83 c4 10             	add    esp,0x10
  40c1e4:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  40c1e8:	c7 44 24 70 ff ff ff 	mov    DWORD PTR [esp+0x70],0xffffffff
  40c1ef:	ff 
  40c1f0:	6a 01                	push   0x1
  40c1f2:	e8 a9 7e ff ff       	call   0x4040a0
  40c1f7:	8b 03                	mov    eax,DWORD PTR [ebx]
  40c1f9:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  40c1fd:	51                   	push   ecx
  40c1fe:	8b cb                	mov    ecx,ebx
  40c200:	ff 50 48             	call   DWORD PTR [eax+0x48]
  40c203:	8b 10                	mov    edx,DWORD PTR [eax]
  40c205:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
  40c209:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  40c20c:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
  40c210:	8b cd                	mov    ecx,ebp
  40c212:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  40c215:	8d 44 24 28          	lea    eax,[esp+0x28]
  40c219:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  40c21d:	d8 85 2c 02 00 00    	fadd   DWORD PTR [ebp+0x22c]
  40c223:	50                   	push   eax
  40c224:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  40c228:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  40c22b:	8d 44 24 50          	lea    eax,[esp+0x50]
  40c22f:	50                   	push   eax
  40c230:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
  40c234:	ff 92 c8 00 00 00    	call   DWORD PTR [edx+0xc8]
  40c23a:	8b d0                	mov    edx,eax
  40c23c:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  40c240:	e8 9b 6d 1a 00       	call   0x5b2fe0
  40c245:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  40c249:	e8 d2 6c 1a 00       	call   0x5b2f20
  40c24e:	8b cd                	mov    ecx,ebp
  40c250:	dd d8                	fstp   st(0)
  40c252:	e8 a9 f0 01 00       	call   0x42b300
  40c257:	8b 48 28             	mov    ecx,DWORD PTR [eax+0x28]
  40c25a:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  40c25e:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  40c262:	d9 e0                	fchs
  40c264:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
  40c268:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  40c26c:	e8 2f e2 1f 00       	call   0x60a4a0
  40c271:	99                   	cdq
  40c272:	b9 10 27 00 00       	mov    ecx,0x2710
  40c277:	f7 f9                	idiv   ecx
  40c279:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  40c27d:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  40c281:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  40c285:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  40c289:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  40c28d:	de c9                	fmulp  st(1),st
  40c28f:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  40c295:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  40c299:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  40c29d:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  40c2a1:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  40c2a5:	e8 f6 e1 1f 00       	call   0x60a4a0
  40c2aa:	99                   	cdq
  40c2ab:	b9 10 27 00 00       	mov    ecx,0x2710
  40c2b0:	f7 f9                	idiv   ecx
  40c2b2:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  40c2b6:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  40c2ba:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  40c2be:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  40c2c2:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  40c2c6:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  40c2ca:	de c9                	fmulp  st(1),st
  40c2cc:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  40c2d2:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  40c2d6:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  40c2da:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  40c2de:	e8 bd e1 1f 00       	call   0x60a4a0
  40c2e3:	99                   	cdq
  40c2e4:	b9 10 27 00 00       	mov    ecx,0x2710
  40c2e9:	f7 f9                	idiv   ecx
  40c2eb:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  40c2ef:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  40c2f3:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  40c2f7:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  40c2fb:	de c9                	fmulp  st(1),st
  40c2fd:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  40c303:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  40c307:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  40c30b:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  40c30f:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  40c313:	e8 08 6c 1a 00       	call   0x5b2f20
  40c318:	8b 7d 00             	mov    edi,DWORD PTR [ebp+0x0]
  40c31b:	8d 54 24 24          	lea    edx,[esp+0x24]
  40c31f:	8d 44 24 28          	lea    eax,[esp+0x28]
  40c323:	52                   	push   edx
  40c324:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  40c328:	50                   	push   eax
  40c329:	51                   	push   ecx
  40c32a:	8b cd                	mov    ecx,ebp
  40c32c:	dd d8                	fstp   st(0)
  40c32e:	ff 97 c8 00 00 00    	call   DWORD PTR [edi+0xc8]
  40c334:	50                   	push   eax
  40c335:	8b cd                	mov    ecx,ebp
  40c337:	ff 97 d0 00 00 00    	call   DWORD PTR [edi+0xd0]
  40c33d:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  40c340:	6a 02                	push   0x2
  40c342:	8b cd                	mov    ecx,ebp
  40c344:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
  40c34a:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  40c34e:	3b c6                	cmp    eax,esi
  40c350:	0f 84 09 01 00 00    	je     0x40c45f
  40c356:	8d 88 34 02 00 00    	lea    ecx,[eax+0x234]
  40c35c:	8b 90 34 02 00 00    	mov    edx,DWORD PTR [eax+0x234]
  40c362:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  40c366:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  40c369:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
  40c36d:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  40c370:	89 4c 24 48          	mov    DWORD PTR [esp+0x48],ecx
  40c374:	c6 80 a8 00 00 00 00 	mov    BYTE PTR [eax+0xa8],0x0
  40c37b:	39 b5 34 02 00 00    	cmp    DWORD PTR [ebp+0x234],esi
  40c381:	0f 85 ad 00 00 00    	jne    0x40c434
  40c387:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  40c38c:	83 c9 ff             	or     ecx,0xffffffff
  40c38f:	33 c0                	xor    eax,eax
  40c391:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  40c395:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40c397:	f7 d1                	not    ecx
  40c399:	49                   	dec    ecx
  40c39a:	6a 01                	push   0x1
  40c39c:	8b d9                	mov    ebx,ecx
  40c39e:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  40c3a2:	53                   	push   ebx
  40c3a3:	88 54 24 54          	mov    BYTE PTR [esp+0x54],dl
  40c3a7:	89 74 24 58          	mov    DWORD PTR [esp+0x58],esi
  40c3ab:	89 74 24 5c          	mov    DWORD PTR [esp+0x5c],esi
  40c3af:	89 74 24 60          	mov    DWORD PTR [esp+0x60],esi
  40c3b3:	e8 88 55 ff ff       	call   0x401940
  40c3b8:	84 c0                	test   al,al
  40c3ba:	74 25                	je     0x40c3e1
  40c3bc:	8b 7c 24 50          	mov    edi,DWORD PTR [esp+0x50]
  40c3c0:	8b cb                	mov    ecx,ebx
  40c3c2:	8b c1                	mov    eax,ecx
  40c3c4:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  40c3c9:	c1 e9 02             	shr    ecx,0x2
  40c3cc:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40c3ce:	8b c8                	mov    ecx,eax
  40c3d0:	83 e1 03             	and    ecx,0x3
  40c3d3:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  40c3d5:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  40c3d9:	89 5c 24 54          	mov    DWORD PTR [esp+0x54],ebx
  40c3dd:	c6 04 19 00          	mov    BYTE PTR [ecx+ebx*1],0x0
  40c3e1:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  40c3e5:	c7 44 24 70 01 00 00 	mov    DWORD PTR [esp+0x70],0x1
  40c3ec:	00 
  40c3ed:	52                   	push   edx
  40c3ee:	68 8d 00 00 00       	push   0x8d
  40c3f3:	68 e8 e4 68 00       	push   0x68e4e8
  40c3f8:	68 dc e4 68 00       	push   0x68e4dc
  40c3fd:	e8 ee 43 19 00       	call   0x5a07f0
  40c402:	ff d0                	call   eax
  40c404:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  40c408:	83 c4 10             	add    esp,0x10
  40c40b:	85 c0                	test   eax,eax
  40c40d:	c7 44 24 70 ff ff ff 	mov    DWORD PTR [esp+0x70],0xffffffff
  40c414:	ff 
  40c415:	74 1d                	je     0x40c434
  40c417:	8d 48 ff             	lea    ecx,[eax-0x1]
  40c41a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  40c41d:	84 c0                	test   al,al
  40c41f:	74 0a                	je     0x40c42b
  40c421:	3c ff                	cmp    al,0xff
  40c423:	74 06                	je     0x40c42b
  40c425:	fe c8                	dec    al
  40c427:	88 01                	mov    BYTE PTR [ecx],al
  40c429:	eb 09                	jmp    0x40c434
  40c42b:	51                   	push   ecx
  40c42c:	e8 bf 21 1f 00       	call   0x5fe5f0
  40c431:	83 c4 04             	add    esp,0x4
  40c434:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  40c437:	8d 44 24 40          	lea    eax,[esp+0x40]
  40c43b:	50                   	push   eax
  40c43c:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  40c440:	68 e8 03 00 00       	push   0x3e8
  40c445:	8d 44 24 64          	lea    eax,[esp+0x64]
  40c449:	51                   	push   ecx
  40c44a:	50                   	push   eax
  40c44b:	8b cd                	mov    ecx,ebp
  40c44d:	ff 92 c8 00 00 00    	call   DWORD PTR [edx+0xc8]
  40c453:	8b 8d 34 02 00 00    	mov    ecx,DWORD PTR [ebp+0x234]
  40c459:	50                   	push   eax
  40c45a:	e8 81 2a 05 00       	call   0x45eee0
  40c45f:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
  40c463:	5f                   	pop    edi
  40c464:	5e                   	pop    esi
  40c465:	5d                   	pop    ebp
  40c466:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40c46d:	5b                   	pop    ebx
  40c46e:	83 c4 64             	add    esp,0x64
  40c471:	c3                   	ret
  40c472:	90                   	nop
  40c473:	90                   	nop
  40c474:	90                   	nop
  40c475:	90                   	nop
  40c476:	90                   	nop
  40c477:	90                   	nop
  40c478:	90                   	nop
  40c479:	90                   	nop
  40c47a:	90                   	nop
  40c47b:	90                   	nop
  40c47c:	90                   	nop
  40c47d:	90                   	nop
  40c47e:	90                   	nop
  40c47f:	90                   	nop
  40c480:	83 ec 10             	sub    esp,0x10
  40c483:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  40c487:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  40c48b:	56                   	push   esi
  40c48c:	50                   	push   eax
  40c48d:	8b 32                	mov    esi,DWORD PTR [edx]
  40c48f:	6a 00                	push   0x0
  40c491:	83 ec 0c             	sub    esp,0xc
  40c494:	8b c4                	mov    eax,esp
  40c496:	83 ec 0c             	sub    esp,0xc
  40c499:	89 30                	mov    DWORD PTR [eax],esi
  40c49b:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  40c49e:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  40c4a1:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
  40c4a4:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  40c4a7:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  40c4ab:	8b d4                	mov    edx,esp
  40c4ad:	6a 02                	push   0x2
  40c4af:	8b 30                	mov    esi,DWORD PTR [eax]
  40c4b1:	51                   	push   ecx
  40c4b2:	89 32                	mov    DWORD PTR [edx],esi
  40c4b4:	89 64 24 48          	mov    DWORD PTR [esp+0x48],esp
  40c4b8:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
  40c4bb:	89 72 04             	mov    DWORD PTR [edx+0x4],esi
  40c4be:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  40c4c1:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  40c4c4:	8b d4                	mov    edx,esp
  40c4c6:	52                   	push   edx
  40c4c7:	e8 14 7e ff ff       	call   0x4042e0
  40c4cc:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  40c4d0:	50                   	push   eax
  40c4d1:	e8 8a 0d 04 00       	call   0x44d260
  40c4d6:	83 c4 2c             	add    esp,0x2c
  40c4d9:	5e                   	pop    esi
  40c4da:	83 c4 10             	add    esp,0x10
  40c4dd:	c2 0c 00             	ret    0xc
