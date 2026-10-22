  45e270:	6a ff                	push   0xffffffff
  45e272:	68 92 73 62 00       	push   0x627392
  45e277:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  45e27d:	50                   	push   eax
  45e27e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  45e285:	81 ec 6c 01 00 00    	sub    esp,0x16c
  45e28b:	55                   	push   ebp
  45e28c:	8b e9                	mov    ebp,ecx
  45e28e:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  45e292:	8a 45 7c             	mov    al,BYTE PTR [ebp+0x7c]
  45e295:	84 c0                	test   al,al
  45e297:	0f 84 4e 07 00 00    	je     0x45e9eb
  45e29d:	53                   	push   ebx
  45e29e:	56                   	push   esi
  45e29f:	8d 44 24 24          	lea    eax,[esp+0x24]
  45e2a3:	57                   	push   edi
  45e2a4:	50                   	push   eax
  45e2a5:	e8 36 60 fa ff       	call   0x4042e0
  45e2aa:	8b d8                	mov    ebx,eax
  45e2ac:	8b 03                	mov    eax,DWORD PTR [ebx]
  45e2ae:	33 f6                	xor    esi,esi
  45e2b0:	3b c6                	cmp    eax,esi
  45e2b2:	89 b4 24 84 01 00 00 	mov    DWORD PTR [esp+0x184],esi
  45e2b9:	75 69                	jne    0x45e324
  45e2bb:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  45e2bf:	56                   	push   esi
  45e2c0:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  45e2c4:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  45e2c8:	e8 d3 5d fa ff       	call   0x4040a0
  45e2cd:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  45e2d2:	83 c9 ff             	or     ecx,0xffffffff
  45e2d5:	33 c0                	xor    eax,eax
  45e2d7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  45e2d9:	f7 d1                	not    ecx
  45e2db:	49                   	dec    ecx
  45e2dc:	51                   	push   ecx
  45e2dd:	68 70 3f 6b 00       	push   0x6b3f70
  45e2e2:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  45e2e6:	e8 05 5e fa ff       	call   0x4040f0
  45e2eb:	8d 54 24 18          	lea    edx,[esp+0x18]
  45e2ef:	c6 84 24 84 01 00 00 	mov    BYTE PTR [esp+0x184],0x1
  45e2f6:	01 
  45e2f7:	52                   	push   edx
  45e2f8:	68 b6 00 00 00       	push   0xb6
  45e2fd:	68 38 d6 68 00       	push   0x68d638
  45e302:	68 2c d6 68 00       	push   0x68d62c
  45e307:	e8 e4 24 14 00       	call   0x5a07f0
  45e30c:	ff d0                	call   eax
  45e30e:	83 c4 10             	add    esp,0x10
  45e311:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  45e315:	c6 84 24 84 01 00 00 	mov    BYTE PTR [esp+0x184],0x0
  45e31c:	00 
  45e31d:	6a 01                	push   0x1
  45e31f:	e8 7c 5d fa ff       	call   0x4040a0
  45e324:	8b 1b                	mov    ebx,DWORD PTR [ebx]
  45e326:	39 73 5c             	cmp    DWORD PTR [ebx+0x5c],esi
  45e329:	75 69                	jne    0x45e394
  45e32b:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  45e32f:	56                   	push   esi
  45e330:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  45e334:	88 44 24 58          	mov    BYTE PTR [esp+0x58],al
  45e338:	e8 63 5d fa ff       	call   0x4040a0
  45e33d:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  45e342:	83 c9 ff             	or     ecx,0xffffffff
  45e345:	33 c0                	xor    eax,eax
  45e347:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  45e349:	f7 d1                	not    ecx
  45e34b:	49                   	dec    ecx
  45e34c:	51                   	push   ecx
  45e34d:	68 70 3f 6b 00       	push   0x6b3f70
  45e352:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  45e356:	e8 95 5d fa ff       	call   0x4040f0
  45e35b:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  45e35f:	c6 84 24 84 01 00 00 	mov    BYTE PTR [esp+0x184],0x2
  45e366:	02 
  45e367:	51                   	push   ecx
  45e368:	68 44 01 00 00       	push   0x144
  45e36d:	68 b8 e1 68 00       	push   0x68e1b8
  45e372:	68 a8 e1 68 00       	push   0x68e1a8
  45e377:	e8 74 24 14 00       	call   0x5a07f0
  45e37c:	ff d0                	call   eax
  45e37e:	83 c4 10             	add    esp,0x10
  45e381:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  45e385:	c6 84 24 84 01 00 00 	mov    BYTE PTR [esp+0x184],0x0
  45e38c:	00 
  45e38d:	6a 01                	push   0x1
  45e38f:	e8 0c 5d fa ff       	call   0x4040a0
  45e394:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  45e398:	8b 53 5c             	mov    edx,DWORD PTR [ebx+0x5c]
  45e39b:	3b c6                	cmp    eax,esi
  45e39d:	89 54 24 64          	mov    DWORD PTR [esp+0x64],edx
  45e3a1:	c7 84 24 84 01 00 00 	mov    DWORD PTR [esp+0x184],0xffffffff
  45e3a8:	ff ff ff ff 
  45e3ac:	74 17                	je     0x45e3c5
  45e3ae:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  45e3b1:	8b c8                	mov    ecx,eax
  45e3b3:	83 c0 14             	add    eax,0x14
  45e3b6:	4f                   	dec    edi
  45e3b7:	8b d7                	mov    edx,edi
  45e3b9:	3b d6                	cmp    edx,esi
  45e3bb:	89 38                	mov    DWORD PTR [eax],edi
  45e3bd:	75 06                	jne    0x45e3c5
  45e3bf:	56                   	push   esi
  45e3c0:	e8 fb db 14 00       	call   0x5abfc0
  45e3c5:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  45e3ca:	3b c6                	cmp    eax,esi
  45e3cc:	75 05                	jne    0x45e3d3
  45e3ce:	e8 ad ce 0f 00       	call   0x55b280
  45e3d3:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  45e3d7:	51                   	push   ecx
  45e3d8:	8b c8                	mov    ecx,eax
  45e3da:	e8 71 33 fc ff       	call   0x421750
  45e3df:	8b d8                	mov    ebx,eax
  45e3e1:	8b 03                	mov    eax,DWORD PTR [ebx]
  45e3e3:	c7 84 24 84 01 00 00 	mov    DWORD PTR [esp+0x184],0x3
  45e3ea:	03 00 00 00 
  45e3ee:	3b c6                	cmp    eax,esi
  45e3f0:	75 69                	jne    0x45e45b
  45e3f2:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  45e3f6:	56                   	push   esi
  45e3f7:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  45e3fb:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  45e3ff:	e8 9c 5c fa ff       	call   0x4040a0
  45e404:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  45e409:	83 c9 ff             	or     ecx,0xffffffff
  45e40c:	33 c0                	xor    eax,eax
  45e40e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  45e410:	f7 d1                	not    ecx
  45e412:	49                   	dec    ecx
  45e413:	51                   	push   ecx
  45e414:	68 70 3f 6b 00       	push   0x6b3f70
  45e419:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  45e41d:	e8 ce 5c fa ff       	call   0x4040f0
  45e422:	8d 44 24 18          	lea    eax,[esp+0x18]
  45e426:	c6 84 24 84 01 00 00 	mov    BYTE PTR [esp+0x184],0x4
  45e42d:	04 
  45e42e:	50                   	push   eax
  45e42f:	68 b6 00 00 00       	push   0xb6
  45e434:	68 38 d6 68 00       	push   0x68d638
  45e439:	68 2c d6 68 00       	push   0x68d62c
  45e43e:	e8 ad 23 14 00       	call   0x5a07f0
  45e443:	ff d0                	call   eax
  45e445:	83 c4 10             	add    esp,0x10
  45e448:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  45e44c:	c6 84 24 84 01 00 00 	mov    BYTE PTR [esp+0x184],0x3
  45e453:	03 
  45e454:	6a 01                	push   0x1
  45e456:	e8 45 5c fa ff       	call   0x4040a0
  45e45b:	8b 1b                	mov    ebx,DWORD PTR [ebx]
  45e45d:	c7 84 24 84 01 00 00 	mov    DWORD PTR [esp+0x184],0xffffffff
  45e464:	ff ff ff ff 
  45e468:	81 c3 10 02 00 00    	add    ebx,0x210
  45e46e:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  45e470:	89 4c 24 68          	mov    DWORD PTR [esp+0x68],ecx
  45e474:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  45e477:	89 54 24 6c          	mov    DWORD PTR [esp+0x6c],edx
  45e47b:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  45e47e:	89 44 24 70          	mov    DWORD PTR [esp+0x70],eax
  45e482:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  45e486:	3b c6                	cmp    eax,esi
  45e488:	74 17                	je     0x45e4a1
  45e48a:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  45e48d:	8b c8                	mov    ecx,eax
  45e48f:	83 c0 14             	add    eax,0x14
  45e492:	4f                   	dec    edi
  45e493:	8b d7                	mov    edx,edi
  45e495:	3b d6                	cmp    edx,esi
  45e497:	89 38                	mov    DWORD PTR [eax],edi
  45e499:	75 06                	jne    0x45e4a1
  45e49b:	56                   	push   esi
  45e49c:	e8 1f db 14 00       	call   0x5abfc0
  45e4a1:	33 db                	xor    ebx,ebx
  45e4a3:	81 c5 0c 01 00 00    	add    ebp,0x10c
  45e4a9:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  45e4ad:	8a 45 68             	mov    al,BYTE PTR [ebp+0x68]
  45e4b0:	84 c0                	test   al,al
  45e4b2:	0f 84 bf 03 00 00    	je     0x45e877
  45e4b8:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  45e4bc:	8d bd 40 01 00 00    	lea    edi,[ebp+0x140]
  45e4c2:	81 c1 9c 15 00 00    	add    ecx,0x159c
  45e4c8:	8b d7                	mov    edx,edi
  45e4ca:	8b 01                	mov    eax,DWORD PTR [ecx]
  45e4cc:	89 02                	mov    DWORD PTR [edx],eax
  45e4ce:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  45e4d1:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  45e4d4:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  45e4d7:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  45e4da:	8b d5                	mov    edx,ebp
  45e4dc:	8b 02                	mov    eax,DWORD PTR [edx]
  45e4de:	89 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],eax
  45e4e5:	8d 44 24 30          	lea    eax,[esp+0x30]
  45e4e9:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  45e4ec:	50                   	push   eax
  45e4ed:	89 8c 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],ecx
  45e4f4:	8d 8c 24 84 00 00 00 	lea    ecx,[esp+0x84]
  45e4fb:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  45e4fe:	89 94 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],edx
  45e505:	8b d7                	mov    edx,edi
  45e507:	e8 d4 4a 15 00       	call   0x5b2fe0
  45e50c:	81 e3 01 00 00 80    	and    ebx,0x80000001
  45e512:	79 05                	jns    0x45e519
  45e514:	4b                   	dec    ebx
  45e515:	83 cb fe             	or     ebx,0xfffffffe
  45e518:	43                   	inc    ebx
  45e519:	74 2f                	je     0x45e54a
  45e51b:	8b cd                	mov    ecx,ebp
  45e51d:	8b 11                	mov    edx,DWORD PTR [ecx]
  45e51f:	89 94 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],edx
  45e526:	8d 54 24 74          	lea    edx,[esp+0x74]
  45e52a:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  45e52d:	52                   	push   edx
  45e52e:	89 84 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],eax
  45e535:	8b d7                	mov    edx,edi
  45e537:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  45e53a:	89 8c 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],ecx
  45e541:	8d 8c 24 a8 00 00 00 	lea    ecx,[esp+0xa8]
  45e548:	eb 1b                	jmp    0x45e565
  45e54a:	8d 44 24 74          	lea    eax,[esp+0x74]
  45e54e:	8b d7                	mov    edx,edi
  45e550:	50                   	push   eax
  45e551:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  45e555:	e8 86 4a 15 00       	call   0x5b2fe0
  45e55a:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  45e55e:	8b d7                	mov    edx,edi
  45e560:	51                   	push   ecx
  45e561:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  45e565:	e8 76 4a 15 00       	call   0x5b2fe0
  45e56a:	8d 54 24 30          	lea    edx,[esp+0x30]
  45e56e:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  45e572:	e8 c9 48 15 00       	call   0x5b2e40
  45e577:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  45e57b:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  45e57f:	8d 54 24 30          	lea    edx,[esp+0x30]
  45e583:	50                   	push   eax
  45e584:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  45e588:	e8 13 4a 15 00       	call   0x5b2fa0
  45e58d:	8d 8c 24 e0 00 00 00 	lea    ecx,[esp+0xe0]
  45e594:	8d 54 24 74          	lea    edx,[esp+0x74]
  45e598:	51                   	push   ecx
  45e599:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  45e59d:	e8 3e 4a 15 00       	call   0x5b2fe0
  45e5a2:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  45e5a6:	e8 75 49 15 00       	call   0x5b2f20
  45e5ab:	dd d8                	fstp   st(0)
  45e5ad:	8d 8c 24 e0 00 00 00 	lea    ecx,[esp+0xe0]
  45e5b4:	e8 67 49 15 00       	call   0x5b2f20
  45e5b9:	8d 94 24 c8 00 00 00 	lea    edx,[esp+0xc8]
  45e5c0:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  45e5c4:	52                   	push   edx
  45e5c5:	8d 94 24 e4 00 00 00 	lea    edx,[esp+0xe4]
  45e5cc:	dd d8                	fstp   st(0)
  45e5ce:	e8 8d 48 15 00       	call   0x5b2e60
  45e5d3:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
  45e5da:	e8 41 49 15 00       	call   0x5b2f20
  45e5df:	dd d8                	fstp   st(0)
  45e5e1:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  45e5e7:	d8 65 20             	fsub   DWORD PTR [ebp+0x20]
  45e5ea:	8d 54 24 48          	lea    edx,[esp+0x48]
  45e5ee:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
  45e5f5:	d8 0d f8 d6 64 00    	fmul   DWORD PTR ds:0x64d6f8
  45e5fb:	d9 05 fc d6 64 00    	fld    DWORD PTR ds:0x64d6fc
  45e601:	d8 4d 20             	fmul   DWORD PTR [ebp+0x20]
  45e604:	de c1                	faddp  st(1),st
  45e606:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  45e60a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  45e60e:	50                   	push   eax
  45e60f:	e8 8c 49 15 00       	call   0x5b2fa0
  45e614:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  45e618:	d8 0d 60 d7 64 00    	fmul   DWORD PTR ds:0x64d760
  45e61e:	51                   	push   ecx
  45e61f:	8d 54 24 40          	lea    edx,[esp+0x40]
  45e623:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  45e62a:	d9 1c 24             	fstp   DWORD PTR [esp]
  45e62d:	e8 6e 49 15 00       	call   0x5b2fa0
  45e632:	8b cd                	mov    ecx,ebp
  45e634:	8b 11                	mov    edx,DWORD PTR [ecx]
  45e636:	89 94 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],edx
  45e63d:	8b d5                	mov    edx,ebp
  45e63f:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  45e642:	d9 84 24 98 00 00 00 	fld    DWORD PTR [esp+0x98]
  45e649:	d8 64 24 48          	fsub   DWORD PTR [esp+0x48]
  45e64d:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  45e650:	89 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],eax
  45e657:	8b 02                	mov    eax,DWORD PTR [edx]
  45e659:	89 8c 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],ecx
  45e660:	89 84 24 d4 00 00 00 	mov    DWORD PTR [esp+0xd4],eax
  45e667:	8b c5                	mov    eax,ebp
  45e669:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  45e66c:	d9 9c 24 ec 00 00 00 	fstp   DWORD PTR [esp+0xec]
  45e673:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  45e676:	89 8c 24 d8 00 00 00 	mov    DWORD PTR [esp+0xd8],ecx
  45e67d:	d9 84 24 d8 00 00 00 	fld    DWORD PTR [esp+0xd8]
  45e684:	8b 08                	mov    ecx,DWORD PTR [eax]
  45e686:	89 94 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],edx
  45e68d:	d8 64 24 4c          	fsub   DWORD PTR [esp+0x4c]
  45e691:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  45e694:	89 8c 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],ecx
  45e69b:	8b cd                	mov    ecx,ebp
  45e69d:	89 94 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],edx
  45e6a4:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  45e6a7:	d9 9c 24 f0 00 00 00 	fstp   DWORD PTR [esp+0xf0]
  45e6ae:	89 84 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],eax
  45e6b5:	8b 11                	mov    edx,DWORD PTR [ecx]
  45e6b7:	d9 84 24 b8 00 00 00 	fld    DWORD PTR [esp+0xb8]
  45e6be:	d8 64 24 50          	fsub   DWORD PTR [esp+0x50]
  45e6c2:	d9 9c 24 f4 00 00 00 	fstp   DWORD PTR [esp+0xf4]
  45e6c9:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  45e6cc:	89 94 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],edx
  45e6d3:	d9 84 24 bc 00 00 00 	fld    DWORD PTR [esp+0xbc]
  45e6da:	d8 44 24 48          	fadd   DWORD PTR [esp+0x48]
  45e6de:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  45e6e1:	8b d5                	mov    edx,ebp
  45e6e3:	89 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],eax
  45e6ea:	89 8c 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],ecx
  45e6f1:	8b 02                	mov    eax,DWORD PTR [edx]
  45e6f3:	c7 84 24 64 01 00 00 	mov    DWORD PTR [esp+0x164],0x0
  45e6fa:	00 00 00 00 
  45e6fe:	d9 9c 24 10 01 00 00 	fstp   DWORD PTR [esp+0x110]
  45e705:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  45e708:	89 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],eax
  45e70f:	8b c5                	mov    eax,ebp
  45e711:	89 8c 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],ecx
  45e718:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  45e71b:	c7 84 24 68 01 00 00 	mov    DWORD PTR [esp+0x168],0x0
  45e722:	00 00 00 00 
  45e726:	d9 84 24 90 00 00 00 	fld    DWORD PTR [esp+0x90]
  45e72d:	8b 08                	mov    ecx,DWORD PTR [eax]
  45e72f:	89 94 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],edx
  45e736:	d8 44 24 4c          	fadd   DWORD PTR [esp+0x4c]
  45e73a:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  45e73d:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
  45e741:	89 54 24 58          	mov    DWORD PTR [esp+0x58],edx
  45e745:	c7 84 24 f8 00 00 00 	mov    DWORD PTR [esp+0xf8],0x0
  45e74c:	00 00 00 00 
  45e750:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  45e753:	c7 84 24 fc 00 00 00 	mov    DWORD PTR [esp+0xfc],0x3f800000
  45e75a:	00 00 80 3f 
  45e75e:	d9 9c 24 14 01 00 00 	fstp   DWORD PTR [esp+0x114]
  45e765:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
  45e769:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0x3f800000
  45e770:	00 00 80 3f 
  45e774:	d9 44 24 5c          	fld    DWORD PTR [esp+0x5c]
  45e778:	d8 44 24 50          	fadd   DWORD PTR [esp+0x50]
  45e77c:	c7 84 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],0x3f800000
  45e783:	00 00 80 3f 
  45e787:	c7 84 24 40 01 00 00 	mov    DWORD PTR [esp+0x140],0x3f800000
  45e78e:	00 00 80 3f 
  45e792:	c7 84 24 44 01 00 00 	mov    DWORD PTR [esp+0x144],0x0
  45e799:	00 00 00 00 
  45e79d:	8d b4 24 04 01 00 00 	lea    esi,[esp+0x104]
  45e7a4:	bb 02 00 00 00       	mov    ebx,0x2
  45e7a9:	d9 9c 24 18 01 00 00 	fstp   DWORD PTR [esp+0x118]
  45e7b0:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  45e7b4:	d8 07                	fadd   DWORD PTR [edi]
  45e7b6:	d9 9c 24 34 01 00 00 	fstp   DWORD PTR [esp+0x134]
  45e7bd:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
  45e7c1:	d8 85 44 01 00 00    	fadd   DWORD PTR [ebp+0x144]
  45e7c7:	d9 9c 24 38 01 00 00 	fstp   DWORD PTR [esp+0x138]
  45e7ce:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  45e7d2:	d8 85 48 01 00 00    	fadd   DWORD PTR [ebp+0x148]
  45e7d8:	d9 9c 24 3c 01 00 00 	fstp   DWORD PTR [esp+0x13c]
  45e7df:	d9 07                	fld    DWORD PTR [edi]
  45e7e1:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
  45e7e5:	8d 7d fc             	lea    edi,[ebp-0x4]
  45e7e8:	d9 9c 24 58 01 00 00 	fstp   DWORD PTR [esp+0x158]
  45e7ef:	d9 85 44 01 00 00    	fld    DWORD PTR [ebp+0x144]
  45e7f5:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
  45e7f9:	d9 9c 24 5c 01 00 00 	fstp   DWORD PTR [esp+0x15c]
  45e800:	d9 85 48 01 00 00    	fld    DWORD PTR [ebp+0x148]
  45e806:	d8 64 24 44          	fsub   DWORD PTR [esp+0x44]
  45e80a:	d9 9c 24 60 01 00 00 	fstp   DWORD PTR [esp+0x160]
  45e811:	c7 46 fc 00 00 7f 43 	mov    DWORD PTR [esi-0x4],0x437f0000
  45e818:	c7 06 00 00 c8 41    	mov    DWORD PTR [esi],0x41c80000
  45e81e:	8b cf                	mov    ecx,edi
  45e820:	c7 46 04 00 00 c8 41 	mov    DWORD PTR [esi+0x4],0x41c80000
  45e827:	e8 a4 ad 13 00       	call   0x5995d0
  45e82c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  45e830:	83 c6 24             	add    esi,0x24
  45e833:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  45e837:	4b                   	dec    ebx
  45e838:	d9 5e e4             	fstp   DWORD PTR [esi-0x1c]
  45e83b:	75 d4                	jne    0x45e811
  45e83d:	8d b4 24 4c 01 00 00 	lea    esi,[esp+0x14c]
  45e844:	bb 02 00 00 00       	mov    ebx,0x2
  45e849:	c7 46 fc 00 00 7f 43 	mov    DWORD PTR [esi-0x4],0x437f0000
  45e850:	c7 06 00 00 7b 43    	mov    DWORD PTR [esi],0x437b0000
  45e856:	8b cf                	mov    ecx,edi
  45e858:	c7 46 04 00 00 48 42 	mov    DWORD PTR [esi+0x4],0x42480000
  45e85f:	e8 6c ad 13 00       	call   0x5995d0
  45e864:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  45e868:	83 c6 24             	add    esi,0x24
  45e86b:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  45e86f:	4b                   	dec    ebx
  45e870:	d9 5e e4             	fstp   DWORD PTR [esi-0x1c]
  45e873:	75 d4                	jne    0x45e849
  45e875:	33 f6                	xor    esi,esi
  45e877:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  45e87b:	39 b1 f8 00 00 00    	cmp    DWORD PTR [ecx+0xf8],esi
  45e881:	0f 85 1e 01 00 00    	jne    0x45e9a5
  45e887:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  45e88c:	83 c9 ff             	or     ecx,0xffffffff
  45e88f:	33 c0                	xor    eax,eax
  45e891:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  45e895:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  45e897:	f7 d1                	not    ecx
  45e899:	49                   	dec    ecx
  45e89a:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  45e89e:	8b d9                	mov    ebx,ecx
  45e8a0:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  45e8a4:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  45e8a8:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  45e8ac:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  45e8b0:	e8 4b e5 fa ff       	call   0x40ce00
  45e8b5:	3b c3                	cmp    eax,ebx
  45e8b7:	73 05                	jae    0x45e8be
  45e8b9:	e8 3d fd 19 00       	call   0x5fe5fb
  45e8be:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  45e8c2:	3b fe                	cmp    edi,esi
  45e8c4:	74 20                	je     0x45e8e6
  45e8c6:	8a 47 ff             	mov    al,BYTE PTR [edi-0x1]
  45e8c9:	84 c0                	test   al,al
  45e8cb:	74 19                	je     0x45e8e6
  45e8cd:	3c ff                	cmp    al,0xff
  45e8cf:	74 15                	je     0x45e8e6
  45e8d1:	3b de                	cmp    ebx,esi
  45e8d3:	75 3a                	jne    0x45e90f
  45e8d5:	fe c8                	dec    al
  45e8d7:	56                   	push   esi
  45e8d8:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  45e8dc:	88 47 ff             	mov    BYTE PTR [edi-0x1],al
  45e8df:	e8 bc 57 fa ff       	call   0x4040a0
  45e8e4:	eb 5a                	jmp    0x45e940
  45e8e6:	3b de                	cmp    ebx,esi
  45e8e8:	75 0d                	jne    0x45e8f7
  45e8ea:	6a 01                	push   0x1
  45e8ec:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  45e8f0:	e8 ab 57 fa ff       	call   0x4040a0
  45e8f5:	eb 49                	jmp    0x45e940
  45e8f7:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  45e8fb:	83 f8 1f             	cmp    eax,0x1f
  45e8fe:	77 04                	ja     0x45e904
  45e900:	3b c3                	cmp    eax,ebx
  45e902:	73 19                	jae    0x45e91d
  45e904:	6a 01                	push   0x1
  45e906:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  45e90a:	e8 91 57 fa ff       	call   0x4040a0
  45e90f:	53                   	push   ebx
  45e910:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  45e914:	e8 47 31 fa ff       	call   0x401a60
  45e919:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  45e91d:	8b cb                	mov    ecx,ebx
  45e91f:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  45e924:	8b c1                	mov    eax,ecx
  45e926:	c1 e9 02             	shr    ecx,0x2
  45e929:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  45e92b:	8b c8                	mov    ecx,eax
  45e92d:	83 e1 03             	and    ecx,0x3
  45e930:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  45e932:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  45e936:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  45e93a:	33 f6                	xor    esi,esi
  45e93c:	c6 04 19 00          	mov    BYTE PTR [ecx+ebx*1],0x0
  45e940:	8d 54 24 18          	lea    edx,[esp+0x18]
  45e944:	c7 84 24 84 01 00 00 	mov    DWORD PTR [esp+0x184],0x5
  45e94b:	05 00 00 00 
  45e94f:	52                   	push   edx
  45e950:	68 b6 00 00 00       	push   0xb6
  45e955:	68 38 d6 68 00       	push   0x68d638
  45e95a:	68 2c d6 68 00       	push   0x68d62c
  45e95f:	e8 8c 1e 14 00       	call   0x5a07f0
  45e964:	ff d0                	call   eax
  45e966:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  45e96a:	83 c4 10             	add    esp,0x10
  45e96d:	3b c6                	cmp    eax,esi
  45e96f:	c7 84 24 84 01 00 00 	mov    DWORD PTR [esp+0x184],0xffffffff
  45e976:	ff ff ff ff 
  45e97a:	74 1d                	je     0x45e999
  45e97c:	8d 48 ff             	lea    ecx,[eax-0x1]
  45e97f:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  45e982:	84 c0                	test   al,al
  45e984:	74 0a                	je     0x45e990
  45e986:	3c ff                	cmp    al,0xff
  45e988:	74 06                	je     0x45e990
  45e98a:	fe c8                	dec    al
  45e98c:	88 01                	mov    BYTE PTR [ecx],al
  45e98e:	eb 09                	jmp    0x45e999
  45e990:	51                   	push   ecx
  45e991:	e8 5a fc 19 00       	call   0x5fe5f0
  45e996:	83 c4 04             	add    esp,0x4
  45e999:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  45e99d:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  45e9a1:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  45e9a5:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  45e9a9:	56                   	push   esi
  45e9aa:	6a 01                	push   0x1
  45e9ac:	56                   	push   esi
  45e9ad:	8b 88 f8 00 00 00    	mov    ecx,DWORD PTR [eax+0xf8]
  45e9b3:	e8 b8 c0 0a 00       	call   0x50aa70
  45e9b8:	8b 54 24 70          	mov    edx,DWORD PTR [esp+0x70]
  45e9bc:	50                   	push   eax
  45e9bd:	8d 8c 24 fc 00 00 00 	lea    ecx,[esp+0xfc]
  45e9c4:	6a 04                	push   0x4
  45e9c6:	51                   	push   ecx
  45e9c7:	52                   	push   edx
  45e9c8:	e8 c3 84 15 00       	call   0x5b6e90
  45e9cd:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
  45e9d1:	83 c4 1c             	add    esp,0x1c
  45e9d4:	43                   	inc    ebx
  45e9d5:	81 c5 5c 01 00 00    	add    ebp,0x15c
  45e9db:	83 fb 0f             	cmp    ebx,0xf
  45e9de:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  45e9e2:	0f 8c c5 fa ff ff    	jl     0x45e4ad
  45e9e8:	5f                   	pop    edi
  45e9e9:	5e                   	pop    esi
  45e9ea:	5b                   	pop    ebx
  45e9eb:	8b 8c 24 70 01 00 00 	mov    ecx,DWORD PTR [esp+0x170]
  45e9f2:	5d                   	pop    ebp
  45e9f3:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  45e9fa:	81 c4 78 01 00 00    	add    esp,0x178
  45ea00:	c3                   	ret
  45ea01:	90                   	nop
  45ea02:	90                   	nop
  45ea03:	90                   	nop
  45ea04:	90                   	nop
  45ea05:	90                   	nop
  45ea06:	90                   	nop
  45ea07:	90                   	nop
  45ea08:	90                   	nop
  45ea09:	90                   	nop
  45ea0a:	90                   	nop
  45ea0b:	90                   	nop
  45ea0c:	90                   	nop
  45ea0d:	90                   	nop
  45ea0e:	90                   	nop
  45ea0f:	90                   	nop
