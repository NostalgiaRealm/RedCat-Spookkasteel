
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0059c200 <.text+0x19b200>:
  59c200:	74 24                	je     0x59c226
  59c202:	2c 0f                	sub    al,0xf
  59c204:	84 b4 00 00 00 8a 44 	test   BYTE PTR [eax+eax*1+0x448a0000],dh
  59c20b:	24 0f                	and    al,0xf
  59c20d:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59c212:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  59c216:	83 c9 ff             	or     ecx,0xffffffff
  59c219:	33 c0                	xor    eax,eax
  59c21b:	53                   	push   ebx
  59c21c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59c21e:	f7 d1                	not    ecx
  59c220:	49                   	dec    ecx
  59c221:	6a 01                	push   0x1
  59c223:	8b d9                	mov    ebx,ecx
  59c225:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59c229:	53                   	push   ebx
  59c22a:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59c22e:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  59c232:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  59c236:	e8 05 57 e6 ff       	call   0x401940
  59c23b:	84 c0                	test   al,al
  59c23d:	74 27                	je     0x59c266
  59c23f:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  59c243:	8b cb                	mov    ecx,ebx
  59c245:	8b d1                	mov    edx,ecx
  59c247:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  59c24c:	c1 e9 02             	shr    ecx,0x2
  59c24f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59c251:	8b ca                	mov    ecx,edx
  59c253:	83 e1 03             	and    ecx,0x3
  59c256:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59c258:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  59c25c:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59c260:	33 f6                	xor    esi,esi
  59c262:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  59c266:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59c26a:	c6 44 24 30 01       	mov    BYTE PTR [esp+0x30],0x1
  59c26f:	51                   	push   ecx
  59c270:	6a 1d                	push   0x1d
  59c272:	68 cc 72 6a 00       	push   0x6a72cc
  59c277:	68 bc 72 6a 00       	push   0x6a72bc
  59c27c:	e8 6f 45 00 00       	call   0x5a07f0
  59c281:	ff d0                	call   eax
  59c283:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  59c287:	83 c4 10             	add    esp,0x10
  59c28a:	3b c6                	cmp    eax,esi
  59c28c:	c6 44 24 30 00       	mov    BYTE PTR [esp+0x30],0x0
  59c291:	5b                   	pop    ebx
  59c292:	74 1d                	je     0x59c2b1
  59c294:	8d 48 ff             	lea    ecx,[eax-0x1]
  59c297:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59c29a:	84 c0                	test   al,al
  59c29c:	74 0a                	je     0x59c2a8
  59c29e:	3c ff                	cmp    al,0xff
  59c2a0:	74 06                	je     0x59c2a8
  59c2a2:	fe c8                	dec    al
  59c2a4:	88 01                	mov    BYTE PTR [ecx],al
  59c2a6:	eb 09                	jmp    0x59c2b1
  59c2a8:	51                   	push   ecx
  59c2a9:	e8 42 23 06 00       	call   0x5fe5f0
  59c2ae:	83 c4 04             	add    esp,0x4
  59c2b1:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  59c2b5:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  59c2b9:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  59c2bd:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c2c0:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c2c2:	ff 12                	call   DWORD PTR [edx]
  59c2c4:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c2c7:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c2c9:	ff 50 18             	call   DWORD PTR [eax+0x18]
  59c2cc:	84 c0                	test   al,al
  59c2ce:	74 2a                	je     0x59c2fa
  59c2d0:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c2d3:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c2d5:	ff 52 20             	call   DWORD PTR [edx+0x20]
  59c2d8:	8b 00                	mov    eax,DWORD PTR [eax]
  59c2da:	3b c6                	cmp    eax,esi
  59c2dc:	74 08                	je     0x59c2e6
  59c2de:	8b 10                	mov    edx,DWORD PTR [eax]
  59c2e0:	6a 01                	push   0x1
  59c2e2:	8b c8                	mov    ecx,eax
  59c2e4:	ff 12                	call   DWORD PTR [edx]
  59c2e6:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c2e9:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c2eb:	ff 50 08             	call   DWORD PTR [eax+0x8]
  59c2ee:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c2f1:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c2f3:	ff 52 18             	call   DWORD PTR [edx+0x18]
  59c2f6:	84 c0                	test   al,al
  59c2f8:	75 d6                	jne    0x59c2d0
  59c2fa:	8b 45 1c             	mov    eax,DWORD PTR [ebp+0x1c]
  59c2fd:	50                   	push   eax
  59c2fe:	e8 ed 22 06 00       	call   0x5fe5f0
  59c303:	8b 75 18             	mov    esi,DWORD PTR [ebp+0x18]
  59c306:	33 ff                	xor    edi,edi
  59c308:	83 c4 04             	add    esp,0x4
  59c30b:	3b f7                	cmp    esi,edi
  59c30d:	74 1f                	je     0x59c32e
  59c30f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  59c312:	50                   	push   eax
  59c313:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  59c317:	e8 d4 22 06 00       	call   0x5fe5f0
  59c31c:	56                   	push   esi
  59c31d:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  59c320:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
  59c323:	89 7e 0c             	mov    DWORD PTR [esi+0xc],edi
  59c326:	e8 c5 22 06 00       	call   0x5fe5f0
  59c32b:	83 c4 08             	add    esp,0x8
  59c32e:	8b cd                	mov    ecx,ebp
  59c330:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  59c337:	ff 
  59c338:	e8 93 f1 00 00       	call   0x5ab4d0
  59c33d:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  59c341:	5f                   	pop    edi
  59c342:	5e                   	pop    esi
  59c343:	5d                   	pop    ebp
  59c344:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59c34b:	83 c4 24             	add    esp,0x24
  59c34e:	c3                   	ret
  59c34f:	90                   	nop
  59c350:	8b 49 18             	mov    ecx,DWORD PTR [ecx+0x18]
  59c353:	8d 44 24 04          	lea    eax,[esp+0x4]
  59c357:	50                   	push   eax
  59c358:	6a 01                	push   0x1
  59c35a:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
  59c35d:	52                   	push   edx
  59c35e:	e8 8d 0c fa ff       	call   0x53cff0
  59c363:	c2 04 00             	ret    0x4
  59c366:	90                   	nop
  59c367:	90                   	nop
  59c368:	90                   	nop
  59c369:	90                   	nop
  59c36a:	90                   	nop
  59c36b:	90                   	nop
  59c36c:	90                   	nop
  59c36d:	90                   	nop
  59c36e:	90                   	nop
  59c36f:	90                   	nop
  59c370:	ff 41 14             	inc    DWORD PTR [ecx+0x14]
  59c373:	c2 04 00             	ret    0x4
  59c376:	90                   	nop
  59c377:	90                   	nop
  59c378:	90                   	nop
  59c379:	90                   	nop
  59c37a:	90                   	nop
  59c37b:	90                   	nop
  59c37c:	90                   	nop
  59c37d:	90                   	nop
  59c37e:	90                   	nop
  59c37f:	90                   	nop
  59c380:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59c386:	6a ff                	push   0xffffffff
  59c388:	68 b8 47 64 00       	push   0x6447b8
  59c38d:	50                   	push   eax
  59c38e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59c395:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  59c398:	83 ec 14             	sub    esp,0x14
  59c39b:	48                   	dec    eax
  59c39c:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  59c39f:	53                   	push   ebx
  59c3a0:	0f 89 b5 00 00 00    	jns    0x59c45b
  59c3a6:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  59c3aa:	55                   	push   ebp
  59c3ab:	57                   	push   edi
  59c3ac:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  59c3b0:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59c3b5:	83 c9 ff             	or     ecx,0xffffffff
  59c3b8:	33 c0                	xor    eax,eax
  59c3ba:	33 db                	xor    ebx,ebx
  59c3bc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59c3be:	f7 d1                	not    ecx
  59c3c0:	49                   	dec    ecx
  59c3c1:	6a 01                	push   0x1
  59c3c3:	8b e9                	mov    ebp,ecx
  59c3c5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59c3c9:	55                   	push   ebp
  59c3ca:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  59c3ce:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59c3d2:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  59c3d6:	e8 65 55 e6 ff       	call   0x401940
  59c3db:	84 c0                	test   al,al
  59c3dd:	74 26                	je     0x59c405
  59c3df:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  59c3e3:	8b cd                	mov    ecx,ebp
  59c3e5:	8b d1                	mov    edx,ecx
  59c3e7:	56                   	push   esi
  59c3e8:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  59c3ed:	c1 e9 02             	shr    ecx,0x2
  59c3f0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59c3f2:	8b ca                	mov    ecx,edx
  59c3f4:	83 e1 03             	and    ecx,0x3
  59c3f7:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59c3f9:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  59c3fd:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  59c401:	5e                   	pop    esi
  59c402:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  59c405:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  59c409:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  59c40d:	51                   	push   ecx
  59c40e:	6a 35                	push   0x35
  59c410:	68 cc 72 6a 00       	push   0x6a72cc
  59c415:	68 fc 72 6a 00       	push   0x6a72fc
  59c41a:	e8 d1 43 00 00       	call   0x5a07f0
  59c41f:	ff d0                	call   eax
  59c421:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  59c425:	83 c4 10             	add    esp,0x10
  59c428:	3b c3                	cmp    eax,ebx
  59c42a:	5f                   	pop    edi
  59c42b:	5d                   	pop    ebp
  59c42c:	74 2d                	je     0x59c45b
  59c42e:	8d 48 ff             	lea    ecx,[eax-0x1]
  59c431:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59c434:	3a c3                	cmp    al,bl
  59c436:	74 1a                	je     0x59c452
  59c438:	3c ff                	cmp    al,0xff
  59c43a:	74 16                	je     0x59c452
  59c43c:	fe c8                	dec    al
  59c43e:	5b                   	pop    ebx
  59c43f:	88 01                	mov    BYTE PTR [ecx],al
  59c441:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  59c445:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59c44c:	83 c4 20             	add    esp,0x20
  59c44f:	c2 04 00             	ret    0x4
  59c452:	51                   	push   ecx
  59c453:	e8 98 21 06 00       	call   0x5fe5f0
  59c458:	83 c4 04             	add    esp,0x4
  59c45b:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  59c45f:	5b                   	pop    ebx
  59c460:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59c467:	83 c4 20             	add    esp,0x20
  59c46a:	c2 04 00             	ret    0x4
  59c46d:	90                   	nop
  59c46e:	90                   	nop
  59c46f:	90                   	nop
  59c470:	83 ec 24             	sub    esp,0x24
  59c473:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  59c477:	56                   	push   esi
  59c478:	8b f1                	mov    esi,ecx
  59c47a:	8b 88 60 03 00 00    	mov    ecx,DWORD PTR [eax+0x360]
  59c480:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  59c484:	50                   	push   eax
  59c485:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c487:	ff 52 48             	call   DWORD PTR [edx+0x48]
  59c48a:	8b 08                	mov    ecx,DWORD PTR [eax]
  59c48c:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
  59c490:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c493:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  59c496:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
  59c49a:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  59c49d:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  59c4a1:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c4a3:	ff 12                	call   DWORD PTR [edx]
  59c4a5:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c4a8:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c4aa:	ff 50 18             	call   DWORD PTR [eax+0x18]
  59c4ad:	84 c0                	test   al,al
  59c4af:	74 60                	je     0x59c511
  59c4b1:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c4b4:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c4b6:	ff 52 20             	call   DWORD PTR [edx+0x20]
  59c4b9:	8b 08                	mov    ecx,DWORD PTR [eax]
  59c4bb:	e8 f0 ba ff ff       	call   0x597fb0
  59c4c0:	8b 08                	mov    ecx,DWORD PTR [eax]
  59c4c2:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  59c4c6:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  59c4ca:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  59c4cd:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  59c4d1:	8d 54 24 04          	lea    edx,[esp+0x4]
  59c4d5:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  59c4d8:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  59c4dc:	e8 bf 6b 01 00       	call   0x5b30a0
  59c4e1:	d8 1d c0 fb 64 00    	fcomp  DWORD PTR ds:0x64fbc0
  59c4e7:	df e0                	fnstsw ax
  59c4e9:	f6 c4 01             	test   ah,0x1
  59c4ec:	74 0f                	je     0x59c4fd
  59c4ee:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c4f1:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c4f3:	ff 52 20             	call   DWORD PTR [edx+0x20]
  59c4f6:	8b 08                	mov    ecx,DWORD PTR [eax]
  59c4f8:	e8 83 c1 ff ff       	call   0x598680
  59c4fd:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c500:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c502:	ff 50 08             	call   DWORD PTR [eax+0x8]
  59c505:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c508:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c50a:	ff 52 18             	call   DWORD PTR [edx+0x18]
  59c50d:	84 c0                	test   al,al
  59c50f:	75 a0                	jne    0x59c4b1
  59c511:	5e                   	pop    esi
  59c512:	83 c4 24             	add    esp,0x24
  59c515:	c2 04 00             	ret    0x4
  59c518:	90                   	nop
  59c519:	90                   	nop
  59c51a:	90                   	nop
  59c51b:	90                   	nop
  59c51c:	90                   	nop
  59c51d:	90                   	nop
  59c51e:	90                   	nop
  59c51f:	90                   	nop
  59c520:	56                   	push   esi
  59c521:	8b f1                	mov    esi,ecx
  59c523:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c526:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c528:	ff 10                	call   DWORD PTR [eax]
  59c52a:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c52d:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c52f:	ff 52 18             	call   DWORD PTR [edx+0x18]
  59c532:	84 c0                	test   al,al
  59c534:	74 25                	je     0x59c55b
  59c536:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c539:	6a ff                	push   0xffffffff
  59c53b:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c53d:	ff 50 20             	call   DWORD PTR [eax+0x20]
  59c540:	8b 08                	mov    ecx,DWORD PTR [eax]
  59c542:	e8 99 d0 ff ff       	call   0x5995e0
  59c547:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c54a:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c54c:	ff 52 08             	call   DWORD PTR [edx+0x8]
  59c54f:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c552:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c554:	ff 50 18             	call   DWORD PTR [eax+0x18]
  59c557:	84 c0                	test   al,al
  59c559:	75 db                	jne    0x59c536
  59c55b:	5e                   	pop    esi
  59c55c:	c3                   	ret
  59c55d:	90                   	nop
  59c55e:	90                   	nop
  59c55f:	90                   	nop
  59c560:	56                   	push   esi
  59c561:	8b f1                	mov    esi,ecx
  59c563:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c566:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c568:	ff 10                	call   DWORD PTR [eax]
  59c56a:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c56d:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c56f:	ff 52 18             	call   DWORD PTR [edx+0x18]
  59c572:	84 c0                	test   al,al
  59c574:	74 25                	je     0x59c59b
  59c576:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c579:	6a ff                	push   0xffffffff
  59c57b:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c57d:	ff 50 20             	call   DWORD PTR [eax+0x20]
  59c580:	8b 08                	mov    ecx,DWORD PTR [eax]
  59c582:	e8 b9 cf ff ff       	call   0x599540
  59c587:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c58a:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c58c:	ff 52 08             	call   DWORD PTR [edx+0x8]
  59c58f:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c592:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c594:	ff 50 18             	call   DWORD PTR [eax+0x18]
  59c597:	84 c0                	test   al,al
  59c599:	75 db                	jne    0x59c576
  59c59b:	5e                   	pop    esi
  59c59c:	c3                   	ret
  59c59d:	90                   	nop
  59c59e:	90                   	nop
  59c59f:	90                   	nop
  59c5a0:	53                   	push   ebx
  59c5a1:	56                   	push   esi
  59c5a2:	57                   	push   edi
  59c5a3:	8b f1                	mov    esi,ecx
  59c5a5:	6a 10                	push   0x10
  59c5a7:	e8 09 db 06 00       	call   0x60a0b5
  59c5ac:	33 ff                	xor    edi,edi
  59c5ae:	83 c4 04             	add    esp,0x4
  59c5b1:	3b c7                	cmp    eax,edi
  59c5b3:	74 19                	je     0x59c5ce
  59c5b5:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  59c5b8:	c7 00 1c ef 64 00    	mov    DWORD PTR [eax],0x64ef1c
  59c5be:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  59c5c1:	89 78 0c             	mov    DWORD PTR [eax+0xc],edi
  59c5c4:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
  59c5c7:	8b d8                	mov    ebx,eax
  59c5c9:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  59c5cc:	eb 02                	jmp    0x59c5d0
  59c5ce:	33 db                	xor    ebx,ebx
  59c5d0:	8b ce                	mov    ecx,esi
  59c5d2:	e8 89 ff ff ff       	call   0x59c560
  59c5d7:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c5da:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c5dc:	ff 12                	call   DWORD PTR [edx]
  59c5de:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c5e1:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c5e3:	ff 50 18             	call   DWORD PTR [eax+0x18]
  59c5e6:	84 c0                	test   al,al
  59c5e8:	74 39                	je     0x59c623
  59c5ea:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c5ed:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c5ef:	ff 52 20             	call   DWORD PTR [edx+0x20]
  59c5f2:	8b 08                	mov    ecx,DWORD PTR [eax]
  59c5f4:	e8 c7 cf ff ff       	call   0x5995c0
  59c5f9:	83 f8 ff             	cmp    eax,0xffffffff
  59c5fc:	75 11                	jne    0x59c60f
  59c5fe:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c601:	57                   	push   edi
  59c602:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c604:	ff 50 20             	call   DWORD PTR [eax+0x20]
  59c607:	8b 08                	mov    ecx,DWORD PTR [eax]
  59c609:	e8 62 ce ff ff       	call   0x599470
  59c60e:	47                   	inc    edi
  59c60f:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c612:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c614:	ff 52 08             	call   DWORD PTR [edx+0x8]
  59c617:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
  59c61a:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c61c:	ff 50 18             	call   DWORD PTR [eax+0x18]
  59c61f:	84 c0                	test   al,al
  59c621:	75 c7                	jne    0x59c5ea
  59c623:	53                   	push   ebx
  59c624:	e8 c7 1f 06 00       	call   0x5fe5f0
  59c629:	83 c4 04             	add    esp,0x4
  59c62c:	5f                   	pop    edi
  59c62d:	5e                   	pop    esi
  59c62e:	5b                   	pop    ebx
  59c62f:	c3                   	ret
  59c630:	6a ff                	push   0xffffffff
  59c632:	68 f0 47 64 00       	push   0x6447f0
  59c637:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59c63d:	50                   	push   eax
  59c63e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59c645:	83 ec 30             	sub    esp,0x30
  59c648:	53                   	push   ebx
  59c649:	55                   	push   ebp
  59c64a:	56                   	push   esi
  59c64b:	57                   	push   edi
  59c64c:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  59c650:	e8 cb fe ff ff       	call   0x59c520
  59c655:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  59c659:	33 f6                	xor    esi,esi
  59c65b:	56                   	push   esi
  59c65c:	e8 7f cf ff ff       	call   0x5995e0
  59c661:	8a 44 24 50          	mov    al,BYTE PTR [esp+0x50]
  59c665:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59c669:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  59c66d:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  59c671:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  59c675:	56                   	push   esi
  59c676:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  59c67a:	89 74 24 4c          	mov    DWORD PTR [esp+0x4c],esi
  59c67e:	e8 fd 87 f7 ff       	call   0x514e80
  59c683:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  59c687:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  59c68b:	bb 01 00 00 00       	mov    ebx,0x1
  59c690:	51                   	push   ecx
  59c691:	53                   	push   ebx
  59c692:	52                   	push   edx
  59c693:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59c697:	89 5c 24 54          	mov    DWORD PTR [esp+0x54],ebx
  59c69b:	e8 50 09 fa ff       	call   0x53cff0
  59c6a0:	c6 44 24 13 00       	mov    BYTE PTR [esp+0x13],0x0
  59c6a5:	33 ed                	xor    ebp,ebp
  59c6a7:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  59c6ab:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  59c6af:	3b ce                	cmp    ecx,esi
  59c6b1:	75 04                	jne    0x59c6b7
  59c6b3:	33 c0                	xor    eax,eax
  59c6b5:	eb 07                	jmp    0x59c6be
  59c6b7:	8b c2                	mov    eax,edx
  59c6b9:	2b c1                	sub    eax,ecx
  59c6bb:	c1 f8 02             	sar    eax,0x2
  59c6be:	3b e8                	cmp    ebp,eax
  59c6c0:	0f 8d 26 01 00 00    	jge    0x59c7ec
  59c6c6:	3b ee                	cmp    ebp,esi
  59c6c8:	7c 11                	jl     0x59c6db
  59c6ca:	3b ce                	cmp    ecx,esi
  59c6cc:	75 04                	jne    0x59c6d2
  59c6ce:	33 d2                	xor    edx,edx
  59c6d0:	eb 05                	jmp    0x59c6d7
  59c6d2:	2b d1                	sub    edx,ecx
  59c6d4:	c1 fa 02             	sar    edx,0x2
  59c6d7:	3b ea                	cmp    ebp,edx
  59c6d9:	7c 65                	jl     0x59c740
  59c6db:	8a 44 24 50          	mov    al,BYTE PTR [esp+0x50]
  59c6df:	56                   	push   esi
  59c6e0:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  59c6e4:	88 44 24 34          	mov    BYTE PTR [esp+0x34],al
  59c6e8:	e8 b3 79 e6 ff       	call   0x4040a0
  59c6ed:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59c6f2:	83 c9 ff             	or     ecx,0xffffffff
  59c6f5:	33 c0                	xor    eax,eax
  59c6f7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59c6f9:	f7 d1                	not    ecx
  59c6fb:	49                   	dec    ecx
  59c6fc:	51                   	push   ecx
  59c6fd:	68 70 3f 6b 00       	push   0x6b3f70
  59c702:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  59c706:	e8 e5 79 e6 ff       	call   0x4040f0
  59c70b:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59c70f:	c6 44 24 48 02       	mov    BYTE PTR [esp+0x48],0x2
  59c714:	51                   	push   ecx
  59c715:	68 8b 00 00 00       	push   0x8b
  59c71a:	68 58 f4 68 00       	push   0x68f458
  59c71f:	68 70 f4 68 00       	push   0x68f470
  59c724:	e8 c7 40 00 00       	call   0x5a07f0
  59c729:	ff d0                	call   eax
  59c72b:	83 c4 10             	add    esp,0x10
  59c72e:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59c732:	88 5c 24 48          	mov    BYTE PTR [esp+0x48],bl
  59c736:	53                   	push   ebx
  59c737:	e8 64 79 e6 ff       	call   0x4040a0
  59c73c:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  59c740:	8b 3c a9             	mov    edi,DWORD PTR [ecx+ebp*4]
  59c743:	8d 54 24 18          	lea    edx,[esp+0x18]
  59c747:	56                   	push   esi
  59c748:	52                   	push   edx
  59c749:	8b cf                	mov    ecx,edi
  59c74b:	e8 c0 bb ff ff       	call   0x598310
  59c750:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59c754:	c6 44 24 48 03       	mov    BYTE PTR [esp+0x48],0x3
  59c759:	e8 92 ea ff ff       	call   0x59b1f0
  59c75e:	84 c0                	test   al,al
  59c760:	74 6b                	je     0x59c7cd
  59c762:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  59c766:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  59c76a:	50                   	push   eax
  59c76b:	e8 20 18 00 00       	call   0x59df90
  59c770:	8b c8                	mov    ecx,eax
  59c772:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  59c776:	e8 55 ce ff ff       	call   0x5995d0
  59c77b:	83 f8 ff             	cmp    eax,0xffffffff
  59c77e:	75 4d                	jne    0x59c7cd
  59c780:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  59c784:	e8 e7 bd ff ff       	call   0x598570
  59c789:	85 c0                	test   eax,eax
  59c78b:	75 40                	jne    0x59c7cd
  59c78d:	8b cf                	mov    ecx,edi
  59c78f:	e8 3c ce ff ff       	call   0x5995d0
  59c794:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  59c798:	40                   	inc    eax
  59c799:	50                   	push   eax
  59c79a:	e8 41 ce ff ff       	call   0x5995e0
  59c79f:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  59c7a3:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  59c7a7:	3b c1                	cmp    eax,ecx
  59c7a9:	75 06                	jne    0x59c7b1
  59c7ab:	88 5c 24 13          	mov    BYTE PTR [esp+0x13],bl
  59c7af:	eb 1c                	jmp    0x59c7cd
  59c7b1:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  59c7b5:	84 c0                	test   al,al
  59c7b7:	75 14                	jne    0x59c7cd
  59c7b9:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  59c7bd:	8d 54 24 14          	lea    edx,[esp+0x14]
  59c7c1:	52                   	push   edx
  59c7c2:	53                   	push   ebx
  59c7c3:	50                   	push   eax
  59c7c4:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59c7c8:	e8 23 08 fa ff       	call   0x53cff0
  59c7cd:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59c7d1:	88 5c 24 48          	mov    BYTE PTR [esp+0x48],bl
  59c7d5:	e8 06 69 fc ff       	call   0x5630e0
  59c7da:	46                   	inc    esi
  59c7db:	83 fe 08             	cmp    esi,0x8
  59c7de:	0f 8c 5f ff ff ff    	jl     0x59c743
  59c7e4:	45                   	inc    ebp
  59c7e5:	33 f6                	xor    esi,esi
  59c7e7:	e9 bb fe ff ff       	jmp    0x59c6a7
  59c7ec:	51                   	push   ecx
  59c7ed:	e8 fe 1d 06 00       	call   0x5fe5f0
  59c7f2:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  59c7f6:	8a 44 24 17          	mov    al,BYTE PTR [esp+0x17]
  59c7fa:	83 c4 04             	add    esp,0x4
  59c7fd:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59c804:	5f                   	pop    edi
  59c805:	5e                   	pop    esi
  59c806:	5d                   	pop    ebp
  59c807:	5b                   	pop    ebx
  59c808:	83 c4 3c             	add    esp,0x3c
  59c80b:	c2 08 00             	ret    0x8
  59c80e:	90                   	nop
  59c80f:	90                   	nop
  59c810:	6a ff                	push   0xffffffff
  59c812:	68 27 48 64 00       	push   0x644827
  59c817:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59c81d:	50                   	push   eax
  59c81e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59c825:	83 ec 10             	sub    esp,0x10
  59c828:	56                   	push   esi
  59c829:	57                   	push   edi
  59c82a:	8b f1                	mov    esi,ecx
  59c82c:	33 ff                	xor    edi,edi
  59c82e:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  59c832:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  59c836:	89 7c 24 0c          	mov    DWORD PTR [esp+0xc],edi
  59c83a:	e8 81 e9 ff ff       	call   0x59b1c0
  59c83f:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  59c843:	c7 44 24 20 01 00 00 	mov    DWORD PTR [esp+0x20],0x1
  59c84a:	00 
  59c84b:	e8 b0 e9 ff ff       	call   0x59b200
  59c850:	6a 10                	push   0x10
  59c852:	e8 5e d8 06 00       	call   0x60a0b5
  59c857:	83 c4 04             	add    esp,0x4
  59c85a:	3b c7                	cmp    eax,edi
  59c85c:	74 19                	je     0x59c877
  59c85e:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  59c861:	c7 00 1c ef 64 00    	mov    DWORD PTR [eax],0x64ef1c
  59c867:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  59c86a:	89 78 0c             	mov    DWORD PTR [eax+0xc],edi
  59c86d:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
  59c870:	8b f0                	mov    esi,eax
  59c872:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  59c875:	eb 02                	jmp    0x59c879
  59c877:	33 f6                	xor    esi,esi
  59c879:	8b 06                	mov    eax,DWORD PTR [esi]
  59c87b:	8b ce                	mov    ecx,esi
  59c87d:	ff 10                	call   DWORD PTR [eax]
  59c87f:	8b 16                	mov    edx,DWORD PTR [esi]
  59c881:	8b ce                	mov    ecx,esi
  59c883:	ff 52 18             	call   DWORD PTR [edx+0x18]
  59c886:	84 c0                	test   al,al
  59c888:	0f 84 98 00 00 00    	je     0x59c926
  59c88e:	55                   	push   ebp
  59c88f:	8b 6c 24 30          	mov    ebp,DWORD PTR [esp+0x30]
  59c893:	8b 06                	mov    eax,DWORD PTR [esi]
  59c895:	8b ce                	mov    ecx,esi
  59c897:	ff 50 20             	call   DWORD PTR [eax+0x20]
  59c89a:	8b 38                	mov    edi,DWORD PTR [eax]
  59c89c:	55                   	push   ebp
  59c89d:	8b cf                	mov    ecx,edi
  59c89f:	e8 1c b7 ff ff       	call   0x597fc0
  59c8a4:	d9 54 24 30          	fst    DWORD PTR [esp+0x30]
  59c8a8:	d8 5c 24 34          	fcomp  DWORD PTR [esp+0x34]
  59c8ac:	df e0                	fnstsw ax
  59c8ae:	f6 c4 01             	test   ah,0x1
  59c8b1:	74 5c                	je     0x59c90f
  59c8b3:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
  59c8b7:	d8 5c 24 38          	fcomp  DWORD PTR [esp+0x38]
  59c8bb:	df e0                	fnstsw ax
  59c8bd:	f6 c4 01             	test   ah,0x1
  59c8c0:	75 4d                	jne    0x59c90f
  59c8c2:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
  59c8c6:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
  59c8ca:	df e0                	fnstsw ax
  59c8cc:	f6 c4 01             	test   ah,0x1
  59c8cf:	75 0d                	jne    0x59c8de
  59c8d1:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  59c8d5:	e8 16 e9 ff ff       	call   0x59b1f0
  59c8da:	84 c0                	test   al,al
  59c8dc:	75 31                	jne    0x59c90f
  59c8de:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  59c8e2:	8d 54 24 14          	lea    edx,[esp+0x14]
  59c8e6:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  59c8ea:	52                   	push   edx
  59c8eb:	8b cf                	mov    ecx,edi
  59c8ed:	e8 5e cb ff ff       	call   0x599450
  59c8f2:	50                   	push   eax
  59c8f3:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  59c8f7:	c6 44 24 28 02       	mov    BYTE PTR [esp+0x28],0x2
  59c8fc:	e8 cf e8 ff ff       	call   0x59b1d0
  59c901:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59c905:	c6 44 24 24 01       	mov    BYTE PTR [esp+0x24],0x1
  59c90a:	e8 d1 67 fc ff       	call   0x5630e0
  59c90f:	8b 06                	mov    eax,DWORD PTR [esi]
  59c911:	8b ce                	mov    ecx,esi
  59c913:	ff 50 08             	call   DWORD PTR [eax+0x8]
  59c916:	8b 16                	mov    edx,DWORD PTR [esi]
  59c918:	8b ce                	mov    ecx,esi
  59c91a:	ff 52 18             	call   DWORD PTR [edx+0x18]
  59c91d:	84 c0                	test   al,al
  59c91f:	0f 85 6e ff ff ff    	jne    0x59c893
  59c925:	5d                   	pop    ebp
  59c926:	56                   	push   esi
  59c927:	e8 c4 1c 06 00       	call   0x5fe5f0
  59c92c:	8b 74 24 2c          	mov    esi,DWORD PTR [esp+0x2c]
  59c930:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  59c934:	83 c4 04             	add    esp,0x4
  59c937:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
  59c93e:	00 
  59c93f:	89 06                	mov    DWORD PTR [esi],eax
  59c941:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  59c945:	c6 44 24 20 00       	mov    BYTE PTR [esp+0x20],0x0
  59c94a:	e8 91 67 fc ff       	call   0x5630e0
  59c94f:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  59c953:	8b c6                	mov    eax,esi
  59c955:	5f                   	pop    edi
  59c956:	5e                   	pop    esi
  59c957:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59c95e:	83 c4 1c             	add    esp,0x1c
  59c961:	c2 10 00             	ret    0x10
  59c964:	90                   	nop
  59c965:	90                   	nop
  59c966:	90                   	nop
  59c967:	90                   	nop
  59c968:	90                   	nop
  59c969:	90                   	nop
  59c96a:	90                   	nop
  59c96b:	90                   	nop
  59c96c:	90                   	nop
  59c96d:	90                   	nop
  59c96e:	90                   	nop
  59c96f:	90                   	nop
  59c970:	51                   	push   ecx
  59c971:	53                   	push   ebx
  59c972:	55                   	push   ebp
  59c973:	8b e9                	mov    ebp,ecx
  59c975:	56                   	push   esi
  59c976:	57                   	push   edi
  59c977:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c97a:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c97c:	ff 10                	call   DWORD PTR [eax]
  59c97e:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c981:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c983:	ff 52 18             	call   DWORD PTR [edx+0x18]
  59c986:	84 c0                	test   al,al
  59c988:	74 68                	je     0x59c9f2
  59c98a:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c98d:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c98f:	ff 50 20             	call   DWORD PTR [eax+0x20]
  59c992:	8b 00                	mov    eax,DWORD PTR [eax]
  59c994:	8b c8                	mov    ecx,eax
  59c996:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  59c99a:	e8 01 b6 ff ff       	call   0x597fa0
  59c99f:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  59c9a3:	bf b4 a3 64 00       	mov    edi,0x64a3b4
  59c9a8:	8b 59 08             	mov    ebx,DWORD PTR [ecx+0x8]
  59c9ab:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
  59c9ae:	85 c9                	test   ecx,ecx
  59c9b0:	74 02                	je     0x59c9b4
  59c9b2:	8b f9                	mov    edi,ecx
  59c9b4:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  59c9b7:	3b d3                	cmp    edx,ebx
  59c9b9:	8b ca                	mov    ecx,edx
  59c9bb:	72 02                	jb     0x59c9bf
  59c9bd:	8b cb                	mov    ecx,ebx
  59c9bf:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
  59c9c2:	33 c0                	xor    eax,eax
  59c9c4:	f3 a6                	repz cmps BYTE PTR ds:[esi],BYTE PTR es:[edi]
  59c9c6:	74 05                	je     0x59c9cd
  59c9c8:	1b c0                	sbb    eax,eax
  59c9ca:	83 d8 ff             	sbb    eax,0xffffffff
  59c9cd:	85 c0                	test   eax,eax
  59c9cf:	75 0d                	jne    0x59c9de
  59c9d1:	3b d3                	cmp    edx,ebx
  59c9d3:	72 09                	jb     0x59c9de
  59c9d5:	3b d3                	cmp    edx,ebx
  59c9d7:	0f 95 c0             	setne  al
  59c9da:	85 c0                	test   eax,eax
  59c9dc:	74 1e                	je     0x59c9fc
  59c9de:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c9e1:	8b 11                	mov    edx,DWORD PTR [ecx]
  59c9e3:	ff 52 08             	call   DWORD PTR [edx+0x8]
  59c9e6:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  59c9e9:	8b 01                	mov    eax,DWORD PTR [ecx]
  59c9eb:	ff 50 18             	call   DWORD PTR [eax+0x18]
  59c9ee:	84 c0                	test   al,al
  59c9f0:	75 98                	jne    0x59c98a
  59c9f2:	5f                   	pop    edi
  59c9f3:	5e                   	pop    esi
  59c9f4:	5d                   	pop    ebp
  59c9f5:	33 c0                	xor    eax,eax
  59c9f7:	5b                   	pop    ebx
  59c9f8:	59                   	pop    ecx
  59c9f9:	c2 04 00             	ret    0x4
  59c9fc:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  59ca00:	5f                   	pop    edi
  59ca01:	5e                   	pop    esi
  59ca02:	5d                   	pop    ebp
  59ca03:	5b                   	pop    ebx
  59ca04:	59                   	pop    ecx
  59ca05:	c2 04 00             	ret    0x4
  59ca08:	90                   	nop
  59ca09:	90                   	nop
  59ca0a:	90                   	nop
  59ca0b:	90                   	nop
  59ca0c:	90                   	nop
  59ca0d:	90                   	nop
  59ca0e:	90                   	nop
  59ca0f:	90                   	nop
  59ca10:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59ca16:	6a ff                	push   0xffffffff
  59ca18:	68 08 49 64 00       	push   0x644908
  59ca1d:	50                   	push   eax
  59ca1e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59ca25:	83 ec 78             	sub    esp,0x78
  59ca28:	53                   	push   ebx
  59ca29:	55                   	push   ebp
  59ca2a:	8b d9                	mov    ebx,ecx
  59ca2c:	56                   	push   esi
  59ca2d:	8b 8c 24 9c 00 00 00 	mov    ecx,DWORD PTR [esp+0x9c]
  59ca34:	57                   	push   edi
  59ca35:	e8 c6 e7 ff ff       	call   0x59b200
  59ca3a:	8b b4 24 98 00 00 00 	mov    esi,DWORD PTR [esp+0x98]
  59ca41:	85 f6                	test   esi,esi
  59ca43:	75 6b                	jne    0x59cab0
  59ca45:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  59ca49:	56                   	push   esi
  59ca4a:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59ca4e:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  59ca52:	e8 49 76 e6 ff       	call   0x4040a0
  59ca57:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59ca5c:	83 c9 ff             	or     ecx,0xffffffff
  59ca5f:	33 c0                	xor    eax,eax
  59ca61:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59ca63:	f7 d1                	not    ecx
  59ca65:	49                   	dec    ecx
  59ca66:	51                   	push   ecx
  59ca67:	68 70 3f 6b 00       	push   0x6b3f70
  59ca6c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59ca70:	e8 7b 76 e6 ff       	call   0x4040f0
  59ca75:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59ca79:	89 b4 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],esi
  59ca80:	51                   	push   ecx
  59ca81:	68 05 01 00 00       	push   0x105
  59ca86:	68 cc 72 6a 00       	push   0x6a72cc
  59ca8b:	68 a4 73 6a 00       	push   0x6a73a4
  59ca90:	e8 5b 3d 00 00       	call   0x5a07f0
  59ca95:	ff d0                	call   eax
  59ca97:	83 c4 10             	add    esp,0x10
  59ca9a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59ca9e:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0xffffffff
  59caa5:	ff ff ff ff 
  59caa9:	6a 01                	push   0x1
  59caab:	e8 f0 75 e6 ff       	call   0x4040a0
  59cab0:	8b ac 24 9c 00 00 00 	mov    ebp,DWORD PTR [esp+0x9c]
  59cab7:	85 ed                	test   ebp,ebp
  59cab9:	75 6f                	jne    0x59cb2a
  59cabb:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  59cabf:	55                   	push   ebp
  59cac0:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59cac4:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  59cac8:	e8 d3 75 e6 ff       	call   0x4040a0
  59cacd:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59cad2:	83 c9 ff             	or     ecx,0xffffffff
  59cad5:	33 c0                	xor    eax,eax
  59cad7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59cad9:	f7 d1                	not    ecx
  59cadb:	49                   	dec    ecx
  59cadc:	51                   	push   ecx
  59cadd:	68 70 3f 6b 00       	push   0x6b3f70
  59cae2:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59cae6:	e8 05 76 e6 ff       	call   0x4040f0
  59caeb:	8d 44 24 18          	lea    eax,[esp+0x18]
  59caef:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0x1
  59caf6:	01 00 00 00 
  59cafa:	50                   	push   eax
  59cafb:	68 06 01 00 00       	push   0x106
  59cb00:	68 cc 72 6a 00       	push   0x6a72cc
  59cb05:	68 90 73 6a 00       	push   0x6a7390
  59cb0a:	e8 e1 3c 00 00       	call   0x5a07f0
  59cb0f:	ff d0                	call   eax
  59cb11:	83 c4 10             	add    esp,0x10
  59cb14:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59cb18:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0xffffffff
  59cb1f:	ff ff ff ff 
  59cb23:	6a 01                	push   0x1
  59cb25:	e8 76 75 e6 ff       	call   0x4040a0
  59cb2a:	3b f5                	cmp    esi,ebp
  59cb2c:	0f 85 70 01 00 00    	jne    0x59cca2
  59cb32:	e8 b9 ca f7 ff       	call   0x5195f0
  59cb37:	8b c8                	mov    ecx,eax
  59cb39:	e8 a2 6c e9 ff       	call   0x4337e0
  59cb3e:	85 c0                	test   eax,eax
  59cb40:	0f 84 55 01 00 00    	je     0x59cc9b
  59cb46:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  59cb4a:	51                   	push   ecx
  59cb4b:	8b cd                	mov    ecx,ebp
  59cb4d:	e8 5e d6 ff ff       	call   0x59a1b0
  59cb52:	8b e8                	mov    ebp,eax
  59cb54:	8d 54 24 68          	lea    edx,[esp+0x68]
  59cb58:	8b ce                	mov    ecx,esi
  59cb5a:	52                   	push   edx
  59cb5b:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x2
  59cb62:	02 00 00 00 
  59cb66:	e8 45 d6 ff ff       	call   0x59a1b0
  59cb6b:	8b f0                	mov    esi,eax
  59cb6d:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  59cb71:	6a 00                	push   0x0
  59cb73:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59cb77:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x3
  59cb7e:	03 
  59cb7f:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  59cb83:	e8 18 75 e6 ff       	call   0x4040a0
  59cb88:	bf 70 73 6a 00       	mov    edi,0x6a7370
  59cb8d:	83 c9 ff             	or     ecx,0xffffffff
  59cb90:	33 c0                	xor    eax,eax
  59cb92:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59cb94:	f7 d1                	not    ecx
  59cb96:	49                   	dec    ecx
  59cb97:	51                   	push   ecx
  59cb98:	68 70 73 6a 00       	push   0x6a7370
  59cb9d:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59cba1:	e8 4a 75 e6 ff       	call   0x4040f0
  59cba6:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59cbaa:	56                   	push   esi
  59cbab:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  59cbaf:	51                   	push   ecx
  59cbb0:	52                   	push   edx
  59cbb1:	c6 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],0x4
  59cbb8:	04 
  59cbb9:	e8 b2 17 eb ff       	call   0x44e370
  59cbbe:	68 68 73 6a 00       	push   0x6a7368
  59cbc3:	50                   	push   eax
  59cbc4:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  59cbc8:	c6 84 24 a4 00 00 00 	mov    BYTE PTR [esp+0xa4],0x5
  59cbcf:	05 
  59cbd0:	50                   	push   eax
  59cbd1:	e8 fa fe e6 ff       	call   0x40cad0
  59cbd6:	55                   	push   ebp
  59cbd7:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  59cbdb:	50                   	push   eax
  59cbdc:	51                   	push   ecx
  59cbdd:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x6
  59cbe4:	06 
  59cbe5:	e8 86 17 eb ff       	call   0x44e370
  59cbea:	68 54 73 6a 00       	push   0x6a7354
  59cbef:	8d 54 24 50          	lea    edx,[esp+0x50]
  59cbf3:	b3 07                	mov    bl,0x7
  59cbf5:	50                   	push   eax
  59cbf6:	52                   	push   edx
  59cbf7:	88 9c 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],bl
  59cbfe:	e8 cd fe e6 ff       	call   0x40cad0
  59cc03:	50                   	push   eax
  59cc04:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x8
  59cc0b:	08 
  59cc0c:	e8 ef 32 01 00       	call   0x5aff00
  59cc11:	83 c4 34             	add    esp,0x34
  59cc14:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59cc18:	88 9c 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],bl
  59cc1f:	6a 01                	push   0x1
  59cc21:	e8 7a 74 e6 ff       	call   0x4040a0
  59cc26:	6a 01                	push   0x1
  59cc28:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  59cc2c:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x6
  59cc33:	06 
  59cc34:	e8 67 74 e6 ff       	call   0x4040a0
  59cc39:	6a 01                	push   0x1
  59cc3b:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  59cc3f:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x5
  59cc46:	05 
  59cc47:	e8 54 74 e6 ff       	call   0x4040a0
  59cc4c:	6a 01                	push   0x1
  59cc4e:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  59cc52:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x4
  59cc59:	04 
  59cc5a:	e8 41 74 e6 ff       	call   0x4040a0
  59cc5f:	c6 84 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],0x3
  59cc66:	03 
  59cc67:	6a 01                	push   0x1
  59cc69:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59cc6d:	e8 2e 74 e6 ff       	call   0x4040a0
  59cc72:	6a 01                	push   0x1
  59cc74:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  59cc78:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x2
  59cc7f:	02 
  59cc80:	e8 1b 74 e6 ff       	call   0x4040a0
  59cc85:	6a 01                	push   0x1
  59cc87:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  59cc8b:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0xffffffff
  59cc92:	ff ff ff ff 
  59cc96:	e8 05 74 e6 ff       	call   0x4040a0
  59cc9b:	32 c0                	xor    al,al
  59cc9d:	e9 57 04 00 00       	jmp    0x59d0f9
  59cca2:	8b ce                	mov    ecx,esi
  59cca4:	e8 17 c9 ff ff       	call   0x5995c0
  59cca9:	8b cd                	mov    ecx,ebp
  59ccab:	8b f8                	mov    edi,eax
  59ccad:	e8 0e c9 ff ff       	call   0x5995c0
  59ccb2:	3b f8                	cmp    edi,eax
  59ccb4:	0f 84 76 01 00 00    	je     0x59ce30
  59ccba:	e8 31 c9 f7 ff       	call   0x5195f0
  59ccbf:	8b c8                	mov    ecx,eax
  59ccc1:	e8 1a 6b e9 ff       	call   0x4337e0
  59ccc6:	85 c0                	test   eax,eax
  59ccc8:	0f 84 5b 01 00 00    	je     0x59ce29
  59ccce:	8d 44 24 28          	lea    eax,[esp+0x28]
  59ccd2:	8b cd                	mov    ecx,ebp
  59ccd4:	50                   	push   eax
  59ccd5:	e8 d6 d4 ff ff       	call   0x59a1b0
  59ccda:	8b e8                	mov    ebp,eax
  59ccdc:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  59cce0:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0x9
  59cce7:	09 00 00 00 
  59cceb:	51                   	push   ecx
  59ccec:	8b ce                	mov    ecx,esi
  59ccee:	e8 bd d4 ff ff       	call   0x59a1b0
  59ccf3:	8b f0                	mov    esi,eax
  59ccf5:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  59ccf9:	6a 00                	push   0x0
  59ccfb:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59ccff:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0xa
  59cd06:	0a 
  59cd07:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  59cd0b:	e8 90 73 e6 ff       	call   0x4040a0
  59cd10:	bf 70 73 6a 00       	mov    edi,0x6a7370
  59cd15:	83 c9 ff             	or     ecx,0xffffffff
  59cd18:	33 c0                	xor    eax,eax
  59cd1a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59cd1c:	f7 d1                	not    ecx
  59cd1e:	49                   	dec    ecx
  59cd1f:	51                   	push   ecx
  59cd20:	68 70 73 6a 00       	push   0x6a7370
  59cd25:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59cd29:	e8 c2 73 e6 ff       	call   0x4040f0
  59cd2e:	8d 44 24 18          	lea    eax,[esp+0x18]
  59cd32:	56                   	push   esi
  59cd33:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  59cd37:	50                   	push   eax
  59cd38:	51                   	push   ecx
  59cd39:	c6 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],0xb
  59cd40:	0b 
  59cd41:	e8 2a 16 eb ff       	call   0x44e370
  59cd46:	68 68 73 6a 00       	push   0x6a7368
  59cd4b:	8d 54 24 68          	lea    edx,[esp+0x68]
  59cd4f:	50                   	push   eax
  59cd50:	52                   	push   edx
  59cd51:	c6 84 24 a8 00 00 00 	mov    BYTE PTR [esp+0xa8],0xc
  59cd58:	0c 
  59cd59:	e8 72 fd e6 ff       	call   0x40cad0
  59cd5e:	55                   	push   ebp
  59cd5f:	50                   	push   eax
  59cd60:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  59cd67:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0xd
  59cd6e:	0d 
  59cd6f:	50                   	push   eax
  59cd70:	e8 fb 15 eb ff       	call   0x44e370
  59cd75:	68 3c 73 6a 00       	push   0x6a733c
  59cd7a:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  59cd81:	b3 0e                	mov    bl,0xe
  59cd83:	50                   	push   eax
  59cd84:	51                   	push   ecx
  59cd85:	88 9c 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],bl
  59cd8c:	e8 3f fd e6 ff       	call   0x40cad0
  59cd91:	50                   	push   eax
  59cd92:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0xf
  59cd99:	0f 
  59cd9a:	e8 61 31 01 00       	call   0x5aff00
  59cd9f:	83 c4 34             	add    esp,0x34
  59cda2:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  59cda6:	88 9c 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],bl
  59cdad:	6a 01                	push   0x1
  59cdaf:	e8 ec 72 e6 ff       	call   0x4040a0
  59cdb4:	6a 01                	push   0x1
  59cdb6:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  59cdba:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0xd
  59cdc1:	0d 
  59cdc2:	e8 d9 72 e6 ff       	call   0x4040a0
  59cdc7:	6a 01                	push   0x1
  59cdc9:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  59cdcd:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0xc
  59cdd4:	0c 
  59cdd5:	e8 c6 72 e6 ff       	call   0x4040a0
  59cdda:	6a 01                	push   0x1
  59cddc:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  59cde0:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0xb
  59cde7:	0b 
  59cde8:	e8 b3 72 e6 ff       	call   0x4040a0
  59cded:	c6 84 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],0xa
  59cdf4:	0a 
  59cdf5:	6a 01                	push   0x1
  59cdf7:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59cdfb:	e8 a0 72 e6 ff       	call   0x4040a0
  59ce00:	6a 01                	push   0x1
  59ce02:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  59ce06:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x9
  59ce0d:	09 
  59ce0e:	e8 8d 72 e6 ff       	call   0x4040a0
  59ce13:	6a 01                	push   0x1
  59ce15:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59ce19:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0xffffffff
  59ce20:	ff ff ff ff 
  59ce24:	e8 77 72 e6 ff       	call   0x4040a0
  59ce29:	32 c0                	xor    al,al
  59ce2b:	e9 c9 02 00 00       	jmp    0x59d0f9
  59ce30:	6a ff                	push   0xffffffff
  59ce32:	8b ce                	mov    ecx,esi
  59ce34:	e8 47 b7 ff ff       	call   0x598580
  59ce39:	56                   	push   esi
  59ce3a:	55                   	push   ebp
  59ce3b:	8b cb                	mov    ecx,ebx
  59ce3d:	e8 ee f7 ff ff       	call   0x59c630
  59ce42:	6a 01                	push   0x1
  59ce44:	8b ce                	mov    ecx,esi
  59ce46:	8a d8                	mov    bl,al
  59ce48:	e8 33 b7 ff ff       	call   0x598580
  59ce4d:	84 db                	test   bl,bl
  59ce4f:	0f 85 a9 01 00 00    	jne    0x59cffe
  59ce55:	e8 96 c7 f7 ff       	call   0x5195f0
  59ce5a:	8b c8                	mov    ecx,eax
  59ce5c:	e8 7f 69 e9 ff       	call   0x4337e0
  59ce61:	85 c0                	test   eax,eax
  59ce63:	0f 84 8e 01 00 00    	je     0x59cff7
  59ce69:	8d 54 24 38          	lea    edx,[esp+0x38]
  59ce6d:	8b cd                	mov    ecx,ebp
  59ce6f:	52                   	push   edx
  59ce70:	e8 3b d3 ff ff       	call   0x59a1b0
  59ce75:	8b e8                	mov    ebp,eax
  59ce77:	8d 44 24 28          	lea    eax,[esp+0x28]
  59ce7b:	8b ce                	mov    ecx,esi
  59ce7d:	50                   	push   eax
  59ce7e:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x10
  59ce85:	10 00 00 00 
  59ce89:	e8 22 d3 ff ff       	call   0x59a1b0
  59ce8e:	8b f0                	mov    esi,eax
  59ce90:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  59ce94:	6a 00                	push   0x0
  59ce96:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  59ce9a:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59ce9e:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x11
  59cea5:	11 
  59cea6:	e8 f5 71 e6 ff       	call   0x4040a0
  59ceab:	bf 70 73 6a 00       	mov    edi,0x6a7370
  59ceb0:	83 c9 ff             	or     ecx,0xffffffff
  59ceb3:	33 c0                	xor    eax,eax
  59ceb5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59ceb7:	f7 d1                	not    ecx
  59ceb9:	49                   	dec    ecx
  59ceba:	51                   	push   ecx
  59cebb:	68 70 73 6a 00       	push   0x6a7370
  59cec0:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59cec4:	e8 27 72 e6 ff       	call   0x4040f0
  59cec9:	8d 54 24 18          	lea    edx,[esp+0x18]
  59cecd:	56                   	push   esi
  59cece:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  59ced2:	52                   	push   edx
  59ced3:	50                   	push   eax
  59ced4:	c6 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],0x12
  59cedb:	12 
  59cedc:	e8 8f 14 eb ff       	call   0x44e370
  59cee1:	68 68 73 6a 00       	push   0x6a7368
  59cee6:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  59ceea:	50                   	push   eax
  59ceeb:	51                   	push   ecx
  59ceec:	c6 84 24 a8 00 00 00 	mov    BYTE PTR [esp+0xa8],0x13
  59cef3:	13 
  59cef4:	e8 d7 fb e6 ff       	call   0x40cad0
  59cef9:	55                   	push   ebp
  59cefa:	8d 94 24 84 00 00 00 	lea    edx,[esp+0x84]
  59cf01:	50                   	push   eax
  59cf02:	52                   	push   edx
  59cf03:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x14
  59cf0a:	14 
  59cf0b:	e8 60 14 eb ff       	call   0x44e370
  59cf10:	68 28 73 6a 00       	push   0x6a7328
  59cf15:	50                   	push   eax
  59cf16:	8d 84 24 a4 00 00 00 	lea    eax,[esp+0xa4]
  59cf1d:	b3 15                	mov    bl,0x15
  59cf1f:	50                   	push   eax
  59cf20:	88 9c 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],bl
  59cf27:	e8 a4 fb e6 ff       	call   0x40cad0
  59cf2c:	50                   	push   eax
  59cf2d:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x16
  59cf34:	16 
  59cf35:	e8 c6 2f 01 00       	call   0x5aff00
  59cf3a:	83 c4 34             	add    esp,0x34
  59cf3d:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  59cf41:	88 9c 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],bl
  59cf48:	6a 01                	push   0x1
  59cf4a:	e8 51 71 e6 ff       	call   0x4040a0
  59cf4f:	6a 01                	push   0x1
  59cf51:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  59cf55:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x14
  59cf5c:	14 
  59cf5d:	e8 3e 71 e6 ff       	call   0x4040a0
  59cf62:	6a 01                	push   0x1
  59cf64:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  59cf68:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x13
  59cf6f:	13 
  59cf70:	e8 2b 71 e6 ff       	call   0x4040a0
  59cf75:	6a 01                	push   0x1
  59cf77:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  59cf7b:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x12
  59cf82:	12 
  59cf83:	e8 18 71 e6 ff       	call   0x4040a0
  59cf88:	c6 84 24 90 00 00 00 	mov    BYTE PTR [esp+0x90],0x11
  59cf8f:	11 
  59cf90:	6a 01                	push   0x1
  59cf92:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59cf96:	e8 05 71 e6 ff       	call   0x4040a0
  59cf9b:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  59cf9f:	33 f6                	xor    esi,esi
  59cfa1:	3b c6                	cmp    eax,esi
  59cfa3:	74 1c                	je     0x59cfc1
  59cfa5:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
  59cfa8:	48                   	dec    eax
  59cfa9:	84 c9                	test   cl,cl
  59cfab:	74 0b                	je     0x59cfb8
  59cfad:	80 f9 ff             	cmp    cl,0xff
  59cfb0:	74 06                	je     0x59cfb8
  59cfb2:	fe c9                	dec    cl
  59cfb4:	88 08                	mov    BYTE PTR [eax],cl
  59cfb6:	eb 09                	jmp    0x59cfc1
  59cfb8:	50                   	push   eax
  59cfb9:	e8 32 16 06 00       	call   0x5fe5f0
  59cfbe:	83 c4 04             	add    esp,0x4
  59cfc1:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  59cfc5:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  59cfc9:	3b c6                	cmp    eax,esi
  59cfcb:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  59cfcf:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  59cfd3:	74 22                	je     0x59cff7
  59cfd5:	8d 48 ff             	lea    ecx,[eax-0x1]
  59cfd8:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59cfdb:	84 c0                	test   al,al
  59cfdd:	74 0f                	je     0x59cfee
  59cfdf:	3c ff                	cmp    al,0xff
  59cfe1:	74 0b                	je     0x59cfee
  59cfe3:	fe c8                	dec    al
  59cfe5:	88 01                	mov    BYTE PTR [ecx],al
  59cfe7:	32 c0                	xor    al,al
  59cfe9:	e9 0b 01 00 00       	jmp    0x59d0f9
  59cfee:	51                   	push   ecx
  59cfef:	e8 fc 15 06 00       	call   0x5fe5f0
  59cff4:	83 c4 04             	add    esp,0x4
  59cff7:	32 c0                	xor    al,al
  59cff9:	e9 fb 00 00 00       	jmp    0x59d0f9
  59cffe:	8b ce                	mov    ecx,esi
  59d000:	e8 bb c4 ff ff       	call   0x5994c0
  59d005:	8b d8                	mov    ebx,eax
  59d007:	85 db                	test   ebx,ebx
  59d009:	0f 85 b0 00 00 00    	jne    0x59d0bf
  59d00f:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  59d013:	50                   	push   eax
  59d014:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  59d018:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59d01c:	e8 7f 70 e6 ff       	call   0x4040a0
  59d021:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59d026:	83 c9 ff             	or     ecx,0xffffffff
  59d029:	33 c0                	xor    eax,eax
  59d02b:	6a 01                	push   0x1
  59d02d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59d02f:	f7 d1                	not    ecx
  59d031:	49                   	dec    ecx
  59d032:	8b e9                	mov    ebp,ecx
  59d034:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59d038:	55                   	push   ebp
  59d039:	e8 02 49 e6 ff       	call   0x401940
  59d03e:	84 c0                	test   al,al
  59d040:	74 24                	je     0x59d066
  59d042:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  59d046:	8b cd                	mov    ecx,ebp
  59d048:	8b d1                	mov    edx,ecx
  59d04a:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  59d04f:	c1 e9 02             	shr    ecx,0x2
  59d052:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59d054:	8b ca                	mov    ecx,edx
  59d056:	83 e1 03             	and    ecx,0x3
  59d059:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59d05b:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  59d05f:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  59d063:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  59d066:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59d06a:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0x17
  59d071:	17 00 00 00 
  59d075:	51                   	push   ecx
  59d076:	68 2c 01 00 00       	push   0x12c
  59d07b:	68 cc 72 6a 00       	push   0x6a72cc
  59d080:	68 10 73 6a 00       	push   0x6a7310
  59d085:	e8 66 37 00 00       	call   0x5a07f0
  59d08a:	ff d0                	call   eax
  59d08c:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  59d090:	83 c4 10             	add    esp,0x10
  59d093:	85 c0                	test   eax,eax
  59d095:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0xffffffff
  59d09c:	ff ff ff ff 
  59d0a0:	74 1d                	je     0x59d0bf
  59d0a2:	8d 48 ff             	lea    ecx,[eax-0x1]
  59d0a5:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59d0a8:	84 c0                	test   al,al
  59d0aa:	74 0a                	je     0x59d0b6
  59d0ac:	3c ff                	cmp    al,0xff
  59d0ae:	74 06                	je     0x59d0b6
  59d0b0:	fe c8                	dec    al
  59d0b2:	88 01                	mov    BYTE PTR [ecx],al
  59d0b4:	eb 09                	jmp    0x59d0bf
  59d0b6:	51                   	push   ecx
  59d0b7:	e8 34 15 06 00       	call   0x5fe5f0
  59d0bc:	83 c4 04             	add    esp,0x4
  59d0bf:	8d 54 24 14          	lea    edx,[esp+0x14]
  59d0c3:	8b cb                	mov    ecx,ebx
  59d0c5:	52                   	push   edx
  59d0c6:	e8 85 c3 ff ff       	call   0x599450
  59d0cb:	8b 8c 24 a0 00 00 00 	mov    ecx,DWORD PTR [esp+0xa0]
  59d0d2:	50                   	push   eax
  59d0d3:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x18
  59d0da:	18 00 00 00 
  59d0de:	e8 ed e0 ff ff       	call   0x59b1d0
  59d0e3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59d0e7:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0xffffffff
  59d0ee:	ff ff ff ff 
  59d0f2:	e8 e9 5f fc ff       	call   0x5630e0
  59d0f7:	b0 01                	mov    al,0x1
  59d0f9:	8b 8c 24 88 00 00 00 	mov    ecx,DWORD PTR [esp+0x88]
  59d100:	5f                   	pop    edi
  59d101:	5e                   	pop    esi
  59d102:	5d                   	pop    ebp
  59d103:	5b                   	pop    ebx
  59d104:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59d10b:	81 c4 84 00 00 00    	add    esp,0x84
  59d111:	c2 0c 00             	ret    0xc
  59d114:	90                   	nop
  59d115:	90                   	nop
  59d116:	90                   	nop
  59d117:	90                   	nop
  59d118:	90                   	nop
  59d119:	90                   	nop
  59d11a:	90                   	nop
  59d11b:	90                   	nop
  59d11c:	90                   	nop
  59d11d:	90                   	nop
  59d11e:	90                   	nop
  59d11f:	90                   	nop
  59d120:	6a ff                	push   0xffffffff
  59d122:	68 50 49 64 00       	push   0x644950
  59d127:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59d12d:	50                   	push   eax
  59d12e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59d135:	83 ec 2c             	sub    esp,0x2c
  59d138:	53                   	push   ebx
  59d139:	55                   	push   ebp
  59d13a:	8b d9                	mov    ebx,ecx
  59d13c:	56                   	push   esi
  59d13d:	57                   	push   edi
  59d13e:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  59d142:	33 c0                	xor    eax,eax
  59d144:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
  59d148:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  59d14c:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  59d150:	c6 44 24 44 01       	mov    BYTE PTR [esp+0x44],0x1
  59d155:	3b c8                	cmp    ecx,eax
  59d157:	0f 85 89 00 00 00    	jne    0x59d1e6
  59d15d:	8a 4c 24 4c          	mov    cl,BYTE PTR [esp+0x4c]
  59d161:	50                   	push   eax
  59d162:	88 4c 24 20          	mov    BYTE PTR [esp+0x20],cl
  59d166:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59d16a:	e8 31 6f e6 ff       	call   0x4040a0
  59d16f:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59d174:	83 c9 ff             	or     ecx,0xffffffff
  59d177:	33 c0                	xor    eax,eax
  59d179:	6a 01                	push   0x1
  59d17b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59d17d:	f7 d1                	not    ecx
  59d17f:	49                   	dec    ecx
  59d180:	8b e9                	mov    ebp,ecx
  59d182:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59d186:	55                   	push   ebp
  59d187:	e8 b4 47 e6 ff       	call   0x401940
  59d18c:	84 c0                	test   al,al
  59d18e:	74 23                	je     0x59d1b3
  59d190:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  59d194:	8b cd                	mov    ecx,ebp
  59d196:	8b d1                	mov    edx,ecx
  59d198:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  59d19d:	c1 e9 02             	shr    ecx,0x2
  59d1a0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59d1a2:	8b ca                	mov    ecx,edx
  59d1a4:	55                   	push   ebp
  59d1a5:	83 e1 03             	and    ecx,0x3
  59d1a8:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59d1aa:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59d1ae:	e8 dd 6f e6 ff       	call   0x404190
  59d1b3:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  59d1b7:	c6 44 24 44 02       	mov    BYTE PTR [esp+0x44],0x2
  59d1bc:	50                   	push   eax
  59d1bd:	68 3b 01 00 00       	push   0x13b
  59d1c2:	68 cc 72 6a 00       	push   0x6a72cc
  59d1c7:	68 44 74 6a 00       	push   0x6a7444
  59d1cc:	e8 1f 36 00 00       	call   0x5a07f0
  59d1d1:	ff d0                	call   eax
  59d1d3:	83 c4 10             	add    esp,0x10
  59d1d6:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59d1da:	c6 44 24 44 01       	mov    BYTE PTR [esp+0x44],0x1
  59d1df:	6a 01                	push   0x1
  59d1e1:	e8 ba 6e e6 ff       	call   0x4040a0
  59d1e6:	c6 44 24 44 00       	mov    BYTE PTR [esp+0x44],0x0
  59d1eb:	e8 00 c4 f7 ff       	call   0x5195f0
  59d1f0:	8b f0                	mov    esi,eax
  59d1f2:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  59d1f5:	3d 00 00 00 80       	cmp    eax,0x80000000
  59d1fa:	75 18                	jne    0x59d214
  59d1fc:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  59d1ff:	85 c0                	test   eax,eax
  59d201:	75 05                	jne    0x59d208
  59d203:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  59d208:	50                   	push   eax
  59d209:	e8 02 dd 06 00       	call   0x60af10
  59d20e:	83 c4 04             	add    esp,0x4
  59d211:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  59d214:	85 c0                	test   eax,eax
  59d216:	74 41                	je     0x59d259
  59d218:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
  59d21c:	83 ec 08             	sub    esp,0x8
  59d21f:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  59d223:	dd 1c 24             	fstp   QWORD PTR [esp]
  59d226:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
  59d22a:	83 ec 08             	sub    esp,0x8
  59d22d:	dd 1c 24             	fstp   QWORD PTR [esp]
  59d230:	68 dc 73 6a 00       	push   0x6a73dc
  59d235:	51                   	push   ecx
  59d236:	e8 55 11 01 00       	call   0x5ae390
  59d23b:	50                   	push   eax
  59d23c:	c6 44 24 60 03       	mov    BYTE PTR [esp+0x60],0x3
  59d241:	e8 ba 2c 01 00       	call   0x5aff00
  59d246:	83 c4 1c             	add    esp,0x1c
  59d249:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59d24d:	c6 44 24 44 00       	mov    BYTE PTR [esp+0x44],0x0
  59d252:	6a 01                	push   0x1
  59d254:	e8 47 6e e6 ff       	call   0x4040a0
  59d259:	8b 6c 24 54          	mov    ebp,DWORD PTR [esp+0x54]
  59d25d:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  59d264:	00 
  59d265:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
  59d268:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  59d26b:	85 c9                	test   ecx,ecx
  59d26d:	75 04                	jne    0x59d273
  59d26f:	33 c0                	xor    eax,eax
  59d271:	eb 08                	jmp    0x59d27b
  59d273:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  59d276:	2b c1                	sub    eax,ecx
  59d278:	c1 f8 02             	sar    eax,0x2
  59d27b:	39 44 24 10          	cmp    DWORD PTR [esp+0x10],eax
  59d27f:	0f 8d 4b 01 00 00    	jge    0x59d3d0
  59d285:	51                   	push   ecx
  59d286:	8d 54 24 14          	lea    edx,[esp+0x14]
  59d28a:	8b cc                	mov    ecx,esp
  59d28c:	89 64 24 58          	mov    DWORD PTR [esp+0x58],esp
  59d290:	52                   	push   edx
  59d291:	e8 3a df ff ff       	call   0x59b1d0
  59d296:	8b cb                	mov    ecx,ebx
  59d298:	e8 f3 0c 00 00       	call   0x59df90
  59d29d:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  59d2a1:	8b f0                	mov    esi,eax
  59d2a3:	56                   	push   esi
  59d2a4:	8b cf                	mov    ecx,edi
  59d2a6:	32 db                	xor    bl,bl
  59d2a8:	e8 83 2d 00 00       	call   0x5a0030
  59d2ad:	8b ce                	mov    ecx,esi
  59d2af:	e8 8c b2 ff ff       	call   0x598540
  59d2b4:	83 f8 08             	cmp    eax,0x8
  59d2b7:	7d 52                	jge    0x59d30b
  59d2b9:	84 db                	test   bl,bl
  59d2bb:	75 4e                	jne    0x59d30b
  59d2bd:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  59d2c1:	55                   	push   ebp
  59d2c2:	50                   	push   eax
  59d2c3:	56                   	push   esi
  59d2c4:	51                   	push   ecx
  59d2c5:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  59d2c9:	8b cc                	mov    ecx,esp
  59d2cb:	89 64 24 64          	mov    DWORD PTR [esp+0x64],esp
  59d2cf:	52                   	push   edx
  59d2d0:	e8 8b c4 ea ff       	call   0x449760
  59d2d5:	8b cf                	mov    ecx,edi
  59d2d7:	e8 64 08 00 00       	call   0x59db40
  59d2dc:	85 c0                	test   eax,eax
  59d2de:	74 1d                	je     0x59d2fd
  59d2e0:	55                   	push   ebp
  59d2e1:	50                   	push   eax
  59d2e2:	56                   	push   esi
  59d2e3:	51                   	push   ecx
  59d2e4:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  59d2e8:	8b cc                	mov    ecx,esp
  59d2ea:	89 64 24 64          	mov    DWORD PTR [esp+0x64],esp
  59d2ee:	50                   	push   eax
  59d2ef:	e8 6c c4 ea ff       	call   0x449760
  59d2f4:	8b cf                	mov    ecx,edi
  59d2f6:	e8 d5 02 00 00       	call   0x59d5d0
  59d2fb:	eb 02                	jmp    0x59d2ff
  59d2fd:	b3 01                	mov    bl,0x1
  59d2ff:	8b ce                	mov    ecx,esi
  59d301:	e8 3a b2 ff ff       	call   0x598540
  59d306:	83 f8 08             	cmp    eax,0x8
  59d309:	7c ae                	jl     0x59d2b9
  59d30b:	8b ce                	mov    ecx,esi
  59d30d:	e8 2e b2 ff ff       	call   0x598540
  59d312:	85 c0                	test   eax,eax
  59d314:	0f 85 a4 00 00 00    	jne    0x59d3be
  59d31a:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59d31e:	51                   	push   ecx
  59d31f:	8b ce                	mov    ecx,esi
  59d321:	e8 8a ce ff ff       	call   0x59a1b0
  59d326:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  59d329:	33 f6                	xor    esi,esi
  59d32b:	3b c6                	cmp    eax,esi
  59d32d:	c6 44 24 44 04       	mov    BYTE PTR [esp+0x44],0x4
  59d332:	75 05                	jne    0x59d339
  59d334:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  59d339:	50                   	push   eax
  59d33a:	8d 54 24 20          	lea    edx,[esp+0x20]
  59d33e:	68 b8 73 6a 00       	push   0x6a73b8
  59d343:	52                   	push   edx
  59d344:	e8 47 10 01 00       	call   0x5ae390
  59d349:	50                   	push   eax
  59d34a:	c6 44 24 54 05       	mov    BYTE PTR [esp+0x54],0x5
  59d34f:	e8 ac 2b 01 00       	call   0x5aff00
  59d354:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  59d358:	83 c4 10             	add    esp,0x10
  59d35b:	3b c6                	cmp    eax,esi
  59d35d:	74 1d                	je     0x59d37c
  59d35f:	8d 48 ff             	lea    ecx,[eax-0x1]
  59d362:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59d365:	84 c0                	test   al,al
  59d367:	74 0a                	je     0x59d373
  59d369:	3c ff                	cmp    al,0xff
  59d36b:	74 06                	je     0x59d373
  59d36d:	fe c8                	dec    al
  59d36f:	88 01                	mov    BYTE PTR [ecx],al
  59d371:	eb 09                	jmp    0x59d37c
  59d373:	51                   	push   ecx
  59d374:	e8 77 12 06 00       	call   0x5fe5f0
  59d379:	83 c4 04             	add    esp,0x4
  59d37c:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  59d380:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  59d384:	3b c6                	cmp    eax,esi
  59d386:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59d38a:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  59d38e:	c6 44 24 44 00       	mov    BYTE PTR [esp+0x44],0x0
  59d393:	74 1d                	je     0x59d3b2
  59d395:	8d 48 ff             	lea    ecx,[eax-0x1]
  59d398:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59d39b:	84 c0                	test   al,al
  59d39d:	74 0a                	je     0x59d3a9
  59d39f:	3c ff                	cmp    al,0xff
  59d3a1:	74 06                	je     0x59d3a9
  59d3a3:	fe c8                	dec    al
  59d3a5:	88 01                	mov    BYTE PTR [ecx],al
  59d3a7:	eb 09                	jmp    0x59d3b2
  59d3a9:	51                   	push   ecx
  59d3aa:	e8 41 12 06 00       	call   0x5fe5f0
  59d3af:	83 c4 04             	add    esp,0x4
  59d3b2:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  59d3b6:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  59d3ba:	89 74 24 38          	mov    DWORD PTR [esp+0x38],esi
  59d3be:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  59d3c2:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  59d3c6:	40                   	inc    eax
  59d3c7:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  59d3cb:	e9 95 fe ff ff       	jmp    0x59d265
  59d3d0:	8b cb                	mov    ecx,ebx
  59d3d2:	e8 c9 f1 ff ff       	call   0x59c5a0
  59d3d7:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
  59d3db:	c7 44 24 44 ff ff ff 	mov    DWORD PTR [esp+0x44],0xffffffff
  59d3e2:	ff 
  59d3e3:	85 c0                	test   eax,eax
  59d3e5:	74 18                	je     0x59d3ff
  59d3e7:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59d3ea:	8b c8                	mov    ecx,eax
  59d3ec:	83 c0 14             	add    eax,0x14
  59d3ef:	4e                   	dec    esi
  59d3f0:	8b d6                	mov    edx,esi
  59d3f2:	85 d2                	test   edx,edx
  59d3f4:	89 30                	mov    DWORD PTR [eax],esi
  59d3f6:	75 07                	jne    0x59d3ff
  59d3f8:	6a 00                	push   0x0
  59d3fa:	e8 c1 eb 00 00       	call   0x5abfc0
  59d3ff:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  59d403:	5f                   	pop    edi
  59d404:	5e                   	pop    esi
  59d405:	5d                   	pop    ebp
  59d406:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59d40d:	5b                   	pop    ebx
  59d40e:	83 c4 38             	add    esp,0x38
  59d411:	c2 0c 00             	ret    0xc
  59d414:	90                   	nop
  59d415:	90                   	nop
  59d416:	90                   	nop
  59d417:	90                   	nop
  59d418:	90                   	nop
  59d419:	90                   	nop
  59d41a:	90                   	nop
  59d41b:	90                   	nop
  59d41c:	90                   	nop
  59d41d:	90                   	nop
  59d41e:	90                   	nop
  59d41f:	90                   	nop
  59d420:	6a ff                	push   0xffffffff
  59d422:	68 68 49 64 00       	push   0x644968
  59d427:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59d42d:	50                   	push   eax
  59d42e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59d435:	83 ec 2c             	sub    esp,0x2c
  59d438:	53                   	push   ebx
  59d439:	56                   	push   esi
  59d43a:	57                   	push   edi
  59d43b:	8d 54 24 58          	lea    edx,[esp+0x58]
  59d43f:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  59d443:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  59d44a:	00 
  59d44b:	e8 50 5c 01 00       	call   0x5b30a0
  59d450:	d9 c0                	fld    st(0)
  59d452:	d8 74 24 64          	fdiv   DWORD PTR [esp+0x64]
  59d456:	e8 c5 d6 06 00       	call   0x60ab20
  59d45b:	8b d8                	mov    ebx,eax
  59d45d:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  59d461:	db 44 24 0c          	fild   DWORD PTR [esp+0xc]
  59d465:	d8 4c 24 64          	fmul   DWORD PTR [esp+0x64]
  59d469:	d8 d9                	fcomp  st(1)
  59d46b:	df e0                	fnstsw ax
  59d46d:	f6 c4 01             	test   ah,0x1
  59d470:	dd d8                	fstp   st(0)
  59d472:	74 05                	je     0x59d479
  59d474:	43                   	inc    ebx
  59d475:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  59d479:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  59d47d:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  59d481:	50                   	push   eax
  59d482:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  59d486:	e8 55 5b 01 00       	call   0x5b2fe0
  59d48b:	bf 01 00 00 00       	mov    edi,0x1
  59d490:	3b df                	cmp    ebx,edi
  59d492:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  59d496:	0f 8e b4 00 00 00    	jle    0x59d550
  59d49c:	db 44 24 0c          	fild   DWORD PTR [esp+0xc]
  59d4a0:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
  59d4a4:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  59d4a8:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59d4ac:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  59d4b0:	51                   	push   ecx
  59d4b1:	51                   	push   ecx
  59d4b2:	d8 74 24 14          	fdiv   DWORD PTR [esp+0x14]
  59d4b6:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  59d4ba:	d9 1c 24             	fstp   DWORD PTR [esp]
  59d4bd:	e8 5e 5b 01 00       	call   0x5b3020
  59d4c2:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  59d4c6:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  59d4ca:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  59d4ce:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  59d4d2:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  59d4d6:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  59d4da:	e8 f1 d9 ff ff       	call   0x59aed0
  59d4df:	8b f0                	mov    esi,eax
  59d4e1:	81 c6 f4 02 00 00    	add    esi,0x2f4
  59d4e7:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  59d4ea:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  59d4f0:	df e0                	fnstsw ax
  59d4f2:	f6 c4 40             	test   ah,0x40
  59d4f5:	74 16                	je     0x59d50d
  59d4f7:	8d 54 24 64          	lea    edx,[esp+0x64]
  59d4fb:	8d 46 14             	lea    eax,[esi+0x14]
  59d4fe:	52                   	push   edx
  59d4ff:	50                   	push   eax
  59d500:	e8 8b fe 00 00       	call   0x5ad390
  59d505:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  59d508:	83 c4 08             	add    esp,0x8
  59d50b:	eb 03                	jmp    0x59d510
  59d50d:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  59d510:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  59d514:	d8 e1                	fsub   st,st(1)
  59d516:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59d51a:	8d 54 24 20          	lea    edx,[esp+0x20]
  59d51e:	51                   	push   ecx
  59d51f:	52                   	push   edx
  59d520:	51                   	push   ecx
  59d521:	8d 44 24 54          	lea    eax,[esp+0x54]
  59d525:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  59d529:	8b cc                	mov    ecx,esp
  59d52b:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  59d52f:	50                   	push   eax
  59d530:	dd d8                	fstp   st(0)
  59d532:	e8 29 c2 ea ff       	call   0x449760
  59d537:	e8 b4 78 ff ff       	call   0x594df0
  59d53c:	83 c4 0c             	add    esp,0xc
  59d53f:	84 c0                	test   al,al
  59d541:	75 4b                	jne    0x59d58e
  59d543:	47                   	inc    edi
  59d544:	3b fb                	cmp    edi,ebx
  59d546:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  59d54a:	0f 8c 54 ff ff ff    	jl     0x59d4a4
  59d550:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  59d554:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  59d55b:	ff 
  59d55c:	85 c0                	test   eax,eax
  59d55e:	74 18                	je     0x59d578
  59d560:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59d563:	8b c8                	mov    ecx,eax
  59d565:	83 c0 14             	add    eax,0x14
  59d568:	4e                   	dec    esi
  59d569:	8b d6                	mov    edx,esi
  59d56b:	85 d2                	test   edx,edx
  59d56d:	89 30                	mov    DWORD PTR [eax],esi
  59d56f:	75 07                	jne    0x59d578
  59d571:	6a 00                	push   0x0
  59d573:	e8 48 ea 00 00       	call   0x5abfc0
  59d578:	32 c0                	xor    al,al
  59d57a:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  59d57e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59d585:	5f                   	pop    edi
  59d586:	5e                   	pop    esi
  59d587:	5b                   	pop    ebx
  59d588:	83 c4 38             	add    esp,0x38
  59d58b:	c2 20 00             	ret    0x20
  59d58e:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  59d592:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  59d599:	ff 
  59d59a:	85 c0                	test   eax,eax
  59d59c:	74 18                	je     0x59d5b6
  59d59e:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59d5a1:	8b c8                	mov    ecx,eax
  59d5a3:	83 c0 14             	add    eax,0x14
  59d5a6:	4e                   	dec    esi
  59d5a7:	8b d6                	mov    edx,esi
  59d5a9:	85 d2                	test   edx,edx
  59d5ab:	89 30                	mov    DWORD PTR [eax],esi
  59d5ad:	75 07                	jne    0x59d5b6
  59d5af:	6a 00                	push   0x0
  59d5b1:	e8 0a ea 00 00       	call   0x5abfc0
  59d5b6:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  59d5ba:	5f                   	pop    edi
  59d5bb:	5e                   	pop    esi
  59d5bc:	b0 01                	mov    al,0x1
  59d5be:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59d5c5:	5b                   	pop    ebx
  59d5c6:	83 c4 38             	add    esp,0x38
  59d5c9:	c2 20 00             	ret    0x20
  59d5cc:	90                   	nop
  59d5cd:	90                   	nop
  59d5ce:	90                   	nop
  59d5cf:	90                   	nop
  59d5d0:	6a ff                	push   0xffffffff
  59d5d2:	68 f6 49 64 00       	push   0x6449f6
  59d5d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59d5dd:	50                   	push   eax
  59d5de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59d5e5:	81 ec 88 00 00 00    	sub    esp,0x88
  59d5eb:	53                   	push   ebx
  59d5ec:	55                   	push   ebp
  59d5ed:	56                   	push   esi
  59d5ee:	33 f6                	xor    esi,esi
  59d5f0:	57                   	push   edi
  59d5f1:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  59d5f5:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  59d5f9:	8b 9c 24 ac 00 00 00 	mov    ebx,DWORD PTR [esp+0xac]
  59d600:	89 b4 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],esi
  59d607:	8b cb                	mov    ecx,ebx
  59d609:	e8 b2 bf ff ff       	call   0x5995c0
  59d60e:	8b 8c 24 b0 00 00 00 	mov    ecx,DWORD PTR [esp+0xb0]
  59d615:	8b f8                	mov    edi,eax
  59d617:	e8 a4 bf ff ff       	call   0x5995c0
  59d61c:	3b f8                	cmp    edi,eax
  59d61e:	0f 84 8f 00 00 00    	je     0x59d6b3
  59d624:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  59d628:	56                   	push   esi
  59d629:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  59d62d:	88 44 24 38          	mov    BYTE PTR [esp+0x38],al
  59d631:	e8 6a 6a e6 ff       	call   0x4040a0
  59d636:	bf c4 74 6a 00       	mov    edi,0x6a74c4
  59d63b:	83 c9 ff             	or     ecx,0xffffffff
  59d63e:	33 c0                	xor    eax,eax
  59d640:	6a 01                	push   0x1
  59d642:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59d644:	f7 d1                	not    ecx
  59d646:	49                   	dec    ecx
  59d647:	8b e9                	mov    ebp,ecx
  59d649:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  59d64d:	55                   	push   ebp
  59d64e:	e8 ed 42 e6 ff       	call   0x401940
  59d653:	84 c0                	test   al,al
  59d655:	74 23                	je     0x59d67a
  59d657:	8b 7c 24 38          	mov    edi,DWORD PTR [esp+0x38]
  59d65b:	8b cd                	mov    ecx,ebp
  59d65d:	8b d1                	mov    edx,ecx
  59d65f:	be c4 74 6a 00       	mov    esi,0x6a74c4
  59d664:	c1 e9 02             	shr    ecx,0x2
  59d667:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59d669:	8b ca                	mov    ecx,edx
  59d66b:	55                   	push   ebp
  59d66c:	83 e1 03             	and    ecx,0x3
  59d66f:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59d671:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  59d675:	e8 16 6b e6 ff       	call   0x404190
  59d67a:	8d 44 24 34          	lea    eax,[esp+0x34]
  59d67e:	c6 84 24 a0 00 00 00 	mov    BYTE PTR [esp+0xa0],0x1
  59d685:	01 
  59d686:	50                   	push   eax
  59d687:	68 96 01 00 00       	push   0x196
  59d68c:	68 cc 72 6a 00       	push   0x6a72cc
  59d691:	68 88 74 6a 00       	push   0x6a7488
  59d696:	e8 55 31 00 00       	call   0x5a07f0
  59d69b:	ff d0                	call   eax
  59d69d:	83 c4 10             	add    esp,0x10
  59d6a0:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  59d6a4:	c6 84 24 a0 00 00 00 	mov    BYTE PTR [esp+0xa0],0x0
  59d6ab:	00 
  59d6ac:	6a 01                	push   0x1
  59d6ae:	e8 ed 69 e6 ff       	call   0x4040a0
  59d6b3:	8b cb                	mov    ecx,ebx
  59d6b5:	e8 f6 a8 ff ff       	call   0x597fb0
  59d6ba:	8b 08                	mov    ecx,DWORD PTR [eax]
  59d6bc:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
  59d6c0:	8b 8c 24 b0 00 00 00 	mov    ecx,DWORD PTR [esp+0xb0]
  59d6c7:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  59d6ca:	89 54 24 58          	mov    DWORD PTR [esp+0x58],edx
  59d6ce:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  59d6d1:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
  59d6d5:	e8 d6 a8 ff ff       	call   0x597fb0
  59d6da:	8b 08                	mov    ecx,DWORD PTR [eax]
  59d6dc:	89 4c 24 60          	mov    DWORD PTR [esp+0x60],ecx
  59d6e0:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  59d6e4:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  59d6e7:	89 54 24 64          	mov    DWORD PTR [esp+0x64],edx
  59d6eb:	8d 54 24 60          	lea    edx,[esp+0x60]
  59d6ef:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  59d6f2:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
  59d6f6:	e8 a5 59 01 00       	call   0x5b30a0
  59d6fb:	d9 c0                	fld    st(0)
  59d6fd:	d8                   	.byte 0xd8
  59d6fe:	b4 24                	mov    ah,0x24
